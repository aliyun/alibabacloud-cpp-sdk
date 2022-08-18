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
  shared_ptr<long> statusCode{};
  shared_ptr<AddDNSAuthorizationRuleResponseBody> body{};

  AddDNSAuthorizationRuleResponse() {}

  explicit AddDNSAuthorizationRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<long> statusCode{};
  shared_ptr<AttachVpcToNetLinkResponseBody> body{};

  AttachVpcToNetLinkResponse() {}

  explicit AttachVpcToNetLinkResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> destinationPort{};
  shared_ptr<string> destinationType{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> name{};
  shared_ptr<string> policy{};
  shared_ptr<string> protocol{};
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
    if (destinationPort) {
      res["DestinationPort"] = boost::any(*destinationPort);
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
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
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
    if (m.find("DestinationPort") != m.end() && !m["DestinationPort"].empty()) {
      destinationPort = make_shared<string>(boost::any_cast<string>(m["DestinationPort"]));
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
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
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
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAuthorizationRuleResponseBody> body{};

  CreateAuthorizationRuleResponse() {}

  explicit CreateAuthorizationRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAuthorizationRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAuthorizationRuleResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAuthorizationRuleResponse() = default;
};
class CreateBatchOperateCardsTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> effectType{};
  shared_ptr<vector<string>> iccids{};
  shared_ptr<string> iccidsOssFilePath{};
  shared_ptr<string> name{};
  shared_ptr<string> operateType{};
  shared_ptr<string> regionId{};
  shared_ptr<long> threshold{};
  shared_ptr<vector<string>> wirelessCloudConnectorIds{};

  CreateBatchOperateCardsTaskRequest() {}

  explicit CreateBatchOperateCardsTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (effectType) {
      res["EffectType"] = boost::any(*effectType);
    }
    if (iccids) {
      res["Iccids"] = boost::any(*iccids);
    }
    if (iccidsOssFilePath) {
      res["IccidsOssFilePath"] = boost::any(*iccidsOssFilePath);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (operateType) {
      res["OperateType"] = boost::any(*operateType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (threshold) {
      res["Threshold"] = boost::any(*threshold);
    }
    if (wirelessCloudConnectorIds) {
      res["WirelessCloudConnectorIds"] = boost::any(*wirelessCloudConnectorIds);
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
    if (m.find("EffectType") != m.end() && !m["EffectType"].empty()) {
      effectType = make_shared<string>(boost::any_cast<string>(m["EffectType"]));
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
    if (m.find("IccidsOssFilePath") != m.end() && !m["IccidsOssFilePath"].empty()) {
      iccidsOssFilePath = make_shared<string>(boost::any_cast<string>(m["IccidsOssFilePath"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OperateType") != m.end() && !m["OperateType"].empty()) {
      operateType = make_shared<string>(boost::any_cast<string>(m["OperateType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Threshold") != m.end() && !m["Threshold"].empty()) {
      threshold = make_shared<long>(boost::any_cast<long>(m["Threshold"]));
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


  virtual ~CreateBatchOperateCardsTaskRequest() = default;
};
class CreateBatchOperateCardsTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> batchOperateCardsTaskId{};
  shared_ptr<string> operateResultOssFilePath{};
  shared_ptr<string> requestId{};

  CreateBatchOperateCardsTaskResponseBody() {}

  explicit CreateBatchOperateCardsTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (batchOperateCardsTaskId) {
      res["BatchOperateCardsTaskId"] = boost::any(*batchOperateCardsTaskId);
    }
    if (operateResultOssFilePath) {
      res["OperateResultOssFilePath"] = boost::any(*operateResultOssFilePath);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BatchOperateCardsTaskId") != m.end() && !m["BatchOperateCardsTaskId"].empty()) {
      batchOperateCardsTaskId = make_shared<string>(boost::any_cast<string>(m["BatchOperateCardsTaskId"]));
    }
    if (m.find("OperateResultOssFilePath") != m.end() && !m["OperateResultOssFilePath"].empty()) {
      operateResultOssFilePath = make_shared<string>(boost::any_cast<string>(m["OperateResultOssFilePath"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateBatchOperateCardsTaskResponseBody() = default;
};
class CreateBatchOperateCardsTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateBatchOperateCardsTaskResponseBody> body{};

  CreateBatchOperateCardsTaskResponse() {}

  explicit CreateBatchOperateCardsTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateBatchOperateCardsTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateBatchOperateCardsTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateBatchOperateCardsTaskResponse() = default;
};
class CreateIoTCloudConnectorBackhaulRouteRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> netLinkId{};
  shared_ptr<string> wirelessCloudConnectorId{};

  CreateIoTCloudConnectorBackhaulRouteRequest() {}

  explicit CreateIoTCloudConnectorBackhaulRouteRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateIoTCloudConnectorBackhaulRouteRequest() = default;
};
class CreateIoTCloudConnectorBackhaulRouteResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateIoTCloudConnectorBackhaulRouteResponseBody() {}

  explicit CreateIoTCloudConnectorBackhaulRouteResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateIoTCloudConnectorBackhaulRouteResponseBody() = default;
};
class CreateIoTCloudConnectorBackhaulRouteResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateIoTCloudConnectorBackhaulRouteResponseBody> body{};

  CreateIoTCloudConnectorBackhaulRouteResponse() {}

  explicit CreateIoTCloudConnectorBackhaulRouteResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateIoTCloudConnectorBackhaulRouteResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateIoTCloudConnectorBackhaulRouteResponseBody>(model1);
      }
    }
  }


  virtual ~CreateIoTCloudConnectorBackhaulRouteResponse() = default;
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
  shared_ptr<string> businessType{};
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
    if (businessType) {
      res["BusinessType"] = boost::any(*businessType);
    }
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
    if (m.find("BusinessType") != m.end() && !m["BusinessType"].empty()) {
      businessType = make_shared<string>(boost::any_cast<string>(m["BusinessType"]));
    }
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
  shared_ptr<long> statusCode{};
  shared_ptr<CreateWirelessCloudConnectorResponseBody> body{};

  CreateWirelessCloudConnectorResponse() {}

  explicit CreateWirelessCloudConnectorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteAuthorizationRuleResponseBody> body{};

  DeleteAuthorizationRuleResponse() {}

  explicit DeleteAuthorizationRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteAuthorizationRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAuthorizationRuleResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAuthorizationRuleResponse() = default;
};
class DeleteBatchOperateCardsTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> batchOperateCardsTaskId{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> regionId{};

  DeleteBatchOperateCardsTaskRequest() {}

  explicit DeleteBatchOperateCardsTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (batchOperateCardsTaskId) {
      res["BatchOperateCardsTaskId"] = boost::any(*batchOperateCardsTaskId);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BatchOperateCardsTaskId") != m.end() && !m["BatchOperateCardsTaskId"].empty()) {
      batchOperateCardsTaskId = make_shared<string>(boost::any_cast<string>(m["BatchOperateCardsTaskId"]));
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
  }


  virtual ~DeleteBatchOperateCardsTaskRequest() = default;
};
class DeleteBatchOperateCardsTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteBatchOperateCardsTaskResponseBody() {}

  explicit DeleteBatchOperateCardsTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteBatchOperateCardsTaskResponseBody() = default;
};
class DeleteBatchOperateCardsTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteBatchOperateCardsTaskResponseBody> body{};

  DeleteBatchOperateCardsTaskResponse() {}

  explicit DeleteBatchOperateCardsTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteBatchOperateCardsTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteBatchOperateCardsTaskResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteBatchOperateCardsTaskResponse() = default;
};
class DeleteIoTCloudConnectorBackhaulRouteRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> netLinkId{};
  shared_ptr<string> wirelessCloudConnectorId{};

  DeleteIoTCloudConnectorBackhaulRouteRequest() {}

  explicit DeleteIoTCloudConnectorBackhaulRouteRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteIoTCloudConnectorBackhaulRouteRequest() = default;
};
class DeleteIoTCloudConnectorBackhaulRouteResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteIoTCloudConnectorBackhaulRouteResponseBody() {}

  explicit DeleteIoTCloudConnectorBackhaulRouteResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteIoTCloudConnectorBackhaulRouteResponseBody() = default;
};
class DeleteIoTCloudConnectorBackhaulRouteResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteIoTCloudConnectorBackhaulRouteResponseBody> body{};

  DeleteIoTCloudConnectorBackhaulRouteResponse() {}

  explicit DeleteIoTCloudConnectorBackhaulRouteResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteIoTCloudConnectorBackhaulRouteResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteIoTCloudConnectorBackhaulRouteResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteIoTCloudConnectorBackhaulRouteResponse() = default;
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
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteWirelessCloudConnectorResponseBody> body{};

  DeleteWirelessCloudConnectorResponse() {}

  explicit DeleteWirelessCloudConnectorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<long> statusCode{};
  shared_ptr<DetachVpcFromNetLinkResponseBody> body{};

  DetachVpcFromNetLinkResponse() {}

  explicit DetachVpcFromNetLinkResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetachVpcFromNetLinkResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetachVpcFromNetLinkResponseBody>(model1);
      }
    }
  }


  virtual ~DetachVpcFromNetLinkResponse() = default;
};
class GetCardRequest : public Darabonba::Model {
public:
  shared_ptr<string> iccid{};

