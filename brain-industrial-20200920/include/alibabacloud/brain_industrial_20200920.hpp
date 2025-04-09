// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_BRAIN-INDUSTRIAL20200920_H_
#define ALIBABACLOUD_BRAIN-INDUSTRIAL20200920_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
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
class AicsOpenApiInvokeRequest : public Darabonba::Model {
public:
  shared_ptr<string> nodeId{};
  shared_ptr<map<string, boost::any>> param{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> type{};

  AicsOpenApiInvokeRequest() {}

  explicit AicsOpenApiInvokeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (param) {
      res["Param"] = boost::any(*param);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("Param") != m.end() && !m["Param"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Param"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      param = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~AicsOpenApiInvokeRequest() = default;
};
class AicsOpenApiInvokeShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> nodeId{};
  shared_ptr<string> paramShrink{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> type{};

  AicsOpenApiInvokeShrinkRequest() {}

  explicit AicsOpenApiInvokeShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (paramShrink) {
      res["Param"] = boost::any(*paramShrink);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("Param") != m.end() && !m["Param"].empty()) {
      paramShrink = make_shared<string>(boost::any_cast<string>(m["Param"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~AicsOpenApiInvokeShrinkRequest() = default;
};
class AicsOpenApiInvokeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<boost::any> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  AicsOpenApiInvokeResponseBody() {}

  explicit AicsOpenApiInvokeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<boost::any>(boost::any_cast<boost::any>(m["Data"]));
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


  virtual ~AicsOpenApiInvokeResponseBody() = default;
};
class AicsOpenApiInvokeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AicsOpenApiInvokeResponseBody> body{};

  AicsOpenApiInvokeResponse() {}

  explicit AicsOpenApiInvokeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AicsOpenApiInvokeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AicsOpenApiInvokeResponseBody>(model1);
      }
    }
  }


  virtual ~AicsOpenApiInvokeResponse() = default;
};
class CreateEssOptJobRequestElecPrice : public Darabonba::Model {
public:
  shared_ptr<string> dataTime{};
  shared_ptr<string> price{};

  CreateEssOptJobRequestElecPrice() {}

  explicit CreateEssOptJobRequestElecPrice(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataTime) {
      res["DataTime"] = boost::any(*dataTime);
    }
    if (price) {
      res["Price"] = boost::any(*price);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataTime") != m.end() && !m["DataTime"].empty()) {
      dataTime = make_shared<string>(boost::any_cast<string>(m["DataTime"]));
    }
    if (m.find("Price") != m.end() && !m["Price"].empty()) {
      price = make_shared<string>(boost::any_cast<string>(m["Price"]));
    }
  }


  virtual ~CreateEssOptJobRequestElecPrice() = default;
};
class CreateEssOptJobRequestGenPrice : public Darabonba::Model {
public:
  shared_ptr<string> dataTime{};
  shared_ptr<string> price{};

  CreateEssOptJobRequestGenPrice() {}

  explicit CreateEssOptJobRequestGenPrice(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataTime) {
      res["DataTime"] = boost::any(*dataTime);
    }
    if (price) {
      res["Price"] = boost::any(*price);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataTime") != m.end() && !m["DataTime"].empty()) {
      dataTime = make_shared<string>(boost::any_cast<string>(m["DataTime"]));
    }
    if (m.find("Price") != m.end() && !m["Price"].empty()) {
      price = make_shared<string>(boost::any_cast<string>(m["Price"]));
    }
  }


  virtual ~CreateEssOptJobRequestGenPrice() = default;
};
class CreateEssOptJobRequestLocation : public Darabonba::Model {
public:
  shared_ptr<double> altitude{};
  shared_ptr<double> latitude{};
  shared_ptr<double> longitude{};

  CreateEssOptJobRequestLocation() {}

  explicit CreateEssOptJobRequestLocation(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (altitude) {
      res["Altitude"] = boost::any(*altitude);
    }
    if (latitude) {
      res["Latitude"] = boost::any(*latitude);
    }
    if (longitude) {
      res["Longitude"] = boost::any(*longitude);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Altitude") != m.end() && !m["Altitude"].empty()) {
      altitude = make_shared<double>(boost::any_cast<double>(m["Altitude"]));
    }
    if (m.find("Latitude") != m.end() && !m["Latitude"].empty()) {
      latitude = make_shared<double>(boost::any_cast<double>(m["Latitude"]));
    }
    if (m.find("Longitude") != m.end() && !m["Longitude"].empty()) {
      longitude = make_shared<double>(boost::any_cast<double>(m["Longitude"]));
    }
  }


  virtual ~CreateEssOptJobRequestLocation() = default;
};
class CreateEssOptJobRequestSystemData : public Darabonba::Model {
public:
  shared_ptr<vector<map<string, boost::any>>> historyData{};
  shared_ptr<string> systemId{};
  shared_ptr<map<string, boost::any>> systemParams{};
  shared_ptr<string> systemType{};

  CreateEssOptJobRequestSystemData() {}

