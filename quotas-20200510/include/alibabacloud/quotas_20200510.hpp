// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_QUOTAS20200510_H_
#define ALIBABACLOUD_QUOTAS20200510_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Quotas20200510 {
class CreateQuotaAlarmRequestQuotaDimensions : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateQuotaAlarmRequestQuotaDimensions() {}

  explicit CreateQuotaAlarmRequestQuotaDimensions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateQuotaAlarmRequestQuotaDimensions() = default;
};
class CreateQuotaAlarmRequest : public Darabonba::Model {
public:
  shared_ptr<string> alarmName{};
  shared_ptr<string> productCode{};
  shared_ptr<string> quotaActionCode{};
  shared_ptr<vector<CreateQuotaAlarmRequestQuotaDimensions>> quotaDimensions{};
  shared_ptr<double> threshold{};
  shared_ptr<double> thresholdPercent{};
  shared_ptr<string> thresholdType{};
  shared_ptr<string> webHook{};

  CreateQuotaAlarmRequest() {}

  explicit CreateQuotaAlarmRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alarmName) {
      res["AlarmName"] = boost::any(*alarmName);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (quotaActionCode) {
      res["QuotaActionCode"] = boost::any(*quotaActionCode);
    }
    if (quotaDimensions) {
      vector<boost::any> temp1;
      for(auto item1:*quotaDimensions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["QuotaDimensions"] = boost::any(temp1);
    }
    if (threshold) {
      res["Threshold"] = boost::any(*threshold);
    }
    if (thresholdPercent) {
      res["ThresholdPercent"] = boost::any(*thresholdPercent);
    }
    if (thresholdType) {
      res["ThresholdType"] = boost::any(*thresholdType);
    }
    if (webHook) {
      res["WebHook"] = boost::any(*webHook);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlarmName") != m.end() && !m["AlarmName"].empty()) {
      alarmName = make_shared<string>(boost::any_cast<string>(m["AlarmName"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("QuotaActionCode") != m.end() && !m["QuotaActionCode"].empty()) {
      quotaActionCode = make_shared<string>(boost::any_cast<string>(m["QuotaActionCode"]));
    }
    if (m.find("QuotaDimensions") != m.end() && !m["QuotaDimensions"].empty()) {
      if (typeid(vector<boost::any>) == m["QuotaDimensions"].type()) {
        vector<CreateQuotaAlarmRequestQuotaDimensions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["QuotaDimensions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateQuotaAlarmRequestQuotaDimensions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        quotaDimensions = make_shared<vector<CreateQuotaAlarmRequestQuotaDimensions>>(expect1);
      }
    }
    if (m.find("Threshold") != m.end() && !m["Threshold"].empty()) {
      threshold = make_shared<double>(boost::any_cast<double>(m["Threshold"]));
    }
    if (m.find("ThresholdPercent") != m.end() && !m["ThresholdPercent"].empty()) {
      thresholdPercent = make_shared<double>(boost::any_cast<double>(m["ThresholdPercent"]));
    }
    if (m.find("ThresholdType") != m.end() && !m["ThresholdType"].empty()) {
      thresholdType = make_shared<string>(boost::any_cast<string>(m["ThresholdType"]));
    }
    if (m.find("WebHook") != m.end() && !m["WebHook"].empty()) {
      webHook = make_shared<string>(boost::any_cast<string>(m["WebHook"]));
    }
  }


  virtual ~CreateQuotaAlarmRequest() = default;
};
class CreateQuotaAlarmResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> alarmId{};
  shared_ptr<string> requestId{};

  CreateQuotaAlarmResponseBody() {}

  explicit CreateQuotaAlarmResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alarmId) {
      res["AlarmId"] = boost::any(*alarmId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlarmId") != m.end() && !m["AlarmId"].empty()) {
      alarmId = make_shared<string>(boost::any_cast<string>(m["AlarmId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateQuotaAlarmResponseBody() = default;
};
class CreateQuotaAlarmResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateQuotaAlarmResponseBody> body{};

  CreateQuotaAlarmResponse() {}

  explicit CreateQuotaAlarmResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateQuotaAlarmResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateQuotaAlarmResponseBody>(model1);
      }
    }
  }


  virtual ~CreateQuotaAlarmResponse() = default;
};
class CreateQuotaApplicationRequestDimensions : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateQuotaApplicationRequestDimensions() {}

  explicit CreateQuotaApplicationRequestDimensions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateQuotaApplicationRequestDimensions() = default;
};
class CreateQuotaApplicationRequest : public Darabonba::Model {
public:
  shared_ptr<string> auditMode{};
  shared_ptr<double> desireValue{};
  shared_ptr<vector<CreateQuotaApplicationRequestDimensions>> dimensions{};
  shared_ptr<string> effectiveTime{};
  shared_ptr<string> envLanguage{};
  shared_ptr<string> expireTime{};
  shared_ptr<long> noticeType{};
  shared_ptr<string> productCode{};
  shared_ptr<string> quotaActionCode{};
  shared_ptr<string> quotaCategory{};
  shared_ptr<string> reason{};

  CreateQuotaApplicationRequest() {}

  explicit CreateQuotaApplicationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auditMode) {
      res["AuditMode"] = boost::any(*auditMode);
    }
    if (desireValue) {
      res["DesireValue"] = boost::any(*desireValue);
    }
    if (dimensions) {
      vector<boost::any> temp1;
      for(auto item1:*dimensions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Dimensions"] = boost::any(temp1);
    }
    if (effectiveTime) {
      res["EffectiveTime"] = boost::any(*effectiveTime);
    }
    if (envLanguage) {
      res["EnvLanguage"] = boost::any(*envLanguage);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (noticeType) {
      res["NoticeType"] = boost::any(*noticeType);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (quotaActionCode) {
      res["QuotaActionCode"] = boost::any(*quotaActionCode);
    }
    if (quotaCategory) {
      res["QuotaCategory"] = boost::any(*quotaCategory);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuditMode") != m.end() && !m["AuditMode"].empty()) {
      auditMode = make_shared<string>(boost::any_cast<string>(m["AuditMode"]));
    }
    if (m.find("DesireValue") != m.end() && !m["DesireValue"].empty()) {
      desireValue = make_shared<double>(boost::any_cast<double>(m["DesireValue"]));
    }
    if (m.find("Dimensions") != m.end() && !m["Dimensions"].empty()) {
      if (typeid(vector<boost::any>) == m["Dimensions"].type()) {
        vector<CreateQuotaApplicationRequestDimensions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Dimensions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateQuotaApplicationRequestDimensions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dimensions = make_shared<vector<CreateQuotaApplicationRequestDimensions>>(expect1);
      }
    }
    if (m.find("EffectiveTime") != m.end() && !m["EffectiveTime"].empty()) {
      effectiveTime = make_shared<string>(boost::any_cast<string>(m["EffectiveTime"]));
    }
    if (m.find("EnvLanguage") != m.end() && !m["EnvLanguage"].empty()) {
      envLanguage = make_shared<string>(boost::any_cast<string>(m["EnvLanguage"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("NoticeType") != m.end() && !m["NoticeType"].empty()) {
      noticeType = make_shared<long>(boost::any_cast<long>(m["NoticeType"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("QuotaActionCode") != m.end() && !m["QuotaActionCode"].empty()) {
      quotaActionCode = make_shared<string>(boost::any_cast<string>(m["QuotaActionCode"]));
    }
    if (m.find("QuotaCategory") != m.end() && !m["QuotaCategory"].empty()) {
      quotaCategory = make_shared<string>(boost::any_cast<string>(m["QuotaCategory"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
  }


  virtual ~CreateQuotaApplicationRequest() = default;
};
class CreateQuotaApplicationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> applicationId{};
  shared_ptr<string> applyTime{};
  shared_ptr<double> approveValue{};
  shared_ptr<string> auditReason{};
  shared_ptr<long> desireValue{};
  shared_ptr<map<string, boost::any>> dimension{};
  shared_ptr<string> effectiveTime{};
  shared_ptr<string> expireTime{};
  shared_ptr<long> noticeType{};
  shared_ptr<string> productCode{};
  shared_ptr<string> quotaActionCode{};
  shared_ptr<string> quotaArn{};
  shared_ptr<string> quotaDescription{};
  shared_ptr<string> quotaName{};
  shared_ptr<string> quotaUnit{};
  shared_ptr<string> reason{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  CreateQuotaApplicationResponseBody() {}

  explicit CreateQuotaApplicationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
    }
    if (applyTime) {
      res["ApplyTime"] = boost::any(*applyTime);
    }
    if (approveValue) {
      res["ApproveValue"] = boost::any(*approveValue);
    }
    if (auditReason) {
      res["AuditReason"] = boost::any(*auditReason);
    }
    if (desireValue) {
      res["DesireValue"] = boost::any(*desireValue);
    }
    if (dimension) {
      res["Dimension"] = boost::any(*dimension);
    }
    if (effectiveTime) {
      res["EffectiveTime"] = boost::any(*effectiveTime);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (noticeType) {
      res["NoticeType"] = boost::any(*noticeType);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (quotaActionCode) {
      res["QuotaActionCode"] = boost::any(*quotaActionCode);
    }
    if (quotaArn) {
      res["QuotaArn"] = boost::any(*quotaArn);
    }
    if (quotaDescription) {
      res["QuotaDescription"] = boost::any(*quotaDescription);
    }
    if (quotaName) {
      res["QuotaName"] = boost::any(*quotaName);
    }
    if (quotaUnit) {
      res["QuotaUnit"] = boost::any(*quotaUnit);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
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
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
    if (m.find("ApplyTime") != m.end() && !m["ApplyTime"].empty()) {
      applyTime = make_shared<string>(boost::any_cast<string>(m["ApplyTime"]));
    }
    if (m.find("ApproveValue") != m.end() && !m["ApproveValue"].empty()) {
      approveValue = make_shared<double>(boost::any_cast<double>(m["ApproveValue"]));
    }
    if (m.find("AuditReason") != m.end() && !m["AuditReason"].empty()) {
      auditReason = make_shared<string>(boost::any_cast<string>(m["AuditReason"]));
    }
    if (m.find("DesireValue") != m.end() && !m["DesireValue"].empty()) {
      desireValue = make_shared<long>(boost::any_cast<long>(m["DesireValue"]));
    }
    if (m.find("Dimension") != m.end() && !m["Dimension"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Dimension"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      dimension = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("EffectiveTime") != m.end() && !m["EffectiveTime"].empty()) {
      effectiveTime = make_shared<string>(boost::any_cast<string>(m["EffectiveTime"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("NoticeType") != m.end() && !m["NoticeType"].empty()) {
      noticeType = make_shared<long>(boost::any_cast<long>(m["NoticeType"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("QuotaActionCode") != m.end() && !m["QuotaActionCode"].empty()) {
      quotaActionCode = make_shared<string>(boost::any_cast<string>(m["QuotaActionCode"]));
    }
    if (m.find("QuotaArn") != m.end() && !m["QuotaArn"].empty()) {
      quotaArn = make_shared<string>(boost::any_cast<string>(m["QuotaArn"]));
    }
    if (m.find("QuotaDescription") != m.end() && !m["QuotaDescription"].empty()) {
      quotaDescription = make_shared<string>(boost::any_cast<string>(m["QuotaDescription"]));
    }
    if (m.find("QuotaName") != m.end() && !m["QuotaName"].empty()) {
      quotaName = make_shared<string>(boost::any_cast<string>(m["QuotaName"]));
    }
    if (m.find("QuotaUnit") != m.end() && !m["QuotaUnit"].empty()) {
      quotaUnit = make_shared<string>(boost::any_cast<string>(m["QuotaUnit"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~CreateQuotaApplicationResponseBody() = default;
};
class CreateQuotaApplicationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateQuotaApplicationResponseBody> body{};

  CreateQuotaApplicationResponse() {}

  explicit CreateQuotaApplicationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateQuotaApplicationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateQuotaApplicationResponseBody>(model1);
      }
    }
  }


  virtual ~CreateQuotaApplicationResponse() = default;
};
class CreateQuotaApplicationsForTemplateRequestDimensions : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateQuotaApplicationsForTemplateRequestDimensions() {}

  explicit CreateQuotaApplicationsForTemplateRequestDimensions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateQuotaApplicationsForTemplateRequestDimensions() = default;
};
class CreateQuotaApplicationsForTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> aliyunUids{};
  shared_ptr<double> desireValue{};
  shared_ptr<vector<CreateQuotaApplicationsForTemplateRequestDimensions>> dimensions{};
  shared_ptr<string> effectiveTime{};
  shared_ptr<string> envLanguage{};
  shared_ptr<string> expireTime{};
  shared_ptr<long> noticeType{};
  shared_ptr<string> productCode{};
  shared_ptr<string> quotaActionCode{};
  shared_ptr<string> quotaCategory{};
  shared_ptr<string> reason{};

  CreateQuotaApplicationsForTemplateRequest() {}

  explicit CreateQuotaApplicationsForTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliyunUids) {
      res["AliyunUids"] = boost::any(*aliyunUids);
    }
    if (desireValue) {
      res["DesireValue"] = boost::any(*desireValue);
    }
    if (dimensions) {
      vector<boost::any> temp1;
      for(auto item1:*dimensions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Dimensions"] = boost::any(temp1);
    }
    if (effectiveTime) {
      res["EffectiveTime"] = boost::any(*effectiveTime);
    }
    if (envLanguage) {
      res["EnvLanguage"] = boost::any(*envLanguage);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (noticeType) {
      res["NoticeType"] = boost::any(*noticeType);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (quotaActionCode) {
      res["QuotaActionCode"] = boost::any(*quotaActionCode);
    }
    if (quotaCategory) {
      res["QuotaCategory"] = boost::any(*quotaCategory);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliyunUids") != m.end() && !m["AliyunUids"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AliyunUids"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AliyunUids"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      aliyunUids = make_shared<vector<string>>(toVec1);
    }
    if (m.find("DesireValue") != m.end() && !m["DesireValue"].empty()) {
      desireValue = make_shared<double>(boost::any_cast<double>(m["DesireValue"]));
    }
    if (m.find("Dimensions") != m.end() && !m["Dimensions"].empty()) {
      if (typeid(vector<boost::any>) == m["Dimensions"].type()) {
        vector<CreateQuotaApplicationsForTemplateRequestDimensions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Dimensions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateQuotaApplicationsForTemplateRequestDimensions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dimensions = make_shared<vector<CreateQuotaApplicationsForTemplateRequestDimensions>>(expect1);
      }
    }
    if (m.find("EffectiveTime") != m.end() && !m["EffectiveTime"].empty()) {
      effectiveTime = make_shared<string>(boost::any_cast<string>(m["EffectiveTime"]));
    }
    if (m.find("EnvLanguage") != m.end() && !m["EnvLanguage"].empty()) {
      envLanguage = make_shared<string>(boost::any_cast<string>(m["EnvLanguage"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("NoticeType") != m.end() && !m["NoticeType"].empty()) {
      noticeType = make_shared<long>(boost::any_cast<long>(m["NoticeType"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("QuotaActionCode") != m.end() && !m["QuotaActionCode"].empty()) {
      quotaActionCode = make_shared<string>(boost::any_cast<string>(m["QuotaActionCode"]));
    }
    if (m.find("QuotaCategory") != m.end() && !m["QuotaCategory"].empty()) {
      quotaCategory = make_shared<string>(boost::any_cast<string>(m["QuotaCategory"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
  }


  virtual ~CreateQuotaApplicationsForTemplateRequest() = default;
};
class CreateQuotaApplicationsForTemplateResponseBodyFailResults : public Darabonba::Model {
public:
  shared_ptr<string> aliyunUid{};
  shared_ptr<string> reason{};

  CreateQuotaApplicationsForTemplateResponseBodyFailResults() {}

  explicit CreateQuotaApplicationsForTemplateResponseBodyFailResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliyunUid) {
      res["AliyunUid"] = boost::any(*aliyunUid);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliyunUid") != m.end() && !m["AliyunUid"].empty()) {
      aliyunUid = make_shared<string>(boost::any_cast<string>(m["AliyunUid"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
  }


  virtual ~CreateQuotaApplicationsForTemplateResponseBodyFailResults() = default;
};
class CreateQuotaApplicationsForTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> aliyunUids{};
  shared_ptr<string> batchQuotaApplicationId{};
  shared_ptr<vector<CreateQuotaApplicationsForTemplateResponseBodyFailResults>> failResults{};
  shared_ptr<string> requestId{};

  CreateQuotaApplicationsForTemplateResponseBody() {}

  explicit CreateQuotaApplicationsForTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliyunUids) {
      res["AliyunUids"] = boost::any(*aliyunUids);
    }
    if (batchQuotaApplicationId) {
      res["BatchQuotaApplicationId"] = boost::any(*batchQuotaApplicationId);
    }
    if (failResults) {
      vector<boost::any> temp1;
      for(auto item1:*failResults){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FailResults"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliyunUids") != m.end() && !m["AliyunUids"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AliyunUids"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AliyunUids"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      aliyunUids = make_shared<vector<string>>(toVec1);
    }
    if (m.find("BatchQuotaApplicationId") != m.end() && !m["BatchQuotaApplicationId"].empty()) {
      batchQuotaApplicationId = make_shared<string>(boost::any_cast<string>(m["BatchQuotaApplicationId"]));
    }
    if (m.find("FailResults") != m.end() && !m["FailResults"].empty()) {
      if (typeid(vector<boost::any>) == m["FailResults"].type()) {
        vector<CreateQuotaApplicationsForTemplateResponseBodyFailResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FailResults"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateQuotaApplicationsForTemplateResponseBodyFailResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        failResults = make_shared<vector<CreateQuotaApplicationsForTemplateResponseBodyFailResults>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateQuotaApplicationsForTemplateResponseBody() = default;
};
class CreateQuotaApplicationsForTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateQuotaApplicationsForTemplateResponseBody> body{};

  CreateQuotaApplicationsForTemplateResponse() {}

  explicit CreateQuotaApplicationsForTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateQuotaApplicationsForTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateQuotaApplicationsForTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~CreateQuotaApplicationsForTemplateResponse() = default;
};
class CreateTemplateQuotaItemRequestDimensions : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateTemplateQuotaItemRequestDimensions() {}

  explicit CreateTemplateQuotaItemRequestDimensions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateTemplateQuotaItemRequestDimensions() = default;
};
class CreateTemplateQuotaItemRequest : public Darabonba::Model {
public:
  shared_ptr<double> desireValue{};
  shared_ptr<vector<CreateTemplateQuotaItemRequestDimensions>> dimensions{};
  shared_ptr<string> effectiveTime{};
  shared_ptr<string> envLanguage{};
  shared_ptr<string> expireTime{};
  shared_ptr<long> noticeType{};
  shared_ptr<string> productCode{};
  shared_ptr<string> quotaActionCode{};
  shared_ptr<string> quotaCategory{};

  CreateTemplateQuotaItemRequest() {}

  explicit CreateTemplateQuotaItemRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (desireValue) {
      res["DesireValue"] = boost::any(*desireValue);
    }
    if (dimensions) {
      vector<boost::any> temp1;
      for(auto item1:*dimensions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Dimensions"] = boost::any(temp1);
    }
    if (effectiveTime) {
      res["EffectiveTime"] = boost::any(*effectiveTime);
    }
    if (envLanguage) {
      res["EnvLanguage"] = boost::any(*envLanguage);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (noticeType) {
      res["NoticeType"] = boost::any(*noticeType);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (quotaActionCode) {
      res["QuotaActionCode"] = boost::any(*quotaActionCode);
    }
    if (quotaCategory) {
      res["QuotaCategory"] = boost::any(*quotaCategory);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DesireValue") != m.end() && !m["DesireValue"].empty()) {
      desireValue = make_shared<double>(boost::any_cast<double>(m["DesireValue"]));
    }
    if (m.find("Dimensions") != m.end() && !m["Dimensions"].empty()) {
      if (typeid(vector<boost::any>) == m["Dimensions"].type()) {
        vector<CreateTemplateQuotaItemRequestDimensions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Dimensions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateTemplateQuotaItemRequestDimensions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dimensions = make_shared<vector<CreateTemplateQuotaItemRequestDimensions>>(expect1);
      }
    }
    if (m.find("EffectiveTime") != m.end() && !m["EffectiveTime"].empty()) {
      effectiveTime = make_shared<string>(boost::any_cast<string>(m["EffectiveTime"]));
    }
    if (m.find("EnvLanguage") != m.end() && !m["EnvLanguage"].empty()) {
      envLanguage = make_shared<string>(boost::any_cast<string>(m["EnvLanguage"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("NoticeType") != m.end() && !m["NoticeType"].empty()) {
      noticeType = make_shared<long>(boost::any_cast<long>(m["NoticeType"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("QuotaActionCode") != m.end() && !m["QuotaActionCode"].empty()) {
      quotaActionCode = make_shared<string>(boost::any_cast<string>(m["QuotaActionCode"]));
    }
    if (m.find("QuotaCategory") != m.end() && !m["QuotaCategory"].empty()) {
      quotaCategory = make_shared<string>(boost::any_cast<string>(m["QuotaCategory"]));
    }
  }


  virtual ~CreateTemplateQuotaItemRequest() = default;
};
class CreateTemplateQuotaItemResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> requestId{};

  CreateTemplateQuotaItemResponseBody() {}

  explicit CreateTemplateQuotaItemResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateTemplateQuotaItemResponseBody() = default;
};
class CreateTemplateQuotaItemResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateTemplateQuotaItemResponseBody> body{};

  CreateTemplateQuotaItemResponse() {}

  explicit CreateTemplateQuotaItemResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateTemplateQuotaItemResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateTemplateQuotaItemResponseBody>(model1);
      }
    }
  }


  virtual ~CreateTemplateQuotaItemResponse() = default;
};
class DeleteQuotaAlarmRequest : public Darabonba::Model {
public:
  shared_ptr<string> alarmId{};

  DeleteQuotaAlarmRequest() {}

  explicit DeleteQuotaAlarmRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alarmId) {
      res["AlarmId"] = boost::any(*alarmId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlarmId") != m.end() && !m["AlarmId"].empty()) {
      alarmId = make_shared<string>(boost::any_cast<string>(m["AlarmId"]));
    }
  }


  virtual ~DeleteQuotaAlarmRequest() = default;
};
class DeleteQuotaAlarmResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteQuotaAlarmResponseBody() {}

  explicit DeleteQuotaAlarmResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteQuotaAlarmResponseBody() = default;
};
class DeleteQuotaAlarmResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteQuotaAlarmResponseBody> body{};

  DeleteQuotaAlarmResponse() {}

  explicit DeleteQuotaAlarmResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteQuotaAlarmResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteQuotaAlarmResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteQuotaAlarmResponse() = default;
};
class DeleteTemplateQuotaItemRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};

  DeleteTemplateQuotaItemRequest() {}

  explicit DeleteTemplateQuotaItemRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~DeleteTemplateQuotaItemRequest() = default;
};
class DeleteTemplateQuotaItemResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> requestId{};

  DeleteTemplateQuotaItemResponseBody() {}

  explicit DeleteTemplateQuotaItemResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteTemplateQuotaItemResponseBody() = default;
};
class DeleteTemplateQuotaItemResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteTemplateQuotaItemResponseBody> body{};

  DeleteTemplateQuotaItemResponse() {}

  explicit DeleteTemplateQuotaItemResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteTemplateQuotaItemResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteTemplateQuotaItemResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteTemplateQuotaItemResponse() = default;
};
class GetProductQuotaRequestDimensions : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  GetProductQuotaRequestDimensions() {}

  explicit GetProductQuotaRequestDimensions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetProductQuotaRequestDimensions() = default;
};
class GetProductQuotaRequest : public Darabonba::Model {
public:
  shared_ptr<vector<GetProductQuotaRequestDimensions>> dimensions{};
  shared_ptr<string> productCode{};
  shared_ptr<string> quotaActionCode{};

  GetProductQuotaRequest() {}

  explicit GetProductQuotaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dimensions) {
      vector<boost::any> temp1;
      for(auto item1:*dimensions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Dimensions"] = boost::any(temp1);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (quotaActionCode) {
      res["QuotaActionCode"] = boost::any(*quotaActionCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Dimensions") != m.end() && !m["Dimensions"].empty()) {
      if (typeid(vector<boost::any>) == m["Dimensions"].type()) {
        vector<GetProductQuotaRequestDimensions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Dimensions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetProductQuotaRequestDimensions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dimensions = make_shared<vector<GetProductQuotaRequestDimensions>>(expect1);
      }
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("QuotaActionCode") != m.end() && !m["QuotaActionCode"].empty()) {
      quotaActionCode = make_shared<string>(boost::any_cast<string>(m["QuotaActionCode"]));
    }
  }


  virtual ~GetProductQuotaRequest() = default;
};
class GetProductQuotaResponseBodyQuotaPeriod : public Darabonba::Model {
public:
  shared_ptr<string> periodUnit{};
  shared_ptr<long> periodValue{};

  GetProductQuotaResponseBodyQuotaPeriod() {}

  explicit GetProductQuotaResponseBodyQuotaPeriod(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (periodUnit) {
      res["PeriodUnit"] = boost::any(*periodUnit);
    }
    if (periodValue) {
      res["PeriodValue"] = boost::any(*periodValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PeriodUnit") != m.end() && !m["PeriodUnit"].empty()) {
      periodUnit = make_shared<string>(boost::any_cast<string>(m["PeriodUnit"]));
    }
    if (m.find("PeriodValue") != m.end() && !m["PeriodValue"].empty()) {
      periodValue = make_shared<long>(boost::any_cast<long>(m["PeriodValue"]));
    }
  }


  virtual ~GetProductQuotaResponseBodyQuotaPeriod() = default;
};
class GetProductQuotaResponseBodyQuotaQuotaItems : public Darabonba::Model {
public:
  shared_ptr<string> quota{};
  shared_ptr<string> quotaUnit{};
  shared_ptr<string> type{};
  shared_ptr<string> usage{};

  GetProductQuotaResponseBodyQuotaQuotaItems() {}

  explicit GetProductQuotaResponseBodyQuotaQuotaItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (quota) {
      res["Quota"] = boost::any(*quota);
    }
    if (quotaUnit) {
      res["QuotaUnit"] = boost::any(*quotaUnit);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (usage) {
      res["Usage"] = boost::any(*usage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Quota") != m.end() && !m["Quota"].empty()) {
      quota = make_shared<string>(boost::any_cast<string>(m["Quota"]));
    }
    if (m.find("QuotaUnit") != m.end() && !m["QuotaUnit"].empty()) {
      quotaUnit = make_shared<string>(boost::any_cast<string>(m["QuotaUnit"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Usage") != m.end() && !m["Usage"].empty()) {
      usage = make_shared<string>(boost::any_cast<string>(m["Usage"]));
    }
  }


  virtual ~GetProductQuotaResponseBodyQuotaQuotaItems() = default;
};
class GetProductQuotaResponseBodyQuotaUsageMetric : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> metricDimensions{};
  shared_ptr<string> metricName{};
  shared_ptr<string> metricNamespace{};

  GetProductQuotaResponseBodyQuotaUsageMetric() {}

  explicit GetProductQuotaResponseBodyQuotaUsageMetric(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (metricDimensions) {
      res["MetricDimensions"] = boost::any(*metricDimensions);
    }
    if (metricName) {
      res["MetricName"] = boost::any(*metricName);
    }
    if (metricNamespace) {
      res["MetricNamespace"] = boost::any(*metricNamespace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MetricDimensions") != m.end() && !m["MetricDimensions"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["MetricDimensions"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      metricDimensions = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("MetricName") != m.end() && !m["MetricName"].empty()) {
      metricName = make_shared<string>(boost::any_cast<string>(m["MetricName"]));
    }
    if (m.find("MetricNamespace") != m.end() && !m["MetricNamespace"].empty()) {
      metricNamespace = make_shared<string>(boost::any_cast<string>(m["MetricNamespace"]));
    }
  }


  virtual ~GetProductQuotaResponseBodyQuotaUsageMetric() = default;
};
class GetProductQuotaResponseBodyQuota : public Darabonba::Model {
public:
  shared_ptr<bool> adjustable{};
  shared_ptr<vector<double>> applicableRange{};
  shared_ptr<string> applicableType{};
  shared_ptr<string> applyReasonTips{};
  shared_ptr<bool> consumable{};
  shared_ptr<map<string, boost::any>> dimensions{};
  shared_ptr<string> effectiveTime{};
  shared_ptr<string> expireTime{};
  shared_ptr<bool> globalQuota{};
  shared_ptr<GetProductQuotaResponseBodyQuotaPeriod> period{};
  shared_ptr<string> productCode{};
  shared_ptr<string> quotaActionCode{};
  shared_ptr<string> quotaArn{};
  shared_ptr<string> quotaCategory{};
  shared_ptr<string> quotaDescription{};
  shared_ptr<vector<GetProductQuotaResponseBodyQuotaQuotaItems>> quotaItems{};
  shared_ptr<string> quotaName{};
  shared_ptr<string> quotaType{};
  shared_ptr<string> quotaUnit{};
  shared_ptr<vector<double>> supportedRange{};
  shared_ptr<double> totalQuota{};
  shared_ptr<double> totalUsage{};
  shared_ptr<string> unadjustableDetail{};
  shared_ptr<GetProductQuotaResponseBodyQuotaUsageMetric> usageMetric{};

  GetProductQuotaResponseBodyQuota() {}

  explicit GetProductQuotaResponseBodyQuota(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (adjustable) {
      res["Adjustable"] = boost::any(*adjustable);
    }
    if (applicableRange) {
      res["ApplicableRange"] = boost::any(*applicableRange);
    }
    if (applicableType) {
      res["ApplicableType"] = boost::any(*applicableType);
    }
    if (applyReasonTips) {
      res["ApplyReasonTips"] = boost::any(*applyReasonTips);
    }
    if (consumable) {
      res["Consumable"] = boost::any(*consumable);
    }
    if (dimensions) {
      res["Dimensions"] = boost::any(*dimensions);
    }
    if (effectiveTime) {
      res["EffectiveTime"] = boost::any(*effectiveTime);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (globalQuota) {
      res["GlobalQuota"] = boost::any(*globalQuota);
    }
    if (period) {
      res["Period"] = period ? boost::any(period->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (quotaActionCode) {
      res["QuotaActionCode"] = boost::any(*quotaActionCode);
    }
    if (quotaArn) {
      res["QuotaArn"] = boost::any(*quotaArn);
    }
    if (quotaCategory) {
      res["QuotaCategory"] = boost::any(*quotaCategory);
    }
    if (quotaDescription) {
      res["QuotaDescription"] = boost::any(*quotaDescription);
    }
    if (quotaItems) {
      vector<boost::any> temp1;
      for(auto item1:*quotaItems){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["QuotaItems"] = boost::any(temp1);
    }
    if (quotaName) {
      res["QuotaName"] = boost::any(*quotaName);
    }
    if (quotaType) {
      res["QuotaType"] = boost::any(*quotaType);
    }
    if (quotaUnit) {
      res["QuotaUnit"] = boost::any(*quotaUnit);
    }
    if (supportedRange) {
      res["SupportedRange"] = boost::any(*supportedRange);
    }
    if (totalQuota) {
      res["TotalQuota"] = boost::any(*totalQuota);
    }
    if (totalUsage) {
      res["TotalUsage"] = boost::any(*totalUsage);
    }
    if (unadjustableDetail) {
      res["UnadjustableDetail"] = boost::any(*unadjustableDetail);
    }
    if (usageMetric) {
      res["UsageMetric"] = usageMetric ? boost::any(usageMetric->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Adjustable") != m.end() && !m["Adjustable"].empty()) {
      adjustable = make_shared<bool>(boost::any_cast<bool>(m["Adjustable"]));
    }
    if (m.find("ApplicableRange") != m.end() && !m["ApplicableRange"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["ApplicableRange"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ApplicableRange"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      applicableRange = make_shared<vector<double>>(toVec1);
    }
    if (m.find("ApplicableType") != m.end() && !m["ApplicableType"].empty()) {
      applicableType = make_shared<string>(boost::any_cast<string>(m["ApplicableType"]));
    }
    if (m.find("ApplyReasonTips") != m.end() && !m["ApplyReasonTips"].empty()) {
      applyReasonTips = make_shared<string>(boost::any_cast<string>(m["ApplyReasonTips"]));
    }
    if (m.find("Consumable") != m.end() && !m["Consumable"].empty()) {
      consumable = make_shared<bool>(boost::any_cast<bool>(m["Consumable"]));
    }
    if (m.find("Dimensions") != m.end() && !m["Dimensions"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Dimensions"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      dimensions = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("EffectiveTime") != m.end() && !m["EffectiveTime"].empty()) {
      effectiveTime = make_shared<string>(boost::any_cast<string>(m["EffectiveTime"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("GlobalQuota") != m.end() && !m["GlobalQuota"].empty()) {
      globalQuota = make_shared<bool>(boost::any_cast<bool>(m["GlobalQuota"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      if (typeid(map<string, boost::any>) == m["Period"].type()) {
        GetProductQuotaResponseBodyQuotaPeriod model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Period"]));
        period = make_shared<GetProductQuotaResponseBodyQuotaPeriod>(model1);
      }
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("QuotaActionCode") != m.end() && !m["QuotaActionCode"].empty()) {
      quotaActionCode = make_shared<string>(boost::any_cast<string>(m["QuotaActionCode"]));
    }
    if (m.find("QuotaArn") != m.end() && !m["QuotaArn"].empty()) {
      quotaArn = make_shared<string>(boost::any_cast<string>(m["QuotaArn"]));
    }
    if (m.find("QuotaCategory") != m.end() && !m["QuotaCategory"].empty()) {
      quotaCategory = make_shared<string>(boost::any_cast<string>(m["QuotaCategory"]));
    }
    if (m.find("QuotaDescription") != m.end() && !m["QuotaDescription"].empty()) {
      quotaDescription = make_shared<string>(boost::any_cast<string>(m["QuotaDescription"]));
    }
    if (m.find("QuotaItems") != m.end() && !m["QuotaItems"].empty()) {
      if (typeid(vector<boost::any>) == m["QuotaItems"].type()) {
        vector<GetProductQuotaResponseBodyQuotaQuotaItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["QuotaItems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetProductQuotaResponseBodyQuotaQuotaItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        quotaItems = make_shared<vector<GetProductQuotaResponseBodyQuotaQuotaItems>>(expect1);
      }
    }
    if (m.find("QuotaName") != m.end() && !m["QuotaName"].empty()) {
      quotaName = make_shared<string>(boost::any_cast<string>(m["QuotaName"]));
    }
    if (m.find("QuotaType") != m.end() && !m["QuotaType"].empty()) {
      quotaType = make_shared<string>(boost::any_cast<string>(m["QuotaType"]));
    }
    if (m.find("QuotaUnit") != m.end() && !m["QuotaUnit"].empty()) {
      quotaUnit = make_shared<string>(boost::any_cast<string>(m["QuotaUnit"]));
    }
    if (m.find("SupportedRange") != m.end() && !m["SupportedRange"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["SupportedRange"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SupportedRange"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      supportedRange = make_shared<vector<double>>(toVec1);
    }
    if (m.find("TotalQuota") != m.end() && !m["TotalQuota"].empty()) {
      totalQuota = make_shared<double>(boost::any_cast<double>(m["TotalQuota"]));
    }
    if (m.find("TotalUsage") != m.end() && !m["TotalUsage"].empty()) {
      totalUsage = make_shared<double>(boost::any_cast<double>(m["TotalUsage"]));
    }
    if (m.find("UnadjustableDetail") != m.end() && !m["UnadjustableDetail"].empty()) {
      unadjustableDetail = make_shared<string>(boost::any_cast<string>(m["UnadjustableDetail"]));
    }
    if (m.find("UsageMetric") != m.end() && !m["UsageMetric"].empty()) {
      if (typeid(map<string, boost::any>) == m["UsageMetric"].type()) {
        GetProductQuotaResponseBodyQuotaUsageMetric model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UsageMetric"]));
        usageMetric = make_shared<GetProductQuotaResponseBodyQuotaUsageMetric>(model1);
      }
    }
  }


  virtual ~GetProductQuotaResponseBodyQuota() = default;
};
class GetProductQuotaResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetProductQuotaResponseBodyQuota> quota{};
  shared_ptr<string> requestId{};

  GetProductQuotaResponseBody() {}

  explicit GetProductQuotaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (quota) {
      res["Quota"] = quota ? boost::any(quota->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Quota") != m.end() && !m["Quota"].empty()) {
      if (typeid(map<string, boost::any>) == m["Quota"].type()) {
        GetProductQuotaResponseBodyQuota model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Quota"]));
        quota = make_shared<GetProductQuotaResponseBodyQuota>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetProductQuotaResponseBody() = default;
};
class GetProductQuotaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetProductQuotaResponseBody> body{};

  GetProductQuotaResponse() {}

  explicit GetProductQuotaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetProductQuotaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetProductQuotaResponseBody>(model1);
      }
    }
  }


  virtual ~GetProductQuotaResponse() = default;
};
class GetProductQuotaDimensionRequestDependentDimensions : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  GetProductQuotaDimensionRequestDependentDimensions() {}

  explicit GetProductQuotaDimensionRequestDependentDimensions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetProductQuotaDimensionRequestDependentDimensions() = default;
};
class GetProductQuotaDimensionRequest : public Darabonba::Model {
public:
  shared_ptr<vector<GetProductQuotaDimensionRequestDependentDimensions>> dependentDimensions{};
  shared_ptr<string> dimensionKey{};
  shared_ptr<string> productCode{};

  GetProductQuotaDimensionRequest() {}

  explicit GetProductQuotaDimensionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dependentDimensions) {
      vector<boost::any> temp1;
      for(auto item1:*dependentDimensions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DependentDimensions"] = boost::any(temp1);
    }
    if (dimensionKey) {
      res["DimensionKey"] = boost::any(*dimensionKey);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DependentDimensions") != m.end() && !m["DependentDimensions"].empty()) {
      if (typeid(vector<boost::any>) == m["DependentDimensions"].type()) {
        vector<GetProductQuotaDimensionRequestDependentDimensions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DependentDimensions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetProductQuotaDimensionRequestDependentDimensions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dependentDimensions = make_shared<vector<GetProductQuotaDimensionRequestDependentDimensions>>(expect1);
      }
    }
    if (m.find("DimensionKey") != m.end() && !m["DimensionKey"].empty()) {
      dimensionKey = make_shared<string>(boost::any_cast<string>(m["DimensionKey"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
  }


  virtual ~GetProductQuotaDimensionRequest() = default;
};
class GetProductQuotaDimensionResponseBodyQuotaDimensionDimensionValueDetail : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  GetProductQuotaDimensionResponseBodyQuotaDimensionDimensionValueDetail() {}

  explicit GetProductQuotaDimensionResponseBodyQuotaDimensionDimensionValueDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetProductQuotaDimensionResponseBodyQuotaDimensionDimensionValueDetail() = default;
};
class GetProductQuotaDimensionResponseBodyQuotaDimension : public Darabonba::Model {
public:
  shared_ptr<vector<string>> dependentDimensions{};
  shared_ptr<string> dimensionKey{};
  shared_ptr<vector<GetProductQuotaDimensionResponseBodyQuotaDimensionDimensionValueDetail>> dimensionValueDetail{};
  shared_ptr<vector<string>> dimensionValues{};
  shared_ptr<string> name{};

  GetProductQuotaDimensionResponseBodyQuotaDimension() {}

  explicit GetProductQuotaDimensionResponseBodyQuotaDimension(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dependentDimensions) {
      res["DependentDimensions"] = boost::any(*dependentDimensions);
    }
    if (dimensionKey) {
      res["DimensionKey"] = boost::any(*dimensionKey);
    }
    if (dimensionValueDetail) {
      vector<boost::any> temp1;
      for(auto item1:*dimensionValueDetail){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DimensionValueDetail"] = boost::any(temp1);
    }
    if (dimensionValues) {
      res["DimensionValues"] = boost::any(*dimensionValues);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DependentDimensions") != m.end() && !m["DependentDimensions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DependentDimensions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DependentDimensions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dependentDimensions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("DimensionKey") != m.end() && !m["DimensionKey"].empty()) {
      dimensionKey = make_shared<string>(boost::any_cast<string>(m["DimensionKey"]));
    }
    if (m.find("DimensionValueDetail") != m.end() && !m["DimensionValueDetail"].empty()) {
      if (typeid(vector<boost::any>) == m["DimensionValueDetail"].type()) {
        vector<GetProductQuotaDimensionResponseBodyQuotaDimensionDimensionValueDetail> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DimensionValueDetail"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetProductQuotaDimensionResponseBodyQuotaDimensionDimensionValueDetail model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dimensionValueDetail = make_shared<vector<GetProductQuotaDimensionResponseBodyQuotaDimensionDimensionValueDetail>>(expect1);
      }
    }
    if (m.find("DimensionValues") != m.end() && !m["DimensionValues"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DimensionValues"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DimensionValues"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dimensionValues = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~GetProductQuotaDimensionResponseBodyQuotaDimension() = default;
};
class GetProductQuotaDimensionResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetProductQuotaDimensionResponseBodyQuotaDimension> quotaDimension{};
  shared_ptr<string> requestId{};

  GetProductQuotaDimensionResponseBody() {}

  explicit GetProductQuotaDimensionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (quotaDimension) {
      res["QuotaDimension"] = quotaDimension ? boost::any(quotaDimension->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("QuotaDimension") != m.end() && !m["QuotaDimension"].empty()) {
      if (typeid(map<string, boost::any>) == m["QuotaDimension"].type()) {
        GetProductQuotaDimensionResponseBodyQuotaDimension model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["QuotaDimension"]));
        quotaDimension = make_shared<GetProductQuotaDimensionResponseBodyQuotaDimension>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetProductQuotaDimensionResponseBody() = default;
};
class GetProductQuotaDimensionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetProductQuotaDimensionResponseBody> body{};

  GetProductQuotaDimensionResponse() {}

  explicit GetProductQuotaDimensionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetProductQuotaDimensionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetProductQuotaDimensionResponseBody>(model1);
      }
    }
  }


  virtual ~GetProductQuotaDimensionResponse() = default;
};
class GetQuotaAlarmRequest : public Darabonba::Model {
public:
  shared_ptr<string> alarmId{};

  GetQuotaAlarmRequest() {}

  explicit GetQuotaAlarmRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alarmId) {
      res["AlarmId"] = boost::any(*alarmId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlarmId") != m.end() && !m["AlarmId"].empty()) {
      alarmId = make_shared<string>(boost::any_cast<string>(m["AlarmId"]));
    }
  }


  virtual ~GetQuotaAlarmRequest() = default;
};
class GetQuotaAlarmResponseBodyQuotaAlarm : public Darabonba::Model {
public:
  shared_ptr<string> alarmId{};
  shared_ptr<string> alarmName{};
  shared_ptr<string> createTime{};
  shared_ptr<vector<string>> notifyChannels{};
  shared_ptr<string> notifyTarget{};
  shared_ptr<string> productCode{};
  shared_ptr<string> quotaActionCode{};
  shared_ptr<map<string, boost::any>> quotaDimension{};
  shared_ptr<double> quotaUsage{};
  shared_ptr<double> quotaValue{};
  shared_ptr<double> threshold{};
  shared_ptr<double> thresholdPercent{};
  shared_ptr<string> thresholdType{};
  shared_ptr<string> webhook{};

  GetQuotaAlarmResponseBodyQuotaAlarm() {}

  explicit GetQuotaAlarmResponseBodyQuotaAlarm(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alarmId) {
      res["AlarmId"] = boost::any(*alarmId);
    }
    if (alarmName) {
      res["AlarmName"] = boost::any(*alarmName);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (notifyChannels) {
      res["NotifyChannels"] = boost::any(*notifyChannels);
    }
    if (notifyTarget) {
      res["NotifyTarget"] = boost::any(*notifyTarget);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (quotaActionCode) {
      res["QuotaActionCode"] = boost::any(*quotaActionCode);
    }
    if (quotaDimension) {
      res["QuotaDimension"] = boost::any(*quotaDimension);
    }
    if (quotaUsage) {
      res["QuotaUsage"] = boost::any(*quotaUsage);
    }
    if (quotaValue) {
      res["QuotaValue"] = boost::any(*quotaValue);
    }
    if (threshold) {
      res["Threshold"] = boost::any(*threshold);
    }
    if (thresholdPercent) {
      res["ThresholdPercent"] = boost::any(*thresholdPercent);
    }
    if (thresholdType) {
      res["ThresholdType"] = boost::any(*thresholdType);
    }
    if (webhook) {
      res["Webhook"] = boost::any(*webhook);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlarmId") != m.end() && !m["AlarmId"].empty()) {
      alarmId = make_shared<string>(boost::any_cast<string>(m["AlarmId"]));
    }
    if (m.find("AlarmName") != m.end() && !m["AlarmName"].empty()) {
      alarmName = make_shared<string>(boost::any_cast<string>(m["AlarmName"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("NotifyChannels") != m.end() && !m["NotifyChannels"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["NotifyChannels"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["NotifyChannels"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      notifyChannels = make_shared<vector<string>>(toVec1);
    }
    if (m.find("NotifyTarget") != m.end() && !m["NotifyTarget"].empty()) {
      notifyTarget = make_shared<string>(boost::any_cast<string>(m["NotifyTarget"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("QuotaActionCode") != m.end() && !m["QuotaActionCode"].empty()) {
      quotaActionCode = make_shared<string>(boost::any_cast<string>(m["QuotaActionCode"]));
    }
    if (m.find("QuotaDimension") != m.end() && !m["QuotaDimension"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["QuotaDimension"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      quotaDimension = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("QuotaUsage") != m.end() && !m["QuotaUsage"].empty()) {
      quotaUsage = make_shared<double>(boost::any_cast<double>(m["QuotaUsage"]));
    }
    if (m.find("QuotaValue") != m.end() && !m["QuotaValue"].empty()) {
      quotaValue = make_shared<double>(boost::any_cast<double>(m["QuotaValue"]));
    }
    if (m.find("Threshold") != m.end() && !m["Threshold"].empty()) {
      threshold = make_shared<double>(boost::any_cast<double>(m["Threshold"]));
    }
    if (m.find("ThresholdPercent") != m.end() && !m["ThresholdPercent"].empty()) {
      thresholdPercent = make_shared<double>(boost::any_cast<double>(m["ThresholdPercent"]));
    }
    if (m.find("ThresholdType") != m.end() && !m["ThresholdType"].empty()) {
      thresholdType = make_shared<string>(boost::any_cast<string>(m["ThresholdType"]));
    }
    if (m.find("Webhook") != m.end() && !m["Webhook"].empty()) {
      webhook = make_shared<string>(boost::any_cast<string>(m["Webhook"]));
    }
  }


  virtual ~GetQuotaAlarmResponseBodyQuotaAlarm() = default;
};
class GetQuotaAlarmResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetQuotaAlarmResponseBodyQuotaAlarm> quotaAlarm{};
  shared_ptr<string> requestId{};

  GetQuotaAlarmResponseBody() {}

  explicit GetQuotaAlarmResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (quotaAlarm) {
      res["QuotaAlarm"] = quotaAlarm ? boost::any(quotaAlarm->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("QuotaAlarm") != m.end() && !m["QuotaAlarm"].empty()) {
      if (typeid(map<string, boost::any>) == m["QuotaAlarm"].type()) {
        GetQuotaAlarmResponseBodyQuotaAlarm model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["QuotaAlarm"]));
        quotaAlarm = make_shared<GetQuotaAlarmResponseBodyQuotaAlarm>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetQuotaAlarmResponseBody() = default;
};
class GetQuotaAlarmResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetQuotaAlarmResponseBody> body{};

  GetQuotaAlarmResponse() {}

  explicit GetQuotaAlarmResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetQuotaAlarmResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetQuotaAlarmResponseBody>(model1);
      }
    }
  }


  virtual ~GetQuotaAlarmResponse() = default;
};
class GetQuotaApplicationRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationId{};

  GetQuotaApplicationRequest() {}

  explicit GetQuotaApplicationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
  }


  virtual ~GetQuotaApplicationRequest() = default;
};
class GetQuotaApplicationResponseBodyQuotaApplication : public Darabonba::Model {
public:
  shared_ptr<string> applicationId{};
  shared_ptr<string> applyTime{};
  shared_ptr<double> approveValue{};
  shared_ptr<string> auditReason{};
  shared_ptr<long> desireValue{};
  shared_ptr<map<string, boost::any>> dimension{};
  shared_ptr<string> effectiveTime{};
  shared_ptr<string> expireTime{};
  shared_ptr<long> noticeType{};
  shared_ptr<string> productCode{};
  shared_ptr<string> quotaActionCode{};
  shared_ptr<string> quotaArn{};
  shared_ptr<string> quotaDescription{};
  shared_ptr<string> quotaName{};
  shared_ptr<string> quotaUnit{};
  shared_ptr<string> reason{};
  shared_ptr<string> status{};

  GetQuotaApplicationResponseBodyQuotaApplication() {}

  explicit GetQuotaApplicationResponseBodyQuotaApplication(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
    }
    if (applyTime) {
      res["ApplyTime"] = boost::any(*applyTime);
    }
    if (approveValue) {
      res["ApproveValue"] = boost::any(*approveValue);
    }
    if (auditReason) {
      res["AuditReason"] = boost::any(*auditReason);
    }
    if (desireValue) {
      res["DesireValue"] = boost::any(*desireValue);
    }
    if (dimension) {
      res["Dimension"] = boost::any(*dimension);
    }
    if (effectiveTime) {
      res["EffectiveTime"] = boost::any(*effectiveTime);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (noticeType) {
      res["NoticeType"] = boost::any(*noticeType);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (quotaActionCode) {
      res["QuotaActionCode"] = boost::any(*quotaActionCode);
    }
    if (quotaArn) {
      res["QuotaArn"] = boost::any(*quotaArn);
    }
    if (quotaDescription) {
      res["QuotaDescription"] = boost::any(*quotaDescription);
    }
    if (quotaName) {
      res["QuotaName"] = boost::any(*quotaName);
    }
    if (quotaUnit) {
      res["QuotaUnit"] = boost::any(*quotaUnit);
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
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
    if (m.find("ApplyTime") != m.end() && !m["ApplyTime"].empty()) {
      applyTime = make_shared<string>(boost::any_cast<string>(m["ApplyTime"]));
    }
    if (m.find("ApproveValue") != m.end() && !m["ApproveValue"].empty()) {
      approveValue = make_shared<double>(boost::any_cast<double>(m["ApproveValue"]));
    }
    if (m.find("AuditReason") != m.end() && !m["AuditReason"].empty()) {
      auditReason = make_shared<string>(boost::any_cast<string>(m["AuditReason"]));
    }
    if (m.find("DesireValue") != m.end() && !m["DesireValue"].empty()) {
      desireValue = make_shared<long>(boost::any_cast<long>(m["DesireValue"]));
    }
    if (m.find("Dimension") != m.end() && !m["Dimension"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Dimension"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      dimension = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("EffectiveTime") != m.end() && !m["EffectiveTime"].empty()) {
      effectiveTime = make_shared<string>(boost::any_cast<string>(m["EffectiveTime"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("NoticeType") != m.end() && !m["NoticeType"].empty()) {
      noticeType = make_shared<long>(boost::any_cast<long>(m["NoticeType"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("QuotaActionCode") != m.end() && !m["QuotaActionCode"].empty()) {
      quotaActionCode = make_shared<string>(boost::any_cast<string>(m["QuotaActionCode"]));
    }
    if (m.find("QuotaArn") != m.end() && !m["QuotaArn"].empty()) {
      quotaArn = make_shared<string>(boost::any_cast<string>(m["QuotaArn"]));
    }
    if (m.find("QuotaDescription") != m.end() && !m["QuotaDescription"].empty()) {
      quotaDescription = make_shared<string>(boost::any_cast<string>(m["QuotaDescription"]));
    }
    if (m.find("QuotaName") != m.end() && !m["QuotaName"].empty()) {
      quotaName = make_shared<string>(boost::any_cast<string>(m["QuotaName"]));
    }
    if (m.find("QuotaUnit") != m.end() && !m["QuotaUnit"].empty()) {
      quotaUnit = make_shared<string>(boost::any_cast<string>(m["QuotaUnit"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetQuotaApplicationResponseBodyQuotaApplication() = default;
};
class GetQuotaApplicationResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetQuotaApplicationResponseBodyQuotaApplication> quotaApplication{};
  shared_ptr<string> requestId{};

  GetQuotaApplicationResponseBody() {}

  explicit GetQuotaApplicationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (quotaApplication) {
      res["QuotaApplication"] = quotaApplication ? boost::any(quotaApplication->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("QuotaApplication") != m.end() && !m["QuotaApplication"].empty()) {
      if (typeid(map<string, boost::any>) == m["QuotaApplication"].type()) {
        GetQuotaApplicationResponseBodyQuotaApplication model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["QuotaApplication"]));
        quotaApplication = make_shared<GetQuotaApplicationResponseBodyQuotaApplication>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetQuotaApplicationResponseBody() = default;
};
class GetQuotaApplicationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetQuotaApplicationResponseBody> body{};

  GetQuotaApplicationResponse() {}

  explicit GetQuotaApplicationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetQuotaApplicationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetQuotaApplicationResponseBody>(model1);
      }
    }
  }


  virtual ~GetQuotaApplicationResponse() = default;
};
class GetQuotaApplicationApprovalRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationId{};

  GetQuotaApplicationApprovalRequest() {}

  explicit GetQuotaApplicationApprovalRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
  }


  virtual ~GetQuotaApplicationApprovalRequest() = default;
};
class GetQuotaApplicationApprovalResponseBodyModule : public Darabonba::Model {
public:
  shared_ptr<long> approvalHours{};
  shared_ptr<long> reminderIntervalHours{};
  shared_ptr<bool> supportReminder{};
  shared_ptr<string> unsupportReminderReason{};

  GetQuotaApplicationApprovalResponseBodyModule() {}

  explicit GetQuotaApplicationApprovalResponseBodyModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (approvalHours) {
      res["ApprovalHours"] = boost::any(*approvalHours);
    }
    if (reminderIntervalHours) {
      res["ReminderIntervalHours"] = boost::any(*reminderIntervalHours);
    }
    if (supportReminder) {
      res["SupportReminder"] = boost::any(*supportReminder);
    }
    if (unsupportReminderReason) {
      res["UnsupportReminderReason"] = boost::any(*unsupportReminderReason);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApprovalHours") != m.end() && !m["ApprovalHours"].empty()) {
      approvalHours = make_shared<long>(boost::any_cast<long>(m["ApprovalHours"]));
    }
    if (m.find("ReminderIntervalHours") != m.end() && !m["ReminderIntervalHours"].empty()) {
      reminderIntervalHours = make_shared<long>(boost::any_cast<long>(m["ReminderIntervalHours"]));
    }
    if (m.find("SupportReminder") != m.end() && !m["SupportReminder"].empty()) {
      supportReminder = make_shared<bool>(boost::any_cast<bool>(m["SupportReminder"]));
    }
    if (m.find("UnsupportReminderReason") != m.end() && !m["UnsupportReminderReason"].empty()) {
      unsupportReminderReason = make_shared<string>(boost::any_cast<string>(m["UnsupportReminderReason"]));
    }
  }


  virtual ~GetQuotaApplicationApprovalResponseBodyModule() = default;
};
class GetQuotaApplicationApprovalResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> allowRetry{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<vector<boost::any>> errorArgs{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<GetQuotaApplicationApprovalResponseBodyModule> module{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetQuotaApplicationApprovalResponseBody() {}

  explicit GetQuotaApplicationApprovalResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowRetry) {
      res["AllowRetry"] = boost::any(*allowRetry);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (errorArgs) {
      res["ErrorArgs"] = boost::any(*errorArgs);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (module) {
      res["Module"] = module ? boost::any(module->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("AllowRetry") != m.end() && !m["AllowRetry"].empty()) {
      allowRetry = make_shared<bool>(boost::any_cast<bool>(m["AllowRetry"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("ErrorArgs") != m.end() && !m["ErrorArgs"].empty()) {
      vector<boost::any> toVec1;
      if (typeid(vector<boost::any>) == m["ErrorArgs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ErrorArgs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<boost::any>(item));
        }
      }
      errorArgs = make_shared<vector<boost::any>>(toVec1);
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Module") != m.end() && !m["Module"].empty()) {
      if (typeid(map<string, boost::any>) == m["Module"].type()) {
        GetQuotaApplicationApprovalResponseBodyModule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Module"]));
        module = make_shared<GetQuotaApplicationApprovalResponseBodyModule>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetQuotaApplicationApprovalResponseBody() = default;
};
class GetQuotaApplicationApprovalResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetQuotaApplicationApprovalResponseBody> body{};

  GetQuotaApplicationApprovalResponse() {}

  explicit GetQuotaApplicationApprovalResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetQuotaApplicationApprovalResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetQuotaApplicationApprovalResponseBody>(model1);
      }
    }
  }


  virtual ~GetQuotaApplicationApprovalResponse() = default;
};
class GetQuotaTemplateServiceStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceDirectoryId{};

  GetQuotaTemplateServiceStatusRequest() {}

  explicit GetQuotaTemplateServiceStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceDirectoryId) {
      res["ResourceDirectoryId"] = boost::any(*resourceDirectoryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceDirectoryId") != m.end() && !m["ResourceDirectoryId"].empty()) {
      resourceDirectoryId = make_shared<string>(boost::any_cast<string>(m["ResourceDirectoryId"]));
    }
  }


  virtual ~GetQuotaTemplateServiceStatusRequest() = default;
};
class GetQuotaTemplateServiceStatusResponseBodyTemplateServiceStatus : public Darabonba::Model {
public:
  shared_ptr<string> resourceDirectoryId{};
  shared_ptr<long> serviceStatus{};

  GetQuotaTemplateServiceStatusResponseBodyTemplateServiceStatus() {}

  explicit GetQuotaTemplateServiceStatusResponseBodyTemplateServiceStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceDirectoryId) {
      res["ResourceDirectoryId"] = boost::any(*resourceDirectoryId);
    }
    if (serviceStatus) {
      res["ServiceStatus"] = boost::any(*serviceStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceDirectoryId") != m.end() && !m["ResourceDirectoryId"].empty()) {
      resourceDirectoryId = make_shared<string>(boost::any_cast<string>(m["ResourceDirectoryId"]));
    }
    if (m.find("ServiceStatus") != m.end() && !m["ServiceStatus"].empty()) {
      serviceStatus = make_shared<long>(boost::any_cast<long>(m["ServiceStatus"]));
    }
  }


  virtual ~GetQuotaTemplateServiceStatusResponseBodyTemplateServiceStatus() = default;
};
class GetQuotaTemplateServiceStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetQuotaTemplateServiceStatusResponseBodyTemplateServiceStatus> templateServiceStatus{};

  GetQuotaTemplateServiceStatusResponseBody() {}

  explicit GetQuotaTemplateServiceStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (templateServiceStatus) {
      res["TemplateServiceStatus"] = templateServiceStatus ? boost::any(templateServiceStatus->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TemplateServiceStatus") != m.end() && !m["TemplateServiceStatus"].empty()) {
      if (typeid(map<string, boost::any>) == m["TemplateServiceStatus"].type()) {
        GetQuotaTemplateServiceStatusResponseBodyTemplateServiceStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TemplateServiceStatus"]));
        templateServiceStatus = make_shared<GetQuotaTemplateServiceStatusResponseBodyTemplateServiceStatus>(model1);
      }
    }
  }


  virtual ~GetQuotaTemplateServiceStatusResponseBody() = default;
};
class GetQuotaTemplateServiceStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetQuotaTemplateServiceStatusResponseBody> body{};

  GetQuotaTemplateServiceStatusResponse() {}

  explicit GetQuotaTemplateServiceStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetQuotaTemplateServiceStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetQuotaTemplateServiceStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetQuotaTemplateServiceStatusResponse() = default;
};
class ListAlarmHistoriesRequest : public Darabonba::Model {
public:
  shared_ptr<string> alarmId{};
  shared_ptr<long> endTime{};
  shared_ptr<string> keyword{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> productCode{};
  shared_ptr<long> startTime{};

  ListAlarmHistoriesRequest() {}

  explicit ListAlarmHistoriesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alarmId) {
      res["AlarmId"] = boost::any(*alarmId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlarmId") != m.end() && !m["AlarmId"].empty()) {
      alarmId = make_shared<string>(boost::any_cast<string>(m["AlarmId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~ListAlarmHistoriesRequest() = default;
};
class ListAlarmHistoriesResponseBodyAlarmHistories : public Darabonba::Model {
public:
  shared_ptr<string> alarmName{};
  shared_ptr<string> createTime{};
  shared_ptr<vector<string>> notifyChannels{};
  shared_ptr<string> notifyTarget{};
  shared_ptr<string> productCode{};
  shared_ptr<string> quotaActionCode{};
  shared_ptr<double> quotaUsage{};
  shared_ptr<double> threshold{};
  shared_ptr<double> thresholdPercent{};

  ListAlarmHistoriesResponseBodyAlarmHistories() {}

  explicit ListAlarmHistoriesResponseBodyAlarmHistories(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alarmName) {
      res["AlarmName"] = boost::any(*alarmName);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (notifyChannels) {
      res["NotifyChannels"] = boost::any(*notifyChannels);
    }
    if (notifyTarget) {
      res["NotifyTarget"] = boost::any(*notifyTarget);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (quotaActionCode) {
      res["QuotaActionCode"] = boost::any(*quotaActionCode);
    }
    if (quotaUsage) {
      res["QuotaUsage"] = boost::any(*quotaUsage);
    }
    if (threshold) {
      res["Threshold"] = boost::any(*threshold);
    }
    if (thresholdPercent) {
      res["ThresholdPercent"] = boost::any(*thresholdPercent);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlarmName") != m.end() && !m["AlarmName"].empty()) {
      alarmName = make_shared<string>(boost::any_cast<string>(m["AlarmName"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("NotifyChannels") != m.end() && !m["NotifyChannels"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["NotifyChannels"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["NotifyChannels"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      notifyChannels = make_shared<vector<string>>(toVec1);
    }
    if (m.find("NotifyTarget") != m.end() && !m["NotifyTarget"].empty()) {
      notifyTarget = make_shared<string>(boost::any_cast<string>(m["NotifyTarget"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("QuotaActionCode") != m.end() && !m["QuotaActionCode"].empty()) {
      quotaActionCode = make_shared<string>(boost::any_cast<string>(m["QuotaActionCode"]));
    }
    if (m.find("QuotaUsage") != m.end() && !m["QuotaUsage"].empty()) {
      quotaUsage = make_shared<double>(boost::any_cast<double>(m["QuotaUsage"]));
    }
    if (m.find("Threshold") != m.end() && !m["Threshold"].empty()) {
      threshold = make_shared<double>(boost::any_cast<double>(m["Threshold"]));
    }
    if (m.find("ThresholdPercent") != m.end() && !m["ThresholdPercent"].empty()) {
      thresholdPercent = make_shared<double>(boost::any_cast<double>(m["ThresholdPercent"]));
    }
  }


  virtual ~ListAlarmHistoriesResponseBodyAlarmHistories() = default;
};
class ListAlarmHistoriesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListAlarmHistoriesResponseBodyAlarmHistories>> alarmHistories{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListAlarmHistoriesResponseBody() {}

  explicit ListAlarmHistoriesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alarmHistories) {
      vector<boost::any> temp1;
      for(auto item1:*alarmHistories){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AlarmHistories"] = boost::any(temp1);
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
    if (m.find("AlarmHistories") != m.end() && !m["AlarmHistories"].empty()) {
      if (typeid(vector<boost::any>) == m["AlarmHistories"].type()) {
        vector<ListAlarmHistoriesResponseBodyAlarmHistories> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AlarmHistories"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAlarmHistoriesResponseBodyAlarmHistories model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        alarmHistories = make_shared<vector<ListAlarmHistoriesResponseBodyAlarmHistories>>(expect1);
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


  virtual ~ListAlarmHistoriesResponseBody() = default;
};
class ListAlarmHistoriesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAlarmHistoriesResponseBody> body{};

  ListAlarmHistoriesResponse() {}

  explicit ListAlarmHistoriesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListAlarmHistoriesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAlarmHistoriesResponseBody>(model1);
      }
    }
  }


  virtual ~ListAlarmHistoriesResponse() = default;
};
class ListDependentQuotasRequest : public Darabonba::Model {
public:
  shared_ptr<string> productCode{};
  shared_ptr<string> quotaActionCode{};

  ListDependentQuotasRequest() {}

  explicit ListDependentQuotasRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (quotaActionCode) {
      res["QuotaActionCode"] = boost::any(*quotaActionCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("QuotaActionCode") != m.end() && !m["QuotaActionCode"].empty()) {
      quotaActionCode = make_shared<string>(boost::any_cast<string>(m["QuotaActionCode"]));
    }
  }


  virtual ~ListDependentQuotasRequest() = default;
};
class ListDependentQuotasResponseBodyQuotasDimensions : public Darabonba::Model {
public:
  shared_ptr<vector<string>> dependentDimension{};
  shared_ptr<string> dimensionKey{};
  shared_ptr<vector<string>> dimensionValues{};

  ListDependentQuotasResponseBodyQuotasDimensions() {}

  explicit ListDependentQuotasResponseBodyQuotasDimensions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dependentDimension) {
      res["DependentDimension"] = boost::any(*dependentDimension);
    }
    if (dimensionKey) {
      res["DimensionKey"] = boost::any(*dimensionKey);
    }
    if (dimensionValues) {
      res["DimensionValues"] = boost::any(*dimensionValues);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DependentDimension") != m.end() && !m["DependentDimension"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DependentDimension"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DependentDimension"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dependentDimension = make_shared<vector<string>>(toVec1);
    }
    if (m.find("DimensionKey") != m.end() && !m["DimensionKey"].empty()) {
      dimensionKey = make_shared<string>(boost::any_cast<string>(m["DimensionKey"]));
    }
    if (m.find("DimensionValues") != m.end() && !m["DimensionValues"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DimensionValues"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DimensionValues"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dimensionValues = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListDependentQuotasResponseBodyQuotasDimensions() = default;
};
class ListDependentQuotasResponseBodyQuotas : public Darabonba::Model {
public:
  shared_ptr<vector<ListDependentQuotasResponseBodyQuotasDimensions>> dimensions{};
  shared_ptr<string> productCode{};
  shared_ptr<string> quotaActionCode{};
  shared_ptr<double> scale{};

  ListDependentQuotasResponseBodyQuotas() {}

  explicit ListDependentQuotasResponseBodyQuotas(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dimensions) {
      vector<boost::any> temp1;
      for(auto item1:*dimensions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Dimensions"] = boost::any(temp1);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (quotaActionCode) {
      res["QuotaActionCode"] = boost::any(*quotaActionCode);
    }
    if (scale) {
      res["Scale"] = boost::any(*scale);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Dimensions") != m.end() && !m["Dimensions"].empty()) {
      if (typeid(vector<boost::any>) == m["Dimensions"].type()) {
        vector<ListDependentQuotasResponseBodyQuotasDimensions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Dimensions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDependentQuotasResponseBodyQuotasDimensions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dimensions = make_shared<vector<ListDependentQuotasResponseBodyQuotasDimensions>>(expect1);
      }
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("QuotaActionCode") != m.end() && !m["QuotaActionCode"].empty()) {
      quotaActionCode = make_shared<string>(boost::any_cast<string>(m["QuotaActionCode"]));
    }
    if (m.find("Scale") != m.end() && !m["Scale"].empty()) {
      scale = make_shared<double>(boost::any_cast<double>(m["Scale"]));
    }
  }


  virtual ~ListDependentQuotasResponseBodyQuotas() = default;
};
class ListDependentQuotasResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListDependentQuotasResponseBodyQuotas>> quotas{};
  shared_ptr<string> requestId{};

  ListDependentQuotasResponseBody() {}

  explicit ListDependentQuotasResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (quotas) {
      vector<boost::any> temp1;
      for(auto item1:*quotas){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Quotas"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Quotas") != m.end() && !m["Quotas"].empty()) {
      if (typeid(vector<boost::any>) == m["Quotas"].type()) {
        vector<ListDependentQuotasResponseBodyQuotas> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Quotas"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDependentQuotasResponseBodyQuotas model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        quotas = make_shared<vector<ListDependentQuotasResponseBodyQuotas>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListDependentQuotasResponseBody() = default;
};
class ListDependentQuotasResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDependentQuotasResponseBody> body{};

  ListDependentQuotasResponse() {}

  explicit ListDependentQuotasResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListDependentQuotasResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDependentQuotasResponseBody>(model1);
      }
    }
  }


  virtual ~ListDependentQuotasResponse() = default;
};
class ListProductDimensionGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> productCode{};

  ListProductDimensionGroupsRequest() {}

  explicit ListProductDimensionGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
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
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
  }


  virtual ~ListProductDimensionGroupsRequest() = default;
};
class ListProductDimensionGroupsResponseBodyDimensionGroups : public Darabonba::Model {
public:
  shared_ptr<vector<string>> dimensionKeys{};
  shared_ptr<string> groupCode{};
  shared_ptr<string> groupName{};
  shared_ptr<string> productCode{};

  ListProductDimensionGroupsResponseBodyDimensionGroups() {}

  explicit ListProductDimensionGroupsResponseBodyDimensionGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dimensionKeys) {
      res["DimensionKeys"] = boost::any(*dimensionKeys);
    }
    if (groupCode) {
      res["GroupCode"] = boost::any(*groupCode);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DimensionKeys") != m.end() && !m["DimensionKeys"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DimensionKeys"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DimensionKeys"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dimensionKeys = make_shared<vector<string>>(toVec1);
    }
    if (m.find("GroupCode") != m.end() && !m["GroupCode"].empty()) {
      groupCode = make_shared<string>(boost::any_cast<string>(m["GroupCode"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
  }


  virtual ~ListProductDimensionGroupsResponseBodyDimensionGroups() = default;
};
class ListProductDimensionGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListProductDimensionGroupsResponseBodyDimensionGroups>> dimensionGroups{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListProductDimensionGroupsResponseBody() {}

  explicit ListProductDimensionGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dimensionGroups) {
      vector<boost::any> temp1;
      for(auto item1:*dimensionGroups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DimensionGroups"] = boost::any(temp1);
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
    if (m.find("DimensionGroups") != m.end() && !m["DimensionGroups"].empty()) {
      if (typeid(vector<boost::any>) == m["DimensionGroups"].type()) {
        vector<ListProductDimensionGroupsResponseBodyDimensionGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DimensionGroups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListProductDimensionGroupsResponseBodyDimensionGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dimensionGroups = make_shared<vector<ListProductDimensionGroupsResponseBodyDimensionGroups>>(expect1);
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


  virtual ~ListProductDimensionGroupsResponseBody() = default;
};
class ListProductDimensionGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListProductDimensionGroupsResponseBody> body{};

  ListProductDimensionGroupsResponse() {}

  explicit ListProductDimensionGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListProductDimensionGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListProductDimensionGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~ListProductDimensionGroupsResponse() = default;
};
class ListProductQuotaDimensionsRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> productCode{};
  shared_ptr<string> quotaCategory{};

  ListProductQuotaDimensionsRequest() {}

  explicit ListProductQuotaDimensionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (quotaCategory) {
      res["QuotaCategory"] = boost::any(*quotaCategory);
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
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("QuotaCategory") != m.end() && !m["QuotaCategory"].empty()) {
      quotaCategory = make_shared<string>(boost::any_cast<string>(m["QuotaCategory"]));
    }
  }


  virtual ~ListProductQuotaDimensionsRequest() = default;
};
class ListProductQuotaDimensionsResponseBodyQuotaDimensionsDimensionValueDetailDependentDimensions : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListProductQuotaDimensionsResponseBodyQuotaDimensionsDimensionValueDetailDependentDimensions() {}

  explicit ListProductQuotaDimensionsResponseBodyQuotaDimensionsDimensionValueDetailDependentDimensions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListProductQuotaDimensionsResponseBodyQuotaDimensionsDimensionValueDetailDependentDimensions() = default;
};
class ListProductQuotaDimensionsResponseBodyQuotaDimensionsDimensionValueDetail : public Darabonba::Model {
public:
  shared_ptr<vector<ListProductQuotaDimensionsResponseBodyQuotaDimensionsDimensionValueDetailDependentDimensions>> dependentDimensions{};
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  ListProductQuotaDimensionsResponseBodyQuotaDimensionsDimensionValueDetail() {}

  explicit ListProductQuotaDimensionsResponseBodyQuotaDimensionsDimensionValueDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dependentDimensions) {
      vector<boost::any> temp1;
      for(auto item1:*dependentDimensions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DependentDimensions"] = boost::any(temp1);
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
    if (m.find("DependentDimensions") != m.end() && !m["DependentDimensions"].empty()) {
      if (typeid(vector<boost::any>) == m["DependentDimensions"].type()) {
        vector<ListProductQuotaDimensionsResponseBodyQuotaDimensionsDimensionValueDetailDependentDimensions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DependentDimensions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListProductQuotaDimensionsResponseBodyQuotaDimensionsDimensionValueDetailDependentDimensions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dependentDimensions = make_shared<vector<ListProductQuotaDimensionsResponseBodyQuotaDimensionsDimensionValueDetailDependentDimensions>>(expect1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListProductQuotaDimensionsResponseBodyQuotaDimensionsDimensionValueDetail() = default;
};
class ListProductQuotaDimensionsResponseBodyQuotaDimensions : public Darabonba::Model {
public:
  shared_ptr<vector<string>> dependentDimensions{};
  shared_ptr<string> dimensionKey{};
  shared_ptr<vector<ListProductQuotaDimensionsResponseBodyQuotaDimensionsDimensionValueDetail>> dimensionValueDetail{};
  shared_ptr<vector<string>> dimensionValues{};
  shared_ptr<string> name{};
  shared_ptr<bool> requisite{};

  ListProductQuotaDimensionsResponseBodyQuotaDimensions() {}

  explicit ListProductQuotaDimensionsResponseBodyQuotaDimensions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dependentDimensions) {
      res["DependentDimensions"] = boost::any(*dependentDimensions);
    }
    if (dimensionKey) {
      res["DimensionKey"] = boost::any(*dimensionKey);
    }
    if (dimensionValueDetail) {
      vector<boost::any> temp1;
      for(auto item1:*dimensionValueDetail){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DimensionValueDetail"] = boost::any(temp1);
    }
    if (dimensionValues) {
      res["DimensionValues"] = boost::any(*dimensionValues);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (requisite) {
      res["Requisite"] = boost::any(*requisite);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DependentDimensions") != m.end() && !m["DependentDimensions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DependentDimensions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DependentDimensions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dependentDimensions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("DimensionKey") != m.end() && !m["DimensionKey"].empty()) {
      dimensionKey = make_shared<string>(boost::any_cast<string>(m["DimensionKey"]));
    }
    if (m.find("DimensionValueDetail") != m.end() && !m["DimensionValueDetail"].empty()) {
      if (typeid(vector<boost::any>) == m["DimensionValueDetail"].type()) {
        vector<ListProductQuotaDimensionsResponseBodyQuotaDimensionsDimensionValueDetail> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DimensionValueDetail"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListProductQuotaDimensionsResponseBodyQuotaDimensionsDimensionValueDetail model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dimensionValueDetail = make_shared<vector<ListProductQuotaDimensionsResponseBodyQuotaDimensionsDimensionValueDetail>>(expect1);
      }
    }
    if (m.find("DimensionValues") != m.end() && !m["DimensionValues"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DimensionValues"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DimensionValues"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dimensionValues = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Requisite") != m.end() && !m["Requisite"].empty()) {
      requisite = make_shared<bool>(boost::any_cast<bool>(m["Requisite"]));
    }
  }


  virtual ~ListProductQuotaDimensionsResponseBodyQuotaDimensions() = default;
};
class ListProductQuotaDimensionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<ListProductQuotaDimensionsResponseBodyQuotaDimensions>> quotaDimensions{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListProductQuotaDimensionsResponseBody() {}

  explicit ListProductQuotaDimensionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (quotaDimensions) {
      vector<boost::any> temp1;
      for(auto item1:*quotaDimensions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["QuotaDimensions"] = boost::any(temp1);
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
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("QuotaDimensions") != m.end() && !m["QuotaDimensions"].empty()) {
      if (typeid(vector<boost::any>) == m["QuotaDimensions"].type()) {
        vector<ListProductQuotaDimensionsResponseBodyQuotaDimensions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["QuotaDimensions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListProductQuotaDimensionsResponseBodyQuotaDimensions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        quotaDimensions = make_shared<vector<ListProductQuotaDimensionsResponseBodyQuotaDimensions>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListProductQuotaDimensionsResponseBody() = default;
};
class ListProductQuotaDimensionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListProductQuotaDimensionsResponseBody> body{};

  ListProductQuotaDimensionsResponse() {}

  explicit ListProductQuotaDimensionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListProductQuotaDimensionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListProductQuotaDimensionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListProductQuotaDimensionsResponse() = default;
};
class ListProductQuotasRequestDimensions : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListProductQuotasRequestDimensions() {}

  explicit ListProductQuotasRequestDimensions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListProductQuotasRequestDimensions() = default;
};
class ListProductQuotasRequest : public Darabonba::Model {
public:
  shared_ptr<vector<ListProductQuotasRequestDimensions>> dimensions{};
  shared_ptr<string> groupCode{};
  shared_ptr<string> keyWord{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> productCode{};
  shared_ptr<string> quotaActionCode{};
  shared_ptr<string> quotaCategory{};
  shared_ptr<string> sortField{};
  shared_ptr<string> sortOrder{};

  ListProductQuotasRequest() {}

  explicit ListProductQuotasRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dimensions) {
      vector<boost::any> temp1;
      for(auto item1:*dimensions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Dimensions"] = boost::any(temp1);
    }
    if (groupCode) {
      res["GroupCode"] = boost::any(*groupCode);
    }
    if (keyWord) {
      res["KeyWord"] = boost::any(*keyWord);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (quotaActionCode) {
      res["QuotaActionCode"] = boost::any(*quotaActionCode);
    }
    if (quotaCategory) {
      res["QuotaCategory"] = boost::any(*quotaCategory);
    }
    if (sortField) {
      res["SortField"] = boost::any(*sortField);
    }
    if (sortOrder) {
      res["SortOrder"] = boost::any(*sortOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Dimensions") != m.end() && !m["Dimensions"].empty()) {
      if (typeid(vector<boost::any>) == m["Dimensions"].type()) {
        vector<ListProductQuotasRequestDimensions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Dimensions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListProductQuotasRequestDimensions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dimensions = make_shared<vector<ListProductQuotasRequestDimensions>>(expect1);
      }
    }
    if (m.find("GroupCode") != m.end() && !m["GroupCode"].empty()) {
      groupCode = make_shared<string>(boost::any_cast<string>(m["GroupCode"]));
    }
    if (m.find("KeyWord") != m.end() && !m["KeyWord"].empty()) {
      keyWord = make_shared<string>(boost::any_cast<string>(m["KeyWord"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("QuotaActionCode") != m.end() && !m["QuotaActionCode"].empty()) {
      quotaActionCode = make_shared<string>(boost::any_cast<string>(m["QuotaActionCode"]));
    }
    if (m.find("QuotaCategory") != m.end() && !m["QuotaCategory"].empty()) {
      quotaCategory = make_shared<string>(boost::any_cast<string>(m["QuotaCategory"]));
    }
    if (m.find("SortField") != m.end() && !m["SortField"].empty()) {
      sortField = make_shared<string>(boost::any_cast<string>(m["SortField"]));
    }
    if (m.find("SortOrder") != m.end() && !m["SortOrder"].empty()) {
      sortOrder = make_shared<string>(boost::any_cast<string>(m["SortOrder"]));
    }
  }


  virtual ~ListProductQuotasRequest() = default;
};
class ListProductQuotasResponseBodyQuotasPeriod : public Darabonba::Model {
public:
  shared_ptr<string> periodUnit{};
  shared_ptr<long> periodValue{};

  ListProductQuotasResponseBodyQuotasPeriod() {}

  explicit ListProductQuotasResponseBodyQuotasPeriod(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (periodUnit) {
      res["PeriodUnit"] = boost::any(*periodUnit);
    }
    if (periodValue) {
      res["PeriodValue"] = boost::any(*periodValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PeriodUnit") != m.end() && !m["PeriodUnit"].empty()) {
      periodUnit = make_shared<string>(boost::any_cast<string>(m["PeriodUnit"]));
    }
    if (m.find("PeriodValue") != m.end() && !m["PeriodValue"].empty()) {
      periodValue = make_shared<long>(boost::any_cast<long>(m["PeriodValue"]));
    }
  }


  virtual ~ListProductQuotasResponseBodyQuotasPeriod() = default;
};
class ListProductQuotasResponseBodyQuotasQuotaItems : public Darabonba::Model {
public:
  shared_ptr<string> quota{};
  shared_ptr<string> quotaUnit{};
  shared_ptr<string> type{};
  shared_ptr<string> usage{};

  ListProductQuotasResponseBodyQuotasQuotaItems() {}

  explicit ListProductQuotasResponseBodyQuotasQuotaItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (quota) {
      res["Quota"] = boost::any(*quota);
    }
    if (quotaUnit) {
      res["QuotaUnit"] = boost::any(*quotaUnit);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (usage) {
      res["Usage"] = boost::any(*usage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Quota") != m.end() && !m["Quota"].empty()) {
      quota = make_shared<string>(boost::any_cast<string>(m["Quota"]));
    }
    if (m.find("QuotaUnit") != m.end() && !m["QuotaUnit"].empty()) {
      quotaUnit = make_shared<string>(boost::any_cast<string>(m["QuotaUnit"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Usage") != m.end() && !m["Usage"].empty()) {
      usage = make_shared<string>(boost::any_cast<string>(m["Usage"]));
    }
  }


  virtual ~ListProductQuotasResponseBodyQuotasQuotaItems() = default;
};
class ListProductQuotasResponseBodyQuotasUsageMetric : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> metricDimensions{};
  shared_ptr<string> metricName{};
  shared_ptr<string> metricNamespace{};

  ListProductQuotasResponseBodyQuotasUsageMetric() {}

  explicit ListProductQuotasResponseBodyQuotasUsageMetric(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (metricDimensions) {
      res["MetricDimensions"] = boost::any(*metricDimensions);
    }
    if (metricName) {
      res["MetricName"] = boost::any(*metricName);
    }
    if (metricNamespace) {
      res["MetricNamespace"] = boost::any(*metricNamespace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MetricDimensions") != m.end() && !m["MetricDimensions"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["MetricDimensions"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      metricDimensions = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("MetricName") != m.end() && !m["MetricName"].empty()) {
      metricName = make_shared<string>(boost::any_cast<string>(m["MetricName"]));
    }
    if (m.find("MetricNamespace") != m.end() && !m["MetricNamespace"].empty()) {
      metricNamespace = make_shared<string>(boost::any_cast<string>(m["MetricNamespace"]));
    }
  }


  virtual ~ListProductQuotasResponseBodyQuotasUsageMetric() = default;
};
class ListProductQuotasResponseBodyQuotas : public Darabonba::Model {
public:
  shared_ptr<bool> adjustable{};
  shared_ptr<vector<double>> applicableRange{};
  shared_ptr<string> applicableType{};
  shared_ptr<string> applyReasonTips{};
  shared_ptr<bool> consumable{};
  shared_ptr<map<string, boost::any>> dimensions{};
  shared_ptr<string> effectiveTime{};
  shared_ptr<string> expireTime{};
  shared_ptr<bool> globalQuota{};
  shared_ptr<ListProductQuotasResponseBodyQuotasPeriod> period{};
  shared_ptr<string> productCode{};
  shared_ptr<string> quotaActionCode{};
  shared_ptr<string> quotaArn{};
  shared_ptr<string> quotaCategory{};
  shared_ptr<string> quotaDescription{};
  shared_ptr<vector<ListProductQuotasResponseBodyQuotasQuotaItems>> quotaItems{};
  shared_ptr<string> quotaName{};
  shared_ptr<string> quotaType{};
  shared_ptr<string> quotaUnit{};
  shared_ptr<vector<double>> supportedRange{};
  shared_ptr<double> totalQuota{};
  shared_ptr<double> totalUsage{};
  shared_ptr<string> unadjustableDetail{};
  shared_ptr<ListProductQuotasResponseBodyQuotasUsageMetric> usageMetric{};

  ListProductQuotasResponseBodyQuotas() {}

  explicit ListProductQuotasResponseBodyQuotas(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (adjustable) {
      res["Adjustable"] = boost::any(*adjustable);
    }
    if (applicableRange) {
      res["ApplicableRange"] = boost::any(*applicableRange);
    }
    if (applicableType) {
      res["ApplicableType"] = boost::any(*applicableType);
    }
    if (applyReasonTips) {
      res["ApplyReasonTips"] = boost::any(*applyReasonTips);
    }
    if (consumable) {
      res["Consumable"] = boost::any(*consumable);
    }
    if (dimensions) {
      res["Dimensions"] = boost::any(*dimensions);
    }
    if (effectiveTime) {
      res["EffectiveTime"] = boost::any(*effectiveTime);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (globalQuota) {
      res["GlobalQuota"] = boost::any(*globalQuota);
    }
    if (period) {
      res["Period"] = period ? boost::any(period->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (quotaActionCode) {
      res["QuotaActionCode"] = boost::any(*quotaActionCode);
    }
    if (quotaArn) {
      res["QuotaArn"] = boost::any(*quotaArn);
    }
    if (quotaCategory) {
      res["QuotaCategory"] = boost::any(*quotaCategory);
    }
    if (quotaDescription) {
      res["QuotaDescription"] = boost::any(*quotaDescription);
    }
    if (quotaItems) {
      vector<boost::any> temp1;
      for(auto item1:*quotaItems){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["QuotaItems"] = boost::any(temp1);
    }
    if (quotaName) {
      res["QuotaName"] = boost::any(*quotaName);
    }
    if (quotaType) {
      res["QuotaType"] = boost::any(*quotaType);
    }
    if (quotaUnit) {
      res["QuotaUnit"] = boost::any(*quotaUnit);
    }
    if (supportedRange) {
      res["SupportedRange"] = boost::any(*supportedRange);
    }
    if (totalQuota) {
      res["TotalQuota"] = boost::any(*totalQuota);
    }
    if (totalUsage) {
      res["TotalUsage"] = boost::any(*totalUsage);
    }
    if (unadjustableDetail) {
      res["UnadjustableDetail"] = boost::any(*unadjustableDetail);
    }
    if (usageMetric) {
      res["UsageMetric"] = usageMetric ? boost::any(usageMetric->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Adjustable") != m.end() && !m["Adjustable"].empty()) {
      adjustable = make_shared<bool>(boost::any_cast<bool>(m["Adjustable"]));
    }
    if (m.find("ApplicableRange") != m.end() && !m["ApplicableRange"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["ApplicableRange"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ApplicableRange"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      applicableRange = make_shared<vector<double>>(toVec1);
    }
    if (m.find("ApplicableType") != m.end() && !m["ApplicableType"].empty()) {
      applicableType = make_shared<string>(boost::any_cast<string>(m["ApplicableType"]));
    }
    if (m.find("ApplyReasonTips") != m.end() && !m["ApplyReasonTips"].empty()) {
      applyReasonTips = make_shared<string>(boost::any_cast<string>(m["ApplyReasonTips"]));
    }
    if (m.find("Consumable") != m.end() && !m["Consumable"].empty()) {
      consumable = make_shared<bool>(boost::any_cast<bool>(m["Consumable"]));
    }
    if (m.find("Dimensions") != m.end() && !m["Dimensions"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Dimensions"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      dimensions = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("EffectiveTime") != m.end() && !m["EffectiveTime"].empty()) {
      effectiveTime = make_shared<string>(boost::any_cast<string>(m["EffectiveTime"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("GlobalQuota") != m.end() && !m["GlobalQuota"].empty()) {
      globalQuota = make_shared<bool>(boost::any_cast<bool>(m["GlobalQuota"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      if (typeid(map<string, boost::any>) == m["Period"].type()) {
        ListProductQuotasResponseBodyQuotasPeriod model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Period"]));
        period = make_shared<ListProductQuotasResponseBodyQuotasPeriod>(model1);
      }
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("QuotaActionCode") != m.end() && !m["QuotaActionCode"].empty()) {
      quotaActionCode = make_shared<string>(boost::any_cast<string>(m["QuotaActionCode"]));
    }
    if (m.find("QuotaArn") != m.end() && !m["QuotaArn"].empty()) {
      quotaArn = make_shared<string>(boost::any_cast<string>(m["QuotaArn"]));
    }
    if (m.find("QuotaCategory") != m.end() && !m["QuotaCategory"].empty()) {
      quotaCategory = make_shared<string>(boost::any_cast<string>(m["QuotaCategory"]));
    }
    if (m.find("QuotaDescription") != m.end() && !m["QuotaDescription"].empty()) {
      quotaDescription = make_shared<string>(boost::any_cast<string>(m["QuotaDescription"]));
    }
    if (m.find("QuotaItems") != m.end() && !m["QuotaItems"].empty()) {
      if (typeid(vector<boost::any>) == m["QuotaItems"].type()) {
        vector<ListProductQuotasResponseBodyQuotasQuotaItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["QuotaItems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListProductQuotasResponseBodyQuotasQuotaItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        quotaItems = make_shared<vector<ListProductQuotasResponseBodyQuotasQuotaItems>>(expect1);
      }
    }
    if (m.find("QuotaName") != m.end() && !m["QuotaName"].empty()) {
      quotaName = make_shared<string>(boost::any_cast<string>(m["QuotaName"]));
    }
    if (m.find("QuotaType") != m.end() && !m["QuotaType"].empty()) {
      quotaType = make_shared<string>(boost::any_cast<string>(m["QuotaType"]));
    }
    if (m.find("QuotaUnit") != m.end() && !m["QuotaUnit"].empty()) {
      quotaUnit = make_shared<string>(boost::any_cast<string>(m["QuotaUnit"]));
    }
    if (m.find("SupportedRange") != m.end() && !m["SupportedRange"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["SupportedRange"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SupportedRange"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      supportedRange = make_shared<vector<double>>(toVec1);
    }
    if (m.find("TotalQuota") != m.end() && !m["TotalQuota"].empty()) {
      totalQuota = make_shared<double>(boost::any_cast<double>(m["TotalQuota"]));
    }
    if (m.find("TotalUsage") != m.end() && !m["TotalUsage"].empty()) {
      totalUsage = make_shared<double>(boost::any_cast<double>(m["TotalUsage"]));
    }
    if (m.find("UnadjustableDetail") != m.end() && !m["UnadjustableDetail"].empty()) {
      unadjustableDetail = make_shared<string>(boost::any_cast<string>(m["UnadjustableDetail"]));
    }
    if (m.find("UsageMetric") != m.end() && !m["UsageMetric"].empty()) {
      if (typeid(map<string, boost::any>) == m["UsageMetric"].type()) {
        ListProductQuotasResponseBodyQuotasUsageMetric model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UsageMetric"]));
        usageMetric = make_shared<ListProductQuotasResponseBodyQuotasUsageMetric>(model1);
      }
    }
  }


  virtual ~ListProductQuotasResponseBodyQuotas() = default;
};
class ListProductQuotasResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<ListProductQuotasResponseBodyQuotas>> quotas{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListProductQuotasResponseBody() {}

  explicit ListProductQuotasResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (quotas) {
      vector<boost::any> temp1;
      for(auto item1:*quotas){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Quotas"] = boost::any(temp1);
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
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Quotas") != m.end() && !m["Quotas"].empty()) {
      if (typeid(vector<boost::any>) == m["Quotas"].type()) {
        vector<ListProductQuotasResponseBodyQuotas> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Quotas"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListProductQuotasResponseBodyQuotas model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        quotas = make_shared<vector<ListProductQuotasResponseBodyQuotas>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListProductQuotasResponseBody() = default;
};
class ListProductQuotasResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListProductQuotasResponseBody> body{};

  ListProductQuotasResponse() {}

  explicit ListProductQuotasResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListProductQuotasResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListProductQuotasResponseBody>(model1);
      }
    }
  }


  virtual ~ListProductQuotasResponse() = default;
};
class ListProductsRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};

  ListProductsRequest() {}

  explicit ListProductsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~ListProductsRequest() = default;
};
class ListProductsResponseBodyProductInfo : public Darabonba::Model {
public:
  shared_ptr<string> commonQuotaSupport{};
  shared_ptr<bool> dynamic{};
  shared_ptr<string> flowControlSupport{};
  shared_ptr<string> productCode{};
  shared_ptr<string> productName{};
  shared_ptr<string> productNameEn{};
  shared_ptr<long> secondCategoryId{};
  shared_ptr<string> secondCategoryName{};
  shared_ptr<string> secondCategoryNameEn{};
  shared_ptr<string> whiteListLabelQuotaSupport{};

  ListProductsResponseBodyProductInfo() {}

  explicit ListProductsResponseBodyProductInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonQuotaSupport) {
      res["CommonQuotaSupport"] = boost::any(*commonQuotaSupport);
    }
    if (dynamic) {
      res["Dynamic"] = boost::any(*dynamic);
    }
    if (flowControlSupport) {
      res["FlowControlSupport"] = boost::any(*flowControlSupport);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (productName) {
      res["ProductName"] = boost::any(*productName);
    }
    if (productNameEn) {
      res["ProductNameEn"] = boost::any(*productNameEn);
    }
    if (secondCategoryId) {
      res["SecondCategoryId"] = boost::any(*secondCategoryId);
    }
    if (secondCategoryName) {
      res["SecondCategoryName"] = boost::any(*secondCategoryName);
    }
    if (secondCategoryNameEn) {
      res["SecondCategoryNameEn"] = boost::any(*secondCategoryNameEn);
    }
    if (whiteListLabelQuotaSupport) {
      res["WhiteListLabelQuotaSupport"] = boost::any(*whiteListLabelQuotaSupport);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CommonQuotaSupport") != m.end() && !m["CommonQuotaSupport"].empty()) {
      commonQuotaSupport = make_shared<string>(boost::any_cast<string>(m["CommonQuotaSupport"]));
    }
    if (m.find("Dynamic") != m.end() && !m["Dynamic"].empty()) {
      dynamic = make_shared<bool>(boost::any_cast<bool>(m["Dynamic"]));
    }
    if (m.find("FlowControlSupport") != m.end() && !m["FlowControlSupport"].empty()) {
      flowControlSupport = make_shared<string>(boost::any_cast<string>(m["FlowControlSupport"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ProductName") != m.end() && !m["ProductName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["ProductName"]));
    }
    if (m.find("ProductNameEn") != m.end() && !m["ProductNameEn"].empty()) {
      productNameEn = make_shared<string>(boost::any_cast<string>(m["ProductNameEn"]));
    }
    if (m.find("SecondCategoryId") != m.end() && !m["SecondCategoryId"].empty()) {
      secondCategoryId = make_shared<long>(boost::any_cast<long>(m["SecondCategoryId"]));
    }
    if (m.find("SecondCategoryName") != m.end() && !m["SecondCategoryName"].empty()) {
      secondCategoryName = make_shared<string>(boost::any_cast<string>(m["SecondCategoryName"]));
    }
    if (m.find("SecondCategoryNameEn") != m.end() && !m["SecondCategoryNameEn"].empty()) {
      secondCategoryNameEn = make_shared<string>(boost::any_cast<string>(m["SecondCategoryNameEn"]));
    }
    if (m.find("WhiteListLabelQuotaSupport") != m.end() && !m["WhiteListLabelQuotaSupport"].empty()) {
      whiteListLabelQuotaSupport = make_shared<string>(boost::any_cast<string>(m["WhiteListLabelQuotaSupport"]));
    }
  }


  virtual ~ListProductsResponseBodyProductInfo() = default;
};
class ListProductsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<ListProductsResponseBodyProductInfo>> productInfo{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListProductsResponseBody() {}

  explicit ListProductsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (productInfo) {
      vector<boost::any> temp1;
      for(auto item1:*productInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ProductInfo"] = boost::any(temp1);
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
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("ProductInfo") != m.end() && !m["ProductInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["ProductInfo"].type()) {
        vector<ListProductsResponseBodyProductInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ProductInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListProductsResponseBodyProductInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        productInfo = make_shared<vector<ListProductsResponseBodyProductInfo>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListProductsResponseBody() = default;
};
class ListProductsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListProductsResponseBody> body{};

  ListProductsResponse() {}

  explicit ListProductsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListProductsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListProductsResponseBody>(model1);
      }
    }
  }


  virtual ~ListProductsResponse() = default;
};
class ListQuotaAlarmsRequestQuotaDimensions : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListQuotaAlarmsRequestQuotaDimensions() {}

  explicit ListQuotaAlarmsRequestQuotaDimensions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListQuotaAlarmsRequestQuotaDimensions() = default;
};
class ListQuotaAlarmsRequest : public Darabonba::Model {
public:
  shared_ptr<string> alarmName{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> productCode{};
  shared_ptr<string> quotaActionCode{};
  shared_ptr<vector<ListQuotaAlarmsRequestQuotaDimensions>> quotaDimensions{};

  ListQuotaAlarmsRequest() {}

  explicit ListQuotaAlarmsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alarmName) {
      res["AlarmName"] = boost::any(*alarmName);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (quotaActionCode) {
      res["QuotaActionCode"] = boost::any(*quotaActionCode);
    }
    if (quotaDimensions) {
      vector<boost::any> temp1;
      for(auto item1:*quotaDimensions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["QuotaDimensions"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlarmName") != m.end() && !m["AlarmName"].empty()) {
      alarmName = make_shared<string>(boost::any_cast<string>(m["AlarmName"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("QuotaActionCode") != m.end() && !m["QuotaActionCode"].empty()) {
      quotaActionCode = make_shared<string>(boost::any_cast<string>(m["QuotaActionCode"]));
    }
    if (m.find("QuotaDimensions") != m.end() && !m["QuotaDimensions"].empty()) {
      if (typeid(vector<boost::any>) == m["QuotaDimensions"].type()) {
        vector<ListQuotaAlarmsRequestQuotaDimensions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["QuotaDimensions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListQuotaAlarmsRequestQuotaDimensions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        quotaDimensions = make_shared<vector<ListQuotaAlarmsRequestQuotaDimensions>>(expect1);
      }
    }
  }


  virtual ~ListQuotaAlarmsRequest() = default;
};
class ListQuotaAlarmsResponseBodyQuotaAlarms : public Darabonba::Model {
public:
  shared_ptr<string> alarmId{};
  shared_ptr<string> alarmName{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> exceedThreshold{};
  shared_ptr<vector<string>> notifyChannels{};
  shared_ptr<string> notifyTarget{};
  shared_ptr<string> productCode{};
  shared_ptr<string> quotaActionCode{};
  shared_ptr<map<string, boost::any>> quotaDimensions{};
  shared_ptr<double> quotaUsage{};
  shared_ptr<double> quotaValue{};
  shared_ptr<double> threshold{};
  shared_ptr<double> thresholdPercent{};
  shared_ptr<string> thresholdType{};
  shared_ptr<string> webHook{};

  ListQuotaAlarmsResponseBodyQuotaAlarms() {}

  explicit ListQuotaAlarmsResponseBodyQuotaAlarms(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alarmId) {
      res["AlarmId"] = boost::any(*alarmId);
    }
    if (alarmName) {
      res["AlarmName"] = boost::any(*alarmName);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (exceedThreshold) {
      res["ExceedThreshold"] = boost::any(*exceedThreshold);
    }
    if (notifyChannels) {
      res["NotifyChannels"] = boost::any(*notifyChannels);
    }
    if (notifyTarget) {
      res["NotifyTarget"] = boost::any(*notifyTarget);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (quotaActionCode) {
      res["QuotaActionCode"] = boost::any(*quotaActionCode);
    }
    if (quotaDimensions) {
      res["QuotaDimensions"] = boost::any(*quotaDimensions);
    }
    if (quotaUsage) {
      res["QuotaUsage"] = boost::any(*quotaUsage);
    }
    if (quotaValue) {
      res["QuotaValue"] = boost::any(*quotaValue);
    }
    if (threshold) {
      res["Threshold"] = boost::any(*threshold);
    }
    if (thresholdPercent) {
      res["ThresholdPercent"] = boost::any(*thresholdPercent);
    }
    if (thresholdType) {
      res["ThresholdType"] = boost::any(*thresholdType);
    }
    if (webHook) {
      res["WebHook"] = boost::any(*webHook);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlarmId") != m.end() && !m["AlarmId"].empty()) {
      alarmId = make_shared<string>(boost::any_cast<string>(m["AlarmId"]));
    }
    if (m.find("AlarmName") != m.end() && !m["AlarmName"].empty()) {
      alarmName = make_shared<string>(boost::any_cast<string>(m["AlarmName"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ExceedThreshold") != m.end() && !m["ExceedThreshold"].empty()) {
      exceedThreshold = make_shared<bool>(boost::any_cast<bool>(m["ExceedThreshold"]));
    }
    if (m.find("NotifyChannels") != m.end() && !m["NotifyChannels"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["NotifyChannels"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["NotifyChannels"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      notifyChannels = make_shared<vector<string>>(toVec1);
    }
    if (m.find("NotifyTarget") != m.end() && !m["NotifyTarget"].empty()) {
      notifyTarget = make_shared<string>(boost::any_cast<string>(m["NotifyTarget"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("QuotaActionCode") != m.end() && !m["QuotaActionCode"].empty()) {
      quotaActionCode = make_shared<string>(boost::any_cast<string>(m["QuotaActionCode"]));
    }
    if (m.find("QuotaDimensions") != m.end() && !m["QuotaDimensions"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["QuotaDimensions"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      quotaDimensions = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("QuotaUsage") != m.end() && !m["QuotaUsage"].empty()) {
      quotaUsage = make_shared<double>(boost::any_cast<double>(m["QuotaUsage"]));
    }
    if (m.find("QuotaValue") != m.end() && !m["QuotaValue"].empty()) {
      quotaValue = make_shared<double>(boost::any_cast<double>(m["QuotaValue"]));
    }
    if (m.find("Threshold") != m.end() && !m["Threshold"].empty()) {
      threshold = make_shared<double>(boost::any_cast<double>(m["Threshold"]));
    }
    if (m.find("ThresholdPercent") != m.end() && !m["ThresholdPercent"].empty()) {
      thresholdPercent = make_shared<double>(boost::any_cast<double>(m["ThresholdPercent"]));
    }
    if (m.find("ThresholdType") != m.end() && !m["ThresholdType"].empty()) {
      thresholdType = make_shared<string>(boost::any_cast<string>(m["ThresholdType"]));
    }
    if (m.find("WebHook") != m.end() && !m["WebHook"].empty()) {
      webHook = make_shared<string>(boost::any_cast<string>(m["WebHook"]));
    }
  }


  virtual ~ListQuotaAlarmsResponseBodyQuotaAlarms() = default;
};
class ListQuotaAlarmsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<ListQuotaAlarmsResponseBodyQuotaAlarms>> quotaAlarms{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListQuotaAlarmsResponseBody() {}

  explicit ListQuotaAlarmsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (quotaAlarms) {
      vector<boost::any> temp1;
      for(auto item1:*quotaAlarms){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["QuotaAlarms"] = boost::any(temp1);
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
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("QuotaAlarms") != m.end() && !m["QuotaAlarms"].empty()) {
      if (typeid(vector<boost::any>) == m["QuotaAlarms"].type()) {
        vector<ListQuotaAlarmsResponseBodyQuotaAlarms> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["QuotaAlarms"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListQuotaAlarmsResponseBodyQuotaAlarms model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        quotaAlarms = make_shared<vector<ListQuotaAlarmsResponseBodyQuotaAlarms>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListQuotaAlarmsResponseBody() = default;
};
class ListQuotaAlarmsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListQuotaAlarmsResponseBody> body{};

  ListQuotaAlarmsResponse() {}

  explicit ListQuotaAlarmsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListQuotaAlarmsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListQuotaAlarmsResponseBody>(model1);
      }
    }
  }


  virtual ~ListQuotaAlarmsResponse() = default;
};
class ListQuotaApplicationTemplatesRequestDimensions : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListQuotaApplicationTemplatesRequestDimensions() {}

  explicit ListQuotaApplicationTemplatesRequestDimensions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListQuotaApplicationTemplatesRequestDimensions() = default;
};
class ListQuotaApplicationTemplatesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<ListQuotaApplicationTemplatesRequestDimensions>> dimensions{};
  shared_ptr<string> id{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> productCode{};
  shared_ptr<string> quotaActionCode{};
  shared_ptr<string> quotaCategory{};

  ListQuotaApplicationTemplatesRequest() {}

  explicit ListQuotaApplicationTemplatesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dimensions) {
      vector<boost::any> temp1;
      for(auto item1:*dimensions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Dimensions"] = boost::any(temp1);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (quotaActionCode) {
      res["QuotaActionCode"] = boost::any(*quotaActionCode);
    }
    if (quotaCategory) {
      res["QuotaCategory"] = boost::any(*quotaCategory);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Dimensions") != m.end() && !m["Dimensions"].empty()) {
      if (typeid(vector<boost::any>) == m["Dimensions"].type()) {
        vector<ListQuotaApplicationTemplatesRequestDimensions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Dimensions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListQuotaApplicationTemplatesRequestDimensions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dimensions = make_shared<vector<ListQuotaApplicationTemplatesRequestDimensions>>(expect1);
      }
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("QuotaActionCode") != m.end() && !m["QuotaActionCode"].empty()) {
      quotaActionCode = make_shared<string>(boost::any_cast<string>(m["QuotaActionCode"]));
    }
    if (m.find("QuotaCategory") != m.end() && !m["QuotaCategory"].empty()) {
      quotaCategory = make_shared<string>(boost::any_cast<string>(m["QuotaCategory"]));
    }
  }


  virtual ~ListQuotaApplicationTemplatesRequest() = default;
};
class ListQuotaApplicationTemplatesResponseBodyQuotaApplicationTemplatesPeriod : public Darabonba::Model {
public:
  shared_ptr<string> periodUnit{};
  shared_ptr<long> periodValue{};

  ListQuotaApplicationTemplatesResponseBodyQuotaApplicationTemplatesPeriod() {}

  explicit ListQuotaApplicationTemplatesResponseBodyQuotaApplicationTemplatesPeriod(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (periodUnit) {
      res["PeriodUnit"] = boost::any(*periodUnit);
    }
    if (periodValue) {
      res["PeriodValue"] = boost::any(*periodValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PeriodUnit") != m.end() && !m["PeriodUnit"].empty()) {
      periodUnit = make_shared<string>(boost::any_cast<string>(m["PeriodUnit"]));
    }
    if (m.find("PeriodValue") != m.end() && !m["PeriodValue"].empty()) {
      periodValue = make_shared<long>(boost::any_cast<long>(m["PeriodValue"]));
    }
  }


  virtual ~ListQuotaApplicationTemplatesResponseBodyQuotaApplicationTemplatesPeriod() = default;
};
class ListQuotaApplicationTemplatesResponseBodyQuotaApplicationTemplates : public Darabonba::Model {
public:
  shared_ptr<vector<double>> applicableRange{};
  shared_ptr<string> applicableType{};
  shared_ptr<double> desireValue{};
  shared_ptr<map<string, boost::any>> dimensions{};
  shared_ptr<string> effectiveTime{};
  shared_ptr<string> envLanguage{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> id{};
  shared_ptr<long> noticeType{};
  shared_ptr<ListQuotaApplicationTemplatesResponseBodyQuotaApplicationTemplatesPeriod> period{};
  shared_ptr<string> productCode{};
  shared_ptr<string> quotaActionCode{};
  shared_ptr<string> quotaCategory{};
  shared_ptr<string> quotaDescription{};
  shared_ptr<string> quotaName{};

  ListQuotaApplicationTemplatesResponseBodyQuotaApplicationTemplates() {}

  explicit ListQuotaApplicationTemplatesResponseBodyQuotaApplicationTemplates(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicableRange) {
      res["ApplicableRange"] = boost::any(*applicableRange);
    }
    if (applicableType) {
      res["ApplicableType"] = boost::any(*applicableType);
    }
    if (desireValue) {
      res["DesireValue"] = boost::any(*desireValue);
    }
    if (dimensions) {
      res["Dimensions"] = boost::any(*dimensions);
    }
    if (effectiveTime) {
      res["EffectiveTime"] = boost::any(*effectiveTime);
    }
    if (envLanguage) {
      res["EnvLanguage"] = boost::any(*envLanguage);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (noticeType) {
      res["NoticeType"] = boost::any(*noticeType);
    }
    if (period) {
      res["Period"] = period ? boost::any(period->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (quotaActionCode) {
      res["QuotaActionCode"] = boost::any(*quotaActionCode);
    }
    if (quotaCategory) {
      res["QuotaCategory"] = boost::any(*quotaCategory);
    }
    if (quotaDescription) {
      res["QuotaDescription"] = boost::any(*quotaDescription);
    }
    if (quotaName) {
      res["QuotaName"] = boost::any(*quotaName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicableRange") != m.end() && !m["ApplicableRange"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["ApplicableRange"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ApplicableRange"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      applicableRange = make_shared<vector<double>>(toVec1);
    }
    if (m.find("ApplicableType") != m.end() && !m["ApplicableType"].empty()) {
      applicableType = make_shared<string>(boost::any_cast<string>(m["ApplicableType"]));
    }
    if (m.find("DesireValue") != m.end() && !m["DesireValue"].empty()) {
      desireValue = make_shared<double>(boost::any_cast<double>(m["DesireValue"]));
    }
    if (m.find("Dimensions") != m.end() && !m["Dimensions"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Dimensions"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      dimensions = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("EffectiveTime") != m.end() && !m["EffectiveTime"].empty()) {
      effectiveTime = make_shared<string>(boost::any_cast<string>(m["EffectiveTime"]));
    }
    if (m.find("EnvLanguage") != m.end() && !m["EnvLanguage"].empty()) {
      envLanguage = make_shared<string>(boost::any_cast<string>(m["EnvLanguage"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("NoticeType") != m.end() && !m["NoticeType"].empty()) {
      noticeType = make_shared<long>(boost::any_cast<long>(m["NoticeType"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      if (typeid(map<string, boost::any>) == m["Period"].type()) {
        ListQuotaApplicationTemplatesResponseBodyQuotaApplicationTemplatesPeriod model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Period"]));
        period = make_shared<ListQuotaApplicationTemplatesResponseBodyQuotaApplicationTemplatesPeriod>(model1);
      }
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("QuotaActionCode") != m.end() && !m["QuotaActionCode"].empty()) {
      quotaActionCode = make_shared<string>(boost::any_cast<string>(m["QuotaActionCode"]));
    }
    if (m.find("QuotaCategory") != m.end() && !m["QuotaCategory"].empty()) {
      quotaCategory = make_shared<string>(boost::any_cast<string>(m["QuotaCategory"]));
    }
    if (m.find("QuotaDescription") != m.end() && !m["QuotaDescription"].empty()) {
      quotaDescription = make_shared<string>(boost::any_cast<string>(m["QuotaDescription"]));
    }
    if (m.find("QuotaName") != m.end() && !m["QuotaName"].empty()) {
      quotaName = make_shared<string>(boost::any_cast<string>(m["QuotaName"]));
    }
  }


  virtual ~ListQuotaApplicationTemplatesResponseBodyQuotaApplicationTemplates() = default;
};
class ListQuotaApplicationTemplatesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<ListQuotaApplicationTemplatesResponseBodyQuotaApplicationTemplates>> quotaApplicationTemplates{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListQuotaApplicationTemplatesResponseBody() {}

  explicit ListQuotaApplicationTemplatesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (quotaApplicationTemplates) {
      vector<boost::any> temp1;
      for(auto item1:*quotaApplicationTemplates){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["QuotaApplicationTemplates"] = boost::any(temp1);
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
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("QuotaApplicationTemplates") != m.end() && !m["QuotaApplicationTemplates"].empty()) {
      if (typeid(vector<boost::any>) == m["QuotaApplicationTemplates"].type()) {
        vector<ListQuotaApplicationTemplatesResponseBodyQuotaApplicationTemplates> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["QuotaApplicationTemplates"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListQuotaApplicationTemplatesResponseBodyQuotaApplicationTemplates model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        quotaApplicationTemplates = make_shared<vector<ListQuotaApplicationTemplatesResponseBodyQuotaApplicationTemplates>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListQuotaApplicationTemplatesResponseBody() = default;
};
class ListQuotaApplicationTemplatesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListQuotaApplicationTemplatesResponseBody> body{};

  ListQuotaApplicationTemplatesResponse() {}

  explicit ListQuotaApplicationTemplatesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListQuotaApplicationTemplatesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListQuotaApplicationTemplatesResponseBody>(model1);
      }
    }
  }


  virtual ~ListQuotaApplicationTemplatesResponse() = default;
};
class ListQuotaApplicationsRequestDimensions : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListQuotaApplicationsRequestDimensions() {}

  explicit ListQuotaApplicationsRequestDimensions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListQuotaApplicationsRequestDimensions() = default;
};
class ListQuotaApplicationsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<ListQuotaApplicationsRequestDimensions>> dimensions{};
  shared_ptr<string> keyWord{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> productCode{};
  shared_ptr<string> quotaActionCode{};
  shared_ptr<string> quotaCategory{};
  shared_ptr<string> status{};

  ListQuotaApplicationsRequest() {}

  explicit ListQuotaApplicationsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dimensions) {
      vector<boost::any> temp1;
      for(auto item1:*dimensions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Dimensions"] = boost::any(temp1);
    }
    if (keyWord) {
      res["KeyWord"] = boost::any(*keyWord);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (quotaActionCode) {
      res["QuotaActionCode"] = boost::any(*quotaActionCode);
    }
    if (quotaCategory) {
      res["QuotaCategory"] = boost::any(*quotaCategory);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Dimensions") != m.end() && !m["Dimensions"].empty()) {
      if (typeid(vector<boost::any>) == m["Dimensions"].type()) {
        vector<ListQuotaApplicationsRequestDimensions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Dimensions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListQuotaApplicationsRequestDimensions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dimensions = make_shared<vector<ListQuotaApplicationsRequestDimensions>>(expect1);
      }
    }
    if (m.find("KeyWord") != m.end() && !m["KeyWord"].empty()) {
      keyWord = make_shared<string>(boost::any_cast<string>(m["KeyWord"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("QuotaActionCode") != m.end() && !m["QuotaActionCode"].empty()) {
      quotaActionCode = make_shared<string>(boost::any_cast<string>(m["QuotaActionCode"]));
    }
    if (m.find("QuotaCategory") != m.end() && !m["QuotaCategory"].empty()) {
      quotaCategory = make_shared<string>(boost::any_cast<string>(m["QuotaCategory"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListQuotaApplicationsRequest() = default;
};
class ListQuotaApplicationsResponseBodyQuotaApplicationsPeriod : public Darabonba::Model {
public:
  shared_ptr<string> periodUnit{};
  shared_ptr<long> periodValue{};

  ListQuotaApplicationsResponseBodyQuotaApplicationsPeriod() {}

  explicit ListQuotaApplicationsResponseBodyQuotaApplicationsPeriod(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (periodUnit) {
      res["PeriodUnit"] = boost::any(*periodUnit);
    }
    if (periodValue) {
      res["PeriodValue"] = boost::any(*periodValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PeriodUnit") != m.end() && !m["PeriodUnit"].empty()) {
      periodUnit = make_shared<string>(boost::any_cast<string>(m["PeriodUnit"]));
    }
    if (m.find("PeriodValue") != m.end() && !m["PeriodValue"].empty()) {
      periodValue = make_shared<long>(boost::any_cast<long>(m["PeriodValue"]));
    }
  }


  virtual ~ListQuotaApplicationsResponseBodyQuotaApplicationsPeriod() = default;
};
class ListQuotaApplicationsResponseBodyQuotaApplications : public Darabonba::Model {
public:
  shared_ptr<string> applicationId{};
  shared_ptr<string> applyTime{};
  shared_ptr<double> approveValue{};
  shared_ptr<string> auditReason{};
  shared_ptr<string> comment{};
  shared_ptr<double> desireValue{};
  shared_ptr<map<string, boost::any>> dimension{};
  shared_ptr<string> effectiveTime{};
  shared_ptr<string> expireTime{};
  shared_ptr<long> noticeType{};
  shared_ptr<ListQuotaApplicationsResponseBodyQuotaApplicationsPeriod> period{};
  shared_ptr<string> productCode{};
  shared_ptr<string> quotaActionCode{};
  shared_ptr<string> quotaArn{};
  shared_ptr<string> quotaDescription{};
  shared_ptr<string> quotaName{};
  shared_ptr<string> quotaUnit{};
  shared_ptr<string> reason{};
  shared_ptr<string> status{};

  ListQuotaApplicationsResponseBodyQuotaApplications() {}

  explicit ListQuotaApplicationsResponseBodyQuotaApplications(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
    }
    if (applyTime) {
      res["ApplyTime"] = boost::any(*applyTime);
    }
    if (approveValue) {
      res["ApproveValue"] = boost::any(*approveValue);
    }
    if (auditReason) {
      res["AuditReason"] = boost::any(*auditReason);
    }
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (desireValue) {
      res["DesireValue"] = boost::any(*desireValue);
    }
    if (dimension) {
      res["Dimension"] = boost::any(*dimension);
    }
    if (effectiveTime) {
      res["EffectiveTime"] = boost::any(*effectiveTime);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (noticeType) {
      res["NoticeType"] = boost::any(*noticeType);
    }
    if (period) {
      res["Period"] = period ? boost::any(period->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (quotaActionCode) {
      res["QuotaActionCode"] = boost::any(*quotaActionCode);
    }
    if (quotaArn) {
      res["QuotaArn"] = boost::any(*quotaArn);
    }
    if (quotaDescription) {
      res["QuotaDescription"] = boost::any(*quotaDescription);
    }
    if (quotaName) {
      res["QuotaName"] = boost::any(*quotaName);
    }
    if (quotaUnit) {
      res["QuotaUnit"] = boost::any(*quotaUnit);
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
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
    if (m.find("ApplyTime") != m.end() && !m["ApplyTime"].empty()) {
      applyTime = make_shared<string>(boost::any_cast<string>(m["ApplyTime"]));
    }
    if (m.find("ApproveValue") != m.end() && !m["ApproveValue"].empty()) {
      approveValue = make_shared<double>(boost::any_cast<double>(m["ApproveValue"]));
    }
    if (m.find("AuditReason") != m.end() && !m["AuditReason"].empty()) {
      auditReason = make_shared<string>(boost::any_cast<string>(m["AuditReason"]));
    }
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("DesireValue") != m.end() && !m["DesireValue"].empty()) {
      desireValue = make_shared<double>(boost::any_cast<double>(m["DesireValue"]));
    }
    if (m.find("Dimension") != m.end() && !m["Dimension"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Dimension"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      dimension = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("EffectiveTime") != m.end() && !m["EffectiveTime"].empty()) {
      effectiveTime = make_shared<string>(boost::any_cast<string>(m["EffectiveTime"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("NoticeType") != m.end() && !m["NoticeType"].empty()) {
      noticeType = make_shared<long>(boost::any_cast<long>(m["NoticeType"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      if (typeid(map<string, boost::any>) == m["Period"].type()) {
        ListQuotaApplicationsResponseBodyQuotaApplicationsPeriod model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Period"]));
        period = make_shared<ListQuotaApplicationsResponseBodyQuotaApplicationsPeriod>(model1);
      }
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("QuotaActionCode") != m.end() && !m["QuotaActionCode"].empty()) {
      quotaActionCode = make_shared<string>(boost::any_cast<string>(m["QuotaActionCode"]));
    }
    if (m.find("QuotaArn") != m.end() && !m["QuotaArn"].empty()) {
      quotaArn = make_shared<string>(boost::any_cast<string>(m["QuotaArn"]));
    }
    if (m.find("QuotaDescription") != m.end() && !m["QuotaDescription"].empty()) {
      quotaDescription = make_shared<string>(boost::any_cast<string>(m["QuotaDescription"]));
    }
    if (m.find("QuotaName") != m.end() && !m["QuotaName"].empty()) {
      quotaName = make_shared<string>(boost::any_cast<string>(m["QuotaName"]));
    }
    if (m.find("QuotaUnit") != m.end() && !m["QuotaUnit"].empty()) {
      quotaUnit = make_shared<string>(boost::any_cast<string>(m["QuotaUnit"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListQuotaApplicationsResponseBodyQuotaApplications() = default;
};
class ListQuotaApplicationsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<ListQuotaApplicationsResponseBodyQuotaApplications>> quotaApplications{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListQuotaApplicationsResponseBody() {}

  explicit ListQuotaApplicationsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (quotaApplications) {
      vector<boost::any> temp1;
      for(auto item1:*quotaApplications){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["QuotaApplications"] = boost::any(temp1);
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
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("QuotaApplications") != m.end() && !m["QuotaApplications"].empty()) {
      if (typeid(vector<boost::any>) == m["QuotaApplications"].type()) {
        vector<ListQuotaApplicationsResponseBodyQuotaApplications> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["QuotaApplications"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListQuotaApplicationsResponseBodyQuotaApplications model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        quotaApplications = make_shared<vector<ListQuotaApplicationsResponseBodyQuotaApplications>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListQuotaApplicationsResponseBody() = default;
};
class ListQuotaApplicationsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListQuotaApplicationsResponseBody> body{};

  ListQuotaApplicationsResponse() {}

  explicit ListQuotaApplicationsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListQuotaApplicationsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListQuotaApplicationsResponseBody>(model1);
      }
    }
  }


  virtual ~ListQuotaApplicationsResponse() = default;
};
class ListQuotaApplicationsDetailForTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> aliyunUid{};
  shared_ptr<string> batchQuotaApplicationId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> productCode{};
  shared_ptr<string> quotaActionCode{};
  shared_ptr<string> quotaCategory{};
  shared_ptr<string> status{};

  ListQuotaApplicationsDetailForTemplateRequest() {}

  explicit ListQuotaApplicationsDetailForTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliyunUid) {
      res["AliyunUid"] = boost::any(*aliyunUid);
    }
    if (batchQuotaApplicationId) {
      res["BatchQuotaApplicationId"] = boost::any(*batchQuotaApplicationId);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (quotaActionCode) {
      res["QuotaActionCode"] = boost::any(*quotaActionCode);
    }
    if (quotaCategory) {
      res["QuotaCategory"] = boost::any(*quotaCategory);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliyunUid") != m.end() && !m["AliyunUid"].empty()) {
      aliyunUid = make_shared<string>(boost::any_cast<string>(m["AliyunUid"]));
    }
    if (m.find("BatchQuotaApplicationId") != m.end() && !m["BatchQuotaApplicationId"].empty()) {
      batchQuotaApplicationId = make_shared<string>(boost::any_cast<string>(m["BatchQuotaApplicationId"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("QuotaActionCode") != m.end() && !m["QuotaActionCode"].empty()) {
      quotaActionCode = make_shared<string>(boost::any_cast<string>(m["QuotaActionCode"]));
    }
    if (m.find("QuotaCategory") != m.end() && !m["QuotaCategory"].empty()) {
      quotaCategory = make_shared<string>(boost::any_cast<string>(m["QuotaCategory"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListQuotaApplicationsDetailForTemplateRequest() = default;
};
class ListQuotaApplicationsDetailForTemplateResponseBodyQuotaApplicationsPeriod : public Darabonba::Model {
public:
  shared_ptr<string> periodUnit{};
  shared_ptr<long> periodValue{};

  ListQuotaApplicationsDetailForTemplateResponseBodyQuotaApplicationsPeriod() {}

  explicit ListQuotaApplicationsDetailForTemplateResponseBodyQuotaApplicationsPeriod(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (periodUnit) {
      res["PeriodUnit"] = boost::any(*periodUnit);
    }
    if (periodValue) {
      res["PeriodValue"] = boost::any(*periodValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PeriodUnit") != m.end() && !m["PeriodUnit"].empty()) {
      periodUnit = make_shared<string>(boost::any_cast<string>(m["PeriodUnit"]));
    }
    if (m.find("PeriodValue") != m.end() && !m["PeriodValue"].empty()) {
      periodValue = make_shared<long>(boost::any_cast<long>(m["PeriodValue"]));
    }
  }


  virtual ~ListQuotaApplicationsDetailForTemplateResponseBodyQuotaApplicationsPeriod() = default;
};
class ListQuotaApplicationsDetailForTemplateResponseBodyQuotaApplications : public Darabonba::Model {
public:
  shared_ptr<string> aliyunUid{};
  shared_ptr<string> applicationId{};
  shared_ptr<string> applyTime{};
  shared_ptr<double> approveValue{};
  shared_ptr<string> auditReason{};
  shared_ptr<string> batchQuotaApplicationId{};
  shared_ptr<double> desireValue{};
  shared_ptr<string> effectiveTime{};
  shared_ptr<string> envLanguage{};
  shared_ptr<string> expireTime{};
  shared_ptr<long> noticeType{};
  shared_ptr<ListQuotaApplicationsDetailForTemplateResponseBodyQuotaApplicationsPeriod> period{};
  shared_ptr<string> productCode{};
  shared_ptr<string> quotaActionCode{};
  shared_ptr<string> quotaArn{};
  shared_ptr<string> quotaCategory{};
  shared_ptr<string> quotaDescription{};
  shared_ptr<map<string, string>> quotaDimension{};
  shared_ptr<string> quotaName{};
  shared_ptr<string> quotaUnit{};
  shared_ptr<string> reason{};
  shared_ptr<string> status{};

  ListQuotaApplicationsDetailForTemplateResponseBodyQuotaApplications() {}

  explicit ListQuotaApplicationsDetailForTemplateResponseBodyQuotaApplications(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliyunUid) {
      res["AliyunUid"] = boost::any(*aliyunUid);
    }
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
    }
    if (applyTime) {
      res["ApplyTime"] = boost::any(*applyTime);
    }
    if (approveValue) {
      res["ApproveValue"] = boost::any(*approveValue);
    }
    if (auditReason) {
      res["AuditReason"] = boost::any(*auditReason);
    }
    if (batchQuotaApplicationId) {
      res["BatchQuotaApplicationId"] = boost::any(*batchQuotaApplicationId);
    }
    if (desireValue) {
      res["DesireValue"] = boost::any(*desireValue);
    }
    if (effectiveTime) {
      res["EffectiveTime"] = boost::any(*effectiveTime);
    }
    if (envLanguage) {
      res["EnvLanguage"] = boost::any(*envLanguage);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (noticeType) {
      res["NoticeType"] = boost::any(*noticeType);
    }
    if (period) {
      res["Period"] = period ? boost::any(period->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (quotaActionCode) {
      res["QuotaActionCode"] = boost::any(*quotaActionCode);
    }
    if (quotaArn) {
      res["QuotaArn"] = boost::any(*quotaArn);
    }
    if (quotaCategory) {
      res["QuotaCategory"] = boost::any(*quotaCategory);
    }
    if (quotaDescription) {
      res["QuotaDescription"] = boost::any(*quotaDescription);
    }
    if (quotaDimension) {
      res["QuotaDimension"] = boost::any(*quotaDimension);
    }
    if (quotaName) {
      res["QuotaName"] = boost::any(*quotaName);
    }
    if (quotaUnit) {
      res["QuotaUnit"] = boost::any(*quotaUnit);
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
    if (m.find("AliyunUid") != m.end() && !m["AliyunUid"].empty()) {
      aliyunUid = make_shared<string>(boost::any_cast<string>(m["AliyunUid"]));
    }
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
    if (m.find("ApplyTime") != m.end() && !m["ApplyTime"].empty()) {
      applyTime = make_shared<string>(boost::any_cast<string>(m["ApplyTime"]));
    }
    if (m.find("ApproveValue") != m.end() && !m["ApproveValue"].empty()) {
      approveValue = make_shared<double>(boost::any_cast<double>(m["ApproveValue"]));
    }
    if (m.find("AuditReason") != m.end() && !m["AuditReason"].empty()) {
      auditReason = make_shared<string>(boost::any_cast<string>(m["AuditReason"]));
    }
    if (m.find("BatchQuotaApplicationId") != m.end() && !m["BatchQuotaApplicationId"].empty()) {
      batchQuotaApplicationId = make_shared<string>(boost::any_cast<string>(m["BatchQuotaApplicationId"]));
    }
    if (m.find("DesireValue") != m.end() && !m["DesireValue"].empty()) {
      desireValue = make_shared<double>(boost::any_cast<double>(m["DesireValue"]));
    }
    if (m.find("EffectiveTime") != m.end() && !m["EffectiveTime"].empty()) {
      effectiveTime = make_shared<string>(boost::any_cast<string>(m["EffectiveTime"]));
    }
    if (m.find("EnvLanguage") != m.end() && !m["EnvLanguage"].empty()) {
      envLanguage = make_shared<string>(boost::any_cast<string>(m["EnvLanguage"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("NoticeType") != m.end() && !m["NoticeType"].empty()) {
      noticeType = make_shared<long>(boost::any_cast<long>(m["NoticeType"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      if (typeid(map<string, boost::any>) == m["Period"].type()) {
        ListQuotaApplicationsDetailForTemplateResponseBodyQuotaApplicationsPeriod model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Period"]));
        period = make_shared<ListQuotaApplicationsDetailForTemplateResponseBodyQuotaApplicationsPeriod>(model1);
      }
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("QuotaActionCode") != m.end() && !m["QuotaActionCode"].empty()) {
      quotaActionCode = make_shared<string>(boost::any_cast<string>(m["QuotaActionCode"]));
    }
    if (m.find("QuotaArn") != m.end() && !m["QuotaArn"].empty()) {
      quotaArn = make_shared<string>(boost::any_cast<string>(m["QuotaArn"]));
    }
    if (m.find("QuotaCategory") != m.end() && !m["QuotaCategory"].empty()) {
      quotaCategory = make_shared<string>(boost::any_cast<string>(m["QuotaCategory"]));
    }
    if (m.find("QuotaDescription") != m.end() && !m["QuotaDescription"].empty()) {
      quotaDescription = make_shared<string>(boost::any_cast<string>(m["QuotaDescription"]));
    }
    if (m.find("QuotaDimension") != m.end() && !m["QuotaDimension"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["QuotaDimension"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      quotaDimension = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("QuotaName") != m.end() && !m["QuotaName"].empty()) {
      quotaName = make_shared<string>(boost::any_cast<string>(m["QuotaName"]));
    }
    if (m.find("QuotaUnit") != m.end() && !m["QuotaUnit"].empty()) {
      quotaUnit = make_shared<string>(boost::any_cast<string>(m["QuotaUnit"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListQuotaApplicationsDetailForTemplateResponseBodyQuotaApplications() = default;
};
class ListQuotaApplicationsDetailForTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<ListQuotaApplicationsDetailForTemplateResponseBodyQuotaApplications>> quotaApplications{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListQuotaApplicationsDetailForTemplateResponseBody() {}

  explicit ListQuotaApplicationsDetailForTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (quotaApplications) {
      vector<boost::any> temp1;
      for(auto item1:*quotaApplications){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["QuotaApplications"] = boost::any(temp1);
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
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("QuotaApplications") != m.end() && !m["QuotaApplications"].empty()) {
      if (typeid(vector<boost::any>) == m["QuotaApplications"].type()) {
        vector<ListQuotaApplicationsDetailForTemplateResponseBodyQuotaApplications> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["QuotaApplications"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListQuotaApplicationsDetailForTemplateResponseBodyQuotaApplications model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        quotaApplications = make_shared<vector<ListQuotaApplicationsDetailForTemplateResponseBodyQuotaApplications>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListQuotaApplicationsDetailForTemplateResponseBody() = default;
};
class ListQuotaApplicationsDetailForTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListQuotaApplicationsDetailForTemplateResponseBody> body{};

  ListQuotaApplicationsDetailForTemplateResponse() {}

  explicit ListQuotaApplicationsDetailForTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListQuotaApplicationsDetailForTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListQuotaApplicationsDetailForTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~ListQuotaApplicationsDetailForTemplateResponse() = default;
};
class ListQuotaApplicationsForTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> applyEndTime{};
  shared_ptr<string> applyStartTime{};
  shared_ptr<string> batchQuotaApplicationId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> productCode{};
  shared_ptr<string> quotaActionCode{};
  shared_ptr<string> quotaCategory{};

  ListQuotaApplicationsForTemplateRequest() {}

  explicit ListQuotaApplicationsForTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applyEndTime) {
      res["ApplyEndTime"] = boost::any(*applyEndTime);
    }
    if (applyStartTime) {
      res["ApplyStartTime"] = boost::any(*applyStartTime);
    }
    if (batchQuotaApplicationId) {
      res["BatchQuotaApplicationId"] = boost::any(*batchQuotaApplicationId);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (quotaActionCode) {
      res["QuotaActionCode"] = boost::any(*quotaActionCode);
    }
    if (quotaCategory) {
      res["QuotaCategory"] = boost::any(*quotaCategory);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplyEndTime") != m.end() && !m["ApplyEndTime"].empty()) {
      applyEndTime = make_shared<string>(boost::any_cast<string>(m["ApplyEndTime"]));
    }
    if (m.find("ApplyStartTime") != m.end() && !m["ApplyStartTime"].empty()) {
      applyStartTime = make_shared<string>(boost::any_cast<string>(m["ApplyStartTime"]));
    }
    if (m.find("BatchQuotaApplicationId") != m.end() && !m["BatchQuotaApplicationId"].empty()) {
      batchQuotaApplicationId = make_shared<string>(boost::any_cast<string>(m["BatchQuotaApplicationId"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("QuotaActionCode") != m.end() && !m["QuotaActionCode"].empty()) {
      quotaActionCode = make_shared<string>(boost::any_cast<string>(m["QuotaActionCode"]));
    }
    if (m.find("QuotaCategory") != m.end() && !m["QuotaCategory"].empty()) {
      quotaCategory = make_shared<string>(boost::any_cast<string>(m["QuotaCategory"]));
    }
  }


  virtual ~ListQuotaApplicationsForTemplateRequest() = default;
};
class ListQuotaApplicationsForTemplateResponseBodyQuotaBatchApplicationsAuditStatusVos : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<string> status{};

  ListQuotaApplicationsForTemplateResponseBodyQuotaBatchApplicationsAuditStatusVos() {}

  explicit ListQuotaApplicationsForTemplateResponseBodyQuotaBatchApplicationsAuditStatusVos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListQuotaApplicationsForTemplateResponseBodyQuotaBatchApplicationsAuditStatusVos() = default;
};
class ListQuotaApplicationsForTemplateResponseBodyQuotaBatchApplications : public Darabonba::Model {
public:
  shared_ptr<vector<string>> aliyunUids{};
  shared_ptr<string> applyTime{};
  shared_ptr<vector<ListQuotaApplicationsForTemplateResponseBodyQuotaBatchApplicationsAuditStatusVos>> auditStatusVos{};
  shared_ptr<string> batchQuotaApplicationId{};
  shared_ptr<double> desireValue{};
  shared_ptr<map<string, boost::any>> dimensions{};
  shared_ptr<string> effectiveTime{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> productCode{};
  shared_ptr<string> quotaActionCode{};
  shared_ptr<string> quotaCategory{};
  shared_ptr<string> reason{};

  ListQuotaApplicationsForTemplateResponseBodyQuotaBatchApplications() {}

  explicit ListQuotaApplicationsForTemplateResponseBodyQuotaBatchApplications(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliyunUids) {
      res["AliyunUids"] = boost::any(*aliyunUids);
    }
    if (applyTime) {
      res["ApplyTime"] = boost::any(*applyTime);
    }
    if (auditStatusVos) {
      vector<boost::any> temp1;
      for(auto item1:*auditStatusVos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AuditStatusVos"] = boost::any(temp1);
    }
    if (batchQuotaApplicationId) {
      res["BatchQuotaApplicationId"] = boost::any(*batchQuotaApplicationId);
    }
    if (desireValue) {
      res["DesireValue"] = boost::any(*desireValue);
    }
    if (dimensions) {
      res["Dimensions"] = boost::any(*dimensions);
    }
    if (effectiveTime) {
      res["EffectiveTime"] = boost::any(*effectiveTime);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (quotaActionCode) {
      res["QuotaActionCode"] = boost::any(*quotaActionCode);
    }
    if (quotaCategory) {
      res["QuotaCategory"] = boost::any(*quotaCategory);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliyunUids") != m.end() && !m["AliyunUids"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AliyunUids"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AliyunUids"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      aliyunUids = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ApplyTime") != m.end() && !m["ApplyTime"].empty()) {
      applyTime = make_shared<string>(boost::any_cast<string>(m["ApplyTime"]));
    }
    if (m.find("AuditStatusVos") != m.end() && !m["AuditStatusVos"].empty()) {
      if (typeid(vector<boost::any>) == m["AuditStatusVos"].type()) {
        vector<ListQuotaApplicationsForTemplateResponseBodyQuotaBatchApplicationsAuditStatusVos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AuditStatusVos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListQuotaApplicationsForTemplateResponseBodyQuotaBatchApplicationsAuditStatusVos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        auditStatusVos = make_shared<vector<ListQuotaApplicationsForTemplateResponseBodyQuotaBatchApplicationsAuditStatusVos>>(expect1);
      }
    }
    if (m.find("BatchQuotaApplicationId") != m.end() && !m["BatchQuotaApplicationId"].empty()) {
      batchQuotaApplicationId = make_shared<string>(boost::any_cast<string>(m["BatchQuotaApplicationId"]));
    }
    if (m.find("DesireValue") != m.end() && !m["DesireValue"].empty()) {
      desireValue = make_shared<double>(boost::any_cast<double>(m["DesireValue"]));
    }
    if (m.find("Dimensions") != m.end() && !m["Dimensions"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Dimensions"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      dimensions = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("EffectiveTime") != m.end() && !m["EffectiveTime"].empty()) {
      effectiveTime = make_shared<string>(boost::any_cast<string>(m["EffectiveTime"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("QuotaActionCode") != m.end() && !m["QuotaActionCode"].empty()) {
      quotaActionCode = make_shared<string>(boost::any_cast<string>(m["QuotaActionCode"]));
    }
    if (m.find("QuotaCategory") != m.end() && !m["QuotaCategory"].empty()) {
      quotaCategory = make_shared<string>(boost::any_cast<string>(m["QuotaCategory"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
  }


  virtual ~ListQuotaApplicationsForTemplateResponseBodyQuotaBatchApplications() = default;
};
class ListQuotaApplicationsForTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<ListQuotaApplicationsForTemplateResponseBodyQuotaBatchApplications>> quotaBatchApplications{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListQuotaApplicationsForTemplateResponseBody() {}

  explicit ListQuotaApplicationsForTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (quotaBatchApplications) {
      vector<boost::any> temp1;
      for(auto item1:*quotaBatchApplications){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["QuotaBatchApplications"] = boost::any(temp1);
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
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("QuotaBatchApplications") != m.end() && !m["QuotaBatchApplications"].empty()) {
      if (typeid(vector<boost::any>) == m["QuotaBatchApplications"].type()) {
        vector<ListQuotaApplicationsForTemplateResponseBodyQuotaBatchApplications> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["QuotaBatchApplications"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListQuotaApplicationsForTemplateResponseBodyQuotaBatchApplications model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        quotaBatchApplications = make_shared<vector<ListQuotaApplicationsForTemplateResponseBodyQuotaBatchApplications>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListQuotaApplicationsForTemplateResponseBody() = default;
};
class ListQuotaApplicationsForTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListQuotaApplicationsForTemplateResponseBody> body{};

  ListQuotaApplicationsForTemplateResponse() {}

  explicit ListQuotaApplicationsForTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListQuotaApplicationsForTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListQuotaApplicationsForTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~ListQuotaApplicationsForTemplateResponse() = default;
};
class ModifyQuotaTemplateServiceStatusRequest : public Darabonba::Model {
public:
  shared_ptr<long> serviceStatus{};

  ModifyQuotaTemplateServiceStatusRequest() {}

  explicit ModifyQuotaTemplateServiceStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceStatus) {
      res["ServiceStatus"] = boost::any(*serviceStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceStatus") != m.end() && !m["ServiceStatus"].empty()) {
      serviceStatus = make_shared<long>(boost::any_cast<long>(m["ServiceStatus"]));
    }
  }


  virtual ~ModifyQuotaTemplateServiceStatusRequest() = default;
};
class ModifyQuotaTemplateServiceStatusResponseBodyTemplateServiceStatus : public Darabonba::Model {
public:
  shared_ptr<string> resourceDirectoryId{};
  shared_ptr<long> serviceStatus{};

  ModifyQuotaTemplateServiceStatusResponseBodyTemplateServiceStatus() {}

  explicit ModifyQuotaTemplateServiceStatusResponseBodyTemplateServiceStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceDirectoryId) {
      res["ResourceDirectoryId"] = boost::any(*resourceDirectoryId);
    }
    if (serviceStatus) {
      res["ServiceStatus"] = boost::any(*serviceStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceDirectoryId") != m.end() && !m["ResourceDirectoryId"].empty()) {
      resourceDirectoryId = make_shared<string>(boost::any_cast<string>(m["ResourceDirectoryId"]));
    }
    if (m.find("ServiceStatus") != m.end() && !m["ServiceStatus"].empty()) {
      serviceStatus = make_shared<long>(boost::any_cast<long>(m["ServiceStatus"]));
    }
  }


  virtual ~ModifyQuotaTemplateServiceStatusResponseBodyTemplateServiceStatus() = default;
};
class ModifyQuotaTemplateServiceStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ModifyQuotaTemplateServiceStatusResponseBodyTemplateServiceStatus> templateServiceStatus{};

  ModifyQuotaTemplateServiceStatusResponseBody() {}

  explicit ModifyQuotaTemplateServiceStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (templateServiceStatus) {
      res["TemplateServiceStatus"] = templateServiceStatus ? boost::any(templateServiceStatus->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TemplateServiceStatus") != m.end() && !m["TemplateServiceStatus"].empty()) {
      if (typeid(map<string, boost::any>) == m["TemplateServiceStatus"].type()) {
        ModifyQuotaTemplateServiceStatusResponseBodyTemplateServiceStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TemplateServiceStatus"]));
        templateServiceStatus = make_shared<ModifyQuotaTemplateServiceStatusResponseBodyTemplateServiceStatus>(model1);
      }
    }
  }


  virtual ~ModifyQuotaTemplateServiceStatusResponseBody() = default;
};
class ModifyQuotaTemplateServiceStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyQuotaTemplateServiceStatusResponseBody> body{};

  ModifyQuotaTemplateServiceStatusResponse() {}

  explicit ModifyQuotaTemplateServiceStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyQuotaTemplateServiceStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyQuotaTemplateServiceStatusResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyQuotaTemplateServiceStatusResponse() = default;
};
class ModifyTemplateQuotaItemRequestDimensions : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ModifyTemplateQuotaItemRequestDimensions() {}

  explicit ModifyTemplateQuotaItemRequestDimensions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyTemplateQuotaItemRequestDimensions() = default;
};
class ModifyTemplateQuotaItemRequest : public Darabonba::Model {
public:
  shared_ptr<double> desireValue{};
  shared_ptr<vector<ModifyTemplateQuotaItemRequestDimensions>> dimensions{};
  shared_ptr<string> effectiveTime{};
  shared_ptr<string> envLanguage{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> id{};
  shared_ptr<long> noticeType{};
  shared_ptr<string> productCode{};
  shared_ptr<string> quotaActionCode{};
  shared_ptr<string> quotaCategory{};

  ModifyTemplateQuotaItemRequest() {}

  explicit ModifyTemplateQuotaItemRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (desireValue) {
      res["DesireValue"] = boost::any(*desireValue);
    }
    if (dimensions) {
      vector<boost::any> temp1;
      for(auto item1:*dimensions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Dimensions"] = boost::any(temp1);
    }
    if (effectiveTime) {
      res["EffectiveTime"] = boost::any(*effectiveTime);
    }
    if (envLanguage) {
      res["EnvLanguage"] = boost::any(*envLanguage);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (noticeType) {
      res["NoticeType"] = boost::any(*noticeType);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (quotaActionCode) {
      res["QuotaActionCode"] = boost::any(*quotaActionCode);
    }
    if (quotaCategory) {
      res["QuotaCategory"] = boost::any(*quotaCategory);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DesireValue") != m.end() && !m["DesireValue"].empty()) {
      desireValue = make_shared<double>(boost::any_cast<double>(m["DesireValue"]));
    }
    if (m.find("Dimensions") != m.end() && !m["Dimensions"].empty()) {
      if (typeid(vector<boost::any>) == m["Dimensions"].type()) {
        vector<ModifyTemplateQuotaItemRequestDimensions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Dimensions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyTemplateQuotaItemRequestDimensions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dimensions = make_shared<vector<ModifyTemplateQuotaItemRequestDimensions>>(expect1);
      }
    }
    if (m.find("EffectiveTime") != m.end() && !m["EffectiveTime"].empty()) {
      effectiveTime = make_shared<string>(boost::any_cast<string>(m["EffectiveTime"]));
    }
    if (m.find("EnvLanguage") != m.end() && !m["EnvLanguage"].empty()) {
      envLanguage = make_shared<string>(boost::any_cast<string>(m["EnvLanguage"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("NoticeType") != m.end() && !m["NoticeType"].empty()) {
      noticeType = make_shared<long>(boost::any_cast<long>(m["NoticeType"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("QuotaActionCode") != m.end() && !m["QuotaActionCode"].empty()) {
      quotaActionCode = make_shared<string>(boost::any_cast<string>(m["QuotaActionCode"]));
    }
    if (m.find("QuotaCategory") != m.end() && !m["QuotaCategory"].empty()) {
      quotaCategory = make_shared<string>(boost::any_cast<string>(m["QuotaCategory"]));
    }
  }


  virtual ~ModifyTemplateQuotaItemRequest() = default;
};
class ModifyTemplateQuotaItemResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> requestId{};

  ModifyTemplateQuotaItemResponseBody() {}

  explicit ModifyTemplateQuotaItemResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyTemplateQuotaItemResponseBody() = default;
};
class ModifyTemplateQuotaItemResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyTemplateQuotaItemResponseBody> body{};

  ModifyTemplateQuotaItemResponse() {}

  explicit ModifyTemplateQuotaItemResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyTemplateQuotaItemResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyTemplateQuotaItemResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyTemplateQuotaItemResponse() = default;
};
class RemindQuotaApplicationApprovalRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationId{};

  RemindQuotaApplicationApprovalRequest() {}

  explicit RemindQuotaApplicationApprovalRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
  }


  virtual ~RemindQuotaApplicationApprovalRequest() = default;
};
class RemindQuotaApplicationApprovalResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> allowRetry{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<vector<boost::any>> errorArgs{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> module{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  RemindQuotaApplicationApprovalResponseBody() {}

  explicit RemindQuotaApplicationApprovalResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowRetry) {
      res["AllowRetry"] = boost::any(*allowRetry);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (errorArgs) {
      res["ErrorArgs"] = boost::any(*errorArgs);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (module) {
      res["Module"] = boost::any(*module);
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
    if (m.find("AllowRetry") != m.end() && !m["AllowRetry"].empty()) {
      allowRetry = make_shared<bool>(boost::any_cast<bool>(m["AllowRetry"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("ErrorArgs") != m.end() && !m["ErrorArgs"].empty()) {
      vector<boost::any> toVec1;
      if (typeid(vector<boost::any>) == m["ErrorArgs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ErrorArgs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<boost::any>(item));
        }
      }
      errorArgs = make_shared<vector<boost::any>>(toVec1);
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Module") != m.end() && !m["Module"].empty()) {
      module = make_shared<string>(boost::any_cast<string>(m["Module"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~RemindQuotaApplicationApprovalResponseBody() = default;
};
class RemindQuotaApplicationApprovalResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RemindQuotaApplicationApprovalResponseBody> body{};

  RemindQuotaApplicationApprovalResponse() {}

  explicit RemindQuotaApplicationApprovalResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RemindQuotaApplicationApprovalResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemindQuotaApplicationApprovalResponseBody>(model1);
      }
    }
  }


  virtual ~RemindQuotaApplicationApprovalResponse() = default;
};
class UpdateQuotaAlarmRequest : public Darabonba::Model {
public:
  shared_ptr<string> alarmId{};
  shared_ptr<string> alarmName{};
  shared_ptr<double> threshold{};
  shared_ptr<double> thresholdPercent{};
  shared_ptr<string> thresholdType{};
  shared_ptr<string> webHook{};

  UpdateQuotaAlarmRequest() {}

  explicit UpdateQuotaAlarmRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alarmId) {
      res["AlarmId"] = boost::any(*alarmId);
    }
    if (alarmName) {
      res["AlarmName"] = boost::any(*alarmName);
    }
    if (threshold) {
      res["Threshold"] = boost::any(*threshold);
    }
    if (thresholdPercent) {
      res["ThresholdPercent"] = boost::any(*thresholdPercent);
    }
    if (thresholdType) {
      res["ThresholdType"] = boost::any(*thresholdType);
    }
    if (webHook) {
      res["WebHook"] = boost::any(*webHook);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlarmId") != m.end() && !m["AlarmId"].empty()) {
      alarmId = make_shared<string>(boost::any_cast<string>(m["AlarmId"]));
    }
    if (m.find("AlarmName") != m.end() && !m["AlarmName"].empty()) {
      alarmName = make_shared<string>(boost::any_cast<string>(m["AlarmName"]));
    }
    if (m.find("Threshold") != m.end() && !m["Threshold"].empty()) {
      threshold = make_shared<double>(boost::any_cast<double>(m["Threshold"]));
    }
    if (m.find("ThresholdPercent") != m.end() && !m["ThresholdPercent"].empty()) {
      thresholdPercent = make_shared<double>(boost::any_cast<double>(m["ThresholdPercent"]));
    }
    if (m.find("ThresholdType") != m.end() && !m["ThresholdType"].empty()) {
      thresholdType = make_shared<string>(boost::any_cast<string>(m["ThresholdType"]));
    }
    if (m.find("WebHook") != m.end() && !m["WebHook"].empty()) {
      webHook = make_shared<string>(boost::any_cast<string>(m["WebHook"]));
    }
  }


  virtual ~UpdateQuotaAlarmRequest() = default;
};
class UpdateQuotaAlarmResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateQuotaAlarmResponseBody() {}

  explicit UpdateQuotaAlarmResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateQuotaAlarmResponseBody() = default;
};
class UpdateQuotaAlarmResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateQuotaAlarmResponseBody> body{};

  UpdateQuotaAlarmResponse() {}

  explicit UpdateQuotaAlarmResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateQuotaAlarmResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateQuotaAlarmResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateQuotaAlarmResponse() = default;
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
  CreateQuotaAlarmResponse createQuotaAlarmWithOptions(shared_ptr<CreateQuotaAlarmRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateQuotaAlarmResponse createQuotaAlarm(shared_ptr<CreateQuotaAlarmRequest> request);
  CreateQuotaApplicationResponse createQuotaApplicationWithOptions(shared_ptr<CreateQuotaApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateQuotaApplicationResponse createQuotaApplication(shared_ptr<CreateQuotaApplicationRequest> request);
  CreateQuotaApplicationsForTemplateResponse createQuotaApplicationsForTemplateWithOptions(shared_ptr<CreateQuotaApplicationsForTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateQuotaApplicationsForTemplateResponse createQuotaApplicationsForTemplate(shared_ptr<CreateQuotaApplicationsForTemplateRequest> request);
  CreateTemplateQuotaItemResponse createTemplateQuotaItemWithOptions(shared_ptr<CreateTemplateQuotaItemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTemplateQuotaItemResponse createTemplateQuotaItem(shared_ptr<CreateTemplateQuotaItemRequest> request);
  DeleteQuotaAlarmResponse deleteQuotaAlarmWithOptions(shared_ptr<DeleteQuotaAlarmRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteQuotaAlarmResponse deleteQuotaAlarm(shared_ptr<DeleteQuotaAlarmRequest> request);
  DeleteTemplateQuotaItemResponse deleteTemplateQuotaItemWithOptions(shared_ptr<DeleteTemplateQuotaItemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteTemplateQuotaItemResponse deleteTemplateQuotaItem(shared_ptr<DeleteTemplateQuotaItemRequest> request);
  GetProductQuotaResponse getProductQuotaWithOptions(shared_ptr<GetProductQuotaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetProductQuotaResponse getProductQuota(shared_ptr<GetProductQuotaRequest> request);
  GetProductQuotaDimensionResponse getProductQuotaDimensionWithOptions(shared_ptr<GetProductQuotaDimensionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetProductQuotaDimensionResponse getProductQuotaDimension(shared_ptr<GetProductQuotaDimensionRequest> request);
  GetQuotaAlarmResponse getQuotaAlarmWithOptions(shared_ptr<GetQuotaAlarmRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetQuotaAlarmResponse getQuotaAlarm(shared_ptr<GetQuotaAlarmRequest> request);
  GetQuotaApplicationResponse getQuotaApplicationWithOptions(shared_ptr<GetQuotaApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetQuotaApplicationResponse getQuotaApplication(shared_ptr<GetQuotaApplicationRequest> request);
  GetQuotaApplicationApprovalResponse getQuotaApplicationApprovalWithOptions(shared_ptr<GetQuotaApplicationApprovalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetQuotaApplicationApprovalResponse getQuotaApplicationApproval(shared_ptr<GetQuotaApplicationApprovalRequest> request);
  GetQuotaTemplateServiceStatusResponse getQuotaTemplateServiceStatusWithOptions(shared_ptr<GetQuotaTemplateServiceStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetQuotaTemplateServiceStatusResponse getQuotaTemplateServiceStatus(shared_ptr<GetQuotaTemplateServiceStatusRequest> request);
  ListAlarmHistoriesResponse listAlarmHistoriesWithOptions(shared_ptr<ListAlarmHistoriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAlarmHistoriesResponse listAlarmHistories(shared_ptr<ListAlarmHistoriesRequest> request);
  ListDependentQuotasResponse listDependentQuotasWithOptions(shared_ptr<ListDependentQuotasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDependentQuotasResponse listDependentQuotas(shared_ptr<ListDependentQuotasRequest> request);
  ListProductDimensionGroupsResponse listProductDimensionGroupsWithOptions(shared_ptr<ListProductDimensionGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListProductDimensionGroupsResponse listProductDimensionGroups(shared_ptr<ListProductDimensionGroupsRequest> request);
  ListProductQuotaDimensionsResponse listProductQuotaDimensionsWithOptions(shared_ptr<ListProductQuotaDimensionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListProductQuotaDimensionsResponse listProductQuotaDimensions(shared_ptr<ListProductQuotaDimensionsRequest> request);
  ListProductQuotasResponse listProductQuotasWithOptions(shared_ptr<ListProductQuotasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListProductQuotasResponse listProductQuotas(shared_ptr<ListProductQuotasRequest> request);
  ListProductsResponse listProductsWithOptions(shared_ptr<ListProductsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListProductsResponse listProducts(shared_ptr<ListProductsRequest> request);
  ListQuotaAlarmsResponse listQuotaAlarmsWithOptions(shared_ptr<ListQuotaAlarmsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListQuotaAlarmsResponse listQuotaAlarms(shared_ptr<ListQuotaAlarmsRequest> request);
  ListQuotaApplicationTemplatesResponse listQuotaApplicationTemplatesWithOptions(shared_ptr<ListQuotaApplicationTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListQuotaApplicationTemplatesResponse listQuotaApplicationTemplates(shared_ptr<ListQuotaApplicationTemplatesRequest> request);
  ListQuotaApplicationsResponse listQuotaApplicationsWithOptions(shared_ptr<ListQuotaApplicationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListQuotaApplicationsResponse listQuotaApplications(shared_ptr<ListQuotaApplicationsRequest> request);
  ListQuotaApplicationsDetailForTemplateResponse listQuotaApplicationsDetailForTemplateWithOptions(shared_ptr<ListQuotaApplicationsDetailForTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListQuotaApplicationsDetailForTemplateResponse listQuotaApplicationsDetailForTemplate(shared_ptr<ListQuotaApplicationsDetailForTemplateRequest> request);
  ListQuotaApplicationsForTemplateResponse listQuotaApplicationsForTemplateWithOptions(shared_ptr<ListQuotaApplicationsForTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListQuotaApplicationsForTemplateResponse listQuotaApplicationsForTemplate(shared_ptr<ListQuotaApplicationsForTemplateRequest> request);
  ModifyQuotaTemplateServiceStatusResponse modifyQuotaTemplateServiceStatusWithOptions(shared_ptr<ModifyQuotaTemplateServiceStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyQuotaTemplateServiceStatusResponse modifyQuotaTemplateServiceStatus(shared_ptr<ModifyQuotaTemplateServiceStatusRequest> request);
  ModifyTemplateQuotaItemResponse modifyTemplateQuotaItemWithOptions(shared_ptr<ModifyTemplateQuotaItemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyTemplateQuotaItemResponse modifyTemplateQuotaItem(shared_ptr<ModifyTemplateQuotaItemRequest> request);
  RemindQuotaApplicationApprovalResponse remindQuotaApplicationApprovalWithOptions(shared_ptr<RemindQuotaApplicationApprovalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemindQuotaApplicationApprovalResponse remindQuotaApplicationApproval(shared_ptr<RemindQuotaApplicationApprovalRequest> request);
  UpdateQuotaAlarmResponse updateQuotaAlarmWithOptions(shared_ptr<UpdateQuotaAlarmRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateQuotaAlarmResponse updateQuotaAlarm(shared_ptr<UpdateQuotaAlarmRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Quotas20200510

#endif
