// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_SDDP20190103_H_
#define ALIBABACLOUD_SDDP20190103_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Sddp20190103 {
class CreateConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> description{};
  shared_ptr<long> featureType{};
  shared_ptr<string> lang{};
  shared_ptr<string> sourceIp{};
  shared_ptr<string> value{};

  CreateConfigRequest() {}

  explicit CreateConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (featureType) {
      res["FeatureType"] = boost::any(*featureType);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("FeatureType") != m.end() && !m["FeatureType"].empty()) {
      featureType = make_shared<long>(boost::any_cast<long>(m["FeatureType"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateConfigRequest() = default;
};
class CreateConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> requestId{};

  CreateConfigResponseBody() {}

  explicit CreateConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateConfigResponseBody() = default;
};
class CreateConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateConfigResponseBody> body{};

  CreateConfigResponse() {}

  explicit CreateConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateConfigResponseBody>(model1);
      }
    }
  }


  virtual ~CreateConfigResponse() = default;
};
class CreateDataLimitRequest : public Darabonba::Model {
public:
  shared_ptr<long> auditStatus{};
  shared_ptr<long> autoScan{};
  shared_ptr<string> certificatePermission{};
  shared_ptr<long> enable{};
  shared_ptr<string> engineType{};
  shared_ptr<long> eventStatus{};
  shared_ptr<long> featureType{};
  shared_ptr<bool> instantlyScan{};
  shared_ptr<string> lang{};
  shared_ptr<long> logStoreDay{};
  shared_ptr<long> ocrStatus{};
  shared_ptr<string> parentId{};
  shared_ptr<string> password{};
  shared_ptr<long> port{};
  shared_ptr<long> resourceType{};
  shared_ptr<long> samplingSize{};
  shared_ptr<string> serviceRegionId{};
  shared_ptr<string> sourceIp{};
  shared_ptr<string> userName{};

  CreateDataLimitRequest() {}

