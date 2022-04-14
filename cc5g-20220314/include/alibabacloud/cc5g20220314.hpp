// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_CC5G20220314_H_
#define ALIBABACLOUD_CC5G20220314_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_CC5G20220314 {
class AddDNSAuthorizationRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<string> destinationIp{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> name{};
  shared_ptr<string> sourceDNSIp{};
  shared_ptr<string> wirelessCloudConnectorId{};

  AddDNSAuthorizationRuleRequest() {}

  explicit AddDNSAuthorizationRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (destinationIp) {
      res["DestinationIp"] = boost::any(*destinationIp);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (sourceDNSIp) {
      res["SourceDNSIp"] = boost::any(*sourceDNSIp);
    }
    if (wirelessCloudConnectorId) {
      res["WirelessCloudConnectorId"] = boost::any(*wirelessCloudConnectorId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DestinationIp") != m.end() && !m["DestinationIp"].empty()) {
      destinationIp = make_shared<string>(boost::any_cast<string>(m["DestinationIp"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("SourceDNSIp") != m.end() && !m["SourceDNSIp"].empty()) {
      sourceDNSIp = make_shared<string>(boost::any_cast<string>(m["SourceDNSIp"]));
    }
    if (m.find("WirelessCloudConnectorId") != m.end() && !m["WirelessCloudConnectorId"].empty()) {
      wirelessCloudConnectorId = make_shared<string>(boost::any_cast<string>(m["WirelessCloudConnectorId"]));
    }
  }


  virtual ~AddDNSAuthorizationRuleRequest() = default;
};
class AddDNSAuthorizationRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> authorizationRuleId{};
  shared_ptr<string> requestId{};

  AddDNSAuthorizationRuleResponseBody() {}

  explicit AddDNSAuthorizationRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorizationRuleId) {
      res["AuthorizationRuleId"] = boost::any(*authorizationRuleId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthorizationRuleId") != m.end() && !m["AuthorizationRuleId"].empty()) {
      authorizationRuleId = make_shared<string>(boost::any_cast<string>(m["AuthorizationRuleId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AddDNSAuthorizationRuleResponseBody() = default;
};
class AddDNSAuthorizationRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddDNSAuthorizationRuleResponseBody> body{};

  AddDNSAuthorizationRuleResponse() {}

  explicit AddDNSAuthorizationRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddDNSAuthorizationRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddDNSAuthorizationRuleResponseBody>(model1);
      }
    }
  }


  virtual ~AddDNSAuthorizationRuleResponse() = default;
};
class AttachVpcToNetLinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> netLinkId{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> vSwitches{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> wirelessCloudConnectorId{};

  AttachVpcToNetLinkRequest() {}

  explicit AttachVpcToNetLinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (netLinkId) {
      res["NetLinkId"] = boost::any(*netLinkId);
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
    if (wirelessCloudConnectorId) {
      res["WirelessCloudConnectorId"] = boost::any(*wirelessCloudConnectorId);
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
    if (m.find("NetLinkId") != m.end() && !m["NetLinkId"].empty()) {
      netLinkId = make_shared<string>(boost::any_cast<string>(m["NetLinkId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
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
    if (m.find("WirelessCloudConnectorId") != m.end() && !m["WirelessCloudConnectorId"].empty()) {
      wirelessCloudConnectorId = make_shared<string>(boost::any_cast<string>(m["WirelessCloudConnectorId"]));
    }
  }


  virtual ~AttachVpcToNetLinkRequest() = default;
};
class AttachVpcToNetLinkResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AttachVpcToNetLinkResponseBody() {}

  explicit AttachVpcToNetLinkResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AttachVpcToNetLinkResponseBody() = default;
};
class AttachVpcToNetLinkResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AttachVpcToNetLinkResponseBody> body{};

  AttachVpcToNetLinkResponse() {}

  explicit AttachVpcToNetLinkResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AttachVpcToNetLinkResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AttachVpcToNetLinkResponseBody>(model1);
      }
    }
  }


  virtual ~AttachVpcToNetLinkResponse() = default;
};
class CreateAuthorizationRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<string> destination{};
  shared_ptr<string> destinationType{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> name{};
  shared_ptr<string> policy{};
  shared_ptr<string> sourceCidr{};
  shared_ptr<string> wirelessCloudConnectorId{};

  CreateAuthorizationRuleRequest() {}

  explicit CreateAuthorizationRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (destination) {
      res["Destination"] = boost::any(*destination);
    }
    if (destinationType) {
      res["DestinationType"] = boost::any(*destinationType);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    if (sourceCidr) {
      res["SourceCidr"] = boost::any(*sourceCidr);
    }
    if (wirelessCloudConnectorId) {
      res["WirelessCloudConnectorId"] = boost::any(*wirelessCloudConnectorId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Destination") != m.end() && !m["Destination"].empty()) {
      destination = make_shared<string>(boost::any_cast<string>(m["Destination"]));
    }
    if (m.find("DestinationType") != m.end() && !m["DestinationType"].empty()) {
      destinationType = make_shared<string>(boost::any_cast<string>(m["DestinationType"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
    if (m.find("SourceCidr") != m.end() && !m["SourceCidr"].empty()) {
      sourceCidr = make_shared<string>(boost::any_cast<string>(m["SourceCidr"]));
    }
    if (m.find("WirelessCloudConnectorId") != m.end() && !m["WirelessCloudConnectorId"].empty()) {
      wirelessCloudConnectorId = make_shared<string>(boost::any_cast<string>(m["WirelessCloudConnectorId"]));
    }
  }


  virtual ~CreateAuthorizationRuleRequest() = default;
};
class CreateAuthorizationRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> authorizationRuleId{};
  shared_ptr<string> requestId{};

  CreateAuthorizationRuleResponseBody() {}

  explicit CreateAuthorizationRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorizationRuleId) {
      res["AuthorizationRuleId"] = boost::any(*authorizationRuleId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthorizationRuleId") != m.end() && !m["AuthorizationRuleId"].empty()) {
      authorizationRuleId = make_shared<string>(boost::any_cast<string>(m["AuthorizationRuleId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateAuthorizationRuleResponseBody() = default;
};
class CreateAuthorizationRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateAuthorizationRuleResponseBody> body{};

  CreateAuthorizationRuleResponse() {}

  explicit CreateAuthorizationRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAuthorizationRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAuthorizationRuleResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAuthorizationRuleResponse() = default;
};
class CreateWirelessCloudConnectorRequestNetLinks : public Darabonba::Model {
public:
  shared_ptr<string> APN{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> vSwitchs{};
  shared_ptr<string> vpcId{};

  CreateWirelessCloudConnectorRequestNetLinks() {}

  explicit CreateWirelessCloudConnectorRequestNetLinks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (APN) {
      res["APN"] = boost::any(*APN);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (vSwitchs) {
      res["VSwitchs"] = boost::any(*vSwitchs);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("APN") != m.end() && !m["APN"].empty()) {
      APN = make_shared<string>(boost::any_cast<string>(m["APN"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("VSwitchs") != m.end() && !m["VSwitchs"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["VSwitchs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["VSwitchs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vSwitchs = make_shared<vector<string>>(toVec1);
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~CreateWirelessCloudConnectorRequestNetLinks() = default;
};
class CreateWirelessCloudConnectorRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ISP{};
  shared_ptr<string> name{};
  shared_ptr<vector<CreateWirelessCloudConnectorRequestNetLinks>> netLinks{};
  shared_ptr<string> regionId{};
  shared_ptr<string> useCase{};

  CreateWirelessCloudConnectorRequest() {}

  explicit CreateWirelessCloudConnectorRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ISP) {
      res["ISP"] = boost::any(*ISP);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (netLinks) {
      vector<boost::any> temp1;
      for(auto item1:*netLinks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NetLinks"] = boost::any(temp1);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (useCase) {
      res["UseCase"] = boost::any(*useCase);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("ISP") != m.end() && !m["ISP"].empty()) {
      ISP = make_shared<string>(boost::any_cast<string>(m["ISP"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NetLinks") != m.end() && !m["NetLinks"].empty()) {
      if (typeid(vector<boost::any>) == m["NetLinks"].type()) {
        vector<CreateWirelessCloudConnectorRequestNetLinks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NetLinks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateWirelessCloudConnectorRequestNetLinks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        netLinks = make_shared<vector<CreateWirelessCloudConnectorRequestNetLinks>>(expect1);
      }
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("UseCase") != m.end() && !m["UseCase"].empty()) {
      useCase = make_shared<string>(boost::any_cast<string>(m["UseCase"]));
    }
  }


  virtual ~CreateWirelessCloudConnectorRequest() = default;
};
class CreateWirelessCloudConnectorResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> wirelessCloudConnectorId{};

  CreateWirelessCloudConnectorResponseBody() {}

  explicit CreateWirelessCloudConnectorResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (wirelessCloudConnectorId) {
      res["WirelessCloudConnectorId"] = boost::any(*wirelessCloudConnectorId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("WirelessCloudConnectorId") != m.end() && !m["WirelessCloudConnectorId"].empty()) {
      wirelessCloudConnectorId = make_shared<string>(boost::any_cast<string>(m["WirelessCloudConnectorId"]));
    }
  }


  virtual ~CreateWirelessCloudConnectorResponseBody() = default;
};
class CreateWirelessCloudConnectorResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateWirelessCloudConnectorResponseBody> body{};

  CreateWirelessCloudConnectorResponse() {}

  explicit CreateWirelessCloudConnectorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateWirelessCloudConnectorResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateWirelessCloudConnectorResponseBody>(model1);
      }
    }
  }


  virtual ~CreateWirelessCloudConnectorResponse() = default;
};
class DeleteAuthorizationRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> authorizationRuleId{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> wirelessCloudConnectorId{};

  DeleteAuthorizationRuleRequest() {}

  explicit DeleteAuthorizationRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorizationRuleId) {
      res["AuthorizationRuleId"] = boost::any(*authorizationRuleId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (wirelessCloudConnectorId) {
      res["WirelessCloudConnectorId"] = boost::any(*wirelessCloudConnectorId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthorizationRuleId") != m.end() && !m["AuthorizationRuleId"].empty()) {
      authorizationRuleId = make_shared<string>(boost::any_cast<string>(m["AuthorizationRuleId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("WirelessCloudConnectorId") != m.end() && !m["WirelessCloudConnectorId"].empty()) {
      wirelessCloudConnectorId = make_shared<string>(boost::any_cast<string>(m["WirelessCloudConnectorId"]));
    }
  }


  virtual ~DeleteAuthorizationRuleRequest() = default;
};
class DeleteAuthorizationRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteAuthorizationRuleResponseBody() {}

  explicit DeleteAuthorizationRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteAuthorizationRuleResponseBody() = default;
};
class DeleteAuthorizationRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteAuthorizationRuleResponseBody> body{};

  DeleteAuthorizationRuleResponse() {}

  explicit DeleteAuthorizationRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteAuthorizationRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAuthorizationRuleResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAuthorizationRuleResponse() = default;
};
class DeleteWirelessCloudConnectorRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> wirelessCloudConnectorId{};

  DeleteWirelessCloudConnectorRequest() {}

  explicit DeleteWirelessCloudConnectorRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (wirelessCloudConnectorId) {
      res["WirelessCloudConnectorId"] = boost::any(*wirelessCloudConnectorId);
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
    if (m.find("WirelessCloudConnectorId") != m.end() && !m["WirelessCloudConnectorId"].empty()) {
      wirelessCloudConnectorId = make_shared<string>(boost::any_cast<string>(m["WirelessCloudConnectorId"]));
    }
  }


  virtual ~DeleteWirelessCloudConnectorRequest() = default;
};
class DeleteWirelessCloudConnectorResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteWirelessCloudConnectorResponseBody() {}

  explicit DeleteWirelessCloudConnectorResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteWirelessCloudConnectorResponseBody() = default;
};
class DeleteWirelessCloudConnectorResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteWirelessCloudConnectorResponseBody> body{};

  DeleteWirelessCloudConnectorResponse() {}

  explicit DeleteWirelessCloudConnectorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteWirelessCloudConnectorResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteWirelessCloudConnectorResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteWirelessCloudConnectorResponse() = default;
};
class DetachVpcFromNetLinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> netLinkId{};
  shared_ptr<string> wirelessCloudConnectorId{};

  DetachVpcFromNetLinkRequest() {}

  explicit DetachVpcFromNetLinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (netLinkId) {
      res["NetLinkId"] = boost::any(*netLinkId);
    }
    if (wirelessCloudConnectorId) {
      res["WirelessCloudConnectorId"] = boost::any(*wirelessCloudConnectorId);
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
    if (m.find("NetLinkId") != m.end() && !m["NetLinkId"].empty()) {
      netLinkId = make_shared<string>(boost::any_cast<string>(m["NetLinkId"]));
    }
    if (m.find("WirelessCloudConnectorId") != m.end() && !m["WirelessCloudConnectorId"].empty()) {
      wirelessCloudConnectorId = make_shared<string>(boost::any_cast<string>(m["WirelessCloudConnectorId"]));
    }
  }


  virtual ~DetachVpcFromNetLinkRequest() = default;
};
class DetachVpcFromNetLinkResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DetachVpcFromNetLinkResponseBody() {}

  explicit DetachVpcFromNetLinkResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DetachVpcFromNetLinkResponseBody() = default;
};
class DetachVpcFromNetLinkResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DetachVpcFromNetLinkResponseBody> body{};

  DetachVpcFromNetLinkResponse() {}

  explicit DetachVpcFromNetLinkResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetachVpcFromNetLinkResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetachVpcFromNetLinkResponseBody>(model1);
      }
    }
  }


  virtual ~DetachVpcFromNetLinkResponse() = default;
};
class ListZonesRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  ListZonesRequest() {}

  explicit ListZonesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListZonesRequest() = default;
};
class ListZonesResponseBodyZones : public Darabonba::Model {
public:
  shared_ptr<string> localName{};
  shared_ptr<string> zoneId{};

  ListZonesResponseBodyZones() {}

  explicit ListZonesResponseBodyZones(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListZonesResponseBodyZones() = default;
};
class ListZonesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListZonesResponseBodyZones>> zones{};

  ListZonesResponseBody() {}

  explicit ListZonesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<ListZonesResponseBodyZones> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Zones"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListZonesResponseBodyZones model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        zones = make_shared<vector<ListZonesResponseBodyZones>>(expect1);
      }
    }
  }


  virtual ~ListZonesResponseBody() = default;
};
class ListZonesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListZonesResponseBody> body{};

  ListZonesResponse() {}

  explicit ListZonesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListZonesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListZonesResponseBody>(model1);
      }
    }
  }


  virtual ~ListZonesResponse() = default;
};
class OpenCc5gServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  OpenCc5gServiceRequest() {}

