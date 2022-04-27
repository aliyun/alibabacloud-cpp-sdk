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
class GetWirelessCloudConnectorRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> wirelessCloudConnectorId{};

  GetWirelessCloudConnectorRequest() {}

  explicit GetWirelessCloudConnectorRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (wirelessCloudConnectorId) {
      res["WirelessCloudConnectorId"] = boost::any(*wirelessCloudConnectorId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("WirelessCloudConnectorId") != m.end() && !m["WirelessCloudConnectorId"].empty()) {
      wirelessCloudConnectorId = make_shared<string>(boost::any_cast<string>(m["WirelessCloudConnectorId"]));
    }
  }


  virtual ~GetWirelessCloudConnectorRequest() = default;
};
class GetWirelessCloudConnectorResponseBodyNetLinks : public Darabonba::Model {
public:
  shared_ptr<string> APN{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> ISP{};
  shared_ptr<string> name{};
  shared_ptr<string> netLinkId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> status{};
  shared_ptr<vector<string>> vSwitchs{};
  shared_ptr<string> vpcId{};

  GetWirelessCloudConnectorResponseBodyNetLinks() {}

  explicit GetWirelessCloudConnectorResponseBodyNetLinks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (APN) {
      res["APN"] = boost::any(*APN);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (ISP) {
      res["ISP"] = boost::any(*ISP);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (netLinkId) {
      res["NetLinkId"] = boost::any(*netLinkId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
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
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ISP") != m.end() && !m["ISP"].empty()) {
      ISP = make_shared<string>(boost::any_cast<string>(m["ISP"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NetLinkId") != m.end() && !m["NetLinkId"].empty()) {
      netLinkId = make_shared<string>(boost::any_cast<string>(m["NetLinkId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
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


  virtual ~GetWirelessCloudConnectorResponseBodyNetLinks() = default;
};
class GetWirelessCloudConnectorResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> cardCount{};
  shared_ptr<string> createTime{};
  shared_ptr<string> dataPackageId{};
  shared_ptr<string> dataPackageType{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<vector<GetWirelessCloudConnectorResponseBodyNetLinks>> netLinks{};
  shared_ptr<string> regionId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<string> useCase{};
  shared_ptr<string> wirelessCloudConnectorId{};

  GetWirelessCloudConnectorResponseBody() {}

  explicit GetWirelessCloudConnectorResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cardCount) {
      res["CardCount"] = boost::any(*cardCount);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (dataPackageId) {
      res["DataPackageId"] = boost::any(*dataPackageId);
    }
    if (dataPackageType) {
      res["DataPackageType"] = boost::any(*dataPackageType);
    }
    if (description) {
      res["Description"] = boost::any(*description);
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (useCase) {
      res["UseCase"] = boost::any(*useCase);
    }
    if (wirelessCloudConnectorId) {
      res["WirelessCloudConnectorId"] = boost::any(*wirelessCloudConnectorId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CardCount") != m.end() && !m["CardCount"].empty()) {
      cardCount = make_shared<string>(boost::any_cast<string>(m["CardCount"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DataPackageId") != m.end() && !m["DataPackageId"].empty()) {
      dataPackageId = make_shared<string>(boost::any_cast<string>(m["DataPackageId"]));
    }
    if (m.find("DataPackageType") != m.end() && !m["DataPackageType"].empty()) {
      dataPackageType = make_shared<string>(boost::any_cast<string>(m["DataPackageType"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NetLinks") != m.end() && !m["NetLinks"].empty()) {
      if (typeid(vector<boost::any>) == m["NetLinks"].type()) {
        vector<GetWirelessCloudConnectorResponseBodyNetLinks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NetLinks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetWirelessCloudConnectorResponseBodyNetLinks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        netLinks = make_shared<vector<GetWirelessCloudConnectorResponseBodyNetLinks>>(expect1);
      }
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UseCase") != m.end() && !m["UseCase"].empty()) {
      useCase = make_shared<string>(boost::any_cast<string>(m["UseCase"]));
    }
    if (m.find("WirelessCloudConnectorId") != m.end() && !m["WirelessCloudConnectorId"].empty()) {
      wirelessCloudConnectorId = make_shared<string>(boost::any_cast<string>(m["WirelessCloudConnectorId"]));
    }
  }


  virtual ~GetWirelessCloudConnectorResponseBody() = default;
};
class GetWirelessCloudConnectorResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetWirelessCloudConnectorResponseBody> body{};

  GetWirelessCloudConnectorResponse() {}

  explicit GetWirelessCloudConnectorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetWirelessCloudConnectorResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetWirelessCloudConnectorResponseBody>(model1);
      }
    }
  }


  virtual ~GetWirelessCloudConnectorResponse() = default;
};
class ListAuthorizationRulesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> authorizationRuleIds{};
  shared_ptr<string> destination{};
  shared_ptr<string> destinationType{};
  shared_ptr<bool> dns{};
  shared_ptr<long> maxResults{};
  shared_ptr<vector<string>> names{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> policy{};
  shared_ptr<vector<string>> statuses{};
  shared_ptr<string> type{};
  shared_ptr<string> wirelessCloudConnectorId{};

  ListAuthorizationRulesRequest() {}

  explicit ListAuthorizationRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorizationRuleIds) {
      res["AuthorizationRuleIds"] = boost::any(*authorizationRuleIds);
    }
    if (destination) {
      res["Destination"] = boost::any(*destination);
    }
    if (destinationType) {
      res["DestinationType"] = boost::any(*destinationType);
    }
    if (dns) {
      res["Dns"] = boost::any(*dns);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (names) {
      res["Names"] = boost::any(*names);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    if (statuses) {
      res["Statuses"] = boost::any(*statuses);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (wirelessCloudConnectorId) {
      res["WirelessCloudConnectorId"] = boost::any(*wirelessCloudConnectorId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthorizationRuleIds") != m.end() && !m["AuthorizationRuleIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AuthorizationRuleIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AuthorizationRuleIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      authorizationRuleIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Destination") != m.end() && !m["Destination"].empty()) {
      destination = make_shared<string>(boost::any_cast<string>(m["Destination"]));
    }
    if (m.find("DestinationType") != m.end() && !m["DestinationType"].empty()) {
      destinationType = make_shared<string>(boost::any_cast<string>(m["DestinationType"]));
    }
    if (m.find("Dns") != m.end() && !m["Dns"].empty()) {
      dns = make_shared<bool>(boost::any_cast<bool>(m["Dns"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
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
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
    if (m.find("Statuses") != m.end() && !m["Statuses"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Statuses"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Statuses"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      statuses = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("WirelessCloudConnectorId") != m.end() && !m["WirelessCloudConnectorId"].empty()) {
      wirelessCloudConnectorId = make_shared<string>(boost::any_cast<string>(m["WirelessCloudConnectorId"]));
    }
  }


  virtual ~ListAuthorizationRulesRequest() = default;
};
class ListAuthorizationRulesResponseBodyAuthorizationRules : public Darabonba::Model {
public:
  shared_ptr<string> authorizationRuleId{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> destination{};
  shared_ptr<string> destinationType{};
  shared_ptr<string> dns{};
  shared_ptr<string> name{};
  shared_ptr<string> policy{};
  shared_ptr<string> sourceCidr{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};

  ListAuthorizationRulesResponseBodyAuthorizationRules() {}

  explicit ListAuthorizationRulesResponseBodyAuthorizationRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorizationRuleId) {
      res["AuthorizationRuleId"] = boost::any(*authorizationRuleId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
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
    if (dns) {
      res["Dns"] = boost::any(*dns);
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
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthorizationRuleId") != m.end() && !m["AuthorizationRuleId"].empty()) {
      authorizationRuleId = make_shared<string>(boost::any_cast<string>(m["AuthorizationRuleId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
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
    if (m.find("Dns") != m.end() && !m["Dns"].empty()) {
      dns = make_shared<string>(boost::any_cast<string>(m["Dns"]));
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
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListAuthorizationRulesResponseBodyAuthorizationRules() = default;
};
class ListAuthorizationRulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListAuthorizationRulesResponseBodyAuthorizationRules>> authorizationRules{};
  shared_ptr<string> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<string> totalCount{};

  ListAuthorizationRulesResponseBody() {}

  explicit ListAuthorizationRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorizationRules) {
      vector<boost::any> temp1;
      for(auto item1:*authorizationRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AuthorizationRules"] = boost::any(temp1);
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
    if (m.find("AuthorizationRules") != m.end() && !m["AuthorizationRules"].empty()) {
      if (typeid(vector<boost::any>) == m["AuthorizationRules"].type()) {
        vector<ListAuthorizationRulesResponseBodyAuthorizationRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AuthorizationRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAuthorizationRulesResponseBodyAuthorizationRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        authorizationRules = make_shared<vector<ListAuthorizationRulesResponseBodyAuthorizationRules>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<string>(boost::any_cast<string>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<string>(boost::any_cast<string>(m["TotalCount"]));
    }
  }


  virtual ~ListAuthorizationRulesResponseBody() = default;
};
class ListAuthorizationRulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListAuthorizationRulesResponseBody> body{};

  ListAuthorizationRulesResponse() {}

  explicit ListAuthorizationRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAuthorizationRulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAuthorizationRulesResponseBody>(model1);
      }
    }
  }


  virtual ~ListAuthorizationRulesResponse() = default;
};
class ListCardsRequest : public Darabonba::Model {
public:
  shared_ptr<string> apn{};
  shared_ptr<string> destinationType{};
  shared_ptr<vector<string>> iccids{};
  shared_ptr<string> ipAddress{};
  shared_ptr<bool> lock{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> netLinkId{};
  shared_ptr<string> nextToken{};
  shared_ptr<bool> online{};
  shared_ptr<vector<string>> statuses{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> wirelessCloudConnectorId{};

  ListCardsRequest() {}

  explicit ListCardsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apn) {
      res["Apn"] = boost::any(*apn);
    }
    if (destinationType) {
      res["DestinationType"] = boost::any(*destinationType);
    }
    if (iccids) {
      res["Iccids"] = boost::any(*iccids);
    }
    if (ipAddress) {
      res["IpAddress"] = boost::any(*ipAddress);
    }
    if (lock) {
      res["Lock"] = boost::any(*lock);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (netLinkId) {
      res["NetLinkId"] = boost::any(*netLinkId);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (online) {
      res["Online"] = boost::any(*online);
    }
    if (statuses) {
      res["Statuses"] = boost::any(*statuses);
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
    if (m.find("Apn") != m.end() && !m["Apn"].empty()) {
      apn = make_shared<string>(boost::any_cast<string>(m["Apn"]));
    }
    if (m.find("DestinationType") != m.end() && !m["DestinationType"].empty()) {
      destinationType = make_shared<string>(boost::any_cast<string>(m["DestinationType"]));
    }
    if (m.find("Iccids") != m.end() && !m["Iccids"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Iccids"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Iccids"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      iccids = make_shared<vector<string>>(toVec1);
    }
    if (m.find("IpAddress") != m.end() && !m["IpAddress"].empty()) {
      ipAddress = make_shared<string>(boost::any_cast<string>(m["IpAddress"]));
    }
    if (m.find("Lock") != m.end() && !m["Lock"].empty()) {
      lock = make_shared<bool>(boost::any_cast<bool>(m["Lock"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NetLinkId") != m.end() && !m["NetLinkId"].empty()) {
      netLinkId = make_shared<string>(boost::any_cast<string>(m["NetLinkId"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Online") != m.end() && !m["Online"].empty()) {
      online = make_shared<bool>(boost::any_cast<bool>(m["Online"]));
    }
    if (m.find("Statuses") != m.end() && !m["Statuses"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Statuses"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Statuses"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      statuses = make_shared<vector<string>>(toVec1);
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("WirelessCloudConnectorId") != m.end() && !m["WirelessCloudConnectorId"].empty()) {
      wirelessCloudConnectorId = make_shared<string>(boost::any_cast<string>(m["WirelessCloudConnectorId"]));
    }
  }


  virtual ~ListCardsRequest() = default;
};
class ListCardsResponseBodyCards : public Darabonba::Model {
public:
  shared_ptr<string> APN{};
  shared_ptr<string> activatedTime{};
  shared_ptr<string> description{};
  shared_ptr<string> ISP{};
  shared_ptr<string> iccid{};
  shared_ptr<string> imei{};
  shared_ptr<string> imsi{};
  shared_ptr<string> ipAddress{};
  shared_ptr<bool> lock{};
  shared_ptr<string> name{};
  shared_ptr<string> netType{};
  shared_ptr<string> orderId{};
  shared_ptr<string> spec{};
  shared_ptr<string> status{};
  shared_ptr<long> usageDataMonth{};

  ListCardsResponseBodyCards() {}

  explicit ListCardsResponseBodyCards(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (APN) {
      res["APN"] = boost::any(*APN);
    }
    if (activatedTime) {
      res["ActivatedTime"] = boost::any(*activatedTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (ISP) {
      res["ISP"] = boost::any(*ISP);
    }
    if (iccid) {
      res["Iccid"] = boost::any(*iccid);
    }
    if (imei) {
      res["Imei"] = boost::any(*imei);
    }
    if (imsi) {
      res["Imsi"] = boost::any(*imsi);
    }
    if (ipAddress) {
      res["IpAddress"] = boost::any(*ipAddress);
    }
    if (lock) {
      res["Lock"] = boost::any(*lock);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (netType) {
      res["NetType"] = boost::any(*netType);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (spec) {
      res["Spec"] = boost::any(*spec);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (usageDataMonth) {
      res["UsageDataMonth"] = boost::any(*usageDataMonth);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("APN") != m.end() && !m["APN"].empty()) {
      APN = make_shared<string>(boost::any_cast<string>(m["APN"]));
    }
    if (m.find("ActivatedTime") != m.end() && !m["ActivatedTime"].empty()) {
      activatedTime = make_shared<string>(boost::any_cast<string>(m["ActivatedTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ISP") != m.end() && !m["ISP"].empty()) {
      ISP = make_shared<string>(boost::any_cast<string>(m["ISP"]));
    }
    if (m.find("Iccid") != m.end() && !m["Iccid"].empty()) {
      iccid = make_shared<string>(boost::any_cast<string>(m["Iccid"]));
    }
    if (m.find("Imei") != m.end() && !m["Imei"].empty()) {
      imei = make_shared<string>(boost::any_cast<string>(m["Imei"]));
    }
    if (m.find("Imsi") != m.end() && !m["Imsi"].empty()) {
      imsi = make_shared<string>(boost::any_cast<string>(m["Imsi"]));
    }
    if (m.find("IpAddress") != m.end() && !m["IpAddress"].empty()) {
      ipAddress = make_shared<string>(boost::any_cast<string>(m["IpAddress"]));
    }
    if (m.find("Lock") != m.end() && !m["Lock"].empty()) {
      lock = make_shared<bool>(boost::any_cast<bool>(m["Lock"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NetType") != m.end() && !m["NetType"].empty()) {
      netType = make_shared<string>(boost::any_cast<string>(m["NetType"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("Spec") != m.end() && !m["Spec"].empty()) {
      spec = make_shared<string>(boost::any_cast<string>(m["Spec"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UsageDataMonth") != m.end() && !m["UsageDataMonth"].empty()) {
      usageDataMonth = make_shared<long>(boost::any_cast<long>(m["UsageDataMonth"]));
    }
  }


  virtual ~ListCardsResponseBodyCards() = default;
};
class ListCardsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListCardsResponseBodyCards>> cards{};
  shared_ptr<string> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<string> totalCount{};

  ListCardsResponseBody() {}

  explicit ListCardsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cards) {
      vector<boost::any> temp1;
      for(auto item1:*cards){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Cards"] = boost::any(temp1);
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
    if (m.find("Cards") != m.end() && !m["Cards"].empty()) {
      if (typeid(vector<boost::any>) == m["Cards"].type()) {
        vector<ListCardsResponseBodyCards> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Cards"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListCardsResponseBodyCards model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        cards = make_shared<vector<ListCardsResponseBodyCards>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<string>(boost::any_cast<string>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<string>(boost::any_cast<string>(m["TotalCount"]));
    }
  }


  virtual ~ListCardsResponseBody() = default;
};
class ListCardsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListCardsResponseBody> body{};

  ListCardsResponse() {}

  explicit ListCardsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListCardsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListCardsResponseBody>(model1);
      }
    }
  }


  virtual ~ListCardsResponse() = default;
};
class ListDataPackagesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> dataPackageIds{};
  shared_ptr<long> maxResults{};
  shared_ptr<vector<string>> names{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<string>> statuses{};
  shared_ptr<string> wirelessCloudConnectorId{};

  ListDataPackagesRequest() {}

  explicit ListDataPackagesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataPackageIds) {
      res["DataPackageIds"] = boost::any(*dataPackageIds);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (names) {
      res["Names"] = boost::any(*names);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (statuses) {
      res["Statuses"] = boost::any(*statuses);
    }
    if (wirelessCloudConnectorId) {
      res["WirelessCloudConnectorId"] = boost::any(*wirelessCloudConnectorId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataPackageIds") != m.end() && !m["DataPackageIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DataPackageIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DataPackageIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dataPackageIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
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
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Statuses") != m.end() && !m["Statuses"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Statuses"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Statuses"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      statuses = make_shared<vector<string>>(toVec1);
    }
    if (m.find("WirelessCloudConnectorId") != m.end() && !m["WirelessCloudConnectorId"].empty()) {
      wirelessCloudConnectorId = make_shared<string>(boost::any_cast<string>(m["WirelessCloudConnectorId"]));
    }
  }


  virtual ~ListDataPackagesRequest() = default;
};
class ListDataPackagesResponseBodyDataPackages : public Darabonba::Model {
public:
  shared_ptr<string> cardCount{};
  shared_ptr<string> createTime{};
  shared_ptr<string> dataPackageId{};
  shared_ptr<string> expiredTime{};
  shared_ptr<string> ISP{};
  shared_ptr<string> name{};
  shared_ptr<string> size{};
  shared_ptr<string> status{};

  ListDataPackagesResponseBodyDataPackages() {}

  explicit ListDataPackagesResponseBodyDataPackages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cardCount) {
      res["CardCount"] = boost::any(*cardCount);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (dataPackageId) {
      res["DataPackageId"] = boost::any(*dataPackageId);
    }
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (ISP) {
      res["ISP"] = boost::any(*ISP);
    }
    if (name) {
      res["Name"] = boost::any(*name);
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
    if (m.find("CardCount") != m.end() && !m["CardCount"].empty()) {
      cardCount = make_shared<string>(boost::any_cast<string>(m["CardCount"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DataPackageId") != m.end() && !m["DataPackageId"].empty()) {
      dataPackageId = make_shared<string>(boost::any_cast<string>(m["DataPackageId"]));
    }
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<string>(boost::any_cast<string>(m["ExpiredTime"]));
    }
    if (m.find("ISP") != m.end() && !m["ISP"].empty()) {
      ISP = make_shared<string>(boost::any_cast<string>(m["ISP"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<string>(boost::any_cast<string>(m["Size"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListDataPackagesResponseBodyDataPackages() = default;
};
class ListDataPackagesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListDataPackagesResponseBodyDataPackages>> dataPackages{};
  shared_ptr<string> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<string> totalCount{};

  ListDataPackagesResponseBody() {}

  explicit ListDataPackagesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataPackages) {
      vector<boost::any> temp1;
      for(auto item1:*dataPackages){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataPackages"] = boost::any(temp1);
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
    if (m.find("DataPackages") != m.end() && !m["DataPackages"].empty()) {
      if (typeid(vector<boost::any>) == m["DataPackages"].type()) {
        vector<ListDataPackagesResponseBodyDataPackages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataPackages"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDataPackagesResponseBodyDataPackages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataPackages = make_shared<vector<ListDataPackagesResponseBodyDataPackages>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<string>(boost::any_cast<string>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<string>(boost::any_cast<string>(m["TotalCount"]));
    }
  }


  virtual ~ListDataPackagesResponseBody() = default;
};
class ListDataPackagesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListDataPackagesResponseBody> body{};

  ListDataPackagesResponse() {}

  explicit ListDataPackagesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDataPackagesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDataPackagesResponseBody>(model1);
      }
    }
  }


  virtual ~ListDataPackagesResponse() = default;
};
class ListOrdersRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> orderAction{};
  shared_ptr<vector<string>> orderIds{};
  shared_ptr<vector<string>> statuses{};
  shared_ptr<string> wirelessCloudConnectorId{};

  ListOrdersRequest() {}

  explicit ListOrdersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (orderAction) {
      res["OrderAction"] = boost::any(*orderAction);
    }
    if (orderIds) {
      res["OrderIds"] = boost::any(*orderIds);
    }
    if (statuses) {
      res["Statuses"] = boost::any(*statuses);
    }
    if (wirelessCloudConnectorId) {
      res["WirelessCloudConnectorId"] = boost::any(*wirelessCloudConnectorId);
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
    if (m.find("OrderAction") != m.end() && !m["OrderAction"].empty()) {
      orderAction = make_shared<string>(boost::any_cast<string>(m["OrderAction"]));
    }
    if (m.find("OrderIds") != m.end() && !m["OrderIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OrderIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OrderIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      orderIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Statuses") != m.end() && !m["Statuses"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Statuses"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Statuses"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      statuses = make_shared<vector<string>>(toVec1);
    }
    if (m.find("WirelessCloudConnectorId") != m.end() && !m["WirelessCloudConnectorId"].empty()) {
      wirelessCloudConnectorId = make_shared<string>(boost::any_cast<string>(m["WirelessCloudConnectorId"]));
    }
  }


  virtual ~ListOrdersRequest() = default;
};
class ListOrdersResponseBodyOrders : public Darabonba::Model {
public:
  shared_ptr<string> action{};
  shared_ptr<string> cardCount{};
  shared_ptr<string> cardNetType{};
  shared_ptr<string> cardType{};
  shared_ptr<string> contactName{};
  shared_ptr<string> contactPhone{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> logisticsId{};
  shared_ptr<string> logisticsStatus{};
  shared_ptr<string> logisticsType{};
  shared_ptr<string> logisticsUpdateTime{};
  shared_ptr<string> orderId{};
  shared_ptr<string> payTime{};
  shared_ptr<string> postAddress{};
  shared_ptr<string> regionId{};
  shared_ptr<string> status{};

  ListOrdersResponseBodyOrders() {}

  explicit ListOrdersResponseBodyOrders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (action) {
      res["Action"] = boost::any(*action);
    }
    if (cardCount) {
      res["CardCount"] = boost::any(*cardCount);
    }
    if (cardNetType) {
      res["CardNetType"] = boost::any(*cardNetType);
    }
    if (cardType) {
      res["CardType"] = boost::any(*cardType);
    }
    if (contactName) {
      res["ContactName"] = boost::any(*contactName);
    }
    if (contactPhone) {
      res["ContactPhone"] = boost::any(*contactPhone);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (logisticsId) {
      res["LogisticsId"] = boost::any(*logisticsId);
    }
    if (logisticsStatus) {
      res["LogisticsStatus"] = boost::any(*logisticsStatus);
    }
    if (logisticsType) {
      res["LogisticsType"] = boost::any(*logisticsType);
    }
    if (logisticsUpdateTime) {
      res["LogisticsUpdateTime"] = boost::any(*logisticsUpdateTime);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (payTime) {
      res["PayTime"] = boost::any(*payTime);
    }
    if (postAddress) {
      res["PostAddress"] = boost::any(*postAddress);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Action") != m.end() && !m["Action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["Action"]));
    }
    if (m.find("CardCount") != m.end() && !m["CardCount"].empty()) {
      cardCount = make_shared<string>(boost::any_cast<string>(m["CardCount"]));
    }
    if (m.find("CardNetType") != m.end() && !m["CardNetType"].empty()) {
      cardNetType = make_shared<string>(boost::any_cast<string>(m["CardNetType"]));
    }
    if (m.find("CardType") != m.end() && !m["CardType"].empty()) {
      cardType = make_shared<string>(boost::any_cast<string>(m["CardType"]));
    }
    if (m.find("ContactName") != m.end() && !m["ContactName"].empty()) {
      contactName = make_shared<string>(boost::any_cast<string>(m["ContactName"]));
    }
    if (m.find("ContactPhone") != m.end() && !m["ContactPhone"].empty()) {
      contactPhone = make_shared<string>(boost::any_cast<string>(m["ContactPhone"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("LogisticsId") != m.end() && !m["LogisticsId"].empty()) {
      logisticsId = make_shared<string>(boost::any_cast<string>(m["LogisticsId"]));
    }
    if (m.find("LogisticsStatus") != m.end() && !m["LogisticsStatus"].empty()) {
      logisticsStatus = make_shared<string>(boost::any_cast<string>(m["LogisticsStatus"]));
    }
    if (m.find("LogisticsType") != m.end() && !m["LogisticsType"].empty()) {
      logisticsType = make_shared<string>(boost::any_cast<string>(m["LogisticsType"]));
    }
    if (m.find("LogisticsUpdateTime") != m.end() && !m["LogisticsUpdateTime"].empty()) {
      logisticsUpdateTime = make_shared<string>(boost::any_cast<string>(m["LogisticsUpdateTime"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("PayTime") != m.end() && !m["PayTime"].empty()) {
      payTime = make_shared<string>(boost::any_cast<string>(m["PayTime"]));
    }
    if (m.find("PostAddress") != m.end() && !m["PostAddress"].empty()) {
      postAddress = make_shared<string>(boost::any_cast<string>(m["PostAddress"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListOrdersResponseBodyOrders() = default;
};
class ListOrdersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<ListOrdersResponseBodyOrders>> orders{};
  shared_ptr<string> requestId{};
  shared_ptr<string> totalCount{};

  ListOrdersResponseBody() {}

  explicit ListOrdersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (orders) {
      vector<boost::any> temp1;
      for(auto item1:*orders){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Orders"] = boost::any(temp1);
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
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<string>(boost::any_cast<string>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Orders") != m.end() && !m["Orders"].empty()) {
      if (typeid(vector<boost::any>) == m["Orders"].type()) {
        vector<ListOrdersResponseBodyOrders> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Orders"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListOrdersResponseBodyOrders model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        orders = make_shared<vector<ListOrdersResponseBodyOrders>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<string>(boost::any_cast<string>(m["TotalCount"]));
    }
  }


  virtual ~ListOrdersResponseBody() = default;
};
class ListOrdersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListOrdersResponseBody> body{};

  ListOrdersResponse() {}

  explicit ListOrdersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListOrdersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListOrdersResponseBody>(model1);
      }
    }
  }


  virtual ~ListOrdersResponse() = default;
};
class ListRegionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> regionId{};

  ListRegionsRequest() {}

  explicit ListRegionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListRegionsRequest() = default;
};
class ListRegionsResponseBodyRegions : public Darabonba::Model {
public:
  shared_ptr<string> localName{};
  shared_ptr<string> regionEndpoint{};
  shared_ptr<string> regionId{};

  ListRegionsResponseBodyRegions() {}

  explicit ListRegionsResponseBodyRegions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListRegionsResponseBodyRegions() = default;
};
class ListRegionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListRegionsResponseBodyRegions>> regions{};
  shared_ptr<string> requestId{};

  ListRegionsResponseBody() {}

  explicit ListRegionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<ListRegionsResponseBodyRegions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Regions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRegionsResponseBodyRegions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        regions = make_shared<vector<ListRegionsResponseBodyRegions>>(expect1);
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
class ListWirelessCloudConnectorsRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<vector<string>> names{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> statuses{};
  shared_ptr<vector<string>> wirelessCloudConnectorIds{};

  ListWirelessCloudConnectorsRequest() {}

  explicit ListWirelessCloudConnectorsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (names) {
      res["Names"] = boost::any(*names);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (statuses) {
      res["Statuses"] = boost::any(*statuses);
    }
    if (wirelessCloudConnectorIds) {
      res["WirelessCloudConnectorIds"] = boost::any(*wirelessCloudConnectorIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
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
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Statuses") != m.end() && !m["Statuses"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Statuses"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Statuses"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      statuses = make_shared<vector<string>>(toVec1);
    }
    if (m.find("WirelessCloudConnectorIds") != m.end() && !m["WirelessCloudConnectorIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["WirelessCloudConnectorIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["WirelessCloudConnectorIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      wirelessCloudConnectorIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListWirelessCloudConnectorsRequest() = default;
};
class ListWirelessCloudConnectorsResponseBodyWirelessCloudConnectors : public Darabonba::Model {
public:
  shared_ptr<string> cardCount{};
  shared_ptr<string> createTime{};
  shared_ptr<string> dataPackageId{};
  shared_ptr<string> dataPackageType{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> regionId{};
  shared_ptr<string> status{};
  shared_ptr<string> useCase{};
  shared_ptr<string> wirelessCloudConnectorId{};

  ListWirelessCloudConnectorsResponseBodyWirelessCloudConnectors() {}

  explicit ListWirelessCloudConnectorsResponseBodyWirelessCloudConnectors(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cardCount) {
      res["CardCount"] = boost::any(*cardCount);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (dataPackageId) {
      res["DataPackageId"] = boost::any(*dataPackageId);
    }
    if (dataPackageType) {
      res["DataPackageType"] = boost::any(*dataPackageType);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (useCase) {
      res["UseCase"] = boost::any(*useCase);
    }
    if (wirelessCloudConnectorId) {
      res["WirelessCloudConnectorId"] = boost::any(*wirelessCloudConnectorId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CardCount") != m.end() && !m["CardCount"].empty()) {
      cardCount = make_shared<string>(boost::any_cast<string>(m["CardCount"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DataPackageId") != m.end() && !m["DataPackageId"].empty()) {
      dataPackageId = make_shared<string>(boost::any_cast<string>(m["DataPackageId"]));
    }
    if (m.find("DataPackageType") != m.end() && !m["DataPackageType"].empty()) {
      dataPackageType = make_shared<string>(boost::any_cast<string>(m["DataPackageType"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UseCase") != m.end() && !m["UseCase"].empty()) {
      useCase = make_shared<string>(boost::any_cast<string>(m["UseCase"]));
    }
    if (m.find("WirelessCloudConnectorId") != m.end() && !m["WirelessCloudConnectorId"].empty()) {
      wirelessCloudConnectorId = make_shared<string>(boost::any_cast<string>(m["WirelessCloudConnectorId"]));
    }
  }


  virtual ~ListWirelessCloudConnectorsResponseBodyWirelessCloudConnectors() = default;
};
class ListWirelessCloudConnectorsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<string> totalCount{};
  shared_ptr<vector<ListWirelessCloudConnectorsResponseBodyWirelessCloudConnectors>> wirelessCloudConnectors{};

  ListWirelessCloudConnectorsResponseBody() {}

  explicit ListWirelessCloudConnectorsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (wirelessCloudConnectors) {
      vector<boost::any> temp1;
      for(auto item1:*wirelessCloudConnectors){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["WirelessCloudConnectors"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<string>(boost::any_cast<string>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<string>(boost::any_cast<string>(m["TotalCount"]));
    }
    if (m.find("WirelessCloudConnectors") != m.end() && !m["WirelessCloudConnectors"].empty()) {
      if (typeid(vector<boost::any>) == m["WirelessCloudConnectors"].type()) {
        vector<ListWirelessCloudConnectorsResponseBodyWirelessCloudConnectors> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["WirelessCloudConnectors"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListWirelessCloudConnectorsResponseBodyWirelessCloudConnectors model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        wirelessCloudConnectors = make_shared<vector<ListWirelessCloudConnectorsResponseBodyWirelessCloudConnectors>>(expect1);
      }
    }
  }


  virtual ~ListWirelessCloudConnectorsResponseBody() = default;
};
class ListWirelessCloudConnectorsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListWirelessCloudConnectorsResponseBody> body{};

  ListWirelessCloudConnectorsResponse() {}

  explicit ListWirelessCloudConnectorsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListWirelessCloudConnectorsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListWirelessCloudConnectorsResponseBody>(model1);
      }
    }
  }


  virtual ~ListWirelessCloudConnectorsResponse() = default;
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
  GetWirelessCloudConnectorResponse getWirelessCloudConnectorWithOptions(shared_ptr<GetWirelessCloudConnectorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetWirelessCloudConnectorResponse getWirelessCloudConnector(shared_ptr<GetWirelessCloudConnectorRequest> request);
  ListAuthorizationRulesResponse listAuthorizationRulesWithOptions(shared_ptr<ListAuthorizationRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAuthorizationRulesResponse listAuthorizationRules(shared_ptr<ListAuthorizationRulesRequest> request);
  ListCardsResponse listCardsWithOptions(shared_ptr<ListCardsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCardsResponse listCards(shared_ptr<ListCardsRequest> request);
  ListDataPackagesResponse listDataPackagesWithOptions(shared_ptr<ListDataPackagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDataPackagesResponse listDataPackages(shared_ptr<ListDataPackagesRequest> request);
  ListOrdersResponse listOrdersWithOptions(shared_ptr<ListOrdersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListOrdersResponse listOrders(shared_ptr<ListOrdersRequest> request);
  ListRegionsResponse listRegionsWithOptions(shared_ptr<ListRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRegionsResponse listRegions(shared_ptr<ListRegionsRequest> request);
  ListWirelessCloudConnectorsResponse listWirelessCloudConnectorsWithOptions(shared_ptr<ListWirelessCloudConnectorsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListWirelessCloudConnectorsResponse listWirelessCloudConnectors(shared_ptr<ListWirelessCloudConnectorsRequest> request);
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