  explicit CreateDataLimitRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auditStatus) {
      res["AuditStatus"] = boost::any(*auditStatus);
    }
    if (autoScan) {
      res["AutoScan"] = boost::any(*autoScan);
    }
    if (certificatePermission) {
      res["CertificatePermission"] = boost::any(*certificatePermission);
    }
    if (enable) {
      res["Enable"] = boost::any(*enable);
    }
    if (engineType) {
      res["EngineType"] = boost::any(*engineType);
    }
    if (eventStatus) {
      res["EventStatus"] = boost::any(*eventStatus);
    }
    if (featureType) {
      res["FeatureType"] = boost::any(*featureType);
    }
    if (instantlyScan) {
      res["InstantlyScan"] = boost::any(*instantlyScan);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (logStoreDay) {
      res["LogStoreDay"] = boost::any(*logStoreDay);
    }
    if (ocrStatus) {
      res["OcrStatus"] = boost::any(*ocrStatus);
    }
    if (parentId) {
      res["ParentId"] = boost::any(*parentId);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (samplingSize) {
      res["SamplingSize"] = boost::any(*samplingSize);
    }
    if (serviceRegionId) {
      res["ServiceRegionId"] = boost::any(*serviceRegionId);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuditStatus") != m.end() && !m["AuditStatus"].empty()) {
      auditStatus = make_shared<long>(boost::any_cast<long>(m["AuditStatus"]));
    }
    if (m.find("AutoScan") != m.end() && !m["AutoScan"].empty()) {
      autoScan = make_shared<long>(boost::any_cast<long>(m["AutoScan"]));
    }
    if (m.find("CertificatePermission") != m.end() && !m["CertificatePermission"].empty()) {
      certificatePermission = make_shared<string>(boost::any_cast<string>(m["CertificatePermission"]));
    }
    if (m.find("Enable") != m.end() && !m["Enable"].empty()) {
      enable = make_shared<long>(boost::any_cast<long>(m["Enable"]));
    }
    if (m.find("EngineType") != m.end() && !m["EngineType"].empty()) {
      engineType = make_shared<string>(boost::any_cast<string>(m["EngineType"]));
    }
    if (m.find("EventStatus") != m.end() && !m["EventStatus"].empty()) {
      eventStatus = make_shared<long>(boost::any_cast<long>(m["EventStatus"]));
    }
    if (m.find("FeatureType") != m.end() && !m["FeatureType"].empty()) {
      featureType = make_shared<long>(boost::any_cast<long>(m["FeatureType"]));
    }
    if (m.find("InstantlyScan") != m.end() && !m["InstantlyScan"].empty()) {
      instantlyScan = make_shared<bool>(boost::any_cast<bool>(m["InstantlyScan"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("LogStoreDay") != m.end() && !m["LogStoreDay"].empty()) {
      logStoreDay = make_shared<long>(boost::any_cast<long>(m["LogStoreDay"]));
    }
    if (m.find("OcrStatus") != m.end() && !m["OcrStatus"].empty()) {
      ocrStatus = make_shared<long>(boost::any_cast<long>(m["OcrStatus"]));
    }
    if (m.find("ParentId") != m.end() && !m["ParentId"].empty()) {
      parentId = make_shared<string>(boost::any_cast<string>(m["ParentId"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<long>(boost::any_cast<long>(m["ResourceType"]));
    }
    if (m.find("SamplingSize") != m.end() && !m["SamplingSize"].empty()) {
      samplingSize = make_shared<long>(boost::any_cast<long>(m["SamplingSize"]));
    }
    if (m.find("ServiceRegionId") != m.end() && !m["ServiceRegionId"].empty()) {
      serviceRegionId = make_shared<string>(boost::any_cast<string>(m["ServiceRegionId"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~CreateDataLimitRequest() = default;
};
class CreateDataLimitResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> requestId{};

  CreateDataLimitResponseBody() {}

  explicit CreateDataLimitResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateDataLimitResponseBody() = default;
};
class CreateDataLimitResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDataLimitResponseBody> body{};

  CreateDataLimitResponse() {}

  explicit CreateDataLimitResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDataLimitResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDataLimitResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDataLimitResponse() = default;
};
class CreateRuleRequest : public Darabonba::Model {
public:
  shared_ptr<long> category{};
  shared_ptr<string> content{};
  shared_ptr<long> contentCategory{};
  shared_ptr<string> description{};
  shared_ptr<string> lang{};
  shared_ptr<long> matchType{};
  shared_ptr<string> modelRuleIds{};
  shared_ptr<string> name{};
  shared_ptr<string> productCode{};
  shared_ptr<long> productId{};
  shared_ptr<long> riskLevelId{};
  shared_ptr<long> ruleType{};
  shared_ptr<string> sourceIp{};
  shared_ptr<string> statExpress{};
  shared_ptr<long> status{};
  shared_ptr<long> supportForm{};
  shared_ptr<string> target{};
  shared_ptr<string> templateRuleIds{};
  shared_ptr<long> warnLevel{};

  CreateRuleRequest() {}

  explicit CreateRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (contentCategory) {
      res["ContentCategory"] = boost::any(*contentCategory);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (matchType) {
      res["MatchType"] = boost::any(*matchType);
    }
    if (modelRuleIds) {
      res["ModelRuleIds"] = boost::any(*modelRuleIds);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    if (riskLevelId) {
      res["RiskLevelId"] = boost::any(*riskLevelId);
    }
    if (ruleType) {
      res["RuleType"] = boost::any(*ruleType);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (statExpress) {
      res["StatExpress"] = boost::any(*statExpress);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (supportForm) {
      res["SupportForm"] = boost::any(*supportForm);
    }
    if (target) {
      res["Target"] = boost::any(*target);
    }
    if (templateRuleIds) {
      res["TemplateRuleIds"] = boost::any(*templateRuleIds);
    }
    if (warnLevel) {
      res["WarnLevel"] = boost::any(*warnLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<long>(boost::any_cast<long>(m["Category"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("ContentCategory") != m.end() && !m["ContentCategory"].empty()) {
      contentCategory = make_shared<long>(boost::any_cast<long>(m["ContentCategory"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("MatchType") != m.end() && !m["MatchType"].empty()) {
      matchType = make_shared<long>(boost::any_cast<long>(m["MatchType"]));
    }
    if (m.find("ModelRuleIds") != m.end() && !m["ModelRuleIds"].empty()) {
      modelRuleIds = make_shared<string>(boost::any_cast<string>(m["ModelRuleIds"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<long>(boost::any_cast<long>(m["ProductId"]));
    }
    if (m.find("RiskLevelId") != m.end() && !m["RiskLevelId"].empty()) {
      riskLevelId = make_shared<long>(boost::any_cast<long>(m["RiskLevelId"]));
    }
    if (m.find("RuleType") != m.end() && !m["RuleType"].empty()) {
      ruleType = make_shared<long>(boost::any_cast<long>(m["RuleType"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("StatExpress") != m.end() && !m["StatExpress"].empty()) {
      statExpress = make_shared<string>(boost::any_cast<string>(m["StatExpress"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("SupportForm") != m.end() && !m["SupportForm"].empty()) {
      supportForm = make_shared<long>(boost::any_cast<long>(m["SupportForm"]));
    }
    if (m.find("Target") != m.end() && !m["Target"].empty()) {
      target = make_shared<string>(boost::any_cast<string>(m["Target"]));
    }
    if (m.find("TemplateRuleIds") != m.end() && !m["TemplateRuleIds"].empty()) {
      templateRuleIds = make_shared<string>(boost::any_cast<string>(m["TemplateRuleIds"]));
    }
    if (m.find("WarnLevel") != m.end() && !m["WarnLevel"].empty()) {
      warnLevel = make_shared<long>(boost::any_cast<long>(m["WarnLevel"]));
    }
  }


  virtual ~CreateRuleRequest() = default;
};
class CreateRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> requestId{};

  CreateRuleResponseBody() {}

  explicit CreateRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateRuleResponseBody() = default;
};
class CreateRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateRuleResponseBody> body{};

  CreateRuleResponse() {}

  explicit CreateRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateRuleResponseBody>(model1);
      }
    }
  }


  virtual ~CreateRuleResponse() = default;
};
class CreateScanTaskRequest : public Darabonba::Model {
public:
  shared_ptr<long> dataLimitId{};
  shared_ptr<long> featureType{};
  shared_ptr<long> intervalDay{};
  shared_ptr<string> lang{};
  shared_ptr<string> ossScanPath{};
  shared_ptr<long> resourceType{};
  shared_ptr<long> runHour{};
  shared_ptr<long> runMinute{};
  shared_ptr<long> scanRange{};
  shared_ptr<string> scanRangeContent{};
  shared_ptr<string> sourceIp{};
  shared_ptr<string> taskName{};
  shared_ptr<string> taskUserName{};

  CreateScanTaskRequest() {}

  explicit CreateScanTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataLimitId) {
      res["DataLimitId"] = boost::any(*dataLimitId);
    }
    if (featureType) {
      res["FeatureType"] = boost::any(*featureType);
    }
    if (intervalDay) {
      res["IntervalDay"] = boost::any(*intervalDay);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (ossScanPath) {
      res["OssScanPath"] = boost::any(*ossScanPath);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (runHour) {
      res["RunHour"] = boost::any(*runHour);
    }
    if (runMinute) {
      res["RunMinute"] = boost::any(*runMinute);
    }
    if (scanRange) {
      res["ScanRange"] = boost::any(*scanRange);
    }
    if (scanRangeContent) {
      res["ScanRangeContent"] = boost::any(*scanRangeContent);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    if (taskUserName) {
      res["TaskUserName"] = boost::any(*taskUserName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataLimitId") != m.end() && !m["DataLimitId"].empty()) {
      dataLimitId = make_shared<long>(boost::any_cast<long>(m["DataLimitId"]));
    }
    if (m.find("FeatureType") != m.end() && !m["FeatureType"].empty()) {
      featureType = make_shared<long>(boost::any_cast<long>(m["FeatureType"]));
    }
    if (m.find("IntervalDay") != m.end() && !m["IntervalDay"].empty()) {
      intervalDay = make_shared<long>(boost::any_cast<long>(m["IntervalDay"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("OssScanPath") != m.end() && !m["OssScanPath"].empty()) {
      ossScanPath = make_shared<string>(boost::any_cast<string>(m["OssScanPath"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<long>(boost::any_cast<long>(m["ResourceType"]));
    }
    if (m.find("RunHour") != m.end() && !m["RunHour"].empty()) {
      runHour = make_shared<long>(boost::any_cast<long>(m["RunHour"]));
    }
    if (m.find("RunMinute") != m.end() && !m["RunMinute"].empty()) {
      runMinute = make_shared<long>(boost::any_cast<long>(m["RunMinute"]));
    }
    if (m.find("ScanRange") != m.end() && !m["ScanRange"].empty()) {
      scanRange = make_shared<long>(boost::any_cast<long>(m["ScanRange"]));
    }
    if (m.find("ScanRangeContent") != m.end() && !m["ScanRangeContent"].empty()) {
      scanRangeContent = make_shared<string>(boost::any_cast<string>(m["ScanRangeContent"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
    if (m.find("TaskUserName") != m.end() && !m["TaskUserName"].empty()) {
      taskUserName = make_shared<string>(boost::any_cast<string>(m["TaskUserName"]));
    }
  }


  virtual ~CreateScanTaskRequest() = default;
};
class CreateScanTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> requestId{};

  CreateScanTaskResponseBody() {}

  explicit CreateScanTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateScanTaskResponseBody() = default;
};
class CreateScanTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateScanTaskResponseBody> body{};

  CreateScanTaskResponse() {}

  explicit CreateScanTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateScanTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateScanTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateScanTaskResponse() = default;
};
class CreateSlrRoleRequest : public Darabonba::Model {
public:
  shared_ptr<long> featureType{};
  shared_ptr<string> lang{};
  shared_ptr<string> sourceIp{};

  CreateSlrRoleRequest() {}

  explicit CreateSlrRoleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (featureType) {
      res["FeatureType"] = boost::any(*featureType);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FeatureType") != m.end() && !m["FeatureType"].empty()) {
      featureType = make_shared<long>(boost::any_cast<long>(m["FeatureType"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~CreateSlrRoleRequest() = default;
};
class CreateSlrRoleResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> hasPermission{};
  shared_ptr<string> requestId{};

  CreateSlrRoleResponseBody() {}

  explicit CreateSlrRoleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hasPermission) {
      res["HasPermission"] = boost::any(*hasPermission);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HasPermission") != m.end() && !m["HasPermission"].empty()) {
      hasPermission = make_shared<bool>(boost::any_cast<bool>(m["HasPermission"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateSlrRoleResponseBody() = default;
};
class CreateSlrRoleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateSlrRoleResponseBody> body{};

  CreateSlrRoleResponse() {}

  explicit CreateSlrRoleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateSlrRoleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSlrRoleResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSlrRoleResponse() = default;
};
class DeleteDataLimitRequest : public Darabonba::Model {
public:
  shared_ptr<long> featureType{};
  shared_ptr<long> id{};
  shared_ptr<string> lang{};
  shared_ptr<string> sourceIp{};

  DeleteDataLimitRequest() {}

  explicit DeleteDataLimitRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (featureType) {
      res["FeatureType"] = boost::any(*featureType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FeatureType") != m.end() && !m["FeatureType"].empty()) {
      featureType = make_shared<long>(boost::any_cast<long>(m["FeatureType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~DeleteDataLimitRequest() = default;
};
class DeleteDataLimitResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteDataLimitResponseBody() {}

  explicit DeleteDataLimitResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteDataLimitResponseBody() = default;
};
class DeleteDataLimitResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDataLimitResponseBody> body{};

  DeleteDataLimitResponse() {}

  explicit DeleteDataLimitResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteDataLimitResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDataLimitResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDataLimitResponse() = default;
};
class DeleteRuleRequest : public Darabonba::Model {
public:
  shared_ptr<long> featureType{};
  shared_ptr<long> id{};
  shared_ptr<string> lang{};
  shared_ptr<string> sourceIp{};

  DeleteRuleRequest() {}

  explicit DeleteRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (featureType) {
      res["FeatureType"] = boost::any(*featureType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FeatureType") != m.end() && !m["FeatureType"].empty()) {
      featureType = make_shared<long>(boost::any_cast<long>(m["FeatureType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~DeleteRuleRequest() = default;
};
class DeleteRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteRuleResponseBody() {}

  explicit DeleteRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteRuleResponseBody() = default;
};
class DeleteRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteRuleResponseBody> body{};

  DeleteRuleResponse() {}

  explicit DeleteRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteRuleResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteRuleResponse() = default;
};
class DescribeCategoryTemplateListRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> featureType{};
  shared_ptr<string> lang{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> usageScenario{};

  DescribeCategoryTemplateListRequest() {}

  explicit DescribeCategoryTemplateListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (featureType) {
      res["FeatureType"] = boost::any(*featureType);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (usageScenario) {
      res["UsageScenario"] = boost::any(*usageScenario);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("FeatureType") != m.end() && !m["FeatureType"].empty()) {
      featureType = make_shared<long>(boost::any_cast<long>(m["FeatureType"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("UsageScenario") != m.end() && !m["UsageScenario"].empty()) {
      usageScenario = make_shared<long>(boost::any_cast<long>(m["UsageScenario"]));
    }
  }


  virtual ~DescribeCategoryTemplateListRequest() = default;
};
class DescribeCategoryTemplateListResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<long> currentRiskLevel{};
  shared_ptr<string> description{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<long> maxCategoryLevel{};
  shared_ptr<long> maxRiskLevel{};
  shared_ptr<string> name{};
  shared_ptr<long> status{};
  shared_ptr<long> supportEdit{};
  shared_ptr<long> type{};

  DescribeCategoryTemplateListResponseBodyItems() {}

  explicit DescribeCategoryTemplateListResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentRiskLevel) {
      res["CurrentRiskLevel"] = boost::any(*currentRiskLevel);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (maxCategoryLevel) {
      res["MaxCategoryLevel"] = boost::any(*maxCategoryLevel);
    }
    if (maxRiskLevel) {
      res["MaxRiskLevel"] = boost::any(*maxRiskLevel);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (supportEdit) {
      res["SupportEdit"] = boost::any(*supportEdit);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentRiskLevel") != m.end() && !m["CurrentRiskLevel"].empty()) {
      currentRiskLevel = make_shared<long>(boost::any_cast<long>(m["CurrentRiskLevel"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<long>(boost::any_cast<long>(m["GmtModified"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("MaxCategoryLevel") != m.end() && !m["MaxCategoryLevel"].empty()) {
      maxCategoryLevel = make_shared<long>(boost::any_cast<long>(m["MaxCategoryLevel"]));
    }
    if (m.find("MaxRiskLevel") != m.end() && !m["MaxRiskLevel"].empty()) {
      maxRiskLevel = make_shared<long>(boost::any_cast<long>(m["MaxRiskLevel"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("SupportEdit") != m.end() && !m["SupportEdit"].empty()) {
      supportEdit = make_shared<long>(boost::any_cast<long>(m["SupportEdit"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
  }


  virtual ~DescribeCategoryTemplateListResponseBodyItems() = default;
};
class DescribeCategoryTemplateListResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<vector<DescribeCategoryTemplateListResponseBodyItems>> items{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeCategoryTemplateListResponseBody() {}

  explicit DescribeCategoryTemplateListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
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
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribeCategoryTemplateListResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCategoryTemplateListResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeCategoryTemplateListResponseBodyItems>>(expect1);
      }
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeCategoryTemplateListResponseBody() = default;
};
class DescribeCategoryTemplateListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeCategoryTemplateListResponseBody> body{};

  DescribeCategoryTemplateListResponse() {}

  explicit DescribeCategoryTemplateListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCategoryTemplateListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCategoryTemplateListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCategoryTemplateListResponse() = default;
};
class DescribeCategoryTemplateRuleListRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> featureType{};
  shared_ptr<string> lang{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> riskLevelId{};
  shared_ptr<long> status{};

  DescribeCategoryTemplateRuleListRequest() {}

  explicit DescribeCategoryTemplateRuleListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (featureType) {
      res["FeatureType"] = boost::any(*featureType);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (riskLevelId) {
      res["RiskLevelId"] = boost::any(*riskLevelId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("FeatureType") != m.end() && !m["FeatureType"].empty()) {
      featureType = make_shared<long>(boost::any_cast<long>(m["FeatureType"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RiskLevelId") != m.end() && !m["RiskLevelId"].empty()) {
      riskLevelId = make_shared<long>(boost::any_cast<long>(m["RiskLevelId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~DescribeCategoryTemplateRuleListRequest() = default;
};
class DescribeCategoryTemplateRuleListResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<long> id{};
  shared_ptr<string> identificationRuleIds{};
  shared_ptr<string> identificationScope{};
  shared_ptr<string> name{};
  shared_ptr<long> riskLevelId{};
  shared_ptr<long> status{};

  DescribeCategoryTemplateRuleListResponseBodyItems() {}

  explicit DescribeCategoryTemplateRuleListResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (identificationRuleIds) {
      res["IdentificationRuleIds"] = boost::any(*identificationRuleIds);
    }
    if (identificationScope) {
      res["IdentificationScope"] = boost::any(*identificationScope);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (riskLevelId) {
      res["RiskLevelId"] = boost::any(*riskLevelId);
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
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("IdentificationRuleIds") != m.end() && !m["IdentificationRuleIds"].empty()) {
      identificationRuleIds = make_shared<string>(boost::any_cast<string>(m["IdentificationRuleIds"]));
    }
    if (m.find("IdentificationScope") != m.end() && !m["IdentificationScope"].empty()) {
      identificationScope = make_shared<string>(boost::any_cast<string>(m["IdentificationScope"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RiskLevelId") != m.end() && !m["RiskLevelId"].empty()) {
      riskLevelId = make_shared<long>(boost::any_cast<long>(m["RiskLevelId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~DescribeCategoryTemplateRuleListResponseBodyItems() = default;
};
class DescribeCategoryTemplateRuleListResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<vector<DescribeCategoryTemplateRuleListResponseBodyItems>> items{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeCategoryTemplateRuleListResponseBody() {}

  explicit DescribeCategoryTemplateRuleListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
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
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribeCategoryTemplateRuleListResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCategoryTemplateRuleListResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeCategoryTemplateRuleListResponseBodyItems>>(expect1);
      }
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeCategoryTemplateRuleListResponseBody() = default;
};
class DescribeCategoryTemplateRuleListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeCategoryTemplateRuleListResponseBody> body{};

  DescribeCategoryTemplateRuleListResponse() {}

  explicit DescribeCategoryTemplateRuleListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCategoryTemplateRuleListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCategoryTemplateRuleListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCategoryTemplateRuleListResponse() = default;
};
class DescribeColumnsRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<string> engineType{};
  shared_ptr<long> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> lang{};
  shared_ptr<string> modelTagId{};
  shared_ptr<string> name{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> productCode{};
  shared_ptr<string> productId{};
  shared_ptr<long> riskLevelId{};
  shared_ptr<long> ruleId{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> sensLevelName{};
  shared_ptr<long> tableId{};
  shared_ptr<string> tableName{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateRuleId{};

  DescribeColumnsRequest() {}

  explicit DescribeColumnsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (engineType) {
      res["EngineType"] = boost::any(*engineType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (modelTagId) {
      res["ModelTagId"] = boost::any(*modelTagId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    if (riskLevelId) {
      res["RiskLevelId"] = boost::any(*riskLevelId);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (sensLevelName) {
      res["SensLevelName"] = boost::any(*sensLevelName);
    }
    if (tableId) {
      res["TableId"] = boost::any(*tableId);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateRuleId) {
      res["TemplateRuleId"] = boost::any(*templateRuleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("EngineType") != m.end() && !m["EngineType"].empty()) {
      engineType = make_shared<string>(boost::any_cast<string>(m["EngineType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<long>(boost::any_cast<long>(m["InstanceId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("ModelTagId") != m.end() && !m["ModelTagId"].empty()) {
      modelTagId = make_shared<string>(boost::any_cast<string>(m["ModelTagId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["ProductId"]));
    }
    if (m.find("RiskLevelId") != m.end() && !m["RiskLevelId"].empty()) {
      riskLevelId = make_shared<long>(boost::any_cast<long>(m["RiskLevelId"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("SensLevelName") != m.end() && !m["SensLevelName"].empty()) {
      sensLevelName = make_shared<string>(boost::any_cast<string>(m["SensLevelName"]));
    }
    if (m.find("TableId") != m.end() && !m["TableId"].empty()) {
      tableId = make_shared<long>(boost::any_cast<long>(m["TableId"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateRuleId") != m.end() && !m["TemplateRuleId"].empty()) {
      templateRuleId = make_shared<string>(boost::any_cast<string>(m["TemplateRuleId"]));
    }
  }


  virtual ~DescribeColumnsRequest() = default;
};
class DescribeColumnsResponseBodyItemsModelTags : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> name{};

  DescribeColumnsResponseBodyItemsModelTags() {}

  explicit DescribeColumnsResponseBodyItemsModelTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~DescribeColumnsResponseBodyItemsModelTags() = default;
};
class DescribeColumnsResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<long> creationTime{};
  shared_ptr<string> dataType{};
  shared_ptr<string> engineType{};
  shared_ptr<string> id{};
  shared_ptr<long> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<long> maskingStatus{};
  shared_ptr<vector<DescribeColumnsResponseBodyItemsModelTags>> modelTags{};
  shared_ptr<string> name{};
  shared_ptr<string> odpsRiskLevelName{};
  shared_ptr<long> odpsRiskLevelValue{};
  shared_ptr<string> productCode{};
  shared_ptr<long> productId{};
  shared_ptr<string> regionId{};
  shared_ptr<long> revisionId{};
  shared_ptr<long> revisionStatus{};
  shared_ptr<long> riskLevelId{};
  shared_ptr<string> riskLevelName{};
  shared_ptr<long> ruleId{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> sensLevelName{};
  shared_ptr<bool> sensitive{};
  shared_ptr<long> tableId{};
  shared_ptr<string> tableName{};

  DescribeColumnsResponseBodyItems() {}

  explicit DescribeColumnsResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (engineType) {
      res["EngineType"] = boost::any(*engineType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (maskingStatus) {
      res["MaskingStatus"] = boost::any(*maskingStatus);
    }
    if (modelTags) {
      vector<boost::any> temp1;
      for(auto item1:*modelTags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ModelTags"] = boost::any(temp1);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (odpsRiskLevelName) {
      res["OdpsRiskLevelName"] = boost::any(*odpsRiskLevelName);
    }
    if (odpsRiskLevelValue) {
      res["OdpsRiskLevelValue"] = boost::any(*odpsRiskLevelValue);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (revisionId) {
      res["RevisionId"] = boost::any(*revisionId);
    }
    if (revisionStatus) {
      res["RevisionStatus"] = boost::any(*revisionStatus);
    }
    if (riskLevelId) {
      res["RiskLevelId"] = boost::any(*riskLevelId);
    }
    if (riskLevelName) {
      res["RiskLevelName"] = boost::any(*riskLevelName);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (sensLevelName) {
      res["SensLevelName"] = boost::any(*sensLevelName);
    }
    if (sensitive) {
      res["Sensitive"] = boost::any(*sensitive);
    }
    if (tableId) {
      res["TableId"] = boost::any(*tableId);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<long>(boost::any_cast<long>(m["CreationTime"]));
    }
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
    if (m.find("EngineType") != m.end() && !m["EngineType"].empty()) {
      engineType = make_shared<string>(boost::any_cast<string>(m["EngineType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<long>(boost::any_cast<long>(m["InstanceId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("MaskingStatus") != m.end() && !m["MaskingStatus"].empty()) {
      maskingStatus = make_shared<long>(boost::any_cast<long>(m["MaskingStatus"]));
    }
    if (m.find("ModelTags") != m.end() && !m["ModelTags"].empty()) {
      if (typeid(vector<boost::any>) == m["ModelTags"].type()) {
        vector<DescribeColumnsResponseBodyItemsModelTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ModelTags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeColumnsResponseBodyItemsModelTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        modelTags = make_shared<vector<DescribeColumnsResponseBodyItemsModelTags>>(expect1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OdpsRiskLevelName") != m.end() && !m["OdpsRiskLevelName"].empty()) {
      odpsRiskLevelName = make_shared<string>(boost::any_cast<string>(m["OdpsRiskLevelName"]));
    }
    if (m.find("OdpsRiskLevelValue") != m.end() && !m["OdpsRiskLevelValue"].empty()) {
      odpsRiskLevelValue = make_shared<long>(boost::any_cast<long>(m["OdpsRiskLevelValue"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<long>(boost::any_cast<long>(m["ProductId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RevisionId") != m.end() && !m["RevisionId"].empty()) {
      revisionId = make_shared<long>(boost::any_cast<long>(m["RevisionId"]));
    }
    if (m.find("RevisionStatus") != m.end() && !m["RevisionStatus"].empty()) {
      revisionStatus = make_shared<long>(boost::any_cast<long>(m["RevisionStatus"]));
    }
    if (m.find("RiskLevelId") != m.end() && !m["RiskLevelId"].empty()) {
      riskLevelId = make_shared<long>(boost::any_cast<long>(m["RiskLevelId"]));
    }
    if (m.find("RiskLevelName") != m.end() && !m["RiskLevelName"].empty()) {
      riskLevelName = make_shared<string>(boost::any_cast<string>(m["RiskLevelName"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("SensLevelName") != m.end() && !m["SensLevelName"].empty()) {
      sensLevelName = make_shared<string>(boost::any_cast<string>(m["SensLevelName"]));
    }
    if (m.find("Sensitive") != m.end() && !m["Sensitive"].empty()) {
      sensitive = make_shared<bool>(boost::any_cast<bool>(m["Sensitive"]));
    }
    if (m.find("TableId") != m.end() && !m["TableId"].empty()) {
      tableId = make_shared<long>(boost::any_cast<long>(m["TableId"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
  }


  virtual ~DescribeColumnsResponseBodyItems() = default;
};
class DescribeColumnsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<vector<DescribeColumnsResponseBodyItems>> items{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeColumnsResponseBody() {}

  explicit DescribeColumnsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
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
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribeColumnsResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeColumnsResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeColumnsResponseBodyItems>>(expect1);
      }
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeColumnsResponseBody() = default;
};
class DescribeColumnsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeColumnsResponseBody> body{};

  DescribeColumnsResponse() {}

  explicit DescribeColumnsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeColumnsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeColumnsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeColumnsResponse() = default;
};
class DescribeColumnsV2Request : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<string> engineType{};
  shared_ptr<long> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> lang{};
  shared_ptr<string> name{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> productCode{};
  shared_ptr<long> riskLevelId{};
  shared_ptr<long> ruleId{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> sensLevelName{};
  shared_ptr<string> tableId{};
  shared_ptr<string> tableName{};

  DescribeColumnsV2Request() {}

  explicit DescribeColumnsV2Request(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (engineType) {
      res["EngineType"] = boost::any(*engineType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (riskLevelId) {
      res["RiskLevelId"] = boost::any(*riskLevelId);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (sensLevelName) {
      res["SensLevelName"] = boost::any(*sensLevelName);
    }
    if (tableId) {
      res["TableId"] = boost::any(*tableId);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("EngineType") != m.end() && !m["EngineType"].empty()) {
      engineType = make_shared<string>(boost::any_cast<string>(m["EngineType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<long>(boost::any_cast<long>(m["InstanceId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("RiskLevelId") != m.end() && !m["RiskLevelId"].empty()) {
      riskLevelId = make_shared<long>(boost::any_cast<long>(m["RiskLevelId"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("SensLevelName") != m.end() && !m["SensLevelName"].empty()) {
      sensLevelName = make_shared<string>(boost::any_cast<string>(m["SensLevelName"]));
    }
    if (m.find("TableId") != m.end() && !m["TableId"].empty()) {
      tableId = make_shared<string>(boost::any_cast<string>(m["TableId"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
  }


  virtual ~DescribeColumnsV2Request() = default;
};
class DescribeColumnsV2ResponseBodyItemsModelTags : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> name{};

  DescribeColumnsV2ResponseBodyItemsModelTags() {}

  explicit DescribeColumnsV2ResponseBodyItemsModelTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~DescribeColumnsV2ResponseBodyItemsModelTags() = default;
};
class DescribeColumnsV2ResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<long> creationTime{};
  shared_ptr<string> dataType{};
  shared_ptr<string> engineType{};
  shared_ptr<string> id{};
  shared_ptr<long> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<long> maskingStatus{};
  shared_ptr<vector<DescribeColumnsV2ResponseBodyItemsModelTags>> modelTags{};
  shared_ptr<string> name{};
  shared_ptr<string> odpsRiskLevelName{};
  shared_ptr<long> odpsRiskLevelValue{};
  shared_ptr<string> productCode{};
  shared_ptr<long> productId{};
  shared_ptr<string> regionId{};
  shared_ptr<long> revisionId{};
  shared_ptr<long> revisionStatus{};
  shared_ptr<long> riskLevelId{};
  shared_ptr<string> riskLevelName{};
  shared_ptr<long> ruleId{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> sensLevelName{};
  shared_ptr<bool> sensitive{};
  shared_ptr<long> tableId{};
  shared_ptr<string> tableName{};

  DescribeColumnsV2ResponseBodyItems() {}

  explicit DescribeColumnsV2ResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (engineType) {
      res["EngineType"] = boost::any(*engineType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (maskingStatus) {
      res["MaskingStatus"] = boost::any(*maskingStatus);
    }
    if (modelTags) {
      vector<boost::any> temp1;
      for(auto item1:*modelTags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ModelTags"] = boost::any(temp1);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (odpsRiskLevelName) {
      res["OdpsRiskLevelName"] = boost::any(*odpsRiskLevelName);
    }
    if (odpsRiskLevelValue) {
      res["OdpsRiskLevelValue"] = boost::any(*odpsRiskLevelValue);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (revisionId) {
      res["RevisionId"] = boost::any(*revisionId);
    }
    if (revisionStatus) {
      res["RevisionStatus"] = boost::any(*revisionStatus);
    }
    if (riskLevelId) {
      res["RiskLevelId"] = boost::any(*riskLevelId);
    }
    if (riskLevelName) {
      res["RiskLevelName"] = boost::any(*riskLevelName);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (sensLevelName) {
      res["SensLevelName"] = boost::any(*sensLevelName);
    }
    if (sensitive) {
      res["Sensitive"] = boost::any(*sensitive);
    }
    if (tableId) {
      res["TableId"] = boost::any(*tableId);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<long>(boost::any_cast<long>(m["CreationTime"]));
    }
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
    if (m.find("EngineType") != m.end() && !m["EngineType"].empty()) {
      engineType = make_shared<string>(boost::any_cast<string>(m["EngineType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<long>(boost::any_cast<long>(m["InstanceId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("MaskingStatus") != m.end() && !m["MaskingStatus"].empty()) {
      maskingStatus = make_shared<long>(boost::any_cast<long>(m["MaskingStatus"]));
    }
    if (m.find("ModelTags") != m.end() && !m["ModelTags"].empty()) {
      if (typeid(vector<boost::any>) == m["ModelTags"].type()) {
        vector<DescribeColumnsV2ResponseBodyItemsModelTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ModelTags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeColumnsV2ResponseBodyItemsModelTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        modelTags = make_shared<vector<DescribeColumnsV2ResponseBodyItemsModelTags>>(expect1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OdpsRiskLevelName") != m.end() && !m["OdpsRiskLevelName"].empty()) {
      odpsRiskLevelName = make_shared<string>(boost::any_cast<string>(m["OdpsRiskLevelName"]));
    }
    if (m.find("OdpsRiskLevelValue") != m.end() && !m["OdpsRiskLevelValue"].empty()) {
      odpsRiskLevelValue = make_shared<long>(boost::any_cast<long>(m["OdpsRiskLevelValue"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<long>(boost::any_cast<long>(m["ProductId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RevisionId") != m.end() && !m["RevisionId"].empty()) {
      revisionId = make_shared<long>(boost::any_cast<long>(m["RevisionId"]));
    }
    if (m.find("RevisionStatus") != m.end() && !m["RevisionStatus"].empty()) {
      revisionStatus = make_shared<long>(boost::any_cast<long>(m["RevisionStatus"]));
    }
    if (m.find("RiskLevelId") != m.end() && !m["RiskLevelId"].empty()) {
      riskLevelId = make_shared<long>(boost::any_cast<long>(m["RiskLevelId"]));
    }
    if (m.find("RiskLevelName") != m.end() && !m["RiskLevelName"].empty()) {
      riskLevelName = make_shared<string>(boost::any_cast<string>(m["RiskLevelName"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("SensLevelName") != m.end() && !m["SensLevelName"].empty()) {
      sensLevelName = make_shared<string>(boost::any_cast<string>(m["SensLevelName"]));
    }
    if (m.find("Sensitive") != m.end() && !m["Sensitive"].empty()) {
      sensitive = make_shared<bool>(boost::any_cast<bool>(m["Sensitive"]));
    }
    if (m.find("TableId") != m.end() && !m["TableId"].empty()) {
      tableId = make_shared<long>(boost::any_cast<long>(m["TableId"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
  }


  virtual ~DescribeColumnsV2ResponseBodyItems() = default;
};
class DescribeColumnsV2ResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<vector<DescribeColumnsV2ResponseBodyItems>> items{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeColumnsV2ResponseBody() {}

  explicit DescribeColumnsV2ResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
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
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribeColumnsV2ResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeColumnsV2ResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeColumnsV2ResponseBodyItems>>(expect1);
      }
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeColumnsV2ResponseBody() = default;
};
class DescribeColumnsV2Response : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeColumnsV2ResponseBody> body{};

  DescribeColumnsV2Response() {}

  explicit DescribeColumnsV2Response(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeColumnsV2ResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeColumnsV2ResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeColumnsV2Response() = default;
};
class DescribeConfigsRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};

  DescribeConfigsRequest() {}

  explicit DescribeConfigsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
  }


  virtual ~DescribeConfigsRequest() = default;
};
class DescribeConfigsResponseBodyConfigList : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> defaultValue{};
  shared_ptr<string> description{};
  shared_ptr<long> id{};
  shared_ptr<string> value{};

  DescribeConfigsResponseBodyConfigList() {}

  explicit DescribeConfigsResponseBodyConfigList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (defaultValue) {
      res["DefaultValue"] = boost::any(*defaultValue);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DefaultValue") != m.end() && !m["DefaultValue"].empty()) {
      defaultValue = make_shared<string>(boost::any_cast<string>(m["DefaultValue"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeConfigsResponseBodyConfigList() = default;
};
class DescribeConfigsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeConfigsResponseBodyConfigList>> configList{};
  shared_ptr<string> requestId{};

  DescribeConfigsResponseBody() {}

  explicit DescribeConfigsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configList) {
      vector<boost::any> temp1;
      for(auto item1:*configList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConfigList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigList") != m.end() && !m["ConfigList"].empty()) {
      if (typeid(vector<boost::any>) == m["ConfigList"].type()) {
        vector<DescribeConfigsResponseBodyConfigList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConfigList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeConfigsResponseBodyConfigList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configList = make_shared<vector<DescribeConfigsResponseBodyConfigList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeConfigsResponseBody() = default;
};
class DescribeConfigsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeConfigsResponseBody> body{};

  DescribeConfigsResponse() {}

  explicit DescribeConfigsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeConfigsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeConfigsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeConfigsResponse() = default;
};
class DescribeDataAssetsRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<string> lang{};
  shared_ptr<string> name{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> rangeId{};
  shared_ptr<string> riskLevels{};
  shared_ptr<long> ruleId{};

  DescribeDataAssetsRequest() {}

  explicit DescribeDataAssetsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (rangeId) {
      res["RangeId"] = boost::any(*rangeId);
    }
    if (riskLevels) {
      res["RiskLevels"] = boost::any(*riskLevels);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RangeId") != m.end() && !m["RangeId"].empty()) {
      rangeId = make_shared<long>(boost::any_cast<long>(m["RangeId"]));
    }
    if (m.find("RiskLevels") != m.end() && !m["RiskLevels"].empty()) {
      riskLevels = make_shared<string>(boost::any_cast<string>(m["RiskLevels"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
  }


  virtual ~DescribeDataAssetsRequest() = default;
};
class DescribeDataAssetsResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<string> acl{};
  shared_ptr<long> creationTime{};
  shared_ptr<string> dataType{};
  shared_ptr<string> id{};
  shared_ptr<bool> labelsec{};
  shared_ptr<string> name{};
  shared_ptr<string> objectKey{};
  shared_ptr<string> odpsRiskLevelName{};
  shared_ptr<string> owner{};
  shared_ptr<string> productCode{};
  shared_ptr<string> productId{};
  shared_ptr<bool> protection{};
  shared_ptr<long> riskLevelId{};
  shared_ptr<string> riskLevelName{};
  shared_ptr<string> ruleName{};
  shared_ptr<bool> sensitive{};
  shared_ptr<long> sensitiveCount{};
  shared_ptr<string> sensitiveRatio{};
  shared_ptr<long> totalCount{};

  DescribeDataAssetsResponseBodyItems() {}

  explicit DescribeDataAssetsResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acl) {
      res["Acl"] = boost::any(*acl);
    }
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (labelsec) {
      res["Labelsec"] = boost::any(*labelsec);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (objectKey) {
      res["ObjectKey"] = boost::any(*objectKey);
    }
    if (odpsRiskLevelName) {
      res["OdpsRiskLevelName"] = boost::any(*odpsRiskLevelName);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    if (protection) {
      res["Protection"] = boost::any(*protection);
    }
    if (riskLevelId) {
      res["RiskLevelId"] = boost::any(*riskLevelId);
    }
    if (riskLevelName) {
      res["RiskLevelName"] = boost::any(*riskLevelName);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (sensitive) {
      res["Sensitive"] = boost::any(*sensitive);
    }
    if (sensitiveCount) {
      res["SensitiveCount"] = boost::any(*sensitiveCount);
    }
    if (sensitiveRatio) {
      res["SensitiveRatio"] = boost::any(*sensitiveRatio);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Acl") != m.end() && !m["Acl"].empty()) {
      acl = make_shared<string>(boost::any_cast<string>(m["Acl"]));
    }
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<long>(boost::any_cast<long>(m["CreationTime"]));
    }
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Labelsec") != m.end() && !m["Labelsec"].empty()) {
      labelsec = make_shared<bool>(boost::any_cast<bool>(m["Labelsec"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ObjectKey") != m.end() && !m["ObjectKey"].empty()) {
      objectKey = make_shared<string>(boost::any_cast<string>(m["ObjectKey"]));
    }
    if (m.find("OdpsRiskLevelName") != m.end() && !m["OdpsRiskLevelName"].empty()) {
      odpsRiskLevelName = make_shared<string>(boost::any_cast<string>(m["OdpsRiskLevelName"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["ProductId"]));
    }
    if (m.find("Protection") != m.end() && !m["Protection"].empty()) {
      protection = make_shared<bool>(boost::any_cast<bool>(m["Protection"]));
    }
    if (m.find("RiskLevelId") != m.end() && !m["RiskLevelId"].empty()) {
      riskLevelId = make_shared<long>(boost::any_cast<long>(m["RiskLevelId"]));
    }
    if (m.find("RiskLevelName") != m.end() && !m["RiskLevelName"].empty()) {
      riskLevelName = make_shared<string>(boost::any_cast<string>(m["RiskLevelName"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("Sensitive") != m.end() && !m["Sensitive"].empty()) {
      sensitive = make_shared<bool>(boost::any_cast<bool>(m["Sensitive"]));
    }
    if (m.find("SensitiveCount") != m.end() && !m["SensitiveCount"].empty()) {
      sensitiveCount = make_shared<long>(boost::any_cast<long>(m["SensitiveCount"]));
    }
    if (m.find("SensitiveRatio") != m.end() && !m["SensitiveRatio"].empty()) {
      sensitiveRatio = make_shared<string>(boost::any_cast<string>(m["SensitiveRatio"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeDataAssetsResponseBodyItems() = default;
};
class DescribeDataAssetsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<vector<DescribeDataAssetsResponseBodyItems>> items{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeDataAssetsResponseBody() {}

  explicit DescribeDataAssetsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
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
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribeDataAssetsResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDataAssetsResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeDataAssetsResponseBodyItems>>(expect1);
      }
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeDataAssetsResponseBody() = default;
};
class DescribeDataAssetsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDataAssetsResponseBody> body{};

  DescribeDataAssetsResponse() {}

  explicit DescribeDataAssetsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDataAssetsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDataAssetsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDataAssetsResponse() = default;
};
class DescribeDataLimitDetailRequest : public Darabonba::Model {
public:
  shared_ptr<long> featureType{};
  shared_ptr<long> id{};
  shared_ptr<string> lang{};
  shared_ptr<long> networkType{};

  DescribeDataLimitDetailRequest() {}

  explicit DescribeDataLimitDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (featureType) {
      res["FeatureType"] = boost::any(*featureType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FeatureType") != m.end() && !m["FeatureType"].empty()) {
      featureType = make_shared<long>(boost::any_cast<long>(m["FeatureType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<long>(boost::any_cast<long>(m["NetworkType"]));
    }
  }


  virtual ~DescribeDataLimitDetailRequest() = default;
};
class DescribeDataLimitDetailResponseBodyDataLimit : public Darabonba::Model {
public:
  shared_ptr<long> checkStatus{};
  shared_ptr<string> checkStatusName{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> id{};
  shared_ptr<string> localName{};
  shared_ptr<string> parentId{};
  shared_ptr<long> port{};
  shared_ptr<string> regionId{};
  shared_ptr<long> resourceType{};
  shared_ptr<string> resourceTypeCode{};
  shared_ptr<string> userName{};

  DescribeDataLimitDetailResponseBodyDataLimit() {}

  explicit DescribeDataLimitDetailResponseBodyDataLimit(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkStatus) {
      res["CheckStatus"] = boost::any(*checkStatus);
    }
    if (checkStatusName) {
      res["CheckStatusName"] = boost::any(*checkStatusName);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (localName) {
      res["LocalName"] = boost::any(*localName);
    }
    if (parentId) {
      res["ParentId"] = boost::any(*parentId);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (resourceTypeCode) {
      res["ResourceTypeCode"] = boost::any(*resourceTypeCode);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckStatus") != m.end() && !m["CheckStatus"].empty()) {
      checkStatus = make_shared<long>(boost::any_cast<long>(m["CheckStatus"]));
    }
    if (m.find("CheckStatusName") != m.end() && !m["CheckStatusName"].empty()) {
      checkStatusName = make_shared<string>(boost::any_cast<string>(m["CheckStatusName"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("LocalName") != m.end() && !m["LocalName"].empty()) {
      localName = make_shared<string>(boost::any_cast<string>(m["LocalName"]));
    }
    if (m.find("ParentId") != m.end() && !m["ParentId"].empty()) {
      parentId = make_shared<string>(boost::any_cast<string>(m["ParentId"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<long>(boost::any_cast<long>(m["ResourceType"]));
    }
    if (m.find("ResourceTypeCode") != m.end() && !m["ResourceTypeCode"].empty()) {
      resourceTypeCode = make_shared<string>(boost::any_cast<string>(m["ResourceTypeCode"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~DescribeDataLimitDetailResponseBodyDataLimit() = default;
};
class DescribeDataLimitDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeDataLimitDetailResponseBodyDataLimit> dataLimit{};
  shared_ptr<string> requestId{};

  DescribeDataLimitDetailResponseBody() {}

  explicit DescribeDataLimitDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataLimit) {
      res["DataLimit"] = dataLimit ? boost::any(dataLimit->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataLimit") != m.end() && !m["DataLimit"].empty()) {
      if (typeid(map<string, boost::any>) == m["DataLimit"].type()) {
        DescribeDataLimitDetailResponseBodyDataLimit model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DataLimit"]));
        dataLimit = make_shared<DescribeDataLimitDetailResponseBodyDataLimit>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeDataLimitDetailResponseBody() = default;
};
class DescribeDataLimitDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDataLimitDetailResponseBody> body{};

  DescribeDataLimitDetailResponse() {}

  explicit DescribeDataLimitDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDataLimitDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDataLimitDetailResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDataLimitDetailResponse() = default;
};
class DescribeDataLimitSetRequest : public Darabonba::Model {
public:
  shared_ptr<long> featureType{};
  shared_ptr<string> lang{};
  shared_ptr<string> parentId{};
  shared_ptr<string> regionType{};
  shared_ptr<long> resourceType{};

  DescribeDataLimitSetRequest() {}

  explicit DescribeDataLimitSetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (featureType) {
      res["FeatureType"] = boost::any(*featureType);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (parentId) {
      res["ParentId"] = boost::any(*parentId);
    }
    if (regionType) {
      res["RegionType"] = boost::any(*regionType);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FeatureType") != m.end() && !m["FeatureType"].empty()) {
      featureType = make_shared<long>(boost::any_cast<long>(m["FeatureType"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("ParentId") != m.end() && !m["ParentId"].empty()) {
      parentId = make_shared<string>(boost::any_cast<string>(m["ParentId"]));
    }
    if (m.find("RegionType") != m.end() && !m["RegionType"].empty()) {
      regionType = make_shared<string>(boost::any_cast<string>(m["RegionType"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<long>(boost::any_cast<long>(m["ResourceType"]));
    }
  }


  virtual ~DescribeDataLimitSetRequest() = default;
};
class DescribeDataLimitSetResponseBodyDataLimitSetDataLimitList : public Darabonba::Model {
public:
  shared_ptr<long> checkStatus{};
  shared_ptr<string> checkStatusName{};
  shared_ptr<string> connector{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> id{};
  shared_ptr<string> localName{};
  shared_ptr<string> parentId{};
  shared_ptr<string> regionId{};
  shared_ptr<long> resourceType{};
  shared_ptr<string> resourceTypeCode{};
  shared_ptr<string> userName{};

  DescribeDataLimitSetResponseBodyDataLimitSetDataLimitList() {}

  explicit DescribeDataLimitSetResponseBodyDataLimitSetDataLimitList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkStatus) {
      res["CheckStatus"] = boost::any(*checkStatus);
    }
    if (checkStatusName) {
      res["CheckStatusName"] = boost::any(*checkStatusName);
    }
    if (connector) {
      res["Connector"] = boost::any(*connector);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (localName) {
      res["LocalName"] = boost::any(*localName);
    }
    if (parentId) {
      res["ParentId"] = boost::any(*parentId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (resourceTypeCode) {
      res["ResourceTypeCode"] = boost::any(*resourceTypeCode);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckStatus") != m.end() && !m["CheckStatus"].empty()) {
      checkStatus = make_shared<long>(boost::any_cast<long>(m["CheckStatus"]));
    }
    if (m.find("CheckStatusName") != m.end() && !m["CheckStatusName"].empty()) {
      checkStatusName = make_shared<string>(boost::any_cast<string>(m["CheckStatusName"]));
    }
    if (m.find("Connector") != m.end() && !m["Connector"].empty()) {
      connector = make_shared<string>(boost::any_cast<string>(m["Connector"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("LocalName") != m.end() && !m["LocalName"].empty()) {
      localName = make_shared<string>(boost::any_cast<string>(m["LocalName"]));
    }
    if (m.find("ParentId") != m.end() && !m["ParentId"].empty()) {
      parentId = make_shared<string>(boost::any_cast<string>(m["ParentId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<long>(boost::any_cast<long>(m["ResourceType"]));
    }
    if (m.find("ResourceTypeCode") != m.end() && !m["ResourceTypeCode"].empty()) {
      resourceTypeCode = make_shared<string>(boost::any_cast<string>(m["ResourceTypeCode"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~DescribeDataLimitSetResponseBodyDataLimitSetDataLimitList() = default;
};
class DescribeDataLimitSetResponseBodyDataLimitSetOssBucketList : public Darabonba::Model {
public:
  shared_ptr<string> bucketName{};
  shared_ptr<string> regionId{};

  DescribeDataLimitSetResponseBodyDataLimitSetOssBucketList() {}

  explicit DescribeDataLimitSetResponseBodyDataLimitSetOssBucketList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucketName) {
      res["BucketName"] = boost::any(*bucketName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BucketName") != m.end() && !m["BucketName"].empty()) {
      bucketName = make_shared<string>(boost::any_cast<string>(m["BucketName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeDataLimitSetResponseBodyDataLimitSetOssBucketList() = default;
};
class DescribeDataLimitSetResponseBodyDataLimitSetRegionList : public Darabonba::Model {
public:
  shared_ptr<string> localName{};
  shared_ptr<string> regionId{};

  DescribeDataLimitSetResponseBodyDataLimitSetRegionList() {}

  explicit DescribeDataLimitSetResponseBodyDataLimitSetRegionList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (localName) {
      res["LocalName"] = boost::any(*localName);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeDataLimitSetResponseBodyDataLimitSetRegionList() = default;
};
class DescribeDataLimitSetResponseBodyDataLimitSet : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDataLimitSetResponseBodyDataLimitSetDataLimitList>> dataLimitList{};
  shared_ptr<vector<DescribeDataLimitSetResponseBodyDataLimitSetOssBucketList>> ossBucketList{};
  shared_ptr<vector<DescribeDataLimitSetResponseBodyDataLimitSetRegionList>> regionList{};
  shared_ptr<long> resourceType{};
  shared_ptr<string> resourceTypeCode{};
  shared_ptr<long> totalCount{};

  DescribeDataLimitSetResponseBodyDataLimitSet() {}

  explicit DescribeDataLimitSetResponseBodyDataLimitSet(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataLimitList) {
      vector<boost::any> temp1;
      for(auto item1:*dataLimitList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataLimitList"] = boost::any(temp1);
    }
    if (ossBucketList) {
      vector<boost::any> temp1;
      for(auto item1:*ossBucketList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OssBucketList"] = boost::any(temp1);
    }
    if (regionList) {
      vector<boost::any> temp1;
      for(auto item1:*regionList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RegionList"] = boost::any(temp1);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (resourceTypeCode) {
      res["ResourceTypeCode"] = boost::any(*resourceTypeCode);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataLimitList") != m.end() && !m["DataLimitList"].empty()) {
      if (typeid(vector<boost::any>) == m["DataLimitList"].type()) {
        vector<DescribeDataLimitSetResponseBodyDataLimitSetDataLimitList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataLimitList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDataLimitSetResponseBodyDataLimitSetDataLimitList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataLimitList = make_shared<vector<DescribeDataLimitSetResponseBodyDataLimitSetDataLimitList>>(expect1);
      }
    }
    if (m.find("OssBucketList") != m.end() && !m["OssBucketList"].empty()) {
      if (typeid(vector<boost::any>) == m["OssBucketList"].type()) {
        vector<DescribeDataLimitSetResponseBodyDataLimitSetOssBucketList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OssBucketList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDataLimitSetResponseBodyDataLimitSetOssBucketList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ossBucketList = make_shared<vector<DescribeDataLimitSetResponseBodyDataLimitSetOssBucketList>>(expect1);
      }
    }
    if (m.find("RegionList") != m.end() && !m["RegionList"].empty()) {
      if (typeid(vector<boost::any>) == m["RegionList"].type()) {
        vector<DescribeDataLimitSetResponseBodyDataLimitSetRegionList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RegionList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDataLimitSetResponseBodyDataLimitSetRegionList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        regionList = make_shared<vector<DescribeDataLimitSetResponseBodyDataLimitSetRegionList>>(expect1);
      }
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<long>(boost::any_cast<long>(m["ResourceType"]));
    }
    if (m.find("ResourceTypeCode") != m.end() && !m["ResourceTypeCode"].empty()) {
      resourceTypeCode = make_shared<string>(boost::any_cast<string>(m["ResourceTypeCode"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeDataLimitSetResponseBodyDataLimitSet() = default;
};
class DescribeDataLimitSetResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeDataLimitSetResponseBodyDataLimitSet> dataLimitSet{};
  shared_ptr<string> requestId{};

  DescribeDataLimitSetResponseBody() {}

  explicit DescribeDataLimitSetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataLimitSet) {
      res["DataLimitSet"] = dataLimitSet ? boost::any(dataLimitSet->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataLimitSet") != m.end() && !m["DataLimitSet"].empty()) {
      if (typeid(map<string, boost::any>) == m["DataLimitSet"].type()) {
        DescribeDataLimitSetResponseBodyDataLimitSet model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DataLimitSet"]));
        dataLimitSet = make_shared<DescribeDataLimitSetResponseBodyDataLimitSet>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeDataLimitSetResponseBody() = default;
};
class DescribeDataLimitSetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDataLimitSetResponseBody> body{};

  DescribeDataLimitSetResponse() {}

  explicit DescribeDataLimitSetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDataLimitSetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDataLimitSetResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDataLimitSetResponse() = default;
};
class DescribeDataLimitsRequest : public Darabonba::Model {
public:
  shared_ptr<long> auditStatus{};
  shared_ptr<long> checkStatus{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> datamaskStatus{};
  shared_ptr<long> enable{};
  shared_ptr<long> endTime{};
  shared_ptr<string> engineType{};
  shared_ptr<long> featureType{};
  shared_ptr<string> lang{};
  shared_ptr<long> memberAccount{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> parentId{};
  shared_ptr<long> resourceType{};
  shared_ptr<string> serviceRegionId{};
  shared_ptr<long> startTime{};

  DescribeDataLimitsRequest() {}

  explicit DescribeDataLimitsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auditStatus) {
      res["AuditStatus"] = boost::any(*auditStatus);
    }
    if (checkStatus) {
      res["CheckStatus"] = boost::any(*checkStatus);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (datamaskStatus) {
      res["DatamaskStatus"] = boost::any(*datamaskStatus);
    }
    if (enable) {
      res["Enable"] = boost::any(*enable);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (engineType) {
      res["EngineType"] = boost::any(*engineType);
    }
    if (featureType) {
      res["FeatureType"] = boost::any(*featureType);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (memberAccount) {
      res["MemberAccount"] = boost::any(*memberAccount);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (parentId) {
      res["ParentId"] = boost::any(*parentId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (serviceRegionId) {
      res["ServiceRegionId"] = boost::any(*serviceRegionId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuditStatus") != m.end() && !m["AuditStatus"].empty()) {
      auditStatus = make_shared<long>(boost::any_cast<long>(m["AuditStatus"]));
    }
    if (m.find("CheckStatus") != m.end() && !m["CheckStatus"].empty()) {
      checkStatus = make_shared<long>(boost::any_cast<long>(m["CheckStatus"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("DatamaskStatus") != m.end() && !m["DatamaskStatus"].empty()) {
      datamaskStatus = make_shared<long>(boost::any_cast<long>(m["DatamaskStatus"]));
    }
    if (m.find("Enable") != m.end() && !m["Enable"].empty()) {
      enable = make_shared<long>(boost::any_cast<long>(m["Enable"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("EngineType") != m.end() && !m["EngineType"].empty()) {
      engineType = make_shared<string>(boost::any_cast<string>(m["EngineType"]));
    }
    if (m.find("FeatureType") != m.end() && !m["FeatureType"].empty()) {
      featureType = make_shared<long>(boost::any_cast<long>(m["FeatureType"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("MemberAccount") != m.end() && !m["MemberAccount"].empty()) {
      memberAccount = make_shared<long>(boost::any_cast<long>(m["MemberAccount"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ParentId") != m.end() && !m["ParentId"].empty()) {
      parentId = make_shared<string>(boost::any_cast<string>(m["ParentId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<long>(boost::any_cast<long>(m["ResourceType"]));
    }
    if (m.find("ServiceRegionId") != m.end() && !m["ServiceRegionId"].empty()) {
      serviceRegionId = make_shared<string>(boost::any_cast<string>(m["ServiceRegionId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~DescribeDataLimitsRequest() = default;
};
class DescribeDataLimitsResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<long> auditStatus{};
  shared_ptr<long> autoScan{};
  shared_ptr<long> checkStatus{};
  shared_ptr<string> checkStatusName{};
  shared_ptr<long> datamaskStatus{};
  shared_ptr<string> dbVersion{};
  shared_ptr<long> enable{};
  shared_ptr<string> engineType{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> eventStatus{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> id{};
  shared_ptr<string> instanceDescription{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> lastFinishedTime{};
  shared_ptr<long> lastStartTime{};
  shared_ptr<string> localName{};
  shared_ptr<long> logStoreDay{};
  shared_ptr<long> memberAccount{};
  shared_ptr<long> nextStartTime{};
  shared_ptr<long> ocrStatus{};
  shared_ptr<string> parentId{};
  shared_ptr<long> port{};
  shared_ptr<long> processStatus{};
  shared_ptr<long> processTotalCount{};
  shared_ptr<string> regionId{};
  shared_ptr<long> resourceType{};
  shared_ptr<string> resourceTypeCode{};
  shared_ptr<long> samplingSize{};
  shared_ptr<vector<string>> securityGroupIdList{};
  shared_ptr<bool> supportAudit{};
  shared_ptr<bool> supportDatamask{};
  shared_ptr<bool> supportEvent{};
  shared_ptr<bool> supportOcr{};
  shared_ptr<bool> supportScan{};
  shared_ptr<string> tenantName{};
  shared_ptr<long> totalCount{};
  shared_ptr<string> userName{};
  shared_ptr<vector<string>> vSwitchIdList{};
  shared_ptr<string> vpcId{};

  DescribeDataLimitsResponseBodyItems() {}

  explicit DescribeDataLimitsResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auditStatus) {
      res["AuditStatus"] = boost::any(*auditStatus);
    }
    if (autoScan) {
      res["AutoScan"] = boost::any(*autoScan);
    }
    if (checkStatus) {
      res["CheckStatus"] = boost::any(*checkStatus);
    }
    if (checkStatusName) {
      res["CheckStatusName"] = boost::any(*checkStatusName);
    }
    if (datamaskStatus) {
      res["DatamaskStatus"] = boost::any(*datamaskStatus);
    }
    if (dbVersion) {
      res["DbVersion"] = boost::any(*dbVersion);
    }
    if (enable) {
      res["Enable"] = boost::any(*enable);
    }
    if (engineType) {
      res["EngineType"] = boost::any(*engineType);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (eventStatus) {
      res["EventStatus"] = boost::any(*eventStatus);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (instanceDescription) {
      res["InstanceDescription"] = boost::any(*instanceDescription);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (lastFinishedTime) {
      res["LastFinishedTime"] = boost::any(*lastFinishedTime);
    }
    if (lastStartTime) {
      res["LastStartTime"] = boost::any(*lastStartTime);
    }
    if (localName) {
      res["LocalName"] = boost::any(*localName);
    }
    if (logStoreDay) {
      res["LogStoreDay"] = boost::any(*logStoreDay);
    }
    if (memberAccount) {
      res["MemberAccount"] = boost::any(*memberAccount);
    }
    if (nextStartTime) {
      res["NextStartTime"] = boost::any(*nextStartTime);
    }
    if (ocrStatus) {
      res["OcrStatus"] = boost::any(*ocrStatus);
    }
    if (parentId) {
      res["ParentId"] = boost::any(*parentId);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (processStatus) {
      res["ProcessStatus"] = boost::any(*processStatus);
    }
    if (processTotalCount) {
      res["ProcessTotalCount"] = boost::any(*processTotalCount);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (resourceTypeCode) {
      res["ResourceTypeCode"] = boost::any(*resourceTypeCode);
    }
    if (samplingSize) {
      res["SamplingSize"] = boost::any(*samplingSize);
    }
    if (securityGroupIdList) {
      res["SecurityGroupIdList"] = boost::any(*securityGroupIdList);
    }
    if (supportAudit) {
      res["SupportAudit"] = boost::any(*supportAudit);
    }
    if (supportDatamask) {
      res["SupportDatamask"] = boost::any(*supportDatamask);
    }
    if (supportEvent) {
      res["SupportEvent"] = boost::any(*supportEvent);
    }
    if (supportOcr) {
      res["SupportOcr"] = boost::any(*supportOcr);
    }
    if (supportScan) {
      res["SupportScan"] = boost::any(*supportScan);
    }
    if (tenantName) {
      res["TenantName"] = boost::any(*tenantName);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    if (vSwitchIdList) {
      res["VSwitchIdList"] = boost::any(*vSwitchIdList);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuditStatus") != m.end() && !m["AuditStatus"].empty()) {
      auditStatus = make_shared<long>(boost::any_cast<long>(m["AuditStatus"]));
    }
    if (m.find("AutoScan") != m.end() && !m["AutoScan"].empty()) {
      autoScan = make_shared<long>(boost::any_cast<long>(m["AutoScan"]));
    }
    if (m.find("CheckStatus") != m.end() && !m["CheckStatus"].empty()) {
      checkStatus = make_shared<long>(boost::any_cast<long>(m["CheckStatus"]));
    }
    if (m.find("CheckStatusName") != m.end() && !m["CheckStatusName"].empty()) {
      checkStatusName = make_shared<string>(boost::any_cast<string>(m["CheckStatusName"]));
    }
    if (m.find("DatamaskStatus") != m.end() && !m["DatamaskStatus"].empty()) {
      datamaskStatus = make_shared<long>(boost::any_cast<long>(m["DatamaskStatus"]));
    }
    if (m.find("DbVersion") != m.end() && !m["DbVersion"].empty()) {
      dbVersion = make_shared<string>(boost::any_cast<string>(m["DbVersion"]));
    }
    if (m.find("Enable") != m.end() && !m["Enable"].empty()) {
      enable = make_shared<long>(boost::any_cast<long>(m["Enable"]));
    }
    if (m.find("EngineType") != m.end() && !m["EngineType"].empty()) {
      engineType = make_shared<string>(boost::any_cast<string>(m["EngineType"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("EventStatus") != m.end() && !m["EventStatus"].empty()) {
      eventStatus = make_shared<long>(boost::any_cast<long>(m["EventStatus"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("InstanceDescription") != m.end() && !m["InstanceDescription"].empty()) {
      instanceDescription = make_shared<string>(boost::any_cast<string>(m["InstanceDescription"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("LastFinishedTime") != m.end() && !m["LastFinishedTime"].empty()) {
      lastFinishedTime = make_shared<long>(boost::any_cast<long>(m["LastFinishedTime"]));
    }
    if (m.find("LastStartTime") != m.end() && !m["LastStartTime"].empty()) {
      lastStartTime = make_shared<long>(boost::any_cast<long>(m["LastStartTime"]));
    }
    if (m.find("LocalName") != m.end() && !m["LocalName"].empty()) {
      localName = make_shared<string>(boost::any_cast<string>(m["LocalName"]));
    }
    if (m.find("LogStoreDay") != m.end() && !m["LogStoreDay"].empty()) {
      logStoreDay = make_shared<long>(boost::any_cast<long>(m["LogStoreDay"]));
    }
    if (m.find("MemberAccount") != m.end() && !m["MemberAccount"].empty()) {
      memberAccount = make_shared<long>(boost::any_cast<long>(m["MemberAccount"]));
    }
    if (m.find("NextStartTime") != m.end() && !m["NextStartTime"].empty()) {
      nextStartTime = make_shared<long>(boost::any_cast<long>(m["NextStartTime"]));
    }
    if (m.find("OcrStatus") != m.end() && !m["OcrStatus"].empty()) {
      ocrStatus = make_shared<long>(boost::any_cast<long>(m["OcrStatus"]));
    }
    if (m.find("ParentId") != m.end() && !m["ParentId"].empty()) {
      parentId = make_shared<string>(boost::any_cast<string>(m["ParentId"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("ProcessStatus") != m.end() && !m["ProcessStatus"].empty()) {
      processStatus = make_shared<long>(boost::any_cast<long>(m["ProcessStatus"]));
    }
    if (m.find("ProcessTotalCount") != m.end() && !m["ProcessTotalCount"].empty()) {
      processTotalCount = make_shared<long>(boost::any_cast<long>(m["ProcessTotalCount"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<long>(boost::any_cast<long>(m["ResourceType"]));
    }
    if (m.find("ResourceTypeCode") != m.end() && !m["ResourceTypeCode"].empty()) {
      resourceTypeCode = make_shared<string>(boost::any_cast<string>(m["ResourceTypeCode"]));
    }
    if (m.find("SamplingSize") != m.end() && !m["SamplingSize"].empty()) {
      samplingSize = make_shared<long>(boost::any_cast<long>(m["SamplingSize"]));
    }
    if (m.find("SecurityGroupIdList") != m.end() && !m["SecurityGroupIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SecurityGroupIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SecurityGroupIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      securityGroupIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SupportAudit") != m.end() && !m["SupportAudit"].empty()) {
      supportAudit = make_shared<bool>(boost::any_cast<bool>(m["SupportAudit"]));
    }
    if (m.find("SupportDatamask") != m.end() && !m["SupportDatamask"].empty()) {
      supportDatamask = make_shared<bool>(boost::any_cast<bool>(m["SupportDatamask"]));
    }
    if (m.find("SupportEvent") != m.end() && !m["SupportEvent"].empty()) {
      supportEvent = make_shared<bool>(boost::any_cast<bool>(m["SupportEvent"]));
    }
    if (m.find("SupportOcr") != m.end() && !m["SupportOcr"].empty()) {
      supportOcr = make_shared<bool>(boost::any_cast<bool>(m["SupportOcr"]));
    }
    if (m.find("SupportScan") != m.end() && !m["SupportScan"].empty()) {
      supportScan = make_shared<bool>(boost::any_cast<bool>(m["SupportScan"]));
    }
    if (m.find("TenantName") != m.end() && !m["TenantName"].empty()) {
      tenantName = make_shared<string>(boost::any_cast<string>(m["TenantName"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
    if (m.find("VSwitchIdList") != m.end() && !m["VSwitchIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["VSwitchIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["VSwitchIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vSwitchIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~DescribeDataLimitsResponseBodyItems() = default;
};
class DescribeDataLimitsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<vector<DescribeDataLimitsResponseBodyItems>> items{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeDataLimitsResponseBody() {}

  explicit DescribeDataLimitsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
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
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribeDataLimitsResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDataLimitsResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeDataLimitsResponseBodyItems>>(expect1);
      }
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeDataLimitsResponseBody() = default;
};
class DescribeDataLimitsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDataLimitsResponseBody> body{};

  DescribeDataLimitsResponse() {}

  explicit DescribeDataLimitsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDataLimitsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDataLimitsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDataLimitsResponse() = default;
};
class DescribeDataMaskingRunHistoryRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> dstType{};
  shared_ptr<long> endTime{};
  shared_ptr<string> lang{};
  shared_ptr<long> mainProcessId{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> srcTableName{};
  shared_ptr<long> srcType{};
  shared_ptr<long> startTime{};
  shared_ptr<long> status{};
  shared_ptr<string> taskId{};

  DescribeDataMaskingRunHistoryRequest() {}

  explicit DescribeDataMaskingRunHistoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (dstType) {
      res["DstType"] = boost::any(*dstType);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (mainProcessId) {
      res["MainProcessId"] = boost::any(*mainProcessId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (srcTableName) {
      res["SrcTableName"] = boost::any(*srcTableName);
    }
    if (srcType) {
      res["SrcType"] = boost::any(*srcType);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("DstType") != m.end() && !m["DstType"].empty()) {
      dstType = make_shared<long>(boost::any_cast<long>(m["DstType"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("MainProcessId") != m.end() && !m["MainProcessId"].empty()) {
      mainProcessId = make_shared<long>(boost::any_cast<long>(m["MainProcessId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SrcTableName") != m.end() && !m["SrcTableName"].empty()) {
      srcTableName = make_shared<string>(boost::any_cast<string>(m["SrcTableName"]));
    }
    if (m.find("SrcType") != m.end() && !m["SrcType"].empty()) {
      srcType = make_shared<long>(boost::any_cast<long>(m["SrcType"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~DescribeDataMaskingRunHistoryRequest() = default;
};
class DescribeDataMaskingRunHistoryResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<long> conflictCount{};
  shared_ptr<long> dstType{};
  shared_ptr<string> dstTypeCode{};
  shared_ptr<long> endTime{};
  shared_ptr<string> failCode{};
  shared_ptr<string> failMsg{};
  shared_ptr<long> hasDownloadFile{};
  shared_ptr<long> hasSubProcess{};
  shared_ptr<long> id{};
  shared_ptr<long> maskingCount{};
  shared_ptr<long> percentage{};
  shared_ptr<long> runIndex{};
  shared_ptr<string> srcTableName{};
  shared_ptr<long> srcType{};
  shared_ptr<string> srcTypeCode{};
  shared_ptr<long> startTime{};
  shared_ptr<long> status{};
  shared_ptr<string> taskId{};
  shared_ptr<long> type{};

  DescribeDataMaskingRunHistoryResponseBodyItems() {}

  explicit DescribeDataMaskingRunHistoryResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conflictCount) {
      res["ConflictCount"] = boost::any(*conflictCount);
    }
    if (dstType) {
      res["DstType"] = boost::any(*dstType);
    }
    if (dstTypeCode) {
      res["DstTypeCode"] = boost::any(*dstTypeCode);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (failCode) {
      res["FailCode"] = boost::any(*failCode);
    }
    if (failMsg) {
      res["FailMsg"] = boost::any(*failMsg);
    }
    if (hasDownloadFile) {
      res["HasDownloadFile"] = boost::any(*hasDownloadFile);
    }
    if (hasSubProcess) {
      res["HasSubProcess"] = boost::any(*hasSubProcess);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (maskingCount) {
      res["MaskingCount"] = boost::any(*maskingCount);
    }
    if (percentage) {
      res["Percentage"] = boost::any(*percentage);
    }
    if (runIndex) {
      res["RunIndex"] = boost::any(*runIndex);
    }
    if (srcTableName) {
      res["SrcTableName"] = boost::any(*srcTableName);
    }
    if (srcType) {
      res["SrcType"] = boost::any(*srcType);
    }
    if (srcTypeCode) {
      res["SrcTypeCode"] = boost::any(*srcTypeCode);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConflictCount") != m.end() && !m["ConflictCount"].empty()) {
      conflictCount = make_shared<long>(boost::any_cast<long>(m["ConflictCount"]));
    }
    if (m.find("DstType") != m.end() && !m["DstType"].empty()) {
      dstType = make_shared<long>(boost::any_cast<long>(m["DstType"]));
    }
    if (m.find("DstTypeCode") != m.end() && !m["DstTypeCode"].empty()) {
      dstTypeCode = make_shared<string>(boost::any_cast<string>(m["DstTypeCode"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("FailCode") != m.end() && !m["FailCode"].empty()) {
      failCode = make_shared<string>(boost::any_cast<string>(m["FailCode"]));
    }
    if (m.find("FailMsg") != m.end() && !m["FailMsg"].empty()) {
      failMsg = make_shared<string>(boost::any_cast<string>(m["FailMsg"]));
    }
    if (m.find("HasDownloadFile") != m.end() && !m["HasDownloadFile"].empty()) {
      hasDownloadFile = make_shared<long>(boost::any_cast<long>(m["HasDownloadFile"]));
    }
    if (m.find("HasSubProcess") != m.end() && !m["HasSubProcess"].empty()) {
      hasSubProcess = make_shared<long>(boost::any_cast<long>(m["HasSubProcess"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("MaskingCount") != m.end() && !m["MaskingCount"].empty()) {
      maskingCount = make_shared<long>(boost::any_cast<long>(m["MaskingCount"]));
    }
    if (m.find("Percentage") != m.end() && !m["Percentage"].empty()) {
      percentage = make_shared<long>(boost::any_cast<long>(m["Percentage"]));
    }
    if (m.find("RunIndex") != m.end() && !m["RunIndex"].empty()) {
      runIndex = make_shared<long>(boost::any_cast<long>(m["RunIndex"]));
    }
    if (m.find("SrcTableName") != m.end() && !m["SrcTableName"].empty()) {
      srcTableName = make_shared<string>(boost::any_cast<string>(m["SrcTableName"]));
    }
    if (m.find("SrcType") != m.end() && !m["SrcType"].empty()) {
      srcType = make_shared<long>(boost::any_cast<long>(m["SrcType"]));
    }
    if (m.find("SrcTypeCode") != m.end() && !m["SrcTypeCode"].empty()) {
      srcTypeCode = make_shared<string>(boost::any_cast<string>(m["SrcTypeCode"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
  }


  virtual ~DescribeDataMaskingRunHistoryResponseBodyItems() = default;
};
class DescribeDataMaskingRunHistoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<vector<DescribeDataMaskingRunHistoryResponseBodyItems>> items{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeDataMaskingRunHistoryResponseBody() {}

  explicit DescribeDataMaskingRunHistoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
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
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribeDataMaskingRunHistoryResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDataMaskingRunHistoryResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeDataMaskingRunHistoryResponseBodyItems>>(expect1);
      }
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeDataMaskingRunHistoryResponseBody() = default;
};
class DescribeDataMaskingRunHistoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDataMaskingRunHistoryResponseBody> body{};

  DescribeDataMaskingRunHistoryResponse() {}

  explicit DescribeDataMaskingRunHistoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDataMaskingRunHistoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDataMaskingRunHistoryResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDataMaskingRunHistoryResponse() = default;
};
class DescribeDataMaskingTasksRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> dstType{};
  shared_ptr<long> endTime{};
  shared_ptr<string> lang{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> searchKey{};
  shared_ptr<long> startTime{};

  DescribeDataMaskingTasksRequest() {}

  explicit DescribeDataMaskingTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (dstType) {
      res["DstType"] = boost::any(*dstType);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (searchKey) {
      res["SearchKey"] = boost::any(*searchKey);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("DstType") != m.end() && !m["DstType"].empty()) {
      dstType = make_shared<long>(boost::any_cast<long>(m["DstType"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SearchKey") != m.end() && !m["SearchKey"].empty()) {
      searchKey = make_shared<string>(boost::any_cast<string>(m["SearchKey"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~DescribeDataMaskingTasksRequest() = default;
};
class DescribeDataMaskingTasksResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<long> dstMemberAccount{};
  shared_ptr<string> dstPath{};
  shared_ptr<long> dstType{};
  shared_ptr<string> dstTypeCode{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<bool> hasUnfinishProcess{};
  shared_ptr<long> id{};
  shared_ptr<bool> originalTable{};
  shared_ptr<string> owner{};
  shared_ptr<long> runCount{};
  shared_ptr<long> srcMemberAccount{};
  shared_ptr<string> srcPath{};
  shared_ptr<long> srcType{};
  shared_ptr<string> srcTypeCode{};
  shared_ptr<long> status{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskName{};
  shared_ptr<long> triggerType{};

  DescribeDataMaskingTasksResponseBodyItems() {}

  explicit DescribeDataMaskingTasksResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dstMemberAccount) {
      res["DstMemberAccount"] = boost::any(*dstMemberAccount);
    }
    if (dstPath) {
      res["DstPath"] = boost::any(*dstPath);
    }
    if (dstType) {
      res["DstType"] = boost::any(*dstType);
    }
    if (dstTypeCode) {
      res["DstTypeCode"] = boost::any(*dstTypeCode);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (hasUnfinishProcess) {
      res["HasUnfinishProcess"] = boost::any(*hasUnfinishProcess);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (originalTable) {
      res["OriginalTable"] = boost::any(*originalTable);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (runCount) {
      res["RunCount"] = boost::any(*runCount);
    }
    if (srcMemberAccount) {
      res["SrcMemberAccount"] = boost::any(*srcMemberAccount);
    }
    if (srcPath) {
      res["SrcPath"] = boost::any(*srcPath);
    }
    if (srcType) {
      res["SrcType"] = boost::any(*srcType);
    }
    if (srcTypeCode) {
      res["SrcTypeCode"] = boost::any(*srcTypeCode);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    if (triggerType) {
      res["TriggerType"] = boost::any(*triggerType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DstMemberAccount") != m.end() && !m["DstMemberAccount"].empty()) {
      dstMemberAccount = make_shared<long>(boost::any_cast<long>(m["DstMemberAccount"]));
    }
    if (m.find("DstPath") != m.end() && !m["DstPath"].empty()) {
      dstPath = make_shared<string>(boost::any_cast<string>(m["DstPath"]));
    }
    if (m.find("DstType") != m.end() && !m["DstType"].empty()) {
      dstType = make_shared<long>(boost::any_cast<long>(m["DstType"]));
    }
    if (m.find("DstTypeCode") != m.end() && !m["DstTypeCode"].empty()) {
      dstTypeCode = make_shared<string>(boost::any_cast<string>(m["DstTypeCode"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
    if (m.find("HasUnfinishProcess") != m.end() && !m["HasUnfinishProcess"].empty()) {
      hasUnfinishProcess = make_shared<bool>(boost::any_cast<bool>(m["HasUnfinishProcess"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("OriginalTable") != m.end() && !m["OriginalTable"].empty()) {
      originalTable = make_shared<bool>(boost::any_cast<bool>(m["OriginalTable"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("RunCount") != m.end() && !m["RunCount"].empty()) {
      runCount = make_shared<long>(boost::any_cast<long>(m["RunCount"]));
    }
    if (m.find("SrcMemberAccount") != m.end() && !m["SrcMemberAccount"].empty()) {
      srcMemberAccount = make_shared<long>(boost::any_cast<long>(m["SrcMemberAccount"]));
    }
    if (m.find("SrcPath") != m.end() && !m["SrcPath"].empty()) {
      srcPath = make_shared<string>(boost::any_cast<string>(m["SrcPath"]));
    }
    if (m.find("SrcType") != m.end() && !m["SrcType"].empty()) {
      srcType = make_shared<long>(boost::any_cast<long>(m["SrcType"]));
    }
    if (m.find("SrcTypeCode") != m.end() && !m["SrcTypeCode"].empty()) {
      srcTypeCode = make_shared<string>(boost::any_cast<string>(m["SrcTypeCode"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
    if (m.find("TriggerType") != m.end() && !m["TriggerType"].empty()) {
      triggerType = make_shared<long>(boost::any_cast<long>(m["TriggerType"]));
    }
  }


  virtual ~DescribeDataMaskingTasksResponseBodyItems() = default;
};
class DescribeDataMaskingTasksResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<vector<DescribeDataMaskingTasksResponseBodyItems>> items{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeDataMaskingTasksResponseBody() {}

  explicit DescribeDataMaskingTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
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
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribeDataMaskingTasksResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDataMaskingTasksResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeDataMaskingTasksResponseBodyItems>>(expect1);
      }
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeDataMaskingTasksResponseBody() = default;
};
class DescribeDataMaskingTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDataMaskingTasksResponseBody> body{};

  DescribeDataMaskingTasksResponse() {}

  explicit DescribeDataMaskingTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDataMaskingTasksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDataMaskingTasksResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDataMaskingTasksResponse() = default;
};
class DescribeDataObjectColumnDetailRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> featureType{};
  shared_ptr<long> id{};
  shared_ptr<string> lang{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> productId{};
  shared_ptr<long> templateId{};

  DescribeDataObjectColumnDetailRequest() {}

  explicit DescribeDataObjectColumnDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (featureType) {
      res["FeatureType"] = boost::any(*featureType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("FeatureType") != m.end() && !m["FeatureType"].empty()) {
      featureType = make_shared<long>(boost::any_cast<long>(m["FeatureType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<long>(boost::any_cast<long>(m["ProductId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
  }


  virtual ~DescribeDataObjectColumnDetailRequest() = default;
};
class DescribeDataObjectColumnDetailResponseBodyItemsModelTags : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> name{};

  DescribeDataObjectColumnDetailResponseBodyItemsModelTags() {}

  explicit DescribeDataObjectColumnDetailResponseBodyItemsModelTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~DescribeDataObjectColumnDetailResponseBodyItemsModelTags() = default;
};
class DescribeDataObjectColumnDetailResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<string>> categories{};
  shared_ptr<string> columnComment{};
  shared_ptr<string> columnName{};
  shared_ptr<string> dataType{};
  shared_ptr<string> engineType{};
  shared_ptr<string> id{};
  shared_ptr<string> instanceName{};
  shared_ptr<long> maskingStatus{};
  shared_ptr<vector<DescribeDataObjectColumnDetailResponseBodyItemsModelTags>> modelTags{};
  shared_ptr<bool> primaryKey{};
  shared_ptr<long> productId{};
  shared_ptr<string> regionId{};
  shared_ptr<long> riskLevelId{};
  shared_ptr<string> riskLevelName{};
  shared_ptr<long> ruleId{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> tableName{};

  DescribeDataObjectColumnDetailResponseBodyItems() {}

  explicit DescribeDataObjectColumnDetailResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categories) {
      res["Categories"] = boost::any(*categories);
    }
    if (columnComment) {
      res["ColumnComment"] = boost::any(*columnComment);
    }
    if (columnName) {
      res["ColumnName"] = boost::any(*columnName);
    }
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (engineType) {
      res["EngineType"] = boost::any(*engineType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (maskingStatus) {
      res["MaskingStatus"] = boost::any(*maskingStatus);
    }
    if (modelTags) {
      vector<boost::any> temp1;
      for(auto item1:*modelTags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ModelTags"] = boost::any(temp1);
    }
    if (primaryKey) {
      res["PrimaryKey"] = boost::any(*primaryKey);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (riskLevelId) {
      res["RiskLevelId"] = boost::any(*riskLevelId);
    }
    if (riskLevelName) {
      res["RiskLevelName"] = boost::any(*riskLevelName);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Categories") != m.end() && !m["Categories"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Categories"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Categories"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      categories = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ColumnComment") != m.end() && !m["ColumnComment"].empty()) {
      columnComment = make_shared<string>(boost::any_cast<string>(m["ColumnComment"]));
    }
    if (m.find("ColumnName") != m.end() && !m["ColumnName"].empty()) {
      columnName = make_shared<string>(boost::any_cast<string>(m["ColumnName"]));
    }
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
    if (m.find("EngineType") != m.end() && !m["EngineType"].empty()) {
      engineType = make_shared<string>(boost::any_cast<string>(m["EngineType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("MaskingStatus") != m.end() && !m["MaskingStatus"].empty()) {
      maskingStatus = make_shared<long>(boost::any_cast<long>(m["MaskingStatus"]));
    }
    if (m.find("ModelTags") != m.end() && !m["ModelTags"].empty()) {
      if (typeid(vector<boost::any>) == m["ModelTags"].type()) {
        vector<DescribeDataObjectColumnDetailResponseBodyItemsModelTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ModelTags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDataObjectColumnDetailResponseBodyItemsModelTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        modelTags = make_shared<vector<DescribeDataObjectColumnDetailResponseBodyItemsModelTags>>(expect1);
      }
    }
    if (m.find("PrimaryKey") != m.end() && !m["PrimaryKey"].empty()) {
      primaryKey = make_shared<bool>(boost::any_cast<bool>(m["PrimaryKey"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<long>(boost::any_cast<long>(m["ProductId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RiskLevelId") != m.end() && !m["RiskLevelId"].empty()) {
      riskLevelId = make_shared<long>(boost::any_cast<long>(m["RiskLevelId"]));
    }
    if (m.find("RiskLevelName") != m.end() && !m["RiskLevelName"].empty()) {
      riskLevelName = make_shared<string>(boost::any_cast<string>(m["RiskLevelName"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
  }


  virtual ~DescribeDataObjectColumnDetailResponseBodyItems() = default;
};
class DescribeDataObjectColumnDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<vector<DescribeDataObjectColumnDetailResponseBodyItems>> items{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeDataObjectColumnDetailResponseBody() {}

  explicit DescribeDataObjectColumnDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
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
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribeDataObjectColumnDetailResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDataObjectColumnDetailResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeDataObjectColumnDetailResponseBodyItems>>(expect1);
      }
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeDataObjectColumnDetailResponseBody() = default;
};
class DescribeDataObjectColumnDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDataObjectColumnDetailResponseBody> body{};

  DescribeDataObjectColumnDetailResponse() {}

  explicit DescribeDataObjectColumnDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDataObjectColumnDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDataObjectColumnDetailResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDataObjectColumnDetailResponse() = default;
};
class DescribeDataObjectColumnDetailV2Request : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> featureType{};
  shared_ptr<string> id{};
  shared_ptr<string> lang{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> productId{};
  shared_ptr<long> templateId{};

  DescribeDataObjectColumnDetailV2Request() {}

  explicit DescribeDataObjectColumnDetailV2Request(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (featureType) {
      res["FeatureType"] = boost::any(*featureType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("FeatureType") != m.end() && !m["FeatureType"].empty()) {
      featureType = make_shared<long>(boost::any_cast<long>(m["FeatureType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<long>(boost::any_cast<long>(m["ProductId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
  }


  virtual ~DescribeDataObjectColumnDetailV2Request() = default;
};
class DescribeDataObjectColumnDetailV2ResponseBodyItemsModelTags : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> name{};

  DescribeDataObjectColumnDetailV2ResponseBodyItemsModelTags() {}

  explicit DescribeDataObjectColumnDetailV2ResponseBodyItemsModelTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~DescribeDataObjectColumnDetailV2ResponseBodyItemsModelTags() = default;
};
class DescribeDataObjectColumnDetailV2ResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<string>> categories{};
  shared_ptr<string> columnComment{};
  shared_ptr<string> columnName{};
  shared_ptr<string> dataType{};
  shared_ptr<string> engineType{};
  shared_ptr<string> id{};
  shared_ptr<string> instanceName{};
  shared_ptr<long> maskingStatus{};
  shared_ptr<vector<DescribeDataObjectColumnDetailV2ResponseBodyItemsModelTags>> modelTags{};
  shared_ptr<bool> primaryKey{};
  shared_ptr<long> productId{};
  shared_ptr<string> regionId{};
  shared_ptr<long> riskLevelId{};
  shared_ptr<string> riskLevelName{};
  shared_ptr<long> ruleId{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> tableName{};

  DescribeDataObjectColumnDetailV2ResponseBodyItems() {}

  explicit DescribeDataObjectColumnDetailV2ResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categories) {
      res["Categories"] = boost::any(*categories);
    }
    if (columnComment) {
      res["ColumnComment"] = boost::any(*columnComment);
    }
    if (columnName) {
      res["ColumnName"] = boost::any(*columnName);
    }
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (engineType) {
      res["EngineType"] = boost::any(*engineType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (maskingStatus) {
      res["MaskingStatus"] = boost::any(*maskingStatus);
    }
    if (modelTags) {
      vector<boost::any> temp1;
      for(auto item1:*modelTags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ModelTags"] = boost::any(temp1);
    }
    if (primaryKey) {
      res["PrimaryKey"] = boost::any(*primaryKey);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (riskLevelId) {
      res["RiskLevelId"] = boost::any(*riskLevelId);
    }
    if (riskLevelName) {
      res["RiskLevelName"] = boost::any(*riskLevelName);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Categories") != m.end() && !m["Categories"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Categories"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Categories"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      categories = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ColumnComment") != m.end() && !m["ColumnComment"].empty()) {
      columnComment = make_shared<string>(boost::any_cast<string>(m["ColumnComment"]));
    }
    if (m.find("ColumnName") != m.end() && !m["ColumnName"].empty()) {
      columnName = make_shared<string>(boost::any_cast<string>(m["ColumnName"]));
    }
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
    if (m.find("EngineType") != m.end() && !m["EngineType"].empty()) {
      engineType = make_shared<string>(boost::any_cast<string>(m["EngineType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("MaskingStatus") != m.end() && !m["MaskingStatus"].empty()) {
      maskingStatus = make_shared<long>(boost::any_cast<long>(m["MaskingStatus"]));
    }
    if (m.find("ModelTags") != m.end() && !m["ModelTags"].empty()) {
      if (typeid(vector<boost::any>) == m["ModelTags"].type()) {
        vector<DescribeDataObjectColumnDetailV2ResponseBodyItemsModelTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ModelTags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDataObjectColumnDetailV2ResponseBodyItemsModelTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        modelTags = make_shared<vector<DescribeDataObjectColumnDetailV2ResponseBodyItemsModelTags>>(expect1);
      }
    }
    if (m.find("PrimaryKey") != m.end() && !m["PrimaryKey"].empty()) {
      primaryKey = make_shared<bool>(boost::any_cast<bool>(m["PrimaryKey"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<long>(boost::any_cast<long>(m["ProductId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RiskLevelId") != m.end() && !m["RiskLevelId"].empty()) {
      riskLevelId = make_shared<long>(boost::any_cast<long>(m["RiskLevelId"]));
    }
    if (m.find("RiskLevelName") != m.end() && !m["RiskLevelName"].empty()) {
      riskLevelName = make_shared<string>(boost::any_cast<string>(m["RiskLevelName"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
  }


  virtual ~DescribeDataObjectColumnDetailV2ResponseBodyItems() = default;
};
class DescribeDataObjectColumnDetailV2ResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<vector<DescribeDataObjectColumnDetailV2ResponseBodyItems>> items{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeDataObjectColumnDetailV2ResponseBody() {}

  explicit DescribeDataObjectColumnDetailV2ResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
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
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribeDataObjectColumnDetailV2ResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDataObjectColumnDetailV2ResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeDataObjectColumnDetailV2ResponseBodyItems>>(expect1);
      }
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeDataObjectColumnDetailV2ResponseBody() = default;
};
class DescribeDataObjectColumnDetailV2Response : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDataObjectColumnDetailV2ResponseBody> body{};

  DescribeDataObjectColumnDetailV2Response() {}

  explicit DescribeDataObjectColumnDetailV2Response(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDataObjectColumnDetailV2ResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDataObjectColumnDetailV2ResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDataObjectColumnDetailV2Response() = default;
};
class DescribeDataObjectsRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> domainId{};
  shared_ptr<long> featureType{};
  shared_ptr<long> fileCategoryCode{};
  shared_ptr<long> fileType{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> lang{};
  shared_ptr<long> memberAccount{};
  shared_ptr<string> modelIds{};
  shared_ptr<string> modelTagIds{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> parentCategoryIds{};
  shared_ptr<string> productIds{};
  shared_ptr<string> queryName{};
  shared_ptr<string> riskLevels{};
  shared_ptr<string> serviceRegionId{};
  shared_ptr<long> templateId{};

  DescribeDataObjectsRequest() {}

  explicit DescribeDataObjectsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (domainId) {
      res["DomainId"] = boost::any(*domainId);
    }
    if (featureType) {
      res["FeatureType"] = boost::any(*featureType);
    }
    if (fileCategoryCode) {
      res["FileCategoryCode"] = boost::any(*fileCategoryCode);
    }
    if (fileType) {
      res["FileType"] = boost::any(*fileType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (memberAccount) {
      res["MemberAccount"] = boost::any(*memberAccount);
    }
    if (modelIds) {
      res["ModelIds"] = boost::any(*modelIds);
    }
    if (modelTagIds) {
      res["ModelTagIds"] = boost::any(*modelTagIds);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (parentCategoryIds) {
      res["ParentCategoryIds"] = boost::any(*parentCategoryIds);
    }
    if (productIds) {
      res["ProductIds"] = boost::any(*productIds);
    }
    if (queryName) {
      res["QueryName"] = boost::any(*queryName);
    }
    if (riskLevels) {
      res["RiskLevels"] = boost::any(*riskLevels);
    }
    if (serviceRegionId) {
      res["ServiceRegionId"] = boost::any(*serviceRegionId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("DomainId") != m.end() && !m["DomainId"].empty()) {
      domainId = make_shared<long>(boost::any_cast<long>(m["DomainId"]));
    }
    if (m.find("FeatureType") != m.end() && !m["FeatureType"].empty()) {
      featureType = make_shared<long>(boost::any_cast<long>(m["FeatureType"]));
    }
    if (m.find("FileCategoryCode") != m.end() && !m["FileCategoryCode"].empty()) {
      fileCategoryCode = make_shared<long>(boost::any_cast<long>(m["FileCategoryCode"]));
    }
    if (m.find("FileType") != m.end() && !m["FileType"].empty()) {
      fileType = make_shared<long>(boost::any_cast<long>(m["FileType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("MemberAccount") != m.end() && !m["MemberAccount"].empty()) {
      memberAccount = make_shared<long>(boost::any_cast<long>(m["MemberAccount"]));
    }
    if (m.find("ModelIds") != m.end() && !m["ModelIds"].empty()) {
      modelIds = make_shared<string>(boost::any_cast<string>(m["ModelIds"]));
    }
    if (m.find("ModelTagIds") != m.end() && !m["ModelTagIds"].empty()) {
      modelTagIds = make_shared<string>(boost::any_cast<string>(m["ModelTagIds"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ParentCategoryIds") != m.end() && !m["ParentCategoryIds"].empty()) {
      parentCategoryIds = make_shared<string>(boost::any_cast<string>(m["ParentCategoryIds"]));
    }
    if (m.find("ProductIds") != m.end() && !m["ProductIds"].empty()) {
      productIds = make_shared<string>(boost::any_cast<string>(m["ProductIds"]));
    }
    if (m.find("QueryName") != m.end() && !m["QueryName"].empty()) {
      queryName = make_shared<string>(boost::any_cast<string>(m["QueryName"]));
    }
    if (m.find("RiskLevels") != m.end() && !m["RiskLevels"].empty()) {
      riskLevels = make_shared<string>(boost::any_cast<string>(m["RiskLevels"]));
    }
    if (m.find("ServiceRegionId") != m.end() && !m["ServiceRegionId"].empty()) {
      serviceRegionId = make_shared<string>(boost::any_cast<string>(m["ServiceRegionId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
  }


  virtual ~DescribeDataObjectsRequest() = default;
};
class DescribeDataObjectsResponseBodyItemsModelTags : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> name{};

  DescribeDataObjectsResponseBodyItemsModelTags() {}

  explicit DescribeDataObjectsResponseBodyItemsModelTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~DescribeDataObjectsResponseBodyItemsModelTags() = default;
};
class DescribeDataObjectsResponseBodyItemsRuleList : public Darabonba::Model {
public:
  shared_ptr<long> riskLevelId{};
  shared_ptr<string> riskLevelName{};
  shared_ptr<long> ruleCount{};
  shared_ptr<long> ruleId{};
  shared_ptr<string> ruleName{};

  DescribeDataObjectsResponseBodyItemsRuleList() {}

  explicit DescribeDataObjectsResponseBodyItemsRuleList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (riskLevelId) {
      res["RiskLevelId"] = boost::any(*riskLevelId);
    }
    if (riskLevelName) {
      res["RiskLevelName"] = boost::any(*riskLevelName);
    }
    if (ruleCount) {
      res["RuleCount"] = boost::any(*ruleCount);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RiskLevelId") != m.end() && !m["RiskLevelId"].empty()) {
      riskLevelId = make_shared<long>(boost::any_cast<long>(m["RiskLevelId"]));
    }
    if (m.find("RiskLevelName") != m.end() && !m["RiskLevelName"].empty()) {
      riskLevelName = make_shared<string>(boost::any_cast<string>(m["RiskLevelName"]));
    }
    if (m.find("RuleCount") != m.end() && !m["RuleCount"].empty()) {
      ruleCount = make_shared<long>(boost::any_cast<long>(m["RuleCount"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
  }


  virtual ~DescribeDataObjectsResponseBodyItemsRuleList() = default;
};
class DescribeDataObjectsResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<string>> categories{};
  shared_ptr<string> id{};
  shared_ptr<string> instanceDescription{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> lastModifiedTime{};
  shared_ptr<long> lastScanTime{};
  shared_ptr<long> memberAccount{};
  shared_ptr<vector<DescribeDataObjectsResponseBodyItemsModelTags>> modelTags{};
  shared_ptr<string> name{};
  shared_ptr<string> objectFileCategory{};
  shared_ptr<string> objectType{};
  shared_ptr<string> path{};
  shared_ptr<string> productCode{};
  shared_ptr<long> productId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> regionName{};
  shared_ptr<vector<DescribeDataObjectsResponseBodyItemsRuleList>> ruleList{};
  shared_ptr<long> sensitiveCount{};
  shared_ptr<long> templateId{};

  DescribeDataObjectsResponseBodyItems() {}

  explicit DescribeDataObjectsResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categories) {
      res["Categories"] = boost::any(*categories);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (instanceDescription) {
      res["InstanceDescription"] = boost::any(*instanceDescription);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (lastModifiedTime) {
      res["LastModifiedTime"] = boost::any(*lastModifiedTime);
    }
    if (lastScanTime) {
      res["LastScanTime"] = boost::any(*lastScanTime);
    }
    if (memberAccount) {
      res["MemberAccount"] = boost::any(*memberAccount);
    }
    if (modelTags) {
      vector<boost::any> temp1;
      for(auto item1:*modelTags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ModelTags"] = boost::any(temp1);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (objectFileCategory) {
      res["ObjectFileCategory"] = boost::any(*objectFileCategory);
    }
    if (objectType) {
      res["ObjectType"] = boost::any(*objectType);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (regionName) {
      res["RegionName"] = boost::any(*regionName);
    }
    if (ruleList) {
      vector<boost::any> temp1;
      for(auto item1:*ruleList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RuleList"] = boost::any(temp1);
    }
    if (sensitiveCount) {
      res["SensitiveCount"] = boost::any(*sensitiveCount);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Categories") != m.end() && !m["Categories"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Categories"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Categories"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      categories = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("InstanceDescription") != m.end() && !m["InstanceDescription"].empty()) {
      instanceDescription = make_shared<string>(boost::any_cast<string>(m["InstanceDescription"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("LastModifiedTime") != m.end() && !m["LastModifiedTime"].empty()) {
      lastModifiedTime = make_shared<long>(boost::any_cast<long>(m["LastModifiedTime"]));
    }
    if (m.find("LastScanTime") != m.end() && !m["LastScanTime"].empty()) {
      lastScanTime = make_shared<long>(boost::any_cast<long>(m["LastScanTime"]));
    }
    if (m.find("MemberAccount") != m.end() && !m["MemberAccount"].empty()) {
      memberAccount = make_shared<long>(boost::any_cast<long>(m["MemberAccount"]));
    }
    if (m.find("ModelTags") != m.end() && !m["ModelTags"].empty()) {
      if (typeid(vector<boost::any>) == m["ModelTags"].type()) {
        vector<DescribeDataObjectsResponseBodyItemsModelTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ModelTags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDataObjectsResponseBodyItemsModelTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        modelTags = make_shared<vector<DescribeDataObjectsResponseBodyItemsModelTags>>(expect1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ObjectFileCategory") != m.end() && !m["ObjectFileCategory"].empty()) {
      objectFileCategory = make_shared<string>(boost::any_cast<string>(m["ObjectFileCategory"]));
    }
    if (m.find("ObjectType") != m.end() && !m["ObjectType"].empty()) {
      objectType = make_shared<string>(boost::any_cast<string>(m["ObjectType"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<long>(boost::any_cast<long>(m["ProductId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RegionName") != m.end() && !m["RegionName"].empty()) {
      regionName = make_shared<string>(boost::any_cast<string>(m["RegionName"]));
    }
    if (m.find("RuleList") != m.end() && !m["RuleList"].empty()) {
      if (typeid(vector<boost::any>) == m["RuleList"].type()) {
        vector<DescribeDataObjectsResponseBodyItemsRuleList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RuleList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDataObjectsResponseBodyItemsRuleList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ruleList = make_shared<vector<DescribeDataObjectsResponseBodyItemsRuleList>>(expect1);
      }
    }
    if (m.find("SensitiveCount") != m.end() && !m["SensitiveCount"].empty()) {
      sensitiveCount = make_shared<long>(boost::any_cast<long>(m["SensitiveCount"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
  }


  virtual ~DescribeDataObjectsResponseBodyItems() = default;
};
class DescribeDataObjectsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<vector<DescribeDataObjectsResponseBodyItems>> items{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeDataObjectsResponseBody() {}

  explicit DescribeDataObjectsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
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
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribeDataObjectsResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDataObjectsResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeDataObjectsResponseBodyItems>>(expect1);
      }
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeDataObjectsResponseBody() = default;
};
class DescribeDataObjectsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDataObjectsResponseBody> body{};

  DescribeDataObjectsResponse() {}

  explicit DescribeDataObjectsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDataObjectsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDataObjectsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDataObjectsResponse() = default;
};
class DescribeDocTypesRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};

  DescribeDocTypesRequest() {}

  explicit DescribeDocTypesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
  }


  virtual ~DescribeDocTypesRequest() = default;
};
class DescribeDocTypesResponseBodyDocTypeList : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<long> id{};
  shared_ptr<string> name{};

  DescribeDocTypesResponseBodyDocTypeList() {}

  explicit DescribeDocTypesResponseBodyDocTypeList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~DescribeDocTypesResponseBodyDocTypeList() = default;
};
class DescribeDocTypesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDocTypesResponseBodyDocTypeList>> docTypeList{};
  shared_ptr<string> requestId{};

  DescribeDocTypesResponseBody() {}

  explicit DescribeDocTypesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (docTypeList) {
      vector<boost::any> temp1;
      for(auto item1:*docTypeList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DocTypeList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DocTypeList") != m.end() && !m["DocTypeList"].empty()) {
      if (typeid(vector<boost::any>) == m["DocTypeList"].type()) {
        vector<DescribeDocTypesResponseBodyDocTypeList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DocTypeList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDocTypesResponseBodyDocTypeList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        docTypeList = make_shared<vector<DescribeDocTypesResponseBodyDocTypeList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeDocTypesResponseBody() = default;
};
class DescribeDocTypesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDocTypesResponseBody> body{};

  DescribeDocTypesResponse() {}

  explicit DescribeDocTypesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDocTypesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDocTypesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDocTypesResponse() = default;
};
class DescribeEventDetailRequest : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> lang{};

  DescribeEventDetailRequest() {}

  explicit DescribeEventDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
  }


  virtual ~DescribeEventDetailRequest() = default;
};
class DescribeEventDetailResponseBodyEventDetailChartData : public Darabonba::Model {
public:
  shared_ptr<vector<string>> x{};
  shared_ptr<vector<string>> y{};
  shared_ptr<vector<string>> z{};

  DescribeEventDetailResponseBodyEventDetailChartData() {}

  explicit DescribeEventDetailResponseBodyEventDetailChartData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (z) {
      res["Z"] = boost::any(*z);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["X"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["X"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      x = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Y"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Y"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      y = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Z") != m.end() && !m["Z"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Z"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Z"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      z = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeEventDetailResponseBodyEventDetailChartData() = default;
};
class DescribeEventDetailResponseBodyEventDetailChart : public Darabonba::Model {
public:
  shared_ptr<long> chatType{};
  shared_ptr<DescribeEventDetailResponseBodyEventDetailChartData> data{};
  shared_ptr<string> label{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};
  shared_ptr<string> XLabel{};
  shared_ptr<string> YLabel{};
  shared_ptr<string> ZLabel{};

  DescribeEventDetailResponseBodyEventDetailChart() {}

  explicit DescribeEventDetailResponseBodyEventDetailChart(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chatType) {
      res["ChatType"] = boost::any(*chatType);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (XLabel) {
      res["XLabel"] = boost::any(*XLabel);
    }
    if (YLabel) {
      res["YLabel"] = boost::any(*YLabel);
    }
    if (ZLabel) {
      res["ZLabel"] = boost::any(*ZLabel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChatType") != m.end() && !m["ChatType"].empty()) {
      chatType = make_shared<long>(boost::any_cast<long>(m["ChatType"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeEventDetailResponseBodyEventDetailChartData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeEventDetailResponseBodyEventDetailChartData>(model1);
      }
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("XLabel") != m.end() && !m["XLabel"].empty()) {
      XLabel = make_shared<string>(boost::any_cast<string>(m["XLabel"]));
    }
    if (m.find("YLabel") != m.end() && !m["YLabel"].empty()) {
      YLabel = make_shared<string>(boost::any_cast<string>(m["YLabel"]));
    }
    if (m.find("ZLabel") != m.end() && !m["ZLabel"].empty()) {
      ZLabel = make_shared<string>(boost::any_cast<string>(m["ZLabel"]));
    }
  }


  virtual ~DescribeEventDetailResponseBodyEventDetailChart() = default;
};
class DescribeEventDetailResponseBodyEventDetailContent : public Darabonba::Model {
public:
  shared_ptr<string> label{};
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  DescribeEventDetailResponseBodyEventDetailContent() {}

  explicit DescribeEventDetailResponseBodyEventDetailContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeEventDetailResponseBodyEventDetailContent() = default;
};
class DescribeEventDetailResponseBodyEventDetailResourceInfo : public Darabonba::Model {
public:
  shared_ptr<string> label{};
  shared_ptr<string> value{};

  DescribeEventDetailResponseBodyEventDetailResourceInfo() {}

  explicit DescribeEventDetailResponseBodyEventDetailResourceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeEventDetailResponseBodyEventDetailResourceInfo() = default;
};
class DescribeEventDetailResponseBodyEventDetail : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeEventDetailResponseBodyEventDetailChart>> chart{};
  shared_ptr<vector<DescribeEventDetailResponseBodyEventDetailContent>> content{};
  shared_ptr<vector<DescribeEventDetailResponseBodyEventDetailResourceInfo>> resourceInfo{};

  DescribeEventDetailResponseBodyEventDetail() {}

  explicit DescribeEventDetailResponseBodyEventDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chart) {
      vector<boost::any> temp1;
      for(auto item1:*chart){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Chart"] = boost::any(temp1);
    }
    if (content) {
      vector<boost::any> temp1;
      for(auto item1:*content){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Content"] = boost::any(temp1);
    }
    if (resourceInfo) {
      vector<boost::any> temp1;
      for(auto item1:*resourceInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResourceInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Chart") != m.end() && !m["Chart"].empty()) {
      if (typeid(vector<boost::any>) == m["Chart"].type()) {
        vector<DescribeEventDetailResponseBodyEventDetailChart> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Chart"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeEventDetailResponseBodyEventDetailChart model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        chart = make_shared<vector<DescribeEventDetailResponseBodyEventDetailChart>>(expect1);
      }
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(vector<boost::any>) == m["Content"].type()) {
        vector<DescribeEventDetailResponseBodyEventDetailContent> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Content"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeEventDetailResponseBodyEventDetailContent model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        content = make_shared<vector<DescribeEventDetailResponseBodyEventDetailContent>>(expect1);
      }
    }
    if (m.find("ResourceInfo") != m.end() && !m["ResourceInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["ResourceInfo"].type()) {
        vector<DescribeEventDetailResponseBodyEventDetailResourceInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResourceInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeEventDetailResponseBodyEventDetailResourceInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resourceInfo = make_shared<vector<DescribeEventDetailResponseBodyEventDetailResourceInfo>>(expect1);
      }
    }
  }


  virtual ~DescribeEventDetailResponseBodyEventDetail() = default;
};
class DescribeEventDetailResponseBodyEventHandleInfoList : public Darabonba::Model {
public:
  shared_ptr<string> currentValue{};
  shared_ptr<long> disableTime{};
  shared_ptr<long> enableTime{};
  shared_ptr<string> handlerName{};
  shared_ptr<string> handlerType{};
  shared_ptr<long> handlerValue{};
  shared_ptr<long> id{};
  shared_ptr<long> status{};

  DescribeEventDetailResponseBodyEventHandleInfoList() {}

  explicit DescribeEventDetailResponseBodyEventHandleInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentValue) {
      res["CurrentValue"] = boost::any(*currentValue);
    }
    if (disableTime) {
      res["DisableTime"] = boost::any(*disableTime);
    }
    if (enableTime) {
      res["EnableTime"] = boost::any(*enableTime);
    }
    if (handlerName) {
      res["HandlerName"] = boost::any(*handlerName);
    }
    if (handlerType) {
      res["HandlerType"] = boost::any(*handlerType);
    }
    if (handlerValue) {
      res["HandlerValue"] = boost::any(*handlerValue);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentValue") != m.end() && !m["CurrentValue"].empty()) {
      currentValue = make_shared<string>(boost::any_cast<string>(m["CurrentValue"]));
    }
    if (m.find("DisableTime") != m.end() && !m["DisableTime"].empty()) {
      disableTime = make_shared<long>(boost::any_cast<long>(m["DisableTime"]));
    }
    if (m.find("EnableTime") != m.end() && !m["EnableTime"].empty()) {
      enableTime = make_shared<long>(boost::any_cast<long>(m["EnableTime"]));
    }
    if (m.find("HandlerName") != m.end() && !m["HandlerName"].empty()) {
      handlerName = make_shared<string>(boost::any_cast<string>(m["HandlerName"]));
    }
    if (m.find("HandlerType") != m.end() && !m["HandlerType"].empty()) {
      handlerType = make_shared<string>(boost::any_cast<string>(m["HandlerType"]));
    }
    if (m.find("HandlerValue") != m.end() && !m["HandlerValue"].empty()) {
      handlerValue = make_shared<long>(boost::any_cast<long>(m["HandlerValue"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~DescribeEventDetailResponseBodyEventHandleInfoList() = default;
};
class DescribeEventDetailResponseBodyEvent : public Darabonba::Model {
public:
  shared_ptr<long> alertTime{};
  shared_ptr<bool> backed{};
  shared_ptr<string> dataInstance{};
  shared_ptr<string> dealDisplayName{};
  shared_ptr<string> dealLoginName{};
  shared_ptr<string> dealReason{};
  shared_ptr<long> dealTime{};
  shared_ptr<long> dealUserId{};
  shared_ptr<DescribeEventDetailResponseBodyEventDetail> detail{};
  shared_ptr<string> displayName{};
  shared_ptr<long> eventTime{};
  shared_ptr<vector<DescribeEventDetailResponseBodyEventHandleInfoList>> handleInfoList{};
  shared_ptr<long> id{};
  shared_ptr<string> logDetail{};
  shared_ptr<string> loginName{};
  shared_ptr<bool> newAlarm{};
  shared_ptr<string> productCode{};
  shared_ptr<long> status{};
  shared_ptr<string> statusName{};
  shared_ptr<string> subTypeCode{};
  shared_ptr<string> subTypeName{};
  shared_ptr<string> typeCode{};
  shared_ptr<string> typeName_{};
  shared_ptr<long> userId{};

  DescribeEventDetailResponseBodyEvent() {}

  explicit DescribeEventDetailResponseBodyEvent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertTime) {
      res["AlertTime"] = boost::any(*alertTime);
    }
    if (backed) {
      res["Backed"] = boost::any(*backed);
    }
    if (dataInstance) {
      res["DataInstance"] = boost::any(*dataInstance);
    }
    if (dealDisplayName) {
      res["DealDisplayName"] = boost::any(*dealDisplayName);
    }
    if (dealLoginName) {
      res["DealLoginName"] = boost::any(*dealLoginName);
    }
    if (dealReason) {
      res["DealReason"] = boost::any(*dealReason);
    }
    if (dealTime) {
      res["DealTime"] = boost::any(*dealTime);
    }
    if (dealUserId) {
      res["DealUserId"] = boost::any(*dealUserId);
    }
    if (detail) {
      res["Detail"] = detail ? boost::any(detail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (eventTime) {
      res["EventTime"] = boost::any(*eventTime);
    }
    if (handleInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*handleInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HandleInfoList"] = boost::any(temp1);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (logDetail) {
      res["LogDetail"] = boost::any(*logDetail);
    }
    if (loginName) {
      res["LoginName"] = boost::any(*loginName);
    }
    if (newAlarm) {
      res["NewAlarm"] = boost::any(*newAlarm);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (statusName) {
      res["StatusName"] = boost::any(*statusName);
    }
    if (subTypeCode) {
      res["SubTypeCode"] = boost::any(*subTypeCode);
    }
    if (subTypeName) {
      res["SubTypeName"] = boost::any(*subTypeName);
    }
    if (typeCode) {
      res["TypeCode"] = boost::any(*typeCode);
    }
    if (typeName_) {
      res["TypeName"] = boost::any(*typeName_);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlertTime") != m.end() && !m["AlertTime"].empty()) {
      alertTime = make_shared<long>(boost::any_cast<long>(m["AlertTime"]));
    }
    if (m.find("Backed") != m.end() && !m["Backed"].empty()) {
      backed = make_shared<bool>(boost::any_cast<bool>(m["Backed"]));
    }
    if (m.find("DataInstance") != m.end() && !m["DataInstance"].empty()) {
      dataInstance = make_shared<string>(boost::any_cast<string>(m["DataInstance"]));
    }
    if (m.find("DealDisplayName") != m.end() && !m["DealDisplayName"].empty()) {
      dealDisplayName = make_shared<string>(boost::any_cast<string>(m["DealDisplayName"]));
    }
    if (m.find("DealLoginName") != m.end() && !m["DealLoginName"].empty()) {
      dealLoginName = make_shared<string>(boost::any_cast<string>(m["DealLoginName"]));
    }
    if (m.find("DealReason") != m.end() && !m["DealReason"].empty()) {
      dealReason = make_shared<string>(boost::any_cast<string>(m["DealReason"]));
    }
    if (m.find("DealTime") != m.end() && !m["DealTime"].empty()) {
      dealTime = make_shared<long>(boost::any_cast<long>(m["DealTime"]));
    }
    if (m.find("DealUserId") != m.end() && !m["DealUserId"].empty()) {
      dealUserId = make_shared<long>(boost::any_cast<long>(m["DealUserId"]));
    }
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      if (typeid(map<string, boost::any>) == m["Detail"].type()) {
        DescribeEventDetailResponseBodyEventDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Detail"]));
        detail = make_shared<DescribeEventDetailResponseBodyEventDetail>(model1);
      }
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("EventTime") != m.end() && !m["EventTime"].empty()) {
      eventTime = make_shared<long>(boost::any_cast<long>(m["EventTime"]));
    }
    if (m.find("HandleInfoList") != m.end() && !m["HandleInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["HandleInfoList"].type()) {
        vector<DescribeEventDetailResponseBodyEventHandleInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HandleInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeEventDetailResponseBodyEventHandleInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        handleInfoList = make_shared<vector<DescribeEventDetailResponseBodyEventHandleInfoList>>(expect1);
      }
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("LogDetail") != m.end() && !m["LogDetail"].empty()) {
      logDetail = make_shared<string>(boost::any_cast<string>(m["LogDetail"]));
    }
    if (m.find("LoginName") != m.end() && !m["LoginName"].empty()) {
      loginName = make_shared<string>(boost::any_cast<string>(m["LoginName"]));
    }
    if (m.find("NewAlarm") != m.end() && !m["NewAlarm"].empty()) {
      newAlarm = make_shared<bool>(boost::any_cast<bool>(m["NewAlarm"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("StatusName") != m.end() && !m["StatusName"].empty()) {
      statusName = make_shared<string>(boost::any_cast<string>(m["StatusName"]));
    }
    if (m.find("SubTypeCode") != m.end() && !m["SubTypeCode"].empty()) {
      subTypeCode = make_shared<string>(boost::any_cast<string>(m["SubTypeCode"]));
    }
    if (m.find("SubTypeName") != m.end() && !m["SubTypeName"].empty()) {
      subTypeName = make_shared<string>(boost::any_cast<string>(m["SubTypeName"]));
    }
    if (m.find("TypeCode") != m.end() && !m["TypeCode"].empty()) {
      typeCode = make_shared<string>(boost::any_cast<string>(m["TypeCode"]));
    }
    if (m.find("TypeName") != m.end() && !m["TypeName"].empty()) {
      typeName_ = make_shared<string>(boost::any_cast<string>(m["TypeName"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["UserId"]));
    }
  }


  virtual ~DescribeEventDetailResponseBodyEvent() = default;
};
class DescribeEventDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeEventDetailResponseBodyEvent> event{};
  shared_ptr<string> requestId{};

  DescribeEventDetailResponseBody() {}

  explicit DescribeEventDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (event) {
      res["Event"] = event ? boost::any(event->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Event") != m.end() && !m["Event"].empty()) {
      if (typeid(map<string, boost::any>) == m["Event"].type()) {
        DescribeEventDetailResponseBodyEvent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Event"]));
        event = make_shared<DescribeEventDetailResponseBodyEvent>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeEventDetailResponseBody() = default;
};
class DescribeEventDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeEventDetailResponseBody> body{};

  DescribeEventDetailResponse() {}

  explicit DescribeEventDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeEventDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeEventDetailResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeEventDetailResponse() = default;
};
class DescribeEventTypesRequest : public Darabonba::Model {
public:
  shared_ptr<long> featureType{};
  shared_ptr<string> lang{};
  shared_ptr<long> parentTypeId{};
  shared_ptr<long> resourceId{};
  shared_ptr<long> status{};

  DescribeEventTypesRequest() {}

  explicit DescribeEventTypesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (featureType) {
      res["FeatureType"] = boost::any(*featureType);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (parentTypeId) {
      res["ParentTypeId"] = boost::any(*parentTypeId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FeatureType") != m.end() && !m["FeatureType"].empty()) {
      featureType = make_shared<long>(boost::any_cast<long>(m["FeatureType"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("ParentTypeId") != m.end() && !m["ParentTypeId"].empty()) {
      parentTypeId = make_shared<long>(boost::any_cast<long>(m["ParentTypeId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<long>(boost::any_cast<long>(m["ResourceId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~DescribeEventTypesRequest() = default;
};
class DescribeEventTypesResponseBodyEventTypeListSubTypeList : public Darabonba::Model {
public:
  shared_ptr<string> adaptedProduct{};
  shared_ptr<string> code{};
  shared_ptr<string> configCode{};
  shared_ptr<long> configContentType{};
  shared_ptr<string> configDescription{};
  shared_ptr<string> configValue{};
  shared_ptr<string> description{};
  shared_ptr<long> eventHitCount{};
  shared_ptr<long> id{};
  shared_ptr<string> name{};
  shared_ptr<long> status{};

  DescribeEventTypesResponseBodyEventTypeListSubTypeList() {}

  explicit DescribeEventTypesResponseBodyEventTypeListSubTypeList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (adaptedProduct) {
      res["AdaptedProduct"] = boost::any(*adaptedProduct);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (configCode) {
      res["ConfigCode"] = boost::any(*configCode);
    }
    if (configContentType) {
      res["ConfigContentType"] = boost::any(*configContentType);
    }
    if (configDescription) {
      res["ConfigDescription"] = boost::any(*configDescription);
    }
    if (configValue) {
      res["ConfigValue"] = boost::any(*configValue);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (eventHitCount) {
      res["EventHitCount"] = boost::any(*eventHitCount);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdaptedProduct") != m.end() && !m["AdaptedProduct"].empty()) {
      adaptedProduct = make_shared<string>(boost::any_cast<string>(m["AdaptedProduct"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("ConfigCode") != m.end() && !m["ConfigCode"].empty()) {
      configCode = make_shared<string>(boost::any_cast<string>(m["ConfigCode"]));
    }
    if (m.find("ConfigContentType") != m.end() && !m["ConfigContentType"].empty()) {
      configContentType = make_shared<long>(boost::any_cast<long>(m["ConfigContentType"]));
    }
    if (m.find("ConfigDescription") != m.end() && !m["ConfigDescription"].empty()) {
      configDescription = make_shared<string>(boost::any_cast<string>(m["ConfigDescription"]));
    }
    if (m.find("ConfigValue") != m.end() && !m["ConfigValue"].empty()) {
      configValue = make_shared<string>(boost::any_cast<string>(m["ConfigValue"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EventHitCount") != m.end() && !m["EventHitCount"].empty()) {
      eventHitCount = make_shared<long>(boost::any_cast<long>(m["EventHitCount"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~DescribeEventTypesResponseBodyEventTypeListSubTypeList() = default;
};
class DescribeEventTypesResponseBodyEventTypeList : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> description{};
  shared_ptr<long> id{};
  shared_ptr<string> name{};
  shared_ptr<vector<DescribeEventTypesResponseBodyEventTypeListSubTypeList>> subTypeList{};

  DescribeEventTypesResponseBodyEventTypeList() {}

  explicit DescribeEventTypesResponseBodyEventTypeList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (subTypeList) {
      vector<boost::any> temp1;
      for(auto item1:*subTypeList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SubTypeList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("SubTypeList") != m.end() && !m["SubTypeList"].empty()) {
      if (typeid(vector<boost::any>) == m["SubTypeList"].type()) {
        vector<DescribeEventTypesResponseBodyEventTypeListSubTypeList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SubTypeList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeEventTypesResponseBodyEventTypeListSubTypeList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subTypeList = make_shared<vector<DescribeEventTypesResponseBodyEventTypeListSubTypeList>>(expect1);
      }
    }
  }


  virtual ~DescribeEventTypesResponseBodyEventTypeList() = default;
};
class DescribeEventTypesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeEventTypesResponseBodyEventTypeList>> eventTypeList{};
  shared_ptr<string> requestId{};

  DescribeEventTypesResponseBody() {}

  explicit DescribeEventTypesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventTypeList) {
      vector<boost::any> temp1;
      for(auto item1:*eventTypeList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EventTypeList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventTypeList") != m.end() && !m["EventTypeList"].empty()) {
      if (typeid(vector<boost::any>) == m["EventTypeList"].type()) {
        vector<DescribeEventTypesResponseBodyEventTypeList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EventTypeList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeEventTypesResponseBodyEventTypeList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        eventTypeList = make_shared<vector<DescribeEventTypesResponseBodyEventTypeList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeEventTypesResponseBody() = default;
};
class DescribeEventTypesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeEventTypesResponseBody> body{};

  DescribeEventTypesResponse() {}

  explicit DescribeEventTypesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeEventTypesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeEventTypesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeEventTypesResponse() = default;
};
class DescribeEventsRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<string> dealUserId{};
  shared_ptr<string> endTime{};
  shared_ptr<long> id{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> lang{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> productCode{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};
  shared_ptr<string> subTypeCode{};
  shared_ptr<string> targetProductCode{};
  shared_ptr<string> typeCode{};
  shared_ptr<long> userId{};
  shared_ptr<string> userName{};
  shared_ptr<long> warnLevel{};

  DescribeEventsRequest() {}

  explicit DescribeEventsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (dealUserId) {
      res["DealUserId"] = boost::any(*dealUserId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (subTypeCode) {
      res["SubTypeCode"] = boost::any(*subTypeCode);
    }
    if (targetProductCode) {
      res["TargetProductCode"] = boost::any(*targetProductCode);
    }
    if (typeCode) {
      res["TypeCode"] = boost::any(*typeCode);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    if (warnLevel) {
      res["WarnLevel"] = boost::any(*warnLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("DealUserId") != m.end() && !m["DealUserId"].empty()) {
      dealUserId = make_shared<string>(boost::any_cast<string>(m["DealUserId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SubTypeCode") != m.end() && !m["SubTypeCode"].empty()) {
      subTypeCode = make_shared<string>(boost::any_cast<string>(m["SubTypeCode"]));
    }
    if (m.find("TargetProductCode") != m.end() && !m["TargetProductCode"].empty()) {
      targetProductCode = make_shared<string>(boost::any_cast<string>(m["TargetProductCode"]));
    }
    if (m.find("TypeCode") != m.end() && !m["TypeCode"].empty()) {
      typeCode = make_shared<string>(boost::any_cast<string>(m["TypeCode"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["UserId"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
    if (m.find("WarnLevel") != m.end() && !m["WarnLevel"].empty()) {
      warnLevel = make_shared<long>(boost::any_cast<long>(m["WarnLevel"]));
    }
  }


  virtual ~DescribeEventsRequest() = default;
};
class DescribeEventsResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<long> alertTime{};
  shared_ptr<bool> backed{};
  shared_ptr<string> dealDisplayName{};
  shared_ptr<string> dealLoginName{};
  shared_ptr<long> dealTime{};
  shared_ptr<long> dealUserId{};
  shared_ptr<string> displayName{};
  shared_ptr<long> eventTime{};
  shared_ptr<long> id{};
  shared_ptr<string> loginName{};
  shared_ptr<string> productCode{};
  shared_ptr<long> status{};
  shared_ptr<string> statusName{};
  shared_ptr<string> subTypeCode{};
  shared_ptr<string> subTypeName{};
  shared_ptr<string> targetProductCode{};
  shared_ptr<string> typeCode{};
  shared_ptr<string> typeName_{};
  shared_ptr<long> userId{};
  shared_ptr<long> warnLevel{};

  DescribeEventsResponseBodyItems() {}

  explicit DescribeEventsResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertTime) {
      res["AlertTime"] = boost::any(*alertTime);
    }
    if (backed) {
      res["Backed"] = boost::any(*backed);
    }
    if (dealDisplayName) {
      res["DealDisplayName"] = boost::any(*dealDisplayName);
    }
    if (dealLoginName) {
      res["DealLoginName"] = boost::any(*dealLoginName);
    }
    if (dealTime) {
      res["DealTime"] = boost::any(*dealTime);
    }
    if (dealUserId) {
      res["DealUserId"] = boost::any(*dealUserId);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (eventTime) {
      res["EventTime"] = boost::any(*eventTime);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (loginName) {
      res["LoginName"] = boost::any(*loginName);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (statusName) {
      res["StatusName"] = boost::any(*statusName);
    }
    if (subTypeCode) {
      res["SubTypeCode"] = boost::any(*subTypeCode);
    }
    if (subTypeName) {
      res["SubTypeName"] = boost::any(*subTypeName);
    }
    if (targetProductCode) {
      res["TargetProductCode"] = boost::any(*targetProductCode);
    }
    if (typeCode) {
      res["TypeCode"] = boost::any(*typeCode);
    }
    if (typeName_) {
      res["TypeName"] = boost::any(*typeName_);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (warnLevel) {
      res["WarnLevel"] = boost::any(*warnLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlertTime") != m.end() && !m["AlertTime"].empty()) {
      alertTime = make_shared<long>(boost::any_cast<long>(m["AlertTime"]));
    }
    if (m.find("Backed") != m.end() && !m["Backed"].empty()) {
      backed = make_shared<bool>(boost::any_cast<bool>(m["Backed"]));
    }
    if (m.find("DealDisplayName") != m.end() && !m["DealDisplayName"].empty()) {
      dealDisplayName = make_shared<string>(boost::any_cast<string>(m["DealDisplayName"]));
    }
    if (m.find("DealLoginName") != m.end() && !m["DealLoginName"].empty()) {
      dealLoginName = make_shared<string>(boost::any_cast<string>(m["DealLoginName"]));
    }
    if (m.find("DealTime") != m.end() && !m["DealTime"].empty()) {
      dealTime = make_shared<long>(boost::any_cast<long>(m["DealTime"]));
    }
    if (m.find("DealUserId") != m.end() && !m["DealUserId"].empty()) {
      dealUserId = make_shared<long>(boost::any_cast<long>(m["DealUserId"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("EventTime") != m.end() && !m["EventTime"].empty()) {
      eventTime = make_shared<long>(boost::any_cast<long>(m["EventTime"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("LoginName") != m.end() && !m["LoginName"].empty()) {
      loginName = make_shared<string>(boost::any_cast<string>(m["LoginName"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("StatusName") != m.end() && !m["StatusName"].empty()) {
      statusName = make_shared<string>(boost::any_cast<string>(m["StatusName"]));
    }
    if (m.find("SubTypeCode") != m.end() && !m["SubTypeCode"].empty()) {
      subTypeCode = make_shared<string>(boost::any_cast<string>(m["SubTypeCode"]));
    }
    if (m.find("SubTypeName") != m.end() && !m["SubTypeName"].empty()) {
      subTypeName = make_shared<string>(boost::any_cast<string>(m["SubTypeName"]));
    }
    if (m.find("TargetProductCode") != m.end() && !m["TargetProductCode"].empty()) {
      targetProductCode = make_shared<string>(boost::any_cast<string>(m["TargetProductCode"]));
    }
    if (m.find("TypeCode") != m.end() && !m["TypeCode"].empty()) {
      typeCode = make_shared<string>(boost::any_cast<string>(m["TypeCode"]));
    }
    if (m.find("TypeName") != m.end() && !m["TypeName"].empty()) {
      typeName_ = make_shared<string>(boost::any_cast<string>(m["TypeName"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["UserId"]));
    }
    if (m.find("WarnLevel") != m.end() && !m["WarnLevel"].empty()) {
      warnLevel = make_shared<long>(boost::any_cast<long>(m["WarnLevel"]));
    }
  }


  virtual ~DescribeEventsResponseBodyItems() = default;
};
class DescribeEventsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<vector<DescribeEventsResponseBodyItems>> items{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeEventsResponseBody() {}

  explicit DescribeEventsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
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
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribeEventsResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeEventsResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeEventsResponseBodyItems>>(expect1);
      }
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeEventsResponseBody() = default;
};
class DescribeEventsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeEventsResponseBody> body{};

  DescribeEventsResponse() {}

  explicit DescribeEventsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeEventsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeEventsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeEventsResponse() = default;
};
class DescribeIdentifyTaskStatusRequest : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> lang{};

  DescribeIdentifyTaskStatusRequest() {}

  explicit DescribeIdentifyTaskStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
  }


  virtual ~DescribeIdentifyTaskStatusRequest() = default;
};
class DescribeIdentifyTaskStatusResponseBodyContent : public Darabonba::Model {
public:
  shared_ptr<long> status{};

  DescribeIdentifyTaskStatusResponseBodyContent() {}

  explicit DescribeIdentifyTaskStatusResponseBodyContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~DescribeIdentifyTaskStatusResponseBodyContent() = default;
};
class DescribeIdentifyTaskStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeIdentifyTaskStatusResponseBodyContent> content{};
  shared_ptr<string> requestId{};

  DescribeIdentifyTaskStatusResponseBody() {}

  explicit DescribeIdentifyTaskStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        DescribeIdentifyTaskStatusResponseBodyContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<DescribeIdentifyTaskStatusResponseBodyContent>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeIdentifyTaskStatusResponseBody() = default;
};
class DescribeIdentifyTaskStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeIdentifyTaskStatusResponseBody> body{};

  DescribeIdentifyTaskStatusResponse() {}

  explicit DescribeIdentifyTaskStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeIdentifyTaskStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeIdentifyTaskStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeIdentifyTaskStatusResponse() = default;
};
class DescribeInstanceSourcesRequest : public Darabonba::Model {
public:
  shared_ptr<long> auditStatus{};
  shared_ptr<long> authStatus{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> engineType{};
  shared_ptr<long> featureType{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> lang{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> productCode{};
  shared_ptr<long> productId{};
  shared_ptr<string> searchKey{};
  shared_ptr<string> searchType{};
  shared_ptr<string> serviceRegionId{};

  DescribeInstanceSourcesRequest() {}

  explicit DescribeInstanceSourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auditStatus) {
      res["AuditStatus"] = boost::any(*auditStatus);
    }
    if (authStatus) {
      res["AuthStatus"] = boost::any(*authStatus);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (engineType) {
      res["EngineType"] = boost::any(*engineType);
    }
    if (featureType) {
      res["FeatureType"] = boost::any(*featureType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    if (searchKey) {
      res["SearchKey"] = boost::any(*searchKey);
    }
    if (searchType) {
      res["SearchType"] = boost::any(*searchType);
    }
    if (serviceRegionId) {
      res["ServiceRegionId"] = boost::any(*serviceRegionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuditStatus") != m.end() && !m["AuditStatus"].empty()) {
      auditStatus = make_shared<long>(boost::any_cast<long>(m["AuditStatus"]));
    }
    if (m.find("AuthStatus") != m.end() && !m["AuthStatus"].empty()) {
      authStatus = make_shared<long>(boost::any_cast<long>(m["AuthStatus"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("EngineType") != m.end() && !m["EngineType"].empty()) {
      engineType = make_shared<string>(boost::any_cast<string>(m["EngineType"]));
    }
    if (m.find("FeatureType") != m.end() && !m["FeatureType"].empty()) {
      featureType = make_shared<long>(boost::any_cast<long>(m["FeatureType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<long>(boost::any_cast<long>(m["ProductId"]));
    }
    if (m.find("SearchKey") != m.end() && !m["SearchKey"].empty()) {
      searchKey = make_shared<string>(boost::any_cast<string>(m["SearchKey"]));
    }
    if (m.find("SearchType") != m.end() && !m["SearchType"].empty()) {
      searchType = make_shared<string>(boost::any_cast<string>(m["SearchType"]));
    }
    if (m.find("ServiceRegionId") != m.end() && !m["ServiceRegionId"].empty()) {
      serviceRegionId = make_shared<string>(boost::any_cast<string>(m["ServiceRegionId"]));
    }
  }


  virtual ~DescribeInstanceSourcesRequest() = default;
};
class DescribeInstanceSourcesResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<long> auditStatus{};
  shared_ptr<long> autoScan{};
  shared_ptr<bool> canModifyUserName{};
  shared_ptr<long> checkStatus{};
  shared_ptr<long> datamaskStatus{};
  shared_ptr<string> dbName{};
  shared_ptr<long> enable{};
  shared_ptr<string> engineType{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> id{};
  shared_ptr<string> instanceDescription{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> instanceSize{};
  shared_ptr<long> lastModifyTime{};
  shared_ptr<string> lastModifyUserId{};
  shared_ptr<long> logStoreDay{};
  shared_ptr<long> passwordStatus{};
  shared_ptr<long> productId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> regionName{};
  shared_ptr<long> samplingSize{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> tenantName{};
  shared_ptr<string> userName{};

  DescribeInstanceSourcesResponseBodyItems() {}

  explicit DescribeInstanceSourcesResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auditStatus) {
      res["AuditStatus"] = boost::any(*auditStatus);
    }
    if (autoScan) {
      res["AutoScan"] = boost::any(*autoScan);
    }
    if (canModifyUserName) {
      res["CanModifyUserName"] = boost::any(*canModifyUserName);
    }
    if (checkStatus) {
      res["CheckStatus"] = boost::any(*checkStatus);
    }
    if (datamaskStatus) {
      res["DatamaskStatus"] = boost::any(*datamaskStatus);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (enable) {
      res["Enable"] = boost::any(*enable);
    }
    if (engineType) {
      res["EngineType"] = boost::any(*engineType);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (instanceDescription) {
      res["InstanceDescription"] = boost::any(*instanceDescription);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceSize) {
      res["InstanceSize"] = boost::any(*instanceSize);
    }
    if (lastModifyTime) {
      res["LastModifyTime"] = boost::any(*lastModifyTime);
    }
    if (lastModifyUserId) {
      res["LastModifyUserId"] = boost::any(*lastModifyUserId);
    }
    if (logStoreDay) {
      res["LogStoreDay"] = boost::any(*logStoreDay);
    }
    if (passwordStatus) {
      res["PasswordStatus"] = boost::any(*passwordStatus);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (regionName) {
      res["RegionName"] = boost::any(*regionName);
    }
    if (samplingSize) {
      res["SamplingSize"] = boost::any(*samplingSize);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (tenantName) {
      res["TenantName"] = boost::any(*tenantName);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuditStatus") != m.end() && !m["AuditStatus"].empty()) {
      auditStatus = make_shared<long>(boost::any_cast<long>(m["AuditStatus"]));
    }
    if (m.find("AutoScan") != m.end() && !m["AutoScan"].empty()) {
      autoScan = make_shared<long>(boost::any_cast<long>(m["AutoScan"]));
    }
    if (m.find("CanModifyUserName") != m.end() && !m["CanModifyUserName"].empty()) {
      canModifyUserName = make_shared<bool>(boost::any_cast<bool>(m["CanModifyUserName"]));
    }
    if (m.find("CheckStatus") != m.end() && !m["CheckStatus"].empty()) {
      checkStatus = make_shared<long>(boost::any_cast<long>(m["CheckStatus"]));
    }
    if (m.find("DatamaskStatus") != m.end() && !m["DatamaskStatus"].empty()) {
      datamaskStatus = make_shared<long>(boost::any_cast<long>(m["DatamaskStatus"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("Enable") != m.end() && !m["Enable"].empty()) {
      enable = make_shared<long>(boost::any_cast<long>(m["Enable"]));
    }
    if (m.find("EngineType") != m.end() && !m["EngineType"].empty()) {
      engineType = make_shared<string>(boost::any_cast<string>(m["EngineType"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("InstanceDescription") != m.end() && !m["InstanceDescription"].empty()) {
      instanceDescription = make_shared<string>(boost::any_cast<string>(m["InstanceDescription"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceSize") != m.end() && !m["InstanceSize"].empty()) {
      instanceSize = make_shared<long>(boost::any_cast<long>(m["InstanceSize"]));
    }
    if (m.find("LastModifyTime") != m.end() && !m["LastModifyTime"].empty()) {
      lastModifyTime = make_shared<long>(boost::any_cast<long>(m["LastModifyTime"]));
    }
    if (m.find("LastModifyUserId") != m.end() && !m["LastModifyUserId"].empty()) {
      lastModifyUserId = make_shared<string>(boost::any_cast<string>(m["LastModifyUserId"]));
    }
    if (m.find("LogStoreDay") != m.end() && !m["LogStoreDay"].empty()) {
      logStoreDay = make_shared<long>(boost::any_cast<long>(m["LogStoreDay"]));
    }
    if (m.find("PasswordStatus") != m.end() && !m["PasswordStatus"].empty()) {
      passwordStatus = make_shared<long>(boost::any_cast<long>(m["PasswordStatus"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<long>(boost::any_cast<long>(m["ProductId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RegionName") != m.end() && !m["RegionName"].empty()) {
      regionName = make_shared<string>(boost::any_cast<string>(m["RegionName"]));
    }
    if (m.find("SamplingSize") != m.end() && !m["SamplingSize"].empty()) {
      samplingSize = make_shared<long>(boost::any_cast<long>(m["SamplingSize"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
    if (m.find("TenantName") != m.end() && !m["TenantName"].empty()) {
      tenantName = make_shared<string>(boost::any_cast<string>(m["TenantName"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~DescribeInstanceSourcesResponseBodyItems() = default;
};
class DescribeInstanceSourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<vector<DescribeInstanceSourcesResponseBodyItems>> items{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeInstanceSourcesResponseBody() {}

  explicit DescribeInstanceSourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
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
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribeInstanceSourcesResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInstanceSourcesResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeInstanceSourcesResponseBodyItems>>(expect1);
      }
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeInstanceSourcesResponseBody() = default;
};
class DescribeInstanceSourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeInstanceSourcesResponseBody> body{};

  DescribeInstanceSourcesResponse() {}

  explicit DescribeInstanceSourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeInstanceSourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeInstanceSourcesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeInstanceSourcesResponse() = default;
};
class DescribeInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> featureType{};
  shared_ptr<string> lang{};
  shared_ptr<string> name{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> productCode{};
  shared_ptr<long> productId{};
  shared_ptr<long> riskLevelId{};
  shared_ptr<long> ruleId{};
  shared_ptr<string> serviceRegionId{};

  DescribeInstancesRequest() {}

  explicit DescribeInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (featureType) {
      res["FeatureType"] = boost::any(*featureType);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    if (riskLevelId) {
      res["RiskLevelId"] = boost::any(*riskLevelId);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (serviceRegionId) {
      res["ServiceRegionId"] = boost::any(*serviceRegionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("FeatureType") != m.end() && !m["FeatureType"].empty()) {
      featureType = make_shared<long>(boost::any_cast<long>(m["FeatureType"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<long>(boost::any_cast<long>(m["ProductId"]));
    }
    if (m.find("RiskLevelId") != m.end() && !m["RiskLevelId"].empty()) {
      riskLevelId = make_shared<long>(boost::any_cast<long>(m["RiskLevelId"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
    if (m.find("ServiceRegionId") != m.end() && !m["ServiceRegionId"].empty()) {
      serviceRegionId = make_shared<string>(boost::any_cast<string>(m["ServiceRegionId"]));
    }
  }


  virtual ~DescribeInstancesRequest() = default;
};
class DescribeInstancesResponseBodyItemsModelTags : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> name{};

  DescribeInstancesResponseBodyItemsModelTags() {}

  explicit DescribeInstancesResponseBodyItemsModelTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~DescribeInstancesResponseBodyItemsModelTags() = default;
};
class DescribeInstancesResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<long> creationTime{};
  shared_ptr<string> departName{};
  shared_ptr<long> id{};
  shared_ptr<string> instanceDescription{};
  shared_ptr<bool> labelsec{};
  shared_ptr<long> lastFinishTime{};
  shared_ptr<string> memberAliUid{};
  shared_ptr<vector<DescribeInstancesResponseBodyItemsModelTags>> modelTags{};
  shared_ptr<string> name{};
  shared_ptr<string> odpsRiskLevelName{};
  shared_ptr<string> owner{};
  shared_ptr<string> productCode{};
  shared_ptr<string> productId{};
  shared_ptr<bool> protection{};
  shared_ptr<long> riskLevelId{};
  shared_ptr<string> riskLevelName{};
  shared_ptr<string> ruleName{};
  shared_ptr<bool> sensitive{};
  shared_ptr<long> sensitiveCount{};
  shared_ptr<string> tenantName{};
  shared_ptr<long> totalCount{};

  DescribeInstancesResponseBodyItems() {}

  explicit DescribeInstancesResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (departName) {
      res["DepartName"] = boost::any(*departName);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (instanceDescription) {
      res["InstanceDescription"] = boost::any(*instanceDescription);
    }
    if (labelsec) {
      res["Labelsec"] = boost::any(*labelsec);
    }
    if (lastFinishTime) {
      res["LastFinishTime"] = boost::any(*lastFinishTime);
    }
    if (memberAliUid) {
      res["MemberAliUid"] = boost::any(*memberAliUid);
    }
    if (modelTags) {
      vector<boost::any> temp1;
      for(auto item1:*modelTags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ModelTags"] = boost::any(temp1);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (odpsRiskLevelName) {
      res["OdpsRiskLevelName"] = boost::any(*odpsRiskLevelName);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    if (protection) {
      res["Protection"] = boost::any(*protection);
    }
    if (riskLevelId) {
      res["RiskLevelId"] = boost::any(*riskLevelId);
    }
    if (riskLevelName) {
      res["RiskLevelName"] = boost::any(*riskLevelName);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (sensitive) {
      res["Sensitive"] = boost::any(*sensitive);
    }
    if (sensitiveCount) {
      res["SensitiveCount"] = boost::any(*sensitiveCount);
    }
    if (tenantName) {
      res["TenantName"] = boost::any(*tenantName);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<long>(boost::any_cast<long>(m["CreationTime"]));
    }
    if (m.find("DepartName") != m.end() && !m["DepartName"].empty()) {
      departName = make_shared<string>(boost::any_cast<string>(m["DepartName"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("InstanceDescription") != m.end() && !m["InstanceDescription"].empty()) {
      instanceDescription = make_shared<string>(boost::any_cast<string>(m["InstanceDescription"]));
    }
    if (m.find("Labelsec") != m.end() && !m["Labelsec"].empty()) {
      labelsec = make_shared<bool>(boost::any_cast<bool>(m["Labelsec"]));
    }
    if (m.find("LastFinishTime") != m.end() && !m["LastFinishTime"].empty()) {
      lastFinishTime = make_shared<long>(boost::any_cast<long>(m["LastFinishTime"]));
    }
    if (m.find("MemberAliUid") != m.end() && !m["MemberAliUid"].empty()) {
      memberAliUid = make_shared<string>(boost::any_cast<string>(m["MemberAliUid"]));
    }
    if (m.find("ModelTags") != m.end() && !m["ModelTags"].empty()) {
      if (typeid(vector<boost::any>) == m["ModelTags"].type()) {
        vector<DescribeInstancesResponseBodyItemsModelTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ModelTags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInstancesResponseBodyItemsModelTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        modelTags = make_shared<vector<DescribeInstancesResponseBodyItemsModelTags>>(expect1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OdpsRiskLevelName") != m.end() && !m["OdpsRiskLevelName"].empty()) {
      odpsRiskLevelName = make_shared<string>(boost::any_cast<string>(m["OdpsRiskLevelName"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["ProductId"]));
    }
    if (m.find("Protection") != m.end() && !m["Protection"].empty()) {
      protection = make_shared<bool>(boost::any_cast<bool>(m["Protection"]));
    }
    if (m.find("RiskLevelId") != m.end() && !m["RiskLevelId"].empty()) {
      riskLevelId = make_shared<long>(boost::any_cast<long>(m["RiskLevelId"]));
    }
    if (m.find("RiskLevelName") != m.end() && !m["RiskLevelName"].empty()) {
      riskLevelName = make_shared<string>(boost::any_cast<string>(m["RiskLevelName"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("Sensitive") != m.end() && !m["Sensitive"].empty()) {
      sensitive = make_shared<bool>(boost::any_cast<bool>(m["Sensitive"]));
    }
    if (m.find("SensitiveCount") != m.end() && !m["SensitiveCount"].empty()) {
      sensitiveCount = make_shared<long>(boost::any_cast<long>(m["SensitiveCount"]));
    }
    if (m.find("TenantName") != m.end() && !m["TenantName"].empty()) {
      tenantName = make_shared<string>(boost::any_cast<string>(m["TenantName"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeInstancesResponseBodyItems() = default;
};
class DescribeInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<vector<DescribeInstancesResponseBodyItems>> items{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeInstancesResponseBody() {}

  explicit DescribeInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
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
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribeInstancesResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInstancesResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeInstancesResponseBodyItems>>(expect1);
      }
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeInstancesResponseBody() = default;
};
class DescribeInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeInstancesResponseBody> body{};

  DescribeInstancesResponse() {}

  explicit DescribeInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeInstancesResponse() = default;
};
class DescribeOssObjectDetailRequest : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> lang{};

  DescribeOssObjectDetailRequest() {}

  explicit DescribeOssObjectDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
  }


  virtual ~DescribeOssObjectDetailRequest() = default;
};
class DescribeOssObjectDetailResponseBodyOssObjectDetailRuleListModelTags : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> name{};

  DescribeOssObjectDetailResponseBodyOssObjectDetailRuleListModelTags() {}

  explicit DescribeOssObjectDetailResponseBodyOssObjectDetailRuleListModelTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~DescribeOssObjectDetailResponseBodyOssObjectDetailRuleListModelTags() = default;
};
class DescribeOssObjectDetailResponseBodyOssObjectDetailRuleList : public Darabonba::Model {
public:
  shared_ptr<string> categoryName{};
  shared_ptr<long> count{};
  shared_ptr<vector<DescribeOssObjectDetailResponseBodyOssObjectDetailRuleListModelTags>> modelTags{};
  shared_ptr<long> riskLevelId{};
  shared_ptr<string> riskLevelName{};
  shared_ptr<string> ruleName{};

  DescribeOssObjectDetailResponseBodyOssObjectDetailRuleList() {}

  explicit DescribeOssObjectDetailResponseBodyOssObjectDetailRuleList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryName) {
      res["CategoryName"] = boost::any(*categoryName);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (modelTags) {
      vector<boost::any> temp1;
      for(auto item1:*modelTags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ModelTags"] = boost::any(temp1);
    }
    if (riskLevelId) {
      res["RiskLevelId"] = boost::any(*riskLevelId);
    }
    if (riskLevelName) {
      res["RiskLevelName"] = boost::any(*riskLevelName);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryName") != m.end() && !m["CategoryName"].empty()) {
      categoryName = make_shared<string>(boost::any_cast<string>(m["CategoryName"]));
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("ModelTags") != m.end() && !m["ModelTags"].empty()) {
      if (typeid(vector<boost::any>) == m["ModelTags"].type()) {
        vector<DescribeOssObjectDetailResponseBodyOssObjectDetailRuleListModelTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ModelTags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeOssObjectDetailResponseBodyOssObjectDetailRuleListModelTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        modelTags = make_shared<vector<DescribeOssObjectDetailResponseBodyOssObjectDetailRuleListModelTags>>(expect1);
      }
    }
    if (m.find("RiskLevelId") != m.end() && !m["RiskLevelId"].empty()) {
      riskLevelId = make_shared<long>(boost::any_cast<long>(m["RiskLevelId"]));
    }
    if (m.find("RiskLevelName") != m.end() && !m["RiskLevelName"].empty()) {
      riskLevelName = make_shared<string>(boost::any_cast<string>(m["RiskLevelName"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
  }


  virtual ~DescribeOssObjectDetailResponseBodyOssObjectDetailRuleList() = default;
};
class DescribeOssObjectDetailResponseBodyOssObjectDetail : public Darabonba::Model {
public:
  shared_ptr<string> bucketName{};
  shared_ptr<string> categoryName{};
  shared_ptr<string> name{};
  shared_ptr<string> regionId{};
  shared_ptr<string> riskLevelName{};
  shared_ptr<vector<DescribeOssObjectDetailResponseBodyOssObjectDetailRuleList>> ruleList{};

  DescribeOssObjectDetailResponseBodyOssObjectDetail() {}

  explicit DescribeOssObjectDetailResponseBodyOssObjectDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucketName) {
      res["BucketName"] = boost::any(*bucketName);
    }
    if (categoryName) {
      res["CategoryName"] = boost::any(*categoryName);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (riskLevelName) {
      res["RiskLevelName"] = boost::any(*riskLevelName);
    }
    if (ruleList) {
      vector<boost::any> temp1;
      for(auto item1:*ruleList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RuleList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BucketName") != m.end() && !m["BucketName"].empty()) {
      bucketName = make_shared<string>(boost::any_cast<string>(m["BucketName"]));
    }
    if (m.find("CategoryName") != m.end() && !m["CategoryName"].empty()) {
      categoryName = make_shared<string>(boost::any_cast<string>(m["CategoryName"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RiskLevelName") != m.end() && !m["RiskLevelName"].empty()) {
      riskLevelName = make_shared<string>(boost::any_cast<string>(m["RiskLevelName"]));
    }
    if (m.find("RuleList") != m.end() && !m["RuleList"].empty()) {
      if (typeid(vector<boost::any>) == m["RuleList"].type()) {
        vector<DescribeOssObjectDetailResponseBodyOssObjectDetailRuleList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RuleList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeOssObjectDetailResponseBodyOssObjectDetailRuleList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ruleList = make_shared<vector<DescribeOssObjectDetailResponseBodyOssObjectDetailRuleList>>(expect1);
      }
    }
  }


  virtual ~DescribeOssObjectDetailResponseBodyOssObjectDetail() = default;
};
class DescribeOssObjectDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeOssObjectDetailResponseBodyOssObjectDetail> ossObjectDetail{};
  shared_ptr<string> requestId{};

  DescribeOssObjectDetailResponseBody() {}

  explicit DescribeOssObjectDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ossObjectDetail) {
      res["OssObjectDetail"] = ossObjectDetail ? boost::any(ossObjectDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OssObjectDetail") != m.end() && !m["OssObjectDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["OssObjectDetail"].type()) {
        DescribeOssObjectDetailResponseBodyOssObjectDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OssObjectDetail"]));
        ossObjectDetail = make_shared<DescribeOssObjectDetailResponseBodyOssObjectDetail>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeOssObjectDetailResponseBody() = default;
};
class DescribeOssObjectDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeOssObjectDetailResponseBody> body{};

  DescribeOssObjectDetailResponse() {}

  explicit DescribeOssObjectDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeOssObjectDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeOssObjectDetailResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeOssObjectDetailResponse() = default;
};
class DescribeOssObjectDetailV2Request : public Darabonba::Model {
public:
  shared_ptr<string> bucketName{};
  shared_ptr<string> id{};
  shared_ptr<string> lang{};
  shared_ptr<string> objectKey{};
  shared_ptr<string> serviceRegionId{};
  shared_ptr<long> templateId{};

  DescribeOssObjectDetailV2Request() {}

  explicit DescribeOssObjectDetailV2Request(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucketName) {
      res["BucketName"] = boost::any(*bucketName);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (objectKey) {
      res["ObjectKey"] = boost::any(*objectKey);
    }
    if (serviceRegionId) {
      res["ServiceRegionId"] = boost::any(*serviceRegionId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BucketName") != m.end() && !m["BucketName"].empty()) {
      bucketName = make_shared<string>(boost::any_cast<string>(m["BucketName"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("ObjectKey") != m.end() && !m["ObjectKey"].empty()) {
      objectKey = make_shared<string>(boost::any_cast<string>(m["ObjectKey"]));
    }
    if (m.find("ServiceRegionId") != m.end() && !m["ServiceRegionId"].empty()) {
      serviceRegionId = make_shared<string>(boost::any_cast<string>(m["ServiceRegionId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
  }


  virtual ~DescribeOssObjectDetailV2Request() = default;
};
class DescribeOssObjectDetailV2ResponseBodyOssObjectDetailRuleListModelTags : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> name{};

  DescribeOssObjectDetailV2ResponseBodyOssObjectDetailRuleListModelTags() {}

  explicit DescribeOssObjectDetailV2ResponseBodyOssObjectDetailRuleListModelTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~DescribeOssObjectDetailV2ResponseBodyOssObjectDetailRuleListModelTags() = default;
};
class DescribeOssObjectDetailV2ResponseBodyOssObjectDetailRuleList : public Darabonba::Model {
public:
  shared_ptr<string> categoryName{};
  shared_ptr<long> count{};
  shared_ptr<vector<DescribeOssObjectDetailV2ResponseBodyOssObjectDetailRuleListModelTags>> modelTags{};
  shared_ptr<long> riskLevelId{};
  shared_ptr<string> riskLevelName{};
  shared_ptr<string> ruleName{};

  DescribeOssObjectDetailV2ResponseBodyOssObjectDetailRuleList() {}

  explicit DescribeOssObjectDetailV2ResponseBodyOssObjectDetailRuleList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryName) {
      res["CategoryName"] = boost::any(*categoryName);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (modelTags) {
      vector<boost::any> temp1;
      for(auto item1:*modelTags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ModelTags"] = boost::any(temp1);
    }
    if (riskLevelId) {
      res["RiskLevelId"] = boost::any(*riskLevelId);
    }
    if (riskLevelName) {
      res["RiskLevelName"] = boost::any(*riskLevelName);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryName") != m.end() && !m["CategoryName"].empty()) {
      categoryName = make_shared<string>(boost::any_cast<string>(m["CategoryName"]));
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("ModelTags") != m.end() && !m["ModelTags"].empty()) {
      if (typeid(vector<boost::any>) == m["ModelTags"].type()) {
        vector<DescribeOssObjectDetailV2ResponseBodyOssObjectDetailRuleListModelTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ModelTags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeOssObjectDetailV2ResponseBodyOssObjectDetailRuleListModelTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        modelTags = make_shared<vector<DescribeOssObjectDetailV2ResponseBodyOssObjectDetailRuleListModelTags>>(expect1);
      }
    }
    if (m.find("RiskLevelId") != m.end() && !m["RiskLevelId"].empty()) {
      riskLevelId = make_shared<long>(boost::any_cast<long>(m["RiskLevelId"]));
    }
    if (m.find("RiskLevelName") != m.end() && !m["RiskLevelName"].empty()) {
      riskLevelName = make_shared<string>(boost::any_cast<string>(m["RiskLevelName"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
  }


  virtual ~DescribeOssObjectDetailV2ResponseBodyOssObjectDetailRuleList() = default;
};
class DescribeOssObjectDetailV2ResponseBodyOssObjectDetail : public Darabonba::Model {
public:
  shared_ptr<string> bucketName{};
  shared_ptr<string> categoryName{};
  shared_ptr<string> fileCategoryName{};
  shared_ptr<string> id{};
  shared_ptr<string> modelTagIds{};
  shared_ptr<string> name{};
  shared_ptr<string> objectAcl{};
  shared_ptr<string> regionId{};
  shared_ptr<long> riskLevelId{};
  shared_ptr<string> riskLevelName{};
  shared_ptr<vector<DescribeOssObjectDetailV2ResponseBodyOssObjectDetailRuleList>> ruleList{};
  shared_ptr<long> size{};

  DescribeOssObjectDetailV2ResponseBodyOssObjectDetail() {}

  explicit DescribeOssObjectDetailV2ResponseBodyOssObjectDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucketName) {
      res["BucketName"] = boost::any(*bucketName);
    }
    if (categoryName) {
      res["CategoryName"] = boost::any(*categoryName);
    }
    if (fileCategoryName) {
      res["FileCategoryName"] = boost::any(*fileCategoryName);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (modelTagIds) {
      res["ModelTagIds"] = boost::any(*modelTagIds);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (objectAcl) {
      res["ObjectAcl"] = boost::any(*objectAcl);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (riskLevelId) {
      res["RiskLevelId"] = boost::any(*riskLevelId);
    }
    if (riskLevelName) {
      res["RiskLevelName"] = boost::any(*riskLevelName);
    }
    if (ruleList) {
      vector<boost::any> temp1;
      for(auto item1:*ruleList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RuleList"] = boost::any(temp1);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BucketName") != m.end() && !m["BucketName"].empty()) {
      bucketName = make_shared<string>(boost::any_cast<string>(m["BucketName"]));
    }
    if (m.find("CategoryName") != m.end() && !m["CategoryName"].empty()) {
      categoryName = make_shared<string>(boost::any_cast<string>(m["CategoryName"]));
    }
    if (m.find("FileCategoryName") != m.end() && !m["FileCategoryName"].empty()) {
      fileCategoryName = make_shared<string>(boost::any_cast<string>(m["FileCategoryName"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ModelTagIds") != m.end() && !m["ModelTagIds"].empty()) {
      modelTagIds = make_shared<string>(boost::any_cast<string>(m["ModelTagIds"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ObjectAcl") != m.end() && !m["ObjectAcl"].empty()) {
      objectAcl = make_shared<string>(boost::any_cast<string>(m["ObjectAcl"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RiskLevelId") != m.end() && !m["RiskLevelId"].empty()) {
      riskLevelId = make_shared<long>(boost::any_cast<long>(m["RiskLevelId"]));
    }
    if (m.find("RiskLevelName") != m.end() && !m["RiskLevelName"].empty()) {
      riskLevelName = make_shared<string>(boost::any_cast<string>(m["RiskLevelName"]));
    }
    if (m.find("RuleList") != m.end() && !m["RuleList"].empty()) {
      if (typeid(vector<boost::any>) == m["RuleList"].type()) {
        vector<DescribeOssObjectDetailV2ResponseBodyOssObjectDetailRuleList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RuleList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeOssObjectDetailV2ResponseBodyOssObjectDetailRuleList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ruleList = make_shared<vector<DescribeOssObjectDetailV2ResponseBodyOssObjectDetailRuleList>>(expect1);
      }
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
  }


  virtual ~DescribeOssObjectDetailV2ResponseBodyOssObjectDetail() = default;
};
class DescribeOssObjectDetailV2ResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeOssObjectDetailV2ResponseBodyOssObjectDetail> ossObjectDetail{};
  shared_ptr<string> requestId{};

  DescribeOssObjectDetailV2ResponseBody() {}

  explicit DescribeOssObjectDetailV2ResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ossObjectDetail) {
      res["OssObjectDetail"] = ossObjectDetail ? boost::any(ossObjectDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OssObjectDetail") != m.end() && !m["OssObjectDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["OssObjectDetail"].type()) {
        DescribeOssObjectDetailV2ResponseBodyOssObjectDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OssObjectDetail"]));
        ossObjectDetail = make_shared<DescribeOssObjectDetailV2ResponseBodyOssObjectDetail>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeOssObjectDetailV2ResponseBody() = default;
};
class DescribeOssObjectDetailV2Response : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeOssObjectDetailV2ResponseBody> body{};

  DescribeOssObjectDetailV2Response() {}

  explicit DescribeOssObjectDetailV2Response(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeOssObjectDetailV2ResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeOssObjectDetailV2ResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeOssObjectDetailV2Response() = default;
};
class DescribeOssObjectsRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> fileCategoryCode{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> lang{};
  shared_ptr<long> lastScanTimeEnd{};
  shared_ptr<long> lastScanTimeStart{};
  shared_ptr<long> marker{};
  shared_ptr<string> name{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> riskLevelId{};
  shared_ptr<long> ruleId{};
  shared_ptr<string> serviceRegionId{};
  shared_ptr<long> templateId{};

  DescribeOssObjectsRequest() {}

  explicit DescribeOssObjectsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (fileCategoryCode) {
      res["FileCategoryCode"] = boost::any(*fileCategoryCode);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (lastScanTimeEnd) {
      res["LastScanTimeEnd"] = boost::any(*lastScanTimeEnd);
    }
    if (lastScanTimeStart) {
      res["LastScanTimeStart"] = boost::any(*lastScanTimeStart);
    }
    if (marker) {
      res["Marker"] = boost::any(*marker);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (riskLevelId) {
      res["RiskLevelId"] = boost::any(*riskLevelId);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (serviceRegionId) {
      res["ServiceRegionId"] = boost::any(*serviceRegionId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("FileCategoryCode") != m.end() && !m["FileCategoryCode"].empty()) {
      fileCategoryCode = make_shared<long>(boost::any_cast<long>(m["FileCategoryCode"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("LastScanTimeEnd") != m.end() && !m["LastScanTimeEnd"].empty()) {
      lastScanTimeEnd = make_shared<long>(boost::any_cast<long>(m["LastScanTimeEnd"]));
    }
    if (m.find("LastScanTimeStart") != m.end() && !m["LastScanTimeStart"].empty()) {
      lastScanTimeStart = make_shared<long>(boost::any_cast<long>(m["LastScanTimeStart"]));
    }
    if (m.find("Marker") != m.end() && !m["Marker"].empty()) {
      marker = make_shared<long>(boost::any_cast<long>(m["Marker"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RiskLevelId") != m.end() && !m["RiskLevelId"].empty()) {
      riskLevelId = make_shared<long>(boost::any_cast<long>(m["RiskLevelId"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
    if (m.find("ServiceRegionId") != m.end() && !m["ServiceRegionId"].empty()) {
      serviceRegionId = make_shared<string>(boost::any_cast<string>(m["ServiceRegionId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
  }


  virtual ~DescribeOssObjectsRequest() = default;
};
class DescribeOssObjectsResponseBodyItemsRuleList : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<string> name{};
  shared_ptr<long> riskLevelId{};

  DescribeOssObjectsResponseBodyItemsRuleList() {}

  explicit DescribeOssObjectsResponseBodyItemsRuleList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (riskLevelId) {
      res["RiskLevelId"] = boost::any(*riskLevelId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RiskLevelId") != m.end() && !m["RiskLevelId"].empty()) {
      riskLevelId = make_shared<long>(boost::any_cast<long>(m["RiskLevelId"]));
    }
  }


  virtual ~DescribeOssObjectsResponseBodyItemsRuleList() = default;
};
class DescribeOssObjectsResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<string> bucketName{};
  shared_ptr<long> category{};
  shared_ptr<string> categoryName{};
  shared_ptr<long> fileCategoryCode{};
  shared_ptr<string> fileCategoryName{};
  shared_ptr<string> fileId{};
  shared_ptr<string> id{};
  shared_ptr<long> instanceId{};
  shared_ptr<long> lastModifiedTime{};
  shared_ptr<string> name{};
  shared_ptr<string> regionId{};
  shared_ptr<long> riskLevelId{};
  shared_ptr<string> riskLevelName{};
  shared_ptr<long> ruleCount{};
  shared_ptr<vector<DescribeOssObjectsResponseBodyItemsRuleList>> ruleList{};
  shared_ptr<long> sensitiveCount{};
  shared_ptr<long> size{};

  DescribeOssObjectsResponseBodyItems() {}

  explicit DescribeOssObjectsResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucketName) {
      res["BucketName"] = boost::any(*bucketName);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (categoryName) {
      res["CategoryName"] = boost::any(*categoryName);
    }
    if (fileCategoryCode) {
      res["FileCategoryCode"] = boost::any(*fileCategoryCode);
    }
    if (fileCategoryName) {
      res["FileCategoryName"] = boost::any(*fileCategoryName);
    }
    if (fileId) {
      res["FileId"] = boost::any(*fileId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (lastModifiedTime) {
      res["LastModifiedTime"] = boost::any(*lastModifiedTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (riskLevelId) {
      res["RiskLevelId"] = boost::any(*riskLevelId);
    }
    if (riskLevelName) {
      res["RiskLevelName"] = boost::any(*riskLevelName);
    }
    if (ruleCount) {
      res["RuleCount"] = boost::any(*ruleCount);
    }
    if (ruleList) {
      vector<boost::any> temp1;
      for(auto item1:*ruleList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RuleList"] = boost::any(temp1);
    }
    if (sensitiveCount) {
      res["SensitiveCount"] = boost::any(*sensitiveCount);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BucketName") != m.end() && !m["BucketName"].empty()) {
      bucketName = make_shared<string>(boost::any_cast<string>(m["BucketName"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<long>(boost::any_cast<long>(m["Category"]));
    }
    if (m.find("CategoryName") != m.end() && !m["CategoryName"].empty()) {
      categoryName = make_shared<string>(boost::any_cast<string>(m["CategoryName"]));
    }
    if (m.find("FileCategoryCode") != m.end() && !m["FileCategoryCode"].empty()) {
      fileCategoryCode = make_shared<long>(boost::any_cast<long>(m["FileCategoryCode"]));
    }
    if (m.find("FileCategoryName") != m.end() && !m["FileCategoryName"].empty()) {
      fileCategoryName = make_shared<string>(boost::any_cast<string>(m["FileCategoryName"]));
    }
    if (m.find("FileId") != m.end() && !m["FileId"].empty()) {
      fileId = make_shared<string>(boost::any_cast<string>(m["FileId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<long>(boost::any_cast<long>(m["InstanceId"]));
    }
    if (m.find("LastModifiedTime") != m.end() && !m["LastModifiedTime"].empty()) {
      lastModifiedTime = make_shared<long>(boost::any_cast<long>(m["LastModifiedTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RiskLevelId") != m.end() && !m["RiskLevelId"].empty()) {
      riskLevelId = make_shared<long>(boost::any_cast<long>(m["RiskLevelId"]));
    }
    if (m.find("RiskLevelName") != m.end() && !m["RiskLevelName"].empty()) {
      riskLevelName = make_shared<string>(boost::any_cast<string>(m["RiskLevelName"]));
    }
    if (m.find("RuleCount") != m.end() && !m["RuleCount"].empty()) {
      ruleCount = make_shared<long>(boost::any_cast<long>(m["RuleCount"]));
    }
    if (m.find("RuleList") != m.end() && !m["RuleList"].empty()) {
      if (typeid(vector<boost::any>) == m["RuleList"].type()) {
        vector<DescribeOssObjectsResponseBodyItemsRuleList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RuleList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeOssObjectsResponseBodyItemsRuleList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ruleList = make_shared<vector<DescribeOssObjectsResponseBodyItemsRuleList>>(expect1);
      }
    }
    if (m.find("SensitiveCount") != m.end() && !m["SensitiveCount"].empty()) {
      sensitiveCount = make_shared<long>(boost::any_cast<long>(m["SensitiveCount"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
  }


  virtual ~DescribeOssObjectsResponseBodyItems() = default;
};
class DescribeOssObjectsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<vector<DescribeOssObjectsResponseBodyItems>> items{};
  shared_ptr<string> marker{};
  shared_ptr<string> nextMarker{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<bool> truncated{};

  DescribeOssObjectsResponseBody() {}

  explicit DescribeOssObjectsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    if (marker) {
      res["Marker"] = boost::any(*marker);
    }
    if (nextMarker) {
      res["NextMarker"] = boost::any(*nextMarker);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (truncated) {
      res["Truncated"] = boost::any(*truncated);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribeOssObjectsResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeOssObjectsResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeOssObjectsResponseBodyItems>>(expect1);
      }
    }
    if (m.find("Marker") != m.end() && !m["Marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["Marker"]));
    }
    if (m.find("NextMarker") != m.end() && !m["NextMarker"].empty()) {
      nextMarker = make_shared<string>(boost::any_cast<string>(m["NextMarker"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("Truncated") != m.end() && !m["Truncated"].empty()) {
      truncated = make_shared<bool>(boost::any_cast<bool>(m["Truncated"]));
    }
  }


  virtual ~DescribeOssObjectsResponseBody() = default;
};
class DescribeOssObjectsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeOssObjectsResponseBody> body{};

  DescribeOssObjectsResponse() {}

  explicit DescribeOssObjectsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeOssObjectsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeOssObjectsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeOssObjectsResponse() = default;
};
class DescribePackagesRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> instanceId{};
  shared_ptr<string> lang{};
  shared_ptr<string> name{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> productId{};
  shared_ptr<long> riskLevelId{};
  shared_ptr<long> ruleId{};

  DescribePackagesRequest() {}

  explicit DescribePackagesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    if (riskLevelId) {
      res["RiskLevelId"] = boost::any(*riskLevelId);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<long>(boost::any_cast<long>(m["InstanceId"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<long>(boost::any_cast<long>(m["ProductId"]));
    }
    if (m.find("RiskLevelId") != m.end() && !m["RiskLevelId"].empty()) {
      riskLevelId = make_shared<long>(boost::any_cast<long>(m["RiskLevelId"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
  }


  virtual ~DescribePackagesRequest() = default;
};
class DescribePackagesResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<long> creationTime{};
  shared_ptr<long> id{};
  shared_ptr<long> instanceId{};
  shared_ptr<string> name{};
  shared_ptr<string> owner{};
  shared_ptr<long> riskLevelId{};
  shared_ptr<string> riskLevelName{};
  shared_ptr<bool> sensitive{};
  shared_ptr<long> sensitiveCount{};
  shared_ptr<long> totalCount{};

  DescribePackagesResponseBodyItems() {}

  explicit DescribePackagesResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (riskLevelId) {
      res["RiskLevelId"] = boost::any(*riskLevelId);
    }
    if (riskLevelName) {
      res["RiskLevelName"] = boost::any(*riskLevelName);
    }
    if (sensitive) {
      res["Sensitive"] = boost::any(*sensitive);
    }
    if (sensitiveCount) {
      res["SensitiveCount"] = boost::any(*sensitiveCount);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<long>(boost::any_cast<long>(m["CreationTime"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<long>(boost::any_cast<long>(m["InstanceId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("RiskLevelId") != m.end() && !m["RiskLevelId"].empty()) {
      riskLevelId = make_shared<long>(boost::any_cast<long>(m["RiskLevelId"]));
    }
    if (m.find("RiskLevelName") != m.end() && !m["RiskLevelName"].empty()) {
      riskLevelName = make_shared<string>(boost::any_cast<string>(m["RiskLevelName"]));
    }
    if (m.find("Sensitive") != m.end() && !m["Sensitive"].empty()) {
      sensitive = make_shared<bool>(boost::any_cast<bool>(m["Sensitive"]));
    }
    if (m.find("SensitiveCount") != m.end() && !m["SensitiveCount"].empty()) {
      sensitiveCount = make_shared<long>(boost::any_cast<long>(m["SensitiveCount"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribePackagesResponseBodyItems() = default;
};
class DescribePackagesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<vector<DescribePackagesResponseBodyItems>> items{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribePackagesResponseBody() {}

  explicit DescribePackagesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
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
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribePackagesResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePackagesResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribePackagesResponseBodyItems>>(expect1);
      }
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribePackagesResponseBody() = default;
};
class DescribePackagesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribePackagesResponseBody> body{};

  DescribePackagesResponse() {}

  explicit DescribePackagesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribePackagesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePackagesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePackagesResponse() = default;
};
class DescribeParentInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<long> authStatus{};
  shared_ptr<long> checkStatus{};
  shared_ptr<string> clusterStatus{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> dbName{};
  shared_ptr<string> engineType{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> lang{};
  shared_ptr<long> memberAccount{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> resourceType{};
  shared_ptr<string> serviceRegionId{};

  DescribeParentInstanceRequest() {}

  explicit DescribeParentInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authStatus) {
      res["AuthStatus"] = boost::any(*authStatus);
    }
    if (checkStatus) {
      res["CheckStatus"] = boost::any(*checkStatus);
    }
    if (clusterStatus) {
      res["ClusterStatus"] = boost::any(*clusterStatus);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (engineType) {
      res["EngineType"] = boost::any(*engineType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (memberAccount) {
      res["MemberAccount"] = boost::any(*memberAccount);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (serviceRegionId) {
      res["ServiceRegionId"] = boost::any(*serviceRegionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthStatus") != m.end() && !m["AuthStatus"].empty()) {
      authStatus = make_shared<long>(boost::any_cast<long>(m["AuthStatus"]));
    }
    if (m.find("CheckStatus") != m.end() && !m["CheckStatus"].empty()) {
      checkStatus = make_shared<long>(boost::any_cast<long>(m["CheckStatus"]));
    }
    if (m.find("ClusterStatus") != m.end() && !m["ClusterStatus"].empty()) {
      clusterStatus = make_shared<string>(boost::any_cast<string>(m["ClusterStatus"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("EngineType") != m.end() && !m["EngineType"].empty()) {
      engineType = make_shared<string>(boost::any_cast<string>(m["EngineType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("MemberAccount") != m.end() && !m["MemberAccount"].empty()) {
      memberAccount = make_shared<long>(boost::any_cast<long>(m["MemberAccount"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<long>(boost::any_cast<long>(m["ResourceType"]));
    }
    if (m.find("ServiceRegionId") != m.end() && !m["ServiceRegionId"].empty()) {
      serviceRegionId = make_shared<string>(boost::any_cast<string>(m["ServiceRegionId"]));
    }
  }


  virtual ~DescribeParentInstanceRequest() = default;
};
class DescribeParentInstanceResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<long> auditStatus{};
  shared_ptr<long> authStatus{};
  shared_ptr<long> authTime{};
  shared_ptr<string> clusterStatus{};
  shared_ptr<string> connectNode{};
  shared_ptr<string> dbNum{};
  shared_ptr<string> engineType{};
  shared_ptr<string> instanceDescription{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> instanceSize{};
  shared_ptr<string> localName{};
  shared_ptr<long> memberAccount{};
  shared_ptr<string> parentId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> supportConnectNodes{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> tenantName{};
  shared_ptr<string> unConnectDbCount{};
  shared_ptr<string> unSupportOneClickAuthReason{};

  DescribeParentInstanceResponseBodyItems() {}

  explicit DescribeParentInstanceResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auditStatus) {
      res["AuditStatus"] = boost::any(*auditStatus);
    }
    if (authStatus) {
      res["AuthStatus"] = boost::any(*authStatus);
    }
    if (authTime) {
      res["AuthTime"] = boost::any(*authTime);
    }
    if (clusterStatus) {
      res["ClusterStatus"] = boost::any(*clusterStatus);
    }
    if (connectNode) {
      res["ConnectNode"] = boost::any(*connectNode);
    }
    if (dbNum) {
      res["DbNum"] = boost::any(*dbNum);
    }
    if (engineType) {
      res["EngineType"] = boost::any(*engineType);
    }
    if (instanceDescription) {
      res["InstanceDescription"] = boost::any(*instanceDescription);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceSize) {
      res["InstanceSize"] = boost::any(*instanceSize);
    }
    if (localName) {
      res["LocalName"] = boost::any(*localName);
    }
    if (memberAccount) {
      res["MemberAccount"] = boost::any(*memberAccount);
    }
    if (parentId) {
      res["ParentId"] = boost::any(*parentId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (supportConnectNodes) {
      res["SupportConnectNodes"] = boost::any(*supportConnectNodes);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (tenantName) {
      res["TenantName"] = boost::any(*tenantName);
    }
    if (unConnectDbCount) {
      res["UnConnectDbCount"] = boost::any(*unConnectDbCount);
    }
    if (unSupportOneClickAuthReason) {
      res["UnSupportOneClickAuthReason"] = boost::any(*unSupportOneClickAuthReason);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuditStatus") != m.end() && !m["AuditStatus"].empty()) {
      auditStatus = make_shared<long>(boost::any_cast<long>(m["AuditStatus"]));
    }
    if (m.find("AuthStatus") != m.end() && !m["AuthStatus"].empty()) {
      authStatus = make_shared<long>(boost::any_cast<long>(m["AuthStatus"]));
    }
    if (m.find("AuthTime") != m.end() && !m["AuthTime"].empty()) {
      authTime = make_shared<long>(boost::any_cast<long>(m["AuthTime"]));
    }
    if (m.find("ClusterStatus") != m.end() && !m["ClusterStatus"].empty()) {
      clusterStatus = make_shared<string>(boost::any_cast<string>(m["ClusterStatus"]));
    }
    if (m.find("ConnectNode") != m.end() && !m["ConnectNode"].empty()) {
      connectNode = make_shared<string>(boost::any_cast<string>(m["ConnectNode"]));
    }
    if (m.find("DbNum") != m.end() && !m["DbNum"].empty()) {
      dbNum = make_shared<string>(boost::any_cast<string>(m["DbNum"]));
    }
    if (m.find("EngineType") != m.end() && !m["EngineType"].empty()) {
      engineType = make_shared<string>(boost::any_cast<string>(m["EngineType"]));
    }
    if (m.find("InstanceDescription") != m.end() && !m["InstanceDescription"].empty()) {
      instanceDescription = make_shared<string>(boost::any_cast<string>(m["InstanceDescription"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceSize") != m.end() && !m["InstanceSize"].empty()) {
      instanceSize = make_shared<long>(boost::any_cast<long>(m["InstanceSize"]));
    }
    if (m.find("LocalName") != m.end() && !m["LocalName"].empty()) {
      localName = make_shared<string>(boost::any_cast<string>(m["LocalName"]));
    }
    if (m.find("MemberAccount") != m.end() && !m["MemberAccount"].empty()) {
      memberAccount = make_shared<long>(boost::any_cast<long>(m["MemberAccount"]));
    }
    if (m.find("ParentId") != m.end() && !m["ParentId"].empty()) {
      parentId = make_shared<string>(boost::any_cast<string>(m["ParentId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("SupportConnectNodes") != m.end() && !m["SupportConnectNodes"].empty()) {
      supportConnectNodes = make_shared<string>(boost::any_cast<string>(m["SupportConnectNodes"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
    if (m.find("TenantName") != m.end() && !m["TenantName"].empty()) {
      tenantName = make_shared<string>(boost::any_cast<string>(m["TenantName"]));
    }
    if (m.find("UnConnectDbCount") != m.end() && !m["UnConnectDbCount"].empty()) {
      unConnectDbCount = make_shared<string>(boost::any_cast<string>(m["UnConnectDbCount"]));
    }
    if (m.find("UnSupportOneClickAuthReason") != m.end() && !m["UnSupportOneClickAuthReason"].empty()) {
      unSupportOneClickAuthReason = make_shared<string>(boost::any_cast<string>(m["UnSupportOneClickAuthReason"]));
    }
  }


  virtual ~DescribeParentInstanceResponseBodyItems() = default;
};
class DescribeParentInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<vector<DescribeParentInstanceResponseBodyItems>> items{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeParentInstanceResponseBody() {}

  explicit DescribeParentInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
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
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribeParentInstanceResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeParentInstanceResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeParentInstanceResponseBodyItems>>(expect1);
      }
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeParentInstanceResponseBody() = default;
};
class DescribeParentInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeParentInstanceResponseBody> body{};

  DescribeParentInstanceResponse() {}

  explicit DescribeParentInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeParentInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeParentInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeParentInstanceResponse() = default;
};
class DescribeRiskLevelsRequest : public Darabonba::Model {
public:
  shared_ptr<long> featureType{};
  shared_ptr<string> lang{};
  shared_ptr<long> templateId{};

  DescribeRiskLevelsRequest() {}

  explicit DescribeRiskLevelsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (featureType) {
      res["FeatureType"] = boost::any(*featureType);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FeatureType") != m.end() && !m["FeatureType"].empty()) {
      featureType = make_shared<long>(boost::any_cast<long>(m["FeatureType"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
  }


  virtual ~DescribeRiskLevelsRequest() = default;
};
class DescribeRiskLevelsResponseBodyRiskLevelList : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<long> id{};
  shared_ptr<string> name{};
  shared_ptr<long> referenceNum{};

  DescribeRiskLevelsResponseBodyRiskLevelList() {}

  explicit DescribeRiskLevelsResponseBodyRiskLevelList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (referenceNum) {
      res["ReferenceNum"] = boost::any(*referenceNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ReferenceNum") != m.end() && !m["ReferenceNum"].empty()) {
      referenceNum = make_shared<long>(boost::any_cast<long>(m["ReferenceNum"]));
    }
  }


  virtual ~DescribeRiskLevelsResponseBodyRiskLevelList() = default;
};
class DescribeRiskLevelsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeRiskLevelsResponseBodyRiskLevelList>> riskLevelList{};

  DescribeRiskLevelsResponseBody() {}

  explicit DescribeRiskLevelsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (riskLevelList) {
      vector<boost::any> temp1;
      for(auto item1:*riskLevelList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RiskLevelList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RiskLevelList") != m.end() && !m["RiskLevelList"].empty()) {
      if (typeid(vector<boost::any>) == m["RiskLevelList"].type()) {
        vector<DescribeRiskLevelsResponseBodyRiskLevelList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RiskLevelList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRiskLevelsResponseBodyRiskLevelList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        riskLevelList = make_shared<vector<DescribeRiskLevelsResponseBodyRiskLevelList>>(expect1);
      }
    }
  }


  virtual ~DescribeRiskLevelsResponseBody() = default;
};
class DescribeRiskLevelsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeRiskLevelsResponseBody> body{};

  DescribeRiskLevelsResponse() {}

  explicit DescribeRiskLevelsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeRiskLevelsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRiskLevelsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRiskLevelsResponse() = default;
};
class DescribeRulesRequest : public Darabonba::Model {
public:
  shared_ptr<long> category{};
  shared_ptr<long> contentCategory{};
  shared_ptr<string> cooperationChannel{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> customType{};
  shared_ptr<long> featureType{};
  shared_ptr<string> groupId{};
  shared_ptr<bool> keywordCompatible{};
  shared_ptr<string> lang{};
  shared_ptr<long> matchType{};
  shared_ptr<string> name{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> productCode{};
  shared_ptr<long> productId{};
  shared_ptr<long> riskLevelId{};
  shared_ptr<long> ruleType{};
  shared_ptr<bool> simplify{};
  shared_ptr<long> status{};
  shared_ptr<long> supportForm{};
  shared_ptr<long> warnLevel{};

  DescribeRulesRequest() {}

  explicit DescribeRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (contentCategory) {
      res["ContentCategory"] = boost::any(*contentCategory);
    }
    if (cooperationChannel) {
      res["CooperationChannel"] = boost::any(*cooperationChannel);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (customType) {
      res["CustomType"] = boost::any(*customType);
    }
    if (featureType) {
      res["FeatureType"] = boost::any(*featureType);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (keywordCompatible) {
      res["KeywordCompatible"] = boost::any(*keywordCompatible);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (matchType) {
      res["MatchType"] = boost::any(*matchType);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    if (riskLevelId) {
      res["RiskLevelId"] = boost::any(*riskLevelId);
    }
    if (ruleType) {
      res["RuleType"] = boost::any(*ruleType);
    }
    if (simplify) {
      res["Simplify"] = boost::any(*simplify);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (supportForm) {
      res["SupportForm"] = boost::any(*supportForm);
    }
    if (warnLevel) {
      res["WarnLevel"] = boost::any(*warnLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<long>(boost::any_cast<long>(m["Category"]));
    }
    if (m.find("ContentCategory") != m.end() && !m["ContentCategory"].empty()) {
      contentCategory = make_shared<long>(boost::any_cast<long>(m["ContentCategory"]));
    }
    if (m.find("CooperationChannel") != m.end() && !m["CooperationChannel"].empty()) {
      cooperationChannel = make_shared<string>(boost::any_cast<string>(m["CooperationChannel"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("CustomType") != m.end() && !m["CustomType"].empty()) {
      customType = make_shared<long>(boost::any_cast<long>(m["CustomType"]));
    }
    if (m.find("FeatureType") != m.end() && !m["FeatureType"].empty()) {
      featureType = make_shared<long>(boost::any_cast<long>(m["FeatureType"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("KeywordCompatible") != m.end() && !m["KeywordCompatible"].empty()) {
      keywordCompatible = make_shared<bool>(boost::any_cast<bool>(m["KeywordCompatible"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("MatchType") != m.end() && !m["MatchType"].empty()) {
      matchType = make_shared<long>(boost::any_cast<long>(m["MatchType"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<long>(boost::any_cast<long>(m["ProductCode"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<long>(boost::any_cast<long>(m["ProductId"]));
    }
    if (m.find("RiskLevelId") != m.end() && !m["RiskLevelId"].empty()) {
      riskLevelId = make_shared<long>(boost::any_cast<long>(m["RiskLevelId"]));
    }
    if (m.find("RuleType") != m.end() && !m["RuleType"].empty()) {
      ruleType = make_shared<long>(boost::any_cast<long>(m["RuleType"]));
    }
    if (m.find("Simplify") != m.end() && !m["Simplify"].empty()) {
      simplify = make_shared<bool>(boost::any_cast<bool>(m["Simplify"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("SupportForm") != m.end() && !m["SupportForm"].empty()) {
      supportForm = make_shared<long>(boost::any_cast<long>(m["SupportForm"]));
    }
    if (m.find("WarnLevel") != m.end() && !m["WarnLevel"].empty()) {
      warnLevel = make_shared<long>(boost::any_cast<long>(m["WarnLevel"]));
    }
  }


  virtual ~DescribeRulesRequest() = default;
};
class DescribeRulesResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<long> category{};
  shared_ptr<string> categoryName{};
  shared_ptr<string> content{};
  shared_ptr<string> contentCategory{};
  shared_ptr<long> customType{};
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> gmtModified{};
  shared_ptr<string> groupId{};
  shared_ptr<long> hitTotalCount{};
  shared_ptr<long> id{};
  shared_ptr<string> loginName{};
  shared_ptr<string> majorKey{};
  shared_ptr<long> matchType{};
  shared_ptr<string> modelRuleIds{};
  shared_ptr<string> name{};
  shared_ptr<string> productCode{};
  shared_ptr<long> productId{};
  shared_ptr<long> riskLevelId{};
  shared_ptr<string> riskLevelName{};
  shared_ptr<string> statExpress{};
  shared_ptr<long> status{};
  shared_ptr<long> supportForm{};
  shared_ptr<string> target{};
  shared_ptr<string> templateRuleIds{};
  shared_ptr<long> userId{};
  shared_ptr<long> warnLevel{};

  DescribeRulesResponseBodyItems() {}

  explicit DescribeRulesResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (categoryName) {
      res["CategoryName"] = boost::any(*categoryName);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (contentCategory) {
      res["ContentCategory"] = boost::any(*contentCategory);
    }
    if (customType) {
      res["CustomType"] = boost::any(*customType);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (hitTotalCount) {
      res["HitTotalCount"] = boost::any(*hitTotalCount);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (loginName) {
      res["LoginName"] = boost::any(*loginName);
    }
    if (majorKey) {
      res["MajorKey"] = boost::any(*majorKey);
    }
    if (matchType) {
      res["MatchType"] = boost::any(*matchType);
    }
    if (modelRuleIds) {
      res["ModelRuleIds"] = boost::any(*modelRuleIds);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    if (riskLevelId) {
      res["RiskLevelId"] = boost::any(*riskLevelId);
    }
    if (riskLevelName) {
      res["RiskLevelName"] = boost::any(*riskLevelName);
    }
    if (statExpress) {
      res["StatExpress"] = boost::any(*statExpress);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (supportForm) {
      res["SupportForm"] = boost::any(*supportForm);
    }
    if (target) {
      res["Target"] = boost::any(*target);
    }
    if (templateRuleIds) {
      res["TemplateRuleIds"] = boost::any(*templateRuleIds);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (warnLevel) {
      res["WarnLevel"] = boost::any(*warnLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<long>(boost::any_cast<long>(m["Category"]));
    }
    if (m.find("CategoryName") != m.end() && !m["CategoryName"].empty()) {
      categoryName = make_shared<string>(boost::any_cast<string>(m["CategoryName"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("ContentCategory") != m.end() && !m["ContentCategory"].empty()) {
      contentCategory = make_shared<string>(boost::any_cast<string>(m["ContentCategory"]));
    }
    if (m.find("CustomType") != m.end() && !m["CustomType"].empty()) {
      customType = make_shared<long>(boost::any_cast<long>(m["CustomType"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<long>(boost::any_cast<long>(m["GmtModified"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("HitTotalCount") != m.end() && !m["HitTotalCount"].empty()) {
      hitTotalCount = make_shared<long>(boost::any_cast<long>(m["HitTotalCount"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("LoginName") != m.end() && !m["LoginName"].empty()) {
      loginName = make_shared<string>(boost::any_cast<string>(m["LoginName"]));
    }
    if (m.find("MajorKey") != m.end() && !m["MajorKey"].empty()) {
      majorKey = make_shared<string>(boost::any_cast<string>(m["MajorKey"]));
    }
    if (m.find("MatchType") != m.end() && !m["MatchType"].empty()) {
      matchType = make_shared<long>(boost::any_cast<long>(m["MatchType"]));
    }
    if (m.find("ModelRuleIds") != m.end() && !m["ModelRuleIds"].empty()) {
      modelRuleIds = make_shared<string>(boost::any_cast<string>(m["ModelRuleIds"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<long>(boost::any_cast<long>(m["ProductId"]));
    }
    if (m.find("RiskLevelId") != m.end() && !m["RiskLevelId"].empty()) {
      riskLevelId = make_shared<long>(boost::any_cast<long>(m["RiskLevelId"]));
    }
    if (m.find("RiskLevelName") != m.end() && !m["RiskLevelName"].empty()) {
      riskLevelName = make_shared<string>(boost::any_cast<string>(m["RiskLevelName"]));
    }
    if (m.find("StatExpress") != m.end() && !m["StatExpress"].empty()) {
      statExpress = make_shared<string>(boost::any_cast<string>(m["StatExpress"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("SupportForm") != m.end() && !m["SupportForm"].empty()) {
      supportForm = make_shared<long>(boost::any_cast<long>(m["SupportForm"]));
    }
    if (m.find("Target") != m.end() && !m["Target"].empty()) {
      target = make_shared<string>(boost::any_cast<string>(m["Target"]));
    }
    if (m.find("TemplateRuleIds") != m.end() && !m["TemplateRuleIds"].empty()) {
      templateRuleIds = make_shared<string>(boost::any_cast<string>(m["TemplateRuleIds"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["UserId"]));
    }
    if (m.find("WarnLevel") != m.end() && !m["WarnLevel"].empty()) {
      warnLevel = make_shared<long>(boost::any_cast<long>(m["WarnLevel"]));
    }
  }


  virtual ~DescribeRulesResponseBodyItems() = default;
};
class DescribeRulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<vector<DescribeRulesResponseBodyItems>> items{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeRulesResponseBody() {}

  explicit DescribeRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
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
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribeRulesResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRulesResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeRulesResponseBodyItems>>(expect1);
      }
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeRulesResponseBody() = default;
};
class DescribeRulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeRulesResponseBody> body{};

  DescribeRulesResponse() {}

  explicit DescribeRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeRulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRulesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRulesResponse() = default;
};
class DescribeTablesRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> instanceId{};
  shared_ptr<string> lang{};
  shared_ptr<string> name{};
  shared_ptr<long> packageId{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> productCode{};
  shared_ptr<long> productId{};
  shared_ptr<long> riskLevelId{};
  shared_ptr<long> ruleId{};
  shared_ptr<string> serviceRegionId{};
  shared_ptr<long> templateId{};

  DescribeTablesRequest() {}

  explicit DescribeTablesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (packageId) {
      res["PackageId"] = boost::any(*packageId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    if (riskLevelId) {
      res["RiskLevelId"] = boost::any(*riskLevelId);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (serviceRegionId) {
      res["ServiceRegionId"] = boost::any(*serviceRegionId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<long>(boost::any_cast<long>(m["InstanceId"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PackageId") != m.end() && !m["PackageId"].empty()) {
      packageId = make_shared<long>(boost::any_cast<long>(m["PackageId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<long>(boost::any_cast<long>(m["ProductId"]));
    }
    if (m.find("RiskLevelId") != m.end() && !m["RiskLevelId"].empty()) {
      riskLevelId = make_shared<long>(boost::any_cast<long>(m["RiskLevelId"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
    if (m.find("ServiceRegionId") != m.end() && !m["ServiceRegionId"].empty()) {
      serviceRegionId = make_shared<string>(boost::any_cast<string>(m["ServiceRegionId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
  }


  virtual ~DescribeTablesRequest() = default;
};
class DescribeTablesResponseBodyItemsRuleList : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<string> name{};
  shared_ptr<long> riskLevelId{};

  DescribeTablesResponseBodyItemsRuleList() {}

  explicit DescribeTablesResponseBodyItemsRuleList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (riskLevelId) {
      res["RiskLevelId"] = boost::any(*riskLevelId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RiskLevelId") != m.end() && !m["RiskLevelId"].empty()) {
      riskLevelId = make_shared<long>(boost::any_cast<long>(m["RiskLevelId"]));
    }
  }


  virtual ~DescribeTablesResponseBodyItemsRuleList() = default;
};
class DescribeTablesResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<long> creationTime{};
  shared_ptr<long> id{};
  shared_ptr<string> instanceDescription{};
  shared_ptr<long> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> name{};
  shared_ptr<string> owner{};
  shared_ptr<string> productCode{};
  shared_ptr<string> productId{};
  shared_ptr<long> riskLevelId{};
  shared_ptr<string> riskLevelName{};
  shared_ptr<vector<DescribeTablesResponseBodyItemsRuleList>> ruleList{};
  shared_ptr<bool> sensitive{};
  shared_ptr<long> sensitiveCount{};
  shared_ptr<string> sensitiveRatio{};
  shared_ptr<string> tenantName{};
  shared_ptr<long> totalCount{};

  DescribeTablesResponseBodyItems() {}

  explicit DescribeTablesResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (instanceDescription) {
      res["InstanceDescription"] = boost::any(*instanceDescription);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    if (riskLevelId) {
      res["RiskLevelId"] = boost::any(*riskLevelId);
    }
    if (riskLevelName) {
      res["RiskLevelName"] = boost::any(*riskLevelName);
    }
    if (ruleList) {
      vector<boost::any> temp1;
      for(auto item1:*ruleList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RuleList"] = boost::any(temp1);
    }
    if (sensitive) {
      res["Sensitive"] = boost::any(*sensitive);
    }
    if (sensitiveCount) {
      res["SensitiveCount"] = boost::any(*sensitiveCount);
    }
    if (sensitiveRatio) {
      res["SensitiveRatio"] = boost::any(*sensitiveRatio);
    }
    if (tenantName) {
      res["TenantName"] = boost::any(*tenantName);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<long>(boost::any_cast<long>(m["CreationTime"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("InstanceDescription") != m.end() && !m["InstanceDescription"].empty()) {
      instanceDescription = make_shared<string>(boost::any_cast<string>(m["InstanceDescription"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<long>(boost::any_cast<long>(m["InstanceId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["ProductId"]));
    }
    if (m.find("RiskLevelId") != m.end() && !m["RiskLevelId"].empty()) {
      riskLevelId = make_shared<long>(boost::any_cast<long>(m["RiskLevelId"]));
    }
    if (m.find("RiskLevelName") != m.end() && !m["RiskLevelName"].empty()) {
      riskLevelName = make_shared<string>(boost::any_cast<string>(m["RiskLevelName"]));
    }
    if (m.find("RuleList") != m.end() && !m["RuleList"].empty()) {
      if (typeid(vector<boost::any>) == m["RuleList"].type()) {
        vector<DescribeTablesResponseBodyItemsRuleList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RuleList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeTablesResponseBodyItemsRuleList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ruleList = make_shared<vector<DescribeTablesResponseBodyItemsRuleList>>(expect1);
      }
    }
    if (m.find("Sensitive") != m.end() && !m["Sensitive"].empty()) {
      sensitive = make_shared<bool>(boost::any_cast<bool>(m["Sensitive"]));
    }
    if (m.find("SensitiveCount") != m.end() && !m["SensitiveCount"].empty()) {
      sensitiveCount = make_shared<long>(boost::any_cast<long>(m["SensitiveCount"]));
    }
    if (m.find("SensitiveRatio") != m.end() && !m["SensitiveRatio"].empty()) {
      sensitiveRatio = make_shared<string>(boost::any_cast<string>(m["SensitiveRatio"]));
    }
    if (m.find("TenantName") != m.end() && !m["TenantName"].empty()) {
      tenantName = make_shared<string>(boost::any_cast<string>(m["TenantName"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeTablesResponseBodyItems() = default;
};
class DescribeTablesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<vector<DescribeTablesResponseBodyItems>> items{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeTablesResponseBody() {}

  explicit DescribeTablesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
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
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribeTablesResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeTablesResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeTablesResponseBodyItems>>(expect1);
      }
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeTablesResponseBody() = default;
};
class DescribeTablesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeTablesResponseBody> body{};

  DescribeTablesResponse() {}

  explicit DescribeTablesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeTablesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeTablesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeTablesResponse() = default;
};
class DescribeTemplateAllRulesRequest : public Darabonba::Model {
public:
  shared_ptr<long> featureType{};
  shared_ptr<string> lang{};
  shared_ptr<long> templateId{};

  DescribeTemplateAllRulesRequest() {}

  explicit DescribeTemplateAllRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (featureType) {
      res["FeatureType"] = boost::any(*featureType);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FeatureType") != m.end() && !m["FeatureType"].empty()) {
      featureType = make_shared<long>(boost::any_cast<long>(m["FeatureType"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
  }


  virtual ~DescribeTemplateAllRulesRequest() = default;
};
class DescribeTemplateAllRulesResponseBodyRuleList : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> name{};

  DescribeTemplateAllRulesResponseBodyRuleList() {}

  explicit DescribeTemplateAllRulesResponseBodyRuleList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~DescribeTemplateAllRulesResponseBodyRuleList() = default;
};
class DescribeTemplateAllRulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeTemplateAllRulesResponseBodyRuleList>> ruleList{};

  DescribeTemplateAllRulesResponseBody() {}

  explicit DescribeTemplateAllRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (ruleList) {
      vector<boost::any> temp1;
      for(auto item1:*ruleList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RuleList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RuleList") != m.end() && !m["RuleList"].empty()) {
      if (typeid(vector<boost::any>) == m["RuleList"].type()) {
        vector<DescribeTemplateAllRulesResponseBodyRuleList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RuleList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeTemplateAllRulesResponseBodyRuleList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ruleList = make_shared<vector<DescribeTemplateAllRulesResponseBodyRuleList>>(expect1);
      }
    }
  }


  virtual ~DescribeTemplateAllRulesResponseBody() = default;
};
class DescribeTemplateAllRulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeTemplateAllRulesResponseBody> body{};

  DescribeTemplateAllRulesResponse() {}

  explicit DescribeTemplateAllRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeTemplateAllRulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeTemplateAllRulesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeTemplateAllRulesResponse() = default;
};
class DescribeUserStatusRequest : public Darabonba::Model {
public:
  shared_ptr<long> featureType{};
  shared_ptr<string> lang{};

  DescribeUserStatusRequest() {}

  explicit DescribeUserStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (featureType) {
      res["FeatureType"] = boost::any(*featureType);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FeatureType") != m.end() && !m["FeatureType"].empty()) {
      featureType = make_shared<long>(boost::any_cast<long>(m["FeatureType"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
  }


  virtual ~DescribeUserStatusRequest() = default;
};
class DescribeUserStatusResponseBodyUserStatus : public Darabonba::Model {
public:
  shared_ptr<string> accessKeyId{};
  shared_ptr<bool> auditClosable{};
  shared_ptr<bool> auditReleasable{};
  shared_ptr<bool> authed{};
  shared_ptr<string> chargeType{};
  shared_ptr<long> dataManagerRole{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> instanceNum{};
  shared_ptr<long> instanceTotalCount{};
  shared_ptr<long> labStatus{};
  shared_ptr<long> ossTotalSize{};
  shared_ptr<long> protectionDays{};
  shared_ptr<bool> purchased{};
  shared_ptr<long> releaseDays{};
  shared_ptr<long> releaseTime{};
  shared_ptr<long> remainDays{};
  shared_ptr<bool> trail{};
  shared_ptr<bool> useAgentAudit{};
  shared_ptr<long> useInstanceNum{};
  shared_ptr<long> useOssSize{};

  DescribeUserStatusResponseBodyUserStatus() {}

  explicit DescribeUserStatusResponseBodyUserStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKeyId) {
      res["AccessKeyId"] = boost::any(*accessKeyId);
    }
    if (auditClosable) {
      res["AuditClosable"] = boost::any(*auditClosable);
    }
    if (auditReleasable) {
      res["AuditReleasable"] = boost::any(*auditReleasable);
    }
    if (authed) {
      res["Authed"] = boost::any(*authed);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (dataManagerRole) {
      res["DataManagerRole"] = boost::any(*dataManagerRole);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceNum) {
      res["InstanceNum"] = boost::any(*instanceNum);
    }
    if (instanceTotalCount) {
      res["InstanceTotalCount"] = boost::any(*instanceTotalCount);
    }
    if (labStatus) {
      res["LabStatus"] = boost::any(*labStatus);
    }
    if (ossTotalSize) {
      res["OssTotalSize"] = boost::any(*ossTotalSize);
    }
    if (protectionDays) {
      res["ProtectionDays"] = boost::any(*protectionDays);
    }
    if (purchased) {
      res["Purchased"] = boost::any(*purchased);
    }
    if (releaseDays) {
      res["ReleaseDays"] = boost::any(*releaseDays);
    }
    if (releaseTime) {
      res["ReleaseTime"] = boost::any(*releaseTime);
    }
    if (remainDays) {
      res["RemainDays"] = boost::any(*remainDays);
    }
    if (trail) {
      res["Trail"] = boost::any(*trail);
    }
    if (useAgentAudit) {
      res["UseAgentAudit"] = boost::any(*useAgentAudit);
    }
    if (useInstanceNum) {
      res["UseInstanceNum"] = boost::any(*useInstanceNum);
    }
    if (useOssSize) {
      res["UseOssSize"] = boost::any(*useOssSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessKeyId") != m.end() && !m["AccessKeyId"].empty()) {
      accessKeyId = make_shared<string>(boost::any_cast<string>(m["AccessKeyId"]));
    }
    if (m.find("AuditClosable") != m.end() && !m["AuditClosable"].empty()) {
      auditClosable = make_shared<bool>(boost::any_cast<bool>(m["AuditClosable"]));
    }
    if (m.find("AuditReleasable") != m.end() && !m["AuditReleasable"].empty()) {
      auditReleasable = make_shared<bool>(boost::any_cast<bool>(m["AuditReleasable"]));
    }
    if (m.find("Authed") != m.end() && !m["Authed"].empty()) {
      authed = make_shared<bool>(boost::any_cast<bool>(m["Authed"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("DataManagerRole") != m.end() && !m["DataManagerRole"].empty()) {
      dataManagerRole = make_shared<long>(boost::any_cast<long>(m["DataManagerRole"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceNum") != m.end() && !m["InstanceNum"].empty()) {
      instanceNum = make_shared<long>(boost::any_cast<long>(m["InstanceNum"]));
    }
    if (m.find("InstanceTotalCount") != m.end() && !m["InstanceTotalCount"].empty()) {
      instanceTotalCount = make_shared<long>(boost::any_cast<long>(m["InstanceTotalCount"]));
    }
    if (m.find("LabStatus") != m.end() && !m["LabStatus"].empty()) {
      labStatus = make_shared<long>(boost::any_cast<long>(m["LabStatus"]));
    }
    if (m.find("OssTotalSize") != m.end() && !m["OssTotalSize"].empty()) {
      ossTotalSize = make_shared<long>(boost::any_cast<long>(m["OssTotalSize"]));
    }
    if (m.find("ProtectionDays") != m.end() && !m["ProtectionDays"].empty()) {
      protectionDays = make_shared<long>(boost::any_cast<long>(m["ProtectionDays"]));
    }
    if (m.find("Purchased") != m.end() && !m["Purchased"].empty()) {
      purchased = make_shared<bool>(boost::any_cast<bool>(m["Purchased"]));
    }
    if (m.find("ReleaseDays") != m.end() && !m["ReleaseDays"].empty()) {
      releaseDays = make_shared<long>(boost::any_cast<long>(m["ReleaseDays"]));
    }
    if (m.find("ReleaseTime") != m.end() && !m["ReleaseTime"].empty()) {
      releaseTime = make_shared<long>(boost::any_cast<long>(m["ReleaseTime"]));
    }
    if (m.find("RemainDays") != m.end() && !m["RemainDays"].empty()) {
      remainDays = make_shared<long>(boost::any_cast<long>(m["RemainDays"]));
    }
    if (m.find("Trail") != m.end() && !m["Trail"].empty()) {
      trail = make_shared<bool>(boost::any_cast<bool>(m["Trail"]));
    }
    if (m.find("UseAgentAudit") != m.end() && !m["UseAgentAudit"].empty()) {
      useAgentAudit = make_shared<bool>(boost::any_cast<bool>(m["UseAgentAudit"]));
    }
    if (m.find("UseInstanceNum") != m.end() && !m["UseInstanceNum"].empty()) {
      useInstanceNum = make_shared<long>(boost::any_cast<long>(m["UseInstanceNum"]));
    }
    if (m.find("UseOssSize") != m.end() && !m["UseOssSize"].empty()) {
      useOssSize = make_shared<long>(boost::any_cast<long>(m["UseOssSize"]));
    }
  }


  virtual ~DescribeUserStatusResponseBodyUserStatus() = default;
};
class DescribeUserStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeUserStatusResponseBodyUserStatus> userStatus{};

  DescribeUserStatusResponseBody() {}

  explicit DescribeUserStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (userStatus) {
      res["UserStatus"] = userStatus ? boost::any(userStatus->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UserStatus") != m.end() && !m["UserStatus"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserStatus"].type()) {
        DescribeUserStatusResponseBodyUserStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserStatus"]));
        userStatus = make_shared<DescribeUserStatusResponseBodyUserStatus>(model1);
      }
    }
  }


  virtual ~DescribeUserStatusResponseBody() = default;
};
class DescribeUserStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeUserStatusResponseBody> body{};

  DescribeUserStatusResponse() {}

  explicit DescribeUserStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeUserStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeUserStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeUserStatusResponse() = default;
};
class DisableUserConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> featureType{};
  shared_ptr<string> lang{};

  DisableUserConfigRequest() {}

  explicit DisableUserConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (featureType) {
      res["FeatureType"] = boost::any(*featureType);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("FeatureType") != m.end() && !m["FeatureType"].empty()) {
      featureType = make_shared<long>(boost::any_cast<long>(m["FeatureType"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
  }


  virtual ~DisableUserConfigRequest() = default;
};
class DisableUserConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DisableUserConfigResponseBody() {}

  explicit DisableUserConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DisableUserConfigResponseBody() = default;
};
class DisableUserConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DisableUserConfigResponseBody> body{};

  DisableUserConfigResponse() {}

  explicit DisableUserConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DisableUserConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableUserConfigResponseBody>(model1);
      }
    }
  }


  virtual ~DisableUserConfigResponse() = default;
};
class ExecDatamaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<long> featureType{};
  shared_ptr<string> lang{};
  shared_ptr<long> templateId{};

  ExecDatamaskRequest() {}

  explicit ExecDatamaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (featureType) {
      res["FeatureType"] = boost::any(*featureType);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("FeatureType") != m.end() && !m["FeatureType"].empty()) {
      featureType = make_shared<long>(boost::any_cast<long>(m["FeatureType"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
  }


  virtual ~ExecDatamaskRequest() = default;
};
class ExecDatamaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  ExecDatamaskResponseBody() {}

  explicit ExecDatamaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ExecDatamaskResponseBody() = default;
};
class ExecDatamaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ExecDatamaskResponseBody> body{};

  ExecDatamaskResponse() {}

  explicit ExecDatamaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExecDatamaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExecDatamaskResponseBody>(model1);
      }
    }
  }


  virtual ~ExecDatamaskResponse() = default;
};
class ManualTriggerMaskingProcessRequest : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> lang{};

  ManualTriggerMaskingProcessRequest() {}

  explicit ManualTriggerMaskingProcessRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
  }


  virtual ~ManualTriggerMaskingProcessRequest() = default;
};
class ManualTriggerMaskingProcessResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ManualTriggerMaskingProcessResponseBody() {}

  explicit ManualTriggerMaskingProcessResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ManualTriggerMaskingProcessResponseBody() = default;
};
class ManualTriggerMaskingProcessResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ManualTriggerMaskingProcessResponseBody> body{};

  ManualTriggerMaskingProcessResponse() {}

  explicit ManualTriggerMaskingProcessResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ManualTriggerMaskingProcessResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ManualTriggerMaskingProcessResponseBody>(model1);
      }
    }
  }


  virtual ~ManualTriggerMaskingProcessResponse() = default;
};
class ModifyDataLimitRequest : public Darabonba::Model {
public:
  shared_ptr<long> auditStatus{};
  shared_ptr<long> autoScan{};
  shared_ptr<string> engineType{};
  shared_ptr<long> featureType{};
  shared_ptr<long> id{};
  shared_ptr<string> lang{};
  shared_ptr<long> logStoreDay{};
  shared_ptr<bool> modifyPassword{};
  shared_ptr<string> password{};
  shared_ptr<long> port{};
  shared_ptr<long> resourceType{};
  shared_ptr<long> samplingSize{};
  shared_ptr<vector<string>> securityGroupIdList{};
  shared_ptr<string> serviceRegionId{};
  shared_ptr<string> userName{};
  shared_ptr<vector<string>> vSwitchIdList{};
  shared_ptr<string> vpcId{};

  ModifyDataLimitRequest() {}

  explicit ModifyDataLimitRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auditStatus) {
      res["AuditStatus"] = boost::any(*auditStatus);
    }
    if (autoScan) {
      res["AutoScan"] = boost::any(*autoScan);
    }
    if (engineType) {
      res["EngineType"] = boost::any(*engineType);
    }
    if (featureType) {
      res["FeatureType"] = boost::any(*featureType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (logStoreDay) {
      res["LogStoreDay"] = boost::any(*logStoreDay);
    }
    if (modifyPassword) {
      res["ModifyPassword"] = boost::any(*modifyPassword);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (samplingSize) {
      res["SamplingSize"] = boost::any(*samplingSize);
    }
    if (securityGroupIdList) {
      res["SecurityGroupIdList"] = boost::any(*securityGroupIdList);
    }
    if (serviceRegionId) {
      res["ServiceRegionId"] = boost::any(*serviceRegionId);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    if (vSwitchIdList) {
      res["VSwitchIdList"] = boost::any(*vSwitchIdList);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuditStatus") != m.end() && !m["AuditStatus"].empty()) {
      auditStatus = make_shared<long>(boost::any_cast<long>(m["AuditStatus"]));
    }
    if (m.find("AutoScan") != m.end() && !m["AutoScan"].empty()) {
      autoScan = make_shared<long>(boost::any_cast<long>(m["AutoScan"]));
    }
    if (m.find("EngineType") != m.end() && !m["EngineType"].empty()) {
      engineType = make_shared<string>(boost::any_cast<string>(m["EngineType"]));
    }
    if (m.find("FeatureType") != m.end() && !m["FeatureType"].empty()) {
      featureType = make_shared<long>(boost::any_cast<long>(m["FeatureType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("LogStoreDay") != m.end() && !m["LogStoreDay"].empty()) {
      logStoreDay = make_shared<long>(boost::any_cast<long>(m["LogStoreDay"]));
    }
    if (m.find("ModifyPassword") != m.end() && !m["ModifyPassword"].empty()) {
      modifyPassword = make_shared<bool>(boost::any_cast<bool>(m["ModifyPassword"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<long>(boost::any_cast<long>(m["ResourceType"]));
    }
    if (m.find("SamplingSize") != m.end() && !m["SamplingSize"].empty()) {
      samplingSize = make_shared<long>(boost::any_cast<long>(m["SamplingSize"]));
    }
    if (m.find("SecurityGroupIdList") != m.end() && !m["SecurityGroupIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SecurityGroupIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SecurityGroupIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      securityGroupIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ServiceRegionId") != m.end() && !m["ServiceRegionId"].empty()) {
      serviceRegionId = make_shared<string>(boost::any_cast<string>(m["ServiceRegionId"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
    if (m.find("VSwitchIdList") != m.end() && !m["VSwitchIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["VSwitchIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["VSwitchIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vSwitchIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~ModifyDataLimitRequest() = default;
};
class ModifyDataLimitResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDataLimitResponseBody() {}

  explicit ModifyDataLimitResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyDataLimitResponseBody() = default;
};
class ModifyDataLimitResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyDataLimitResponseBody> body{};

  ModifyDataLimitResponse() {}

  explicit ModifyDataLimitResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDataLimitResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDataLimitResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDataLimitResponse() = default;
};
class ModifyDefaultLevelRequest : public Darabonba::Model {
public:
  shared_ptr<long> defaultId{};
  shared_ptr<string> lang{};
  shared_ptr<string> sensitiveIds{};

  ModifyDefaultLevelRequest() {}

  explicit ModifyDefaultLevelRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defaultId) {
      res["DefaultId"] = boost::any(*defaultId);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (sensitiveIds) {
      res["SensitiveIds"] = boost::any(*sensitiveIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefaultId") != m.end() && !m["DefaultId"].empty()) {
      defaultId = make_shared<long>(boost::any_cast<long>(m["DefaultId"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("SensitiveIds") != m.end() && !m["SensitiveIds"].empty()) {
      sensitiveIds = make_shared<string>(boost::any_cast<string>(m["SensitiveIds"]));
    }
  }


  virtual ~ModifyDefaultLevelRequest() = default;
};
class ModifyDefaultLevelResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDefaultLevelResponseBody() {}

  explicit ModifyDefaultLevelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyDefaultLevelResponseBody() = default;
};
class ModifyDefaultLevelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyDefaultLevelResponseBody> body{};

  ModifyDefaultLevelResponse() {}

  explicit ModifyDefaultLevelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDefaultLevelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDefaultLevelResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDefaultLevelResponse() = default;
};
class ModifyEventStatusRequest : public Darabonba::Model {
public:
  shared_ptr<bool> backed{};
  shared_ptr<string> dealReason{};
  shared_ptr<long> id{};
  shared_ptr<string> lang{};
  shared_ptr<long> status{};

  ModifyEventStatusRequest() {}

  explicit ModifyEventStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backed) {
      res["Backed"] = boost::any(*backed);
    }
    if (dealReason) {
      res["DealReason"] = boost::any(*dealReason);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Backed") != m.end() && !m["Backed"].empty()) {
      backed = make_shared<bool>(boost::any_cast<bool>(m["Backed"]));
    }
    if (m.find("DealReason") != m.end() && !m["DealReason"].empty()) {
      dealReason = make_shared<string>(boost::any_cast<string>(m["DealReason"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~ModifyEventStatusRequest() = default;
};
class ModifyEventStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyEventStatusResponseBody() {}

  explicit ModifyEventStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyEventStatusResponseBody() = default;
};
class ModifyEventStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyEventStatusResponseBody> body{};

  ModifyEventStatusResponse() {}

  explicit ModifyEventStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyEventStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyEventStatusResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyEventStatusResponse() = default;
};
class ModifyEventTypeStatusRequest : public Darabonba::Model {
public:
  shared_ptr<long> featureType{};
  shared_ptr<string> lang{};
  shared_ptr<string> subTypeIds{};

  ModifyEventTypeStatusRequest() {}

  explicit ModifyEventTypeStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (featureType) {
      res["FeatureType"] = boost::any(*featureType);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (subTypeIds) {
      res["SubTypeIds"] = boost::any(*subTypeIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FeatureType") != m.end() && !m["FeatureType"].empty()) {
      featureType = make_shared<long>(boost::any_cast<long>(m["FeatureType"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("SubTypeIds") != m.end() && !m["SubTypeIds"].empty()) {
      subTypeIds = make_shared<string>(boost::any_cast<string>(m["SubTypeIds"]));
    }
  }


  virtual ~ModifyEventTypeStatusRequest() = default;
};
class ModifyEventTypeStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyEventTypeStatusResponseBody() {}

  explicit ModifyEventTypeStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyEventTypeStatusResponseBody() = default;
};
class ModifyEventTypeStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyEventTypeStatusResponseBody> body{};

  ModifyEventTypeStatusResponse() {}

  explicit ModifyEventTypeStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyEventTypeStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyEventTypeStatusResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyEventTypeStatusResponse() = default;
};
class ModifyReportTaskStatusRequest : public Darabonba::Model {
public:
  shared_ptr<long> featureType{};
  shared_ptr<string> lang{};
  shared_ptr<long> reportTaskStatus{};

  ModifyReportTaskStatusRequest() {}

  explicit ModifyReportTaskStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (featureType) {
      res["FeatureType"] = boost::any(*featureType);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (reportTaskStatus) {
      res["ReportTaskStatus"] = boost::any(*reportTaskStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FeatureType") != m.end() && !m["FeatureType"].empty()) {
      featureType = make_shared<long>(boost::any_cast<long>(m["FeatureType"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("ReportTaskStatus") != m.end() && !m["ReportTaskStatus"].empty()) {
      reportTaskStatus = make_shared<long>(boost::any_cast<long>(m["ReportTaskStatus"]));
    }
  }


  virtual ~ModifyReportTaskStatusRequest() = default;
};
class ModifyReportTaskStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyReportTaskStatusResponseBody() {}

  explicit ModifyReportTaskStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyReportTaskStatusResponseBody() = default;
};
class ModifyReportTaskStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyReportTaskStatusResponseBody> body{};

  ModifyReportTaskStatusResponse() {}

  explicit ModifyReportTaskStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyReportTaskStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyReportTaskStatusResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyReportTaskStatusResponse() = default;
};
class ModifyRuleRequest : public Darabonba::Model {
public:
  shared_ptr<long> category{};
  shared_ptr<string> content{};
  shared_ptr<long> id{};
  shared_ptr<string> lang{};
  shared_ptr<long> matchType{};
  shared_ptr<string> modelRuleIds{};
  shared_ptr<string> name{};
  shared_ptr<string> productCode{};
  shared_ptr<long> productId{};
  shared_ptr<long> riskLevelId{};
  shared_ptr<long> ruleType{};
  shared_ptr<long> supportForm{};
  shared_ptr<string> templateRuleIds{};
  shared_ptr<long> warnLevel{};

  ModifyRuleRequest() {}

  explicit ModifyRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (matchType) {
      res["MatchType"] = boost::any(*matchType);
    }
    if (modelRuleIds) {
      res["ModelRuleIds"] = boost::any(*modelRuleIds);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    if (riskLevelId) {
      res["RiskLevelId"] = boost::any(*riskLevelId);
    }
    if (ruleType) {
      res["RuleType"] = boost::any(*ruleType);
    }
    if (supportForm) {
      res["SupportForm"] = boost::any(*supportForm);
    }
    if (templateRuleIds) {
      res["TemplateRuleIds"] = boost::any(*templateRuleIds);
    }
    if (warnLevel) {
      res["WarnLevel"] = boost::any(*warnLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<long>(boost::any_cast<long>(m["Category"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("MatchType") != m.end() && !m["MatchType"].empty()) {
      matchType = make_shared<long>(boost::any_cast<long>(m["MatchType"]));
    }
    if (m.find("ModelRuleIds") != m.end() && !m["ModelRuleIds"].empty()) {
      modelRuleIds = make_shared<string>(boost::any_cast<string>(m["ModelRuleIds"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<long>(boost::any_cast<long>(m["ProductId"]));
    }
    if (m.find("RiskLevelId") != m.end() && !m["RiskLevelId"].empty()) {
      riskLevelId = make_shared<long>(boost::any_cast<long>(m["RiskLevelId"]));
    }
    if (m.find("RuleType") != m.end() && !m["RuleType"].empty()) {
      ruleType = make_shared<long>(boost::any_cast<long>(m["RuleType"]));
    }
    if (m.find("SupportForm") != m.end() && !m["SupportForm"].empty()) {
      supportForm = make_shared<long>(boost::any_cast<long>(m["SupportForm"]));
    }
    if (m.find("TemplateRuleIds") != m.end() && !m["TemplateRuleIds"].empty()) {
      templateRuleIds = make_shared<string>(boost::any_cast<string>(m["TemplateRuleIds"]));
    }
    if (m.find("WarnLevel") != m.end() && !m["WarnLevel"].empty()) {
      warnLevel = make_shared<long>(boost::any_cast<long>(m["WarnLevel"]));
    }
  }


  virtual ~ModifyRuleRequest() = default;
};
class ModifyRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyRuleResponseBody() {}

  explicit ModifyRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyRuleResponseBody() = default;
};
class ModifyRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyRuleResponseBody> body{};

  ModifyRuleResponse() {}

  explicit ModifyRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyRuleResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyRuleResponse() = default;
};
class ModifyRuleStatusRequest : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> ids{};
  shared_ptr<string> lang{};
  shared_ptr<long> status{};

  ModifyRuleStatusRequest() {}

  explicit ModifyRuleStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (ids) {
      res["Ids"] = boost::any(*ids);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Ids") != m.end() && !m["Ids"].empty()) {
      ids = make_shared<string>(boost::any_cast<string>(m["Ids"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~ModifyRuleStatusRequest() = default;
};
class ModifyRuleStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> failedIds{};
  shared_ptr<string> requestId{};

  ModifyRuleStatusResponseBody() {}

  explicit ModifyRuleStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (failedIds) {
      res["FailedIds"] = boost::any(*failedIds);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FailedIds") != m.end() && !m["FailedIds"].empty()) {
      failedIds = make_shared<string>(boost::any_cast<string>(m["FailedIds"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyRuleStatusResponseBody() = default;
};
class ModifyRuleStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyRuleStatusResponseBody> body{};

  ModifyRuleStatusResponse() {}

  explicit ModifyRuleStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyRuleStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyRuleStatusResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyRuleStatusResponse() = default;
};
class ScanOssObjectV1Request : public Darabonba::Model {
public:
  shared_ptr<string> bucketName{};
  shared_ptr<string> lang{};
  shared_ptr<vector<string>> objectKeyList{};
  shared_ptr<string> serviceRegionId{};
  shared_ptr<long> templateId{};

  ScanOssObjectV1Request() {}

  explicit ScanOssObjectV1Request(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucketName) {
      res["BucketName"] = boost::any(*bucketName);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (objectKeyList) {
      res["ObjectKeyList"] = boost::any(*objectKeyList);
    }
    if (serviceRegionId) {
      res["ServiceRegionId"] = boost::any(*serviceRegionId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BucketName") != m.end() && !m["BucketName"].empty()) {
      bucketName = make_shared<string>(boost::any_cast<string>(m["BucketName"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("ObjectKeyList") != m.end() && !m["ObjectKeyList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ObjectKeyList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ObjectKeyList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      objectKeyList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ServiceRegionId") != m.end() && !m["ServiceRegionId"].empty()) {
      serviceRegionId = make_shared<string>(boost::any_cast<string>(m["ServiceRegionId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
  }


  virtual ~ScanOssObjectV1Request() = default;
};
class ScanOssObjectV1ShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> bucketName{};
  shared_ptr<string> lang{};
  shared_ptr<string> objectKeyListShrink{};
  shared_ptr<string> serviceRegionId{};
  shared_ptr<long> templateId{};

  ScanOssObjectV1ShrinkRequest() {}

  explicit ScanOssObjectV1ShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucketName) {
      res["BucketName"] = boost::any(*bucketName);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (objectKeyListShrink) {
      res["ObjectKeyList"] = boost::any(*objectKeyListShrink);
    }
    if (serviceRegionId) {
      res["ServiceRegionId"] = boost::any(*serviceRegionId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BucketName") != m.end() && !m["BucketName"].empty()) {
      bucketName = make_shared<string>(boost::any_cast<string>(m["BucketName"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("ObjectKeyList") != m.end() && !m["ObjectKeyList"].empty()) {
      objectKeyListShrink = make_shared<string>(boost::any_cast<string>(m["ObjectKeyList"]));
    }
    if (m.find("ServiceRegionId") != m.end() && !m["ServiceRegionId"].empty()) {
      serviceRegionId = make_shared<string>(boost::any_cast<string>(m["ServiceRegionId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
  }


  virtual ~ScanOssObjectV1ShrinkRequest() = default;
};
class ScanOssObjectV1ResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> requestId{};

  ScanOssObjectV1ResponseBody() {}

  explicit ScanOssObjectV1ResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ScanOssObjectV1ResponseBody() = default;
};
class ScanOssObjectV1Response : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ScanOssObjectV1ResponseBody> body{};

  ScanOssObjectV1Response() {}

  explicit ScanOssObjectV1Response(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ScanOssObjectV1ResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ScanOssObjectV1ResponseBody>(model1);
      }
    }
  }


  virtual ~ScanOssObjectV1Response() = default;
};
class StopMaskingProcessRequest : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> lang{};

  StopMaskingProcessRequest() {}

  explicit StopMaskingProcessRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
  }


  virtual ~StopMaskingProcessRequest() = default;
};
class StopMaskingProcessResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  StopMaskingProcessResponseBody() {}

  explicit StopMaskingProcessResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StopMaskingProcessResponseBody() = default;
};
class StopMaskingProcessResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopMaskingProcessResponseBody> body{};

  StopMaskingProcessResponse() {}

  explicit StopMaskingProcessResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopMaskingProcessResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopMaskingProcessResponseBody>(model1);
      }
    }
  }


  virtual ~StopMaskingProcessResponse() = default;
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
  CreateConfigResponse createConfigWithOptions(shared_ptr<CreateConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateConfigResponse createConfig(shared_ptr<CreateConfigRequest> request);
  CreateDataLimitResponse createDataLimitWithOptions(shared_ptr<CreateDataLimitRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDataLimitResponse createDataLimit(shared_ptr<CreateDataLimitRequest> request);
  CreateRuleResponse createRuleWithOptions(shared_ptr<CreateRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRuleResponse createRule(shared_ptr<CreateRuleRequest> request);
  CreateScanTaskResponse createScanTaskWithOptions(shared_ptr<CreateScanTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateScanTaskResponse createScanTask(shared_ptr<CreateScanTaskRequest> request);
  CreateSlrRoleResponse createSlrRoleWithOptions(shared_ptr<CreateSlrRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSlrRoleResponse createSlrRole(shared_ptr<CreateSlrRoleRequest> request);
  DeleteDataLimitResponse deleteDataLimitWithOptions(shared_ptr<DeleteDataLimitRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDataLimitResponse deleteDataLimit(shared_ptr<DeleteDataLimitRequest> request);
  DeleteRuleResponse deleteRuleWithOptions(shared_ptr<DeleteRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteRuleResponse deleteRule(shared_ptr<DeleteRuleRequest> request);
  DescribeCategoryTemplateListResponse describeCategoryTemplateListWithOptions(shared_ptr<DescribeCategoryTemplateListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCategoryTemplateListResponse describeCategoryTemplateList(shared_ptr<DescribeCategoryTemplateListRequest> request);
  DescribeCategoryTemplateRuleListResponse describeCategoryTemplateRuleListWithOptions(shared_ptr<DescribeCategoryTemplateRuleListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCategoryTemplateRuleListResponse describeCategoryTemplateRuleList(shared_ptr<DescribeCategoryTemplateRuleListRequest> request);
  DescribeColumnsResponse describeColumnsWithOptions(shared_ptr<DescribeColumnsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeColumnsResponse describeColumns(shared_ptr<DescribeColumnsRequest> request);
  DescribeColumnsV2Response describeColumnsV2WithOptions(shared_ptr<DescribeColumnsV2Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeColumnsV2Response describeColumnsV2(shared_ptr<DescribeColumnsV2Request> request);
  DescribeConfigsResponse describeConfigsWithOptions(shared_ptr<DescribeConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeConfigsResponse describeConfigs(shared_ptr<DescribeConfigsRequest> request);
  DescribeDataAssetsResponse describeDataAssetsWithOptions(shared_ptr<DescribeDataAssetsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDataAssetsResponse describeDataAssets(shared_ptr<DescribeDataAssetsRequest> request);
  DescribeDataLimitDetailResponse describeDataLimitDetailWithOptions(shared_ptr<DescribeDataLimitDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDataLimitDetailResponse describeDataLimitDetail(shared_ptr<DescribeDataLimitDetailRequest> request);
  DescribeDataLimitSetResponse describeDataLimitSetWithOptions(shared_ptr<DescribeDataLimitSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDataLimitSetResponse describeDataLimitSet(shared_ptr<DescribeDataLimitSetRequest> request);
  DescribeDataLimitsResponse describeDataLimitsWithOptions(shared_ptr<DescribeDataLimitsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDataLimitsResponse describeDataLimits(shared_ptr<DescribeDataLimitsRequest> request);
  DescribeDataMaskingRunHistoryResponse describeDataMaskingRunHistoryWithOptions(shared_ptr<DescribeDataMaskingRunHistoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDataMaskingRunHistoryResponse describeDataMaskingRunHistory(shared_ptr<DescribeDataMaskingRunHistoryRequest> request);
  DescribeDataMaskingTasksResponse describeDataMaskingTasksWithOptions(shared_ptr<DescribeDataMaskingTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDataMaskingTasksResponse describeDataMaskingTasks(shared_ptr<DescribeDataMaskingTasksRequest> request);
  DescribeDataObjectColumnDetailResponse describeDataObjectColumnDetailWithOptions(shared_ptr<DescribeDataObjectColumnDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDataObjectColumnDetailResponse describeDataObjectColumnDetail(shared_ptr<DescribeDataObjectColumnDetailRequest> request);
  DescribeDataObjectColumnDetailV2Response describeDataObjectColumnDetailV2WithOptions(shared_ptr<DescribeDataObjectColumnDetailV2Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDataObjectColumnDetailV2Response describeDataObjectColumnDetailV2(shared_ptr<DescribeDataObjectColumnDetailV2Request> request);
  DescribeDataObjectsResponse describeDataObjectsWithOptions(shared_ptr<DescribeDataObjectsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDataObjectsResponse describeDataObjects(shared_ptr<DescribeDataObjectsRequest> request);
  DescribeDocTypesResponse describeDocTypesWithOptions(shared_ptr<DescribeDocTypesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDocTypesResponse describeDocTypes(shared_ptr<DescribeDocTypesRequest> request);
  DescribeEventDetailResponse describeEventDetailWithOptions(shared_ptr<DescribeEventDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeEventDetailResponse describeEventDetail(shared_ptr<DescribeEventDetailRequest> request);
  DescribeEventTypesResponse describeEventTypesWithOptions(shared_ptr<DescribeEventTypesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeEventTypesResponse describeEventTypes(shared_ptr<DescribeEventTypesRequest> request);
  DescribeEventsResponse describeEventsWithOptions(shared_ptr<DescribeEventsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeEventsResponse describeEvents(shared_ptr<DescribeEventsRequest> request);
  DescribeIdentifyTaskStatusResponse describeIdentifyTaskStatusWithOptions(shared_ptr<DescribeIdentifyTaskStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeIdentifyTaskStatusResponse describeIdentifyTaskStatus(shared_ptr<DescribeIdentifyTaskStatusRequest> request);
  DescribeInstanceSourcesResponse describeInstanceSourcesWithOptions(shared_ptr<DescribeInstanceSourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeInstanceSourcesResponse describeInstanceSources(shared_ptr<DescribeInstanceSourcesRequest> request);
  DescribeInstancesResponse describeInstancesWithOptions(shared_ptr<DescribeInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeInstancesResponse describeInstances(shared_ptr<DescribeInstancesRequest> request);
  DescribeOssObjectDetailResponse describeOssObjectDetailWithOptions(shared_ptr<DescribeOssObjectDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeOssObjectDetailResponse describeOssObjectDetail(shared_ptr<DescribeOssObjectDetailRequest> request);
  DescribeOssObjectDetailV2Response describeOssObjectDetailV2WithOptions(shared_ptr<DescribeOssObjectDetailV2Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeOssObjectDetailV2Response describeOssObjectDetailV2(shared_ptr<DescribeOssObjectDetailV2Request> request);
  DescribeOssObjectsResponse describeOssObjectsWithOptions(shared_ptr<DescribeOssObjectsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeOssObjectsResponse describeOssObjects(shared_ptr<DescribeOssObjectsRequest> request);
  DescribePackagesResponse describePackagesWithOptions(shared_ptr<DescribePackagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePackagesResponse describePackages(shared_ptr<DescribePackagesRequest> request);
  DescribeParentInstanceResponse describeParentInstanceWithOptions(shared_ptr<DescribeParentInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeParentInstanceResponse describeParentInstance(shared_ptr<DescribeParentInstanceRequest> request);
  DescribeRiskLevelsResponse describeRiskLevelsWithOptions(shared_ptr<DescribeRiskLevelsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRiskLevelsResponse describeRiskLevels(shared_ptr<DescribeRiskLevelsRequest> request);
  DescribeRulesResponse describeRulesWithOptions(shared_ptr<DescribeRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRulesResponse describeRules(shared_ptr<DescribeRulesRequest> request);
  DescribeTablesResponse describeTablesWithOptions(shared_ptr<DescribeTablesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeTablesResponse describeTables(shared_ptr<DescribeTablesRequest> request);
  DescribeTemplateAllRulesResponse describeTemplateAllRulesWithOptions(shared_ptr<DescribeTemplateAllRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeTemplateAllRulesResponse describeTemplateAllRules(shared_ptr<DescribeTemplateAllRulesRequest> request);
  DescribeUserStatusResponse describeUserStatusWithOptions(shared_ptr<DescribeUserStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeUserStatusResponse describeUserStatus(shared_ptr<DescribeUserStatusRequest> request);
  DisableUserConfigResponse disableUserConfigWithOptions(shared_ptr<DisableUserConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableUserConfigResponse disableUserConfig(shared_ptr<DisableUserConfigRequest> request);
  ExecDatamaskResponse execDatamaskWithOptions(shared_ptr<ExecDatamaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExecDatamaskResponse execDatamask(shared_ptr<ExecDatamaskRequest> request);
  ManualTriggerMaskingProcessResponse manualTriggerMaskingProcessWithOptions(shared_ptr<ManualTriggerMaskingProcessRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ManualTriggerMaskingProcessResponse manualTriggerMaskingProcess(shared_ptr<ManualTriggerMaskingProcessRequest> request);
  ModifyDataLimitResponse modifyDataLimitWithOptions(shared_ptr<ModifyDataLimitRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDataLimitResponse modifyDataLimit(shared_ptr<ModifyDataLimitRequest> request);
  ModifyDefaultLevelResponse modifyDefaultLevelWithOptions(shared_ptr<ModifyDefaultLevelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDefaultLevelResponse modifyDefaultLevel(shared_ptr<ModifyDefaultLevelRequest> request);
  ModifyEventStatusResponse modifyEventStatusWithOptions(shared_ptr<ModifyEventStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyEventStatusResponse modifyEventStatus(shared_ptr<ModifyEventStatusRequest> request);
  ModifyEventTypeStatusResponse modifyEventTypeStatusWithOptions(shared_ptr<ModifyEventTypeStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyEventTypeStatusResponse modifyEventTypeStatus(shared_ptr<ModifyEventTypeStatusRequest> request);
  ModifyReportTaskStatusResponse modifyReportTaskStatusWithOptions(shared_ptr<ModifyReportTaskStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyReportTaskStatusResponse modifyReportTaskStatus(shared_ptr<ModifyReportTaskStatusRequest> request);
  ModifyRuleResponse modifyRuleWithOptions(shared_ptr<ModifyRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyRuleResponse modifyRule(shared_ptr<ModifyRuleRequest> request);
  ModifyRuleStatusResponse modifyRuleStatusWithOptions(shared_ptr<ModifyRuleStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyRuleStatusResponse modifyRuleStatus(shared_ptr<ModifyRuleStatusRequest> request);
  ScanOssObjectV1Response scanOssObjectV1WithOptions(shared_ptr<ScanOssObjectV1Request> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ScanOssObjectV1Response scanOssObjectV1(shared_ptr<ScanOssObjectV1Request> request);
  StopMaskingProcessResponse stopMaskingProcessWithOptions(shared_ptr<StopMaskingProcessRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopMaskingProcessResponse stopMaskingProcess(shared_ptr<StopMaskingProcessRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Sddp20190103

#endif