  explicit OpenCc5gServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~OpenCc5gServiceRequest() = default;
};
class OpenCc5gServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  OpenCc5gServiceResponseBody() {}

  explicit OpenCc5gServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~OpenCc5gServiceResponseBody() = default;
};
class OpenCc5gServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<OpenCc5gServiceResponseBody> body{};

  OpenCc5gServiceResponse() {}

  explicit OpenCc5gServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OpenCc5gServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OpenCc5gServiceResponseBody>(model1);
      }
    }
  }


  virtual ~OpenCc5gServiceResponse() = default;
};
class UpdateAuthorizationRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> authorizationRuleId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<string> destination{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> name{};
  shared_ptr<string> policy{};
  shared_ptr<string> sourceCidr{};
  shared_ptr<string> wirelessCloudConnectorId{};

  UpdateAuthorizationRuleRequest() {}

  explicit UpdateAuthorizationRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorizationRuleId) {
      res["AuthorizationRuleId"] = boost::any(*authorizationRuleId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (destination) {
      res["Destination"] = boost::any(*destination);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    if (sourceCidr) {
      res["SourceCidr"] = boost::any(*sourceCidr);
    }
    if (wirelessCloudConnectorId) {
      res["WirelessCloudConnectorId"] = boost::any(*wirelessCloudConnectorId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthorizationRuleId") != m.end() && !m["AuthorizationRuleId"].empty()) {
      authorizationRuleId = make_shared<string>(boost::any_cast<string>(m["AuthorizationRuleId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Destination") != m.end() && !m["Destination"].empty()) {
      destination = make_shared<string>(boost::any_cast<string>(m["Destination"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
    if (m.find("SourceCidr") != m.end() && !m["SourceCidr"].empty()) {
      sourceCidr = make_shared<string>(boost::any_cast<string>(m["SourceCidr"]));
    }
    if (m.find("WirelessCloudConnectorId") != m.end() && !m["WirelessCloudConnectorId"].empty()) {
      wirelessCloudConnectorId = make_shared<string>(boost::any_cast<string>(m["WirelessCloudConnectorId"]));
    }
  }


  virtual ~UpdateAuthorizationRuleRequest() = default;
};
class UpdateAuthorizationRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateAuthorizationRuleResponseBody() {}

  explicit UpdateAuthorizationRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateAuthorizationRuleResponseBody() = default;
};
class UpdateAuthorizationRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateAuthorizationRuleResponseBody> body{};

  UpdateAuthorizationRuleResponse() {}

  explicit UpdateAuthorizationRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateAuthorizationRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAuthorizationRuleResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAuthorizationRuleResponse() = default;
};
class UpdateCardRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> iccid{};
  shared_ptr<string> name{};
  shared_ptr<string> wirelessCloudConnectorId{};

  UpdateCardRequest() {}

  explicit UpdateCardRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (iccid) {
      res["Iccid"] = boost::any(*iccid);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (wirelessCloudConnectorId) {
      res["WirelessCloudConnectorId"] = boost::any(*wirelessCloudConnectorId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("Iccid") != m.end() && !m["Iccid"].empty()) {
      iccid = make_shared<string>(boost::any_cast<string>(m["Iccid"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("WirelessCloudConnectorId") != m.end() && !m["WirelessCloudConnectorId"].empty()) {
      wirelessCloudConnectorId = make_shared<string>(boost::any_cast<string>(m["WirelessCloudConnectorId"]));
    }
  }


  virtual ~UpdateCardRequest() = default;
};
class UpdateCardResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateCardResponseBody() {}

  explicit UpdateCardResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateCardResponseBody() = default;
};
class UpdateCardResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateCardResponseBody> body{};

  UpdateCardResponse() {}

  explicit UpdateCardResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateCardResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateCardResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateCardResponse() = default;
};
class UpdateDNSAuthorizationRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> authorizationRuleId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<string> destinationIp{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> name{};
  shared_ptr<string> sourceDNSIp{};
  shared_ptr<string> wirelessCloudConnectorId{};

  UpdateDNSAuthorizationRuleRequest() {}

  explicit UpdateDNSAuthorizationRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorizationRuleId) {
      res["AuthorizationRuleId"] = boost::any(*authorizationRuleId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (destinationIp) {
      res["DestinationIp"] = boost::any(*destinationIp);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (sourceDNSIp) {
      res["SourceDNSIp"] = boost::any(*sourceDNSIp);
    }
    if (wirelessCloudConnectorId) {
      res["WirelessCloudConnectorId"] = boost::any(*wirelessCloudConnectorId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthorizationRuleId") != m.end() && !m["AuthorizationRuleId"].empty()) {
      authorizationRuleId = make_shared<string>(boost::any_cast<string>(m["AuthorizationRuleId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DestinationIp") != m.end() && !m["DestinationIp"].empty()) {
      destinationIp = make_shared<string>(boost::any_cast<string>(m["DestinationIp"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("SourceDNSIp") != m.end() && !m["SourceDNSIp"].empty()) {
      sourceDNSIp = make_shared<string>(boost::any_cast<string>(m["SourceDNSIp"]));
    }
    if (m.find("WirelessCloudConnectorId") != m.end() && !m["WirelessCloudConnectorId"].empty()) {
      wirelessCloudConnectorId = make_shared<string>(boost::any_cast<string>(m["WirelessCloudConnectorId"]));
    }
  }


  virtual ~UpdateDNSAuthorizationRuleRequest() = default;
};
class UpdateDNSAuthorizationRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateDNSAuthorizationRuleResponseBody() {}

  explicit UpdateDNSAuthorizationRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateDNSAuthorizationRuleResponseBody() = default;
};
class UpdateDNSAuthorizationRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateDNSAuthorizationRuleResponseBody> body{};

  UpdateDNSAuthorizationRuleResponse() {}

  explicit UpdateDNSAuthorizationRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateDNSAuthorizationRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateDNSAuthorizationRuleResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateDNSAuthorizationRuleResponse() = default;
};
class UpdateWirelessCloudConnectorRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> name{};
  shared_ptr<string> wirelessCloudConnectorId{};

  UpdateWirelessCloudConnectorRequest() {}

  explicit UpdateWirelessCloudConnectorRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (wirelessCloudConnectorId) {
      res["WirelessCloudConnectorId"] = boost::any(*wirelessCloudConnectorId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("WirelessCloudConnectorId") != m.end() && !m["WirelessCloudConnectorId"].empty()) {
      wirelessCloudConnectorId = make_shared<string>(boost::any_cast<string>(m["WirelessCloudConnectorId"]));
    }
  }


  virtual ~UpdateWirelessCloudConnectorRequest() = default;
};
class UpdateWirelessCloudConnectorResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateWirelessCloudConnectorResponseBody() {}

  explicit UpdateWirelessCloudConnectorResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateWirelessCloudConnectorResponseBody() = default;
};
class UpdateWirelessCloudConnectorResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateWirelessCloudConnectorResponseBody> body{};

  UpdateWirelessCloudConnectorResponse() {}

  explicit UpdateWirelessCloudConnectorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateWirelessCloudConnectorResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateWirelessCloudConnectorResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateWirelessCloudConnectorResponse() = default;
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
  AddDNSAuthorizationRuleResponse addDNSAuthorizationRuleWithOptions(shared_ptr<AddDNSAuthorizationRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddDNSAuthorizationRuleResponse addDNSAuthorizationRule(shared_ptr<AddDNSAuthorizationRuleRequest> request);
  AttachVpcToNetLinkResponse attachVpcToNetLinkWithOptions(shared_ptr<AttachVpcToNetLinkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AttachVpcToNetLinkResponse attachVpcToNetLink(shared_ptr<AttachVpcToNetLinkRequest> request);
  CreateAuthorizationRuleResponse createAuthorizationRuleWithOptions(shared_ptr<CreateAuthorizationRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAuthorizationRuleResponse createAuthorizationRule(shared_ptr<CreateAuthorizationRuleRequest> request);
  CreateWirelessCloudConnectorResponse createWirelessCloudConnectorWithOptions(shared_ptr<CreateWirelessCloudConnectorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateWirelessCloudConnectorResponse createWirelessCloudConnector(shared_ptr<CreateWirelessCloudConnectorRequest> request);
  DeleteAuthorizationRuleResponse deleteAuthorizationRuleWithOptions(shared_ptr<DeleteAuthorizationRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAuthorizationRuleResponse deleteAuthorizationRule(shared_ptr<DeleteAuthorizationRuleRequest> request);
  DeleteWirelessCloudConnectorResponse deleteWirelessCloudConnectorWithOptions(shared_ptr<DeleteWirelessCloudConnectorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteWirelessCloudConnectorResponse deleteWirelessCloudConnector(shared_ptr<DeleteWirelessCloudConnectorRequest> request);
  DetachVpcFromNetLinkResponse detachVpcFromNetLinkWithOptions(shared_ptr<DetachVpcFromNetLinkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetachVpcFromNetLinkResponse detachVpcFromNetLink(shared_ptr<DetachVpcFromNetLinkRequest> request);
  ListZonesResponse listZonesWithOptions(shared_ptr<ListZonesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListZonesResponse listZones(shared_ptr<ListZonesRequest> request);
  OpenCc5gServiceResponse openCc5gServiceWithOptions(shared_ptr<OpenCc5gServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OpenCc5gServiceResponse openCc5gService(shared_ptr<OpenCc5gServiceRequest> request);
  UpdateAuthorizationRuleResponse updateAuthorizationRuleWithOptions(shared_ptr<UpdateAuthorizationRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAuthorizationRuleResponse updateAuthorizationRule(shared_ptr<UpdateAuthorizationRuleRequest> request);
  UpdateCardResponse updateCardWithOptions(shared_ptr<UpdateCardRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateCardResponse updateCard(shared_ptr<UpdateCardRequest> request);
  UpdateDNSAuthorizationRuleResponse updateDNSAuthorizationRuleWithOptions(shared_ptr<UpdateDNSAuthorizationRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateDNSAuthorizationRuleResponse updateDNSAuthorizationRule(shared_ptr<UpdateDNSAuthorizationRuleRequest> request);
  UpdateWirelessCloudConnectorResponse updateWirelessCloudConnectorWithOptions(shared_ptr<UpdateWirelessCloudConnectorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateWirelessCloudConnectorResponse updateWirelessCloudConnector(shared_ptr<UpdateWirelessCloudConnectorRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_CC5G20220314

#endif
