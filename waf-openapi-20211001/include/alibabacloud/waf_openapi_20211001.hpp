// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_WAF-OPENAPI20211001_H_
#define ALIBABACLOUD_WAF-OPENAPI20211001_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Waf-openapi20211001 {
class ClearMajorProtectionBlackIpRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceManagerResourceGroupId{};
  shared_ptr<long> ruleId{};
  shared_ptr<long> templateId{};

  ClearMajorProtectionBlackIpRequest() {}

  explicit ClearMajorProtectionBlackIpRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceManagerResourceGroupId) {
      res["ResourceManagerResourceGroupId"] = boost::any(*resourceManagerResourceGroupId);
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
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceManagerResourceGroupId") != m.end() && !m["ResourceManagerResourceGroupId"].empty()) {
      resourceManagerResourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceManagerResourceGroupId"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
  }


  virtual ~ClearMajorProtectionBlackIpRequest() = default;
};
class ClearMajorProtectionBlackIpResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ClearMajorProtectionBlackIpResponseBody() {}

  explicit ClearMajorProtectionBlackIpResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ClearMajorProtectionBlackIpResponseBody() = default;
};
class ClearMajorProtectionBlackIpResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ClearMajorProtectionBlackIpResponseBody> body{};

  ClearMajorProtectionBlackIpResponse() {}

  explicit ClearMajorProtectionBlackIpResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ClearMajorProtectionBlackIpResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ClearMajorProtectionBlackIpResponseBody>(model1);
      }
    }
  }


  virtual ~ClearMajorProtectionBlackIpResponse() = default;
};
class CreateDefenseResourceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> addList{};
  shared_ptr<string> description{};
  shared_ptr<string> groupName{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceManagerResourceGroupId{};

  CreateDefenseResourceGroupRequest() {}

  explicit CreateDefenseResourceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addList) {
      res["AddList"] = boost::any(*addList);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceManagerResourceGroupId) {
      res["ResourceManagerResourceGroupId"] = boost::any(*resourceManagerResourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddList") != m.end() && !m["AddList"].empty()) {
      addList = make_shared<string>(boost::any_cast<string>(m["AddList"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceManagerResourceGroupId") != m.end() && !m["ResourceManagerResourceGroupId"].empty()) {
      resourceManagerResourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceManagerResourceGroupId"]));
    }
  }


  virtual ~CreateDefenseResourceGroupRequest() = default;
};
class CreateDefenseResourceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateDefenseResourceGroupResponseBody() {}

  explicit CreateDefenseResourceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateDefenseResourceGroupResponseBody() = default;
};
class CreateDefenseResourceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDefenseResourceGroupResponseBody> body{};

  CreateDefenseResourceGroupResponse() {}

  explicit CreateDefenseResourceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDefenseResourceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDefenseResourceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDefenseResourceGroupResponse() = default;
};
class CreateDefenseRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> defenseScene{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceManagerResourceGroupId{};
  shared_ptr<string> rules{};
  shared_ptr<long> templateId{};

  CreateDefenseRuleRequest() {}

  explicit CreateDefenseRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defenseScene) {
      res["DefenseScene"] = boost::any(*defenseScene);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceManagerResourceGroupId) {
      res["ResourceManagerResourceGroupId"] = boost::any(*resourceManagerResourceGroupId);
    }
    if (rules) {
      res["Rules"] = boost::any(*rules);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefenseScene") != m.end() && !m["DefenseScene"].empty()) {
      defenseScene = make_shared<string>(boost::any_cast<string>(m["DefenseScene"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceManagerResourceGroupId") != m.end() && !m["ResourceManagerResourceGroupId"].empty()) {
      resourceManagerResourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceManagerResourceGroupId"]));
    }
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      rules = make_shared<string>(boost::any_cast<string>(m["Rules"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
  }


  virtual ~CreateDefenseRuleRequest() = default;
};
class CreateDefenseRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateDefenseRuleResponseBody() {}

  explicit CreateDefenseRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateDefenseRuleResponseBody() = default;
};
class CreateDefenseRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDefenseRuleResponseBody> body{};

  CreateDefenseRuleResponse() {}

  explicit CreateDefenseRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDefenseRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDefenseRuleResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDefenseRuleResponse() = default;
};
class CreateDefenseTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> defenseScene{};
  shared_ptr<string> description{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceManagerResourceGroupId{};
  shared_ptr<string> templateName{};
  shared_ptr<string> templateOrigin{};
  shared_ptr<long> templateStatus{};
  shared_ptr<string> templateType{};

  CreateDefenseTemplateRequest() {}

  explicit CreateDefenseTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defenseScene) {
      res["DefenseScene"] = boost::any(*defenseScene);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceManagerResourceGroupId) {
      res["ResourceManagerResourceGroupId"] = boost::any(*resourceManagerResourceGroupId);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (templateOrigin) {
      res["TemplateOrigin"] = boost::any(*templateOrigin);
    }
    if (templateStatus) {
      res["TemplateStatus"] = boost::any(*templateStatus);
    }
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefenseScene") != m.end() && !m["DefenseScene"].empty()) {
      defenseScene = make_shared<string>(boost::any_cast<string>(m["DefenseScene"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceManagerResourceGroupId") != m.end() && !m["ResourceManagerResourceGroupId"].empty()) {
      resourceManagerResourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceManagerResourceGroupId"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TemplateOrigin") != m.end() && !m["TemplateOrigin"].empty()) {
      templateOrigin = make_shared<string>(boost::any_cast<string>(m["TemplateOrigin"]));
    }
    if (m.find("TemplateStatus") != m.end() && !m["TemplateStatus"].empty()) {
      templateStatus = make_shared<long>(boost::any_cast<long>(m["TemplateStatus"]));
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<string>(boost::any_cast<string>(m["TemplateType"]));
    }
  }


  virtual ~CreateDefenseTemplateRequest() = default;
};
class CreateDefenseTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> templateId{};

  CreateDefenseTemplateResponseBody() {}

  explicit CreateDefenseTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
  }


  virtual ~CreateDefenseTemplateResponseBody() = default;
};
class CreateDefenseTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDefenseTemplateResponseBody> body{};

  CreateDefenseTemplateResponse() {}

  explicit CreateDefenseTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDefenseTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDefenseTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDefenseTemplateResponse() = default;
};
class CreateDomainRequestListen : public Darabonba::Model {
public:
  shared_ptr<string> certId{};
  shared_ptr<long> cipherSuite{};
  shared_ptr<vector<string>> customCiphers{};
  shared_ptr<bool> enableTLSv3{};
  shared_ptr<bool> exclusiveIp{};
  shared_ptr<bool> focusHttps{};
  shared_ptr<bool> http2Enabled{};
  shared_ptr<vector<long>> httpPorts{};
  shared_ptr<vector<long>> httpsPorts{};
  shared_ptr<bool> IPv6Enabled{};
  shared_ptr<string> protectionResource{};
  shared_ptr<bool> SM2AccessOnly{};
  shared_ptr<string> SM2CertId{};
  shared_ptr<bool> SM2Enabled{};
  shared_ptr<string> TLSVersion{};
  shared_ptr<long> xffHeaderMode{};
  shared_ptr<vector<string>> xffHeaders{};

  CreateDomainRequestListen() {}

