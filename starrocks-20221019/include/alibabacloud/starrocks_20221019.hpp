// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_STARROCKS20221019_H_
#define ALIBABACLOUD_STARROCKS20221019_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Starrocks20221019 {
class InstanceConfigDto : public Darabonba::Model {
public:
  shared_ptr<string> configKey{};
  shared_ptr<string> configType{};
  shared_ptr<string> configValue{};
  shared_ptr<string> nodeGroupId{};

  InstanceConfigDto() {}

  explicit InstanceConfigDto(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configKey) {
      res["configKey"] = boost::any(*configKey);
    }
    if (configType) {
      res["configType"] = boost::any(*configType);
    }
    if (configValue) {
      res["configValue"] = boost::any(*configValue);
    }
    if (nodeGroupId) {
      res["nodeGroupId"] = boost::any(*nodeGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("configKey") != m.end() && !m["configKey"].empty()) {
      configKey = make_shared<string>(boost::any_cast<string>(m["configKey"]));
    }
    if (m.find("configType") != m.end() && !m["configType"].empty()) {
      configType = make_shared<string>(boost::any_cast<string>(m["configType"]));
    }
    if (m.find("configValue") != m.end() && !m["configValue"].empty()) {
      configValue = make_shared<string>(boost::any_cast<string>(m["configValue"]));
    }
    if (m.find("nodeGroupId") != m.end() && !m["nodeGroupId"].empty()) {
      nodeGroupId = make_shared<string>(boost::any_cast<string>(m["nodeGroupId"]));
    }
  }


  virtual ~InstanceConfigDto() = default;
};
class ResourceSpec : public Darabonba::Model {
public:
  shared_ptr<long> cu{};
  shared_ptr<long> diskNumber{};
  shared_ptr<string> localStorageInstanceType{};
  shared_ptr<long> nodeNumber{};
  shared_ptr<string> specType{};
  shared_ptr<string> storagePerformanceLevel{};
  shared_ptr<long> storageSize{};

  ResourceSpec() {}

  explicit ResourceSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cu) {
      res["cu"] = boost::any(*cu);
    }
    if (diskNumber) {
      res["diskNumber"] = boost::any(*diskNumber);
    }
    if (localStorageInstanceType) {
      res["localStorageInstanceType"] = boost::any(*localStorageInstanceType);
    }
    if (nodeNumber) {
      res["nodeNumber"] = boost::any(*nodeNumber);
    }
    if (specType) {
      res["specType"] = boost::any(*specType);
    }
    if (storagePerformanceLevel) {
      res["storagePerformanceLevel"] = boost::any(*storagePerformanceLevel);
    }
    if (storageSize) {
      res["storageSize"] = boost::any(*storageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cu") != m.end() && !m["cu"].empty()) {
      cu = make_shared<long>(boost::any_cast<long>(m["cu"]));
    }
    if (m.find("diskNumber") != m.end() && !m["diskNumber"].empty()) {
      diskNumber = make_shared<long>(boost::any_cast<long>(m["diskNumber"]));
    }
    if (m.find("localStorageInstanceType") != m.end() && !m["localStorageInstanceType"].empty()) {
      localStorageInstanceType = make_shared<string>(boost::any_cast<string>(m["localStorageInstanceType"]));
    }
    if (m.find("nodeNumber") != m.end() && !m["nodeNumber"].empty()) {
      nodeNumber = make_shared<long>(boost::any_cast<long>(m["nodeNumber"]));
    }
    if (m.find("specType") != m.end() && !m["specType"].empty()) {
      specType = make_shared<string>(boost::any_cast<string>(m["specType"]));
    }
    if (m.find("storagePerformanceLevel") != m.end() && !m["storagePerformanceLevel"].empty()) {
      storagePerformanceLevel = make_shared<string>(boost::any_cast<string>(m["storagePerformanceLevel"]));
    }
    if (m.find("storageSize") != m.end() && !m["storageSize"].empty()) {
      storageSize = make_shared<long>(boost::any_cast<long>(m["storageSize"]));
    }
  }


  virtual ~ResourceSpec() = default;
};
class ChangeResourceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> newResourceGroupId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceType{};

  ChangeResourceGroupRequest() {}

  explicit ChangeResourceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (newResourceGroupId) {
      res["NewResourceGroupId"] = boost::any(*newResourceGroupId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NewResourceGroupId") != m.end() && !m["NewResourceGroupId"].empty()) {
      newResourceGroupId = make_shared<string>(boost::any_cast<string>(m["NewResourceGroupId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~ChangeResourceGroupRequest() = default;
};
class ChangeResourceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<bool> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ChangeResourceGroupResponseBody() {}

  explicit ChangeResourceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ChangeResourceGroupResponseBody() = default;
};
class ChangeResourceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ChangeResourceGroupResponseBody> body{};

  ChangeResourceGroupResponse() {}

  explicit ChangeResourceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ChangeResourceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ChangeResourceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~ChangeResourceGroupResponse() = default;
};
class CreateInstanceV1RequestBackendNodeGroups : public Darabonba::Model {
public:
  shared_ptr<long> cu{};
  shared_ptr<long> diskNumber{};
  shared_ptr<string> localStorageInstanceType{};
  shared_ptr<long> residentNodeNumber{};
  shared_ptr<string> specType{};
  shared_ptr<string> storagePerformanceLevel{};
  shared_ptr<long> storageSize{};
  shared_ptr<string> zoneId{};

  CreateInstanceV1RequestBackendNodeGroups() {}

  explicit CreateInstanceV1RequestBackendNodeGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cu) {
      res["cu"] = boost::any(*cu);
    }
    if (diskNumber) {
      res["diskNumber"] = boost::any(*diskNumber);
    }
    if (localStorageInstanceType) {
      res["localStorageInstanceType"] = boost::any(*localStorageInstanceType);
    }
    if (residentNodeNumber) {
      res["residentNodeNumber"] = boost::any(*residentNodeNumber);
    }
    if (specType) {
      res["specType"] = boost::any(*specType);
    }
    if (storagePerformanceLevel) {
      res["storagePerformanceLevel"] = boost::any(*storagePerformanceLevel);
    }
    if (storageSize) {
      res["storageSize"] = boost::any(*storageSize);
    }
    if (zoneId) {
      res["zoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cu") != m.end() && !m["cu"].empty()) {
      cu = make_shared<long>(boost::any_cast<long>(m["cu"]));
    }
    if (m.find("diskNumber") != m.end() && !m["diskNumber"].empty()) {
      diskNumber = make_shared<long>(boost::any_cast<long>(m["diskNumber"]));
    }
    if (m.find("localStorageInstanceType") != m.end() && !m["localStorageInstanceType"].empty()) {
      localStorageInstanceType = make_shared<string>(boost::any_cast<string>(m["localStorageInstanceType"]));
    }
    if (m.find("residentNodeNumber") != m.end() && !m["residentNodeNumber"].empty()) {
      residentNodeNumber = make_shared<long>(boost::any_cast<long>(m["residentNodeNumber"]));
    }
    if (m.find("specType") != m.end() && !m["specType"].empty()) {
      specType = make_shared<string>(boost::any_cast<string>(m["specType"]));
    }
    if (m.find("storagePerformanceLevel") != m.end() && !m["storagePerformanceLevel"].empty()) {
      storagePerformanceLevel = make_shared<string>(boost::any_cast<string>(m["storagePerformanceLevel"]));
    }
    if (m.find("storageSize") != m.end() && !m["storageSize"].empty()) {
      storageSize = make_shared<long>(boost::any_cast<long>(m["storageSize"]));
    }
    if (m.find("zoneId") != m.end() && !m["zoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["zoneId"]));
    }
  }


  virtual ~CreateInstanceV1RequestBackendNodeGroups() = default;
};
class CreateInstanceV1RequestFrontendNodeGroups : public Darabonba::Model {
public:
  shared_ptr<long> cu{};
  shared_ptr<long> diskNumber{};
  shared_ptr<string> localStorageInstanceType{};
  shared_ptr<long> residentNodeNumber{};
  shared_ptr<string> specType{};
  shared_ptr<string> storagePerformanceLevel{};
  shared_ptr<long> storageSize{};
  shared_ptr<string> zoneId{};

  CreateInstanceV1RequestFrontendNodeGroups() {}

  explicit CreateInstanceV1RequestFrontendNodeGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cu) {
      res["cu"] = boost::any(*cu);
    }
    if (diskNumber) {
      res["diskNumber"] = boost::any(*diskNumber);
    }
    if (localStorageInstanceType) {
      res["localStorageInstanceType"] = boost::any(*localStorageInstanceType);
    }
    if (residentNodeNumber) {
      res["residentNodeNumber"] = boost::any(*residentNodeNumber);
    }
    if (specType) {
      res["specType"] = boost::any(*specType);
    }
    if (storagePerformanceLevel) {
      res["storagePerformanceLevel"] = boost::any(*storagePerformanceLevel);
    }
    if (storageSize) {
      res["storageSize"] = boost::any(*storageSize);
    }
    if (zoneId) {
      res["zoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cu") != m.end() && !m["cu"].empty()) {
      cu = make_shared<long>(boost::any_cast<long>(m["cu"]));
    }
    if (m.find("diskNumber") != m.end() && !m["diskNumber"].empty()) {
      diskNumber = make_shared<long>(boost::any_cast<long>(m["diskNumber"]));
    }
    if (m.find("localStorageInstanceType") != m.end() && !m["localStorageInstanceType"].empty()) {
      localStorageInstanceType = make_shared<string>(boost::any_cast<string>(m["localStorageInstanceType"]));
    }
    if (m.find("residentNodeNumber") != m.end() && !m["residentNodeNumber"].empty()) {
      residentNodeNumber = make_shared<long>(boost::any_cast<long>(m["residentNodeNumber"]));
    }
    if (m.find("specType") != m.end() && !m["specType"].empty()) {
      specType = make_shared<string>(boost::any_cast<string>(m["specType"]));
    }
    if (m.find("storagePerformanceLevel") != m.end() && !m["storagePerformanceLevel"].empty()) {
      storagePerformanceLevel = make_shared<string>(boost::any_cast<string>(m["storagePerformanceLevel"]));
    }
    if (m.find("storageSize") != m.end() && !m["storageSize"].empty()) {
      storageSize = make_shared<long>(boost::any_cast<long>(m["storageSize"]));
    }
    if (m.find("zoneId") != m.end() && !m["zoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["zoneId"]));
    }
  }


  virtual ~CreateInstanceV1RequestFrontendNodeGroups() = default;
};
class CreateInstanceV1RequestObserverNodeGroups : public Darabonba::Model {
public:
  shared_ptr<long> cu{};
  shared_ptr<long> diskNumber{};
  shared_ptr<string> localStorageInstanceType{};
  shared_ptr<long> residentNodeNumber{};
  shared_ptr<string> specType{};
  shared_ptr<string> storagePerformanceLevel{};
  shared_ptr<long> storageSize{};
  shared_ptr<string> zoneId{};

