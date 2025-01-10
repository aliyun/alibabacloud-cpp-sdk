// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_BRAIN-INDUSTRIAL20200920_H_
#define ALIBABACLOUD_BRAIN-INDUSTRIAL20200920_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Brain-industrial20200920 {
class ActivateLicenseRequest : public Darabonba::Model {
public:
  shared_ptr<string> fingerprint{};
  shared_ptr<string> id{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> orderId{};

  ActivateLicenseRequest() {}

  explicit ActivateLicenseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fingerprint) {
      res["Fingerprint"] = boost::any(*fingerprint);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Fingerprint") != m.end() && !m["Fingerprint"].empty()) {
      fingerprint = make_shared<string>(boost::any_cast<string>(m["Fingerprint"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
  }


  virtual ~ActivateLicenseRequest() = default;
};
class ActivateLicenseResponseBodyDataActivateRecord : public Darabonba::Model {
public:
  shared_ptr<string> activateTime{};
  shared_ptr<string> buyTime{};
  shared_ptr<string> duration{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> licenseCode{};
  shared_ptr<string> orderId{};
  shared_ptr<string> status{};

  ActivateLicenseResponseBodyDataActivateRecord() {}

  explicit ActivateLicenseResponseBodyDataActivateRecord(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (activateTime) {
      res["ActivateTime"] = boost::any(*activateTime);
    }
    if (buyTime) {
      res["BuyTime"] = boost::any(*buyTime);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (licenseCode) {
      res["LicenseCode"] = boost::any(*licenseCode);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActivateTime") != m.end() && !m["ActivateTime"].empty()) {
      activateTime = make_shared<string>(boost::any_cast<string>(m["ActivateTime"]));
    }
    if (m.find("BuyTime") != m.end() && !m["BuyTime"].empty()) {
      buyTime = make_shared<string>(boost::any_cast<string>(m["BuyTime"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<string>(boost::any_cast<string>(m["Duration"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("LicenseCode") != m.end() && !m["LicenseCode"].empty()) {
      licenseCode = make_shared<string>(boost::any_cast<string>(m["LicenseCode"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ActivateLicenseResponseBodyDataActivateRecord() = default;
};
class ActivateLicenseResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ActivateLicenseResponseBodyDataActivateRecord>> activateRecord{};
  shared_ptr<string> activateTime{};
  shared_ptr<string> allDuration{};
  shared_ptr<string> applicableSpecs{};
  shared_ptr<string> buyTime{};
  shared_ptr<long> cpuLimit{};
  shared_ptr<string> description{};
  shared_ptr<string> duration{};
  shared_ptr<string> effectTime{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> fingerprint{};
  shared_ptr<string> id{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> licenseCode{};
  shared_ptr<string> licenseSpecName{};
  shared_ptr<long> memoryLimit{};
  shared_ptr<string> status{};
  shared_ptr<string> unActivateAllDuration{};

  ActivateLicenseResponseBodyData() {}

  explicit ActivateLicenseResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (activateRecord) {
      vector<boost::any> temp1;
      for(auto item1:*activateRecord){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ActivateRecord"] = boost::any(temp1);
    }
    if (activateTime) {
      res["ActivateTime"] = boost::any(*activateTime);
    }
    if (allDuration) {
      res["AllDuration"] = boost::any(*allDuration);
    }
    if (applicableSpecs) {
      res["ApplicableSpecs"] = boost::any(*applicableSpecs);
    }
    if (buyTime) {
      res["BuyTime"] = boost::any(*buyTime);
    }
    if (cpuLimit) {
      res["CpuLimit"] = boost::any(*cpuLimit);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (effectTime) {
      res["EffectTime"] = boost::any(*effectTime);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (fingerprint) {
      res["Fingerprint"] = boost::any(*fingerprint);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (licenseCode) {
      res["LicenseCode"] = boost::any(*licenseCode);
    }
    if (licenseSpecName) {
      res["LicenseSpecName"] = boost::any(*licenseSpecName);
    }
    if (memoryLimit) {
      res["MemoryLimit"] = boost::any(*memoryLimit);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (unActivateAllDuration) {
      res["UnActivateAllDuration"] = boost::any(*unActivateAllDuration);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActivateRecord") != m.end() && !m["ActivateRecord"].empty()) {
      if (typeid(vector<boost::any>) == m["ActivateRecord"].type()) {
        vector<ActivateLicenseResponseBodyDataActivateRecord> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ActivateRecord"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ActivateLicenseResponseBodyDataActivateRecord model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        activateRecord = make_shared<vector<ActivateLicenseResponseBodyDataActivateRecord>>(expect1);
      }
    }
    if (m.find("ActivateTime") != m.end() && !m["ActivateTime"].empty()) {
      activateTime = make_shared<string>(boost::any_cast<string>(m["ActivateTime"]));
    }
    if (m.find("AllDuration") != m.end() && !m["AllDuration"].empty()) {
      allDuration = make_shared<string>(boost::any_cast<string>(m["AllDuration"]));
    }
    if (m.find("ApplicableSpecs") != m.end() && !m["ApplicableSpecs"].empty()) {
      applicableSpecs = make_shared<string>(boost::any_cast<string>(m["ApplicableSpecs"]));
    }
    if (m.find("BuyTime") != m.end() && !m["BuyTime"].empty()) {
      buyTime = make_shared<string>(boost::any_cast<string>(m["BuyTime"]));
    }
    if (m.find("CpuLimit") != m.end() && !m["CpuLimit"].empty()) {
      cpuLimit = make_shared<long>(boost::any_cast<long>(m["CpuLimit"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<string>(boost::any_cast<string>(m["Duration"]));
    }
    if (m.find("EffectTime") != m.end() && !m["EffectTime"].empty()) {
      effectTime = make_shared<string>(boost::any_cast<string>(m["EffectTime"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("Fingerprint") != m.end() && !m["Fingerprint"].empty()) {
      fingerprint = make_shared<string>(boost::any_cast<string>(m["Fingerprint"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("LicenseCode") != m.end() && !m["LicenseCode"].empty()) {
      licenseCode = make_shared<string>(boost::any_cast<string>(m["LicenseCode"]));
    }
    if (m.find("LicenseSpecName") != m.end() && !m["LicenseSpecName"].empty()) {
      licenseSpecName = make_shared<string>(boost::any_cast<string>(m["LicenseSpecName"]));
    }
    if (m.find("MemoryLimit") != m.end() && !m["MemoryLimit"].empty()) {
      memoryLimit = make_shared<long>(boost::any_cast<long>(m["MemoryLimit"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UnActivateAllDuration") != m.end() && !m["UnActivateAllDuration"].empty()) {
      unActivateAllDuration = make_shared<string>(boost::any_cast<string>(m["UnActivateAllDuration"]));
    }
  }


  virtual ~ActivateLicenseResponseBodyData() = default;
};
class ActivateLicenseResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<ActivateLicenseResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  ActivateLicenseResponseBody() {}

  explicit ActivateLicenseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ActivateLicenseResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ActivateLicenseResponseBodyData>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~ActivateLicenseResponseBody() = default;
};
class ActivateLicenseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ActivateLicenseResponseBody> body{};

  ActivateLicenseResponse() {}

  explicit ActivateLicenseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ActivateLicenseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ActivateLicenseResponseBody>(model1);
      }
    }
  }


  virtual ~ActivateLicenseResponse() = default;
};
class GetLicenseRequest : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> instanceId{};

  GetLicenseRequest() {}

  explicit GetLicenseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~GetLicenseRequest() = default;
};
class GetLicenseResponseBodyDataActivateRecord : public Darabonba::Model {
public:
  shared_ptr<string> activateTime{};
  shared_ptr<string> buyTime{};
  shared_ptr<string> duration{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> licenseCode{};
  shared_ptr<string> orderId{};
  shared_ptr<string> status{};

  GetLicenseResponseBodyDataActivateRecord() {}

  explicit GetLicenseResponseBodyDataActivateRecord(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (activateTime) {
      res["ActivateTime"] = boost::any(*activateTime);
    }
    if (buyTime) {
      res["BuyTime"] = boost::any(*buyTime);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (licenseCode) {
      res["LicenseCode"] = boost::any(*licenseCode);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActivateTime") != m.end() && !m["ActivateTime"].empty()) {
      activateTime = make_shared<string>(boost::any_cast<string>(m["ActivateTime"]));
    }
    if (m.find("BuyTime") != m.end() && !m["BuyTime"].empty()) {
      buyTime = make_shared<string>(boost::any_cast<string>(m["BuyTime"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<string>(boost::any_cast<string>(m["Duration"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("LicenseCode") != m.end() && !m["LicenseCode"].empty()) {
      licenseCode = make_shared<string>(boost::any_cast<string>(m["LicenseCode"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetLicenseResponseBodyDataActivateRecord() = default;
};
class GetLicenseResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GetLicenseResponseBodyDataActivateRecord>> activateRecord{};
  shared_ptr<string> activateTime{};
  shared_ptr<string> adaptiveMachine{};
  shared_ptr<string> allDuration{};
  shared_ptr<string> applicableSpecs{};
  shared_ptr<string> buyTime{};
  shared_ptr<long> cpuLimit{};
  shared_ptr<string> description{};
  shared_ptr<string> duration{};
  shared_ptr<string> effectTime{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> fingerprint{};
  shared_ptr<long> id{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> licenseCode{};
  shared_ptr<string> licenseSpecCode{};
  shared_ptr<string> licenseSpecName{};
  shared_ptr<string> licenseSpecType{};
  shared_ptr<long> memoryLimit{};
  shared_ptr<string> proposal{};
  shared_ptr<string> status{};
  shared_ptr<string> unActivateAllDuration{};

  GetLicenseResponseBodyData() {}

  explicit GetLicenseResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (activateRecord) {
      vector<boost::any> temp1;
      for(auto item1:*activateRecord){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ActivateRecord"] = boost::any(temp1);
    }
    if (activateTime) {
      res["ActivateTime"] = boost::any(*activateTime);
    }
    if (adaptiveMachine) {
      res["AdaptiveMachine"] = boost::any(*adaptiveMachine);
    }
    if (allDuration) {
      res["AllDuration"] = boost::any(*allDuration);
    }
    if (applicableSpecs) {
      res["ApplicableSpecs"] = boost::any(*applicableSpecs);
    }
    if (buyTime) {
      res["BuyTime"] = boost::any(*buyTime);
    }
    if (cpuLimit) {
      res["CpuLimit"] = boost::any(*cpuLimit);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (effectTime) {
      res["EffectTime"] = boost::any(*effectTime);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (fingerprint) {
      res["Fingerprint"] = boost::any(*fingerprint);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (licenseCode) {
      res["LicenseCode"] = boost::any(*licenseCode);
    }
    if (licenseSpecCode) {
      res["LicenseSpecCode"] = boost::any(*licenseSpecCode);
    }
    if (licenseSpecName) {
      res["LicenseSpecName"] = boost::any(*licenseSpecName);
    }
    if (licenseSpecType) {
      res["LicenseSpecType"] = boost::any(*licenseSpecType);
    }
    if (memoryLimit) {
      res["MemoryLimit"] = boost::any(*memoryLimit);
    }
    if (proposal) {
      res["Proposal"] = boost::any(*proposal);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (unActivateAllDuration) {
      res["UnActivateAllDuration"] = boost::any(*unActivateAllDuration);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActivateRecord") != m.end() && !m["ActivateRecord"].empty()) {
      if (typeid(vector<boost::any>) == m["ActivateRecord"].type()) {
        vector<GetLicenseResponseBodyDataActivateRecord> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ActivateRecord"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetLicenseResponseBodyDataActivateRecord model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        activateRecord = make_shared<vector<GetLicenseResponseBodyDataActivateRecord>>(expect1);
      }
    }
    if (m.find("ActivateTime") != m.end() && !m["ActivateTime"].empty()) {
      activateTime = make_shared<string>(boost::any_cast<string>(m["ActivateTime"]));
    }
    if (m.find("AdaptiveMachine") != m.end() && !m["AdaptiveMachine"].empty()) {
      adaptiveMachine = make_shared<string>(boost::any_cast<string>(m["AdaptiveMachine"]));
    }
    if (m.find("AllDuration") != m.end() && !m["AllDuration"].empty()) {
      allDuration = make_shared<string>(boost::any_cast<string>(m["AllDuration"]));
    }
    if (m.find("ApplicableSpecs") != m.end() && !m["ApplicableSpecs"].empty()) {
      applicableSpecs = make_shared<string>(boost::any_cast<string>(m["ApplicableSpecs"]));
    }
    if (m.find("BuyTime") != m.end() && !m["BuyTime"].empty()) {
      buyTime = make_shared<string>(boost::any_cast<string>(m["BuyTime"]));
    }
    if (m.find("CpuLimit") != m.end() && !m["CpuLimit"].empty()) {
      cpuLimit = make_shared<long>(boost::any_cast<long>(m["CpuLimit"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<string>(boost::any_cast<string>(m["Duration"]));
    }
    if (m.find("EffectTime") != m.end() && !m["EffectTime"].empty()) {
      effectTime = make_shared<string>(boost::any_cast<string>(m["EffectTime"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("Fingerprint") != m.end() && !m["Fingerprint"].empty()) {
      fingerprint = make_shared<string>(boost::any_cast<string>(m["Fingerprint"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("LicenseCode") != m.end() && !m["LicenseCode"].empty()) {
      licenseCode = make_shared<string>(boost::any_cast<string>(m["LicenseCode"]));
    }
    if (m.find("LicenseSpecCode") != m.end() && !m["LicenseSpecCode"].empty()) {
      licenseSpecCode = make_shared<string>(boost::any_cast<string>(m["LicenseSpecCode"]));
    }
    if (m.find("LicenseSpecName") != m.end() && !m["LicenseSpecName"].empty()) {
      licenseSpecName = make_shared<string>(boost::any_cast<string>(m["LicenseSpecName"]));
    }
    if (m.find("LicenseSpecType") != m.end() && !m["LicenseSpecType"].empty()) {
      licenseSpecType = make_shared<string>(boost::any_cast<string>(m["LicenseSpecType"]));
    }
    if (m.find("MemoryLimit") != m.end() && !m["MemoryLimit"].empty()) {
      memoryLimit = make_shared<long>(boost::any_cast<long>(m["MemoryLimit"]));
    }
    if (m.find("Proposal") != m.end() && !m["Proposal"].empty()) {
      proposal = make_shared<string>(boost::any_cast<string>(m["Proposal"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UnActivateAllDuration") != m.end() && !m["UnActivateAllDuration"].empty()) {
      unActivateAllDuration = make_shared<string>(boost::any_cast<string>(m["UnActivateAllDuration"]));
    }
  }


  virtual ~GetLicenseResponseBodyData() = default;
};
class GetLicenseResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<GetLicenseResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  GetLicenseResponseBody() {}

  explicit GetLicenseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetLicenseResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetLicenseResponseBodyData>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~GetLicenseResponseBody() = default;
};
class GetLicenseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetLicenseResponseBody> body{};

  GetLicenseResponse() {}

  explicit GetLicenseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetLicenseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetLicenseResponseBody>(model1);
      }
    }
  }


  virtual ~GetLicenseResponse() = default;
};
class ListLicensesRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> queryStr{};

  ListLicensesRequest() {}

  explicit ListLicensesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (queryStr) {
      res["QueryStr"] = boost::any(*queryStr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("QueryStr") != m.end() && !m["QueryStr"].empty()) {
      queryStr = make_shared<string>(boost::any_cast<string>(m["QueryStr"]));
    }
  }


  virtual ~ListLicensesRequest() = default;
};
class ListLicensesResponseBodyLicenseList : public Darabonba::Model {
public:
  shared_ptr<string> activateTime{};
  shared_ptr<long> adaptiveMachine{};
  shared_ptr<string> allDuration{};
  shared_ptr<string> buyTime{};
  shared_ptr<long> cpuLimit{};
  shared_ptr<string> description{};
  shared_ptr<string> duration{};
  shared_ptr<string> effectTime{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> id{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> licenseSpecCode{};
  shared_ptr<string> licenseSpecName{};
  shared_ptr<string> licenseSpecType{};
  shared_ptr<long> memoryLimit{};
  shared_ptr<string> status{};
  shared_ptr<string> unActivateAllDuration{};

  ListLicensesResponseBodyLicenseList() {}

  explicit ListLicensesResponseBodyLicenseList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (activateTime) {
      res["ActivateTime"] = boost::any(*activateTime);
    }
    if (adaptiveMachine) {
      res["AdaptiveMachine"] = boost::any(*adaptiveMachine);
    }
    if (allDuration) {
      res["AllDuration"] = boost::any(*allDuration);
    }
    if (buyTime) {
      res["BuyTime"] = boost::any(*buyTime);
    }
    if (cpuLimit) {
      res["CpuLimit"] = boost::any(*cpuLimit);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (effectTime) {
      res["EffectTime"] = boost::any(*effectTime);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (licenseSpecCode) {
      res["LicenseSpecCode"] = boost::any(*licenseSpecCode);
    }
    if (licenseSpecName) {
      res["LicenseSpecName"] = boost::any(*licenseSpecName);
    }
    if (licenseSpecType) {
      res["LicenseSpecType"] = boost::any(*licenseSpecType);
    }
    if (memoryLimit) {
      res["MemoryLimit"] = boost::any(*memoryLimit);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (unActivateAllDuration) {
      res["UnActivateAllDuration"] = boost::any(*unActivateAllDuration);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActivateTime") != m.end() && !m["ActivateTime"].empty()) {
      activateTime = make_shared<string>(boost::any_cast<string>(m["ActivateTime"]));
    }
    if (m.find("AdaptiveMachine") != m.end() && !m["AdaptiveMachine"].empty()) {
      adaptiveMachine = make_shared<long>(boost::any_cast<long>(m["AdaptiveMachine"]));
    }
    if (m.find("AllDuration") != m.end() && !m["AllDuration"].empty()) {
      allDuration = make_shared<string>(boost::any_cast<string>(m["AllDuration"]));
    }
    if (m.find("BuyTime") != m.end() && !m["BuyTime"].empty()) {
      buyTime = make_shared<string>(boost::any_cast<string>(m["BuyTime"]));
    }
    if (m.find("CpuLimit") != m.end() && !m["CpuLimit"].empty()) {
      cpuLimit = make_shared<long>(boost::any_cast<long>(m["CpuLimit"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<string>(boost::any_cast<string>(m["Duration"]));
    }
    if (m.find("EffectTime") != m.end() && !m["EffectTime"].empty()) {
      effectTime = make_shared<string>(boost::any_cast<string>(m["EffectTime"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("LicenseSpecCode") != m.end() && !m["LicenseSpecCode"].empty()) {
      licenseSpecCode = make_shared<string>(boost::any_cast<string>(m["LicenseSpecCode"]));
    }
    if (m.find("LicenseSpecName") != m.end() && !m["LicenseSpecName"].empty()) {
      licenseSpecName = make_shared<string>(boost::any_cast<string>(m["LicenseSpecName"]));
    }
    if (m.find("LicenseSpecType") != m.end() && !m["LicenseSpecType"].empty()) {
      licenseSpecType = make_shared<string>(boost::any_cast<string>(m["LicenseSpecType"]));
    }
    if (m.find("MemoryLimit") != m.end() && !m["MemoryLimit"].empty()) {
      memoryLimit = make_shared<long>(boost::any_cast<long>(m["MemoryLimit"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UnActivateAllDuration") != m.end() && !m["UnActivateAllDuration"].empty()) {
      unActivateAllDuration = make_shared<string>(boost::any_cast<string>(m["UnActivateAllDuration"]));
    }
  }


  virtual ~ListLicensesResponseBodyLicenseList() = default;
};
class ListLicensesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<vector<ListLicensesResponseBodyLicenseList>> licenseList{};
  shared_ptr<string> message{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};
  shared_ptr<string> totalPage{};
  shared_ptr<string> totalPageCount{};

  ListLicensesResponseBody() {}

  explicit ListLicensesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (licenseList) {
      vector<boost::any> temp1;
      for(auto item1:*licenseList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LicenseList"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (totalPage) {
      res["TotalPage"] = boost::any(*totalPage);
    }
    if (totalPageCount) {
      res["TotalPageCount"] = boost::any(*totalPageCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("LicenseList") != m.end() && !m["LicenseList"].empty()) {
      if (typeid(vector<boost::any>) == m["LicenseList"].type()) {
        vector<ListLicensesResponseBodyLicenseList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LicenseList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListLicensesResponseBodyLicenseList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        licenseList = make_shared<vector<ListLicensesResponseBodyLicenseList>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("TotalPage") != m.end() && !m["TotalPage"].empty()) {
      totalPage = make_shared<string>(boost::any_cast<string>(m["TotalPage"]));
    }
    if (m.find("TotalPageCount") != m.end() && !m["TotalPageCount"].empty()) {
      totalPageCount = make_shared<string>(boost::any_cast<string>(m["TotalPageCount"]));
    }
  }


  virtual ~ListLicensesResponseBody() = default;
};
class ListLicensesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListLicensesResponseBody> body{};

  ListLicensesResponse() {}

  explicit ListLicensesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListLicensesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListLicensesResponseBody>(model1);
      }
    }
  }


  virtual ~ListLicensesResponse() = default;
};
class ListUserResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> commodityCode{};

  ListUserResourcesRequest() {}

  explicit ListUserResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
  }


  virtual ~ListUserResourcesRequest() = default;
};
class ListUserResourcesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> chargeType{};
  shared_ptr<string> commodityCode{};
  shared_ptr<string> endDate{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> region{};
  shared_ptr<string> startDate{};
  shared_ptr<string> status{};
  shared_ptr<string> statusMsg{};

  ListUserResourcesResponseBodyData() {}

  explicit ListUserResourcesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chargeType) {
      res["chargeType"] = boost::any(*chargeType);
    }
    if (commodityCode) {
      res["commodityCode"] = boost::any(*commodityCode);
    }
    if (endDate) {
      res["endDate"] = boost::any(*endDate);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (region) {
      res["region"] = boost::any(*region);
    }
    if (startDate) {
      res["startDate"] = boost::any(*startDate);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (statusMsg) {
      res["statusMsg"] = boost::any(*statusMsg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("chargeType") != m.end() && !m["chargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["chargeType"]));
    }
    if (m.find("commodityCode") != m.end() && !m["commodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["commodityCode"]));
    }
    if (m.find("endDate") != m.end() && !m["endDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["endDate"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
    if (m.find("startDate") != m.end() && !m["startDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["startDate"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("statusMsg") != m.end() && !m["statusMsg"].empty()) {
      statusMsg = make_shared<string>(boost::any_cast<string>(m["statusMsg"]));
    }
  }


  virtual ~ListUserResourcesResponseBodyData() = default;
};
class ListUserResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<vector<ListUserResourcesResponseBodyData>> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  ListUserResourcesResponseBody() {}

  explicit ListUserResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListUserResourcesResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUserResourcesResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListUserResourcesResponseBodyData>>(expect1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~ListUserResourcesResponseBody() = default;
};
class ListUserResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListUserResourcesResponseBody> body{};

  ListUserResourcesResponse() {}

  explicit ListUserResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListUserResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListUserResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~ListUserResourcesResponse() = default;
};
class UpdateLicenseDescriptionRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> instanceId{};

  UpdateLicenseDescriptionRequest() {}

  explicit UpdateLicenseDescriptionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~UpdateLicenseDescriptionRequest() = default;
};
class UpdateLicenseDescriptionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  UpdateLicenseDescriptionResponseBody() {}

  explicit UpdateLicenseDescriptionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~UpdateLicenseDescriptionResponseBody() = default;
};
class UpdateLicenseDescriptionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateLicenseDescriptionResponseBody> body{};

  UpdateLicenseDescriptionResponse() {}

  explicit UpdateLicenseDescriptionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateLicenseDescriptionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateLicenseDescriptionResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateLicenseDescriptionResponse() = default;
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
  ActivateLicenseResponse activateLicenseWithOptions(shared_ptr<ActivateLicenseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ActivateLicenseResponse activateLicense(shared_ptr<ActivateLicenseRequest> request);
  GetLicenseResponse getLicenseWithOptions(shared_ptr<GetLicenseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLicenseResponse getLicense(shared_ptr<GetLicenseRequest> request);
  ListLicensesResponse listLicensesWithOptions(shared_ptr<ListLicensesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListLicensesResponse listLicenses(shared_ptr<ListLicensesRequest> request);
  ListUserResourcesResponse listUserResourcesWithOptions(shared_ptr<ListUserResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListUserResourcesResponse listUserResources(shared_ptr<ListUserResourcesRequest> request);
  UpdateLicenseDescriptionResponse updateLicenseDescriptionWithOptions(shared_ptr<UpdateLicenseDescriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateLicenseDescriptionResponse updateLicenseDescription(shared_ptr<UpdateLicenseDescriptionRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Brain-industrial20200920

#endif
