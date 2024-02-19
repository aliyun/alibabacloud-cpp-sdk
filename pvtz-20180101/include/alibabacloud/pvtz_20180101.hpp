// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_PVTZ20180101_H_
#define ALIBABACLOUD_PVTZ20180101_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Pvtz20180101 {
class AddResolverEndpointRequestIpConfig : public Darabonba::Model {
public:
  shared_ptr<string> azId{};
  shared_ptr<string> cidrBlock{};
  shared_ptr<string> ip{};
  shared_ptr<string> vSwitchId{};

  AddResolverEndpointRequestIpConfig() {}

  explicit AddResolverEndpointRequestIpConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (azId) {
      res["AzId"] = boost::any(*azId);
    }
    if (cidrBlock) {
      res["CidrBlock"] = boost::any(*cidrBlock);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AzId") != m.end() && !m["AzId"].empty()) {
      azId = make_shared<string>(boost::any_cast<string>(m["AzId"]));
    }
    if (m.find("CidrBlock") != m.end() && !m["CidrBlock"].empty()) {
      cidrBlock = make_shared<string>(boost::any_cast<string>(m["CidrBlock"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
  }


  virtual ~AddResolverEndpointRequestIpConfig() = default;
};
class AddResolverEndpointRequest : public Darabonba::Model {
public:
  shared_ptr<vector<AddResolverEndpointRequestIpConfig>> ipConfig{};
  shared_ptr<string> lang{};
  shared_ptr<string> name{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vpcRegionId{};

  AddResolverEndpointRequest() {}

  explicit AddResolverEndpointRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ipConfig) {
      vector<boost::any> temp1;
      for(auto item1:*ipConfig){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["IpConfig"] = boost::any(temp1);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vpcRegionId) {
      res["VpcRegionId"] = boost::any(*vpcRegionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IpConfig") != m.end() && !m["IpConfig"].empty()) {
      if (typeid(vector<boost::any>) == m["IpConfig"].type()) {
        vector<AddResolverEndpointRequestIpConfig> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["IpConfig"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AddResolverEndpointRequestIpConfig model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ipConfig = make_shared<vector<AddResolverEndpointRequestIpConfig>>(expect1);
      }
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VpcRegionId") != m.end() && !m["VpcRegionId"].empty()) {
      vpcRegionId = make_shared<string>(boost::any_cast<string>(m["VpcRegionId"]));
    }
  }


  virtual ~AddResolverEndpointRequest() = default;
};
class AddResolverEndpointResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> endpointId{};
  shared_ptr<string> requestId{};

  AddResolverEndpointResponseBody() {}

  explicit AddResolverEndpointResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endpointId) {
      res["EndpointId"] = boost::any(*endpointId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndpointId") != m.end() && !m["EndpointId"].empty()) {
      endpointId = make_shared<string>(boost::any_cast<string>(m["EndpointId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AddResolverEndpointResponseBody() = default;
};
class AddResolverEndpointResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddResolverEndpointResponseBody> body{};

  AddResolverEndpointResponse() {}

  explicit AddResolverEndpointResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddResolverEndpointResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddResolverEndpointResponseBody>(model1);
      }
    }
  }


  virtual ~AddResolverEndpointResponse() = default;
};
class AddResolverRuleRequestForwardIp : public Darabonba::Model {
public:
  shared_ptr<string> ip{};
  shared_ptr<long> port{};

  AddResolverRuleRequestForwardIp() {}

  explicit AddResolverRuleRequestForwardIp(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
  }


  virtual ~AddResolverRuleRequestForwardIp() = default;
};
class AddResolverRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> endpointId{};
  shared_ptr<vector<AddResolverRuleRequestForwardIp>> forwardIp{};
  shared_ptr<string> lang{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};
  shared_ptr<string> zoneName{};

  AddResolverRuleRequest() {}

  explicit AddResolverRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endpointId) {
      res["EndpointId"] = boost::any(*endpointId);
    }
    if (forwardIp) {
      vector<boost::any> temp1;
      for(auto item1:*forwardIp){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ForwardIp"] = boost::any(temp1);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (zoneName) {
      res["ZoneName"] = boost::any(*zoneName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndpointId") != m.end() && !m["EndpointId"].empty()) {
      endpointId = make_shared<string>(boost::any_cast<string>(m["EndpointId"]));
    }
    if (m.find("ForwardIp") != m.end() && !m["ForwardIp"].empty()) {
      if (typeid(vector<boost::any>) == m["ForwardIp"].type()) {
        vector<AddResolverRuleRequestForwardIp> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ForwardIp"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AddResolverRuleRequestForwardIp model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        forwardIp = make_shared<vector<AddResolverRuleRequestForwardIp>>(expect1);
      }
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("ZoneName") != m.end() && !m["ZoneName"].empty()) {
      zoneName = make_shared<string>(boost::any_cast<string>(m["ZoneName"]));
    }
  }


  virtual ~AddResolverRuleRequest() = default;
};
class AddResolverRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> ruleId{};

  AddResolverRuleResponseBody() {}

  explicit AddResolverRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
  }


  virtual ~AddResolverRuleResponseBody() = default;
};
class AddResolverRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddResolverRuleResponseBody> body{};

  AddResolverRuleResponse() {}

  explicit AddResolverRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddResolverRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddResolverRuleResponseBody>(model1);
      }
    }
  }


  virtual ~AddResolverRuleResponse() = default;
};
class AddUserVpcAuthorizationRequest : public Darabonba::Model {
public:
  shared_ptr<string> authChannel{};
  shared_ptr<string> authCode{};
  shared_ptr<string> authType{};
  shared_ptr<long> authorizedUserId{};

  AddUserVpcAuthorizationRequest() {}

  explicit AddUserVpcAuthorizationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authChannel) {
      res["AuthChannel"] = boost::any(*authChannel);
    }
    if (authCode) {
      res["AuthCode"] = boost::any(*authCode);
    }
    if (authType) {
      res["AuthType"] = boost::any(*authType);
    }
    if (authorizedUserId) {
      res["AuthorizedUserId"] = boost::any(*authorizedUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthChannel") != m.end() && !m["AuthChannel"].empty()) {
      authChannel = make_shared<string>(boost::any_cast<string>(m["AuthChannel"]));
    }
    if (m.find("AuthCode") != m.end() && !m["AuthCode"].empty()) {
      authCode = make_shared<string>(boost::any_cast<string>(m["AuthCode"]));
    }
    if (m.find("AuthType") != m.end() && !m["AuthType"].empty()) {
      authType = make_shared<string>(boost::any_cast<string>(m["AuthType"]));
    }
    if (m.find("AuthorizedUserId") != m.end() && !m["AuthorizedUserId"].empty()) {
      authorizedUserId = make_shared<long>(boost::any_cast<long>(m["AuthorizedUserId"]));
    }
  }


  virtual ~AddUserVpcAuthorizationRequest() = default;
};
class AddUserVpcAuthorizationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AddUserVpcAuthorizationResponseBody() {}

  explicit AddUserVpcAuthorizationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AddUserVpcAuthorizationResponseBody() = default;
};
class AddUserVpcAuthorizationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddUserVpcAuthorizationResponseBody> body{};

  AddUserVpcAuthorizationResponse() {}

  explicit AddUserVpcAuthorizationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddUserVpcAuthorizationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddUserVpcAuthorizationResponseBody>(model1);
      }
    }
  }


  virtual ~AddUserVpcAuthorizationResponse() = default;
};
class AddZoneRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> dnsGroup{};
  shared_ptr<string> lang{};
  shared_ptr<string> proxyPattern{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> zoneName{};
  shared_ptr<string> zoneTag{};
  shared_ptr<string> zoneType{};

  AddZoneRequest() {}

  explicit AddZoneRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dnsGroup) {
      res["DnsGroup"] = boost::any(*dnsGroup);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (proxyPattern) {
      res["ProxyPattern"] = boost::any(*proxyPattern);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (zoneName) {
      res["ZoneName"] = boost::any(*zoneName);
    }
    if (zoneTag) {
      res["ZoneTag"] = boost::any(*zoneTag);
    }
    if (zoneType) {
      res["ZoneType"] = boost::any(*zoneType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DnsGroup") != m.end() && !m["DnsGroup"].empty()) {
      dnsGroup = make_shared<string>(boost::any_cast<string>(m["DnsGroup"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("ProxyPattern") != m.end() && !m["ProxyPattern"].empty()) {
      proxyPattern = make_shared<string>(boost::any_cast<string>(m["ProxyPattern"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ZoneName") != m.end() && !m["ZoneName"].empty()) {
      zoneName = make_shared<string>(boost::any_cast<string>(m["ZoneName"]));
    }
    if (m.find("ZoneTag") != m.end() && !m["ZoneTag"].empty()) {
      zoneTag = make_shared<string>(boost::any_cast<string>(m["ZoneTag"]));
    }
    if (m.find("ZoneType") != m.end() && !m["ZoneType"].empty()) {
      zoneType = make_shared<string>(boost::any_cast<string>(m["ZoneType"]));
    }
  }


  virtual ~AddZoneRequest() = default;
};
class AddZoneResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> zoneName{};

  AddZoneResponseBody() {}

  explicit AddZoneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (zoneName) {
      res["ZoneName"] = boost::any(*zoneName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("ZoneName") != m.end() && !m["ZoneName"].empty()) {
      zoneName = make_shared<string>(boost::any_cast<string>(m["ZoneName"]));
    }
  }


  virtual ~AddZoneResponseBody() = default;
};
class AddZoneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddZoneResponseBody> body{};

  AddZoneResponse() {}

  explicit AddZoneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddZoneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddZoneResponseBody>(model1);
      }
    }
  }


  virtual ~AddZoneResponse() = default;
};
class AddZoneRecordRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> lang{};
  shared_ptr<string> line{};
  shared_ptr<long> priority{};
  shared_ptr<string> remark{};
  shared_ptr<string> rr{};
  shared_ptr<long> ttl{};
  shared_ptr<string> type{};
  shared_ptr<string> userClientIp{};
  shared_ptr<string> value{};
  shared_ptr<long> weight{};
  shared_ptr<string> zoneId{};

  AddZoneRecordRequest() {}

  explicit AddZoneRecordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (line) {
      res["Line"] = boost::any(*line);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (rr) {
      res["Rr"] = boost::any(*rr);
    }
    if (ttl) {
      res["Ttl"] = boost::any(*ttl);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    if (value) {
      res["Value"] = boost::any(*value);
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
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("Line") != m.end() && !m["Line"].empty()) {
      line = make_shared<string>(boost::any_cast<string>(m["Line"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("Rr") != m.end() && !m["Rr"].empty()) {
      rr = make_shared<string>(boost::any_cast<string>(m["Rr"]));
    }
    if (m.find("Ttl") != m.end() && !m["Ttl"].empty()) {
      ttl = make_shared<long>(boost::any_cast<long>(m["Ttl"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
    if (m.find("Weight") != m.end() && !m["Weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["Weight"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~AddZoneRecordRequest() = default;
};
class AddZoneRecordResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> recordId{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  AddZoneRecordResponseBody() {}

  explicit AddZoneRecordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (recordId) {
      res["RecordId"] = boost::any(*recordId);
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
    if (m.find("RecordId") != m.end() && !m["RecordId"].empty()) {
      recordId = make_shared<long>(boost::any_cast<long>(m["RecordId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~AddZoneRecordResponseBody() = default;
};
class AddZoneRecordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddZoneRecordResponseBody> body{};

  AddZoneRecordResponse() {}

  explicit AddZoneRecordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddZoneRecordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddZoneRecordResponseBody>(model1);
      }
    }
  }


  virtual ~AddZoneRecordResponse() = default;
};
class BindResolverRuleVpcRequestVpc : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vpcType{};

  BindResolverRuleVpcRequestVpc() {}

  explicit BindResolverRuleVpcRequestVpc(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vpcType) {
      res["VpcType"] = boost::any(*vpcType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VpcType") != m.end() && !m["VpcType"].empty()) {
      vpcType = make_shared<string>(boost::any_cast<string>(m["VpcType"]));
    }
  }


  virtual ~BindResolverRuleVpcRequestVpc() = default;
};
class BindResolverRuleVpcRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> ruleId{};
  shared_ptr<vector<BindResolverRuleVpcRequestVpc>> vpc{};

  BindResolverRuleVpcRequest() {}

  explicit BindResolverRuleVpcRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (vpc) {
      vector<boost::any> temp1;
      for(auto item1:*vpc){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Vpc"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
    if (m.find("Vpc") != m.end() && !m["Vpc"].empty()) {
      if (typeid(vector<boost::any>) == m["Vpc"].type()) {
        vector<BindResolverRuleVpcRequestVpc> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Vpc"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BindResolverRuleVpcRequestVpc model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        vpc = make_shared<vector<BindResolverRuleVpcRequestVpc>>(expect1);
      }
    }
  }


  virtual ~BindResolverRuleVpcRequest() = default;
};
class BindResolverRuleVpcResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  BindResolverRuleVpcResponseBody() {}

  explicit BindResolverRuleVpcResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~BindResolverRuleVpcResponseBody() = default;
};
class BindResolverRuleVpcResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BindResolverRuleVpcResponseBody> body{};

  BindResolverRuleVpcResponse() {}

  explicit BindResolverRuleVpcResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BindResolverRuleVpcResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BindResolverRuleVpcResponseBody>(model1);
      }
    }
  }


  virtual ~BindResolverRuleVpcResponse() = default;
};
class BindZoneVpcRequestVpcs : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vpcType{};

  BindZoneVpcRequestVpcs() {}

  explicit BindZoneVpcRequestVpcs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vpcType) {
      res["VpcType"] = boost::any(*vpcType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VpcType") != m.end() && !m["VpcType"].empty()) {
      vpcType = make_shared<string>(boost::any_cast<string>(m["VpcType"]));
    }
  }


  virtual ~BindZoneVpcRequestVpcs() = default;
};
class BindZoneVpcRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> lang{};
  shared_ptr<string> userClientIp{};
  shared_ptr<vector<BindZoneVpcRequestVpcs>> vpcs{};
  shared_ptr<string> zoneId{};

  BindZoneVpcRequest() {}

  explicit BindZoneVpcRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    if (vpcs) {
      vector<boost::any> temp1;
      for(auto item1:*vpcs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Vpcs"] = boost::any(temp1);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
    if (m.find("Vpcs") != m.end() && !m["Vpcs"].empty()) {
      if (typeid(vector<boost::any>) == m["Vpcs"].type()) {
        vector<BindZoneVpcRequestVpcs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Vpcs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BindZoneVpcRequestVpcs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        vpcs = make_shared<vector<BindZoneVpcRequestVpcs>>(expect1);
      }
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~BindZoneVpcRequest() = default;
};
class BindZoneVpcResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  BindZoneVpcResponseBody() {}

  explicit BindZoneVpcResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~BindZoneVpcResponseBody() = default;
};
class BindZoneVpcResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BindZoneVpcResponseBody> body{};

  BindZoneVpcResponse() {}

  explicit BindZoneVpcResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BindZoneVpcResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BindZoneVpcResponseBody>(model1);
      }
    }
  }


  virtual ~BindZoneVpcResponse() = default;
};
class CheckZoneNameRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> userClientIp{};
  shared_ptr<string> zoneName{};

  CheckZoneNameRequest() {}

  explicit CheckZoneNameRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    if (zoneName) {
      res["ZoneName"] = boost::any(*zoneName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
    if (m.find("ZoneName") != m.end() && !m["ZoneName"].empty()) {
      zoneName = make_shared<string>(boost::any_cast<string>(m["ZoneName"]));
    }
  }


  virtual ~CheckZoneNameRequest() = default;
};
class CheckZoneNameResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> check{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CheckZoneNameResponseBody() {}

  explicit CheckZoneNameResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (check) {
      res["Check"] = boost::any(*check);
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
    if (m.find("Check") != m.end() && !m["Check"].empty()) {
      check = make_shared<bool>(boost::any_cast<bool>(m["Check"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CheckZoneNameResponseBody() = default;
};
class CheckZoneNameResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckZoneNameResponseBody> body{};

  CheckZoneNameResponse() {}

  explicit CheckZoneNameResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckZoneNameResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckZoneNameResponseBody>(model1);
      }
    }
  }


  virtual ~CheckZoneNameResponse() = default;
};
class DeleteResolverEndpointRequest : public Darabonba::Model {
public:
  shared_ptr<string> endpointId{};
  shared_ptr<string> lang{};

  DeleteResolverEndpointRequest() {}

  explicit DeleteResolverEndpointRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endpointId) {
      res["EndpointId"] = boost::any(*endpointId);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndpointId") != m.end() && !m["EndpointId"].empty()) {
      endpointId = make_shared<string>(boost::any_cast<string>(m["EndpointId"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
  }


  virtual ~DeleteResolverEndpointRequest() = default;
};
class DeleteResolverEndpointResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteResolverEndpointResponseBody() {}

  explicit DeleteResolverEndpointResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteResolverEndpointResponseBody() = default;
};
class DeleteResolverEndpointResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteResolverEndpointResponseBody> body{};

  DeleteResolverEndpointResponse() {}

  explicit DeleteResolverEndpointResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteResolverEndpointResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteResolverEndpointResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteResolverEndpointResponse() = default;
};
class DeleteResolverRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> ruleId{};

  DeleteResolverRuleRequest() {}

  explicit DeleteResolverRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
  }


  virtual ~DeleteResolverRuleRequest() = default;
};
class DeleteResolverRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteResolverRuleResponseBody() {}

  explicit DeleteResolverRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteResolverRuleResponseBody() = default;
};
class DeleteResolverRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteResolverRuleResponseBody> body{};

  DeleteResolverRuleResponse() {}

  explicit DeleteResolverRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteResolverRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteResolverRuleResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteResolverRuleResponse() = default;
};
class DeleteUserVpcAuthorizationRequest : public Darabonba::Model {
public:
  shared_ptr<string> authType{};
  shared_ptr<long> authorizedUserId{};

