// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_WAF-OPENAPI20211001_H_
#define ALIBABACLOUD_WAF-OPENAPI20211001_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Waf-openapi20211001 {
class CreateMajorProtectionBlackIpRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<long> expiredTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> ipList{};
  shared_ptr<long> ruleId{};
  shared_ptr<long> templateId{};

  CreateMajorProtectionBlackIpRequest() {}

  explicit CreateMajorProtectionBlackIpRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ipList) {
      res["IpList"] = boost::any(*ipList);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<long>(boost::any_cast<long>(m["ExpiredTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("IpList") != m.end() && !m["IpList"].empty()) {
      ipList = make_shared<string>(boost::any_cast<string>(m["IpList"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
  }


  virtual ~CreateMajorProtectionBlackIpRequest() = default;
};
class CreateMajorProtectionBlackIpResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateMajorProtectionBlackIpResponseBody() {}

  explicit CreateMajorProtectionBlackIpResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateMajorProtectionBlackIpResponseBody() = default;
};
class CreateMajorProtectionBlackIpResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateMajorProtectionBlackIpResponseBody> body{};

  CreateMajorProtectionBlackIpResponse() {}

  explicit CreateMajorProtectionBlackIpResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateMajorProtectionBlackIpResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateMajorProtectionBlackIpResponseBody>(model1);
      }
    }
  }


  virtual ~CreateMajorProtectionBlackIpResponse() = default;
};
class DescribeInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};

  DescribeInstanceRequest() {}

  explicit DescribeInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~DescribeInstanceRequest() = default;
};
class DescribeInstanceResponseBodyDetails : public Darabonba::Model {
public:
  shared_ptr<long> aclRuleMaxIpCount{};
  shared_ptr<bool> antiScan{};
  shared_ptr<long> antiScanTemplateMaxCount{};
  shared_ptr<long> backendMaxCount{};
  shared_ptr<bool> baseWafGroup{};
  shared_ptr<long> baseWafGroupRuleInTemplateMaxCount{};
  shared_ptr<long> baseWafGroupRuleTemplateMaxCount{};
  shared_ptr<long> cnameResourceMaxCount{};
  shared_ptr<bool> customResponse{};
  shared_ptr<long> customResponseRuleInTemplateMaxCount{};
  shared_ptr<long> customResponseTemplateMaxCount{};
  shared_ptr<bool> customRule{};
  shared_ptr<string> customRuleAction{};
  shared_ptr<string> customRuleCondition{};
  shared_ptr<long> customRuleInTemplateMaxCount{};
  shared_ptr<string> customRuleRatelimitor{};
  shared_ptr<long> customRuleTemplateMaxCount{};
  shared_ptr<long> defenseGroupMaxCount{};
  shared_ptr<long> defenseObjectInGroupMaxCount{};
  shared_ptr<long> defenseObjectInTemplateMaxCount{};
  shared_ptr<long> defenseObjectMaxCount{};
  shared_ptr<bool> exclusiveIp{};
  shared_ptr<bool> gslb{};
  shared_ptr<string> httpPorts{};
  shared_ptr<string> httpsPorts{};
  shared_ptr<bool> ipBlacklist{};
  shared_ptr<long> ipBlacklistIpInRuleMaxCount{};
  shared_ptr<long> ipBlacklistRuleInTemplateMaxCount{};
  shared_ptr<long> ipBlacklistTemplateMaxCount{};
  shared_ptr<bool> ipv6{};
  shared_ptr<bool> logService{};
  shared_ptr<bool> majorProtection{};
  shared_ptr<long> majorProtectionTemplateMaxCount{};
  shared_ptr<long> vastIpBlacklistInFileMaxCount{};
  shared_ptr<long> vastIpBlacklistInOperationMaxCount{};
  shared_ptr<long> vastIpBlacklistMaxCount{};
  shared_ptr<bool> whitelist{};
  shared_ptr<string> whitelistLogical{};
  shared_ptr<string> whitelistRuleCondition{};
  shared_ptr<long> whitelistRuleInTemplateMaxCount{};
  shared_ptr<long> whitelistTemplateMaxCount{};

  DescribeInstanceResponseBodyDetails() {}

  explicit DescribeInstanceResponseBodyDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclRuleMaxIpCount) {
      res["AclRuleMaxIpCount"] = boost::any(*aclRuleMaxIpCount);
    }
    if (antiScan) {
      res["AntiScan"] = boost::any(*antiScan);
    }
    if (antiScanTemplateMaxCount) {
      res["AntiScanTemplateMaxCount"] = boost::any(*antiScanTemplateMaxCount);
    }
    if (backendMaxCount) {
      res["BackendMaxCount"] = boost::any(*backendMaxCount);
    }
    if (baseWafGroup) {
      res["BaseWafGroup"] = boost::any(*baseWafGroup);
    }
    if (baseWafGroupRuleInTemplateMaxCount) {
      res["BaseWafGroupRuleInTemplateMaxCount"] = boost::any(*baseWafGroupRuleInTemplateMaxCount);
    }
    if (baseWafGroupRuleTemplateMaxCount) {
      res["BaseWafGroupRuleTemplateMaxCount"] = boost::any(*baseWafGroupRuleTemplateMaxCount);
    }
    if (cnameResourceMaxCount) {
      res["CnameResourceMaxCount"] = boost::any(*cnameResourceMaxCount);
    }
    if (customResponse) {
      res["CustomResponse"] = boost::any(*customResponse);
    }
    if (customResponseRuleInTemplateMaxCount) {
      res["CustomResponseRuleInTemplateMaxCount"] = boost::any(*customResponseRuleInTemplateMaxCount);
    }
    if (customResponseTemplateMaxCount) {
      res["CustomResponseTemplateMaxCount"] = boost::any(*customResponseTemplateMaxCount);
    }
    if (customRule) {
      res["CustomRule"] = boost::any(*customRule);
    }
    if (customRuleAction) {
      res["CustomRuleAction"] = boost::any(*customRuleAction);
    }
    if (customRuleCondition) {
      res["CustomRuleCondition"] = boost::any(*customRuleCondition);
    }
    if (customRuleInTemplateMaxCount) {
      res["CustomRuleInTemplateMaxCount"] = boost::any(*customRuleInTemplateMaxCount);
    }
    if (customRuleRatelimitor) {
      res["CustomRuleRatelimitor"] = boost::any(*customRuleRatelimitor);
    }
    if (customRuleTemplateMaxCount) {
      res["CustomRuleTemplateMaxCount"] = boost::any(*customRuleTemplateMaxCount);
    }
    if (defenseGroupMaxCount) {
      res["DefenseGroupMaxCount"] = boost::any(*defenseGroupMaxCount);
    }
    if (defenseObjectInGroupMaxCount) {
      res["DefenseObjectInGroupMaxCount"] = boost::any(*defenseObjectInGroupMaxCount);
    }
    if (defenseObjectInTemplateMaxCount) {
      res["DefenseObjectInTemplateMaxCount"] = boost::any(*defenseObjectInTemplateMaxCount);
    }
    if (defenseObjectMaxCount) {
      res["DefenseObjectMaxCount"] = boost::any(*defenseObjectMaxCount);
    }
    if (exclusiveIp) {
      res["ExclusiveIp"] = boost::any(*exclusiveIp);
    }
    if (gslb) {
      res["Gslb"] = boost::any(*gslb);
    }
    if (httpPorts) {
      res["HttpPorts"] = boost::any(*httpPorts);
    }
    if (httpsPorts) {
      res["HttpsPorts"] = boost::any(*httpsPorts);
    }
    if (ipBlacklist) {
      res["IpBlacklist"] = boost::any(*ipBlacklist);
    }
    if (ipBlacklistIpInRuleMaxCount) {
      res["IpBlacklistIpInRuleMaxCount"] = boost::any(*ipBlacklistIpInRuleMaxCount);
    }
    if (ipBlacklistRuleInTemplateMaxCount) {
      res["IpBlacklistRuleInTemplateMaxCount"] = boost::any(*ipBlacklistRuleInTemplateMaxCount);
    }
    if (ipBlacklistTemplateMaxCount) {
      res["IpBlacklistTemplateMaxCount"] = boost::any(*ipBlacklistTemplateMaxCount);
    }
    if (ipv6) {
      res["Ipv6"] = boost::any(*ipv6);
    }
    if (logService) {
      res["LogService"] = boost::any(*logService);
    }
    if (majorProtection) {
      res["MajorProtection"] = boost::any(*majorProtection);
    }
    if (majorProtectionTemplateMaxCount) {
      res["MajorProtectionTemplateMaxCount"] = boost::any(*majorProtectionTemplateMaxCount);
    }
    if (vastIpBlacklistInFileMaxCount) {
      res["VastIpBlacklistInFileMaxCount"] = boost::any(*vastIpBlacklistInFileMaxCount);
    }
    if (vastIpBlacklistInOperationMaxCount) {
      res["VastIpBlacklistInOperationMaxCount"] = boost::any(*vastIpBlacklistInOperationMaxCount);
    }
    if (vastIpBlacklistMaxCount) {
      res["VastIpBlacklistMaxCount"] = boost::any(*vastIpBlacklistMaxCount);
    }
    if (whitelist) {
      res["Whitelist"] = boost::any(*whitelist);
    }
    if (whitelistLogical) {
      res["WhitelistLogical"] = boost::any(*whitelistLogical);
    }
    if (whitelistRuleCondition) {
      res["WhitelistRuleCondition"] = boost::any(*whitelistRuleCondition);
    }
    if (whitelistRuleInTemplateMaxCount) {
      res["WhitelistRuleInTemplateMaxCount"] = boost::any(*whitelistRuleInTemplateMaxCount);
    }
    if (whitelistTemplateMaxCount) {
      res["WhitelistTemplateMaxCount"] = boost::any(*whitelistTemplateMaxCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclRuleMaxIpCount") != m.end() && !m["AclRuleMaxIpCount"].empty()) {
      aclRuleMaxIpCount = make_shared<long>(boost::any_cast<long>(m["AclRuleMaxIpCount"]));
    }
    if (m.find("AntiScan") != m.end() && !m["AntiScan"].empty()) {
      antiScan = make_shared<bool>(boost::any_cast<bool>(m["AntiScan"]));
    }
    if (m.find("AntiScanTemplateMaxCount") != m.end() && !m["AntiScanTemplateMaxCount"].empty()) {
      antiScanTemplateMaxCount = make_shared<long>(boost::any_cast<long>(m["AntiScanTemplateMaxCount"]));
    }
    if (m.find("BackendMaxCount") != m.end() && !m["BackendMaxCount"].empty()) {
      backendMaxCount = make_shared<long>(boost::any_cast<long>(m["BackendMaxCount"]));
    }
    if (m.find("BaseWafGroup") != m.end() && !m["BaseWafGroup"].empty()) {
      baseWafGroup = make_shared<bool>(boost::any_cast<bool>(m["BaseWafGroup"]));
    }
    if (m.find("BaseWafGroupRuleInTemplateMaxCount") != m.end() && !m["BaseWafGroupRuleInTemplateMaxCount"].empty()) {
      baseWafGroupRuleInTemplateMaxCount = make_shared<long>(boost::any_cast<long>(m["BaseWafGroupRuleInTemplateMaxCount"]));
    }
    if (m.find("BaseWafGroupRuleTemplateMaxCount") != m.end() && !m["BaseWafGroupRuleTemplateMaxCount"].empty()) {
      baseWafGroupRuleTemplateMaxCount = make_shared<long>(boost::any_cast<long>(m["BaseWafGroupRuleTemplateMaxCount"]));
    }
    if (m.find("CnameResourceMaxCount") != m.end() && !m["CnameResourceMaxCount"].empty()) {
      cnameResourceMaxCount = make_shared<long>(boost::any_cast<long>(m["CnameResourceMaxCount"]));
    }
    if (m.find("CustomResponse") != m.end() && !m["CustomResponse"].empty()) {
      customResponse = make_shared<bool>(boost::any_cast<bool>(m["CustomResponse"]));
    }
    if (m.find("CustomResponseRuleInTemplateMaxCount") != m.end() && !m["CustomResponseRuleInTemplateMaxCount"].empty()) {
      customResponseRuleInTemplateMaxCount = make_shared<long>(boost::any_cast<long>(m["CustomResponseRuleInTemplateMaxCount"]));
    }
    if (m.find("CustomResponseTemplateMaxCount") != m.end() && !m["CustomResponseTemplateMaxCount"].empty()) {
      customResponseTemplateMaxCount = make_shared<long>(boost::any_cast<long>(m["CustomResponseTemplateMaxCount"]));
    }
    if (m.find("CustomRule") != m.end() && !m["CustomRule"].empty()) {
      customRule = make_shared<bool>(boost::any_cast<bool>(m["CustomRule"]));
    }
    if (m.find("CustomRuleAction") != m.end() && !m["CustomRuleAction"].empty()) {
      customRuleAction = make_shared<string>(boost::any_cast<string>(m["CustomRuleAction"]));
    }
    if (m.find("CustomRuleCondition") != m.end() && !m["CustomRuleCondition"].empty()) {
      customRuleCondition = make_shared<string>(boost::any_cast<string>(m["CustomRuleCondition"]));
    }
    if (m.find("CustomRuleInTemplateMaxCount") != m.end() && !m["CustomRuleInTemplateMaxCount"].empty()) {
      customRuleInTemplateMaxCount = make_shared<long>(boost::any_cast<long>(m["CustomRuleInTemplateMaxCount"]));
    }
    if (m.find("CustomRuleRatelimitor") != m.end() && !m["CustomRuleRatelimitor"].empty()) {
      customRuleRatelimitor = make_shared<string>(boost::any_cast<string>(m["CustomRuleRatelimitor"]));
    }
    if (m.find("CustomRuleTemplateMaxCount") != m.end() && !m["CustomRuleTemplateMaxCount"].empty()) {
      customRuleTemplateMaxCount = make_shared<long>(boost::any_cast<long>(m["CustomRuleTemplateMaxCount"]));
    }
    if (m.find("DefenseGroupMaxCount") != m.end() && !m["DefenseGroupMaxCount"].empty()) {
      defenseGroupMaxCount = make_shared<long>(boost::any_cast<long>(m["DefenseGroupMaxCount"]));
    }
    if (m.find("DefenseObjectInGroupMaxCount") != m.end() && !m["DefenseObjectInGroupMaxCount"].empty()) {
      defenseObjectInGroupMaxCount = make_shared<long>(boost::any_cast<long>(m["DefenseObjectInGroupMaxCount"]));
    }
    if (m.find("DefenseObjectInTemplateMaxCount") != m.end() && !m["DefenseObjectInTemplateMaxCount"].empty()) {
      defenseObjectInTemplateMaxCount = make_shared<long>(boost::any_cast<long>(m["DefenseObjectInTemplateMaxCount"]));
    }
    if (m.find("DefenseObjectMaxCount") != m.end() && !m["DefenseObjectMaxCount"].empty()) {
      defenseObjectMaxCount = make_shared<long>(boost::any_cast<long>(m["DefenseObjectMaxCount"]));
    }
    if (m.find("ExclusiveIp") != m.end() && !m["ExclusiveIp"].empty()) {
      exclusiveIp = make_shared<bool>(boost::any_cast<bool>(m["ExclusiveIp"]));
    }
    if (m.find("Gslb") != m.end() && !m["Gslb"].empty()) {
      gslb = make_shared<bool>(boost::any_cast<bool>(m["Gslb"]));
    }
    if (m.find("HttpPorts") != m.end() && !m["HttpPorts"].empty()) {
      httpPorts = make_shared<string>(boost::any_cast<string>(m["HttpPorts"]));
    }
    if (m.find("HttpsPorts") != m.end() && !m["HttpsPorts"].empty()) {
      httpsPorts = make_shared<string>(boost::any_cast<string>(m["HttpsPorts"]));
    }
    if (m.find("IpBlacklist") != m.end() && !m["IpBlacklist"].empty()) {
      ipBlacklist = make_shared<bool>(boost::any_cast<bool>(m["IpBlacklist"]));
    }
    if (m.find("IpBlacklistIpInRuleMaxCount") != m.end() && !m["IpBlacklistIpInRuleMaxCount"].empty()) {
      ipBlacklistIpInRuleMaxCount = make_shared<long>(boost::any_cast<long>(m["IpBlacklistIpInRuleMaxCount"]));
    }
    if (m.find("IpBlacklistRuleInTemplateMaxCount") != m.end() && !m["IpBlacklistRuleInTemplateMaxCount"].empty()) {
      ipBlacklistRuleInTemplateMaxCount = make_shared<long>(boost::any_cast<long>(m["IpBlacklistRuleInTemplateMaxCount"]));
    }
    if (m.find("IpBlacklistTemplateMaxCount") != m.end() && !m["IpBlacklistTemplateMaxCount"].empty()) {
      ipBlacklistTemplateMaxCount = make_shared<long>(boost::any_cast<long>(m["IpBlacklistTemplateMaxCount"]));
    }
    if (m.find("Ipv6") != m.end() && !m["Ipv6"].empty()) {
      ipv6 = make_shared<bool>(boost::any_cast<bool>(m["Ipv6"]));
    }
    if (m.find("LogService") != m.end() && !m["LogService"].empty()) {
      logService = make_shared<bool>(boost::any_cast<bool>(m["LogService"]));
    }
    if (m.find("MajorProtection") != m.end() && !m["MajorProtection"].empty()) {
      majorProtection = make_shared<bool>(boost::any_cast<bool>(m["MajorProtection"]));
    }
    if (m.find("MajorProtectionTemplateMaxCount") != m.end() && !m["MajorProtectionTemplateMaxCount"].empty()) {
      majorProtectionTemplateMaxCount = make_shared<long>(boost::any_cast<long>(m["MajorProtectionTemplateMaxCount"]));
    }
    if (m.find("VastIpBlacklistInFileMaxCount") != m.end() && !m["VastIpBlacklistInFileMaxCount"].empty()) {
      vastIpBlacklistInFileMaxCount = make_shared<long>(boost::any_cast<long>(m["VastIpBlacklistInFileMaxCount"]));
    }
    if (m.find("VastIpBlacklistInOperationMaxCount") != m.end() && !m["VastIpBlacklistInOperationMaxCount"].empty()) {
      vastIpBlacklistInOperationMaxCount = make_shared<long>(boost::any_cast<long>(m["VastIpBlacklistInOperationMaxCount"]));
    }
    if (m.find("VastIpBlacklistMaxCount") != m.end() && !m["VastIpBlacklistMaxCount"].empty()) {
      vastIpBlacklistMaxCount = make_shared<long>(boost::any_cast<long>(m["VastIpBlacklistMaxCount"]));
    }
    if (m.find("Whitelist") != m.end() && !m["Whitelist"].empty()) {
      whitelist = make_shared<bool>(boost::any_cast<bool>(m["Whitelist"]));
    }
    if (m.find("WhitelistLogical") != m.end() && !m["WhitelistLogical"].empty()) {
      whitelistLogical = make_shared<string>(boost::any_cast<string>(m["WhitelistLogical"]));
    }
    if (m.find("WhitelistRuleCondition") != m.end() && !m["WhitelistRuleCondition"].empty()) {
      whitelistRuleCondition = make_shared<string>(boost::any_cast<string>(m["WhitelistRuleCondition"]));
    }
    if (m.find("WhitelistRuleInTemplateMaxCount") != m.end() && !m["WhitelistRuleInTemplateMaxCount"].empty()) {
      whitelistRuleInTemplateMaxCount = make_shared<long>(boost::any_cast<long>(m["WhitelistRuleInTemplateMaxCount"]));
    }
    if (m.find("WhitelistTemplateMaxCount") != m.end() && !m["WhitelistTemplateMaxCount"].empty()) {
      whitelistTemplateMaxCount = make_shared<long>(boost::any_cast<long>(m["WhitelistTemplateMaxCount"]));
    }
  }


  virtual ~DescribeInstanceResponseBodyDetails() = default;
};
class DescribeInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeInstanceResponseBodyDetails> details{};
  shared_ptr<string> edition{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> requestId{};

  DescribeInstanceResponseBody() {}

  explicit DescribeInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (details) {
      res["Details"] = details ? boost::any(details->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (edition) {
      res["Edition"] = boost::any(*edition);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
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
    if (m.find("Details") != m.end() && !m["Details"].empty()) {
      if (typeid(map<string, boost::any>) == m["Details"].type()) {
        DescribeInstanceResponseBodyDetails model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Details"]));
        details = make_shared<DescribeInstanceResponseBodyDetails>(model1);
      }
    }
    if (m.find("Edition") != m.end() && !m["Edition"].empty()) {
      edition = make_shared<string>(boost::any_cast<string>(m["Edition"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeInstanceResponseBody() = default;
};
class DescribeInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeInstanceResponseBody> body{};

  DescribeInstanceResponse() {}

  explicit DescribeInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeInstanceResponse() = default;
};
class DescribeInstanceCompatibleRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};

  DescribeInstanceCompatibleRequest() {}

  explicit DescribeInstanceCompatibleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~DescribeInstanceCompatibleRequest() = default;
};
class DescribeInstanceCompatibleResponseBodyDetails : public Darabonba::Model {
public:
  shared_ptr<bool> antiScan{};
  shared_ptr<long> antiScanTemplateMaxCount{};
  shared_ptr<long> backendMaxCount{};
  shared_ptr<bool> baseWafGroup{};
  shared_ptr<long> baseWafGroupRuleInTemplateMaxCount{};
  shared_ptr<long> baseWafGroupRuleTemplateMaxCount{};
  shared_ptr<long> cnameResourceMaxCount{};
  shared_ptr<bool> customResponse{};
  shared_ptr<long> customResponseRuleInTemplateMaxCount{};
  shared_ptr<long> customResponseTemplateMaxCount{};
  shared_ptr<bool> customRule{};
  shared_ptr<string> customRuleAction{};
  shared_ptr<string> customRuleCondition{};
  shared_ptr<long> customRuleInTemplateMaxCount{};
  shared_ptr<string> customRuleRatelimitor{};
  shared_ptr<long> customRuleTemplateMaxCount{};
  shared_ptr<long> defenseGroupMaxCount{};
  shared_ptr<long> defenseObjectInGroupMaxCount{};
  shared_ptr<long> defenseObjectInTemplateMaxCount{};
  shared_ptr<long> defenseObjectMaxCount{};
  shared_ptr<bool> exclusiveIp{};
  shared_ptr<bool> gslb{};
  shared_ptr<bool> ipBlacklist{};
  shared_ptr<long> ipBlacklistIpInRuleMaxCount{};
  shared_ptr<long> ipBlacklistRuleInTemplateMaxCount{};
  shared_ptr<long> ipBlacklistTemplateMaxCount{};
  shared_ptr<bool> ipv6{};
  shared_ptr<bool> logService{};
  shared_ptr<bool> whitelist{};
  shared_ptr<string> whitelistLogical{};
  shared_ptr<string> whitelistRuleCondition{};
  shared_ptr<long> whitelistRuleInTemplateMaxCount{};
  shared_ptr<long> whitelistTemplateMaxCount{};

  DescribeInstanceCompatibleResponseBodyDetails() {}

  explicit DescribeInstanceCompatibleResponseBodyDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (antiScan) {
      res["AntiScan"] = boost::any(*antiScan);
    }
    if (antiScanTemplateMaxCount) {
      res["AntiScanTemplateMaxCount"] = boost::any(*antiScanTemplateMaxCount);
    }
    if (backendMaxCount) {
      res["BackendMaxCount"] = boost::any(*backendMaxCount);
    }
    if (baseWafGroup) {
      res["BaseWafGroup"] = boost::any(*baseWafGroup);
    }
    if (baseWafGroupRuleInTemplateMaxCount) {
      res["BaseWafGroupRuleInTemplateMaxCount"] = boost::any(*baseWafGroupRuleInTemplateMaxCount);
    }
    if (baseWafGroupRuleTemplateMaxCount) {
      res["BaseWafGroupRuleTemplateMaxCount"] = boost::any(*baseWafGroupRuleTemplateMaxCount);
    }
    if (cnameResourceMaxCount) {
      res["CnameResourceMaxCount"] = boost::any(*cnameResourceMaxCount);
    }
    if (customResponse) {
      res["CustomResponse"] = boost::any(*customResponse);
    }
    if (customResponseRuleInTemplateMaxCount) {
      res["CustomResponseRuleInTemplateMaxCount"] = boost::any(*customResponseRuleInTemplateMaxCount);
    }
    if (customResponseTemplateMaxCount) {
      res["CustomResponseTemplateMaxCount"] = boost::any(*customResponseTemplateMaxCount);
    }
    if (customRule) {
      res["CustomRule"] = boost::any(*customRule);
    }
    if (customRuleAction) {
      res["CustomRuleAction"] = boost::any(*customRuleAction);
    }
    if (customRuleCondition) {
      res["CustomRuleCondition"] = boost::any(*customRuleCondition);
    }
    if (customRuleInTemplateMaxCount) {
      res["CustomRuleInTemplateMaxCount"] = boost::any(*customRuleInTemplateMaxCount);
    }
    if (customRuleRatelimitor) {
      res["CustomRuleRatelimitor"] = boost::any(*customRuleRatelimitor);
    }
    if (customRuleTemplateMaxCount) {
      res["CustomRuleTemplateMaxCount"] = boost::any(*customRuleTemplateMaxCount);
    }
    if (defenseGroupMaxCount) {
      res["DefenseGroupMaxCount"] = boost::any(*defenseGroupMaxCount);
    }
    if (defenseObjectInGroupMaxCount) {
      res["DefenseObjectInGroupMaxCount"] = boost::any(*defenseObjectInGroupMaxCount);
    }
    if (defenseObjectInTemplateMaxCount) {
      res["DefenseObjectInTemplateMaxCount"] = boost::any(*defenseObjectInTemplateMaxCount);
    }
    if (defenseObjectMaxCount) {
      res["DefenseObjectMaxCount"] = boost::any(*defenseObjectMaxCount);
    }
    if (exclusiveIp) {
      res["ExclusiveIp"] = boost::any(*exclusiveIp);
    }
    if (gslb) {
      res["Gslb"] = boost::any(*gslb);
    }
    if (ipBlacklist) {
      res["IpBlacklist"] = boost::any(*ipBlacklist);
    }
    if (ipBlacklistIpInRuleMaxCount) {
      res["IpBlacklistIpInRuleMaxCount"] = boost::any(*ipBlacklistIpInRuleMaxCount);
    }
    if (ipBlacklistRuleInTemplateMaxCount) {
      res["IpBlacklistRuleInTemplateMaxCount"] = boost::any(*ipBlacklistRuleInTemplateMaxCount);
    }
    if (ipBlacklistTemplateMaxCount) {
      res["IpBlacklistTemplateMaxCount"] = boost::any(*ipBlacklistTemplateMaxCount);
    }
    if (ipv6) {
      res["Ipv6"] = boost::any(*ipv6);
    }
    if (logService) {
      res["LogService"] = boost::any(*logService);
    }
    if (whitelist) {
      res["Whitelist"] = boost::any(*whitelist);
    }
    if (whitelistLogical) {
      res["WhitelistLogical"] = boost::any(*whitelistLogical);
    }
    if (whitelistRuleCondition) {
      res["WhitelistRuleCondition"] = boost::any(*whitelistRuleCondition);
    }
    if (whitelistRuleInTemplateMaxCount) {
      res["WhitelistRuleInTemplateMaxCount"] = boost::any(*whitelistRuleInTemplateMaxCount);
    }
    if (whitelistTemplateMaxCount) {
      res["WhitelistTemplateMaxCount"] = boost::any(*whitelistTemplateMaxCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AntiScan") != m.end() && !m["AntiScan"].empty()) {
      antiScan = make_shared<bool>(boost::any_cast<bool>(m["AntiScan"]));
    }
    if (m.find("AntiScanTemplateMaxCount") != m.end() && !m["AntiScanTemplateMaxCount"].empty()) {
      antiScanTemplateMaxCount = make_shared<long>(boost::any_cast<long>(m["AntiScanTemplateMaxCount"]));
    }
    if (m.find("BackendMaxCount") != m.end() && !m["BackendMaxCount"].empty()) {
      backendMaxCount = make_shared<long>(boost::any_cast<long>(m["BackendMaxCount"]));
    }
    if (m.find("BaseWafGroup") != m.end() && !m["BaseWafGroup"].empty()) {
      baseWafGroup = make_shared<bool>(boost::any_cast<bool>(m["BaseWafGroup"]));
    }
    if (m.find("BaseWafGroupRuleInTemplateMaxCount") != m.end() && !m["BaseWafGroupRuleInTemplateMaxCount"].empty()) {
      baseWafGroupRuleInTemplateMaxCount = make_shared<long>(boost::any_cast<long>(m["BaseWafGroupRuleInTemplateMaxCount"]));
    }
    if (m.find("BaseWafGroupRuleTemplateMaxCount") != m.end() && !m["BaseWafGroupRuleTemplateMaxCount"].empty()) {
      baseWafGroupRuleTemplateMaxCount = make_shared<long>(boost::any_cast<long>(m["BaseWafGroupRuleTemplateMaxCount"]));
    }
    if (m.find("CnameResourceMaxCount") != m.end() && !m["CnameResourceMaxCount"].empty()) {
      cnameResourceMaxCount = make_shared<long>(boost::any_cast<long>(m["CnameResourceMaxCount"]));
    }
    if (m.find("CustomResponse") != m.end() && !m["CustomResponse"].empty()) {
      customResponse = make_shared<bool>(boost::any_cast<bool>(m["CustomResponse"]));
    }
    if (m.find("CustomResponseRuleInTemplateMaxCount") != m.end() && !m["CustomResponseRuleInTemplateMaxCount"].empty()) {
      customResponseRuleInTemplateMaxCount = make_shared<long>(boost::any_cast<long>(m["CustomResponseRuleInTemplateMaxCount"]));
    }
    if (m.find("CustomResponseTemplateMaxCount") != m.end() && !m["CustomResponseTemplateMaxCount"].empty()) {
      customResponseTemplateMaxCount = make_shared<long>(boost::any_cast<long>(m["CustomResponseTemplateMaxCount"]));
    }
    if (m.find("CustomRule") != m.end() && !m["CustomRule"].empty()) {
      customRule = make_shared<bool>(boost::any_cast<bool>(m["CustomRule"]));
    }
    if (m.find("CustomRuleAction") != m.end() && !m["CustomRuleAction"].empty()) {
      customRuleAction = make_shared<string>(boost::any_cast<string>(m["CustomRuleAction"]));
    }
    if (m.find("CustomRuleCondition") != m.end() && !m["CustomRuleCondition"].empty()) {
      customRuleCondition = make_shared<string>(boost::any_cast<string>(m["CustomRuleCondition"]));
    }
    if (m.find("CustomRuleInTemplateMaxCount") != m.end() && !m["CustomRuleInTemplateMaxCount"].empty()) {
      customRuleInTemplateMaxCount = make_shared<long>(boost::any_cast<long>(m["CustomRuleInTemplateMaxCount"]));
    }
    if (m.find("CustomRuleRatelimitor") != m.end() && !m["CustomRuleRatelimitor"].empty()) {
      customRuleRatelimitor = make_shared<string>(boost::any_cast<string>(m["CustomRuleRatelimitor"]));
    }
    if (m.find("CustomRuleTemplateMaxCount") != m.end() && !m["CustomRuleTemplateMaxCount"].empty()) {
      customRuleTemplateMaxCount = make_shared<long>(boost::any_cast<long>(m["CustomRuleTemplateMaxCount"]));
    }
    if (m.find("DefenseGroupMaxCount") != m.end() && !m["DefenseGroupMaxCount"].empty()) {
      defenseGroupMaxCount = make_shared<long>(boost::any_cast<long>(m["DefenseGroupMaxCount"]));
    }
    if (m.find("DefenseObjectInGroupMaxCount") != m.end() && !m["DefenseObjectInGroupMaxCount"].empty()) {
      defenseObjectInGroupMaxCount = make_shared<long>(boost::any_cast<long>(m["DefenseObjectInGroupMaxCount"]));
    }
    if (m.find("DefenseObjectInTemplateMaxCount") != m.end() && !m["DefenseObjectInTemplateMaxCount"].empty()) {
      defenseObjectInTemplateMaxCount = make_shared<long>(boost::any_cast<long>(m["DefenseObjectInTemplateMaxCount"]));
    }
    if (m.find("DefenseObjectMaxCount") != m.end() && !m["DefenseObjectMaxCount"].empty()) {
      defenseObjectMaxCount = make_shared<long>(boost::any_cast<long>(m["DefenseObjectMaxCount"]));
    }
    if (m.find("ExclusiveIp") != m.end() && !m["ExclusiveIp"].empty()) {
      exclusiveIp = make_shared<bool>(boost::any_cast<bool>(m["ExclusiveIp"]));
    }
    if (m.find("Gslb") != m.end() && !m["Gslb"].empty()) {
      gslb = make_shared<bool>(boost::any_cast<bool>(m["Gslb"]));
    }
    if (m.find("IpBlacklist") != m.end() && !m["IpBlacklist"].empty()) {
      ipBlacklist = make_shared<bool>(boost::any_cast<bool>(m["IpBlacklist"]));
    }
    if (m.find("IpBlacklistIpInRuleMaxCount") != m.end() && !m["IpBlacklistIpInRuleMaxCount"].empty()) {
      ipBlacklistIpInRuleMaxCount = make_shared<long>(boost::any_cast<long>(m["IpBlacklistIpInRuleMaxCount"]));
    }
    if (m.find("IpBlacklistRuleInTemplateMaxCount") != m.end() && !m["IpBlacklistRuleInTemplateMaxCount"].empty()) {
      ipBlacklistRuleInTemplateMaxCount = make_shared<long>(boost::any_cast<long>(m["IpBlacklistRuleInTemplateMaxCount"]));
    }
    if (m.find("IpBlacklistTemplateMaxCount") != m.end() && !m["IpBlacklistTemplateMaxCount"].empty()) {
      ipBlacklistTemplateMaxCount = make_shared<long>(boost::any_cast<long>(m["IpBlacklistTemplateMaxCount"]));
    }
    if (m.find("Ipv6") != m.end() && !m["Ipv6"].empty()) {
      ipv6 = make_shared<bool>(boost::any_cast<bool>(m["Ipv6"]));
    }
    if (m.find("LogService") != m.end() && !m["LogService"].empty()) {
      logService = make_shared<bool>(boost::any_cast<bool>(m["LogService"]));
    }
    if (m.find("Whitelist") != m.end() && !m["Whitelist"].empty()) {
      whitelist = make_shared<bool>(boost::any_cast<bool>(m["Whitelist"]));
    }
    if (m.find("WhitelistLogical") != m.end() && !m["WhitelistLogical"].empty()) {
      whitelistLogical = make_shared<string>(boost::any_cast<string>(m["WhitelistLogical"]));
    }
    if (m.find("WhitelistRuleCondition") != m.end() && !m["WhitelistRuleCondition"].empty()) {
      whitelistRuleCondition = make_shared<string>(boost::any_cast<string>(m["WhitelistRuleCondition"]));
    }
    if (m.find("WhitelistRuleInTemplateMaxCount") != m.end() && !m["WhitelistRuleInTemplateMaxCount"].empty()) {
      whitelistRuleInTemplateMaxCount = make_shared<long>(boost::any_cast<long>(m["WhitelistRuleInTemplateMaxCount"]));
    }
    if (m.find("WhitelistTemplateMaxCount") != m.end() && !m["WhitelistTemplateMaxCount"].empty()) {
      whitelistTemplateMaxCount = make_shared<long>(boost::any_cast<long>(m["WhitelistTemplateMaxCount"]));
    }
  }


  virtual ~DescribeInstanceCompatibleResponseBodyDetails() = default;
};
class DescribeInstanceCompatibleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> commodityCode{};
  shared_ptr<DescribeInstanceCompatibleResponseBodyDetails> details{};
  shared_ptr<string> edition{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> payType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> requestId{};

  DescribeInstanceCompatibleResponseBody() {}

  explicit DescribeInstanceCompatibleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    if (details) {
      res["Details"] = details ? boost::any(details->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (edition) {
      res["Edition"] = boost::any(*edition);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
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
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
    if (m.find("Details") != m.end() && !m["Details"].empty()) {
      if (typeid(map<string, boost::any>) == m["Details"].type()) {
        DescribeInstanceCompatibleResponseBodyDetails model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Details"]));
        details = make_shared<DescribeInstanceCompatibleResponseBodyDetails>(model1);
      }
    }
    if (m.find("Edition") != m.end() && !m["Edition"].empty()) {
      edition = make_shared<string>(boost::any_cast<string>(m["Edition"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeInstanceCompatibleResponseBody() = default;
};
class DescribeInstanceCompatibleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeInstanceCompatibleResponseBody> body{};

  DescribeInstanceCompatibleResponse() {}

  explicit DescribeInstanceCompatibleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeInstanceCompatibleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeInstanceCompatibleResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeInstanceCompatibleResponse() = default;
};
class DescribeInstanceExtendRequest : public Darabonba::Model {
public:
  shared_ptr<string> edition{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};

  DescribeInstanceExtendRequest() {}

  explicit DescribeInstanceExtendRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (edition) {
      res["Edition"] = boost::any(*edition);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Edition") != m.end() && !m["Edition"].empty()) {
      edition = make_shared<string>(boost::any_cast<string>(m["Edition"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~DescribeInstanceExtendRequest() = default;
};
class DescribeInstanceExtendResponseBodyInstances : public Darabonba::Model {
public:
  shared_ptr<long> expireTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};

  DescribeInstanceExtendResponseBodyInstances() {}

  explicit DescribeInstanceExtendResponseBodyInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<long>(boost::any_cast<long>(m["ExpireTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeInstanceExtendResponseBodyInstances() = default;
};
class DescribeInstanceExtendResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeInstanceExtendResponseBodyInstances>> instances{};
  shared_ptr<string> requestId{};

  DescribeInstanceExtendResponseBody() {}

  explicit DescribeInstanceExtendResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instances) {
      vector<boost::any> temp1;
      for(auto item1:*instances){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Instances"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Instances") != m.end() && !m["Instances"].empty()) {
      if (typeid(vector<boost::any>) == m["Instances"].type()) {
        vector<DescribeInstanceExtendResponseBodyInstances> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Instances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInstanceExtendResponseBodyInstances model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instances = make_shared<vector<DescribeInstanceExtendResponseBodyInstances>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeInstanceExtendResponseBody() = default;
};
class DescribeInstanceExtendResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeInstanceExtendResponseBody> body{};

  DescribeInstanceExtendResponse() {}

  explicit DescribeInstanceExtendResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeInstanceExtendResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeInstanceExtendResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeInstanceExtendResponse() = default;
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
  CreateMajorProtectionBlackIpResponse createMajorProtectionBlackIpWithOptions(shared_ptr<CreateMajorProtectionBlackIpRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateMajorProtectionBlackIpResponse createMajorProtectionBlackIp(shared_ptr<CreateMajorProtectionBlackIpRequest> request);
  DescribeInstanceResponse describeInstanceWithOptions(shared_ptr<DescribeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeInstanceResponse describeInstance(shared_ptr<DescribeInstanceRequest> request);
  DescribeInstanceCompatibleResponse describeInstanceCompatibleWithOptions(shared_ptr<DescribeInstanceCompatibleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeInstanceCompatibleResponse describeInstanceCompatible(shared_ptr<DescribeInstanceCompatibleRequest> request);
  DescribeInstanceExtendResponse describeInstanceExtendWithOptions(shared_ptr<DescribeInstanceExtendRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeInstanceExtendResponse describeInstanceExtend(shared_ptr<DescribeInstanceExtendRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Waf-openapi20211001

#endif