  CreateInstanceV1RequestObserverNodeGroups() {}

  explicit CreateInstanceV1RequestObserverNodeGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cu) {
      res["cu"] = boost::any(*cu);
    }
    if (diskNumber) {
      res["diskNumber"] = boost::any(*diskNumber);
    }
    if (localStorageInstanceType) {
      res["localStorageInstanceType"] = boost::any(*localStorageInstanceType);
    }
    if (residentNodeNumber) {
      res["residentNodeNumber"] = boost::any(*residentNodeNumber);
    }
    if (specType) {
      res["specType"] = boost::any(*specType);
    }
    if (storagePerformanceLevel) {
      res["storagePerformanceLevel"] = boost::any(*storagePerformanceLevel);
    }
    if (storageSize) {
      res["storageSize"] = boost::any(*storageSize);
    }
    if (zoneId) {
      res["zoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cu") != m.end() && !m["cu"].empty()) {
      cu = make_shared<long>(boost::any_cast<long>(m["cu"]));
    }
    if (m.find("diskNumber") != m.end() && !m["diskNumber"].empty()) {
      diskNumber = make_shared<long>(boost::any_cast<long>(m["diskNumber"]));
    }
    if (m.find("localStorageInstanceType") != m.end() && !m["localStorageInstanceType"].empty()) {
      localStorageInstanceType = make_shared<string>(boost::any_cast<string>(m["localStorageInstanceType"]));
    }
    if (m.find("residentNodeNumber") != m.end() && !m["residentNodeNumber"].empty()) {
      residentNodeNumber = make_shared<long>(boost::any_cast<long>(m["residentNodeNumber"]));
    }
    if (m.find("specType") != m.end() && !m["specType"].empty()) {
      specType = make_shared<string>(boost::any_cast<string>(m["specType"]));
    }
    if (m.find("storagePerformanceLevel") != m.end() && !m["storagePerformanceLevel"].empty()) {
      storagePerformanceLevel = make_shared<string>(boost::any_cast<string>(m["storagePerformanceLevel"]));
    }
    if (m.find("storageSize") != m.end() && !m["storageSize"].empty()) {
      storageSize = make_shared<long>(boost::any_cast<long>(m["storageSize"]));
    }
    if (m.find("zoneId") != m.end() && !m["zoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["zoneId"]));
    }
  }


  virtual ~CreateInstanceV1RequestObserverNodeGroups() = default;
};
class CreateInstanceV1RequestTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateInstanceV1RequestTags() {}

  explicit CreateInstanceV1RequestTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateInstanceV1RequestTags() = default;
};
class CreateInstanceV1RequestVSwitches : public Darabonba::Model {
public:
  shared_ptr<string> vswId{};
  shared_ptr<string> zoneId{};

