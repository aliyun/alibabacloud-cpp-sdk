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
  UpdateInstanceNameResponse updateInstanceNameWithOptions(shared_ptr<UpdateInstanceNameRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateInstanceNameResponse updateInstanceName(shared_ptr<UpdateInstanceNameRequest> request);
  UpgradeVersionResponse upgradeVersionWithOptions(shared_ptr<UpgradeVersionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpgradeVersionResponse upgradeVersion(shared_ptr<UpgradeVersionRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Starrocks20221019

#endif