  DeleteUserVpcAuthorizationRequest() {}

  explicit DeleteUserVpcAuthorizationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authType) {
      res["AuthType"] = boost::any(*authType);
    }
    if (authorizedUserId) {
      res["AuthorizedUserId"] = boost::any(*authorizedUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthType") != m.end() && !m["AuthType"].empty()) {
      authType = make_shared<string>(boost::any_cast<string>(m["AuthType"]));
    }
    if (m.find("AuthorizedUserId") != m.end() && !m["AuthorizedUserId"].empty()) {
      authorizedUserId = make_shared<long>(boost::any_cast<long>(m["AuthorizedUserId"]));
    }
  }


  virtual ~DeleteUserVpcAuthorizationRequest() = default;
};
class DeleteUserVpcAuthorizationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteUserVpcAuthorizationResponseBody() {}

  explicit DeleteUserVpcAuthorizationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteUserVpcAuthorizationResponseBody() = default;
};
class DeleteUserVpcAuthorizationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteUserVpcAuthorizationResponseBody> body{};

  DeleteUserVpcAuthorizationResponse() {}

  explicit DeleteUserVpcAuthorizationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteUserVpcAuthorizationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteUserVpcAuthorizationResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteUserVpcAuthorizationResponse() = default;
};
class DeleteZoneRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> lang{};
  shared_ptr<string> userClientIp{};
  shared_ptr<string> zoneId{};

  DeleteZoneRequest() {}

  explicit DeleteZoneRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DeleteZoneRequest() = default;
};
class DeleteZoneResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> zoneId{};

  DeleteZoneResponseBody() {}

  explicit DeleteZoneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DeleteZoneResponseBody() = default;
};
class DeleteZoneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteZoneResponseBody> body{};

  DeleteZoneResponse() {}

  explicit DeleteZoneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteZoneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteZoneResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteZoneResponse() = default;
};
class DeleteZoneRecordRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> lang{};
  shared_ptr<long> recordId{};
  shared_ptr<string> userClientIp{};

  DeleteZoneRecordRequest() {}

  explicit DeleteZoneRecordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (recordId) {
      res["RecordId"] = boost::any(*recordId);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("RecordId") != m.end() && !m["RecordId"].empty()) {
      recordId = make_shared<long>(boost::any_cast<long>(m["RecordId"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~DeleteZoneRecordRequest() = default;
};
class DeleteZoneRecordResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> recordId{};
  shared_ptr<string> requestId{};

  DeleteZoneRecordResponseBody() {}

  explicit DeleteZoneRecordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (recordId) {
      res["RecordId"] = boost::any(*recordId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RecordId") != m.end() && !m["RecordId"].empty()) {
      recordId = make_shared<long>(boost::any_cast<long>(m["RecordId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteZoneRecordResponseBody() = default;
};
class DeleteZoneRecordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteZoneRecordResponseBody> body{};

  DeleteZoneRecordResponse() {}

  explicit DeleteZoneRecordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteZoneRecordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteZoneRecordResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteZoneRecordResponse() = default;
};
class DescribeChangeLogsRequest : public Darabonba::Model {
public:
  shared_ptr<long> endTimestamp{};
  shared_ptr<string> entityType{};
  shared_ptr<string> keyword{};
  shared_ptr<string> lang{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> startTimestamp{};
  shared_ptr<string> userClientIp{};
  shared_ptr<string> zoneId{};

  DescribeChangeLogsRequest() {}

  explicit DescribeChangeLogsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTimestamp) {
      res["EndTimestamp"] = boost::any(*endTimestamp);
    }
    if (entityType) {
      res["EntityType"] = boost::any(*entityType);
    }
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (startTimestamp) {
      res["StartTimestamp"] = boost::any(*startTimestamp);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTimestamp") != m.end() && !m["EndTimestamp"].empty()) {
      endTimestamp = make_shared<long>(boost::any_cast<long>(m["EndTimestamp"]));
    }
    if (m.find("EntityType") != m.end() && !m["EntityType"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["EntityType"]));
    }
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("StartTimestamp") != m.end() && !m["StartTimestamp"].empty()) {
      startTimestamp = make_shared<long>(boost::any_cast<long>(m["StartTimestamp"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeChangeLogsRequest() = default;
};
class DescribeChangeLogsResponseBodyChangeLogsChangeLog : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> creatorId{};
  shared_ptr<string> creatorSubType{};
  shared_ptr<string> creatorType{};
  shared_ptr<string> entityId{};
  shared_ptr<string> entityName{};
  shared_ptr<long> id{};
  shared_ptr<string> operAction{};
  shared_ptr<string> operIp{};
  shared_ptr<string> operObject{};
  shared_ptr<string> operTime{};
  shared_ptr<long> operTimestamp{};

  DescribeChangeLogsResponseBodyChangeLogsChangeLog() {}

  explicit DescribeChangeLogsResponseBodyChangeLogsChangeLog(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (creatorId) {
      res["CreatorId"] = boost::any(*creatorId);
    }
    if (creatorSubType) {
      res["CreatorSubType"] = boost::any(*creatorSubType);
    }
    if (creatorType) {
      res["CreatorType"] = boost::any(*creatorType);
    }
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    if (entityName) {
      res["EntityName"] = boost::any(*entityName);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (operAction) {
      res["OperAction"] = boost::any(*operAction);
    }
    if (operIp) {
      res["OperIp"] = boost::any(*operIp);
    }
    if (operObject) {
      res["OperObject"] = boost::any(*operObject);
    }
    if (operTime) {
      res["OperTime"] = boost::any(*operTime);
    }
    if (operTimestamp) {
      res["OperTimestamp"] = boost::any(*operTimestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("CreatorId") != m.end() && !m["CreatorId"].empty()) {
      creatorId = make_shared<string>(boost::any_cast<string>(m["CreatorId"]));
    }
    if (m.find("CreatorSubType") != m.end() && !m["CreatorSubType"].empty()) {
      creatorSubType = make_shared<string>(boost::any_cast<string>(m["CreatorSubType"]));
    }
    if (m.find("CreatorType") != m.end() && !m["CreatorType"].empty()) {
      creatorType = make_shared<string>(boost::any_cast<string>(m["CreatorType"]));
    }
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<string>(boost::any_cast<string>(m["EntityId"]));
    }
    if (m.find("EntityName") != m.end() && !m["EntityName"].empty()) {
      entityName = make_shared<string>(boost::any_cast<string>(m["EntityName"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("OperAction") != m.end() && !m["OperAction"].empty()) {
      operAction = make_shared<string>(boost::any_cast<string>(m["OperAction"]));
    }
    if (m.find("OperIp") != m.end() && !m["OperIp"].empty()) {
      operIp = make_shared<string>(boost::any_cast<string>(m["OperIp"]));
    }
    if (m.find("OperObject") != m.end() && !m["OperObject"].empty()) {
      operObject = make_shared<string>(boost::any_cast<string>(m["OperObject"]));
    }
    if (m.find("OperTime") != m.end() && !m["OperTime"].empty()) {
      operTime = make_shared<string>(boost::any_cast<string>(m["OperTime"]));
    }
    if (m.find("OperTimestamp") != m.end() && !m["OperTimestamp"].empty()) {
      operTimestamp = make_shared<long>(boost::any_cast<long>(m["OperTimestamp"]));
    }
  }


  virtual ~DescribeChangeLogsResponseBodyChangeLogsChangeLog() = default;
};
class DescribeChangeLogsResponseBodyChangeLogs : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeChangeLogsResponseBodyChangeLogsChangeLog>> changeLog{};

  DescribeChangeLogsResponseBodyChangeLogs() {}

  explicit DescribeChangeLogsResponseBodyChangeLogs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changeLog) {
      vector<boost::any> temp1;
      for(auto item1:*changeLog){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ChangeLog"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChangeLog") != m.end() && !m["ChangeLog"].empty()) {
      if (typeid(vector<boost::any>) == m["ChangeLog"].type()) {
        vector<DescribeChangeLogsResponseBodyChangeLogsChangeLog> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ChangeLog"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeChangeLogsResponseBodyChangeLogsChangeLog model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        changeLog = make_shared<vector<DescribeChangeLogsResponseBodyChangeLogsChangeLog>>(expect1);
      }
    }
  }


  virtual ~DescribeChangeLogsResponseBodyChangeLogs() = default;
};
class DescribeChangeLogsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeChangeLogsResponseBodyChangeLogs> changeLogs{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalItems{};
  shared_ptr<long> totalPages{};

  DescribeChangeLogsResponseBody() {}

  explicit DescribeChangeLogsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changeLogs) {
      res["ChangeLogs"] = changeLogs ? boost::any(changeLogs->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalItems) {
      res["TotalItems"] = boost::any(*totalItems);
    }
    if (totalPages) {
      res["TotalPages"] = boost::any(*totalPages);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChangeLogs") != m.end() && !m["ChangeLogs"].empty()) {
      if (typeid(map<string, boost::any>) == m["ChangeLogs"].type()) {
        DescribeChangeLogsResponseBodyChangeLogs model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ChangeLogs"]));
        changeLogs = make_shared<DescribeChangeLogsResponseBodyChangeLogs>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalItems") != m.end() && !m["TotalItems"].empty()) {
      totalItems = make_shared<long>(boost::any_cast<long>(m["TotalItems"]));
    }
    if (m.find("TotalPages") != m.end() && !m["TotalPages"].empty()) {
      totalPages = make_shared<long>(boost::any_cast<long>(m["TotalPages"]));
    }
  }


  virtual ~DescribeChangeLogsResponseBody() = default;
};
class DescribeChangeLogsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeChangeLogsResponseBody> body{};

  DescribeChangeLogsResponse() {}

  explicit DescribeChangeLogsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeChangeLogsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeChangeLogsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeChangeLogsResponse() = default;
};
class DescribeRegionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<long> authorizedUserId{};
  shared_ptr<string> lang{};
  shared_ptr<string> scene{};
  shared_ptr<string> userClientIp{};
  shared_ptr<string> vpcType{};

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
    if (authorizedUserId) {
      res["AuthorizedUserId"] = boost::any(*authorizedUserId);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (scene) {
      res["Scene"] = boost::any(*scene);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    if (vpcType) {
      res["VpcType"] = boost::any(*vpcType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("AuthorizedUserId") != m.end() && !m["AuthorizedUserId"].empty()) {
      authorizedUserId = make_shared<long>(boost::any_cast<long>(m["AuthorizedUserId"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("Scene") != m.end() && !m["Scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["Scene"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
    if (m.find("VpcType") != m.end() && !m["VpcType"].empty()) {
      vpcType = make_shared<string>(boost::any_cast<string>(m["VpcType"]));
    }
  }


  virtual ~DescribeRegionsRequest() = default;
};
class DescribeRegionsResponseBodyRegionsRegion : public Darabonba::Model {
public:
  shared_ptr<string> localName{};
  shared_ptr<string> regionEndpoint{};
  shared_ptr<string> regionId{};
  shared_ptr<string> regionName{};

  DescribeRegionsResponseBodyRegionsRegion() {}

  explicit DescribeRegionsResponseBodyRegionsRegion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (regionName) {
      res["RegionName"] = boost::any(*regionName);
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
    if (m.find("RegionName") != m.end() && !m["RegionName"].empty()) {
      regionName = make_shared<string>(boost::any_cast<string>(m["RegionName"]));
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
  shared_ptr<string> requestId{};

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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
class DescribeRequestGraphRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizId{};
  shared_ptr<string> bizType{};
  shared_ptr<long> endTimestamp{};
  shared_ptr<string> lang{};
  shared_ptr<long> startTimestamp{};
  shared_ptr<string> userClientIp{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> zoneId{};

  DescribeRequestGraphRequest() {}

  explicit DescribeRequestGraphRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (endTimestamp) {
      res["EndTimestamp"] = boost::any(*endTimestamp);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (startTimestamp) {
      res["StartTimestamp"] = boost::any(*startTimestamp);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("EndTimestamp") != m.end() && !m["EndTimestamp"].empty()) {
      endTimestamp = make_shared<long>(boost::any_cast<long>(m["EndTimestamp"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("StartTimestamp") != m.end() && !m["StartTimestamp"].empty()) {
      startTimestamp = make_shared<long>(boost::any_cast<long>(m["StartTimestamp"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeRequestGraphRequest() = default;
};
class DescribeRequestGraphResponseBodyRequestDetailsZoneRequestTop : public Darabonba::Model {
public:
  shared_ptr<long> requestCount{};
  shared_ptr<string> time{};
  shared_ptr<long> timestamp{};

  DescribeRequestGraphResponseBodyRequestDetailsZoneRequestTop() {}

  explicit DescribeRequestGraphResponseBodyRequestDetailsZoneRequestTop(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestCount) {
      res["RequestCount"] = boost::any(*requestCount);
    }
    if (time) {
      res["Time"] = boost::any(*time);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestCount") != m.end() && !m["RequestCount"].empty()) {
      requestCount = make_shared<long>(boost::any_cast<long>(m["RequestCount"]));
    }
    if (m.find("Time") != m.end() && !m["Time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["Time"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
  }


  virtual ~DescribeRequestGraphResponseBodyRequestDetailsZoneRequestTop() = default;
};
class DescribeRequestGraphResponseBodyRequestDetails : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRequestGraphResponseBodyRequestDetailsZoneRequestTop>> zoneRequestTop{};

  DescribeRequestGraphResponseBodyRequestDetails() {}

  explicit DescribeRequestGraphResponseBodyRequestDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (zoneRequestTop) {
      vector<boost::any> temp1;
      for(auto item1:*zoneRequestTop){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ZoneRequestTop"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ZoneRequestTop") != m.end() && !m["ZoneRequestTop"].empty()) {
      if (typeid(vector<boost::any>) == m["ZoneRequestTop"].type()) {
        vector<DescribeRequestGraphResponseBodyRequestDetailsZoneRequestTop> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ZoneRequestTop"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRequestGraphResponseBodyRequestDetailsZoneRequestTop model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        zoneRequestTop = make_shared<vector<DescribeRequestGraphResponseBodyRequestDetailsZoneRequestTop>>(expect1);
      }
    }
  }


  virtual ~DescribeRequestGraphResponseBodyRequestDetails() = default;
};
class DescribeRequestGraphResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeRequestGraphResponseBodyRequestDetails> requestDetails{};
  shared_ptr<string> requestId{};

  DescribeRequestGraphResponseBody() {}

  explicit DescribeRequestGraphResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestDetails) {
      res["RequestDetails"] = requestDetails ? boost::any(requestDetails->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestDetails") != m.end() && !m["RequestDetails"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestDetails"].type()) {
        DescribeRequestGraphResponseBodyRequestDetails model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestDetails"]));
        requestDetails = make_shared<DescribeRequestGraphResponseBodyRequestDetails>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeRequestGraphResponseBody() = default;
};
class DescribeRequestGraphResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeRequestGraphResponseBody> body{};

  DescribeRequestGraphResponse() {}

  explicit DescribeRequestGraphResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeRequestGraphResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRequestGraphResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRequestGraphResponse() = default;
};
class DescribeResolverAvailableZonesRequest : public Darabonba::Model {
public:
  shared_ptr<string> azId{};
  shared_ptr<string> lang{};
  shared_ptr<string> resolverRegionId{};

  DescribeResolverAvailableZonesRequest() {}

  explicit DescribeResolverAvailableZonesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (azId) {
      res["AzId"] = boost::any(*azId);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (resolverRegionId) {
      res["ResolverRegionId"] = boost::any(*resolverRegionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AzId") != m.end() && !m["AzId"].empty()) {
      azId = make_shared<string>(boost::any_cast<string>(m["AzId"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("ResolverRegionId") != m.end() && !m["ResolverRegionId"].empty()) {
      resolverRegionId = make_shared<string>(boost::any_cast<string>(m["ResolverRegionId"]));
    }
  }


  virtual ~DescribeResolverAvailableZonesRequest() = default;
};
class DescribeResolverAvailableZonesResponseBodyAvailableZones : public Darabonba::Model {
public:
  shared_ptr<string> azId{};
  shared_ptr<string> status{};

  DescribeResolverAvailableZonesResponseBodyAvailableZones() {}

  explicit DescribeResolverAvailableZonesResponseBodyAvailableZones(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (azId) {
      res["AzId"] = boost::any(*azId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AzId") != m.end() && !m["AzId"].empty()) {
      azId = make_shared<string>(boost::any_cast<string>(m["AzId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeResolverAvailableZonesResponseBodyAvailableZones() = default;
};
class DescribeResolverAvailableZonesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeResolverAvailableZonesResponseBodyAvailableZones>> availableZones{};
  shared_ptr<string> requestId{};

  DescribeResolverAvailableZonesResponseBody() {}

  explicit DescribeResolverAvailableZonesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (availableZones) {
      vector<boost::any> temp1;
      for(auto item1:*availableZones){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AvailableZones"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvailableZones") != m.end() && !m["AvailableZones"].empty()) {
      if (typeid(vector<boost::any>) == m["AvailableZones"].type()) {
        vector<DescribeResolverAvailableZonesResponseBodyAvailableZones> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AvailableZones"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeResolverAvailableZonesResponseBodyAvailableZones model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        availableZones = make_shared<vector<DescribeResolverAvailableZonesResponseBodyAvailableZones>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeResolverAvailableZonesResponseBody() = default;
};
class DescribeResolverAvailableZonesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeResolverAvailableZonesResponseBody> body{};

  DescribeResolverAvailableZonesResponse() {}

  explicit DescribeResolverAvailableZonesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeResolverAvailableZonesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeResolverAvailableZonesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeResolverAvailableZonesResponse() = default;
};
class DescribeResolverEndpointRequest : public Darabonba::Model {
public:
  shared_ptr<string> endpointId{};
  shared_ptr<string> lang{};

  DescribeResolverEndpointRequest() {}

  explicit DescribeResolverEndpointRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endpointId) {
      res["EndpointId"] = boost::any(*endpointId);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndpointId") != m.end() && !m["EndpointId"].empty()) {
      endpointId = make_shared<string>(boost::any_cast<string>(m["EndpointId"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
  }


  virtual ~DescribeResolverEndpointRequest() = default;
};
class DescribeResolverEndpointResponseBodyIpConfigs : public Darabonba::Model {
public:
  shared_ptr<string> azId{};
  shared_ptr<string> cidrBlock{};
  shared_ptr<string> ip{};
  shared_ptr<string> vSwitchId{};

  DescribeResolverEndpointResponseBodyIpConfigs() {}

  explicit DescribeResolverEndpointResponseBodyIpConfigs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (azId) {
      res["AzId"] = boost::any(*azId);
    }
    if (cidrBlock) {
      res["CidrBlock"] = boost::any(*cidrBlock);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AzId") != m.end() && !m["AzId"].empty()) {
      azId = make_shared<string>(boost::any_cast<string>(m["AzId"]));
    }
    if (m.find("CidrBlock") != m.end() && !m["CidrBlock"].empty()) {
      cidrBlock = make_shared<string>(boost::any_cast<string>(m["CidrBlock"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
  }


  virtual ~DescribeResolverEndpointResponseBodyIpConfigs() = default;
};
class DescribeResolverEndpointResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<long> createTimestamp{};
  shared_ptr<string> id{};
  shared_ptr<vector<DescribeResolverEndpointResponseBodyIpConfigs>> ipConfigs{};
  shared_ptr<string> name{};
  shared_ptr<string> requestId{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> status{};
  shared_ptr<string> updateTime{};
  shared_ptr<long> updateTimestamp{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vpcName{};
  shared_ptr<string> vpcRegionId{};
  shared_ptr<string> vpcRegionName{};

  DescribeResolverEndpointResponseBody() {}

  explicit DescribeResolverEndpointResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (createTimestamp) {
      res["CreateTimestamp"] = boost::any(*createTimestamp);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (ipConfigs) {
      vector<boost::any> temp1;
      for(auto item1:*ipConfigs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["IpConfigs"] = boost::any(temp1);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (updateTimestamp) {
      res["UpdateTimestamp"] = boost::any(*updateTimestamp);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vpcName) {
      res["VpcName"] = boost::any(*vpcName);
    }
    if (vpcRegionId) {
      res["VpcRegionId"] = boost::any(*vpcRegionId);
    }
    if (vpcRegionName) {
      res["VpcRegionName"] = boost::any(*vpcRegionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CreateTimestamp") != m.end() && !m["CreateTimestamp"].empty()) {
      createTimestamp = make_shared<long>(boost::any_cast<long>(m["CreateTimestamp"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IpConfigs") != m.end() && !m["IpConfigs"].empty()) {
      if (typeid(vector<boost::any>) == m["IpConfigs"].type()) {
        vector<DescribeResolverEndpointResponseBodyIpConfigs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["IpConfigs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeResolverEndpointResponseBodyIpConfigs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ipConfigs = make_shared<vector<DescribeResolverEndpointResponseBodyIpConfigs>>(expect1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("UpdateTimestamp") != m.end() && !m["UpdateTimestamp"].empty()) {
      updateTimestamp = make_shared<long>(boost::any_cast<long>(m["UpdateTimestamp"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VpcName") != m.end() && !m["VpcName"].empty()) {
      vpcName = make_shared<string>(boost::any_cast<string>(m["VpcName"]));
    }
    if (m.find("VpcRegionId") != m.end() && !m["VpcRegionId"].empty()) {
      vpcRegionId = make_shared<string>(boost::any_cast<string>(m["VpcRegionId"]));
    }
    if (m.find("VpcRegionName") != m.end() && !m["VpcRegionName"].empty()) {
      vpcRegionName = make_shared<string>(boost::any_cast<string>(m["VpcRegionName"]));
    }
  }


  virtual ~DescribeResolverEndpointResponseBody() = default;
};
class DescribeResolverEndpointResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeResolverEndpointResponseBody> body{};

  DescribeResolverEndpointResponse() {}

  explicit DescribeResolverEndpointResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeResolverEndpointResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeResolverEndpointResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeResolverEndpointResponse() = default;
};
class DescribeResolverEndpointsRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyword{};
  shared_ptr<string> lang{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> status{};

  DescribeResolverEndpointsRequest() {}

  explicit DescribeResolverEndpointsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeResolverEndpointsRequest() = default;
};
class DescribeResolverEndpointsResponseBodyEndpointsIpConfigs : public Darabonba::Model {
public:
  shared_ptr<string> azId{};
  shared_ptr<string> cidrBlock{};
  shared_ptr<string> ip{};
  shared_ptr<string> vSwitchId{};

  DescribeResolverEndpointsResponseBodyEndpointsIpConfigs() {}

  explicit DescribeResolverEndpointsResponseBodyEndpointsIpConfigs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (azId) {
      res["AzId"] = boost::any(*azId);
    }
    if (cidrBlock) {
      res["CidrBlock"] = boost::any(*cidrBlock);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AzId") != m.end() && !m["AzId"].empty()) {
      azId = make_shared<string>(boost::any_cast<string>(m["AzId"]));
    }
    if (m.find("CidrBlock") != m.end() && !m["CidrBlock"].empty()) {
      cidrBlock = make_shared<string>(boost::any_cast<string>(m["CidrBlock"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
  }


  virtual ~DescribeResolverEndpointsResponseBodyEndpointsIpConfigs() = default;
};
class DescribeResolverEndpointsResponseBodyEndpoints : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<long> createTimestamp{};
  shared_ptr<string> id{};
  shared_ptr<vector<DescribeResolverEndpointsResponseBodyEndpointsIpConfigs>> ipConfigs{};
  shared_ptr<string> name{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> status{};
  shared_ptr<string> updateTime{};
  shared_ptr<long> updateTimestamp{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vpcName{};
  shared_ptr<string> vpcRegionId{};
  shared_ptr<string> vpcRegionName{};

  DescribeResolverEndpointsResponseBodyEndpoints() {}

  explicit DescribeResolverEndpointsResponseBodyEndpoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (createTimestamp) {
      res["CreateTimestamp"] = boost::any(*createTimestamp);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (ipConfigs) {
      vector<boost::any> temp1;
      for(auto item1:*ipConfigs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["IpConfigs"] = boost::any(temp1);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (updateTimestamp) {
      res["UpdateTimestamp"] = boost::any(*updateTimestamp);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vpcName) {
      res["VpcName"] = boost::any(*vpcName);
    }
    if (vpcRegionId) {
      res["VpcRegionId"] = boost::any(*vpcRegionId);
    }
    if (vpcRegionName) {
      res["VpcRegionName"] = boost::any(*vpcRegionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CreateTimestamp") != m.end() && !m["CreateTimestamp"].empty()) {
      createTimestamp = make_shared<long>(boost::any_cast<long>(m["CreateTimestamp"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IpConfigs") != m.end() && !m["IpConfigs"].empty()) {
      if (typeid(vector<boost::any>) == m["IpConfigs"].type()) {
        vector<DescribeResolverEndpointsResponseBodyEndpointsIpConfigs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["IpConfigs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeResolverEndpointsResponseBodyEndpointsIpConfigs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ipConfigs = make_shared<vector<DescribeResolverEndpointsResponseBodyEndpointsIpConfigs>>(expect1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("UpdateTimestamp") != m.end() && !m["UpdateTimestamp"].empty()) {
      updateTimestamp = make_shared<long>(boost::any_cast<long>(m["UpdateTimestamp"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VpcName") != m.end() && !m["VpcName"].empty()) {
      vpcName = make_shared<string>(boost::any_cast<string>(m["VpcName"]));
    }
    if (m.find("VpcRegionId") != m.end() && !m["VpcRegionId"].empty()) {
      vpcRegionId = make_shared<string>(boost::any_cast<string>(m["VpcRegionId"]));
    }
    if (m.find("VpcRegionName") != m.end() && !m["VpcRegionName"].empty()) {
      vpcRegionName = make_shared<string>(boost::any_cast<string>(m["VpcRegionName"]));
    }
  }


  virtual ~DescribeResolverEndpointsResponseBodyEndpoints() = default;
};
class DescribeResolverEndpointsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeResolverEndpointsResponseBodyEndpoints>> endpoints{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalItems{};
  shared_ptr<long> totalPages{};

  DescribeResolverEndpointsResponseBody() {}

  explicit DescribeResolverEndpointsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endpoints) {
      vector<boost::any> temp1;
      for(auto item1:*endpoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Endpoints"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalItems) {
      res["TotalItems"] = boost::any(*totalItems);
    }
    if (totalPages) {
      res["TotalPages"] = boost::any(*totalPages);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Endpoints") != m.end() && !m["Endpoints"].empty()) {
      if (typeid(vector<boost::any>) == m["Endpoints"].type()) {
        vector<DescribeResolverEndpointsResponseBodyEndpoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Endpoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeResolverEndpointsResponseBodyEndpoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        endpoints = make_shared<vector<DescribeResolverEndpointsResponseBodyEndpoints>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalItems") != m.end() && !m["TotalItems"].empty()) {
      totalItems = make_shared<long>(boost::any_cast<long>(m["TotalItems"]));
    }
    if (m.find("TotalPages") != m.end() && !m["TotalPages"].empty()) {
      totalPages = make_shared<long>(boost::any_cast<long>(m["TotalPages"]));
    }
  }


  virtual ~DescribeResolverEndpointsResponseBody() = default;
};
class DescribeResolverEndpointsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeResolverEndpointsResponseBody> body{};

  DescribeResolverEndpointsResponse() {}

  explicit DescribeResolverEndpointsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeResolverEndpointsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeResolverEndpointsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeResolverEndpointsResponse() = default;
};
class DescribeResolverRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> ruleId{};

  DescribeResolverRuleRequest() {}

  explicit DescribeResolverRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
  }


  virtual ~DescribeResolverRuleRequest() = default;
};
class DescribeResolverRuleResponseBodyBindVpcs : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> regionName{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vpcName{};
  shared_ptr<string> vpcType{};
  shared_ptr<string> vpcUserId{};

  DescribeResolverRuleResponseBodyBindVpcs() {}

  explicit DescribeResolverRuleResponseBodyBindVpcs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (regionName) {
      res["RegionName"] = boost::any(*regionName);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vpcName) {
      res["VpcName"] = boost::any(*vpcName);
    }
    if (vpcType) {
      res["VpcType"] = boost::any(*vpcType);
    }
    if (vpcUserId) {
      res["VpcUserId"] = boost::any(*vpcUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RegionName") != m.end() && !m["RegionName"].empty()) {
      regionName = make_shared<string>(boost::any_cast<string>(m["RegionName"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VpcName") != m.end() && !m["VpcName"].empty()) {
      vpcName = make_shared<string>(boost::any_cast<string>(m["VpcName"]));
    }
    if (m.find("VpcType") != m.end() && !m["VpcType"].empty()) {
      vpcType = make_shared<string>(boost::any_cast<string>(m["VpcType"]));
    }
    if (m.find("VpcUserId") != m.end() && !m["VpcUserId"].empty()) {
      vpcUserId = make_shared<string>(boost::any_cast<string>(m["VpcUserId"]));
    }
  }


  virtual ~DescribeResolverRuleResponseBodyBindVpcs() = default;
};
class DescribeResolverRuleResponseBodyForwardIps : public Darabonba::Model {
public:
  shared_ptr<string> ip{};
  shared_ptr<long> port{};

  DescribeResolverRuleResponseBodyForwardIps() {}

  explicit DescribeResolverRuleResponseBodyForwardIps(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
  }


  virtual ~DescribeResolverRuleResponseBodyForwardIps() = default;
};
class DescribeResolverRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeResolverRuleResponseBodyBindVpcs>> bindVpcs{};
  shared_ptr<string> createTime{};
  shared_ptr<long> createTimestamp{};
  shared_ptr<string> endpointId{};
  shared_ptr<string> endpointName{};
  shared_ptr<vector<DescribeResolverRuleResponseBodyForwardIps>> forwardIps{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> requestId{};
  shared_ptr<string> type{};
  shared_ptr<string> updateTime{};
  shared_ptr<long> updateTimestamp{};
  shared_ptr<string> zoneName{};

  DescribeResolverRuleResponseBody() {}

  explicit DescribeResolverRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bindVpcs) {
      vector<boost::any> temp1;
      for(auto item1:*bindVpcs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BindVpcs"] = boost::any(temp1);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (createTimestamp) {
      res["CreateTimestamp"] = boost::any(*createTimestamp);
    }
    if (endpointId) {
      res["EndpointId"] = boost::any(*endpointId);
    }
    if (endpointName) {
      res["EndpointName"] = boost::any(*endpointName);
    }
    if (forwardIps) {
      vector<boost::any> temp1;
      for(auto item1:*forwardIps){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ForwardIps"] = boost::any(temp1);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (updateTimestamp) {
      res["UpdateTimestamp"] = boost::any(*updateTimestamp);
    }
    if (zoneName) {
      res["ZoneName"] = boost::any(*zoneName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BindVpcs") != m.end() && !m["BindVpcs"].empty()) {
      if (typeid(vector<boost::any>) == m["BindVpcs"].type()) {
        vector<DescribeResolverRuleResponseBodyBindVpcs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BindVpcs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeResolverRuleResponseBodyBindVpcs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        bindVpcs = make_shared<vector<DescribeResolverRuleResponseBodyBindVpcs>>(expect1);
      }
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CreateTimestamp") != m.end() && !m["CreateTimestamp"].empty()) {
      createTimestamp = make_shared<long>(boost::any_cast<long>(m["CreateTimestamp"]));
    }
    if (m.find("EndpointId") != m.end() && !m["EndpointId"].empty()) {
      endpointId = make_shared<string>(boost::any_cast<string>(m["EndpointId"]));
    }
    if (m.find("EndpointName") != m.end() && !m["EndpointName"].empty()) {
      endpointName = make_shared<string>(boost::any_cast<string>(m["EndpointName"]));
    }
    if (m.find("ForwardIps") != m.end() && !m["ForwardIps"].empty()) {
      if (typeid(vector<boost::any>) == m["ForwardIps"].type()) {
        vector<DescribeResolverRuleResponseBodyForwardIps> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ForwardIps"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeResolverRuleResponseBodyForwardIps model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        forwardIps = make_shared<vector<DescribeResolverRuleResponseBodyForwardIps>>(expect1);
      }
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("UpdateTimestamp") != m.end() && !m["UpdateTimestamp"].empty()) {
      updateTimestamp = make_shared<long>(boost::any_cast<long>(m["UpdateTimestamp"]));
    }
    if (m.find("ZoneName") != m.end() && !m["ZoneName"].empty()) {
      zoneName = make_shared<string>(boost::any_cast<string>(m["ZoneName"]));
    }
  }


  virtual ~DescribeResolverRuleResponseBody() = default;
};
class DescribeResolverRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeResolverRuleResponseBody> body{};

  DescribeResolverRuleResponse() {}

  explicit DescribeResolverRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeResolverRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeResolverRuleResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeResolverRuleResponse() = default;
};
class DescribeResolverRulesRequest : public Darabonba::Model {
public:
  shared_ptr<string> endpointId{};
  shared_ptr<string> keyword{};
  shared_ptr<string> lang{};
  shared_ptr<bool> needDetailAttributes{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  DescribeResolverRulesRequest() {}

  explicit DescribeResolverRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endpointId) {
      res["EndpointId"] = boost::any(*endpointId);
    }
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (needDetailAttributes) {
      res["NeedDetailAttributes"] = boost::any(*needDetailAttributes);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndpointId") != m.end() && !m["EndpointId"].empty()) {
      endpointId = make_shared<string>(boost::any_cast<string>(m["EndpointId"]));
    }
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("NeedDetailAttributes") != m.end() && !m["NeedDetailAttributes"].empty()) {
      needDetailAttributes = make_shared<bool>(boost::any_cast<bool>(m["NeedDetailAttributes"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~DescribeResolverRulesRequest() = default;
};
class DescribeResolverRulesResponseBodyRulesBindVpcs : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> regionName{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vpcName{};
  shared_ptr<string> vpcType{};
  shared_ptr<string> vpcUserId{};

  DescribeResolverRulesResponseBodyRulesBindVpcs() {}

  explicit DescribeResolverRulesResponseBodyRulesBindVpcs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (regionName) {
      res["RegionName"] = boost::any(*regionName);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vpcName) {
      res["VpcName"] = boost::any(*vpcName);
    }
    if (vpcType) {
      res["VpcType"] = boost::any(*vpcType);
    }
    if (vpcUserId) {
      res["VpcUserId"] = boost::any(*vpcUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RegionName") != m.end() && !m["RegionName"].empty()) {
      regionName = make_shared<string>(boost::any_cast<string>(m["RegionName"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VpcName") != m.end() && !m["VpcName"].empty()) {
      vpcName = make_shared<string>(boost::any_cast<string>(m["VpcName"]));
    }
    if (m.find("VpcType") != m.end() && !m["VpcType"].empty()) {
      vpcType = make_shared<string>(boost::any_cast<string>(m["VpcType"]));
    }
    if (m.find("VpcUserId") != m.end() && !m["VpcUserId"].empty()) {
      vpcUserId = make_shared<string>(boost::any_cast<string>(m["VpcUserId"]));
    }
  }


  virtual ~DescribeResolverRulesResponseBodyRulesBindVpcs() = default;
};
class DescribeResolverRulesResponseBodyRulesForwardIps : public Darabonba::Model {
public:
  shared_ptr<string> ip{};
  shared_ptr<long> port{};

  DescribeResolverRulesResponseBodyRulesForwardIps() {}

  explicit DescribeResolverRulesResponseBodyRulesForwardIps(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
  }


  virtual ~DescribeResolverRulesResponseBodyRulesForwardIps() = default;
};
class DescribeResolverRulesResponseBodyRules : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeResolverRulesResponseBodyRulesBindVpcs>> bindVpcs{};
  shared_ptr<string> createTime{};
  shared_ptr<long> createTimestamp{};
  shared_ptr<string> endpointId{};
  shared_ptr<string> endpointName{};
  shared_ptr<vector<DescribeResolverRulesResponseBodyRulesForwardIps>> forwardIps{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};
  shared_ptr<string> updateTime{};
  shared_ptr<long> updateTimestamp{};
  shared_ptr<string> zoneName{};

  DescribeResolverRulesResponseBodyRules() {}

  explicit DescribeResolverRulesResponseBodyRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bindVpcs) {
      vector<boost::any> temp1;
      for(auto item1:*bindVpcs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BindVpcs"] = boost::any(temp1);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (createTimestamp) {
      res["CreateTimestamp"] = boost::any(*createTimestamp);
    }
    if (endpointId) {
      res["EndpointId"] = boost::any(*endpointId);
    }
    if (endpointName) {
      res["EndpointName"] = boost::any(*endpointName);
    }
    if (forwardIps) {
      vector<boost::any> temp1;
      for(auto item1:*forwardIps){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ForwardIps"] = boost::any(temp1);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (updateTimestamp) {
      res["UpdateTimestamp"] = boost::any(*updateTimestamp);
    }
    if (zoneName) {
      res["ZoneName"] = boost::any(*zoneName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BindVpcs") != m.end() && !m["BindVpcs"].empty()) {
      if (typeid(vector<boost::any>) == m["BindVpcs"].type()) {
        vector<DescribeResolverRulesResponseBodyRulesBindVpcs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BindVpcs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeResolverRulesResponseBodyRulesBindVpcs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        bindVpcs = make_shared<vector<DescribeResolverRulesResponseBodyRulesBindVpcs>>(expect1);
      }
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CreateTimestamp") != m.end() && !m["CreateTimestamp"].empty()) {
      createTimestamp = make_shared<long>(boost::any_cast<long>(m["CreateTimestamp"]));
    }
    if (m.find("EndpointId") != m.end() && !m["EndpointId"].empty()) {
      endpointId = make_shared<string>(boost::any_cast<string>(m["EndpointId"]));
    }
    if (m.find("EndpointName") != m.end() && !m["EndpointName"].empty()) {
      endpointName = make_shared<string>(boost::any_cast<string>(m["EndpointName"]));
    }
    if (m.find("ForwardIps") != m.end() && !m["ForwardIps"].empty()) {
      if (typeid(vector<boost::any>) == m["ForwardIps"].type()) {
        vector<DescribeResolverRulesResponseBodyRulesForwardIps> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ForwardIps"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeResolverRulesResponseBodyRulesForwardIps model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        forwardIps = make_shared<vector<DescribeResolverRulesResponseBodyRulesForwardIps>>(expect1);
      }
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("UpdateTimestamp") != m.end() && !m["UpdateTimestamp"].empty()) {
      updateTimestamp = make_shared<long>(boost::any_cast<long>(m["UpdateTimestamp"]));
    }
    if (m.find("ZoneName") != m.end() && !m["ZoneName"].empty()) {
      zoneName = make_shared<string>(boost::any_cast<string>(m["ZoneName"]));
    }
  }


  virtual ~DescribeResolverRulesResponseBodyRules() = default;
};
class DescribeResolverRulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeResolverRulesResponseBodyRules>> rules{};
  shared_ptr<long> totalItems{};
  shared_ptr<long> totalPages{};

  DescribeResolverRulesResponseBody() {}

  explicit DescribeResolverRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (rules) {
      vector<boost::any> temp1;
      for(auto item1:*rules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Rules"] = boost::any(temp1);
    }
    if (totalItems) {
      res["TotalItems"] = boost::any(*totalItems);
    }
    if (totalPages) {
      res["TotalPages"] = boost::any(*totalPages);
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
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      if (typeid(vector<boost::any>) == m["Rules"].type()) {
        vector<DescribeResolverRulesResponseBodyRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Rules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeResolverRulesResponseBodyRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rules = make_shared<vector<DescribeResolverRulesResponseBodyRules>>(expect1);
      }
    }
    if (m.find("TotalItems") != m.end() && !m["TotalItems"].empty()) {
      totalItems = make_shared<long>(boost::any_cast<long>(m["TotalItems"]));
    }
    if (m.find("TotalPages") != m.end() && !m["TotalPages"].empty()) {
      totalPages = make_shared<long>(boost::any_cast<long>(m["TotalPages"]));
    }
  }


  virtual ~DescribeResolverRulesResponseBody() = default;
};
class DescribeResolverRulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeResolverRulesResponseBody> body{};

  DescribeResolverRulesResponse() {}

  explicit DescribeResolverRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeResolverRulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeResolverRulesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeResolverRulesResponse() = default;
};
class DescribeStatisticSummaryRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> userClientIp{};

  DescribeStatisticSummaryRequest() {}

  explicit DescribeStatisticSummaryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~DescribeStatisticSummaryRequest() = default;
};
class DescribeStatisticSummaryResponseBodyVpcRequestTopsVpcRequestTop : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> regionName{};
  shared_ptr<long> requestCount{};
  shared_ptr<string> tunnelId{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vpcType{};

  DescribeStatisticSummaryResponseBodyVpcRequestTopsVpcRequestTop() {}

  explicit DescribeStatisticSummaryResponseBodyVpcRequestTopsVpcRequestTop(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (regionName) {
      res["RegionName"] = boost::any(*regionName);
    }
    if (requestCount) {
      res["RequestCount"] = boost::any(*requestCount);
    }
    if (tunnelId) {
      res["TunnelId"] = boost::any(*tunnelId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vpcType) {
      res["VpcType"] = boost::any(*vpcType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RegionName") != m.end() && !m["RegionName"].empty()) {
      regionName = make_shared<string>(boost::any_cast<string>(m["RegionName"]));
    }
    if (m.find("RequestCount") != m.end() && !m["RequestCount"].empty()) {
      requestCount = make_shared<long>(boost::any_cast<long>(m["RequestCount"]));
    }
    if (m.find("TunnelId") != m.end() && !m["TunnelId"].empty()) {
      tunnelId = make_shared<string>(boost::any_cast<string>(m["TunnelId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VpcType") != m.end() && !m["VpcType"].empty()) {
      vpcType = make_shared<string>(boost::any_cast<string>(m["VpcType"]));
    }
  }


  virtual ~DescribeStatisticSummaryResponseBodyVpcRequestTopsVpcRequestTop() = default;
};
class DescribeStatisticSummaryResponseBodyVpcRequestTops : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeStatisticSummaryResponseBodyVpcRequestTopsVpcRequestTop>> vpcRequestTop{};

  DescribeStatisticSummaryResponseBodyVpcRequestTops() {}

  explicit DescribeStatisticSummaryResponseBodyVpcRequestTops(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vpcRequestTop) {
      vector<boost::any> temp1;
      for(auto item1:*vpcRequestTop){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VpcRequestTop"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VpcRequestTop") != m.end() && !m["VpcRequestTop"].empty()) {
      if (typeid(vector<boost::any>) == m["VpcRequestTop"].type()) {
        vector<DescribeStatisticSummaryResponseBodyVpcRequestTopsVpcRequestTop> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VpcRequestTop"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeStatisticSummaryResponseBodyVpcRequestTopsVpcRequestTop model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        vpcRequestTop = make_shared<vector<DescribeStatisticSummaryResponseBodyVpcRequestTopsVpcRequestTop>>(expect1);
      }
    }
  }


  virtual ~DescribeStatisticSummaryResponseBodyVpcRequestTops() = default;
};
class DescribeStatisticSummaryResponseBodyZoneRequestTopsZoneRequestTop : public Darabonba::Model {
public:
  shared_ptr<string> bizType{};
  shared_ptr<long> requestCount{};
  shared_ptr<string> zoneName{};

  DescribeStatisticSummaryResponseBodyZoneRequestTopsZoneRequestTop() {}

  explicit DescribeStatisticSummaryResponseBodyZoneRequestTopsZoneRequestTop(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (requestCount) {
      res["RequestCount"] = boost::any(*requestCount);
    }
    if (zoneName) {
      res["ZoneName"] = boost::any(*zoneName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("RequestCount") != m.end() && !m["RequestCount"].empty()) {
      requestCount = make_shared<long>(boost::any_cast<long>(m["RequestCount"]));
    }
    if (m.find("ZoneName") != m.end() && !m["ZoneName"].empty()) {
      zoneName = make_shared<string>(boost::any_cast<string>(m["ZoneName"]));
    }
  }


  virtual ~DescribeStatisticSummaryResponseBodyZoneRequestTopsZoneRequestTop() = default;
};
class DescribeStatisticSummaryResponseBodyZoneRequestTops : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeStatisticSummaryResponseBodyZoneRequestTopsZoneRequestTop>> zoneRequestTop{};

  DescribeStatisticSummaryResponseBodyZoneRequestTops() {}

  explicit DescribeStatisticSummaryResponseBodyZoneRequestTops(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (zoneRequestTop) {
      vector<boost::any> temp1;
      for(auto item1:*zoneRequestTop){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ZoneRequestTop"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ZoneRequestTop") != m.end() && !m["ZoneRequestTop"].empty()) {
      if (typeid(vector<boost::any>) == m["ZoneRequestTop"].type()) {
        vector<DescribeStatisticSummaryResponseBodyZoneRequestTopsZoneRequestTop> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ZoneRequestTop"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeStatisticSummaryResponseBodyZoneRequestTopsZoneRequestTop model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        zoneRequestTop = make_shared<vector<DescribeStatisticSummaryResponseBodyZoneRequestTopsZoneRequestTop>>(expect1);
      }
    }
  }


  virtual ~DescribeStatisticSummaryResponseBodyZoneRequestTops() = default;
};
class DescribeStatisticSummaryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<DescribeStatisticSummaryResponseBodyVpcRequestTops> vpcRequestTops{};
  shared_ptr<DescribeStatisticSummaryResponseBodyZoneRequestTops> zoneRequestTops{};

  DescribeStatisticSummaryResponseBody() {}

  explicit DescribeStatisticSummaryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (vpcRequestTops) {
      res["VpcRequestTops"] = vpcRequestTops ? boost::any(vpcRequestTops->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (zoneRequestTops) {
      res["ZoneRequestTops"] = zoneRequestTops ? boost::any(zoneRequestTops->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("VpcRequestTops") != m.end() && !m["VpcRequestTops"].empty()) {
      if (typeid(map<string, boost::any>) == m["VpcRequestTops"].type()) {
        DescribeStatisticSummaryResponseBodyVpcRequestTops model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VpcRequestTops"]));
        vpcRequestTops = make_shared<DescribeStatisticSummaryResponseBodyVpcRequestTops>(model1);
      }
    }
    if (m.find("ZoneRequestTops") != m.end() && !m["ZoneRequestTops"].empty()) {
      if (typeid(map<string, boost::any>) == m["ZoneRequestTops"].type()) {
        DescribeStatisticSummaryResponseBodyZoneRequestTops model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ZoneRequestTops"]));
        zoneRequestTops = make_shared<DescribeStatisticSummaryResponseBodyZoneRequestTops>(model1);
      }
    }
  }


  virtual ~DescribeStatisticSummaryResponseBody() = default;
};
class DescribeStatisticSummaryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeStatisticSummaryResponseBody> body{};

  DescribeStatisticSummaryResponse() {}

  explicit DescribeStatisticSummaryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeStatisticSummaryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeStatisticSummaryResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeStatisticSummaryResponse() = default;
};
class DescribeSyncEcsHostTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> zoneId{};

  DescribeSyncEcsHostTaskRequest() {}

  explicit DescribeSyncEcsHostTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeSyncEcsHostTaskRequest() = default;
};
class DescribeSyncEcsHostTaskResponseBodyEcsRegionsEcsRegionRegionIds : public Darabonba::Model {
public:
  shared_ptr<vector<string>> regionId{};

  DescribeSyncEcsHostTaskResponseBodyEcsRegionsEcsRegionRegionIds() {}

  explicit DescribeSyncEcsHostTaskResponseBodyEcsRegionsEcsRegionRegionIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RegionId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RegionId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      regionId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeSyncEcsHostTaskResponseBodyEcsRegionsEcsRegionRegionIds() = default;
};
class DescribeSyncEcsHostTaskResponseBodyEcsRegionsEcsRegion : public Darabonba::Model {
public:
  shared_ptr<DescribeSyncEcsHostTaskResponseBodyEcsRegionsEcsRegionRegionIds> regionIds{};
  shared_ptr<long> userId{};

  DescribeSyncEcsHostTaskResponseBodyEcsRegionsEcsRegion() {}

  explicit DescribeSyncEcsHostTaskResponseBodyEcsRegionsEcsRegion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionIds) {
      res["RegionIds"] = regionIds ? boost::any(regionIds->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionIds") != m.end() && !m["RegionIds"].empty()) {
      if (typeid(map<string, boost::any>) == m["RegionIds"].type()) {
        DescribeSyncEcsHostTaskResponseBodyEcsRegionsEcsRegionRegionIds model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RegionIds"]));
        regionIds = make_shared<DescribeSyncEcsHostTaskResponseBodyEcsRegionsEcsRegionRegionIds>(model1);
      }
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["UserId"]));
    }
  }


  virtual ~DescribeSyncEcsHostTaskResponseBodyEcsRegionsEcsRegion() = default;
};
class DescribeSyncEcsHostTaskResponseBodyEcsRegions : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeSyncEcsHostTaskResponseBodyEcsRegionsEcsRegion>> ecsRegion{};

  DescribeSyncEcsHostTaskResponseBodyEcsRegions() {}

  explicit DescribeSyncEcsHostTaskResponseBodyEcsRegions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ecsRegion) {
      vector<boost::any> temp1;
      for(auto item1:*ecsRegion){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EcsRegion"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EcsRegion") != m.end() && !m["EcsRegion"].empty()) {
      if (typeid(vector<boost::any>) == m["EcsRegion"].type()) {
        vector<DescribeSyncEcsHostTaskResponseBodyEcsRegionsEcsRegion> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EcsRegion"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSyncEcsHostTaskResponseBodyEcsRegionsEcsRegion model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ecsRegion = make_shared<vector<DescribeSyncEcsHostTaskResponseBodyEcsRegionsEcsRegion>>(expect1);
      }
    }
  }


  virtual ~DescribeSyncEcsHostTaskResponseBodyEcsRegions() = default;
};
class DescribeSyncEcsHostTaskResponseBodyRegions : public Darabonba::Model {
public:
  shared_ptr<vector<string>> regionId{};

  DescribeSyncEcsHostTaskResponseBodyRegions() {}

  explicit DescribeSyncEcsHostTaskResponseBodyRegions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RegionId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RegionId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      regionId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeSyncEcsHostTaskResponseBodyRegions() = default;
};
class DescribeSyncEcsHostTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeSyncEcsHostTaskResponseBodyEcsRegions> ecsRegions{};
  shared_ptr<DescribeSyncEcsHostTaskResponseBodyRegions> regions{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<bool> success{};
  shared_ptr<string> zoneId{};

  DescribeSyncEcsHostTaskResponseBody() {}

  explicit DescribeSyncEcsHostTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ecsRegions) {
      res["EcsRegions"] = ecsRegions ? boost::any(ecsRegions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (regions) {
      res["Regions"] = regions ? boost::any(regions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EcsRegions") != m.end() && !m["EcsRegions"].empty()) {
      if (typeid(map<string, boost::any>) == m["EcsRegions"].type()) {
        DescribeSyncEcsHostTaskResponseBodyEcsRegions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EcsRegions"]));
        ecsRegions = make_shared<DescribeSyncEcsHostTaskResponseBodyEcsRegions>(model1);
      }
    }
    if (m.find("Regions") != m.end() && !m["Regions"].empty()) {
      if (typeid(map<string, boost::any>) == m["Regions"].type()) {
        DescribeSyncEcsHostTaskResponseBodyRegions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Regions"]));
        regions = make_shared<DescribeSyncEcsHostTaskResponseBodyRegions>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeSyncEcsHostTaskResponseBody() = default;
};
class DescribeSyncEcsHostTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSyncEcsHostTaskResponseBody> body{};

  DescribeSyncEcsHostTaskResponse() {}

  explicit DescribeSyncEcsHostTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSyncEcsHostTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSyncEcsHostTaskResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSyncEcsHostTaskResponse() = default;
};
class DescribeTagsRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceType{};

  DescribeTagsRequest() {}

  explicit DescribeTagsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~DescribeTagsRequest() = default;
};
class DescribeTagsResponseBodyTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<vector<string>> values{};

  DescribeTagsResponseBodyTags() {}

  explicit DescribeTagsResponseBodyTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (values) {
      res["Values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
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


  virtual ~DescribeTagsResponseBodyTags() = default;
};
class DescribeTagsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeTagsResponseBodyTags>> tags{};
  shared_ptr<long> totalCount{};

  DescribeTagsResponseBody() {}

  explicit DescribeTagsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
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
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<DescribeTagsResponseBodyTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeTagsResponseBodyTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<DescribeTagsResponseBodyTags>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeTagsResponseBody() = default;
};
class DescribeTagsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeTagsResponseBody> body{};

  DescribeTagsResponse() {}

  explicit DescribeTagsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeTagsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeTagsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeTagsResponse() = default;
};
class DescribeUserVpcAuthorizationsRequest : public Darabonba::Model {
public:
  shared_ptr<string> authType{};
  shared_ptr<long> authorizedUserId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  DescribeUserVpcAuthorizationsRequest() {}

  explicit DescribeUserVpcAuthorizationsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authType) {
      res["AuthType"] = boost::any(*authType);
    }
    if (authorizedUserId) {
      res["AuthorizedUserId"] = boost::any(*authorizedUserId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthType") != m.end() && !m["AuthType"].empty()) {
      authType = make_shared<string>(boost::any_cast<string>(m["AuthType"]));
    }
    if (m.find("AuthorizedUserId") != m.end() && !m["AuthorizedUserId"].empty()) {
      authorizedUserId = make_shared<long>(boost::any_cast<long>(m["AuthorizedUserId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~DescribeUserVpcAuthorizationsRequest() = default;
};
class DescribeUserVpcAuthorizationsResponseBodyUsers : public Darabonba::Model {
public:
  shared_ptr<string> authType{};
  shared_ptr<string> authorizedAliyunId{};
  shared_ptr<long> authorizedUserId{};
  shared_ptr<string> createTime{};
  shared_ptr<long> createTimestamp{};

  DescribeUserVpcAuthorizationsResponseBodyUsers() {}

  explicit DescribeUserVpcAuthorizationsResponseBodyUsers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authType) {
      res["AuthType"] = boost::any(*authType);
    }
    if (authorizedAliyunId) {
      res["AuthorizedAliyunId"] = boost::any(*authorizedAliyunId);
    }
    if (authorizedUserId) {
      res["AuthorizedUserId"] = boost::any(*authorizedUserId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (createTimestamp) {
      res["CreateTimestamp"] = boost::any(*createTimestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthType") != m.end() && !m["AuthType"].empty()) {
      authType = make_shared<string>(boost::any_cast<string>(m["AuthType"]));
    }
    if (m.find("AuthorizedAliyunId") != m.end() && !m["AuthorizedAliyunId"].empty()) {
      authorizedAliyunId = make_shared<string>(boost::any_cast<string>(m["AuthorizedAliyunId"]));
    }
    if (m.find("AuthorizedUserId") != m.end() && !m["AuthorizedUserId"].empty()) {
      authorizedUserId = make_shared<long>(boost::any_cast<long>(m["AuthorizedUserId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CreateTimestamp") != m.end() && !m["CreateTimestamp"].empty()) {
      createTimestamp = make_shared<long>(boost::any_cast<long>(m["CreateTimestamp"]));
    }
  }


  virtual ~DescribeUserVpcAuthorizationsResponseBodyUsers() = default;
};
class DescribeUserVpcAuthorizationsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalItems{};
  shared_ptr<long> totalPages{};
  shared_ptr<vector<DescribeUserVpcAuthorizationsResponseBodyUsers>> users{};

  DescribeUserVpcAuthorizationsResponseBody() {}

  explicit DescribeUserVpcAuthorizationsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (totalItems) {
      res["TotalItems"] = boost::any(*totalItems);
    }
    if (totalPages) {
      res["TotalPages"] = boost::any(*totalPages);
    }
    if (users) {
      vector<boost::any> temp1;
      for(auto item1:*users){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Users"] = boost::any(temp1);
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
    if (m.find("TotalItems") != m.end() && !m["TotalItems"].empty()) {
      totalItems = make_shared<long>(boost::any_cast<long>(m["TotalItems"]));
    }
    if (m.find("TotalPages") != m.end() && !m["TotalPages"].empty()) {
      totalPages = make_shared<long>(boost::any_cast<long>(m["TotalPages"]));
    }
    if (m.find("Users") != m.end() && !m["Users"].empty()) {
      if (typeid(vector<boost::any>) == m["Users"].type()) {
        vector<DescribeUserVpcAuthorizationsResponseBodyUsers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Users"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeUserVpcAuthorizationsResponseBodyUsers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        users = make_shared<vector<DescribeUserVpcAuthorizationsResponseBodyUsers>>(expect1);
      }
    }
  }


  virtual ~DescribeUserVpcAuthorizationsResponseBody() = default;
};
class DescribeUserVpcAuthorizationsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeUserVpcAuthorizationsResponseBody> body{};

  DescribeUserVpcAuthorizationsResponse() {}

  explicit DescribeUserVpcAuthorizationsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeUserVpcAuthorizationsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeUserVpcAuthorizationsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeUserVpcAuthorizationsResponse() = default;
};
class DescribeZoneInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> zoneId{};

  DescribeZoneInfoRequest() {}

  explicit DescribeZoneInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeZoneInfoRequest() = default;
};
class DescribeZoneInfoResponseBodyBindVpcsVpc : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> regionName{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vpcName{};
  shared_ptr<string> vpcType{};
  shared_ptr<long> vpcUserId{};

  DescribeZoneInfoResponseBodyBindVpcsVpc() {}

  explicit DescribeZoneInfoResponseBodyBindVpcsVpc(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (regionName) {
      res["RegionName"] = boost::any(*regionName);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vpcName) {
      res["VpcName"] = boost::any(*vpcName);
    }
    if (vpcType) {
      res["VpcType"] = boost::any(*vpcType);
    }
    if (vpcUserId) {
      res["VpcUserId"] = boost::any(*vpcUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RegionName") != m.end() && !m["RegionName"].empty()) {
      regionName = make_shared<string>(boost::any_cast<string>(m["RegionName"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VpcName") != m.end() && !m["VpcName"].empty()) {
      vpcName = make_shared<string>(boost::any_cast<string>(m["VpcName"]));
    }
    if (m.find("VpcType") != m.end() && !m["VpcType"].empty()) {
      vpcType = make_shared<string>(boost::any_cast<string>(m["VpcType"]));
    }
    if (m.find("VpcUserId") != m.end() && !m["VpcUserId"].empty()) {
      vpcUserId = make_shared<long>(boost::any_cast<long>(m["VpcUserId"]));
    }
  }


  virtual ~DescribeZoneInfoResponseBodyBindVpcsVpc() = default;
};
class DescribeZoneInfoResponseBodyBindVpcs : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeZoneInfoResponseBodyBindVpcsVpc>> vpc{};

  DescribeZoneInfoResponseBodyBindVpcs() {}

  explicit DescribeZoneInfoResponseBodyBindVpcs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vpc) {
      vector<boost::any> temp1;
      for(auto item1:*vpc){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Vpc"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Vpc") != m.end() && !m["Vpc"].empty()) {
      if (typeid(vector<boost::any>) == m["Vpc"].type()) {
        vector<DescribeZoneInfoResponseBodyBindVpcsVpc> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Vpc"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeZoneInfoResponseBodyBindVpcsVpc model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        vpc = make_shared<vector<DescribeZoneInfoResponseBodyBindVpcsVpc>>(expect1);
      }
    }
  }


  virtual ~DescribeZoneInfoResponseBodyBindVpcs() = default;
};
class DescribeZoneInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeZoneInfoResponseBodyBindVpcs> bindVpcs{};
  shared_ptr<string> createTime{};
  shared_ptr<long> createTimestamp{};
  shared_ptr<string> creator{};
  shared_ptr<string> creatorType{};
  shared_ptr<string> dnsGroup{};
  shared_ptr<bool> dnsGroupChanging{};
  shared_ptr<bool> isPtr{};
  shared_ptr<string> proxyPattern{};
  shared_ptr<long> recordCount{};
  shared_ptr<string> remark{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<bool> slaveDns{};
  shared_ptr<string> updateTime{};
  shared_ptr<long> updateTimestamp{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> zoneName{};
  shared_ptr<string> zoneTag{};
  shared_ptr<string> zoneType{};

  DescribeZoneInfoResponseBody() {}

  explicit DescribeZoneInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bindVpcs) {
      res["BindVpcs"] = bindVpcs ? boost::any(bindVpcs->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (createTimestamp) {
      res["CreateTimestamp"] = boost::any(*createTimestamp);
    }
    if (creator) {
      res["Creator"] = boost::any(*creator);
    }
    if (creatorType) {
      res["CreatorType"] = boost::any(*creatorType);
    }
    if (dnsGroup) {
      res["DnsGroup"] = boost::any(*dnsGroup);
    }
    if (dnsGroupChanging) {
      res["DnsGroupChanging"] = boost::any(*dnsGroupChanging);
    }
    if (isPtr) {
      res["IsPtr"] = boost::any(*isPtr);
    }
    if (proxyPattern) {
      res["ProxyPattern"] = boost::any(*proxyPattern);
    }
    if (recordCount) {
      res["RecordCount"] = boost::any(*recordCount);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (slaveDns) {
      res["SlaveDns"] = boost::any(*slaveDns);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (updateTimestamp) {
      res["UpdateTimestamp"] = boost::any(*updateTimestamp);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (zoneName) {
      res["ZoneName"] = boost::any(*zoneName);
    }
    if (zoneTag) {
      res["ZoneTag"] = boost::any(*zoneTag);
    }
    if (zoneType) {
      res["ZoneType"] = boost::any(*zoneType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BindVpcs") != m.end() && !m["BindVpcs"].empty()) {
      if (typeid(map<string, boost::any>) == m["BindVpcs"].type()) {
        DescribeZoneInfoResponseBodyBindVpcs model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BindVpcs"]));
        bindVpcs = make_shared<DescribeZoneInfoResponseBodyBindVpcs>(model1);
      }
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CreateTimestamp") != m.end() && !m["CreateTimestamp"].empty()) {
      createTimestamp = make_shared<long>(boost::any_cast<long>(m["CreateTimestamp"]));
    }
    if (m.find("Creator") != m.end() && !m["Creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["Creator"]));
    }
    if (m.find("CreatorType") != m.end() && !m["CreatorType"].empty()) {
      creatorType = make_shared<string>(boost::any_cast<string>(m["CreatorType"]));
    }
    if (m.find("DnsGroup") != m.end() && !m["DnsGroup"].empty()) {
      dnsGroup = make_shared<string>(boost::any_cast<string>(m["DnsGroup"]));
    }
    if (m.find("DnsGroupChanging") != m.end() && !m["DnsGroupChanging"].empty()) {
      dnsGroupChanging = make_shared<bool>(boost::any_cast<bool>(m["DnsGroupChanging"]));
    }
    if (m.find("IsPtr") != m.end() && !m["IsPtr"].empty()) {
      isPtr = make_shared<bool>(boost::any_cast<bool>(m["IsPtr"]));
    }
    if (m.find("ProxyPattern") != m.end() && !m["ProxyPattern"].empty()) {
      proxyPattern = make_shared<string>(boost::any_cast<string>(m["ProxyPattern"]));
    }
    if (m.find("RecordCount") != m.end() && !m["RecordCount"].empty()) {
      recordCount = make_shared<long>(boost::any_cast<long>(m["RecordCount"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SlaveDns") != m.end() && !m["SlaveDns"].empty()) {
      slaveDns = make_shared<bool>(boost::any_cast<bool>(m["SlaveDns"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("UpdateTimestamp") != m.end() && !m["UpdateTimestamp"].empty()) {
      updateTimestamp = make_shared<long>(boost::any_cast<long>(m["UpdateTimestamp"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("ZoneName") != m.end() && !m["ZoneName"].empty()) {
      zoneName = make_shared<string>(boost::any_cast<string>(m["ZoneName"]));
    }
    if (m.find("ZoneTag") != m.end() && !m["ZoneTag"].empty()) {
      zoneTag = make_shared<string>(boost::any_cast<string>(m["ZoneTag"]));
    }
    if (m.find("ZoneType") != m.end() && !m["ZoneType"].empty()) {
      zoneType = make_shared<string>(boost::any_cast<string>(m["ZoneType"]));
    }
  }


  virtual ~DescribeZoneInfoResponseBody() = default;
};
class DescribeZoneInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeZoneInfoResponseBody> body{};

  DescribeZoneInfoResponse() {}

  explicit DescribeZoneInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeZoneInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeZoneInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeZoneInfoResponse() = default;
};
class DescribeZoneRecordsRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyword{};
  shared_ptr<string> lang{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> searchMode{};
  shared_ptr<string> tag{};
  shared_ptr<string> userClientIp{};
  shared_ptr<string> zoneId{};

  DescribeZoneRecordsRequest() {}

  explicit DescribeZoneRecordsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (searchMode) {
      res["SearchMode"] = boost::any(*searchMode);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SearchMode") != m.end() && !m["SearchMode"].empty()) {
      searchMode = make_shared<string>(boost::any_cast<string>(m["SearchMode"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeZoneRecordsRequest() = default;
};
class DescribeZoneRecordsResponseBodyRecordsRecord : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<long> createTimestamp{};
  shared_ptr<string> line{};
  shared_ptr<long> priority{};
  shared_ptr<long> recordId{};
  shared_ptr<string> remark{};
  shared_ptr<string> rr{};
  shared_ptr<string> status{};
  shared_ptr<long> ttl{};
  shared_ptr<string> type{};
  shared_ptr<string> updateTime{};
  shared_ptr<long> updateTimestamp{};
  shared_ptr<string> value{};
  shared_ptr<long> weight{};
  shared_ptr<string> zoneId{};

  DescribeZoneRecordsResponseBodyRecordsRecord() {}

  explicit DescribeZoneRecordsResponseBodyRecordsRecord(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (createTimestamp) {
      res["CreateTimestamp"] = boost::any(*createTimestamp);
    }
    if (line) {
      res["Line"] = boost::any(*line);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (recordId) {
      res["RecordId"] = boost::any(*recordId);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (rr) {
      res["Rr"] = boost::any(*rr);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (ttl) {
      res["Ttl"] = boost::any(*ttl);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (updateTimestamp) {
      res["UpdateTimestamp"] = boost::any(*updateTimestamp);
    }
    if (value) {
      res["Value"] = boost::any(*value);
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
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CreateTimestamp") != m.end() && !m["CreateTimestamp"].empty()) {
      createTimestamp = make_shared<long>(boost::any_cast<long>(m["CreateTimestamp"]));
    }
    if (m.find("Line") != m.end() && !m["Line"].empty()) {
      line = make_shared<string>(boost::any_cast<string>(m["Line"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("RecordId") != m.end() && !m["RecordId"].empty()) {
      recordId = make_shared<long>(boost::any_cast<long>(m["RecordId"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("Rr") != m.end() && !m["Rr"].empty()) {
      rr = make_shared<string>(boost::any_cast<string>(m["Rr"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Ttl") != m.end() && !m["Ttl"].empty()) {
      ttl = make_shared<long>(boost::any_cast<long>(m["Ttl"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("UpdateTimestamp") != m.end() && !m["UpdateTimestamp"].empty()) {
      updateTimestamp = make_shared<long>(boost::any_cast<long>(m["UpdateTimestamp"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
    if (m.find("Weight") != m.end() && !m["Weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["Weight"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeZoneRecordsResponseBodyRecordsRecord() = default;
};
class DescribeZoneRecordsResponseBodyRecords : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeZoneRecordsResponseBodyRecordsRecord>> record{};

  DescribeZoneRecordsResponseBodyRecords() {}

  explicit DescribeZoneRecordsResponseBodyRecords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (record) {
      vector<boost::any> temp1;
      for(auto item1:*record){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Record"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Record") != m.end() && !m["Record"].empty()) {
      if (typeid(vector<boost::any>) == m["Record"].type()) {
        vector<DescribeZoneRecordsResponseBodyRecordsRecord> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Record"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeZoneRecordsResponseBodyRecordsRecord model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        record = make_shared<vector<DescribeZoneRecordsResponseBodyRecordsRecord>>(expect1);
      }
    }
  }


  virtual ~DescribeZoneRecordsResponseBodyRecords() = default;
};
class DescribeZoneRecordsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<DescribeZoneRecordsResponseBodyRecords> records{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalItems{};
  shared_ptr<long> totalPages{};

  DescribeZoneRecordsResponseBody() {}

  explicit DescribeZoneRecordsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (records) {
      res["Records"] = records ? boost::any(records->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalItems) {
      res["TotalItems"] = boost::any(*totalItems);
    }
    if (totalPages) {
      res["TotalPages"] = boost::any(*totalPages);
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
    if (m.find("Records") != m.end() && !m["Records"].empty()) {
      if (typeid(map<string, boost::any>) == m["Records"].type()) {
        DescribeZoneRecordsResponseBodyRecords model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Records"]));
        records = make_shared<DescribeZoneRecordsResponseBodyRecords>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalItems") != m.end() && !m["TotalItems"].empty()) {
      totalItems = make_shared<long>(boost::any_cast<long>(m["TotalItems"]));
    }
    if (m.find("TotalPages") != m.end() && !m["TotalPages"].empty()) {
      totalPages = make_shared<long>(boost::any_cast<long>(m["TotalPages"]));
    }
  }


  virtual ~DescribeZoneRecordsResponseBody() = default;
};
class DescribeZoneRecordsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeZoneRecordsResponseBody> body{};

  DescribeZoneRecordsResponse() {}

  explicit DescribeZoneRecordsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeZoneRecordsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeZoneRecordsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeZoneRecordsResponse() = default;
};
class DescribeZoneVpcTreeRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> userClientIp{};

  DescribeZoneVpcTreeRequest() {}

  explicit DescribeZoneVpcTreeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~DescribeZoneVpcTreeRequest() = default;
};
class DescribeZoneVpcTreeResponseBodyZonesZoneVpcsVpc : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> regionName{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vpcName{};
  shared_ptr<string> vpcType{};

  DescribeZoneVpcTreeResponseBodyZonesZoneVpcsVpc() {}

  explicit DescribeZoneVpcTreeResponseBodyZonesZoneVpcsVpc(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (regionName) {
      res["RegionName"] = boost::any(*regionName);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vpcName) {
      res["VpcName"] = boost::any(*vpcName);
    }
    if (vpcType) {
      res["VpcType"] = boost::any(*vpcType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RegionName") != m.end() && !m["RegionName"].empty()) {
      regionName = make_shared<string>(boost::any_cast<string>(m["RegionName"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VpcName") != m.end() && !m["VpcName"].empty()) {
      vpcName = make_shared<string>(boost::any_cast<string>(m["VpcName"]));
    }
    if (m.find("VpcType") != m.end() && !m["VpcType"].empty()) {
      vpcType = make_shared<string>(boost::any_cast<string>(m["VpcType"]));
    }
  }


  virtual ~DescribeZoneVpcTreeResponseBodyZonesZoneVpcsVpc() = default;
};
class DescribeZoneVpcTreeResponseBodyZonesZoneVpcs : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeZoneVpcTreeResponseBodyZonesZoneVpcsVpc>> vpc{};

  DescribeZoneVpcTreeResponseBodyZonesZoneVpcs() {}

  explicit DescribeZoneVpcTreeResponseBodyZonesZoneVpcs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vpc) {
      vector<boost::any> temp1;
      for(auto item1:*vpc){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Vpc"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Vpc") != m.end() && !m["Vpc"].empty()) {
      if (typeid(vector<boost::any>) == m["Vpc"].type()) {
        vector<DescribeZoneVpcTreeResponseBodyZonesZoneVpcsVpc> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Vpc"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeZoneVpcTreeResponseBodyZonesZoneVpcsVpc model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        vpc = make_shared<vector<DescribeZoneVpcTreeResponseBodyZonesZoneVpcsVpc>>(expect1);
      }
    }
  }


  virtual ~DescribeZoneVpcTreeResponseBodyZonesZoneVpcs() = default;
};
class DescribeZoneVpcTreeResponseBodyZonesZone : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<long> createTimestamp{};
  shared_ptr<string> creator{};
  shared_ptr<string> creatorType{};
  shared_ptr<string> dnsGroup{};
  shared_ptr<bool> dnsGroupChanging{};
  shared_ptr<bool> isPtr{};
  shared_ptr<long> recordCount{};
  shared_ptr<string> remark{};
  shared_ptr<string> updateTime{};
  shared_ptr<long> updateTimestamp{};
  shared_ptr<DescribeZoneVpcTreeResponseBodyZonesZoneVpcs> vpcs{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> zoneName{};
  shared_ptr<string> zoneTag{};
  shared_ptr<string> zoneType{};

  DescribeZoneVpcTreeResponseBodyZonesZone() {}

  explicit DescribeZoneVpcTreeResponseBodyZonesZone(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (createTimestamp) {
      res["CreateTimestamp"] = boost::any(*createTimestamp);
    }
    if (creator) {
      res["Creator"] = boost::any(*creator);
    }
    if (creatorType) {
      res["CreatorType"] = boost::any(*creatorType);
    }
    if (dnsGroup) {
      res["DnsGroup"] = boost::any(*dnsGroup);
    }
    if (dnsGroupChanging) {
      res["DnsGroupChanging"] = boost::any(*dnsGroupChanging);
    }
    if (isPtr) {
      res["IsPtr"] = boost::any(*isPtr);
    }
    if (recordCount) {
      res["RecordCount"] = boost::any(*recordCount);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (updateTimestamp) {
      res["UpdateTimestamp"] = boost::any(*updateTimestamp);
    }
    if (vpcs) {
      res["Vpcs"] = vpcs ? boost::any(vpcs->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (zoneName) {
      res["ZoneName"] = boost::any(*zoneName);
    }
    if (zoneTag) {
      res["ZoneTag"] = boost::any(*zoneTag);
    }
    if (zoneType) {
      res["ZoneType"] = boost::any(*zoneType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CreateTimestamp") != m.end() && !m["CreateTimestamp"].empty()) {
      createTimestamp = make_shared<long>(boost::any_cast<long>(m["CreateTimestamp"]));
    }
    if (m.find("Creator") != m.end() && !m["Creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["Creator"]));
    }
    if (m.find("CreatorType") != m.end() && !m["CreatorType"].empty()) {
      creatorType = make_shared<string>(boost::any_cast<string>(m["CreatorType"]));
    }
    if (m.find("DnsGroup") != m.end() && !m["DnsGroup"].empty()) {
      dnsGroup = make_shared<string>(boost::any_cast<string>(m["DnsGroup"]));
    }
    if (m.find("DnsGroupChanging") != m.end() && !m["DnsGroupChanging"].empty()) {
      dnsGroupChanging = make_shared<bool>(boost::any_cast<bool>(m["DnsGroupChanging"]));
    }
    if (m.find("IsPtr") != m.end() && !m["IsPtr"].empty()) {
      isPtr = make_shared<bool>(boost::any_cast<bool>(m["IsPtr"]));
    }
    if (m.find("RecordCount") != m.end() && !m["RecordCount"].empty()) {
      recordCount = make_shared<long>(boost::any_cast<long>(m["RecordCount"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("UpdateTimestamp") != m.end() && !m["UpdateTimestamp"].empty()) {
      updateTimestamp = make_shared<long>(boost::any_cast<long>(m["UpdateTimestamp"]));
    }
    if (m.find("Vpcs") != m.end() && !m["Vpcs"].empty()) {
      if (typeid(map<string, boost::any>) == m["Vpcs"].type()) {
        DescribeZoneVpcTreeResponseBodyZonesZoneVpcs model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Vpcs"]));
        vpcs = make_shared<DescribeZoneVpcTreeResponseBodyZonesZoneVpcs>(model1);
      }
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("ZoneName") != m.end() && !m["ZoneName"].empty()) {
      zoneName = make_shared<string>(boost::any_cast<string>(m["ZoneName"]));
    }
    if (m.find("ZoneTag") != m.end() && !m["ZoneTag"].empty()) {
      zoneTag = make_shared<string>(boost::any_cast<string>(m["ZoneTag"]));
    }
    if (m.find("ZoneType") != m.end() && !m["ZoneType"].empty()) {
      zoneType = make_shared<string>(boost::any_cast<string>(m["ZoneType"]));
    }
  }


  virtual ~DescribeZoneVpcTreeResponseBodyZonesZone() = default;
};
class DescribeZoneVpcTreeResponseBodyZones : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeZoneVpcTreeResponseBodyZonesZone>> zone{};

  DescribeZoneVpcTreeResponseBodyZones() {}

  explicit DescribeZoneVpcTreeResponseBodyZones(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (zone) {
      vector<boost::any> temp1;
      for(auto item1:*zone){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Zone"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Zone") != m.end() && !m["Zone"].empty()) {
      if (typeid(vector<boost::any>) == m["Zone"].type()) {
        vector<DescribeZoneVpcTreeResponseBodyZonesZone> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Zone"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeZoneVpcTreeResponseBodyZonesZone model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        zone = make_shared<vector<DescribeZoneVpcTreeResponseBodyZonesZone>>(expect1);
      }
    }
  }


  virtual ~DescribeZoneVpcTreeResponseBodyZones() = default;
};
class DescribeZoneVpcTreeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeZoneVpcTreeResponseBodyZones> zones{};

  DescribeZoneVpcTreeResponseBody() {}

  explicit DescribeZoneVpcTreeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (zones) {
      res["Zones"] = zones ? boost::any(zones->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Zones") != m.end() && !m["Zones"].empty()) {
      if (typeid(map<string, boost::any>) == m["Zones"].type()) {
        DescribeZoneVpcTreeResponseBodyZones model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Zones"]));
        zones = make_shared<DescribeZoneVpcTreeResponseBodyZones>(model1);
      }
    }
  }


  virtual ~DescribeZoneVpcTreeResponseBody() = default;
};
class DescribeZoneVpcTreeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeZoneVpcTreeResponseBody> body{};

  DescribeZoneVpcTreeResponse() {}

  explicit DescribeZoneVpcTreeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeZoneVpcTreeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeZoneVpcTreeResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeZoneVpcTreeResponse() = default;
};
class DescribeZonesRequestResourceTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeZonesRequestResourceTag() {}

  explicit DescribeZonesRequestResourceTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeZonesRequestResourceTag() = default;
};
class DescribeZonesRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyword{};
  shared_ptr<string> lang{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> queryRegionId{};
  shared_ptr<string> queryVpcId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<DescribeZonesRequestResourceTag>> resourceTag{};
  shared_ptr<string> searchMode{};
  shared_ptr<vector<string>> zoneTag{};
  shared_ptr<string> zoneType{};

  DescribeZonesRequest() {}

  explicit DescribeZonesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (queryRegionId) {
      res["QueryRegionId"] = boost::any(*queryRegionId);
    }
    if (queryVpcId) {
      res["QueryVpcId"] = boost::any(*queryVpcId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceTag) {
      vector<boost::any> temp1;
      for(auto item1:*resourceTag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResourceTag"] = boost::any(temp1);
    }
    if (searchMode) {
      res["SearchMode"] = boost::any(*searchMode);
    }
    if (zoneTag) {
      res["ZoneTag"] = boost::any(*zoneTag);
    }
    if (zoneType) {
      res["ZoneType"] = boost::any(*zoneType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("QueryRegionId") != m.end() && !m["QueryRegionId"].empty()) {
      queryRegionId = make_shared<string>(boost::any_cast<string>(m["QueryRegionId"]));
    }
    if (m.find("QueryVpcId") != m.end() && !m["QueryVpcId"].empty()) {
      queryVpcId = make_shared<string>(boost::any_cast<string>(m["QueryVpcId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceTag") != m.end() && !m["ResourceTag"].empty()) {
      if (typeid(vector<boost::any>) == m["ResourceTag"].type()) {
        vector<DescribeZonesRequestResourceTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResourceTag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeZonesRequestResourceTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resourceTag = make_shared<vector<DescribeZonesRequestResourceTag>>(expect1);
      }
    }
    if (m.find("SearchMode") != m.end() && !m["SearchMode"].empty()) {
      searchMode = make_shared<string>(boost::any_cast<string>(m["SearchMode"]));
    }
    if (m.find("ZoneTag") != m.end() && !m["ZoneTag"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ZoneTag"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ZoneTag"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      zoneTag = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ZoneType") != m.end() && !m["ZoneType"].empty()) {
      zoneType = make_shared<string>(boost::any_cast<string>(m["ZoneType"]));
    }
  }


  virtual ~DescribeZonesRequest() = default;
};
class DescribeZonesResponseBodyZonesZoneResourceTagsResourceTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeZonesResponseBodyZonesZoneResourceTagsResourceTag() {}

  explicit DescribeZonesResponseBodyZonesZoneResourceTagsResourceTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeZonesResponseBodyZonesZoneResourceTagsResourceTag() = default;
};
class DescribeZonesResponseBodyZonesZoneResourceTags : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeZonesResponseBodyZonesZoneResourceTagsResourceTag>> resourceTag{};

  DescribeZonesResponseBodyZonesZoneResourceTags() {}

  explicit DescribeZonesResponseBodyZonesZoneResourceTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceTag) {
      vector<boost::any> temp1;
      for(auto item1:*resourceTag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResourceTag"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceTag") != m.end() && !m["ResourceTag"].empty()) {
      if (typeid(vector<boost::any>) == m["ResourceTag"].type()) {
        vector<DescribeZonesResponseBodyZonesZoneResourceTagsResourceTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResourceTag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeZonesResponseBodyZonesZoneResourceTagsResourceTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resourceTag = make_shared<vector<DescribeZonesResponseBodyZonesZoneResourceTagsResourceTag>>(expect1);
      }
    }
  }


  virtual ~DescribeZonesResponseBodyZonesZoneResourceTags() = default;
};
class DescribeZonesResponseBodyZonesZone : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<long> createTimestamp{};
  shared_ptr<string> creator{};
  shared_ptr<string> creatorSubType{};
  shared_ptr<string> dnsGroup{};
  shared_ptr<bool> dnsGroupChanging{};
  shared_ptr<bool> isPtr{};
  shared_ptr<string> proxyPattern{};
  shared_ptr<long> recordCount{};
  shared_ptr<string> remark{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<DescribeZonesResponseBodyZonesZoneResourceTags> resourceTags{};
  shared_ptr<string> updateTime{};
  shared_ptr<long> updateTimestamp{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> zoneName{};
  shared_ptr<string> zoneTag{};
  shared_ptr<string> zoneType{};

  DescribeZonesResponseBodyZonesZone() {}

  explicit DescribeZonesResponseBodyZonesZone(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (createTimestamp) {
      res["CreateTimestamp"] = boost::any(*createTimestamp);
    }
    if (creator) {
      res["Creator"] = boost::any(*creator);
    }
    if (creatorSubType) {
      res["CreatorSubType"] = boost::any(*creatorSubType);
    }
    if (dnsGroup) {
      res["DnsGroup"] = boost::any(*dnsGroup);
    }
    if (dnsGroupChanging) {
      res["DnsGroupChanging"] = boost::any(*dnsGroupChanging);
    }
    if (isPtr) {
      res["IsPtr"] = boost::any(*isPtr);
    }
    if (proxyPattern) {
      res["ProxyPattern"] = boost::any(*proxyPattern);
    }
    if (recordCount) {
      res["RecordCount"] = boost::any(*recordCount);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceTags) {
      res["ResourceTags"] = resourceTags ? boost::any(resourceTags->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (updateTimestamp) {
      res["UpdateTimestamp"] = boost::any(*updateTimestamp);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (zoneName) {
      res["ZoneName"] = boost::any(*zoneName);
    }
    if (zoneTag) {
      res["ZoneTag"] = boost::any(*zoneTag);
    }
    if (zoneType) {
      res["ZoneType"] = boost::any(*zoneType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CreateTimestamp") != m.end() && !m["CreateTimestamp"].empty()) {
      createTimestamp = make_shared<long>(boost::any_cast<long>(m["CreateTimestamp"]));
    }
    if (m.find("Creator") != m.end() && !m["Creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["Creator"]));
    }
    if (m.find("CreatorSubType") != m.end() && !m["CreatorSubType"].empty()) {
      creatorSubType = make_shared<string>(boost::any_cast<string>(m["CreatorSubType"]));
    }
    if (m.find("DnsGroup") != m.end() && !m["DnsGroup"].empty()) {
      dnsGroup = make_shared<string>(boost::any_cast<string>(m["DnsGroup"]));
    }
    if (m.find("DnsGroupChanging") != m.end() && !m["DnsGroupChanging"].empty()) {
      dnsGroupChanging = make_shared<bool>(boost::any_cast<bool>(m["DnsGroupChanging"]));
    }
    if (m.find("IsPtr") != m.end() && !m["IsPtr"].empty()) {
      isPtr = make_shared<bool>(boost::any_cast<bool>(m["IsPtr"]));
    }
    if (m.find("ProxyPattern") != m.end() && !m["ProxyPattern"].empty()) {
      proxyPattern = make_shared<string>(boost::any_cast<string>(m["ProxyPattern"]));
    }
    if (m.find("RecordCount") != m.end() && !m["RecordCount"].empty()) {
      recordCount = make_shared<long>(boost::any_cast<long>(m["RecordCount"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceTags") != m.end() && !m["ResourceTags"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourceTags"].type()) {
        DescribeZonesResponseBodyZonesZoneResourceTags model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceTags"]));
        resourceTags = make_shared<DescribeZonesResponseBodyZonesZoneResourceTags>(model1);
      }
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("UpdateTimestamp") != m.end() && !m["UpdateTimestamp"].empty()) {
      updateTimestamp = make_shared<long>(boost::any_cast<long>(m["UpdateTimestamp"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("ZoneName") != m.end() && !m["ZoneName"].empty()) {
      zoneName = make_shared<string>(boost::any_cast<string>(m["ZoneName"]));
    }
    if (m.find("ZoneTag") != m.end() && !m["ZoneTag"].empty()) {
      zoneTag = make_shared<string>(boost::any_cast<string>(m["ZoneTag"]));
    }
    if (m.find("ZoneType") != m.end() && !m["ZoneType"].empty()) {
      zoneType = make_shared<string>(boost::any_cast<string>(m["ZoneType"]));
    }
  }


  virtual ~DescribeZonesResponseBodyZonesZone() = default;
};
class DescribeZonesResponseBodyZones : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeZonesResponseBodyZonesZone>> zone{};

  DescribeZonesResponseBodyZones() {}

  explicit DescribeZonesResponseBodyZones(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (zone) {
      vector<boost::any> temp1;
      for(auto item1:*zone){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Zone"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Zone") != m.end() && !m["Zone"].empty()) {
      if (typeid(vector<boost::any>) == m["Zone"].type()) {
        vector<DescribeZonesResponseBodyZonesZone> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Zone"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeZonesResponseBodyZonesZone model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        zone = make_shared<vector<DescribeZonesResponseBodyZonesZone>>(expect1);
      }
    }
  }


  virtual ~DescribeZonesResponseBodyZones() = default;
};
class DescribeZonesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalItems{};
  shared_ptr<long> totalPages{};
  shared_ptr<DescribeZonesResponseBodyZones> zones{};

  DescribeZonesResponseBody() {}

  explicit DescribeZonesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (totalItems) {
      res["TotalItems"] = boost::any(*totalItems);
    }
    if (totalPages) {
      res["TotalPages"] = boost::any(*totalPages);
    }
    if (zones) {
      res["Zones"] = zones ? boost::any(zones->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("TotalItems") != m.end() && !m["TotalItems"].empty()) {
      totalItems = make_shared<long>(boost::any_cast<long>(m["TotalItems"]));
    }
    if (m.find("TotalPages") != m.end() && !m["TotalPages"].empty()) {
      totalPages = make_shared<long>(boost::any_cast<long>(m["TotalPages"]));
    }
    if (m.find("Zones") != m.end() && !m["Zones"].empty()) {
      if (typeid(map<string, boost::any>) == m["Zones"].type()) {
        DescribeZonesResponseBodyZones model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Zones"]));
        zones = make_shared<DescribeZonesResponseBodyZones>(model1);
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
  shared_ptr<string> lang{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<long> size{};
  shared_ptr<vector<ListTagResourcesRequestTag>> tag{};

  ListTagResourcesRequest() {}

  explicit ListTagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
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
    if (size) {
      res["Size"] = boost::any(*size);
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
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
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
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
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
  shared_ptr<string> lang{};
  shared_ptr<string> newResourceGroupId{};
  shared_ptr<string> resourceId{};

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
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (newResourceGroupId) {
      res["NewResourceGroupId"] = boost::any(*newResourceGroupId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("NewResourceGroupId") != m.end() && !m["NewResourceGroupId"].empty()) {
      newResourceGroupId = make_shared<string>(boost::any_cast<string>(m["NewResourceGroupId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
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
class SetProxyPatternRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> lang{};
  shared_ptr<string> proxyPattern{};
  shared_ptr<string> userClientIp{};
  shared_ptr<string> zoneId{};

  SetProxyPatternRequest() {}

  explicit SetProxyPatternRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (proxyPattern) {
      res["ProxyPattern"] = boost::any(*proxyPattern);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("ProxyPattern") != m.end() && !m["ProxyPattern"].empty()) {
      proxyPattern = make_shared<string>(boost::any_cast<string>(m["ProxyPattern"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~SetProxyPatternRequest() = default;
};
class SetProxyPatternResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> zoneId{};

  SetProxyPatternResponseBody() {}

  explicit SetProxyPatternResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~SetProxyPatternResponseBody() = default;
};
class SetProxyPatternResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetProxyPatternResponseBody> body{};

  SetProxyPatternResponse() {}

  explicit SetProxyPatternResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetProxyPatternResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetProxyPatternResponseBody>(model1);
      }
    }
  }


  virtual ~SetProxyPatternResponse() = default;
};
class SetZoneRecordStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> lang{};
  shared_ptr<long> recordId{};
  shared_ptr<string> status{};
  shared_ptr<string> userClientIp{};

  SetZoneRecordStatusRequest() {}

  explicit SetZoneRecordStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (recordId) {
      res["RecordId"] = boost::any(*recordId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("RecordId") != m.end() && !m["RecordId"].empty()) {
      recordId = make_shared<long>(boost::any_cast<long>(m["RecordId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
  }


  virtual ~SetZoneRecordStatusRequest() = default;
};
class SetZoneRecordStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> recordId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  SetZoneRecordStatusResponseBody() {}

  explicit SetZoneRecordStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (recordId) {
      res["RecordId"] = boost::any(*recordId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RecordId") != m.end() && !m["RecordId"].empty()) {
      recordId = make_shared<long>(boost::any_cast<long>(m["RecordId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~SetZoneRecordStatusResponseBody() = default;
};
class SetZoneRecordStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetZoneRecordStatusResponseBody> body{};

  SetZoneRecordStatusResponse() {}

  explicit SetZoneRecordStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetZoneRecordStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetZoneRecordStatusResponseBody>(model1);
      }
    }
  }


  virtual ~SetZoneRecordStatusResponse() = default;
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
  shared_ptr<string> lang{};
  shared_ptr<bool> overWrite{};
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
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (overWrite) {
      res["OverWrite"] = boost::any(*overWrite);
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
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("OverWrite") != m.end() && !m["OverWrite"].empty()) {
      overWrite = make_shared<bool>(boost::any_cast<bool>(m["OverWrite"]));
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
  shared_ptr<string> lang{};
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
    if (lang) {
      res["Lang"] = boost::any(*lang);
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
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
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
class UpdateRecordRemarkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> lang{};
  shared_ptr<long> recordId{};
  shared_ptr<string> remark{};

  UpdateRecordRemarkRequest() {}

  explicit UpdateRecordRemarkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (recordId) {
      res["RecordId"] = boost::any(*recordId);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("RecordId") != m.end() && !m["RecordId"].empty()) {
      recordId = make_shared<long>(boost::any_cast<long>(m["RecordId"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
  }


  virtual ~UpdateRecordRemarkRequest() = default;
};
class UpdateRecordRemarkResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> recordId{};
  shared_ptr<string> requestId{};

  UpdateRecordRemarkResponseBody() {}

  explicit UpdateRecordRemarkResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (recordId) {
      res["RecordId"] = boost::any(*recordId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RecordId") != m.end() && !m["RecordId"].empty()) {
      recordId = make_shared<long>(boost::any_cast<long>(m["RecordId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateRecordRemarkResponseBody() = default;
};
class UpdateRecordRemarkResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateRecordRemarkResponseBody> body{};

  UpdateRecordRemarkResponse() {}

  explicit UpdateRecordRemarkResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateRecordRemarkResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateRecordRemarkResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateRecordRemarkResponse() = default;
};
class UpdateResolverEndpointRequestIpConfig : public Darabonba::Model {
public:
  shared_ptr<string> azId{};
  shared_ptr<string> cidrBlock{};
  shared_ptr<string> ip{};
  shared_ptr<string> vSwitchId{};

  UpdateResolverEndpointRequestIpConfig() {}

  explicit UpdateResolverEndpointRequestIpConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (azId) {
      res["AzId"] = boost::any(*azId);
    }
    if (cidrBlock) {
      res["CidrBlock"] = boost::any(*cidrBlock);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AzId") != m.end() && !m["AzId"].empty()) {
      azId = make_shared<string>(boost::any_cast<string>(m["AzId"]));
    }
    if (m.find("CidrBlock") != m.end() && !m["CidrBlock"].empty()) {
      cidrBlock = make_shared<string>(boost::any_cast<string>(m["CidrBlock"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
  }


  virtual ~UpdateResolverEndpointRequestIpConfig() = default;
};
class UpdateResolverEndpointRequest : public Darabonba::Model {
public:
  shared_ptr<string> endpointId{};
  shared_ptr<vector<UpdateResolverEndpointRequestIpConfig>> ipConfig{};
  shared_ptr<string> lang{};
  shared_ptr<string> name{};

  UpdateResolverEndpointRequest() {}

  explicit UpdateResolverEndpointRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endpointId) {
      res["EndpointId"] = boost::any(*endpointId);
    }
    if (ipConfig) {
      vector<boost::any> temp1;
      for(auto item1:*ipConfig){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["IpConfig"] = boost::any(temp1);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndpointId") != m.end() && !m["EndpointId"].empty()) {
      endpointId = make_shared<string>(boost::any_cast<string>(m["EndpointId"]));
    }
    if (m.find("IpConfig") != m.end() && !m["IpConfig"].empty()) {
      if (typeid(vector<boost::any>) == m["IpConfig"].type()) {
        vector<UpdateResolverEndpointRequestIpConfig> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["IpConfig"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateResolverEndpointRequestIpConfig model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ipConfig = make_shared<vector<UpdateResolverEndpointRequestIpConfig>>(expect1);
      }
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~UpdateResolverEndpointRequest() = default;
};
class UpdateResolverEndpointResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateResolverEndpointResponseBody() {}

  explicit UpdateResolverEndpointResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateResolverEndpointResponseBody() = default;
};
class UpdateResolverEndpointResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateResolverEndpointResponseBody> body{};

  UpdateResolverEndpointResponse() {}

  explicit UpdateResolverEndpointResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateResolverEndpointResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateResolverEndpointResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateResolverEndpointResponse() = default;
};
class UpdateResolverRuleRequestForwardIp : public Darabonba::Model {
public:
  shared_ptr<string> ip{};
  shared_ptr<long> port{};

  UpdateResolverRuleRequestForwardIp() {}

  explicit UpdateResolverRuleRequestForwardIp(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
  }


  virtual ~UpdateResolverRuleRequestForwardIp() = default;
};
class UpdateResolverRuleRequest : public Darabonba::Model {
public:
  shared_ptr<vector<UpdateResolverRuleRequestForwardIp>> forwardIp{};
  shared_ptr<string> lang{};
  shared_ptr<string> name{};
  shared_ptr<string> ruleId{};

  UpdateResolverRuleRequest() {}

  explicit UpdateResolverRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (forwardIp) {
      vector<boost::any> temp1;
      for(auto item1:*forwardIp){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ForwardIp"] = boost::any(temp1);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ForwardIp") != m.end() && !m["ForwardIp"].empty()) {
      if (typeid(vector<boost::any>) == m["ForwardIp"].type()) {
        vector<UpdateResolverRuleRequestForwardIp> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ForwardIp"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateResolverRuleRequestForwardIp model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        forwardIp = make_shared<vector<UpdateResolverRuleRequestForwardIp>>(expect1);
      }
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
  }


  virtual ~UpdateResolverRuleRequest() = default;
};
class UpdateResolverRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateResolverRuleResponseBody() {}

  explicit UpdateResolverRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateResolverRuleResponseBody() = default;
};
class UpdateResolverRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateResolverRuleResponseBody> body{};

  UpdateResolverRuleResponse() {}

  explicit UpdateResolverRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateResolverRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateResolverRuleResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateResolverRuleResponse() = default;
};
class UpdateSyncEcsHostTaskRequestRegion : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> userId{};

  UpdateSyncEcsHostTaskRequestRegion() {}

  explicit UpdateSyncEcsHostTaskRequestRegion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["UserId"]));
    }
  }


  virtual ~UpdateSyncEcsHostTaskRequestRegion() = default;
};
class UpdateSyncEcsHostTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<vector<UpdateSyncEcsHostTaskRequestRegion>> region{};
  shared_ptr<string> status{};
  shared_ptr<string> zoneId{};

  UpdateSyncEcsHostTaskRequest() {}

  explicit UpdateSyncEcsHostTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (region) {
      vector<boost::any> temp1;
      for(auto item1:*region){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Region"] = boost::any(temp1);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      if (typeid(vector<boost::any>) == m["Region"].type()) {
        vector<UpdateSyncEcsHostTaskRequestRegion> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Region"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateSyncEcsHostTaskRequestRegion model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        region = make_shared<vector<UpdateSyncEcsHostTaskRequestRegion>>(expect1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~UpdateSyncEcsHostTaskRequest() = default;
};
class UpdateSyncEcsHostTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateSyncEcsHostTaskResponseBody() {}

  explicit UpdateSyncEcsHostTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateSyncEcsHostTaskResponseBody() = default;
};
class UpdateSyncEcsHostTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateSyncEcsHostTaskResponseBody> body{};

  UpdateSyncEcsHostTaskResponse() {}

  explicit UpdateSyncEcsHostTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateSyncEcsHostTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateSyncEcsHostTaskResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateSyncEcsHostTaskResponse() = default;
};
class UpdateZoneRecordRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> lang{};
  shared_ptr<string> line{};
  shared_ptr<long> priority{};
  shared_ptr<long> recordId{};
  shared_ptr<string> rr{};
  shared_ptr<long> ttl{};
  shared_ptr<string> type{};
  shared_ptr<string> userClientIp{};
  shared_ptr<string> value{};
  shared_ptr<long> weight{};

  UpdateZoneRecordRequest() {}

  explicit UpdateZoneRecordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (line) {
      res["Line"] = boost::any(*line);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (recordId) {
      res["RecordId"] = boost::any(*recordId);
    }
    if (rr) {
      res["Rr"] = boost::any(*rr);
    }
    if (ttl) {
      res["Ttl"] = boost::any(*ttl);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    if (weight) {
      res["Weight"] = boost::any(*weight);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("Line") != m.end() && !m["Line"].empty()) {
      line = make_shared<string>(boost::any_cast<string>(m["Line"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("RecordId") != m.end() && !m["RecordId"].empty()) {
      recordId = make_shared<long>(boost::any_cast<long>(m["RecordId"]));
    }
    if (m.find("Rr") != m.end() && !m["Rr"].empty()) {
      rr = make_shared<string>(boost::any_cast<string>(m["Rr"]));
    }
    if (m.find("Ttl") != m.end() && !m["Ttl"].empty()) {
      ttl = make_shared<long>(boost::any_cast<long>(m["Ttl"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
    if (m.find("Weight") != m.end() && !m["Weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["Weight"]));
    }
  }


  virtual ~UpdateZoneRecordRequest() = default;
};
class UpdateZoneRecordResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> recordId{};
  shared_ptr<string> requestId{};

  UpdateZoneRecordResponseBody() {}

  explicit UpdateZoneRecordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (recordId) {
      res["RecordId"] = boost::any(*recordId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RecordId") != m.end() && !m["RecordId"].empty()) {
      recordId = make_shared<long>(boost::any_cast<long>(m["RecordId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateZoneRecordResponseBody() = default;
};
class UpdateZoneRecordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateZoneRecordResponseBody> body{};

  UpdateZoneRecordResponse() {}

  explicit UpdateZoneRecordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateZoneRecordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateZoneRecordResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateZoneRecordResponse() = default;
};
class UpdateZoneRemarkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> lang{};
  shared_ptr<string> remark{};
  shared_ptr<string> userClientIp{};
  shared_ptr<string> zoneId{};

  UpdateZoneRemarkRequest() {}

  explicit UpdateZoneRemarkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~UpdateZoneRemarkRequest() = default;
};
class UpdateZoneRemarkResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> zoneId{};

  UpdateZoneRemarkResponseBody() {}

  explicit UpdateZoneRemarkResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~UpdateZoneRemarkResponseBody() = default;
};
class UpdateZoneRemarkResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateZoneRemarkResponseBody> body{};

  UpdateZoneRemarkResponse() {}

  explicit UpdateZoneRemarkResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateZoneRemarkResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateZoneRemarkResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateZoneRemarkResponse() = default;
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
  AddResolverEndpointResponse addResolverEndpointWithOptions(shared_ptr<AddResolverEndpointRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddResolverEndpointResponse addResolverEndpoint(shared_ptr<AddResolverEndpointRequest> request);
  AddResolverRuleResponse addResolverRuleWithOptions(shared_ptr<AddResolverRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddResolverRuleResponse addResolverRule(shared_ptr<AddResolverRuleRequest> request);
  AddUserVpcAuthorizationResponse addUserVpcAuthorizationWithOptions(shared_ptr<AddUserVpcAuthorizationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddUserVpcAuthorizationResponse addUserVpcAuthorization(shared_ptr<AddUserVpcAuthorizationRequest> request);
  AddZoneResponse addZoneWithOptions(shared_ptr<AddZoneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddZoneResponse addZone(shared_ptr<AddZoneRequest> request);
  AddZoneRecordResponse addZoneRecordWithOptions(shared_ptr<AddZoneRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddZoneRecordResponse addZoneRecord(shared_ptr<AddZoneRecordRequest> request);
  BindResolverRuleVpcResponse bindResolverRuleVpcWithOptions(shared_ptr<BindResolverRuleVpcRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BindResolverRuleVpcResponse bindResolverRuleVpc(shared_ptr<BindResolverRuleVpcRequest> request);
  BindZoneVpcResponse bindZoneVpcWithOptions(shared_ptr<BindZoneVpcRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BindZoneVpcResponse bindZoneVpc(shared_ptr<BindZoneVpcRequest> request);
  CheckZoneNameResponse checkZoneNameWithOptions(shared_ptr<CheckZoneNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckZoneNameResponse checkZoneName(shared_ptr<CheckZoneNameRequest> request);
  DeleteResolverEndpointResponse deleteResolverEndpointWithOptions(shared_ptr<DeleteResolverEndpointRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteResolverEndpointResponse deleteResolverEndpoint(shared_ptr<DeleteResolverEndpointRequest> request);
  DeleteResolverRuleResponse deleteResolverRuleWithOptions(shared_ptr<DeleteResolverRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteResolverRuleResponse deleteResolverRule(shared_ptr<DeleteResolverRuleRequest> request);
  DeleteUserVpcAuthorizationResponse deleteUserVpcAuthorizationWithOptions(shared_ptr<DeleteUserVpcAuthorizationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteUserVpcAuthorizationResponse deleteUserVpcAuthorization(shared_ptr<DeleteUserVpcAuthorizationRequest> request);
  DeleteZoneResponse deleteZoneWithOptions(shared_ptr<DeleteZoneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteZoneResponse deleteZone(shared_ptr<DeleteZoneRequest> request);
  DeleteZoneRecordResponse deleteZoneRecordWithOptions(shared_ptr<DeleteZoneRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteZoneRecordResponse deleteZoneRecord(shared_ptr<DeleteZoneRecordRequest> request);
  DescribeChangeLogsResponse describeChangeLogsWithOptions(shared_ptr<DescribeChangeLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeChangeLogsResponse describeChangeLogs(shared_ptr<DescribeChangeLogsRequest> request);
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions(shared_ptr<DescribeRegionsRequest> request);
  DescribeRequestGraphResponse describeRequestGraphWithOptions(shared_ptr<DescribeRequestGraphRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRequestGraphResponse describeRequestGraph(shared_ptr<DescribeRequestGraphRequest> request);
  DescribeResolverAvailableZonesResponse describeResolverAvailableZonesWithOptions(shared_ptr<DescribeResolverAvailableZonesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeResolverAvailableZonesResponse describeResolverAvailableZones(shared_ptr<DescribeResolverAvailableZonesRequest> request);
  DescribeResolverEndpointResponse describeResolverEndpointWithOptions(shared_ptr<DescribeResolverEndpointRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeResolverEndpointResponse describeResolverEndpoint(shared_ptr<DescribeResolverEndpointRequest> request);
  DescribeResolverEndpointsResponse describeResolverEndpointsWithOptions(shared_ptr<DescribeResolverEndpointsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeResolverEndpointsResponse describeResolverEndpoints(shared_ptr<DescribeResolverEndpointsRequest> request);
  DescribeResolverRuleResponse describeResolverRuleWithOptions(shared_ptr<DescribeResolverRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeResolverRuleResponse describeResolverRule(shared_ptr<DescribeResolverRuleRequest> request);
  DescribeResolverRulesResponse describeResolverRulesWithOptions(shared_ptr<DescribeResolverRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeResolverRulesResponse describeResolverRules(shared_ptr<DescribeResolverRulesRequest> request);
  DescribeStatisticSummaryResponse describeStatisticSummaryWithOptions(shared_ptr<DescribeStatisticSummaryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeStatisticSummaryResponse describeStatisticSummary(shared_ptr<DescribeStatisticSummaryRequest> request);
  DescribeSyncEcsHostTaskResponse describeSyncEcsHostTaskWithOptions(shared_ptr<DescribeSyncEcsHostTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSyncEcsHostTaskResponse describeSyncEcsHostTask(shared_ptr<DescribeSyncEcsHostTaskRequest> request);
  DescribeTagsResponse describeTagsWithOptions(shared_ptr<DescribeTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeTagsResponse describeTags(shared_ptr<DescribeTagsRequest> request);
  DescribeUserVpcAuthorizationsResponse describeUserVpcAuthorizationsWithOptions(shared_ptr<DescribeUserVpcAuthorizationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeUserVpcAuthorizationsResponse describeUserVpcAuthorizations(shared_ptr<DescribeUserVpcAuthorizationsRequest> request);
  DescribeZoneInfoResponse describeZoneInfoWithOptions(shared_ptr<DescribeZoneInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeZoneInfoResponse describeZoneInfo(shared_ptr<DescribeZoneInfoRequest> request);
  DescribeZoneRecordsResponse describeZoneRecordsWithOptions(shared_ptr<DescribeZoneRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeZoneRecordsResponse describeZoneRecords(shared_ptr<DescribeZoneRecordsRequest> request);
  DescribeZoneVpcTreeResponse describeZoneVpcTreeWithOptions(shared_ptr<DescribeZoneVpcTreeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeZoneVpcTreeResponse describeZoneVpcTree(shared_ptr<DescribeZoneVpcTreeRequest> request);
  DescribeZonesResponse describeZonesWithOptions(shared_ptr<DescribeZonesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeZonesResponse describeZones(shared_ptr<DescribeZonesRequest> request);
  ListTagResourcesResponse listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagResourcesResponse listTagResources(shared_ptr<ListTagResourcesRequest> request);
  MoveResourceGroupResponse moveResourceGroupWithOptions(shared_ptr<MoveResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  MoveResourceGroupResponse moveResourceGroup(shared_ptr<MoveResourceGroupRequest> request);
  SetProxyPatternResponse setProxyPatternWithOptions(shared_ptr<SetProxyPatternRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetProxyPatternResponse setProxyPattern(shared_ptr<SetProxyPatternRequest> request);
  SetZoneRecordStatusResponse setZoneRecordStatusWithOptions(shared_ptr<SetZoneRecordStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetZoneRecordStatusResponse setZoneRecordStatus(shared_ptr<SetZoneRecordStatusRequest> request);
  TagResourcesResponse tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TagResourcesResponse tagResources(shared_ptr<TagResourcesRequest> request);
  UntagResourcesResponse untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UntagResourcesResponse untagResources(shared_ptr<UntagResourcesRequest> request);
  UpdateRecordRemarkResponse updateRecordRemarkWithOptions(shared_ptr<UpdateRecordRemarkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateRecordRemarkResponse updateRecordRemark(shared_ptr<UpdateRecordRemarkRequest> request);
  UpdateResolverEndpointResponse updateResolverEndpointWithOptions(shared_ptr<UpdateResolverEndpointRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateResolverEndpointResponse updateResolverEndpoint(shared_ptr<UpdateResolverEndpointRequest> request);
  UpdateResolverRuleResponse updateResolverRuleWithOptions(shared_ptr<UpdateResolverRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateResolverRuleResponse updateResolverRule(shared_ptr<UpdateResolverRuleRequest> request);
  UpdateSyncEcsHostTaskResponse updateSyncEcsHostTaskWithOptions(shared_ptr<UpdateSyncEcsHostTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateSyncEcsHostTaskResponse updateSyncEcsHostTask(shared_ptr<UpdateSyncEcsHostTaskRequest> request);
  UpdateZoneRecordResponse updateZoneRecordWithOptions(shared_ptr<UpdateZoneRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateZoneRecordResponse updateZoneRecord(shared_ptr<UpdateZoneRecordRequest> request);
  UpdateZoneRemarkResponse updateZoneRemarkWithOptions(shared_ptr<UpdateZoneRemarkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateZoneRemarkResponse updateZoneRemark(shared_ptr<UpdateZoneRemarkRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Pvtz20180101

#endif
