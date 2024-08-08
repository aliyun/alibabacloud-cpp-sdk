// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_APIG20240327_H_
#define ALIBABACLOUD_APIG20240327_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_APIG20240327 {
class Attachment : public Darabonba::Model {
public:
  shared_ptr<vector<string>> attachResourceIds{};
  shared_ptr<string> attachResourceType{};
  shared_ptr<string> environmentId{};
  shared_ptr<string> gatewayId{};
  shared_ptr<string> policyAttachmentId{};

  Attachment() {}

  explicit Attachment(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attachResourceIds) {
      res["attachResourceIds"] = boost::any(*attachResourceIds);
    }
    if (attachResourceType) {
      res["attachResourceType"] = boost::any(*attachResourceType);
    }
    if (environmentId) {
      res["environmentId"] = boost::any(*environmentId);
    }
    if (gatewayId) {
      res["gatewayId"] = boost::any(*gatewayId);
    }
    if (policyAttachmentId) {
      res["policyAttachmentId"] = boost::any(*policyAttachmentId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("attachResourceIds") != m.end() && !m["attachResourceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["attachResourceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["attachResourceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      attachResourceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("attachResourceType") != m.end() && !m["attachResourceType"].empty()) {
      attachResourceType = make_shared<string>(boost::any_cast<string>(m["attachResourceType"]));
    }
    if (m.find("environmentId") != m.end() && !m["environmentId"].empty()) {
      environmentId = make_shared<string>(boost::any_cast<string>(m["environmentId"]));
    }
    if (m.find("gatewayId") != m.end() && !m["gatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["gatewayId"]));
    }
    if (m.find("policyAttachmentId") != m.end() && !m["policyAttachmentId"].empty()) {
      policyAttachmentId = make_shared<string>(boost::any_cast<string>(m["policyAttachmentId"]));
    }
  }


  virtual ~Attachment() = default;
};
class CheckServiceLinkedRoleResult : public Darabonba::Model {
public:
  shared_ptr<bool> existed{};

  CheckServiceLinkedRoleResult() {}

  explicit CheckServiceLinkedRoleResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (existed) {
      res["existed"] = boost::any(*existed);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("existed") != m.end() && !m["existed"].empty()) {
      existed = make_shared<bool>(boost::any_cast<bool>(m["existed"]));
    }
  }


  virtual ~CheckServiceLinkedRoleResult() = default;
};
class DashboardFilter : public Darabonba::Model {
public:
  shared_ptr<string> routeName{};

  DashboardFilter() {}

  explicit DashboardFilter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (routeName) {
      res["routeName"] = boost::any(*routeName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("routeName") != m.end() && !m["routeName"].empty()) {
      routeName = make_shared<string>(boost::any_cast<string>(m["routeName"]));
    }
  }


  virtual ~DashboardFilter() = default;
};
class DomainInfo : public Darabonba::Model {
public:
  shared_ptr<string> certIdentifier{};
  shared_ptr<string> createFrom{};
  shared_ptr<long> createTimestamp{};
  shared_ptr<string> domainId{};
  shared_ptr<bool> forceHttps{};
  shared_ptr<string> name{};
  shared_ptr<string> protocol{};
  shared_ptr<string> status{};
  shared_ptr<long> updateTimestamp{};

  DomainInfo() {}

  explicit DomainInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certIdentifier) {
      res["certIdentifier"] = boost::any(*certIdentifier);
    }
    if (createFrom) {
      res["createFrom"] = boost::any(*createFrom);
    }
    if (createTimestamp) {
      res["createTimestamp"] = boost::any(*createTimestamp);
    }
    if (domainId) {
      res["domainId"] = boost::any(*domainId);
    }
    if (forceHttps) {
      res["forceHttps"] = boost::any(*forceHttps);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (protocol) {
      res["protocol"] = boost::any(*protocol);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (updateTimestamp) {
      res["updateTimestamp"] = boost::any(*updateTimestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("certIdentifier") != m.end() && !m["certIdentifier"].empty()) {
      certIdentifier = make_shared<string>(boost::any_cast<string>(m["certIdentifier"]));
    }
    if (m.find("createFrom") != m.end() && !m["createFrom"].empty()) {
      createFrom = make_shared<string>(boost::any_cast<string>(m["createFrom"]));
    }
    if (m.find("createTimestamp") != m.end() && !m["createTimestamp"].empty()) {
      createTimestamp = make_shared<long>(boost::any_cast<long>(m["createTimestamp"]));
    }
    if (m.find("domainId") != m.end() && !m["domainId"].empty()) {
      domainId = make_shared<string>(boost::any_cast<string>(m["domainId"]));
    }
    if (m.find("forceHttps") != m.end() && !m["forceHttps"].empty()) {
      forceHttps = make_shared<bool>(boost::any_cast<bool>(m["forceHttps"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("protocol") != m.end() && !m["protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["protocol"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("updateTimestamp") != m.end() && !m["updateTimestamp"].empty()) {
      updateTimestamp = make_shared<long>(boost::any_cast<long>(m["updateTimestamp"]));
    }
  }


  virtual ~DomainInfo() = default;
};
class GatewayInfo : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> name{};

  GatewayInfo() {}

  explicit GatewayInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["gatewayId"] = boost::any(*gatewayId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("gatewayId") != m.end() && !m["gatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["gatewayId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~GatewayInfo() = default;
};
class SubDomainInfo : public Darabonba::Model {
public:
  shared_ptr<string> domainId{};
  shared_ptr<string> name{};
  shared_ptr<string> networkType{};
  shared_ptr<string> protocol{};

  SubDomainInfo() {}

  explicit SubDomainInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainId) {
      res["domainId"] = boost::any(*domainId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (networkType) {
      res["networkType"] = boost::any(*networkType);
    }
    if (protocol) {
      res["protocol"] = boost::any(*protocol);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("domainId") != m.end() && !m["domainId"].empty()) {
      domainId = make_shared<string>(boost::any_cast<string>(m["domainId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("networkType") != m.end() && !m["networkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["networkType"]));
    }
    if (m.find("protocol") != m.end() && !m["protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["protocol"]));
    }
  }


  virtual ~SubDomainInfo() = default;
};
class EnvironmentInfo : public Darabonba::Model {
public:
  shared_ptr<string> alias{};
  shared_ptr<long> createTimestamp{};
  shared_ptr<bool> default_{};
  shared_ptr<string> description{};
  shared_ptr<string> environmentId{};
  shared_ptr<GatewayInfo> gatewayInfo{};
  shared_ptr<string> name{};
  shared_ptr<vector<SubDomainInfo>> subDomainInfos{};
  shared_ptr<long> updateTimestamp{};

  EnvironmentInfo() {}

  explicit EnvironmentInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alias) {
      res["alias"] = boost::any(*alias);
    }
    if (createTimestamp) {
      res["createTimestamp"] = boost::any(*createTimestamp);
    }
    if (default_) {
      res["default"] = boost::any(*default_);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (environmentId) {
      res["environmentId"] = boost::any(*environmentId);
    }
    if (gatewayInfo) {
      res["gatewayInfo"] = gatewayInfo ? boost::any(gatewayInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (subDomainInfos) {
      vector<boost::any> temp1;
      for(auto item1:*subDomainInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["subDomainInfos"] = boost::any(temp1);
    }
    if (updateTimestamp) {
      res["updateTimestamp"] = boost::any(*updateTimestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("alias") != m.end() && !m["alias"].empty()) {
      alias = make_shared<string>(boost::any_cast<string>(m["alias"]));
    }
    if (m.find("createTimestamp") != m.end() && !m["createTimestamp"].empty()) {
      createTimestamp = make_shared<long>(boost::any_cast<long>(m["createTimestamp"]));
    }
    if (m.find("default") != m.end() && !m["default"].empty()) {
      default_ = make_shared<bool>(boost::any_cast<bool>(m["default"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("environmentId") != m.end() && !m["environmentId"].empty()) {
      environmentId = make_shared<string>(boost::any_cast<string>(m["environmentId"]));
    }
    if (m.find("gatewayInfo") != m.end() && !m["gatewayInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["gatewayInfo"].type()) {
        GatewayInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["gatewayInfo"]));
        gatewayInfo = make_shared<GatewayInfo>(model1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("subDomainInfos") != m.end() && !m["subDomainInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["subDomainInfos"].type()) {
        vector<SubDomainInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["subDomainInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SubDomainInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subDomainInfos = make_shared<vector<SubDomainInfo>>(expect1);
      }
    }
    if (m.find("updateTimestamp") != m.end() && !m["updateTimestamp"].empty()) {
      updateTimestamp = make_shared<long>(boost::any_cast<long>(m["updateTimestamp"]));
    }
  }


  virtual ~EnvironmentInfo() = default;
};
class GatewayLogConfigSlsConfig : public Darabonba::Model {
public:
  shared_ptr<bool> enable{};

  GatewayLogConfigSlsConfig() {}

  explicit GatewayLogConfigSlsConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enable) {
      res["enable"] = boost::any(*enable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enable") != m.end() && !m["enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["enable"]));
    }
  }


  virtual ~GatewayLogConfigSlsConfig() = default;
};
class GatewayLogConfig : public Darabonba::Model {
public:
  shared_ptr<GatewayLogConfigSlsConfig> slsConfig{};

  GatewayLogConfig() {}

  explicit GatewayLogConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (slsConfig) {
      res["slsConfig"] = slsConfig ? boost::any(slsConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("slsConfig") != m.end() && !m["slsConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["slsConfig"].type()) {
        GatewayLogConfigSlsConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["slsConfig"]));
        slsConfig = make_shared<GatewayLogConfigSlsConfig>(model1);
      }
    }
  }


  virtual ~GatewayLogConfig() = default;
};
class GatewayRouteBackendServices : public Darabonba::Model {
public:
  shared_ptr<string> gatewayServiceId{};
  shared_ptr<string> name{};
  shared_ptr<long> port{};
  shared_ptr<string> protocol{};
  shared_ptr<string> version{};
  shared_ptr<double> weight{};

  GatewayRouteBackendServices() {}

  explicit GatewayRouteBackendServices(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayServiceId) {
      res["gatewayServiceId"] = boost::any(*gatewayServiceId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (port) {
      res["port"] = boost::any(*port);
    }
    if (protocol) {
      res["protocol"] = boost::any(*protocol);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    if (weight) {
      res["weight"] = boost::any(*weight);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("gatewayServiceId") != m.end() && !m["gatewayServiceId"].empty()) {
      gatewayServiceId = make_shared<string>(boost::any_cast<string>(m["gatewayServiceId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("port") != m.end() && !m["port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["port"]));
    }
    if (m.find("protocol") != m.end() && !m["protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["protocol"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
    if (m.find("weight") != m.end() && !m["weight"].empty()) {
      weight = make_shared<double>(boost::any_cast<double>(m["weight"]));
    }
  }


  virtual ~GatewayRouteBackendServices() = default;
};
class GatewayRouteBackend : public Darabonba::Model {
public:
  shared_ptr<vector<GatewayRouteBackendServices>> services{};
  shared_ptr<string> type{};

  GatewayRouteBackend() {}

  explicit GatewayRouteBackend(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (services) {
      vector<boost::any> temp1;
      for(auto item1:*services){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["services"] = boost::any(temp1);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("services") != m.end() && !m["services"].empty()) {
      if (typeid(vector<boost::any>) == m["services"].type()) {
        vector<GatewayRouteBackendServices> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["services"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GatewayRouteBackendServices model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        services = make_shared<vector<GatewayRouteBackendServices>>(expect1);
      }
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~GatewayRouteBackend() = default;
};
class GatewayRouteBackendConfigServices : public Darabonba::Model {
public:
  shared_ptr<string> gatewayServiceId{};
  shared_ptr<long> port{};
  shared_ptr<string> protocol{};
  shared_ptr<string> sourceType{};
  shared_ptr<double> weight{};

  GatewayRouteBackendConfigServices() {}

  explicit GatewayRouteBackendConfigServices(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayServiceId) {
      res["gatewayServiceId"] = boost::any(*gatewayServiceId);
    }
    if (port) {
      res["port"] = boost::any(*port);
    }
    if (protocol) {
      res["protocol"] = boost::any(*protocol);
    }
    if (sourceType) {
      res["sourceType"] = boost::any(*sourceType);
    }
    if (weight) {
      res["weight"] = boost::any(*weight);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("gatewayServiceId") != m.end() && !m["gatewayServiceId"].empty()) {
      gatewayServiceId = make_shared<string>(boost::any_cast<string>(m["gatewayServiceId"]));
    }
    if (m.find("port") != m.end() && !m["port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["port"]));
    }
    if (m.find("protocol") != m.end() && !m["protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["protocol"]));
    }
    if (m.find("sourceType") != m.end() && !m["sourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["sourceType"]));
    }
    if (m.find("weight") != m.end() && !m["weight"].empty()) {
      weight = make_shared<double>(boost::any_cast<double>(m["weight"]));
    }
  }


  virtual ~GatewayRouteBackendConfigServices() = default;
};
class GatewayRouteBackendConfig : public Darabonba::Model {
public:
  shared_ptr<vector<GatewayRouteBackendConfigServices>> services{};
  shared_ptr<string> type{};

  GatewayRouteBackendConfig() {}

  explicit GatewayRouteBackendConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (services) {
      vector<boost::any> temp1;
      for(auto item1:*services){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["services"] = boost::any(temp1);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("services") != m.end() && !m["services"].empty()) {
      if (typeid(vector<boost::any>) == m["services"].type()) {
        vector<GatewayRouteBackendConfigServices> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["services"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GatewayRouteBackendConfigServices model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        services = make_shared<vector<GatewayRouteBackendConfigServices>>(expect1);
      }
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~GatewayRouteBackendConfig() = default;
};
class GatewayRouteDomainConfig : public Darabonba::Model {
public:
  shared_ptr<vector<string>> domainIds{};

  GatewayRouteDomainConfig() {}

  explicit GatewayRouteDomainConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainIds) {
      res["domainIds"] = boost::any(*domainIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("domainIds") != m.end() && !m["domainIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["domainIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["domainIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      domainIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GatewayRouteDomainConfig() = default;
};
class GatewayRouteDomainInfoDomains : public Darabonba::Model {
public:
  shared_ptr<string> domainId{};
  shared_ptr<string> name{};
  shared_ptr<string> protocol{};

  GatewayRouteDomainInfoDomains() {}

  explicit GatewayRouteDomainInfoDomains(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainId) {
      res["domainId"] = boost::any(*domainId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (protocol) {
      res["protocol"] = boost::any(*protocol);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("domainId") != m.end() && !m["domainId"].empty()) {
      domainId = make_shared<string>(boost::any_cast<string>(m["domainId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("protocol") != m.end() && !m["protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["protocol"]));
    }
  }


  virtual ~GatewayRouteDomainInfoDomains() = default;
};
class GatewayRouteDomainInfo : public Darabonba::Model {
public:
  shared_ptr<vector<GatewayRouteDomainInfoDomains>> domains{};

  GatewayRouteDomainInfo() {}

  explicit GatewayRouteDomainInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domains) {
      vector<boost::any> temp1;
      for(auto item1:*domains){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["domains"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("domains") != m.end() && !m["domains"].empty()) {
      if (typeid(vector<boost::any>) == m["domains"].type()) {
        vector<GatewayRouteDomainInfoDomains> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["domains"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GatewayRouteDomainInfoDomains model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        domains = make_shared<vector<GatewayRouteDomainInfoDomains>>(expect1);
      }
    }
  }


  virtual ~GatewayRouteDomainInfo() = default;
};
class GatewayServicePorts : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<long> port{};
  shared_ptr<string> protocol{};

  GatewayServicePorts() {}

  explicit GatewayServicePorts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (port) {
      res["port"] = boost::any(*port);
    }
    if (protocol) {
      res["protocol"] = boost::any(*protocol);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("port") != m.end() && !m["port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["port"]));
    }
    if (m.find("protocol") != m.end() && !m["protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["protocol"]));
    }
  }


  virtual ~GatewayServicePorts() = default;
};
class ServiceHealthCheck : public Darabonba::Model {
public:
  shared_ptr<bool> enable{};
  shared_ptr<long> healthyThreshold{};
  shared_ptr<string> httpHost{};
  shared_ptr<string> httpPath{};
  shared_ptr<long> interval{};
  shared_ptr<string> protocol{};
  shared_ptr<long> timeout{};
  shared_ptr<long> unhealthyThreshold{};

  ServiceHealthCheck() {}

  explicit ServiceHealthCheck(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enable) {
      res["enable"] = boost::any(*enable);
    }
    if (healthyThreshold) {
      res["healthyThreshold"] = boost::any(*healthyThreshold);
    }
    if (httpHost) {
      res["httpHost"] = boost::any(*httpHost);
    }
    if (httpPath) {
      res["httpPath"] = boost::any(*httpPath);
    }
    if (interval) {
      res["interval"] = boost::any(*interval);
    }
    if (protocol) {
      res["protocol"] = boost::any(*protocol);
    }
    if (timeout) {
      res["timeout"] = boost::any(*timeout);
    }
    if (unhealthyThreshold) {
      res["unhealthyThreshold"] = boost::any(*unhealthyThreshold);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enable") != m.end() && !m["enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["enable"]));
    }
    if (m.find("healthyThreshold") != m.end() && !m["healthyThreshold"].empty()) {
      healthyThreshold = make_shared<long>(boost::any_cast<long>(m["healthyThreshold"]));
    }
    if (m.find("httpHost") != m.end() && !m["httpHost"].empty()) {
      httpHost = make_shared<string>(boost::any_cast<string>(m["httpHost"]));
    }
    if (m.find("httpPath") != m.end() && !m["httpPath"].empty()) {
      httpPath = make_shared<string>(boost::any_cast<string>(m["httpPath"]));
    }
    if (m.find("interval") != m.end() && !m["interval"].empty()) {
      interval = make_shared<long>(boost::any_cast<long>(m["interval"]));
    }
    if (m.find("protocol") != m.end() && !m["protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["protocol"]));
    }
    if (m.find("timeout") != m.end() && !m["timeout"].empty()) {
      timeout = make_shared<long>(boost::any_cast<long>(m["timeout"]));
    }
    if (m.find("unhealthyThreshold") != m.end() && !m["unhealthyThreshold"].empty()) {
      unhealthyThreshold = make_shared<long>(boost::any_cast<long>(m["unhealthyThreshold"]));
    }
  }


  virtual ~ServiceHealthCheck() = default;
};
class GatewayService : public Darabonba::Model {
public:
  shared_ptr<vector<string>> addresses{};
  shared_ptr<long> createTimestamp{};
  shared_ptr<string> gatewayServiceId{};
  shared_ptr<ServiceHealthCheck> healthCheck{};
  shared_ptr<string> healthStatus{};
  shared_ptr<string> name{};
  shared_ptr<string> namespace_{};
  shared_ptr<vector<GatewayServicePorts>> ports{};
  shared_ptr<string> qualifier{};
  shared_ptr<string> sourceType{};
  shared_ptr<vector<string>> unhealthyEndpoints{};
  shared_ptr<long> updateTimestamp{};

  GatewayService() {}

  explicit GatewayService(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addresses) {
      res["addresses"] = boost::any(*addresses);
    }
    if (createTimestamp) {
      res["createTimestamp"] = boost::any(*createTimestamp);
    }
    if (gatewayServiceId) {
      res["gatewayServiceId"] = boost::any(*gatewayServiceId);
    }
    if (healthCheck) {
      res["healthCheck"] = healthCheck ? boost::any(healthCheck->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (healthStatus) {
      res["healthStatus"] = boost::any(*healthStatus);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (namespace_) {
      res["namespace"] = boost::any(*namespace_);
    }
    if (ports) {
      vector<boost::any> temp1;
      for(auto item1:*ports){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ports"] = boost::any(temp1);
    }
    if (qualifier) {
      res["qualifier"] = boost::any(*qualifier);
    }
    if (sourceType) {
      res["sourceType"] = boost::any(*sourceType);
    }
    if (unhealthyEndpoints) {
      res["unhealthyEndpoints"] = boost::any(*unhealthyEndpoints);
    }
    if (updateTimestamp) {
      res["updateTimestamp"] = boost::any(*updateTimestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("addresses") != m.end() && !m["addresses"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["addresses"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["addresses"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      addresses = make_shared<vector<string>>(toVec1);
    }
    if (m.find("createTimestamp") != m.end() && !m["createTimestamp"].empty()) {
      createTimestamp = make_shared<long>(boost::any_cast<long>(m["createTimestamp"]));
    }
    if (m.find("gatewayServiceId") != m.end() && !m["gatewayServiceId"].empty()) {
      gatewayServiceId = make_shared<string>(boost::any_cast<string>(m["gatewayServiceId"]));
    }
    if (m.find("healthCheck") != m.end() && !m["healthCheck"].empty()) {
      if (typeid(map<string, boost::any>) == m["healthCheck"].type()) {
        ServiceHealthCheck model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["healthCheck"]));
        healthCheck = make_shared<ServiceHealthCheck>(model1);
      }
    }
    if (m.find("healthStatus") != m.end() && !m["healthStatus"].empty()) {
      healthStatus = make_shared<string>(boost::any_cast<string>(m["healthStatus"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("namespace") != m.end() && !m["namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["namespace"]));
    }
    if (m.find("ports") != m.end() && !m["ports"].empty()) {
      if (typeid(vector<boost::any>) == m["ports"].type()) {
        vector<GatewayServicePorts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ports"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GatewayServicePorts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ports = make_shared<vector<GatewayServicePorts>>(expect1);
      }
    }
    if (m.find("qualifier") != m.end() && !m["qualifier"].empty()) {
      qualifier = make_shared<string>(boost::any_cast<string>(m["qualifier"]));
    }
    if (m.find("sourceType") != m.end() && !m["sourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["sourceType"]));
    }
    if (m.find("unhealthyEndpoints") != m.end() && !m["unhealthyEndpoints"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["unhealthyEndpoints"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["unhealthyEndpoints"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      unhealthyEndpoints = make_shared<vector<string>>(toVec1);
    }
    if (m.find("updateTimestamp") != m.end() && !m["updateTimestamp"].empty()) {
      updateTimestamp = make_shared<long>(boost::any_cast<long>(m["updateTimestamp"]));
    }
  }


  virtual ~GatewayService() = default;
};
class GatewayServiceSourceK8sServiceSourceInfoIngressConfig : public Darabonba::Model {
public:
  shared_ptr<bool> enable{};
  shared_ptr<string> ingressClass{};
  shared_ptr<bool> overrideIngressIp{};
  shared_ptr<string> watchNamespace{};

  GatewayServiceSourceK8sServiceSourceInfoIngressConfig() {}

  explicit GatewayServiceSourceK8sServiceSourceInfoIngressConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enable) {
      res["enable"] = boost::any(*enable);
    }
    if (ingressClass) {
      res["ingressClass"] = boost::any(*ingressClass);
    }
    if (overrideIngressIp) {
      res["overrideIngressIp"] = boost::any(*overrideIngressIp);
    }
    if (watchNamespace) {
      res["watchNamespace"] = boost::any(*watchNamespace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enable") != m.end() && !m["enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["enable"]));
    }
    if (m.find("ingressClass") != m.end() && !m["ingressClass"].empty()) {
      ingressClass = make_shared<string>(boost::any_cast<string>(m["ingressClass"]));
    }
    if (m.find("overrideIngressIp") != m.end() && !m["overrideIngressIp"].empty()) {
      overrideIngressIp = make_shared<bool>(boost::any_cast<bool>(m["overrideIngressIp"]));
    }
    if (m.find("watchNamespace") != m.end() && !m["watchNamespace"].empty()) {
      watchNamespace = make_shared<string>(boost::any_cast<string>(m["watchNamespace"]));
    }
  }


  virtual ~GatewayServiceSourceK8sServiceSourceInfoIngressConfig() = default;
};
class GatewayServiceSourceK8sServiceSourceInfo : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<GatewayServiceSourceK8sServiceSourceInfoIngressConfig> ingressConfig{};

  GatewayServiceSourceK8sServiceSourceInfo() {}

  explicit GatewayServiceSourceK8sServiceSourceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["clusterId"] = boost::any(*clusterId);
    }
    if (ingressConfig) {
      res["ingressConfig"] = ingressConfig ? boost::any(ingressConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("clusterId") != m.end() && !m["clusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["clusterId"]));
    }
    if (m.find("ingressConfig") != m.end() && !m["ingressConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["ingressConfig"].type()) {
        GatewayServiceSourceK8sServiceSourceInfoIngressConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ingressConfig"]));
        ingressConfig = make_shared<GatewayServiceSourceK8sServiceSourceInfoIngressConfig>(model1);
      }
    }
  }


  virtual ~GatewayServiceSourceK8sServiceSourceInfo() = default;
};
class GatewayServiceSourceNacosServiceSourceInfo : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> instanceId{};

  GatewayServiceSourceNacosServiceSourceInfo() {}

  explicit GatewayServiceSourceNacosServiceSourceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["address"] = boost::any(*address);
    }
    if (clusterId) {
      res["clusterId"] = boost::any(*clusterId);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("address") != m.end() && !m["address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["address"]));
    }
    if (m.find("clusterId") != m.end() && !m["clusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["clusterId"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
  }


  virtual ~GatewayServiceSourceNacosServiceSourceInfo() = default;
};
class GatewayServiceSource : public Darabonba::Model {
public:
  shared_ptr<bool> bound{};
  shared_ptr<long> createTimestamp{};
  shared_ptr<GatewayServiceSourceK8sServiceSourceInfo> k8sServiceSourceInfo{};
  shared_ptr<GatewayServiceSourceNacosServiceSourceInfo> nacosServiceSourceInfo{};
  shared_ptr<string> name{};
  shared_ptr<string> serviceSourceId{};
  shared_ptr<string> type{};
  shared_ptr<long> updateTimestamp{};

  GatewayServiceSource() {}

  explicit GatewayServiceSource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bound) {
      res["bound"] = boost::any(*bound);
    }
    if (createTimestamp) {
      res["createTimestamp"] = boost::any(*createTimestamp);
    }
    if (k8sServiceSourceInfo) {
      res["k8sServiceSourceInfo"] = k8sServiceSourceInfo ? boost::any(k8sServiceSourceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (nacosServiceSourceInfo) {
      res["nacosServiceSourceInfo"] = nacosServiceSourceInfo ? boost::any(nacosServiceSourceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (serviceSourceId) {
      res["serviceSourceId"] = boost::any(*serviceSourceId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (updateTimestamp) {
      res["updateTimestamp"] = boost::any(*updateTimestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("bound") != m.end() && !m["bound"].empty()) {
      bound = make_shared<bool>(boost::any_cast<bool>(m["bound"]));
    }
    if (m.find("createTimestamp") != m.end() && !m["createTimestamp"].empty()) {
      createTimestamp = make_shared<long>(boost::any_cast<long>(m["createTimestamp"]));
    }
    if (m.find("k8sServiceSourceInfo") != m.end() && !m["k8sServiceSourceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["k8sServiceSourceInfo"].type()) {
        GatewayServiceSourceK8sServiceSourceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["k8sServiceSourceInfo"]));
        k8sServiceSourceInfo = make_shared<GatewayServiceSourceK8sServiceSourceInfo>(model1);
      }
    }
    if (m.find("nacosServiceSourceInfo") != m.end() && !m["nacosServiceSourceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["nacosServiceSourceInfo"].type()) {
        GatewayServiceSourceNacosServiceSourceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["nacosServiceSourceInfo"]));
        nacosServiceSourceInfo = make_shared<GatewayServiceSourceNacosServiceSourceInfo>(model1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("serviceSourceId") != m.end() && !m["serviceSourceId"].empty()) {
      serviceSourceId = make_shared<string>(boost::any_cast<string>(m["serviceSourceId"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("updateTimestamp") != m.end() && !m["updateTimestamp"].empty()) {
      updateTimestamp = make_shared<long>(boost::any_cast<long>(m["updateTimestamp"]));
    }
  }


  virtual ~GatewayServiceSource() = default;
};
class HttpApiBackendMatchCondition : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> operator_{};
  shared_ptr<string> type{};
  shared_ptr<string> value{};

  HttpApiBackendMatchCondition() {}

  explicit HttpApiBackendMatchCondition(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (operator_) {
      res["operator"] = boost::any(*operator_);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("operator") != m.end() && !m["operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["operator"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~HttpApiBackendMatchCondition() = default;
};
class HttpApiBackendMatchConditions : public Darabonba::Model {
public:
  shared_ptr<vector<HttpApiBackendMatchCondition>> conditions{};
  shared_ptr<bool> default_{};

  HttpApiBackendMatchConditions() {}

  explicit HttpApiBackendMatchConditions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conditions) {
      vector<boost::any> temp1;
      for(auto item1:*conditions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["conditions"] = boost::any(temp1);
    }
    if (default_) {
      res["default"] = boost::any(*default_);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("conditions") != m.end() && !m["conditions"].empty()) {
      if (typeid(vector<boost::any>) == m["conditions"].type()) {
        vector<HttpApiBackendMatchCondition> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["conditions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HttpApiBackendMatchCondition model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        conditions = make_shared<vector<HttpApiBackendMatchCondition>>(expect1);
      }
    }
    if (m.find("default") != m.end() && !m["default"].empty()) {
      default_ = make_shared<bool>(boost::any_cast<bool>(m["default"]));
    }
  }


  virtual ~HttpApiBackendMatchConditions() = default;
};
class HttpApiApiInfoEnvironmentsCloudProductConfigContainerServiceConfigs : public Darabonba::Model {
public:
  shared_ptr<string> gatewayServiceId{};
  shared_ptr<HttpApiBackendMatchConditions> match{};
  shared_ptr<string> name{};
  shared_ptr<string> namespace_{};
  shared_ptr<long> port{};
  shared_ptr<string> protocol{};
  shared_ptr<long> weight{};

  HttpApiApiInfoEnvironmentsCloudProductConfigContainerServiceConfigs() {}

  explicit HttpApiApiInfoEnvironmentsCloudProductConfigContainerServiceConfigs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayServiceId) {
      res["gatewayServiceId"] = boost::any(*gatewayServiceId);
    }
    if (match) {
      res["match"] = match ? boost::any(match->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (namespace_) {
      res["namespace"] = boost::any(*namespace_);
    }
    if (port) {
      res["port"] = boost::any(*port);
    }
    if (protocol) {
      res["protocol"] = boost::any(*protocol);
    }
    if (weight) {
      res["weight"] = boost::any(*weight);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("gatewayServiceId") != m.end() && !m["gatewayServiceId"].empty()) {
      gatewayServiceId = make_shared<string>(boost::any_cast<string>(m["gatewayServiceId"]));
    }
    if (m.find("match") != m.end() && !m["match"].empty()) {
      if (typeid(map<string, boost::any>) == m["match"].type()) {
        HttpApiBackendMatchConditions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["match"]));
        match = make_shared<HttpApiBackendMatchConditions>(model1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("namespace") != m.end() && !m["namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["namespace"]));
    }
    if (m.find("port") != m.end() && !m["port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["port"]));
    }
    if (m.find("protocol") != m.end() && !m["protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["protocol"]));
    }
    if (m.find("weight") != m.end() && !m["weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["weight"]));
    }
  }


  virtual ~HttpApiApiInfoEnvironmentsCloudProductConfigContainerServiceConfigs() = default;
};
class HttpApiApiInfoEnvironmentsCloudProductConfigFunctionConfigs : public Darabonba::Model {
public:
  shared_ptr<string> gatewayServiceId{};
  shared_ptr<HttpApiBackendMatchConditions> match{};
  shared_ptr<string> name{};
  shared_ptr<string> qualifier{};
  shared_ptr<long> weight{};

  HttpApiApiInfoEnvironmentsCloudProductConfigFunctionConfigs() {}

  explicit HttpApiApiInfoEnvironmentsCloudProductConfigFunctionConfigs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayServiceId) {
      res["gatewayServiceId"] = boost::any(*gatewayServiceId);
    }
    if (match) {
      res["match"] = match ? boost::any(match->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (qualifier) {
      res["qualifier"] = boost::any(*qualifier);
    }
    if (weight) {
      res["weight"] = boost::any(*weight);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("gatewayServiceId") != m.end() && !m["gatewayServiceId"].empty()) {
      gatewayServiceId = make_shared<string>(boost::any_cast<string>(m["gatewayServiceId"]));
    }
    if (m.find("match") != m.end() && !m["match"].empty()) {
      if (typeid(map<string, boost::any>) == m["match"].type()) {
        HttpApiBackendMatchConditions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["match"]));
        match = make_shared<HttpApiBackendMatchConditions>(model1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("qualifier") != m.end() && !m["qualifier"].empty()) {
      qualifier = make_shared<string>(boost::any_cast<string>(m["qualifier"]));
    }
    if (m.find("weight") != m.end() && !m["weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["weight"]));
    }
  }


  virtual ~HttpApiApiInfoEnvironmentsCloudProductConfigFunctionConfigs() = default;
};
class HttpApiApiInfoEnvironmentsCloudProductConfigMseNacosConfigs : public Darabonba::Model {
public:
  shared_ptr<string> gatewayServiceId{};
  shared_ptr<string> groupName{};
  shared_ptr<HttpApiBackendMatchConditions> match{};
  shared_ptr<string> name{};
  shared_ptr<string> namespace_{};
  shared_ptr<long> weight{};

  HttpApiApiInfoEnvironmentsCloudProductConfigMseNacosConfigs() {}

  explicit HttpApiApiInfoEnvironmentsCloudProductConfigMseNacosConfigs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayServiceId) {
      res["gatewayServiceId"] = boost::any(*gatewayServiceId);
    }
    if (groupName) {
      res["groupName"] = boost::any(*groupName);
    }
    if (match) {
      res["match"] = match ? boost::any(match->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (namespace_) {
      res["namespace"] = boost::any(*namespace_);
    }
    if (weight) {
      res["weight"] = boost::any(*weight);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("gatewayServiceId") != m.end() && !m["gatewayServiceId"].empty()) {
      gatewayServiceId = make_shared<string>(boost::any_cast<string>(m["gatewayServiceId"]));
    }
    if (m.find("groupName") != m.end() && !m["groupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["groupName"]));
    }
    if (m.find("match") != m.end() && !m["match"].empty()) {
      if (typeid(map<string, boost::any>) == m["match"].type()) {
        HttpApiBackendMatchConditions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["match"]));
        match = make_shared<HttpApiBackendMatchConditions>(model1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("namespace") != m.end() && !m["namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["namespace"]));
    }
    if (m.find("weight") != m.end() && !m["weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["weight"]));
    }
  }


  virtual ~HttpApiApiInfoEnvironmentsCloudProductConfigMseNacosConfigs() = default;
};
class HttpApiApiInfoEnvironmentsCloudProductConfig : public Darabonba::Model {
public:
  shared_ptr<string> cloudProductType{};
  shared_ptr<vector<HttpApiApiInfoEnvironmentsCloudProductConfigContainerServiceConfigs>> containerServiceConfigs{};
  shared_ptr<vector<HttpApiApiInfoEnvironmentsCloudProductConfigFunctionConfigs>> functionConfigs{};
  shared_ptr<vector<HttpApiApiInfoEnvironmentsCloudProductConfigMseNacosConfigs>> mseNacosConfigs{};

  HttpApiApiInfoEnvironmentsCloudProductConfig() {}

  explicit HttpApiApiInfoEnvironmentsCloudProductConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cloudProductType) {
      res["cloudProductType"] = boost::any(*cloudProductType);
    }
    if (containerServiceConfigs) {
      vector<boost::any> temp1;
      for(auto item1:*containerServiceConfigs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["containerServiceConfigs"] = boost::any(temp1);
    }
    if (functionConfigs) {
      vector<boost::any> temp1;
      for(auto item1:*functionConfigs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["functionConfigs"] = boost::any(temp1);
    }
    if (mseNacosConfigs) {
      vector<boost::any> temp1;
      for(auto item1:*mseNacosConfigs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["mseNacosConfigs"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cloudProductType") != m.end() && !m["cloudProductType"].empty()) {
      cloudProductType = make_shared<string>(boost::any_cast<string>(m["cloudProductType"]));
    }
    if (m.find("containerServiceConfigs") != m.end() && !m["containerServiceConfigs"].empty()) {
      if (typeid(vector<boost::any>) == m["containerServiceConfigs"].type()) {
        vector<HttpApiApiInfoEnvironmentsCloudProductConfigContainerServiceConfigs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["containerServiceConfigs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HttpApiApiInfoEnvironmentsCloudProductConfigContainerServiceConfigs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        containerServiceConfigs = make_shared<vector<HttpApiApiInfoEnvironmentsCloudProductConfigContainerServiceConfigs>>(expect1);
      }
    }
    if (m.find("functionConfigs") != m.end() && !m["functionConfigs"].empty()) {
      if (typeid(vector<boost::any>) == m["functionConfigs"].type()) {
        vector<HttpApiApiInfoEnvironmentsCloudProductConfigFunctionConfigs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["functionConfigs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HttpApiApiInfoEnvironmentsCloudProductConfigFunctionConfigs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        functionConfigs = make_shared<vector<HttpApiApiInfoEnvironmentsCloudProductConfigFunctionConfigs>>(expect1);
      }
    }
    if (m.find("mseNacosConfigs") != m.end() && !m["mseNacosConfigs"].empty()) {
      if (typeid(vector<boost::any>) == m["mseNacosConfigs"].type()) {
        vector<HttpApiApiInfoEnvironmentsCloudProductConfigMseNacosConfigs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["mseNacosConfigs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HttpApiApiInfoEnvironmentsCloudProductConfigMseNacosConfigs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        mseNacosConfigs = make_shared<vector<HttpApiApiInfoEnvironmentsCloudProductConfigMseNacosConfigs>>(expect1);
      }
    }
  }


  virtual ~HttpApiApiInfoEnvironmentsCloudProductConfig() = default;
};
class HttpApiApiInfoEnvironmentsDnsConfigs : public Darabonba::Model {
public:
  shared_ptr<vector<string>> dnsList{};
  shared_ptr<HttpApiBackendMatchConditions> match{};
  shared_ptr<long> weight{};

  HttpApiApiInfoEnvironmentsDnsConfigs() {}

  explicit HttpApiApiInfoEnvironmentsDnsConfigs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dnsList) {
      res["dnsList"] = boost::any(*dnsList);
    }
    if (match) {
      res["match"] = match ? boost::any(match->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (weight) {
      res["weight"] = boost::any(*weight);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dnsList") != m.end() && !m["dnsList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["dnsList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["dnsList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dnsList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("match") != m.end() && !m["match"].empty()) {
      if (typeid(map<string, boost::any>) == m["match"].type()) {
        HttpApiBackendMatchConditions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["match"]));
        match = make_shared<HttpApiBackendMatchConditions>(model1);
      }
    }
    if (m.find("weight") != m.end() && !m["weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["weight"]));
    }
  }


  virtual ~HttpApiApiInfoEnvironmentsDnsConfigs() = default;
};
class HttpApiApiInfoEnvironmentsGatewayInfo : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> name{};

  HttpApiApiInfoEnvironmentsGatewayInfo() {}

  explicit HttpApiApiInfoEnvironmentsGatewayInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["gatewayId"] = boost::any(*gatewayId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("gatewayId") != m.end() && !m["gatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["gatewayId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~HttpApiApiInfoEnvironmentsGatewayInfo() = default;
};
class HttpApiApiInfoEnvironmentsServiceConfigs : public Darabonba::Model {
public:
  shared_ptr<string> gatewayServiceId{};
  shared_ptr<HttpApiBackendMatchConditions> match{};
  shared_ptr<string> name{};
  shared_ptr<string> port{};
  shared_ptr<string> protocol{};
  shared_ptr<string> version{};
  shared_ptr<long> weight{};

  HttpApiApiInfoEnvironmentsServiceConfigs() {}

  explicit HttpApiApiInfoEnvironmentsServiceConfigs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayServiceId) {
      res["gatewayServiceId"] = boost::any(*gatewayServiceId);
    }
    if (match) {
      res["match"] = match ? boost::any(match->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (port) {
      res["port"] = boost::any(*port);
    }
    if (protocol) {
      res["protocol"] = boost::any(*protocol);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    if (weight) {
      res["weight"] = boost::any(*weight);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("gatewayServiceId") != m.end() && !m["gatewayServiceId"].empty()) {
      gatewayServiceId = make_shared<string>(boost::any_cast<string>(m["gatewayServiceId"]));
    }
    if (m.find("match") != m.end() && !m["match"].empty()) {
      if (typeid(map<string, boost::any>) == m["match"].type()) {
        HttpApiBackendMatchConditions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["match"]));
        match = make_shared<HttpApiBackendMatchConditions>(model1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("port") != m.end() && !m["port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["port"]));
    }
    if (m.find("protocol") != m.end() && !m["protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["protocol"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
    if (m.find("weight") != m.end() && !m["weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["weight"]));
    }
  }


  virtual ~HttpApiApiInfoEnvironmentsServiceConfigs() = default;
};
class HttpApiApiInfoEnvironmentsVipConfigs : public Darabonba::Model {
public:
  shared_ptr<vector<string>> endpoints{};
  shared_ptr<HttpApiBackendMatchConditions> match{};
  shared_ptr<long> weight{};

  HttpApiApiInfoEnvironmentsVipConfigs() {}

  explicit HttpApiApiInfoEnvironmentsVipConfigs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endpoints) {
      res["endpoints"] = boost::any(*endpoints);
    }
    if (match) {
      res["match"] = match ? boost::any(match->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (weight) {
      res["weight"] = boost::any(*weight);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("endpoints") != m.end() && !m["endpoints"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["endpoints"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["endpoints"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      endpoints = make_shared<vector<string>>(toVec1);
    }
    if (m.find("match") != m.end() && !m["match"].empty()) {
      if (typeid(map<string, boost::any>) == m["match"].type()) {
        HttpApiBackendMatchConditions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["match"]));
        match = make_shared<HttpApiBackendMatchConditions>(model1);
      }
    }
    if (m.find("weight") != m.end() && !m["weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["weight"]));
    }
  }


  virtual ~HttpApiApiInfoEnvironmentsVipConfigs() = default;
};
class HttpApiDomainInfo : public Darabonba::Model {
public:
  shared_ptr<string> domainId{};
  shared_ptr<string> name{};
  shared_ptr<string> protocol{};

  HttpApiDomainInfo() {}

  explicit HttpApiDomainInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainId) {
      res["domainId"] = boost::any(*domainId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (protocol) {
      res["protocol"] = boost::any(*protocol);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("domainId") != m.end() && !m["domainId"].empty()) {
      domainId = make_shared<string>(boost::any_cast<string>(m["domainId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("protocol") != m.end() && !m["protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["protocol"]));
    }
  }


  virtual ~HttpApiDomainInfo() = default;
};
class HttpApiApiInfoEnvironments : public Darabonba::Model {
public:
  shared_ptr<string> alias{};
  shared_ptr<string> backendScene{};
  shared_ptr<string> backendType{};
  shared_ptr<HttpApiApiInfoEnvironmentsCloudProductConfig> cloudProductConfig{};
  shared_ptr<vector<HttpApiDomainInfo>> customDomains{};
  shared_ptr<vector<HttpApiApiInfoEnvironmentsDnsConfigs>> dnsConfigs{};
  shared_ptr<string> environmentId{};
  shared_ptr<HttpApiApiInfoEnvironmentsGatewayInfo> gatewayInfo{};
  shared_ptr<string> name{};
  shared_ptr<string> publishStatus{};
  shared_ptr<vector<HttpApiApiInfoEnvironmentsServiceConfigs>> serviceConfigs{};
  shared_ptr<vector<HttpApiApiInfoEnvironmentsVipConfigs>> vipConfigs{};

  HttpApiApiInfoEnvironments() {}

  explicit HttpApiApiInfoEnvironments(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alias) {
      res["alias"] = boost::any(*alias);
    }
    if (backendScene) {
      res["backendScene"] = boost::any(*backendScene);
    }
    if (backendType) {
      res["backendType"] = boost::any(*backendType);
    }
    if (cloudProductConfig) {
      res["cloudProductConfig"] = cloudProductConfig ? boost::any(cloudProductConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (customDomains) {
      vector<boost::any> temp1;
      for(auto item1:*customDomains){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["customDomains"] = boost::any(temp1);
    }
    if (dnsConfigs) {
      vector<boost::any> temp1;
      for(auto item1:*dnsConfigs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["dnsConfigs"] = boost::any(temp1);
    }
    if (environmentId) {
      res["environmentId"] = boost::any(*environmentId);
    }
    if (gatewayInfo) {
      res["gatewayInfo"] = gatewayInfo ? boost::any(gatewayInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (publishStatus) {
      res["publishStatus"] = boost::any(*publishStatus);
    }
    if (serviceConfigs) {
      vector<boost::any> temp1;
      for(auto item1:*serviceConfigs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["serviceConfigs"] = boost::any(temp1);
    }
    if (vipConfigs) {
      vector<boost::any> temp1;
      for(auto item1:*vipConfigs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["vipConfigs"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("alias") != m.end() && !m["alias"].empty()) {
      alias = make_shared<string>(boost::any_cast<string>(m["alias"]));
    }
    if (m.find("backendScene") != m.end() && !m["backendScene"].empty()) {
      backendScene = make_shared<string>(boost::any_cast<string>(m["backendScene"]));
    }
    if (m.find("backendType") != m.end() && !m["backendType"].empty()) {
      backendType = make_shared<string>(boost::any_cast<string>(m["backendType"]));
    }
    if (m.find("cloudProductConfig") != m.end() && !m["cloudProductConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["cloudProductConfig"].type()) {
        HttpApiApiInfoEnvironmentsCloudProductConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["cloudProductConfig"]));
        cloudProductConfig = make_shared<HttpApiApiInfoEnvironmentsCloudProductConfig>(model1);
      }
    }
    if (m.find("customDomains") != m.end() && !m["customDomains"].empty()) {
      if (typeid(vector<boost::any>) == m["customDomains"].type()) {
        vector<HttpApiDomainInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["customDomains"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HttpApiDomainInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        customDomains = make_shared<vector<HttpApiDomainInfo>>(expect1);
      }
    }
    if (m.find("dnsConfigs") != m.end() && !m["dnsConfigs"].empty()) {
      if (typeid(vector<boost::any>) == m["dnsConfigs"].type()) {
        vector<HttpApiApiInfoEnvironmentsDnsConfigs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["dnsConfigs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HttpApiApiInfoEnvironmentsDnsConfigs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dnsConfigs = make_shared<vector<HttpApiApiInfoEnvironmentsDnsConfigs>>(expect1);
      }
    }
    if (m.find("environmentId") != m.end() && !m["environmentId"].empty()) {
      environmentId = make_shared<string>(boost::any_cast<string>(m["environmentId"]));
    }
    if (m.find("gatewayInfo") != m.end() && !m["gatewayInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["gatewayInfo"].type()) {
        HttpApiApiInfoEnvironmentsGatewayInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["gatewayInfo"]));
        gatewayInfo = make_shared<HttpApiApiInfoEnvironmentsGatewayInfo>(model1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("publishStatus") != m.end() && !m["publishStatus"].empty()) {
      publishStatus = make_shared<string>(boost::any_cast<string>(m["publishStatus"]));
    }
    if (m.find("serviceConfigs") != m.end() && !m["serviceConfigs"].empty()) {
      if (typeid(vector<boost::any>) == m["serviceConfigs"].type()) {
        vector<HttpApiApiInfoEnvironmentsServiceConfigs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["serviceConfigs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HttpApiApiInfoEnvironmentsServiceConfigs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceConfigs = make_shared<vector<HttpApiApiInfoEnvironmentsServiceConfigs>>(expect1);
      }
    }
    if (m.find("vipConfigs") != m.end() && !m["vipConfigs"].empty()) {
      if (typeid(vector<boost::any>) == m["vipConfigs"].type()) {
        vector<HttpApiApiInfoEnvironmentsVipConfigs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["vipConfigs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HttpApiApiInfoEnvironmentsVipConfigs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        vipConfigs = make_shared<vector<HttpApiApiInfoEnvironmentsVipConfigs>>(expect1);
      }
    }
  }


  virtual ~HttpApiApiInfoEnvironments() = default;
};
class HttpApiVersionInfo : public Darabonba::Model {
public:
  shared_ptr<bool> enable{};
  shared_ptr<string> headerName{};
  shared_ptr<string> queryName{};
  shared_ptr<string> scheme{};
  shared_ptr<string> version{};

  HttpApiVersionInfo() {}

  explicit HttpApiVersionInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enable) {
      res["enable"] = boost::any(*enable);
    }
    if (headerName) {
      res["headerName"] = boost::any(*headerName);
    }
    if (queryName) {
      res["queryName"] = boost::any(*queryName);
    }
    if (scheme) {
      res["scheme"] = boost::any(*scheme);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enable") != m.end() && !m["enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["enable"]));
    }
    if (m.find("headerName") != m.end() && !m["headerName"].empty()) {
      headerName = make_shared<string>(boost::any_cast<string>(m["headerName"]));
    }
    if (m.find("queryName") != m.end() && !m["queryName"].empty()) {
      queryName = make_shared<string>(boost::any_cast<string>(m["queryName"]));
    }
    if (m.find("scheme") != m.end() && !m["scheme"].empty()) {
      scheme = make_shared<string>(boost::any_cast<string>(m["scheme"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~HttpApiVersionInfo() = default;
};
class HttpApiApiInfo : public Darabonba::Model {
public:
  shared_ptr<string> basePath{};
  shared_ptr<string> description{};
  shared_ptr<vector<HttpApiApiInfoEnvironments>> environments{};
  shared_ptr<string> httpApiId{};
  shared_ptr<string> name{};
  shared_ptr<vector<string>> protocols{};
  shared_ptr<HttpApiVersionInfo> versionInfo{};

  HttpApiApiInfo() {}

  explicit HttpApiApiInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (basePath) {
      res["basePath"] = boost::any(*basePath);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (environments) {
      vector<boost::any> temp1;
      for(auto item1:*environments){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["environments"] = boost::any(temp1);
    }
    if (httpApiId) {
      res["httpApiId"] = boost::any(*httpApiId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (protocols) {
      res["protocols"] = boost::any(*protocols);
    }
    if (versionInfo) {
      res["versionInfo"] = versionInfo ? boost::any(versionInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("basePath") != m.end() && !m["basePath"].empty()) {
      basePath = make_shared<string>(boost::any_cast<string>(m["basePath"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("environments") != m.end() && !m["environments"].empty()) {
      if (typeid(vector<boost::any>) == m["environments"].type()) {
        vector<HttpApiApiInfoEnvironments> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["environments"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HttpApiApiInfoEnvironments model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        environments = make_shared<vector<HttpApiApiInfoEnvironments>>(expect1);
      }
    }
    if (m.find("httpApiId") != m.end() && !m["httpApiId"].empty()) {
      httpApiId = make_shared<string>(boost::any_cast<string>(m["httpApiId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("protocols") != m.end() && !m["protocols"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["protocols"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["protocols"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      protocols = make_shared<vector<string>>(toVec1);
    }
    if (m.find("versionInfo") != m.end() && !m["versionInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["versionInfo"].type()) {
        HttpApiVersionInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["versionInfo"]));
        versionInfo = make_shared<HttpApiVersionInfo>(model1);
      }
    }
  }


  virtual ~HttpApiApiInfo() = default;
};
class HttpApiInfoByName : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<bool> versionEnabled{};
  shared_ptr<vector<HttpApiApiInfo>> versionedHttpApis{};

  HttpApiInfoByName() {}

  explicit HttpApiInfoByName(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (versionEnabled) {
      res["versionEnabled"] = boost::any(*versionEnabled);
    }
    if (versionedHttpApis) {
      vector<boost::any> temp1;
      for(auto item1:*versionedHttpApis){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["versionedHttpApis"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("versionEnabled") != m.end() && !m["versionEnabled"].empty()) {
      versionEnabled = make_shared<bool>(boost::any_cast<bool>(m["versionEnabled"]));
    }
    if (m.find("versionedHttpApis") != m.end() && !m["versionedHttpApis"].empty()) {
      if (typeid(vector<boost::any>) == m["versionedHttpApis"].type()) {
        vector<HttpApiApiInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["versionedHttpApis"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HttpApiApiInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        versionedHttpApis = make_shared<vector<HttpApiApiInfo>>(expect1);
      }
    }
  }


  virtual ~HttpApiInfoByName() = default;
};
class HttpApiMockContract : public Darabonba::Model {
public:
  shared_ptr<bool> enable{};
  shared_ptr<long> responseCode{};
  shared_ptr<string> responseContent{};

  HttpApiMockContract() {}

  explicit HttpApiMockContract(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enable) {
      res["enable"] = boost::any(*enable);
    }
    if (responseCode) {
      res["responseCode"] = boost::any(*responseCode);
    }
    if (responseContent) {
      res["responseContent"] = boost::any(*responseContent);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enable") != m.end() && !m["enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["enable"]));
    }
    if (m.find("responseCode") != m.end() && !m["responseCode"].empty()) {
      responseCode = make_shared<long>(boost::any_cast<long>(m["responseCode"]));
    }
    if (m.find("responseContent") != m.end() && !m["responseContent"].empty()) {
      responseContent = make_shared<string>(boost::any_cast<string>(m["responseContent"]));
    }
  }


  virtual ~HttpApiMockContract() = default;
};
class HttpApiParameter : public Darabonba::Model {
public:
  shared_ptr<string> defaultValue{};
  shared_ptr<string> description{};
  shared_ptr<string> exampleValue{};
  shared_ptr<string> name{};
  shared_ptr<bool> required{};
  shared_ptr<string> type{};

  HttpApiParameter() {}

  explicit HttpApiParameter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defaultValue) {
      res["defaultValue"] = boost::any(*defaultValue);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (exampleValue) {
      res["exampleValue"] = boost::any(*exampleValue);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (required) {
      res["required"] = boost::any(*required);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("defaultValue") != m.end() && !m["defaultValue"].empty()) {
      defaultValue = make_shared<string>(boost::any_cast<string>(m["defaultValue"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("exampleValue") != m.end() && !m["exampleValue"].empty()) {
      exampleValue = make_shared<string>(boost::any_cast<string>(m["exampleValue"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("required") != m.end() && !m["required"].empty()) {
      required = make_shared<bool>(boost::any_cast<bool>(m["required"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~HttpApiParameter() = default;
};
class HttpApiRequestContractBody : public Darabonba::Model {
public:
  shared_ptr<string> contentType{};
  shared_ptr<string> description{};
  shared_ptr<string> example{};
  shared_ptr<string> jsonSchema{};

  HttpApiRequestContractBody() {}

  explicit HttpApiRequestContractBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contentType) {
      res["contentType"] = boost::any(*contentType);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (example) {
      res["example"] = boost::any(*example);
    }
    if (jsonSchema) {
      res["jsonSchema"] = boost::any(*jsonSchema);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("contentType") != m.end() && !m["contentType"].empty()) {
      contentType = make_shared<string>(boost::any_cast<string>(m["contentType"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("example") != m.end() && !m["example"].empty()) {
      example = make_shared<string>(boost::any_cast<string>(m["example"]));
    }
    if (m.find("jsonSchema") != m.end() && !m["jsonSchema"].empty()) {
      jsonSchema = make_shared<string>(boost::any_cast<string>(m["jsonSchema"]));
    }
  }


  virtual ~HttpApiRequestContractBody() = default;
};
class HttpApiRequestContract : public Darabonba::Model {
public:
  shared_ptr<HttpApiRequestContractBody> body{};
  shared_ptr<vector<HttpApiParameter>> headerParameters{};
  shared_ptr<vector<HttpApiParameter>> pathParameters{};
  shared_ptr<vector<HttpApiParameter>> queryParameters{};

  HttpApiRequestContract() {}

  explicit HttpApiRequestContract(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (headerParameters) {
      vector<boost::any> temp1;
      for(auto item1:*headerParameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["headerParameters"] = boost::any(temp1);
    }
    if (pathParameters) {
      vector<boost::any> temp1;
      for(auto item1:*pathParameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["pathParameters"] = boost::any(temp1);
    }
    if (queryParameters) {
      vector<boost::any> temp1;
      for(auto item1:*queryParameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["queryParameters"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        HttpApiRequestContractBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<HttpApiRequestContractBody>(model1);
      }
    }
    if (m.find("headerParameters") != m.end() && !m["headerParameters"].empty()) {
      if (typeid(vector<boost::any>) == m["headerParameters"].type()) {
        vector<HttpApiParameter> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["headerParameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HttpApiParameter model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        headerParameters = make_shared<vector<HttpApiParameter>>(expect1);
      }
    }
    if (m.find("pathParameters") != m.end() && !m["pathParameters"].empty()) {
      if (typeid(vector<boost::any>) == m["pathParameters"].type()) {
        vector<HttpApiParameter> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["pathParameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HttpApiParameter model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pathParameters = make_shared<vector<HttpApiParameter>>(expect1);
      }
    }
    if (m.find("queryParameters") != m.end() && !m["queryParameters"].empty()) {
      if (typeid(vector<boost::any>) == m["queryParameters"].type()) {
        vector<HttpApiParameter> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["queryParameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HttpApiParameter model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        queryParameters = make_shared<vector<HttpApiParameter>>(expect1);
      }
    }
  }


  virtual ~HttpApiRequestContract() = default;
};
class HttpApiResponseContractItems : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> description{};
  shared_ptr<string> example{};
  shared_ptr<string> jsonSchema{};

  HttpApiResponseContractItems() {}

  explicit HttpApiResponseContractItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (example) {
      res["example"] = boost::any(*example);
    }
    if (jsonSchema) {
      res["jsonSchema"] = boost::any(*jsonSchema);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["code"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("example") != m.end() && !m["example"].empty()) {
      example = make_shared<string>(boost::any_cast<string>(m["example"]));
    }
    if (m.find("jsonSchema") != m.end() && !m["jsonSchema"].empty()) {
      jsonSchema = make_shared<string>(boost::any_cast<string>(m["jsonSchema"]));
    }
  }


  virtual ~HttpApiResponseContractItems() = default;
};
class HttpApiResponseContract : public Darabonba::Model {
public:
  shared_ptr<string> contentType{};
  shared_ptr<vector<HttpApiResponseContractItems>> items{};

  HttpApiResponseContract() {}

  explicit HttpApiResponseContract(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contentType) {
      res["contentType"] = boost::any(*contentType);
    }
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["items"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("contentType") != m.end() && !m["contentType"].empty()) {
      contentType = make_shared<string>(boost::any_cast<string>(m["contentType"]));
    }
    if (m.find("items") != m.end() && !m["items"].empty()) {
      if (typeid(vector<boost::any>) == m["items"].type()) {
        vector<HttpApiResponseContractItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HttpApiResponseContractItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<HttpApiResponseContractItems>>(expect1);
      }
    }
  }


  virtual ~HttpApiResponseContract() = default;
};
class HttpApiOperation : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> method{};
  shared_ptr<HttpApiMockContract> mock{};
  shared_ptr<string> name{};
  shared_ptr<string> path{};
  shared_ptr<HttpApiRequestContract> request{};
  shared_ptr<HttpApiResponseContract> response{};

  HttpApiOperation() {}

  explicit HttpApiOperation(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (method) {
      res["method"] = boost::any(*method);
    }
    if (mock) {
      res["mock"] = mock ? boost::any(mock->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (path) {
      res["path"] = boost::any(*path);
    }
    if (request) {
      res["request"] = request ? boost::any(request->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (response) {
      res["response"] = response ? boost::any(response->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("method") != m.end() && !m["method"].empty()) {
      method = make_shared<string>(boost::any_cast<string>(m["method"]));
    }
    if (m.find("mock") != m.end() && !m["mock"].empty()) {
      if (typeid(map<string, boost::any>) == m["mock"].type()) {
        HttpApiMockContract model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["mock"]));
        mock = make_shared<HttpApiMockContract>(model1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("path") != m.end() && !m["path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["path"]));
    }
    if (m.find("request") != m.end() && !m["request"].empty()) {
      if (typeid(map<string, boost::any>) == m["request"].type()) {
        HttpApiRequestContract model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["request"]));
        request = make_shared<HttpApiRequestContract>(model1);
      }
    }
    if (m.find("response") != m.end() && !m["response"].empty()) {
      if (typeid(map<string, boost::any>) == m["response"].type()) {
        HttpApiResponseContract model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["response"]));
        response = make_shared<HttpApiResponseContract>(model1);
      }
    }
  }


  virtual ~HttpApiOperation() = default;
};
class HttpApiOperationInfo : public Darabonba::Model {
public:
  shared_ptr<long> createTimestamp{};
  shared_ptr<string> description{};
  shared_ptr<string> method{};
  shared_ptr<HttpApiMockContract> mock{};
  shared_ptr<string> name{};
  shared_ptr<string> operationId{};
  shared_ptr<string> path{};
  shared_ptr<HttpApiRequestContract> request{};
  shared_ptr<HttpApiResponseContract> response{};

  HttpApiOperationInfo() {}

  explicit HttpApiOperationInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTimestamp) {
      res["createTimestamp"] = boost::any(*createTimestamp);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (method) {
      res["method"] = boost::any(*method);
    }
    if (mock) {
      res["mock"] = mock ? boost::any(mock->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (operationId) {
      res["operationId"] = boost::any(*operationId);
    }
    if (path) {
      res["path"] = boost::any(*path);
    }
    if (request) {
      res["request"] = request ? boost::any(request->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (response) {
      res["response"] = response ? boost::any(response->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTimestamp") != m.end() && !m["createTimestamp"].empty()) {
      createTimestamp = make_shared<long>(boost::any_cast<long>(m["createTimestamp"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("method") != m.end() && !m["method"].empty()) {
      method = make_shared<string>(boost::any_cast<string>(m["method"]));
    }
    if (m.find("mock") != m.end() && !m["mock"].empty()) {
      if (typeid(map<string, boost::any>) == m["mock"].type()) {
        HttpApiMockContract model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["mock"]));
        mock = make_shared<HttpApiMockContract>(model1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("operationId") != m.end() && !m["operationId"].empty()) {
      operationId = make_shared<string>(boost::any_cast<string>(m["operationId"]));
    }
    if (m.find("path") != m.end() && !m["path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["path"]));
    }
    if (m.find("request") != m.end() && !m["request"].empty()) {
      if (typeid(map<string, boost::any>) == m["request"].type()) {
        HttpApiRequestContract model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["request"]));
        request = make_shared<HttpApiRequestContract>(model1);
      }
    }
    if (m.find("response") != m.end() && !m["response"].empty()) {
      if (typeid(map<string, boost::any>) == m["response"].type()) {
        HttpApiResponseContract model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["response"]));
        response = make_shared<HttpApiResponseContract>(model1);
      }
    }
  }


  virtual ~HttpApiOperationInfo() = default;
};
class HttpApiPublishRevisionInfoCloudProductConfigContainerServiceConfigs : public Darabonba::Model {
public:
  shared_ptr<string> gatewayServiceId{};
  shared_ptr<HttpApiBackendMatchConditions> match{};
  shared_ptr<string> name{};
  shared_ptr<string> namespace_{};
  shared_ptr<long> port{};
  shared_ptr<string> protocol{};
  shared_ptr<string> weight{};

  HttpApiPublishRevisionInfoCloudProductConfigContainerServiceConfigs() {}

  explicit HttpApiPublishRevisionInfoCloudProductConfigContainerServiceConfigs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayServiceId) {
      res["gatewayServiceId"] = boost::any(*gatewayServiceId);
    }
    if (match) {
      res["match"] = match ? boost::any(match->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (namespace_) {
      res["namespace"] = boost::any(*namespace_);
    }
    if (port) {
      res["port"] = boost::any(*port);
    }
    if (protocol) {
      res["protocol"] = boost::any(*protocol);
    }
    if (weight) {
      res["weight"] = boost::any(*weight);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("gatewayServiceId") != m.end() && !m["gatewayServiceId"].empty()) {
      gatewayServiceId = make_shared<string>(boost::any_cast<string>(m["gatewayServiceId"]));
    }
    if (m.find("match") != m.end() && !m["match"].empty()) {
      if (typeid(map<string, boost::any>) == m["match"].type()) {
        HttpApiBackendMatchConditions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["match"]));
        match = make_shared<HttpApiBackendMatchConditions>(model1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("namespace") != m.end() && !m["namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["namespace"]));
    }
    if (m.find("port") != m.end() && !m["port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["port"]));
    }
    if (m.find("protocol") != m.end() && !m["protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["protocol"]));
    }
    if (m.find("weight") != m.end() && !m["weight"].empty()) {
      weight = make_shared<string>(boost::any_cast<string>(m["weight"]));
    }
  }


  virtual ~HttpApiPublishRevisionInfoCloudProductConfigContainerServiceConfigs() = default;
};
class HttpApiPublishRevisionInfoCloudProductConfigFunctionConfigs : public Darabonba::Model {
public:
  shared_ptr<string> gatewayServiceId{};
  shared_ptr<HttpApiBackendMatchConditions> match{};
  shared_ptr<string> name{};
  shared_ptr<string> qualifier{};
  shared_ptr<long> weight{};

  HttpApiPublishRevisionInfoCloudProductConfigFunctionConfigs() {}

  explicit HttpApiPublishRevisionInfoCloudProductConfigFunctionConfigs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayServiceId) {
      res["gatewayServiceId"] = boost::any(*gatewayServiceId);
    }
    if (match) {
      res["match"] = match ? boost::any(match->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (qualifier) {
      res["qualifier"] = boost::any(*qualifier);
    }
    if (weight) {
      res["weight"] = boost::any(*weight);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("gatewayServiceId") != m.end() && !m["gatewayServiceId"].empty()) {
      gatewayServiceId = make_shared<string>(boost::any_cast<string>(m["gatewayServiceId"]));
    }
    if (m.find("match") != m.end() && !m["match"].empty()) {
      if (typeid(map<string, boost::any>) == m["match"].type()) {
        HttpApiBackendMatchConditions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["match"]));
        match = make_shared<HttpApiBackendMatchConditions>(model1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("qualifier") != m.end() && !m["qualifier"].empty()) {
      qualifier = make_shared<string>(boost::any_cast<string>(m["qualifier"]));
    }
    if (m.find("weight") != m.end() && !m["weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["weight"]));
    }
  }


  virtual ~HttpApiPublishRevisionInfoCloudProductConfigFunctionConfigs() = default;
};
class HttpApiPublishRevisionInfoCloudProductConfigMseNacosConfigs : public Darabonba::Model {
public:
  shared_ptr<string> gatewayServiceId{};
  shared_ptr<string> groupName{};
  shared_ptr<HttpApiBackendMatchConditions> match{};
  shared_ptr<string> name{};
  shared_ptr<string> namespace_{};
  shared_ptr<long> weight{};

  HttpApiPublishRevisionInfoCloudProductConfigMseNacosConfigs() {}

  explicit HttpApiPublishRevisionInfoCloudProductConfigMseNacosConfigs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayServiceId) {
      res["gatewayServiceId"] = boost::any(*gatewayServiceId);
    }
    if (groupName) {
      res["groupName"] = boost::any(*groupName);
    }
    if (match) {
      res["match"] = match ? boost::any(match->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (namespace_) {
      res["namespace"] = boost::any(*namespace_);
    }
    if (weight) {
      res["weight"] = boost::any(*weight);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("gatewayServiceId") != m.end() && !m["gatewayServiceId"].empty()) {
      gatewayServiceId = make_shared<string>(boost::any_cast<string>(m["gatewayServiceId"]));
    }
    if (m.find("groupName") != m.end() && !m["groupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["groupName"]));
    }
    if (m.find("match") != m.end() && !m["match"].empty()) {
      if (typeid(map<string, boost::any>) == m["match"].type()) {
        HttpApiBackendMatchConditions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["match"]));
        match = make_shared<HttpApiBackendMatchConditions>(model1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("namespace") != m.end() && !m["namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["namespace"]));
    }
    if (m.find("weight") != m.end() && !m["weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["weight"]));
    }
  }


  virtual ~HttpApiPublishRevisionInfoCloudProductConfigMseNacosConfigs() = default;
};
class HttpApiPublishRevisionInfoCloudProductConfig : public Darabonba::Model {
public:
  shared_ptr<string> cloudProductType{};
  shared_ptr<vector<HttpApiPublishRevisionInfoCloudProductConfigContainerServiceConfigs>> containerServiceConfigs{};
  shared_ptr<vector<HttpApiPublishRevisionInfoCloudProductConfigFunctionConfigs>> functionConfigs{};
  shared_ptr<vector<HttpApiPublishRevisionInfoCloudProductConfigMseNacosConfigs>> mseNacosConfigs{};

  HttpApiPublishRevisionInfoCloudProductConfig() {}

  explicit HttpApiPublishRevisionInfoCloudProductConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cloudProductType) {
      res["cloudProductType"] = boost::any(*cloudProductType);
    }
    if (containerServiceConfigs) {
      vector<boost::any> temp1;
      for(auto item1:*containerServiceConfigs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["containerServiceConfigs"] = boost::any(temp1);
    }
    if (functionConfigs) {
      vector<boost::any> temp1;
      for(auto item1:*functionConfigs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["functionConfigs"] = boost::any(temp1);
    }
    if (mseNacosConfigs) {
      vector<boost::any> temp1;
      for(auto item1:*mseNacosConfigs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["mseNacosConfigs"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cloudProductType") != m.end() && !m["cloudProductType"].empty()) {
      cloudProductType = make_shared<string>(boost::any_cast<string>(m["cloudProductType"]));
    }
    if (m.find("containerServiceConfigs") != m.end() && !m["containerServiceConfigs"].empty()) {
      if (typeid(vector<boost::any>) == m["containerServiceConfigs"].type()) {
        vector<HttpApiPublishRevisionInfoCloudProductConfigContainerServiceConfigs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["containerServiceConfigs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HttpApiPublishRevisionInfoCloudProductConfigContainerServiceConfigs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        containerServiceConfigs = make_shared<vector<HttpApiPublishRevisionInfoCloudProductConfigContainerServiceConfigs>>(expect1);
      }
    }
    if (m.find("functionConfigs") != m.end() && !m["functionConfigs"].empty()) {
      if (typeid(vector<boost::any>) == m["functionConfigs"].type()) {
        vector<HttpApiPublishRevisionInfoCloudProductConfigFunctionConfigs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["functionConfigs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HttpApiPublishRevisionInfoCloudProductConfigFunctionConfigs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        functionConfigs = make_shared<vector<HttpApiPublishRevisionInfoCloudProductConfigFunctionConfigs>>(expect1);
      }
    }
    if (m.find("mseNacosConfigs") != m.end() && !m["mseNacosConfigs"].empty()) {
      if (typeid(vector<boost::any>) == m["mseNacosConfigs"].type()) {
        vector<HttpApiPublishRevisionInfoCloudProductConfigMseNacosConfigs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["mseNacosConfigs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HttpApiPublishRevisionInfoCloudProductConfigMseNacosConfigs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        mseNacosConfigs = make_shared<vector<HttpApiPublishRevisionInfoCloudProductConfigMseNacosConfigs>>(expect1);
      }
    }
  }


  virtual ~HttpApiPublishRevisionInfoCloudProductConfig() = default;
};
class HttpApiPublishRevisionInfoDnsConfigs : public Darabonba::Model {
public:
  shared_ptr<vector<string>> dnsList{};
  shared_ptr<HttpApiBackendMatchConditions> match{};
  shared_ptr<long> weight{};

  HttpApiPublishRevisionInfoDnsConfigs() {}

  explicit HttpApiPublishRevisionInfoDnsConfigs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dnsList) {
      res["dnsList"] = boost::any(*dnsList);
    }
    if (match) {
      res["match"] = match ? boost::any(match->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (weight) {
      res["weight"] = boost::any(*weight);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dnsList") != m.end() && !m["dnsList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["dnsList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["dnsList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dnsList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("match") != m.end() && !m["match"].empty()) {
      if (typeid(map<string, boost::any>) == m["match"].type()) {
        HttpApiBackendMatchConditions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["match"]));
        match = make_shared<HttpApiBackendMatchConditions>(model1);
      }
    }
    if (m.find("weight") != m.end() && !m["weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["weight"]));
    }
  }


  virtual ~HttpApiPublishRevisionInfoDnsConfigs() = default;
};
class HttpApiPublishRevisionInfoEnvironmentInfoGatewayInfo : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> name{};

  HttpApiPublishRevisionInfoEnvironmentInfoGatewayInfo() {}

  explicit HttpApiPublishRevisionInfoEnvironmentInfoGatewayInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["gatewayId"] = boost::any(*gatewayId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("gatewayId") != m.end() && !m["gatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["gatewayId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~HttpApiPublishRevisionInfoEnvironmentInfoGatewayInfo() = default;
};
class HttpApiPublishRevisionInfoEnvironmentInfo : public Darabonba::Model {
public:
  shared_ptr<string> alias{};
  shared_ptr<string> environmentId{};
  shared_ptr<HttpApiPublishRevisionInfoEnvironmentInfoGatewayInfo> gatewayInfo{};
  shared_ptr<string> name{};

  HttpApiPublishRevisionInfoEnvironmentInfo() {}

  explicit HttpApiPublishRevisionInfoEnvironmentInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alias) {
      res["alias"] = boost::any(*alias);
    }
    if (environmentId) {
      res["environmentId"] = boost::any(*environmentId);
    }
    if (gatewayInfo) {
      res["gatewayInfo"] = gatewayInfo ? boost::any(gatewayInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("alias") != m.end() && !m["alias"].empty()) {
      alias = make_shared<string>(boost::any_cast<string>(m["alias"]));
    }
    if (m.find("environmentId") != m.end() && !m["environmentId"].empty()) {
      environmentId = make_shared<string>(boost::any_cast<string>(m["environmentId"]));
    }
    if (m.find("gatewayInfo") != m.end() && !m["gatewayInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["gatewayInfo"].type()) {
        HttpApiPublishRevisionInfoEnvironmentInfoGatewayInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["gatewayInfo"]));
        gatewayInfo = make_shared<HttpApiPublishRevisionInfoEnvironmentInfoGatewayInfo>(model1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~HttpApiPublishRevisionInfoEnvironmentInfo() = default;
};
class HttpApiPublishRevisionInfoServiceConfigs : public Darabonba::Model {
public:
  shared_ptr<string> gatewayServiceId{};
  shared_ptr<HttpApiBackendMatchConditions> match{};
  shared_ptr<long> port{};
  shared_ptr<string> protocol{};
  shared_ptr<string> version{};
  shared_ptr<long> weight{};

  HttpApiPublishRevisionInfoServiceConfigs() {}

  explicit HttpApiPublishRevisionInfoServiceConfigs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayServiceId) {
      res["gatewayServiceId"] = boost::any(*gatewayServiceId);
    }
    if (match) {
      res["match"] = match ? boost::any(match->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (port) {
      res["port"] = boost::any(*port);
    }
    if (protocol) {
      res["protocol"] = boost::any(*protocol);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    if (weight) {
      res["weight"] = boost::any(*weight);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("gatewayServiceId") != m.end() && !m["gatewayServiceId"].empty()) {
      gatewayServiceId = make_shared<string>(boost::any_cast<string>(m["gatewayServiceId"]));
    }
    if (m.find("match") != m.end() && !m["match"].empty()) {
      if (typeid(map<string, boost::any>) == m["match"].type()) {
        HttpApiBackendMatchConditions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["match"]));
        match = make_shared<HttpApiBackendMatchConditions>(model1);
      }
    }
    if (m.find("port") != m.end() && !m["port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["port"]));
    }
    if (m.find("protocol") != m.end() && !m["protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["protocol"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
    if (m.find("weight") != m.end() && !m["weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["weight"]));
    }
  }


  virtual ~HttpApiPublishRevisionInfoServiceConfigs() = default;
};
class HttpApiPublishRevisionInfoVipConfigs : public Darabonba::Model {
public:
  shared_ptr<vector<string>> endpoints{};
  shared_ptr<HttpApiBackendMatchConditions> match{};
  shared_ptr<long> weight{};

  HttpApiPublishRevisionInfoVipConfigs() {}

  explicit HttpApiPublishRevisionInfoVipConfigs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endpoints) {
      res["endpoints"] = boost::any(*endpoints);
    }
    if (match) {
      res["match"] = match ? boost::any(match->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (weight) {
      res["weight"] = boost::any(*weight);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("endpoints") != m.end() && !m["endpoints"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["endpoints"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["endpoints"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      endpoints = make_shared<vector<string>>(toVec1);
    }
    if (m.find("match") != m.end() && !m["match"].empty()) {
      if (typeid(map<string, boost::any>) == m["match"].type()) {
        HttpApiBackendMatchConditions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["match"]));
        match = make_shared<HttpApiBackendMatchConditions>(model1);
      }
    }
    if (m.find("weight") != m.end() && !m["weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["weight"]));
    }
  }


  virtual ~HttpApiPublishRevisionInfoVipConfigs() = default;
};
class HttpApiPublishRevisionInfo : public Darabonba::Model {
public:
  shared_ptr<string> backendScene{};
  shared_ptr<string> backendType{};
  shared_ptr<HttpApiPublishRevisionInfoCloudProductConfig> cloudProductConfig{};
  shared_ptr<long> createTimestamp{};
  shared_ptr<vector<HttpApiDomainInfo>> customDomains{};
  shared_ptr<vector<HttpApiPublishRevisionInfoDnsConfigs>> dnsConfigs{};
  shared_ptr<HttpApiPublishRevisionInfoEnvironmentInfo> environmentInfo{};
  shared_ptr<bool> isCurrentVersion{};
  shared_ptr<vector<HttpApiOperationInfo>> operations{};
  shared_ptr<string> revisionId{};
  shared_ptr<vector<HttpApiPublishRevisionInfoServiceConfigs>> serviceConfigs{};
  shared_ptr<vector<HttpApiDomainInfo>> subDomains{};
  shared_ptr<vector<HttpApiPublishRevisionInfoVipConfigs>> vipConfigs{};

  HttpApiPublishRevisionInfo() {}

  explicit HttpApiPublishRevisionInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backendScene) {
      res["backendScene"] = boost::any(*backendScene);
    }
    if (backendType) {
      res["backendType"] = boost::any(*backendType);
    }
    if (cloudProductConfig) {
      res["cloudProductConfig"] = cloudProductConfig ? boost::any(cloudProductConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (createTimestamp) {
      res["createTimestamp"] = boost::any(*createTimestamp);
    }
    if (customDomains) {
      vector<boost::any> temp1;
      for(auto item1:*customDomains){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["customDomains"] = boost::any(temp1);
    }
    if (dnsConfigs) {
      vector<boost::any> temp1;
      for(auto item1:*dnsConfigs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["dnsConfigs"] = boost::any(temp1);
    }
    if (environmentInfo) {
      res["environmentInfo"] = environmentInfo ? boost::any(environmentInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (isCurrentVersion) {
      res["isCurrentVersion"] = boost::any(*isCurrentVersion);
    }
    if (operations) {
      vector<boost::any> temp1;
      for(auto item1:*operations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["operations"] = boost::any(temp1);
    }
    if (revisionId) {
      res["revisionId"] = boost::any(*revisionId);
    }
    if (serviceConfigs) {
      vector<boost::any> temp1;
      for(auto item1:*serviceConfigs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["serviceConfigs"] = boost::any(temp1);
    }
    if (subDomains) {
      vector<boost::any> temp1;
      for(auto item1:*subDomains){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["subDomains"] = boost::any(temp1);
    }
    if (vipConfigs) {
      vector<boost::any> temp1;
      for(auto item1:*vipConfigs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["vipConfigs"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("backendScene") != m.end() && !m["backendScene"].empty()) {
      backendScene = make_shared<string>(boost::any_cast<string>(m["backendScene"]));
    }
    if (m.find("backendType") != m.end() && !m["backendType"].empty()) {
      backendType = make_shared<string>(boost::any_cast<string>(m["backendType"]));
    }
    if (m.find("cloudProductConfig") != m.end() && !m["cloudProductConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["cloudProductConfig"].type()) {
        HttpApiPublishRevisionInfoCloudProductConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["cloudProductConfig"]));
        cloudProductConfig = make_shared<HttpApiPublishRevisionInfoCloudProductConfig>(model1);
      }
    }
    if (m.find("createTimestamp") != m.end() && !m["createTimestamp"].empty()) {
      createTimestamp = make_shared<long>(boost::any_cast<long>(m["createTimestamp"]));
    }
    if (m.find("customDomains") != m.end() && !m["customDomains"].empty()) {
      if (typeid(vector<boost::any>) == m["customDomains"].type()) {
        vector<HttpApiDomainInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["customDomains"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HttpApiDomainInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        customDomains = make_shared<vector<HttpApiDomainInfo>>(expect1);
      }
    }
    if (m.find("dnsConfigs") != m.end() && !m["dnsConfigs"].empty()) {
      if (typeid(vector<boost::any>) == m["dnsConfigs"].type()) {
        vector<HttpApiPublishRevisionInfoDnsConfigs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["dnsConfigs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HttpApiPublishRevisionInfoDnsConfigs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dnsConfigs = make_shared<vector<HttpApiPublishRevisionInfoDnsConfigs>>(expect1);
      }
    }
    if (m.find("environmentInfo") != m.end() && !m["environmentInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["environmentInfo"].type()) {
        HttpApiPublishRevisionInfoEnvironmentInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["environmentInfo"]));
        environmentInfo = make_shared<HttpApiPublishRevisionInfoEnvironmentInfo>(model1);
      }
    }
    if (m.find("isCurrentVersion") != m.end() && !m["isCurrentVersion"].empty()) {
      isCurrentVersion = make_shared<bool>(boost::any_cast<bool>(m["isCurrentVersion"]));
    }
    if (m.find("operations") != m.end() && !m["operations"].empty()) {
      if (typeid(vector<boost::any>) == m["operations"].type()) {
        vector<HttpApiOperationInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["operations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HttpApiOperationInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        operations = make_shared<vector<HttpApiOperationInfo>>(expect1);
      }
    }
    if (m.find("revisionId") != m.end() && !m["revisionId"].empty()) {
      revisionId = make_shared<string>(boost::any_cast<string>(m["revisionId"]));
    }
    if (m.find("serviceConfigs") != m.end() && !m["serviceConfigs"].empty()) {
      if (typeid(vector<boost::any>) == m["serviceConfigs"].type()) {
        vector<HttpApiPublishRevisionInfoServiceConfigs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["serviceConfigs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HttpApiPublishRevisionInfoServiceConfigs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceConfigs = make_shared<vector<HttpApiPublishRevisionInfoServiceConfigs>>(expect1);
      }
    }
    if (m.find("subDomains") != m.end() && !m["subDomains"].empty()) {
      if (typeid(vector<boost::any>) == m["subDomains"].type()) {
        vector<HttpApiDomainInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["subDomains"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HttpApiDomainInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subDomains = make_shared<vector<HttpApiDomainInfo>>(expect1);
      }
    }
    if (m.find("vipConfigs") != m.end() && !m["vipConfigs"].empty()) {
      if (typeid(vector<boost::any>) == m["vipConfigs"].type()) {
        vector<HttpApiPublishRevisionInfoVipConfigs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["vipConfigs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HttpApiPublishRevisionInfoVipConfigs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        vipConfigs = make_shared<vector<HttpApiPublishRevisionInfoVipConfigs>>(expect1);
      }
    }
  }


  virtual ~HttpApiPublishRevisionInfo() = default;
};
class HttpApiVersionConfig : public Darabonba::Model {
public:
  shared_ptr<bool> enable{};
  shared_ptr<string> headerName{};
  shared_ptr<string> queryName{};
  shared_ptr<string> scheme{};
  shared_ptr<string> version{};

  HttpApiVersionConfig() {}

  explicit HttpApiVersionConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enable) {
      res["enable"] = boost::any(*enable);
    }
    if (headerName) {
      res["headerName"] = boost::any(*headerName);
    }
    if (queryName) {
      res["queryName"] = boost::any(*queryName);
    }
    if (scheme) {
      res["scheme"] = boost::any(*scheme);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enable") != m.end() && !m["enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["enable"]));
    }
    if (m.find("headerName") != m.end() && !m["headerName"].empty()) {
      headerName = make_shared<string>(boost::any_cast<string>(m["headerName"]));
    }
    if (m.find("queryName") != m.end() && !m["queryName"].empty()) {
      queryName = make_shared<string>(boost::any_cast<string>(m["queryName"]));
    }
    if (m.find("scheme") != m.end() && !m["scheme"].empty()) {
      scheme = make_shared<string>(boost::any_cast<string>(m["scheme"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~HttpApiVersionConfig() = default;
};
class HttpDubboTranscoderMothedMapListParamMapsList : public Darabonba::Model {
public:
  shared_ptr<string> extractKey{};
  shared_ptr<string> extractKeySpec{};
  shared_ptr<string> mappingType{};

  HttpDubboTranscoderMothedMapListParamMapsList() {}

  explicit HttpDubboTranscoderMothedMapListParamMapsList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (extractKey) {
      res["extractKey"] = boost::any(*extractKey);
    }
    if (extractKeySpec) {
      res["extractKeySpec"] = boost::any(*extractKeySpec);
    }
    if (mappingType) {
      res["mappingType"] = boost::any(*mappingType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("extractKey") != m.end() && !m["extractKey"].empty()) {
      extractKey = make_shared<string>(boost::any_cast<string>(m["extractKey"]));
    }
    if (m.find("extractKeySpec") != m.end() && !m["extractKeySpec"].empty()) {
      extractKeySpec = make_shared<string>(boost::any_cast<string>(m["extractKeySpec"]));
    }
    if (m.find("mappingType") != m.end() && !m["mappingType"].empty()) {
      mappingType = make_shared<string>(boost::any_cast<string>(m["mappingType"]));
    }
  }


  virtual ~HttpDubboTranscoderMothedMapListParamMapsList() = default;
};
class HttpDubboTranscoderMothedMapList : public Darabonba::Model {
public:
  shared_ptr<string> dubboMothedName{};
  shared_ptr<string> httpMothed{};
  shared_ptr<string> mothedpath{};
  shared_ptr<vector<HttpDubboTranscoderMothedMapListParamMapsList>> paramMapsList{};
  shared_ptr<string> passThroughAllHeaders{};
  shared_ptr<vector<string>> passThroughList{};

  HttpDubboTranscoderMothedMapList() {}

  explicit HttpDubboTranscoderMothedMapList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dubboMothedName) {
      res["dubboMothedName"] = boost::any(*dubboMothedName);
    }
    if (httpMothed) {
      res["httpMothed"] = boost::any(*httpMothed);
    }
    if (mothedpath) {
      res["mothedpath"] = boost::any(*mothedpath);
    }
    if (paramMapsList) {
      vector<boost::any> temp1;
      for(auto item1:*paramMapsList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["paramMapsList"] = boost::any(temp1);
    }
    if (passThroughAllHeaders) {
      res["passThroughAllHeaders"] = boost::any(*passThroughAllHeaders);
    }
    if (passThroughList) {
      res["passThroughList"] = boost::any(*passThroughList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dubboMothedName") != m.end() && !m["dubboMothedName"].empty()) {
      dubboMothedName = make_shared<string>(boost::any_cast<string>(m["dubboMothedName"]));
    }
    if (m.find("httpMothed") != m.end() && !m["httpMothed"].empty()) {
      httpMothed = make_shared<string>(boost::any_cast<string>(m["httpMothed"]));
    }
    if (m.find("mothedpath") != m.end() && !m["mothedpath"].empty()) {
      mothedpath = make_shared<string>(boost::any_cast<string>(m["mothedpath"]));
    }
    if (m.find("paramMapsList") != m.end() && !m["paramMapsList"].empty()) {
      if (typeid(vector<boost::any>) == m["paramMapsList"].type()) {
        vector<HttpDubboTranscoderMothedMapListParamMapsList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["paramMapsList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HttpDubboTranscoderMothedMapListParamMapsList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        paramMapsList = make_shared<vector<HttpDubboTranscoderMothedMapListParamMapsList>>(expect1);
      }
    }
    if (m.find("passThroughAllHeaders") != m.end() && !m["passThroughAllHeaders"].empty()) {
      passThroughAllHeaders = make_shared<string>(boost::any_cast<string>(m["passThroughAllHeaders"]));
    }
    if (m.find("passThroughList") != m.end() && !m["passThroughList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["passThroughList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["passThroughList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      passThroughList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~HttpDubboTranscoderMothedMapList() = default;
};
class HttpDubboTranscoder : public Darabonba::Model {
public:
  shared_ptr<string> dubboServiceGroup{};
  shared_ptr<string> dubboServiceName{};
  shared_ptr<string> dubboServiceVersion{};
  shared_ptr<vector<HttpDubboTranscoderMothedMapList>> mothedMapList{};

  HttpDubboTranscoder() {}

  explicit HttpDubboTranscoder(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dubboServiceGroup) {
      res["dubboServiceGroup"] = boost::any(*dubboServiceGroup);
    }
    if (dubboServiceName) {
      res["dubboServiceName"] = boost::any(*dubboServiceName);
    }
    if (dubboServiceVersion) {
      res["dubboServiceVersion"] = boost::any(*dubboServiceVersion);
    }
    if (mothedMapList) {
      vector<boost::any> temp1;
      for(auto item1:*mothedMapList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["mothedMapList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dubboServiceGroup") != m.end() && !m["dubboServiceGroup"].empty()) {
      dubboServiceGroup = make_shared<string>(boost::any_cast<string>(m["dubboServiceGroup"]));
    }
    if (m.find("dubboServiceName") != m.end() && !m["dubboServiceName"].empty()) {
      dubboServiceName = make_shared<string>(boost::any_cast<string>(m["dubboServiceName"]));
    }
    if (m.find("dubboServiceVersion") != m.end() && !m["dubboServiceVersion"].empty()) {
      dubboServiceVersion = make_shared<string>(boost::any_cast<string>(m["dubboServiceVersion"]));
    }
    if (m.find("mothedMapList") != m.end() && !m["mothedMapList"].empty()) {
      if (typeid(vector<boost::any>) == m["mothedMapList"].type()) {
        vector<HttpDubboTranscoderMothedMapList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["mothedMapList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HttpDubboTranscoderMothedMapList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        mothedMapList = make_shared<vector<HttpDubboTranscoderMothedMapList>>(expect1);
      }
    }
  }


  virtual ~HttpDubboTranscoder() = default;
};
class HttpRouteMatchHeaders : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> type{};
  shared_ptr<string> value{};

  HttpRouteMatchHeaders() {}

  explicit HttpRouteMatchHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~HttpRouteMatchHeaders() = default;
};
class HttpRouteMatchPath : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> value{};

  HttpRouteMatchPath() {}

  explicit HttpRouteMatchPath(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~HttpRouteMatchPath() = default;
};
class HttpRouteMatchQueryParams : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> type{};
  shared_ptr<string> value{};

  HttpRouteMatchQueryParams() {}

  explicit HttpRouteMatchQueryParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~HttpRouteMatchQueryParams() = default;
};
class HttpRouteMatch : public Darabonba::Model {
public:
  shared_ptr<vector<HttpRouteMatchHeaders>> headers{};
  shared_ptr<bool> ignoreUriCase{};
  shared_ptr<vector<string>> methods{};
  shared_ptr<HttpRouteMatchPath> path{};
  shared_ptr<vector<HttpRouteMatchQueryParams>> queryParams{};

  HttpRouteMatch() {}

  explicit HttpRouteMatch(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      vector<boost::any> temp1;
      for(auto item1:*headers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["headers"] = boost::any(temp1);
    }
    if (ignoreUriCase) {
      res["ignoreUriCase"] = boost::any(*ignoreUriCase);
    }
    if (methods) {
      res["methods"] = boost::any(*methods);
    }
    if (path) {
      res["path"] = path ? boost::any(path->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (queryParams) {
      vector<boost::any> temp1;
      for(auto item1:*queryParams){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["queryParams"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      if (typeid(vector<boost::any>) == m["headers"].type()) {
        vector<HttpRouteMatchHeaders> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["headers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HttpRouteMatchHeaders model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        headers = make_shared<vector<HttpRouteMatchHeaders>>(expect1);
      }
    }
    if (m.find("ignoreUriCase") != m.end() && !m["ignoreUriCase"].empty()) {
      ignoreUriCase = make_shared<bool>(boost::any_cast<bool>(m["ignoreUriCase"]));
    }
    if (m.find("methods") != m.end() && !m["methods"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["methods"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["methods"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      methods = make_shared<vector<string>>(toVec1);
    }
    if (m.find("path") != m.end() && !m["path"].empty()) {
      if (typeid(map<string, boost::any>) == m["path"].type()) {
        HttpRouteMatchPath model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["path"]));
        path = make_shared<HttpRouteMatchPath>(model1);
      }
    }
    if (m.find("queryParams") != m.end() && !m["queryParams"].empty()) {
      if (typeid(vector<boost::any>) == m["queryParams"].type()) {
        vector<HttpRouteMatchQueryParams> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["queryParams"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HttpRouteMatchQueryParams model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        queryParams = make_shared<vector<HttpRouteMatchQueryParams>>(expect1);
      }
    }
  }


  virtual ~HttpRouteMatch() = default;
};
class PolicyClassInfo : public Darabonba::Model {
public:
  shared_ptr<string> alias{};
  shared_ptr<vector<string>> attachableResourceTypes{};
  shared_ptr<string> classId{};
  shared_ptr<string> configExample{};
  shared_ptr<bool> deprecated{};
  shared_ptr<string> description{};
  shared_ptr<string> direction{};
  shared_ptr<bool> enableLog{};
  shared_ptr<string> executePriority{};
  shared_ptr<string> executeStage{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};
  shared_ptr<string> version{};

  PolicyClassInfo() {}

  explicit PolicyClassInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alias) {
      res["alias"] = boost::any(*alias);
    }
    if (attachableResourceTypes) {
      res["attachableResourceTypes"] = boost::any(*attachableResourceTypes);
    }
    if (classId) {
      res["classId"] = boost::any(*classId);
    }
    if (configExample) {
      res["configExample"] = boost::any(*configExample);
    }
    if (deprecated) {
      res["deprecated"] = boost::any(*deprecated);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (direction) {
      res["direction"] = boost::any(*direction);
    }
    if (enableLog) {
      res["enableLog"] = boost::any(*enableLog);
    }
    if (executePriority) {
      res["executePriority"] = boost::any(*executePriority);
    }
    if (executeStage) {
      res["executeStage"] = boost::any(*executeStage);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("alias") != m.end() && !m["alias"].empty()) {
      alias = make_shared<string>(boost::any_cast<string>(m["alias"]));
    }
    if (m.find("attachableResourceTypes") != m.end() && !m["attachableResourceTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["attachableResourceTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["attachableResourceTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      attachableResourceTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("classId") != m.end() && !m["classId"].empty()) {
      classId = make_shared<string>(boost::any_cast<string>(m["classId"]));
    }
    if (m.find("configExample") != m.end() && !m["configExample"].empty()) {
      configExample = make_shared<string>(boost::any_cast<string>(m["configExample"]));
    }
    if (m.find("deprecated") != m.end() && !m["deprecated"].empty()) {
      deprecated = make_shared<bool>(boost::any_cast<bool>(m["deprecated"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("direction") != m.end() && !m["direction"].empty()) {
      direction = make_shared<string>(boost::any_cast<string>(m["direction"]));
    }
    if (m.find("enableLog") != m.end() && !m["enableLog"].empty()) {
      enableLog = make_shared<bool>(boost::any_cast<bool>(m["enableLog"]));
    }
    if (m.find("executePriority") != m.end() && !m["executePriority"].empty()) {
      executePriority = make_shared<string>(boost::any_cast<string>(m["executePriority"]));
    }
    if (m.find("executeStage") != m.end() && !m["executeStage"].empty()) {
      executeStage = make_shared<string>(boost::any_cast<string>(m["executeStage"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~PolicyClassInfo() = default;
};
class PolicyDetailInfo : public Darabonba::Model {
public:
  shared_ptr<string> classId{};
  shared_ptr<string> className{};
  shared_ptr<string> config{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> policyId{};

  PolicyDetailInfo() {}

  explicit PolicyDetailInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (classId) {
      res["classId"] = boost::any(*classId);
    }
    if (className) {
      res["className"] = boost::any(*className);
    }
    if (config) {
      res["config"] = boost::any(*config);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (policyId) {
      res["policyId"] = boost::any(*policyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("classId") != m.end() && !m["classId"].empty()) {
      classId = make_shared<string>(boost::any_cast<string>(m["classId"]));
    }
    if (m.find("className") != m.end() && !m["className"].empty()) {
      className = make_shared<string>(boost::any_cast<string>(m["className"]));
    }
    if (m.find("config") != m.end() && !m["config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["config"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("policyId") != m.end() && !m["policyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["policyId"]));
    }
  }


  virtual ~PolicyDetailInfo() = default;
};
class PolicyInfo : public Darabonba::Model {
public:
  shared_ptr<vector<Attachment>> attachments{};
  shared_ptr<string> classAlias{};
  shared_ptr<string> className{};
  shared_ptr<string> config{};
  shared_ptr<string> direction{};
  shared_ptr<string> executePriority{};
  shared_ptr<string> executeStage{};
  shared_ptr<string> name{};
  shared_ptr<string> policyId{};
  shared_ptr<string> type{};

  PolicyInfo() {}

  explicit PolicyInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attachments) {
      vector<boost::any> temp1;
      for(auto item1:*attachments){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["attachments"] = boost::any(temp1);
    }
    if (classAlias) {
      res["classAlias"] = boost::any(*classAlias);
    }
    if (className) {
      res["className"] = boost::any(*className);
    }
    if (config) {
      res["config"] = boost::any(*config);
    }
    if (direction) {
      res["direction"] = boost::any(*direction);
    }
    if (executePriority) {
      res["executePriority"] = boost::any(*executePriority);
    }
    if (executeStage) {
      res["executeStage"] = boost::any(*executeStage);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (policyId) {
      res["policyId"] = boost::any(*policyId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("attachments") != m.end() && !m["attachments"].empty()) {
      if (typeid(vector<boost::any>) == m["attachments"].type()) {
        vector<Attachment> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["attachments"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Attachment model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        attachments = make_shared<vector<Attachment>>(expect1);
      }
    }
    if (m.find("classAlias") != m.end() && !m["classAlias"].empty()) {
      classAlias = make_shared<string>(boost::any_cast<string>(m["classAlias"]));
    }
    if (m.find("className") != m.end() && !m["className"].empty()) {
      className = make_shared<string>(boost::any_cast<string>(m["className"]));
    }
    if (m.find("config") != m.end() && !m["config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["config"]));
    }
    if (m.find("direction") != m.end() && !m["direction"].empty()) {
      direction = make_shared<string>(boost::any_cast<string>(m["direction"]));
    }
    if (m.find("executePriority") != m.end() && !m["executePriority"].empty()) {
      executePriority = make_shared<string>(boost::any_cast<string>(m["executePriority"]));
    }
    if (m.find("executeStage") != m.end() && !m["executeStage"].empty()) {
      executeStage = make_shared<string>(boost::any_cast<string>(m["executeStage"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("policyId") != m.end() && !m["policyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["policyId"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~PolicyInfo() = default;
};
class ResourceStatistic : public Darabonba::Model {
public:
  shared_ptr<long> resourceCount{};
  shared_ptr<string> resourceType{};

  ResourceStatistic() {}

  explicit ResourceStatistic(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceCount) {
      res["resourceCount"] = boost::any(*resourceCount);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("resourceCount") != m.end() && !m["resourceCount"].empty()) {
      resourceCount = make_shared<long>(boost::any_cast<long>(m["resourceCount"]));
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
  }


  virtual ~ResourceStatistic() = default;
};
class RouteRulesConflictInfoConflictsDetailsConflictingMatchOperationInfo : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> operationId{};

  RouteRulesConflictInfoConflictsDetailsConflictingMatchOperationInfo() {}

  explicit RouteRulesConflictInfoConflictsDetailsConflictingMatchOperationInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (operationId) {
      res["operationId"] = boost::any(*operationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("operationId") != m.end() && !m["operationId"].empty()) {
      operationId = make_shared<string>(boost::any_cast<string>(m["operationId"]));
    }
  }


  virtual ~RouteRulesConflictInfoConflictsDetailsConflictingMatchOperationInfo() = default;
};
class RouteRulesConflictInfoConflictsDetailsConflictingMatch : public Darabonba::Model {
public:
  shared_ptr<HttpRouteMatch> match{};
  shared_ptr<RouteRulesConflictInfoConflictsDetailsConflictingMatchOperationInfo> operationInfo{};

  RouteRulesConflictInfoConflictsDetailsConflictingMatch() {}

  explicit RouteRulesConflictInfoConflictsDetailsConflictingMatch(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (match) {
      res["match"] = match ? boost::any(match->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (operationInfo) {
      res["operationInfo"] = operationInfo ? boost::any(operationInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("match") != m.end() && !m["match"].empty()) {
      if (typeid(map<string, boost::any>) == m["match"].type()) {
        HttpRouteMatch model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["match"]));
        match = make_shared<HttpRouteMatch>(model1);
      }
    }
    if (m.find("operationInfo") != m.end() && !m["operationInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["operationInfo"].type()) {
        RouteRulesConflictInfoConflictsDetailsConflictingMatchOperationInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["operationInfo"]));
        operationInfo = make_shared<RouteRulesConflictInfoConflictsDetailsConflictingMatchOperationInfo>(model1);
      }
    }
  }


  virtual ~RouteRulesConflictInfoConflictsDetailsConflictingMatch() = default;
};
class RouteRulesConflictInfoConflictsDetailsDetectedMatchOperationInfo : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> operationId{};

  RouteRulesConflictInfoConflictsDetailsDetectedMatchOperationInfo() {}

  explicit RouteRulesConflictInfoConflictsDetailsDetectedMatchOperationInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (operationId) {
      res["operationId"] = boost::any(*operationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("operationId") != m.end() && !m["operationId"].empty()) {
      operationId = make_shared<string>(boost::any_cast<string>(m["operationId"]));
    }
  }


  virtual ~RouteRulesConflictInfoConflictsDetailsDetectedMatchOperationInfo() = default;
};
class RouteRulesConflictInfoConflictsDetailsDetectedMatch : public Darabonba::Model {
public:
  shared_ptr<HttpRouteMatch> match{};
  shared_ptr<RouteRulesConflictInfoConflictsDetailsDetectedMatchOperationInfo> operationInfo{};

  RouteRulesConflictInfoConflictsDetailsDetectedMatch() {}

  explicit RouteRulesConflictInfoConflictsDetailsDetectedMatch(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (match) {
      res["match"] = match ? boost::any(match->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (operationInfo) {
      res["operationInfo"] = operationInfo ? boost::any(operationInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("match") != m.end() && !m["match"].empty()) {
      if (typeid(map<string, boost::any>) == m["match"].type()) {
        HttpRouteMatch model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["match"]));
        match = make_shared<HttpRouteMatch>(model1);
      }
    }
    if (m.find("operationInfo") != m.end() && !m["operationInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["operationInfo"].type()) {
        RouteRulesConflictInfoConflictsDetailsDetectedMatchOperationInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["operationInfo"]));
        operationInfo = make_shared<RouteRulesConflictInfoConflictsDetailsDetectedMatchOperationInfo>(model1);
      }
    }
  }


  virtual ~RouteRulesConflictInfoConflictsDetailsDetectedMatch() = default;
};
class RouteRulesConflictInfoConflictsDetails : public Darabonba::Model {
public:
  shared_ptr<RouteRulesConflictInfoConflictsDetailsConflictingMatch> conflictingMatch{};
  shared_ptr<RouteRulesConflictInfoConflictsDetailsDetectedMatch> detectedMatch{};
  shared_ptr<string> level{};

  RouteRulesConflictInfoConflictsDetails() {}

  explicit RouteRulesConflictInfoConflictsDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conflictingMatch) {
      res["conflictingMatch"] = conflictingMatch ? boost::any(conflictingMatch->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (detectedMatch) {
      res["detectedMatch"] = detectedMatch ? boost::any(detectedMatch->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (level) {
      res["level"] = boost::any(*level);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("conflictingMatch") != m.end() && !m["conflictingMatch"].empty()) {
      if (typeid(map<string, boost::any>) == m["conflictingMatch"].type()) {
        RouteRulesConflictInfoConflictsDetailsConflictingMatch model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["conflictingMatch"]));
        conflictingMatch = make_shared<RouteRulesConflictInfoConflictsDetailsConflictingMatch>(model1);
      }
    }
    if (m.find("detectedMatch") != m.end() && !m["detectedMatch"].empty()) {
      if (typeid(map<string, boost::any>) == m["detectedMatch"].type()) {
        RouteRulesConflictInfoConflictsDetailsDetectedMatch model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["detectedMatch"]));
        detectedMatch = make_shared<RouteRulesConflictInfoConflictsDetailsDetectedMatch>(model1);
      }
    }
    if (m.find("level") != m.end() && !m["level"].empty()) {
      level = make_shared<string>(boost::any_cast<string>(m["level"]));
    }
  }


  virtual ~RouteRulesConflictInfoConflictsDetails() = default;
};
class RouteRulesConflictInfoConflictsEnvironmentInfo : public Darabonba::Model {
public:
  shared_ptr<string> environmentId{};
  shared_ptr<string> name{};

  RouteRulesConflictInfoConflictsEnvironmentInfo() {}

  explicit RouteRulesConflictInfoConflictsEnvironmentInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (environmentId) {
      res["environmentId"] = boost::any(*environmentId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("environmentId") != m.end() && !m["environmentId"].empty()) {
      environmentId = make_shared<string>(boost::any_cast<string>(m["environmentId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~RouteRulesConflictInfoConflictsEnvironmentInfo() = default;
};
class RouteRulesConflictInfoConflicts : public Darabonba::Model {
public:
  shared_ptr<vector<RouteRulesConflictInfoConflictsDetails>> details{};
  shared_ptr<RouteRulesConflictInfoConflictsEnvironmentInfo> environmentInfo{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> resourceType{};

  RouteRulesConflictInfoConflicts() {}

  explicit RouteRulesConflictInfoConflicts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (details) {
      vector<boost::any> temp1;
      for(auto item1:*details){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["details"] = boost::any(temp1);
    }
    if (environmentInfo) {
      res["environmentInfo"] = environmentInfo ? boost::any(environmentInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (resourceId) {
      res["resourceId"] = boost::any(*resourceId);
    }
    if (resourceName) {
      res["resourceName"] = boost::any(*resourceName);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("details") != m.end() && !m["details"].empty()) {
      if (typeid(vector<boost::any>) == m["details"].type()) {
        vector<RouteRulesConflictInfoConflictsDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["details"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RouteRulesConflictInfoConflictsDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        details = make_shared<vector<RouteRulesConflictInfoConflictsDetails>>(expect1);
      }
    }
    if (m.find("environmentInfo") != m.end() && !m["environmentInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["environmentInfo"].type()) {
        RouteRulesConflictInfoConflictsEnvironmentInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["environmentInfo"]));
        environmentInfo = make_shared<RouteRulesConflictInfoConflictsEnvironmentInfo>(model1);
      }
    }
    if (m.find("resourceId") != m.end() && !m["resourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["resourceId"]));
    }
    if (m.find("resourceName") != m.end() && !m["resourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["resourceName"]));
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
  }


  virtual ~RouteRulesConflictInfoConflicts() = default;
};
class RouteRulesConflictInfoDomainInfo : public Darabonba::Model {
public:
  shared_ptr<string> domainId{};
  shared_ptr<string> name{};

  RouteRulesConflictInfoDomainInfo() {}

  explicit RouteRulesConflictInfoDomainInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainId) {
      res["domainId"] = boost::any(*domainId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("domainId") != m.end() && !m["domainId"].empty()) {
      domainId = make_shared<string>(boost::any_cast<string>(m["domainId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~RouteRulesConflictInfoDomainInfo() = default;
};
class RouteRulesConflictInfo : public Darabonba::Model {
public:
  shared_ptr<vector<RouteRulesConflictInfoConflicts>> conflicts{};
  shared_ptr<RouteRulesConflictInfoDomainInfo> domainInfo{};

  RouteRulesConflictInfo() {}

  explicit RouteRulesConflictInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conflicts) {
      vector<boost::any> temp1;
      for(auto item1:*conflicts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["conflicts"] = boost::any(temp1);
    }
    if (domainInfo) {
      res["domainInfo"] = domainInfo ? boost::any(domainInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("conflicts") != m.end() && !m["conflicts"].empty()) {
      if (typeid(vector<boost::any>) == m["conflicts"].type()) {
        vector<RouteRulesConflictInfoConflicts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["conflicts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RouteRulesConflictInfoConflicts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        conflicts = make_shared<vector<RouteRulesConflictInfoConflicts>>(expect1);
      }
    }
    if (m.find("domainInfo") != m.end() && !m["domainInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["domainInfo"].type()) {
        RouteRulesConflictInfoDomainInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["domainInfo"]));
        domainInfo = make_shared<RouteRulesConflictInfoDomainInfo>(model1);
      }
    }
  }


  virtual ~RouteRulesConflictInfo() = default;
};
class ServiceLinkedRole : public Darabonba::Model {
public:
  shared_ptr<string> arn{};
  shared_ptr<string> assumeRolePolicyDocument{};
  shared_ptr<string> createDate{};
  shared_ptr<string> description{};
  shared_ptr<bool> isServiceLinkedRole{};
  shared_ptr<string> roleId{};
  shared_ptr<string> roleName{};
  shared_ptr<string> rolePrincipalName{};

  ServiceLinkedRole() {}

  explicit ServiceLinkedRole(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arn) {
      res["arn"] = boost::any(*arn);
    }
    if (assumeRolePolicyDocument) {
      res["assumeRolePolicyDocument"] = boost::any(*assumeRolePolicyDocument);
    }
    if (createDate) {
      res["createDate"] = boost::any(*createDate);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (isServiceLinkedRole) {
      res["isServiceLinkedRole"] = boost::any(*isServiceLinkedRole);
    }
    if (roleId) {
      res["roleId"] = boost::any(*roleId);
    }
    if (roleName) {
      res["roleName"] = boost::any(*roleName);
    }
    if (rolePrincipalName) {
      res["rolePrincipalName"] = boost::any(*rolePrincipalName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("arn") != m.end() && !m["arn"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["arn"]));
    }
    if (m.find("assumeRolePolicyDocument") != m.end() && !m["assumeRolePolicyDocument"].empty()) {
      assumeRolePolicyDocument = make_shared<string>(boost::any_cast<string>(m["assumeRolePolicyDocument"]));
    }
    if (m.find("createDate") != m.end() && !m["createDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["createDate"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("isServiceLinkedRole") != m.end() && !m["isServiceLinkedRole"].empty()) {
      isServiceLinkedRole = make_shared<bool>(boost::any_cast<bool>(m["isServiceLinkedRole"]));
    }
    if (m.find("roleId") != m.end() && !m["roleId"].empty()) {
      roleId = make_shared<string>(boost::any_cast<string>(m["roleId"]));
    }
    if (m.find("roleName") != m.end() && !m["roleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["roleName"]));
    }
    if (m.find("rolePrincipalName") != m.end() && !m["rolePrincipalName"].empty()) {
      rolePrincipalName = make_shared<string>(boost::any_cast<string>(m["rolePrincipalName"]));
    }
  }


  virtual ~ServiceLinkedRole() = default;
};
class SslCertMetaInfo : public Darabonba::Model {
public:
  shared_ptr<string> algorithm{};
  shared_ptr<long> certId{};
  shared_ptr<string> certIdentifier{};
  shared_ptr<string> certName{};
  shared_ptr<string> commonName{};
  shared_ptr<string> domain{};
  shared_ptr<bool> domainMatchCert{};
  shared_ptr<string> fingerprint{};
  shared_ptr<string> instanceId{};
  shared_ptr<bool> isChainCompleted{};
  shared_ptr<string> issuer{};
  shared_ptr<string> keySize{};
  shared_ptr<string> md5{};
  shared_ptr<long> notAfterTimestamp{};
  shared_ptr<long> notBeforeTimestamp{};
  shared_ptr<string> sans{};
  shared_ptr<string> serialNo{};
  shared_ptr<string> sha2{};
  shared_ptr<string> signAlgorithm{};

  SslCertMetaInfo() {}

  explicit SslCertMetaInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithm) {
      res["algorithm"] = boost::any(*algorithm);
    }
    if (certId) {
      res["certId"] = boost::any(*certId);
    }
    if (certIdentifier) {
      res["certIdentifier"] = boost::any(*certIdentifier);
    }
    if (certName) {
      res["certName"] = boost::any(*certName);
    }
    if (commonName) {
      res["commonName"] = boost::any(*commonName);
    }
    if (domain) {
      res["domain"] = boost::any(*domain);
    }
    if (domainMatchCert) {
      res["domainMatchCert"] = boost::any(*domainMatchCert);
    }
    if (fingerprint) {
      res["fingerprint"] = boost::any(*fingerprint);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (isChainCompleted) {
      res["isChainCompleted"] = boost::any(*isChainCompleted);
    }
    if (issuer) {
      res["issuer"] = boost::any(*issuer);
    }
    if (keySize) {
      res["keySize"] = boost::any(*keySize);
    }
    if (md5) {
      res["md5"] = boost::any(*md5);
    }
    if (notAfterTimestamp) {
      res["notAfterTimestamp"] = boost::any(*notAfterTimestamp);
    }
    if (notBeforeTimestamp) {
      res["notBeforeTimestamp"] = boost::any(*notBeforeTimestamp);
    }
    if (sans) {
      res["sans"] = boost::any(*sans);
    }
    if (serialNo) {
      res["serialNo"] = boost::any(*serialNo);
    }
    if (sha2) {
      res["sha2"] = boost::any(*sha2);
    }
    if (signAlgorithm) {
      res["signAlgorithm"] = boost::any(*signAlgorithm);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("algorithm") != m.end() && !m["algorithm"].empty()) {
      algorithm = make_shared<string>(boost::any_cast<string>(m["algorithm"]));
    }
    if (m.find("certId") != m.end() && !m["certId"].empty()) {
      certId = make_shared<long>(boost::any_cast<long>(m["certId"]));
    }
    if (m.find("certIdentifier") != m.end() && !m["certIdentifier"].empty()) {
      certIdentifier = make_shared<string>(boost::any_cast<string>(m["certIdentifier"]));
    }
    if (m.find("certName") != m.end() && !m["certName"].empty()) {
      certName = make_shared<string>(boost::any_cast<string>(m["certName"]));
    }
    if (m.find("commonName") != m.end() && !m["commonName"].empty()) {
      commonName = make_shared<string>(boost::any_cast<string>(m["commonName"]));
    }
    if (m.find("domain") != m.end() && !m["domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["domain"]));
    }
    if (m.find("domainMatchCert") != m.end() && !m["domainMatchCert"].empty()) {
      domainMatchCert = make_shared<bool>(boost::any_cast<bool>(m["domainMatchCert"]));
    }
    if (m.find("fingerprint") != m.end() && !m["fingerprint"].empty()) {
      fingerprint = make_shared<string>(boost::any_cast<string>(m["fingerprint"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("isChainCompleted") != m.end() && !m["isChainCompleted"].empty()) {
      isChainCompleted = make_shared<bool>(boost::any_cast<bool>(m["isChainCompleted"]));
    }
    if (m.find("issuer") != m.end() && !m["issuer"].empty()) {
      issuer = make_shared<string>(boost::any_cast<string>(m["issuer"]));
    }
    if (m.find("keySize") != m.end() && !m["keySize"].empty()) {
      keySize = make_shared<string>(boost::any_cast<string>(m["keySize"]));
    }
    if (m.find("md5") != m.end() && !m["md5"].empty()) {
      md5 = make_shared<string>(boost::any_cast<string>(m["md5"]));
    }
    if (m.find("notAfterTimestamp") != m.end() && !m["notAfterTimestamp"].empty()) {
      notAfterTimestamp = make_shared<long>(boost::any_cast<long>(m["notAfterTimestamp"]));
    }
    if (m.find("notBeforeTimestamp") != m.end() && !m["notBeforeTimestamp"].empty()) {
      notBeforeTimestamp = make_shared<long>(boost::any_cast<long>(m["notBeforeTimestamp"]));
    }
    if (m.find("sans") != m.end() && !m["sans"].empty()) {
      sans = make_shared<string>(boost::any_cast<string>(m["sans"]));
    }
    if (m.find("serialNo") != m.end() && !m["serialNo"].empty()) {
      serialNo = make_shared<string>(boost::any_cast<string>(m["serialNo"]));
    }
    if (m.find("sha2") != m.end() && !m["sha2"].empty()) {
      sha2 = make_shared<string>(boost::any_cast<string>(m["sha2"]));
    }
    if (m.find("signAlgorithm") != m.end() && !m["signAlgorithm"].empty()) {
      signAlgorithm = make_shared<string>(boost::any_cast<string>(m["signAlgorithm"]));
    }
  }


  virtual ~SslCertMetaInfo() = default;
};
class AddGatewaySecurityGroupRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<vector<string>> portRanges{};
  shared_ptr<string> securityGroupId{};

  AddGatewaySecurityGroupRuleRequest() {}

  explicit AddGatewaySecurityGroupRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (portRanges) {
      res["portRanges"] = boost::any(*portRanges);
    }
    if (securityGroupId) {
      res["securityGroupId"] = boost::any(*securityGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("portRanges") != m.end() && !m["portRanges"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["portRanges"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["portRanges"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      portRanges = make_shared<vector<string>>(toVec1);
    }
    if (m.find("securityGroupId") != m.end() && !m["securityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["securityGroupId"]));
    }
  }


  virtual ~AddGatewaySecurityGroupRuleRequest() = default;
};
class AddGatewaySecurityGroupRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  AddGatewaySecurityGroupRuleResponseBody() {}

  explicit AddGatewaySecurityGroupRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~AddGatewaySecurityGroupRuleResponseBody() = default;
};
class AddGatewaySecurityGroupRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddGatewaySecurityGroupRuleResponseBody> body{};

  AddGatewaySecurityGroupRuleResponse() {}

  explicit AddGatewaySecurityGroupRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddGatewaySecurityGroupRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddGatewaySecurityGroupRuleResponseBody>(model1);
      }
    }
  }


  virtual ~AddGatewaySecurityGroupRuleResponse() = default;
};
class CreateDomainRequest : public Darabonba::Model {
public:
  shared_ptr<string> caCertIndentifier{};
  shared_ptr<string> certIndentifier{};
  shared_ptr<bool> forceHttps{};
  shared_ptr<string> http2Option{};
  shared_ptr<string> name{};
  shared_ptr<string> protocol{};
  shared_ptr<string> tlsMax{};
  shared_ptr<string> tlsMin{};

  CreateDomainRequest() {}

  explicit CreateDomainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (caCertIndentifier) {
      res["caCertIndentifier"] = boost::any(*caCertIndentifier);
    }
    if (certIndentifier) {
      res["certIndentifier"] = boost::any(*certIndentifier);
    }
    if (forceHttps) {
      res["forceHttps"] = boost::any(*forceHttps);
    }
    if (http2Option) {
      res["http2Option"] = boost::any(*http2Option);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (protocol) {
      res["protocol"] = boost::any(*protocol);
    }
    if (tlsMax) {
      res["tlsMax"] = boost::any(*tlsMax);
    }
    if (tlsMin) {
      res["tlsMin"] = boost::any(*tlsMin);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("caCertIndentifier") != m.end() && !m["caCertIndentifier"].empty()) {
      caCertIndentifier = make_shared<string>(boost::any_cast<string>(m["caCertIndentifier"]));
    }
    if (m.find("certIndentifier") != m.end() && !m["certIndentifier"].empty()) {
      certIndentifier = make_shared<string>(boost::any_cast<string>(m["certIndentifier"]));
    }
    if (m.find("forceHttps") != m.end() && !m["forceHttps"].empty()) {
      forceHttps = make_shared<bool>(boost::any_cast<bool>(m["forceHttps"]));
    }
    if (m.find("http2Option") != m.end() && !m["http2Option"].empty()) {
      http2Option = make_shared<string>(boost::any_cast<string>(m["http2Option"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("protocol") != m.end() && !m["protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["protocol"]));
    }
    if (m.find("tlsMax") != m.end() && !m["tlsMax"].empty()) {
      tlsMax = make_shared<string>(boost::any_cast<string>(m["tlsMax"]));
    }
    if (m.find("tlsMin") != m.end() && !m["tlsMin"].empty()) {
      tlsMin = make_shared<string>(boost::any_cast<string>(m["tlsMin"]));
    }
  }


  virtual ~CreateDomainRequest() = default;
};
class CreateDomainResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> domainId{};

  CreateDomainResponseBodyData() {}

  explicit CreateDomainResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainId) {
      res["domainId"] = boost::any(*domainId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("domainId") != m.end() && !m["domainId"].empty()) {
      domainId = make_shared<string>(boost::any_cast<string>(m["domainId"]));
    }
  }


  virtual ~CreateDomainResponseBodyData() = default;
};
class CreateDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateDomainResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CreateDomainResponseBody() {}

  explicit CreateDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        CreateDomainResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<CreateDomainResponseBodyData>(model1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~CreateDomainResponseBody() = default;
};
class CreateDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDomainResponseBody> body{};

  CreateDomainResponse() {}

  explicit CreateDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateDomainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDomainResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDomainResponse() = default;
};
class CreateEnvironmentRequest : public Darabonba::Model {
public:
  shared_ptr<string> alias{};
  shared_ptr<string> description{};
  shared_ptr<string> gatewayId{};
  shared_ptr<string> name{};

  CreateEnvironmentRequest() {}

  explicit CreateEnvironmentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alias) {
      res["alias"] = boost::any(*alias);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (gatewayId) {
      res["gatewayId"] = boost::any(*gatewayId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("alias") != m.end() && !m["alias"].empty()) {
      alias = make_shared<string>(boost::any_cast<string>(m["alias"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("gatewayId") != m.end() && !m["gatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["gatewayId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~CreateEnvironmentRequest() = default;
};
class CreateEnvironmentResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> environmentId{};

  CreateEnvironmentResponseBodyData() {}

  explicit CreateEnvironmentResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (environmentId) {
      res["environmentId"] = boost::any(*environmentId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("environmentId") != m.end() && !m["environmentId"].empty()) {
      environmentId = make_shared<string>(boost::any_cast<string>(m["environmentId"]));
    }
  }


  virtual ~CreateEnvironmentResponseBodyData() = default;
};
class CreateEnvironmentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateEnvironmentResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CreateEnvironmentResponseBody() {}

  explicit CreateEnvironmentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        CreateEnvironmentResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<CreateEnvironmentResponseBodyData>(model1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~CreateEnvironmentResponseBody() = default;
};
class CreateEnvironmentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateEnvironmentResponseBody> body{};

  CreateEnvironmentResponse() {}

  explicit CreateEnvironmentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateEnvironmentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateEnvironmentResponseBody>(model1);
      }
    }
  }


  virtual ~CreateEnvironmentResponse() = default;
};
class CreateGatewayRouteRequest : public Darabonba::Model {
public:
  shared_ptr<GatewayRouteBackendConfig> backendConfig{};
  shared_ptr<string> description{};
  shared_ptr<GatewayRouteDomainConfig> domainConfig{};
  shared_ptr<HttpRouteMatch> match{};
  shared_ptr<string> name{};

  CreateGatewayRouteRequest() {}

  explicit CreateGatewayRouteRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backendConfig) {
      res["backendConfig"] = backendConfig ? boost::any(backendConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (domainConfig) {
      res["domainConfig"] = domainConfig ? boost::any(domainConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (match) {
      res["match"] = match ? boost::any(match->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("backendConfig") != m.end() && !m["backendConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["backendConfig"].type()) {
        GatewayRouteBackendConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["backendConfig"]));
        backendConfig = make_shared<GatewayRouteBackendConfig>(model1);
      }
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("domainConfig") != m.end() && !m["domainConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["domainConfig"].type()) {
        GatewayRouteDomainConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["domainConfig"]));
        domainConfig = make_shared<GatewayRouteDomainConfig>(model1);
      }
    }
    if (m.find("match") != m.end() && !m["match"].empty()) {
      if (typeid(map<string, boost::any>) == m["match"].type()) {
        HttpRouteMatch model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["match"]));
        match = make_shared<HttpRouteMatch>(model1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~CreateGatewayRouteRequest() = default;
};
class CreateGatewayRouteResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> gatewayRouteId{};

  CreateGatewayRouteResponseBodyData() {}

  explicit CreateGatewayRouteResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayRouteId) {
      res["gatewayRouteId"] = boost::any(*gatewayRouteId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("gatewayRouteId") != m.end() && !m["gatewayRouteId"].empty()) {
      gatewayRouteId = make_shared<string>(boost::any_cast<string>(m["gatewayRouteId"]));
    }
  }


  virtual ~CreateGatewayRouteResponseBodyData() = default;
};
class CreateGatewayRouteResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateGatewayRouteResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CreateGatewayRouteResponseBody() {}

  explicit CreateGatewayRouteResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        CreateGatewayRouteResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<CreateGatewayRouteResponseBodyData>(model1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~CreateGatewayRouteResponseBody() = default;
};
class CreateGatewayRouteResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateGatewayRouteResponseBody> body{};

  CreateGatewayRouteResponse() {}

  explicit CreateGatewayRouteResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateGatewayRouteResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateGatewayRouteResponseBody>(model1);
      }
    }
  }


  virtual ~CreateGatewayRouteResponse() = default;
};
class CreateGatewayServiceRequestGatewayServiceConfigs : public Darabonba::Model {
public:
  shared_ptr<vector<string>> addresses{};
  shared_ptr<string> groupName{};
  shared_ptr<string> name{};
  shared_ptr<string> namespace_{};
  shared_ptr<long> port{};
  shared_ptr<string> qualifier{};

  CreateGatewayServiceRequestGatewayServiceConfigs() {}

  explicit CreateGatewayServiceRequestGatewayServiceConfigs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addresses) {
      res["addresses"] = boost::any(*addresses);
    }
    if (groupName) {
      res["groupName"] = boost::any(*groupName);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (namespace_) {
      res["namespace"] = boost::any(*namespace_);
    }
    if (port) {
      res["port"] = boost::any(*port);
    }
    if (qualifier) {
      res["qualifier"] = boost::any(*qualifier);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("addresses") != m.end() && !m["addresses"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["addresses"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["addresses"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      addresses = make_shared<vector<string>>(toVec1);
    }
    if (m.find("groupName") != m.end() && !m["groupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["groupName"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("namespace") != m.end() && !m["namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["namespace"]));
    }
    if (m.find("port") != m.end() && !m["port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["port"]));
    }
    if (m.find("qualifier") != m.end() && !m["qualifier"].empty()) {
      qualifier = make_shared<string>(boost::any_cast<string>(m["qualifier"]));
    }
  }


  virtual ~CreateGatewayServiceRequestGatewayServiceConfigs() = default;
};
class CreateGatewayServiceRequest : public Darabonba::Model {
public:
  shared_ptr<vector<CreateGatewayServiceRequestGatewayServiceConfigs>> gatewayServiceConfigs{};
  shared_ptr<string> sourceType{};

  CreateGatewayServiceRequest() {}

  explicit CreateGatewayServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayServiceConfigs) {
      vector<boost::any> temp1;
      for(auto item1:*gatewayServiceConfigs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["gatewayServiceConfigs"] = boost::any(temp1);
    }
    if (sourceType) {
      res["sourceType"] = boost::any(*sourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("gatewayServiceConfigs") != m.end() && !m["gatewayServiceConfigs"].empty()) {
      if (typeid(vector<boost::any>) == m["gatewayServiceConfigs"].type()) {
        vector<CreateGatewayServiceRequestGatewayServiceConfigs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["gatewayServiceConfigs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateGatewayServiceRequestGatewayServiceConfigs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        gatewayServiceConfigs = make_shared<vector<CreateGatewayServiceRequestGatewayServiceConfigs>>(expect1);
      }
    }
    if (m.find("sourceType") != m.end() && !m["sourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["sourceType"]));
    }
  }


  virtual ~CreateGatewayServiceRequest() = default;
};
class CreateGatewayServiceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<string>> gatewayServiceIds{};

  CreateGatewayServiceResponseBodyData() {}

  explicit CreateGatewayServiceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayServiceIds) {
      res["gatewayServiceIds"] = boost::any(*gatewayServiceIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("gatewayServiceIds") != m.end() && !m["gatewayServiceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["gatewayServiceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["gatewayServiceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      gatewayServiceIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateGatewayServiceResponseBodyData() = default;
};
class CreateGatewayServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateGatewayServiceResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CreateGatewayServiceResponseBody() {}

  explicit CreateGatewayServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        CreateGatewayServiceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<CreateGatewayServiceResponseBodyData>(model1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~CreateGatewayServiceResponseBody() = default;
};
class CreateGatewayServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateGatewayServiceResponseBody> body{};

  CreateGatewayServiceResponse() {}

  explicit CreateGatewayServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateGatewayServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateGatewayServiceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateGatewayServiceResponse() = default;
};
class CreateGatewayServiceVersionRequestLabels : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateGatewayServiceVersionRequestLabels() {}

  explicit CreateGatewayServiceVersionRequestLabels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~CreateGatewayServiceVersionRequestLabels() = default;
};
class CreateGatewayServiceVersionRequest : public Darabonba::Model {
public:
  shared_ptr<vector<CreateGatewayServiceVersionRequestLabels>> labels{};
  shared_ptr<string> name{};

  CreateGatewayServiceVersionRequest() {}

  explicit CreateGatewayServiceVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["labels"] = boost::any(temp1);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("labels") != m.end() && !m["labels"].empty()) {
      if (typeid(vector<boost::any>) == m["labels"].type()) {
        vector<CreateGatewayServiceVersionRequestLabels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateGatewayServiceVersionRequestLabels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<CreateGatewayServiceVersionRequestLabels>>(expect1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~CreateGatewayServiceVersionRequest() = default;
};
class CreateGatewayServiceVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CreateGatewayServiceVersionResponseBody() {}

  explicit CreateGatewayServiceVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~CreateGatewayServiceVersionResponseBody() = default;
};
class CreateGatewayServiceVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateGatewayServiceVersionResponseBody> body{};

  CreateGatewayServiceVersionResponse() {}

  explicit CreateGatewayServiceVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateGatewayServiceVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateGatewayServiceVersionResponseBody>(model1);
      }
    }
  }


  virtual ~CreateGatewayServiceVersionResponse() = default;
};
class CreateHttpApiRequest : public Darabonba::Model {
public:
  shared_ptr<string> basePath{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<vector<string>> protocols{};
  shared_ptr<HttpApiVersionConfig> versionConfig{};

  CreateHttpApiRequest() {}

  explicit CreateHttpApiRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (basePath) {
      res["basePath"] = boost::any(*basePath);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (protocols) {
      res["protocols"] = boost::any(*protocols);
    }
    if (versionConfig) {
      res["versionConfig"] = versionConfig ? boost::any(versionConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("basePath") != m.end() && !m["basePath"].empty()) {
      basePath = make_shared<string>(boost::any_cast<string>(m["basePath"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("protocols") != m.end() && !m["protocols"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["protocols"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["protocols"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      protocols = make_shared<vector<string>>(toVec1);
    }
    if (m.find("versionConfig") != m.end() && !m["versionConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["versionConfig"].type()) {
        HttpApiVersionConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["versionConfig"]));
        versionConfig = make_shared<HttpApiVersionConfig>(model1);
      }
    }
  }


  virtual ~CreateHttpApiRequest() = default;
};
class CreateHttpApiResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> httpApiId{};
  shared_ptr<string> name{};

  CreateHttpApiResponseBodyData() {}

  explicit CreateHttpApiResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (httpApiId) {
      res["httpApiId"] = boost::any(*httpApiId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("httpApiId") != m.end() && !m["httpApiId"].empty()) {
      httpApiId = make_shared<string>(boost::any_cast<string>(m["httpApiId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~CreateHttpApiResponseBodyData() = default;
};
class CreateHttpApiResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateHttpApiResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CreateHttpApiResponseBody() {}

  explicit CreateHttpApiResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        CreateHttpApiResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<CreateHttpApiResponseBodyData>(model1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~CreateHttpApiResponseBody() = default;
};
class CreateHttpApiResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateHttpApiResponseBody> body{};

  CreateHttpApiResponse() {}

  explicit CreateHttpApiResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateHttpApiResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateHttpApiResponseBody>(model1);
      }
    }
  }


  virtual ~CreateHttpApiResponse() = default;
};
class CreateHttpApiOperationRequest : public Darabonba::Model {
public:
  shared_ptr<vector<HttpApiOperation>> operations{};

  CreateHttpApiOperationRequest() {}

  explicit CreateHttpApiOperationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operations) {
      vector<boost::any> temp1;
      for(auto item1:*operations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["operations"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("operations") != m.end() && !m["operations"].empty()) {
      if (typeid(vector<boost::any>) == m["operations"].type()) {
        vector<HttpApiOperation> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["operations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HttpApiOperation model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        operations = make_shared<vector<HttpApiOperation>>(expect1);
      }
    }
  }


  virtual ~CreateHttpApiOperationRequest() = default;
};
class CreateHttpApiOperationResponseBodyDataOperations : public Darabonba::Model {
public:
  shared_ptr<string> operationId{};

  CreateHttpApiOperationResponseBodyDataOperations() {}

  explicit CreateHttpApiOperationResponseBodyDataOperations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operationId) {
      res["operationId"] = boost::any(*operationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("operationId") != m.end() && !m["operationId"].empty()) {
      operationId = make_shared<string>(boost::any_cast<string>(m["operationId"]));
    }
  }


  virtual ~CreateHttpApiOperationResponseBodyDataOperations() = default;
};
class CreateHttpApiOperationResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<CreateHttpApiOperationResponseBodyDataOperations>> operations{};

  CreateHttpApiOperationResponseBodyData() {}

  explicit CreateHttpApiOperationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operations) {
      vector<boost::any> temp1;
      for(auto item1:*operations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["operations"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("operations") != m.end() && !m["operations"].empty()) {
      if (typeid(vector<boost::any>) == m["operations"].type()) {
        vector<CreateHttpApiOperationResponseBodyDataOperations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["operations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateHttpApiOperationResponseBodyDataOperations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        operations = make_shared<vector<CreateHttpApiOperationResponseBodyDataOperations>>(expect1);
      }
    }
  }


  virtual ~CreateHttpApiOperationResponseBodyData() = default;
};
class CreateHttpApiOperationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateHttpApiOperationResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CreateHttpApiOperationResponseBody() {}

  explicit CreateHttpApiOperationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        CreateHttpApiOperationResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<CreateHttpApiOperationResponseBodyData>(model1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~CreateHttpApiOperationResponseBody() = default;
};
class CreateHttpApiOperationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateHttpApiOperationResponseBody> body{};

  CreateHttpApiOperationResponse() {}

  explicit CreateHttpApiOperationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateHttpApiOperationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateHttpApiOperationResponseBody>(model1);
      }
    }
  }


  virtual ~CreateHttpApiOperationResponse() = default;
};
class CreateServiceSourceRequestK8sServiceSourceConfigAuthorizeSecurityGroupRules : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<vector<string>> portRanges{};
  shared_ptr<string> securityGroupId{};

  CreateServiceSourceRequestK8sServiceSourceConfigAuthorizeSecurityGroupRules() {}

  explicit CreateServiceSourceRequestK8sServiceSourceConfigAuthorizeSecurityGroupRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (portRanges) {
      res["portRanges"] = boost::any(*portRanges);
    }
    if (securityGroupId) {
      res["securityGroupId"] = boost::any(*securityGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("portRanges") != m.end() && !m["portRanges"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["portRanges"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["portRanges"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      portRanges = make_shared<vector<string>>(toVec1);
    }
    if (m.find("securityGroupId") != m.end() && !m["securityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["securityGroupId"]));
    }
  }


  virtual ~CreateServiceSourceRequestK8sServiceSourceConfigAuthorizeSecurityGroupRules() = default;
};
class CreateServiceSourceRequestK8sServiceSourceConfigIngressConfig : public Darabonba::Model {
public:
  shared_ptr<bool> enable{};
  shared_ptr<string> ingressClass{};
  shared_ptr<bool> overrideIngressIp{};
  shared_ptr<string> watchNamespace{};

  CreateServiceSourceRequestK8sServiceSourceConfigIngressConfig() {}

  explicit CreateServiceSourceRequestK8sServiceSourceConfigIngressConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enable) {
      res["enable"] = boost::any(*enable);
    }
    if (ingressClass) {
      res["ingressClass"] = boost::any(*ingressClass);
    }
    if (overrideIngressIp) {
      res["overrideIngressIp"] = boost::any(*overrideIngressIp);
    }
    if (watchNamespace) {
      res["watchNamespace"] = boost::any(*watchNamespace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enable") != m.end() && !m["enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["enable"]));
    }
    if (m.find("ingressClass") != m.end() && !m["ingressClass"].empty()) {
      ingressClass = make_shared<string>(boost::any_cast<string>(m["ingressClass"]));
    }
    if (m.find("overrideIngressIp") != m.end() && !m["overrideIngressIp"].empty()) {
      overrideIngressIp = make_shared<bool>(boost::any_cast<bool>(m["overrideIngressIp"]));
    }
    if (m.find("watchNamespace") != m.end() && !m["watchNamespace"].empty()) {
      watchNamespace = make_shared<string>(boost::any_cast<string>(m["watchNamespace"]));
    }
  }


  virtual ~CreateServiceSourceRequestK8sServiceSourceConfigIngressConfig() = default;
};
class CreateServiceSourceRequestK8sServiceSourceConfig : public Darabonba::Model {
public:
  shared_ptr<vector<CreateServiceSourceRequestK8sServiceSourceConfigAuthorizeSecurityGroupRules>> authorizeSecurityGroupRules{};
  shared_ptr<string> clusterId{};
  shared_ptr<CreateServiceSourceRequestK8sServiceSourceConfigIngressConfig> ingressConfig{};

  CreateServiceSourceRequestK8sServiceSourceConfig() {}

  explicit CreateServiceSourceRequestK8sServiceSourceConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorizeSecurityGroupRules) {
      vector<boost::any> temp1;
      for(auto item1:*authorizeSecurityGroupRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["authorizeSecurityGroupRules"] = boost::any(temp1);
    }
    if (clusterId) {
      res["clusterId"] = boost::any(*clusterId);
    }
    if (ingressConfig) {
      res["ingressConfig"] = ingressConfig ? boost::any(ingressConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("authorizeSecurityGroupRules") != m.end() && !m["authorizeSecurityGroupRules"].empty()) {
      if (typeid(vector<boost::any>) == m["authorizeSecurityGroupRules"].type()) {
        vector<CreateServiceSourceRequestK8sServiceSourceConfigAuthorizeSecurityGroupRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["authorizeSecurityGroupRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateServiceSourceRequestK8sServiceSourceConfigAuthorizeSecurityGroupRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        authorizeSecurityGroupRules = make_shared<vector<CreateServiceSourceRequestK8sServiceSourceConfigAuthorizeSecurityGroupRules>>(expect1);
      }
    }
    if (m.find("clusterId") != m.end() && !m["clusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["clusterId"]));
    }
    if (m.find("ingressConfig") != m.end() && !m["ingressConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["ingressConfig"].type()) {
        CreateServiceSourceRequestK8sServiceSourceConfigIngressConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ingressConfig"]));
        ingressConfig = make_shared<CreateServiceSourceRequestK8sServiceSourceConfigIngressConfig>(model1);
      }
    }
  }


  virtual ~CreateServiceSourceRequestK8sServiceSourceConfig() = default;
};
class CreateServiceSourceRequestNacosServiceSourceConfig : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  CreateServiceSourceRequestNacosServiceSourceConfig() {}

  explicit CreateServiceSourceRequestNacosServiceSourceConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
  }


  virtual ~CreateServiceSourceRequestNacosServiceSourceConfig() = default;
};
class CreateServiceSourceRequest : public Darabonba::Model {
public:
  shared_ptr<CreateServiceSourceRequestK8sServiceSourceConfig> k8sServiceSourceConfig{};
  shared_ptr<CreateServiceSourceRequestNacosServiceSourceConfig> nacosServiceSourceConfig{};
  shared_ptr<string> type{};

  CreateServiceSourceRequest() {}

  explicit CreateServiceSourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (k8sServiceSourceConfig) {
      res["k8sServiceSourceConfig"] = k8sServiceSourceConfig ? boost::any(k8sServiceSourceConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (nacosServiceSourceConfig) {
      res["nacosServiceSourceConfig"] = nacosServiceSourceConfig ? boost::any(nacosServiceSourceConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("k8sServiceSourceConfig") != m.end() && !m["k8sServiceSourceConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["k8sServiceSourceConfig"].type()) {
        CreateServiceSourceRequestK8sServiceSourceConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["k8sServiceSourceConfig"]));
        k8sServiceSourceConfig = make_shared<CreateServiceSourceRequestK8sServiceSourceConfig>(model1);
      }
    }
    if (m.find("nacosServiceSourceConfig") != m.end() && !m["nacosServiceSourceConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["nacosServiceSourceConfig"].type()) {
        CreateServiceSourceRequestNacosServiceSourceConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["nacosServiceSourceConfig"]));
        nacosServiceSourceConfig = make_shared<CreateServiceSourceRequestNacosServiceSourceConfig>(model1);
      }
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~CreateServiceSourceRequest() = default;
};
class CreateServiceSourceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> serviceSourceId{};

  CreateServiceSourceResponseBodyData() {}

  explicit CreateServiceSourceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceSourceId) {
      res["serviceSourceId"] = boost::any(*serviceSourceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("serviceSourceId") != m.end() && !m["serviceSourceId"].empty()) {
      serviceSourceId = make_shared<string>(boost::any_cast<string>(m["serviceSourceId"]));
    }
  }


  virtual ~CreateServiceSourceResponseBodyData() = default;
};
class CreateServiceSourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateServiceSourceResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CreateServiceSourceResponseBody() {}

  explicit CreateServiceSourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        CreateServiceSourceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<CreateServiceSourceResponseBodyData>(model1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~CreateServiceSourceResponseBody() = default;
};
class CreateServiceSourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateServiceSourceResponseBody> body{};

  CreateServiceSourceResponse() {}

  explicit CreateServiceSourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateServiceSourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateServiceSourceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateServiceSourceResponse() = default;
};
class DeleteDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeleteDomainResponseBody() {}

  explicit DeleteDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~DeleteDomainResponseBody() = default;
};
class DeleteDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDomainResponseBody> body{};

  DeleteDomainResponse() {}

  explicit DeleteDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteDomainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDomainResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDomainResponse() = default;
};
class DeleteEnvironmentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeleteEnvironmentResponseBody() {}

  explicit DeleteEnvironmentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~DeleteEnvironmentResponseBody() = default;
};
class DeleteEnvironmentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteEnvironmentResponseBody> body{};

  DeleteEnvironmentResponse() {}

  explicit DeleteEnvironmentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteEnvironmentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteEnvironmentResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteEnvironmentResponse() = default;
};
class DeleteGatewayResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeleteGatewayResponseBody() {}

  explicit DeleteGatewayResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
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
class DeleteGatewayRouteResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeleteGatewayRouteResponseBody() {}

  explicit DeleteGatewayRouteResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~DeleteGatewayRouteResponseBody() = default;
};
class DeleteGatewayRouteResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteGatewayRouteResponseBody> body{};

  DeleteGatewayRouteResponse() {}

  explicit DeleteGatewayRouteResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteGatewayRouteResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteGatewayRouteResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteGatewayRouteResponse() = default;
};
class DeleteGatewayServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeleteGatewayServiceResponseBody() {}

  explicit DeleteGatewayServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~DeleteGatewayServiceResponseBody() = default;
};
class DeleteGatewayServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteGatewayServiceResponseBody> body{};

  DeleteGatewayServiceResponse() {}

  explicit DeleteGatewayServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteGatewayServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteGatewayServiceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteGatewayServiceResponse() = default;
};
class DeleteGatewayServiceVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeleteGatewayServiceVersionResponseBody() {}

  explicit DeleteGatewayServiceVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~DeleteGatewayServiceVersionResponseBody() = default;
};
class DeleteGatewayServiceVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteGatewayServiceVersionResponseBody> body{};

  DeleteGatewayServiceVersionResponse() {}

  explicit DeleteGatewayServiceVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteGatewayServiceVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteGatewayServiceVersionResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteGatewayServiceVersionResponse() = default;
};
class DeleteHttpApiResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeleteHttpApiResponseBody() {}

  explicit DeleteHttpApiResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~DeleteHttpApiResponseBody() = default;
};
class DeleteHttpApiResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteHttpApiResponseBody> body{};

  DeleteHttpApiResponse() {}

  explicit DeleteHttpApiResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteHttpApiResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteHttpApiResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteHttpApiResponse() = default;
};
class DeleteHttpApiOperationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeleteHttpApiOperationResponseBody() {}

  explicit DeleteHttpApiOperationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~DeleteHttpApiOperationResponseBody() = default;
};
class DeleteHttpApiOperationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteHttpApiOperationResponseBody> body{};

  DeleteHttpApiOperationResponse() {}

  explicit DeleteHttpApiOperationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteHttpApiOperationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteHttpApiOperationResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteHttpApiOperationResponse() = default;
};
class DeleteServiceSourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeleteServiceSourceResponseBody() {}

  explicit DeleteServiceSourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~DeleteServiceSourceResponseBody() = default;
};
class DeleteServiceSourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteServiceSourceResponseBody> body{};

  DeleteServiceSourceResponse() {}

  explicit DeleteServiceSourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteServiceSourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteServiceSourceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteServiceSourceResponse() = default;
};
class GetDomainResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> algorithm{};
  shared_ptr<string> caCertIndentifier{};
  shared_ptr<string> certIndentifier{};
  shared_ptr<string> certName{};
  shared_ptr<string> createFrom{};
  shared_ptr<long> createTimestamp{};
  shared_ptr<bool> default_{};
  shared_ptr<string> domainId{};
  shared_ptr<bool> forceHttps{};
  shared_ptr<string> http2Option{};
  shared_ptr<string> issuer{};
  shared_ptr<string> name{};
  shared_ptr<long> notAfterTimstamp{};
  shared_ptr<long> notBeforeTimestamp{};
  shared_ptr<string> protocol{};
  shared_ptr<string> sans{};
  shared_ptr<string> tlsMax{};
  shared_ptr<string> tlsMin{};
  shared_ptr<long> updatetimestamp{};

  GetDomainResponseBodyData() {}

  explicit GetDomainResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithm) {
      res["algorithm"] = boost::any(*algorithm);
    }
    if (caCertIndentifier) {
      res["caCertIndentifier"] = boost::any(*caCertIndentifier);
    }
    if (certIndentifier) {
      res["certIndentifier"] = boost::any(*certIndentifier);
    }
    if (certName) {
      res["certName"] = boost::any(*certName);
    }
    if (createFrom) {
      res["createFrom"] = boost::any(*createFrom);
    }
    if (createTimestamp) {
      res["createTimestamp"] = boost::any(*createTimestamp);
    }
    if (default_) {
      res["default"] = boost::any(*default_);
    }
    if (domainId) {
      res["domainId"] = boost::any(*domainId);
    }
    if (forceHttps) {
      res["forceHttps"] = boost::any(*forceHttps);
    }
    if (http2Option) {
      res["http2Option"] = boost::any(*http2Option);
    }
    if (issuer) {
      res["issuer"] = boost::any(*issuer);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (notAfterTimstamp) {
      res["notAfterTimstamp"] = boost::any(*notAfterTimstamp);
    }
    if (notBeforeTimestamp) {
      res["notBeforeTimestamp"] = boost::any(*notBeforeTimestamp);
    }
    if (protocol) {
      res["protocol"] = boost::any(*protocol);
    }
    if (sans) {
      res["sans"] = boost::any(*sans);
    }
    if (tlsMax) {
      res["tlsMax"] = boost::any(*tlsMax);
    }
    if (tlsMin) {
      res["tlsMin"] = boost::any(*tlsMin);
    }
    if (updatetimestamp) {
      res["updatetimestamp"] = boost::any(*updatetimestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("algorithm") != m.end() && !m["algorithm"].empty()) {
      algorithm = make_shared<string>(boost::any_cast<string>(m["algorithm"]));
    }
    if (m.find("caCertIndentifier") != m.end() && !m["caCertIndentifier"].empty()) {
      caCertIndentifier = make_shared<string>(boost::any_cast<string>(m["caCertIndentifier"]));
    }
    if (m.find("certIndentifier") != m.end() && !m["certIndentifier"].empty()) {
      certIndentifier = make_shared<string>(boost::any_cast<string>(m["certIndentifier"]));
    }
    if (m.find("certName") != m.end() && !m["certName"].empty()) {
      certName = make_shared<string>(boost::any_cast<string>(m["certName"]));
    }
    if (m.find("createFrom") != m.end() && !m["createFrom"].empty()) {
      createFrom = make_shared<string>(boost::any_cast<string>(m["createFrom"]));
    }
    if (m.find("createTimestamp") != m.end() && !m["createTimestamp"].empty()) {
      createTimestamp = make_shared<long>(boost::any_cast<long>(m["createTimestamp"]));
    }
    if (m.find("default") != m.end() && !m["default"].empty()) {
      default_ = make_shared<bool>(boost::any_cast<bool>(m["default"]));
    }
    if (m.find("domainId") != m.end() && !m["domainId"].empty()) {
      domainId = make_shared<string>(boost::any_cast<string>(m["domainId"]));
    }
    if (m.find("forceHttps") != m.end() && !m["forceHttps"].empty()) {
      forceHttps = make_shared<bool>(boost::any_cast<bool>(m["forceHttps"]));
    }
    if (m.find("http2Option") != m.end() && !m["http2Option"].empty()) {
      http2Option = make_shared<string>(boost::any_cast<string>(m["http2Option"]));
    }
    if (m.find("issuer") != m.end() && !m["issuer"].empty()) {
      issuer = make_shared<string>(boost::any_cast<string>(m["issuer"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("notAfterTimstamp") != m.end() && !m["notAfterTimstamp"].empty()) {
      notAfterTimstamp = make_shared<long>(boost::any_cast<long>(m["notAfterTimstamp"]));
    }
    if (m.find("notBeforeTimestamp") != m.end() && !m["notBeforeTimestamp"].empty()) {
      notBeforeTimestamp = make_shared<long>(boost::any_cast<long>(m["notBeforeTimestamp"]));
    }
    if (m.find("protocol") != m.end() && !m["protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["protocol"]));
    }
    if (m.find("sans") != m.end() && !m["sans"].empty()) {
      sans = make_shared<string>(boost::any_cast<string>(m["sans"]));
    }
    if (m.find("tlsMax") != m.end() && !m["tlsMax"].empty()) {
      tlsMax = make_shared<string>(boost::any_cast<string>(m["tlsMax"]));
    }
    if (m.find("tlsMin") != m.end() && !m["tlsMin"].empty()) {
      tlsMin = make_shared<string>(boost::any_cast<string>(m["tlsMin"]));
    }
    if (m.find("updatetimestamp") != m.end() && !m["updatetimestamp"].empty()) {
      updatetimestamp = make_shared<long>(boost::any_cast<long>(m["updatetimestamp"]));
    }
  }


  virtual ~GetDomainResponseBodyData() = default;
};
class GetDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetDomainResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetDomainResponseBody() {}

  explicit GetDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetDomainResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetDomainResponseBodyData>(model1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetDomainResponseBody() = default;
};
class GetDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDomainResponseBody> body{};

  GetDomainResponse() {}

  explicit GetDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetDomainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDomainResponseBody>(model1);
      }
    }
  }


  virtual ~GetDomainResponse() = default;
};
class GetEnvironmentResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> alias{};
  shared_ptr<long> createTimestamp{};
  shared_ptr<bool> default_{};
  shared_ptr<string> description{};
  shared_ptr<string> environmentId{};
  shared_ptr<GatewayInfo> gatewayInfo{};
  shared_ptr<string> name{};
  shared_ptr<vector<SubDomainInfo>> subDomainInfos{};
  shared_ptr<long> updateTimestamp{};

  GetEnvironmentResponseBodyData() {}

  explicit GetEnvironmentResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alias) {
      res["alias"] = boost::any(*alias);
    }
    if (createTimestamp) {
      res["createTimestamp"] = boost::any(*createTimestamp);
    }
    if (default_) {
      res["default"] = boost::any(*default_);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (environmentId) {
      res["environmentId"] = boost::any(*environmentId);
    }
    if (gatewayInfo) {
      res["gatewayInfo"] = gatewayInfo ? boost::any(gatewayInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (subDomainInfos) {
      vector<boost::any> temp1;
      for(auto item1:*subDomainInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["subDomainInfos"] = boost::any(temp1);
    }
    if (updateTimestamp) {
      res["updateTimestamp"] = boost::any(*updateTimestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("alias") != m.end() && !m["alias"].empty()) {
      alias = make_shared<string>(boost::any_cast<string>(m["alias"]));
    }
    if (m.find("createTimestamp") != m.end() && !m["createTimestamp"].empty()) {
      createTimestamp = make_shared<long>(boost::any_cast<long>(m["createTimestamp"]));
    }
    if (m.find("default") != m.end() && !m["default"].empty()) {
      default_ = make_shared<bool>(boost::any_cast<bool>(m["default"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("environmentId") != m.end() && !m["environmentId"].empty()) {
      environmentId = make_shared<string>(boost::any_cast<string>(m["environmentId"]));
    }
    if (m.find("gatewayInfo") != m.end() && !m["gatewayInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["gatewayInfo"].type()) {
        GatewayInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["gatewayInfo"]));
        gatewayInfo = make_shared<GatewayInfo>(model1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("subDomainInfos") != m.end() && !m["subDomainInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["subDomainInfos"].type()) {
        vector<SubDomainInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["subDomainInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SubDomainInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subDomainInfos = make_shared<vector<SubDomainInfo>>(expect1);
      }
    }
    if (m.find("updateTimestamp") != m.end() && !m["updateTimestamp"].empty()) {
      updateTimestamp = make_shared<long>(boost::any_cast<long>(m["updateTimestamp"]));
    }
  }


  virtual ~GetEnvironmentResponseBodyData() = default;
};
class GetEnvironmentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetEnvironmentResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetEnvironmentResponseBody() {}

  explicit GetEnvironmentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetEnvironmentResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetEnvironmentResponseBodyData>(model1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetEnvironmentResponseBody() = default;
};
class GetEnvironmentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetEnvironmentResponseBody> body{};

  GetEnvironmentResponse() {}

  explicit GetEnvironmentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetEnvironmentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetEnvironmentResponseBody>(model1);
      }
    }
  }


  virtual ~GetEnvironmentResponse() = default;
};
class GetGatewayResponseBodyDataEnvironments : public Darabonba::Model {
public:
  shared_ptr<string> alias{};
  shared_ptr<string> environmentId{};
  shared_ptr<string> name{};

  GetGatewayResponseBodyDataEnvironments() {}

  explicit GetGatewayResponseBodyDataEnvironments(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alias) {
      res["alias"] = boost::any(*alias);
    }
    if (environmentId) {
      res["environmentId"] = boost::any(*environmentId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("alias") != m.end() && !m["alias"].empty()) {
      alias = make_shared<string>(boost::any_cast<string>(m["alias"]));
    }
    if (m.find("environmentId") != m.end() && !m["environmentId"].empty()) {
      environmentId = make_shared<string>(boost::any_cast<string>(m["environmentId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~GetGatewayResponseBodyDataEnvironments() = default;
};
class GetGatewayResponseBodyDataLoadBalancersPorts : public Darabonba::Model {
public:
  shared_ptr<long> port{};
  shared_ptr<string> protocol{};

  GetGatewayResponseBodyDataLoadBalancersPorts() {}

  explicit GetGatewayResponseBodyDataLoadBalancersPorts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (port) {
      res["port"] = boost::any(*port);
    }
    if (protocol) {
      res["protocol"] = boost::any(*protocol);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("port") != m.end() && !m["port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["port"]));
    }
    if (m.find("protocol") != m.end() && !m["protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["protocol"]));
    }
  }


  virtual ~GetGatewayResponseBodyDataLoadBalancersPorts() = default;
};
class GetGatewayResponseBodyDataLoadBalancers : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<string> addressIpVersion{};
  shared_ptr<string> addressType{};
  shared_ptr<bool> gatewayDefault{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<string> mode{};
  shared_ptr<vector<GetGatewayResponseBodyDataLoadBalancersPorts>> ports{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};

  GetGatewayResponseBodyDataLoadBalancers() {}

  explicit GetGatewayResponseBodyDataLoadBalancers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["address"] = boost::any(*address);
    }
    if (addressIpVersion) {
      res["addressIpVersion"] = boost::any(*addressIpVersion);
    }
    if (addressType) {
      res["addressType"] = boost::any(*addressType);
    }
    if (gatewayDefault) {
      res["gatewayDefault"] = boost::any(*gatewayDefault);
    }
    if (loadBalancerId) {
      res["loadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (mode) {
      res["mode"] = boost::any(*mode);
    }
    if (ports) {
      vector<boost::any> temp1;
      for(auto item1:*ports){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ports"] = boost::any(temp1);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("address") != m.end() && !m["address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["address"]));
    }
    if (m.find("addressIpVersion") != m.end() && !m["addressIpVersion"].empty()) {
      addressIpVersion = make_shared<string>(boost::any_cast<string>(m["addressIpVersion"]));
    }
    if (m.find("addressType") != m.end() && !m["addressType"].empty()) {
      addressType = make_shared<string>(boost::any_cast<string>(m["addressType"]));
    }
    if (m.find("gatewayDefault") != m.end() && !m["gatewayDefault"].empty()) {
      gatewayDefault = make_shared<bool>(boost::any_cast<bool>(m["gatewayDefault"]));
    }
    if (m.find("loadBalancerId") != m.end() && !m["loadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["loadBalancerId"]));
    }
    if (m.find("mode") != m.end() && !m["mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["mode"]));
    }
    if (m.find("ports") != m.end() && !m["ports"].empty()) {
      if (typeid(vector<boost::any>) == m["ports"].type()) {
        vector<GetGatewayResponseBodyDataLoadBalancersPorts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ports"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetGatewayResponseBodyDataLoadBalancersPorts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ports = make_shared<vector<GetGatewayResponseBodyDataLoadBalancersPorts>>(expect1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~GetGatewayResponseBodyDataLoadBalancers() = default;
};
class GetGatewayResponseBodyDataSecurityGroup : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> securityGroupId{};

  GetGatewayResponseBodyDataSecurityGroup() {}

  explicit GetGatewayResponseBodyDataSecurityGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (securityGroupId) {
      res["securityGroupId"] = boost::any(*securityGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("securityGroupId") != m.end() && !m["securityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["securityGroupId"]));
    }
  }


  virtual ~GetGatewayResponseBodyDataSecurityGroup() = default;
};
class GetGatewayResponseBodyDataVSwitch : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> vSwitchId{};

  GetGatewayResponseBodyDataVSwitch() {}

  explicit GetGatewayResponseBodyDataVSwitch(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (vSwitchId) {
      res["vSwitchId"] = boost::any(*vSwitchId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("vSwitchId") != m.end() && !m["vSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["vSwitchId"]));
    }
  }


  virtual ~GetGatewayResponseBodyDataVSwitch() = default;
};
class GetGatewayResponseBodyDataVpc : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> vpcId{};

  GetGatewayResponseBodyDataVpc() {}

  explicit GetGatewayResponseBodyDataVpc(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (vpcId) {
      res["vpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("vpcId") != m.end() && !m["vpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["vpcId"]));
    }
  }


  virtual ~GetGatewayResponseBodyDataVpc() = default;
};
class GetGatewayResponseBodyDataZonesVSwitch : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> vSwitchId{};

  GetGatewayResponseBodyDataZonesVSwitch() {}

  explicit GetGatewayResponseBodyDataZonesVSwitch(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (vSwitchId) {
      res["vSwitchId"] = boost::any(*vSwitchId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("vSwitchId") != m.end() && !m["vSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["vSwitchId"]));
    }
  }


  virtual ~GetGatewayResponseBodyDataZonesVSwitch() = default;
};
class GetGatewayResponseBodyDataZones : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<GetGatewayResponseBodyDataZonesVSwitch> vSwitch{};
  shared_ptr<string> zoneId{};

  GetGatewayResponseBodyDataZones() {}

  explicit GetGatewayResponseBodyDataZones(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (vSwitch) {
      res["vSwitch"] = vSwitch ? boost::any(vSwitch->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (zoneId) {
      res["zoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("vSwitch") != m.end() && !m["vSwitch"].empty()) {
      if (typeid(map<string, boost::any>) == m["vSwitch"].type()) {
        GetGatewayResponseBodyDataZonesVSwitch model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["vSwitch"]));
        vSwitch = make_shared<GetGatewayResponseBodyDataZonesVSwitch>(model1);
      }
    }
    if (m.find("zoneId") != m.end() && !m["zoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["zoneId"]));
    }
  }


  virtual ~GetGatewayResponseBodyDataZones() = default;
};
class GetGatewayResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> chargeType{};
  shared_ptr<string> createFrom{};
  shared_ptr<long> createTimestamp{};
  shared_ptr<vector<GetGatewayResponseBodyDataEnvironments>> environments{};
  shared_ptr<long> expireTimestamp{};
  shared_ptr<string> gatewayId{};
  shared_ptr<vector<GetGatewayResponseBodyDataLoadBalancers>> loadBalancers{};
  shared_ptr<string> name{};
  shared_ptr<string> replicas{};
  shared_ptr<GetGatewayResponseBodyDataSecurityGroup> securityGroup{};
  shared_ptr<string> spec{};
  shared_ptr<string> status{};
  shared_ptr<string> targetVersion{};
  shared_ptr<long> updateTimestamp{};
  shared_ptr<GetGatewayResponseBodyDataVSwitch> vSwitch{};
  shared_ptr<string> version{};
  shared_ptr<GetGatewayResponseBodyDataVpc> vpc{};
  shared_ptr<vector<GetGatewayResponseBodyDataZones>> zones{};

  GetGatewayResponseBodyData() {}

  explicit GetGatewayResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chargeType) {
      res["chargeType"] = boost::any(*chargeType);
    }
    if (createFrom) {
      res["createFrom"] = boost::any(*createFrom);
    }
    if (createTimestamp) {
      res["createTimestamp"] = boost::any(*createTimestamp);
    }
    if (environments) {
      vector<boost::any> temp1;
      for(auto item1:*environments){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["environments"] = boost::any(temp1);
    }
    if (expireTimestamp) {
      res["expireTimestamp"] = boost::any(*expireTimestamp);
    }
    if (gatewayId) {
      res["gatewayId"] = boost::any(*gatewayId);
    }
    if (loadBalancers) {
      vector<boost::any> temp1;
      for(auto item1:*loadBalancers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["loadBalancers"] = boost::any(temp1);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (replicas) {
      res["replicas"] = boost::any(*replicas);
    }
    if (securityGroup) {
      res["securityGroup"] = securityGroup ? boost::any(securityGroup->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (spec) {
      res["spec"] = boost::any(*spec);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (targetVersion) {
      res["targetVersion"] = boost::any(*targetVersion);
    }
    if (updateTimestamp) {
      res["updateTimestamp"] = boost::any(*updateTimestamp);
    }
    if (vSwitch) {
      res["vSwitch"] = vSwitch ? boost::any(vSwitch->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    if (vpc) {
      res["vpc"] = vpc ? boost::any(vpc->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (zones) {
      vector<boost::any> temp1;
      for(auto item1:*zones){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["zones"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("chargeType") != m.end() && !m["chargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["chargeType"]));
    }
    if (m.find("createFrom") != m.end() && !m["createFrom"].empty()) {
      createFrom = make_shared<string>(boost::any_cast<string>(m["createFrom"]));
    }
    if (m.find("createTimestamp") != m.end() && !m["createTimestamp"].empty()) {
      createTimestamp = make_shared<long>(boost::any_cast<long>(m["createTimestamp"]));
    }
    if (m.find("environments") != m.end() && !m["environments"].empty()) {
      if (typeid(vector<boost::any>) == m["environments"].type()) {
        vector<GetGatewayResponseBodyDataEnvironments> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["environments"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetGatewayResponseBodyDataEnvironments model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        environments = make_shared<vector<GetGatewayResponseBodyDataEnvironments>>(expect1);
      }
    }
    if (m.find("expireTimestamp") != m.end() && !m["expireTimestamp"].empty()) {
      expireTimestamp = make_shared<long>(boost::any_cast<long>(m["expireTimestamp"]));
    }
    if (m.find("gatewayId") != m.end() && !m["gatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["gatewayId"]));
    }
    if (m.find("loadBalancers") != m.end() && !m["loadBalancers"].empty()) {
      if (typeid(vector<boost::any>) == m["loadBalancers"].type()) {
        vector<GetGatewayResponseBodyDataLoadBalancers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["loadBalancers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetGatewayResponseBodyDataLoadBalancers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        loadBalancers = make_shared<vector<GetGatewayResponseBodyDataLoadBalancers>>(expect1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("replicas") != m.end() && !m["replicas"].empty()) {
      replicas = make_shared<string>(boost::any_cast<string>(m["replicas"]));
    }
    if (m.find("securityGroup") != m.end() && !m["securityGroup"].empty()) {
      if (typeid(map<string, boost::any>) == m["securityGroup"].type()) {
        GetGatewayResponseBodyDataSecurityGroup model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["securityGroup"]));
        securityGroup = make_shared<GetGatewayResponseBodyDataSecurityGroup>(model1);
      }
    }
    if (m.find("spec") != m.end() && !m["spec"].empty()) {
      spec = make_shared<string>(boost::any_cast<string>(m["spec"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("targetVersion") != m.end() && !m["targetVersion"].empty()) {
      targetVersion = make_shared<string>(boost::any_cast<string>(m["targetVersion"]));
    }
    if (m.find("updateTimestamp") != m.end() && !m["updateTimestamp"].empty()) {
      updateTimestamp = make_shared<long>(boost::any_cast<long>(m["updateTimestamp"]));
    }
    if (m.find("vSwitch") != m.end() && !m["vSwitch"].empty()) {
      if (typeid(map<string, boost::any>) == m["vSwitch"].type()) {
        GetGatewayResponseBodyDataVSwitch model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["vSwitch"]));
        vSwitch = make_shared<GetGatewayResponseBodyDataVSwitch>(model1);
      }
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
    if (m.find("vpc") != m.end() && !m["vpc"].empty()) {
      if (typeid(map<string, boost::any>) == m["vpc"].type()) {
        GetGatewayResponseBodyDataVpc model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["vpc"]));
        vpc = make_shared<GetGatewayResponseBodyDataVpc>(model1);
      }
    }
    if (m.find("zones") != m.end() && !m["zones"].empty()) {
      if (typeid(vector<boost::any>) == m["zones"].type()) {
        vector<GetGatewayResponseBodyDataZones> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["zones"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetGatewayResponseBodyDataZones model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        zones = make_shared<vector<GetGatewayResponseBodyDataZones>>(expect1);
      }
    }
  }


  virtual ~GetGatewayResponseBodyData() = default;
};
class GetGatewayResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetGatewayResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetGatewayResponseBody() {}

  explicit GetGatewayResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetGatewayResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetGatewayResponseBodyData>(model1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetGatewayResponseBody() = default;
};
class GetGatewayResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetGatewayResponseBody> body{};

  GetGatewayResponse() {}

  explicit GetGatewayResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetGatewayResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetGatewayResponseBody>(model1);
      }
    }
  }


  virtual ~GetGatewayResponse() = default;
};
class GetGatewayRouteResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<GatewayRouteBackend> backend{};
  shared_ptr<long> createTimestamp{};
  shared_ptr<string> description{};
  shared_ptr<GatewayRouteDomainInfo> domainInfo{};
  shared_ptr<string> gatewayRouteId{};
  shared_ptr<HttpRouteMatch> match{};
  shared_ptr<string> name{};
  shared_ptr<string> status{};
  shared_ptr<long> updateTimestamp{};

  GetGatewayRouteResponseBodyData() {}

  explicit GetGatewayRouteResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backend) {
      res["backend"] = backend ? boost::any(backend->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (createTimestamp) {
      res["createTimestamp"] = boost::any(*createTimestamp);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (domainInfo) {
      res["domainInfo"] = domainInfo ? boost::any(domainInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (gatewayRouteId) {
      res["gatewayRouteId"] = boost::any(*gatewayRouteId);
    }
    if (match) {
      res["match"] = match ? boost::any(match->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (updateTimestamp) {
      res["updateTimestamp"] = boost::any(*updateTimestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("backend") != m.end() && !m["backend"].empty()) {
      if (typeid(map<string, boost::any>) == m["backend"].type()) {
        GatewayRouteBackend model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["backend"]));
        backend = make_shared<GatewayRouteBackend>(model1);
      }
    }
    if (m.find("createTimestamp") != m.end() && !m["createTimestamp"].empty()) {
      createTimestamp = make_shared<long>(boost::any_cast<long>(m["createTimestamp"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("domainInfo") != m.end() && !m["domainInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["domainInfo"].type()) {
        GatewayRouteDomainInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["domainInfo"]));
        domainInfo = make_shared<GatewayRouteDomainInfo>(model1);
      }
    }
    if (m.find("gatewayRouteId") != m.end() && !m["gatewayRouteId"].empty()) {
      gatewayRouteId = make_shared<string>(boost::any_cast<string>(m["gatewayRouteId"]));
    }
    if (m.find("match") != m.end() && !m["match"].empty()) {
      if (typeid(map<string, boost::any>) == m["match"].type()) {
        HttpRouteMatch model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["match"]));
        match = make_shared<HttpRouteMatch>(model1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("updateTimestamp") != m.end() && !m["updateTimestamp"].empty()) {
      updateTimestamp = make_shared<long>(boost::any_cast<long>(m["updateTimestamp"]));
    }
  }


  virtual ~GetGatewayRouteResponseBodyData() = default;
};
class GetGatewayRouteResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetGatewayRouteResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetGatewayRouteResponseBody() {}

  explicit GetGatewayRouteResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetGatewayRouteResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetGatewayRouteResponseBodyData>(model1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetGatewayRouteResponseBody() = default;
};
class GetGatewayRouteResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetGatewayRouteResponseBody> body{};

  GetGatewayRouteResponse() {}

  explicit GetGatewayRouteResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetGatewayRouteResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetGatewayRouteResponseBody>(model1);
      }
    }
  }


  virtual ~GetGatewayRouteResponse() = default;
};
class GetGatewayServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GatewayService> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetGatewayServiceResponseBody() {}

  explicit GetGatewayServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GatewayService model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GatewayService>(model1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetGatewayServiceResponseBody() = default;
};
class GetGatewayServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetGatewayServiceResponseBody> body{};

  GetGatewayServiceResponse() {}

  explicit GetGatewayServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetGatewayServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetGatewayServiceResponseBody>(model1);
      }
    }
  }


  virtual ~GetGatewayServiceResponse() = default;
};
class GetHttpApiResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<HttpApiApiInfo> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetHttpApiResponseBody() {}

  explicit GetHttpApiResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        HttpApiApiInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<HttpApiApiInfo>(model1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetHttpApiResponseBody() = default;
};
class GetHttpApiResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetHttpApiResponseBody> body{};

  GetHttpApiResponse() {}

  explicit GetHttpApiResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetHttpApiResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetHttpApiResponseBody>(model1);
      }
    }
  }


  virtual ~GetHttpApiResponse() = default;
};
class GetHttpApiOperationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<HttpApiOperationInfo> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetHttpApiOperationResponseBody() {}

  explicit GetHttpApiOperationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        HttpApiOperationInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<HttpApiOperationInfo>(model1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetHttpApiOperationResponseBody() = default;
};
class GetHttpApiOperationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetHttpApiOperationResponseBody> body{};

  GetHttpApiOperationResponse() {}

  explicit GetHttpApiOperationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetHttpApiOperationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetHttpApiOperationResponseBody>(model1);
      }
    }
  }


  virtual ~GetHttpApiOperationResponse() = default;
};
class ListDomainsRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> nameLike{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListDomainsRequest() {}

  explicit ListDomainsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["gatewayId"] = boost::any(*gatewayId);
    }
    if (nameLike) {
      res["nameLike"] = boost::any(*nameLike);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("gatewayId") != m.end() && !m["gatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["gatewayId"]));
    }
    if (m.find("nameLike") != m.end() && !m["nameLike"].empty()) {
      nameLike = make_shared<string>(boost::any_cast<string>(m["nameLike"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
  }


  virtual ~ListDomainsRequest() = default;
};
class ListDomainsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DomainInfo>> items{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalSize{};

  ListDomainsResponseBodyData() {}

  explicit ListDomainsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["items"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (totalSize) {
      res["totalSize"] = boost::any(*totalSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("items") != m.end() && !m["items"].empty()) {
      if (typeid(vector<boost::any>) == m["items"].type()) {
        vector<DomainInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DomainInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DomainInfo>>(expect1);
      }
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("totalSize") != m.end() && !m["totalSize"].empty()) {
      totalSize = make_shared<long>(boost::any_cast<long>(m["totalSize"]));
    }
  }


  virtual ~ListDomainsResponseBodyData() = default;
};
class ListDomainsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListDomainsResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ListDomainsResponseBody() {}

  explicit ListDomainsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListDomainsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListDomainsResponseBodyData>(model1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ListDomainsResponseBody() = default;
};
class ListDomainsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDomainsResponseBody> body{};

  ListDomainsResponse() {}

  explicit ListDomainsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListDomainsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDomainsResponseBody>(model1);
      }
    }
  }


  virtual ~ListDomainsResponse() = default;
};
class ListEnvironmentsRequest : public Darabonba::Model {
public:
  shared_ptr<string> aliasLike{};
  shared_ptr<string> gatewayId{};
  shared_ptr<string> gatewayNameLike{};
  shared_ptr<string> nameLike{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListEnvironmentsRequest() {}

  explicit ListEnvironmentsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliasLike) {
      res["aliasLike"] = boost::any(*aliasLike);
    }
    if (gatewayId) {
      res["gatewayId"] = boost::any(*gatewayId);
    }
    if (gatewayNameLike) {
      res["gatewayNameLike"] = boost::any(*gatewayNameLike);
    }
    if (nameLike) {
      res["nameLike"] = boost::any(*nameLike);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("aliasLike") != m.end() && !m["aliasLike"].empty()) {
      aliasLike = make_shared<string>(boost::any_cast<string>(m["aliasLike"]));
    }
    if (m.find("gatewayId") != m.end() && !m["gatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["gatewayId"]));
    }
    if (m.find("gatewayNameLike") != m.end() && !m["gatewayNameLike"].empty()) {
      gatewayNameLike = make_shared<string>(boost::any_cast<string>(m["gatewayNameLike"]));
    }
    if (m.find("nameLike") != m.end() && !m["nameLike"].empty()) {
      nameLike = make_shared<string>(boost::any_cast<string>(m["nameLike"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
  }


  virtual ~ListEnvironmentsRequest() = default;
};
class ListEnvironmentsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<EnvironmentInfo>> items{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalSize{};

  ListEnvironmentsResponseBodyData() {}

  explicit ListEnvironmentsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["items"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (totalSize) {
      res["totalSize"] = boost::any(*totalSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("items") != m.end() && !m["items"].empty()) {
      if (typeid(vector<boost::any>) == m["items"].type()) {
        vector<EnvironmentInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            EnvironmentInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<EnvironmentInfo>>(expect1);
      }
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("totalSize") != m.end() && !m["totalSize"].empty()) {
      totalSize = make_shared<long>(boost::any_cast<long>(m["totalSize"]));
    }
  }


  virtual ~ListEnvironmentsResponseBodyData() = default;
};
class ListEnvironmentsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListEnvironmentsResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ListEnvironmentsResponseBody() {}

  explicit ListEnvironmentsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListEnvironmentsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListEnvironmentsResponseBodyData>(model1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ListEnvironmentsResponseBody() = default;
};
class ListEnvironmentsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListEnvironmentsResponseBody> body{};

  ListEnvironmentsResponse() {}

  explicit ListEnvironmentsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListEnvironmentsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListEnvironmentsResponseBody>(model1);
      }
    }
  }


  virtual ~ListEnvironmentsResponse() = default;
};
class ListGatewayRoutesRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyword{};
  shared_ptr<string> name{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> path{};
  shared_ptr<string> status{};

  ListGatewayRoutesRequest() {}

  explicit ListGatewayRoutesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyword) {
      res["keyword"] = boost::any(*keyword);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (path) {
      res["path"] = boost::any(*path);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("keyword") != m.end() && !m["keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["keyword"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("path") != m.end() && !m["path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["path"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~ListGatewayRoutesRequest() = default;
};
class ListGatewayRoutesResponseBodyDataItems : public Darabonba::Model {
public:
  shared_ptr<GatewayRouteBackend> backend{};
  shared_ptr<long> createTimestamp{};
  shared_ptr<string> description{};
  shared_ptr<GatewayRouteDomainInfo> domainInfo{};
  shared_ptr<string> gatewayRouteId{};
  shared_ptr<HttpRouteMatch> match{};
  shared_ptr<string> name{};
  shared_ptr<string> status{};
  shared_ptr<long> updateTimestamp{};

  ListGatewayRoutesResponseBodyDataItems() {}

  explicit ListGatewayRoutesResponseBodyDataItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backend) {
      res["backend"] = backend ? boost::any(backend->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (createTimestamp) {
      res["createTimestamp"] = boost::any(*createTimestamp);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (domainInfo) {
      res["domainInfo"] = domainInfo ? boost::any(domainInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (gatewayRouteId) {
      res["gatewayRouteId"] = boost::any(*gatewayRouteId);
    }
    if (match) {
      res["match"] = match ? boost::any(match->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (updateTimestamp) {
      res["updateTimestamp"] = boost::any(*updateTimestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("backend") != m.end() && !m["backend"].empty()) {
      if (typeid(map<string, boost::any>) == m["backend"].type()) {
        GatewayRouteBackend model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["backend"]));
        backend = make_shared<GatewayRouteBackend>(model1);
      }
    }
    if (m.find("createTimestamp") != m.end() && !m["createTimestamp"].empty()) {
      createTimestamp = make_shared<long>(boost::any_cast<long>(m["createTimestamp"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("domainInfo") != m.end() && !m["domainInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["domainInfo"].type()) {
        GatewayRouteDomainInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["domainInfo"]));
        domainInfo = make_shared<GatewayRouteDomainInfo>(model1);
      }
    }
    if (m.find("gatewayRouteId") != m.end() && !m["gatewayRouteId"].empty()) {
      gatewayRouteId = make_shared<string>(boost::any_cast<string>(m["gatewayRouteId"]));
    }
    if (m.find("match") != m.end() && !m["match"].empty()) {
      if (typeid(map<string, boost::any>) == m["match"].type()) {
        HttpRouteMatch model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["match"]));
        match = make_shared<HttpRouteMatch>(model1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("updateTimestamp") != m.end() && !m["updateTimestamp"].empty()) {
      updateTimestamp = make_shared<long>(boost::any_cast<long>(m["updateTimestamp"]));
    }
  }


  virtual ~ListGatewayRoutesResponseBodyDataItems() = default;
};
class ListGatewayRoutesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListGatewayRoutesResponseBodyDataItems>> items{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalSize{};

  ListGatewayRoutesResponseBodyData() {}

  explicit ListGatewayRoutesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["items"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (totalSize) {
      res["totalSize"] = boost::any(*totalSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("items") != m.end() && !m["items"].empty()) {
      if (typeid(vector<boost::any>) == m["items"].type()) {
        vector<ListGatewayRoutesResponseBodyDataItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListGatewayRoutesResponseBodyDataItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<ListGatewayRoutesResponseBodyDataItems>>(expect1);
      }
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("totalSize") != m.end() && !m["totalSize"].empty()) {
      totalSize = make_shared<long>(boost::any_cast<long>(m["totalSize"]));
    }
  }


  virtual ~ListGatewayRoutesResponseBodyData() = default;
};
class ListGatewayRoutesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListGatewayRoutesResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ListGatewayRoutesResponseBody() {}

  explicit ListGatewayRoutesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListGatewayRoutesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListGatewayRoutesResponseBodyData>(model1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ListGatewayRoutesResponseBody() = default;
};
class ListGatewayRoutesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListGatewayRoutesResponseBody> body{};

  ListGatewayRoutesResponse() {}

  explicit ListGatewayRoutesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListGatewayRoutesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListGatewayRoutesResponseBody>(model1);
      }
    }
  }


  virtual ~ListGatewayRoutesResponse() = default;
};
class ListGatewayServicesRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> sourceType{};

  ListGatewayServicesRequest() {}

  explicit ListGatewayServicesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (sourceType) {
      res["sourceType"] = boost::any(*sourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("sourceType") != m.end() && !m["sourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["sourceType"]));
    }
  }


  virtual ~ListGatewayServicesRequest() = default;
};
class ListGatewayServicesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GatewayService>> items{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalSize{};

  ListGatewayServicesResponseBodyData() {}

  explicit ListGatewayServicesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["items"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (totalSize) {
      res["totalSize"] = boost::any(*totalSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("items") != m.end() && !m["items"].empty()) {
      if (typeid(vector<boost::any>) == m["items"].type()) {
        vector<GatewayService> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GatewayService model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<GatewayService>>(expect1);
      }
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("totalSize") != m.end() && !m["totalSize"].empty()) {
      totalSize = make_shared<long>(boost::any_cast<long>(m["totalSize"]));
    }
  }


  virtual ~ListGatewayServicesResponseBodyData() = default;
};
class ListGatewayServicesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListGatewayServicesResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ListGatewayServicesResponseBody() {}

  explicit ListGatewayServicesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListGatewayServicesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListGatewayServicesResponseBodyData>(model1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ListGatewayServicesResponseBody() = default;
};
class ListGatewayServicesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListGatewayServicesResponseBody> body{};

  ListGatewayServicesResponse() {}

  explicit ListGatewayServicesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListGatewayServicesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListGatewayServicesResponseBody>(model1);
      }
    }
  }


  virtual ~ListGatewayServicesResponse() = default;
};
class ListGatewaysRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> keyword{};
  shared_ptr<string> name{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListGatewaysRequest() {}

  explicit ListGatewaysRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["gatewayId"] = boost::any(*gatewayId);
    }
    if (keyword) {
      res["keyword"] = boost::any(*keyword);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("gatewayId") != m.end() && !m["gatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["gatewayId"]));
    }
    if (m.find("keyword") != m.end() && !m["keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["keyword"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
  }


  virtual ~ListGatewaysRequest() = default;
};
class ListGatewaysResponseBodyDataItemsLoadBalancersPorts : public Darabonba::Model {
public:
  shared_ptr<long> port{};
  shared_ptr<string> protocol{};

  ListGatewaysResponseBodyDataItemsLoadBalancersPorts() {}

  explicit ListGatewaysResponseBodyDataItemsLoadBalancersPorts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (port) {
      res["port"] = boost::any(*port);
    }
    if (protocol) {
      res["protocol"] = boost::any(*protocol);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("port") != m.end() && !m["port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["port"]));
    }
    if (m.find("protocol") != m.end() && !m["protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["protocol"]));
    }
  }


  virtual ~ListGatewaysResponseBodyDataItemsLoadBalancersPorts() = default;
};
class ListGatewaysResponseBodyDataItemsLoadBalancers : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<string> addressIpVersion{};
  shared_ptr<string> addressType{};
  shared_ptr<bool> gatewayDefault{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<string> mode{};
  shared_ptr<vector<ListGatewaysResponseBodyDataItemsLoadBalancersPorts>> ports{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};

  ListGatewaysResponseBodyDataItemsLoadBalancers() {}

  explicit ListGatewaysResponseBodyDataItemsLoadBalancers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["address"] = boost::any(*address);
    }
    if (addressIpVersion) {
      res["addressIpVersion"] = boost::any(*addressIpVersion);
    }
    if (addressType) {
      res["addressType"] = boost::any(*addressType);
    }
    if (gatewayDefault) {
      res["gatewayDefault"] = boost::any(*gatewayDefault);
    }
    if (loadBalancerId) {
      res["loadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (mode) {
      res["mode"] = boost::any(*mode);
    }
    if (ports) {
      vector<boost::any> temp1;
      for(auto item1:*ports){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ports"] = boost::any(temp1);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("address") != m.end() && !m["address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["address"]));
    }
    if (m.find("addressIpVersion") != m.end() && !m["addressIpVersion"].empty()) {
      addressIpVersion = make_shared<string>(boost::any_cast<string>(m["addressIpVersion"]));
    }
    if (m.find("addressType") != m.end() && !m["addressType"].empty()) {
      addressType = make_shared<string>(boost::any_cast<string>(m["addressType"]));
    }
    if (m.find("gatewayDefault") != m.end() && !m["gatewayDefault"].empty()) {
      gatewayDefault = make_shared<bool>(boost::any_cast<bool>(m["gatewayDefault"]));
    }
    if (m.find("loadBalancerId") != m.end() && !m["loadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["loadBalancerId"]));
    }
    if (m.find("mode") != m.end() && !m["mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["mode"]));
    }
    if (m.find("ports") != m.end() && !m["ports"].empty()) {
      if (typeid(vector<boost::any>) == m["ports"].type()) {
        vector<ListGatewaysResponseBodyDataItemsLoadBalancersPorts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ports"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListGatewaysResponseBodyDataItemsLoadBalancersPorts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ports = make_shared<vector<ListGatewaysResponseBodyDataItemsLoadBalancersPorts>>(expect1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ListGatewaysResponseBodyDataItemsLoadBalancers() = default;
};
class ListGatewaysResponseBodyDataItemsSecurityGroup : public Darabonba::Model {
public:
  shared_ptr<string> securityGroupId{};

  ListGatewaysResponseBodyDataItemsSecurityGroup() {}

  explicit ListGatewaysResponseBodyDataItemsSecurityGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityGroupId) {
      res["securityGroupId"] = boost::any(*securityGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("securityGroupId") != m.end() && !m["securityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["securityGroupId"]));
    }
  }


  virtual ~ListGatewaysResponseBodyDataItemsSecurityGroup() = default;
};
class ListGatewaysResponseBodyDataItemsVSwitch : public Darabonba::Model {
public:
  shared_ptr<string> vSwitchId{};

  ListGatewaysResponseBodyDataItemsVSwitch() {}

  explicit ListGatewaysResponseBodyDataItemsVSwitch(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vSwitchId) {
      res["vSwitchId"] = boost::any(*vSwitchId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("vSwitchId") != m.end() && !m["vSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["vSwitchId"]));
    }
  }


  virtual ~ListGatewaysResponseBodyDataItemsVSwitch() = default;
};
class ListGatewaysResponseBodyDataItemsVpc : public Darabonba::Model {
public:
  shared_ptr<string> vpcId{};

  ListGatewaysResponseBodyDataItemsVpc() {}

  explicit ListGatewaysResponseBodyDataItemsVpc(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vpcId) {
      res["vpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("vpcId") != m.end() && !m["vpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["vpcId"]));
    }
  }


  virtual ~ListGatewaysResponseBodyDataItemsVpc() = default;
};
class ListGatewaysResponseBodyDataItemsZonesVSwitch : public Darabonba::Model {
public:
  shared_ptr<string> vSwitchId{};

  ListGatewaysResponseBodyDataItemsZonesVSwitch() {}

  explicit ListGatewaysResponseBodyDataItemsZonesVSwitch(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vSwitchId) {
      res["vSwitchId"] = boost::any(*vSwitchId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("vSwitchId") != m.end() && !m["vSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["vSwitchId"]));
    }
  }


  virtual ~ListGatewaysResponseBodyDataItemsZonesVSwitch() = default;
};
class ListGatewaysResponseBodyDataItemsZones : public Darabonba::Model {
public:
  shared_ptr<ListGatewaysResponseBodyDataItemsZonesVSwitch> vSwitch{};
  shared_ptr<string> zoneId{};

  ListGatewaysResponseBodyDataItemsZones() {}

  explicit ListGatewaysResponseBodyDataItemsZones(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vSwitch) {
      res["vSwitch"] = vSwitch ? boost::any(vSwitch->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (zoneId) {
      res["zoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("vSwitch") != m.end() && !m["vSwitch"].empty()) {
      if (typeid(map<string, boost::any>) == m["vSwitch"].type()) {
        ListGatewaysResponseBodyDataItemsZonesVSwitch model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["vSwitch"]));
        vSwitch = make_shared<ListGatewaysResponseBodyDataItemsZonesVSwitch>(model1);
      }
    }
    if (m.find("zoneId") != m.end() && !m["zoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["zoneId"]));
    }
  }


  virtual ~ListGatewaysResponseBodyDataItemsZones() = default;
};
class ListGatewaysResponseBodyDataItems : public Darabonba::Model {
public:
  shared_ptr<string> chargeType{};
  shared_ptr<string> createFrom{};
  shared_ptr<long> createTimestamp{};
  shared_ptr<long> expireTimestamp{};
  shared_ptr<string> gatewayId{};
  shared_ptr<vector<ListGatewaysResponseBodyDataItemsLoadBalancers>> loadBalancers{};
  shared_ptr<string> name{};
  shared_ptr<string> replicas{};
  shared_ptr<ListGatewaysResponseBodyDataItemsSecurityGroup> securityGroup{};
  shared_ptr<string> spec{};
  shared_ptr<string> status{};
  shared_ptr<string> targetVersion{};
  shared_ptr<long> updateTimestamp{};
  shared_ptr<ListGatewaysResponseBodyDataItemsVSwitch> vSwitch{};
  shared_ptr<string> version{};
  shared_ptr<ListGatewaysResponseBodyDataItemsVpc> vpc{};
  shared_ptr<vector<ListGatewaysResponseBodyDataItemsZones>> zones{};

  ListGatewaysResponseBodyDataItems() {}

  explicit ListGatewaysResponseBodyDataItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chargeType) {
      res["chargeType"] = boost::any(*chargeType);
    }
    if (createFrom) {
      res["createFrom"] = boost::any(*createFrom);
    }
    if (createTimestamp) {
      res["createTimestamp"] = boost::any(*createTimestamp);
    }
    if (expireTimestamp) {
      res["expireTimestamp"] = boost::any(*expireTimestamp);
    }
    if (gatewayId) {
      res["gatewayId"] = boost::any(*gatewayId);
    }
    if (loadBalancers) {
      vector<boost::any> temp1;
      for(auto item1:*loadBalancers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["loadBalancers"] = boost::any(temp1);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (replicas) {
      res["replicas"] = boost::any(*replicas);
    }
    if (securityGroup) {
      res["securityGroup"] = securityGroup ? boost::any(securityGroup->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (spec) {
      res["spec"] = boost::any(*spec);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (targetVersion) {
      res["targetVersion"] = boost::any(*targetVersion);
    }
    if (updateTimestamp) {
      res["updateTimestamp"] = boost::any(*updateTimestamp);
    }
    if (vSwitch) {
      res["vSwitch"] = vSwitch ? boost::any(vSwitch->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    if (vpc) {
      res["vpc"] = vpc ? boost::any(vpc->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (zones) {
      vector<boost::any> temp1;
      for(auto item1:*zones){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["zones"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("chargeType") != m.end() && !m["chargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["chargeType"]));
    }
    if (m.find("createFrom") != m.end() && !m["createFrom"].empty()) {
      createFrom = make_shared<string>(boost::any_cast<string>(m["createFrom"]));
    }
    if (m.find("createTimestamp") != m.end() && !m["createTimestamp"].empty()) {
      createTimestamp = make_shared<long>(boost::any_cast<long>(m["createTimestamp"]));
    }
    if (m.find("expireTimestamp") != m.end() && !m["expireTimestamp"].empty()) {
      expireTimestamp = make_shared<long>(boost::any_cast<long>(m["expireTimestamp"]));
    }
    if (m.find("gatewayId") != m.end() && !m["gatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["gatewayId"]));
    }
    if (m.find("loadBalancers") != m.end() && !m["loadBalancers"].empty()) {
      if (typeid(vector<boost::any>) == m["loadBalancers"].type()) {
        vector<ListGatewaysResponseBodyDataItemsLoadBalancers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["loadBalancers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListGatewaysResponseBodyDataItemsLoadBalancers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        loadBalancers = make_shared<vector<ListGatewaysResponseBodyDataItemsLoadBalancers>>(expect1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("replicas") != m.end() && !m["replicas"].empty()) {
      replicas = make_shared<string>(boost::any_cast<string>(m["replicas"]));
    }
    if (m.find("securityGroup") != m.end() && !m["securityGroup"].empty()) {
      if (typeid(map<string, boost::any>) == m["securityGroup"].type()) {
        ListGatewaysResponseBodyDataItemsSecurityGroup model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["securityGroup"]));
        securityGroup = make_shared<ListGatewaysResponseBodyDataItemsSecurityGroup>(model1);
      }
    }
    if (m.find("spec") != m.end() && !m["spec"].empty()) {
      spec = make_shared<string>(boost::any_cast<string>(m["spec"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("targetVersion") != m.end() && !m["targetVersion"].empty()) {
      targetVersion = make_shared<string>(boost::any_cast<string>(m["targetVersion"]));
    }
    if (m.find("updateTimestamp") != m.end() && !m["updateTimestamp"].empty()) {
      updateTimestamp = make_shared<long>(boost::any_cast<long>(m["updateTimestamp"]));
    }
    if (m.find("vSwitch") != m.end() && !m["vSwitch"].empty()) {
      if (typeid(map<string, boost::any>) == m["vSwitch"].type()) {
        ListGatewaysResponseBodyDataItemsVSwitch model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["vSwitch"]));
        vSwitch = make_shared<ListGatewaysResponseBodyDataItemsVSwitch>(model1);
      }
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
    if (m.find("vpc") != m.end() && !m["vpc"].empty()) {
      if (typeid(map<string, boost::any>) == m["vpc"].type()) {
        ListGatewaysResponseBodyDataItemsVpc model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["vpc"]));
        vpc = make_shared<ListGatewaysResponseBodyDataItemsVpc>(model1);
      }
    }
    if (m.find("zones") != m.end() && !m["zones"].empty()) {
      if (typeid(vector<boost::any>) == m["zones"].type()) {
        vector<ListGatewaysResponseBodyDataItemsZones> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["zones"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListGatewaysResponseBodyDataItemsZones model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        zones = make_shared<vector<ListGatewaysResponseBodyDataItemsZones>>(expect1);
      }
    }
  }


  virtual ~ListGatewaysResponseBodyDataItems() = default;
};
class ListGatewaysResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListGatewaysResponseBodyDataItems>> items{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalSize{};

  ListGatewaysResponseBodyData() {}

  explicit ListGatewaysResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["items"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (totalSize) {
      res["totalSize"] = boost::any(*totalSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("items") != m.end() && !m["items"].empty()) {
      if (typeid(vector<boost::any>) == m["items"].type()) {
        vector<ListGatewaysResponseBodyDataItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListGatewaysResponseBodyDataItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<ListGatewaysResponseBodyDataItems>>(expect1);
      }
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("totalSize") != m.end() && !m["totalSize"].empty()) {
      totalSize = make_shared<long>(boost::any_cast<long>(m["totalSize"]));
    }
  }


  virtual ~ListGatewaysResponseBodyData() = default;
};
class ListGatewaysResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListGatewaysResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ListGatewaysResponseBody() {}

  explicit ListGatewaysResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListGatewaysResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListGatewaysResponseBodyData>(model1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ListGatewaysResponseBody() = default;
};
class ListGatewaysResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListGatewaysResponseBody> body{};

  ListGatewaysResponse() {}

  explicit ListGatewaysResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListGatewaysResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListGatewaysResponseBody>(model1);
      }
    }
  }


  virtual ~ListGatewaysResponse() = default;
};
class ListHttpApiOperationsRequest : public Darabonba::Model {
public:
  shared_ptr<string> method{};
  shared_ptr<string> name{};
  shared_ptr<string> nameLike{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> pathLike{};

  ListHttpApiOperationsRequest() {}

  explicit ListHttpApiOperationsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (method) {
      res["method"] = boost::any(*method);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nameLike) {
      res["nameLike"] = boost::any(*nameLike);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (pathLike) {
      res["pathLike"] = boost::any(*pathLike);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("method") != m.end() && !m["method"].empty()) {
      method = make_shared<string>(boost::any_cast<string>(m["method"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nameLike") != m.end() && !m["nameLike"].empty()) {
      nameLike = make_shared<string>(boost::any_cast<string>(m["nameLike"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("pathLike") != m.end() && !m["pathLike"].empty()) {
      pathLike = make_shared<string>(boost::any_cast<string>(m["pathLike"]));
    }
  }


  virtual ~ListHttpApiOperationsRequest() = default;
};
class ListHttpApiOperationsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<HttpApiOperationInfo>> items{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalSize{};

  ListHttpApiOperationsResponseBodyData() {}

  explicit ListHttpApiOperationsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["items"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (totalSize) {
      res["totalSize"] = boost::any(*totalSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("items") != m.end() && !m["items"].empty()) {
      if (typeid(vector<boost::any>) == m["items"].type()) {
        vector<HttpApiOperationInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HttpApiOperationInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<HttpApiOperationInfo>>(expect1);
      }
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("totalSize") != m.end() && !m["totalSize"].empty()) {
      totalSize = make_shared<long>(boost::any_cast<long>(m["totalSize"]));
    }
  }


  virtual ~ListHttpApiOperationsResponseBodyData() = default;
};
class ListHttpApiOperationsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListHttpApiOperationsResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ListHttpApiOperationsResponseBody() {}

  explicit ListHttpApiOperationsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListHttpApiOperationsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListHttpApiOperationsResponseBodyData>(model1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ListHttpApiOperationsResponseBody() = default;
};
class ListHttpApiOperationsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListHttpApiOperationsResponseBody> body{};

  ListHttpApiOperationsResponse() {}

  explicit ListHttpApiOperationsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListHttpApiOperationsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListHttpApiOperationsResponseBody>(model1);
      }
    }
  }


  virtual ~ListHttpApiOperationsResponse() = default;
};
class ListHttpApisRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyword{};
  shared_ptr<string> name{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<bool> publishedOnly{};

  ListHttpApisRequest() {}

  explicit ListHttpApisRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyword) {
      res["keyword"] = boost::any(*keyword);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (publishedOnly) {
      res["publishedOnly"] = boost::any(*publishedOnly);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("keyword") != m.end() && !m["keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["keyword"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("publishedOnly") != m.end() && !m["publishedOnly"].empty()) {
      publishedOnly = make_shared<bool>(boost::any_cast<bool>(m["publishedOnly"]));
    }
  }


  virtual ~ListHttpApisRequest() = default;
};
class ListHttpApisResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<HttpApiInfoByName>> items{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalSize{};

  ListHttpApisResponseBodyData() {}

  explicit ListHttpApisResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["items"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (totalSize) {
      res["totalSize"] = boost::any(*totalSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("items") != m.end() && !m["items"].empty()) {
      if (typeid(vector<boost::any>) == m["items"].type()) {
        vector<HttpApiInfoByName> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HttpApiInfoByName model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<HttpApiInfoByName>>(expect1);
      }
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("totalSize") != m.end() && !m["totalSize"].empty()) {
      totalSize = make_shared<long>(boost::any_cast<long>(m["totalSize"]));
    }
  }


  virtual ~ListHttpApisResponseBodyData() = default;
};
class ListHttpApisResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListHttpApisResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ListHttpApisResponseBody() {}

  explicit ListHttpApisResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListHttpApisResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListHttpApisResponseBodyData>(model1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ListHttpApisResponseBody() = default;
};
class ListHttpApisResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListHttpApisResponseBody> body{};

  ListHttpApisResponse() {}

  explicit ListHttpApisResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListHttpApisResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListHttpApisResponseBody>(model1);
      }
    }
  }


  virtual ~ListHttpApisResponse() = default;
};
class OfflineGatewayRouteResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  OfflineGatewayRouteResponseBody() {}

  explicit OfflineGatewayRouteResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~OfflineGatewayRouteResponseBody() = default;
};
class OfflineGatewayRouteResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OfflineGatewayRouteResponseBody> body{};

  OfflineGatewayRouteResponse() {}

  explicit OfflineGatewayRouteResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        OfflineGatewayRouteResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OfflineGatewayRouteResponseBody>(model1);
      }
    }
  }


  virtual ~OfflineGatewayRouteResponse() = default;
};
class OfflineHttpApiRequest : public Darabonba::Model {
public:
  shared_ptr<string> environmentId{};

  OfflineHttpApiRequest() {}

  explicit OfflineHttpApiRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (environmentId) {
      res["environmentId"] = boost::any(*environmentId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("environmentId") != m.end() && !m["environmentId"].empty()) {
      environmentId = make_shared<string>(boost::any_cast<string>(m["environmentId"]));
    }
  }


  virtual ~OfflineHttpApiRequest() = default;
};
class OfflineHttpApiResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  OfflineHttpApiResponseBody() {}

  explicit OfflineHttpApiResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~OfflineHttpApiResponseBody() = default;
};
class OfflineHttpApiResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OfflineHttpApiResponseBody> body{};

  OfflineHttpApiResponse() {}

  explicit OfflineHttpApiResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        OfflineHttpApiResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OfflineHttpApiResponseBody>(model1);
      }
    }
  }


  virtual ~OfflineHttpApiResponse() = default;
};
class PublishGatewayRouteResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  PublishGatewayRouteResponseBody() {}

  explicit PublishGatewayRouteResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~PublishGatewayRouteResponseBody() = default;
};
class PublishGatewayRouteResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PublishGatewayRouteResponseBody> body{};

  PublishGatewayRouteResponse() {}

  explicit PublishGatewayRouteResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        PublishGatewayRouteResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PublishGatewayRouteResponseBody>(model1);
      }
    }
  }


  virtual ~PublishGatewayRouteResponse() = default;
};
class PublishHttpApiRequestEnvironmentCloudProductConfigContainerServiceConfigs : public Darabonba::Model {
public:
  shared_ptr<HttpApiBackendMatchConditions> match{};
  shared_ptr<string> name{};
  shared_ptr<string> namespace_{};
  shared_ptr<long> port{};
  shared_ptr<string> protocol{};
  shared_ptr<long> weight{};

  PublishHttpApiRequestEnvironmentCloudProductConfigContainerServiceConfigs() {}

  explicit PublishHttpApiRequestEnvironmentCloudProductConfigContainerServiceConfigs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (match) {
      res["match"] = match ? boost::any(match->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (namespace_) {
      res["namespace"] = boost::any(*namespace_);
    }
    if (port) {
      res["port"] = boost::any(*port);
    }
    if (protocol) {
      res["protocol"] = boost::any(*protocol);
    }
    if (weight) {
      res["weight"] = boost::any(*weight);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("match") != m.end() && !m["match"].empty()) {
      if (typeid(map<string, boost::any>) == m["match"].type()) {
        HttpApiBackendMatchConditions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["match"]));
        match = make_shared<HttpApiBackendMatchConditions>(model1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("namespace") != m.end() && !m["namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["namespace"]));
    }
    if (m.find("port") != m.end() && !m["port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["port"]));
    }
    if (m.find("protocol") != m.end() && !m["protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["protocol"]));
    }
    if (m.find("weight") != m.end() && !m["weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["weight"]));
    }
  }


  virtual ~PublishHttpApiRequestEnvironmentCloudProductConfigContainerServiceConfigs() = default;
};
class PublishHttpApiRequestEnvironmentCloudProductConfigFunctionConfigs : public Darabonba::Model {
public:
  shared_ptr<HttpApiBackendMatchConditions> match{};
  shared_ptr<string> name{};
  shared_ptr<string> quanlifer{};
  shared_ptr<long> weight{};

  PublishHttpApiRequestEnvironmentCloudProductConfigFunctionConfigs() {}

  explicit PublishHttpApiRequestEnvironmentCloudProductConfigFunctionConfigs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (match) {
      res["match"] = match ? boost::any(match->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (quanlifer) {
      res["quanlifer"] = boost::any(*quanlifer);
    }
    if (weight) {
      res["weight"] = boost::any(*weight);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("match") != m.end() && !m["match"].empty()) {
      if (typeid(map<string, boost::any>) == m["match"].type()) {
        HttpApiBackendMatchConditions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["match"]));
        match = make_shared<HttpApiBackendMatchConditions>(model1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("quanlifer") != m.end() && !m["quanlifer"].empty()) {
      quanlifer = make_shared<string>(boost::any_cast<string>(m["quanlifer"]));
    }
    if (m.find("weight") != m.end() && !m["weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["weight"]));
    }
  }


  virtual ~PublishHttpApiRequestEnvironmentCloudProductConfigFunctionConfigs() = default;
};
class PublishHttpApiRequestEnvironmentCloudProductConfigMseNacosConfigs : public Darabonba::Model {
public:
  shared_ptr<string> groupName{};
  shared_ptr<HttpApiBackendMatchConditions> match{};
  shared_ptr<string> name{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> weight{};

  PublishHttpApiRequestEnvironmentCloudProductConfigMseNacosConfigs() {}

  explicit PublishHttpApiRequestEnvironmentCloudProductConfigMseNacosConfigs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupName) {
      res["groupName"] = boost::any(*groupName);
    }
    if (match) {
      res["match"] = match ? boost::any(match->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (namespace_) {
      res["namespace"] = boost::any(*namespace_);
    }
    if (weight) {
      res["weight"] = boost::any(*weight);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("groupName") != m.end() && !m["groupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["groupName"]));
    }
    if (m.find("match") != m.end() && !m["match"].empty()) {
      if (typeid(map<string, boost::any>) == m["match"].type()) {
        HttpApiBackendMatchConditions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["match"]));
        match = make_shared<HttpApiBackendMatchConditions>(model1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("namespace") != m.end() && !m["namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["namespace"]));
    }
    if (m.find("weight") != m.end() && !m["weight"].empty()) {
      weight = make_shared<string>(boost::any_cast<string>(m["weight"]));
    }
  }


  virtual ~PublishHttpApiRequestEnvironmentCloudProductConfigMseNacosConfigs() = default;
};
class PublishHttpApiRequestEnvironmentCloudProductConfig : public Darabonba::Model {
public:
  shared_ptr<string> cloudProductType{};
  shared_ptr<vector<PublishHttpApiRequestEnvironmentCloudProductConfigContainerServiceConfigs>> containerServiceConfigs{};
  shared_ptr<vector<PublishHttpApiRequestEnvironmentCloudProductConfigFunctionConfigs>> functionConfigs{};
  shared_ptr<vector<PublishHttpApiRequestEnvironmentCloudProductConfigMseNacosConfigs>> mseNacosConfigs{};

  PublishHttpApiRequestEnvironmentCloudProductConfig() {}

  explicit PublishHttpApiRequestEnvironmentCloudProductConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cloudProductType) {
      res["cloudProductType"] = boost::any(*cloudProductType);
    }
    if (containerServiceConfigs) {
      vector<boost::any> temp1;
      for(auto item1:*containerServiceConfigs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["containerServiceConfigs"] = boost::any(temp1);
    }
    if (functionConfigs) {
      vector<boost::any> temp1;
      for(auto item1:*functionConfigs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["functionConfigs"] = boost::any(temp1);
    }
    if (mseNacosConfigs) {
      vector<boost::any> temp1;
      for(auto item1:*mseNacosConfigs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["mseNacosConfigs"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cloudProductType") != m.end() && !m["cloudProductType"].empty()) {
      cloudProductType = make_shared<string>(boost::any_cast<string>(m["cloudProductType"]));
    }
    if (m.find("containerServiceConfigs") != m.end() && !m["containerServiceConfigs"].empty()) {
      if (typeid(vector<boost::any>) == m["containerServiceConfigs"].type()) {
        vector<PublishHttpApiRequestEnvironmentCloudProductConfigContainerServiceConfigs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["containerServiceConfigs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PublishHttpApiRequestEnvironmentCloudProductConfigContainerServiceConfigs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        containerServiceConfigs = make_shared<vector<PublishHttpApiRequestEnvironmentCloudProductConfigContainerServiceConfigs>>(expect1);
      }
    }
    if (m.find("functionConfigs") != m.end() && !m["functionConfigs"].empty()) {
      if (typeid(vector<boost::any>) == m["functionConfigs"].type()) {
        vector<PublishHttpApiRequestEnvironmentCloudProductConfigFunctionConfigs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["functionConfigs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PublishHttpApiRequestEnvironmentCloudProductConfigFunctionConfigs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        functionConfigs = make_shared<vector<PublishHttpApiRequestEnvironmentCloudProductConfigFunctionConfigs>>(expect1);
      }
    }
    if (m.find("mseNacosConfigs") != m.end() && !m["mseNacosConfigs"].empty()) {
      if (typeid(vector<boost::any>) == m["mseNacosConfigs"].type()) {
        vector<PublishHttpApiRequestEnvironmentCloudProductConfigMseNacosConfigs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["mseNacosConfigs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PublishHttpApiRequestEnvironmentCloudProductConfigMseNacosConfigs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        mseNacosConfigs = make_shared<vector<PublishHttpApiRequestEnvironmentCloudProductConfigMseNacosConfigs>>(expect1);
      }
    }
  }


  virtual ~PublishHttpApiRequestEnvironmentCloudProductConfig() = default;
};
class PublishHttpApiRequestEnvironmentDnsConfigs : public Darabonba::Model {
public:
  shared_ptr<vector<string>> dnsList{};
  shared_ptr<HttpApiBackendMatchConditions> match{};
  shared_ptr<long> weight{};

  PublishHttpApiRequestEnvironmentDnsConfigs() {}

  explicit PublishHttpApiRequestEnvironmentDnsConfigs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dnsList) {
      res["dnsList"] = boost::any(*dnsList);
    }
    if (match) {
      res["match"] = match ? boost::any(match->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (weight) {
      res["weight"] = boost::any(*weight);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dnsList") != m.end() && !m["dnsList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["dnsList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["dnsList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dnsList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("match") != m.end() && !m["match"].empty()) {
      if (typeid(map<string, boost::any>) == m["match"].type()) {
        HttpApiBackendMatchConditions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["match"]));
        match = make_shared<HttpApiBackendMatchConditions>(model1);
      }
    }
    if (m.find("weight") != m.end() && !m["weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["weight"]));
    }
  }


  virtual ~PublishHttpApiRequestEnvironmentDnsConfigs() = default;
};
class PublishHttpApiRequestEnvironmentServiceConfigs : public Darabonba::Model {
public:
  shared_ptr<string> gatewayServiceId{};
  shared_ptr<HttpApiBackendMatchConditions> match{};
  shared_ptr<long> port{};
  shared_ptr<string> protocol{};
  shared_ptr<string> version{};
  shared_ptr<long> weight{};

  PublishHttpApiRequestEnvironmentServiceConfigs() {}

  explicit PublishHttpApiRequestEnvironmentServiceConfigs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayServiceId) {
      res["gatewayServiceId"] = boost::any(*gatewayServiceId);
    }
    if (match) {
      res["match"] = match ? boost::any(match->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (port) {
      res["port"] = boost::any(*port);
    }
    if (protocol) {
      res["protocol"] = boost::any(*protocol);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    if (weight) {
      res["weight"] = boost::any(*weight);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("gatewayServiceId") != m.end() && !m["gatewayServiceId"].empty()) {
      gatewayServiceId = make_shared<string>(boost::any_cast<string>(m["gatewayServiceId"]));
    }
    if (m.find("match") != m.end() && !m["match"].empty()) {
      if (typeid(map<string, boost::any>) == m["match"].type()) {
        HttpApiBackendMatchConditions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["match"]));
        match = make_shared<HttpApiBackendMatchConditions>(model1);
      }
    }
    if (m.find("port") != m.end() && !m["port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["port"]));
    }
    if (m.find("protocol") != m.end() && !m["protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["protocol"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
    if (m.find("weight") != m.end() && !m["weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["weight"]));
    }
  }


  virtual ~PublishHttpApiRequestEnvironmentServiceConfigs() = default;
};
class PublishHttpApiRequestEnvironmentVipConfigs : public Darabonba::Model {
public:
  shared_ptr<vector<string>> endpoints{};
  shared_ptr<HttpApiBackendMatchConditions> match{};
  shared_ptr<long> weight{};

  PublishHttpApiRequestEnvironmentVipConfigs() {}

  explicit PublishHttpApiRequestEnvironmentVipConfigs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endpoints) {
      res["endpoints"] = boost::any(*endpoints);
    }
    if (match) {
      res["match"] = match ? boost::any(match->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (weight) {
      res["weight"] = boost::any(*weight);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("endpoints") != m.end() && !m["endpoints"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["endpoints"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["endpoints"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      endpoints = make_shared<vector<string>>(toVec1);
    }
    if (m.find("match") != m.end() && !m["match"].empty()) {
      if (typeid(map<string, boost::any>) == m["match"].type()) {
        HttpApiBackendMatchConditions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["match"]));
        match = make_shared<HttpApiBackendMatchConditions>(model1);
      }
    }
    if (m.find("weight") != m.end() && !m["weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["weight"]));
    }
  }


  virtual ~PublishHttpApiRequestEnvironmentVipConfigs() = default;
};
class PublishHttpApiRequestEnvironment : public Darabonba::Model {
public:
  shared_ptr<string> backendScene{};
  shared_ptr<string> backendType{};
  shared_ptr<PublishHttpApiRequestEnvironmentCloudProductConfig> cloudProductConfig{};
  shared_ptr<vector<string>> customDomainIds{};
  shared_ptr<vector<PublishHttpApiRequestEnvironmentDnsConfigs>> dnsConfigs{};
  shared_ptr<string> environmentId{};
  shared_ptr<vector<PublishHttpApiRequestEnvironmentServiceConfigs>> serviceConfigs{};
  shared_ptr<vector<PublishHttpApiRequestEnvironmentVipConfigs>> vipConfigs{};

  PublishHttpApiRequestEnvironment() {}

  explicit PublishHttpApiRequestEnvironment(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backendScene) {
      res["backendScene"] = boost::any(*backendScene);
    }
    if (backendType) {
      res["backendType"] = boost::any(*backendType);
    }
    if (cloudProductConfig) {
      res["cloudProductConfig"] = cloudProductConfig ? boost::any(cloudProductConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (customDomainIds) {
      res["customDomainIds"] = boost::any(*customDomainIds);
    }
    if (dnsConfigs) {
      vector<boost::any> temp1;
      for(auto item1:*dnsConfigs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["dnsConfigs"] = boost::any(temp1);
    }
    if (environmentId) {
      res["environmentId"] = boost::any(*environmentId);
    }
    if (serviceConfigs) {
      vector<boost::any> temp1;
      for(auto item1:*serviceConfigs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["serviceConfigs"] = boost::any(temp1);
    }
    if (vipConfigs) {
      vector<boost::any> temp1;
      for(auto item1:*vipConfigs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["vipConfigs"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("backendScene") != m.end() && !m["backendScene"].empty()) {
      backendScene = make_shared<string>(boost::any_cast<string>(m["backendScene"]));
    }
    if (m.find("backendType") != m.end() && !m["backendType"].empty()) {
      backendType = make_shared<string>(boost::any_cast<string>(m["backendType"]));
    }
    if (m.find("cloudProductConfig") != m.end() && !m["cloudProductConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["cloudProductConfig"].type()) {
        PublishHttpApiRequestEnvironmentCloudProductConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["cloudProductConfig"]));
        cloudProductConfig = make_shared<PublishHttpApiRequestEnvironmentCloudProductConfig>(model1);
      }
    }
    if (m.find("customDomainIds") != m.end() && !m["customDomainIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["customDomainIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["customDomainIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      customDomainIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("dnsConfigs") != m.end() && !m["dnsConfigs"].empty()) {
      if (typeid(vector<boost::any>) == m["dnsConfigs"].type()) {
        vector<PublishHttpApiRequestEnvironmentDnsConfigs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["dnsConfigs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PublishHttpApiRequestEnvironmentDnsConfigs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dnsConfigs = make_shared<vector<PublishHttpApiRequestEnvironmentDnsConfigs>>(expect1);
      }
    }
    if (m.find("environmentId") != m.end() && !m["environmentId"].empty()) {
      environmentId = make_shared<string>(boost::any_cast<string>(m["environmentId"]));
    }
    if (m.find("serviceConfigs") != m.end() && !m["serviceConfigs"].empty()) {
      if (typeid(vector<boost::any>) == m["serviceConfigs"].type()) {
        vector<PublishHttpApiRequestEnvironmentServiceConfigs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["serviceConfigs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PublishHttpApiRequestEnvironmentServiceConfigs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceConfigs = make_shared<vector<PublishHttpApiRequestEnvironmentServiceConfigs>>(expect1);
      }
    }
    if (m.find("vipConfigs") != m.end() && !m["vipConfigs"].empty()) {
      if (typeid(vector<boost::any>) == m["vipConfigs"].type()) {
        vector<PublishHttpApiRequestEnvironmentVipConfigs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["vipConfigs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PublishHttpApiRequestEnvironmentVipConfigs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        vipConfigs = make_shared<vector<PublishHttpApiRequestEnvironmentVipConfigs>>(expect1);
      }
    }
  }


  virtual ~PublishHttpApiRequestEnvironment() = default;
};
class PublishHttpApiRequest : public Darabonba::Model {
public:
  shared_ptr<bool> allowOverwrite{};
  shared_ptr<string> description{};
  shared_ptr<PublishHttpApiRequestEnvironment> environment{};
  shared_ptr<string> revisionId{};

  PublishHttpApiRequest() {}

  explicit PublishHttpApiRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowOverwrite) {
      res["allowOverwrite"] = boost::any(*allowOverwrite);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (environment) {
      res["environment"] = environment ? boost::any(environment->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (revisionId) {
      res["revisionId"] = boost::any(*revisionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("allowOverwrite") != m.end() && !m["allowOverwrite"].empty()) {
      allowOverwrite = make_shared<bool>(boost::any_cast<bool>(m["allowOverwrite"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("environment") != m.end() && !m["environment"].empty()) {
      if (typeid(map<string, boost::any>) == m["environment"].type()) {
        PublishHttpApiRequestEnvironment model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["environment"]));
        environment = make_shared<PublishHttpApiRequestEnvironment>(model1);
      }
    }
    if (m.find("revisionId") != m.end() && !m["revisionId"].empty()) {
      revisionId = make_shared<string>(boost::any_cast<string>(m["revisionId"]));
    }
  }


  virtual ~PublishHttpApiRequest() = default;
};
class PublishHttpApiResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  PublishHttpApiResponseBody() {}

  explicit PublishHttpApiResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~PublishHttpApiResponseBody() = default;
};
class PublishHttpApiResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PublishHttpApiResponseBody> body{};

  PublishHttpApiResponse() {}

  explicit PublishHttpApiResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        PublishHttpApiResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PublishHttpApiResponseBody>(model1);
      }
    }
  }


  virtual ~PublishHttpApiResponse() = default;
};
class UpdateDomainRequest : public Darabonba::Model {
public:
  shared_ptr<string> caCertIndentifier{};
  shared_ptr<string> certIndentifier{};
  shared_ptr<bool> forceHttps{};
  shared_ptr<string> http2Option{};
  shared_ptr<string> protocol{};
  shared_ptr<string> tlsMax{};
  shared_ptr<string> tlsMin{};

  UpdateDomainRequest() {}

  explicit UpdateDomainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (caCertIndentifier) {
      res["caCertIndentifier"] = boost::any(*caCertIndentifier);
    }
    if (certIndentifier) {
      res["certIndentifier"] = boost::any(*certIndentifier);
    }
    if (forceHttps) {
      res["forceHttps"] = boost::any(*forceHttps);
    }
    if (http2Option) {
      res["http2Option"] = boost::any(*http2Option);
    }
    if (protocol) {
      res["protocol"] = boost::any(*protocol);
    }
    if (tlsMax) {
      res["tlsMax"] = boost::any(*tlsMax);
    }
    if (tlsMin) {
      res["tlsMin"] = boost::any(*tlsMin);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("caCertIndentifier") != m.end() && !m["caCertIndentifier"].empty()) {
      caCertIndentifier = make_shared<string>(boost::any_cast<string>(m["caCertIndentifier"]));
    }
    if (m.find("certIndentifier") != m.end() && !m["certIndentifier"].empty()) {
      certIndentifier = make_shared<string>(boost::any_cast<string>(m["certIndentifier"]));
    }
    if (m.find("forceHttps") != m.end() && !m["forceHttps"].empty()) {
      forceHttps = make_shared<bool>(boost::any_cast<bool>(m["forceHttps"]));
    }
    if (m.find("http2Option") != m.end() && !m["http2Option"].empty()) {
      http2Option = make_shared<string>(boost::any_cast<string>(m["http2Option"]));
    }
    if (m.find("protocol") != m.end() && !m["protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["protocol"]));
    }
    if (m.find("tlsMax") != m.end() && !m["tlsMax"].empty()) {
      tlsMax = make_shared<string>(boost::any_cast<string>(m["tlsMax"]));
    }
    if (m.find("tlsMin") != m.end() && !m["tlsMin"].empty()) {
      tlsMin = make_shared<string>(boost::any_cast<string>(m["tlsMin"]));
    }
  }


  virtual ~UpdateDomainRequest() = default;
};
class UpdateDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UpdateDomainResponseBody() {}

  explicit UpdateDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~UpdateDomainResponseBody() = default;
};
class UpdateDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateDomainResponseBody> body{};

  UpdateDomainResponse() {}

  explicit UpdateDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateDomainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateDomainResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateDomainResponse() = default;
};
class UpdateEnvironmentRequest : public Darabonba::Model {
public:
  shared_ptr<string> alias{};
  shared_ptr<string> description{};

  UpdateEnvironmentRequest() {}

  explicit UpdateEnvironmentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alias) {
      res["alias"] = boost::any(*alias);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("alias") != m.end() && !m["alias"].empty()) {
      alias = make_shared<string>(boost::any_cast<string>(m["alias"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
  }


  virtual ~UpdateEnvironmentRequest() = default;
};
class UpdateEnvironmentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UpdateEnvironmentResponseBody() {}

  explicit UpdateEnvironmentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~UpdateEnvironmentResponseBody() = default;
};
class UpdateEnvironmentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateEnvironmentResponseBody> body{};

  UpdateEnvironmentResponse() {}

  explicit UpdateEnvironmentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateEnvironmentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateEnvironmentResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateEnvironmentResponse() = default;
};
class UpdateGatewayRouteRequest : public Darabonba::Model {
public:
  shared_ptr<GatewayRouteBackendConfig> backendConfig{};
  shared_ptr<string> description{};
  shared_ptr<GatewayRouteDomainConfig> domainConfig{};
  shared_ptr<HttpRouteMatch> match{};

  UpdateGatewayRouteRequest() {}

  explicit UpdateGatewayRouteRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backendConfig) {
      res["backendConfig"] = backendConfig ? boost::any(backendConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (domainConfig) {
      res["domainConfig"] = domainConfig ? boost::any(domainConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (match) {
      res["match"] = match ? boost::any(match->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("backendConfig") != m.end() && !m["backendConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["backendConfig"].type()) {
        GatewayRouteBackendConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["backendConfig"]));
        backendConfig = make_shared<GatewayRouteBackendConfig>(model1);
      }
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("domainConfig") != m.end() && !m["domainConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["domainConfig"].type()) {
        GatewayRouteDomainConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["domainConfig"]));
        domainConfig = make_shared<GatewayRouteDomainConfig>(model1);
      }
    }
    if (m.find("match") != m.end() && !m["match"].empty()) {
      if (typeid(map<string, boost::any>) == m["match"].type()) {
        HttpRouteMatch model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["match"]));
        match = make_shared<HttpRouteMatch>(model1);
      }
    }
  }


  virtual ~UpdateGatewayRouteRequest() = default;
};
class UpdateGatewayRouteResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UpdateGatewayRouteResponseBody() {}

  explicit UpdateGatewayRouteResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~UpdateGatewayRouteResponseBody() = default;
};
class UpdateGatewayRouteResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateGatewayRouteResponseBody> body{};

  UpdateGatewayRouteResponse() {}

  explicit UpdateGatewayRouteResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateGatewayRouteResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateGatewayRouteResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateGatewayRouteResponse() = default;
};
class UpdateGatewayServiceRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> addresses{};
  shared_ptr<long> port{};

  UpdateGatewayServiceRequest() {}

  explicit UpdateGatewayServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addresses) {
      res["addresses"] = boost::any(*addresses);
    }
    if (port) {
      res["port"] = boost::any(*port);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("addresses") != m.end() && !m["addresses"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["addresses"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["addresses"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      addresses = make_shared<vector<string>>(toVec1);
    }
    if (m.find("port") != m.end() && !m["port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["port"]));
    }
  }


  virtual ~UpdateGatewayServiceRequest() = default;
};
class UpdateGatewayServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UpdateGatewayServiceResponseBody() {}

  explicit UpdateGatewayServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~UpdateGatewayServiceResponseBody() = default;
};
class UpdateGatewayServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateGatewayServiceResponseBody> body{};

  UpdateGatewayServiceResponse() {}

  explicit UpdateGatewayServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateGatewayServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateGatewayServiceResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateGatewayServiceResponse() = default;
};
class UpdateGatewayServiceVersionRequestLabels : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  UpdateGatewayServiceVersionRequestLabels() {}

  explicit UpdateGatewayServiceVersionRequestLabels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~UpdateGatewayServiceVersionRequestLabels() = default;
};
class UpdateGatewayServiceVersionRequest : public Darabonba::Model {
public:
  shared_ptr<vector<UpdateGatewayServiceVersionRequestLabels>> labels{};

  UpdateGatewayServiceVersionRequest() {}

  explicit UpdateGatewayServiceVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["labels"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("labels") != m.end() && !m["labels"].empty()) {
      if (typeid(vector<boost::any>) == m["labels"].type()) {
        vector<UpdateGatewayServiceVersionRequestLabels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateGatewayServiceVersionRequestLabels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<UpdateGatewayServiceVersionRequestLabels>>(expect1);
      }
    }
  }


  virtual ~UpdateGatewayServiceVersionRequest() = default;
};
class UpdateGatewayServiceVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UpdateGatewayServiceVersionResponseBody() {}

  explicit UpdateGatewayServiceVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~UpdateGatewayServiceVersionResponseBody() = default;
};
class UpdateGatewayServiceVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateGatewayServiceVersionResponseBody> body{};

  UpdateGatewayServiceVersionResponse() {}

  explicit UpdateGatewayServiceVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateGatewayServiceVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateGatewayServiceVersionResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateGatewayServiceVersionResponse() = default;
};
class UpdateHttpApiRequest : public Darabonba::Model {
public:
  shared_ptr<string> basePath{};
  shared_ptr<string> description{};
  shared_ptr<vector<string>> protocols{};
  shared_ptr<HttpApiVersionConfig> versionConfig{};

  UpdateHttpApiRequest() {}

  explicit UpdateHttpApiRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (basePath) {
      res["basePath"] = boost::any(*basePath);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (protocols) {
      res["protocols"] = boost::any(*protocols);
    }
    if (versionConfig) {
      res["versionConfig"] = versionConfig ? boost::any(versionConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("basePath") != m.end() && !m["basePath"].empty()) {
      basePath = make_shared<string>(boost::any_cast<string>(m["basePath"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("protocols") != m.end() && !m["protocols"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["protocols"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["protocols"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      protocols = make_shared<vector<string>>(toVec1);
    }
    if (m.find("versionConfig") != m.end() && !m["versionConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["versionConfig"].type()) {
        HttpApiVersionConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["versionConfig"]));
        versionConfig = make_shared<HttpApiVersionConfig>(model1);
      }
    }
  }


  virtual ~UpdateHttpApiRequest() = default;
};
class UpdateHttpApiResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UpdateHttpApiResponseBody() {}

  explicit UpdateHttpApiResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~UpdateHttpApiResponseBody() = default;
};
class UpdateHttpApiResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateHttpApiResponseBody> body{};

  UpdateHttpApiResponse() {}

  explicit UpdateHttpApiResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateHttpApiResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateHttpApiResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateHttpApiResponse() = default;
};
class UpdateHttpApiOperationRequest : public Darabonba::Model {
public:
  shared_ptr<HttpApiOperation> operation{};

  UpdateHttpApiOperationRequest() {}

  explicit UpdateHttpApiOperationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operation) {
      res["operation"] = operation ? boost::any(operation->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("operation") != m.end() && !m["operation"].empty()) {
      if (typeid(map<string, boost::any>) == m["operation"].type()) {
        HttpApiOperation model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["operation"]));
        operation = make_shared<HttpApiOperation>(model1);
      }
    }
  }


  virtual ~UpdateHttpApiOperationRequest() = default;
};
class UpdateHttpApiOperationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UpdateHttpApiOperationResponseBody() {}

  explicit UpdateHttpApiOperationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~UpdateHttpApiOperationResponseBody() = default;
};
class UpdateHttpApiOperationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateHttpApiOperationResponseBody> body{};

  UpdateHttpApiOperationResponse() {}

  explicit UpdateHttpApiOperationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateHttpApiOperationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateHttpApiOperationResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateHttpApiOperationResponse() = default;
};
class UpdateServiceSourceRequestK8sServiceSourceConfigIngressConfig : public Darabonba::Model {
public:
  shared_ptr<bool> enable{};
  shared_ptr<string> ingressClass{};
  shared_ptr<bool> overrideIngressIp{};
  shared_ptr<string> watchNamespace{};

  UpdateServiceSourceRequestK8sServiceSourceConfigIngressConfig() {}

  explicit UpdateServiceSourceRequestK8sServiceSourceConfigIngressConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enable) {
      res["enable"] = boost::any(*enable);
    }
    if (ingressClass) {
      res["ingressClass"] = boost::any(*ingressClass);
    }
    if (overrideIngressIp) {
      res["overrideIngressIp"] = boost::any(*overrideIngressIp);
    }
    if (watchNamespace) {
      res["watchNamespace"] = boost::any(*watchNamespace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enable") != m.end() && !m["enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["enable"]));
    }
    if (m.find("ingressClass") != m.end() && !m["ingressClass"].empty()) {
      ingressClass = make_shared<string>(boost::any_cast<string>(m["ingressClass"]));
    }
    if (m.find("overrideIngressIp") != m.end() && !m["overrideIngressIp"].empty()) {
      overrideIngressIp = make_shared<bool>(boost::any_cast<bool>(m["overrideIngressIp"]));
    }
    if (m.find("watchNamespace") != m.end() && !m["watchNamespace"].empty()) {
      watchNamespace = make_shared<string>(boost::any_cast<string>(m["watchNamespace"]));
    }
  }


  virtual ~UpdateServiceSourceRequestK8sServiceSourceConfigIngressConfig() = default;
};
class UpdateServiceSourceRequestK8sServiceSourceConfig : public Darabonba::Model {
public:
  shared_ptr<UpdateServiceSourceRequestK8sServiceSourceConfigIngressConfig> ingressConfig{};

  UpdateServiceSourceRequestK8sServiceSourceConfig() {}

  explicit UpdateServiceSourceRequestK8sServiceSourceConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ingressConfig) {
      res["ingressConfig"] = ingressConfig ? boost::any(ingressConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ingressConfig") != m.end() && !m["ingressConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["ingressConfig"].type()) {
        UpdateServiceSourceRequestK8sServiceSourceConfigIngressConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ingressConfig"]));
        ingressConfig = make_shared<UpdateServiceSourceRequestK8sServiceSourceConfigIngressConfig>(model1);
      }
    }
  }


  virtual ~UpdateServiceSourceRequestK8sServiceSourceConfig() = default;
};
class UpdateServiceSourceRequest : public Darabonba::Model {
public:
  shared_ptr<UpdateServiceSourceRequestK8sServiceSourceConfig> k8sServiceSourceConfig{};

  UpdateServiceSourceRequest() {}

  explicit UpdateServiceSourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (k8sServiceSourceConfig) {
      res["k8sServiceSourceConfig"] = k8sServiceSourceConfig ? boost::any(k8sServiceSourceConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("k8sServiceSourceConfig") != m.end() && !m["k8sServiceSourceConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["k8sServiceSourceConfig"].type()) {
        UpdateServiceSourceRequestK8sServiceSourceConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["k8sServiceSourceConfig"]));
        k8sServiceSourceConfig = make_shared<UpdateServiceSourceRequestK8sServiceSourceConfig>(model1);
      }
    }
  }


  virtual ~UpdateServiceSourceRequest() = default;
};
class UpdateServiceSourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UpdateServiceSourceResponseBody() {}

  explicit UpdateServiceSourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~UpdateServiceSourceResponseBody() = default;
};
class UpdateServiceSourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateServiceSourceResponseBody> body{};

  UpdateServiceSourceResponse() {}

  explicit UpdateServiceSourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateServiceSourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateServiceSourceResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateServiceSourceResponse() = default;
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
  AddGatewaySecurityGroupRuleResponse addGatewaySecurityGroupRuleWithOptions(shared_ptr<string> gatewayId,
                                                                             shared_ptr<AddGatewaySecurityGroupRuleRequest> request,
                                                                             shared_ptr<map<string, string>> headers,
                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddGatewaySecurityGroupRuleResponse addGatewaySecurityGroupRule(shared_ptr<string> gatewayId, shared_ptr<AddGatewaySecurityGroupRuleRequest> request);
  CreateDomainResponse createDomainWithOptions(shared_ptr<CreateDomainRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDomainResponse createDomain(shared_ptr<CreateDomainRequest> request);
  CreateEnvironmentResponse createEnvironmentWithOptions(shared_ptr<CreateEnvironmentRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateEnvironmentResponse createEnvironment(shared_ptr<CreateEnvironmentRequest> request);
  CreateGatewayRouteResponse createGatewayRouteWithOptions(shared_ptr<string> gatewayId,
                                                           shared_ptr<CreateGatewayRouteRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateGatewayRouteResponse createGatewayRoute(shared_ptr<string> gatewayId, shared_ptr<CreateGatewayRouteRequest> request);
  CreateGatewayServiceResponse createGatewayServiceWithOptions(shared_ptr<string> gatewayId,
                                                               shared_ptr<CreateGatewayServiceRequest> request,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateGatewayServiceResponse createGatewayService(shared_ptr<string> gatewayId, shared_ptr<CreateGatewayServiceRequest> request);
  CreateGatewayServiceVersionResponse createGatewayServiceVersionWithOptions(shared_ptr<string> gatewayId,
                                                                             shared_ptr<string> gatewayServiceId,
                                                                             shared_ptr<CreateGatewayServiceVersionRequest> request,
                                                                             shared_ptr<map<string, string>> headers,
                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateGatewayServiceVersionResponse createGatewayServiceVersion(shared_ptr<string> gatewayId, shared_ptr<string> gatewayServiceId, shared_ptr<CreateGatewayServiceVersionRequest> request);
  CreateHttpApiResponse createHttpApiWithOptions(shared_ptr<CreateHttpApiRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateHttpApiResponse createHttpApi(shared_ptr<CreateHttpApiRequest> request);
  CreateHttpApiOperationResponse createHttpApiOperationWithOptions(shared_ptr<string> httpApiId,
                                                                   shared_ptr<CreateHttpApiOperationRequest> request,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateHttpApiOperationResponse createHttpApiOperation(shared_ptr<string> httpApiId, shared_ptr<CreateHttpApiOperationRequest> request);
  CreateServiceSourceResponse createServiceSourceWithOptions(shared_ptr<string> gatewayId,
                                                             shared_ptr<CreateServiceSourceRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateServiceSourceResponse createServiceSource(shared_ptr<string> gatewayId, shared_ptr<CreateServiceSourceRequest> request);
  DeleteDomainResponse deleteDomainWithOptions(shared_ptr<string> domainId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDomainResponse deleteDomain(shared_ptr<string> domainId);
  DeleteEnvironmentResponse deleteEnvironmentWithOptions(shared_ptr<string> environmentId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteEnvironmentResponse deleteEnvironment(shared_ptr<string> environmentId);
  DeleteGatewayResponse deleteGatewayWithOptions(shared_ptr<string> gatewayId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteGatewayResponse deleteGateway(shared_ptr<string> gatewayId);
  DeleteGatewayRouteResponse deleteGatewayRouteWithOptions(shared_ptr<string> gatewayId,
                                                           shared_ptr<string> gatewayRouteId,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteGatewayRouteResponse deleteGatewayRoute(shared_ptr<string> gatewayId, shared_ptr<string> gatewayRouteId);
  DeleteGatewayServiceResponse deleteGatewayServiceWithOptions(shared_ptr<string> gatewayId,
                                                               shared_ptr<string> gatewayServiceId,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteGatewayServiceResponse deleteGatewayService(shared_ptr<string> gatewayId, shared_ptr<string> gatewayServiceId);
  DeleteGatewayServiceVersionResponse deleteGatewayServiceVersionWithOptions(shared_ptr<string> gatewayId,
                                                                             shared_ptr<string> gatewayServiceId,
                                                                             shared_ptr<string> name,
                                                                             shared_ptr<map<string, string>> headers,
                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteGatewayServiceVersionResponse deleteGatewayServiceVersion(shared_ptr<string> gatewayId, shared_ptr<string> gatewayServiceId, shared_ptr<string> name);
  DeleteHttpApiResponse deleteHttpApiWithOptions(shared_ptr<string> httpApiId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteHttpApiResponse deleteHttpApi(shared_ptr<string> httpApiId);
  DeleteHttpApiOperationResponse deleteHttpApiOperationWithOptions(shared_ptr<string> httpApiId,
                                                                   shared_ptr<string> operationId,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteHttpApiOperationResponse deleteHttpApiOperation(shared_ptr<string> httpApiId, shared_ptr<string> operationId);
  DeleteServiceSourceResponse deleteServiceSourceWithOptions(shared_ptr<string> gatewayId,
                                                             shared_ptr<string> serviceSourceId,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteServiceSourceResponse deleteServiceSource(shared_ptr<string> gatewayId, shared_ptr<string> serviceSourceId);
  GetDomainResponse getDomainWithOptions(shared_ptr<string> domainId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDomainResponse getDomain(shared_ptr<string> domainId);
  GetEnvironmentResponse getEnvironmentWithOptions(shared_ptr<string> environmentId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetEnvironmentResponse getEnvironment(shared_ptr<string> environmentId);
  GetGatewayResponse getGatewayWithOptions(shared_ptr<string> gatewayId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetGatewayResponse getGateway(shared_ptr<string> gatewayId);
  GetGatewayRouteResponse getGatewayRouteWithOptions(shared_ptr<string> gatewayId,
                                                     shared_ptr<string> gatewayRouteId,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetGatewayRouteResponse getGatewayRoute(shared_ptr<string> gatewayId, shared_ptr<string> gatewayRouteId);
  GetGatewayServiceResponse getGatewayServiceWithOptions(shared_ptr<string> gatewayId,
                                                         shared_ptr<string> gatewayServiceId,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetGatewayServiceResponse getGatewayService(shared_ptr<string> gatewayId, shared_ptr<string> gatewayServiceId);
  GetHttpApiResponse getHttpApiWithOptions(shared_ptr<string> httpApiId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetHttpApiResponse getHttpApi(shared_ptr<string> httpApiId);
  GetHttpApiOperationResponse getHttpApiOperationWithOptions(shared_ptr<string> httpApiId,
                                                             shared_ptr<string> operationId,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetHttpApiOperationResponse getHttpApiOperation(shared_ptr<string> httpApiId, shared_ptr<string> operationId);
  ListDomainsResponse listDomainsWithOptions(shared_ptr<ListDomainsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDomainsResponse listDomains(shared_ptr<ListDomainsRequest> request);
  ListEnvironmentsResponse listEnvironmentsWithOptions(shared_ptr<ListEnvironmentsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListEnvironmentsResponse listEnvironments(shared_ptr<ListEnvironmentsRequest> request);
  ListGatewayRoutesResponse listGatewayRoutesWithOptions(shared_ptr<string> gatewayId,
                                                         shared_ptr<ListGatewayRoutesRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListGatewayRoutesResponse listGatewayRoutes(shared_ptr<string> gatewayId, shared_ptr<ListGatewayRoutesRequest> request);
  ListGatewayServicesResponse listGatewayServicesWithOptions(shared_ptr<string> gatewayId,
                                                             shared_ptr<ListGatewayServicesRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListGatewayServicesResponse listGatewayServices(shared_ptr<string> gatewayId, shared_ptr<ListGatewayServicesRequest> request);
  ListGatewaysResponse listGatewaysWithOptions(shared_ptr<ListGatewaysRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListGatewaysResponse listGateways(shared_ptr<ListGatewaysRequest> request);
  ListHttpApiOperationsResponse listHttpApiOperationsWithOptions(shared_ptr<string> httpApiId,
                                                                 shared_ptr<ListHttpApiOperationsRequest> request,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListHttpApiOperationsResponse listHttpApiOperations(shared_ptr<string> httpApiId, shared_ptr<ListHttpApiOperationsRequest> request);
  ListHttpApisResponse listHttpApisWithOptions(shared_ptr<ListHttpApisRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListHttpApisResponse listHttpApis(shared_ptr<ListHttpApisRequest> request);
  OfflineGatewayRouteResponse offlineGatewayRouteWithOptions(shared_ptr<string> gatewayId,
                                                             shared_ptr<string> gatewayRouteId,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OfflineGatewayRouteResponse offlineGatewayRoute(shared_ptr<string> gatewayId, shared_ptr<string> gatewayRouteId);
  OfflineHttpApiResponse offlineHttpApiWithOptions(shared_ptr<string> httpApiId,
                                                   shared_ptr<OfflineHttpApiRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OfflineHttpApiResponse offlineHttpApi(shared_ptr<string> httpApiId, shared_ptr<OfflineHttpApiRequest> request);
  PublishGatewayRouteResponse publishGatewayRouteWithOptions(shared_ptr<string> gatewayId,
                                                             shared_ptr<string> gatewayRouteId,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PublishGatewayRouteResponse publishGatewayRoute(shared_ptr<string> gatewayId, shared_ptr<string> gatewayRouteId);
  PublishHttpApiResponse publishHttpApiWithOptions(shared_ptr<string> httpApiId,
                                                   shared_ptr<PublishHttpApiRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PublishHttpApiResponse publishHttpApi(shared_ptr<string> httpApiId, shared_ptr<PublishHttpApiRequest> request);
  UpdateDomainResponse updateDomainWithOptions(shared_ptr<string> domainId,
                                               shared_ptr<UpdateDomainRequest> request,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateDomainResponse updateDomain(shared_ptr<string> domainId, shared_ptr<UpdateDomainRequest> request);
  UpdateEnvironmentResponse updateEnvironmentWithOptions(shared_ptr<string> environmentId,
                                                         shared_ptr<UpdateEnvironmentRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateEnvironmentResponse updateEnvironment(shared_ptr<string> environmentId, shared_ptr<UpdateEnvironmentRequest> request);
  UpdateGatewayRouteResponse updateGatewayRouteWithOptions(shared_ptr<string> gatewayId,
                                                           shared_ptr<string> gatewayRouteId,
                                                           shared_ptr<UpdateGatewayRouteRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateGatewayRouteResponse updateGatewayRoute(shared_ptr<string> gatewayId, shared_ptr<string> gatewayRouteId, shared_ptr<UpdateGatewayRouteRequest> request);
  UpdateGatewayServiceResponse updateGatewayServiceWithOptions(shared_ptr<string> gatewayId,
                                                               shared_ptr<string> gatewayServiceId,
                                                               shared_ptr<UpdateGatewayServiceRequest> request,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateGatewayServiceResponse updateGatewayService(shared_ptr<string> gatewayId, shared_ptr<string> gatewayServiceId, shared_ptr<UpdateGatewayServiceRequest> request);
  UpdateGatewayServiceVersionResponse updateGatewayServiceVersionWithOptions(shared_ptr<string> gatewayId,
                                                                             shared_ptr<string> gatewayServiceId,
                                                                             shared_ptr<string> name,
                                                                             shared_ptr<UpdateGatewayServiceVersionRequest> request,
                                                                             shared_ptr<map<string, string>> headers,
                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateGatewayServiceVersionResponse updateGatewayServiceVersion(shared_ptr<string> gatewayId,
                                                                  shared_ptr<string> gatewayServiceId,
                                                                  shared_ptr<string> name,
                                                                  shared_ptr<UpdateGatewayServiceVersionRequest> request);
  UpdateHttpApiResponse updateHttpApiWithOptions(shared_ptr<string> httpApiId,
                                                 shared_ptr<UpdateHttpApiRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateHttpApiResponse updateHttpApi(shared_ptr<string> httpApiId, shared_ptr<UpdateHttpApiRequest> request);
  UpdateHttpApiOperationResponse updateHttpApiOperationWithOptions(shared_ptr<string> httpApiId,
                                                                   shared_ptr<string> operationId,
                                                                   shared_ptr<UpdateHttpApiOperationRequest> request,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateHttpApiOperationResponse updateHttpApiOperation(shared_ptr<string> httpApiId, shared_ptr<string> operationId, shared_ptr<UpdateHttpApiOperationRequest> request);
  UpdateServiceSourceResponse updateServiceSourceWithOptions(shared_ptr<string> gatewayId,
                                                             shared_ptr<string> serviceSourceId,
                                                             shared_ptr<UpdateServiceSourceRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateServiceSourceResponse updateServiceSource(shared_ptr<string> gatewayId, shared_ptr<string> serviceSourceId, shared_ptr<UpdateServiceSourceRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_APIG20240327

#endif