  CreateInstanceV1RequestVSwitches() {}

  explicit CreateInstanceV1RequestVSwitches(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vswId) {
      res["VswId"] = boost::any(*vswId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VswId") != m.end() && !m["VswId"].empty()) {
      vswId = make_shared<string>(boost::any_cast<string>(m["VswId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~CreateInstanceV1RequestVSwitches() = default;
};
class CreateInstanceV1Request : public Darabonba::Model {
public:
  shared_ptr<string> adminPassword{};
  shared_ptr<bool> autoRenew{};
  shared_ptr<vector<CreateInstanceV1RequestBackendNodeGroups>> backendNodeGroups{};
  shared_ptr<string> clientToken{};
  shared_ptr<long> duration{};
  shared_ptr<bool> encrypted{};
  shared_ptr<vector<CreateInstanceV1RequestFrontendNodeGroups>> frontendNodeGroups{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> kmsKeyId{};
  shared_ptr<vector<CreateInstanceV1RequestObserverNodeGroups>> observerNodeGroups{};
  shared_ptr<string> ossAccessingRoleName{};
  shared_ptr<string> packageType{};
  shared_ptr<string> payType{};
  shared_ptr<string> pricingCycle{};
  shared_ptr<string> promotionOptionNo{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> runMode{};
  shared_ptr<vector<CreateInstanceV1RequestTags>> tags{};
  shared_ptr<vector<CreateInstanceV1RequestVSwitches>> vSwitches{};
  shared_ptr<string> version{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> zoneId{};

  CreateInstanceV1Request() {}

  explicit CreateInstanceV1Request(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (adminPassword) {
      res["AdminPassword"] = boost::any(*adminPassword);
    }
    if (autoRenew) {
      res["AutoRenew"] = boost::any(*autoRenew);
    }
    if (backendNodeGroups) {
      vector<boost::any> temp1;
      for(auto item1:*backendNodeGroups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BackendNodeGroups"] = boost::any(temp1);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (encrypted) {
      res["Encrypted"] = boost::any(*encrypted);
    }
    if (frontendNodeGroups) {
      vector<boost::any> temp1;
      for(auto item1:*frontendNodeGroups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FrontendNodeGroups"] = boost::any(temp1);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (kmsKeyId) {
      res["KmsKeyId"] = boost::any(*kmsKeyId);
    }
    if (observerNodeGroups) {
      vector<boost::any> temp1;
      for(auto item1:*observerNodeGroups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ObserverNodeGroups"] = boost::any(temp1);
    }
    if (ossAccessingRoleName) {
      res["OssAccessingRoleName"] = boost::any(*ossAccessingRoleName);
    }
    if (packageType) {
      res["PackageType"] = boost::any(*packageType);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (pricingCycle) {
      res["PricingCycle"] = boost::any(*pricingCycle);
    }
    if (promotionOptionNo) {
      res["PromotionOptionNo"] = boost::any(*promotionOptionNo);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (runMode) {
      res["RunMode"] = boost::any(*runMode);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (vSwitches) {
      vector<boost::any> temp1;
      for(auto item1:*vSwitches){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VSwitches"] = boost::any(temp1);
    }
    if (version) {
      res["Version"] = boost::any(*version);
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
    if (m.find("AdminPassword") != m.end() && !m["AdminPassword"].empty()) {
      adminPassword = make_shared<string>(boost::any_cast<string>(m["AdminPassword"]));
    }
    if (m.find("AutoRenew") != m.end() && !m["AutoRenew"].empty()) {
      autoRenew = make_shared<bool>(boost::any_cast<bool>(m["AutoRenew"]));
    }
    if (m.find("BackendNodeGroups") != m.end() && !m["BackendNodeGroups"].empty()) {
      if (typeid(vector<boost::any>) == m["BackendNodeGroups"].type()) {
        vector<CreateInstanceV1RequestBackendNodeGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BackendNodeGroups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateInstanceV1RequestBackendNodeGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        backendNodeGroups = make_shared<vector<CreateInstanceV1RequestBackendNodeGroups>>(expect1);
      }
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("Encrypted") != m.end() && !m["Encrypted"].empty()) {
      encrypted = make_shared<bool>(boost::any_cast<bool>(m["Encrypted"]));
    }
    if (m.find("FrontendNodeGroups") != m.end() && !m["FrontendNodeGroups"].empty()) {
      if (typeid(vector<boost::any>) == m["FrontendNodeGroups"].type()) {
        vector<CreateInstanceV1RequestFrontendNodeGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FrontendNodeGroups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateInstanceV1RequestFrontendNodeGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        frontendNodeGroups = make_shared<vector<CreateInstanceV1RequestFrontendNodeGroups>>(expect1);
      }
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("KmsKeyId") != m.end() && !m["KmsKeyId"].empty()) {
      kmsKeyId = make_shared<string>(boost::any_cast<string>(m["KmsKeyId"]));
    }
    if (m.find("ObserverNodeGroups") != m.end() && !m["ObserverNodeGroups"].empty()) {
      if (typeid(vector<boost::any>) == m["ObserverNodeGroups"].type()) {
        vector<CreateInstanceV1RequestObserverNodeGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ObserverNodeGroups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateInstanceV1RequestObserverNodeGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        observerNodeGroups = make_shared<vector<CreateInstanceV1RequestObserverNodeGroups>>(expect1);
      }
    }
    if (m.find("OssAccessingRoleName") != m.end() && !m["OssAccessingRoleName"].empty()) {
      ossAccessingRoleName = make_shared<string>(boost::any_cast<string>(m["OssAccessingRoleName"]));
    }
    if (m.find("PackageType") != m.end() && !m["PackageType"].empty()) {
      packageType = make_shared<string>(boost::any_cast<string>(m["PackageType"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("PricingCycle") != m.end() && !m["PricingCycle"].empty()) {
      pricingCycle = make_shared<string>(boost::any_cast<string>(m["PricingCycle"]));
    }
    if (m.find("PromotionOptionNo") != m.end() && !m["PromotionOptionNo"].empty()) {
      promotionOptionNo = make_shared<string>(boost::any_cast<string>(m["PromotionOptionNo"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("RunMode") != m.end() && !m["RunMode"].empty()) {
      runMode = make_shared<string>(boost::any_cast<string>(m["RunMode"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<CreateInstanceV1RequestTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateInstanceV1RequestTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<CreateInstanceV1RequestTags>>(expect1);
      }
    }
    if (m.find("VSwitches") != m.end() && !m["VSwitches"].empty()) {
      if (typeid(vector<boost::any>) == m["VSwitches"].type()) {
        vector<CreateInstanceV1RequestVSwitches> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VSwitches"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateInstanceV1RequestVSwitches model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        vSwitches = make_shared<vector<CreateInstanceV1RequestVSwitches>>(expect1);
      }
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~CreateInstanceV1Request() = default;
};
class CreateInstanceV1ResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> orderId{};

  CreateInstanceV1ResponseBodyData() {}

  explicit CreateInstanceV1ResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
  }


  virtual ~CreateInstanceV1ResponseBodyData() = default;
};
class CreateInstanceV1ResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<CreateInstanceV1ResponseBodyData> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateInstanceV1ResponseBody() {}

  explicit CreateInstanceV1ResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateInstanceV1ResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateInstanceV1ResponseBodyData>(model1);
      }
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateInstanceV1ResponseBody() = default;
};
class CreateInstanceV1Response : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateInstanceV1ResponseBody> body{};

  CreateInstanceV1Response() {}

  explicit CreateInstanceV1Response(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateInstanceV1ResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateInstanceV1ResponseBody>(model1);
      }
    }
  }


  virtual ~CreateInstanceV1Response() = default;
};
class CreateServiceLinkedRoleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<bool> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> total{};

  CreateServiceLinkedRoleResponseBody() {}

  explicit CreateServiceLinkedRoleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~CreateServiceLinkedRoleResponseBody() = default;
};
class CreateServiceLinkedRoleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateServiceLinkedRoleResponseBody> body{};

  CreateServiceLinkedRoleResponse() {}

  explicit CreateServiceLinkedRoleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateServiceLinkedRoleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateServiceLinkedRoleResponseBody>(model1);
      }
    }
  }


  virtual ~CreateServiceLinkedRoleResponse() = default;
};
class DescribeInstancesRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeInstancesRequestTag() {}

  explicit DescribeInstancesRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeInstancesRequestTag() = default;
};
class DescribeInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> instanceStatus{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<DescribeInstancesRequestTag>> tag{};

  DescribeInstancesRequest() {}

  explicit DescribeInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (instanceStatus) {
      res["InstanceStatus"] = boost::any(*instanceStatus);
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
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
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
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("InstanceStatus") != m.end() && !m["InstanceStatus"].empty()) {
      instanceStatus = make_shared<string>(boost::any_cast<string>(m["InstanceStatus"]));
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
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<DescribeInstancesRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInstancesRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<DescribeInstancesRequestTag>>(expect1);
      }
    }
  }


  virtual ~DescribeInstancesRequest() = default;
};
class DescribeInstancesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> instanceStatus{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> tagShrink{};

  DescribeInstancesShrinkRequest() {}

  explicit DescribeInstancesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (instanceStatus) {
      res["InstanceStatus"] = boost::any(*instanceStatus);
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
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (tagShrink) {
      res["Tag"] = boost::any(*tagShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("InstanceStatus") != m.end() && !m["InstanceStatus"].empty()) {
      instanceStatus = make_shared<string>(boost::any_cast<string>(m["InstanceStatus"]));
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
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tagShrink = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
  }


  virtual ~DescribeInstancesShrinkRequest() = default;
};
class DescribeInstancesResponseBodyDataTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeInstancesResponseBodyDataTags() {}

  explicit DescribeInstancesResponseBodyDataTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeInstancesResponseBodyDataTags() = default;
};
class DescribeInstancesResponseBodyDataVSwitches : public Darabonba::Model {
public:
  shared_ptr<bool> primary{};
  shared_ptr<string> vswId{};
  shared_ptr<string> zoneId{};

  DescribeInstancesResponseBodyDataVSwitches() {}

  explicit DescribeInstancesResponseBodyDataVSwitches(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (primary) {
      res["Primary"] = boost::any(*primary);
    }
    if (vswId) {
      res["VswId"] = boost::any(*vswId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Primary") != m.end() && !m["Primary"].empty()) {
      primary = make_shared<bool>(boost::any_cast<bool>(m["Primary"]));
    }
    if (m.find("VswId") != m.end() && !m["VswId"].empty()) {
      vswId = make_shared<string>(boost::any_cast<string>(m["VswId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeInstancesResponseBodyDataVSwitches() = default;
};
class DescribeInstancesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> aclId{};
  shared_ptr<string> architecture{};
  shared_ptr<long> beginTime{};
  shared_ptr<bool> enableAutoMinorVersionUpgrade{};
  shared_ptr<bool> enableSSL{};
  shared_ptr<bool> enabledAuditLoader{};
  shared_ptr<bool> encrypted{};
  shared_ptr<long> expireTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> instanceStatus{};
  shared_ptr<bool> isolateLeader{};
  shared_ptr<string> kmsKeyId{};
  shared_ptr<string> maintainablePeriod{};
  shared_ptr<string> minorVersion{};
  shared_ptr<string> monitorType{};
  shared_ptr<string> ossLocation{};
  shared_ptr<string> packageType{};
  shared_ptr<string> payType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> runMode{};
  shared_ptr<long> runningTime{};
  shared_ptr<bool> securityGroupManaged{};
  shared_ptr<string> sgId{};
  shared_ptr<vector<DescribeInstancesResponseBodyDataTags>> tags{};
  shared_ptr<vector<DescribeInstancesResponseBodyDataVSwitches>> vSwitches{};
  shared_ptr<string> version{};
  shared_ptr<string> vpcId{};

  DescribeInstancesResponseBodyData() {}

  explicit DescribeInstancesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclId) {
      res["AclId"] = boost::any(*aclId);
    }
    if (architecture) {
      res["Architecture"] = boost::any(*architecture);
    }
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (enableAutoMinorVersionUpgrade) {
      res["EnableAutoMinorVersionUpgrade"] = boost::any(*enableAutoMinorVersionUpgrade);
    }
    if (enableSSL) {
      res["EnableSSL"] = boost::any(*enableSSL);
    }
    if (enabledAuditLoader) {
      res["EnabledAuditLoader"] = boost::any(*enabledAuditLoader);
    }
    if (encrypted) {
      res["Encrypted"] = boost::any(*encrypted);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (instanceStatus) {
      res["InstanceStatus"] = boost::any(*instanceStatus);
    }
    if (isolateLeader) {
      res["IsolateLeader"] = boost::any(*isolateLeader);
    }
    if (kmsKeyId) {
      res["KmsKeyId"] = boost::any(*kmsKeyId);
    }
    if (maintainablePeriod) {
      res["MaintainablePeriod"] = boost::any(*maintainablePeriod);
    }
    if (minorVersion) {
      res["MinorVersion"] = boost::any(*minorVersion);
    }
    if (monitorType) {
      res["MonitorType"] = boost::any(*monitorType);
    }
    if (ossLocation) {
      res["OssLocation"] = boost::any(*ossLocation);
    }
    if (packageType) {
      res["PackageType"] = boost::any(*packageType);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (runMode) {
      res["RunMode"] = boost::any(*runMode);
    }
    if (runningTime) {
      res["RunningTime"] = boost::any(*runningTime);
    }
    if (securityGroupManaged) {
      res["SecurityGroupManaged"] = boost::any(*securityGroupManaged);
    }
    if (sgId) {
      res["SgId"] = boost::any(*sgId);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (vSwitches) {
      vector<boost::any> temp1;
      for(auto item1:*vSwitches){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VSwitches"] = boost::any(temp1);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclId") != m.end() && !m["AclId"].empty()) {
      aclId = make_shared<string>(boost::any_cast<string>(m["AclId"]));
    }
    if (m.find("Architecture") != m.end() && !m["Architecture"].empty()) {
      architecture = make_shared<string>(boost::any_cast<string>(m["Architecture"]));
    }
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<long>(boost::any_cast<long>(m["BeginTime"]));
    }
    if (m.find("EnableAutoMinorVersionUpgrade") != m.end() && !m["EnableAutoMinorVersionUpgrade"].empty()) {
      enableAutoMinorVersionUpgrade = make_shared<bool>(boost::any_cast<bool>(m["EnableAutoMinorVersionUpgrade"]));
    }
    if (m.find("EnableSSL") != m.end() && !m["EnableSSL"].empty()) {
      enableSSL = make_shared<bool>(boost::any_cast<bool>(m["EnableSSL"]));
    }
    if (m.find("EnabledAuditLoader") != m.end() && !m["EnabledAuditLoader"].empty()) {
      enabledAuditLoader = make_shared<bool>(boost::any_cast<bool>(m["EnabledAuditLoader"]));
    }
    if (m.find("Encrypted") != m.end() && !m["Encrypted"].empty()) {
      encrypted = make_shared<bool>(boost::any_cast<bool>(m["Encrypted"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<long>(boost::any_cast<long>(m["ExpireTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("InstanceStatus") != m.end() && !m["InstanceStatus"].empty()) {
      instanceStatus = make_shared<string>(boost::any_cast<string>(m["InstanceStatus"]));
    }
    if (m.find("IsolateLeader") != m.end() && !m["IsolateLeader"].empty()) {
      isolateLeader = make_shared<bool>(boost::any_cast<bool>(m["IsolateLeader"]));
    }
    if (m.find("KmsKeyId") != m.end() && !m["KmsKeyId"].empty()) {
      kmsKeyId = make_shared<string>(boost::any_cast<string>(m["KmsKeyId"]));
    }
    if (m.find("MaintainablePeriod") != m.end() && !m["MaintainablePeriod"].empty()) {
      maintainablePeriod = make_shared<string>(boost::any_cast<string>(m["MaintainablePeriod"]));
    }
    if (m.find("MinorVersion") != m.end() && !m["MinorVersion"].empty()) {
      minorVersion = make_shared<string>(boost::any_cast<string>(m["MinorVersion"]));
    }
    if (m.find("MonitorType") != m.end() && !m["MonitorType"].empty()) {
      monitorType = make_shared<string>(boost::any_cast<string>(m["MonitorType"]));
    }
    if (m.find("OssLocation") != m.end() && !m["OssLocation"].empty()) {
      ossLocation = make_shared<string>(boost::any_cast<string>(m["OssLocation"]));
    }
    if (m.find("PackageType") != m.end() && !m["PackageType"].empty()) {
      packageType = make_shared<string>(boost::any_cast<string>(m["PackageType"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("RunMode") != m.end() && !m["RunMode"].empty()) {
      runMode = make_shared<string>(boost::any_cast<string>(m["RunMode"]));
    }
    if (m.find("RunningTime") != m.end() && !m["RunningTime"].empty()) {
      runningTime = make_shared<long>(boost::any_cast<long>(m["RunningTime"]));
    }
    if (m.find("SecurityGroupManaged") != m.end() && !m["SecurityGroupManaged"].empty()) {
      securityGroupManaged = make_shared<bool>(boost::any_cast<bool>(m["SecurityGroupManaged"]));
    }
    if (m.find("SgId") != m.end() && !m["SgId"].empty()) {
      sgId = make_shared<string>(boost::any_cast<string>(m["SgId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<DescribeInstancesResponseBodyDataTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInstancesResponseBodyDataTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<DescribeInstancesResponseBodyDataTags>>(expect1);
      }
    }
    if (m.find("VSwitches") != m.end() && !m["VSwitches"].empty()) {
      if (typeid(vector<boost::any>) == m["VSwitches"].type()) {
        vector<DescribeInstancesResponseBodyDataVSwitches> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VSwitches"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInstancesResponseBodyDataVSwitches model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        vSwitches = make_shared<vector<DescribeInstancesResponseBodyDataVSwitches>>(expect1);
      }
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~DescribeInstancesResponseBodyData() = default;
};
class DescribeInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeInstancesResponseBodyData>> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> total{};

  DescribeInstancesResponseBody() {}

  explicit DescribeInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeInstancesResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInstancesResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeInstancesResponseBodyData>>(expect1);
      }
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
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
class ModifyCuRequest : public Darabonba::Model {
public:
  shared_ptr<bool> fastMode{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> nodeGroupId{};
  shared_ptr<string> promotionOptionNo{};
  shared_ptr<long> target{};

  ModifyCuRequest() {}

  explicit ModifyCuRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fastMode) {
      res["FastMode"] = boost::any(*fastMode);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (nodeGroupId) {
      res["NodeGroupId"] = boost::any(*nodeGroupId);
    }
    if (promotionOptionNo) {
      res["PromotionOptionNo"] = boost::any(*promotionOptionNo);
    }
    if (target) {
      res["Target"] = boost::any(*target);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FastMode") != m.end() && !m["FastMode"].empty()) {
      fastMode = make_shared<bool>(boost::any_cast<bool>(m["FastMode"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NodeGroupId") != m.end() && !m["NodeGroupId"].empty()) {
      nodeGroupId = make_shared<string>(boost::any_cast<string>(m["NodeGroupId"]));
    }
    if (m.find("PromotionOptionNo") != m.end() && !m["PromotionOptionNo"].empty()) {
      promotionOptionNo = make_shared<string>(boost::any_cast<string>(m["PromotionOptionNo"]));
    }
    if (m.find("Target") != m.end() && !m["Target"].empty()) {
      target = make_shared<long>(boost::any_cast<long>(m["Target"]));
    }
  }


  virtual ~ModifyCuRequest() = default;
};
class ModifyCuResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ModifyCuResponseBody() {}

  explicit ModifyCuResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<long>(boost::any_cast<long>(m["Data"]));
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ModifyCuResponseBody() = default;
};
class ModifyCuResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyCuResponseBody> body{};

  ModifyCuResponse() {}

  explicit ModifyCuResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyCuResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyCuResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyCuResponse() = default;
};
class ModifyCuPreCheckRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> nodeGroupId{};
  shared_ptr<long> target{};

  ModifyCuPreCheckRequest() {}

  explicit ModifyCuPreCheckRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (nodeGroupId) {
      res["NodeGroupId"] = boost::any(*nodeGroupId);
    }
    if (target) {
      res["Target"] = boost::any(*target);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NodeGroupId") != m.end() && !m["NodeGroupId"].empty()) {
      nodeGroupId = make_shared<string>(boost::any_cast<string>(m["NodeGroupId"]));
    }
    if (m.find("Target") != m.end() && !m["Target"].empty()) {
      target = make_shared<long>(boost::any_cast<long>(m["Target"]));
    }
  }


  virtual ~ModifyCuPreCheckRequest() = default;
};
class ModifyCuPreCheckResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<bool> allow{};
  shared_ptr<string> reason{};

  ModifyCuPreCheckResponseBodyData() {}

  explicit ModifyCuPreCheckResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allow) {
      res["Allow"] = boost::any(*allow);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Allow") != m.end() && !m["Allow"].empty()) {
      allow = make_shared<bool>(boost::any_cast<bool>(m["Allow"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
  }


  virtual ~ModifyCuPreCheckResponseBodyData() = default;
};
class ModifyCuPreCheckResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<ModifyCuPreCheckResponseBodyData> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ModifyCuPreCheckResponseBody() {}

  explicit ModifyCuPreCheckResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ModifyCuPreCheckResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ModifyCuPreCheckResponseBodyData>(model1);
      }
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ModifyCuPreCheckResponseBody() = default;
};
class ModifyCuPreCheckResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyCuPreCheckResponseBody> body{};

  ModifyCuPreCheckResponse() {}

  explicit ModifyCuPreCheckResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyCuPreCheckResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyCuPreCheckResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyCuPreCheckResponse() = default;
};
class ModifyDiskNumberRequest : public Darabonba::Model {
public:
  shared_ptr<bool> fastMode{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> nodeGroupId{};
  shared_ptr<string> promotionOptionNo{};
  shared_ptr<long> target{};

  ModifyDiskNumberRequest() {}

  explicit ModifyDiskNumberRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fastMode) {
      res["FastMode"] = boost::any(*fastMode);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (nodeGroupId) {
      res["NodeGroupId"] = boost::any(*nodeGroupId);
    }
    if (promotionOptionNo) {
      res["PromotionOptionNo"] = boost::any(*promotionOptionNo);
    }
    if (target) {
      res["Target"] = boost::any(*target);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FastMode") != m.end() && !m["FastMode"].empty()) {
      fastMode = make_shared<bool>(boost::any_cast<bool>(m["FastMode"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NodeGroupId") != m.end() && !m["NodeGroupId"].empty()) {
      nodeGroupId = make_shared<string>(boost::any_cast<string>(m["NodeGroupId"]));
    }
    if (m.find("PromotionOptionNo") != m.end() && !m["PromotionOptionNo"].empty()) {
      promotionOptionNo = make_shared<string>(boost::any_cast<string>(m["PromotionOptionNo"]));
    }
    if (m.find("Target") != m.end() && !m["Target"].empty()) {
      target = make_shared<long>(boost::any_cast<long>(m["Target"]));
    }
  }


  virtual ~ModifyDiskNumberRequest() = default;
};
class ModifyDiskNumberResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ModifyDiskNumberResponseBody() {}

  explicit ModifyDiskNumberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<long>(boost::any_cast<long>(m["Data"]));
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ModifyDiskNumberResponseBody() = default;
};
class ModifyDiskNumberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyDiskNumberResponseBody> body{};

  ModifyDiskNumberResponse() {}

  explicit ModifyDiskNumberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDiskNumberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDiskNumberResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDiskNumberResponse() = default;
};
class ModifyDiskPerformanceLevelRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> nodeGroupId{};
  shared_ptr<string> promotionOptionNo{};
  shared_ptr<string> target{};

  ModifyDiskPerformanceLevelRequest() {}

  explicit ModifyDiskPerformanceLevelRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (nodeGroupId) {
      res["NodeGroupId"] = boost::any(*nodeGroupId);
    }
    if (promotionOptionNo) {
      res["PromotionOptionNo"] = boost::any(*promotionOptionNo);
    }
    if (target) {
      res["Target"] = boost::any(*target);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NodeGroupId") != m.end() && !m["NodeGroupId"].empty()) {
      nodeGroupId = make_shared<string>(boost::any_cast<string>(m["NodeGroupId"]));
    }
    if (m.find("PromotionOptionNo") != m.end() && !m["PromotionOptionNo"].empty()) {
      promotionOptionNo = make_shared<string>(boost::any_cast<string>(m["PromotionOptionNo"]));
    }
    if (m.find("Target") != m.end() && !m["Target"].empty()) {
      target = make_shared<string>(boost::any_cast<string>(m["Target"]));
    }
  }


  virtual ~ModifyDiskPerformanceLevelRequest() = default;
};
class ModifyDiskPerformanceLevelResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ModifyDiskPerformanceLevelResponseBody() {}

  explicit ModifyDiskPerformanceLevelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<long>(boost::any_cast<long>(m["Data"]));
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ModifyDiskPerformanceLevelResponseBody() = default;
};
class ModifyDiskPerformanceLevelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyDiskPerformanceLevelResponseBody> body{};

  ModifyDiskPerformanceLevelResponse() {}

  explicit ModifyDiskPerformanceLevelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDiskPerformanceLevelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDiskPerformanceLevelResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDiskPerformanceLevelResponse() = default;
};
class ModifyDiskSizeRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> nodeGroupId{};
  shared_ptr<string> promotionOptionNo{};
  shared_ptr<long> target{};

  ModifyDiskSizeRequest() {}

  explicit ModifyDiskSizeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (nodeGroupId) {
      res["NodeGroupId"] = boost::any(*nodeGroupId);
    }
    if (promotionOptionNo) {
      res["PromotionOptionNo"] = boost::any(*promotionOptionNo);
    }
    if (target) {
      res["Target"] = boost::any(*target);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NodeGroupId") != m.end() && !m["NodeGroupId"].empty()) {
      nodeGroupId = make_shared<string>(boost::any_cast<string>(m["NodeGroupId"]));
    }
    if (m.find("PromotionOptionNo") != m.end() && !m["PromotionOptionNo"].empty()) {
      promotionOptionNo = make_shared<string>(boost::any_cast<string>(m["PromotionOptionNo"]));
    }
    if (m.find("Target") != m.end() && !m["Target"].empty()) {
      target = make_shared<long>(boost::any_cast<long>(m["Target"]));
    }
  }


  virtual ~ModifyDiskSizeRequest() = default;
};
class ModifyDiskSizeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ModifyDiskSizeResponseBody() {}

  explicit ModifyDiskSizeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<long>(boost::any_cast<long>(m["Data"]));
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ModifyDiskSizeResponseBody() = default;
};
class ModifyDiskSizeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyDiskSizeResponseBody> body{};

  ModifyDiskSizeResponse() {}

  explicit ModifyDiskSizeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDiskSizeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDiskSizeResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDiskSizeResponse() = default;
};
class ModifyNodeNumberRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> nodeGroupId{};
  shared_ptr<string> promotionOptionNo{};
  shared_ptr<long> target{};

  ModifyNodeNumberRequest() {}

  explicit ModifyNodeNumberRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (nodeGroupId) {
      res["NodeGroupId"] = boost::any(*nodeGroupId);
    }
    if (promotionOptionNo) {
      res["PromotionOptionNo"] = boost::any(*promotionOptionNo);
    }
    if (target) {
      res["Target"] = boost::any(*target);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NodeGroupId") != m.end() && !m["NodeGroupId"].empty()) {
      nodeGroupId = make_shared<string>(boost::any_cast<string>(m["NodeGroupId"]));
    }
    if (m.find("PromotionOptionNo") != m.end() && !m["PromotionOptionNo"].empty()) {
      promotionOptionNo = make_shared<string>(boost::any_cast<string>(m["PromotionOptionNo"]));
    }
    if (m.find("Target") != m.end() && !m["Target"].empty()) {
      target = make_shared<long>(boost::any_cast<long>(m["Target"]));
    }
  }


  virtual ~ModifyNodeNumberRequest() = default;
};
class ModifyNodeNumberResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ModifyNodeNumberResponseBody() {}

  explicit ModifyNodeNumberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<long>(boost::any_cast<long>(m["Data"]));
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ModifyNodeNumberResponseBody() = default;
};
class ModifyNodeNumberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyNodeNumberResponseBody> body{};

  ModifyNodeNumberResponse() {}

  explicit ModifyNodeNumberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyNodeNumberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyNodeNumberResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyNodeNumberResponse() = default;
};
class ModifyNodeNumberPreCheckRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> nodeGroupId{};
  shared_ptr<long> target{};

  ModifyNodeNumberPreCheckRequest() {}

  explicit ModifyNodeNumberPreCheckRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (nodeGroupId) {
      res["NodeGroupId"] = boost::any(*nodeGroupId);
    }
    if (target) {
      res["Target"] = boost::any(*target);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NodeGroupId") != m.end() && !m["NodeGroupId"].empty()) {
      nodeGroupId = make_shared<string>(boost::any_cast<string>(m["NodeGroupId"]));
    }
    if (m.find("Target") != m.end() && !m["Target"].empty()) {
      target = make_shared<long>(boost::any_cast<long>(m["Target"]));
    }
  }


  virtual ~ModifyNodeNumberPreCheckRequest() = default;
};
class ModifyNodeNumberPreCheckResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<bool> allow{};
  shared_ptr<string> reason{};

  ModifyNodeNumberPreCheckResponseBodyData() {}

  explicit ModifyNodeNumberPreCheckResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allow) {
      res["Allow"] = boost::any(*allow);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Allow") != m.end() && !m["Allow"].empty()) {
      allow = make_shared<bool>(boost::any_cast<bool>(m["Allow"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
  }


  virtual ~ModifyNodeNumberPreCheckResponseBodyData() = default;
};
class ModifyNodeNumberPreCheckResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<ModifyNodeNumberPreCheckResponseBodyData> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ModifyNodeNumberPreCheckResponseBody() {}

  explicit ModifyNodeNumberPreCheckResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ModifyNodeNumberPreCheckResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ModifyNodeNumberPreCheckResponseBodyData>(model1);
      }
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ModifyNodeNumberPreCheckResponseBody() = default;
};
class ModifyNodeNumberPreCheckResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyNodeNumberPreCheckResponseBody> body{};

  ModifyNodeNumberPreCheckResponse() {}

  explicit ModifyNodeNumberPreCheckResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyNodeNumberPreCheckResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyNodeNumberPreCheckResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyNodeNumberPreCheckResponse() = default;
};
class QueryUpgradableVersionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<bool> minor{};

  QueryUpgradableVersionsRequest() {}

  explicit QueryUpgradableVersionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (minor) {
      res["Minor"] = boost::any(*minor);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Minor") != m.end() && !m["Minor"].empty()) {
      minor = make_shared<bool>(boost::any_cast<bool>(m["Minor"]));
    }
  }


  virtual ~QueryUpgradableVersionsRequest() = default;
};
class QueryUpgradableVersionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<vector<string>> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryUpgradableVersionsResponseBody() {}

  explicit QueryUpgradableVersionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Data"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      data = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryUpgradableVersionsResponseBody() = default;
};
class QueryUpgradableVersionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryUpgradableVersionsResponseBody> body{};

  QueryUpgradableVersionsResponse() {}

  explicit QueryUpgradableVersionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryUpgradableVersionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryUpgradableVersionsResponseBody>(model1);
      }
    }
  }


  virtual ~QueryUpgradableVersionsResponse() = default;
};
class ReleaseInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  ReleaseInstanceRequest() {}

  explicit ReleaseInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~ReleaseInstanceRequest() = default;
};
class ReleaseInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<bool> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ReleaseInstanceResponseBody() {}

  explicit ReleaseInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ReleaseInstanceResponseBody() = default;
};
class ReleaseInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReleaseInstanceResponseBody> body{};

  ReleaseInstanceResponse() {}

  explicit ReleaseInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReleaseInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReleaseInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~ReleaseInstanceResponse() = default;
};
class RestartInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<bool> fastMode{};
  shared_ptr<string> instanceId{};

