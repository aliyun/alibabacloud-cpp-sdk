// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_EDS-AIC20230930_H_
#define ALIBABACLOUD_EDS-AIC20230930_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Eds-aic20230930 {
class DataImageRegionDistributeMapValue : public Darabonba::Model {
public:
  shared_ptr<string> distributeStatus{};
  shared_ptr<string> progress{};

  DataImageRegionDistributeMapValue() {}

  explicit DataImageRegionDistributeMapValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (distributeStatus) {
      res["DistributeStatus"] = boost::any(*distributeStatus);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DistributeStatus") != m.end() && !m["DistributeStatus"].empty()) {
      distributeStatus = make_shared<string>(boost::any_cast<string>(m["DistributeStatus"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<string>(boost::any_cast<string>(m["Progress"]));
    }
  }


  virtual ~DataImageRegionDistributeMapValue() = default;
};
class AttachKeyPairRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> instanceIds{};
  shared_ptr<string> keyPairId{};

  AttachKeyPairRequest() {}

  explicit AttachKeyPairRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceIds) {
      res["InstanceIds"] = boost::any(*instanceIds);
    }
    if (keyPairId) {
      res["KeyPairId"] = boost::any(*keyPairId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceIds") != m.end() && !m["InstanceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("KeyPairId") != m.end() && !m["KeyPairId"].empty()) {
      keyPairId = make_shared<string>(boost::any_cast<string>(m["KeyPairId"]));
    }
  }