  explicit CreateEssOptJobRequestSystemData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (historyData) {
      res["HistoryData"] = boost::any(*historyData);
    }
    if (systemId) {
      res["SystemId"] = boost::any(*systemId);
    }
    if (systemParams) {
      res["SystemParams"] = boost::any(*systemParams);
    }
    if (systemType) {
      res["SystemType"] = boost::any(*systemType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HistoryData") != m.end() && !m["HistoryData"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["HistoryData"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["HistoryData"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      historyData = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("SystemId") != m.end() && !m["SystemId"].empty()) {
      systemId = make_shared<string>(boost::any_cast<string>(m["SystemId"]));
    }
    if (m.find("SystemParams") != m.end() && !m["SystemParams"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["SystemParams"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      systemParams = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("SystemType") != m.end() && !m["SystemType"].empty()) {
      systemType = make_shared<string>(boost::any_cast<string>(m["SystemType"]));
    }
  }


  virtual ~CreateEssOptJobRequestSystemData() = default;
};
class CreateEssOptJobRequest : public Darabonba::Model {
public:
  shared_ptr<long> duration{};
  shared_ptr<vector<CreateEssOptJobRequestElecPrice>> elecPrice{};
  shared_ptr<string> freq{};
  shared_ptr<vector<CreateEssOptJobRequestGenPrice>> genPrice{};
  shared_ptr<CreateEssOptJobRequestLocation> location{};
  shared_ptr<string> modelVersion{};
  shared_ptr<string> runDate{};
  shared_ptr<vector<CreateEssOptJobRequestSystemData>> systemData{};
  shared_ptr<string> timeZone{};
  shared_ptr<string> topoType{};

  CreateEssOptJobRequest() {}

  explicit CreateEssOptJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (elecPrice) {
      vector<boost::any> temp1;
      for(auto item1:*elecPrice){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ElecPrice"] = boost::any(temp1);
    }
    if (freq) {
      res["Freq"] = boost::any(*freq);
    }
    if (genPrice) {
      vector<boost::any> temp1;
      for(auto item1:*genPrice){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["GenPrice"] = boost::any(temp1);
    }
    if (location) {
      res["Location"] = location ? boost::any(location->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (modelVersion) {
      res["ModelVersion"] = boost::any(*modelVersion);
    }
    if (runDate) {
      res["RunDate"] = boost::any(*runDate);
    }
    if (systemData) {
      vector<boost::any> temp1;
      for(auto item1:*systemData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SystemData"] = boost::any(temp1);
    }
    if (timeZone) {
      res["TimeZone"] = boost::any(*timeZone);
    }
    if (topoType) {
      res["TopoType"] = boost::any(*topoType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("ElecPrice") != m.end() && !m["ElecPrice"].empty()) {
      if (typeid(vector<boost::any>) == m["ElecPrice"].type()) {
        vector<CreateEssOptJobRequestElecPrice> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ElecPrice"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateEssOptJobRequestElecPrice model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        elecPrice = make_shared<vector<CreateEssOptJobRequestElecPrice>>(expect1);
      }
    }
    if (m.find("Freq") != m.end() && !m["Freq"].empty()) {
      freq = make_shared<string>(boost::any_cast<string>(m["Freq"]));
    }
    if (m.find("GenPrice") != m.end() && !m["GenPrice"].empty()) {
      if (typeid(vector<boost::any>) == m["GenPrice"].type()) {
        vector<CreateEssOptJobRequestGenPrice> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["GenPrice"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateEssOptJobRequestGenPrice model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        genPrice = make_shared<vector<CreateEssOptJobRequestGenPrice>>(expect1);
      }
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      if (typeid(map<string, boost::any>) == m["Location"].type()) {
        CreateEssOptJobRequestLocation model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Location"]));
        location = make_shared<CreateEssOptJobRequestLocation>(model1);
      }
    }
    if (m.find("ModelVersion") != m.end() && !m["ModelVersion"].empty()) {
      modelVersion = make_shared<string>(boost::any_cast<string>(m["ModelVersion"]));
    }
    if (m.find("RunDate") != m.end() && !m["RunDate"].empty()) {
      runDate = make_shared<string>(boost::any_cast<string>(m["RunDate"]));
    }
    if (m.find("SystemData") != m.end() && !m["SystemData"].empty()) {
      if (typeid(vector<boost::any>) == m["SystemData"].type()) {
        vector<CreateEssOptJobRequestSystemData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SystemData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateEssOptJobRequestSystemData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        systemData = make_shared<vector<CreateEssOptJobRequestSystemData>>(expect1);
      }
    }
    if (m.find("TimeZone") != m.end() && !m["TimeZone"].empty()) {
      timeZone = make_shared<string>(boost::any_cast<string>(m["TimeZone"]));
    }
    if (m.find("TopoType") != m.end() && !m["TopoType"].empty()) {
      topoType = make_shared<string>(boost::any_cast<string>(m["TopoType"]));
    }
  }


  virtual ~CreateEssOptJobRequest() = default;
};
class CreateEssOptJobShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> duration{};
  shared_ptr<string> elecPriceShrink{};
  shared_ptr<string> freq{};
  shared_ptr<string> genPriceShrink{};
  shared_ptr<string> locationShrink{};
  shared_ptr<string> modelVersion{};
  shared_ptr<string> runDate{};
  shared_ptr<string> systemDataShrink{};
  shared_ptr<string> timeZone{};
  shared_ptr<string> topoType{};

  CreateEssOptJobShrinkRequest() {}

  explicit CreateEssOptJobShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (elecPriceShrink) {
      res["ElecPrice"] = boost::any(*elecPriceShrink);
    }
    if (freq) {
      res["Freq"] = boost::any(*freq);
    }
    if (genPriceShrink) {
      res["GenPrice"] = boost::any(*genPriceShrink);
    }
    if (locationShrink) {
      res["Location"] = boost::any(*locationShrink);
    }
    if (modelVersion) {
      res["ModelVersion"] = boost::any(*modelVersion);
    }
    if (runDate) {
      res["RunDate"] = boost::any(*runDate);
    }
    if (systemDataShrink) {
      res["SystemData"] = boost::any(*systemDataShrink);
    }
    if (timeZone) {
      res["TimeZone"] = boost::any(*timeZone);
    }
    if (topoType) {
      res["TopoType"] = boost::any(*topoType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("ElecPrice") != m.end() && !m["ElecPrice"].empty()) {
      elecPriceShrink = make_shared<string>(boost::any_cast<string>(m["ElecPrice"]));
    }
    if (m.find("Freq") != m.end() && !m["Freq"].empty()) {
      freq = make_shared<string>(boost::any_cast<string>(m["Freq"]));
    }
    if (m.find("GenPrice") != m.end() && !m["GenPrice"].empty()) {
      genPriceShrink = make_shared<string>(boost::any_cast<string>(m["GenPrice"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      locationShrink = make_shared<string>(boost::any_cast<string>(m["Location"]));
    }
    if (m.find("ModelVersion") != m.end() && !m["ModelVersion"].empty()) {
      modelVersion = make_shared<string>(boost::any_cast<string>(m["ModelVersion"]));
    }
    if (m.find("RunDate") != m.end() && !m["RunDate"].empty()) {
      runDate = make_shared<string>(boost::any_cast<string>(m["RunDate"]));
    }
    if (m.find("SystemData") != m.end() && !m["SystemData"].empty()) {
      systemDataShrink = make_shared<string>(boost::any_cast<string>(m["SystemData"]));
    }
    if (m.find("TimeZone") != m.end() && !m["TimeZone"].empty()) {
      timeZone = make_shared<string>(boost::any_cast<string>(m["TimeZone"]));
    }
    if (m.find("TopoType") != m.end() && !m["TopoType"].empty()) {
      topoType = make_shared<string>(boost::any_cast<string>(m["TopoType"]));
    }
  }


  virtual ~CreateEssOptJobShrinkRequest() = default;
};
class CreateEssOptJobResponseBodyDataResponse : public Darabonba::Model {
public:
  shared_ptr<boost::any> debugInfo{};
  shared_ptr<string> jobType{};
  shared_ptr<boost::any> result{};

  CreateEssOptJobResponseBodyDataResponse() {}

  explicit CreateEssOptJobResponseBodyDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (debugInfo) {
      res["DebugInfo"] = boost::any(*debugInfo);
    }
    if (jobType) {
      res["JobType"] = boost::any(*jobType);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DebugInfo") != m.end() && !m["DebugInfo"].empty()) {
      debugInfo = make_shared<boost::any>(boost::any_cast<boost::any>(m["DebugInfo"]));
    }
    if (m.find("JobType") != m.end() && !m["JobType"].empty()) {
      jobType = make_shared<string>(boost::any_cast<string>(m["JobType"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<boost::any>(boost::any_cast<boost::any>(m["Result"]));
    }
  }


  virtual ~CreateEssOptJobResponseBodyDataResponse() = default;
};
class CreateEssOptJobResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<bool> completed{};
  shared_ptr<string> createTime{};
  shared_ptr<string> error{};
  shared_ptr<string> jobId{};
  shared_ptr<long> progress{};
  shared_ptr<CreateEssOptJobResponseBodyDataResponse> response{};
  shared_ptr<string> status{};

  CreateEssOptJobResponseBodyData() {}

  explicit CreateEssOptJobResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (completed) {
      res["Completed"] = boost::any(*completed);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (error) {
      res["Error"] = boost::any(*error);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (response) {
      res["Response"] = response ? boost::any(response->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Completed") != m.end() && !m["Completed"].empty()) {
      completed = make_shared<bool>(boost::any_cast<bool>(m["Completed"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Error") != m.end() && !m["Error"].empty()) {
      error = make_shared<string>(boost::any_cast<string>(m["Error"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<long>(boost::any_cast<long>(m["Progress"]));
    }
    if (m.find("Response") != m.end() && !m["Response"].empty()) {
      if (typeid(map<string, boost::any>) == m["Response"].type()) {
        CreateEssOptJobResponseBodyDataResponse model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Response"]));
        response = make_shared<CreateEssOptJobResponseBodyDataResponse>(model1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~CreateEssOptJobResponseBodyData() = default;
};
class CreateEssOptJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateEssOptJobResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  CreateEssOptJobResponseBody() {}

  explicit CreateEssOptJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateEssOptJobResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateEssOptJobResponseBodyData>(model1);
      }
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


  virtual ~CreateEssOptJobResponseBody() = default;
};
class CreateEssOptJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateEssOptJobResponseBody> body{};

  CreateEssOptJobResponse() {}

  explicit CreateEssOptJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateEssOptJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateEssOptJobResponseBody>(model1);
      }
    }
  }


  virtual ~CreateEssOptJobResponse() = default;
};
class CreateLoadForecastJobRequestHistoryData : public Darabonba::Model {
public:
  shared_ptr<string> runTime{};
  shared_ptr<double> value{};

  CreateLoadForecastJobRequestHistoryData() {}

  explicit CreateLoadForecastJobRequestHistoryData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (runTime) {
      res["RunTime"] = boost::any(*runTime);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RunTime") != m.end() && !m["RunTime"].empty()) {
      runTime = make_shared<string>(boost::any_cast<string>(m["RunTime"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<double>(boost::any_cast<double>(m["Value"]));
    }
  }


  virtual ~CreateLoadForecastJobRequestHistoryData() = default;
};
class CreateLoadForecastJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceType{};
  shared_ptr<long> duration{};
  shared_ptr<string> freq{};
  shared_ptr<vector<CreateLoadForecastJobRequestHistoryData>> historyData{};
  shared_ptr<string> modelVersion{};
  shared_ptr<string> runDate{};
  shared_ptr<string> systemType{};
  shared_ptr<string> timeZone{};

  CreateLoadForecastJobRequest() {}

  explicit CreateLoadForecastJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceType) {
      res["DeviceType"] = boost::any(*deviceType);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (freq) {
      res["Freq"] = boost::any(*freq);
    }
    if (historyData) {
      vector<boost::any> temp1;
      for(auto item1:*historyData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HistoryData"] = boost::any(temp1);
    }
    if (modelVersion) {
      res["ModelVersion"] = boost::any(*modelVersion);
    }
    if (runDate) {
      res["RunDate"] = boost::any(*runDate);
    }
    if (systemType) {
      res["SystemType"] = boost::any(*systemType);
    }
    if (timeZone) {
      res["TimeZone"] = boost::any(*timeZone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceType") != m.end() && !m["DeviceType"].empty()) {
      deviceType = make_shared<string>(boost::any_cast<string>(m["DeviceType"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("Freq") != m.end() && !m["Freq"].empty()) {
      freq = make_shared<string>(boost::any_cast<string>(m["Freq"]));
    }
    if (m.find("HistoryData") != m.end() && !m["HistoryData"].empty()) {
      if (typeid(vector<boost::any>) == m["HistoryData"].type()) {
        vector<CreateLoadForecastJobRequestHistoryData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HistoryData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateLoadForecastJobRequestHistoryData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        historyData = make_shared<vector<CreateLoadForecastJobRequestHistoryData>>(expect1);
      }
    }
    if (m.find("ModelVersion") != m.end() && !m["ModelVersion"].empty()) {
      modelVersion = make_shared<string>(boost::any_cast<string>(m["ModelVersion"]));
    }
    if (m.find("RunDate") != m.end() && !m["RunDate"].empty()) {
      runDate = make_shared<string>(boost::any_cast<string>(m["RunDate"]));
    }
    if (m.find("SystemType") != m.end() && !m["SystemType"].empty()) {
      systemType = make_shared<string>(boost::any_cast<string>(m["SystemType"]));
    }
    if (m.find("TimeZone") != m.end() && !m["TimeZone"].empty()) {
      timeZone = make_shared<string>(boost::any_cast<string>(m["TimeZone"]));
    }
  }


  virtual ~CreateLoadForecastJobRequest() = default;
};
class CreateLoadForecastJobShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceType{};
  shared_ptr<long> duration{};
  shared_ptr<string> freq{};
  shared_ptr<string> historyDataShrink{};
  shared_ptr<string> modelVersion{};
  shared_ptr<string> runDate{};
  shared_ptr<string> systemType{};
  shared_ptr<string> timeZone{};

  CreateLoadForecastJobShrinkRequest() {}

  explicit CreateLoadForecastJobShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceType) {
      res["DeviceType"] = boost::any(*deviceType);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (freq) {
      res["Freq"] = boost::any(*freq);
    }
    if (historyDataShrink) {
      res["HistoryData"] = boost::any(*historyDataShrink);
    }
    if (modelVersion) {
      res["ModelVersion"] = boost::any(*modelVersion);
    }
    if (runDate) {
      res["RunDate"] = boost::any(*runDate);
    }
    if (systemType) {
      res["SystemType"] = boost::any(*systemType);
    }
    if (timeZone) {
      res["TimeZone"] = boost::any(*timeZone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceType") != m.end() && !m["DeviceType"].empty()) {
      deviceType = make_shared<string>(boost::any_cast<string>(m["DeviceType"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("Freq") != m.end() && !m["Freq"].empty()) {
      freq = make_shared<string>(boost::any_cast<string>(m["Freq"]));
    }
    if (m.find("HistoryData") != m.end() && !m["HistoryData"].empty()) {
      historyDataShrink = make_shared<string>(boost::any_cast<string>(m["HistoryData"]));
    }
    if (m.find("ModelVersion") != m.end() && !m["ModelVersion"].empty()) {
      modelVersion = make_shared<string>(boost::any_cast<string>(m["ModelVersion"]));
    }
    if (m.find("RunDate") != m.end() && !m["RunDate"].empty()) {
      runDate = make_shared<string>(boost::any_cast<string>(m["RunDate"]));
    }
    if (m.find("SystemType") != m.end() && !m["SystemType"].empty()) {
      systemType = make_shared<string>(boost::any_cast<string>(m["SystemType"]));
    }
    if (m.find("TimeZone") != m.end() && !m["TimeZone"].empty()) {
      timeZone = make_shared<string>(boost::any_cast<string>(m["TimeZone"]));
    }
  }


  virtual ~CreateLoadForecastJobShrinkRequest() = default;
};
class CreateLoadForecastJobResponseBodyDataResponse : public Darabonba::Model {
public:
  shared_ptr<boost::any> debugInfo{};
  shared_ptr<string> jobType{};
  shared_ptr<boost::any> result{};

  CreateLoadForecastJobResponseBodyDataResponse() {}

  explicit CreateLoadForecastJobResponseBodyDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (debugInfo) {
      res["DebugInfo"] = boost::any(*debugInfo);
    }
    if (jobType) {
      res["JobType"] = boost::any(*jobType);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DebugInfo") != m.end() && !m["DebugInfo"].empty()) {
      debugInfo = make_shared<boost::any>(boost::any_cast<boost::any>(m["DebugInfo"]));
    }
    if (m.find("JobType") != m.end() && !m["JobType"].empty()) {
      jobType = make_shared<string>(boost::any_cast<string>(m["JobType"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<boost::any>(boost::any_cast<boost::any>(m["Result"]));
    }
  }


  virtual ~CreateLoadForecastJobResponseBodyDataResponse() = default;
};
class CreateLoadForecastJobResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<bool> completed{};
  shared_ptr<string> createTime{};
  shared_ptr<string> error{};
  shared_ptr<string> jobId{};
  shared_ptr<long> progress{};
  shared_ptr<CreateLoadForecastJobResponseBodyDataResponse> response{};
  shared_ptr<string> status{};

  CreateLoadForecastJobResponseBodyData() {}

  explicit CreateLoadForecastJobResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (completed) {
      res["Completed"] = boost::any(*completed);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (error) {
      res["Error"] = boost::any(*error);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (response) {
      res["Response"] = response ? boost::any(response->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Completed") != m.end() && !m["Completed"].empty()) {
      completed = make_shared<bool>(boost::any_cast<bool>(m["Completed"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Error") != m.end() && !m["Error"].empty()) {
      error = make_shared<string>(boost::any_cast<string>(m["Error"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<long>(boost::any_cast<long>(m["Progress"]));
    }
    if (m.find("Response") != m.end() && !m["Response"].empty()) {
      if (typeid(map<string, boost::any>) == m["Response"].type()) {
        CreateLoadForecastJobResponseBodyDataResponse model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Response"]));
        response = make_shared<CreateLoadForecastJobResponseBodyDataResponse>(model1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~CreateLoadForecastJobResponseBodyData() = default;
};
class CreateLoadForecastJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateLoadForecastJobResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  CreateLoadForecastJobResponseBody() {}

  explicit CreateLoadForecastJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateLoadForecastJobResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateLoadForecastJobResponseBodyData>(model1);
      }
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


  virtual ~CreateLoadForecastJobResponseBody() = default;
};
class CreateLoadForecastJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateLoadForecastJobResponseBody> body{};

  CreateLoadForecastJobResponse() {}

  explicit CreateLoadForecastJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateLoadForecastJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateLoadForecastJobResponseBody>(model1);
      }
    }
  }


  virtual ~CreateLoadForecastJobResponse() = default;
};
class CreatePowerForecastJobRequestHistoryData : public Darabonba::Model {
public:
  shared_ptr<string> runTime{};
  shared_ptr<double> value{};

  CreatePowerForecastJobRequestHistoryData() {}

  explicit CreatePowerForecastJobRequestHistoryData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (runTime) {
      res["RunTime"] = boost::any(*runTime);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RunTime") != m.end() && !m["RunTime"].empty()) {
      runTime = make_shared<string>(boost::any_cast<string>(m["RunTime"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<double>(boost::any_cast<double>(m["Value"]));
    }
  }


  virtual ~CreatePowerForecastJobRequestHistoryData() = default;
};
class CreatePowerForecastJobRequestLocation : public Darabonba::Model {
public:
  shared_ptr<double> altitude{};
  shared_ptr<double> latitude{};
  shared_ptr<double> longitude{};

  CreatePowerForecastJobRequestLocation() {}

  explicit CreatePowerForecastJobRequestLocation(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (altitude) {
      res["Altitude"] = boost::any(*altitude);
    }
    if (latitude) {
      res["Latitude"] = boost::any(*latitude);
    }
    if (longitude) {
      res["Longitude"] = boost::any(*longitude);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Altitude") != m.end() && !m["Altitude"].empty()) {
      altitude = make_shared<double>(boost::any_cast<double>(m["Altitude"]));
    }
    if (m.find("Latitude") != m.end() && !m["Latitude"].empty()) {
      latitude = make_shared<double>(boost::any_cast<double>(m["Latitude"]));
    }
    if (m.find("Longitude") != m.end() && !m["Longitude"].empty()) {
      longitude = make_shared<double>(boost::any_cast<double>(m["Longitude"]));
    }
  }


  virtual ~CreatePowerForecastJobRequestLocation() = default;
};
class CreatePowerForecastJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceType{};
  shared_ptr<long> duration{};
  shared_ptr<string> freq{};
  shared_ptr<vector<CreatePowerForecastJobRequestHistoryData>> historyData{};
  shared_ptr<CreatePowerForecastJobRequestLocation> location{};
  shared_ptr<string> modelVersion{};
  shared_ptr<string> runDate{};
  shared_ptr<string> systemType{};
  shared_ptr<string> timeZone{};

  CreatePowerForecastJobRequest() {}

  explicit CreatePowerForecastJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceType) {
      res["DeviceType"] = boost::any(*deviceType);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (freq) {
      res["Freq"] = boost::any(*freq);
    }
    if (historyData) {
      vector<boost::any> temp1;
      for(auto item1:*historyData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HistoryData"] = boost::any(temp1);
    }
    if (location) {
      res["Location"] = location ? boost::any(location->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (modelVersion) {
      res["ModelVersion"] = boost::any(*modelVersion);
    }
    if (runDate) {
      res["RunDate"] = boost::any(*runDate);
    }
    if (systemType) {
      res["SystemType"] = boost::any(*systemType);
    }
    if (timeZone) {
      res["TimeZone"] = boost::any(*timeZone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceType") != m.end() && !m["DeviceType"].empty()) {
      deviceType = make_shared<string>(boost::any_cast<string>(m["DeviceType"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("Freq") != m.end() && !m["Freq"].empty()) {
      freq = make_shared<string>(boost::any_cast<string>(m["Freq"]));
    }
    if (m.find("HistoryData") != m.end() && !m["HistoryData"].empty()) {
      if (typeid(vector<boost::any>) == m["HistoryData"].type()) {
        vector<CreatePowerForecastJobRequestHistoryData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HistoryData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreatePowerForecastJobRequestHistoryData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        historyData = make_shared<vector<CreatePowerForecastJobRequestHistoryData>>(expect1);
      }
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      if (typeid(map<string, boost::any>) == m["Location"].type()) {
        CreatePowerForecastJobRequestLocation model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Location"]));
        location = make_shared<CreatePowerForecastJobRequestLocation>(model1);
      }
    }
    if (m.find("ModelVersion") != m.end() && !m["ModelVersion"].empty()) {
      modelVersion = make_shared<string>(boost::any_cast<string>(m["ModelVersion"]));
    }
    if (m.find("RunDate") != m.end() && !m["RunDate"].empty()) {
      runDate = make_shared<string>(boost::any_cast<string>(m["RunDate"]));
    }
    if (m.find("SystemType") != m.end() && !m["SystemType"].empty()) {
      systemType = make_shared<string>(boost::any_cast<string>(m["SystemType"]));
    }
    if (m.find("TimeZone") != m.end() && !m["TimeZone"].empty()) {
      timeZone = make_shared<string>(boost::any_cast<string>(m["TimeZone"]));
    }
  }


  virtual ~CreatePowerForecastJobRequest() = default;
};
class CreatePowerForecastJobShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceType{};
  shared_ptr<long> duration{};
  shared_ptr<string> freq{};
  shared_ptr<string> historyDataShrink{};
  shared_ptr<string> locationShrink{};
  shared_ptr<string> modelVersion{};
  shared_ptr<string> runDate{};
  shared_ptr<string> systemType{};
  shared_ptr<string> timeZone{};

  CreatePowerForecastJobShrinkRequest() {}

  explicit CreatePowerForecastJobShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceType) {
      res["DeviceType"] = boost::any(*deviceType);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (freq) {
      res["Freq"] = boost::any(*freq);
    }
    if (historyDataShrink) {
      res["HistoryData"] = boost::any(*historyDataShrink);
    }
    if (locationShrink) {
      res["Location"] = boost::any(*locationShrink);
    }
    if (modelVersion) {
      res["ModelVersion"] = boost::any(*modelVersion);
    }
    if (runDate) {
      res["RunDate"] = boost::any(*runDate);
    }
    if (systemType) {
      res["SystemType"] = boost::any(*systemType);
    }
    if (timeZone) {
      res["TimeZone"] = boost::any(*timeZone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceType") != m.end() && !m["DeviceType"].empty()) {
      deviceType = make_shared<string>(boost::any_cast<string>(m["DeviceType"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("Freq") != m.end() && !m["Freq"].empty()) {
      freq = make_shared<string>(boost::any_cast<string>(m["Freq"]));
    }
    if (m.find("HistoryData") != m.end() && !m["HistoryData"].empty()) {
      historyDataShrink = make_shared<string>(boost::any_cast<string>(m["HistoryData"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      locationShrink = make_shared<string>(boost::any_cast<string>(m["Location"]));
    }
    if (m.find("ModelVersion") != m.end() && !m["ModelVersion"].empty()) {
      modelVersion = make_shared<string>(boost::any_cast<string>(m["ModelVersion"]));
    }
    if (m.find("RunDate") != m.end() && !m["RunDate"].empty()) {
      runDate = make_shared<string>(boost::any_cast<string>(m["RunDate"]));
    }
    if (m.find("SystemType") != m.end() && !m["SystemType"].empty()) {
      systemType = make_shared<string>(boost::any_cast<string>(m["SystemType"]));
    }
    if (m.find("TimeZone") != m.end() && !m["TimeZone"].empty()) {
      timeZone = make_shared<string>(boost::any_cast<string>(m["TimeZone"]));
    }
  }


  virtual ~CreatePowerForecastJobShrinkRequest() = default;
};
class CreatePowerForecastJobResponseBodyDataResponse : public Darabonba::Model {
public:
  shared_ptr<boost::any> debugInfo{};
  shared_ptr<string> jobType{};
  shared_ptr<boost::any> result{};

  CreatePowerForecastJobResponseBodyDataResponse() {}

  explicit CreatePowerForecastJobResponseBodyDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (debugInfo) {
      res["DebugInfo"] = boost::any(*debugInfo);
    }
    if (jobType) {
      res["JobType"] = boost::any(*jobType);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DebugInfo") != m.end() && !m["DebugInfo"].empty()) {
      debugInfo = make_shared<boost::any>(boost::any_cast<boost::any>(m["DebugInfo"]));
    }
    if (m.find("JobType") != m.end() && !m["JobType"].empty()) {
      jobType = make_shared<string>(boost::any_cast<string>(m["JobType"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<boost::any>(boost::any_cast<boost::any>(m["Result"]));
    }
  }


  virtual ~CreatePowerForecastJobResponseBodyDataResponse() = default;
};
class CreatePowerForecastJobResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<bool> completed{};
  shared_ptr<string> createTime{};
  shared_ptr<string> error{};
  shared_ptr<string> jobId{};
  shared_ptr<long> progress{};
  shared_ptr<CreatePowerForecastJobResponseBodyDataResponse> response{};
  shared_ptr<string> status{};

  CreatePowerForecastJobResponseBodyData() {}

  explicit CreatePowerForecastJobResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (completed) {
      res["Completed"] = boost::any(*completed);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (error) {
      res["Error"] = boost::any(*error);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (response) {
      res["Response"] = response ? boost::any(response->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Completed") != m.end() && !m["Completed"].empty()) {
      completed = make_shared<bool>(boost::any_cast<bool>(m["Completed"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Error") != m.end() && !m["Error"].empty()) {
      error = make_shared<string>(boost::any_cast<string>(m["Error"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<long>(boost::any_cast<long>(m["Progress"]));
    }
    if (m.find("Response") != m.end() && !m["Response"].empty()) {
      if (typeid(map<string, boost::any>) == m["Response"].type()) {
        CreatePowerForecastJobResponseBodyDataResponse model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Response"]));
        response = make_shared<CreatePowerForecastJobResponseBodyDataResponse>(model1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~CreatePowerForecastJobResponseBodyData() = default;
};
class CreatePowerForecastJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreatePowerForecastJobResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  CreatePowerForecastJobResponseBody() {}

  explicit CreatePowerForecastJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreatePowerForecastJobResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreatePowerForecastJobResponseBodyData>(model1);
      }
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


  virtual ~CreatePowerForecastJobResponseBody() = default;
};
class CreatePowerForecastJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreatePowerForecastJobResponseBody> body{};

  CreatePowerForecastJobResponse() {}

  explicit CreatePowerForecastJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreatePowerForecastJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreatePowerForecastJobResponseBody>(model1);
      }
    }
  }


  virtual ~CreatePowerForecastJobResponse() = default;
};
class GetAivppAlgoJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};

  GetAivppAlgoJobRequest() {}

  explicit GetAivppAlgoJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
  }


  virtual ~GetAivppAlgoJobRequest() = default;
};
class GetAivppAlgoJobResponseBodyDataResponse : public Darabonba::Model {
public:
  shared_ptr<boost::any> debugInfo{};
  shared_ptr<string> jobType{};
  shared_ptr<boost::any> result{};

  GetAivppAlgoJobResponseBodyDataResponse() {}

  explicit GetAivppAlgoJobResponseBodyDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (debugInfo) {
      res["DebugInfo"] = boost::any(*debugInfo);
    }
    if (jobType) {
      res["JobType"] = boost::any(*jobType);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DebugInfo") != m.end() && !m["DebugInfo"].empty()) {
      debugInfo = make_shared<boost::any>(boost::any_cast<boost::any>(m["DebugInfo"]));
    }
    if (m.find("JobType") != m.end() && !m["JobType"].empty()) {
      jobType = make_shared<string>(boost::any_cast<string>(m["JobType"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<boost::any>(boost::any_cast<boost::any>(m["Result"]));
    }
  }


  virtual ~GetAivppAlgoJobResponseBodyDataResponse() = default;
};
class GetAivppAlgoJobResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<bool> completed{};
  shared_ptr<string> createTime{};
  shared_ptr<string> error{};
  shared_ptr<string> jobId{};
  shared_ptr<long> progress{};
  shared_ptr<GetAivppAlgoJobResponseBodyDataResponse> response{};
  shared_ptr<string> status{};

  GetAivppAlgoJobResponseBodyData() {}

  explicit GetAivppAlgoJobResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (completed) {
      res["Completed"] = boost::any(*completed);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (error) {
      res["Error"] = boost::any(*error);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (response) {
      res["Response"] = response ? boost::any(response->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Completed") != m.end() && !m["Completed"].empty()) {
      completed = make_shared<bool>(boost::any_cast<bool>(m["Completed"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Error") != m.end() && !m["Error"].empty()) {
      error = make_shared<string>(boost::any_cast<string>(m["Error"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<long>(boost::any_cast<long>(m["Progress"]));
    }
    if (m.find("Response") != m.end() && !m["Response"].empty()) {
      if (typeid(map<string, boost::any>) == m["Response"].type()) {
        GetAivppAlgoJobResponseBodyDataResponse model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Response"]));
        response = make_shared<GetAivppAlgoJobResponseBodyDataResponse>(model1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetAivppAlgoJobResponseBodyData() = default;
};
class GetAivppAlgoJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetAivppAlgoJobResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  GetAivppAlgoJobResponseBody() {}

  explicit GetAivppAlgoJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetAivppAlgoJobResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetAivppAlgoJobResponseBodyData>(model1);
      }
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


  virtual ~GetAivppAlgoJobResponseBody() = default;
};
class GetAivppAlgoJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAivppAlgoJobResponseBody> body{};

  GetAivppAlgoJobResponse() {}

  explicit GetAivppAlgoJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAivppAlgoJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAivppAlgoJobResponseBody>(model1);
      }
    }
  }


  virtual ~GetAivppAlgoJobResponse() = default;
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
class ListAivppResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> maxResults{};

  ListAivppResourcesRequest() {}

  explicit ListAivppResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
  }


  virtual ~ListAivppResourcesRequest() = default;
};
class ListAivppResourcesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> detail{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> leftQuantity{};
  shared_ptr<string> orderId{};
  shared_ptr<string> quantity{};
  shared_ptr<string> specification{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};
  shared_ptr<string> userId{};

  ListAivppResourcesResponseBodyData() {}

  explicit ListAivppResourcesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detail) {
      res["Detail"] = boost::any(*detail);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (leftQuantity) {
      res["LeftQuantity"] = boost::any(*leftQuantity);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (quantity) {
      res["Quantity"] = boost::any(*quantity);
    }
    if (specification) {
      res["Specification"] = boost::any(*specification);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      detail = make_shared<string>(boost::any_cast<string>(m["Detail"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("LeftQuantity") != m.end() && !m["LeftQuantity"].empty()) {
      leftQuantity = make_shared<string>(boost::any_cast<string>(m["LeftQuantity"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("Quantity") != m.end() && !m["Quantity"].empty()) {
      quantity = make_shared<string>(boost::any_cast<string>(m["Quantity"]));
    }
    if (m.find("Specification") != m.end() && !m["Specification"].empty()) {
      specification = make_shared<string>(boost::any_cast<string>(m["Specification"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~ListAivppResourcesResponseBodyData() = default;
};
class ListAivppResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<ListAivppResourcesResponseBodyData>> data{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> message{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};
  shared_ptr<long> totalCount{};

  ListAivppResourcesResponseBody() {}

  explicit ListAivppResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListAivppResourcesResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAivppResourcesResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListAivppResourcesResponseBodyData>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListAivppResourcesResponseBody() = default;
};
class ListAivppResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAivppResourcesResponseBody> body{};

  ListAivppResourcesResponse() {}

  explicit ListAivppResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAivppResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAivppResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~ListAivppResourcesResponse() = default;
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
  AicsOpenApiInvokeResponse aicsOpenApiInvokeWithOptions(shared_ptr<AicsOpenApiInvokeRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AicsOpenApiInvokeResponse aicsOpenApiInvoke(shared_ptr<AicsOpenApiInvokeRequest> request);
  CreateEssOptJobResponse createEssOptJobWithOptions(shared_ptr<CreateEssOptJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateEssOptJobResponse createEssOptJob(shared_ptr<CreateEssOptJobRequest> request);
  CreateLoadForecastJobResponse createLoadForecastJobWithOptions(shared_ptr<CreateLoadForecastJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateLoadForecastJobResponse createLoadForecastJob(shared_ptr<CreateLoadForecastJobRequest> request);
  CreatePowerForecastJobResponse createPowerForecastJobWithOptions(shared_ptr<CreatePowerForecastJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePowerForecastJobResponse createPowerForecastJob(shared_ptr<CreatePowerForecastJobRequest> request);
  GetAivppAlgoJobResponse getAivppAlgoJobWithOptions(shared_ptr<GetAivppAlgoJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAivppAlgoJobResponse getAivppAlgoJob(shared_ptr<GetAivppAlgoJobRequest> request);
  GetLicenseResponse getLicenseWithOptions(shared_ptr<GetLicenseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLicenseResponse getLicense(shared_ptr<GetLicenseRequest> request);
  ListAivppResourcesResponse listAivppResourcesWithOptions(shared_ptr<ListAivppResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAivppResourcesResponse listAivppResources(shared_ptr<ListAivppResourcesRequest> request);
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