  RestartInstanceRequest() {}

  explicit RestartInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fastMode) {
      res["FastMode"] = boost::any(*fastMode);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FastMode") != m.end() && !m["FastMode"].empty()) {
      fastMode = make_shared<bool>(boost::any_cast<bool>(m["FastMode"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~RestartInstanceRequest() = default;
};
class RestartInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<bool> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  RestartInstanceResponseBody() {}

  explicit RestartInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~RestartInstanceResponseBody() = default;
};
class RestartInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RestartInstanceResponseBody> body{};

  RestartInstanceResponse() {}

  explicit RestartInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RestartInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RestartInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~RestartInstanceResponse() = default;
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
  shared_ptr<string> regionId{};
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
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
class UnTagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<bool> all{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<string>> tagKey{};

  UnTagResourcesRequest() {}

  explicit UnTagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (all) {
      res["All"] = boost::any(*all);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
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


  virtual ~UnTagResourcesRequest() = default;
};
class UnTagResourcesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<bool> all{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceIdShrink{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> tagKeyShrink{};

  UnTagResourcesShrinkRequest() {}

  explicit UnTagResourcesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (all) {
      res["All"] = boost::any(*all);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceIdShrink) {
      res["ResourceId"] = boost::any(*resourceIdShrink);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tagKeyShrink) {
      res["TagKey"] = boost::any(*tagKeyShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("All") != m.end() && !m["All"].empty()) {
      all = make_shared<bool>(boost::any_cast<bool>(m["All"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceIdShrink = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKeyShrink = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
  }


  virtual ~UnTagResourcesShrinkRequest() = default;
};
class UnTagResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UnTagResourcesResponseBody() {}

  explicit UnTagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UnTagResourcesResponseBody() = default;
};
class UnTagResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UnTagResourcesResponseBody> body{};

  UnTagResourcesResponse() {}

  explicit UnTagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UnTagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UnTagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~UnTagResourcesResponse() = default;
};
class UpdateInstanceNameRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterName{};
  shared_ptr<string> instanceId{};

  UpdateInstanceNameRequest() {}

  explicit UpdateInstanceNameRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~UpdateInstanceNameRequest() = default;
};
class UpdateInstanceNameResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<bool> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateInstanceNameResponseBody() {}

  explicit UpdateInstanceNameResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateInstanceNameResponseBody() = default;
};
class UpdateInstanceNameResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateInstanceNameResponseBody> body{};

  UpdateInstanceNameResponse() {}

  explicit UpdateInstanceNameResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateInstanceNameResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateInstanceNameResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateInstanceNameResponse() = default;
};
class UpgradeVersionRequest : public Darabonba::Model {
public:
  shared_ptr<bool> fastMode{};
  shared_ptr<string> instanceId{};
  shared_ptr<bool> minor{};
  shared_ptr<string> targetVersion{};

  UpgradeVersionRequest() {}

  explicit UpgradeVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fastMode) {
      res["FastMode"] = boost::any(*fastMode);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (minor) {
      res["Minor"] = boost::any(*minor);
    }
    if (targetVersion) {
      res["TargetVersion"] = boost::any(*targetVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FastMode") != m.end() && !m["FastMode"].empty()) {
      fastMode = make_shared<bool>(boost::any_cast<bool>(m["FastMode"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Minor") != m.end() && !m["Minor"].empty()) {
      minor = make_shared<bool>(boost::any_cast<bool>(m["Minor"]));
    }
    if (m.find("TargetVersion") != m.end() && !m["TargetVersion"].empty()) {
      targetVersion = make_shared<string>(boost::any_cast<string>(m["TargetVersion"]));
    }
  }


  virtual ~UpgradeVersionRequest() = default;
};
class UpgradeVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<bool> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpgradeVersionResponseBody() {}

  explicit UpgradeVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpgradeVersionResponseBody() = default;
};
class UpgradeVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpgradeVersionResponseBody> body{};

  UpgradeVersionResponse() {}

  explicit UpgradeVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpgradeVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpgradeVersionResponseBody>(model1);
      }
    }
  }


  virtual ~UpgradeVersionResponse() = default;
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
  ChangeResourceGroupResponse changeResourceGroupWithOptions(shared_ptr<ChangeResourceGroupRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChangeResourceGroupResponse changeResourceGroup(shared_ptr<ChangeResourceGroupRequest> request);
  CreateInstanceV1Response createInstanceV1WithOptions(shared_ptr<CreateInstanceV1Request> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateInstanceV1Response createInstanceV1(shared_ptr<CreateInstanceV1Request> request);
  CreateServiceLinkedRoleResponse createServiceLinkedRoleWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateServiceLinkedRoleResponse createServiceLinkedRole();
  DescribeInstancesResponse describeInstancesWithOptions(shared_ptr<DescribeInstancesRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeInstancesResponse describeInstances(shared_ptr<DescribeInstancesRequest> request);
  ModifyCuResponse modifyCuWithOptions(shared_ptr<ModifyCuRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyCuResponse modifyCu(shared_ptr<ModifyCuRequest> request);
  ModifyCuPreCheckResponse modifyCuPreCheckWithOptions(shared_ptr<ModifyCuPreCheckRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyCuPreCheckResponse modifyCuPreCheck(shared_ptr<ModifyCuPreCheckRequest> request);
  ModifyDiskNumberResponse modifyDiskNumberWithOptions(shared_ptr<ModifyDiskNumberRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDiskNumberResponse modifyDiskNumber(shared_ptr<ModifyDiskNumberRequest> request);
  ModifyDiskPerformanceLevelResponse modifyDiskPerformanceLevelWithOptions(shared_ptr<ModifyDiskPerformanceLevelRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDiskPerformanceLevelResponse modifyDiskPerformanceLevel(shared_ptr<ModifyDiskPerformanceLevelRequest> request);
  ModifyDiskSizeResponse modifyDiskSizeWithOptions(shared_ptr<ModifyDiskSizeRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDiskSizeResponse modifyDiskSize(shared_ptr<ModifyDiskSizeRequest> request);
  ModifyNodeNumberResponse modifyNodeNumberWithOptions(shared_ptr<ModifyNodeNumberRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyNodeNumberResponse modifyNodeNumber(shared_ptr<ModifyNodeNumberRequest> request);
  ModifyNodeNumberPreCheckResponse modifyNodeNumberPreCheckWithOptions(shared_ptr<ModifyNodeNumberPreCheckRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyNodeNumberPreCheckResponse modifyNodeNumberPreCheck(shared_ptr<ModifyNodeNumberPreCheckRequest> request);
  QueryUpgradableVersionsResponse queryUpgradableVersionsWithOptions(shared_ptr<QueryUpgradableVersionsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryUpgradableVersionsResponse queryUpgradableVersions(shared_ptr<QueryUpgradableVersionsRequest> request);
  ReleaseInstanceResponse releaseInstanceWithOptions(shared_ptr<ReleaseInstanceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReleaseInstanceResponse releaseInstance(shared_ptr<ReleaseInstanceRequest> request);
  RestartInstanceResponse restartInstanceWithOptions(shared_ptr<RestartInstanceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RestartInstanceResponse restartInstance(shared_ptr<RestartInstanceRequest> request);
  TagResourcesResponse tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TagResourcesResponse tagResources(shared_ptr<TagResourcesRequest> request);
  UnTagResourcesResponse unTagResourcesWithOptions(shared_ptr<UnTagResourcesRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnTagResourcesResponse unTagResources(shared_ptr<UnTagResourcesRequest> request);
  UpdateInstanceNameResponse updateInstanceNameWithOptions(shared_ptr<UpdateInstanceNameRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateInstanceNameResponse updateInstanceName(shared_ptr<UpdateInstanceNameRequest> request);
  UpgradeVersionResponse upgradeVersionWithOptions(shared_ptr<UpgradeVersionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpgradeVersionResponse upgradeVersion(shared_ptr<UpgradeVersionRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Starrocks20221019

#endif