  virtual ~AttachKeyPairRequest() = default;
};
class AttachKeyPairResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<string>> attachedInstanceIds{};
  shared_ptr<long> failCount{};
  shared_ptr<string> keyPairId{};
  shared_ptr<long> totalCount{};

  AttachKeyPairResponseBodyData() {}

  explicit AttachKeyPairResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attachedInstanceIds) {
      res["AttachedInstanceIds"] = boost::any(*attachedInstanceIds);
    }
    if (failCount) {
      res["FailCount"] = boost::any(*failCount);
    }
    if (keyPairId) {
      res["KeyPairId"] = boost::any(*keyPairId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AttachedInstanceIds") != m.end() && !m["AttachedInstanceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AttachedInstanceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AttachedInstanceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      attachedInstanceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("FailCount") != m.end() && !m["FailCount"].empty()) {
      failCount = make_shared<long>(boost::any_cast<long>(m["FailCount"]));
    }
    if (m.find("KeyPairId") != m.end() && !m["KeyPairId"].empty()) {
      keyPairId = make_shared<string>(boost::any_cast<string>(m["KeyPairId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~AttachKeyPairResponseBodyData() = default;
};
class AttachKeyPairResponseBody : public Darabonba::Model {
public:
  shared_ptr<AttachKeyPairResponseBodyData> data{};
  shared_ptr<string> requestId{};

  AttachKeyPairResponseBody() {}

  explicit AttachKeyPairResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        AttachKeyPairResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<AttachKeyPairResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AttachKeyPairResponseBody() = default;
};
class AttachKeyPairResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AttachKeyPairResponseBody> body{};

  AttachKeyPairResponse() {}

  explicit AttachKeyPairResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AttachKeyPairResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AttachKeyPairResponseBody>(model1);
      }
    }
  }


  virtual ~AttachKeyPairResponse() = default;
};
class AuthorizeAndroidInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> androidInstanceIds{};
  shared_ptr<string> authorizeUserId{};
  shared_ptr<string> unAuthorizeUserId{};

  AuthorizeAndroidInstanceRequest() {}

  explicit AuthorizeAndroidInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (androidInstanceIds) {
      res["AndroidInstanceIds"] = boost::any(*androidInstanceIds);
    }
    if (authorizeUserId) {
      res["AuthorizeUserId"] = boost::any(*authorizeUserId);
    }
    if (unAuthorizeUserId) {
      res["UnAuthorizeUserId"] = boost::any(*unAuthorizeUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AndroidInstanceIds") != m.end() && !m["AndroidInstanceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AndroidInstanceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AndroidInstanceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      androidInstanceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("AuthorizeUserId") != m.end() && !m["AuthorizeUserId"].empty()) {
      authorizeUserId = make_shared<string>(boost::any_cast<string>(m["AuthorizeUserId"]));
    }
    if (m.find("UnAuthorizeUserId") != m.end() && !m["UnAuthorizeUserId"].empty()) {
      unAuthorizeUserId = make_shared<string>(boost::any_cast<string>(m["UnAuthorizeUserId"]));
    }
  }


  virtual ~AuthorizeAndroidInstanceRequest() = default;
};
class AuthorizeAndroidInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AuthorizeAndroidInstanceResponseBody() {}

  explicit AuthorizeAndroidInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AuthorizeAndroidInstanceResponseBody() = default;
};
class AuthorizeAndroidInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AuthorizeAndroidInstanceResponseBody> body{};

  AuthorizeAndroidInstanceResponse() {}

  explicit AuthorizeAndroidInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AuthorizeAndroidInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AuthorizeAndroidInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~AuthorizeAndroidInstanceResponse() = default;
};
class BackupFileRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> androidInstanceIdList{};
  shared_ptr<string> backupFilePath{};
  shared_ptr<string> description{};
  shared_ptr<vector<string>> sourceFilePathList{};
  shared_ptr<string> uploadEndpoint{};
  shared_ptr<string> uploadType{};

  BackupFileRequest() {}

  explicit BackupFileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (androidInstanceIdList) {
      res["AndroidInstanceIdList"] = boost::any(*androidInstanceIdList);
    }
    if (backupFilePath) {
      res["BackupFilePath"] = boost::any(*backupFilePath);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (sourceFilePathList) {
      res["SourceFilePathList"] = boost::any(*sourceFilePathList);
    }
    if (uploadEndpoint) {
      res["UploadEndpoint"] = boost::any(*uploadEndpoint);
    }
    if (uploadType) {
      res["UploadType"] = boost::any(*uploadType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AndroidInstanceIdList") != m.end() && !m["AndroidInstanceIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AndroidInstanceIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AndroidInstanceIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      androidInstanceIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("BackupFilePath") != m.end() && !m["BackupFilePath"].empty()) {
      backupFilePath = make_shared<string>(boost::any_cast<string>(m["BackupFilePath"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("SourceFilePathList") != m.end() && !m["SourceFilePathList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SourceFilePathList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SourceFilePathList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sourceFilePathList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UploadEndpoint") != m.end() && !m["UploadEndpoint"].empty()) {
      uploadEndpoint = make_shared<string>(boost::any_cast<string>(m["UploadEndpoint"]));
    }
    if (m.find("UploadType") != m.end() && !m["UploadType"].empty()) {
      uploadType = make_shared<string>(boost::any_cast<string>(m["UploadType"]));
    }
  }


  virtual ~BackupFileRequest() = default;
};
class BackupFileResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> androidInstanceId{};
  shared_ptr<string> backupFileId{};
  shared_ptr<string> backupFileName{};
  shared_ptr<string> taskId{};

  BackupFileResponseBodyData() {}

  explicit BackupFileResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (androidInstanceId) {
      res["AndroidInstanceId"] = boost::any(*androidInstanceId);
    }
    if (backupFileId) {
      res["BackupFileId"] = boost::any(*backupFileId);
    }
    if (backupFileName) {
      res["BackupFileName"] = boost::any(*backupFileName);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AndroidInstanceId") != m.end() && !m["AndroidInstanceId"].empty()) {
      androidInstanceId = make_shared<string>(boost::any_cast<string>(m["AndroidInstanceId"]));
    }
    if (m.find("BackupFileId") != m.end() && !m["BackupFileId"].empty()) {
      backupFileId = make_shared<string>(boost::any_cast<string>(m["BackupFileId"]));
    }
    if (m.find("BackupFileName") != m.end() && !m["BackupFileName"].empty()) {
      backupFileName = make_shared<string>(boost::any_cast<string>(m["BackupFileName"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~BackupFileResponseBodyData() = default;
};
class BackupFileResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<vector<BackupFileResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  BackupFileResponseBody() {}

  explicit BackupFileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<BackupFileResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BackupFileResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<BackupFileResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~BackupFileResponseBody() = default;
};
class BackupFileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BackupFileResponseBody> body{};

  BackupFileResponse() {}

  explicit BackupFileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BackupFileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BackupFileResponseBody>(model1);
      }
    }
  }


  virtual ~BackupFileResponse() = default;
};
class CheckResourceStockRequest : public Darabonba::Model {
public:
  shared_ptr<string> acpSpecId{};
  shared_ptr<long> amount{};
  shared_ptr<string> bizRegionId{};
  shared_ptr<bool> gpuAcceleration{};
  shared_ptr<string> zoneId{};

  CheckResourceStockRequest() {}

  explicit CheckResourceStockRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acpSpecId) {
      res["AcpSpecId"] = boost::any(*acpSpecId);
    }
    if (amount) {
      res["Amount"] = boost::any(*amount);
    }
    if (bizRegionId) {
      res["BizRegionId"] = boost::any(*bizRegionId);
    }
    if (gpuAcceleration) {
      res["GpuAcceleration"] = boost::any(*gpuAcceleration);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcpSpecId") != m.end() && !m["AcpSpecId"].empty()) {
      acpSpecId = make_shared<string>(boost::any_cast<string>(m["AcpSpecId"]));
    }
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<long>(boost::any_cast<long>(m["Amount"]));
    }
    if (m.find("BizRegionId") != m.end() && !m["BizRegionId"].empty()) {
      bizRegionId = make_shared<string>(boost::any_cast<string>(m["BizRegionId"]));
    }
    if (m.find("GpuAcceleration") != m.end() && !m["GpuAcceleration"].empty()) {
      gpuAcceleration = make_shared<bool>(boost::any_cast<bool>(m["GpuAcceleration"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~CheckResourceStockRequest() = default;
};
class CheckResourceStockResponseBodyResourceStockModels : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> stockStatus{};
  shared_ptr<string> zoneId{};

  CheckResourceStockResponseBodyResourceStockModels() {}

  explicit CheckResourceStockResponseBodyResourceStockModels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (stockStatus) {
      res["StockStatus"] = boost::any(*stockStatus);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StockStatus") != m.end() && !m["StockStatus"].empty()) {
      stockStatus = make_shared<string>(boost::any_cast<string>(m["StockStatus"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~CheckResourceStockResponseBodyResourceStockModels() = default;
};
class CheckResourceStockResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<CheckResourceStockResponseBodyResourceStockModels>> resourceStockModels{};

  CheckResourceStockResponseBody() {}

  explicit CheckResourceStockResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceStockModels) {
      vector<boost::any> temp1;
      for(auto item1:*resourceStockModels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResourceStockModels"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceStockModels") != m.end() && !m["ResourceStockModels"].empty()) {
      if (typeid(vector<boost::any>) == m["ResourceStockModels"].type()) {
        vector<CheckResourceStockResponseBodyResourceStockModels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResourceStockModels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CheckResourceStockResponseBodyResourceStockModels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resourceStockModels = make_shared<vector<CheckResourceStockResponseBodyResourceStockModels>>(expect1);
      }
    }
  }


  virtual ~CheckResourceStockResponseBody() = default;
};
class CheckResourceStockResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckResourceStockResponseBody> body{};

  CheckResourceStockResponse() {}

  explicit CheckResourceStockResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckResourceStockResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckResourceStockResponseBody>(model1);
      }
    }
  }


  virtual ~CheckResourceStockResponse() = default;
};
class CreateAndroidInstanceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<long> amount{};
  shared_ptr<bool> autoPay{};
  shared_ptr<bool> autoRenew{};
  shared_ptr<string> bizRegionId{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> gpuAcceleration{};
  shared_ptr<string> imageId{};
  shared_ptr<string> instanceGroupName{};
  shared_ptr<string> instanceGroupSpec{};
  shared_ptr<long> numberOfInstances{};
  shared_ptr<string> officeSiteId{};
  shared_ptr<long> period{};
  shared_ptr<string> periodUnit{};
  shared_ptr<string> policyGroupId{};
  shared_ptr<string> vSwitchId{};

  CreateAndroidInstanceGroupRequest() {}

  explicit CreateAndroidInstanceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (amount) {
      res["Amount"] = boost::any(*amount);
    }
    if (autoPay) {
      res["AutoPay"] = boost::any(*autoPay);
    }
    if (autoRenew) {
      res["AutoRenew"] = boost::any(*autoRenew);
    }
    if (bizRegionId) {
      res["BizRegionId"] = boost::any(*bizRegionId);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (gpuAcceleration) {
      res["GpuAcceleration"] = boost::any(*gpuAcceleration);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (instanceGroupName) {
      res["InstanceGroupName"] = boost::any(*instanceGroupName);
    }
    if (instanceGroupSpec) {
      res["InstanceGroupSpec"] = boost::any(*instanceGroupSpec);
    }
    if (numberOfInstances) {
      res["NumberOfInstances"] = boost::any(*numberOfInstances);
    }
    if (officeSiteId) {
      res["OfficeSiteId"] = boost::any(*officeSiteId);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (periodUnit) {
      res["PeriodUnit"] = boost::any(*periodUnit);
    }
    if (policyGroupId) {
      res["PolicyGroupId"] = boost::any(*policyGroupId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<long>(boost::any_cast<long>(m["Amount"]));
    }
    if (m.find("AutoPay") != m.end() && !m["AutoPay"].empty()) {
      autoPay = make_shared<bool>(boost::any_cast<bool>(m["AutoPay"]));
    }
    if (m.find("AutoRenew") != m.end() && !m["AutoRenew"].empty()) {
      autoRenew = make_shared<bool>(boost::any_cast<bool>(m["AutoRenew"]));
    }
    if (m.find("BizRegionId") != m.end() && !m["BizRegionId"].empty()) {
      bizRegionId = make_shared<string>(boost::any_cast<string>(m["BizRegionId"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("GpuAcceleration") != m.end() && !m["GpuAcceleration"].empty()) {
      gpuAcceleration = make_shared<bool>(boost::any_cast<bool>(m["GpuAcceleration"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("InstanceGroupName") != m.end() && !m["InstanceGroupName"].empty()) {
      instanceGroupName = make_shared<string>(boost::any_cast<string>(m["InstanceGroupName"]));
    }
    if (m.find("InstanceGroupSpec") != m.end() && !m["InstanceGroupSpec"].empty()) {
      instanceGroupSpec = make_shared<string>(boost::any_cast<string>(m["InstanceGroupSpec"]));
    }
    if (m.find("NumberOfInstances") != m.end() && !m["NumberOfInstances"].empty()) {
      numberOfInstances = make_shared<long>(boost::any_cast<long>(m["NumberOfInstances"]));
    }
    if (m.find("OfficeSiteId") != m.end() && !m["OfficeSiteId"].empty()) {
      officeSiteId = make_shared<string>(boost::any_cast<string>(m["OfficeSiteId"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("PeriodUnit") != m.end() && !m["PeriodUnit"].empty()) {
      periodUnit = make_shared<string>(boost::any_cast<string>(m["PeriodUnit"]));
    }
    if (m.find("PolicyGroupId") != m.end() && !m["PolicyGroupId"].empty()) {
      policyGroupId = make_shared<string>(boost::any_cast<string>(m["PolicyGroupId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
  }


  virtual ~CreateAndroidInstanceGroupRequest() = default;
};
class CreateAndroidInstanceGroupResponseBodyInstanceGroupInfos : public Darabonba::Model {
public:
  shared_ptr<string> instanceGroupId{};
  shared_ptr<vector<string>> instanceIds{};

  CreateAndroidInstanceGroupResponseBodyInstanceGroupInfos() {}

  explicit CreateAndroidInstanceGroupResponseBodyInstanceGroupInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceGroupId) {
      res["InstanceGroupId"] = boost::any(*instanceGroupId);
    }
    if (instanceIds) {
      res["InstanceIds"] = boost::any(*instanceIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceGroupId") != m.end() && !m["InstanceGroupId"].empty()) {
      instanceGroupId = make_shared<string>(boost::any_cast<string>(m["InstanceGroupId"]));
    }
    if (m.find("InstanceIds") != m.end() && !m["InstanceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateAndroidInstanceGroupResponseBodyInstanceGroupInfos() = default;
};
class CreateAndroidInstanceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> instanceGroupIds{};
  shared_ptr<vector<CreateAndroidInstanceGroupResponseBodyInstanceGroupInfos>> instanceGroupInfos{};
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  CreateAndroidInstanceGroupResponseBody() {}

  explicit CreateAndroidInstanceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceGroupIds) {
      res["InstanceGroupIds"] = boost::any(*instanceGroupIds);
    }
    if (instanceGroupInfos) {
      vector<boost::any> temp1;
      for(auto item1:*instanceGroupInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstanceGroupInfos"] = boost::any(temp1);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceGroupIds") != m.end() && !m["InstanceGroupIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceGroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceGroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceGroupIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("InstanceGroupInfos") != m.end() && !m["InstanceGroupInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["InstanceGroupInfos"].type()) {
        vector<CreateAndroidInstanceGroupResponseBodyInstanceGroupInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanceGroupInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateAndroidInstanceGroupResponseBodyInstanceGroupInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceGroupInfos = make_shared<vector<CreateAndroidInstanceGroupResponseBodyInstanceGroupInfos>>(expect1);
      }
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateAndroidInstanceGroupResponseBody() = default;
};
class CreateAndroidInstanceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAndroidInstanceGroupResponseBody> body{};

  CreateAndroidInstanceGroupResponse() {}

  explicit CreateAndroidInstanceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAndroidInstanceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAndroidInstanceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAndroidInstanceGroupResponse() = default;
};
class CreateAppRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> bizRegionId{};
  shared_ptr<string> description{};
  shared_ptr<string> fileName{};
  shared_ptr<string> filePath{};
  shared_ptr<string> iconUrl{};
  shared_ptr<string> installParam{};
  shared_ptr<string> ossAppUrl{};

  CreateAppRequest() {}

  explicit CreateAppRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (bizRegionId) {
      res["BizRegionId"] = boost::any(*bizRegionId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (filePath) {
      res["FilePath"] = boost::any(*filePath);
    }
    if (iconUrl) {
      res["IconUrl"] = boost::any(*iconUrl);
    }
    if (installParam) {
      res["InstallParam"] = boost::any(*installParam);
    }
    if (ossAppUrl) {
      res["OssAppUrl"] = boost::any(*ossAppUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("BizRegionId") != m.end() && !m["BizRegionId"].empty()) {
      bizRegionId = make_shared<string>(boost::any_cast<string>(m["BizRegionId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FilePath") != m.end() && !m["FilePath"].empty()) {
      filePath = make_shared<string>(boost::any_cast<string>(m["FilePath"]));
    }
    if (m.find("IconUrl") != m.end() && !m["IconUrl"].empty()) {
      iconUrl = make_shared<string>(boost::any_cast<string>(m["IconUrl"]));
    }
    if (m.find("InstallParam") != m.end() && !m["InstallParam"].empty()) {
      installParam = make_shared<string>(boost::any_cast<string>(m["InstallParam"]));
    }
    if (m.find("OssAppUrl") != m.end() && !m["OssAppUrl"].empty()) {
      ossAppUrl = make_shared<string>(boost::any_cast<string>(m["OssAppUrl"]));
    }
  }


  virtual ~CreateAppRequest() = default;
};
class CreateAppResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> appId{};
  shared_ptr<string> requestId{};

  CreateAppResponseBody() {}

  explicit CreateAppResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<long>(boost::any_cast<long>(m["AppId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateAppResponseBody() = default;
};
class CreateAppResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAppResponseBody> body{};

  CreateAppResponse() {}

  explicit CreateAppResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAppResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAppResponse() = default;
};
class CreateCustomImageRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<string> imageName{};
  shared_ptr<string> instanceId{};

  CreateCustomImageRequest() {}

  explicit CreateCustomImageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (imageName) {
      res["ImageName"] = boost::any(*imageName);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
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
    if (m.find("ImageName") != m.end() && !m["ImageName"].empty()) {
      imageName = make_shared<string>(boost::any_cast<string>(m["ImageName"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~CreateCustomImageRequest() = default;
};
class CreateCustomImageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> imageId{};
  shared_ptr<string> requestId{};

  CreateCustomImageResponseBody() {}

  explicit CreateCustomImageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateCustomImageResponseBody() = default;
};
class CreateCustomImageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateCustomImageResponseBody> body{};

  CreateCustomImageResponse() {}

  explicit CreateCustomImageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateCustomImageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateCustomImageResponseBody>(model1);
      }
    }
  }


  virtual ~CreateCustomImageResponse() = default;
};
class CreateKeyPairRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyPairName{};

  CreateKeyPairRequest() {}

  explicit CreateKeyPairRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPairName) {
      res["KeyPairName"] = boost::any(*keyPairName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPairName") != m.end() && !m["KeyPairName"].empty()) {
      keyPairName = make_shared<string>(boost::any_cast<string>(m["KeyPairName"]));
    }
  }


  virtual ~CreateKeyPairRequest() = default;
};
class CreateKeyPairResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> gmtCreated{};
  shared_ptr<string> keyPairId{};
  shared_ptr<string> keyPairName{};
  shared_ptr<string> privateKeyBody{};

  CreateKeyPairResponseBodyData() {}

  explicit CreateKeyPairResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtCreated) {
      res["GmtCreated"] = boost::any(*gmtCreated);
    }
    if (keyPairId) {
      res["KeyPairId"] = boost::any(*keyPairId);
    }
    if (keyPairName) {
      res["KeyPairName"] = boost::any(*keyPairName);
    }
    if (privateKeyBody) {
      res["PrivateKeyBody"] = boost::any(*privateKeyBody);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GmtCreated") != m.end() && !m["GmtCreated"].empty()) {
      gmtCreated = make_shared<string>(boost::any_cast<string>(m["GmtCreated"]));
    }
    if (m.find("KeyPairId") != m.end() && !m["KeyPairId"].empty()) {
      keyPairId = make_shared<string>(boost::any_cast<string>(m["KeyPairId"]));
    }
    if (m.find("KeyPairName") != m.end() && !m["KeyPairName"].empty()) {
      keyPairName = make_shared<string>(boost::any_cast<string>(m["KeyPairName"]));
    }
    if (m.find("PrivateKeyBody") != m.end() && !m["PrivateKeyBody"].empty()) {
      privateKeyBody = make_shared<string>(boost::any_cast<string>(m["PrivateKeyBody"]));
    }
  }


  virtual ~CreateKeyPairResponseBodyData() = default;
};
class CreateKeyPairResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateKeyPairResponseBodyData> data{};
  shared_ptr<string> requestId{};

  CreateKeyPairResponseBody() {}

  explicit CreateKeyPairResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateKeyPairResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateKeyPairResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateKeyPairResponseBody() = default;
};
class CreateKeyPairResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateKeyPairResponseBody> body{};

  CreateKeyPairResponse() {}

  explicit CreateKeyPairResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateKeyPairResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateKeyPairResponseBody>(model1);
      }
    }
  }


  virtual ~CreateKeyPairResponse() = default;
};
class CreatePolicyGroupRequestNetRedirectPolicy : public Darabonba::Model {
public:
  shared_ptr<string> netRedirect{};

  CreatePolicyGroupRequestNetRedirectPolicy() {}

  explicit CreatePolicyGroupRequestNetRedirectPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (netRedirect) {
      res["NetRedirect"] = boost::any(*netRedirect);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NetRedirect") != m.end() && !m["NetRedirect"].empty()) {
      netRedirect = make_shared<string>(boost::any_cast<string>(m["NetRedirect"]));
    }
  }


  virtual ~CreatePolicyGroupRequestNetRedirectPolicy() = default;
};
class CreatePolicyGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> cameraRedirect{};
  shared_ptr<string> clipboard{};
  shared_ptr<string> html5FileTransfer{};
  shared_ptr<string> localDrive{};
  shared_ptr<string> lockResolution{};
  shared_ptr<CreatePolicyGroupRequestNetRedirectPolicy> netRedirectPolicy{};
  shared_ptr<string> policyGroupName{};
  shared_ptr<long> resolutionHeight{};
  shared_ptr<long> resolutionWidth{};

  CreatePolicyGroupRequest() {}

  explicit CreatePolicyGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cameraRedirect) {
      res["CameraRedirect"] = boost::any(*cameraRedirect);
    }
    if (clipboard) {
      res["Clipboard"] = boost::any(*clipboard);
    }
    if (html5FileTransfer) {
      res["Html5FileTransfer"] = boost::any(*html5FileTransfer);
    }
    if (localDrive) {
      res["LocalDrive"] = boost::any(*localDrive);
    }
    if (lockResolution) {
      res["LockResolution"] = boost::any(*lockResolution);
    }
    if (netRedirectPolicy) {
      res["NetRedirectPolicy"] = netRedirectPolicy ? boost::any(netRedirectPolicy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (policyGroupName) {
      res["PolicyGroupName"] = boost::any(*policyGroupName);
    }
    if (resolutionHeight) {
      res["ResolutionHeight"] = boost::any(*resolutionHeight);
    }
    if (resolutionWidth) {
      res["ResolutionWidth"] = boost::any(*resolutionWidth);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CameraRedirect") != m.end() && !m["CameraRedirect"].empty()) {
      cameraRedirect = make_shared<string>(boost::any_cast<string>(m["CameraRedirect"]));
    }
    if (m.find("Clipboard") != m.end() && !m["Clipboard"].empty()) {
      clipboard = make_shared<string>(boost::any_cast<string>(m["Clipboard"]));
    }
    if (m.find("Html5FileTransfer") != m.end() && !m["Html5FileTransfer"].empty()) {
      html5FileTransfer = make_shared<string>(boost::any_cast<string>(m["Html5FileTransfer"]));
    }
    if (m.find("LocalDrive") != m.end() && !m["LocalDrive"].empty()) {
      localDrive = make_shared<string>(boost::any_cast<string>(m["LocalDrive"]));
    }
    if (m.find("LockResolution") != m.end() && !m["LockResolution"].empty()) {
      lockResolution = make_shared<string>(boost::any_cast<string>(m["LockResolution"]));
    }
    if (m.find("NetRedirectPolicy") != m.end() && !m["NetRedirectPolicy"].empty()) {
      if (typeid(map<string, boost::any>) == m["NetRedirectPolicy"].type()) {
        CreatePolicyGroupRequestNetRedirectPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NetRedirectPolicy"]));
        netRedirectPolicy = make_shared<CreatePolicyGroupRequestNetRedirectPolicy>(model1);
      }
    }
    if (m.find("PolicyGroupName") != m.end() && !m["PolicyGroupName"].empty()) {
      policyGroupName = make_shared<string>(boost::any_cast<string>(m["PolicyGroupName"]));
    }
    if (m.find("ResolutionHeight") != m.end() && !m["ResolutionHeight"].empty()) {
      resolutionHeight = make_shared<long>(boost::any_cast<long>(m["ResolutionHeight"]));
    }
    if (m.find("ResolutionWidth") != m.end() && !m["ResolutionWidth"].empty()) {
      resolutionWidth = make_shared<long>(boost::any_cast<long>(m["ResolutionWidth"]));
    }
  }


  virtual ~CreatePolicyGroupRequest() = default;
};
class CreatePolicyGroupShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> cameraRedirect{};
  shared_ptr<string> clipboard{};
  shared_ptr<string> html5FileTransfer{};
  shared_ptr<string> localDrive{};
  shared_ptr<string> lockResolution{};
  shared_ptr<string> netRedirectPolicyShrink{};
  shared_ptr<string> policyGroupName{};
  shared_ptr<long> resolutionHeight{};
  shared_ptr<long> resolutionWidth{};

  CreatePolicyGroupShrinkRequest() {}

  explicit CreatePolicyGroupShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cameraRedirect) {
      res["CameraRedirect"] = boost::any(*cameraRedirect);
    }
    if (clipboard) {
      res["Clipboard"] = boost::any(*clipboard);
    }
    if (html5FileTransfer) {
      res["Html5FileTransfer"] = boost::any(*html5FileTransfer);
    }
    if (localDrive) {
      res["LocalDrive"] = boost::any(*localDrive);
    }
    if (lockResolution) {
      res["LockResolution"] = boost::any(*lockResolution);
    }
    if (netRedirectPolicyShrink) {
      res["NetRedirectPolicy"] = boost::any(*netRedirectPolicyShrink);
    }
    if (policyGroupName) {
      res["PolicyGroupName"] = boost::any(*policyGroupName);
    }
    if (resolutionHeight) {
      res["ResolutionHeight"] = boost::any(*resolutionHeight);
    }
    if (resolutionWidth) {
      res["ResolutionWidth"] = boost::any(*resolutionWidth);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CameraRedirect") != m.end() && !m["CameraRedirect"].empty()) {
      cameraRedirect = make_shared<string>(boost::any_cast<string>(m["CameraRedirect"]));
    }
    if (m.find("Clipboard") != m.end() && !m["Clipboard"].empty()) {
      clipboard = make_shared<string>(boost::any_cast<string>(m["Clipboard"]));
    }
    if (m.find("Html5FileTransfer") != m.end() && !m["Html5FileTransfer"].empty()) {
      html5FileTransfer = make_shared<string>(boost::any_cast<string>(m["Html5FileTransfer"]));
    }
    if (m.find("LocalDrive") != m.end() && !m["LocalDrive"].empty()) {
      localDrive = make_shared<string>(boost::any_cast<string>(m["LocalDrive"]));
    }
    if (m.find("LockResolution") != m.end() && !m["LockResolution"].empty()) {
      lockResolution = make_shared<string>(boost::any_cast<string>(m["LockResolution"]));
    }
    if (m.find("NetRedirectPolicy") != m.end() && !m["NetRedirectPolicy"].empty()) {
      netRedirectPolicyShrink = make_shared<string>(boost::any_cast<string>(m["NetRedirectPolicy"]));
    }
    if (m.find("PolicyGroupName") != m.end() && !m["PolicyGroupName"].empty()) {
      policyGroupName = make_shared<string>(boost::any_cast<string>(m["PolicyGroupName"]));
    }
    if (m.find("ResolutionHeight") != m.end() && !m["ResolutionHeight"].empty()) {
      resolutionHeight = make_shared<long>(boost::any_cast<long>(m["ResolutionHeight"]));
    }
    if (m.find("ResolutionWidth") != m.end() && !m["ResolutionWidth"].empty()) {
      resolutionWidth = make_shared<long>(boost::any_cast<long>(m["ResolutionWidth"]));
    }
  }


  virtual ~CreatePolicyGroupShrinkRequest() = default;
};
class CreatePolicyGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> policyGroupId{};
  shared_ptr<string> requestId{};

  CreatePolicyGroupResponseBody() {}

  explicit CreatePolicyGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyGroupId) {
      res["PolicyGroupId"] = boost::any(*policyGroupId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyGroupId") != m.end() && !m["PolicyGroupId"].empty()) {
      policyGroupId = make_shared<string>(boost::any_cast<string>(m["PolicyGroupId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreatePolicyGroupResponseBody() = default;
};
class CreatePolicyGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreatePolicyGroupResponseBody> body{};

  CreatePolicyGroupResponse() {}

  explicit CreatePolicyGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreatePolicyGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreatePolicyGroupResponseBody>(model1);
      }
    }
  }


  virtual ~CreatePolicyGroupResponse() = default;
};
class DeleteAndroidInstanceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> instanceGroupIds{};

  DeleteAndroidInstanceGroupRequest() {}

  explicit DeleteAndroidInstanceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceGroupIds) {
      res["InstanceGroupIds"] = boost::any(*instanceGroupIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceGroupIds") != m.end() && !m["InstanceGroupIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceGroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceGroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceGroupIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DeleteAndroidInstanceGroupRequest() = default;
};
class DeleteAndroidInstanceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteAndroidInstanceGroupResponseBody() {}

  explicit DeleteAndroidInstanceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteAndroidInstanceGroupResponseBody() = default;
};
class DeleteAndroidInstanceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteAndroidInstanceGroupResponseBody> body{};

  DeleteAndroidInstanceGroupResponse() {}

  explicit DeleteAndroidInstanceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteAndroidInstanceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAndroidInstanceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAndroidInstanceGroupResponse() = default;
};
class DeleteAppsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> appIdList{};

  DeleteAppsRequest() {}

  explicit DeleteAppsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appIdList) {
      res["AppIdList"] = boost::any(*appIdList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppIdList") != m.end() && !m["AppIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AppIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AppIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      appIdList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DeleteAppsRequest() = default;
};
class DeleteAppsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteAppsResponseBody() {}

  explicit DeleteAppsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteAppsResponseBody() = default;
};
class DeleteAppsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteAppsResponseBody> body{};

  DeleteAppsResponse() {}

  explicit DeleteAppsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteAppsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAppsResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAppsResponse() = default;
};
class DeleteImagesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> imageIds{};

  DeleteImagesRequest() {}

  explicit DeleteImagesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageIds) {
      res["ImageIds"] = boost::any(*imageIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageIds") != m.end() && !m["ImageIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ImageIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ImageIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      imageIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DeleteImagesRequest() = default;
};
class DeleteImagesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageIdsShrink{};

  DeleteImagesShrinkRequest() {}

  explicit DeleteImagesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageIdsShrink) {
      res["ImageIds"] = boost::any(*imageIdsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageIds") != m.end() && !m["ImageIds"].empty()) {
      imageIdsShrink = make_shared<string>(boost::any_cast<string>(m["ImageIds"]));
    }
  }


  virtual ~DeleteImagesShrinkRequest() = default;
};
class DeleteImagesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<string>> failDeleteImageIds{};
  shared_ptr<vector<string>> successDeleteImageIds{};

  DeleteImagesResponseBodyData() {}

  explicit DeleteImagesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (failDeleteImageIds) {
      res["FailDeleteImageIds"] = boost::any(*failDeleteImageIds);
    }
    if (successDeleteImageIds) {
      res["SuccessDeleteImageIds"] = boost::any(*successDeleteImageIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FailDeleteImageIds") != m.end() && !m["FailDeleteImageIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["FailDeleteImageIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["FailDeleteImageIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      failDeleteImageIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SuccessDeleteImageIds") != m.end() && !m["SuccessDeleteImageIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SuccessDeleteImageIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SuccessDeleteImageIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      successDeleteImageIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DeleteImagesResponseBodyData() = default;
};
class DeleteImagesResponseBody : public Darabonba::Model {
public:
  shared_ptr<DeleteImagesResponseBodyData> data{};
  shared_ptr<string> requestId{};

  DeleteImagesResponseBody() {}

  explicit DeleteImagesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DeleteImagesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DeleteImagesResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteImagesResponseBody() = default;
};
class DeleteImagesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteImagesResponseBody> body{};

  DeleteImagesResponse() {}

  explicit DeleteImagesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteImagesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteImagesResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteImagesResponse() = default;
};
class DeleteKeyPairsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> keyPairIds{};

  DeleteKeyPairsRequest() {}

  explicit DeleteKeyPairsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPairIds) {
      res["KeyPairIds"] = boost::any(*keyPairIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPairIds") != m.end() && !m["KeyPairIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["KeyPairIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["KeyPairIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      keyPairIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DeleteKeyPairsRequest() = default;
};
class DeleteKeyPairsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteKeyPairsResponseBody() {}

  explicit DeleteKeyPairsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteKeyPairsResponseBody() = default;
};
class DeleteKeyPairsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteKeyPairsResponseBody> body{};

  DeleteKeyPairsResponse() {}

  explicit DeleteKeyPairsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteKeyPairsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteKeyPairsResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteKeyPairsResponse() = default;
};
class DeletePolicyGroupRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> policyGroupIds{};

  DeletePolicyGroupRequest() {}

  explicit DeletePolicyGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyGroupIds) {
      res["PolicyGroupIds"] = boost::any(*policyGroupIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyGroupIds") != m.end() && !m["PolicyGroupIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PolicyGroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PolicyGroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      policyGroupIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DeletePolicyGroupRequest() = default;
};
class DeletePolicyGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeletePolicyGroupResponseBody() {}

  explicit DeletePolicyGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeletePolicyGroupResponseBody() = default;
};
class DeletePolicyGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeletePolicyGroupResponseBody> body{};

  DeletePolicyGroupResponse() {}

  explicit DeletePolicyGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeletePolicyGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeletePolicyGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DeletePolicyGroupResponse() = default;
};
class DescribeAndroidInstanceGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizRegionId{};
  shared_ptr<string> chargeType{};
  shared_ptr<vector<string>> instanceGroupIds{};
  shared_ptr<string> instanceGroupName{};
  shared_ptr<string> keyPairId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> policyGroupId{};
  shared_ptr<string> saleMode{};
  shared_ptr<string> status{};

  DescribeAndroidInstanceGroupsRequest() {}

  explicit DescribeAndroidInstanceGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizRegionId) {
      res["BizRegionId"] = boost::any(*bizRegionId);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (instanceGroupIds) {
      res["InstanceGroupIds"] = boost::any(*instanceGroupIds);
    }
    if (instanceGroupName) {
      res["InstanceGroupName"] = boost::any(*instanceGroupName);
    }
    if (keyPairId) {
      res["KeyPairId"] = boost::any(*keyPairId);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (policyGroupId) {
      res["PolicyGroupId"] = boost::any(*policyGroupId);
    }
    if (saleMode) {
      res["SaleMode"] = boost::any(*saleMode);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizRegionId") != m.end() && !m["BizRegionId"].empty()) {
      bizRegionId = make_shared<string>(boost::any_cast<string>(m["BizRegionId"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("InstanceGroupIds") != m.end() && !m["InstanceGroupIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceGroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceGroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceGroupIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("InstanceGroupName") != m.end() && !m["InstanceGroupName"].empty()) {
      instanceGroupName = make_shared<string>(boost::any_cast<string>(m["InstanceGroupName"]));
    }
    if (m.find("KeyPairId") != m.end() && !m["KeyPairId"].empty()) {
      keyPairId = make_shared<string>(boost::any_cast<string>(m["KeyPairId"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("PolicyGroupId") != m.end() && !m["PolicyGroupId"].empty()) {
      policyGroupId = make_shared<string>(boost::any_cast<string>(m["PolicyGroupId"]));
    }
    if (m.find("SaleMode") != m.end() && !m["SaleMode"].empty()) {
      saleMode = make_shared<string>(boost::any_cast<string>(m["SaleMode"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeAndroidInstanceGroupsRequest() = default;
};
class DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModelDisks : public Darabonba::Model {
public:
  shared_ptr<long> diskSize{};
  shared_ptr<string> diskType{};

  DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModelDisks() {}

  explicit DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModelDisks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (diskSize) {
      res["DiskSize"] = boost::any(*diskSize);
    }
    if (diskType) {
      res["DiskType"] = boost::any(*diskType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DiskSize") != m.end() && !m["DiskSize"].empty()) {
      diskSize = make_shared<long>(boost::any_cast<long>(m["DiskSize"]));
    }
    if (m.find("DiskType") != m.end() && !m["DiskType"].empty()) {
      diskType = make_shared<string>(boost::any_cast<string>(m["DiskType"]));
    }
  }


  virtual ~DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModelDisks() = default;
};
class DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModel : public Darabonba::Model {
public:
  shared_ptr<string> appInstanceGroupId{};
  shared_ptr<string> architectureType{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> cpu{};
  shared_ptr<vector<DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModelDisks>> disks{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtExpired{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> imageId{};
  shared_ptr<string> installedAppList{};
  shared_ptr<string> instanceGroupId{};
  shared_ptr<string> instanceGroupName{};
  shared_ptr<string> instanceGroupSpec{};
  shared_ptr<string> instanceGroupSpecDescribe{};
  shared_ptr<string> instanceGroupStatus{};
  shared_ptr<long> memory{};
  shared_ptr<string> numberOfInstances{};
  shared_ptr<string> officeSiteId{};
  shared_ptr<string> policyGroupId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> renderingType{};
  shared_ptr<long> resolutionHeight{};
  shared_ptr<long> resolutionWidth{};
  shared_ptr<string> saleMode{};
  shared_ptr<string> systemVersion{};
  shared_ptr<string> vSwitchId{};

  DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModel() {}

  explicit DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInstanceGroupId) {
      res["AppInstanceGroupId"] = boost::any(*appInstanceGroupId);
    }
    if (architectureType) {
      res["ArchitectureType"] = boost::any(*architectureType);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (disks) {
      vector<boost::any> temp1;
      for(auto item1:*disks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Disks"] = boost::any(temp1);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtExpired) {
      res["GmtExpired"] = boost::any(*gmtExpired);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (installedAppList) {
      res["InstalledAppList"] = boost::any(*installedAppList);
    }
    if (instanceGroupId) {
      res["InstanceGroupId"] = boost::any(*instanceGroupId);
    }
    if (instanceGroupName) {
      res["InstanceGroupName"] = boost::any(*instanceGroupName);
    }
    if (instanceGroupSpec) {
      res["InstanceGroupSpec"] = boost::any(*instanceGroupSpec);
    }
    if (instanceGroupSpecDescribe) {
      res["InstanceGroupSpecDescribe"] = boost::any(*instanceGroupSpecDescribe);
    }
    if (instanceGroupStatus) {
      res["InstanceGroupStatus"] = boost::any(*instanceGroupStatus);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (numberOfInstances) {
      res["NumberOfInstances"] = boost::any(*numberOfInstances);
    }
    if (officeSiteId) {
      res["OfficeSiteId"] = boost::any(*officeSiteId);
    }
    if (policyGroupId) {
      res["PolicyGroupId"] = boost::any(*policyGroupId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (renderingType) {
      res["RenderingType"] = boost::any(*renderingType);
    }
    if (resolutionHeight) {
      res["ResolutionHeight"] = boost::any(*resolutionHeight);
    }
    if (resolutionWidth) {
      res["ResolutionWidth"] = boost::any(*resolutionWidth);
    }
    if (saleMode) {
      res["SaleMode"] = boost::any(*saleMode);
    }
    if (systemVersion) {
      res["SystemVersion"] = boost::any(*systemVersion);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppInstanceGroupId") != m.end() && !m["AppInstanceGroupId"].empty()) {
      appInstanceGroupId = make_shared<string>(boost::any_cast<string>(m["AppInstanceGroupId"]));
    }
    if (m.find("ArchitectureType") != m.end() && !m["ArchitectureType"].empty()) {
      architectureType = make_shared<string>(boost::any_cast<string>(m["ArchitectureType"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<string>(boost::any_cast<string>(m["Cpu"]));
    }
    if (m.find("Disks") != m.end() && !m["Disks"].empty()) {
      if (typeid(vector<boost::any>) == m["Disks"].type()) {
        vector<DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModelDisks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Disks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModelDisks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        disks = make_shared<vector<DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModelDisks>>(expect1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtExpired") != m.end() && !m["GmtExpired"].empty()) {
      gmtExpired = make_shared<string>(boost::any_cast<string>(m["GmtExpired"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("InstalledAppList") != m.end() && !m["InstalledAppList"].empty()) {
      installedAppList = make_shared<string>(boost::any_cast<string>(m["InstalledAppList"]));
    }
    if (m.find("InstanceGroupId") != m.end() && !m["InstanceGroupId"].empty()) {
      instanceGroupId = make_shared<string>(boost::any_cast<string>(m["InstanceGroupId"]));
    }
    if (m.find("InstanceGroupName") != m.end() && !m["InstanceGroupName"].empty()) {
      instanceGroupName = make_shared<string>(boost::any_cast<string>(m["InstanceGroupName"]));
    }
    if (m.find("InstanceGroupSpec") != m.end() && !m["InstanceGroupSpec"].empty()) {
      instanceGroupSpec = make_shared<string>(boost::any_cast<string>(m["InstanceGroupSpec"]));
    }
    if (m.find("InstanceGroupSpecDescribe") != m.end() && !m["InstanceGroupSpecDescribe"].empty()) {
      instanceGroupSpecDescribe = make_shared<string>(boost::any_cast<string>(m["InstanceGroupSpecDescribe"]));
    }
    if (m.find("InstanceGroupStatus") != m.end() && !m["InstanceGroupStatus"].empty()) {
      instanceGroupStatus = make_shared<string>(boost::any_cast<string>(m["InstanceGroupStatus"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<long>(boost::any_cast<long>(m["Memory"]));
    }
    if (m.find("NumberOfInstances") != m.end() && !m["NumberOfInstances"].empty()) {
      numberOfInstances = make_shared<string>(boost::any_cast<string>(m["NumberOfInstances"]));
    }
    if (m.find("OfficeSiteId") != m.end() && !m["OfficeSiteId"].empty()) {
      officeSiteId = make_shared<string>(boost::any_cast<string>(m["OfficeSiteId"]));
    }
    if (m.find("PolicyGroupId") != m.end() && !m["PolicyGroupId"].empty()) {
      policyGroupId = make_shared<string>(boost::any_cast<string>(m["PolicyGroupId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RenderingType") != m.end() && !m["RenderingType"].empty()) {
      renderingType = make_shared<string>(boost::any_cast<string>(m["RenderingType"]));
    }
    if (m.find("ResolutionHeight") != m.end() && !m["ResolutionHeight"].empty()) {
      resolutionHeight = make_shared<long>(boost::any_cast<long>(m["ResolutionHeight"]));
    }
    if (m.find("ResolutionWidth") != m.end() && !m["ResolutionWidth"].empty()) {
      resolutionWidth = make_shared<long>(boost::any_cast<long>(m["ResolutionWidth"]));
    }
    if (m.find("SaleMode") != m.end() && !m["SaleMode"].empty()) {
      saleMode = make_shared<string>(boost::any_cast<string>(m["SaleMode"]));
    }
    if (m.find("SystemVersion") != m.end() && !m["SystemVersion"].empty()) {
      systemVersion = make_shared<string>(boost::any_cast<string>(m["SystemVersion"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
  }


  virtual ~DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModel() = default;
};
class DescribeAndroidInstanceGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModel>> instanceGroupModel{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeAndroidInstanceGroupsResponseBody() {}

  explicit DescribeAndroidInstanceGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceGroupModel) {
      vector<boost::any> temp1;
      for(auto item1:*instanceGroupModel){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstanceGroupModel"] = boost::any(temp1);
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
    if (m.find("InstanceGroupModel") != m.end() && !m["InstanceGroupModel"].empty()) {
      if (typeid(vector<boost::any>) == m["InstanceGroupModel"].type()) {
        vector<DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModel> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanceGroupModel"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModel model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceGroupModel = make_shared<vector<DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModel>>(expect1);
      }
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


  virtual ~DescribeAndroidInstanceGroupsResponseBody() = default;
};
class DescribeAndroidInstanceGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAndroidInstanceGroupsResponseBody> body{};

  DescribeAndroidInstanceGroupsResponse() {}

  explicit DescribeAndroidInstanceGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAndroidInstanceGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAndroidInstanceGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAndroidInstanceGroupsResponse() = default;
};
class DescribeAndroidInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> androidInstanceIds{};
  shared_ptr<string> androidInstanceName{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> instanceGroupId{};
  shared_ptr<vector<string>> instanceGroupIds{};
  shared_ptr<string> instanceGroupName{};
  shared_ptr<string> keyPairId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> saleMode{};
  shared_ptr<string> status{};

  DescribeAndroidInstancesRequest() {}

  explicit DescribeAndroidInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (androidInstanceIds) {
      res["AndroidInstanceIds"] = boost::any(*androidInstanceIds);
    }
    if (androidInstanceName) {
      res["AndroidInstanceName"] = boost::any(*androidInstanceName);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (instanceGroupId) {
      res["InstanceGroupId"] = boost::any(*instanceGroupId);
    }
    if (instanceGroupIds) {
      res["InstanceGroupIds"] = boost::any(*instanceGroupIds);
    }
    if (instanceGroupName) {
      res["InstanceGroupName"] = boost::any(*instanceGroupName);
    }
    if (keyPairId) {
      res["KeyPairId"] = boost::any(*keyPairId);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (saleMode) {
      res["SaleMode"] = boost::any(*saleMode);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AndroidInstanceIds") != m.end() && !m["AndroidInstanceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AndroidInstanceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AndroidInstanceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      androidInstanceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("AndroidInstanceName") != m.end() && !m["AndroidInstanceName"].empty()) {
      androidInstanceName = make_shared<string>(boost::any_cast<string>(m["AndroidInstanceName"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("InstanceGroupId") != m.end() && !m["InstanceGroupId"].empty()) {
      instanceGroupId = make_shared<string>(boost::any_cast<string>(m["InstanceGroupId"]));
    }
    if (m.find("InstanceGroupIds") != m.end() && !m["InstanceGroupIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceGroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceGroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceGroupIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("InstanceGroupName") != m.end() && !m["InstanceGroupName"].empty()) {
      instanceGroupName = make_shared<string>(boost::any_cast<string>(m["InstanceGroupName"]));
    }
    if (m.find("KeyPairId") != m.end() && !m["KeyPairId"].empty()) {
      keyPairId = make_shared<string>(boost::any_cast<string>(m["KeyPairId"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("SaleMode") != m.end() && !m["SaleMode"].empty()) {
      saleMode = make_shared<string>(boost::any_cast<string>(m["SaleMode"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeAndroidInstancesRequest() = default;
};
class DescribeAndroidInstancesResponseBodyInstanceModelDisks : public Darabonba::Model {
public:
  shared_ptr<long> diskSize{};
  shared_ptr<string> diskType{};

  DescribeAndroidInstancesResponseBodyInstanceModelDisks() {}

  explicit DescribeAndroidInstancesResponseBodyInstanceModelDisks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (diskSize) {
      res["DiskSize"] = boost::any(*diskSize);
    }
    if (diskType) {
      res["DiskType"] = boost::any(*diskType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DiskSize") != m.end() && !m["DiskSize"].empty()) {
      diskSize = make_shared<long>(boost::any_cast<long>(m["DiskSize"]));
    }
    if (m.find("DiskType") != m.end() && !m["DiskType"].empty()) {
      diskType = make_shared<string>(boost::any_cast<string>(m["DiskType"]));
    }
  }


  virtual ~DescribeAndroidInstancesResponseBodyInstanceModelDisks() = default;
};
class DescribeAndroidInstancesResponseBodyInstanceModel : public Darabonba::Model {
public:
  shared_ptr<string> androidInstanceGroupId{};
  shared_ptr<string> androidInstanceGroupName{};
  shared_ptr<string> androidInstanceId{};
  shared_ptr<string> androidInstanceName{};
  shared_ptr<string> androidInstanceStatus{};
  shared_ptr<string> appInstanceGroupId{};
  shared_ptr<string> appInstanceId{};
  shared_ptr<string> authorizedUserId{};
  shared_ptr<string> bindUserId{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> cpu{};
  shared_ptr<vector<DescribeAndroidInstancesResponseBodyInstanceModelDisks>> disks{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtExpired{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> keyPairId{};
  shared_ptr<long> memory{};
  shared_ptr<string> networkInterfaceIp{};
  shared_ptr<string> officeSiteId{};
  shared_ptr<string> persistentAppInstanceId{};
  shared_ptr<string> policyGroupId{};
  shared_ptr<long> rate{};
  shared_ptr<string> regionId{};
  shared_ptr<string> renderingType{};

  DescribeAndroidInstancesResponseBodyInstanceModel() {}

  explicit DescribeAndroidInstancesResponseBodyInstanceModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (androidInstanceGroupId) {
      res["AndroidInstanceGroupId"] = boost::any(*androidInstanceGroupId);
    }
    if (androidInstanceGroupName) {
      res["AndroidInstanceGroupName"] = boost::any(*androidInstanceGroupName);
    }
    if (androidInstanceId) {
      res["AndroidInstanceId"] = boost::any(*androidInstanceId);
    }
    if (androidInstanceName) {
      res["AndroidInstanceName"] = boost::any(*androidInstanceName);
    }
    if (androidInstanceStatus) {
      res["AndroidInstanceStatus"] = boost::any(*androidInstanceStatus);
    }
    if (appInstanceGroupId) {
      res["AppInstanceGroupId"] = boost::any(*appInstanceGroupId);
    }
    if (appInstanceId) {
      res["AppInstanceId"] = boost::any(*appInstanceId);
    }
    if (authorizedUserId) {
      res["AuthorizedUserId"] = boost::any(*authorizedUserId);
    }
    if (bindUserId) {
      res["BindUserId"] = boost::any(*bindUserId);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (disks) {
      vector<boost::any> temp1;
      for(auto item1:*disks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Disks"] = boost::any(temp1);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtExpired) {
      res["GmtExpired"] = boost::any(*gmtExpired);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (keyPairId) {
      res["KeyPairId"] = boost::any(*keyPairId);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (networkInterfaceIp) {
      res["NetworkInterfaceIp"] = boost::any(*networkInterfaceIp);
    }
    if (officeSiteId) {
      res["OfficeSiteId"] = boost::any(*officeSiteId);
    }
    if (persistentAppInstanceId) {
      res["PersistentAppInstanceId"] = boost::any(*persistentAppInstanceId);
    }
    if (policyGroupId) {
      res["PolicyGroupId"] = boost::any(*policyGroupId);
    }
    if (rate) {
      res["Rate"] = boost::any(*rate);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (renderingType) {
      res["RenderingType"] = boost::any(*renderingType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AndroidInstanceGroupId") != m.end() && !m["AndroidInstanceGroupId"].empty()) {
      androidInstanceGroupId = make_shared<string>(boost::any_cast<string>(m["AndroidInstanceGroupId"]));
    }
    if (m.find("AndroidInstanceGroupName") != m.end() && !m["AndroidInstanceGroupName"].empty()) {
      androidInstanceGroupName = make_shared<string>(boost::any_cast<string>(m["AndroidInstanceGroupName"]));
    }
    if (m.find("AndroidInstanceId") != m.end() && !m["AndroidInstanceId"].empty()) {
      androidInstanceId = make_shared<string>(boost::any_cast<string>(m["AndroidInstanceId"]));
    }
    if (m.find("AndroidInstanceName") != m.end() && !m["AndroidInstanceName"].empty()) {
      androidInstanceName = make_shared<string>(boost::any_cast<string>(m["AndroidInstanceName"]));
    }
    if (m.find("AndroidInstanceStatus") != m.end() && !m["AndroidInstanceStatus"].empty()) {
      androidInstanceStatus = make_shared<string>(boost::any_cast<string>(m["AndroidInstanceStatus"]));
    }
    if (m.find("AppInstanceGroupId") != m.end() && !m["AppInstanceGroupId"].empty()) {
      appInstanceGroupId = make_shared<string>(boost::any_cast<string>(m["AppInstanceGroupId"]));
    }
    if (m.find("AppInstanceId") != m.end() && !m["AppInstanceId"].empty()) {
      appInstanceId = make_shared<string>(boost::any_cast<string>(m["AppInstanceId"]));
    }
    if (m.find("AuthorizedUserId") != m.end() && !m["AuthorizedUserId"].empty()) {
      authorizedUserId = make_shared<string>(boost::any_cast<string>(m["AuthorizedUserId"]));
    }
    if (m.find("BindUserId") != m.end() && !m["BindUserId"].empty()) {
      bindUserId = make_shared<string>(boost::any_cast<string>(m["BindUserId"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<string>(boost::any_cast<string>(m["Cpu"]));
    }
    if (m.find("Disks") != m.end() && !m["Disks"].empty()) {
      if (typeid(vector<boost::any>) == m["Disks"].type()) {
        vector<DescribeAndroidInstancesResponseBodyInstanceModelDisks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Disks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAndroidInstancesResponseBodyInstanceModelDisks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        disks = make_shared<vector<DescribeAndroidInstancesResponseBodyInstanceModelDisks>>(expect1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtExpired") != m.end() && !m["GmtExpired"].empty()) {
      gmtExpired = make_shared<string>(boost::any_cast<string>(m["GmtExpired"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("KeyPairId") != m.end() && !m["KeyPairId"].empty()) {
      keyPairId = make_shared<string>(boost::any_cast<string>(m["KeyPairId"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<long>(boost::any_cast<long>(m["Memory"]));
    }
    if (m.find("NetworkInterfaceIp") != m.end() && !m["NetworkInterfaceIp"].empty()) {
      networkInterfaceIp = make_shared<string>(boost::any_cast<string>(m["NetworkInterfaceIp"]));
    }
    if (m.find("OfficeSiteId") != m.end() && !m["OfficeSiteId"].empty()) {
      officeSiteId = make_shared<string>(boost::any_cast<string>(m["OfficeSiteId"]));
    }
    if (m.find("PersistentAppInstanceId") != m.end() && !m["PersistentAppInstanceId"].empty()) {
      persistentAppInstanceId = make_shared<string>(boost::any_cast<string>(m["PersistentAppInstanceId"]));
    }
    if (m.find("PolicyGroupId") != m.end() && !m["PolicyGroupId"].empty()) {
      policyGroupId = make_shared<string>(boost::any_cast<string>(m["PolicyGroupId"]));
    }
    if (m.find("Rate") != m.end() && !m["Rate"].empty()) {
      rate = make_shared<long>(boost::any_cast<long>(m["Rate"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RenderingType") != m.end() && !m["RenderingType"].empty()) {
      renderingType = make_shared<string>(boost::any_cast<string>(m["RenderingType"]));
    }
  }


  virtual ~DescribeAndroidInstancesResponseBodyInstanceModel() = default;
};
class DescribeAndroidInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAndroidInstancesResponseBodyInstanceModel>> instanceModel{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeAndroidInstancesResponseBody() {}

  explicit DescribeAndroidInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceModel) {
      vector<boost::any> temp1;
      for(auto item1:*instanceModel){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstanceModel"] = boost::any(temp1);
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
    if (m.find("InstanceModel") != m.end() && !m["InstanceModel"].empty()) {
      if (typeid(vector<boost::any>) == m["InstanceModel"].type()) {
        vector<DescribeAndroidInstancesResponseBodyInstanceModel> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanceModel"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAndroidInstancesResponseBodyInstanceModel model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceModel = make_shared<vector<DescribeAndroidInstancesResponseBodyInstanceModel>>(expect1);
      }
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


  virtual ~DescribeAndroidInstancesResponseBody() = default;
};
class DescribeAndroidInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAndroidInstancesResponseBody> body{};

  DescribeAndroidInstancesResponse() {}

  explicit DescribeAndroidInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAndroidInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAndroidInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAndroidInstancesResponse() = default;
};
class DescribeAppsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> appIdList{};
  shared_ptr<string> appName{};
  shared_ptr<string> bizRegionId{};
  shared_ptr<string> installationStatus{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> status{};

  DescribeAppsRequest() {}

  explicit DescribeAppsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appIdList) {
      res["AppIdList"] = boost::any(*appIdList);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (bizRegionId) {
      res["BizRegionId"] = boost::any(*bizRegionId);
    }
    if (installationStatus) {
      res["InstallationStatus"] = boost::any(*installationStatus);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppIdList") != m.end() && !m["AppIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AppIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AppIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      appIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("BizRegionId") != m.end() && !m["BizRegionId"].empty()) {
      bizRegionId = make_shared<string>(boost::any_cast<string>(m["BizRegionId"]));
    }
    if (m.find("InstallationStatus") != m.end() && !m["InstallationStatus"].empty()) {
      installationStatus = make_shared<string>(boost::any_cast<string>(m["InstallationStatus"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeAppsRequest() = default;
};
class DescribeAppsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> androidAppVersion{};
  shared_ptr<long> appId{};
  shared_ptr<string> appName{};
  shared_ptr<string> bizRegionId{};
  shared_ptr<string> description{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> iconUrl{};
  shared_ptr<string> installationStatus{};
  shared_ptr<vector<string>> instanceGroupList{};
  shared_ptr<string> packageName{};
  shared_ptr<string> status{};

  DescribeAppsResponseBodyData() {}

  explicit DescribeAppsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (androidAppVersion) {
      res["AndroidAppVersion"] = boost::any(*androidAppVersion);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (bizRegionId) {
      res["BizRegionId"] = boost::any(*bizRegionId);
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
    if (iconUrl) {
      res["IconUrl"] = boost::any(*iconUrl);
    }
    if (installationStatus) {
      res["InstallationStatus"] = boost::any(*installationStatus);
    }
    if (instanceGroupList) {
      res["InstanceGroupList"] = boost::any(*instanceGroupList);
    }
    if (packageName) {
      res["PackageName"] = boost::any(*packageName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AndroidAppVersion") != m.end() && !m["AndroidAppVersion"].empty()) {
      androidAppVersion = make_shared<string>(boost::any_cast<string>(m["AndroidAppVersion"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<long>(boost::any_cast<long>(m["AppId"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("BizRegionId") != m.end() && !m["BizRegionId"].empty()) {
      bizRegionId = make_shared<string>(boost::any_cast<string>(m["BizRegionId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("IconUrl") != m.end() && !m["IconUrl"].empty()) {
      iconUrl = make_shared<string>(boost::any_cast<string>(m["IconUrl"]));
    }
    if (m.find("InstallationStatus") != m.end() && !m["InstallationStatus"].empty()) {
      installationStatus = make_shared<string>(boost::any_cast<string>(m["InstallationStatus"]));
    }
    if (m.find("InstanceGroupList") != m.end() && !m["InstanceGroupList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceGroupList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceGroupList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceGroupList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PackageName") != m.end() && !m["PackageName"].empty()) {
      packageName = make_shared<string>(boost::any_cast<string>(m["PackageName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeAppsResponseBodyData() = default;
};
class DescribeAppsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAppsResponseBodyData>> data{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<string> totalCount{};

  DescribeAppsResponseBody() {}

  explicit DescribeAppsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeAppsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAppsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeAppsResponseBodyData>>(expect1);
      }
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


  virtual ~DescribeAppsResponseBody() = default;
};
class DescribeAppsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAppsResponseBody> body{};

  DescribeAppsResponse() {}

  explicit DescribeAppsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAppsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAppsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAppsResponse() = default;
};
class DescribeBackupFilesRequest : public Darabonba::Model {
public:
  shared_ptr<string> androidInstanceId{};
  shared_ptr<string> androidInstanceName{};
  shared_ptr<string> backupFileId{};
  shared_ptr<string> backupFileName{};
  shared_ptr<string> description{};
  shared_ptr<string> endTime{};
  shared_ptr<string> endUserId{};
  shared_ptr<string> instanceGroupId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> startTime{};

  DescribeBackupFilesRequest() {}

  explicit DescribeBackupFilesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (androidInstanceId) {
      res["AndroidInstanceId"] = boost::any(*androidInstanceId);
    }
    if (androidInstanceName) {
      res["AndroidInstanceName"] = boost::any(*androidInstanceName);
    }
    if (backupFileId) {
      res["BackupFileId"] = boost::any(*backupFileId);
    }
    if (backupFileName) {
      res["BackupFileName"] = boost::any(*backupFileName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (endUserId) {
      res["EndUserId"] = boost::any(*endUserId);
    }
    if (instanceGroupId) {
      res["InstanceGroupId"] = boost::any(*instanceGroupId);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AndroidInstanceId") != m.end() && !m["AndroidInstanceId"].empty()) {
      androidInstanceId = make_shared<string>(boost::any_cast<string>(m["AndroidInstanceId"]));
    }
    if (m.find("AndroidInstanceName") != m.end() && !m["AndroidInstanceName"].empty()) {
      androidInstanceName = make_shared<string>(boost::any_cast<string>(m["AndroidInstanceName"]));
    }
    if (m.find("BackupFileId") != m.end() && !m["BackupFileId"].empty()) {
      backupFileId = make_shared<string>(boost::any_cast<string>(m["BackupFileId"]));
    }
    if (m.find("BackupFileName") != m.end() && !m["BackupFileName"].empty()) {
      backupFileName = make_shared<string>(boost::any_cast<string>(m["BackupFileName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("EndUserId") != m.end() && !m["EndUserId"].empty()) {
      endUserId = make_shared<string>(boost::any_cast<string>(m["EndUserId"]));
    }
    if (m.find("InstanceGroupId") != m.end() && !m["InstanceGroupId"].empty()) {
      instanceGroupId = make_shared<string>(boost::any_cast<string>(m["InstanceGroupId"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeBackupFilesRequest() = default;
};
class DescribeBackupFilesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> androidInstanceId{};
  shared_ptr<string> androidInstanceName{};
  shared_ptr<string> backupFileId{};
  shared_ptr<string> backupFileName{};
  shared_ptr<string> backupFilePath{};
  shared_ptr<string> description{};
  shared_ptr<string> endUserId{};
  shared_ptr<long> fileSize{};
  shared_ptr<string> gmtCreated{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> instanceGroupId{};
  shared_ptr<vector<string>> sourceFilePathList{};
  shared_ptr<string> status{};
  shared_ptr<string> uploadEndpoint{};
  shared_ptr<string> uploadType{};

  DescribeBackupFilesResponseBodyData() {}

  explicit DescribeBackupFilesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (androidInstanceId) {
      res["AndroidInstanceId"] = boost::any(*androidInstanceId);
    }
    if (androidInstanceName) {
      res["AndroidInstanceName"] = boost::any(*androidInstanceName);
    }
    if (backupFileId) {
      res["BackupFileId"] = boost::any(*backupFileId);
    }
    if (backupFileName) {
      res["BackupFileName"] = boost::any(*backupFileName);
    }
    if (backupFilePath) {
      res["BackupFilePath"] = boost::any(*backupFilePath);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (endUserId) {
      res["EndUserId"] = boost::any(*endUserId);
    }
    if (fileSize) {
      res["FileSize"] = boost::any(*fileSize);
    }
    if (gmtCreated) {
      res["GmtCreated"] = boost::any(*gmtCreated);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (instanceGroupId) {
      res["InstanceGroupId"] = boost::any(*instanceGroupId);
    }
    if (sourceFilePathList) {
      res["SourceFilePathList"] = boost::any(*sourceFilePathList);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (uploadEndpoint) {
      res["UploadEndpoint"] = boost::any(*uploadEndpoint);
    }
    if (uploadType) {
      res["UploadType"] = boost::any(*uploadType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AndroidInstanceId") != m.end() && !m["AndroidInstanceId"].empty()) {
      androidInstanceId = make_shared<string>(boost::any_cast<string>(m["AndroidInstanceId"]));
    }
    if (m.find("AndroidInstanceName") != m.end() && !m["AndroidInstanceName"].empty()) {
      androidInstanceName = make_shared<string>(boost::any_cast<string>(m["AndroidInstanceName"]));
    }
    if (m.find("BackupFileId") != m.end() && !m["BackupFileId"].empty()) {
      backupFileId = make_shared<string>(boost::any_cast<string>(m["BackupFileId"]));
    }
    if (m.find("BackupFileName") != m.end() && !m["BackupFileName"].empty()) {
      backupFileName = make_shared<string>(boost::any_cast<string>(m["BackupFileName"]));
    }
    if (m.find("BackupFilePath") != m.end() && !m["BackupFilePath"].empty()) {
      backupFilePath = make_shared<string>(boost::any_cast<string>(m["BackupFilePath"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EndUserId") != m.end() && !m["EndUserId"].empty()) {
      endUserId = make_shared<string>(boost::any_cast<string>(m["EndUserId"]));
    }
    if (m.find("FileSize") != m.end() && !m["FileSize"].empty()) {
      fileSize = make_shared<long>(boost::any_cast<long>(m["FileSize"]));
    }
    if (m.find("GmtCreated") != m.end() && !m["GmtCreated"].empty()) {
      gmtCreated = make_shared<string>(boost::any_cast<string>(m["GmtCreated"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("InstanceGroupId") != m.end() && !m["InstanceGroupId"].empty()) {
      instanceGroupId = make_shared<string>(boost::any_cast<string>(m["InstanceGroupId"]));
    }
    if (m.find("SourceFilePathList") != m.end() && !m["SourceFilePathList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SourceFilePathList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SourceFilePathList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sourceFilePathList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UploadEndpoint") != m.end() && !m["UploadEndpoint"].empty()) {
      uploadEndpoint = make_shared<string>(boost::any_cast<string>(m["UploadEndpoint"]));
    }
    if (m.find("UploadType") != m.end() && !m["UploadType"].empty()) {
      uploadType = make_shared<string>(boost::any_cast<string>(m["UploadType"]));
    }
  }


  virtual ~DescribeBackupFilesResponseBodyData() = default;
};
class DescribeBackupFilesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeBackupFilesResponseBodyData>> data{};
  shared_ptr<string> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeBackupFilesResponseBody() {}

  explicit DescribeBackupFilesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeBackupFilesResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeBackupFilesResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeBackupFilesResponseBodyData>>(expect1);
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
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeBackupFilesResponseBody() = default;
};
class DescribeBackupFilesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeBackupFilesResponseBody> body{};

  DescribeBackupFilesResponse() {}

  explicit DescribeBackupFilesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeBackupFilesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeBackupFilesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeBackupFilesResponse() = default;
};
class DescribeImageListRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageId{};
  shared_ptr<string> imageName{};
  shared_ptr<string> imageType{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> status{};

  DescribeImageListRequest() {}

  explicit DescribeImageListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (imageName) {
      res["ImageName"] = boost::any(*imageName);
    }
    if (imageType) {
      res["ImageType"] = boost::any(*imageType);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("ImageName") != m.end() && !m["ImageName"].empty()) {
      imageName = make_shared<string>(boost::any_cast<string>(m["ImageName"]));
    }
    if (m.find("ImageType") != m.end() && !m["ImageType"].empty()) {
      imageType = make_shared<string>(boost::any_cast<string>(m["ImageType"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeImageListRequest() = default;
};
class DescribeImageListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> aliUid{};
  shared_ptr<string> description{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> imageId{};
  shared_ptr<string> imageName{};
  shared_ptr<map<string, DataImageRegionDistributeMapValue>> imageRegionDistributeMap{};
  shared_ptr<vector<string>> imageRegionList{};
  shared_ptr<string> imageType{};
  shared_ptr<string> language{};
  shared_ptr<string> releaseTime{};
  shared_ptr<string> renderingType{};
  shared_ptr<string> status{};
  shared_ptr<string> systemType{};

  DescribeImageListResponseBodyData() {}

  explicit DescribeImageListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
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
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (imageName) {
      res["ImageName"] = boost::any(*imageName);
    }
    if (imageRegionDistributeMap) {
      map<string, boost::any> temp1;
      for(auto item1:*imageRegionDistributeMap){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["ImageRegionDistributeMap"] = boost::any(temp1);
    }
    if (imageRegionList) {
      res["ImageRegionList"] = boost::any(*imageRegionList);
    }
    if (imageType) {
      res["ImageType"] = boost::any(*imageType);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (releaseTime) {
      res["ReleaseTime"] = boost::any(*releaseTime);
    }
    if (renderingType) {
      res["RenderingType"] = boost::any(*renderingType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (systemType) {
      res["SystemType"] = boost::any(*systemType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<long>(boost::any_cast<long>(m["AliUid"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("ImageName") != m.end() && !m["ImageName"].empty()) {
      imageName = make_shared<string>(boost::any_cast<string>(m["ImageName"]));
    }
    if (m.find("ImageRegionDistributeMap") != m.end() && !m["ImageRegionDistributeMap"].empty()) {
      if (typeid(map<string, boost::any>) == m["ImageRegionDistributeMap"].type()) {
        map<string, DataImageRegionDistributeMapValue> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["ImageRegionDistributeMap"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            DataImageRegionDistributeMapValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        imageRegionDistributeMap = make_shared<map<string, DataImageRegionDistributeMapValue>>(expect1);
      }
    }
    if (m.find("ImageRegionList") != m.end() && !m["ImageRegionList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ImageRegionList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ImageRegionList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      imageRegionList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ImageType") != m.end() && !m["ImageType"].empty()) {
      imageType = make_shared<string>(boost::any_cast<string>(m["ImageType"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("ReleaseTime") != m.end() && !m["ReleaseTime"].empty()) {
      releaseTime = make_shared<string>(boost::any_cast<string>(m["ReleaseTime"]));
    }
    if (m.find("RenderingType") != m.end() && !m["RenderingType"].empty()) {
      renderingType = make_shared<string>(boost::any_cast<string>(m["RenderingType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SystemType") != m.end() && !m["SystemType"].empty()) {
      systemType = make_shared<string>(boost::any_cast<string>(m["SystemType"]));
    }
  }


  virtual ~DescribeImageListResponseBodyData() = default;
};
class DescribeImageListResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeImageListResponseBodyData>> data{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeImageListResponseBody() {}

  explicit DescribeImageListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeImageListResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeImageListResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeImageListResponseBodyData>>(expect1);
      }
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


  virtual ~DescribeImageListResponseBody() = default;
};
class DescribeImageListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeImageListResponseBody> body{};

  DescribeImageListResponse() {}

  explicit DescribeImageListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeImageListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeImageListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeImageListResponse() = default;
};
class DescribeInvocationsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> instanceIds{};
  shared_ptr<string> invocationId{};

  DescribeInvocationsRequest() {}

  explicit DescribeInvocationsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceIds) {
      res["InstanceIds"] = boost::any(*instanceIds);
    }
    if (invocationId) {
      res["InvocationId"] = boost::any(*invocationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceIds") != m.end() && !m["InstanceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("InvocationId") != m.end() && !m["InvocationId"].empty()) {
      invocationId = make_shared<string>(boost::any_cast<string>(m["InvocationId"]));
    }
  }


  virtual ~DescribeInvocationsRequest() = default;
};
class DescribeInvocationsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> finishTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> invocationId{};
  shared_ptr<string> invocationStatus{};
  shared_ptr<string> output{};
  shared_ptr<string> startTime{};

  DescribeInvocationsResponseBodyData() {}

  explicit DescribeInvocationsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (finishTime) {
      res["FinishTime"] = boost::any(*finishTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (invocationId) {
      res["InvocationId"] = boost::any(*invocationId);
    }
    if (invocationStatus) {
      res["InvocationStatus"] = boost::any(*invocationStatus);
    }
    if (output) {
      res["Output"] = boost::any(*output);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FinishTime") != m.end() && !m["FinishTime"].empty()) {
      finishTime = make_shared<string>(boost::any_cast<string>(m["FinishTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InvocationId") != m.end() && !m["InvocationId"].empty()) {
      invocationId = make_shared<string>(boost::any_cast<string>(m["InvocationId"]));
    }
    if (m.find("InvocationStatus") != m.end() && !m["InvocationStatus"].empty()) {
      invocationStatus = make_shared<string>(boost::any_cast<string>(m["InvocationStatus"]));
    }
    if (m.find("Output") != m.end() && !m["Output"].empty()) {
      output = make_shared<string>(boost::any_cast<string>(m["Output"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeInvocationsResponseBodyData() = default;
};
class DescribeInvocationsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeInvocationsResponseBodyData>> data{};
  shared_ptr<string> requestId{};
  shared_ptr<string> totalCount{};

  DescribeInvocationsResponseBody() {}

  explicit DescribeInvocationsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeInvocationsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInvocationsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeInvocationsResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<string>(boost::any_cast<string>(m["TotalCount"]));
    }
  }


  virtual ~DescribeInvocationsResponseBody() = default;
};
class DescribeInvocationsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeInvocationsResponseBody> body{};

  DescribeInvocationsResponse() {}

  explicit DescribeInvocationsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeInvocationsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeInvocationsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeInvocationsResponse() = default;
};
class DescribeKeyPairsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> keyPairIds{};
  shared_ptr<string> keyPairName{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};

  DescribeKeyPairsRequest() {}

  explicit DescribeKeyPairsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPairIds) {
      res["KeyPairIds"] = boost::any(*keyPairIds);
    }
    if (keyPairName) {
      res["KeyPairName"] = boost::any(*keyPairName);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPairIds") != m.end() && !m["KeyPairIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["KeyPairIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["KeyPairIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      keyPairIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("KeyPairName") != m.end() && !m["KeyPairName"].empty()) {
      keyPairName = make_shared<string>(boost::any_cast<string>(m["KeyPairName"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~DescribeKeyPairsRequest() = default;
};
class DescribeKeyPairsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> gmtCreated{};
  shared_ptr<string> keyPairId{};
  shared_ptr<string> keyPairName{};

  DescribeKeyPairsResponseBodyData() {}

  explicit DescribeKeyPairsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtCreated) {
      res["GmtCreated"] = boost::any(*gmtCreated);
    }
    if (keyPairId) {
      res["KeyPairId"] = boost::any(*keyPairId);
    }
    if (keyPairName) {
      res["KeyPairName"] = boost::any(*keyPairName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GmtCreated") != m.end() && !m["GmtCreated"].empty()) {
      gmtCreated = make_shared<string>(boost::any_cast<string>(m["GmtCreated"]));
    }
    if (m.find("KeyPairId") != m.end() && !m["KeyPairId"].empty()) {
      keyPairId = make_shared<string>(boost::any_cast<string>(m["KeyPairId"]));
    }
    if (m.find("KeyPairName") != m.end() && !m["KeyPairName"].empty()) {
      keyPairName = make_shared<string>(boost::any_cast<string>(m["KeyPairName"]));
    }
  }


  virtual ~DescribeKeyPairsResponseBodyData() = default;
};
class DescribeKeyPairsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeKeyPairsResponseBodyData>> data{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeKeyPairsResponseBody() {}

  explicit DescribeKeyPairsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeKeyPairsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeKeyPairsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeKeyPairsResponseBodyData>>(expect1);
      }
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


  virtual ~DescribeKeyPairsResponseBody() = default;
};
class DescribeKeyPairsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeKeyPairsResponseBody> body{};

  DescribeKeyPairsResponse() {}

  explicit DescribeKeyPairsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeKeyPairsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeKeyPairsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeKeyPairsResponse() = default;
};
class DescribeRegionsResponseBodyRegionModels : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  DescribeRegionsResponseBodyRegionModels() {}

  explicit DescribeRegionsResponseBodyRegionModels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeRegionsResponseBodyRegionModels() = default;
};
class DescribeRegionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRegionsResponseBodyRegionModels>> regionModels{};
  shared_ptr<string> requestId{};

  DescribeRegionsResponseBody() {}

  explicit DescribeRegionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionModels) {
      vector<boost::any> temp1;
      for(auto item1:*regionModels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RegionModels"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionModels") != m.end() && !m["RegionModels"].empty()) {
      if (typeid(vector<boost::any>) == m["RegionModels"].type()) {
        vector<DescribeRegionsResponseBodyRegionModels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RegionModels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRegionsResponseBodyRegionModels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        regionModels = make_shared<vector<DescribeRegionsResponseBodyRegionModels>>(expect1);
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
class DescribeSpecRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizRegionId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<string>> specIds{};
  shared_ptr<string> specStatus{};
  shared_ptr<string> specType{};

  DescribeSpecRequest() {}

  explicit DescribeSpecRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizRegionId) {
      res["BizRegionId"] = boost::any(*bizRegionId);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (specIds) {
      res["SpecIds"] = boost::any(*specIds);
    }
    if (specStatus) {
      res["SpecStatus"] = boost::any(*specStatus);
    }
    if (specType) {
      res["SpecType"] = boost::any(*specType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizRegionId") != m.end() && !m["BizRegionId"].empty()) {
      bizRegionId = make_shared<string>(boost::any_cast<string>(m["BizRegionId"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("SpecIds") != m.end() && !m["SpecIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SpecIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SpecIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      specIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SpecStatus") != m.end() && !m["SpecStatus"].empty()) {
      specStatus = make_shared<string>(boost::any_cast<string>(m["SpecStatus"]));
    }
    if (m.find("SpecType") != m.end() && !m["SpecType"].empty()) {
      specType = make_shared<string>(boost::any_cast<string>(m["SpecType"]));
    }
  }


  virtual ~DescribeSpecRequest() = default;
};
class DescribeSpecResponseBodySpecInfoModel : public Darabonba::Model {
public:
  shared_ptr<long> core{};
  shared_ptr<long> memory{};
  shared_ptr<string> specId{};
  shared_ptr<string> specStatus{};
  shared_ptr<string> specType{};
  shared_ptr<long> systemDiskSize{};

  DescribeSpecResponseBodySpecInfoModel() {}

  explicit DescribeSpecResponseBodySpecInfoModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (core) {
      res["Core"] = boost::any(*core);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (specId) {
      res["SpecId"] = boost::any(*specId);
    }
    if (specStatus) {
      res["SpecStatus"] = boost::any(*specStatus);
    }
    if (specType) {
      res["SpecType"] = boost::any(*specType);
    }
    if (systemDiskSize) {
      res["SystemDiskSize"] = boost::any(*systemDiskSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Core") != m.end() && !m["Core"].empty()) {
      core = make_shared<long>(boost::any_cast<long>(m["Core"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<long>(boost::any_cast<long>(m["Memory"]));
    }
    if (m.find("SpecId") != m.end() && !m["SpecId"].empty()) {
      specId = make_shared<string>(boost::any_cast<string>(m["SpecId"]));
    }
    if (m.find("SpecStatus") != m.end() && !m["SpecStatus"].empty()) {
      specStatus = make_shared<string>(boost::any_cast<string>(m["SpecStatus"]));
    }
    if (m.find("SpecType") != m.end() && !m["SpecType"].empty()) {
      specType = make_shared<string>(boost::any_cast<string>(m["SpecType"]));
    }
    if (m.find("SystemDiskSize") != m.end() && !m["SystemDiskSize"].empty()) {
      systemDiskSize = make_shared<long>(boost::any_cast<long>(m["SystemDiskSize"]));
    }
  }


  virtual ~DescribeSpecResponseBodySpecInfoModel() = default;
};
class DescribeSpecResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeSpecResponseBodySpecInfoModel>> specInfoModel{};
  shared_ptr<long> totalCount{};

  DescribeSpecResponseBody() {}

  explicit DescribeSpecResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (specInfoModel) {
      vector<boost::any> temp1;
      for(auto item1:*specInfoModel){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SpecInfoModel"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
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
    if (m.find("SpecInfoModel") != m.end() && !m["SpecInfoModel"].empty()) {
      if (typeid(vector<boost::any>) == m["SpecInfoModel"].type()) {
        vector<DescribeSpecResponseBodySpecInfoModel> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SpecInfoModel"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSpecResponseBodySpecInfoModel model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        specInfoModel = make_shared<vector<DescribeSpecResponseBodySpecInfoModel>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeSpecResponseBody() = default;
};
class DescribeSpecResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSpecResponseBody> body{};

  DescribeSpecResponse() {}

  explicit DescribeSpecResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSpecResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSpecResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSpecResponse() = default;
};
class DescribeTasksRequest : public Darabonba::Model {
public:
  shared_ptr<string> invokeId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<string>> resourceIds{};
  shared_ptr<vector<string>> taskIds{};
  shared_ptr<string> taskStatus{};
  shared_ptr<string> taskType{};

  DescribeTasksRequest() {}

  explicit DescribeTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (invokeId) {
      res["InvokeId"] = boost::any(*invokeId);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (resourceIds) {
      res["ResourceIds"] = boost::any(*resourceIds);
    }
    if (taskIds) {
      res["TaskIds"] = boost::any(*taskIds);
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InvokeId") != m.end() && !m["InvokeId"].empty()) {
      invokeId = make_shared<string>(boost::any_cast<string>(m["InvokeId"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("ResourceIds") != m.end() && !m["ResourceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TaskIds") != m.end() && !m["TaskIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TaskIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TaskIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      taskIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<string>(boost::any_cast<string>(m["TaskStatus"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
  }


  virtual ~DescribeTasksRequest() = default;
};
class DescribeTasksResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> finishTime{};
  shared_ptr<string> invokeId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> result{};
  shared_ptr<string> startTime{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskStatus{};
  shared_ptr<string> taskType{};

  DescribeTasksResponseBodyData() {}

  explicit DescribeTasksResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (finishTime) {
      res["FinishTime"] = boost::any(*finishTime);
    }
    if (invokeId) {
      res["InvokeId"] = boost::any(*invokeId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FinishTime") != m.end() && !m["FinishTime"].empty()) {
      finishTime = make_shared<string>(boost::any_cast<string>(m["FinishTime"]));
    }
    if (m.find("InvokeId") != m.end() && !m["InvokeId"].empty()) {
      invokeId = make_shared<string>(boost::any_cast<string>(m["InvokeId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<string>(boost::any_cast<string>(m["TaskStatus"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
  }


  virtual ~DescribeTasksResponseBodyData() = default;
};
class DescribeTasksResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeTasksResponseBodyData>> data{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeTasksResponseBody() {}

  explicit DescribeTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeTasksResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeTasksResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeTasksResponseBodyData>>(expect1);
      }
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


  virtual ~DescribeTasksResponseBody() = default;
};
class DescribeTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeTasksResponseBody> body{};

  DescribeTasksResponse() {}

  explicit DescribeTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeTasksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeTasksResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeTasksResponse() = default;
};
class DetachKeyPairRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> instanceIds{};
  shared_ptr<string> keyPairId{};

  DetachKeyPairRequest() {}

  explicit DetachKeyPairRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceIds) {
      res["InstanceIds"] = boost::any(*instanceIds);
    }
    if (keyPairId) {
      res["KeyPairId"] = boost::any(*keyPairId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceIds") != m.end() && !m["InstanceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("KeyPairId") != m.end() && !m["KeyPairId"].empty()) {
      keyPairId = make_shared<string>(boost::any_cast<string>(m["KeyPairId"]));
    }
  }


  virtual ~DetachKeyPairRequest() = default;
};
class DetachKeyPairResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<string>> detachedInstanceIds{};
  shared_ptr<long> failCount{};
  shared_ptr<string> keyPairId{};
  shared_ptr<long> totalCount{};

  DetachKeyPairResponseBodyData() {}

  explicit DetachKeyPairResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detachedInstanceIds) {
      res["DetachedInstanceIds"] = boost::any(*detachedInstanceIds);
    }
    if (failCount) {
      res["FailCount"] = boost::any(*failCount);
    }
    if (keyPairId) {
      res["KeyPairId"] = boost::any(*keyPairId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DetachedInstanceIds") != m.end() && !m["DetachedInstanceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DetachedInstanceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DetachedInstanceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      detachedInstanceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("FailCount") != m.end() && !m["FailCount"].empty()) {
      failCount = make_shared<long>(boost::any_cast<long>(m["FailCount"]));
    }
    if (m.find("KeyPairId") != m.end() && !m["KeyPairId"].empty()) {
      keyPairId = make_shared<string>(boost::any_cast<string>(m["KeyPairId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DetachKeyPairResponseBodyData() = default;
};
class DetachKeyPairResponseBody : public Darabonba::Model {
public:
  shared_ptr<DetachKeyPairResponseBodyData> data{};
  shared_ptr<string> requestId{};

  DetachKeyPairResponseBody() {}

  explicit DetachKeyPairResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DetachKeyPairResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DetachKeyPairResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DetachKeyPairResponseBody() = default;
};
class DetachKeyPairResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DetachKeyPairResponseBody> body{};

  DetachKeyPairResponse() {}

  explicit DetachKeyPairResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetachKeyPairResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetachKeyPairResponseBody>(model1);
      }
    }
  }


  virtual ~DetachKeyPairResponse() = default;
};
class DistributeImageRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> distributeRegionList{};
  shared_ptr<string> imageId{};

  DistributeImageRequest() {}

  explicit DistributeImageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (distributeRegionList) {
      res["DistributeRegionList"] = boost::any(*distributeRegionList);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DistributeRegionList") != m.end() && !m["DistributeRegionList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DistributeRegionList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DistributeRegionList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      distributeRegionList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
  }


  virtual ~DistributeImageRequest() = default;
};
class DistributeImageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DistributeImageResponseBody() {}

  explicit DistributeImageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DistributeImageResponseBody() = default;
};
class DistributeImageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DistributeImageResponseBody> body{};

  DistributeImageResponse() {}

  explicit DistributeImageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DistributeImageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DistributeImageResponseBody>(model1);
      }
    }
  }


  virtual ~DistributeImageResponse() = default;
};
class DowngradeAndroidInstanceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> androidInstanceIds{};
  shared_ptr<bool> autoPay{};
  shared_ptr<string> instanceGroupId{};

  DowngradeAndroidInstanceGroupRequest() {}

  explicit DowngradeAndroidInstanceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (androidInstanceIds) {
      res["AndroidInstanceIds"] = boost::any(*androidInstanceIds);
    }
    if (autoPay) {
      res["AutoPay"] = boost::any(*autoPay);
    }
    if (instanceGroupId) {
      res["InstanceGroupId"] = boost::any(*instanceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AndroidInstanceIds") != m.end() && !m["AndroidInstanceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AndroidInstanceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AndroidInstanceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      androidInstanceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("AutoPay") != m.end() && !m["AutoPay"].empty()) {
      autoPay = make_shared<bool>(boost::any_cast<bool>(m["AutoPay"]));
    }
    if (m.find("InstanceGroupId") != m.end() && !m["InstanceGroupId"].empty()) {
      instanceGroupId = make_shared<string>(boost::any_cast<string>(m["InstanceGroupId"]));
    }
  }


  virtual ~DowngradeAndroidInstanceGroupRequest() = default;
};
class DowngradeAndroidInstanceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  DowngradeAndroidInstanceGroupResponseBody() {}

  explicit DowngradeAndroidInstanceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DowngradeAndroidInstanceGroupResponseBody() = default;
};
class DowngradeAndroidInstanceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DowngradeAndroidInstanceGroupResponseBody> body{};

  DowngradeAndroidInstanceGroupResponse() {}

  explicit DowngradeAndroidInstanceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DowngradeAndroidInstanceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DowngradeAndroidInstanceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DowngradeAndroidInstanceGroupResponse() = default;
};
class FetchFileRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> androidInstanceIdList{};
  shared_ptr<string> sourceFilePath{};
  shared_ptr<string> uploadEndpoint{};
  shared_ptr<string> uploadType{};
  shared_ptr<string> uploadUrl{};

  FetchFileRequest() {}

  explicit FetchFileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (androidInstanceIdList) {
      res["AndroidInstanceIdList"] = boost::any(*androidInstanceIdList);
    }
    if (sourceFilePath) {
      res["SourceFilePath"] = boost::any(*sourceFilePath);
    }
    if (uploadEndpoint) {
      res["UploadEndpoint"] = boost::any(*uploadEndpoint);
    }
    if (uploadType) {
      res["UploadType"] = boost::any(*uploadType);
    }
    if (uploadUrl) {
      res["UploadUrl"] = boost::any(*uploadUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AndroidInstanceIdList") != m.end() && !m["AndroidInstanceIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AndroidInstanceIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AndroidInstanceIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      androidInstanceIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SourceFilePath") != m.end() && !m["SourceFilePath"].empty()) {
      sourceFilePath = make_shared<string>(boost::any_cast<string>(m["SourceFilePath"]));
    }
    if (m.find("UploadEndpoint") != m.end() && !m["UploadEndpoint"].empty()) {
      uploadEndpoint = make_shared<string>(boost::any_cast<string>(m["UploadEndpoint"]));
    }
    if (m.find("UploadType") != m.end() && !m["UploadType"].empty()) {
      uploadType = make_shared<string>(boost::any_cast<string>(m["UploadType"]));
    }
    if (m.find("UploadUrl") != m.end() && !m["UploadUrl"].empty()) {
      uploadUrl = make_shared<string>(boost::any_cast<string>(m["UploadUrl"]));
    }
  }


  virtual ~FetchFileRequest() = default;
};
class FetchFileResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> androidInstanceId{};
  shared_ptr<string> taskId{};

  FetchFileResponseBodyData() {}

  explicit FetchFileResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (androidInstanceId) {
      res["AndroidInstanceId"] = boost::any(*androidInstanceId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AndroidInstanceId") != m.end() && !m["AndroidInstanceId"].empty()) {
      androidInstanceId = make_shared<string>(boost::any_cast<string>(m["AndroidInstanceId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~FetchFileResponseBodyData() = default;
};
class FetchFileResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<FetchFileResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  FetchFileResponseBody() {}

  explicit FetchFileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<FetchFileResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            FetchFileResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<FetchFileResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~FetchFileResponseBody() = default;
};
class FetchFileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<FetchFileResponseBody> body{};

  FetchFileResponse() {}

  explicit FetchFileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        FetchFileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FetchFileResponseBody>(model1);
      }
    }
  }


  virtual ~FetchFileResponse() = default;
};
class GetAdbSecureRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> instanceIds{};

  GetAdbSecureRequest() {}

  explicit GetAdbSecureRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceIds) {
      res["InstanceIds"] = boost::any(*instanceIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceIds") != m.end() && !m["InstanceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetAdbSecureRequest() = default;
};
class GetAdbSecureResponseBodyDataAdbSecureList : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> status{};

  GetAdbSecureResponseBodyDataAdbSecureList() {}

  explicit GetAdbSecureResponseBodyDataAdbSecureList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
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
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~GetAdbSecureResponseBodyDataAdbSecureList() = default;
};
class GetAdbSecureResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GetAdbSecureResponseBodyDataAdbSecureList>> adbSecureList{};

  GetAdbSecureResponseBodyData() {}

  explicit GetAdbSecureResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (adbSecureList) {
      vector<boost::any> temp1;
      for(auto item1:*adbSecureList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AdbSecureList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdbSecureList") != m.end() && !m["AdbSecureList"].empty()) {
      if (typeid(vector<boost::any>) == m["AdbSecureList"].type()) {
        vector<GetAdbSecureResponseBodyDataAdbSecureList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AdbSecureList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAdbSecureResponseBodyDataAdbSecureList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        adbSecureList = make_shared<vector<GetAdbSecureResponseBodyDataAdbSecureList>>(expect1);
      }
    }
  }


  virtual ~GetAdbSecureResponseBodyData() = default;
};
class GetAdbSecureResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetAdbSecureResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetAdbSecureResponseBody() {}

  explicit GetAdbSecureResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetAdbSecureResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetAdbSecureResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetAdbSecureResponseBody() = default;
};
class GetAdbSecureResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAdbSecureResponseBody> body{};

  GetAdbSecureResponse() {}

  explicit GetAdbSecureResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAdbSecureResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAdbSecureResponseBody>(model1);
      }
    }
  }


  virtual ~GetAdbSecureResponse() = default;
};
class ImportKeyPairRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyPairName{};
  shared_ptr<string> publicKeyBody{};

  ImportKeyPairRequest() {}

  explicit ImportKeyPairRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPairName) {
      res["KeyPairName"] = boost::any(*keyPairName);
    }
    if (publicKeyBody) {
      res["PublicKeyBody"] = boost::any(*publicKeyBody);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPairName") != m.end() && !m["KeyPairName"].empty()) {
      keyPairName = make_shared<string>(boost::any_cast<string>(m["KeyPairName"]));
    }
    if (m.find("PublicKeyBody") != m.end() && !m["PublicKeyBody"].empty()) {
      publicKeyBody = make_shared<string>(boost::any_cast<string>(m["PublicKeyBody"]));
    }
  }


  virtual ~ImportKeyPairRequest() = default;
};
class ImportKeyPairResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> gmtCreated{};
  shared_ptr<string> keyPairId{};
  shared_ptr<string> keyPairName{};

  ImportKeyPairResponseBodyData() {}

  explicit ImportKeyPairResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtCreated) {
      res["GmtCreated"] = boost::any(*gmtCreated);
    }
    if (keyPairId) {
      res["KeyPairId"] = boost::any(*keyPairId);
    }
    if (keyPairName) {
      res["KeyPairName"] = boost::any(*keyPairName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GmtCreated") != m.end() && !m["GmtCreated"].empty()) {
      gmtCreated = make_shared<string>(boost::any_cast<string>(m["GmtCreated"]));
    }
    if (m.find("KeyPairId") != m.end() && !m["KeyPairId"].empty()) {
      keyPairId = make_shared<string>(boost::any_cast<string>(m["KeyPairId"]));
    }
    if (m.find("KeyPairName") != m.end() && !m["KeyPairName"].empty()) {
      keyPairName = make_shared<string>(boost::any_cast<string>(m["KeyPairName"]));
    }
  }


  virtual ~ImportKeyPairResponseBodyData() = default;
};
class ImportKeyPairResponseBody : public Darabonba::Model {
public:
  shared_ptr<ImportKeyPairResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ImportKeyPairResponseBody() {}

  explicit ImportKeyPairResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ImportKeyPairResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ImportKeyPairResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ImportKeyPairResponseBody() = default;
};
class ImportKeyPairResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ImportKeyPairResponseBody> body{};

  ImportKeyPairResponse() {}

  explicit ImportKeyPairResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ImportKeyPairResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ImportKeyPairResponseBody>(model1);
      }
    }
  }


  virtual ~ImportKeyPairResponse() = default;
};
class InstallAppRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> appIdList{};
  shared_ptr<vector<string>> instanceGroupIdList{};
  shared_ptr<vector<string>> instanceIdList{};

  InstallAppRequest() {}

  explicit InstallAppRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appIdList) {
      res["AppIdList"] = boost::any(*appIdList);
    }
    if (instanceGroupIdList) {
      res["InstanceGroupIdList"] = boost::any(*instanceGroupIdList);
    }
    if (instanceIdList) {
      res["InstanceIdList"] = boost::any(*instanceIdList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppIdList") != m.end() && !m["AppIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AppIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AppIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      appIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("InstanceGroupIdList") != m.end() && !m["InstanceGroupIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceGroupIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceGroupIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceGroupIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("InstanceIdList") != m.end() && !m["InstanceIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceIdList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~InstallAppRequest() = default;
};
class InstallAppResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  InstallAppResponseBody() {}

  explicit InstallAppResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~InstallAppResponseBody() = default;
};
class InstallAppResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<InstallAppResponseBody> body{};

  InstallAppResponse() {}

  explicit InstallAppResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        InstallAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<InstallAppResponseBody>(model1);
      }
    }
  }


  virtual ~InstallAppResponse() = default;
};
class ListPolicyGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<string>> policyGroupIds{};
  shared_ptr<string> policyGroupName{};

  ListPolicyGroupsRequest() {}

  explicit ListPolicyGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (policyGroupIds) {
      res["PolicyGroupIds"] = boost::any(*policyGroupIds);
    }
    if (policyGroupName) {
      res["PolicyGroupName"] = boost::any(*policyGroupName);
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
    if (m.find("PolicyGroupIds") != m.end() && !m["PolicyGroupIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PolicyGroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PolicyGroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      policyGroupIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PolicyGroupName") != m.end() && !m["PolicyGroupName"].empty()) {
      policyGroupName = make_shared<string>(boost::any_cast<string>(m["PolicyGroupName"]));
    }
  }


  virtual ~ListPolicyGroupsRequest() = default;
};
class ListPolicyGroupsResponseBodyPolicyGroupModelNetRedirectPolicy : public Darabonba::Model {
public:
  shared_ptr<string> netRedirect{};

  ListPolicyGroupsResponseBodyPolicyGroupModelNetRedirectPolicy() {}

  explicit ListPolicyGroupsResponseBodyPolicyGroupModelNetRedirectPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (netRedirect) {
      res["NetRedirect"] = boost::any(*netRedirect);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NetRedirect") != m.end() && !m["NetRedirect"].empty()) {
      netRedirect = make_shared<string>(boost::any_cast<string>(m["NetRedirect"]));
    }
  }


  virtual ~ListPolicyGroupsResponseBodyPolicyGroupModelNetRedirectPolicy() = default;
};
class ListPolicyGroupsResponseBodyPolicyGroupModel : public Darabonba::Model {
public:
  shared_ptr<string> cameraRedirect{};
  shared_ptr<string> clipboard{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> html5FileTransfer{};
  shared_ptr<string> localDrive{};
  shared_ptr<string> lockResolution{};
  shared_ptr<ListPolicyGroupsResponseBodyPolicyGroupModelNetRedirectPolicy> netRedirectPolicy{};
  shared_ptr<string> policyGroupId{};
  shared_ptr<string> policyGroupName{};
  shared_ptr<string> sessionResolutionHeight{};
  shared_ptr<string> sessionResolutionWidth{};

  ListPolicyGroupsResponseBodyPolicyGroupModel() {}

  explicit ListPolicyGroupsResponseBodyPolicyGroupModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cameraRedirect) {
      res["CameraRedirect"] = boost::any(*cameraRedirect);
    }
    if (clipboard) {
      res["Clipboard"] = boost::any(*clipboard);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (html5FileTransfer) {
      res["Html5FileTransfer"] = boost::any(*html5FileTransfer);
    }
    if (localDrive) {
      res["LocalDrive"] = boost::any(*localDrive);
    }
    if (lockResolution) {
      res["LockResolution"] = boost::any(*lockResolution);
    }
    if (netRedirectPolicy) {
      res["NetRedirectPolicy"] = netRedirectPolicy ? boost::any(netRedirectPolicy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (policyGroupId) {
      res["PolicyGroupId"] = boost::any(*policyGroupId);
    }
    if (policyGroupName) {
      res["PolicyGroupName"] = boost::any(*policyGroupName);
    }
    if (sessionResolutionHeight) {
      res["SessionResolutionHeight"] = boost::any(*sessionResolutionHeight);
    }
    if (sessionResolutionWidth) {
      res["SessionResolutionWidth"] = boost::any(*sessionResolutionWidth);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CameraRedirect") != m.end() && !m["CameraRedirect"].empty()) {
      cameraRedirect = make_shared<string>(boost::any_cast<string>(m["CameraRedirect"]));
    }
    if (m.find("Clipboard") != m.end() && !m["Clipboard"].empty()) {
      clipboard = make_shared<string>(boost::any_cast<string>(m["Clipboard"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("Html5FileTransfer") != m.end() && !m["Html5FileTransfer"].empty()) {
      html5FileTransfer = make_shared<string>(boost::any_cast<string>(m["Html5FileTransfer"]));
    }
    if (m.find("LocalDrive") != m.end() && !m["LocalDrive"].empty()) {
      localDrive = make_shared<string>(boost::any_cast<string>(m["LocalDrive"]));
    }
    if (m.find("LockResolution") != m.end() && !m["LockResolution"].empty()) {
      lockResolution = make_shared<string>(boost::any_cast<string>(m["LockResolution"]));
    }
    if (m.find("NetRedirectPolicy") != m.end() && !m["NetRedirectPolicy"].empty()) {
      if (typeid(map<string, boost::any>) == m["NetRedirectPolicy"].type()) {
        ListPolicyGroupsResponseBodyPolicyGroupModelNetRedirectPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NetRedirectPolicy"]));
        netRedirectPolicy = make_shared<ListPolicyGroupsResponseBodyPolicyGroupModelNetRedirectPolicy>(model1);
      }
    }
    if (m.find("PolicyGroupId") != m.end() && !m["PolicyGroupId"].empty()) {
      policyGroupId = make_shared<string>(boost::any_cast<string>(m["PolicyGroupId"]));
    }
    if (m.find("PolicyGroupName") != m.end() && !m["PolicyGroupName"].empty()) {
      policyGroupName = make_shared<string>(boost::any_cast<string>(m["PolicyGroupName"]));
    }
    if (m.find("SessionResolutionHeight") != m.end() && !m["SessionResolutionHeight"].empty()) {
      sessionResolutionHeight = make_shared<string>(boost::any_cast<string>(m["SessionResolutionHeight"]));
    }
    if (m.find("SessionResolutionWidth") != m.end() && !m["SessionResolutionWidth"].empty()) {
      sessionResolutionWidth = make_shared<string>(boost::any_cast<string>(m["SessionResolutionWidth"]));
    }
  }


  virtual ~ListPolicyGroupsResponseBodyPolicyGroupModel() = default;
};
class ListPolicyGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<vector<ListPolicyGroupsResponseBodyPolicyGroupModel>> policyGroupModel{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListPolicyGroupsResponseBody() {}

  explicit ListPolicyGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (policyGroupModel) {
      vector<boost::any> temp1;
      for(auto item1:*policyGroupModel){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PolicyGroupModel"] = boost::any(temp1);
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
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("PolicyGroupModel") != m.end() && !m["PolicyGroupModel"].empty()) {
      if (typeid(vector<boost::any>) == m["PolicyGroupModel"].type()) {
        vector<ListPolicyGroupsResponseBodyPolicyGroupModel> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PolicyGroupModel"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPolicyGroupsResponseBodyPolicyGroupModel model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        policyGroupModel = make_shared<vector<ListPolicyGroupsResponseBodyPolicyGroupModel>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListPolicyGroupsResponseBody() = default;
};
class ListPolicyGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListPolicyGroupsResponseBody> body{};

  ListPolicyGroupsResponse() {}

  explicit ListPolicyGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListPolicyGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPolicyGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~ListPolicyGroupsResponse() = default;
};
class ModifyAndroidInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> androidInstanceId{};
  shared_ptr<string> newAndroidInstanceName{};

  ModifyAndroidInstanceRequest() {}

  explicit ModifyAndroidInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (androidInstanceId) {
      res["AndroidInstanceId"] = boost::any(*androidInstanceId);
    }
    if (newAndroidInstanceName) {
      res["NewAndroidInstanceName"] = boost::any(*newAndroidInstanceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AndroidInstanceId") != m.end() && !m["AndroidInstanceId"].empty()) {
      androidInstanceId = make_shared<string>(boost::any_cast<string>(m["AndroidInstanceId"]));
    }
    if (m.find("NewAndroidInstanceName") != m.end() && !m["NewAndroidInstanceName"].empty()) {
      newAndroidInstanceName = make_shared<string>(boost::any_cast<string>(m["NewAndroidInstanceName"]));
    }
  }


  virtual ~ModifyAndroidInstanceRequest() = default;
};
class ModifyAndroidInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyAndroidInstanceResponseBody() {}

  explicit ModifyAndroidInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyAndroidInstanceResponseBody() = default;
};
class ModifyAndroidInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyAndroidInstanceResponseBody> body{};

  ModifyAndroidInstanceResponse() {}

  explicit ModifyAndroidInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyAndroidInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyAndroidInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyAndroidInstanceResponse() = default;
};
class ModifyAndroidInstanceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceGroupId{};
  shared_ptr<string> newInstanceGroupName{};
  shared_ptr<string> policyGroupId{};

  ModifyAndroidInstanceGroupRequest() {}

  explicit ModifyAndroidInstanceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceGroupId) {
      res["InstanceGroupId"] = boost::any(*instanceGroupId);
    }
    if (newInstanceGroupName) {
      res["NewInstanceGroupName"] = boost::any(*newInstanceGroupName);
    }
    if (policyGroupId) {
      res["PolicyGroupId"] = boost::any(*policyGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceGroupId") != m.end() && !m["InstanceGroupId"].empty()) {
      instanceGroupId = make_shared<string>(boost::any_cast<string>(m["InstanceGroupId"]));
    }
    if (m.find("NewInstanceGroupName") != m.end() && !m["NewInstanceGroupName"].empty()) {
      newInstanceGroupName = make_shared<string>(boost::any_cast<string>(m["NewInstanceGroupName"]));
    }
    if (m.find("PolicyGroupId") != m.end() && !m["PolicyGroupId"].empty()) {
      policyGroupId = make_shared<string>(boost::any_cast<string>(m["PolicyGroupId"]));
    }
  }


  virtual ~ModifyAndroidInstanceGroupRequest() = default;
};
class ModifyAndroidInstanceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyAndroidInstanceGroupResponseBody() {}

  explicit ModifyAndroidInstanceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyAndroidInstanceGroupResponseBody() = default;
};
class ModifyAndroidInstanceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyAndroidInstanceGroupResponseBody> body{};

  ModifyAndroidInstanceGroupResponse() {}

  explicit ModifyAndroidInstanceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyAndroidInstanceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyAndroidInstanceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyAndroidInstanceGroupResponse() = default;
};
class ModifyAppRequest : public Darabonba::Model {
public:
  shared_ptr<long> appId{};
  shared_ptr<string> appName{};
  shared_ptr<string> description{};
  shared_ptr<string> iconUrl{};

  ModifyAppRequest() {}

  explicit ModifyAppRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (iconUrl) {
      res["IconUrl"] = boost::any(*iconUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<long>(boost::any_cast<long>(m["AppId"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("IconUrl") != m.end() && !m["IconUrl"].empty()) {
      iconUrl = make_shared<string>(boost::any_cast<string>(m["IconUrl"]));
    }
  }


  virtual ~ModifyAppRequest() = default;
};
class ModifyAppResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyAppResponseBody() {}

  explicit ModifyAppResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyAppResponseBody() = default;
};
class ModifyAppResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyAppResponseBody> body{};

  ModifyAppResponse() {}

  explicit ModifyAppResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyAppResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyAppResponse() = default;
};
class ModifyKeyPairNameRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyPairId{};
  shared_ptr<string> newKeyPairName{};

  ModifyKeyPairNameRequest() {}

  explicit ModifyKeyPairNameRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPairId) {
      res["KeyPairId"] = boost::any(*keyPairId);
    }
    if (newKeyPairName) {
      res["NewKeyPairName"] = boost::any(*newKeyPairName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPairId") != m.end() && !m["KeyPairId"].empty()) {
      keyPairId = make_shared<string>(boost::any_cast<string>(m["KeyPairId"]));
    }
    if (m.find("NewKeyPairName") != m.end() && !m["NewKeyPairName"].empty()) {
      newKeyPairName = make_shared<string>(boost::any_cast<string>(m["NewKeyPairName"]));
    }
  }


  virtual ~ModifyKeyPairNameRequest() = default;
};
class ModifyKeyPairNameResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyKeyPairNameResponseBody() {}

  explicit ModifyKeyPairNameResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyKeyPairNameResponseBody() = default;
};
class ModifyKeyPairNameResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyKeyPairNameResponseBody> body{};

  ModifyKeyPairNameResponse() {}

  explicit ModifyKeyPairNameResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyKeyPairNameResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyKeyPairNameResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyKeyPairNameResponse() = default;
};
class ModifyPolicyGroupRequestNetRedirectPolicy : public Darabonba::Model {
public:
  shared_ptr<string> netRedirect{};

  ModifyPolicyGroupRequestNetRedirectPolicy() {}

  explicit ModifyPolicyGroupRequestNetRedirectPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (netRedirect) {
      res["NetRedirect"] = boost::any(*netRedirect);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NetRedirect") != m.end() && !m["NetRedirect"].empty()) {
      netRedirect = make_shared<string>(boost::any_cast<string>(m["NetRedirect"]));
    }
  }


  virtual ~ModifyPolicyGroupRequestNetRedirectPolicy() = default;
};
class ModifyPolicyGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> cameraRedirect{};
  shared_ptr<string> clipboard{};
  shared_ptr<string> html5FileTransfer{};
  shared_ptr<string> localDrive{};
  shared_ptr<string> lockResolution{};
  shared_ptr<ModifyPolicyGroupRequestNetRedirectPolicy> netRedirectPolicy{};
  shared_ptr<string> policyGroupId{};
  shared_ptr<string> policyGroupName{};
  shared_ptr<long> resolutionHeight{};
  shared_ptr<long> resolutionWidth{};

  ModifyPolicyGroupRequest() {}

  explicit ModifyPolicyGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cameraRedirect) {
      res["CameraRedirect"] = boost::any(*cameraRedirect);
    }
    if (clipboard) {
      res["Clipboard"] = boost::any(*clipboard);
    }
    if (html5FileTransfer) {
      res["Html5FileTransfer"] = boost::any(*html5FileTransfer);
    }
    if (localDrive) {
      res["LocalDrive"] = boost::any(*localDrive);
    }
    if (lockResolution) {
      res["LockResolution"] = boost::any(*lockResolution);
    }
    if (netRedirectPolicy) {
      res["NetRedirectPolicy"] = netRedirectPolicy ? boost::any(netRedirectPolicy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (policyGroupId) {
      res["PolicyGroupId"] = boost::any(*policyGroupId);
    }
    if (policyGroupName) {
      res["PolicyGroupName"] = boost::any(*policyGroupName);
    }
    if (resolutionHeight) {
      res["ResolutionHeight"] = boost::any(*resolutionHeight);
    }
    if (resolutionWidth) {
      res["ResolutionWidth"] = boost::any(*resolutionWidth);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CameraRedirect") != m.end() && !m["CameraRedirect"].empty()) {
      cameraRedirect = make_shared<string>(boost::any_cast<string>(m["CameraRedirect"]));
    }
    if (m.find("Clipboard") != m.end() && !m["Clipboard"].empty()) {
      clipboard = make_shared<string>(boost::any_cast<string>(m["Clipboard"]));
    }
    if (m.find("Html5FileTransfer") != m.end() && !m["Html5FileTransfer"].empty()) {
      html5FileTransfer = make_shared<string>(boost::any_cast<string>(m["Html5FileTransfer"]));
    }
    if (m.find("LocalDrive") != m.end() && !m["LocalDrive"].empty()) {
      localDrive = make_shared<string>(boost::any_cast<string>(m["LocalDrive"]));
    }
    if (m.find("LockResolution") != m.end() && !m["LockResolution"].empty()) {
      lockResolution = make_shared<string>(boost::any_cast<string>(m["LockResolution"]));
    }
    if (m.find("NetRedirectPolicy") != m.end() && !m["NetRedirectPolicy"].empty()) {
      if (typeid(map<string, boost::any>) == m["NetRedirectPolicy"].type()) {
        ModifyPolicyGroupRequestNetRedirectPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NetRedirectPolicy"]));
        netRedirectPolicy = make_shared<ModifyPolicyGroupRequestNetRedirectPolicy>(model1);
      }
    }
    if (m.find("PolicyGroupId") != m.end() && !m["PolicyGroupId"].empty()) {
      policyGroupId = make_shared<string>(boost::any_cast<string>(m["PolicyGroupId"]));
    }
    if (m.find("PolicyGroupName") != m.end() && !m["PolicyGroupName"].empty()) {
      policyGroupName = make_shared<string>(boost::any_cast<string>(m["PolicyGroupName"]));
    }
    if (m.find("ResolutionHeight") != m.end() && !m["ResolutionHeight"].empty()) {
      resolutionHeight = make_shared<long>(boost::any_cast<long>(m["ResolutionHeight"]));
    }
    if (m.find("ResolutionWidth") != m.end() && !m["ResolutionWidth"].empty()) {
      resolutionWidth = make_shared<long>(boost::any_cast<long>(m["ResolutionWidth"]));
    }
  }


  virtual ~ModifyPolicyGroupRequest() = default;
};
class ModifyPolicyGroupShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> cameraRedirect{};
  shared_ptr<string> clipboard{};
  shared_ptr<string> html5FileTransfer{};
  shared_ptr<string> localDrive{};
  shared_ptr<string> lockResolution{};
  shared_ptr<string> netRedirectPolicyShrink{};
  shared_ptr<string> policyGroupId{};
  shared_ptr<string> policyGroupName{};
  shared_ptr<long> resolutionHeight{};
  shared_ptr<long> resolutionWidth{};

  ModifyPolicyGroupShrinkRequest() {}

  explicit ModifyPolicyGroupShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cameraRedirect) {
      res["CameraRedirect"] = boost::any(*cameraRedirect);
    }
    if (clipboard) {
      res["Clipboard"] = boost::any(*clipboard);
    }
    if (html5FileTransfer) {
      res["Html5FileTransfer"] = boost::any(*html5FileTransfer);
    }
    if (localDrive) {
      res["LocalDrive"] = boost::any(*localDrive);
    }
    if (lockResolution) {
      res["LockResolution"] = boost::any(*lockResolution);
    }
    if (netRedirectPolicyShrink) {
      res["NetRedirectPolicy"] = boost::any(*netRedirectPolicyShrink);
    }
    if (policyGroupId) {
      res["PolicyGroupId"] = boost::any(*policyGroupId);
    }
    if (policyGroupName) {
      res["PolicyGroupName"] = boost::any(*policyGroupName);
    }
    if (resolutionHeight) {
      res["ResolutionHeight"] = boost::any(*resolutionHeight);
    }
    if (resolutionWidth) {
      res["ResolutionWidth"] = boost::any(*resolutionWidth);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CameraRedirect") != m.end() && !m["CameraRedirect"].empty()) {
      cameraRedirect = make_shared<string>(boost::any_cast<string>(m["CameraRedirect"]));
    }
    if (m.find("Clipboard") != m.end() && !m["Clipboard"].empty()) {
      clipboard = make_shared<string>(boost::any_cast<string>(m["Clipboard"]));
    }
    if (m.find("Html5FileTransfer") != m.end() && !m["Html5FileTransfer"].empty()) {
      html5FileTransfer = make_shared<string>(boost::any_cast<string>(m["Html5FileTransfer"]));
    }
    if (m.find("LocalDrive") != m.end() && !m["LocalDrive"].empty()) {
      localDrive = make_shared<string>(boost::any_cast<string>(m["LocalDrive"]));
    }
    if (m.find("LockResolution") != m.end() && !m["LockResolution"].empty()) {
      lockResolution = make_shared<string>(boost::any_cast<string>(m["LockResolution"]));
    }
    if (m.find("NetRedirectPolicy") != m.end() && !m["NetRedirectPolicy"].empty()) {
      netRedirectPolicyShrink = make_shared<string>(boost::any_cast<string>(m["NetRedirectPolicy"]));
    }
    if (m.find("PolicyGroupId") != m.end() && !m["PolicyGroupId"].empty()) {
      policyGroupId = make_shared<string>(boost::any_cast<string>(m["PolicyGroupId"]));
    }
    if (m.find("PolicyGroupName") != m.end() && !m["PolicyGroupName"].empty()) {
      policyGroupName = make_shared<string>(boost::any_cast<string>(m["PolicyGroupName"]));
    }
    if (m.find("ResolutionHeight") != m.end() && !m["ResolutionHeight"].empty()) {
      resolutionHeight = make_shared<long>(boost::any_cast<long>(m["ResolutionHeight"]));
    }
    if (m.find("ResolutionWidth") != m.end() && !m["ResolutionWidth"].empty()) {
      resolutionWidth = make_shared<long>(boost::any_cast<long>(m["ResolutionWidth"]));
    }
  }


  virtual ~ModifyPolicyGroupShrinkRequest() = default;
};
class ModifyPolicyGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyPolicyGroupResponseBody() {}

  explicit ModifyPolicyGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyPolicyGroupResponseBody() = default;
};
class ModifyPolicyGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyPolicyGroupResponseBody> body{};

  ModifyPolicyGroupResponse() {}

  explicit ModifyPolicyGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyPolicyGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyPolicyGroupResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyPolicyGroupResponse() = default;
};
class RebootAndroidInstancesInGroupRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> androidInstanceIds{};
  shared_ptr<bool> forceStop{};

  RebootAndroidInstancesInGroupRequest() {}

  explicit RebootAndroidInstancesInGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (androidInstanceIds) {
      res["AndroidInstanceIds"] = boost::any(*androidInstanceIds);
    }
    if (forceStop) {
      res["ForceStop"] = boost::any(*forceStop);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AndroidInstanceIds") != m.end() && !m["AndroidInstanceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AndroidInstanceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AndroidInstanceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      androidInstanceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ForceStop") != m.end() && !m["ForceStop"].empty()) {
      forceStop = make_shared<bool>(boost::any_cast<bool>(m["ForceStop"]));
    }
  }


  virtual ~RebootAndroidInstancesInGroupRequest() = default;
};
class RebootAndroidInstancesInGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RebootAndroidInstancesInGroupResponseBody() {}

  explicit RebootAndroidInstancesInGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RebootAndroidInstancesInGroupResponseBody() = default;
};
class RebootAndroidInstancesInGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RebootAndroidInstancesInGroupResponseBody> body{};

  RebootAndroidInstancesInGroupResponse() {}

  explicit RebootAndroidInstancesInGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RebootAndroidInstancesInGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RebootAndroidInstancesInGroupResponseBody>(model1);
      }
    }
  }


  virtual ~RebootAndroidInstancesInGroupResponse() = default;
};
class RecoveryFileRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> androidInstanceIdList{};
  shared_ptr<string> backupFileId{};
  shared_ptr<string> backupFilePath{};
  shared_ptr<string> uploadEndpoint{};
  shared_ptr<string> uploadType{};

  RecoveryFileRequest() {}

  explicit RecoveryFileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (androidInstanceIdList) {
      res["AndroidInstanceIdList"] = boost::any(*androidInstanceIdList);
    }
    if (backupFileId) {
      res["BackupFileId"] = boost::any(*backupFileId);
    }
    if (backupFilePath) {
      res["BackupFilePath"] = boost::any(*backupFilePath);
    }
    if (uploadEndpoint) {
      res["UploadEndpoint"] = boost::any(*uploadEndpoint);
    }
    if (uploadType) {
      res["UploadType"] = boost::any(*uploadType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AndroidInstanceIdList") != m.end() && !m["AndroidInstanceIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AndroidInstanceIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AndroidInstanceIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      androidInstanceIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("BackupFileId") != m.end() && !m["BackupFileId"].empty()) {
      backupFileId = make_shared<string>(boost::any_cast<string>(m["BackupFileId"]));
    }
    if (m.find("BackupFilePath") != m.end() && !m["BackupFilePath"].empty()) {
      backupFilePath = make_shared<string>(boost::any_cast<string>(m["BackupFilePath"]));
    }
    if (m.find("UploadEndpoint") != m.end() && !m["UploadEndpoint"].empty()) {
      uploadEndpoint = make_shared<string>(boost::any_cast<string>(m["UploadEndpoint"]));
    }
    if (m.find("UploadType") != m.end() && !m["UploadType"].empty()) {
      uploadType = make_shared<string>(boost::any_cast<string>(m["UploadType"]));
    }
  }


  virtual ~RecoveryFileRequest() = default;
};
class RecoveryFileResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> androidInstanceId{};
  shared_ptr<string> taskId{};

  RecoveryFileResponseBodyData() {}

  explicit RecoveryFileResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (androidInstanceId) {
      res["AndroidInstanceId"] = boost::any(*androidInstanceId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AndroidInstanceId") != m.end() && !m["AndroidInstanceId"].empty()) {
      androidInstanceId = make_shared<string>(boost::any_cast<string>(m["AndroidInstanceId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~RecoveryFileResponseBodyData() = default;
};
class RecoveryFileResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<vector<RecoveryFileResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  RecoveryFileResponseBody() {}

  explicit RecoveryFileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<RecoveryFileResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecoveryFileResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<RecoveryFileResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecoveryFileResponseBody() = default;
};
class RecoveryFileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecoveryFileResponseBody> body{};

  RecoveryFileResponse() {}

  explicit RecoveryFileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecoveryFileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecoveryFileResponseBody>(model1);
      }
    }
  }


  virtual ~RecoveryFileResponse() = default;
};
class RenewAndroidInstanceGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<bool> autoPay{};
  shared_ptr<vector<string>> instanceGroupIds{};
  shared_ptr<long> period{};
  shared_ptr<string> periodUnit{};

  RenewAndroidInstanceGroupsRequest() {}

  explicit RenewAndroidInstanceGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoPay) {
      res["AutoPay"] = boost::any(*autoPay);
    }
    if (instanceGroupIds) {
      res["InstanceGroupIds"] = boost::any(*instanceGroupIds);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (periodUnit) {
      res["PeriodUnit"] = boost::any(*periodUnit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoPay") != m.end() && !m["AutoPay"].empty()) {
      autoPay = make_shared<bool>(boost::any_cast<bool>(m["AutoPay"]));
    }
    if (m.find("InstanceGroupIds") != m.end() && !m["InstanceGroupIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceGroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceGroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceGroupIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("PeriodUnit") != m.end() && !m["PeriodUnit"].empty()) {
      periodUnit = make_shared<string>(boost::any_cast<string>(m["PeriodUnit"]));
    }
  }


  virtual ~RenewAndroidInstanceGroupsRequest() = default;
};
class RenewAndroidInstanceGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  RenewAndroidInstanceGroupsResponseBody() {}

  explicit RenewAndroidInstanceGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RenewAndroidInstanceGroupsResponseBody() = default;
};
class RenewAndroidInstanceGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RenewAndroidInstanceGroupsResponseBody> body{};

  RenewAndroidInstanceGroupsResponse() {}

  explicit RenewAndroidInstanceGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RenewAndroidInstanceGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RenewAndroidInstanceGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~RenewAndroidInstanceGroupsResponse() = default;
};
class ResetAndroidInstancesInGroupRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> androidInstanceIds{};

  ResetAndroidInstancesInGroupRequest() {}

  explicit ResetAndroidInstancesInGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (androidInstanceIds) {
      res["AndroidInstanceIds"] = boost::any(*androidInstanceIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AndroidInstanceIds") != m.end() && !m["AndroidInstanceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AndroidInstanceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AndroidInstanceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      androidInstanceIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ResetAndroidInstancesInGroupRequest() = default;
};
class ResetAndroidInstancesInGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ResetAndroidInstancesInGroupResponseBody() {}

  explicit ResetAndroidInstancesInGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ResetAndroidInstancesInGroupResponseBody() = default;
};
class ResetAndroidInstancesInGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ResetAndroidInstancesInGroupResponseBody> body{};

  ResetAndroidInstancesInGroupResponse() {}

  explicit ResetAndroidInstancesInGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ResetAndroidInstancesInGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ResetAndroidInstancesInGroupResponseBody>(model1);
      }
    }
  }


  virtual ~ResetAndroidInstancesInGroupResponse() = default;
};
class RunCommandRequest : public Darabonba::Model {
public:
  shared_ptr<string> commandContent{};
  shared_ptr<vector<string>> instanceIds{};
  shared_ptr<long> timeout{};

  RunCommandRequest() {}

  explicit RunCommandRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commandContent) {
      res["CommandContent"] = boost::any(*commandContent);
    }
    if (instanceIds) {
      res["InstanceIds"] = boost::any(*instanceIds);
    }
    if (timeout) {
      res["Timeout"] = boost::any(*timeout);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CommandContent") != m.end() && !m["CommandContent"].empty()) {
      commandContent = make_shared<string>(boost::any_cast<string>(m["CommandContent"]));
    }
    if (m.find("InstanceIds") != m.end() && !m["InstanceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Timeout") != m.end() && !m["Timeout"].empty()) {
      timeout = make_shared<long>(boost::any_cast<long>(m["Timeout"]));
    }
  }


  virtual ~RunCommandRequest() = default;
};
class RunCommandResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> invokeId{};
  shared_ptr<string> requestId{};

  RunCommandResponseBody() {}

  explicit RunCommandResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (invokeId) {
      res["InvokeId"] = boost::any(*invokeId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InvokeId") != m.end() && !m["InvokeId"].empty()) {
      invokeId = make_shared<string>(boost::any_cast<string>(m["InvokeId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RunCommandResponseBody() = default;
};
class RunCommandResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RunCommandResponseBody> body{};

  RunCommandResponse() {}

  explicit RunCommandResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RunCommandResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RunCommandResponseBody>(model1);
      }
    }
  }


  virtual ~RunCommandResponse() = default;
};
class SendFileRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> androidInstanceIdList{};
  shared_ptr<string> sourceFilePath{};
  shared_ptr<string> uploadEndpoint{};
  shared_ptr<string> uploadType{};
  shared_ptr<string> uploadUrl{};

  SendFileRequest() {}

  explicit SendFileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (androidInstanceIdList) {
      res["AndroidInstanceIdList"] = boost::any(*androidInstanceIdList);
    }
    if (sourceFilePath) {
      res["SourceFilePath"] = boost::any(*sourceFilePath);
    }
    if (uploadEndpoint) {
      res["UploadEndpoint"] = boost::any(*uploadEndpoint);
    }
    if (uploadType) {
      res["UploadType"] = boost::any(*uploadType);
    }
    if (uploadUrl) {
      res["UploadUrl"] = boost::any(*uploadUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AndroidInstanceIdList") != m.end() && !m["AndroidInstanceIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AndroidInstanceIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AndroidInstanceIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      androidInstanceIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SourceFilePath") != m.end() && !m["SourceFilePath"].empty()) {
      sourceFilePath = make_shared<string>(boost::any_cast<string>(m["SourceFilePath"]));
    }
    if (m.find("UploadEndpoint") != m.end() && !m["UploadEndpoint"].empty()) {
      uploadEndpoint = make_shared<string>(boost::any_cast<string>(m["UploadEndpoint"]));
    }
    if (m.find("UploadType") != m.end() && !m["UploadType"].empty()) {
      uploadType = make_shared<string>(boost::any_cast<string>(m["UploadType"]));
    }
    if (m.find("UploadUrl") != m.end() && !m["UploadUrl"].empty()) {
      uploadUrl = make_shared<string>(boost::any_cast<string>(m["UploadUrl"]));
    }
  }


  virtual ~SendFileRequest() = default;
};
class SendFileResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> androidInstanceId{};
  shared_ptr<string> taskId{};

  SendFileResponseBodyData() {}

  explicit SendFileResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (androidInstanceId) {
      res["AndroidInstanceId"] = boost::any(*androidInstanceId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AndroidInstanceId") != m.end() && !m["AndroidInstanceId"].empty()) {
      androidInstanceId = make_shared<string>(boost::any_cast<string>(m["AndroidInstanceId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~SendFileResponseBodyData() = default;
};
class SendFileResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<SendFileResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  SendFileResponseBody() {}

  explicit SendFileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<SendFileResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SendFileResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<SendFileResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SendFileResponseBody() = default;
};
class SendFileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SendFileResponseBody> body{};

  SendFileResponse() {}

  explicit SendFileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SendFileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SendFileResponseBody>(model1);
      }
    }
  }


  virtual ~SendFileResponse() = default;
};
class SetAdbSecureRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> instanceIds{};
  shared_ptr<long> status{};

  SetAdbSecureRequest() {}

  explicit SetAdbSecureRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceIds) {
      res["InstanceIds"] = boost::any(*instanceIds);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceIds") != m.end() && !m["InstanceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~SetAdbSecureRequest() = default;
};
class SetAdbSecureResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> failCount{};
  shared_ptr<vector<string>> instanceIds{};
  shared_ptr<long> totalCount{};

  SetAdbSecureResponseBodyData() {}

  explicit SetAdbSecureResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (failCount) {
      res["FailCount"] = boost::any(*failCount);
    }
    if (instanceIds) {
      res["InstanceIds"] = boost::any(*instanceIds);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FailCount") != m.end() && !m["FailCount"].empty()) {
      failCount = make_shared<long>(boost::any_cast<long>(m["FailCount"]));
    }
    if (m.find("InstanceIds") != m.end() && !m["InstanceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~SetAdbSecureResponseBodyData() = default;
};
class SetAdbSecureResponseBody : public Darabonba::Model {
public:
  shared_ptr<SetAdbSecureResponseBodyData> data{};
  shared_ptr<string> requestId{};

  SetAdbSecureResponseBody() {}

  explicit SetAdbSecureResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        SetAdbSecureResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SetAdbSecureResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SetAdbSecureResponseBody() = default;
};
class SetAdbSecureResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetAdbSecureResponseBody> body{};

  SetAdbSecureResponse() {}

  explicit SetAdbSecureResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetAdbSecureResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetAdbSecureResponseBody>(model1);
      }
    }
  }


  virtual ~SetAdbSecureResponse() = default;
};
class StartAndroidInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> androidInstanceIds{};

  StartAndroidInstanceRequest() {}

  explicit StartAndroidInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (androidInstanceIds) {
      res["AndroidInstanceIds"] = boost::any(*androidInstanceIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AndroidInstanceIds") != m.end() && !m["AndroidInstanceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AndroidInstanceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AndroidInstanceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      androidInstanceIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~StartAndroidInstanceRequest() = default;
};
class StartAndroidInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  StartAndroidInstanceResponseBody() {}

  explicit StartAndroidInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StartAndroidInstanceResponseBody() = default;
};
class StartAndroidInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StartAndroidInstanceResponseBody> body{};

  StartAndroidInstanceResponse() {}

  explicit StartAndroidInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartAndroidInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartAndroidInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~StartAndroidInstanceResponse() = default;
};
class StopAndroidInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> androidInstanceIds{};
  shared_ptr<bool> forceStop{};

  StopAndroidInstanceRequest() {}

  explicit StopAndroidInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (androidInstanceIds) {
      res["AndroidInstanceIds"] = boost::any(*androidInstanceIds);
    }
    if (forceStop) {
      res["ForceStop"] = boost::any(*forceStop);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AndroidInstanceIds") != m.end() && !m["AndroidInstanceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AndroidInstanceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AndroidInstanceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      androidInstanceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ForceStop") != m.end() && !m["ForceStop"].empty()) {
      forceStop = make_shared<bool>(boost::any_cast<bool>(m["ForceStop"]));
    }
  }


  virtual ~StopAndroidInstanceRequest() = default;
};
class StopAndroidInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  StopAndroidInstanceResponseBody() {}

  explicit StopAndroidInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StopAndroidInstanceResponseBody() = default;
};
class StopAndroidInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopAndroidInstanceResponseBody> body{};

  StopAndroidInstanceResponse() {}

  explicit StopAndroidInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopAndroidInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopAndroidInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~StopAndroidInstanceResponse() = default;
};
class UninstallAppRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> appIdList{};
  shared_ptr<vector<string>> instanceGroupIdList{};

  UninstallAppRequest() {}

  explicit UninstallAppRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appIdList) {
      res["AppIdList"] = boost::any(*appIdList);
    }
    if (instanceGroupIdList) {
      res["InstanceGroupIdList"] = boost::any(*instanceGroupIdList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppIdList") != m.end() && !m["AppIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AppIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AppIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      appIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("InstanceGroupIdList") != m.end() && !m["InstanceGroupIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceGroupIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceGroupIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceGroupIdList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UninstallAppRequest() = default;
};
class UninstallAppResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UninstallAppResponseBody() {}

  explicit UninstallAppResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UninstallAppResponseBody() = default;
};
class UninstallAppResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UninstallAppResponseBody> body{};

  UninstallAppResponse() {}

  explicit UninstallAppResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UninstallAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UninstallAppResponseBody>(model1);
      }
    }
  }


  virtual ~UninstallAppResponse() = default;
};
class UpdateCustomImageNameRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageId{};
  shared_ptr<string> imageName{};

  UpdateCustomImageNameRequest() {}

  explicit UpdateCustomImageNameRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (imageName) {
      res["ImageName"] = boost::any(*imageName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("ImageName") != m.end() && !m["ImageName"].empty()) {
      imageName = make_shared<string>(boost::any_cast<string>(m["ImageName"]));
    }
  }


  virtual ~UpdateCustomImageNameRequest() = default;
};
class UpdateCustomImageNameResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateCustomImageNameResponseBody() {}

  explicit UpdateCustomImageNameResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateCustomImageNameResponseBody() = default;
};
class UpdateCustomImageNameResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateCustomImageNameResponseBody> body{};

  UpdateCustomImageNameResponse() {}

  explicit UpdateCustomImageNameResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateCustomImageNameResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateCustomImageNameResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateCustomImageNameResponse() = default;
};
class UpdateInstanceGroupImageRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageId{};
  shared_ptr<vector<string>> instanceGroupIds{};

  UpdateInstanceGroupImageRequest() {}

  explicit UpdateInstanceGroupImageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (instanceGroupIds) {
      res["InstanceGroupIds"] = boost::any(*instanceGroupIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("InstanceGroupIds") != m.end() && !m["InstanceGroupIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceGroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceGroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceGroupIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateInstanceGroupImageRequest() = default;
};
class UpdateInstanceGroupImageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateInstanceGroupImageResponseBody() {}

  explicit UpdateInstanceGroupImageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateInstanceGroupImageResponseBody() = default;
};
class UpdateInstanceGroupImageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateInstanceGroupImageResponseBody> body{};

  UpdateInstanceGroupImageResponse() {}

  explicit UpdateInstanceGroupImageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateInstanceGroupImageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateInstanceGroupImageResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateInstanceGroupImageResponse() = default;
};
class UpgradeAndroidInstanceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<bool> autoPay{};
  shared_ptr<long> increaseNumberOfInstance{};
  shared_ptr<string> instanceGroupId{};

  UpgradeAndroidInstanceGroupRequest() {}

  explicit UpgradeAndroidInstanceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoPay) {
      res["AutoPay"] = boost::any(*autoPay);
    }
    if (increaseNumberOfInstance) {
      res["IncreaseNumberOfInstance"] = boost::any(*increaseNumberOfInstance);
    }
    if (instanceGroupId) {
      res["InstanceGroupId"] = boost::any(*instanceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoPay") != m.end() && !m["AutoPay"].empty()) {
      autoPay = make_shared<bool>(boost::any_cast<bool>(m["AutoPay"]));
    }
    if (m.find("IncreaseNumberOfInstance") != m.end() && !m["IncreaseNumberOfInstance"].empty()) {
      increaseNumberOfInstance = make_shared<long>(boost::any_cast<long>(m["IncreaseNumberOfInstance"]));
    }
    if (m.find("InstanceGroupId") != m.end() && !m["InstanceGroupId"].empty()) {
      instanceGroupId = make_shared<string>(boost::any_cast<string>(m["InstanceGroupId"]));
    }
  }


  virtual ~UpgradeAndroidInstanceGroupRequest() = default;
};
class UpgradeAndroidInstanceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> instanceIds{};
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  UpgradeAndroidInstanceGroupResponseBody() {}

  explicit UpgradeAndroidInstanceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceIds) {
      res["InstanceIds"] = boost::any(*instanceIds);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceIds") != m.end() && !m["InstanceIds"].empty()) {
      instanceIds = make_shared<string>(boost::any_cast<string>(m["InstanceIds"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpgradeAndroidInstanceGroupResponseBody() = default;
};
class UpgradeAndroidInstanceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpgradeAndroidInstanceGroupResponseBody> body{};

  UpgradeAndroidInstanceGroupResponse() {}

  explicit UpgradeAndroidInstanceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpgradeAndroidInstanceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpgradeAndroidInstanceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~UpgradeAndroidInstanceGroupResponse() = default;
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
  AttachKeyPairResponse attachKeyPairWithOptions(shared_ptr<AttachKeyPairRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AttachKeyPairResponse attachKeyPair(shared_ptr<AttachKeyPairRequest> request);
  AuthorizeAndroidInstanceResponse authorizeAndroidInstanceWithOptions(shared_ptr<AuthorizeAndroidInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AuthorizeAndroidInstanceResponse authorizeAndroidInstance(shared_ptr<AuthorizeAndroidInstanceRequest> request);
  BackupFileResponse backupFileWithOptions(shared_ptr<BackupFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BackupFileResponse backupFile(shared_ptr<BackupFileRequest> request);
  CheckResourceStockResponse checkResourceStockWithOptions(shared_ptr<CheckResourceStockRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckResourceStockResponse checkResourceStock(shared_ptr<CheckResourceStockRequest> request);
  CreateAndroidInstanceGroupResponse createAndroidInstanceGroupWithOptions(shared_ptr<CreateAndroidInstanceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAndroidInstanceGroupResponse createAndroidInstanceGroup(shared_ptr<CreateAndroidInstanceGroupRequest> request);
  CreateAppResponse createAppWithOptions(shared_ptr<CreateAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAppResponse createApp(shared_ptr<CreateAppRequest> request);
  CreateCustomImageResponse createCustomImageWithOptions(shared_ptr<CreateCustomImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateCustomImageResponse createCustomImage(shared_ptr<CreateCustomImageRequest> request);
  CreateKeyPairResponse createKeyPairWithOptions(shared_ptr<CreateKeyPairRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateKeyPairResponse createKeyPair(shared_ptr<CreateKeyPairRequest> request);
  CreatePolicyGroupResponse createPolicyGroupWithOptions(shared_ptr<CreatePolicyGroupRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePolicyGroupResponse createPolicyGroup(shared_ptr<CreatePolicyGroupRequest> request);
  DeleteAndroidInstanceGroupResponse deleteAndroidInstanceGroupWithOptions(shared_ptr<DeleteAndroidInstanceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAndroidInstanceGroupResponse deleteAndroidInstanceGroup(shared_ptr<DeleteAndroidInstanceGroupRequest> request);
  DeleteAppsResponse deleteAppsWithOptions(shared_ptr<DeleteAppsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAppsResponse deleteApps(shared_ptr<DeleteAppsRequest> request);
  DeleteImagesResponse deleteImagesWithOptions(shared_ptr<DeleteImagesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteImagesResponse deleteImages(shared_ptr<DeleteImagesRequest> request);
  DeleteKeyPairsResponse deleteKeyPairsWithOptions(shared_ptr<DeleteKeyPairsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteKeyPairsResponse deleteKeyPairs(shared_ptr<DeleteKeyPairsRequest> request);
  DeletePolicyGroupResponse deletePolicyGroupWithOptions(shared_ptr<DeletePolicyGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeletePolicyGroupResponse deletePolicyGroup(shared_ptr<DeletePolicyGroupRequest> request);
  DescribeAndroidInstanceGroupsResponse describeAndroidInstanceGroupsWithOptions(shared_ptr<DescribeAndroidInstanceGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAndroidInstanceGroupsResponse describeAndroidInstanceGroups(shared_ptr<DescribeAndroidInstanceGroupsRequest> request);
  DescribeAndroidInstancesResponse describeAndroidInstancesWithOptions(shared_ptr<DescribeAndroidInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAndroidInstancesResponse describeAndroidInstances(shared_ptr<DescribeAndroidInstancesRequest> request);
  DescribeAppsResponse describeAppsWithOptions(shared_ptr<DescribeAppsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAppsResponse describeApps(shared_ptr<DescribeAppsRequest> request);
  DescribeBackupFilesResponse describeBackupFilesWithOptions(shared_ptr<DescribeBackupFilesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeBackupFilesResponse describeBackupFiles(shared_ptr<DescribeBackupFilesRequest> request);
  DescribeImageListResponse describeImageListWithOptions(shared_ptr<DescribeImageListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeImageListResponse describeImageList(shared_ptr<DescribeImageListRequest> request);
  DescribeInvocationsResponse describeInvocationsWithOptions(shared_ptr<DescribeInvocationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeInvocationsResponse describeInvocations(shared_ptr<DescribeInvocationsRequest> request);
  DescribeKeyPairsResponse describeKeyPairsWithOptions(shared_ptr<DescribeKeyPairsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeKeyPairsResponse describeKeyPairs(shared_ptr<DescribeKeyPairsRequest> request);
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions();
  DescribeSpecResponse describeSpecWithOptions(shared_ptr<DescribeSpecRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSpecResponse describeSpec(shared_ptr<DescribeSpecRequest> request);
  DescribeTasksResponse describeTasksWithOptions(shared_ptr<DescribeTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeTasksResponse describeTasks(shared_ptr<DescribeTasksRequest> request);
  DetachKeyPairResponse detachKeyPairWithOptions(shared_ptr<DetachKeyPairRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetachKeyPairResponse detachKeyPair(shared_ptr<DetachKeyPairRequest> request);
  DistributeImageResponse distributeImageWithOptions(shared_ptr<DistributeImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DistributeImageResponse distributeImage(shared_ptr<DistributeImageRequest> request);
  DowngradeAndroidInstanceGroupResponse downgradeAndroidInstanceGroupWithOptions(shared_ptr<DowngradeAndroidInstanceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DowngradeAndroidInstanceGroupResponse downgradeAndroidInstanceGroup(shared_ptr<DowngradeAndroidInstanceGroupRequest> request);
  FetchFileResponse fetchFileWithOptions(shared_ptr<FetchFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FetchFileResponse fetchFile(shared_ptr<FetchFileRequest> request);
  GetAdbSecureResponse getAdbSecureWithOptions(shared_ptr<GetAdbSecureRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAdbSecureResponse getAdbSecure(shared_ptr<GetAdbSecureRequest> request);
  ImportKeyPairResponse importKeyPairWithOptions(shared_ptr<ImportKeyPairRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ImportKeyPairResponse importKeyPair(shared_ptr<ImportKeyPairRequest> request);
  InstallAppResponse installAppWithOptions(shared_ptr<InstallAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InstallAppResponse installApp(shared_ptr<InstallAppRequest> request);
  ListPolicyGroupsResponse listPolicyGroupsWithOptions(shared_ptr<ListPolicyGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPolicyGroupsResponse listPolicyGroups(shared_ptr<ListPolicyGroupsRequest> request);
  ModifyAndroidInstanceResponse modifyAndroidInstanceWithOptions(shared_ptr<ModifyAndroidInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyAndroidInstanceResponse modifyAndroidInstance(shared_ptr<ModifyAndroidInstanceRequest> request);
  ModifyAndroidInstanceGroupResponse modifyAndroidInstanceGroupWithOptions(shared_ptr<ModifyAndroidInstanceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyAndroidInstanceGroupResponse modifyAndroidInstanceGroup(shared_ptr<ModifyAndroidInstanceGroupRequest> request);
  ModifyAppResponse modifyAppWithOptions(shared_ptr<ModifyAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyAppResponse modifyApp(shared_ptr<ModifyAppRequest> request);
  ModifyKeyPairNameResponse modifyKeyPairNameWithOptions(shared_ptr<ModifyKeyPairNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyKeyPairNameResponse modifyKeyPairName(shared_ptr<ModifyKeyPairNameRequest> request);
  ModifyPolicyGroupResponse modifyPolicyGroupWithOptions(shared_ptr<ModifyPolicyGroupRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyPolicyGroupResponse modifyPolicyGroup(shared_ptr<ModifyPolicyGroupRequest> request);
  RebootAndroidInstancesInGroupResponse rebootAndroidInstancesInGroupWithOptions(shared_ptr<RebootAndroidInstancesInGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RebootAndroidInstancesInGroupResponse rebootAndroidInstancesInGroup(shared_ptr<RebootAndroidInstancesInGroupRequest> request);
  RecoveryFileResponse recoveryFileWithOptions(shared_ptr<RecoveryFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecoveryFileResponse recoveryFile(shared_ptr<RecoveryFileRequest> request);
  RenewAndroidInstanceGroupsResponse renewAndroidInstanceGroupsWithOptions(shared_ptr<RenewAndroidInstanceGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RenewAndroidInstanceGroupsResponse renewAndroidInstanceGroups(shared_ptr<RenewAndroidInstanceGroupsRequest> request);
  ResetAndroidInstancesInGroupResponse resetAndroidInstancesInGroupWithOptions(shared_ptr<ResetAndroidInstancesInGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResetAndroidInstancesInGroupResponse resetAndroidInstancesInGroup(shared_ptr<ResetAndroidInstancesInGroupRequest> request);
  RunCommandResponse runCommandWithOptions(shared_ptr<RunCommandRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RunCommandResponse runCommand(shared_ptr<RunCommandRequest> request);
  SendFileResponse sendFileWithOptions(shared_ptr<SendFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendFileResponse sendFile(shared_ptr<SendFileRequest> request);
  SetAdbSecureResponse setAdbSecureWithOptions(shared_ptr<SetAdbSecureRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetAdbSecureResponse setAdbSecure(shared_ptr<SetAdbSecureRequest> request);
  StartAndroidInstanceResponse startAndroidInstanceWithOptions(shared_ptr<StartAndroidInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartAndroidInstanceResponse startAndroidInstance(shared_ptr<StartAndroidInstanceRequest> request);
  StopAndroidInstanceResponse stopAndroidInstanceWithOptions(shared_ptr<StopAndroidInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopAndroidInstanceResponse stopAndroidInstance(shared_ptr<StopAndroidInstanceRequest> request);
  UninstallAppResponse uninstallAppWithOptions(shared_ptr<UninstallAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UninstallAppResponse uninstallApp(shared_ptr<UninstallAppRequest> request);
  UpdateCustomImageNameResponse updateCustomImageNameWithOptions(shared_ptr<UpdateCustomImageNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateCustomImageNameResponse updateCustomImageName(shared_ptr<UpdateCustomImageNameRequest> request);
  UpdateInstanceGroupImageResponse updateInstanceGroupImageWithOptions(shared_ptr<UpdateInstanceGroupImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateInstanceGroupImageResponse updateInstanceGroupImage(shared_ptr<UpdateInstanceGroupImageRequest> request);
  UpgradeAndroidInstanceGroupResponse upgradeAndroidInstanceGroupWithOptions(shared_ptr<UpgradeAndroidInstanceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpgradeAndroidInstanceGroupResponse upgradeAndroidInstanceGroup(shared_ptr<UpgradeAndroidInstanceGroupRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Eds-aic20230930

#endif