  explicit CreateDomainRequestListen(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certId) {
      res["CertId"] = boost::any(*certId);
    }
    if (cipherSuite) {
      res["CipherSuite"] = boost::any(*cipherSuite);
    }
    if (customCiphers) {
      res["CustomCiphers"] = boost::any(*customCiphers);
    }
    if (enableTLSv3) {
      res["EnableTLSv3"] = boost::any(*enableTLSv3);
    }
    if (exclusiveIp) {
      res["ExclusiveIp"] = boost::any(*exclusiveIp);
    }
    if (focusHttps) {
      res["FocusHttps"] = boost::any(*focusHttps);
    }
    if (http2Enabled) {
      res["Http2Enabled"] = boost::any(*http2Enabled);
    }
    if (httpPorts) {
      res["HttpPorts"] = boost::any(*httpPorts);
    }
    if (httpsPorts) {
      res["HttpsPorts"] = boost::any(*httpsPorts);
    }
    if (IPv6Enabled) {
      res["IPv6Enabled"] = boost::any(*IPv6Enabled);
    }
    if (protectionResource) {
      res["ProtectionResource"] = boost::any(*protectionResource);
    }
    if (SM2AccessOnly) {
      res["SM2AccessOnly"] = boost::any(*SM2AccessOnly);
    }
    if (SM2CertId) {
      res["SM2CertId"] = boost::any(*SM2CertId);
    }
    if (SM2Enabled) {
      res["SM2Enabled"] = boost::any(*SM2Enabled);
    }
    if (TLSVersion) {
      res["TLSVersion"] = boost::any(*TLSVersion);
    }
    if (xffHeaderMode) {
      res["XffHeaderMode"] = boost::any(*xffHeaderMode);
    }
    if (xffHeaders) {
      res["XffHeaders"] = boost::any(*xffHeaders);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertId") != m.end() && !m["CertId"].empty()) {
      certId = make_shared<string>(boost::any_cast<string>(m["CertId"]));
    }
    if (m.find("CipherSuite") != m.end() && !m["CipherSuite"].empty()) {
      cipherSuite = make_shared<long>(boost::any_cast<long>(m["CipherSuite"]));
    }
    if (m.find("CustomCiphers") != m.end() && !m["CustomCiphers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CustomCiphers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CustomCiphers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      customCiphers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("EnableTLSv3") != m.end() && !m["EnableTLSv3"].empty()) {
      enableTLSv3 = make_shared<bool>(boost::any_cast<bool>(m["EnableTLSv3"]));
    }
    if (m.find("ExclusiveIp") != m.end() && !m["ExclusiveIp"].empty()) {
      exclusiveIp = make_shared<bool>(boost::any_cast<bool>(m["ExclusiveIp"]));
    }
    if (m.find("FocusHttps") != m.end() && !m["FocusHttps"].empty()) {
      focusHttps = make_shared<bool>(boost::any_cast<bool>(m["FocusHttps"]));
    }
    if (m.find("Http2Enabled") != m.end() && !m["Http2Enabled"].empty()) {
      http2Enabled = make_shared<bool>(boost::any_cast<bool>(m["Http2Enabled"]));
    }
    if (m.find("HttpPorts") != m.end() && !m["HttpPorts"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["HttpPorts"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["HttpPorts"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      httpPorts = make_shared<vector<long>>(toVec1);
    }
    if (m.find("HttpsPorts") != m.end() && !m["HttpsPorts"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["HttpsPorts"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["HttpsPorts"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      httpsPorts = make_shared<vector<long>>(toVec1);
    }
    if (m.find("IPv6Enabled") != m.end() && !m["IPv6Enabled"].empty()) {
      IPv6Enabled = make_shared<bool>(boost::any_cast<bool>(m["IPv6Enabled"]));
    }
    if (m.find("ProtectionResource") != m.end() && !m["ProtectionResource"].empty()) {
      protectionResource = make_shared<string>(boost::any_cast<string>(m["ProtectionResource"]));
    }
    if (m.find("SM2AccessOnly") != m.end() && !m["SM2AccessOnly"].empty()) {
      SM2AccessOnly = make_shared<bool>(boost::any_cast<bool>(m["SM2AccessOnly"]));
    }
    if (m.find("SM2CertId") != m.end() && !m["SM2CertId"].empty()) {
      SM2CertId = make_shared<string>(boost::any_cast<string>(m["SM2CertId"]));
    }
    if (m.find("SM2Enabled") != m.end() && !m["SM2Enabled"].empty()) {
      SM2Enabled = make_shared<bool>(boost::any_cast<bool>(m["SM2Enabled"]));
    }
    if (m.find("TLSVersion") != m.end() && !m["TLSVersion"].empty()) {
      TLSVersion = make_shared<string>(boost::any_cast<string>(m["TLSVersion"]));
    }
    if (m.find("XffHeaderMode") != m.end() && !m["XffHeaderMode"].empty()) {
      xffHeaderMode = make_shared<long>(boost::any_cast<long>(m["XffHeaderMode"]));
    }
    if (m.find("XffHeaders") != m.end() && !m["XffHeaders"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["XffHeaders"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["XffHeaders"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      xffHeaders = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateDomainRequestListen() = default;
};
class CreateDomainRequestRedirectRequestHeaders : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateDomainRequestRedirectRequestHeaders() {}

  explicit CreateDomainRequestRedirectRequestHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateDomainRequestRedirectRequestHeaders() = default;
};
class CreateDomainRequestRedirect : public Darabonba::Model {
public:
  shared_ptr<vector<string>> backends{};
  shared_ptr<bool> cnameEnabled{};
  shared_ptr<long> connectTimeout{};
  shared_ptr<bool> focusHttpBackend{};
  shared_ptr<bool> keepalive{};
  shared_ptr<long> keepaliveRequests{};
  shared_ptr<long> keepaliveTimeout{};
  shared_ptr<string> loadbalance{};
  shared_ptr<long> readTimeout{};
  shared_ptr<vector<CreateDomainRequestRedirectRequestHeaders>> requestHeaders{};
  shared_ptr<bool> retry{};
  shared_ptr<string> routingRules{};
  shared_ptr<bool> sniEnabled{};
  shared_ptr<string> sniHost{};
  shared_ptr<long> writeTimeout{};
  shared_ptr<bool> xffProto{};

  CreateDomainRequestRedirect() {}

  explicit CreateDomainRequestRedirect(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backends) {
      res["Backends"] = boost::any(*backends);
    }
    if (cnameEnabled) {
      res["CnameEnabled"] = boost::any(*cnameEnabled);
    }
    if (connectTimeout) {
      res["ConnectTimeout"] = boost::any(*connectTimeout);
    }
    if (focusHttpBackend) {
      res["FocusHttpBackend"] = boost::any(*focusHttpBackend);
    }
    if (keepalive) {
      res["Keepalive"] = boost::any(*keepalive);
    }
    if (keepaliveRequests) {
      res["KeepaliveRequests"] = boost::any(*keepaliveRequests);
    }
    if (keepaliveTimeout) {
      res["KeepaliveTimeout"] = boost::any(*keepaliveTimeout);
    }
    if (loadbalance) {
      res["Loadbalance"] = boost::any(*loadbalance);
    }
    if (readTimeout) {
      res["ReadTimeout"] = boost::any(*readTimeout);
    }
    if (requestHeaders) {
      vector<boost::any> temp1;
      for(auto item1:*requestHeaders){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RequestHeaders"] = boost::any(temp1);
    }
    if (retry) {
      res["Retry"] = boost::any(*retry);
    }
    if (routingRules) {
      res["RoutingRules"] = boost::any(*routingRules);
    }
    if (sniEnabled) {
      res["SniEnabled"] = boost::any(*sniEnabled);
    }
    if (sniHost) {
      res["SniHost"] = boost::any(*sniHost);
    }
    if (writeTimeout) {
      res["WriteTimeout"] = boost::any(*writeTimeout);
    }
    if (xffProto) {
      res["XffProto"] = boost::any(*xffProto);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Backends") != m.end() && !m["Backends"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Backends"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Backends"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      backends = make_shared<vector<string>>(toVec1);
    }
    if (m.find("CnameEnabled") != m.end() && !m["CnameEnabled"].empty()) {
      cnameEnabled = make_shared<bool>(boost::any_cast<bool>(m["CnameEnabled"]));
    }
    if (m.find("ConnectTimeout") != m.end() && !m["ConnectTimeout"].empty()) {
      connectTimeout = make_shared<long>(boost::any_cast<long>(m["ConnectTimeout"]));
    }
    if (m.find("FocusHttpBackend") != m.end() && !m["FocusHttpBackend"].empty()) {
      focusHttpBackend = make_shared<bool>(boost::any_cast<bool>(m["FocusHttpBackend"]));
    }
    if (m.find("Keepalive") != m.end() && !m["Keepalive"].empty()) {
      keepalive = make_shared<bool>(boost::any_cast<bool>(m["Keepalive"]));
    }
    if (m.find("KeepaliveRequests") != m.end() && !m["KeepaliveRequests"].empty()) {
      keepaliveRequests = make_shared<long>(boost::any_cast<long>(m["KeepaliveRequests"]));
    }
    if (m.find("KeepaliveTimeout") != m.end() && !m["KeepaliveTimeout"].empty()) {
      keepaliveTimeout = make_shared<long>(boost::any_cast<long>(m["KeepaliveTimeout"]));
    }
    if (m.find("Loadbalance") != m.end() && !m["Loadbalance"].empty()) {
      loadbalance = make_shared<string>(boost::any_cast<string>(m["Loadbalance"]));
    }
    if (m.find("ReadTimeout") != m.end() && !m["ReadTimeout"].empty()) {
      readTimeout = make_shared<long>(boost::any_cast<long>(m["ReadTimeout"]));
    }
    if (m.find("RequestHeaders") != m.end() && !m["RequestHeaders"].empty()) {
      if (typeid(vector<boost::any>) == m["RequestHeaders"].type()) {
        vector<CreateDomainRequestRedirectRequestHeaders> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RequestHeaders"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateDomainRequestRedirectRequestHeaders model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        requestHeaders = make_shared<vector<CreateDomainRequestRedirectRequestHeaders>>(expect1);
      }
    }
    if (m.find("Retry") != m.end() && !m["Retry"].empty()) {
      retry = make_shared<bool>(boost::any_cast<bool>(m["Retry"]));
    }
    if (m.find("RoutingRules") != m.end() && !m["RoutingRules"].empty()) {
      routingRules = make_shared<string>(boost::any_cast<string>(m["RoutingRules"]));
    }
    if (m.find("SniEnabled") != m.end() && !m["SniEnabled"].empty()) {
      sniEnabled = make_shared<bool>(boost::any_cast<bool>(m["SniEnabled"]));
    }
    if (m.find("SniHost") != m.end() && !m["SniHost"].empty()) {
      sniHost = make_shared<string>(boost::any_cast<string>(m["SniHost"]));
    }
    if (m.find("WriteTimeout") != m.end() && !m["WriteTimeout"].empty()) {
      writeTimeout = make_shared<long>(boost::any_cast<long>(m["WriteTimeout"]));
    }
    if (m.find("XffProto") != m.end() && !m["XffProto"].empty()) {
      xffProto = make_shared<bool>(boost::any_cast<bool>(m["XffProto"]));
    }
  }


  virtual ~CreateDomainRequestRedirect() = default;
};
class CreateDomainRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessType{};
  shared_ptr<string> domain{};
  shared_ptr<string> instanceId{};
  shared_ptr<CreateDomainRequestListen> listen{};
  shared_ptr<CreateDomainRequestRedirect> redirect{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceManagerResourceGroupId{};

  CreateDomainRequest() {}

  explicit CreateDomainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessType) {
      res["AccessType"] = boost::any(*accessType);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (listen) {
      res["Listen"] = listen ? boost::any(listen->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (redirect) {
      res["Redirect"] = redirect ? boost::any(redirect->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceManagerResourceGroupId) {
      res["ResourceManagerResourceGroupId"] = boost::any(*resourceManagerResourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessType") != m.end() && !m["AccessType"].empty()) {
      accessType = make_shared<string>(boost::any_cast<string>(m["AccessType"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Listen") != m.end() && !m["Listen"].empty()) {
      if (typeid(map<string, boost::any>) == m["Listen"].type()) {
        CreateDomainRequestListen model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Listen"]));
        listen = make_shared<CreateDomainRequestListen>(model1);
      }
    }
    if (m.find("Redirect") != m.end() && !m["Redirect"].empty()) {
      if (typeid(map<string, boost::any>) == m["Redirect"].type()) {
        CreateDomainRequestRedirect model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Redirect"]));
        redirect = make_shared<CreateDomainRequestRedirect>(model1);
      }
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceManagerResourceGroupId") != m.end() && !m["ResourceManagerResourceGroupId"].empty()) {
      resourceManagerResourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceManagerResourceGroupId"]));
    }
  }


  virtual ~CreateDomainRequest() = default;
};
class CreateDomainShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessType{};
  shared_ptr<string> domain{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> listenShrink{};
  shared_ptr<string> redirectShrink{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceManagerResourceGroupId{};

  CreateDomainShrinkRequest() {}

  explicit CreateDomainShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessType) {
      res["AccessType"] = boost::any(*accessType);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (listenShrink) {
      res["Listen"] = boost::any(*listenShrink);
    }
    if (redirectShrink) {
      res["Redirect"] = boost::any(*redirectShrink);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceManagerResourceGroupId) {
      res["ResourceManagerResourceGroupId"] = boost::any(*resourceManagerResourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessType") != m.end() && !m["AccessType"].empty()) {
      accessType = make_shared<string>(boost::any_cast<string>(m["AccessType"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Listen") != m.end() && !m["Listen"].empty()) {
      listenShrink = make_shared<string>(boost::any_cast<string>(m["Listen"]));
    }
    if (m.find("Redirect") != m.end() && !m["Redirect"].empty()) {
      redirectShrink = make_shared<string>(boost::any_cast<string>(m["Redirect"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceManagerResourceGroupId") != m.end() && !m["ResourceManagerResourceGroupId"].empty()) {
      resourceManagerResourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceManagerResourceGroupId"]));
    }
  }


  virtual ~CreateDomainShrinkRequest() = default;
};
class CreateDomainResponseBodyDomainInfo : public Darabonba::Model {
public:
  shared_ptr<string> cname{};
  shared_ptr<string> domain{};

  CreateDomainResponseBodyDomainInfo() {}

  explicit CreateDomainResponseBodyDomainInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cname) {
      res["Cname"] = boost::any(*cname);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cname") != m.end() && !m["Cname"].empty()) {
      cname = make_shared<string>(boost::any_cast<string>(m["Cname"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
  }


  virtual ~CreateDomainResponseBodyDomainInfo() = default;
};
class CreateDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateDomainResponseBodyDomainInfo> domainInfo{};
  shared_ptr<string> requestId{};

  CreateDomainResponseBody() {}

  explicit CreateDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainInfo) {
      res["DomainInfo"] = domainInfo ? boost::any(domainInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainInfo") != m.end() && !m["DomainInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DomainInfo"].type()) {
        CreateDomainResponseBodyDomainInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DomainInfo"]));
        domainInfo = make_shared<CreateDomainResponseBodyDomainInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
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
class CreateMajorProtectionBlackIpRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<long> expiredTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> ipList{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceManagerResourceGroupId{};
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceManagerResourceGroupId) {
      res["ResourceManagerResourceGroupId"] = boost::any(*resourceManagerResourceGroupId);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceManagerResourceGroupId") != m.end() && !m["ResourceManagerResourceGroupId"].empty()) {
      resourceManagerResourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceManagerResourceGroupId"]));
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
        CreateMajorProtectionBlackIpResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateMajorProtectionBlackIpResponseBody>(model1);
      }
    }
  }


  virtual ~CreateMajorProtectionBlackIpResponse() = default;
};
class CreateMemberAccountsRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<vector<string>> memberAccountIds{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceManagerResourceGroupId{};
  shared_ptr<string> sourceIp{};

  CreateMemberAccountsRequest() {}

  explicit CreateMemberAccountsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (memberAccountIds) {
      res["MemberAccountIds"] = boost::any(*memberAccountIds);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceManagerResourceGroupId) {
      res["ResourceManagerResourceGroupId"] = boost::any(*resourceManagerResourceGroupId);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MemberAccountIds") != m.end() && !m["MemberAccountIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["MemberAccountIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["MemberAccountIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      memberAccountIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceManagerResourceGroupId") != m.end() && !m["ResourceManagerResourceGroupId"].empty()) {
      resourceManagerResourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceManagerResourceGroupId"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~CreateMemberAccountsRequest() = default;
};
class CreateMemberAccountsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateMemberAccountsResponseBody() {}

  explicit CreateMemberAccountsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateMemberAccountsResponseBody() = default;
};
class CreateMemberAccountsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateMemberAccountsResponseBody> body{};

  CreateMemberAccountsResponse() {}

  explicit CreateMemberAccountsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateMemberAccountsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateMemberAccountsResponseBody>(model1);
      }
    }
  }


  virtual ~CreateMemberAccountsResponse() = default;
};
class DeleteDefenseResourceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupName{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceManagerResourceGroupId{};

  DeleteDefenseResourceGroupRequest() {}

  explicit DeleteDefenseResourceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceManagerResourceGroupId) {
      res["ResourceManagerResourceGroupId"] = boost::any(*resourceManagerResourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceManagerResourceGroupId") != m.end() && !m["ResourceManagerResourceGroupId"].empty()) {
      resourceManagerResourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceManagerResourceGroupId"]));
    }
  }


  virtual ~DeleteDefenseResourceGroupRequest() = default;
};
class DeleteDefenseResourceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteDefenseResourceGroupResponseBody() {}

  explicit DeleteDefenseResourceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteDefenseResourceGroupResponseBody() = default;
};
class DeleteDefenseResourceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDefenseResourceGroupResponseBody> body{};

  DeleteDefenseResourceGroupResponse() {}

  explicit DeleteDefenseResourceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteDefenseResourceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDefenseResourceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDefenseResourceGroupResponse() = default;
};
class DeleteDefenseRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceManagerResourceGroupId{};
  shared_ptr<string> ruleIds{};
  shared_ptr<long> templateId{};

  DeleteDefenseRuleRequest() {}

  explicit DeleteDefenseRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceManagerResourceGroupId) {
      res["ResourceManagerResourceGroupId"] = boost::any(*resourceManagerResourceGroupId);
    }
    if (ruleIds) {
      res["RuleIds"] = boost::any(*ruleIds);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceManagerResourceGroupId") != m.end() && !m["ResourceManagerResourceGroupId"].empty()) {
      resourceManagerResourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceManagerResourceGroupId"]));
    }
    if (m.find("RuleIds") != m.end() && !m["RuleIds"].empty()) {
      ruleIds = make_shared<string>(boost::any_cast<string>(m["RuleIds"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
  }


  virtual ~DeleteDefenseRuleRequest() = default;
};
class DeleteDefenseRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteDefenseRuleResponseBody() {}

  explicit DeleteDefenseRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteDefenseRuleResponseBody() = default;
};
class DeleteDefenseRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDefenseRuleResponseBody> body{};

  DeleteDefenseRuleResponse() {}

  explicit DeleteDefenseRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteDefenseRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDefenseRuleResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDefenseRuleResponse() = default;
};
class DeleteDefenseTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceManagerResourceGroupId{};
  shared_ptr<long> templateId{};

  DeleteDefenseTemplateRequest() {}

  explicit DeleteDefenseTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceManagerResourceGroupId) {
      res["ResourceManagerResourceGroupId"] = boost::any(*resourceManagerResourceGroupId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceManagerResourceGroupId") != m.end() && !m["ResourceManagerResourceGroupId"].empty()) {
      resourceManagerResourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceManagerResourceGroupId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
  }


  virtual ~DeleteDefenseTemplateRequest() = default;
};
class DeleteDefenseTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteDefenseTemplateResponseBody() {}

  explicit DeleteDefenseTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteDefenseTemplateResponseBody() = default;
};
class DeleteDefenseTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDefenseTemplateResponseBody> body{};

  DeleteDefenseTemplateResponse() {}

  explicit DeleteDefenseTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteDefenseTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDefenseTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDefenseTemplateResponse() = default;
};
class DeleteDomainRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessType{};
  shared_ptr<string> domain{};
  shared_ptr<string> domainId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};

  DeleteDomainRequest() {}

  explicit DeleteDomainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessType) {
      res["AccessType"] = boost::any(*accessType);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (domainId) {
      res["DomainId"] = boost::any(*domainId);
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
    if (m.find("AccessType") != m.end() && !m["AccessType"].empty()) {
      accessType = make_shared<string>(boost::any_cast<string>(m["AccessType"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("DomainId") != m.end() && !m["DomainId"].empty()) {
      domainId = make_shared<string>(boost::any_cast<string>(m["DomainId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeleteDomainRequest() = default;
};
class DeleteDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteDomainResponseBody() {}

  explicit DeleteDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
class DeleteMajorProtectionBlackIpRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> ipList{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceManagerResourceGroupId{};
  shared_ptr<long> ruleId{};
  shared_ptr<long> templateId{};

  DeleteMajorProtectionBlackIpRequest() {}

  explicit DeleteMajorProtectionBlackIpRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ipList) {
      res["IpList"] = boost::any(*ipList);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceManagerResourceGroupId) {
      res["ResourceManagerResourceGroupId"] = boost::any(*resourceManagerResourceGroupId);
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
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("IpList") != m.end() && !m["IpList"].empty()) {
      ipList = make_shared<string>(boost::any_cast<string>(m["IpList"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceManagerResourceGroupId") != m.end() && !m["ResourceManagerResourceGroupId"].empty()) {
      resourceManagerResourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceManagerResourceGroupId"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
  }


  virtual ~DeleteMajorProtectionBlackIpRequest() = default;
};
class DeleteMajorProtectionBlackIpResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteMajorProtectionBlackIpResponseBody() {}

  explicit DeleteMajorProtectionBlackIpResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteMajorProtectionBlackIpResponseBody() = default;
};
class DeleteMajorProtectionBlackIpResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteMajorProtectionBlackIpResponseBody> body{};

  DeleteMajorProtectionBlackIpResponse() {}

  explicit DeleteMajorProtectionBlackIpResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteMajorProtectionBlackIpResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteMajorProtectionBlackIpResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteMajorProtectionBlackIpResponse() = default;
};
class DeleteMemberAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> memberAccountId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceManagerResourceGroupId{};
  shared_ptr<string> sourceIp{};

  DeleteMemberAccountRequest() {}

  explicit DeleteMemberAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (memberAccountId) {
      res["MemberAccountId"] = boost::any(*memberAccountId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceManagerResourceGroupId) {
      res["ResourceManagerResourceGroupId"] = boost::any(*resourceManagerResourceGroupId);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MemberAccountId") != m.end() && !m["MemberAccountId"].empty()) {
      memberAccountId = make_shared<string>(boost::any_cast<string>(m["MemberAccountId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceManagerResourceGroupId") != m.end() && !m["ResourceManagerResourceGroupId"].empty()) {
      resourceManagerResourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceManagerResourceGroupId"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~DeleteMemberAccountRequest() = default;
};
class DeleteMemberAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteMemberAccountResponseBody() {}

  explicit DeleteMemberAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteMemberAccountResponseBody() = default;
};
class DeleteMemberAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteMemberAccountResponseBody> body{};

  DeleteMemberAccountResponse() {}

  explicit DeleteMemberAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteMemberAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteMemberAccountResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteMemberAccountResponse() = default;
};
class DescribeAccountDelegatedStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceManagerResourceGroupId{};

  DescribeAccountDelegatedStatusRequest() {}

  explicit DescribeAccountDelegatedStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceManagerResourceGroupId) {
      res["ResourceManagerResourceGroupId"] = boost::any(*resourceManagerResourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceManagerResourceGroupId") != m.end() && !m["ResourceManagerResourceGroupId"].empty()) {
      resourceManagerResourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceManagerResourceGroupId"]));
    }
  }


  virtual ~DescribeAccountDelegatedStatusRequest() = default;
};
class DescribeAccountDelegatedStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> accountName{};
  shared_ptr<bool> delegatedStatus{};
  shared_ptr<string> requestId{};

  DescribeAccountDelegatedStatusResponseBody() {}

  explicit DescribeAccountDelegatedStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (delegatedStatus) {
      res["DelegatedStatus"] = boost::any(*delegatedStatus);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("DelegatedStatus") != m.end() && !m["DelegatedStatus"].empty()) {
      delegatedStatus = make_shared<bool>(boost::any_cast<bool>(m["DelegatedStatus"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeAccountDelegatedStatusResponseBody() = default;
};
class DescribeAccountDelegatedStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAccountDelegatedStatusResponseBody> body{};

  DescribeAccountDelegatedStatusResponse() {}

  explicit DescribeAccountDelegatedStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAccountDelegatedStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAccountDelegatedStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAccountDelegatedStatusResponse() = default;
};
class DescribeCertsRequest : public Darabonba::Model {
public:
  shared_ptr<string> algorithm{};
  shared_ptr<string> domain{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceManagerResourceGroupId{};

  DescribeCertsRequest() {}

  explicit DescribeCertsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithm) {
      res["Algorithm"] = boost::any(*algorithm);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceManagerResourceGroupId) {
      res["ResourceManagerResourceGroupId"] = boost::any(*resourceManagerResourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Algorithm") != m.end() && !m["Algorithm"].empty()) {
      algorithm = make_shared<string>(boost::any_cast<string>(m["Algorithm"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceManagerResourceGroupId") != m.end() && !m["ResourceManagerResourceGroupId"].empty()) {
      resourceManagerResourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceManagerResourceGroupId"]));
    }
  }


  virtual ~DescribeCertsRequest() = default;
};
class DescribeCertsResponseBodyCerts : public Darabonba::Model {
public:
  shared_ptr<long> afterDate{};
  shared_ptr<long> beforeDate{};
  shared_ptr<string> certIdentifier{};
  shared_ptr<string> certName{};
  shared_ptr<string> commonName{};
  shared_ptr<string> domain{};
  shared_ptr<bool> isChainCompleted{};

  DescribeCertsResponseBodyCerts() {}

  explicit DescribeCertsResponseBodyCerts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (afterDate) {
      res["AfterDate"] = boost::any(*afterDate);
    }
    if (beforeDate) {
      res["BeforeDate"] = boost::any(*beforeDate);
    }
    if (certIdentifier) {
      res["CertIdentifier"] = boost::any(*certIdentifier);
    }
    if (certName) {
      res["CertName"] = boost::any(*certName);
    }
    if (commonName) {
      res["CommonName"] = boost::any(*commonName);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (isChainCompleted) {
      res["IsChainCompleted"] = boost::any(*isChainCompleted);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AfterDate") != m.end() && !m["AfterDate"].empty()) {
      afterDate = make_shared<long>(boost::any_cast<long>(m["AfterDate"]));
    }
    if (m.find("BeforeDate") != m.end() && !m["BeforeDate"].empty()) {
      beforeDate = make_shared<long>(boost::any_cast<long>(m["BeforeDate"]));
    }
    if (m.find("CertIdentifier") != m.end() && !m["CertIdentifier"].empty()) {
      certIdentifier = make_shared<string>(boost::any_cast<string>(m["CertIdentifier"]));
    }
    if (m.find("CertName") != m.end() && !m["CertName"].empty()) {
      certName = make_shared<string>(boost::any_cast<string>(m["CertName"]));
    }
    if (m.find("CommonName") != m.end() && !m["CommonName"].empty()) {
      commonName = make_shared<string>(boost::any_cast<string>(m["CommonName"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("IsChainCompleted") != m.end() && !m["IsChainCompleted"].empty()) {
      isChainCompleted = make_shared<bool>(boost::any_cast<bool>(m["IsChainCompleted"]));
    }
  }


  virtual ~DescribeCertsResponseBodyCerts() = default;
};
class DescribeCertsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeCertsResponseBodyCerts>> certs{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeCertsResponseBody() {}

  explicit DescribeCertsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certs) {
      vector<boost::any> temp1;
      for(auto item1:*certs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Certs"] = boost::any(temp1);
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
    if (m.find("Certs") != m.end() && !m["Certs"].empty()) {
      if (typeid(vector<boost::any>) == m["Certs"].type()) {
        vector<DescribeCertsResponseBodyCerts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Certs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCertsResponseBodyCerts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        certs = make_shared<vector<DescribeCertsResponseBodyCerts>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeCertsResponseBody() = default;
};
class DescribeCertsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeCertsResponseBody> body{};

  DescribeCertsResponse() {}

  explicit DescribeCertsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCertsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCertsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCertsResponse() = default;
};
class DescribeCloudResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> ownerUserId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceDomain{};
  shared_ptr<string> resourceFunction{};
  shared_ptr<string> resourceInstanceId{};
  shared_ptr<string> resourceManagerResourceGroupId{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> resourceProduct{};
  shared_ptr<string> resourceRegionId{};
  shared_ptr<string> resourceRouteName{};

  DescribeCloudResourcesRequest() {}

  explicit DescribeCloudResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ownerUserId) {
      res["OwnerUserId"] = boost::any(*ownerUserId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceDomain) {
      res["ResourceDomain"] = boost::any(*resourceDomain);
    }
    if (resourceFunction) {
      res["ResourceFunction"] = boost::any(*resourceFunction);
    }
    if (resourceInstanceId) {
      res["ResourceInstanceId"] = boost::any(*resourceInstanceId);
    }
    if (resourceManagerResourceGroupId) {
      res["ResourceManagerResourceGroupId"] = boost::any(*resourceManagerResourceGroupId);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    if (resourceProduct) {
      res["ResourceProduct"] = boost::any(*resourceProduct);
    }
    if (resourceRegionId) {
      res["ResourceRegionId"] = boost::any(*resourceRegionId);
    }
    if (resourceRouteName) {
      res["ResourceRouteName"] = boost::any(*resourceRouteName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OwnerUserId") != m.end() && !m["OwnerUserId"].empty()) {
      ownerUserId = make_shared<string>(boost::any_cast<string>(m["OwnerUserId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceDomain") != m.end() && !m["ResourceDomain"].empty()) {
      resourceDomain = make_shared<string>(boost::any_cast<string>(m["ResourceDomain"]));
    }
    if (m.find("ResourceFunction") != m.end() && !m["ResourceFunction"].empty()) {
      resourceFunction = make_shared<string>(boost::any_cast<string>(m["ResourceFunction"]));
    }
    if (m.find("ResourceInstanceId") != m.end() && !m["ResourceInstanceId"].empty()) {
      resourceInstanceId = make_shared<string>(boost::any_cast<string>(m["ResourceInstanceId"]));
    }
    if (m.find("ResourceManagerResourceGroupId") != m.end() && !m["ResourceManagerResourceGroupId"].empty()) {
      resourceManagerResourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceManagerResourceGroupId"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("ResourceProduct") != m.end() && !m["ResourceProduct"].empty()) {
      resourceProduct = make_shared<string>(boost::any_cast<string>(m["ResourceProduct"]));
    }
    if (m.find("ResourceRegionId") != m.end() && !m["ResourceRegionId"].empty()) {
      resourceRegionId = make_shared<string>(boost::any_cast<string>(m["ResourceRegionId"]));
    }
    if (m.find("ResourceRouteName") != m.end() && !m["ResourceRouteName"].empty()) {
      resourceRouteName = make_shared<string>(boost::any_cast<string>(m["ResourceRouteName"]));
    }
  }


  virtual ~DescribeCloudResourcesRequest() = default;
};
class DescribeCloudResourcesResponseBodyCloudResources : public Darabonba::Model {
public:
  shared_ptr<string> ownerUserId{};
  shared_ptr<string> resourceDomain{};
  shared_ptr<string> resourceFunction{};
  shared_ptr<string> resourceInstance{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> resourceProduct{};
  shared_ptr<string> resourceRegionId{};
  shared_ptr<string> resourceRouteName{};
  shared_ptr<string> resourceService{};

  DescribeCloudResourcesResponseBodyCloudResources() {}

  explicit DescribeCloudResourcesResponseBodyCloudResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerUserId) {
      res["OwnerUserId"] = boost::any(*ownerUserId);
    }
    if (resourceDomain) {
      res["ResourceDomain"] = boost::any(*resourceDomain);
    }
    if (resourceFunction) {
      res["ResourceFunction"] = boost::any(*resourceFunction);
    }
    if (resourceInstance) {
      res["ResourceInstance"] = boost::any(*resourceInstance);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    if (resourceProduct) {
      res["ResourceProduct"] = boost::any(*resourceProduct);
    }
    if (resourceRegionId) {
      res["ResourceRegionId"] = boost::any(*resourceRegionId);
    }
    if (resourceRouteName) {
      res["ResourceRouteName"] = boost::any(*resourceRouteName);
    }
    if (resourceService) {
      res["ResourceService"] = boost::any(*resourceService);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerUserId") != m.end() && !m["OwnerUserId"].empty()) {
      ownerUserId = make_shared<string>(boost::any_cast<string>(m["OwnerUserId"]));
    }
    if (m.find("ResourceDomain") != m.end() && !m["ResourceDomain"].empty()) {
      resourceDomain = make_shared<string>(boost::any_cast<string>(m["ResourceDomain"]));
    }
    if (m.find("ResourceFunction") != m.end() && !m["ResourceFunction"].empty()) {
      resourceFunction = make_shared<string>(boost::any_cast<string>(m["ResourceFunction"]));
    }
    if (m.find("ResourceInstance") != m.end() && !m["ResourceInstance"].empty()) {
      resourceInstance = make_shared<string>(boost::any_cast<string>(m["ResourceInstance"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("ResourceProduct") != m.end() && !m["ResourceProduct"].empty()) {
      resourceProduct = make_shared<string>(boost::any_cast<string>(m["ResourceProduct"]));
    }
    if (m.find("ResourceRegionId") != m.end() && !m["ResourceRegionId"].empty()) {
      resourceRegionId = make_shared<string>(boost::any_cast<string>(m["ResourceRegionId"]));
    }
    if (m.find("ResourceRouteName") != m.end() && !m["ResourceRouteName"].empty()) {
      resourceRouteName = make_shared<string>(boost::any_cast<string>(m["ResourceRouteName"]));
    }
    if (m.find("ResourceService") != m.end() && !m["ResourceService"].empty()) {
      resourceService = make_shared<string>(boost::any_cast<string>(m["ResourceService"]));
    }
  }


  virtual ~DescribeCloudResourcesResponseBodyCloudResources() = default;
};
class DescribeCloudResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeCloudResourcesResponseBodyCloudResources>> cloudResources{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeCloudResourcesResponseBody() {}

  explicit DescribeCloudResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cloudResources) {
      vector<boost::any> temp1;
      for(auto item1:*cloudResources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CloudResources"] = boost::any(temp1);
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
    if (m.find("CloudResources") != m.end() && !m["CloudResources"].empty()) {
      if (typeid(vector<boost::any>) == m["CloudResources"].type()) {
        vector<DescribeCloudResourcesResponseBodyCloudResources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CloudResources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCloudResourcesResponseBodyCloudResources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        cloudResources = make_shared<vector<DescribeCloudResourcesResponseBodyCloudResources>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeCloudResourcesResponseBody() = default;
};
class DescribeCloudResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeCloudResourcesResponseBody> body{};

  DescribeCloudResourcesResponse() {}

  explicit DescribeCloudResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCloudResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCloudResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCloudResourcesResponse() = default;
};
class DescribeDefenseResourceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupName{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceManagerResourceGroupId{};

  DescribeDefenseResourceGroupRequest() {}

  explicit DescribeDefenseResourceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceManagerResourceGroupId) {
      res["ResourceManagerResourceGroupId"] = boost::any(*resourceManagerResourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceManagerResourceGroupId") != m.end() && !m["ResourceManagerResourceGroupId"].empty()) {
      resourceManagerResourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceManagerResourceGroupId"]));
    }
  }


  virtual ~DescribeDefenseResourceGroupRequest() = default;
};
class DescribeDefenseResourceGroupResponseBodyGroup : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> gmtModified{};
  shared_ptr<string> groupName{};
  shared_ptr<string> resourceList{};

  DescribeDefenseResourceGroupResponseBodyGroup() {}

  explicit DescribeDefenseResourceGroupResponseBodyGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (resourceList) {
      res["ResourceList"] = boost::any(*resourceList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<long>(boost::any_cast<long>(m["GmtModified"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("ResourceList") != m.end() && !m["ResourceList"].empty()) {
      resourceList = make_shared<string>(boost::any_cast<string>(m["ResourceList"]));
    }
  }


  virtual ~DescribeDefenseResourceGroupResponseBodyGroup() = default;
};
class DescribeDefenseResourceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeDefenseResourceGroupResponseBodyGroup> group{};
  shared_ptr<string> requestId{};

  DescribeDefenseResourceGroupResponseBody() {}

  explicit DescribeDefenseResourceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (group) {
      res["Group"] = group ? boost::any(group->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Group") != m.end() && !m["Group"].empty()) {
      if (typeid(map<string, boost::any>) == m["Group"].type()) {
        DescribeDefenseResourceGroupResponseBodyGroup model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Group"]));
        group = make_shared<DescribeDefenseResourceGroupResponseBodyGroup>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeDefenseResourceGroupResponseBody() = default;
};
class DescribeDefenseResourceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDefenseResourceGroupResponseBody> body{};

  DescribeDefenseResourceGroupResponse() {}

  explicit DescribeDefenseResourceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDefenseResourceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDefenseResourceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDefenseResourceGroupResponse() = default;
};
class DescribeDefenseResourceTemplatesRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resource{};
  shared_ptr<string> resourceManagerResourceGroupId{};
  shared_ptr<string> resourceType{};
  shared_ptr<long> ruleId{};
  shared_ptr<string> ruleType{};

  DescribeDefenseResourceTemplatesRequest() {}

  explicit DescribeDefenseResourceTemplatesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resource) {
      res["Resource"] = boost::any(*resource);
    }
    if (resourceManagerResourceGroupId) {
      res["ResourceManagerResourceGroupId"] = boost::any(*resourceManagerResourceGroupId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (ruleType) {
      res["RuleType"] = boost::any(*ruleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Resource") != m.end() && !m["Resource"].empty()) {
      resource = make_shared<string>(boost::any_cast<string>(m["Resource"]));
    }
    if (m.find("ResourceManagerResourceGroupId") != m.end() && !m["ResourceManagerResourceGroupId"].empty()) {
      resourceManagerResourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceManagerResourceGroupId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
    if (m.find("RuleType") != m.end() && !m["RuleType"].empty()) {
      ruleType = make_shared<string>(boost::any_cast<string>(m["RuleType"]));
    }
  }


  virtual ~DescribeDefenseResourceTemplatesRequest() = default;
};
class DescribeDefenseResourceTemplatesResponseBodyTemplates : public Darabonba::Model {
public:
  shared_ptr<string> defenseScene{};
  shared_ptr<string> defenseSubScene{};
  shared_ptr<string> description{};
  shared_ptr<long> gmtModified{};
  shared_ptr<long> templateId{};
  shared_ptr<string> templateName{};
  shared_ptr<string> templateOrigin{};
  shared_ptr<long> templateStatus{};
  shared_ptr<string> templateType{};

  DescribeDefenseResourceTemplatesResponseBodyTemplates() {}

  explicit DescribeDefenseResourceTemplatesResponseBodyTemplates(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defenseScene) {
      res["DefenseScene"] = boost::any(*defenseScene);
    }
    if (defenseSubScene) {
      res["DefenseSubScene"] = boost::any(*defenseSubScene);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (templateOrigin) {
      res["TemplateOrigin"] = boost::any(*templateOrigin);
    }
    if (templateStatus) {
      res["TemplateStatus"] = boost::any(*templateStatus);
    }
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefenseScene") != m.end() && !m["DefenseScene"].empty()) {
      defenseScene = make_shared<string>(boost::any_cast<string>(m["DefenseScene"]));
    }
    if (m.find("DefenseSubScene") != m.end() && !m["DefenseSubScene"].empty()) {
      defenseSubScene = make_shared<string>(boost::any_cast<string>(m["DefenseSubScene"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<long>(boost::any_cast<long>(m["GmtModified"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TemplateOrigin") != m.end() && !m["TemplateOrigin"].empty()) {
      templateOrigin = make_shared<string>(boost::any_cast<string>(m["TemplateOrigin"]));
    }
    if (m.find("TemplateStatus") != m.end() && !m["TemplateStatus"].empty()) {
      templateStatus = make_shared<long>(boost::any_cast<long>(m["TemplateStatus"]));
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<string>(boost::any_cast<string>(m["TemplateType"]));
    }
  }


  virtual ~DescribeDefenseResourceTemplatesResponseBodyTemplates() = default;
};
class DescribeDefenseResourceTemplatesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeDefenseResourceTemplatesResponseBodyTemplates>> templates{};

  DescribeDefenseResourceTemplatesResponseBody() {}

  explicit DescribeDefenseResourceTemplatesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (templates) {
      vector<boost::any> temp1;
      for(auto item1:*templates){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Templates"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Templates") != m.end() && !m["Templates"].empty()) {
      if (typeid(vector<boost::any>) == m["Templates"].type()) {
        vector<DescribeDefenseResourceTemplatesResponseBodyTemplates> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Templates"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDefenseResourceTemplatesResponseBodyTemplates model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        templates = make_shared<vector<DescribeDefenseResourceTemplatesResponseBodyTemplates>>(expect1);
      }
    }
  }


  virtual ~DescribeDefenseResourceTemplatesResponseBody() = default;
};
class DescribeDefenseResourceTemplatesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDefenseResourceTemplatesResponseBody> body{};

  DescribeDefenseResourceTemplatesResponse() {}

  explicit DescribeDefenseResourceTemplatesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDefenseResourceTemplatesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDefenseResourceTemplatesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDefenseResourceTemplatesResponse() = default;
};
class DescribeDefenseResourcesRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeDefenseResourcesRequestTag() {}

  explicit DescribeDefenseResourcesRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeDefenseResourcesRequestTag() = default;
};
class DescribeDefenseResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> query{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceManagerResourceGroupId{};
  shared_ptr<vector<DescribeDefenseResourcesRequestTag>> tag{};

  DescribeDefenseResourcesRequest() {}

  explicit DescribeDefenseResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (query) {
      res["Query"] = boost::any(*query);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceManagerResourceGroupId) {
      res["ResourceManagerResourceGroupId"] = boost::any(*resourceManagerResourceGroupId);
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
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Query") != m.end() && !m["Query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["Query"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceManagerResourceGroupId") != m.end() && !m["ResourceManagerResourceGroupId"].empty()) {
      resourceManagerResourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceManagerResourceGroupId"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<DescribeDefenseResourcesRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDefenseResourcesRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<DescribeDefenseResourcesRequestTag>>(expect1);
      }
    }
  }


  virtual ~DescribeDefenseResourcesRequest() = default;
};
class DescribeDefenseResourcesResponseBodyResources : public Darabonba::Model {
public:
  shared_ptr<long> acwCookieStatus{};
  shared_ptr<long> acwSecureStatus{};
  shared_ptr<long> acwV3SecureStatus{};
  shared_ptr<vector<string>> customHeaders{};
  shared_ptr<string> description{};
  shared_ptr<map<string, boost::any>> detail{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> gmtModified{};
  shared_ptr<string> ownerUserId{};
  shared_ptr<string> pattern{};
  shared_ptr<string> product{};
  shared_ptr<string> resource{};
  shared_ptr<string> resourceGroup{};
  shared_ptr<string> resourceManagerResourceGroupId{};
  shared_ptr<string> resourceOrigin{};
  shared_ptr<long> xffStatus{};

  DescribeDefenseResourcesResponseBodyResources() {}

  explicit DescribeDefenseResourcesResponseBodyResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acwCookieStatus) {
      res["AcwCookieStatus"] = boost::any(*acwCookieStatus);
    }
    if (acwSecureStatus) {
      res["AcwSecureStatus"] = boost::any(*acwSecureStatus);
    }
    if (acwV3SecureStatus) {
      res["AcwV3SecureStatus"] = boost::any(*acwV3SecureStatus);
    }
    if (customHeaders) {
      res["CustomHeaders"] = boost::any(*customHeaders);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (detail) {
      res["Detail"] = boost::any(*detail);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (ownerUserId) {
      res["OwnerUserId"] = boost::any(*ownerUserId);
    }
    if (pattern) {
      res["Pattern"] = boost::any(*pattern);
    }
    if (product) {
      res["Product"] = boost::any(*product);
    }
    if (resource) {
      res["Resource"] = boost::any(*resource);
    }
    if (resourceGroup) {
      res["ResourceGroup"] = boost::any(*resourceGroup);
    }
    if (resourceManagerResourceGroupId) {
      res["ResourceManagerResourceGroupId"] = boost::any(*resourceManagerResourceGroupId);
    }
    if (resourceOrigin) {
      res["ResourceOrigin"] = boost::any(*resourceOrigin);
    }
    if (xffStatus) {
      res["XffStatus"] = boost::any(*xffStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcwCookieStatus") != m.end() && !m["AcwCookieStatus"].empty()) {
      acwCookieStatus = make_shared<long>(boost::any_cast<long>(m["AcwCookieStatus"]));
    }
    if (m.find("AcwSecureStatus") != m.end() && !m["AcwSecureStatus"].empty()) {
      acwSecureStatus = make_shared<long>(boost::any_cast<long>(m["AcwSecureStatus"]));
    }
    if (m.find("AcwV3SecureStatus") != m.end() && !m["AcwV3SecureStatus"].empty()) {
      acwV3SecureStatus = make_shared<long>(boost::any_cast<long>(m["AcwV3SecureStatus"]));
    }
    if (m.find("CustomHeaders") != m.end() && !m["CustomHeaders"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CustomHeaders"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CustomHeaders"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      customHeaders = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Detail"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      detail = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<long>(boost::any_cast<long>(m["GmtModified"]));
    }
    if (m.find("OwnerUserId") != m.end() && !m["OwnerUserId"].empty()) {
      ownerUserId = make_shared<string>(boost::any_cast<string>(m["OwnerUserId"]));
    }
    if (m.find("Pattern") != m.end() && !m["Pattern"].empty()) {
      pattern = make_shared<string>(boost::any_cast<string>(m["Pattern"]));
    }
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["Product"]));
    }
    if (m.find("Resource") != m.end() && !m["Resource"].empty()) {
      resource = make_shared<string>(boost::any_cast<string>(m["Resource"]));
    }
    if (m.find("ResourceGroup") != m.end() && !m["ResourceGroup"].empty()) {
      resourceGroup = make_shared<string>(boost::any_cast<string>(m["ResourceGroup"]));
    }
    if (m.find("ResourceManagerResourceGroupId") != m.end() && !m["ResourceManagerResourceGroupId"].empty()) {
      resourceManagerResourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceManagerResourceGroupId"]));
    }
    if (m.find("ResourceOrigin") != m.end() && !m["ResourceOrigin"].empty()) {
      resourceOrigin = make_shared<string>(boost::any_cast<string>(m["ResourceOrigin"]));
    }
    if (m.find("XffStatus") != m.end() && !m["XffStatus"].empty()) {
      xffStatus = make_shared<long>(boost::any_cast<long>(m["XffStatus"]));
    }
  }


  virtual ~DescribeDefenseResourcesResponseBodyResources() = default;
};
class DescribeDefenseResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeDefenseResourcesResponseBodyResources>> resources{};
  shared_ptr<long> totalCount{};

  DescribeDefenseResourcesResponseBody() {}

  explicit DescribeDefenseResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resources) {
      vector<boost::any> temp1;
      for(auto item1:*resources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Resources"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      if (typeid(vector<boost::any>) == m["Resources"].type()) {
        vector<DescribeDefenseResourcesResponseBodyResources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Resources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDefenseResourcesResponseBodyResources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resources = make_shared<vector<DescribeDefenseResourcesResponseBodyResources>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeDefenseResourcesResponseBody() = default;
};
class DescribeDefenseResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDefenseResourcesResponseBody> body{};

  DescribeDefenseResourcesResponse() {}

  explicit DescribeDefenseResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDefenseResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDefenseResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDefenseResourcesResponse() = default;
};
class DescribeDefenseRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceManagerResourceGroupId{};
  shared_ptr<long> ruleId{};
  shared_ptr<long> templateId{};

  DescribeDefenseRuleRequest() {}

  explicit DescribeDefenseRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceManagerResourceGroupId) {
      res["ResourceManagerResourceGroupId"] = boost::any(*resourceManagerResourceGroupId);
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
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceManagerResourceGroupId") != m.end() && !m["ResourceManagerResourceGroupId"].empty()) {
      resourceManagerResourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceManagerResourceGroupId"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
  }


  virtual ~DescribeDefenseRuleRequest() = default;
};
class DescribeDefenseRuleResponseBodyRule : public Darabonba::Model {
public:
  shared_ptr<string> config{};
  shared_ptr<string> defenseOrigin{};
  shared_ptr<string> defenseScene{};
  shared_ptr<long> gmtModified{};
  shared_ptr<long> ruleId{};
  shared_ptr<string> ruleName{};
  shared_ptr<long> status{};
  shared_ptr<long> templateId{};

  DescribeDefenseRuleResponseBodyRule() {}

  explicit DescribeDefenseRuleResponseBodyRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (defenseOrigin) {
      res["DefenseOrigin"] = boost::any(*defenseOrigin);
    }
    if (defenseScene) {
      res["DefenseScene"] = boost::any(*defenseScene);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("DefenseOrigin") != m.end() && !m["DefenseOrigin"].empty()) {
      defenseOrigin = make_shared<string>(boost::any_cast<string>(m["DefenseOrigin"]));
    }
    if (m.find("DefenseScene") != m.end() && !m["DefenseScene"].empty()) {
      defenseScene = make_shared<string>(boost::any_cast<string>(m["DefenseScene"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<long>(boost::any_cast<long>(m["GmtModified"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
  }


  virtual ~DescribeDefenseRuleResponseBodyRule() = default;
};
class DescribeDefenseRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeDefenseRuleResponseBodyRule> rule{};

  DescribeDefenseRuleResponseBody() {}

  explicit DescribeDefenseRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (rule) {
      res["Rule"] = rule ? boost::any(rule->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Rule") != m.end() && !m["Rule"].empty()) {
      if (typeid(map<string, boost::any>) == m["Rule"].type()) {
        DescribeDefenseRuleResponseBodyRule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Rule"]));
        rule = make_shared<DescribeDefenseRuleResponseBodyRule>(model1);
      }
    }
  }


  virtual ~DescribeDefenseRuleResponseBody() = default;
};
class DescribeDefenseRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDefenseRuleResponseBody> body{};

  DescribeDefenseRuleResponse() {}

  explicit DescribeDefenseRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDefenseRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDefenseRuleResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDefenseRuleResponse() = default;
};
class DescribeDefenseRulesRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> query{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceManagerResourceGroupId{};
  shared_ptr<string> ruleType{};

  DescribeDefenseRulesRequest() {}

  explicit DescribeDefenseRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (query) {
      res["Query"] = boost::any(*query);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceManagerResourceGroupId) {
      res["ResourceManagerResourceGroupId"] = boost::any(*resourceManagerResourceGroupId);
    }
    if (ruleType) {
      res["RuleType"] = boost::any(*ruleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Query") != m.end() && !m["Query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["Query"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceManagerResourceGroupId") != m.end() && !m["ResourceManagerResourceGroupId"].empty()) {
      resourceManagerResourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceManagerResourceGroupId"]));
    }
    if (m.find("RuleType") != m.end() && !m["RuleType"].empty()) {
      ruleType = make_shared<string>(boost::any_cast<string>(m["RuleType"]));
    }
  }


  virtual ~DescribeDefenseRulesRequest() = default;
};
class DescribeDefenseRulesResponseBodyRules : public Darabonba::Model {
public:
  shared_ptr<string> config{};
  shared_ptr<string> defenseOrigin{};
  shared_ptr<string> defenseScene{};
  shared_ptr<long> gmtModified{};
  shared_ptr<long> ruleId{};
  shared_ptr<string> ruleName{};
  shared_ptr<long> status{};
  shared_ptr<long> templateId{};

  DescribeDefenseRulesResponseBodyRules() {}

  explicit DescribeDefenseRulesResponseBodyRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (defenseOrigin) {
      res["DefenseOrigin"] = boost::any(*defenseOrigin);
    }
    if (defenseScene) {
      res["DefenseScene"] = boost::any(*defenseScene);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("DefenseOrigin") != m.end() && !m["DefenseOrigin"].empty()) {
      defenseOrigin = make_shared<string>(boost::any_cast<string>(m["DefenseOrigin"]));
    }
    if (m.find("DefenseScene") != m.end() && !m["DefenseScene"].empty()) {
      defenseScene = make_shared<string>(boost::any_cast<string>(m["DefenseScene"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<long>(boost::any_cast<long>(m["GmtModified"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
  }


  virtual ~DescribeDefenseRulesResponseBodyRules() = default;
};
class DescribeDefenseRulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeDefenseRulesResponseBodyRules>> rules{};
  shared_ptr<long> totalCount{};

  DescribeDefenseRulesResponseBody() {}

  explicit DescribeDefenseRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      if (typeid(vector<boost::any>) == m["Rules"].type()) {
        vector<DescribeDefenseRulesResponseBodyRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Rules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDefenseRulesResponseBodyRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rules = make_shared<vector<DescribeDefenseRulesResponseBodyRules>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeDefenseRulesResponseBody() = default;
};
class DescribeDefenseRulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDefenseRulesResponseBody> body{};

  DescribeDefenseRulesResponse() {}

  explicit DescribeDefenseRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDefenseRulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDefenseRulesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDefenseRulesResponse() = default;
};
class DescribeDefenseTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceManagerResourceGroupId{};
  shared_ptr<long> templateId{};

  DescribeDefenseTemplateRequest() {}

  explicit DescribeDefenseTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceManagerResourceGroupId) {
      res["ResourceManagerResourceGroupId"] = boost::any(*resourceManagerResourceGroupId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceManagerResourceGroupId") != m.end() && !m["ResourceManagerResourceGroupId"].empty()) {
      resourceManagerResourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceManagerResourceGroupId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
  }


  virtual ~DescribeDefenseTemplateRequest() = default;
};
class DescribeDefenseTemplateResponseBodyTemplate : public Darabonba::Model {
public:
  shared_ptr<string> defenseScene{};
  shared_ptr<string> defenseSubScene{};
  shared_ptr<string> description{};
  shared_ptr<long> gmtModified{};
  shared_ptr<long> templateId{};
  shared_ptr<string> templateName{};
  shared_ptr<string> templateOrigin{};
  shared_ptr<long> templateStatus{};
  shared_ptr<string> templateType{};

  DescribeDefenseTemplateResponseBodyTemplate() {}

  explicit DescribeDefenseTemplateResponseBodyTemplate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defenseScene) {
      res["DefenseScene"] = boost::any(*defenseScene);
    }
    if (defenseSubScene) {
      res["DefenseSubScene"] = boost::any(*defenseSubScene);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (templateOrigin) {
      res["TemplateOrigin"] = boost::any(*templateOrigin);
    }
    if (templateStatus) {
      res["TemplateStatus"] = boost::any(*templateStatus);
    }
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefenseScene") != m.end() && !m["DefenseScene"].empty()) {
      defenseScene = make_shared<string>(boost::any_cast<string>(m["DefenseScene"]));
    }
    if (m.find("DefenseSubScene") != m.end() && !m["DefenseSubScene"].empty()) {
      defenseSubScene = make_shared<string>(boost::any_cast<string>(m["DefenseSubScene"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<long>(boost::any_cast<long>(m["GmtModified"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TemplateOrigin") != m.end() && !m["TemplateOrigin"].empty()) {
      templateOrigin = make_shared<string>(boost::any_cast<string>(m["TemplateOrigin"]));
    }
    if (m.find("TemplateStatus") != m.end() && !m["TemplateStatus"].empty()) {
      templateStatus = make_shared<long>(boost::any_cast<long>(m["TemplateStatus"]));
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<string>(boost::any_cast<string>(m["TemplateType"]));
    }
  }


  virtual ~DescribeDefenseTemplateResponseBodyTemplate() = default;
};
class DescribeDefenseTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeDefenseTemplateResponseBodyTemplate> template_{};

  DescribeDefenseTemplateResponseBody() {}

  explicit DescribeDefenseTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (template_) {
      res["Template"] = template_ ? boost::any(template_->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      if (typeid(map<string, boost::any>) == m["Template"].type()) {
        DescribeDefenseTemplateResponseBodyTemplate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Template"]));
        template_ = make_shared<DescribeDefenseTemplateResponseBodyTemplate>(model1);
      }
    }
  }


  virtual ~DescribeDefenseTemplateResponseBody() = default;
};
class DescribeDefenseTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDefenseTemplateResponseBody> body{};

  DescribeDefenseTemplateResponse() {}

  explicit DescribeDefenseTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDefenseTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDefenseTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDefenseTemplateResponse() = default;
};
class DescribeDefenseTemplatesRequest : public Darabonba::Model {
public:
  shared_ptr<string> defenseScene{};
  shared_ptr<string> defenseSubScene{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resource{};
  shared_ptr<string> resourceManagerResourceGroupId{};
  shared_ptr<string> resourceType{};
  shared_ptr<long> templateId{};
  shared_ptr<string> templateType{};

  DescribeDefenseTemplatesRequest() {}

  explicit DescribeDefenseTemplatesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defenseScene) {
      res["DefenseScene"] = boost::any(*defenseScene);
    }
    if (defenseSubScene) {
      res["DefenseSubScene"] = boost::any(*defenseSubScene);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resource) {
      res["Resource"] = boost::any(*resource);
    }
    if (resourceManagerResourceGroupId) {
      res["ResourceManagerResourceGroupId"] = boost::any(*resourceManagerResourceGroupId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefenseScene") != m.end() && !m["DefenseScene"].empty()) {
      defenseScene = make_shared<string>(boost::any_cast<string>(m["DefenseScene"]));
    }
    if (m.find("DefenseSubScene") != m.end() && !m["DefenseSubScene"].empty()) {
      defenseSubScene = make_shared<string>(boost::any_cast<string>(m["DefenseSubScene"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Resource") != m.end() && !m["Resource"].empty()) {
      resource = make_shared<string>(boost::any_cast<string>(m["Resource"]));
    }
    if (m.find("ResourceManagerResourceGroupId") != m.end() && !m["ResourceManagerResourceGroupId"].empty()) {
      resourceManagerResourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceManagerResourceGroupId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<string>(boost::any_cast<string>(m["TemplateType"]));
    }
  }


  virtual ~DescribeDefenseTemplatesRequest() = default;
};
class DescribeDefenseTemplatesResponseBodyTemplates : public Darabonba::Model {
public:
  shared_ptr<string> defenseScene{};
  shared_ptr<string> defenseSubScene{};
  shared_ptr<string> description{};
  shared_ptr<long> gmtModified{};
  shared_ptr<long> templateId{};
  shared_ptr<string> templateName{};
  shared_ptr<string> templateOrigin{};
  shared_ptr<long> templateStatus{};
  shared_ptr<string> templateType{};

  DescribeDefenseTemplatesResponseBodyTemplates() {}

  explicit DescribeDefenseTemplatesResponseBodyTemplates(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defenseScene) {
      res["DefenseScene"] = boost::any(*defenseScene);
    }
    if (defenseSubScene) {
      res["DefenseSubScene"] = boost::any(*defenseSubScene);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (templateOrigin) {
      res["TemplateOrigin"] = boost::any(*templateOrigin);
    }
    if (templateStatus) {
      res["TemplateStatus"] = boost::any(*templateStatus);
    }
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefenseScene") != m.end() && !m["DefenseScene"].empty()) {
      defenseScene = make_shared<string>(boost::any_cast<string>(m["DefenseScene"]));
    }
    if (m.find("DefenseSubScene") != m.end() && !m["DefenseSubScene"].empty()) {
      defenseSubScene = make_shared<string>(boost::any_cast<string>(m["DefenseSubScene"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<long>(boost::any_cast<long>(m["GmtModified"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TemplateOrigin") != m.end() && !m["TemplateOrigin"].empty()) {
      templateOrigin = make_shared<string>(boost::any_cast<string>(m["TemplateOrigin"]));
    }
    if (m.find("TemplateStatus") != m.end() && !m["TemplateStatus"].empty()) {
      templateStatus = make_shared<long>(boost::any_cast<long>(m["TemplateStatus"]));
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<string>(boost::any_cast<string>(m["TemplateType"]));
    }
  }


  virtual ~DescribeDefenseTemplatesResponseBodyTemplates() = default;
};
class DescribeDefenseTemplatesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeDefenseTemplatesResponseBodyTemplates>> templates{};
  shared_ptr<long> totalCount{};

  DescribeDefenseTemplatesResponseBody() {}

  explicit DescribeDefenseTemplatesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (templates) {
      vector<boost::any> temp1;
      for(auto item1:*templates){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Templates"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Templates") != m.end() && !m["Templates"].empty()) {
      if (typeid(vector<boost::any>) == m["Templates"].type()) {
        vector<DescribeDefenseTemplatesResponseBodyTemplates> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Templates"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDefenseTemplatesResponseBodyTemplates model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        templates = make_shared<vector<DescribeDefenseTemplatesResponseBodyTemplates>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeDefenseTemplatesResponseBody() = default;
};
class DescribeDefenseTemplatesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDefenseTemplatesResponseBody> body{};

  DescribeDefenseTemplatesResponse() {}

  explicit DescribeDefenseTemplatesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDefenseTemplatesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDefenseTemplatesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDefenseTemplatesResponse() = default;
};
class DescribeDomainDNSRecordRequest : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceManagerResourceGroupId{};

  DescribeDomainDNSRecordRequest() {}

  explicit DescribeDomainDNSRecordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceManagerResourceGroupId) {
      res["ResourceManagerResourceGroupId"] = boost::any(*resourceManagerResourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceManagerResourceGroupId") != m.end() && !m["ResourceManagerResourceGroupId"].empty()) {
      resourceManagerResourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceManagerResourceGroupId"]));
    }
  }


  virtual ~DescribeDomainDNSRecordRequest() = default;
};
class DescribeDomainDNSRecordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DNSStatus{};
  shared_ptr<string> requestId{};

  DescribeDomainDNSRecordResponseBody() {}

  explicit DescribeDomainDNSRecordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DNSStatus) {
      res["DNSStatus"] = boost::any(*DNSStatus);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DNSStatus") != m.end() && !m["DNSStatus"].empty()) {
      DNSStatus = make_shared<string>(boost::any_cast<string>(m["DNSStatus"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeDomainDNSRecordResponseBody() = default;
};
class DescribeDomainDNSRecordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDomainDNSRecordResponseBody> body{};

  DescribeDomainDNSRecordResponse() {}

  explicit DescribeDomainDNSRecordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDomainDNSRecordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDomainDNSRecordResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDomainDNSRecordResponse() = default;
};
class DescribeDomainDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};

  DescribeDomainDetailRequest() {}

  explicit DescribeDomainDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
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
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeDomainDetailRequest() = default;
};
class DescribeDomainDetailResponseBodyCertDetail : public Darabonba::Model {
public:
  shared_ptr<string> commonName{};
  shared_ptr<long> endTime{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<vector<string>> sans{};
  shared_ptr<long> startTime{};

  DescribeDomainDetailResponseBodyCertDetail() {}

  explicit DescribeDomainDetailResponseBodyCertDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonName) {
      res["CommonName"] = boost::any(*commonName);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (sans) {
      res["Sans"] = boost::any(*sans);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CommonName") != m.end() && !m["CommonName"].empty()) {
      commonName = make_shared<string>(boost::any_cast<string>(m["CommonName"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Sans") != m.end() && !m["Sans"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Sans"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Sans"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sans = make_shared<vector<string>>(toVec1);
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~DescribeDomainDetailResponseBodyCertDetail() = default;
};
class DescribeDomainDetailResponseBodyListen : public Darabonba::Model {
public:
  shared_ptr<long> certId{};
  shared_ptr<long> cipherSuite{};
  shared_ptr<vector<string>> customCiphers{};
  shared_ptr<bool> enableTLSv3{};
  shared_ptr<bool> exclusiveIp{};
  shared_ptr<bool> focusHttps{};
  shared_ptr<bool> http2Enabled{};
  shared_ptr<vector<long>> httpPorts{};
  shared_ptr<vector<long>> httpsPorts{};
  shared_ptr<bool> IPv6Enabled{};
  shared_ptr<string> protectionResource{};
  shared_ptr<bool> SM2AccessOnly{};
  shared_ptr<bool> SM2CertId{};
  shared_ptr<bool> SM2Enabled{};
  shared_ptr<string> TLSVersion{};
  shared_ptr<long> xffHeaderMode{};
  shared_ptr<vector<string>> xffHeaders{};

  DescribeDomainDetailResponseBodyListen() {}

  explicit DescribeDomainDetailResponseBodyListen(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certId) {
      res["CertId"] = boost::any(*certId);
    }
    if (cipherSuite) {
      res["CipherSuite"] = boost::any(*cipherSuite);
    }
    if (customCiphers) {
      res["CustomCiphers"] = boost::any(*customCiphers);
    }
    if (enableTLSv3) {
      res["EnableTLSv3"] = boost::any(*enableTLSv3);
    }
    if (exclusiveIp) {
      res["ExclusiveIp"] = boost::any(*exclusiveIp);
    }
    if (focusHttps) {
      res["FocusHttps"] = boost::any(*focusHttps);
    }
    if (http2Enabled) {
      res["Http2Enabled"] = boost::any(*http2Enabled);
    }
    if (httpPorts) {
      res["HttpPorts"] = boost::any(*httpPorts);
    }
    if (httpsPorts) {
      res["HttpsPorts"] = boost::any(*httpsPorts);
    }
    if (IPv6Enabled) {
      res["IPv6Enabled"] = boost::any(*IPv6Enabled);
    }
    if (protectionResource) {
      res["ProtectionResource"] = boost::any(*protectionResource);
    }
    if (SM2AccessOnly) {
      res["SM2AccessOnly"] = boost::any(*SM2AccessOnly);
    }
    if (SM2CertId) {
      res["SM2CertId"] = boost::any(*SM2CertId);
    }
    if (SM2Enabled) {
      res["SM2Enabled"] = boost::any(*SM2Enabled);
    }
    if (TLSVersion) {
      res["TLSVersion"] = boost::any(*TLSVersion);
    }
    if (xffHeaderMode) {
      res["XffHeaderMode"] = boost::any(*xffHeaderMode);
    }
    if (xffHeaders) {
      res["XffHeaders"] = boost::any(*xffHeaders);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertId") != m.end() && !m["CertId"].empty()) {
      certId = make_shared<long>(boost::any_cast<long>(m["CertId"]));
    }
    if (m.find("CipherSuite") != m.end() && !m["CipherSuite"].empty()) {
      cipherSuite = make_shared<long>(boost::any_cast<long>(m["CipherSuite"]));
    }
    if (m.find("CustomCiphers") != m.end() && !m["CustomCiphers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CustomCiphers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CustomCiphers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      customCiphers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("EnableTLSv3") != m.end() && !m["EnableTLSv3"].empty()) {
      enableTLSv3 = make_shared<bool>(boost::any_cast<bool>(m["EnableTLSv3"]));
    }
    if (m.find("ExclusiveIp") != m.end() && !m["ExclusiveIp"].empty()) {
      exclusiveIp = make_shared<bool>(boost::any_cast<bool>(m["ExclusiveIp"]));
    }
    if (m.find("FocusHttps") != m.end() && !m["FocusHttps"].empty()) {
      focusHttps = make_shared<bool>(boost::any_cast<bool>(m["FocusHttps"]));
    }
    if (m.find("Http2Enabled") != m.end() && !m["Http2Enabled"].empty()) {
      http2Enabled = make_shared<bool>(boost::any_cast<bool>(m["Http2Enabled"]));
    }
    if (m.find("HttpPorts") != m.end() && !m["HttpPorts"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["HttpPorts"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["HttpPorts"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      httpPorts = make_shared<vector<long>>(toVec1);
    }
    if (m.find("HttpsPorts") != m.end() && !m["HttpsPorts"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["HttpsPorts"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["HttpsPorts"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      httpsPorts = make_shared<vector<long>>(toVec1);
    }
    if (m.find("IPv6Enabled") != m.end() && !m["IPv6Enabled"].empty()) {
      IPv6Enabled = make_shared<bool>(boost::any_cast<bool>(m["IPv6Enabled"]));
    }
    if (m.find("ProtectionResource") != m.end() && !m["ProtectionResource"].empty()) {
      protectionResource = make_shared<string>(boost::any_cast<string>(m["ProtectionResource"]));
    }
    if (m.find("SM2AccessOnly") != m.end() && !m["SM2AccessOnly"].empty()) {
      SM2AccessOnly = make_shared<bool>(boost::any_cast<bool>(m["SM2AccessOnly"]));
    }
    if (m.find("SM2CertId") != m.end() && !m["SM2CertId"].empty()) {
      SM2CertId = make_shared<bool>(boost::any_cast<bool>(m["SM2CertId"]));
    }
    if (m.find("SM2Enabled") != m.end() && !m["SM2Enabled"].empty()) {
      SM2Enabled = make_shared<bool>(boost::any_cast<bool>(m["SM2Enabled"]));
    }
    if (m.find("TLSVersion") != m.end() && !m["TLSVersion"].empty()) {
      TLSVersion = make_shared<string>(boost::any_cast<string>(m["TLSVersion"]));
    }
    if (m.find("XffHeaderMode") != m.end() && !m["XffHeaderMode"].empty()) {
      xffHeaderMode = make_shared<long>(boost::any_cast<long>(m["XffHeaderMode"]));
    }
    if (m.find("XffHeaders") != m.end() && !m["XffHeaders"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["XffHeaders"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["XffHeaders"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      xffHeaders = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeDomainDetailResponseBodyListen() = default;
};
class DescribeDomainDetailResponseBodyRedirectBackends : public Darabonba::Model {
public:
  shared_ptr<string> backend{};

  DescribeDomainDetailResponseBodyRedirectBackends() {}

  explicit DescribeDomainDetailResponseBodyRedirectBackends(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backend) {
      res["Backend"] = boost::any(*backend);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Backend") != m.end() && !m["Backend"].empty()) {
      backend = make_shared<string>(boost::any_cast<string>(m["Backend"]));
    }
  }


  virtual ~DescribeDomainDetailResponseBodyRedirectBackends() = default;
};
class DescribeDomainDetailResponseBodyRedirectRequestHeaders : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeDomainDetailResponseBodyRedirectRequestHeaders() {}

  explicit DescribeDomainDetailResponseBodyRedirectRequestHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeDomainDetailResponseBodyRedirectRequestHeaders() = default;
};
class DescribeDomainDetailResponseBodyRedirect : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDomainDetailResponseBodyRedirectBackends>> backends{};
  shared_ptr<long> connectTimeout{};
  shared_ptr<bool> focusHttpBackend{};
  shared_ptr<bool> keepalive{};
  shared_ptr<long> keepaliveRequests{};
  shared_ptr<long> keepaliveTimeout{};
  shared_ptr<string> loadbalance{};
  shared_ptr<long> readTimeout{};
  shared_ptr<vector<DescribeDomainDetailResponseBodyRedirectRequestHeaders>> requestHeaders{};
  shared_ptr<bool> retry{};
  shared_ptr<bool> sniEnabled{};
  shared_ptr<string> sniHost{};
  shared_ptr<long> writeTimeout{};
  shared_ptr<bool> xffProto{};

  DescribeDomainDetailResponseBodyRedirect() {}

  explicit DescribeDomainDetailResponseBodyRedirect(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backends) {
      vector<boost::any> temp1;
      for(auto item1:*backends){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Backends"] = boost::any(temp1);
    }
    if (connectTimeout) {
      res["ConnectTimeout"] = boost::any(*connectTimeout);
    }
    if (focusHttpBackend) {
      res["FocusHttpBackend"] = boost::any(*focusHttpBackend);
    }
    if (keepalive) {
      res["Keepalive"] = boost::any(*keepalive);
    }
    if (keepaliveRequests) {
      res["KeepaliveRequests"] = boost::any(*keepaliveRequests);
    }
    if (keepaliveTimeout) {
      res["KeepaliveTimeout"] = boost::any(*keepaliveTimeout);
    }
    if (loadbalance) {
      res["Loadbalance"] = boost::any(*loadbalance);
    }
    if (readTimeout) {
      res["ReadTimeout"] = boost::any(*readTimeout);
    }
    if (requestHeaders) {
      vector<boost::any> temp1;
      for(auto item1:*requestHeaders){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RequestHeaders"] = boost::any(temp1);
    }
    if (retry) {
      res["Retry"] = boost::any(*retry);
    }
    if (sniEnabled) {
      res["SniEnabled"] = boost::any(*sniEnabled);
    }
    if (sniHost) {
      res["SniHost"] = boost::any(*sniHost);
    }
    if (writeTimeout) {
      res["WriteTimeout"] = boost::any(*writeTimeout);
    }
    if (xffProto) {
      res["XffProto"] = boost::any(*xffProto);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Backends") != m.end() && !m["Backends"].empty()) {
      if (typeid(vector<boost::any>) == m["Backends"].type()) {
        vector<DescribeDomainDetailResponseBodyRedirectBackends> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Backends"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDomainDetailResponseBodyRedirectBackends model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        backends = make_shared<vector<DescribeDomainDetailResponseBodyRedirectBackends>>(expect1);
      }
    }
    if (m.find("ConnectTimeout") != m.end() && !m["ConnectTimeout"].empty()) {
      connectTimeout = make_shared<long>(boost::any_cast<long>(m["ConnectTimeout"]));
    }
    if (m.find("FocusHttpBackend") != m.end() && !m["FocusHttpBackend"].empty()) {
      focusHttpBackend = make_shared<bool>(boost::any_cast<bool>(m["FocusHttpBackend"]));
    }
    if (m.find("Keepalive") != m.end() && !m["Keepalive"].empty()) {
      keepalive = make_shared<bool>(boost::any_cast<bool>(m["Keepalive"]));
    }
    if (m.find("KeepaliveRequests") != m.end() && !m["KeepaliveRequests"].empty()) {
      keepaliveRequests = make_shared<long>(boost::any_cast<long>(m["KeepaliveRequests"]));
    }
    if (m.find("KeepaliveTimeout") != m.end() && !m["KeepaliveTimeout"].empty()) {
      keepaliveTimeout = make_shared<long>(boost::any_cast<long>(m["KeepaliveTimeout"]));
    }
    if (m.find("Loadbalance") != m.end() && !m["Loadbalance"].empty()) {
      loadbalance = make_shared<string>(boost::any_cast<string>(m["Loadbalance"]));
    }
    if (m.find("ReadTimeout") != m.end() && !m["ReadTimeout"].empty()) {
      readTimeout = make_shared<long>(boost::any_cast<long>(m["ReadTimeout"]));
    }
    if (m.find("RequestHeaders") != m.end() && !m["RequestHeaders"].empty()) {
      if (typeid(vector<boost::any>) == m["RequestHeaders"].type()) {
        vector<DescribeDomainDetailResponseBodyRedirectRequestHeaders> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RequestHeaders"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDomainDetailResponseBodyRedirectRequestHeaders model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        requestHeaders = make_shared<vector<DescribeDomainDetailResponseBodyRedirectRequestHeaders>>(expect1);
      }
    }
    if (m.find("Retry") != m.end() && !m["Retry"].empty()) {
      retry = make_shared<bool>(boost::any_cast<bool>(m["Retry"]));
    }
    if (m.find("SniEnabled") != m.end() && !m["SniEnabled"].empty()) {
      sniEnabled = make_shared<bool>(boost::any_cast<bool>(m["SniEnabled"]));
    }
    if (m.find("SniHost") != m.end() && !m["SniHost"].empty()) {
      sniHost = make_shared<string>(boost::any_cast<string>(m["SniHost"]));
    }
    if (m.find("WriteTimeout") != m.end() && !m["WriteTimeout"].empty()) {
      writeTimeout = make_shared<long>(boost::any_cast<long>(m["WriteTimeout"]));
    }
    if (m.find("XffProto") != m.end() && !m["XffProto"].empty()) {
      xffProto = make_shared<bool>(boost::any_cast<bool>(m["XffProto"]));
    }
  }


  virtual ~DescribeDomainDetailResponseBodyRedirect() = default;
};
class DescribeDomainDetailResponseBodySM2CertDetail : public Darabonba::Model {
public:
  shared_ptr<string> commonName{};
  shared_ptr<long> endTime{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<vector<string>> sans{};
  shared_ptr<long> startTime{};

  DescribeDomainDetailResponseBodySM2CertDetail() {}

  explicit DescribeDomainDetailResponseBodySM2CertDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonName) {
      res["CommonName"] = boost::any(*commonName);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (sans) {
      res["Sans"] = boost::any(*sans);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CommonName") != m.end() && !m["CommonName"].empty()) {
      commonName = make_shared<string>(boost::any_cast<string>(m["CommonName"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Sans") != m.end() && !m["Sans"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Sans"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Sans"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sans = make_shared<vector<string>>(toVec1);
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~DescribeDomainDetailResponseBodySM2CertDetail() = default;
};
class DescribeDomainDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeDomainDetailResponseBodyCertDetail> certDetail{};
  shared_ptr<string> cname{};
  shared_ptr<string> domain{};
  shared_ptr<DescribeDomainDetailResponseBodyListen> listen{};
  shared_ptr<DescribeDomainDetailResponseBodyRedirect> redirect{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceManagerResourceGroupId{};
  shared_ptr<DescribeDomainDetailResponseBodySM2CertDetail> SM2CertDetail{};
  shared_ptr<long> status{};

  DescribeDomainDetailResponseBody() {}

  explicit DescribeDomainDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certDetail) {
      res["CertDetail"] = certDetail ? boost::any(certDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (cname) {
      res["Cname"] = boost::any(*cname);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (listen) {
      res["Listen"] = listen ? boost::any(listen->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (redirect) {
      res["Redirect"] = redirect ? boost::any(redirect->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceManagerResourceGroupId) {
      res["ResourceManagerResourceGroupId"] = boost::any(*resourceManagerResourceGroupId);
    }
    if (SM2CertDetail) {
      res["SM2CertDetail"] = SM2CertDetail ? boost::any(SM2CertDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertDetail") != m.end() && !m["CertDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["CertDetail"].type()) {
        DescribeDomainDetailResponseBodyCertDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CertDetail"]));
        certDetail = make_shared<DescribeDomainDetailResponseBodyCertDetail>(model1);
      }
    }
    if (m.find("Cname") != m.end() && !m["Cname"].empty()) {
      cname = make_shared<string>(boost::any_cast<string>(m["Cname"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("Listen") != m.end() && !m["Listen"].empty()) {
      if (typeid(map<string, boost::any>) == m["Listen"].type()) {
        DescribeDomainDetailResponseBodyListen model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Listen"]));
        listen = make_shared<DescribeDomainDetailResponseBodyListen>(model1);
      }
    }
    if (m.find("Redirect") != m.end() && !m["Redirect"].empty()) {
      if (typeid(map<string, boost::any>) == m["Redirect"].type()) {
        DescribeDomainDetailResponseBodyRedirect model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Redirect"]));
        redirect = make_shared<DescribeDomainDetailResponseBodyRedirect>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceManagerResourceGroupId") != m.end() && !m["ResourceManagerResourceGroupId"].empty()) {
      resourceManagerResourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceManagerResourceGroupId"]));
    }
    if (m.find("SM2CertDetail") != m.end() && !m["SM2CertDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["SM2CertDetail"].type()) {
        DescribeDomainDetailResponseBodySM2CertDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SM2CertDetail"]));
        SM2CertDetail = make_shared<DescribeDomainDetailResponseBodySM2CertDetail>(model1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~DescribeDomainDetailResponseBody() = default;
};
class DescribeDomainDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDomainDetailResponseBody> body{};

  DescribeDomainDetailResponse() {}

  explicit DescribeDomainDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDomainDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDomainDetailResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDomainDetailResponse() = default;
};
class DescribeDomainsRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeDomainsRequestTag() {}

  explicit DescribeDomainsRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeDomainsRequestTag() = default;
};
class DescribeDomainsRequest : public Darabonba::Model {
public:
  shared_ptr<string> backend{};
  shared_ptr<string> domain{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceManagerResourceGroupId{};
  shared_ptr<vector<DescribeDomainsRequestTag>> tag{};

  DescribeDomainsRequest() {}

  explicit DescribeDomainsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backend) {
      res["Backend"] = boost::any(*backend);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceManagerResourceGroupId) {
      res["ResourceManagerResourceGroupId"] = boost::any(*resourceManagerResourceGroupId);
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
    if (m.find("Backend") != m.end() && !m["Backend"].empty()) {
      backend = make_shared<string>(boost::any_cast<string>(m["Backend"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceManagerResourceGroupId") != m.end() && !m["ResourceManagerResourceGroupId"].empty()) {
      resourceManagerResourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceManagerResourceGroupId"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<DescribeDomainsRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDomainsRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<DescribeDomainsRequestTag>>(expect1);
      }
    }
  }


  virtual ~DescribeDomainsRequest() = default;
};
class DescribeDomainsResponseBodyDomainsBackedsHttp : public Darabonba::Model {
public:
  shared_ptr<string> backend{};

  DescribeDomainsResponseBodyDomainsBackedsHttp() {}

  explicit DescribeDomainsResponseBodyDomainsBackedsHttp(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backend) {
      res["Backend"] = boost::any(*backend);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Backend") != m.end() && !m["Backend"].empty()) {
      backend = make_shared<string>(boost::any_cast<string>(m["Backend"]));
    }
  }


  virtual ~DescribeDomainsResponseBodyDomainsBackedsHttp() = default;
};
class DescribeDomainsResponseBodyDomainsBackedsHttps : public Darabonba::Model {
public:
  shared_ptr<string> backend{};

  DescribeDomainsResponseBodyDomainsBackedsHttps() {}

  explicit DescribeDomainsResponseBodyDomainsBackedsHttps(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backend) {
      res["Backend"] = boost::any(*backend);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Backend") != m.end() && !m["Backend"].empty()) {
      backend = make_shared<string>(boost::any_cast<string>(m["Backend"]));
    }
  }


  virtual ~DescribeDomainsResponseBodyDomainsBackedsHttps() = default;
};
class DescribeDomainsResponseBodyDomainsBackeds : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDomainsResponseBodyDomainsBackedsHttp>> http{};
  shared_ptr<vector<DescribeDomainsResponseBodyDomainsBackedsHttps>> https{};

  DescribeDomainsResponseBodyDomainsBackeds() {}

  explicit DescribeDomainsResponseBodyDomainsBackeds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (http) {
      vector<boost::any> temp1;
      for(auto item1:*http){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Http"] = boost::any(temp1);
    }
    if (https) {
      vector<boost::any> temp1;
      for(auto item1:*https){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Https"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Http") != m.end() && !m["Http"].empty()) {
      if (typeid(vector<boost::any>) == m["Http"].type()) {
        vector<DescribeDomainsResponseBodyDomainsBackedsHttp> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Http"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDomainsResponseBodyDomainsBackedsHttp model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        http = make_shared<vector<DescribeDomainsResponseBodyDomainsBackedsHttp>>(expect1);
      }
    }
    if (m.find("Https") != m.end() && !m["Https"].empty()) {
      if (typeid(vector<boost::any>) == m["Https"].type()) {
        vector<DescribeDomainsResponseBodyDomainsBackedsHttps> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Https"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDomainsResponseBodyDomainsBackedsHttps model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        https = make_shared<vector<DescribeDomainsResponseBodyDomainsBackedsHttps>>(expect1);
      }
    }
  }


  virtual ~DescribeDomainsResponseBodyDomainsBackeds() = default;
};
class DescribeDomainsResponseBodyDomainsListenPorts : public Darabonba::Model {
public:
  shared_ptr<vector<long>> http{};
  shared_ptr<vector<long>> https{};

  DescribeDomainsResponseBodyDomainsListenPorts() {}

  explicit DescribeDomainsResponseBodyDomainsListenPorts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (http) {
      res["Http"] = boost::any(*http);
    }
    if (https) {
      res["Https"] = boost::any(*https);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Http") != m.end() && !m["Http"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["Http"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Http"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      http = make_shared<vector<long>>(toVec1);
    }
    if (m.find("Https") != m.end() && !m["Https"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["Https"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Https"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      https = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~DescribeDomainsResponseBodyDomainsListenPorts() = default;
};
class DescribeDomainsResponseBodyDomains : public Darabonba::Model {
public:
  shared_ptr<DescribeDomainsResponseBodyDomainsBackeds> backeds{};
  shared_ptr<string> cname{};
  shared_ptr<string> domain{};
  shared_ptr<DescribeDomainsResponseBodyDomainsListenPorts> listenPorts{};
  shared_ptr<string> resourceManagerResourceGroupId{};
  shared_ptr<long> status{};

  DescribeDomainsResponseBodyDomains() {}

  explicit DescribeDomainsResponseBodyDomains(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backeds) {
      res["Backeds"] = backeds ? boost::any(backeds->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (cname) {
      res["Cname"] = boost::any(*cname);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (listenPorts) {
      res["ListenPorts"] = listenPorts ? boost::any(listenPorts->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (resourceManagerResourceGroupId) {
      res["ResourceManagerResourceGroupId"] = boost::any(*resourceManagerResourceGroupId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Backeds") != m.end() && !m["Backeds"].empty()) {
      if (typeid(map<string, boost::any>) == m["Backeds"].type()) {
        DescribeDomainsResponseBodyDomainsBackeds model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Backeds"]));
        backeds = make_shared<DescribeDomainsResponseBodyDomainsBackeds>(model1);
      }
    }
    if (m.find("Cname") != m.end() && !m["Cname"].empty()) {
      cname = make_shared<string>(boost::any_cast<string>(m["Cname"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("ListenPorts") != m.end() && !m["ListenPorts"].empty()) {
      if (typeid(map<string, boost::any>) == m["ListenPorts"].type()) {
        DescribeDomainsResponseBodyDomainsListenPorts model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ListenPorts"]));
        listenPorts = make_shared<DescribeDomainsResponseBodyDomainsListenPorts>(model1);
      }
    }
    if (m.find("ResourceManagerResourceGroupId") != m.end() && !m["ResourceManagerResourceGroupId"].empty()) {
      resourceManagerResourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceManagerResourceGroupId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~DescribeDomainsResponseBodyDomains() = default;
};
class DescribeDomainsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDomainsResponseBodyDomains>> domains{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeDomainsResponseBody() {}

  explicit DescribeDomainsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["Domains"] = boost::any(temp1);
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
    if (m.find("Domains") != m.end() && !m["Domains"].empty()) {
      if (typeid(vector<boost::any>) == m["Domains"].type()) {
        vector<DescribeDomainsResponseBodyDomains> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Domains"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDomainsResponseBodyDomains model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        domains = make_shared<vector<DescribeDomainsResponseBodyDomains>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeDomainsResponseBody() = default;
};
class DescribeDomainsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDomainsResponseBody> body{};

  DescribeDomainsResponse() {}

  explicit DescribeDomainsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDomainsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDomainsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDomainsResponse() = default;
};
class DescribeFlowChartRequest : public Darabonba::Model {
public:
  shared_ptr<string> endTimestamp{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> interval{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resource{};
  shared_ptr<string> resourceManagerResourceGroupId{};
  shared_ptr<string> startTimestamp{};

  DescribeFlowChartRequest() {}

  explicit DescribeFlowChartRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTimestamp) {
      res["EndTimestamp"] = boost::any(*endTimestamp);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (interval) {
      res["Interval"] = boost::any(*interval);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resource) {
      res["Resource"] = boost::any(*resource);
    }
    if (resourceManagerResourceGroupId) {
      res["ResourceManagerResourceGroupId"] = boost::any(*resourceManagerResourceGroupId);
    }
    if (startTimestamp) {
      res["StartTimestamp"] = boost::any(*startTimestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTimestamp") != m.end() && !m["EndTimestamp"].empty()) {
      endTimestamp = make_shared<string>(boost::any_cast<string>(m["EndTimestamp"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<string>(boost::any_cast<string>(m["Interval"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Resource") != m.end() && !m["Resource"].empty()) {
      resource = make_shared<string>(boost::any_cast<string>(m["Resource"]));
    }
    if (m.find("ResourceManagerResourceGroupId") != m.end() && !m["ResourceManagerResourceGroupId"].empty()) {
      resourceManagerResourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceManagerResourceGroupId"]));
    }
    if (m.find("StartTimestamp") != m.end() && !m["StartTimestamp"].empty()) {
      startTimestamp = make_shared<string>(boost::any_cast<string>(m["StartTimestamp"]));
    }
  }


  virtual ~DescribeFlowChartRequest() = default;
};
class DescribeFlowChartResponseBodyFlowChart : public Darabonba::Model {
public:
  shared_ptr<long> aclCustomBlockSum{};
  shared_ptr<long> aclCustomReportsSum{};
  shared_ptr<long> antiScanBlockSum{};
  shared_ptr<long> antibotBlockSum{};
  shared_ptr<string> antibotReportSum{};
  shared_ptr<long> antiscanReportsSum{};
  shared_ptr<string> blacklistBlockSum{};
  shared_ptr<long> blacklistReportsSum{};
  shared_ptr<long> ccCustomBlockSum{};
  shared_ptr<long> ccCustomReportsSum{};
  shared_ptr<long> ccSystemBlocksSum{};
  shared_ptr<long> ccSystemReportsSum{};
  shared_ptr<long> count{};
  shared_ptr<long> inBytes{};
  shared_ptr<long> index{};
  shared_ptr<long> maxPv{};
  shared_ptr<long> outBytes{};
  shared_ptr<long> ratelimitBlockSum{};
  shared_ptr<long> ratelimitReportSum{};
  shared_ptr<long> regionBlockBlocksSum{};
  shared_ptr<long> regionBlockReportsSum{};
  shared_ptr<long> robotCount{};
  shared_ptr<long> wafBlockSum{};
  shared_ptr<string> wafReportSum{};

  DescribeFlowChartResponseBodyFlowChart() {}

  explicit DescribeFlowChartResponseBodyFlowChart(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclCustomBlockSum) {
      res["AclCustomBlockSum"] = boost::any(*aclCustomBlockSum);
    }
    if (aclCustomReportsSum) {
      res["AclCustomReportsSum"] = boost::any(*aclCustomReportsSum);
    }
    if (antiScanBlockSum) {
      res["AntiScanBlockSum"] = boost::any(*antiScanBlockSum);
    }
    if (antibotBlockSum) {
      res["AntibotBlockSum"] = boost::any(*antibotBlockSum);
    }
    if (antibotReportSum) {
      res["AntibotReportSum"] = boost::any(*antibotReportSum);
    }
    if (antiscanReportsSum) {
      res["AntiscanReportsSum"] = boost::any(*antiscanReportsSum);
    }
    if (blacklistBlockSum) {
      res["BlacklistBlockSum"] = boost::any(*blacklistBlockSum);
    }
    if (blacklistReportsSum) {
      res["BlacklistReportsSum"] = boost::any(*blacklistReportsSum);
    }
    if (ccCustomBlockSum) {
      res["CcCustomBlockSum"] = boost::any(*ccCustomBlockSum);
    }
    if (ccCustomReportsSum) {
      res["CcCustomReportsSum"] = boost::any(*ccCustomReportsSum);
    }
    if (ccSystemBlocksSum) {
      res["CcSystemBlocksSum"] = boost::any(*ccSystemBlocksSum);
    }
    if (ccSystemReportsSum) {
      res["CcSystemReportsSum"] = boost::any(*ccSystemReportsSum);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (inBytes) {
      res["InBytes"] = boost::any(*inBytes);
    }
    if (index) {
      res["Index"] = boost::any(*index);
    }
    if (maxPv) {
      res["MaxPv"] = boost::any(*maxPv);
    }
    if (outBytes) {
      res["OutBytes"] = boost::any(*outBytes);
    }
    if (ratelimitBlockSum) {
      res["RatelimitBlockSum"] = boost::any(*ratelimitBlockSum);
    }
    if (ratelimitReportSum) {
      res["RatelimitReportSum"] = boost::any(*ratelimitReportSum);
    }
    if (regionBlockBlocksSum) {
      res["RegionBlockBlocksSum"] = boost::any(*regionBlockBlocksSum);
    }
    if (regionBlockReportsSum) {
      res["RegionBlockReportsSum"] = boost::any(*regionBlockReportsSum);
    }
    if (robotCount) {
      res["RobotCount"] = boost::any(*robotCount);
    }
    if (wafBlockSum) {
      res["WafBlockSum"] = boost::any(*wafBlockSum);
    }
    if (wafReportSum) {
      res["WafReportSum"] = boost::any(*wafReportSum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclCustomBlockSum") != m.end() && !m["AclCustomBlockSum"].empty()) {
      aclCustomBlockSum = make_shared<long>(boost::any_cast<long>(m["AclCustomBlockSum"]));
    }
    if (m.find("AclCustomReportsSum") != m.end() && !m["AclCustomReportsSum"].empty()) {
      aclCustomReportsSum = make_shared<long>(boost::any_cast<long>(m["AclCustomReportsSum"]));
    }
    if (m.find("AntiScanBlockSum") != m.end() && !m["AntiScanBlockSum"].empty()) {
      antiScanBlockSum = make_shared<long>(boost::any_cast<long>(m["AntiScanBlockSum"]));
    }
    if (m.find("AntibotBlockSum") != m.end() && !m["AntibotBlockSum"].empty()) {
      antibotBlockSum = make_shared<long>(boost::any_cast<long>(m["AntibotBlockSum"]));
    }
    if (m.find("AntibotReportSum") != m.end() && !m["AntibotReportSum"].empty()) {
      antibotReportSum = make_shared<string>(boost::any_cast<string>(m["AntibotReportSum"]));
    }
    if (m.find("AntiscanReportsSum") != m.end() && !m["AntiscanReportsSum"].empty()) {
      antiscanReportsSum = make_shared<long>(boost::any_cast<long>(m["AntiscanReportsSum"]));
    }
    if (m.find("BlacklistBlockSum") != m.end() && !m["BlacklistBlockSum"].empty()) {
      blacklistBlockSum = make_shared<string>(boost::any_cast<string>(m["BlacklistBlockSum"]));
    }
    if (m.find("BlacklistReportsSum") != m.end() && !m["BlacklistReportsSum"].empty()) {
      blacklistReportsSum = make_shared<long>(boost::any_cast<long>(m["BlacklistReportsSum"]));
    }
    if (m.find("CcCustomBlockSum") != m.end() && !m["CcCustomBlockSum"].empty()) {
      ccCustomBlockSum = make_shared<long>(boost::any_cast<long>(m["CcCustomBlockSum"]));
    }
    if (m.find("CcCustomReportsSum") != m.end() && !m["CcCustomReportsSum"].empty()) {
      ccCustomReportsSum = make_shared<long>(boost::any_cast<long>(m["CcCustomReportsSum"]));
    }
    if (m.find("CcSystemBlocksSum") != m.end() && !m["CcSystemBlocksSum"].empty()) {
      ccSystemBlocksSum = make_shared<long>(boost::any_cast<long>(m["CcSystemBlocksSum"]));
    }
    if (m.find("CcSystemReportsSum") != m.end() && !m["CcSystemReportsSum"].empty()) {
      ccSystemReportsSum = make_shared<long>(boost::any_cast<long>(m["CcSystemReportsSum"]));
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("InBytes") != m.end() && !m["InBytes"].empty()) {
      inBytes = make_shared<long>(boost::any_cast<long>(m["InBytes"]));
    }
    if (m.find("Index") != m.end() && !m["Index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["Index"]));
    }
    if (m.find("MaxPv") != m.end() && !m["MaxPv"].empty()) {
      maxPv = make_shared<long>(boost::any_cast<long>(m["MaxPv"]));
    }
    if (m.find("OutBytes") != m.end() && !m["OutBytes"].empty()) {
      outBytes = make_shared<long>(boost::any_cast<long>(m["OutBytes"]));
    }
    if (m.find("RatelimitBlockSum") != m.end() && !m["RatelimitBlockSum"].empty()) {
      ratelimitBlockSum = make_shared<long>(boost::any_cast<long>(m["RatelimitBlockSum"]));
    }
    if (m.find("RatelimitReportSum") != m.end() && !m["RatelimitReportSum"].empty()) {
      ratelimitReportSum = make_shared<long>(boost::any_cast<long>(m["RatelimitReportSum"]));
    }
    if (m.find("RegionBlockBlocksSum") != m.end() && !m["RegionBlockBlocksSum"].empty()) {
      regionBlockBlocksSum = make_shared<long>(boost::any_cast<long>(m["RegionBlockBlocksSum"]));
    }
    if (m.find("RegionBlockReportsSum") != m.end() && !m["RegionBlockReportsSum"].empty()) {
      regionBlockReportsSum = make_shared<long>(boost::any_cast<long>(m["RegionBlockReportsSum"]));
    }
    if (m.find("RobotCount") != m.end() && !m["RobotCount"].empty()) {
      robotCount = make_shared<long>(boost::any_cast<long>(m["RobotCount"]));
    }
    if (m.find("WafBlockSum") != m.end() && !m["WafBlockSum"].empty()) {
      wafBlockSum = make_shared<long>(boost::any_cast<long>(m["WafBlockSum"]));
    }
    if (m.find("WafReportSum") != m.end() && !m["WafReportSum"].empty()) {
      wafReportSum = make_shared<string>(boost::any_cast<string>(m["WafReportSum"]));
    }
  }


  virtual ~DescribeFlowChartResponseBodyFlowChart() = default;
};
class DescribeFlowChartResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeFlowChartResponseBodyFlowChart>> flowChart{};
  shared_ptr<string> requestId{};

  DescribeFlowChartResponseBody() {}

  explicit DescribeFlowChartResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (flowChart) {
      vector<boost::any> temp1;
      for(auto item1:*flowChart){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FlowChart"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FlowChart") != m.end() && !m["FlowChart"].empty()) {
      if (typeid(vector<boost::any>) == m["FlowChart"].type()) {
        vector<DescribeFlowChartResponseBodyFlowChart> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FlowChart"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeFlowChartResponseBodyFlowChart model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        flowChart = make_shared<vector<DescribeFlowChartResponseBodyFlowChart>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeFlowChartResponseBody() = default;
};
class DescribeFlowChartResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeFlowChartResponseBody> body{};

  DescribeFlowChartResponse() {}

  explicit DescribeFlowChartResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeFlowChartResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeFlowChartResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeFlowChartResponse() = default;
};
class DescribeFlowTopResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> endTimestamp{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceManagerResourceGroupId{};
  shared_ptr<string> startTimestamp{};

  DescribeFlowTopResourceRequest() {}

  explicit DescribeFlowTopResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTimestamp) {
      res["EndTimestamp"] = boost::any(*endTimestamp);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceManagerResourceGroupId) {
      res["ResourceManagerResourceGroupId"] = boost::any(*resourceManagerResourceGroupId);
    }
    if (startTimestamp) {
      res["StartTimestamp"] = boost::any(*startTimestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTimestamp") != m.end() && !m["EndTimestamp"].empty()) {
      endTimestamp = make_shared<string>(boost::any_cast<string>(m["EndTimestamp"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceManagerResourceGroupId") != m.end() && !m["ResourceManagerResourceGroupId"].empty()) {
      resourceManagerResourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceManagerResourceGroupId"]));
    }
    if (m.find("StartTimestamp") != m.end() && !m["StartTimestamp"].empty()) {
      startTimestamp = make_shared<string>(boost::any_cast<string>(m["StartTimestamp"]));
    }
  }


  virtual ~DescribeFlowTopResourceRequest() = default;
};
class DescribeFlowTopResourceResponseBodyRuleHitsTopResource : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<string> resource{};

  DescribeFlowTopResourceResponseBodyRuleHitsTopResource() {}

  explicit DescribeFlowTopResourceResponseBodyRuleHitsTopResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (resource) {
      res["Resource"] = boost::any(*resource);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("Resource") != m.end() && !m["Resource"].empty()) {
      resource = make_shared<string>(boost::any_cast<string>(m["Resource"]));
    }
  }


  virtual ~DescribeFlowTopResourceResponseBodyRuleHitsTopResource() = default;
};
class DescribeFlowTopResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeFlowTopResourceResponseBodyRuleHitsTopResource>> ruleHitsTopResource{};

  DescribeFlowTopResourceResponseBody() {}

  explicit DescribeFlowTopResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (ruleHitsTopResource) {
      vector<boost::any> temp1;
      for(auto item1:*ruleHitsTopResource){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RuleHitsTopResource"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RuleHitsTopResource") != m.end() && !m["RuleHitsTopResource"].empty()) {
      if (typeid(vector<boost::any>) == m["RuleHitsTopResource"].type()) {
        vector<DescribeFlowTopResourceResponseBodyRuleHitsTopResource> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RuleHitsTopResource"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeFlowTopResourceResponseBodyRuleHitsTopResource model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ruleHitsTopResource = make_shared<vector<DescribeFlowTopResourceResponseBodyRuleHitsTopResource>>(expect1);
      }
    }
  }


  virtual ~DescribeFlowTopResourceResponseBody() = default;
};
class DescribeFlowTopResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeFlowTopResourceResponseBody> body{};

  DescribeFlowTopResourceResponse() {}

  explicit DescribeFlowTopResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeFlowTopResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeFlowTopResourceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeFlowTopResourceResponse() = default;
};
class DescribeFlowTopUrlRequest : public Darabonba::Model {
public:
  shared_ptr<string> endTimestamp{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resource{};
  shared_ptr<string> resourceManagerResourceGroupId{};
  shared_ptr<string> startTimestamp{};

  DescribeFlowTopUrlRequest() {}

  explicit DescribeFlowTopUrlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTimestamp) {
      res["EndTimestamp"] = boost::any(*endTimestamp);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resource) {
      res["Resource"] = boost::any(*resource);
    }
    if (resourceManagerResourceGroupId) {
      res["ResourceManagerResourceGroupId"] = boost::any(*resourceManagerResourceGroupId);
    }
    if (startTimestamp) {
      res["StartTimestamp"] = boost::any(*startTimestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTimestamp") != m.end() && !m["EndTimestamp"].empty()) {
      endTimestamp = make_shared<string>(boost::any_cast<string>(m["EndTimestamp"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Resource") != m.end() && !m["Resource"].empty()) {
      resource = make_shared<string>(boost::any_cast<string>(m["Resource"]));
    }
    if (m.find("ResourceManagerResourceGroupId") != m.end() && !m["ResourceManagerResourceGroupId"].empty()) {
      resourceManagerResourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceManagerResourceGroupId"]));
    }
    if (m.find("StartTimestamp") != m.end() && !m["StartTimestamp"].empty()) {
      startTimestamp = make_shared<string>(boost::any_cast<string>(m["StartTimestamp"]));
    }
  }


  virtual ~DescribeFlowTopUrlRequest() = default;
};
class DescribeFlowTopUrlResponseBodyRuleHitsTopUrl : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<string> url{};

  DescribeFlowTopUrlResponseBodyRuleHitsTopUrl() {}

  explicit DescribeFlowTopUrlResponseBodyRuleHitsTopUrl(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~DescribeFlowTopUrlResponseBodyRuleHitsTopUrl() = default;
};
class DescribeFlowTopUrlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeFlowTopUrlResponseBodyRuleHitsTopUrl>> ruleHitsTopUrl{};

  DescribeFlowTopUrlResponseBody() {}

  explicit DescribeFlowTopUrlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (ruleHitsTopUrl) {
      vector<boost::any> temp1;
      for(auto item1:*ruleHitsTopUrl){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RuleHitsTopUrl"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RuleHitsTopUrl") != m.end() && !m["RuleHitsTopUrl"].empty()) {
      if (typeid(vector<boost::any>) == m["RuleHitsTopUrl"].type()) {
        vector<DescribeFlowTopUrlResponseBodyRuleHitsTopUrl> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RuleHitsTopUrl"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeFlowTopUrlResponseBodyRuleHitsTopUrl model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ruleHitsTopUrl = make_shared<vector<DescribeFlowTopUrlResponseBodyRuleHitsTopUrl>>(expect1);
      }
    }
  }


  virtual ~DescribeFlowTopUrlResponseBody() = default;
};
class DescribeFlowTopUrlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeFlowTopUrlResponseBody> body{};

  DescribeFlowTopUrlResponse() {}

  explicit DescribeFlowTopUrlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeFlowTopUrlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeFlowTopUrlResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeFlowTopUrlResponse() = default;
};
class DescribeHybridCloudGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<long> clusterId{};
  shared_ptr<string> clusterProxyType{};
  shared_ptr<long> groupName{};
  shared_ptr<string> groupType{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceManagerResourceGroupId{};

  DescribeHybridCloudGroupsRequest() {}

  explicit DescribeHybridCloudGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (clusterProxyType) {
      res["ClusterProxyType"] = boost::any(*clusterProxyType);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (groupType) {
      res["GroupType"] = boost::any(*groupType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceManagerResourceGroupId) {
      res["ResourceManagerResourceGroupId"] = boost::any(*resourceManagerResourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<long>(boost::any_cast<long>(m["ClusterId"]));
    }
    if (m.find("ClusterProxyType") != m.end() && !m["ClusterProxyType"].empty()) {
      clusterProxyType = make_shared<string>(boost::any_cast<string>(m["ClusterProxyType"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<long>(boost::any_cast<long>(m["GroupName"]));
    }
    if (m.find("GroupType") != m.end() && !m["GroupType"].empty()) {
      groupType = make_shared<string>(boost::any_cast<string>(m["GroupType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceManagerResourceGroupId") != m.end() && !m["ResourceManagerResourceGroupId"].empty()) {
      resourceManagerResourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceManagerResourceGroupId"]));
    }
  }


  virtual ~DescribeHybridCloudGroupsRequest() = default;
};
class DescribeHybridCloudGroupsResponseBodyGroups : public Darabonba::Model {
public:
  shared_ptr<string> backSourceMark{};
  shared_ptr<long> continentsValue{};
  shared_ptr<long> groupId{};
  shared_ptr<string> groupName{};
  shared_ptr<string> groupType{};
  shared_ptr<string> loadBalanceIp{};
  shared_ptr<long> locationId{};
  shared_ptr<long> operatorValue{};
  shared_ptr<string> ports{};
  shared_ptr<long> regionCodeValue{};
  shared_ptr<string> remark{};

  DescribeHybridCloudGroupsResponseBodyGroups() {}

  explicit DescribeHybridCloudGroupsResponseBodyGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backSourceMark) {
      res["BackSourceMark"] = boost::any(*backSourceMark);
    }
    if (continentsValue) {
      res["ContinentsValue"] = boost::any(*continentsValue);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (groupType) {
      res["GroupType"] = boost::any(*groupType);
    }
    if (loadBalanceIp) {
      res["LoadBalanceIp"] = boost::any(*loadBalanceIp);
    }
    if (locationId) {
      res["LocationId"] = boost::any(*locationId);
    }
    if (operatorValue) {
      res["OperatorValue"] = boost::any(*operatorValue);
    }
    if (ports) {
      res["Ports"] = boost::any(*ports);
    }
    if (regionCodeValue) {
      res["RegionCodeValue"] = boost::any(*regionCodeValue);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackSourceMark") != m.end() && !m["BackSourceMark"].empty()) {
      backSourceMark = make_shared<string>(boost::any_cast<string>(m["BackSourceMark"]));
    }
    if (m.find("ContinentsValue") != m.end() && !m["ContinentsValue"].empty()) {
      continentsValue = make_shared<long>(boost::any_cast<long>(m["ContinentsValue"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<long>(boost::any_cast<long>(m["GroupId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("GroupType") != m.end() && !m["GroupType"].empty()) {
      groupType = make_shared<string>(boost::any_cast<string>(m["GroupType"]));
    }
    if (m.find("LoadBalanceIp") != m.end() && !m["LoadBalanceIp"].empty()) {
      loadBalanceIp = make_shared<string>(boost::any_cast<string>(m["LoadBalanceIp"]));
    }
    if (m.find("LocationId") != m.end() && !m["LocationId"].empty()) {
      locationId = make_shared<long>(boost::any_cast<long>(m["LocationId"]));
    }
    if (m.find("OperatorValue") != m.end() && !m["OperatorValue"].empty()) {
      operatorValue = make_shared<long>(boost::any_cast<long>(m["OperatorValue"]));
    }
    if (m.find("Ports") != m.end() && !m["Ports"].empty()) {
      ports = make_shared<string>(boost::any_cast<string>(m["Ports"]));
    }
    if (m.find("RegionCodeValue") != m.end() && !m["RegionCodeValue"].empty()) {
      regionCodeValue = make_shared<long>(boost::any_cast<long>(m["RegionCodeValue"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
  }


  virtual ~DescribeHybridCloudGroupsResponseBodyGroups() = default;
};
class DescribeHybridCloudGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeHybridCloudGroupsResponseBodyGroups>> groups{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeHybridCloudGroupsResponseBody() {}

  explicit DescribeHybridCloudGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groups) {
      vector<boost::any> temp1;
      for(auto item1:*groups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Groups"] = boost::any(temp1);
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
    if (m.find("Groups") != m.end() && !m["Groups"].empty()) {
      if (typeid(vector<boost::any>) == m["Groups"].type()) {
        vector<DescribeHybridCloudGroupsResponseBodyGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Groups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeHybridCloudGroupsResponseBodyGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        groups = make_shared<vector<DescribeHybridCloudGroupsResponseBodyGroups>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeHybridCloudGroupsResponseBody() = default;
};
class DescribeHybridCloudGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeHybridCloudGroupsResponseBody> body{};

  DescribeHybridCloudGroupsResponse() {}

  explicit DescribeHybridCloudGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeHybridCloudGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeHybridCloudGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeHybridCloudGroupsResponse() = default;
};
class DescribeHybridCloudResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> backend{};
  shared_ptr<bool> cnameEnabled{};
  shared_ptr<string> domain{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceManagerResourceGroupId{};

  DescribeHybridCloudResourcesRequest() {}

  explicit DescribeHybridCloudResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backend) {
      res["Backend"] = boost::any(*backend);
    }
    if (cnameEnabled) {
      res["CnameEnabled"] = boost::any(*cnameEnabled);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceManagerResourceGroupId) {
      res["ResourceManagerResourceGroupId"] = boost::any(*resourceManagerResourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Backend") != m.end() && !m["Backend"].empty()) {
      backend = make_shared<string>(boost::any_cast<string>(m["Backend"]));
    }
    if (m.find("CnameEnabled") != m.end() && !m["CnameEnabled"].empty()) {
      cnameEnabled = make_shared<bool>(boost::any_cast<bool>(m["CnameEnabled"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceManagerResourceGroupId") != m.end() && !m["ResourceManagerResourceGroupId"].empty()) {
      resourceManagerResourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceManagerResourceGroupId"]));
    }
  }


  virtual ~DescribeHybridCloudResourcesRequest() = default;
};
class DescribeHybridCloudResourcesResponseBodyDomainsListen : public Darabonba::Model {
public:
  shared_ptr<string> certId{};
  shared_ptr<long> cipherSuite{};
  shared_ptr<vector<string>> customCiphers{};
  shared_ptr<bool> enableTLSv3{};
  shared_ptr<bool> exclusiveIp{};
  shared_ptr<bool> focusHttps{};
  shared_ptr<bool> http2Enabled{};
  shared_ptr<vector<long>> httpPorts{};
  shared_ptr<vector<long>> httpsPorts{};
  shared_ptr<bool> IPv6Enabled{};
  shared_ptr<string> protectionResource{};
  shared_ptr<string> TLSVersion{};
  shared_ptr<long> xffHeaderMode{};
  shared_ptr<vector<string>> xffHeaders{};

  DescribeHybridCloudResourcesResponseBodyDomainsListen() {}

  explicit DescribeHybridCloudResourcesResponseBodyDomainsListen(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certId) {
      res["CertId"] = boost::any(*certId);
    }
    if (cipherSuite) {
      res["CipherSuite"] = boost::any(*cipherSuite);
    }
    if (customCiphers) {
      res["CustomCiphers"] = boost::any(*customCiphers);
    }
    if (enableTLSv3) {
      res["EnableTLSv3"] = boost::any(*enableTLSv3);
    }
    if (exclusiveIp) {
      res["ExclusiveIp"] = boost::any(*exclusiveIp);
    }
    if (focusHttps) {
      res["FocusHttps"] = boost::any(*focusHttps);
    }
    if (http2Enabled) {
      res["Http2Enabled"] = boost::any(*http2Enabled);
    }
    if (httpPorts) {
      res["HttpPorts"] = boost::any(*httpPorts);
    }
    if (httpsPorts) {
      res["HttpsPorts"] = boost::any(*httpsPorts);
    }
    if (IPv6Enabled) {
      res["IPv6Enabled"] = boost::any(*IPv6Enabled);
    }
    if (protectionResource) {
      res["ProtectionResource"] = boost::any(*protectionResource);
    }
    if (TLSVersion) {
      res["TLSVersion"] = boost::any(*TLSVersion);
    }
    if (xffHeaderMode) {
      res["XffHeaderMode"] = boost::any(*xffHeaderMode);
    }
    if (xffHeaders) {
      res["XffHeaders"] = boost::any(*xffHeaders);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertId") != m.end() && !m["CertId"].empty()) {
      certId = make_shared<string>(boost::any_cast<string>(m["CertId"]));
    }
    if (m.find("CipherSuite") != m.end() && !m["CipherSuite"].empty()) {
      cipherSuite = make_shared<long>(boost::any_cast<long>(m["CipherSuite"]));
    }
    if (m.find("CustomCiphers") != m.end() && !m["CustomCiphers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CustomCiphers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CustomCiphers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      customCiphers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("EnableTLSv3") != m.end() && !m["EnableTLSv3"].empty()) {
      enableTLSv3 = make_shared<bool>(boost::any_cast<bool>(m["EnableTLSv3"]));
    }
    if (m.find("ExclusiveIp") != m.end() && !m["ExclusiveIp"].empty()) {
      exclusiveIp = make_shared<bool>(boost::any_cast<bool>(m["ExclusiveIp"]));
    }
    if (m.find("FocusHttps") != m.end() && !m["FocusHttps"].empty()) {
      focusHttps = make_shared<bool>(boost::any_cast<bool>(m["FocusHttps"]));
    }
    if (m.find("Http2Enabled") != m.end() && !m["Http2Enabled"].empty()) {
      http2Enabled = make_shared<bool>(boost::any_cast<bool>(m["Http2Enabled"]));
    }
    if (m.find("HttpPorts") != m.end() && !m["HttpPorts"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["HttpPorts"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["HttpPorts"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      httpPorts = make_shared<vector<long>>(toVec1);
    }
    if (m.find("HttpsPorts") != m.end() && !m["HttpsPorts"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["HttpsPorts"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["HttpsPorts"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      httpsPorts = make_shared<vector<long>>(toVec1);
    }
    if (m.find("IPv6Enabled") != m.end() && !m["IPv6Enabled"].empty()) {
      IPv6Enabled = make_shared<bool>(boost::any_cast<bool>(m["IPv6Enabled"]));
    }
    if (m.find("ProtectionResource") != m.end() && !m["ProtectionResource"].empty()) {
      protectionResource = make_shared<string>(boost::any_cast<string>(m["ProtectionResource"]));
    }
    if (m.find("TLSVersion") != m.end() && !m["TLSVersion"].empty()) {
      TLSVersion = make_shared<string>(boost::any_cast<string>(m["TLSVersion"]));
    }
    if (m.find("XffHeaderMode") != m.end() && !m["XffHeaderMode"].empty()) {
      xffHeaderMode = make_shared<long>(boost::any_cast<long>(m["XffHeaderMode"]));
    }
    if (m.find("XffHeaders") != m.end() && !m["XffHeaders"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["XffHeaders"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["XffHeaders"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      xffHeaders = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeHybridCloudResourcesResponseBodyDomainsListen() = default;
};
class DescribeHybridCloudResourcesResponseBodyDomainsRedirectRequestHeaders : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeHybridCloudResourcesResponseBodyDomainsRedirectRequestHeaders() {}

  explicit DescribeHybridCloudResourcesResponseBodyDomainsRedirectRequestHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeHybridCloudResourcesResponseBodyDomainsRedirectRequestHeaders() = default;
};
class DescribeHybridCloudResourcesResponseBodyDomainsRedirect : public Darabonba::Model {
public:
  shared_ptr<vector<string>> backends{};
  shared_ptr<bool> cnameEnabled{};
  shared_ptr<long> connectTimeout{};
  shared_ptr<bool> focusHttpBackend{};
  shared_ptr<bool> keepalive{};
  shared_ptr<long> keepaliveRequests{};
  shared_ptr<long> keepaliveTimeout{};
  shared_ptr<string> loadbalance{};
  shared_ptr<long> readTimeout{};
  shared_ptr<vector<DescribeHybridCloudResourcesResponseBodyDomainsRedirectRequestHeaders>> requestHeaders{};
  shared_ptr<bool> retry{};
  shared_ptr<string> routingRules{};
  shared_ptr<bool> sniEnabled{};
  shared_ptr<string> sniHost{};
  shared_ptr<long> writeTimeout{};

  DescribeHybridCloudResourcesResponseBodyDomainsRedirect() {}

  explicit DescribeHybridCloudResourcesResponseBodyDomainsRedirect(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backends) {
      res["Backends"] = boost::any(*backends);
    }
    if (cnameEnabled) {
      res["CnameEnabled"] = boost::any(*cnameEnabled);
    }
    if (connectTimeout) {
      res["ConnectTimeout"] = boost::any(*connectTimeout);
    }
    if (focusHttpBackend) {
      res["FocusHttpBackend"] = boost::any(*focusHttpBackend);
    }
    if (keepalive) {
      res["Keepalive"] = boost::any(*keepalive);
    }
    if (keepaliveRequests) {
      res["KeepaliveRequests"] = boost::any(*keepaliveRequests);
    }
    if (keepaliveTimeout) {
      res["KeepaliveTimeout"] = boost::any(*keepaliveTimeout);
    }
    if (loadbalance) {
      res["Loadbalance"] = boost::any(*loadbalance);
    }
    if (readTimeout) {
      res["ReadTimeout"] = boost::any(*readTimeout);
    }
    if (requestHeaders) {
      vector<boost::any> temp1;
      for(auto item1:*requestHeaders){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RequestHeaders"] = boost::any(temp1);
    }
    if (retry) {
      res["Retry"] = boost::any(*retry);
    }
    if (routingRules) {
      res["RoutingRules"] = boost::any(*routingRules);
    }
    if (sniEnabled) {
      res["SniEnabled"] = boost::any(*sniEnabled);
    }
    if (sniHost) {
      res["SniHost"] = boost::any(*sniHost);
    }
    if (writeTimeout) {
      res["WriteTimeout"] = boost::any(*writeTimeout);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Backends") != m.end() && !m["Backends"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Backends"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Backends"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      backends = make_shared<vector<string>>(toVec1);
    }
    if (m.find("CnameEnabled") != m.end() && !m["CnameEnabled"].empty()) {
      cnameEnabled = make_shared<bool>(boost::any_cast<bool>(m["CnameEnabled"]));
    }
    if (m.find("ConnectTimeout") != m.end() && !m["ConnectTimeout"].empty()) {
      connectTimeout = make_shared<long>(boost::any_cast<long>(m["ConnectTimeout"]));
    }
    if (m.find("FocusHttpBackend") != m.end() && !m["FocusHttpBackend"].empty()) {
      focusHttpBackend = make_shared<bool>(boost::any_cast<bool>(m["FocusHttpBackend"]));
    }
    if (m.find("Keepalive") != m.end() && !m["Keepalive"].empty()) {
      keepalive = make_shared<bool>(boost::any_cast<bool>(m["Keepalive"]));
    }
    if (m.find("KeepaliveRequests") != m.end() && !m["KeepaliveRequests"].empty()) {
      keepaliveRequests = make_shared<long>(boost::any_cast<long>(m["KeepaliveRequests"]));
    }
    if (m.find("KeepaliveTimeout") != m.end() && !m["KeepaliveTimeout"].empty()) {
      keepaliveTimeout = make_shared<long>(boost::any_cast<long>(m["KeepaliveTimeout"]));
    }
    if (m.find("Loadbalance") != m.end() && !m["Loadbalance"].empty()) {
      loadbalance = make_shared<string>(boost::any_cast<string>(m["Loadbalance"]));
    }
    if (m.find("ReadTimeout") != m.end() && !m["ReadTimeout"].empty()) {
      readTimeout = make_shared<long>(boost::any_cast<long>(m["ReadTimeout"]));
    }
    if (m.find("RequestHeaders") != m.end() && !m["RequestHeaders"].empty()) {
      if (typeid(vector<boost::any>) == m["RequestHeaders"].type()) {
        vector<DescribeHybridCloudResourcesResponseBodyDomainsRedirectRequestHeaders> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RequestHeaders"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeHybridCloudResourcesResponseBodyDomainsRedirectRequestHeaders model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        requestHeaders = make_shared<vector<DescribeHybridCloudResourcesResponseBodyDomainsRedirectRequestHeaders>>(expect1);
      }
    }
    if (m.find("Retry") != m.end() && !m["Retry"].empty()) {
      retry = make_shared<bool>(boost::any_cast<bool>(m["Retry"]));
    }
    if (m.find("RoutingRules") != m.end() && !m["RoutingRules"].empty()) {
      routingRules = make_shared<string>(boost::any_cast<string>(m["RoutingRules"]));
    }
    if (m.find("SniEnabled") != m.end() && !m["SniEnabled"].empty()) {
      sniEnabled = make_shared<bool>(boost::any_cast<bool>(m["SniEnabled"]));
    }
    if (m.find("SniHost") != m.end() && !m["SniHost"].empty()) {
      sniHost = make_shared<string>(boost::any_cast<string>(m["SniHost"]));
    }
    if (m.find("WriteTimeout") != m.end() && !m["WriteTimeout"].empty()) {
      writeTimeout = make_shared<long>(boost::any_cast<long>(m["WriteTimeout"]));
    }
  }


  virtual ~DescribeHybridCloudResourcesResponseBodyDomainsRedirect() = default;
};
class DescribeHybridCloudResourcesResponseBodyDomains : public Darabonba::Model {
public:
  shared_ptr<string> cname{};
  shared_ptr<string> domain{};
  shared_ptr<long> id{};
  shared_ptr<DescribeHybridCloudResourcesResponseBodyDomainsListen> listen{};
  shared_ptr<DescribeHybridCloudResourcesResponseBodyDomainsRedirect> redirect{};
  shared_ptr<string> resourceManagerResourceGroupId{};
  shared_ptr<long> status{};
  shared_ptr<string> uid{};

  DescribeHybridCloudResourcesResponseBodyDomains() {}

  explicit DescribeHybridCloudResourcesResponseBodyDomains(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cname) {
      res["Cname"] = boost::any(*cname);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (listen) {
      res["Listen"] = listen ? boost::any(listen->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (redirect) {
      res["Redirect"] = redirect ? boost::any(redirect->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (resourceManagerResourceGroupId) {
      res["ResourceManagerResourceGroupId"] = boost::any(*resourceManagerResourceGroupId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cname") != m.end() && !m["Cname"].empty()) {
      cname = make_shared<string>(boost::any_cast<string>(m["Cname"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Listen") != m.end() && !m["Listen"].empty()) {
      if (typeid(map<string, boost::any>) == m["Listen"].type()) {
        DescribeHybridCloudResourcesResponseBodyDomainsListen model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Listen"]));
        listen = make_shared<DescribeHybridCloudResourcesResponseBodyDomainsListen>(model1);
      }
    }
    if (m.find("Redirect") != m.end() && !m["Redirect"].empty()) {
      if (typeid(map<string, boost::any>) == m["Redirect"].type()) {
        DescribeHybridCloudResourcesResponseBodyDomainsRedirect model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Redirect"]));
        redirect = make_shared<DescribeHybridCloudResourcesResponseBodyDomainsRedirect>(model1);
      }
    }
    if (m.find("ResourceManagerResourceGroupId") != m.end() && !m["ResourceManagerResourceGroupId"].empty()) {
      resourceManagerResourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceManagerResourceGroupId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["Uid"]));
    }
  }


  virtual ~DescribeHybridCloudResourcesResponseBodyDomains() = default;
};
class DescribeHybridCloudResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeHybridCloudResourcesResponseBodyDomains>> domains{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeHybridCloudResourcesResponseBody() {}

  explicit DescribeHybridCloudResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["Domains"] = boost::any(temp1);
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
    if (m.find("Domains") != m.end() && !m["Domains"].empty()) {
      if (typeid(vector<boost::any>) == m["Domains"].type()) {
        vector<DescribeHybridCloudResourcesResponseBodyDomains> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Domains"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeHybridCloudResourcesResponseBodyDomains model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        domains = make_shared<vector<DescribeHybridCloudResourcesResponseBodyDomains>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeHybridCloudResourcesResponseBody() = default;
};
class DescribeHybridCloudResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeHybridCloudResourcesResponseBody> body{};

  DescribeHybridCloudResourcesResponse() {}

  explicit DescribeHybridCloudResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeHybridCloudResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeHybridCloudResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeHybridCloudResourcesResponse() = default;
};
class DescribeHybridCloudUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceManagerResourceGroupId{};

  DescribeHybridCloudUserRequest() {}

  explicit DescribeHybridCloudUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceManagerResourceGroupId) {
      res["ResourceManagerResourceGroupId"] = boost::any(*resourceManagerResourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceManagerResourceGroupId") != m.end() && !m["ResourceManagerResourceGroupId"].empty()) {
      resourceManagerResourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceManagerResourceGroupId"]));
    }
  }


  virtual ~DescribeHybridCloudUserRequest() = default;
};
class DescribeHybridCloudUserResponseBodyUserInfo : public Darabonba::Model {
public:
  shared_ptr<string> httpPorts{};
  shared_ptr<string> httpsPorts{};

  DescribeHybridCloudUserResponseBodyUserInfo() {}

  explicit DescribeHybridCloudUserResponseBodyUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (httpPorts) {
      res["HttpPorts"] = boost::any(*httpPorts);
    }
    if (httpsPorts) {
      res["HttpsPorts"] = boost::any(*httpsPorts);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HttpPorts") != m.end() && !m["HttpPorts"].empty()) {
      httpPorts = make_shared<string>(boost::any_cast<string>(m["HttpPorts"]));
    }
    if (m.find("HttpsPorts") != m.end() && !m["HttpsPorts"].empty()) {
      httpsPorts = make_shared<string>(boost::any_cast<string>(m["HttpsPorts"]));
    }
  }


  virtual ~DescribeHybridCloudUserResponseBodyUserInfo() = default;
};
class DescribeHybridCloudUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeHybridCloudUserResponseBodyUserInfo> userInfo{};

  DescribeHybridCloudUserResponseBody() {}

  explicit DescribeHybridCloudUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (userInfo) {
      res["UserInfo"] = userInfo ? boost::any(userInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserInfo"].type()) {
        DescribeHybridCloudUserResponseBodyUserInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserInfo"]));
        userInfo = make_shared<DescribeHybridCloudUserResponseBodyUserInfo>(model1);
      }
    }
  }


  virtual ~DescribeHybridCloudUserResponseBody() = default;
};
class DescribeHybridCloudUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeHybridCloudUserResponseBody> body{};

  DescribeHybridCloudUserResponse() {}

  explicit DescribeHybridCloudUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeHybridCloudUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeHybridCloudUserResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeHybridCloudUserResponse() = default;
};
class DescribeInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceManagerResourceGroupId{};

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
    if (resourceManagerResourceGroupId) {
      res["ResourceManagerResourceGroupId"] = boost::any(*resourceManagerResourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceManagerResourceGroupId") != m.end() && !m["ResourceManagerResourceGroupId"].empty()) {
      resourceManagerResourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceManagerResourceGroupId"]));
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
  shared_ptr<bool> bot{};
  shared_ptr<string> botApp{};
  shared_ptr<long> botTemplateMaxCount{};
  shared_ptr<string> botWeb{};
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
  shared_ptr<bool> dlp{};
  shared_ptr<long> dlpRuleInTemplateMaxCount{};
  shared_ptr<long> dlpTemplateMaxCount{};
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
  shared_ptr<bool> tamperproof{};
  shared_ptr<long> tamperproofRuleInTemplateMaxCount{};
  shared_ptr<long> tamperproofTemplateMaxCount{};
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
    if (bot) {
      res["Bot"] = boost::any(*bot);
    }
    if (botApp) {
      res["BotApp"] = boost::any(*botApp);
    }
    if (botTemplateMaxCount) {
      res["BotTemplateMaxCount"] = boost::any(*botTemplateMaxCount);
    }
    if (botWeb) {
      res["BotWeb"] = boost::any(*botWeb);
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
    if (dlp) {
      res["Dlp"] = boost::any(*dlp);
    }
    if (dlpRuleInTemplateMaxCount) {
      res["DlpRuleInTemplateMaxCount"] = boost::any(*dlpRuleInTemplateMaxCount);
    }
    if (dlpTemplateMaxCount) {
      res["DlpTemplateMaxCount"] = boost::any(*dlpTemplateMaxCount);
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
    if (tamperproof) {
      res["Tamperproof"] = boost::any(*tamperproof);
    }
    if (tamperproofRuleInTemplateMaxCount) {
      res["TamperproofRuleInTemplateMaxCount"] = boost::any(*tamperproofRuleInTemplateMaxCount);
    }
    if (tamperproofTemplateMaxCount) {
      res["TamperproofTemplateMaxCount"] = boost::any(*tamperproofTemplateMaxCount);
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
    if (m.find("Bot") != m.end() && !m["Bot"].empty()) {
      bot = make_shared<bool>(boost::any_cast<bool>(m["Bot"]));
    }
    if (m.find("BotApp") != m.end() && !m["BotApp"].empty()) {
      botApp = make_shared<string>(boost::any_cast<string>(m["BotApp"]));
    }
    if (m.find("BotTemplateMaxCount") != m.end() && !m["BotTemplateMaxCount"].empty()) {
      botTemplateMaxCount = make_shared<long>(boost::any_cast<long>(m["BotTemplateMaxCount"]));
    }
    if (m.find("BotWeb") != m.end() && !m["BotWeb"].empty()) {
      botWeb = make_shared<string>(boost::any_cast<string>(m["BotWeb"]));
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
    if (m.find("Dlp") != m.end() && !m["Dlp"].empty()) {
      dlp = make_shared<bool>(boost::any_cast<bool>(m["Dlp"]));
    }
    if (m.find("DlpRuleInTemplateMaxCount") != m.end() && !m["DlpRuleInTemplateMaxCount"].empty()) {
      dlpRuleInTemplateMaxCount = make_shared<long>(boost::any_cast<long>(m["DlpRuleInTemplateMaxCount"]));
    }
    if (m.find("DlpTemplateMaxCount") != m.end() && !m["DlpTemplateMaxCount"].empty()) {
      dlpTemplateMaxCount = make_shared<long>(boost::any_cast<long>(m["DlpTemplateMaxCount"]));
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
    if (m.find("Tamperproof") != m.end() && !m["Tamperproof"].empty()) {
      tamperproof = make_shared<bool>(boost::any_cast<bool>(m["Tamperproof"]));
    }
    if (m.find("TamperproofRuleInTemplateMaxCount") != m.end() && !m["TamperproofRuleInTemplateMaxCount"].empty()) {
      tamperproofRuleInTemplateMaxCount = make_shared<long>(boost::any_cast<long>(m["TamperproofRuleInTemplateMaxCount"]));
    }
    if (m.find("TamperproofTemplateMaxCount") != m.end() && !m["TamperproofTemplateMaxCount"].empty()) {
      tamperproofTemplateMaxCount = make_shared<long>(boost::any_cast<long>(m["TamperproofTemplateMaxCount"]));
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
  shared_ptr<long> endTime{};
  shared_ptr<string> inDebt{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> payType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> requestId{};
  shared_ptr<long> startTime{};
  shared_ptr<long> status{};

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
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (inDebt) {
      res["InDebt"] = boost::any(*inDebt);
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
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
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
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("InDebt") != m.end() && !m["InDebt"].empty()) {
      inDebt = make_shared<string>(boost::any_cast<string>(m["InDebt"]));
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
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
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
        DescribeInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeInstanceResponse() = default;
};
class DescribeMajorProtectionBlackIpsRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> ipLike{};
  shared_ptr<string> orderBy{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceManagerResourceGroupId{};
  shared_ptr<long> ruleId{};
  shared_ptr<long> templateId{};

  DescribeMajorProtectionBlackIpsRequest() {}

  explicit DescribeMajorProtectionBlackIpsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ipLike) {
      res["IpLike"] = boost::any(*ipLike);
    }
    if (orderBy) {
      res["OrderBy"] = boost::any(*orderBy);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceManagerResourceGroupId) {
      res["ResourceManagerResourceGroupId"] = boost::any(*resourceManagerResourceGroupId);
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
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("IpLike") != m.end() && !m["IpLike"].empty()) {
      ipLike = make_shared<string>(boost::any_cast<string>(m["IpLike"]));
    }
    if (m.find("OrderBy") != m.end() && !m["OrderBy"].empty()) {
      orderBy = make_shared<string>(boost::any_cast<string>(m["OrderBy"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceManagerResourceGroupId") != m.end() && !m["ResourceManagerResourceGroupId"].empty()) {
      resourceManagerResourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceManagerResourceGroupId"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
  }


  virtual ~DescribeMajorProtectionBlackIpsRequest() = default;
};
class DescribeMajorProtectionBlackIpsResponseBodyIpList : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<long> expiredTime{};
  shared_ptr<long> gmtModified{};
  shared_ptr<string> ip{};
  shared_ptr<long> ruleId{};
  shared_ptr<long> templateId{};

  DescribeMajorProtectionBlackIpsResponseBodyIpList() {}

  explicit DescribeMajorProtectionBlackIpsResponseBodyIpList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
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
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<long>(boost::any_cast<long>(m["GmtModified"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
  }


  virtual ~DescribeMajorProtectionBlackIpsResponseBodyIpList() = default;
};
class DescribeMajorProtectionBlackIpsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeMajorProtectionBlackIpsResponseBodyIpList>> ipList{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeMajorProtectionBlackIpsResponseBody() {}

  explicit DescribeMajorProtectionBlackIpsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ipList) {
      vector<boost::any> temp1;
      for(auto item1:*ipList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["IpList"] = boost::any(temp1);
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
    if (m.find("IpList") != m.end() && !m["IpList"].empty()) {
      if (typeid(vector<boost::any>) == m["IpList"].type()) {
        vector<DescribeMajorProtectionBlackIpsResponseBodyIpList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["IpList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMajorProtectionBlackIpsResponseBodyIpList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ipList = make_shared<vector<DescribeMajorProtectionBlackIpsResponseBodyIpList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeMajorProtectionBlackIpsResponseBody() = default;
};
class DescribeMajorProtectionBlackIpsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeMajorProtectionBlackIpsResponseBody> body{};

  DescribeMajorProtectionBlackIpsResponse() {}

  explicit DescribeMajorProtectionBlackIpsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeMajorProtectionBlackIpsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeMajorProtectionBlackIpsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeMajorProtectionBlackIpsResponse() = default;
};
class DescribeMemberAccountsRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountStatus{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceManagerResourceGroupId{};
  shared_ptr<string> sourceIp{};

  DescribeMemberAccountsRequest() {}

  explicit DescribeMemberAccountsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountStatus) {
      res["AccountStatus"] = boost::any(*accountStatus);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceManagerResourceGroupId) {
      res["ResourceManagerResourceGroupId"] = boost::any(*resourceManagerResourceGroupId);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountStatus") != m.end() && !m["AccountStatus"].empty()) {
      accountStatus = make_shared<string>(boost::any_cast<string>(m["AccountStatus"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceManagerResourceGroupId") != m.end() && !m["ResourceManagerResourceGroupId"].empty()) {
      resourceManagerResourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceManagerResourceGroupId"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~DescribeMemberAccountsRequest() = default;
};
class DescribeMemberAccountsResponseBodyAccountInfos : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> accountStatus{};
  shared_ptr<string> description{};
  shared_ptr<long> gmtCreate{};

  DescribeMemberAccountsResponseBodyAccountInfos() {}

  explicit DescribeMemberAccountsResponseBodyAccountInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (accountStatus) {
      res["AccountStatus"] = boost::any(*accountStatus);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("AccountStatus") != m.end() && !m["AccountStatus"].empty()) {
      accountStatus = make_shared<string>(boost::any_cast<string>(m["AccountStatus"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
  }


  virtual ~DescribeMemberAccountsResponseBodyAccountInfos() = default;
};
class DescribeMemberAccountsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeMemberAccountsResponseBodyAccountInfos>> accountInfos{};
  shared_ptr<string> requestId{};

  DescribeMemberAccountsResponseBody() {}

  explicit DescribeMemberAccountsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountInfos) {
      vector<boost::any> temp1;
      for(auto item1:*accountInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AccountInfos"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountInfos") != m.end() && !m["AccountInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["AccountInfos"].type()) {
        vector<DescribeMemberAccountsResponseBodyAccountInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AccountInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMemberAccountsResponseBodyAccountInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        accountInfos = make_shared<vector<DescribeMemberAccountsResponseBodyAccountInfos>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeMemberAccountsResponseBody() = default;
};
class DescribeMemberAccountsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeMemberAccountsResponseBody> body{};

  DescribeMemberAccountsResponse() {}

  explicit DescribeMemberAccountsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeMemberAccountsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeMemberAccountsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeMemberAccountsResponse() = default;
};
class DescribePeakTrendRequest : public Darabonba::Model {
public:
  shared_ptr<string> endTimestamp{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> interval{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resource{};
  shared_ptr<string> resourceManagerResourceGroupId{};
  shared_ptr<string> startTimestamp{};

  DescribePeakTrendRequest() {}

  explicit DescribePeakTrendRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTimestamp) {
      res["EndTimestamp"] = boost::any(*endTimestamp);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (interval) {
      res["Interval"] = boost::any(*interval);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resource) {
      res["Resource"] = boost::any(*resource);
    }
    if (resourceManagerResourceGroupId) {
      res["ResourceManagerResourceGroupId"] = boost::any(*resourceManagerResourceGroupId);
    }
    if (startTimestamp) {
      res["StartTimestamp"] = boost::any(*startTimestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTimestamp") != m.end() && !m["EndTimestamp"].empty()) {
      endTimestamp = make_shared<string>(boost::any_cast<string>(m["EndTimestamp"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<string>(boost::any_cast<string>(m["Interval"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Resource") != m.end() && !m["Resource"].empty()) {
      resource = make_shared<string>(boost::any_cast<string>(m["Resource"]));
    }
    if (m.find("ResourceManagerResourceGroupId") != m.end() && !m["ResourceManagerResourceGroupId"].empty()) {
      resourceManagerResourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceManagerResourceGroupId"]));
    }
    if (m.find("StartTimestamp") != m.end() && !m["StartTimestamp"].empty()) {
      startTimestamp = make_shared<string>(boost::any_cast<string>(m["StartTimestamp"]));
    }
  }


  virtual ~DescribePeakTrendRequest() = default;
};
class DescribePeakTrendResponseBodyFlowChart : public Darabonba::Model {
public:
  shared_ptr<long> aclSum{};
  shared_ptr<long> antiScanSum{};
  shared_ptr<long> ccSum{};
  shared_ptr<long> count{};
  shared_ptr<long> index{};
  shared_ptr<long> wafSum{};

  DescribePeakTrendResponseBodyFlowChart() {}

  explicit DescribePeakTrendResponseBodyFlowChart(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclSum) {
      res["AclSum"] = boost::any(*aclSum);
    }
    if (antiScanSum) {
      res["AntiScanSum"] = boost::any(*antiScanSum);
    }
    if (ccSum) {
      res["CcSum"] = boost::any(*ccSum);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (index) {
      res["Index"] = boost::any(*index);
    }
    if (wafSum) {
      res["WafSum"] = boost::any(*wafSum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclSum") != m.end() && !m["AclSum"].empty()) {
      aclSum = make_shared<long>(boost::any_cast<long>(m["AclSum"]));
    }
    if (m.find("AntiScanSum") != m.end() && !m["AntiScanSum"].empty()) {
      antiScanSum = make_shared<long>(boost::any_cast<long>(m["AntiScanSum"]));
    }
    if (m.find("CcSum") != m.end() && !m["CcSum"].empty()) {
      ccSum = make_shared<long>(boost::any_cast<long>(m["CcSum"]));
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("Index") != m.end() && !m["Index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["Index"]));
    }
    if (m.find("WafSum") != m.end() && !m["WafSum"].empty()) {
      wafSum = make_shared<long>(boost::any_cast<long>(m["WafSum"]));
    }
  }


  virtual ~DescribePeakTrendResponseBodyFlowChart() = default;
};
class DescribePeakTrendResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribePeakTrendResponseBodyFlowChart>> flowChart{};
  shared_ptr<string> requestId{};

  DescribePeakTrendResponseBody() {}

  explicit DescribePeakTrendResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (flowChart) {
      vector<boost::any> temp1;
      for(auto item1:*flowChart){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FlowChart"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FlowChart") != m.end() && !m["FlowChart"].empty()) {
      if (typeid(vector<boost::any>) == m["FlowChart"].type()) {
        vector<DescribePeakTrendResponseBodyFlowChart> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FlowChart"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePeakTrendResponseBodyFlowChart model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        flowChart = make_shared<vector<DescribePeakTrendResponseBodyFlowChart>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribePeakTrendResponseBody() = default;
};
class DescribePeakTrendResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribePeakTrendResponseBody> body{};

  DescribePeakTrendResponse() {}

  explicit DescribePeakTrendResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribePeakTrendResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePeakTrendResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePeakTrendResponse() = default;
};
class DescribeProductInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> ownerUserId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceInstanceId{};
  shared_ptr<string> resourceIp{};
  shared_ptr<string> resourceManagerResourceGroupId{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> resourceProduct{};
  shared_ptr<string> resourceRegionId{};

  DescribeProductInstancesRequest() {}

  explicit DescribeProductInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ownerUserId) {
      res["OwnerUserId"] = boost::any(*ownerUserId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceInstanceId) {
      res["ResourceInstanceId"] = boost::any(*resourceInstanceId);
    }
    if (resourceIp) {
      res["ResourceIp"] = boost::any(*resourceIp);
    }
    if (resourceManagerResourceGroupId) {
      res["ResourceManagerResourceGroupId"] = boost::any(*resourceManagerResourceGroupId);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    if (resourceProduct) {
      res["ResourceProduct"] = boost::any(*resourceProduct);
    }
    if (resourceRegionId) {
      res["ResourceRegionId"] = boost::any(*resourceRegionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OwnerUserId") != m.end() && !m["OwnerUserId"].empty()) {
      ownerUserId = make_shared<string>(boost::any_cast<string>(m["OwnerUserId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceInstanceId") != m.end() && !m["ResourceInstanceId"].empty()) {
      resourceInstanceId = make_shared<string>(boost::any_cast<string>(m["ResourceInstanceId"]));
    }
    if (m.find("ResourceIp") != m.end() && !m["ResourceIp"].empty()) {
      resourceIp = make_shared<string>(boost::any_cast<string>(m["ResourceIp"]));
    }
    if (m.find("ResourceManagerResourceGroupId") != m.end() && !m["ResourceManagerResourceGroupId"].empty()) {
      resourceManagerResourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceManagerResourceGroupId"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("ResourceProduct") != m.end() && !m["ResourceProduct"].empty()) {
      resourceProduct = make_shared<string>(boost::any_cast<string>(m["ResourceProduct"]));
    }
    if (m.find("ResourceRegionId") != m.end() && !m["ResourceRegionId"].empty()) {
      resourceRegionId = make_shared<string>(boost::any_cast<string>(m["ResourceRegionId"]));
    }
  }


  virtual ~DescribeProductInstancesRequest() = default;
};
class DescribeProductInstancesResponseBodyProductInstancesResourcePortsCertificates : public Darabonba::Model {
public:
  shared_ptr<string> certificateId{};
  shared_ptr<string> certificateName{};

  DescribeProductInstancesResponseBodyProductInstancesResourcePortsCertificates() {}

  explicit DescribeProductInstancesResponseBodyProductInstancesResourcePortsCertificates(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificateId) {
      res["CertificateId"] = boost::any(*certificateId);
    }
    if (certificateName) {
      res["CertificateName"] = boost::any(*certificateName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertificateId") != m.end() && !m["CertificateId"].empty()) {
      certificateId = make_shared<string>(boost::any_cast<string>(m["CertificateId"]));
    }
    if (m.find("CertificateName") != m.end() && !m["CertificateName"].empty()) {
      certificateName = make_shared<string>(boost::any_cast<string>(m["CertificateName"]));
    }
  }


  virtual ~DescribeProductInstancesResponseBodyProductInstancesResourcePortsCertificates() = default;
};
class DescribeProductInstancesResponseBodyProductInstancesResourcePorts : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeProductInstancesResponseBodyProductInstancesResourcePortsCertificates>> certificates{};
  shared_ptr<long> port{};
  shared_ptr<string> protocol{};

  DescribeProductInstancesResponseBodyProductInstancesResourcePorts() {}

  explicit DescribeProductInstancesResponseBodyProductInstancesResourcePorts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificates) {
      vector<boost::any> temp1;
      for(auto item1:*certificates){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Certificates"] = boost::any(temp1);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Certificates") != m.end() && !m["Certificates"].empty()) {
      if (typeid(vector<boost::any>) == m["Certificates"].type()) {
        vector<DescribeProductInstancesResponseBodyProductInstancesResourcePortsCertificates> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Certificates"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeProductInstancesResponseBodyProductInstancesResourcePortsCertificates model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        certificates = make_shared<vector<DescribeProductInstancesResponseBodyProductInstancesResourcePortsCertificates>>(expect1);
      }
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
  }


  virtual ~DescribeProductInstancesResponseBodyProductInstancesResourcePorts() = default;
};
class DescribeProductInstancesResponseBodyProductInstances : public Darabonba::Model {
public:
  shared_ptr<string> ownerUserId{};
  shared_ptr<string> resourceInstanceId{};
  shared_ptr<string> resourceIp{};
  shared_ptr<string> resourceName{};
  shared_ptr<vector<DescribeProductInstancesResponseBodyProductInstancesResourcePorts>> resourcePorts{};
  shared_ptr<string> resourceProduct{};
  shared_ptr<string> resourceRegionId{};

  DescribeProductInstancesResponseBodyProductInstances() {}

  explicit DescribeProductInstancesResponseBodyProductInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerUserId) {
      res["OwnerUserId"] = boost::any(*ownerUserId);
    }
    if (resourceInstanceId) {
      res["ResourceInstanceId"] = boost::any(*resourceInstanceId);
    }
    if (resourceIp) {
      res["ResourceIp"] = boost::any(*resourceIp);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    if (resourcePorts) {
      vector<boost::any> temp1;
      for(auto item1:*resourcePorts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResourcePorts"] = boost::any(temp1);
    }
    if (resourceProduct) {
      res["ResourceProduct"] = boost::any(*resourceProduct);
    }
    if (resourceRegionId) {
      res["ResourceRegionId"] = boost::any(*resourceRegionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerUserId") != m.end() && !m["OwnerUserId"].empty()) {
      ownerUserId = make_shared<string>(boost::any_cast<string>(m["OwnerUserId"]));
    }
    if (m.find("ResourceInstanceId") != m.end() && !m["ResourceInstanceId"].empty()) {
      resourceInstanceId = make_shared<string>(boost::any_cast<string>(m["ResourceInstanceId"]));
    }
    if (m.find("ResourceIp") != m.end() && !m["ResourceIp"].empty()) {
      resourceIp = make_shared<string>(boost::any_cast<string>(m["ResourceIp"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("ResourcePorts") != m.end() && !m["ResourcePorts"].empty()) {
      if (typeid(vector<boost::any>) == m["ResourcePorts"].type()) {
        vector<DescribeProductInstancesResponseBodyProductInstancesResourcePorts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResourcePorts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeProductInstancesResponseBodyProductInstancesResourcePorts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resourcePorts = make_shared<vector<DescribeProductInstancesResponseBodyProductInstancesResourcePorts>>(expect1);
      }
    }
    if (m.find("ResourceProduct") != m.end() && !m["ResourceProduct"].empty()) {
      resourceProduct = make_shared<string>(boost::any_cast<string>(m["ResourceProduct"]));
    }
    if (m.find("ResourceRegionId") != m.end() && !m["ResourceRegionId"].empty()) {
      resourceRegionId = make_shared<string>(boost::any_cast<string>(m["ResourceRegionId"]));
    }
  }


  virtual ~DescribeProductInstancesResponseBodyProductInstances() = default;
};
class DescribeProductInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeProductInstancesResponseBodyProductInstances>> productInstances{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeProductInstancesResponseBody() {}

  explicit DescribeProductInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productInstances) {
      vector<boost::any> temp1;
      for(auto item1:*productInstances){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ProductInstances"] = boost::any(temp1);
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
    if (m.find("ProductInstances") != m.end() && !m["ProductInstances"].empty()) {
      if (typeid(vector<boost::any>) == m["ProductInstances"].type()) {
        vector<DescribeProductInstancesResponseBodyProductInstances> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ProductInstances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeProductInstancesResponseBodyProductInstances model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        productInstances = make_shared<vector<DescribeProductInstancesResponseBodyProductInstances>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeProductInstancesResponseBody() = default;
};
class DescribeProductInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeProductInstancesResponseBody> body{};

  DescribeProductInstancesResponse() {}

  explicit DescribeProductInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeProductInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeProductInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeProductInstancesResponse() = default;
};
class DescribeResourceInstanceCertsRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceInstanceId{};
  shared_ptr<string> resourceManagerResourceGroupId{};

  DescribeResourceInstanceCertsRequest() {}

  explicit DescribeResourceInstanceCertsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceInstanceId) {
      res["ResourceInstanceId"] = boost::any(*resourceInstanceId);
    }
    if (resourceManagerResourceGroupId) {
      res["ResourceManagerResourceGroupId"] = boost::any(*resourceManagerResourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceInstanceId") != m.end() && !m["ResourceInstanceId"].empty()) {
      resourceInstanceId = make_shared<string>(boost::any_cast<string>(m["ResourceInstanceId"]));
    }
    if (m.find("ResourceManagerResourceGroupId") != m.end() && !m["ResourceManagerResourceGroupId"].empty()) {
      resourceManagerResourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceManagerResourceGroupId"]));
    }
  }


  virtual ~DescribeResourceInstanceCertsRequest() = default;
};
class DescribeResourceInstanceCertsResponseBodyCerts : public Darabonba::Model {
public:
  shared_ptr<long> afterDate{};
  shared_ptr<long> beforeDate{};
  shared_ptr<string> certIdentifier{};
  shared_ptr<string> certName{};
  shared_ptr<string> commonName{};
  shared_ptr<string> domain{};
  shared_ptr<bool> isChainCompleted{};

  DescribeResourceInstanceCertsResponseBodyCerts() {}

  explicit DescribeResourceInstanceCertsResponseBodyCerts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (afterDate) {
      res["AfterDate"] = boost::any(*afterDate);
    }
    if (beforeDate) {
      res["BeforeDate"] = boost::any(*beforeDate);
    }
    if (certIdentifier) {
      res["CertIdentifier"] = boost::any(*certIdentifier);
    }
    if (certName) {
      res["CertName"] = boost::any(*certName);
    }
    if (commonName) {
      res["CommonName"] = boost::any(*commonName);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (isChainCompleted) {
      res["IsChainCompleted"] = boost::any(*isChainCompleted);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AfterDate") != m.end() && !m["AfterDate"].empty()) {
      afterDate = make_shared<long>(boost::any_cast<long>(m["AfterDate"]));
    }
    if (m.find("BeforeDate") != m.end() && !m["BeforeDate"].empty()) {
      beforeDate = make_shared<long>(boost::any_cast<long>(m["BeforeDate"]));
    }
    if (m.find("CertIdentifier") != m.end() && !m["CertIdentifier"].empty()) {
      certIdentifier = make_shared<string>(boost::any_cast<string>(m["CertIdentifier"]));
    }
    if (m.find("CertName") != m.end() && !m["CertName"].empty()) {
      certName = make_shared<string>(boost::any_cast<string>(m["CertName"]));
    }
    if (m.find("CommonName") != m.end() && !m["CommonName"].empty()) {
      commonName = make_shared<string>(boost::any_cast<string>(m["CommonName"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("IsChainCompleted") != m.end() && !m["IsChainCompleted"].empty()) {
      isChainCompleted = make_shared<bool>(boost::any_cast<bool>(m["IsChainCompleted"]));
    }
  }


  virtual ~DescribeResourceInstanceCertsResponseBodyCerts() = default;
};
class DescribeResourceInstanceCertsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeResourceInstanceCertsResponseBodyCerts>> certs{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeResourceInstanceCertsResponseBody() {}

  explicit DescribeResourceInstanceCertsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certs) {
      vector<boost::any> temp1;
      for(auto item1:*certs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Certs"] = boost::any(temp1);
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
    if (m.find("Certs") != m.end() && !m["Certs"].empty()) {
      if (typeid(vector<boost::any>) == m["Certs"].type()) {
        vector<DescribeResourceInstanceCertsResponseBodyCerts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Certs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeResourceInstanceCertsResponseBodyCerts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        certs = make_shared<vector<DescribeResourceInstanceCertsResponseBodyCerts>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeResourceInstanceCertsResponseBody() = default;
};
class DescribeResourceInstanceCertsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeResourceInstanceCertsResponseBody> body{};

  DescribeResourceInstanceCertsResponse() {}

  explicit DescribeResourceInstanceCertsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeResourceInstanceCertsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeResourceInstanceCertsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeResourceInstanceCertsResponse() = default;
};
class DescribeResourceLogStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceManagerResourceGroupId{};
  shared_ptr<string> resources{};

  DescribeResourceLogStatusRequest() {}

  explicit DescribeResourceLogStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceManagerResourceGroupId) {
      res["ResourceManagerResourceGroupId"] = boost::any(*resourceManagerResourceGroupId);
    }
    if (resources) {
      res["Resources"] = boost::any(*resources);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceManagerResourceGroupId") != m.end() && !m["ResourceManagerResourceGroupId"].empty()) {
      resourceManagerResourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceManagerResourceGroupId"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      resources = make_shared<string>(boost::any_cast<string>(m["Resources"]));
    }
  }


  virtual ~DescribeResourceLogStatusRequest() = default;
};
class DescribeResourceLogStatusResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> resource{};
  shared_ptr<bool> status{};

  DescribeResourceLogStatusResponseBodyResult() {}

  explicit DescribeResourceLogStatusResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resource) {
      res["Resource"] = boost::any(*resource);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Resource") != m.end() && !m["Resource"].empty()) {
      resource = make_shared<string>(boost::any_cast<string>(m["Resource"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<bool>(boost::any_cast<bool>(m["Status"]));
    }
  }


  virtual ~DescribeResourceLogStatusResponseBodyResult() = default;
};
class DescribeResourceLogStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeResourceLogStatusResponseBodyResult>> result{};

  DescribeResourceLogStatusResponseBody() {}

  explicit DescribeResourceLogStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<DescribeResourceLogStatusResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeResourceLogStatusResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<DescribeResourceLogStatusResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~DescribeResourceLogStatusResponseBody() = default;
};
class DescribeResourceLogStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeResourceLogStatusResponseBody> body{};

  DescribeResourceLogStatusResponse() {}

  explicit DescribeResourceLogStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeResourceLogStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeResourceLogStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeResourceLogStatusResponse() = default;
};
class DescribeResourcePortRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceInstanceId{};
  shared_ptr<string> resourceManagerResourceGroupId{};

  DescribeResourcePortRequest() {}

  explicit DescribeResourcePortRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceInstanceId) {
      res["ResourceInstanceId"] = boost::any(*resourceInstanceId);
    }
    if (resourceManagerResourceGroupId) {
      res["ResourceManagerResourceGroupId"] = boost::any(*resourceManagerResourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceInstanceId") != m.end() && !m["ResourceInstanceId"].empty()) {
      resourceInstanceId = make_shared<string>(boost::any_cast<string>(m["ResourceInstanceId"]));
    }
    if (m.find("ResourceManagerResourceGroupId") != m.end() && !m["ResourceManagerResourceGroupId"].empty()) {
      resourceManagerResourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceManagerResourceGroupId"]));
    }
  }


  virtual ~DescribeResourcePortRequest() = default;
};
class DescribeResourcePortResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> resourcePorts{};

  DescribeResourcePortResponseBody() {}

  explicit DescribeResourcePortResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourcePorts) {
      res["ResourcePorts"] = boost::any(*resourcePorts);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourcePorts") != m.end() && !m["ResourcePorts"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourcePorts"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourcePorts"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourcePorts = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeResourcePortResponseBody() = default;
};
class DescribeResourcePortResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeResourcePortResponseBody> body{};

  DescribeResourcePortResponse() {}

  explicit DescribeResourcePortResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeResourcePortResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeResourcePortResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeResourcePortResponse() = default;
};
class DescribeResourceRegionIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceManagerResourceGroupId{};

  DescribeResourceRegionIdRequest() {}

  explicit DescribeResourceRegionIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceManagerResourceGroupId) {
      res["ResourceManagerResourceGroupId"] = boost::any(*resourceManagerResourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceManagerResourceGroupId") != m.end() && !m["ResourceManagerResourceGroupId"].empty()) {
      resourceManagerResourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceManagerResourceGroupId"]));
    }
  }


  virtual ~DescribeResourceRegionIdRequest() = default;
};
class DescribeResourceRegionIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> resourceRegionIds{};

  DescribeResourceRegionIdResponseBody() {}

  explicit DescribeResourceRegionIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceRegionIds) {
      res["ResourceRegionIds"] = boost::any(*resourceRegionIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceRegionIds") != m.end() && !m["ResourceRegionIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceRegionIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceRegionIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceRegionIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeResourceRegionIdResponseBody() = default;
};
class DescribeResourceRegionIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeResourceRegionIdResponseBody> body{};

  DescribeResourceRegionIdResponse() {}

  explicit DescribeResourceRegionIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeResourceRegionIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeResourceRegionIdResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeResourceRegionIdResponse() = default;
};
class DescribeResourceSupportRegionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceManagerResourceGroupId{};

  DescribeResourceSupportRegionsRequest() {}

  explicit DescribeResourceSupportRegionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceManagerResourceGroupId) {
      res["ResourceManagerResourceGroupId"] = boost::any(*resourceManagerResourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceManagerResourceGroupId") != m.end() && !m["ResourceManagerResourceGroupId"].empty()) {
      resourceManagerResourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceManagerResourceGroupId"]));
    }
  }


  virtual ~DescribeResourceSupportRegionsRequest() = default;
};
class DescribeResourceSupportRegionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> supportRegions{};

  DescribeResourceSupportRegionsResponseBody() {}

  explicit DescribeResourceSupportRegionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (supportRegions) {
      res["SupportRegions"] = boost::any(*supportRegions);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SupportRegions") != m.end() && !m["SupportRegions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SupportRegions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SupportRegions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      supportRegions = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeResourceSupportRegionsResponseBody() = default;
};
class DescribeResourceSupportRegionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeResourceSupportRegionsResponseBody> body{};

  DescribeResourceSupportRegionsResponse() {}

  explicit DescribeResourceSupportRegionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeResourceSupportRegionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeResourceSupportRegionsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeResourceSupportRegionsResponse() = default;
};
class DescribeResponseCodeTrendGraphRequest : public Darabonba::Model {
public:
  shared_ptr<string> endTimestamp{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> interval{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resource{};
  shared_ptr<string> resourceManagerResourceGroupId{};
  shared_ptr<string> startTimestamp{};
  shared_ptr<string> type{};

  DescribeResponseCodeTrendGraphRequest() {}

  explicit DescribeResponseCodeTrendGraphRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTimestamp) {
      res["EndTimestamp"] = boost::any(*endTimestamp);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (interval) {
      res["Interval"] = boost::any(*interval);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resource) {
      res["Resource"] = boost::any(*resource);
    }
    if (resourceManagerResourceGroupId) {
      res["ResourceManagerResourceGroupId"] = boost::any(*resourceManagerResourceGroupId);
    }
    if (startTimestamp) {
      res["StartTimestamp"] = boost::any(*startTimestamp);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTimestamp") != m.end() && !m["EndTimestamp"].empty()) {
      endTimestamp = make_shared<string>(boost::any_cast<string>(m["EndTimestamp"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<string>(boost::any_cast<string>(m["Interval"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Resource") != m.end() && !m["Resource"].empty()) {
      resource = make_shared<string>(boost::any_cast<string>(m["Resource"]));
    }
    if (m.find("ResourceManagerResourceGroupId") != m.end() && !m["ResourceManagerResourceGroupId"].empty()) {
      resourceManagerResourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceManagerResourceGroupId"]));
    }
    if (m.find("StartTimestamp") != m.end() && !m["StartTimestamp"].empty()) {
      startTimestamp = make_shared<string>(boost::any_cast<string>(m["StartTimestamp"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeResponseCodeTrendGraphRequest() = default;
};
class DescribeResponseCodeTrendGraphResponseBodyResponseCodes : public Darabonba::Model {
public:
  shared_ptr<long> code302Pv{};
  shared_ptr<long> code405Pv{};
  shared_ptr<long> code499Pv{};
  shared_ptr<long> code5xxPv{};
  shared_ptr<long> index{};

  DescribeResponseCodeTrendGraphResponseBodyResponseCodes() {}

  explicit DescribeResponseCodeTrendGraphResponseBodyResponseCodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code302Pv) {
      res["302Pv"] = boost::any(*code302Pv);
    }
    if (code405Pv) {
      res["405Pv"] = boost::any(*code405Pv);
    }
    if (code499Pv) {
      res["499Pv"] = boost::any(*code499Pv);
    }
    if (code5xxPv) {
      res["5xxPv"] = boost::any(*code5xxPv);
    }
    if (index) {
      res["Index"] = boost::any(*index);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("302Pv") != m.end() && !m["302Pv"].empty()) {
      code302Pv = make_shared<long>(boost::any_cast<long>(m["302Pv"]));
    }
    if (m.find("405Pv") != m.end() && !m["405Pv"].empty()) {
      code405Pv = make_shared<long>(boost::any_cast<long>(m["405Pv"]));
    }
    if (m.find("499Pv") != m.end() && !m["499Pv"].empty()) {
      code499Pv = make_shared<long>(boost::any_cast<long>(m["499Pv"]));
    }
    if (m.find("5xxPv") != m.end() && !m["5xxPv"].empty()) {
      code5xxPv = make_shared<long>(boost::any_cast<long>(m["5xxPv"]));
    }
    if (m.find("Index") != m.end() && !m["Index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["Index"]));
    }
  }


  virtual ~DescribeResponseCodeTrendGraphResponseBodyResponseCodes() = default;
};
class DescribeResponseCodeTrendGraphResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeResponseCodeTrendGraphResponseBodyResponseCodes>> responseCodes{};

  DescribeResponseCodeTrendGraphResponseBody() {}

  explicit DescribeResponseCodeTrendGraphResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (responseCodes) {
      vector<boost::any> temp1;
      for(auto item1:*responseCodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResponseCodes"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResponseCodes") != m.end() && !m["ResponseCodes"].empty()) {
      if (typeid(vector<boost::any>) == m["ResponseCodes"].type()) {
        vector<DescribeResponseCodeTrendGraphResponseBodyResponseCodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResponseCodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeResponseCodeTrendGraphResponseBodyResponseCodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        responseCodes = make_shared<vector<DescribeResponseCodeTrendGraphResponseBodyResponseCodes>>(expect1);
      }
    }
  }


  virtual ~DescribeResponseCodeTrendGraphResponseBody() = default;
};
class DescribeResponseCodeTrendGraphResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeResponseCodeTrendGraphResponseBody> body{};

  DescribeResponseCodeTrendGraphResponse() {}

  explicit DescribeResponseCodeTrendGraphResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeResponseCodeTrendGraphResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeResponseCodeTrendGraphResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeResponseCodeTrendGraphResponse() = default;
};
class DescribeRuleGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceManagerResourceGroupId{};
  shared_ptr<string> searchType{};
  shared_ptr<string> searchValue{};

  DescribeRuleGroupsRequest() {}

  explicit DescribeRuleGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceManagerResourceGroupId) {
      res["ResourceManagerResourceGroupId"] = boost::any(*resourceManagerResourceGroupId);
    }
    if (searchType) {
      res["SearchType"] = boost::any(*searchType);
    }
    if (searchValue) {
      res["SearchValue"] = boost::any(*searchValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceManagerResourceGroupId") != m.end() && !m["ResourceManagerResourceGroupId"].empty()) {
      resourceManagerResourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceManagerResourceGroupId"]));
    }
    if (m.find("SearchType") != m.end() && !m["SearchType"].empty()) {
      searchType = make_shared<string>(boost::any_cast<string>(m["SearchType"]));
    }
    if (m.find("SearchValue") != m.end() && !m["SearchValue"].empty()) {
      searchValue = make_shared<string>(boost::any_cast<string>(m["SearchValue"]));
    }
  }


  virtual ~DescribeRuleGroupsRequest() = default;
};
class DescribeRuleGroupsResponseBodyRuleGroups : public Darabonba::Model {
public:
  shared_ptr<long> gmtModified{};
  shared_ptr<long> isSubscribe{};
  shared_ptr<long> parentRuleGroupId{};
  shared_ptr<long> ruleGroupId{};
  shared_ptr<string> ruleGroupName{};
  shared_ptr<long> ruleTotalCount{};

  DescribeRuleGroupsResponseBodyRuleGroups() {}

  explicit DescribeRuleGroupsResponseBodyRuleGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (isSubscribe) {
      res["IsSubscribe"] = boost::any(*isSubscribe);
    }
    if (parentRuleGroupId) {
      res["ParentRuleGroupId"] = boost::any(*parentRuleGroupId);
    }
    if (ruleGroupId) {
      res["RuleGroupId"] = boost::any(*ruleGroupId);
    }
    if (ruleGroupName) {
      res["RuleGroupName"] = boost::any(*ruleGroupName);
    }
    if (ruleTotalCount) {
      res["RuleTotalCount"] = boost::any(*ruleTotalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<long>(boost::any_cast<long>(m["GmtModified"]));
    }
    if (m.find("IsSubscribe") != m.end() && !m["IsSubscribe"].empty()) {
      isSubscribe = make_shared<long>(boost::any_cast<long>(m["IsSubscribe"]));
    }
    if (m.find("ParentRuleGroupId") != m.end() && !m["ParentRuleGroupId"].empty()) {
      parentRuleGroupId = make_shared<long>(boost::any_cast<long>(m["ParentRuleGroupId"]));
    }
    if (m.find("RuleGroupId") != m.end() && !m["RuleGroupId"].empty()) {
      ruleGroupId = make_shared<long>(boost::any_cast<long>(m["RuleGroupId"]));
    }
    if (m.find("RuleGroupName") != m.end() && !m["RuleGroupName"].empty()) {
      ruleGroupName = make_shared<string>(boost::any_cast<string>(m["RuleGroupName"]));
    }
    if (m.find("RuleTotalCount") != m.end() && !m["RuleTotalCount"].empty()) {
      ruleTotalCount = make_shared<long>(boost::any_cast<long>(m["RuleTotalCount"]));
    }
  }


  virtual ~DescribeRuleGroupsResponseBodyRuleGroups() = default;
};
class DescribeRuleGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeRuleGroupsResponseBodyRuleGroups>> ruleGroups{};
  shared_ptr<long> totalCount{};

  DescribeRuleGroupsResponseBody() {}

  explicit DescribeRuleGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (ruleGroups) {
      vector<boost::any> temp1;
      for(auto item1:*ruleGroups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RuleGroups"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RuleGroups") != m.end() && !m["RuleGroups"].empty()) {
      if (typeid(vector<boost::any>) == m["RuleGroups"].type()) {
        vector<DescribeRuleGroupsResponseBodyRuleGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RuleGroups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRuleGroupsResponseBodyRuleGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ruleGroups = make_shared<vector<DescribeRuleGroupsResponseBodyRuleGroups>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeRuleGroupsResponseBody() = default;
};
class DescribeRuleGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeRuleGroupsResponseBody> body{};

  DescribeRuleGroupsResponse() {}

  explicit DescribeRuleGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeRuleGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRuleGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRuleGroupsResponse() = default;
};
class DescribeRuleHitsTopClientIpRequest : public Darabonba::Model {
public:
  shared_ptr<string> endTimestamp{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resource{};
  shared_ptr<string> resourceManagerResourceGroupId{};
  shared_ptr<string> ruleType{};
  shared_ptr<string> startTimestamp{};

  DescribeRuleHitsTopClientIpRequest() {}

  explicit DescribeRuleHitsTopClientIpRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTimestamp) {
      res["EndTimestamp"] = boost::any(*endTimestamp);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resource) {
      res["Resource"] = boost::any(*resource);
    }
    if (resourceManagerResourceGroupId) {
      res["ResourceManagerResourceGroupId"] = boost::any(*resourceManagerResourceGroupId);
    }
    if (ruleType) {
      res["RuleType"] = boost::any(*ruleType);
    }
    if (startTimestamp) {
      res["StartTimestamp"] = boost::any(*startTimestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTimestamp") != m.end() && !m["EndTimestamp"].empty()) {
      endTimestamp = make_shared<string>(boost::any_cast<string>(m["EndTimestamp"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Resource") != m.end() && !m["Resource"].empty()) {
      resource = make_shared<string>(boost::any_cast<string>(m["Resource"]));
    }
    if (m.find("ResourceManagerResourceGroupId") != m.end() && !m["ResourceManagerResourceGroupId"].empty()) {
      resourceManagerResourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceManagerResourceGroupId"]));
    }
    if (m.find("RuleType") != m.end() && !m["RuleType"].empty()) {
      ruleType = make_shared<string>(boost::any_cast<string>(m["RuleType"]));
    }
    if (m.find("StartTimestamp") != m.end() && !m["StartTimestamp"].empty()) {
      startTimestamp = make_shared<string>(boost::any_cast<string>(m["StartTimestamp"]));
    }
  }


  virtual ~DescribeRuleHitsTopClientIpRequest() = default;
};
class DescribeRuleHitsTopClientIpResponseBodyRuleHitsTopClientIp : public Darabonba::Model {
public:
  shared_ptr<string> clientIp{};
  shared_ptr<long> count{};

  DescribeRuleHitsTopClientIpResponseBodyRuleHitsTopClientIp() {}

  explicit DescribeRuleHitsTopClientIpResponseBodyRuleHitsTopClientIp(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientIp) {
      res["ClientIp"] = boost::any(*clientIp);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientIp") != m.end() && !m["ClientIp"].empty()) {
      clientIp = make_shared<string>(boost::any_cast<string>(m["ClientIp"]));
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
  }


  virtual ~DescribeRuleHitsTopClientIpResponseBodyRuleHitsTopClientIp() = default;
};
class DescribeRuleHitsTopClientIpResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeRuleHitsTopClientIpResponseBodyRuleHitsTopClientIp>> ruleHitsTopClientIp{};

  DescribeRuleHitsTopClientIpResponseBody() {}

  explicit DescribeRuleHitsTopClientIpResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (ruleHitsTopClientIp) {
      vector<boost::any> temp1;
      for(auto item1:*ruleHitsTopClientIp){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RuleHitsTopClientIp"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RuleHitsTopClientIp") != m.end() && !m["RuleHitsTopClientIp"].empty()) {
      if (typeid(vector<boost::any>) == m["RuleHitsTopClientIp"].type()) {
        vector<DescribeRuleHitsTopClientIpResponseBodyRuleHitsTopClientIp> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RuleHitsTopClientIp"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRuleHitsTopClientIpResponseBodyRuleHitsTopClientIp model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ruleHitsTopClientIp = make_shared<vector<DescribeRuleHitsTopClientIpResponseBodyRuleHitsTopClientIp>>(expect1);
      }
    }
  }


  virtual ~DescribeRuleHitsTopClientIpResponseBody() = default;
};
class DescribeRuleHitsTopClientIpResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeRuleHitsTopClientIpResponseBody> body{};

  DescribeRuleHitsTopClientIpResponse() {}

  explicit DescribeRuleHitsTopClientIpResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeRuleHitsTopClientIpResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRuleHitsTopClientIpResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRuleHitsTopClientIpResponse() = default;
};
class DescribeRuleHitsTopResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> endTimestamp{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceManagerResourceGroupId{};
  shared_ptr<string> ruleType{};
  shared_ptr<string> startTimestamp{};

  DescribeRuleHitsTopResourceRequest() {}

  explicit DescribeRuleHitsTopResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTimestamp) {
      res["EndTimestamp"] = boost::any(*endTimestamp);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceManagerResourceGroupId) {
      res["ResourceManagerResourceGroupId"] = boost::any(*resourceManagerResourceGroupId);
    }
    if (ruleType) {
      res["RuleType"] = boost::any(*ruleType);
    }
    if (startTimestamp) {
      res["StartTimestamp"] = boost::any(*startTimestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTimestamp") != m.end() && !m["EndTimestamp"].empty()) {
      endTimestamp = make_shared<string>(boost::any_cast<string>(m["EndTimestamp"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceManagerResourceGroupId") != m.end() && !m["ResourceManagerResourceGroupId"].empty()) {
      resourceManagerResourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceManagerResourceGroupId"]));
    }
    if (m.find("RuleType") != m.end() && !m["RuleType"].empty()) {
      ruleType = make_shared<string>(boost::any_cast<string>(m["RuleType"]));
    }
    if (m.find("StartTimestamp") != m.end() && !m["StartTimestamp"].empty()) {
      startTimestamp = make_shared<string>(boost::any_cast<string>(m["StartTimestamp"]));
    }
  }


  virtual ~DescribeRuleHitsTopResourceRequest() = default;
};
class DescribeRuleHitsTopResourceResponseBodyRuleHitsTopResource : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<string> resource{};

  DescribeRuleHitsTopResourceResponseBodyRuleHitsTopResource() {}

  explicit DescribeRuleHitsTopResourceResponseBodyRuleHitsTopResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (resource) {
      res["Resource"] = boost::any(*resource);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("Resource") != m.end() && !m["Resource"].empty()) {
      resource = make_shared<string>(boost::any_cast<string>(m["Resource"]));
    }
  }


  virtual ~DescribeRuleHitsTopResourceResponseBodyRuleHitsTopResource() = default;
};
class DescribeRuleHitsTopResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeRuleHitsTopResourceResponseBodyRuleHitsTopResource>> ruleHitsTopResource{};

  DescribeRuleHitsTopResourceResponseBody() {}

  explicit DescribeRuleHitsTopResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (ruleHitsTopResource) {
      vector<boost::any> temp1;
      for(auto item1:*ruleHitsTopResource){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RuleHitsTopResource"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RuleHitsTopResource") != m.end() && !m["RuleHitsTopResource"].empty()) {
      if (typeid(vector<boost::any>) == m["RuleHitsTopResource"].type()) {
        vector<DescribeRuleHitsTopResourceResponseBodyRuleHitsTopResource> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RuleHitsTopResource"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRuleHitsTopResourceResponseBodyRuleHitsTopResource model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ruleHitsTopResource = make_shared<vector<DescribeRuleHitsTopResourceResponseBodyRuleHitsTopResource>>(expect1);
      }
    }
  }


  virtual ~DescribeRuleHitsTopResourceResponseBody() = default;
};
class DescribeRuleHitsTopResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeRuleHitsTopResourceResponseBody> body{};

  DescribeRuleHitsTopResourceResponse() {}

  explicit DescribeRuleHitsTopResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeRuleHitsTopResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRuleHitsTopResourceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRuleHitsTopResourceResponse() = default;
};
class DescribeRuleHitsTopRuleIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> endTimestamp{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> isGroupResource{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resource{};
  shared_ptr<string> resourceManagerResourceGroupId{};
  shared_ptr<string> ruleType{};
  shared_ptr<string> startTimestamp{};

  DescribeRuleHitsTopRuleIdRequest() {}

  explicit DescribeRuleHitsTopRuleIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTimestamp) {
      res["EndTimestamp"] = boost::any(*endTimestamp);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (isGroupResource) {
      res["IsGroupResource"] = boost::any(*isGroupResource);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resource) {
      res["Resource"] = boost::any(*resource);
    }
    if (resourceManagerResourceGroupId) {
      res["ResourceManagerResourceGroupId"] = boost::any(*resourceManagerResourceGroupId);
    }
    if (ruleType) {
      res["RuleType"] = boost::any(*ruleType);
    }
    if (startTimestamp) {
      res["StartTimestamp"] = boost::any(*startTimestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTimestamp") != m.end() && !m["EndTimestamp"].empty()) {
      endTimestamp = make_shared<string>(boost::any_cast<string>(m["EndTimestamp"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("IsGroupResource") != m.end() && !m["IsGroupResource"].empty()) {
      isGroupResource = make_shared<string>(boost::any_cast<string>(m["IsGroupResource"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Resource") != m.end() && !m["Resource"].empty()) {
      resource = make_shared<string>(boost::any_cast<string>(m["Resource"]));
    }
    if (m.find("ResourceManagerResourceGroupId") != m.end() && !m["ResourceManagerResourceGroupId"].empty()) {
      resourceManagerResourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceManagerResourceGroupId"]));
    }
    if (m.find("RuleType") != m.end() && !m["RuleType"].empty()) {
      ruleType = make_shared<string>(boost::any_cast<string>(m["RuleType"]));
    }
    if (m.find("StartTimestamp") != m.end() && !m["StartTimestamp"].empty()) {
      startTimestamp = make_shared<string>(boost::any_cast<string>(m["StartTimestamp"]));
    }
  }


  virtual ~DescribeRuleHitsTopRuleIdRequest() = default;
};
class DescribeRuleHitsTopRuleIdResponseBodyRuleHitsTopRuleId : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<string> resource{};
  shared_ptr<string> ruleId{};

  DescribeRuleHitsTopRuleIdResponseBodyRuleHitsTopRuleId() {}

  explicit DescribeRuleHitsTopRuleIdResponseBodyRuleHitsTopRuleId(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (resource) {
      res["Resource"] = boost::any(*resource);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("Resource") != m.end() && !m["Resource"].empty()) {
      resource = make_shared<string>(boost::any_cast<string>(m["Resource"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
  }


  virtual ~DescribeRuleHitsTopRuleIdResponseBodyRuleHitsTopRuleId() = default;
};
class DescribeRuleHitsTopRuleIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeRuleHitsTopRuleIdResponseBodyRuleHitsTopRuleId>> ruleHitsTopRuleId{};

  DescribeRuleHitsTopRuleIdResponseBody() {}

  explicit DescribeRuleHitsTopRuleIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (ruleHitsTopRuleId) {
      vector<boost::any> temp1;
      for(auto item1:*ruleHitsTopRuleId){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RuleHitsTopRuleId"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RuleHitsTopRuleId") != m.end() && !m["RuleHitsTopRuleId"].empty()) {
      if (typeid(vector<boost::any>) == m["RuleHitsTopRuleId"].type()) {
        vector<DescribeRuleHitsTopRuleIdResponseBodyRuleHitsTopRuleId> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RuleHitsTopRuleId"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRuleHitsTopRuleIdResponseBodyRuleHitsTopRuleId model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ruleHitsTopRuleId = make_shared<vector<DescribeRuleHitsTopRuleIdResponseBodyRuleHitsTopRuleId>>(expect1);
      }
    }
  }


  virtual ~DescribeRuleHitsTopRuleIdResponseBody() = default;
};
class DescribeRuleHitsTopRuleIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeRuleHitsTopRuleIdResponseBody> body{};

  DescribeRuleHitsTopRuleIdResponse() {}

  explicit DescribeRuleHitsTopRuleIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeRuleHitsTopRuleIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRuleHitsTopRuleIdResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRuleHitsTopRuleIdResponse() = default;
};
class DescribeRuleHitsTopTuleTypeRequest : public Darabonba::Model {
public:
  shared_ptr<string> endTimestamp{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resource{};
  shared_ptr<string> startTimestamp{};

  DescribeRuleHitsTopTuleTypeRequest() {}

  explicit DescribeRuleHitsTopTuleTypeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTimestamp) {
      res["EndTimestamp"] = boost::any(*endTimestamp);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resource) {
      res["Resource"] = boost::any(*resource);
    }
    if (startTimestamp) {
      res["StartTimestamp"] = boost::any(*startTimestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTimestamp") != m.end() && !m["EndTimestamp"].empty()) {
      endTimestamp = make_shared<string>(boost::any_cast<string>(m["EndTimestamp"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Resource") != m.end() && !m["Resource"].empty()) {
      resource = make_shared<string>(boost::any_cast<string>(m["Resource"]));
    }
    if (m.find("StartTimestamp") != m.end() && !m["StartTimestamp"].empty()) {
      startTimestamp = make_shared<string>(boost::any_cast<string>(m["StartTimestamp"]));
    }
  }


  virtual ~DescribeRuleHitsTopTuleTypeRequest() = default;
};
class DescribeRuleHitsTopTuleTypeResponseBodyRuleHitsTopTuleType : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<string> ruleType{};

  DescribeRuleHitsTopTuleTypeResponseBodyRuleHitsTopTuleType() {}

  explicit DescribeRuleHitsTopTuleTypeResponseBodyRuleHitsTopTuleType(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (ruleType) {
      res["RuleType"] = boost::any(*ruleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("RuleType") != m.end() && !m["RuleType"].empty()) {
      ruleType = make_shared<string>(boost::any_cast<string>(m["RuleType"]));
    }
  }


  virtual ~DescribeRuleHitsTopTuleTypeResponseBodyRuleHitsTopTuleType() = default;
};
class DescribeRuleHitsTopTuleTypeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeRuleHitsTopTuleTypeResponseBodyRuleHitsTopTuleType>> ruleHitsTopTuleType{};

  DescribeRuleHitsTopTuleTypeResponseBody() {}

  explicit DescribeRuleHitsTopTuleTypeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (ruleHitsTopTuleType) {
      vector<boost::any> temp1;
      for(auto item1:*ruleHitsTopTuleType){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RuleHitsTopTuleType"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RuleHitsTopTuleType") != m.end() && !m["RuleHitsTopTuleType"].empty()) {
      if (typeid(vector<boost::any>) == m["RuleHitsTopTuleType"].type()) {
        vector<DescribeRuleHitsTopTuleTypeResponseBodyRuleHitsTopTuleType> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RuleHitsTopTuleType"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRuleHitsTopTuleTypeResponseBodyRuleHitsTopTuleType model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ruleHitsTopTuleType = make_shared<vector<DescribeRuleHitsTopTuleTypeResponseBodyRuleHitsTopTuleType>>(expect1);
      }
    }
  }


  virtual ~DescribeRuleHitsTopTuleTypeResponseBody() = default;
};
class DescribeRuleHitsTopTuleTypeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeRuleHitsTopTuleTypeResponseBody> body{};

  DescribeRuleHitsTopTuleTypeResponse() {}

  explicit DescribeRuleHitsTopTuleTypeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeRuleHitsTopTuleTypeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRuleHitsTopTuleTypeResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRuleHitsTopTuleTypeResponse() = default;
};
class DescribeRuleHitsTopUaRequest : public Darabonba::Model {
public:
  shared_ptr<string> endTimestamp{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resource{};
  shared_ptr<string> resourceManagerResourceGroupId{};
  shared_ptr<string> startTimestamp{};

  DescribeRuleHitsTopUaRequest() {}

  explicit DescribeRuleHitsTopUaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTimestamp) {
      res["EndTimestamp"] = boost::any(*endTimestamp);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resource) {
      res["Resource"] = boost::any(*resource);
    }
    if (resourceManagerResourceGroupId) {
      res["ResourceManagerResourceGroupId"] = boost::any(*resourceManagerResourceGroupId);
    }
    if (startTimestamp) {
      res["StartTimestamp"] = boost::any(*startTimestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTimestamp") != m.end() && !m["EndTimestamp"].empty()) {
      endTimestamp = make_shared<string>(boost::any_cast<string>(m["EndTimestamp"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Resource") != m.end() && !m["Resource"].empty()) {
      resource = make_shared<string>(boost::any_cast<string>(m["Resource"]));
    }
    if (m.find("ResourceManagerResourceGroupId") != m.end() && !m["ResourceManagerResourceGroupId"].empty()) {
      resourceManagerResourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceManagerResourceGroupId"]));
    }
    if (m.find("StartTimestamp") != m.end() && !m["StartTimestamp"].empty()) {
      startTimestamp = make_shared<string>(boost::any_cast<string>(m["StartTimestamp"]));
    }
  }


  virtual ~DescribeRuleHitsTopUaRequest() = default;
};
class DescribeRuleHitsTopUaResponseBodyRuleHitsTopUa : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<string> ua{};

  DescribeRuleHitsTopUaResponseBodyRuleHitsTopUa() {}

  explicit DescribeRuleHitsTopUaResponseBodyRuleHitsTopUa(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (ua) {
      res["Ua"] = boost::any(*ua);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("Ua") != m.end() && !m["Ua"].empty()) {
      ua = make_shared<string>(boost::any_cast<string>(m["Ua"]));
    }
  }


  virtual ~DescribeRuleHitsTopUaResponseBodyRuleHitsTopUa() = default;
};
class DescribeRuleHitsTopUaResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeRuleHitsTopUaResponseBodyRuleHitsTopUa>> ruleHitsTopUa{};

  DescribeRuleHitsTopUaResponseBody() {}

  explicit DescribeRuleHitsTopUaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (ruleHitsTopUa) {
      vector<boost::any> temp1;
      for(auto item1:*ruleHitsTopUa){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RuleHitsTopUa"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RuleHitsTopUa") != m.end() && !m["RuleHitsTopUa"].empty()) {
      if (typeid(vector<boost::any>) == m["RuleHitsTopUa"].type()) {
        vector<DescribeRuleHitsTopUaResponseBodyRuleHitsTopUa> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RuleHitsTopUa"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRuleHitsTopUaResponseBodyRuleHitsTopUa model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ruleHitsTopUa = make_shared<vector<DescribeRuleHitsTopUaResponseBodyRuleHitsTopUa>>(expect1);
      }
    }
  }


  virtual ~DescribeRuleHitsTopUaResponseBody() = default;
};
class DescribeRuleHitsTopUaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeRuleHitsTopUaResponseBody> body{};

  DescribeRuleHitsTopUaResponse() {}

  explicit DescribeRuleHitsTopUaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeRuleHitsTopUaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRuleHitsTopUaResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRuleHitsTopUaResponse() = default;
};
class DescribeRuleHitsTopUrlRequest : public Darabonba::Model {
public:
  shared_ptr<string> endTimestamp{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resource{};
  shared_ptr<string> resourceManagerResourceGroupId{};
  shared_ptr<string> ruleType{};
  shared_ptr<string> startTimestamp{};

  DescribeRuleHitsTopUrlRequest() {}

  explicit DescribeRuleHitsTopUrlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTimestamp) {
      res["EndTimestamp"] = boost::any(*endTimestamp);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resource) {
      res["Resource"] = boost::any(*resource);
    }
    if (resourceManagerResourceGroupId) {
      res["ResourceManagerResourceGroupId"] = boost::any(*resourceManagerResourceGroupId);
    }
    if (ruleType) {
      res["RuleType"] = boost::any(*ruleType);
    }
    if (startTimestamp) {
      res["StartTimestamp"] = boost::any(*startTimestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTimestamp") != m.end() && !m["EndTimestamp"].empty()) {
      endTimestamp = make_shared<string>(boost::any_cast<string>(m["EndTimestamp"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Resource") != m.end() && !m["Resource"].empty()) {
      resource = make_shared<string>(boost::any_cast<string>(m["Resource"]));
    }
    if (m.find("ResourceManagerResourceGroupId") != m.end() && !m["ResourceManagerResourceGroupId"].empty()) {
      resourceManagerResourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceManagerResourceGroupId"]));
    }
    if (m.find("RuleType") != m.end() && !m["RuleType"].empty()) {
      ruleType = make_shared<string>(boost::any_cast<string>(m["RuleType"]));
    }
    if (m.find("StartTimestamp") != m.end() && !m["StartTimestamp"].empty()) {
      startTimestamp = make_shared<string>(boost::any_cast<string>(m["StartTimestamp"]));
    }
  }


  virtual ~DescribeRuleHitsTopUrlRequest() = default;
};
class DescribeRuleHitsTopUrlResponseBodyRuleHitsTopUrl : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<string> url{};

  DescribeRuleHitsTopUrlResponseBodyRuleHitsTopUrl() {}

  explicit DescribeRuleHitsTopUrlResponseBodyRuleHitsTopUrl(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~DescribeRuleHitsTopUrlResponseBodyRuleHitsTopUrl() = default;
};
class DescribeRuleHitsTopUrlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeRuleHitsTopUrlResponseBodyRuleHitsTopUrl>> ruleHitsTopUrl{};

  DescribeRuleHitsTopUrlResponseBody() {}

  explicit DescribeRuleHitsTopUrlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (ruleHitsTopUrl) {
      vector<boost::any> temp1;
      for(auto item1:*ruleHitsTopUrl){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RuleHitsTopUrl"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RuleHitsTopUrl") != m.end() && !m["RuleHitsTopUrl"].empty()) {
      if (typeid(vector<boost::any>) == m["RuleHitsTopUrl"].type()) {
        vector<DescribeRuleHitsTopUrlResponseBodyRuleHitsTopUrl> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RuleHitsTopUrl"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRuleHitsTopUrlResponseBodyRuleHitsTopUrl model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ruleHitsTopUrl = make_shared<vector<DescribeRuleHitsTopUrlResponseBodyRuleHitsTopUrl>>(expect1);
      }
    }
  }


  virtual ~DescribeRuleHitsTopUrlResponseBody() = default;
};
class DescribeRuleHitsTopUrlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeRuleHitsTopUrlResponseBody> body{};

  DescribeRuleHitsTopUrlResponse() {}

  explicit DescribeRuleHitsTopUrlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeRuleHitsTopUrlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRuleHitsTopUrlResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRuleHitsTopUrlResponse() = default;
};
class DescribeSlsAuthStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceManagerResourceGroupId{};

  DescribeSlsAuthStatusRequest() {}

  explicit DescribeSlsAuthStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceManagerResourceGroupId) {
      res["ResourceManagerResourceGroupId"] = boost::any(*resourceManagerResourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceManagerResourceGroupId") != m.end() && !m["ResourceManagerResourceGroupId"].empty()) {
      resourceManagerResourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceManagerResourceGroupId"]));
    }
  }


  virtual ~DescribeSlsAuthStatusRequest() = default;
};
class DescribeSlsAuthStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> status{};

  DescribeSlsAuthStatusResponseBody() {}

  explicit DescribeSlsAuthStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      status = make_shared<bool>(boost::any_cast<bool>(m["Status"]));
    }
  }


  virtual ~DescribeSlsAuthStatusResponseBody() = default;
};
class DescribeSlsAuthStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSlsAuthStatusResponseBody> body{};

  DescribeSlsAuthStatusResponse() {}

  explicit DescribeSlsAuthStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSlsAuthStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSlsAuthStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSlsAuthStatusResponse() = default;
};
class DescribeSlsLogStoreRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceManagerResourceGroupId{};

  DescribeSlsLogStoreRequest() {}

  explicit DescribeSlsLogStoreRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceManagerResourceGroupId) {
      res["ResourceManagerResourceGroupId"] = boost::any(*resourceManagerResourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceManagerResourceGroupId") != m.end() && !m["ResourceManagerResourceGroupId"].empty()) {
      resourceManagerResourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceManagerResourceGroupId"]));
    }
  }


  virtual ~DescribeSlsLogStoreRequest() = default;
};
class DescribeSlsLogStoreResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> logStoreName{};
  shared_ptr<string> projectName{};
  shared_ptr<long> quota{};
  shared_ptr<string> requestId{};
  shared_ptr<long> ttl{};
  shared_ptr<long> used{};

  DescribeSlsLogStoreResponseBody() {}

  explicit DescribeSlsLogStoreResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logStoreName) {
      res["LogStoreName"] = boost::any(*logStoreName);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (quota) {
      res["Quota"] = boost::any(*quota);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (ttl) {
      res["Ttl"] = boost::any(*ttl);
    }
    if (used) {
      res["Used"] = boost::any(*used);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LogStoreName") != m.end() && !m["LogStoreName"].empty()) {
      logStoreName = make_shared<string>(boost::any_cast<string>(m["LogStoreName"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("Quota") != m.end() && !m["Quota"].empty()) {
      quota = make_shared<long>(boost::any_cast<long>(m["Quota"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Ttl") != m.end() && !m["Ttl"].empty()) {
      ttl = make_shared<long>(boost::any_cast<long>(m["Ttl"]));
    }
    if (m.find("Used") != m.end() && !m["Used"].empty()) {
      used = make_shared<long>(boost::any_cast<long>(m["Used"]));
    }
  }


  virtual ~DescribeSlsLogStoreResponseBody() = default;
};
class DescribeSlsLogStoreResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSlsLogStoreResponseBody> body{};

  DescribeSlsLogStoreResponse() {}

  explicit DescribeSlsLogStoreResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSlsLogStoreResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSlsLogStoreResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSlsLogStoreResponse() = default;
};
class DescribeSlsLogStoreStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceManagerResourceGroupId{};

  DescribeSlsLogStoreStatusRequest() {}

  explicit DescribeSlsLogStoreStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceManagerResourceGroupId) {
      res["ResourceManagerResourceGroupId"] = boost::any(*resourceManagerResourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceManagerResourceGroupId") != m.end() && !m["ResourceManagerResourceGroupId"].empty()) {
      resourceManagerResourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceManagerResourceGroupId"]));
    }
  }


  virtual ~DescribeSlsLogStoreStatusRequest() = default;
};
class DescribeSlsLogStoreStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> existStatus{};
  shared_ptr<string> requestId{};

  DescribeSlsLogStoreStatusResponseBody() {}

  explicit DescribeSlsLogStoreStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (existStatus) {
      res["ExistStatus"] = boost::any(*existStatus);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExistStatus") != m.end() && !m["ExistStatus"].empty()) {
      existStatus = make_shared<bool>(boost::any_cast<bool>(m["ExistStatus"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeSlsLogStoreStatusResponseBody() = default;
};
class DescribeSlsLogStoreStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSlsLogStoreStatusResponseBody> body{};

  DescribeSlsLogStoreStatusResponse() {}

  explicit DescribeSlsLogStoreStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSlsLogStoreStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSlsLogStoreStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSlsLogStoreStatusResponse() = default;
};
class DescribeTemplateResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceManagerResourceGroupId{};
  shared_ptr<string> resourceType{};
  shared_ptr<long> templateId{};

  DescribeTemplateResourcesRequest() {}

  explicit DescribeTemplateResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceManagerResourceGroupId) {
      res["ResourceManagerResourceGroupId"] = boost::any(*resourceManagerResourceGroupId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceManagerResourceGroupId") != m.end() && !m["ResourceManagerResourceGroupId"].empty()) {
      resourceManagerResourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceManagerResourceGroupId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
  }


  virtual ~DescribeTemplateResourcesRequest() = default;
};
class DescribeTemplateResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> resources{};

  DescribeTemplateResourcesResponseBody() {}

  explicit DescribeTemplateResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resources) {
      res["Resources"] = boost::any(*resources);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Resources"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Resources"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resources = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeTemplateResourcesResponseBody() = default;
};
class DescribeTemplateResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeTemplateResourcesResponseBody> body{};

  DescribeTemplateResourcesResponse() {}

  explicit DescribeTemplateResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeTemplateResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeTemplateResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeTemplateResourcesResponse() = default;
};
class DescribeUserSlsLogRegionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceManagerResourceGroupId{};

  DescribeUserSlsLogRegionsRequest() {}

  explicit DescribeUserSlsLogRegionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceManagerResourceGroupId) {
      res["ResourceManagerResourceGroupId"] = boost::any(*resourceManagerResourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceManagerResourceGroupId") != m.end() && !m["ResourceManagerResourceGroupId"].empty()) {
      resourceManagerResourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceManagerResourceGroupId"]));
    }
  }


  virtual ~DescribeUserSlsLogRegionsRequest() = default;
};
class DescribeUserSlsLogRegionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> logRegions{};
  shared_ptr<string> requestId{};

  DescribeUserSlsLogRegionsResponseBody() {}

  explicit DescribeUserSlsLogRegionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logRegions) {
      res["LogRegions"] = boost::any(*logRegions);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LogRegions") != m.end() && !m["LogRegions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["LogRegions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LogRegions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      logRegions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeUserSlsLogRegionsResponseBody() = default;
};
class DescribeUserSlsLogRegionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeUserSlsLogRegionsResponseBody> body{};

  DescribeUserSlsLogRegionsResponse() {}

  explicit DescribeUserSlsLogRegionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeUserSlsLogRegionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeUserSlsLogRegionsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeUserSlsLogRegionsResponse() = default;
};
class DescribeUserWafLogStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceManagerResourceGroupId{};

  DescribeUserWafLogStatusRequest() {}

  explicit DescribeUserWafLogStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceManagerResourceGroupId) {
      res["ResourceManagerResourceGroupId"] = boost::any(*resourceManagerResourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceManagerResourceGroupId") != m.end() && !m["ResourceManagerResourceGroupId"].empty()) {
      resourceManagerResourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceManagerResourceGroupId"]));
    }
  }


  virtual ~DescribeUserWafLogStatusRequest() = default;
};
class DescribeUserWafLogStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> logRegionId{};
  shared_ptr<string> logStatus{};
  shared_ptr<string> requestId{};
  shared_ptr<long> statusUpdateTime{};

  DescribeUserWafLogStatusResponseBody() {}

  explicit DescribeUserWafLogStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logRegionId) {
      res["LogRegionId"] = boost::any(*logRegionId);
    }
    if (logStatus) {
      res["LogStatus"] = boost::any(*logStatus);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (statusUpdateTime) {
      res["StatusUpdateTime"] = boost::any(*statusUpdateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LogRegionId") != m.end() && !m["LogRegionId"].empty()) {
      logRegionId = make_shared<string>(boost::any_cast<string>(m["LogRegionId"]));
    }
    if (m.find("LogStatus") != m.end() && !m["LogStatus"].empty()) {
      logStatus = make_shared<string>(boost::any_cast<string>(m["LogStatus"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StatusUpdateTime") != m.end() && !m["StatusUpdateTime"].empty()) {
      statusUpdateTime = make_shared<long>(boost::any_cast<long>(m["StatusUpdateTime"]));
    }
  }


  virtual ~DescribeUserWafLogStatusResponseBody() = default;
};
class DescribeUserWafLogStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeUserWafLogStatusResponseBody> body{};

  DescribeUserWafLogStatusResponse() {}

  explicit DescribeUserWafLogStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeUserWafLogStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeUserWafLogStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeUserWafLogStatusResponse() = default;
};
class DescribeVisitTopIpRequest : public Darabonba::Model {
public:
  shared_ptr<string> endTimestamp{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resource{};
  shared_ptr<string> resourceManagerResourceGroupId{};
  shared_ptr<string> startTimestamp{};

  DescribeVisitTopIpRequest() {}

  explicit DescribeVisitTopIpRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTimestamp) {
      res["EndTimestamp"] = boost::any(*endTimestamp);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resource) {
      res["Resource"] = boost::any(*resource);
    }
    if (resourceManagerResourceGroupId) {
      res["ResourceManagerResourceGroupId"] = boost::any(*resourceManagerResourceGroupId);
    }
    if (startTimestamp) {
      res["StartTimestamp"] = boost::any(*startTimestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTimestamp") != m.end() && !m["EndTimestamp"].empty()) {
      endTimestamp = make_shared<string>(boost::any_cast<string>(m["EndTimestamp"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Resource") != m.end() && !m["Resource"].empty()) {
      resource = make_shared<string>(boost::any_cast<string>(m["Resource"]));
    }
    if (m.find("ResourceManagerResourceGroupId") != m.end() && !m["ResourceManagerResourceGroupId"].empty()) {
      resourceManagerResourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceManagerResourceGroupId"]));
    }
    if (m.find("StartTimestamp") != m.end() && !m["StartTimestamp"].empty()) {
      startTimestamp = make_shared<string>(boost::any_cast<string>(m["StartTimestamp"]));
    }
  }


  virtual ~DescribeVisitTopIpRequest() = default;
};
class DescribeVisitTopIpResponseBodyTopIp : public Darabonba::Model {
public:
  shared_ptr<string> area{};
  shared_ptr<long> count{};
  shared_ptr<string> ip{};
  shared_ptr<string> isp{};

  DescribeVisitTopIpResponseBodyTopIp() {}

  explicit DescribeVisitTopIpResponseBodyTopIp(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (area) {
      res["Area"] = boost::any(*area);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (isp) {
      res["Isp"] = boost::any(*isp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Area") != m.end() && !m["Area"].empty()) {
      area = make_shared<string>(boost::any_cast<string>(m["Area"]));
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("Isp") != m.end() && !m["Isp"].empty()) {
      isp = make_shared<string>(boost::any_cast<string>(m["Isp"]));
    }
  }


  virtual ~DescribeVisitTopIpResponseBodyTopIp() = default;
};
class DescribeVisitTopIpResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeVisitTopIpResponseBodyTopIp>> topIp{};

  DescribeVisitTopIpResponseBody() {}

  explicit DescribeVisitTopIpResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (topIp) {
      vector<boost::any> temp1;
      for(auto item1:*topIp){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TopIp"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TopIp") != m.end() && !m["TopIp"].empty()) {
      if (typeid(vector<boost::any>) == m["TopIp"].type()) {
        vector<DescribeVisitTopIpResponseBodyTopIp> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TopIp"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVisitTopIpResponseBodyTopIp model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        topIp = make_shared<vector<DescribeVisitTopIpResponseBodyTopIp>>(expect1);
      }
    }
  }


  virtual ~DescribeVisitTopIpResponseBody() = default;
};
class DescribeVisitTopIpResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeVisitTopIpResponseBody> body{};

  DescribeVisitTopIpResponse() {}

  explicit DescribeVisitTopIpResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeVisitTopIpResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeVisitTopIpResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeVisitTopIpResponse() = default;
};
class DescribeVisitUasRequest : public Darabonba::Model {
public:
  shared_ptr<string> endTimestamp{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resource{};
  shared_ptr<string> startTimestamp{};

  DescribeVisitUasRequest() {}

  explicit DescribeVisitUasRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTimestamp) {
      res["EndTimestamp"] = boost::any(*endTimestamp);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resource) {
      res["Resource"] = boost::any(*resource);
    }
    if (startTimestamp) {
      res["StartTimestamp"] = boost::any(*startTimestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTimestamp") != m.end() && !m["EndTimestamp"].empty()) {
      endTimestamp = make_shared<string>(boost::any_cast<string>(m["EndTimestamp"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Resource") != m.end() && !m["Resource"].empty()) {
      resource = make_shared<string>(boost::any_cast<string>(m["Resource"]));
    }
    if (m.find("StartTimestamp") != m.end() && !m["StartTimestamp"].empty()) {
      startTimestamp = make_shared<string>(boost::any_cast<string>(m["StartTimestamp"]));
    }
  }


  virtual ~DescribeVisitUasRequest() = default;
};
class DescribeVisitUasResponseBodyUas : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<string> ua{};

  DescribeVisitUasResponseBodyUas() {}

  explicit DescribeVisitUasResponseBodyUas(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (ua) {
      res["Ua"] = boost::any(*ua);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("Ua") != m.end() && !m["Ua"].empty()) {
      ua = make_shared<string>(boost::any_cast<string>(m["Ua"]));
    }
  }


  virtual ~DescribeVisitUasResponseBodyUas() = default;
};
class DescribeVisitUasResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeVisitUasResponseBodyUas>> uas{};

  DescribeVisitUasResponseBody() {}

  explicit DescribeVisitUasResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (uas) {
      vector<boost::any> temp1;
      for(auto item1:*uas){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Uas"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Uas") != m.end() && !m["Uas"].empty()) {
      if (typeid(vector<boost::any>) == m["Uas"].type()) {
        vector<DescribeVisitUasResponseBodyUas> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Uas"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVisitUasResponseBodyUas model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        uas = make_shared<vector<DescribeVisitUasResponseBodyUas>>(expect1);
      }
    }
  }


  virtual ~DescribeVisitUasResponseBody() = default;
};
class DescribeVisitUasResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeVisitUasResponseBody> body{};

  DescribeVisitUasResponse() {}

  explicit DescribeVisitUasResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeVisitUasResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeVisitUasResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeVisitUasResponse() = default;
};
class DescribeWafSourceIpSegmentRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceManagerResourceGroupId{};

  DescribeWafSourceIpSegmentRequest() {}

  explicit DescribeWafSourceIpSegmentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceManagerResourceGroupId) {
      res["ResourceManagerResourceGroupId"] = boost::any(*resourceManagerResourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceManagerResourceGroupId") != m.end() && !m["ResourceManagerResourceGroupId"].empty()) {
      resourceManagerResourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceManagerResourceGroupId"]));
    }
  }


  virtual ~DescribeWafSourceIpSegmentRequest() = default;
};
class DescribeWafSourceIpSegmentResponseBodyWafSourceIp : public Darabonba::Model {
public:
  shared_ptr<vector<string>> IPv4{};
  shared_ptr<vector<string>> IPv6{};

  DescribeWafSourceIpSegmentResponseBodyWafSourceIp() {}

  explicit DescribeWafSourceIpSegmentResponseBodyWafSourceIp(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (IPv4) {
      res["IPv4"] = boost::any(*IPv4);
    }
    if (IPv6) {
      res["IPv6"] = boost::any(*IPv6);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IPv4") != m.end() && !m["IPv4"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["IPv4"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["IPv4"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      IPv4 = make_shared<vector<string>>(toVec1);
    }
    if (m.find("IPv6") != m.end() && !m["IPv6"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["IPv6"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["IPv6"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      IPv6 = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeWafSourceIpSegmentResponseBodyWafSourceIp() = default;
};
class DescribeWafSourceIpSegmentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeWafSourceIpSegmentResponseBodyWafSourceIp> wafSourceIp{};

  DescribeWafSourceIpSegmentResponseBody() {}

  explicit DescribeWafSourceIpSegmentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (wafSourceIp) {
      res["WafSourceIp"] = wafSourceIp ? boost::any(wafSourceIp->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("WafSourceIp") != m.end() && !m["WafSourceIp"].empty()) {
      if (typeid(map<string, boost::any>) == m["WafSourceIp"].type()) {
        DescribeWafSourceIpSegmentResponseBodyWafSourceIp model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["WafSourceIp"]));
        wafSourceIp = make_shared<DescribeWafSourceIpSegmentResponseBodyWafSourceIp>(model1);
      }
    }
  }


  virtual ~DescribeWafSourceIpSegmentResponseBody() = default;
};
class DescribeWafSourceIpSegmentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeWafSourceIpSegmentResponseBody> body{};

  DescribeWafSourceIpSegmentResponse() {}

  explicit DescribeWafSourceIpSegmentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeWafSourceIpSegmentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeWafSourceIpSegmentResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeWafSourceIpSegmentResponse() = default;
};
class ModifyDefenseResourceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> addList{};
  shared_ptr<string> deleteList{};
  shared_ptr<string> description{};
  shared_ptr<string> groupName{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceManagerResourceGroupId{};

  ModifyDefenseResourceGroupRequest() {}

  explicit ModifyDefenseResourceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addList) {
      res["AddList"] = boost::any(*addList);
    }
    if (deleteList) {
      res["DeleteList"] = boost::any(*deleteList);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceManagerResourceGroupId) {
      res["ResourceManagerResourceGroupId"] = boost::any(*resourceManagerResourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddList") != m.end() && !m["AddList"].empty()) {
      addList = make_shared<string>(boost::any_cast<string>(m["AddList"]));
    }
    if (m.find("DeleteList") != m.end() && !m["DeleteList"].empty()) {
      deleteList = make_shared<string>(boost::any_cast<string>(m["DeleteList"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceManagerResourceGroupId") != m.end() && !m["ResourceManagerResourceGroupId"].empty()) {
      resourceManagerResourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceManagerResourceGroupId"]));
    }
  }


  virtual ~ModifyDefenseResourceGroupRequest() = default;
};
class ModifyDefenseResourceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDefenseResourceGroupResponseBody() {}

  explicit ModifyDefenseResourceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyDefenseResourceGroupResponseBody() = default;
};
class ModifyDefenseResourceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyDefenseResourceGroupResponseBody> body{};

  ModifyDefenseResourceGroupResponse() {}

  explicit ModifyDefenseResourceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDefenseResourceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDefenseResourceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDefenseResourceGroupResponse() = default;
};
class ModifyDefenseResourceXffRequest : public Darabonba::Model {
public:
  shared_ptr<long> acwCookieStatus{};
  shared_ptr<long> acwSecureStatus{};
  shared_ptr<long> acwV3SecureStatus{};
  shared_ptr<vector<string>> customHeaders{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resource{};
  shared_ptr<string> resourceManagerResourceGroupId{};
  shared_ptr<long> xffStatus{};

  ModifyDefenseResourceXffRequest() {}

  explicit ModifyDefenseResourceXffRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acwCookieStatus) {
      res["AcwCookieStatus"] = boost::any(*acwCookieStatus);
    }
    if (acwSecureStatus) {
      res["AcwSecureStatus"] = boost::any(*acwSecureStatus);
    }
    if (acwV3SecureStatus) {
      res["AcwV3SecureStatus"] = boost::any(*acwV3SecureStatus);
    }
    if (customHeaders) {
      res["CustomHeaders"] = boost::any(*customHeaders);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resource) {
      res["Resource"] = boost::any(*resource);
    }
    if (resourceManagerResourceGroupId) {
      res["ResourceManagerResourceGroupId"] = boost::any(*resourceManagerResourceGroupId);
    }
    if (xffStatus) {
      res["XffStatus"] = boost::any(*xffStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcwCookieStatus") != m.end() && !m["AcwCookieStatus"].empty()) {
      acwCookieStatus = make_shared<long>(boost::any_cast<long>(m["AcwCookieStatus"]));
    }
    if (m.find("AcwSecureStatus") != m.end() && !m["AcwSecureStatus"].empty()) {
      acwSecureStatus = make_shared<long>(boost::any_cast<long>(m["AcwSecureStatus"]));
    }
    if (m.find("AcwV3SecureStatus") != m.end() && !m["AcwV3SecureStatus"].empty()) {
      acwV3SecureStatus = make_shared<long>(boost::any_cast<long>(m["AcwV3SecureStatus"]));
    }
    if (m.find("CustomHeaders") != m.end() && !m["CustomHeaders"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CustomHeaders"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CustomHeaders"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      customHeaders = make_shared<vector<string>>(toVec1);
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Resource") != m.end() && !m["Resource"].empty()) {
      resource = make_shared<string>(boost::any_cast<string>(m["Resource"]));
    }
    if (m.find("ResourceManagerResourceGroupId") != m.end() && !m["ResourceManagerResourceGroupId"].empty()) {
      resourceManagerResourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceManagerResourceGroupId"]));
    }
    if (m.find("XffStatus") != m.end() && !m["XffStatus"].empty()) {
      xffStatus = make_shared<long>(boost::any_cast<long>(m["XffStatus"]));
    }
  }


  virtual ~ModifyDefenseResourceXffRequest() = default;
};
class ModifyDefenseResourceXffResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDefenseResourceXffResponseBody() {}

  explicit ModifyDefenseResourceXffResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyDefenseResourceXffResponseBody() = default;
};
class ModifyDefenseResourceXffResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyDefenseResourceXffResponseBody> body{};

  ModifyDefenseResourceXffResponse() {}

  explicit ModifyDefenseResourceXffResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDefenseResourceXffResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDefenseResourceXffResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDefenseResourceXffResponse() = default;
};
class ModifyDefenseRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> defenseScene{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceManagerResourceGroupId{};
  shared_ptr<string> rules{};
  shared_ptr<long> templateId{};

  ModifyDefenseRuleRequest() {}

  explicit ModifyDefenseRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defenseScene) {
      res["DefenseScene"] = boost::any(*defenseScene);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceManagerResourceGroupId) {
      res["ResourceManagerResourceGroupId"] = boost::any(*resourceManagerResourceGroupId);
    }
    if (rules) {
      res["Rules"] = boost::any(*rules);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefenseScene") != m.end() && !m["DefenseScene"].empty()) {
      defenseScene = make_shared<string>(boost::any_cast<string>(m["DefenseScene"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceManagerResourceGroupId") != m.end() && !m["ResourceManagerResourceGroupId"].empty()) {
      resourceManagerResourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceManagerResourceGroupId"]));
    }
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      rules = make_shared<string>(boost::any_cast<string>(m["Rules"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
  }


  virtual ~ModifyDefenseRuleRequest() = default;
};
class ModifyDefenseRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDefenseRuleResponseBody() {}

  explicit ModifyDefenseRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyDefenseRuleResponseBody() = default;
};
class ModifyDefenseRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyDefenseRuleResponseBody> body{};

  ModifyDefenseRuleResponse() {}

  explicit ModifyDefenseRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDefenseRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDefenseRuleResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDefenseRuleResponse() = default;
};
class ModifyDefenseRuleCacheRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceManagerResourceGroupId{};
  shared_ptr<long> ruleId{};
  shared_ptr<long> templateId{};

  ModifyDefenseRuleCacheRequest() {}

  explicit ModifyDefenseRuleCacheRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceManagerResourceGroupId) {
      res["ResourceManagerResourceGroupId"] = boost::any(*resourceManagerResourceGroupId);
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
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceManagerResourceGroupId") != m.end() && !m["ResourceManagerResourceGroupId"].empty()) {
      resourceManagerResourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceManagerResourceGroupId"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
  }


  virtual ~ModifyDefenseRuleCacheRequest() = default;
};
class ModifyDefenseRuleCacheResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDefenseRuleCacheResponseBody() {}

  explicit ModifyDefenseRuleCacheResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyDefenseRuleCacheResponseBody() = default;
};
class ModifyDefenseRuleCacheResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyDefenseRuleCacheResponseBody> body{};

  ModifyDefenseRuleCacheResponse() {}

  explicit ModifyDefenseRuleCacheResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDefenseRuleCacheResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDefenseRuleCacheResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDefenseRuleCacheResponse() = default;
};
class ModifyDefenseRuleStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceManagerResourceGroupId{};
  shared_ptr<long> ruleId{};
  shared_ptr<long> ruleStatus{};
  shared_ptr<long> templateId{};

  ModifyDefenseRuleStatusRequest() {}

  explicit ModifyDefenseRuleStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceManagerResourceGroupId) {
      res["ResourceManagerResourceGroupId"] = boost::any(*resourceManagerResourceGroupId);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (ruleStatus) {
      res["RuleStatus"] = boost::any(*ruleStatus);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceManagerResourceGroupId") != m.end() && !m["ResourceManagerResourceGroupId"].empty()) {
      resourceManagerResourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceManagerResourceGroupId"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
    if (m.find("RuleStatus") != m.end() && !m["RuleStatus"].empty()) {
      ruleStatus = make_shared<long>(boost::any_cast<long>(m["RuleStatus"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
  }


  virtual ~ModifyDefenseRuleStatusRequest() = default;
};
class ModifyDefenseRuleStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDefenseRuleStatusResponseBody() {}

  explicit ModifyDefenseRuleStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyDefenseRuleStatusResponseBody() = default;
};
class ModifyDefenseRuleStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyDefenseRuleStatusResponseBody> body{};

  ModifyDefenseRuleStatusResponse() {}

  explicit ModifyDefenseRuleStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDefenseRuleStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDefenseRuleStatusResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDefenseRuleStatusResponse() = default;
};
class ModifyDefenseTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceManagerResourceGroupId{};
  shared_ptr<long> templateId{};
  shared_ptr<string> templateName{};

  ModifyDefenseTemplateRequest() {}

  explicit ModifyDefenseTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceManagerResourceGroupId) {
      res["ResourceManagerResourceGroupId"] = boost::any(*resourceManagerResourceGroupId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceManagerResourceGroupId") != m.end() && !m["ResourceManagerResourceGroupId"].empty()) {
      resourceManagerResourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceManagerResourceGroupId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
  }


  virtual ~ModifyDefenseTemplateRequest() = default;
};
class ModifyDefenseTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDefenseTemplateResponseBody() {}

  explicit ModifyDefenseTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyDefenseTemplateResponseBody() = default;
};
class ModifyDefenseTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyDefenseTemplateResponseBody> body{};

  ModifyDefenseTemplateResponse() {}

  explicit ModifyDefenseTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDefenseTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDefenseTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDefenseTemplateResponse() = default;
};
class ModifyDefenseTemplateStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceManagerResourceGroupId{};
  shared_ptr<long> templateId{};
  shared_ptr<long> templateStatus{};

  ModifyDefenseTemplateStatusRequest() {}

  explicit ModifyDefenseTemplateStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceManagerResourceGroupId) {
      res["ResourceManagerResourceGroupId"] = boost::any(*resourceManagerResourceGroupId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateStatus) {
      res["TemplateStatus"] = boost::any(*templateStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceManagerResourceGroupId") != m.end() && !m["ResourceManagerResourceGroupId"].empty()) {
      resourceManagerResourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceManagerResourceGroupId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
    if (m.find("TemplateStatus") != m.end() && !m["TemplateStatus"].empty()) {
      templateStatus = make_shared<long>(boost::any_cast<long>(m["TemplateStatus"]));
    }
  }


  virtual ~ModifyDefenseTemplateStatusRequest() = default;
};
class ModifyDefenseTemplateStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDefenseTemplateStatusResponseBody() {}

  explicit ModifyDefenseTemplateStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyDefenseTemplateStatusResponseBody() = default;
};
class ModifyDefenseTemplateStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyDefenseTemplateStatusResponseBody> body{};

  ModifyDefenseTemplateStatusResponse() {}

  explicit ModifyDefenseTemplateStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDefenseTemplateStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDefenseTemplateStatusResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDefenseTemplateStatusResponse() = default;
};
class ModifyDomainRequestListen : public Darabonba::Model {
public:
  shared_ptr<string> certId{};
  shared_ptr<long> cipherSuite{};
  shared_ptr<vector<string>> customCiphers{};
  shared_ptr<bool> enableTLSv3{};
  shared_ptr<bool> exclusiveIp{};
  shared_ptr<bool> focusHttps{};
  shared_ptr<bool> http2Enabled{};
  shared_ptr<vector<long>> httpPorts{};
  shared_ptr<vector<long>> httpsPorts{};
  shared_ptr<bool> IPv6Enabled{};
  shared_ptr<string> protectionResource{};
  shared_ptr<bool> SM2AccessOnly{};
  shared_ptr<string> SM2CertId{};
  shared_ptr<bool> SM2Enabled{};
  shared_ptr<string> TLSVersion{};
  shared_ptr<long> xffHeaderMode{};
  shared_ptr<vector<string>> xffHeaders{};

  ModifyDomainRequestListen() {}

  explicit ModifyDomainRequestListen(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certId) {
      res["CertId"] = boost::any(*certId);
    }
    if (cipherSuite) {
      res["CipherSuite"] = boost::any(*cipherSuite);
    }
    if (customCiphers) {
      res["CustomCiphers"] = boost::any(*customCiphers);
    }
    if (enableTLSv3) {
      res["EnableTLSv3"] = boost::any(*enableTLSv3);
    }
    if (exclusiveIp) {
      res["ExclusiveIp"] = boost::any(*exclusiveIp);
    }
    if (focusHttps) {
      res["FocusHttps"] = boost::any(*focusHttps);
    }
    if (http2Enabled) {
      res["Http2Enabled"] = boost::any(*http2Enabled);
    }
    if (httpPorts) {
      res["HttpPorts"] = boost::any(*httpPorts);
    }
    if (httpsPorts) {
      res["HttpsPorts"] = boost::any(*httpsPorts);
    }
    if (IPv6Enabled) {
      res["IPv6Enabled"] = boost::any(*IPv6Enabled);
    }
    if (protectionResource) {
      res["ProtectionResource"] = boost::any(*protectionResource);
    }
    if (SM2AccessOnly) {
      res["SM2AccessOnly"] = boost::any(*SM2AccessOnly);
    }
    if (SM2CertId) {
      res["SM2CertId"] = boost::any(*SM2CertId);
    }
    if (SM2Enabled) {
      res["SM2Enabled"] = boost::any(*SM2Enabled);
    }
    if (TLSVersion) {
      res["TLSVersion"] = boost::any(*TLSVersion);
    }
    if (xffHeaderMode) {
      res["XffHeaderMode"] = boost::any(*xffHeaderMode);
    }
    if (xffHeaders) {
      res["XffHeaders"] = boost::any(*xffHeaders);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertId") != m.end() && !m["CertId"].empty()) {
      certId = make_shared<string>(boost::any_cast<string>(m["CertId"]));
    }
    if (m.find("CipherSuite") != m.end() && !m["CipherSuite"].empty()) {
      cipherSuite = make_shared<long>(boost::any_cast<long>(m["CipherSuite"]));
    }
    if (m.find("CustomCiphers") != m.end() && !m["CustomCiphers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CustomCiphers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CustomCiphers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      customCiphers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("EnableTLSv3") != m.end() && !m["EnableTLSv3"].empty()) {
      enableTLSv3 = make_shared<bool>(boost::any_cast<bool>(m["EnableTLSv3"]));
    }
    if (m.find("ExclusiveIp") != m.end() && !m["ExclusiveIp"].empty()) {
      exclusiveIp = make_shared<bool>(boost::any_cast<bool>(m["ExclusiveIp"]));
    }
    if (m.find("FocusHttps") != m.end() && !m["FocusHttps"].empty()) {
      focusHttps = make_shared<bool>(boost::any_cast<bool>(m["FocusHttps"]));
    }
    if (m.find("Http2Enabled") != m.end() && !m["Http2Enabled"].empty()) {
      http2Enabled = make_shared<bool>(boost::any_cast<bool>(m["Http2Enabled"]));
    }
    if (m.find("HttpPorts") != m.end() && !m["HttpPorts"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["HttpPorts"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["HttpPorts"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      httpPorts = make_shared<vector<long>>(toVec1);
    }
    if (m.find("HttpsPorts") != m.end() && !m["HttpsPorts"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["HttpsPorts"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["HttpsPorts"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      httpsPorts = make_shared<vector<long>>(toVec1);
    }
    if (m.find("IPv6Enabled") != m.end() && !m["IPv6Enabled"].empty()) {
      IPv6Enabled = make_shared<bool>(boost::any_cast<bool>(m["IPv6Enabled"]));
    }
    if (m.find("ProtectionResource") != m.end() && !m["ProtectionResource"].empty()) {
      protectionResource = make_shared<string>(boost::any_cast<string>(m["ProtectionResource"]));
    }
    if (m.find("SM2AccessOnly") != m.end() && !m["SM2AccessOnly"].empty()) {
      SM2AccessOnly = make_shared<bool>(boost::any_cast<bool>(m["SM2AccessOnly"]));
    }
    if (m.find("SM2CertId") != m.end() && !m["SM2CertId"].empty()) {
      SM2CertId = make_shared<string>(boost::any_cast<string>(m["SM2CertId"]));
    }
    if (m.find("SM2Enabled") != m.end() && !m["SM2Enabled"].empty()) {
      SM2Enabled = make_shared<bool>(boost::any_cast<bool>(m["SM2Enabled"]));
    }
    if (m.find("TLSVersion") != m.end() && !m["TLSVersion"].empty()) {
      TLSVersion = make_shared<string>(boost::any_cast<string>(m["TLSVersion"]));
    }
    if (m.find("XffHeaderMode") != m.end() && !m["XffHeaderMode"].empty()) {
      xffHeaderMode = make_shared<long>(boost::any_cast<long>(m["XffHeaderMode"]));
    }
    if (m.find("XffHeaders") != m.end() && !m["XffHeaders"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["XffHeaders"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["XffHeaders"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      xffHeaders = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ModifyDomainRequestListen() = default;
};
class ModifyDomainRequestRedirectRequestHeaders : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ModifyDomainRequestRedirectRequestHeaders() {}

  explicit ModifyDomainRequestRedirectRequestHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyDomainRequestRedirectRequestHeaders() = default;
};
class ModifyDomainRequestRedirect : public Darabonba::Model {
public:
  shared_ptr<vector<string>> backends{};
  shared_ptr<bool> cnameEnabled{};
  shared_ptr<long> connectTimeout{};
  shared_ptr<bool> focusHttpBackend{};
  shared_ptr<bool> keepalive{};
  shared_ptr<long> keepaliveRequests{};
  shared_ptr<long> keepaliveTimeout{};
  shared_ptr<string> loadbalance{};
  shared_ptr<long> readTimeout{};
  shared_ptr<vector<ModifyDomainRequestRedirectRequestHeaders>> requestHeaders{};
  shared_ptr<bool> retry{};
  shared_ptr<string> routingRules{};
  shared_ptr<bool> sniEnabled{};
  shared_ptr<string> sniHost{};
  shared_ptr<long> writeTimeout{};
  shared_ptr<bool> xffProto{};

  ModifyDomainRequestRedirect() {}

  explicit ModifyDomainRequestRedirect(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backends) {
      res["Backends"] = boost::any(*backends);
    }
    if (cnameEnabled) {
      res["CnameEnabled"] = boost::any(*cnameEnabled);
    }
    if (connectTimeout) {
      res["ConnectTimeout"] = boost::any(*connectTimeout);
    }
    if (focusHttpBackend) {
      res["FocusHttpBackend"] = boost::any(*focusHttpBackend);
    }
    if (keepalive) {
      res["Keepalive"] = boost::any(*keepalive);
    }
    if (keepaliveRequests) {
      res["KeepaliveRequests"] = boost::any(*keepaliveRequests);
    }
    if (keepaliveTimeout) {
      res["KeepaliveTimeout"] = boost::any(*keepaliveTimeout);
    }
    if (loadbalance) {
      res["Loadbalance"] = boost::any(*loadbalance);
    }
    if (readTimeout) {
      res["ReadTimeout"] = boost::any(*readTimeout);
    }
    if (requestHeaders) {
      vector<boost::any> temp1;
      for(auto item1:*requestHeaders){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RequestHeaders"] = boost::any(temp1);
    }
    if (retry) {
      res["Retry"] = boost::any(*retry);
    }
    if (routingRules) {
      res["RoutingRules"] = boost::any(*routingRules);
    }
    if (sniEnabled) {
      res["SniEnabled"] = boost::any(*sniEnabled);
    }
    if (sniHost) {
      res["SniHost"] = boost::any(*sniHost);
    }
    if (writeTimeout) {
      res["WriteTimeout"] = boost::any(*writeTimeout);
    }
    if (xffProto) {
      res["XffProto"] = boost::any(*xffProto);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Backends") != m.end() && !m["Backends"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Backends"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Backends"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      backends = make_shared<vector<string>>(toVec1);
    }
    if (m.find("CnameEnabled") != m.end() && !m["CnameEnabled"].empty()) {
      cnameEnabled = make_shared<bool>(boost::any_cast<bool>(m["CnameEnabled"]));
    }
    if (m.find("ConnectTimeout") != m.end() && !m["ConnectTimeout"].empty()) {
      connectTimeout = make_shared<long>(boost::any_cast<long>(m["ConnectTimeout"]));
    }
    if (m.find("FocusHttpBackend") != m.end() && !m["FocusHttpBackend"].empty()) {
      focusHttpBackend = make_shared<bool>(boost::any_cast<bool>(m["FocusHttpBackend"]));
    }
    if (m.find("Keepalive") != m.end() && !m["Keepalive"].empty()) {
      keepalive = make_shared<bool>(boost::any_cast<bool>(m["Keepalive"]));
    }
    if (m.find("KeepaliveRequests") != m.end() && !m["KeepaliveRequests"].empty()) {
      keepaliveRequests = make_shared<long>(boost::any_cast<long>(m["KeepaliveRequests"]));
    }
    if (m.find("KeepaliveTimeout") != m.end() && !m["KeepaliveTimeout"].empty()) {
      keepaliveTimeout = make_shared<long>(boost::any_cast<long>(m["KeepaliveTimeout"]));
    }
    if (m.find("Loadbalance") != m.end() && !m["Loadbalance"].empty()) {
      loadbalance = make_shared<string>(boost::any_cast<string>(m["Loadbalance"]));
    }
    if (m.find("ReadTimeout") != m.end() && !m["ReadTimeout"].empty()) {
      readTimeout = make_shared<long>(boost::any_cast<long>(m["ReadTimeout"]));
    }
    if (m.find("RequestHeaders") != m.end() && !m["RequestHeaders"].empty()) {
      if (typeid(vector<boost::any>) == m["RequestHeaders"].type()) {
        vector<ModifyDomainRequestRedirectRequestHeaders> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RequestHeaders"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyDomainRequestRedirectRequestHeaders model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        requestHeaders = make_shared<vector<ModifyDomainRequestRedirectRequestHeaders>>(expect1);
      }
    }
    if (m.find("Retry") != m.end() && !m["Retry"].empty()) {
      retry = make_shared<bool>(boost::any_cast<bool>(m["Retry"]));
    }
    if (m.find("RoutingRules") != m.end() && !m["RoutingRules"].empty()) {
      routingRules = make_shared<string>(boost::any_cast<string>(m["RoutingRules"]));
    }
    if (m.find("SniEnabled") != m.end() && !m["SniEnabled"].empty()) {
      sniEnabled = make_shared<bool>(boost::any_cast<bool>(m["SniEnabled"]));
    }
    if (m.find("SniHost") != m.end() && !m["SniHost"].empty()) {
      sniHost = make_shared<string>(boost::any_cast<string>(m["SniHost"]));
    }
    if (m.find("WriteTimeout") != m.end() && !m["WriteTimeout"].empty()) {
      writeTimeout = make_shared<long>(boost::any_cast<long>(m["WriteTimeout"]));
    }
    if (m.find("XffProto") != m.end() && !m["XffProto"].empty()) {
      xffProto = make_shared<bool>(boost::any_cast<bool>(m["XffProto"]));
    }
  }


  virtual ~ModifyDomainRequestRedirect() = default;
};
class ModifyDomainRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessType{};
  shared_ptr<string> domain{};
  shared_ptr<string> instanceId{};
  shared_ptr<ModifyDomainRequestListen> listen{};
  shared_ptr<ModifyDomainRequestRedirect> redirect{};
  shared_ptr<string> regionId{};

  ModifyDomainRequest() {}

  explicit ModifyDomainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessType) {
      res["AccessType"] = boost::any(*accessType);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (listen) {
      res["Listen"] = listen ? boost::any(listen->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (redirect) {
      res["Redirect"] = redirect ? boost::any(redirect->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessType") != m.end() && !m["AccessType"].empty()) {
      accessType = make_shared<string>(boost::any_cast<string>(m["AccessType"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Listen") != m.end() && !m["Listen"].empty()) {
      if (typeid(map<string, boost::any>) == m["Listen"].type()) {
        ModifyDomainRequestListen model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Listen"]));
        listen = make_shared<ModifyDomainRequestListen>(model1);
      }
    }
    if (m.find("Redirect") != m.end() && !m["Redirect"].empty()) {
      if (typeid(map<string, boost::any>) == m["Redirect"].type()) {
        ModifyDomainRequestRedirect model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Redirect"]));
        redirect = make_shared<ModifyDomainRequestRedirect>(model1);
      }
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ModifyDomainRequest() = default;
};
class ModifyDomainShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessType{};
  shared_ptr<string> domain{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> listenShrink{};
  shared_ptr<string> redirectShrink{};
  shared_ptr<string> regionId{};

  ModifyDomainShrinkRequest() {}

  explicit ModifyDomainShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessType) {
      res["AccessType"] = boost::any(*accessType);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (listenShrink) {
      res["Listen"] = boost::any(*listenShrink);
    }
    if (redirectShrink) {
      res["Redirect"] = boost::any(*redirectShrink);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessType") != m.end() && !m["AccessType"].empty()) {
      accessType = make_shared<string>(boost::any_cast<string>(m["AccessType"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Listen") != m.end() && !m["Listen"].empty()) {
      listenShrink = make_shared<string>(boost::any_cast<string>(m["Listen"]));
    }
    if (m.find("Redirect") != m.end() && !m["Redirect"].empty()) {
      redirectShrink = make_shared<string>(boost::any_cast<string>(m["Redirect"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ModifyDomainShrinkRequest() = default;
};
class ModifyDomainResponseBodyDomainInfo : public Darabonba::Model {
public:
  shared_ptr<string> cname{};
  shared_ptr<string> domain{};
  shared_ptr<string> domainId{};

  ModifyDomainResponseBodyDomainInfo() {}

  explicit ModifyDomainResponseBodyDomainInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cname) {
      res["Cname"] = boost::any(*cname);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (domainId) {
      res["DomainId"] = boost::any(*domainId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cname") != m.end() && !m["Cname"].empty()) {
      cname = make_shared<string>(boost::any_cast<string>(m["Cname"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("DomainId") != m.end() && !m["DomainId"].empty()) {
      domainId = make_shared<string>(boost::any_cast<string>(m["DomainId"]));
    }
  }


  virtual ~ModifyDomainResponseBodyDomainInfo() = default;
};
class ModifyDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<ModifyDomainResponseBodyDomainInfo> domainInfo{};
  shared_ptr<string> requestId{};

  ModifyDomainResponseBody() {}

  explicit ModifyDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainInfo) {
      res["DomainInfo"] = domainInfo ? boost::any(domainInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainInfo") != m.end() && !m["DomainInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DomainInfo"].type()) {
        ModifyDomainResponseBodyDomainInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DomainInfo"]));
        domainInfo = make_shared<ModifyDomainResponseBodyDomainInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyDomainResponseBody() = default;
};
class ModifyDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyDomainResponseBody> body{};

  ModifyDomainResponse() {}

  explicit ModifyDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDomainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDomainResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDomainResponse() = default;
};
class ModifyHybridCloudClusterBypassStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterResourceId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> ruleStatus{};

  ModifyHybridCloudClusterBypassStatusRequest() {}

  explicit ModifyHybridCloudClusterBypassStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterResourceId) {
      res["ClusterResourceId"] = boost::any(*clusterResourceId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ruleStatus) {
      res["RuleStatus"] = boost::any(*ruleStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterResourceId") != m.end() && !m["ClusterResourceId"].empty()) {
      clusterResourceId = make_shared<string>(boost::any_cast<string>(m["ClusterResourceId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RuleStatus") != m.end() && !m["RuleStatus"].empty()) {
      ruleStatus = make_shared<string>(boost::any_cast<string>(m["RuleStatus"]));
    }
  }


  virtual ~ModifyHybridCloudClusterBypassStatusRequest() = default;
};
class ModifyHybridCloudClusterBypassStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyHybridCloudClusterBypassStatusResponseBody() {}

  explicit ModifyHybridCloudClusterBypassStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyHybridCloudClusterBypassStatusResponseBody() = default;
};
class ModifyHybridCloudClusterBypassStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyHybridCloudClusterBypassStatusResponseBody> body{};

  ModifyHybridCloudClusterBypassStatusResponse() {}

  explicit ModifyHybridCloudClusterBypassStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyHybridCloudClusterBypassStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyHybridCloudClusterBypassStatusResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyHybridCloudClusterBypassStatusResponse() = default;
};
class ModifyMajorProtectionBlackIpRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<long> expiredTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> ipList{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceManagerResourceGroupId{};
  shared_ptr<long> ruleId{};
  shared_ptr<long> templateId{};

  ModifyMajorProtectionBlackIpRequest() {}

  explicit ModifyMajorProtectionBlackIpRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceManagerResourceGroupId) {
      res["ResourceManagerResourceGroupId"] = boost::any(*resourceManagerResourceGroupId);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceManagerResourceGroupId") != m.end() && !m["ResourceManagerResourceGroupId"].empty()) {
      resourceManagerResourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceManagerResourceGroupId"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
  }


  virtual ~ModifyMajorProtectionBlackIpRequest() = default;
};
class ModifyMajorProtectionBlackIpResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyMajorProtectionBlackIpResponseBody() {}

  explicit ModifyMajorProtectionBlackIpResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyMajorProtectionBlackIpResponseBody() = default;
};
class ModifyMajorProtectionBlackIpResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyMajorProtectionBlackIpResponseBody> body{};

  ModifyMajorProtectionBlackIpResponse() {}

  explicit ModifyMajorProtectionBlackIpResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyMajorProtectionBlackIpResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyMajorProtectionBlackIpResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyMajorProtectionBlackIpResponse() = default;
};
class ModifyMemberAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> memberAccountId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceManagerResourceGroupId{};
  shared_ptr<string> sourceIp{};

  ModifyMemberAccountRequest() {}

  explicit ModifyMemberAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (memberAccountId) {
      res["MemberAccountId"] = boost::any(*memberAccountId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceManagerResourceGroupId) {
      res["ResourceManagerResourceGroupId"] = boost::any(*resourceManagerResourceGroupId);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MemberAccountId") != m.end() && !m["MemberAccountId"].empty()) {
      memberAccountId = make_shared<string>(boost::any_cast<string>(m["MemberAccountId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceManagerResourceGroupId") != m.end() && !m["ResourceManagerResourceGroupId"].empty()) {
      resourceManagerResourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceManagerResourceGroupId"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~ModifyMemberAccountRequest() = default;
};
class ModifyMemberAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyMemberAccountResponseBody() {}

  explicit ModifyMemberAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyMemberAccountResponseBody() = default;
};
class ModifyMemberAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyMemberAccountResponseBody> body{};

  ModifyMemberAccountResponse() {}

  explicit ModifyMemberAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyMemberAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyMemberAccountResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyMemberAccountResponse() = default;
};
class ModifyResourceLogStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resource{};
  shared_ptr<string> resourceManagerResourceGroupId{};
  shared_ptr<bool> status{};

  ModifyResourceLogStatusRequest() {}

  explicit ModifyResourceLogStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resource) {
      res["Resource"] = boost::any(*resource);
    }
    if (resourceManagerResourceGroupId) {
      res["ResourceManagerResourceGroupId"] = boost::any(*resourceManagerResourceGroupId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Resource") != m.end() && !m["Resource"].empty()) {
      resource = make_shared<string>(boost::any_cast<string>(m["Resource"]));
    }
    if (m.find("ResourceManagerResourceGroupId") != m.end() && !m["ResourceManagerResourceGroupId"].empty()) {
      resourceManagerResourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceManagerResourceGroupId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<bool>(boost::any_cast<bool>(m["Status"]));
    }
  }


  virtual ~ModifyResourceLogStatusRequest() = default;
};
class ModifyResourceLogStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> status{};

  ModifyResourceLogStatusResponseBody() {}

  explicit ModifyResourceLogStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      status = make_shared<bool>(boost::any_cast<bool>(m["Status"]));
    }
  }


  virtual ~ModifyResourceLogStatusResponseBody() = default;
};
class ModifyResourceLogStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyResourceLogStatusResponseBody> body{};

  ModifyResourceLogStatusResponse() {}

  explicit ModifyResourceLogStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyResourceLogStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyResourceLogStatusResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyResourceLogStatusResponse() = default;
};
class ModifyTemplateResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> bindResourceGroups{};
  shared_ptr<vector<string>> bindResources{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceManagerResourceGroupId{};
  shared_ptr<long> templateId{};
  shared_ptr<vector<string>> unbindResourceGroups{};
  shared_ptr<vector<string>> unbindResources{};

  ModifyTemplateResourcesRequest() {}

  explicit ModifyTemplateResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bindResourceGroups) {
      res["BindResourceGroups"] = boost::any(*bindResourceGroups);
    }
    if (bindResources) {
      res["BindResources"] = boost::any(*bindResources);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceManagerResourceGroupId) {
      res["ResourceManagerResourceGroupId"] = boost::any(*resourceManagerResourceGroupId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (unbindResourceGroups) {
      res["UnbindResourceGroups"] = boost::any(*unbindResourceGroups);
    }
    if (unbindResources) {
      res["UnbindResources"] = boost::any(*unbindResources);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BindResourceGroups") != m.end() && !m["BindResourceGroups"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["BindResourceGroups"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["BindResourceGroups"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      bindResourceGroups = make_shared<vector<string>>(toVec1);
    }
    if (m.find("BindResources") != m.end() && !m["BindResources"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["BindResources"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["BindResources"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      bindResources = make_shared<vector<string>>(toVec1);
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceManagerResourceGroupId") != m.end() && !m["ResourceManagerResourceGroupId"].empty()) {
      resourceManagerResourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceManagerResourceGroupId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
    if (m.find("UnbindResourceGroups") != m.end() && !m["UnbindResourceGroups"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UnbindResourceGroups"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UnbindResourceGroups"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      unbindResourceGroups = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UnbindResources") != m.end() && !m["UnbindResources"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UnbindResources"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UnbindResources"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      unbindResources = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ModifyTemplateResourcesRequest() = default;
};
class ModifyTemplateResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyTemplateResourcesResponseBody() {}

  explicit ModifyTemplateResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyTemplateResourcesResponseBody() = default;
};
class ModifyTemplateResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyTemplateResourcesResponseBody> body{};

  ModifyTemplateResourcesResponse() {}

  explicit ModifyTemplateResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyTemplateResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyTemplateResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyTemplateResourcesResponse() = default;
};
class SyncProductInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceManagerResourceGroupId{};

  SyncProductInstanceRequest() {}

  explicit SyncProductInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceManagerResourceGroupId) {
      res["ResourceManagerResourceGroupId"] = boost::any(*resourceManagerResourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceManagerResourceGroupId") != m.end() && !m["ResourceManagerResourceGroupId"].empty()) {
      resourceManagerResourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceManagerResourceGroupId"]));
    }
  }


  virtual ~SyncProductInstanceRequest() = default;
};
class SyncProductInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SyncProductInstanceResponseBody() {}

  explicit SyncProductInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SyncProductInstanceResponseBody() = default;
};
class SyncProductInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SyncProductInstanceResponseBody> body{};

  SyncProductInstanceResponse() {}

  explicit SyncProductInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SyncProductInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SyncProductInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~SyncProductInstanceResponse() = default;
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
  ClearMajorProtectionBlackIpResponse clearMajorProtectionBlackIpWithOptions(shared_ptr<ClearMajorProtectionBlackIpRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ClearMajorProtectionBlackIpResponse clearMajorProtectionBlackIp(shared_ptr<ClearMajorProtectionBlackIpRequest> request);
  CreateDefenseResourceGroupResponse createDefenseResourceGroupWithOptions(shared_ptr<CreateDefenseResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDefenseResourceGroupResponse createDefenseResourceGroup(shared_ptr<CreateDefenseResourceGroupRequest> request);
  CreateDefenseRuleResponse createDefenseRuleWithOptions(shared_ptr<CreateDefenseRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDefenseRuleResponse createDefenseRule(shared_ptr<CreateDefenseRuleRequest> request);
  CreateDefenseTemplateResponse createDefenseTemplateWithOptions(shared_ptr<CreateDefenseTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDefenseTemplateResponse createDefenseTemplate(shared_ptr<CreateDefenseTemplateRequest> request);
  CreateDomainResponse createDomainWithOptions(shared_ptr<CreateDomainRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDomainResponse createDomain(shared_ptr<CreateDomainRequest> request);
  CreateMajorProtectionBlackIpResponse createMajorProtectionBlackIpWithOptions(shared_ptr<CreateMajorProtectionBlackIpRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateMajorProtectionBlackIpResponse createMajorProtectionBlackIp(shared_ptr<CreateMajorProtectionBlackIpRequest> request);
  CreateMemberAccountsResponse createMemberAccountsWithOptions(shared_ptr<CreateMemberAccountsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateMemberAccountsResponse createMemberAccounts(shared_ptr<CreateMemberAccountsRequest> request);
  DeleteDefenseResourceGroupResponse deleteDefenseResourceGroupWithOptions(shared_ptr<DeleteDefenseResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDefenseResourceGroupResponse deleteDefenseResourceGroup(shared_ptr<DeleteDefenseResourceGroupRequest> request);
  DeleteDefenseRuleResponse deleteDefenseRuleWithOptions(shared_ptr<DeleteDefenseRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDefenseRuleResponse deleteDefenseRule(shared_ptr<DeleteDefenseRuleRequest> request);
  DeleteDefenseTemplateResponse deleteDefenseTemplateWithOptions(shared_ptr<DeleteDefenseTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDefenseTemplateResponse deleteDefenseTemplate(shared_ptr<DeleteDefenseTemplateRequest> request);
  DeleteDomainResponse deleteDomainWithOptions(shared_ptr<DeleteDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDomainResponse deleteDomain(shared_ptr<DeleteDomainRequest> request);
  DeleteMajorProtectionBlackIpResponse deleteMajorProtectionBlackIpWithOptions(shared_ptr<DeleteMajorProtectionBlackIpRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteMajorProtectionBlackIpResponse deleteMajorProtectionBlackIp(shared_ptr<DeleteMajorProtectionBlackIpRequest> request);
  DeleteMemberAccountResponse deleteMemberAccountWithOptions(shared_ptr<DeleteMemberAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteMemberAccountResponse deleteMemberAccount(shared_ptr<DeleteMemberAccountRequest> request);
  DescribeAccountDelegatedStatusResponse describeAccountDelegatedStatusWithOptions(shared_ptr<DescribeAccountDelegatedStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAccountDelegatedStatusResponse describeAccountDelegatedStatus(shared_ptr<DescribeAccountDelegatedStatusRequest> request);
  DescribeCertsResponse describeCertsWithOptions(shared_ptr<DescribeCertsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCertsResponse describeCerts(shared_ptr<DescribeCertsRequest> request);
  DescribeCloudResourcesResponse describeCloudResourcesWithOptions(shared_ptr<DescribeCloudResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCloudResourcesResponse describeCloudResources(shared_ptr<DescribeCloudResourcesRequest> request);
  DescribeDefenseResourceGroupResponse describeDefenseResourceGroupWithOptions(shared_ptr<DescribeDefenseResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDefenseResourceGroupResponse describeDefenseResourceGroup(shared_ptr<DescribeDefenseResourceGroupRequest> request);
  DescribeDefenseResourceTemplatesResponse describeDefenseResourceTemplatesWithOptions(shared_ptr<DescribeDefenseResourceTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDefenseResourceTemplatesResponse describeDefenseResourceTemplates(shared_ptr<DescribeDefenseResourceTemplatesRequest> request);
  DescribeDefenseResourcesResponse describeDefenseResourcesWithOptions(shared_ptr<DescribeDefenseResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDefenseResourcesResponse describeDefenseResources(shared_ptr<DescribeDefenseResourcesRequest> request);
  DescribeDefenseRuleResponse describeDefenseRuleWithOptions(shared_ptr<DescribeDefenseRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDefenseRuleResponse describeDefenseRule(shared_ptr<DescribeDefenseRuleRequest> request);
  DescribeDefenseRulesResponse describeDefenseRulesWithOptions(shared_ptr<DescribeDefenseRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDefenseRulesResponse describeDefenseRules(shared_ptr<DescribeDefenseRulesRequest> request);
  DescribeDefenseTemplateResponse describeDefenseTemplateWithOptions(shared_ptr<DescribeDefenseTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDefenseTemplateResponse describeDefenseTemplate(shared_ptr<DescribeDefenseTemplateRequest> request);
  DescribeDefenseTemplatesResponse describeDefenseTemplatesWithOptions(shared_ptr<DescribeDefenseTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDefenseTemplatesResponse describeDefenseTemplates(shared_ptr<DescribeDefenseTemplatesRequest> request);
  DescribeDomainDNSRecordResponse describeDomainDNSRecordWithOptions(shared_ptr<DescribeDomainDNSRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDomainDNSRecordResponse describeDomainDNSRecord(shared_ptr<DescribeDomainDNSRecordRequest> request);
  DescribeDomainDetailResponse describeDomainDetailWithOptions(shared_ptr<DescribeDomainDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDomainDetailResponse describeDomainDetail(shared_ptr<DescribeDomainDetailRequest> request);
  DescribeDomainsResponse describeDomainsWithOptions(shared_ptr<DescribeDomainsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDomainsResponse describeDomains(shared_ptr<DescribeDomainsRequest> request);
  DescribeFlowChartResponse describeFlowChartWithOptions(shared_ptr<DescribeFlowChartRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeFlowChartResponse describeFlowChart(shared_ptr<DescribeFlowChartRequest> request);
  DescribeFlowTopResourceResponse describeFlowTopResourceWithOptions(shared_ptr<DescribeFlowTopResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeFlowTopResourceResponse describeFlowTopResource(shared_ptr<DescribeFlowTopResourceRequest> request);
  DescribeFlowTopUrlResponse describeFlowTopUrlWithOptions(shared_ptr<DescribeFlowTopUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeFlowTopUrlResponse describeFlowTopUrl(shared_ptr<DescribeFlowTopUrlRequest> request);
  DescribeHybridCloudGroupsResponse describeHybridCloudGroupsWithOptions(shared_ptr<DescribeHybridCloudGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeHybridCloudGroupsResponse describeHybridCloudGroups(shared_ptr<DescribeHybridCloudGroupsRequest> request);
  DescribeHybridCloudResourcesResponse describeHybridCloudResourcesWithOptions(shared_ptr<DescribeHybridCloudResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeHybridCloudResourcesResponse describeHybridCloudResources(shared_ptr<DescribeHybridCloudResourcesRequest> request);
  DescribeHybridCloudUserResponse describeHybridCloudUserWithOptions(shared_ptr<DescribeHybridCloudUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeHybridCloudUserResponse describeHybridCloudUser(shared_ptr<DescribeHybridCloudUserRequest> request);
  DescribeInstanceResponse describeInstanceWithOptions(shared_ptr<DescribeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeInstanceResponse describeInstance(shared_ptr<DescribeInstanceRequest> request);
  DescribeMajorProtectionBlackIpsResponse describeMajorProtectionBlackIpsWithOptions(shared_ptr<DescribeMajorProtectionBlackIpsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeMajorProtectionBlackIpsResponse describeMajorProtectionBlackIps(shared_ptr<DescribeMajorProtectionBlackIpsRequest> request);
  DescribeMemberAccountsResponse describeMemberAccountsWithOptions(shared_ptr<DescribeMemberAccountsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeMemberAccountsResponse describeMemberAccounts(shared_ptr<DescribeMemberAccountsRequest> request);
  DescribePeakTrendResponse describePeakTrendWithOptions(shared_ptr<DescribePeakTrendRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePeakTrendResponse describePeakTrend(shared_ptr<DescribePeakTrendRequest> request);
  DescribeProductInstancesResponse describeProductInstancesWithOptions(shared_ptr<DescribeProductInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeProductInstancesResponse describeProductInstances(shared_ptr<DescribeProductInstancesRequest> request);
  DescribeResourceInstanceCertsResponse describeResourceInstanceCertsWithOptions(shared_ptr<DescribeResourceInstanceCertsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeResourceInstanceCertsResponse describeResourceInstanceCerts(shared_ptr<DescribeResourceInstanceCertsRequest> request);
  DescribeResourceLogStatusResponse describeResourceLogStatusWithOptions(shared_ptr<DescribeResourceLogStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeResourceLogStatusResponse describeResourceLogStatus(shared_ptr<DescribeResourceLogStatusRequest> request);
  DescribeResourcePortResponse describeResourcePortWithOptions(shared_ptr<DescribeResourcePortRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeResourcePortResponse describeResourcePort(shared_ptr<DescribeResourcePortRequest> request);
  DescribeResourceRegionIdResponse describeResourceRegionIdWithOptions(shared_ptr<DescribeResourceRegionIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeResourceRegionIdResponse describeResourceRegionId(shared_ptr<DescribeResourceRegionIdRequest> request);
  DescribeResourceSupportRegionsResponse describeResourceSupportRegionsWithOptions(shared_ptr<DescribeResourceSupportRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeResourceSupportRegionsResponse describeResourceSupportRegions(shared_ptr<DescribeResourceSupportRegionsRequest> request);
  DescribeResponseCodeTrendGraphResponse describeResponseCodeTrendGraphWithOptions(shared_ptr<DescribeResponseCodeTrendGraphRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeResponseCodeTrendGraphResponse describeResponseCodeTrendGraph(shared_ptr<DescribeResponseCodeTrendGraphRequest> request);
  DescribeRuleGroupsResponse describeRuleGroupsWithOptions(shared_ptr<DescribeRuleGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRuleGroupsResponse describeRuleGroups(shared_ptr<DescribeRuleGroupsRequest> request);
  DescribeRuleHitsTopClientIpResponse describeRuleHitsTopClientIpWithOptions(shared_ptr<DescribeRuleHitsTopClientIpRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRuleHitsTopClientIpResponse describeRuleHitsTopClientIp(shared_ptr<DescribeRuleHitsTopClientIpRequest> request);
  DescribeRuleHitsTopResourceResponse describeRuleHitsTopResourceWithOptions(shared_ptr<DescribeRuleHitsTopResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRuleHitsTopResourceResponse describeRuleHitsTopResource(shared_ptr<DescribeRuleHitsTopResourceRequest> request);
  DescribeRuleHitsTopRuleIdResponse describeRuleHitsTopRuleIdWithOptions(shared_ptr<DescribeRuleHitsTopRuleIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRuleHitsTopRuleIdResponse describeRuleHitsTopRuleId(shared_ptr<DescribeRuleHitsTopRuleIdRequest> request);
  DescribeRuleHitsTopTuleTypeResponse describeRuleHitsTopTuleTypeWithOptions(shared_ptr<DescribeRuleHitsTopTuleTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRuleHitsTopTuleTypeResponse describeRuleHitsTopTuleType(shared_ptr<DescribeRuleHitsTopTuleTypeRequest> request);
  DescribeRuleHitsTopUaResponse describeRuleHitsTopUaWithOptions(shared_ptr<DescribeRuleHitsTopUaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRuleHitsTopUaResponse describeRuleHitsTopUa(shared_ptr<DescribeRuleHitsTopUaRequest> request);
  DescribeRuleHitsTopUrlResponse describeRuleHitsTopUrlWithOptions(shared_ptr<DescribeRuleHitsTopUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRuleHitsTopUrlResponse describeRuleHitsTopUrl(shared_ptr<DescribeRuleHitsTopUrlRequest> request);
  DescribeSlsAuthStatusResponse describeSlsAuthStatusWithOptions(shared_ptr<DescribeSlsAuthStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSlsAuthStatusResponse describeSlsAuthStatus(shared_ptr<DescribeSlsAuthStatusRequest> request);
  DescribeSlsLogStoreResponse describeSlsLogStoreWithOptions(shared_ptr<DescribeSlsLogStoreRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSlsLogStoreResponse describeSlsLogStore(shared_ptr<DescribeSlsLogStoreRequest> request);
  DescribeSlsLogStoreStatusResponse describeSlsLogStoreStatusWithOptions(shared_ptr<DescribeSlsLogStoreStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSlsLogStoreStatusResponse describeSlsLogStoreStatus(shared_ptr<DescribeSlsLogStoreStatusRequest> request);
  DescribeTemplateResourcesResponse describeTemplateResourcesWithOptions(shared_ptr<DescribeTemplateResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeTemplateResourcesResponse describeTemplateResources(shared_ptr<DescribeTemplateResourcesRequest> request);
  DescribeUserSlsLogRegionsResponse describeUserSlsLogRegionsWithOptions(shared_ptr<DescribeUserSlsLogRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeUserSlsLogRegionsResponse describeUserSlsLogRegions(shared_ptr<DescribeUserSlsLogRegionsRequest> request);
  DescribeUserWafLogStatusResponse describeUserWafLogStatusWithOptions(shared_ptr<DescribeUserWafLogStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeUserWafLogStatusResponse describeUserWafLogStatus(shared_ptr<DescribeUserWafLogStatusRequest> request);
  DescribeVisitTopIpResponse describeVisitTopIpWithOptions(shared_ptr<DescribeVisitTopIpRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVisitTopIpResponse describeVisitTopIp(shared_ptr<DescribeVisitTopIpRequest> request);
  DescribeVisitUasResponse describeVisitUasWithOptions(shared_ptr<DescribeVisitUasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVisitUasResponse describeVisitUas(shared_ptr<DescribeVisitUasRequest> request);
  DescribeWafSourceIpSegmentResponse describeWafSourceIpSegmentWithOptions(shared_ptr<DescribeWafSourceIpSegmentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeWafSourceIpSegmentResponse describeWafSourceIpSegment(shared_ptr<DescribeWafSourceIpSegmentRequest> request);
  ModifyDefenseResourceGroupResponse modifyDefenseResourceGroupWithOptions(shared_ptr<ModifyDefenseResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDefenseResourceGroupResponse modifyDefenseResourceGroup(shared_ptr<ModifyDefenseResourceGroupRequest> request);
  ModifyDefenseResourceXffResponse modifyDefenseResourceXffWithOptions(shared_ptr<ModifyDefenseResourceXffRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDefenseResourceXffResponse modifyDefenseResourceXff(shared_ptr<ModifyDefenseResourceXffRequest> request);
  ModifyDefenseRuleResponse modifyDefenseRuleWithOptions(shared_ptr<ModifyDefenseRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDefenseRuleResponse modifyDefenseRule(shared_ptr<ModifyDefenseRuleRequest> request);
  ModifyDefenseRuleCacheResponse modifyDefenseRuleCacheWithOptions(shared_ptr<ModifyDefenseRuleCacheRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDefenseRuleCacheResponse modifyDefenseRuleCache(shared_ptr<ModifyDefenseRuleCacheRequest> request);
  ModifyDefenseRuleStatusResponse modifyDefenseRuleStatusWithOptions(shared_ptr<ModifyDefenseRuleStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDefenseRuleStatusResponse modifyDefenseRuleStatus(shared_ptr<ModifyDefenseRuleStatusRequest> request);
  ModifyDefenseTemplateResponse modifyDefenseTemplateWithOptions(shared_ptr<ModifyDefenseTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDefenseTemplateResponse modifyDefenseTemplate(shared_ptr<ModifyDefenseTemplateRequest> request);
  ModifyDefenseTemplateStatusResponse modifyDefenseTemplateStatusWithOptions(shared_ptr<ModifyDefenseTemplateStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDefenseTemplateStatusResponse modifyDefenseTemplateStatus(shared_ptr<ModifyDefenseTemplateStatusRequest> request);
  ModifyDomainResponse modifyDomainWithOptions(shared_ptr<ModifyDomainRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDomainResponse modifyDomain(shared_ptr<ModifyDomainRequest> request);
  ModifyHybridCloudClusterBypassStatusResponse modifyHybridCloudClusterBypassStatusWithOptions(shared_ptr<ModifyHybridCloudClusterBypassStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyHybridCloudClusterBypassStatusResponse modifyHybridCloudClusterBypassStatus(shared_ptr<ModifyHybridCloudClusterBypassStatusRequest> request);
  ModifyMajorProtectionBlackIpResponse modifyMajorProtectionBlackIpWithOptions(shared_ptr<ModifyMajorProtectionBlackIpRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyMajorProtectionBlackIpResponse modifyMajorProtectionBlackIp(shared_ptr<ModifyMajorProtectionBlackIpRequest> request);
  ModifyMemberAccountResponse modifyMemberAccountWithOptions(shared_ptr<ModifyMemberAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyMemberAccountResponse modifyMemberAccount(shared_ptr<ModifyMemberAccountRequest> request);
  ModifyResourceLogStatusResponse modifyResourceLogStatusWithOptions(shared_ptr<ModifyResourceLogStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyResourceLogStatusResponse modifyResourceLogStatus(shared_ptr<ModifyResourceLogStatusRequest> request);
  ModifyTemplateResourcesResponse modifyTemplateResourcesWithOptions(shared_ptr<ModifyTemplateResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyTemplateResourcesResponse modifyTemplateResources(shared_ptr<ModifyTemplateResourcesRequest> request);
  SyncProductInstanceResponse syncProductInstanceWithOptions(shared_ptr<SyncProductInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SyncProductInstanceResponse syncProductInstance(shared_ptr<SyncProductInstanceRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Waf-openapi20211001

#endif