  GetCardRequest() {}

  explicit GetCardRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (iccid) {
      res["Iccid"] = boost::any(*iccid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Iccid") != m.end() && !m["Iccid"].empty()) {
      iccid = make_shared<string>(boost::any_cast<string>(m["Iccid"]));
    }
  }


  virtual ~GetCardRequest() = default;
};
class GetCardResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> APN{};
  shared_ptr<string> activatedTime{};
  shared_ptr<long> alarmThreshold{};
  shared_ptr<string> cloudConnectorId{};
  shared_ptr<string> description{};
  shared_ptr<string> ISP{};
  shared_ptr<string> iccid{};
  shared_ptr<string> imei{};
  shared_ptr<string> imsi{};
  shared_ptr<string> ipAddress{};
  shared_ptr<long> limitThreshold{};
  shared_ptr<string> lock{};
  shared_ptr<string> msisdn{};
  shared_ptr<string> name{};
  shared_ptr<string> netType{};
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> simStatus{};
  shared_ptr<string> spec{};
  shared_ptr<string> status{};
  shared_ptr<long> stopThreshold{};
  shared_ptr<long> usageDataMonth{};
  shared_ptr<long> usageDataTotal{};
  shared_ptr<string> wirelessCloudConnectorId{};

  GetCardResponseBody() {}

  explicit GetCardResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (alarmThreshold) {
      res["AlarmThreshold"] = boost::any(*alarmThreshold);
    }
    if (cloudConnectorId) {
      res["CloudConnectorId"] = boost::any(*cloudConnectorId);
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
    if (limitThreshold) {
      res["LimitThreshold"] = boost::any(*limitThreshold);
    }
    if (lock) {
      res["Lock"] = boost::any(*lock);
    }
    if (msisdn) {
      res["Msisdn"] = boost::any(*msisdn);
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (simStatus) {
      res["SimStatus"] = boost::any(*simStatus);
    }
    if (spec) {
      res["Spec"] = boost::any(*spec);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (stopThreshold) {
      res["StopThreshold"] = boost::any(*stopThreshold);
    }
    if (usageDataMonth) {
      res["UsageDataMonth"] = boost::any(*usageDataMonth);
    }
    if (usageDataTotal) {
      res["UsageDataTotal"] = boost::any(*usageDataTotal);
    }
    if (wirelessCloudConnectorId) {
      res["WirelessCloudConnectorId"] = boost::any(*wirelessCloudConnectorId);
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
    if (m.find("AlarmThreshold") != m.end() && !m["AlarmThreshold"].empty()) {
      alarmThreshold = make_shared<long>(boost::any_cast<long>(m["AlarmThreshold"]));
    }
    if (m.find("CloudConnectorId") != m.end() && !m["CloudConnectorId"].empty()) {
      cloudConnectorId = make_shared<string>(boost::any_cast<string>(m["CloudConnectorId"]));
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
    if (m.find("LimitThreshold") != m.end() && !m["LimitThreshold"].empty()) {
      limitThreshold = make_shared<long>(boost::any_cast<long>(m["LimitThreshold"]));
    }
    if (m.find("Lock") != m.end() && !m["Lock"].empty()) {
      lock = make_shared<string>(boost::any_cast<string>(m["Lock"]));
    }
    if (m.find("Msisdn") != m.end() && !m["Msisdn"].empty()) {
      msisdn = make_shared<string>(boost::any_cast<string>(m["Msisdn"]));
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SimStatus") != m.end() && !m["SimStatus"].empty()) {
      simStatus = make_shared<string>(boost::any_cast<string>(m["SimStatus"]));
    }
    if (m.find("Spec") != m.end() && !m["Spec"].empty()) {
      spec = make_shared<string>(boost::any_cast<string>(m["Spec"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StopThreshold") != m.end() && !m["StopThreshold"].empty()) {
      stopThreshold = make_shared<long>(boost::any_cast<long>(m["StopThreshold"]));
    }
    if (m.find("UsageDataMonth") != m.end() && !m["UsageDataMonth"].empty()) {
      usageDataMonth = make_shared<long>(boost::any_cast<long>(m["UsageDataMonth"]));
    }
    if (m.find("UsageDataTotal") != m.end() && !m["UsageDataTotal"].empty()) {
      usageDataTotal = make_shared<long>(boost::any_cast<long>(m["UsageDataTotal"]));
    }
    if (m.find("WirelessCloudConnectorId") != m.end() && !m["WirelessCloudConnectorId"].empty()) {
      wirelessCloudConnectorId = make_shared<string>(boost::any_cast<string>(m["WirelessCloudConnectorId"]));
    }
  }


  virtual ~GetCardResponseBody() = default;
};
class GetCardResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetCardResponseBody> body{};

  GetCardResponse() {}

  explicit GetCardResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetCardResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCardResponseBody>(model1);
      }
    }
  }


  virtual ~GetCardResponse() = default;
};
class GetCardLockReasonRequest : public Darabonba::Model {
public:
  shared_ptr<string> iccid{};

  GetCardLockReasonRequest() {}

  explicit GetCardLockReasonRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (iccid) {
      res["Iccid"] = boost::any(*iccid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Iccid") != m.end() && !m["Iccid"].empty()) {
      iccid = make_shared<string>(boost::any_cast<string>(m["Iccid"]));
    }
  }


  virtual ~GetCardLockReasonRequest() = default;
};
class GetCardLockReasonResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> lockReason{};
  shared_ptr<string> requestId{};

  GetCardLockReasonResponseBody() {}

  explicit GetCardLockReasonResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lockReason) {
      res["LockReason"] = boost::any(*lockReason);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LockReason") != m.end() && !m["LockReason"].empty()) {
      lockReason = make_shared<string>(boost::any_cast<string>(m["LockReason"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetCardLockReasonResponseBody() = default;
};
class GetCardLockReasonResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetCardLockReasonResponseBody> body{};

  GetCardLockReasonResponse() {}

  explicit GetCardLockReasonResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetCardLockReasonResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCardLockReasonResponseBody>(model1);
      }
    }
  }


  virtual ~GetCardLockReasonResponse() = default;
};
class GetCreateCustomerInformationRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> wirelessCloudConnectorId{};

  GetCreateCustomerInformationRequest() {}

  explicit GetCreateCustomerInformationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetCreateCustomerInformationRequest() = default;
};
class GetCreateCustomerInformationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> canBuyCard{};
  shared_ptr<string> requestId{};
  shared_ptr<string> URL{};

  GetCreateCustomerInformationResponseBody() {}

  explicit GetCreateCustomerInformationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (canBuyCard) {
      res["CanBuyCard"] = boost::any(*canBuyCard);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (URL) {
      res["URL"] = boost::any(*URL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CanBuyCard") != m.end() && !m["CanBuyCard"].empty()) {
      canBuyCard = make_shared<string>(boost::any_cast<string>(m["CanBuyCard"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("URL") != m.end() && !m["URL"].empty()) {
      URL = make_shared<string>(boost::any_cast<string>(m["URL"]));
    }
  }


  virtual ~GetCreateCustomerInformationResponseBody() = default;
};
class GetCreateCustomerInformationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetCreateCustomerInformationResponseBody> body{};

  GetCreateCustomerInformationResponse() {}

  explicit GetCreateCustomerInformationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetCreateCustomerInformationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCreateCustomerInformationResponseBody>(model1);
      }
    }
  }


  virtual ~GetCreateCustomerInformationResponse() = default;
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
  shared_ptr<string> businessType{};
  shared_ptr<string> cardCount{};
  shared_ptr<string> createTime{};
  shared_ptr<string> dataPackageId{};
  shared_ptr<string> dataPackageType{};
  shared_ptr<string> description{};
  shared_ptr<vector<string>> features{};
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
    if (businessType) {
      res["BusinessType"] = boost::any(*businessType);
    }
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
    if (features) {
      res["Features"] = boost::any(*features);
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
    if (m.find("BusinessType") != m.end() && !m["BusinessType"].empty()) {
      businessType = make_shared<string>(boost::any_cast<string>(m["BusinessType"]));
    }
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
    if (m.find("Features") != m.end() && !m["Features"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Features"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Features"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      features = make_shared<vector<string>>(toVec1);
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
  shared_ptr<long> statusCode{};
  shared_ptr<GetWirelessCloudConnectorResponseBody> body{};

  GetWirelessCloudConnectorResponse() {}

  explicit GetWirelessCloudConnectorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> destinationPort{};
  shared_ptr<string> destinationType{};
  shared_ptr<bool> dns{};
  shared_ptr<long> maxResults{};
  shared_ptr<vector<string>> names{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> policy{};
  shared_ptr<string> protocol{};
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
    if (destinationPort) {
      res["DestinationPort"] = boost::any(*destinationPort);
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
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
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
    if (m.find("DestinationPort") != m.end() && !m["DestinationPort"].empty()) {
      destinationPort = make_shared<string>(boost::any_cast<string>(m["DestinationPort"]));
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
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
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
  shared_ptr<string> destinationPort{};
  shared_ptr<string> destinationType{};
  shared_ptr<bool> dns{};
  shared_ptr<string> name{};
  shared_ptr<string> policy{};
  shared_ptr<string> protocol{};
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
    if (destinationPort) {
      res["DestinationPort"] = boost::any(*destinationPort);
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
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
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
    if (m.find("DestinationPort") != m.end() && !m["DestinationPort"].empty()) {
      destinationPort = make_shared<string>(boost::any_cast<string>(m["DestinationPort"]));
    }
    if (m.find("DestinationType") != m.end() && !m["DestinationType"].empty()) {
      destinationType = make_shared<string>(boost::any_cast<string>(m["DestinationType"]));
    }
    if (m.find("Dns") != m.end() && !m["Dns"].empty()) {
      dns = make_shared<bool>(boost::any_cast<bool>(m["Dns"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
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
  shared_ptr<long> statusCode{};
  shared_ptr<ListAuthorizationRulesResponseBody> body{};

  ListAuthorizationRulesResponse() {}

  explicit ListAuthorizationRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAuthorizationRulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAuthorizationRulesResponseBody>(model1);
      }
    }
  }


  virtual ~ListAuthorizationRulesResponse() = default;
};
class ListBatchOperateCardsTasksRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> batchOperateCardsTaskIds{};
  shared_ptr<long> maxResults{};
  shared_ptr<vector<string>> names{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> statuses{};

  ListBatchOperateCardsTasksRequest() {}

  explicit ListBatchOperateCardsTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (batchOperateCardsTaskIds) {
      res["BatchOperateCardsTaskIds"] = boost::any(*batchOperateCardsTaskIds);
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (statuses) {
      res["Statuses"] = boost::any(*statuses);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BatchOperateCardsTaskIds") != m.end() && !m["BatchOperateCardsTaskIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["BatchOperateCardsTaskIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["BatchOperateCardsTaskIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      batchOperateCardsTaskIds = make_shared<vector<string>>(toVec1);
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
  }


  virtual ~ListBatchOperateCardsTasksRequest() = default;
};
class ListBatchOperateCardsTasksResponseBodyBatchOperateCardsTasksWirelessCloudConnectors : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> wirelessCloudConnectorId{};

  ListBatchOperateCardsTasksResponseBodyBatchOperateCardsTasksWirelessCloudConnectors() {}

  explicit ListBatchOperateCardsTasksResponseBodyBatchOperateCardsTasksWirelessCloudConnectors(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (wirelessCloudConnectorId) {
      res["WirelessCloudConnectorId"] = boost::any(*wirelessCloudConnectorId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("WirelessCloudConnectorId") != m.end() && !m["WirelessCloudConnectorId"].empty()) {
      wirelessCloudConnectorId = make_shared<string>(boost::any_cast<string>(m["WirelessCloudConnectorId"]));
    }
  }


  virtual ~ListBatchOperateCardsTasksResponseBodyBatchOperateCardsTasksWirelessCloudConnectors() = default;
};
class ListBatchOperateCardsTasksResponseBodyBatchOperateCardsTasks : public Darabonba::Model {
public:
  shared_ptr<string> batchOperateCardsTaskId{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> effectType{};
  shared_ptr<string> iccidsOssFilePath{};
  shared_ptr<string> name{};
  shared_ptr<string> operateResultOssFilePath{};
  shared_ptr<string> operateType{};
  shared_ptr<string> status{};
  shared_ptr<string> threshold{};
  shared_ptr<vector<ListBatchOperateCardsTasksResponseBodyBatchOperateCardsTasksWirelessCloudConnectors>> wirelessCloudConnectors{};

  ListBatchOperateCardsTasksResponseBodyBatchOperateCardsTasks() {}

  explicit ListBatchOperateCardsTasksResponseBodyBatchOperateCardsTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (batchOperateCardsTaskId) {
      res["BatchOperateCardsTaskId"] = boost::any(*batchOperateCardsTaskId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (effectType) {
      res["EffectType"] = boost::any(*effectType);
    }
    if (iccidsOssFilePath) {
      res["IccidsOssFilePath"] = boost::any(*iccidsOssFilePath);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (operateResultOssFilePath) {
      res["OperateResultOssFilePath"] = boost::any(*operateResultOssFilePath);
    }
    if (operateType) {
      res["OperateType"] = boost::any(*operateType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (threshold) {
      res["Threshold"] = boost::any(*threshold);
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
    if (m.find("BatchOperateCardsTaskId") != m.end() && !m["BatchOperateCardsTaskId"].empty()) {
      batchOperateCardsTaskId = make_shared<string>(boost::any_cast<string>(m["BatchOperateCardsTaskId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EffectType") != m.end() && !m["EffectType"].empty()) {
      effectType = make_shared<string>(boost::any_cast<string>(m["EffectType"]));
    }
    if (m.find("IccidsOssFilePath") != m.end() && !m["IccidsOssFilePath"].empty()) {
      iccidsOssFilePath = make_shared<string>(boost::any_cast<string>(m["IccidsOssFilePath"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OperateResultOssFilePath") != m.end() && !m["OperateResultOssFilePath"].empty()) {
      operateResultOssFilePath = make_shared<string>(boost::any_cast<string>(m["OperateResultOssFilePath"]));
    }
    if (m.find("OperateType") != m.end() && !m["OperateType"].empty()) {
      operateType = make_shared<string>(boost::any_cast<string>(m["OperateType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Threshold") != m.end() && !m["Threshold"].empty()) {
      threshold = make_shared<string>(boost::any_cast<string>(m["Threshold"]));
    }
    if (m.find("WirelessCloudConnectors") != m.end() && !m["WirelessCloudConnectors"].empty()) {
      if (typeid(vector<boost::any>) == m["WirelessCloudConnectors"].type()) {
        vector<ListBatchOperateCardsTasksResponseBodyBatchOperateCardsTasksWirelessCloudConnectors> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["WirelessCloudConnectors"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListBatchOperateCardsTasksResponseBodyBatchOperateCardsTasksWirelessCloudConnectors model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        wirelessCloudConnectors = make_shared<vector<ListBatchOperateCardsTasksResponseBodyBatchOperateCardsTasksWirelessCloudConnectors>>(expect1);
      }
    }
  }


  virtual ~ListBatchOperateCardsTasksResponseBodyBatchOperateCardsTasks() = default;
};
class ListBatchOperateCardsTasksResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListBatchOperateCardsTasksResponseBodyBatchOperateCardsTasks>> batchOperateCardsTasks{};
  shared_ptr<string> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<string> totalCount{};

  ListBatchOperateCardsTasksResponseBody() {}

  explicit ListBatchOperateCardsTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (batchOperateCardsTasks) {
      vector<boost::any> temp1;
      for(auto item1:*batchOperateCardsTasks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BatchOperateCardsTasks"] = boost::any(temp1);
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
    if (m.find("BatchOperateCardsTasks") != m.end() && !m["BatchOperateCardsTasks"].empty()) {
      if (typeid(vector<boost::any>) == m["BatchOperateCardsTasks"].type()) {
        vector<ListBatchOperateCardsTasksResponseBodyBatchOperateCardsTasks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BatchOperateCardsTasks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListBatchOperateCardsTasksResponseBodyBatchOperateCardsTasks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        batchOperateCardsTasks = make_shared<vector<ListBatchOperateCardsTasksResponseBodyBatchOperateCardsTasks>>(expect1);
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


  virtual ~ListBatchOperateCardsTasksResponseBody() = default;
};
class ListBatchOperateCardsTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListBatchOperateCardsTasksResponseBody> body{};

  ListBatchOperateCardsTasksResponse() {}

  explicit ListBatchOperateCardsTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListBatchOperateCardsTasksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListBatchOperateCardsTasksResponseBody>(model1);
      }
    }
  }


  virtual ~ListBatchOperateCardsTasksResponse() = default;
};
class ListCardsRequest : public Darabonba::Model {
public:
  shared_ptr<string> apn{};
  shared_ptr<string> iccid{};
  shared_ptr<vector<string>> iccids{};
  shared_ptr<string> ipAddress{};
  shared_ptr<bool> lock{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> netLinkId{};
  shared_ptr<string> nextToken{};
  shared_ptr<bool> online{};
  shared_ptr<vector<string>> statuses{};
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
    if (iccid) {
      res["Iccid"] = boost::any(*iccid);
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
    if (wirelessCloudConnectorId) {
      res["WirelessCloudConnectorId"] = boost::any(*wirelessCloudConnectorId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Apn") != m.end() && !m["Apn"].empty()) {
      apn = make_shared<string>(boost::any_cast<string>(m["Apn"]));
    }
    if (m.find("Iccid") != m.end() && !m["Iccid"].empty()) {
      iccid = make_shared<string>(boost::any_cast<string>(m["Iccid"]));
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
  shared_ptr<string> businessStatus{};
  shared_ptr<string> description{};
  shared_ptr<string> ISP{};
  shared_ptr<string> iccid{};
  shared_ptr<string> imei{};
  shared_ptr<string> imsi{};
  shared_ptr<string> ipAddress{};
  shared_ptr<bool> lock{};
  shared_ptr<string> msisdn{};
  shared_ptr<string> name{};
  shared_ptr<string> netType{};
  shared_ptr<string> orderId{};
  shared_ptr<string> spec{};
  shared_ptr<string> status{};
  shared_ptr<long> usageDataMonth{};
  shared_ptr<string> usageDataTotal{};

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
    if (businessStatus) {
      res["BusinessStatus"] = boost::any(*businessStatus);
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
    if (msisdn) {
      res["Msisdn"] = boost::any(*msisdn);
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
    if (usageDataTotal) {
      res["UsageDataTotal"] = boost::any(*usageDataTotal);
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
    if (m.find("BusinessStatus") != m.end() && !m["BusinessStatus"].empty()) {
      businessStatus = make_shared<string>(boost::any_cast<string>(m["BusinessStatus"]));
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
    if (m.find("Msisdn") != m.end() && !m["Msisdn"].empty()) {
      msisdn = make_shared<string>(boost::any_cast<string>(m["Msisdn"]));
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
    if (m.find("UsageDataTotal") != m.end() && !m["UsageDataTotal"].empty()) {
      usageDataTotal = make_shared<string>(boost::any_cast<string>(m["UsageDataTotal"]));
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
  shared_ptr<long> statusCode{};
  shared_ptr<ListCardsResponseBody> body{};

  ListCardsResponse() {}

  explicit ListCardsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<long> statusCode{};
  shared_ptr<ListDataPackagesResponseBody> body{};

  ListDataPackagesResponse() {}

  explicit ListDataPackagesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDataPackagesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDataPackagesResponseBody>(model1);
      }
    }
  }


  virtual ~ListDataPackagesResponse() = default;
};
class ListIoTCloudConnectorBackhaulRouteRequest : public Darabonba::Model {
public:
  shared_ptr<string> netLinkId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> wirelessCloudConnectorId{};

  ListIoTCloudConnectorBackhaulRouteRequest() {}

  explicit ListIoTCloudConnectorBackhaulRouteRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (netLinkId) {
      res["NetLinkId"] = boost::any(*netLinkId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (wirelessCloudConnectorId) {
      res["WirelessCloudConnectorId"] = boost::any(*wirelessCloudConnectorId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NetLinkId") != m.end() && !m["NetLinkId"].empty()) {
      netLinkId = make_shared<string>(boost::any_cast<string>(m["NetLinkId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("WirelessCloudConnectorId") != m.end() && !m["WirelessCloudConnectorId"].empty()) {
      wirelessCloudConnectorId = make_shared<string>(boost::any_cast<string>(m["WirelessCloudConnectorId"]));
    }
  }


  virtual ~ListIoTCloudConnectorBackhaulRouteRequest() = default;
};
class ListIoTCloudConnectorBackhaulRouteResponseBodyRoutes : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> destinationCidrBlock{};
  shared_ptr<string> nextHopId{};
  shared_ptr<string> nextHopType{};
  shared_ptr<string> status{};

  ListIoTCloudConnectorBackhaulRouteResponseBodyRoutes() {}

  explicit ListIoTCloudConnectorBackhaulRouteResponseBodyRoutes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (destinationCidrBlock) {
      res["DestinationCidrBlock"] = boost::any(*destinationCidrBlock);
    }
    if (nextHopId) {
      res["NextHopId"] = boost::any(*nextHopId);
    }
    if (nextHopType) {
      res["NextHopType"] = boost::any(*nextHopType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DestinationCidrBlock") != m.end() && !m["DestinationCidrBlock"].empty()) {
      destinationCidrBlock = make_shared<string>(boost::any_cast<string>(m["DestinationCidrBlock"]));
    }
    if (m.find("NextHopId") != m.end() && !m["NextHopId"].empty()) {
      nextHopId = make_shared<string>(boost::any_cast<string>(m["NextHopId"]));
    }
    if (m.find("NextHopType") != m.end() && !m["NextHopType"].empty()) {
      nextHopType = make_shared<string>(boost::any_cast<string>(m["NextHopType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListIoTCloudConnectorBackhaulRouteResponseBodyRoutes() = default;
};
class ListIoTCloudConnectorBackhaulRouteResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> netLinkId{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListIoTCloudConnectorBackhaulRouteResponseBodyRoutes>> routes{};

  ListIoTCloudConnectorBackhaulRouteResponseBody() {}

  explicit ListIoTCloudConnectorBackhaulRouteResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (netLinkId) {
      res["NetLinkId"] = boost::any(*netLinkId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (routes) {
      vector<boost::any> temp1;
      for(auto item1:*routes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Routes"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NetLinkId") != m.end() && !m["NetLinkId"].empty()) {
      netLinkId = make_shared<string>(boost::any_cast<string>(m["NetLinkId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Routes") != m.end() && !m["Routes"].empty()) {
      if (typeid(vector<boost::any>) == m["Routes"].type()) {
        vector<ListIoTCloudConnectorBackhaulRouteResponseBodyRoutes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Routes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListIoTCloudConnectorBackhaulRouteResponseBodyRoutes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        routes = make_shared<vector<ListIoTCloudConnectorBackhaulRouteResponseBodyRoutes>>(expect1);
      }
    }
  }


  virtual ~ListIoTCloudConnectorBackhaulRouteResponseBody() = default;
};
class ListIoTCloudConnectorBackhaulRouteResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListIoTCloudConnectorBackhaulRouteResponseBody> body{};

  ListIoTCloudConnectorBackhaulRouteResponse() {}

  explicit ListIoTCloudConnectorBackhaulRouteResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListIoTCloudConnectorBackhaulRouteResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListIoTCloudConnectorBackhaulRouteResponseBody>(model1);
      }
    }
  }


  virtual ~ListIoTCloudConnectorBackhaulRouteResponse() = default;
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
  shared_ptr<long> statusCode{};
  shared_ptr<ListOrdersResponseBody> body{};

  ListOrdersResponse() {}

  explicit ListOrdersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<long> statusCode{};
  shared_ptr<ListRegionsResponseBody> body{};

  ListRegionsResponse() {}

  explicit ListRegionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> businessType{};
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
    if (businessType) {
      res["BusinessType"] = boost::any(*businessType);
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
    if (m.find("BusinessType") != m.end() && !m["BusinessType"].empty()) {
      businessType = make_shared<string>(boost::any_cast<string>(m["BusinessType"]));
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
  shared_ptr<string> businessType{};
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
    if (businessType) {
      res["BusinessType"] = boost::any(*businessType);
    }
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
    if (m.find("BusinessType") != m.end() && !m["BusinessType"].empty()) {
      businessType = make_shared<string>(boost::any_cast<string>(m["BusinessType"]));
    }
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
  shared_ptr<long> statusCode{};
  shared_ptr<ListWirelessCloudConnectorsResponseBody> body{};

  ListWirelessCloudConnectorsResponse() {}

  explicit ListWirelessCloudConnectorsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<long> statusCode{};
  shared_ptr<ListZonesResponseBody> body{};

  ListZonesResponse() {}

  explicit ListZonesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListZonesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListZonesResponseBody>(model1);
      }
    }
  }


  virtual ~ListZonesResponse() = default;
};
class LockCardsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<vector<string>> iccids{};
  shared_ptr<string> regionId{};

  LockCardsRequest() {}

  explicit LockCardsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (iccids) {
      res["Iccids"] = boost::any(*iccids);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~LockCardsRequest() = default;
};
class LockCardsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  LockCardsResponseBody() {}

  explicit LockCardsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~LockCardsResponseBody() = default;
};
class LockCardsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<LockCardsResponseBody> body{};

  LockCardsResponse() {}

  explicit LockCardsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        LockCardsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<LockCardsResponseBody>(model1);
      }
    }
  }


  virtual ~LockCardsResponse() = default;
};
class ModifyWirelessCloudConnectorFeatureRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> featureName{};
  shared_ptr<string> featureValue{};
  shared_ptr<string> wirelessCloudConnectorId{};

  ModifyWirelessCloudConnectorFeatureRequest() {}

  explicit ModifyWirelessCloudConnectorFeatureRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (featureName) {
      res["FeatureName"] = boost::any(*featureName);
    }
    if (featureValue) {
      res["FeatureValue"] = boost::any(*featureValue);
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
    if (m.find("FeatureName") != m.end() && !m["FeatureName"].empty()) {
      featureName = make_shared<string>(boost::any_cast<string>(m["FeatureName"]));
    }
    if (m.find("FeatureValue") != m.end() && !m["FeatureValue"].empty()) {
      featureValue = make_shared<string>(boost::any_cast<string>(m["FeatureValue"]));
    }
    if (m.find("WirelessCloudConnectorId") != m.end() && !m["WirelessCloudConnectorId"].empty()) {
      wirelessCloudConnectorId = make_shared<string>(boost::any_cast<string>(m["WirelessCloudConnectorId"]));
    }
  }


  virtual ~ModifyWirelessCloudConnectorFeatureRequest() = default;
};
class ModifyWirelessCloudConnectorFeatureResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyWirelessCloudConnectorFeatureResponseBody() {}

  explicit ModifyWirelessCloudConnectorFeatureResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyWirelessCloudConnectorFeatureResponseBody() = default;
};
class ModifyWirelessCloudConnectorFeatureResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyWirelessCloudConnectorFeatureResponseBody> body{};

  ModifyWirelessCloudConnectorFeatureResponse() {}

  explicit ModifyWirelessCloudConnectorFeatureResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyWirelessCloudConnectorFeatureResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyWirelessCloudConnectorFeatureResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyWirelessCloudConnectorFeatureResponse() = default;
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
  shared_ptr<long> statusCode{};
  shared_ptr<OpenCc5gServiceResponseBody> body{};

  OpenCc5gServiceResponse() {}

  explicit OpenCc5gServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OpenCc5gServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OpenCc5gServiceResponseBody>(model1);
      }
    }
  }


  virtual ~OpenCc5gServiceResponse() = default;
};
class ResumeCardsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<vector<string>> iccids{};
  shared_ptr<string> regionId{};

  ResumeCardsRequest() {}

  explicit ResumeCardsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (iccids) {
      res["Iccids"] = boost::any(*iccids);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ResumeCardsRequest() = default;
};
class ResumeCardsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ResumeCardsResponseBody() {}

  explicit ResumeCardsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ResumeCardsResponseBody() = default;
};
class ResumeCardsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ResumeCardsResponseBody> body{};

  ResumeCardsResponse() {}

  explicit ResumeCardsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ResumeCardsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ResumeCardsResponseBody>(model1);
      }
    }
  }


  virtual ~ResumeCardsResponse() = default;
};
class StopCardsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<vector<string>> iccids{};
  shared_ptr<string> regionId{};

  StopCardsRequest() {}

  explicit StopCardsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (iccids) {
      res["Iccids"] = boost::any(*iccids);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~StopCardsRequest() = default;
};
class StopCardsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  StopCardsResponseBody() {}

  explicit StopCardsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StopCardsResponseBody() = default;
};
class StopCardsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopCardsResponseBody> body{};

  StopCardsResponse() {}

  explicit StopCardsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopCardsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopCardsResponseBody>(model1);
      }
    }
  }


  virtual ~StopCardsResponse() = default;
};
class SwitchWirelessCloudConnectorToBusinessRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> wirelessCloudConnectorId{};

  SwitchWirelessCloudConnectorToBusinessRequest() {}

  explicit SwitchWirelessCloudConnectorToBusinessRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SwitchWirelessCloudConnectorToBusinessRequest() = default;
};
class SwitchWirelessCloudConnectorToBusinessResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SwitchWirelessCloudConnectorToBusinessResponseBody() {}

  explicit SwitchWirelessCloudConnectorToBusinessResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SwitchWirelessCloudConnectorToBusinessResponseBody() = default;
};
class SwitchWirelessCloudConnectorToBusinessResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SwitchWirelessCloudConnectorToBusinessResponseBody> body{};

  SwitchWirelessCloudConnectorToBusinessResponse() {}

  explicit SwitchWirelessCloudConnectorToBusinessResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SwitchWirelessCloudConnectorToBusinessResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SwitchWirelessCloudConnectorToBusinessResponseBody>(model1);
      }
    }
  }


  virtual ~SwitchWirelessCloudConnectorToBusinessResponse() = default;
};
class UnlockCardsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<vector<string>> iccids{};
  shared_ptr<string> regionId{};

  UnlockCardsRequest() {}

  explicit UnlockCardsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (iccids) {
      res["Iccids"] = boost::any(*iccids);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~UnlockCardsRequest() = default;
};
class UnlockCardsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UnlockCardsResponseBody() {}

  explicit UnlockCardsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UnlockCardsResponseBody() = default;
};
class UnlockCardsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UnlockCardsResponseBody> body{};

  UnlockCardsResponse() {}

  explicit UnlockCardsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UnlockCardsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UnlockCardsResponseBody>(model1);
      }
    }
  }


  virtual ~UnlockCardsResponse() = default;
};
class UpdateAuthorizationRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> authorizationRuleId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<string> destination{};
  shared_ptr<string> destinationPort{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> name{};
  shared_ptr<string> policy{};
  shared_ptr<string> protocol{};
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
    if (destinationPort) {
      res["DestinationPort"] = boost::any(*destinationPort);
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
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
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
    if (m.find("DestinationPort") != m.end() && !m["DestinationPort"].empty()) {
      destinationPort = make_shared<string>(boost::any_cast<string>(m["DestinationPort"]));
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
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
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
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateAuthorizationRuleResponseBody> body{};

  UpdateAuthorizationRuleResponse() {}

  explicit UpdateAuthorizationRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateAuthorizationRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAuthorizationRuleResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAuthorizationRuleResponse() = default;
};
class UpdateBatchOperateCardsTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> batchOperateCardsTaskId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> effectType{};
  shared_ptr<vector<string>> iccids{};
  shared_ptr<string> iccidsOssFilePath{};
  shared_ptr<string> name{};
  shared_ptr<string> operateType{};
  shared_ptr<string> regionId{};
  shared_ptr<long> threshold{};
  shared_ptr<vector<string>> wirelessCloudConnectorIds{};

  UpdateBatchOperateCardsTaskRequest() {}

  explicit UpdateBatchOperateCardsTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (batchOperateCardsTaskId) {
      res["BatchOperateCardsTaskId"] = boost::any(*batchOperateCardsTaskId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (effectType) {
      res["EffectType"] = boost::any(*effectType);
    }
    if (iccids) {
      res["Iccids"] = boost::any(*iccids);
    }
    if (iccidsOssFilePath) {
      res["IccidsOssFilePath"] = boost::any(*iccidsOssFilePath);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (operateType) {
      res["OperateType"] = boost::any(*operateType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (threshold) {
      res["Threshold"] = boost::any(*threshold);
    }
    if (wirelessCloudConnectorIds) {
      res["WirelessCloudConnectorIds"] = boost::any(*wirelessCloudConnectorIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BatchOperateCardsTaskId") != m.end() && !m["BatchOperateCardsTaskId"].empty()) {
      batchOperateCardsTaskId = make_shared<string>(boost::any_cast<string>(m["BatchOperateCardsTaskId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("EffectType") != m.end() && !m["EffectType"].empty()) {
      effectType = make_shared<string>(boost::any_cast<string>(m["EffectType"]));
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
    if (m.find("IccidsOssFilePath") != m.end() && !m["IccidsOssFilePath"].empty()) {
      iccidsOssFilePath = make_shared<string>(boost::any_cast<string>(m["IccidsOssFilePath"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OperateType") != m.end() && !m["OperateType"].empty()) {
      operateType = make_shared<string>(boost::any_cast<string>(m["OperateType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Threshold") != m.end() && !m["Threshold"].empty()) {
      threshold = make_shared<long>(boost::any_cast<long>(m["Threshold"]));
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


  virtual ~UpdateBatchOperateCardsTaskRequest() = default;
};
class UpdateBatchOperateCardsTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateBatchOperateCardsTaskResponseBody() {}

  explicit UpdateBatchOperateCardsTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateBatchOperateCardsTaskResponseBody() = default;
};
class UpdateBatchOperateCardsTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateBatchOperateCardsTaskResponseBody> body{};

  UpdateBatchOperateCardsTaskResponse() {}

  explicit UpdateBatchOperateCardsTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateBatchOperateCardsTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateBatchOperateCardsTaskResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateBatchOperateCardsTaskResponse() = default;
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
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateCardResponseBody> body{};

  UpdateCardResponse() {}

  explicit UpdateCardResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateDNSAuthorizationRuleResponseBody> body{};

  UpdateDNSAuthorizationRuleResponse() {}

  explicit UpdateDNSAuthorizationRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateWirelessCloudConnectorResponseBody> body{};

  UpdateWirelessCloudConnectorResponse() {}

  explicit UpdateWirelessCloudConnectorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  CreateBatchOperateCardsTaskResponse createBatchOperateCardsTaskWithOptions(shared_ptr<CreateBatchOperateCardsTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateBatchOperateCardsTaskResponse createBatchOperateCardsTask(shared_ptr<CreateBatchOperateCardsTaskRequest> request);
  CreateIoTCloudConnectorBackhaulRouteResponse createIoTCloudConnectorBackhaulRouteWithOptions(shared_ptr<CreateIoTCloudConnectorBackhaulRouteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateIoTCloudConnectorBackhaulRouteResponse createIoTCloudConnectorBackhaulRoute(shared_ptr<CreateIoTCloudConnectorBackhaulRouteRequest> request);
  CreateWirelessCloudConnectorResponse createWirelessCloudConnectorWithOptions(shared_ptr<CreateWirelessCloudConnectorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateWirelessCloudConnectorResponse createWirelessCloudConnector(shared_ptr<CreateWirelessCloudConnectorRequest> request);
  DeleteAuthorizationRuleResponse deleteAuthorizationRuleWithOptions(shared_ptr<DeleteAuthorizationRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAuthorizationRuleResponse deleteAuthorizationRule(shared_ptr<DeleteAuthorizationRuleRequest> request);
  DeleteBatchOperateCardsTaskResponse deleteBatchOperateCardsTaskWithOptions(shared_ptr<DeleteBatchOperateCardsTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteBatchOperateCardsTaskResponse deleteBatchOperateCardsTask(shared_ptr<DeleteBatchOperateCardsTaskRequest> request);
  DeleteIoTCloudConnectorBackhaulRouteResponse deleteIoTCloudConnectorBackhaulRouteWithOptions(shared_ptr<DeleteIoTCloudConnectorBackhaulRouteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteIoTCloudConnectorBackhaulRouteResponse deleteIoTCloudConnectorBackhaulRoute(shared_ptr<DeleteIoTCloudConnectorBackhaulRouteRequest> request);
  DeleteWirelessCloudConnectorResponse deleteWirelessCloudConnectorWithOptions(shared_ptr<DeleteWirelessCloudConnectorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteWirelessCloudConnectorResponse deleteWirelessCloudConnector(shared_ptr<DeleteWirelessCloudConnectorRequest> request);
  DetachVpcFromNetLinkResponse detachVpcFromNetLinkWithOptions(shared_ptr<DetachVpcFromNetLinkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetachVpcFromNetLinkResponse detachVpcFromNetLink(shared_ptr<DetachVpcFromNetLinkRequest> request);
  GetCardResponse getCardWithOptions(shared_ptr<GetCardRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCardResponse getCard(shared_ptr<GetCardRequest> request);
  GetCardLockReasonResponse getCardLockReasonWithOptions(shared_ptr<GetCardLockReasonRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCardLockReasonResponse getCardLockReason(shared_ptr<GetCardLockReasonRequest> request);
  GetCreateCustomerInformationResponse getCreateCustomerInformationWithOptions(shared_ptr<GetCreateCustomerInformationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCreateCustomerInformationResponse getCreateCustomerInformation(shared_ptr<GetCreateCustomerInformationRequest> request);
  GetWirelessCloudConnectorResponse getWirelessCloudConnectorWithOptions(shared_ptr<GetWirelessCloudConnectorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetWirelessCloudConnectorResponse getWirelessCloudConnector(shared_ptr<GetWirelessCloudConnectorRequest> request);
  ListAuthorizationRulesResponse listAuthorizationRulesWithOptions(shared_ptr<ListAuthorizationRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAuthorizationRulesResponse listAuthorizationRules(shared_ptr<ListAuthorizationRulesRequest> request);
  ListBatchOperateCardsTasksResponse listBatchOperateCardsTasksWithOptions(shared_ptr<ListBatchOperateCardsTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListBatchOperateCardsTasksResponse listBatchOperateCardsTasks(shared_ptr<ListBatchOperateCardsTasksRequest> request);
  ListCardsResponse listCardsWithOptions(shared_ptr<ListCardsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCardsResponse listCards(shared_ptr<ListCardsRequest> request);
  ListDataPackagesResponse listDataPackagesWithOptions(shared_ptr<ListDataPackagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDataPackagesResponse listDataPackages(shared_ptr<ListDataPackagesRequest> request);
  ListIoTCloudConnectorBackhaulRouteResponse listIoTCloudConnectorBackhaulRouteWithOptions(shared_ptr<ListIoTCloudConnectorBackhaulRouteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListIoTCloudConnectorBackhaulRouteResponse listIoTCloudConnectorBackhaulRoute(shared_ptr<ListIoTCloudConnectorBackhaulRouteRequest> request);
  ListOrdersResponse listOrdersWithOptions(shared_ptr<ListOrdersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListOrdersResponse listOrders(shared_ptr<ListOrdersRequest> request);
  ListRegionsResponse listRegionsWithOptions(shared_ptr<ListRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRegionsResponse listRegions(shared_ptr<ListRegionsRequest> request);
  ListWirelessCloudConnectorsResponse listWirelessCloudConnectorsWithOptions(shared_ptr<ListWirelessCloudConnectorsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListWirelessCloudConnectorsResponse listWirelessCloudConnectors(shared_ptr<ListWirelessCloudConnectorsRequest> request);
  ListZonesResponse listZonesWithOptions(shared_ptr<ListZonesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListZonesResponse listZones(shared_ptr<ListZonesRequest> request);
  LockCardsResponse lockCardsWithOptions(shared_ptr<LockCardsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  LockCardsResponse lockCards(shared_ptr<LockCardsRequest> request);
  ModifyWirelessCloudConnectorFeatureResponse modifyWirelessCloudConnectorFeatureWithOptions(shared_ptr<ModifyWirelessCloudConnectorFeatureRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyWirelessCloudConnectorFeatureResponse modifyWirelessCloudConnectorFeature(shared_ptr<ModifyWirelessCloudConnectorFeatureRequest> request);
  OpenCc5gServiceResponse openCc5gServiceWithOptions(shared_ptr<OpenCc5gServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OpenCc5gServiceResponse openCc5gService(shared_ptr<OpenCc5gServiceRequest> request);
  ResumeCardsResponse resumeCardsWithOptions(shared_ptr<ResumeCardsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResumeCardsResponse resumeCards(shared_ptr<ResumeCardsRequest> request);
  StopCardsResponse stopCardsWithOptions(shared_ptr<StopCardsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopCardsResponse stopCards(shared_ptr<StopCardsRequest> request);
  SwitchWirelessCloudConnectorToBusinessResponse switchWirelessCloudConnectorToBusinessWithOptions(shared_ptr<SwitchWirelessCloudConnectorToBusinessRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SwitchWirelessCloudConnectorToBusinessResponse switchWirelessCloudConnectorToBusiness(shared_ptr<SwitchWirelessCloudConnectorToBusinessRequest> request);
  UnlockCardsResponse unlockCardsWithOptions(shared_ptr<UnlockCardsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnlockCardsResponse unlockCards(shared_ptr<UnlockCardsRequest> request);
  UpdateAuthorizationRuleResponse updateAuthorizationRuleWithOptions(shared_ptr<UpdateAuthorizationRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAuthorizationRuleResponse updateAuthorizationRule(shared_ptr<UpdateAuthorizationRuleRequest> request);
  UpdateBatchOperateCardsTaskResponse updateBatchOperateCardsTaskWithOptions(shared_ptr<UpdateBatchOperateCardsTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateBatchOperateCardsTaskResponse updateBatchOperateCardsTask(shared_ptr<UpdateBatchOperateCardsTaskRequest> request);
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
