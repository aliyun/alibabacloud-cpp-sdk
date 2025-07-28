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
  shared_ptr<bool> backupAll{};
  shared_ptr<string> backupFileName{};
  shared_ptr<string> backupFilePath{};
  shared_ptr<string> description{};
  shared_ptr<vector<string>> sourceAppList{};
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
    if (backupAll) {
      res["BackupAll"] = boost::any(*backupAll);
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
    if (sourceAppList) {
      res["SourceAppList"] = boost::any(*sourceAppList);
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
    if (m.find("BackupAll") != m.end() && !m["BackupAll"].empty()) {
      backupAll = make_shared<bool>(boost::any_cast<bool>(m["BackupAll"]));
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
    if (m.find("SourceAppList") != m.end() && !m["SourceAppList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SourceAppList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SourceAppList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sourceAppList = make_shared<vector<string>>(toVec1);
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
  shared_ptr<string> taskId{};

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
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
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
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
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
class BatchGetAcpConnectionTicketRequestInstanceTasks : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> taskId{};

  BatchGetAcpConnectionTicketRequestInstanceTasks() {}

  explicit BatchGetAcpConnectionTicketRequestInstanceTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~BatchGetAcpConnectionTicketRequestInstanceTasks() = default;
};
class BatchGetAcpConnectionTicketRequest : public Darabonba::Model {
public:
  shared_ptr<string> endUserId{};
  shared_ptr<string> instanceGroupId{};
  shared_ptr<vector<string>> instanceIds{};
  shared_ptr<vector<BatchGetAcpConnectionTicketRequestInstanceTasks>> instanceTasks{};

  BatchGetAcpConnectionTicketRequest() {}

  explicit BatchGetAcpConnectionTicketRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endUserId) {
      res["EndUserId"] = boost::any(*endUserId);
    }
    if (instanceGroupId) {
      res["InstanceGroupId"] = boost::any(*instanceGroupId);
    }
    if (instanceIds) {
      res["InstanceIds"] = boost::any(*instanceIds);
    }
    if (instanceTasks) {
      vector<boost::any> temp1;
      for(auto item1:*instanceTasks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstanceTasks"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndUserId") != m.end() && !m["EndUserId"].empty()) {
      endUserId = make_shared<string>(boost::any_cast<string>(m["EndUserId"]));
    }
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
    if (m.find("InstanceTasks") != m.end() && !m["InstanceTasks"].empty()) {
      if (typeid(vector<boost::any>) == m["InstanceTasks"].type()) {
        vector<BatchGetAcpConnectionTicketRequestInstanceTasks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanceTasks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BatchGetAcpConnectionTicketRequestInstanceTasks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceTasks = make_shared<vector<BatchGetAcpConnectionTicketRequestInstanceTasks>>(expect1);
      }
    }
  }


  virtual ~BatchGetAcpConnectionTicketRequest() = default;
};
class BatchGetAcpConnectionTicketResponseBodyInstanceConnectionModels : public Darabonba::Model {
public:
  shared_ptr<string> appInstanceGroupId{};
  shared_ptr<string> appInstanceId{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> persistentAppInstanceId{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskStatus{};
  shared_ptr<string> ticket{};

  BatchGetAcpConnectionTicketResponseBodyInstanceConnectionModels() {}

  explicit BatchGetAcpConnectionTicketResponseBodyInstanceConnectionModels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInstanceGroupId) {
      res["AppInstanceGroupId"] = boost::any(*appInstanceGroupId);
    }
    if (appInstanceId) {
      res["AppInstanceId"] = boost::any(*appInstanceId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (persistentAppInstanceId) {
      res["PersistentAppInstanceId"] = boost::any(*persistentAppInstanceId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    if (ticket) {
      res["Ticket"] = boost::any(*ticket);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppInstanceGroupId") != m.end() && !m["AppInstanceGroupId"].empty()) {
      appInstanceGroupId = make_shared<string>(boost::any_cast<string>(m["AppInstanceGroupId"]));
    }
    if (m.find("AppInstanceId") != m.end() && !m["AppInstanceId"].empty()) {
      appInstanceId = make_shared<string>(boost::any_cast<string>(m["AppInstanceId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PersistentAppInstanceId") != m.end() && !m["PersistentAppInstanceId"].empty()) {
      persistentAppInstanceId = make_shared<string>(boost::any_cast<string>(m["PersistentAppInstanceId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<string>(boost::any_cast<string>(m["TaskStatus"]));
    }
    if (m.find("Ticket") != m.end() && !m["Ticket"].empty()) {
      ticket = make_shared<string>(boost::any_cast<string>(m["Ticket"]));
    }
  }


  virtual ~BatchGetAcpConnectionTicketResponseBodyInstanceConnectionModels() = default;
};
class BatchGetAcpConnectionTicketResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<BatchGetAcpConnectionTicketResponseBodyInstanceConnectionModels>> instanceConnectionModels{};
  shared_ptr<string> requestId{};

  BatchGetAcpConnectionTicketResponseBody() {}

  explicit BatchGetAcpConnectionTicketResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceConnectionModels) {
      vector<boost::any> temp1;
      for(auto item1:*instanceConnectionModels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstanceConnectionModels"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceConnectionModels") != m.end() && !m["InstanceConnectionModels"].empty()) {
      if (typeid(vector<boost::any>) == m["InstanceConnectionModels"].type()) {
        vector<BatchGetAcpConnectionTicketResponseBodyInstanceConnectionModels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanceConnectionModels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BatchGetAcpConnectionTicketResponseBodyInstanceConnectionModels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceConnectionModels = make_shared<vector<BatchGetAcpConnectionTicketResponseBodyInstanceConnectionModels>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~BatchGetAcpConnectionTicketResponseBody() = default;
};
class BatchGetAcpConnectionTicketResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BatchGetAcpConnectionTicketResponseBody> body{};

  BatchGetAcpConnectionTicketResponse() {}

  explicit BatchGetAcpConnectionTicketResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchGetAcpConnectionTicketResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchGetAcpConnectionTicketResponseBody>(model1);
      }
    }
  }


  virtual ~BatchGetAcpConnectionTicketResponse() = default;
};
class ChangeCloudPhoneNodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceType{};
  shared_ptr<string> nodeId{};
  shared_ptr<long> phoneCount{};

  ChangeCloudPhoneNodeRequest() {}

  explicit ChangeCloudPhoneNodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (phoneCount) {
      res["PhoneCount"] = boost::any(*phoneCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("PhoneCount") != m.end() && !m["PhoneCount"].empty()) {
      phoneCount = make_shared<long>(boost::any_cast<long>(m["PhoneCount"]));
    }
  }


  virtual ~ChangeCloudPhoneNodeRequest() = default;
};
class ChangeCloudPhoneNodeResponseBodyNodeInfosInstanceInfos : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  ChangeCloudPhoneNodeResponseBodyNodeInfosInstanceInfos() {}

  explicit ChangeCloudPhoneNodeResponseBodyNodeInfosInstanceInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ChangeCloudPhoneNodeResponseBodyNodeInfosInstanceInfos() = default;
};
class ChangeCloudPhoneNodeResponseBodyNodeInfos : public Darabonba::Model {
public:
  shared_ptr<vector<ChangeCloudPhoneNodeResponseBodyNodeInfosInstanceInfos>> instanceInfos{};
  shared_ptr<string> nodeId{};

  ChangeCloudPhoneNodeResponseBodyNodeInfos() {}

  explicit ChangeCloudPhoneNodeResponseBodyNodeInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceInfos) {
      vector<boost::any> temp1;
      for(auto item1:*instanceInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstanceInfos"] = boost::any(temp1);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceInfos") != m.end() && !m["InstanceInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["InstanceInfos"].type()) {
        vector<ChangeCloudPhoneNodeResponseBodyNodeInfosInstanceInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanceInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ChangeCloudPhoneNodeResponseBodyNodeInfosInstanceInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceInfos = make_shared<vector<ChangeCloudPhoneNodeResponseBodyNodeInfosInstanceInfos>>(expect1);
      }
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
  }


  virtual ~ChangeCloudPhoneNodeResponseBodyNodeInfos() = default;
};
class ChangeCloudPhoneNodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ChangeCloudPhoneNodeResponseBodyNodeInfos>> nodeInfos{};
  shared_ptr<string> requestId{};

  ChangeCloudPhoneNodeResponseBody() {}

  explicit ChangeCloudPhoneNodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeInfos) {
      vector<boost::any> temp1;
      for(auto item1:*nodeInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NodeInfos"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeInfos") != m.end() && !m["NodeInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["NodeInfos"].type()) {
        vector<ChangeCloudPhoneNodeResponseBodyNodeInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NodeInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ChangeCloudPhoneNodeResponseBodyNodeInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodeInfos = make_shared<vector<ChangeCloudPhoneNodeResponseBodyNodeInfos>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ChangeCloudPhoneNodeResponseBody() = default;
};
class ChangeCloudPhoneNodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ChangeCloudPhoneNodeResponseBody> body{};

  ChangeCloudPhoneNodeResponse() {}

  explicit ChangeCloudPhoneNodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ChangeCloudPhoneNodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ChangeCloudPhoneNodeResponseBody>(model1);
      }
    }
  }


  virtual ~ChangeCloudPhoneNodeResponse() = default;
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
class CreateAndroidInstanceGroupRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateAndroidInstanceGroupRequestTag() {}

  explicit CreateAndroidInstanceGroupRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateAndroidInstanceGroupRequestTag() = default;
};
class CreateAndroidInstanceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<long> amount{};
  shared_ptr<bool> autoPay{};
  shared_ptr<bool> autoRenew{};
  shared_ptr<string> bizRegionId{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> enableIpv6{};
  shared_ptr<bool> gpuAcceleration{};
  shared_ptr<string> imageId{};
  shared_ptr<string> instanceGroupName{};
  shared_ptr<string> instanceGroupSpec{};
  shared_ptr<long> ipv6Bandwidth{};
  shared_ptr<string> keyPairId{};
  shared_ptr<long> numberOfInstances{};
  shared_ptr<string> officeSiteId{};
  shared_ptr<long> period{};
  shared_ptr<string> periodUnit{};
  shared_ptr<string> policyGroupId{};
  shared_ptr<vector<CreateAndroidInstanceGroupRequestTag>> tag{};
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
    if (enableIpv6) {
      res["EnableIpv6"] = boost::any(*enableIpv6);
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
    if (ipv6Bandwidth) {
      res["Ipv6Bandwidth"] = boost::any(*ipv6Bandwidth);
    }
    if (keyPairId) {
      res["KeyPairId"] = boost::any(*keyPairId);
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
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
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
    if (m.find("EnableIpv6") != m.end() && !m["EnableIpv6"].empty()) {
      enableIpv6 = make_shared<bool>(boost::any_cast<bool>(m["EnableIpv6"]));
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
    if (m.find("Ipv6Bandwidth") != m.end() && !m["Ipv6Bandwidth"].empty()) {
      ipv6Bandwidth = make_shared<long>(boost::any_cast<long>(m["Ipv6Bandwidth"]));
    }
    if (m.find("KeyPairId") != m.end() && !m["KeyPairId"].empty()) {
      keyPairId = make_shared<string>(boost::any_cast<string>(m["KeyPairId"]));
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
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<CreateAndroidInstanceGroupRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateAndroidInstanceGroupRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<CreateAndroidInstanceGroupRequestTag>>(expect1);
      }
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
class CreateAppRequestCustomAppInfo : public Darabonba::Model {
public:
  shared_ptr<string> apkSize{};
  shared_ptr<string> downloadUrl{};
  shared_ptr<string> md5{};
  shared_ptr<string> packageName{};
  shared_ptr<string> version{};
  shared_ptr<string> versionCode{};

  CreateAppRequestCustomAppInfo() {}

  explicit CreateAppRequestCustomAppInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apkSize) {
      res["ApkSize"] = boost::any(*apkSize);
    }
    if (downloadUrl) {
      res["DownloadUrl"] = boost::any(*downloadUrl);
    }
    if (md5) {
      res["Md5"] = boost::any(*md5);
    }
    if (packageName) {
      res["PackageName"] = boost::any(*packageName);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    if (versionCode) {
      res["VersionCode"] = boost::any(*versionCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApkSize") != m.end() && !m["ApkSize"].empty()) {
      apkSize = make_shared<string>(boost::any_cast<string>(m["ApkSize"]));
    }
    if (m.find("DownloadUrl") != m.end() && !m["DownloadUrl"].empty()) {
      downloadUrl = make_shared<string>(boost::any_cast<string>(m["DownloadUrl"]));
    }
    if (m.find("Md5") != m.end() && !m["Md5"].empty()) {
      md5 = make_shared<string>(boost::any_cast<string>(m["Md5"]));
    }
    if (m.find("PackageName") != m.end() && !m["PackageName"].empty()) {
      packageName = make_shared<string>(boost::any_cast<string>(m["PackageName"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
    if (m.find("VersionCode") != m.end() && !m["VersionCode"].empty()) {
      versionCode = make_shared<string>(boost::any_cast<string>(m["VersionCode"]));
    }
  }


  virtual ~CreateAppRequestCustomAppInfo() = default;
};
class CreateAppRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> bizRegionId{};
  shared_ptr<CreateAppRequestCustomAppInfo> customAppInfo{};
  shared_ptr<string> description{};
  shared_ptr<string> fileName{};
  shared_ptr<string> filePath{};
  shared_ptr<string> iconUrl{};
  shared_ptr<string> installParam{};
  shared_ptr<string> ossAppUrl{};
  shared_ptr<string> signApk{};

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
    if (customAppInfo) {
      res["CustomAppInfo"] = customAppInfo ? boost::any(customAppInfo->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (signApk) {
      res["SignApk"] = boost::any(*signApk);
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
    if (m.find("CustomAppInfo") != m.end() && !m["CustomAppInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["CustomAppInfo"].type()) {
        CreateAppRequestCustomAppInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CustomAppInfo"]));
        customAppInfo = make_shared<CreateAppRequestCustomAppInfo>(model1);
      }
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
    if (m.find("SignApk") != m.end() && !m["SignApk"].empty()) {
      signApk = make_shared<string>(boost::any_cast<string>(m["SignApk"]));
    }
  }


  virtual ~CreateAppRequest() = default;
};
class CreateAppShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> bizRegionId{};
  shared_ptr<string> customAppInfoShrink{};
  shared_ptr<string> description{};
  shared_ptr<string> fileName{};
  shared_ptr<string> filePath{};
  shared_ptr<string> iconUrl{};
  shared_ptr<string> installParam{};
  shared_ptr<string> ossAppUrl{};
  shared_ptr<string> signApk{};

  CreateAppShrinkRequest() {}

  explicit CreateAppShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (customAppInfoShrink) {
      res["CustomAppInfo"] = boost::any(*customAppInfoShrink);
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
    if (signApk) {
      res["SignApk"] = boost::any(*signApk);
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
    if (m.find("CustomAppInfo") != m.end() && !m["CustomAppInfo"].empty()) {
      customAppInfoShrink = make_shared<string>(boost::any_cast<string>(m["CustomAppInfo"]));
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
    if (m.find("SignApk") != m.end() && !m["SignApk"].empty()) {
      signApk = make_shared<string>(boost::any_cast<string>(m["SignApk"]));
    }
  }


  virtual ~CreateAppShrinkRequest() = default;
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
class CreateCloudPhoneNodeRequestDisplayConfig : public Darabonba::Model {
public:
  shared_ptr<long> dpi{};
  shared_ptr<long> fps{};
  shared_ptr<string> lockResolution{};

  CreateCloudPhoneNodeRequestDisplayConfig() {}

  explicit CreateCloudPhoneNodeRequestDisplayConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dpi) {
      res["Dpi"] = boost::any(*dpi);
    }
    if (fps) {
      res["Fps"] = boost::any(*fps);
    }
    if (lockResolution) {
      res["LockResolution"] = boost::any(*lockResolution);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Dpi") != m.end() && !m["Dpi"].empty()) {
      dpi = make_shared<long>(boost::any_cast<long>(m["Dpi"]));
    }
    if (m.find("Fps") != m.end() && !m["Fps"].empty()) {
      fps = make_shared<long>(boost::any_cast<long>(m["Fps"]));
    }
    if (m.find("LockResolution") != m.end() && !m["LockResolution"].empty()) {
      lockResolution = make_shared<string>(boost::any_cast<string>(m["LockResolution"]));
    }
  }


  virtual ~CreateCloudPhoneNodeRequestDisplayConfig() = default;
};
class CreateCloudPhoneNodeRequestNetworkInfo : public Darabonba::Model {
public:
  shared_ptr<string> bandwidthPackageName{};
  shared_ptr<string> cidrBlock{};
  shared_ptr<string> internetChargeType{};
  shared_ptr<long> ipRatio{};
  shared_ptr<string> isp{};
  shared_ptr<long> limitedBandwidth{};

  CreateCloudPhoneNodeRequestNetworkInfo() {}

  explicit CreateCloudPhoneNodeRequestNetworkInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bandwidthPackageName) {
      res["BandwidthPackageName"] = boost::any(*bandwidthPackageName);
    }
    if (cidrBlock) {
      res["CidrBlock"] = boost::any(*cidrBlock);
    }
    if (internetChargeType) {
      res["InternetChargeType"] = boost::any(*internetChargeType);
    }
    if (ipRatio) {
      res["IpRatio"] = boost::any(*ipRatio);
    }
    if (isp) {
      res["Isp"] = boost::any(*isp);
    }
    if (limitedBandwidth) {
      res["LimitedBandwidth"] = boost::any(*limitedBandwidth);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BandwidthPackageName") != m.end() && !m["BandwidthPackageName"].empty()) {
      bandwidthPackageName = make_shared<string>(boost::any_cast<string>(m["BandwidthPackageName"]));
    }
    if (m.find("CidrBlock") != m.end() && !m["CidrBlock"].empty()) {
      cidrBlock = make_shared<string>(boost::any_cast<string>(m["CidrBlock"]));
    }
    if (m.find("InternetChargeType") != m.end() && !m["InternetChargeType"].empty()) {
      internetChargeType = make_shared<string>(boost::any_cast<string>(m["InternetChargeType"]));
    }
    if (m.find("IpRatio") != m.end() && !m["IpRatio"].empty()) {
      ipRatio = make_shared<long>(boost::any_cast<long>(m["IpRatio"]));
    }
    if (m.find("Isp") != m.end() && !m["Isp"].empty()) {
      isp = make_shared<string>(boost::any_cast<string>(m["Isp"]));
    }
    if (m.find("LimitedBandwidth") != m.end() && !m["LimitedBandwidth"].empty()) {
      limitedBandwidth = make_shared<long>(boost::any_cast<long>(m["LimitedBandwidth"]));
    }
  }


  virtual ~CreateCloudPhoneNodeRequestNetworkInfo() = default;
};
class CreateCloudPhoneNodeRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateCloudPhoneNodeRequestTag() {}

  explicit CreateCloudPhoneNodeRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateCloudPhoneNodeRequestTag() = default;
};
class CreateCloudPhoneNodeRequest : public Darabonba::Model {
public:
  shared_ptr<bool> autoPay{};
  shared_ptr<bool> autoRenew{};
  shared_ptr<string> bandwidthPackageId{};
  shared_ptr<string> bandwidthPackageType{};
  shared_ptr<string> bizRegionId{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> count{};
  shared_ptr<CreateCloudPhoneNodeRequestDisplayConfig> displayConfig{};
  shared_ptr<long> downBandwidthLimit{};
  shared_ptr<string> imageId{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> networkId{};
  shared_ptr<CreateCloudPhoneNodeRequestNetworkInfo> networkInfo{};
  shared_ptr<string> networkType{};
  shared_ptr<string> nodeName{};
  shared_ptr<long> period{};
  shared_ptr<string> periodUnit{};
  shared_ptr<long> phoneCount{};
  shared_ptr<long> phoneDataVolume{};
  shared_ptr<long> resolutionHeight{};
  shared_ptr<long> resolutionWidth{};
  shared_ptr<long> serverShareDataVolume{};
  shared_ptr<string> serverType{};
  shared_ptr<long> streamMode{};
  shared_ptr<vector<CreateCloudPhoneNodeRequestTag>> tag{};
  shared_ptr<long> upBandwidthLimit{};
  shared_ptr<string> useTemplate{};
  shared_ptr<string> vSwitchId{};

  CreateCloudPhoneNodeRequest() {}

  explicit CreateCloudPhoneNodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoPay) {
      res["AutoPay"] = boost::any(*autoPay);
    }
    if (autoRenew) {
      res["AutoRenew"] = boost::any(*autoRenew);
    }
    if (bandwidthPackageId) {
      res["BandwidthPackageId"] = boost::any(*bandwidthPackageId);
    }
    if (bandwidthPackageType) {
      res["BandwidthPackageType"] = boost::any(*bandwidthPackageType);
    }
    if (bizRegionId) {
      res["BizRegionId"] = boost::any(*bizRegionId);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (displayConfig) {
      res["DisplayConfig"] = displayConfig ? boost::any(displayConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (downBandwidthLimit) {
      res["DownBandwidthLimit"] = boost::any(*downBandwidthLimit);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (networkId) {
      res["NetworkId"] = boost::any(*networkId);
    }
    if (networkInfo) {
      res["NetworkInfo"] = networkInfo ? boost::any(networkInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (nodeName) {
      res["NodeName"] = boost::any(*nodeName);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (periodUnit) {
      res["PeriodUnit"] = boost::any(*periodUnit);
    }
    if (phoneCount) {
      res["PhoneCount"] = boost::any(*phoneCount);
    }
    if (phoneDataVolume) {
      res["PhoneDataVolume"] = boost::any(*phoneDataVolume);
    }
    if (resolutionHeight) {
      res["ResolutionHeight"] = boost::any(*resolutionHeight);
    }
    if (resolutionWidth) {
      res["ResolutionWidth"] = boost::any(*resolutionWidth);
    }
    if (serverShareDataVolume) {
      res["ServerShareDataVolume"] = boost::any(*serverShareDataVolume);
    }
    if (serverType) {
      res["ServerType"] = boost::any(*serverType);
    }
    if (streamMode) {
      res["StreamMode"] = boost::any(*streamMode);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    if (upBandwidthLimit) {
      res["UpBandwidthLimit"] = boost::any(*upBandwidthLimit);
    }
    if (useTemplate) {
      res["UseTemplate"] = boost::any(*useTemplate);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoPay") != m.end() && !m["AutoPay"].empty()) {
      autoPay = make_shared<bool>(boost::any_cast<bool>(m["AutoPay"]));
    }
    if (m.find("AutoRenew") != m.end() && !m["AutoRenew"].empty()) {
      autoRenew = make_shared<bool>(boost::any_cast<bool>(m["AutoRenew"]));
    }
    if (m.find("BandwidthPackageId") != m.end() && !m["BandwidthPackageId"].empty()) {
      bandwidthPackageId = make_shared<string>(boost::any_cast<string>(m["BandwidthPackageId"]));
    }
    if (m.find("BandwidthPackageType") != m.end() && !m["BandwidthPackageType"].empty()) {
      bandwidthPackageType = make_shared<string>(boost::any_cast<string>(m["BandwidthPackageType"]));
    }
    if (m.find("BizRegionId") != m.end() && !m["BizRegionId"].empty()) {
      bizRegionId = make_shared<string>(boost::any_cast<string>(m["BizRegionId"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<string>(boost::any_cast<string>(m["Count"]));
    }
    if (m.find("DisplayConfig") != m.end() && !m["DisplayConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["DisplayConfig"].type()) {
        CreateCloudPhoneNodeRequestDisplayConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DisplayConfig"]));
        displayConfig = make_shared<CreateCloudPhoneNodeRequestDisplayConfig>(model1);
      }
    }
    if (m.find("DownBandwidthLimit") != m.end() && !m["DownBandwidthLimit"].empty()) {
      downBandwidthLimit = make_shared<long>(boost::any_cast<long>(m["DownBandwidthLimit"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("NetworkId") != m.end() && !m["NetworkId"].empty()) {
      networkId = make_shared<string>(boost::any_cast<string>(m["NetworkId"]));
    }
    if (m.find("NetworkInfo") != m.end() && !m["NetworkInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["NetworkInfo"].type()) {
        CreateCloudPhoneNodeRequestNetworkInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NetworkInfo"]));
        networkInfo = make_shared<CreateCloudPhoneNodeRequestNetworkInfo>(model1);
      }
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("NodeName") != m.end() && !m["NodeName"].empty()) {
      nodeName = make_shared<string>(boost::any_cast<string>(m["NodeName"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("PeriodUnit") != m.end() && !m["PeriodUnit"].empty()) {
      periodUnit = make_shared<string>(boost::any_cast<string>(m["PeriodUnit"]));
    }
    if (m.find("PhoneCount") != m.end() && !m["PhoneCount"].empty()) {
      phoneCount = make_shared<long>(boost::any_cast<long>(m["PhoneCount"]));
    }
    if (m.find("PhoneDataVolume") != m.end() && !m["PhoneDataVolume"].empty()) {
      phoneDataVolume = make_shared<long>(boost::any_cast<long>(m["PhoneDataVolume"]));
    }
    if (m.find("ResolutionHeight") != m.end() && !m["ResolutionHeight"].empty()) {
      resolutionHeight = make_shared<long>(boost::any_cast<long>(m["ResolutionHeight"]));
    }
    if (m.find("ResolutionWidth") != m.end() && !m["ResolutionWidth"].empty()) {
      resolutionWidth = make_shared<long>(boost::any_cast<long>(m["ResolutionWidth"]));
    }
    if (m.find("ServerShareDataVolume") != m.end() && !m["ServerShareDataVolume"].empty()) {
      serverShareDataVolume = make_shared<long>(boost::any_cast<long>(m["ServerShareDataVolume"]));
    }
    if (m.find("ServerType") != m.end() && !m["ServerType"].empty()) {
      serverType = make_shared<string>(boost::any_cast<string>(m["ServerType"]));
    }
    if (m.find("StreamMode") != m.end() && !m["StreamMode"].empty()) {
      streamMode = make_shared<long>(boost::any_cast<long>(m["StreamMode"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<CreateCloudPhoneNodeRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateCloudPhoneNodeRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<CreateCloudPhoneNodeRequestTag>>(expect1);
      }
    }
    if (m.find("UpBandwidthLimit") != m.end() && !m["UpBandwidthLimit"].empty()) {
      upBandwidthLimit = make_shared<long>(boost::any_cast<long>(m["UpBandwidthLimit"]));
    }
    if (m.find("UseTemplate") != m.end() && !m["UseTemplate"].empty()) {
      useTemplate = make_shared<string>(boost::any_cast<string>(m["UseTemplate"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
  }


  virtual ~CreateCloudPhoneNodeRequest() = default;
};
class CreateCloudPhoneNodeShrinkRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateCloudPhoneNodeShrinkRequestTag() {}

  explicit CreateCloudPhoneNodeShrinkRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateCloudPhoneNodeShrinkRequestTag() = default;
};
class CreateCloudPhoneNodeShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<bool> autoPay{};
  shared_ptr<bool> autoRenew{};
  shared_ptr<string> bandwidthPackageId{};
  shared_ptr<string> bandwidthPackageType{};
  shared_ptr<string> bizRegionId{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> count{};
  shared_ptr<string> displayConfigShrink{};
  shared_ptr<long> downBandwidthLimit{};
  shared_ptr<string> imageId{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> networkId{};
  shared_ptr<string> networkInfoShrink{};
  shared_ptr<string> networkType{};
  shared_ptr<string> nodeName{};
  shared_ptr<long> period{};
  shared_ptr<string> periodUnit{};
  shared_ptr<long> phoneCount{};
  shared_ptr<long> phoneDataVolume{};
  shared_ptr<long> resolutionHeight{};
  shared_ptr<long> resolutionWidth{};
  shared_ptr<long> serverShareDataVolume{};
  shared_ptr<string> serverType{};
  shared_ptr<long> streamMode{};
  shared_ptr<vector<CreateCloudPhoneNodeShrinkRequestTag>> tag{};
  shared_ptr<long> upBandwidthLimit{};
  shared_ptr<string> useTemplate{};
  shared_ptr<string> vSwitchId{};

  CreateCloudPhoneNodeShrinkRequest() {}

  explicit CreateCloudPhoneNodeShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoPay) {
      res["AutoPay"] = boost::any(*autoPay);
    }
    if (autoRenew) {
      res["AutoRenew"] = boost::any(*autoRenew);
    }
    if (bandwidthPackageId) {
      res["BandwidthPackageId"] = boost::any(*bandwidthPackageId);
    }
    if (bandwidthPackageType) {
      res["BandwidthPackageType"] = boost::any(*bandwidthPackageType);
    }
    if (bizRegionId) {
      res["BizRegionId"] = boost::any(*bizRegionId);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (displayConfigShrink) {
      res["DisplayConfig"] = boost::any(*displayConfigShrink);
    }
    if (downBandwidthLimit) {
      res["DownBandwidthLimit"] = boost::any(*downBandwidthLimit);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (networkId) {
      res["NetworkId"] = boost::any(*networkId);
    }
    if (networkInfoShrink) {
      res["NetworkInfo"] = boost::any(*networkInfoShrink);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (nodeName) {
      res["NodeName"] = boost::any(*nodeName);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (periodUnit) {
      res["PeriodUnit"] = boost::any(*periodUnit);
    }
    if (phoneCount) {
      res["PhoneCount"] = boost::any(*phoneCount);
    }
    if (phoneDataVolume) {
      res["PhoneDataVolume"] = boost::any(*phoneDataVolume);
    }
    if (resolutionHeight) {
      res["ResolutionHeight"] = boost::any(*resolutionHeight);
    }
    if (resolutionWidth) {
      res["ResolutionWidth"] = boost::any(*resolutionWidth);
    }
    if (serverShareDataVolume) {
      res["ServerShareDataVolume"] = boost::any(*serverShareDataVolume);
    }
    if (serverType) {
      res["ServerType"] = boost::any(*serverType);
    }
    if (streamMode) {
      res["StreamMode"] = boost::any(*streamMode);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    if (upBandwidthLimit) {
      res["UpBandwidthLimit"] = boost::any(*upBandwidthLimit);
    }
    if (useTemplate) {
      res["UseTemplate"] = boost::any(*useTemplate);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoPay") != m.end() && !m["AutoPay"].empty()) {
      autoPay = make_shared<bool>(boost::any_cast<bool>(m["AutoPay"]));
    }
    if (m.find("AutoRenew") != m.end() && !m["AutoRenew"].empty()) {
      autoRenew = make_shared<bool>(boost::any_cast<bool>(m["AutoRenew"]));
    }
    if (m.find("BandwidthPackageId") != m.end() && !m["BandwidthPackageId"].empty()) {
      bandwidthPackageId = make_shared<string>(boost::any_cast<string>(m["BandwidthPackageId"]));
    }
    if (m.find("BandwidthPackageType") != m.end() && !m["BandwidthPackageType"].empty()) {
      bandwidthPackageType = make_shared<string>(boost::any_cast<string>(m["BandwidthPackageType"]));
    }
    if (m.find("BizRegionId") != m.end() && !m["BizRegionId"].empty()) {
      bizRegionId = make_shared<string>(boost::any_cast<string>(m["BizRegionId"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<string>(boost::any_cast<string>(m["Count"]));
    }
    if (m.find("DisplayConfig") != m.end() && !m["DisplayConfig"].empty()) {
      displayConfigShrink = make_shared<string>(boost::any_cast<string>(m["DisplayConfig"]));
    }
    if (m.find("DownBandwidthLimit") != m.end() && !m["DownBandwidthLimit"].empty()) {
      downBandwidthLimit = make_shared<long>(boost::any_cast<long>(m["DownBandwidthLimit"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("NetworkId") != m.end() && !m["NetworkId"].empty()) {
      networkId = make_shared<string>(boost::any_cast<string>(m["NetworkId"]));
    }
    if (m.find("NetworkInfo") != m.end() && !m["NetworkInfo"].empty()) {
      networkInfoShrink = make_shared<string>(boost::any_cast<string>(m["NetworkInfo"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("NodeName") != m.end() && !m["NodeName"].empty()) {
      nodeName = make_shared<string>(boost::any_cast<string>(m["NodeName"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("PeriodUnit") != m.end() && !m["PeriodUnit"].empty()) {
      periodUnit = make_shared<string>(boost::any_cast<string>(m["PeriodUnit"]));
    }
    if (m.find("PhoneCount") != m.end() && !m["PhoneCount"].empty()) {
      phoneCount = make_shared<long>(boost::any_cast<long>(m["PhoneCount"]));
    }
    if (m.find("PhoneDataVolume") != m.end() && !m["PhoneDataVolume"].empty()) {
      phoneDataVolume = make_shared<long>(boost::any_cast<long>(m["PhoneDataVolume"]));
    }
    if (m.find("ResolutionHeight") != m.end() && !m["ResolutionHeight"].empty()) {
      resolutionHeight = make_shared<long>(boost::any_cast<long>(m["ResolutionHeight"]));
    }
    if (m.find("ResolutionWidth") != m.end() && !m["ResolutionWidth"].empty()) {
      resolutionWidth = make_shared<long>(boost::any_cast<long>(m["ResolutionWidth"]));
    }
    if (m.find("ServerShareDataVolume") != m.end() && !m["ServerShareDataVolume"].empty()) {
      serverShareDataVolume = make_shared<long>(boost::any_cast<long>(m["ServerShareDataVolume"]));
    }
    if (m.find("ServerType") != m.end() && !m["ServerType"].empty()) {
      serverType = make_shared<string>(boost::any_cast<string>(m["ServerType"]));
    }
    if (m.find("StreamMode") != m.end() && !m["StreamMode"].empty()) {
      streamMode = make_shared<long>(boost::any_cast<long>(m["StreamMode"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<CreateCloudPhoneNodeShrinkRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateCloudPhoneNodeShrinkRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<CreateCloudPhoneNodeShrinkRequestTag>>(expect1);
      }
    }
    if (m.find("UpBandwidthLimit") != m.end() && !m["UpBandwidthLimit"].empty()) {
      upBandwidthLimit = make_shared<long>(boost::any_cast<long>(m["UpBandwidthLimit"]));
    }
    if (m.find("UseTemplate") != m.end() && !m["UseTemplate"].empty()) {
      useTemplate = make_shared<string>(boost::any_cast<string>(m["UseTemplate"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
  }


  virtual ~CreateCloudPhoneNodeShrinkRequest() = default;
};
class CreateCloudPhoneNodeResponseBodyNetworkPackageOrderModel : public Darabonba::Model {
public:
  shared_ptr<string> bandwidthPackageId{};
  shared_ptr<string> bandwidthPackageOrderId{};

  CreateCloudPhoneNodeResponseBodyNetworkPackageOrderModel() {}

  explicit CreateCloudPhoneNodeResponseBodyNetworkPackageOrderModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bandwidthPackageId) {
      res["BandwidthPackageId"] = boost::any(*bandwidthPackageId);
    }
    if (bandwidthPackageOrderId) {
      res["BandwidthPackageOrderId"] = boost::any(*bandwidthPackageOrderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BandwidthPackageId") != m.end() && !m["BandwidthPackageId"].empty()) {
      bandwidthPackageId = make_shared<string>(boost::any_cast<string>(m["BandwidthPackageId"]));
    }
    if (m.find("BandwidthPackageOrderId") != m.end() && !m["BandwidthPackageOrderId"].empty()) {
      bandwidthPackageOrderId = make_shared<string>(boost::any_cast<string>(m["BandwidthPackageOrderId"]));
    }
  }


  virtual ~CreateCloudPhoneNodeResponseBodyNetworkPackageOrderModel() = default;
};
class CreateCloudPhoneNodeResponseBodyNodeInfos : public Darabonba::Model {
public:
  shared_ptr<vector<string>> instanceIds{};
  shared_ptr<string> nodeId{};

  CreateCloudPhoneNodeResponseBodyNodeInfos() {}

  explicit CreateCloudPhoneNodeResponseBodyNodeInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceIds) {
      res["InstanceIds"] = boost::any(*instanceIds);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
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
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
  }


  virtual ~CreateCloudPhoneNodeResponseBodyNodeInfos() = default;
};
class CreateCloudPhoneNodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateCloudPhoneNodeResponseBodyNetworkPackageOrderModel> networkPackageOrderModel{};
  shared_ptr<vector<CreateCloudPhoneNodeResponseBodyNodeInfos>> nodeInfos{};
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  CreateCloudPhoneNodeResponseBody() {}

  explicit CreateCloudPhoneNodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (networkPackageOrderModel) {
      res["NetworkPackageOrderModel"] = networkPackageOrderModel ? boost::any(networkPackageOrderModel->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (nodeInfos) {
      vector<boost::any> temp1;
      for(auto item1:*nodeInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NodeInfos"] = boost::any(temp1);
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
    if (m.find("NetworkPackageOrderModel") != m.end() && !m["NetworkPackageOrderModel"].empty()) {
      if (typeid(map<string, boost::any>) == m["NetworkPackageOrderModel"].type()) {
        CreateCloudPhoneNodeResponseBodyNetworkPackageOrderModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NetworkPackageOrderModel"]));
        networkPackageOrderModel = make_shared<CreateCloudPhoneNodeResponseBodyNetworkPackageOrderModel>(model1);
      }
    }
    if (m.find("NodeInfos") != m.end() && !m["NodeInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["NodeInfos"].type()) {
        vector<CreateCloudPhoneNodeResponseBodyNodeInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NodeInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateCloudPhoneNodeResponseBodyNodeInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodeInfos = make_shared<vector<CreateCloudPhoneNodeResponseBodyNodeInfos>>(expect1);
      }
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateCloudPhoneNodeResponseBody() = default;
};
class CreateCloudPhoneNodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateCloudPhoneNodeResponseBody> body{};

  CreateCloudPhoneNodeResponse() {}

  explicit CreateCloudPhoneNodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateCloudPhoneNodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateCloudPhoneNodeResponseBody>(model1);
      }
    }
  }


  virtual ~CreateCloudPhoneNodeResponse() = default;
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
class CreatePolicyGroupRequestNetRedirectPolicyRules : public Darabonba::Model {
public:
  shared_ptr<string> ruleType{};
  shared_ptr<string> target{};

  CreatePolicyGroupRequestNetRedirectPolicyRules() {}

  explicit CreatePolicyGroupRequestNetRedirectPolicyRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ruleType) {
      res["RuleType"] = boost::any(*ruleType);
    }
    if (target) {
      res["Target"] = boost::any(*target);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RuleType") != m.end() && !m["RuleType"].empty()) {
      ruleType = make_shared<string>(boost::any_cast<string>(m["RuleType"]));
    }
    if (m.find("Target") != m.end() && !m["Target"].empty()) {
      target = make_shared<string>(boost::any_cast<string>(m["Target"]));
    }
  }


  virtual ~CreatePolicyGroupRequestNetRedirectPolicyRules() = default;
};
class CreatePolicyGroupRequestNetRedirectPolicy : public Darabonba::Model {
public:
  shared_ptr<string> customProxy{};
  shared_ptr<string> hostAddr{};
  shared_ptr<string> netRedirect{};
  shared_ptr<string> port{};
  shared_ptr<string> proxyPassword{};
  shared_ptr<string> proxyType{};
  shared_ptr<string> proxyUserName{};
  shared_ptr<vector<CreatePolicyGroupRequestNetRedirectPolicyRules>> rules{};

  CreatePolicyGroupRequestNetRedirectPolicy() {}

  explicit CreatePolicyGroupRequestNetRedirectPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customProxy) {
      res["CustomProxy"] = boost::any(*customProxy);
    }
    if (hostAddr) {
      res["HostAddr"] = boost::any(*hostAddr);
    }
    if (netRedirect) {
      res["NetRedirect"] = boost::any(*netRedirect);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (proxyPassword) {
      res["ProxyPassword"] = boost::any(*proxyPassword);
    }
    if (proxyType) {
      res["ProxyType"] = boost::any(*proxyType);
    }
    if (proxyUserName) {
      res["ProxyUserName"] = boost::any(*proxyUserName);
    }
    if (rules) {
      vector<boost::any> temp1;
      for(auto item1:*rules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Rules"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomProxy") != m.end() && !m["CustomProxy"].empty()) {
      customProxy = make_shared<string>(boost::any_cast<string>(m["CustomProxy"]));
    }
    if (m.find("HostAddr") != m.end() && !m["HostAddr"].empty()) {
      hostAddr = make_shared<string>(boost::any_cast<string>(m["HostAddr"]));
    }
    if (m.find("NetRedirect") != m.end() && !m["NetRedirect"].empty()) {
      netRedirect = make_shared<string>(boost::any_cast<string>(m["NetRedirect"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("ProxyPassword") != m.end() && !m["ProxyPassword"].empty()) {
      proxyPassword = make_shared<string>(boost::any_cast<string>(m["ProxyPassword"]));
    }
    if (m.find("ProxyType") != m.end() && !m["ProxyType"].empty()) {
      proxyType = make_shared<string>(boost::any_cast<string>(m["ProxyType"]));
    }
    if (m.find("ProxyUserName") != m.end() && !m["ProxyUserName"].empty()) {
      proxyUserName = make_shared<string>(boost::any_cast<string>(m["ProxyUserName"]));
    }
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      if (typeid(vector<boost::any>) == m["Rules"].type()) {
        vector<CreatePolicyGroupRequestNetRedirectPolicyRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Rules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreatePolicyGroupRequestNetRedirectPolicyRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rules = make_shared<vector<CreatePolicyGroupRequestNetRedirectPolicyRules>>(expect1);
      }
    }
  }


  virtual ~CreatePolicyGroupRequestNetRedirectPolicy() = default;
};
class CreatePolicyGroupRequestWatermark : public Darabonba::Model {
public:
  shared_ptr<long> watermarkColor{};
  shared_ptr<string> watermarkCustomText{};
  shared_ptr<long> watermarkFontSize{};
  shared_ptr<string> watermarkSwitch{};
  shared_ptr<long> watermarkTransparencyValue{};
  shared_ptr<vector<string>> watermarkTypes{};

  CreatePolicyGroupRequestWatermark() {}

  explicit CreatePolicyGroupRequestWatermark(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (watermarkColor) {
      res["WatermarkColor"] = boost::any(*watermarkColor);
    }
    if (watermarkCustomText) {
      res["WatermarkCustomText"] = boost::any(*watermarkCustomText);
    }
    if (watermarkFontSize) {
      res["WatermarkFontSize"] = boost::any(*watermarkFontSize);
    }
    if (watermarkSwitch) {
      res["WatermarkSwitch"] = boost::any(*watermarkSwitch);
    }
    if (watermarkTransparencyValue) {
      res["WatermarkTransparencyValue"] = boost::any(*watermarkTransparencyValue);
    }
    if (watermarkTypes) {
      res["WatermarkTypes"] = boost::any(*watermarkTypes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("WatermarkColor") != m.end() && !m["WatermarkColor"].empty()) {
      watermarkColor = make_shared<long>(boost::any_cast<long>(m["WatermarkColor"]));
    }
    if (m.find("WatermarkCustomText") != m.end() && !m["WatermarkCustomText"].empty()) {
      watermarkCustomText = make_shared<string>(boost::any_cast<string>(m["WatermarkCustomText"]));
    }
    if (m.find("WatermarkFontSize") != m.end() && !m["WatermarkFontSize"].empty()) {
      watermarkFontSize = make_shared<long>(boost::any_cast<long>(m["WatermarkFontSize"]));
    }
    if (m.find("WatermarkSwitch") != m.end() && !m["WatermarkSwitch"].empty()) {
      watermarkSwitch = make_shared<string>(boost::any_cast<string>(m["WatermarkSwitch"]));
    }
    if (m.find("WatermarkTransparencyValue") != m.end() && !m["WatermarkTransparencyValue"].empty()) {
      watermarkTransparencyValue = make_shared<long>(boost::any_cast<long>(m["WatermarkTransparencyValue"]));
    }
    if (m.find("WatermarkTypes") != m.end() && !m["WatermarkTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["WatermarkTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["WatermarkTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      watermarkTypes = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreatePolicyGroupRequestWatermark() = default;
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
  shared_ptr<string> policyType{};
  shared_ptr<long> resolutionHeight{};
  shared_ptr<long> resolutionWidth{};
  shared_ptr<CreatePolicyGroupRequestWatermark> watermark{};

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
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
    }
    if (resolutionHeight) {
      res["ResolutionHeight"] = boost::any(*resolutionHeight);
    }
    if (resolutionWidth) {
      res["ResolutionWidth"] = boost::any(*resolutionWidth);
    }
    if (watermark) {
      res["Watermark"] = watermark ? boost::any(watermark->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
    if (m.find("ResolutionHeight") != m.end() && !m["ResolutionHeight"].empty()) {
      resolutionHeight = make_shared<long>(boost::any_cast<long>(m["ResolutionHeight"]));
    }
    if (m.find("ResolutionWidth") != m.end() && !m["ResolutionWidth"].empty()) {
      resolutionWidth = make_shared<long>(boost::any_cast<long>(m["ResolutionWidth"]));
    }
    if (m.find("Watermark") != m.end() && !m["Watermark"].empty()) {
      if (typeid(map<string, boost::any>) == m["Watermark"].type()) {
        CreatePolicyGroupRequestWatermark model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Watermark"]));
        watermark = make_shared<CreatePolicyGroupRequestWatermark>(model1);
      }
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
  shared_ptr<string> policyType{};
  shared_ptr<long> resolutionHeight{};
  shared_ptr<long> resolutionWidth{};
  shared_ptr<string> watermarkShrink{};

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
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
    }
    if (resolutionHeight) {
      res["ResolutionHeight"] = boost::any(*resolutionHeight);
    }
    if (resolutionWidth) {
      res["ResolutionWidth"] = boost::any(*resolutionWidth);
    }
    if (watermarkShrink) {
      res["Watermark"] = boost::any(*watermarkShrink);
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
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
    if (m.find("ResolutionHeight") != m.end() && !m["ResolutionHeight"].empty()) {
      resolutionHeight = make_shared<long>(boost::any_cast<long>(m["ResolutionHeight"]));
    }
    if (m.find("ResolutionWidth") != m.end() && !m["ResolutionWidth"].empty()) {
      resolutionWidth = make_shared<long>(boost::any_cast<long>(m["ResolutionWidth"]));
    }
    if (m.find("Watermark") != m.end() && !m["Watermark"].empty()) {
      watermarkShrink = make_shared<string>(boost::any_cast<string>(m["Watermark"]));
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
class CreateScreenshotRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> androidInstanceIdList{};
  shared_ptr<string> ossBucketName{};
  shared_ptr<string> skipCheckPolicyConfig{};

  CreateScreenshotRequest() {}

  explicit CreateScreenshotRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (androidInstanceIdList) {
      res["AndroidInstanceIdList"] = boost::any(*androidInstanceIdList);
    }
    if (ossBucketName) {
      res["OssBucketName"] = boost::any(*ossBucketName);
    }
    if (skipCheckPolicyConfig) {
      res["SkipCheckPolicyConfig"] = boost::any(*skipCheckPolicyConfig);
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
    if (m.find("OssBucketName") != m.end() && !m["OssBucketName"].empty()) {
      ossBucketName = make_shared<string>(boost::any_cast<string>(m["OssBucketName"]));
    }
    if (m.find("SkipCheckPolicyConfig") != m.end() && !m["SkipCheckPolicyConfig"].empty()) {
      skipCheckPolicyConfig = make_shared<string>(boost::any_cast<string>(m["SkipCheckPolicyConfig"]));
    }
  }


  virtual ~CreateScreenshotRequest() = default;
};
class CreateScreenshotResponseBodyTasks : public Darabonba::Model {
public:
  shared_ptr<string> androidInstanceId{};
  shared_ptr<string> taskId{};

  CreateScreenshotResponseBodyTasks() {}

  explicit CreateScreenshotResponseBodyTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateScreenshotResponseBodyTasks() = default;
};
class CreateScreenshotResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<CreateScreenshotResponseBodyTasks>> tasks{};

  CreateScreenshotResponseBody() {}

  explicit CreateScreenshotResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tasks) {
      vector<boost::any> temp1;
      for(auto item1:*tasks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tasks"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Tasks") != m.end() && !m["Tasks"].empty()) {
      if (typeid(vector<boost::any>) == m["Tasks"].type()) {
        vector<CreateScreenshotResponseBodyTasks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tasks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateScreenshotResponseBodyTasks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tasks = make_shared<vector<CreateScreenshotResponseBodyTasks>>(expect1);
      }
    }
  }


  virtual ~CreateScreenshotResponseBody() = default;
};
class CreateScreenshotResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateScreenshotResponseBody> body{};

  CreateScreenshotResponse() {}

  explicit CreateScreenshotResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateScreenshotResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateScreenshotResponseBody>(model1);
      }
    }
  }


  virtual ~CreateScreenshotResponse() = default;
};
class CreateSystemPropertyTemplateRequestSystemPropertyInfoCustomPropertyInfos : public Darabonba::Model {
public:
  shared_ptr<string> propertyName{};
  shared_ptr<string> propertyValue{};

  CreateSystemPropertyTemplateRequestSystemPropertyInfoCustomPropertyInfos() {}

  explicit CreateSystemPropertyTemplateRequestSystemPropertyInfoCustomPropertyInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (propertyName) {
      res["PropertyName"] = boost::any(*propertyName);
    }
    if (propertyValue) {
      res["PropertyValue"] = boost::any(*propertyValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PropertyName") != m.end() && !m["PropertyName"].empty()) {
      propertyName = make_shared<string>(boost::any_cast<string>(m["PropertyName"]));
    }
    if (m.find("PropertyValue") != m.end() && !m["PropertyValue"].empty()) {
      propertyValue = make_shared<string>(boost::any_cast<string>(m["PropertyValue"]));
    }
  }


  virtual ~CreateSystemPropertyTemplateRequestSystemPropertyInfoCustomPropertyInfos() = default;
};
class CreateSystemPropertyTemplateRequestSystemPropertyInfo : public Darabonba::Model {
public:
  shared_ptr<vector<CreateSystemPropertyTemplateRequestSystemPropertyInfoCustomPropertyInfos>> customPropertyInfos{};
  shared_ptr<string> roBootloader{};
  shared_ptr<string> roBuildDisplayId{};
  shared_ptr<string> roBuildFingerprint{};
  shared_ptr<string> roBuildHost{};
  shared_ptr<string> roBuildId{};
  shared_ptr<string> roBuildProduct{};
  shared_ptr<string> roBuildTags{};
  shared_ptr<string> roBuildType{};
  shared_ptr<string> roBuildUser{};
  shared_ptr<string> roProductBoard{};
  shared_ptr<string> roProductBrand{};
  shared_ptr<string> roProductDevice{};
  shared_ptr<string> roProductManufacturer{};
  shared_ptr<string> roProductModel{};
  shared_ptr<string> rwRoSerialNo{};

  CreateSystemPropertyTemplateRequestSystemPropertyInfo() {}

  explicit CreateSystemPropertyTemplateRequestSystemPropertyInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customPropertyInfos) {
      vector<boost::any> temp1;
      for(auto item1:*customPropertyInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CustomPropertyInfos"] = boost::any(temp1);
    }
    if (roBootloader) {
      res["RoBootloader"] = boost::any(*roBootloader);
    }
    if (roBuildDisplayId) {
      res["RoBuildDisplayId"] = boost::any(*roBuildDisplayId);
    }
    if (roBuildFingerprint) {
      res["RoBuildFingerprint"] = boost::any(*roBuildFingerprint);
    }
    if (roBuildHost) {
      res["RoBuildHost"] = boost::any(*roBuildHost);
    }
    if (roBuildId) {
      res["RoBuildId"] = boost::any(*roBuildId);
    }
    if (roBuildProduct) {
      res["RoBuildProduct"] = boost::any(*roBuildProduct);
    }
    if (roBuildTags) {
      res["RoBuildTags"] = boost::any(*roBuildTags);
    }
    if (roBuildType) {
      res["RoBuildType"] = boost::any(*roBuildType);
    }
    if (roBuildUser) {
      res["RoBuildUser"] = boost::any(*roBuildUser);
    }
    if (roProductBoard) {
      res["RoProductBoard"] = boost::any(*roProductBoard);
    }
    if (roProductBrand) {
      res["RoProductBrand"] = boost::any(*roProductBrand);
    }
    if (roProductDevice) {
      res["RoProductDevice"] = boost::any(*roProductDevice);
    }
    if (roProductManufacturer) {
      res["RoProductManufacturer"] = boost::any(*roProductManufacturer);
    }
    if (roProductModel) {
      res["RoProductModel"] = boost::any(*roProductModel);
    }
    if (rwRoSerialNo) {
      res["RwRoSerialNo"] = boost::any(*rwRoSerialNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomPropertyInfos") != m.end() && !m["CustomPropertyInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["CustomPropertyInfos"].type()) {
        vector<CreateSystemPropertyTemplateRequestSystemPropertyInfoCustomPropertyInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CustomPropertyInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateSystemPropertyTemplateRequestSystemPropertyInfoCustomPropertyInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        customPropertyInfos = make_shared<vector<CreateSystemPropertyTemplateRequestSystemPropertyInfoCustomPropertyInfos>>(expect1);
      }
    }
    if (m.find("RoBootloader") != m.end() && !m["RoBootloader"].empty()) {
      roBootloader = make_shared<string>(boost::any_cast<string>(m["RoBootloader"]));
    }
    if (m.find("RoBuildDisplayId") != m.end() && !m["RoBuildDisplayId"].empty()) {
      roBuildDisplayId = make_shared<string>(boost::any_cast<string>(m["RoBuildDisplayId"]));
    }
    if (m.find("RoBuildFingerprint") != m.end() && !m["RoBuildFingerprint"].empty()) {
      roBuildFingerprint = make_shared<string>(boost::any_cast<string>(m["RoBuildFingerprint"]));
    }
    if (m.find("RoBuildHost") != m.end() && !m["RoBuildHost"].empty()) {
      roBuildHost = make_shared<string>(boost::any_cast<string>(m["RoBuildHost"]));
    }
    if (m.find("RoBuildId") != m.end() && !m["RoBuildId"].empty()) {
      roBuildId = make_shared<string>(boost::any_cast<string>(m["RoBuildId"]));
    }
    if (m.find("RoBuildProduct") != m.end() && !m["RoBuildProduct"].empty()) {
      roBuildProduct = make_shared<string>(boost::any_cast<string>(m["RoBuildProduct"]));
    }
    if (m.find("RoBuildTags") != m.end() && !m["RoBuildTags"].empty()) {
      roBuildTags = make_shared<string>(boost::any_cast<string>(m["RoBuildTags"]));
    }
    if (m.find("RoBuildType") != m.end() && !m["RoBuildType"].empty()) {
      roBuildType = make_shared<string>(boost::any_cast<string>(m["RoBuildType"]));
    }
    if (m.find("RoBuildUser") != m.end() && !m["RoBuildUser"].empty()) {
      roBuildUser = make_shared<string>(boost::any_cast<string>(m["RoBuildUser"]));
    }
    if (m.find("RoProductBoard") != m.end() && !m["RoProductBoard"].empty()) {
      roProductBoard = make_shared<string>(boost::any_cast<string>(m["RoProductBoard"]));
    }
    if (m.find("RoProductBrand") != m.end() && !m["RoProductBrand"].empty()) {
      roProductBrand = make_shared<string>(boost::any_cast<string>(m["RoProductBrand"]));
    }
    if (m.find("RoProductDevice") != m.end() && !m["RoProductDevice"].empty()) {
      roProductDevice = make_shared<string>(boost::any_cast<string>(m["RoProductDevice"]));
    }
    if (m.find("RoProductManufacturer") != m.end() && !m["RoProductManufacturer"].empty()) {
      roProductManufacturer = make_shared<string>(boost::any_cast<string>(m["RoProductManufacturer"]));
    }
    if (m.find("RoProductModel") != m.end() && !m["RoProductModel"].empty()) {
      roProductModel = make_shared<string>(boost::any_cast<string>(m["RoProductModel"]));
    }
    if (m.find("RwRoSerialNo") != m.end() && !m["RwRoSerialNo"].empty()) {
      rwRoSerialNo = make_shared<string>(boost::any_cast<string>(m["RwRoSerialNo"]));
    }
  }


  virtual ~CreateSystemPropertyTemplateRequestSystemPropertyInfo() = default;
};
class CreateSystemPropertyTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<bool> enableAuto{};
  shared_ptr<string> filePath{};
  shared_ptr<CreateSystemPropertyTemplateRequestSystemPropertyInfo> systemPropertyInfo{};
  shared_ptr<string> templateName{};

  CreateSystemPropertyTemplateRequest() {}

  explicit CreateSystemPropertyTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableAuto) {
      res["EnableAuto"] = boost::any(*enableAuto);
    }
    if (filePath) {
      res["FilePath"] = boost::any(*filePath);
    }
    if (systemPropertyInfo) {
      res["SystemPropertyInfo"] = systemPropertyInfo ? boost::any(systemPropertyInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnableAuto") != m.end() && !m["EnableAuto"].empty()) {
      enableAuto = make_shared<bool>(boost::any_cast<bool>(m["EnableAuto"]));
    }
    if (m.find("FilePath") != m.end() && !m["FilePath"].empty()) {
      filePath = make_shared<string>(boost::any_cast<string>(m["FilePath"]));
    }
    if (m.find("SystemPropertyInfo") != m.end() && !m["SystemPropertyInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["SystemPropertyInfo"].type()) {
        CreateSystemPropertyTemplateRequestSystemPropertyInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SystemPropertyInfo"]));
        systemPropertyInfo = make_shared<CreateSystemPropertyTemplateRequestSystemPropertyInfo>(model1);
      }
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
  }


  virtual ~CreateSystemPropertyTemplateRequest() = default;
};
class CreateSystemPropertyTemplateShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<bool> enableAuto{};
  shared_ptr<string> filePath{};
  shared_ptr<string> systemPropertyInfoShrink{};
  shared_ptr<string> templateName{};

  CreateSystemPropertyTemplateShrinkRequest() {}

  explicit CreateSystemPropertyTemplateShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableAuto) {
      res["EnableAuto"] = boost::any(*enableAuto);
    }
    if (filePath) {
      res["FilePath"] = boost::any(*filePath);
    }
    if (systemPropertyInfoShrink) {
      res["SystemPropertyInfo"] = boost::any(*systemPropertyInfoShrink);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnableAuto") != m.end() && !m["EnableAuto"].empty()) {
      enableAuto = make_shared<bool>(boost::any_cast<bool>(m["EnableAuto"]));
    }
    if (m.find("FilePath") != m.end() && !m["FilePath"].empty()) {
      filePath = make_shared<string>(boost::any_cast<string>(m["FilePath"]));
    }
    if (m.find("SystemPropertyInfo") != m.end() && !m["SystemPropertyInfo"].empty()) {
      systemPropertyInfoShrink = make_shared<string>(boost::any_cast<string>(m["SystemPropertyInfo"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
  }


  virtual ~CreateSystemPropertyTemplateShrinkRequest() = default;
};
class CreateSystemPropertyTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> templateId{};

  CreateSystemPropertyTemplateResponseBody() {}

  explicit CreateSystemPropertyTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~CreateSystemPropertyTemplateResponseBody() = default;
};
class CreateSystemPropertyTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateSystemPropertyTemplateResponseBody> body{};

  CreateSystemPropertyTemplateResponse() {}

  explicit CreateSystemPropertyTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateSystemPropertyTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSystemPropertyTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSystemPropertyTemplateResponse() = default;
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
class DeleteBackupFileRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> backupFileIdList{};

  DeleteBackupFileRequest() {}

  explicit DeleteBackupFileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupFileIdList) {
      res["BackupFileIdList"] = boost::any(*backupFileIdList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupFileIdList") != m.end() && !m["BackupFileIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["BackupFileIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["BackupFileIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      backupFileIdList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DeleteBackupFileRequest() = default;
};
class DeleteBackupFileResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteBackupFileResponseBody() {}

  explicit DeleteBackupFileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteBackupFileResponseBody() = default;
};
class DeleteBackupFileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteBackupFileResponseBody> body{};

  DeleteBackupFileResponse() {}

  explicit DeleteBackupFileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteBackupFileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteBackupFileResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteBackupFileResponse() = default;
};
class DeleteCloudPhoneNodesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> nodeIds{};

  DeleteCloudPhoneNodesRequest() {}

  explicit DeleteCloudPhoneNodesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeIds) {
      res["NodeIds"] = boost::any(*nodeIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeIds") != m.end() && !m["NodeIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["NodeIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["NodeIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      nodeIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DeleteCloudPhoneNodesRequest() = default;
};
class DeleteCloudPhoneNodesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteCloudPhoneNodesResponseBody() {}

  explicit DeleteCloudPhoneNodesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteCloudPhoneNodesResponseBody() = default;
};
class DeleteCloudPhoneNodesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteCloudPhoneNodesResponseBody> body{};

  DeleteCloudPhoneNodesResponse() {}

  explicit DeleteCloudPhoneNodesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteCloudPhoneNodesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteCloudPhoneNodesResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteCloudPhoneNodesResponse() = default;
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
class DeleteSystemPropertyTemplatesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> templateIds{};

  DeleteSystemPropertyTemplatesRequest() {}

  explicit DeleteSystemPropertyTemplatesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (templateIds) {
      res["TemplateIds"] = boost::any(*templateIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TemplateIds") != m.end() && !m["TemplateIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TemplateIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TemplateIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      templateIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DeleteSystemPropertyTemplatesRequest() = default;
};
class DeleteSystemPropertyTemplatesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeleteSystemPropertyTemplatesResponseBody() {}

  explicit DeleteSystemPropertyTemplatesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteSystemPropertyTemplatesResponseBody() = default;
};
class DeleteSystemPropertyTemplatesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteSystemPropertyTemplatesResponseBody> body{};

  DeleteSystemPropertyTemplatesResponse() {}

  explicit DeleteSystemPropertyTemplatesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteSystemPropertyTemplatesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteSystemPropertyTemplatesResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteSystemPropertyTemplatesResponse() = default;
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
  shared_ptr<long> availableInstanceAmount{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> cpu{};
  shared_ptr<vector<DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModelDisks>> disks{};
  shared_ptr<bool> enableIpv6{};
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
  shared_ptr<long> ipv6Bandwidth{};
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
    if (availableInstanceAmount) {
      res["AvailableInstanceAmount"] = boost::any(*availableInstanceAmount);
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
    if (enableIpv6) {
      res["EnableIpv6"] = boost::any(*enableIpv6);
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
    if (ipv6Bandwidth) {
      res["Ipv6Bandwidth"] = boost::any(*ipv6Bandwidth);
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
    if (m.find("AvailableInstanceAmount") != m.end() && !m["AvailableInstanceAmount"].empty()) {
      availableInstanceAmount = make_shared<long>(boost::any_cast<long>(m["AvailableInstanceAmount"]));
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
    if (m.find("EnableIpv6") != m.end() && !m["EnableIpv6"].empty()) {
      enableIpv6 = make_shared<bool>(boost::any_cast<bool>(m["EnableIpv6"]));
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
    if (m.find("Ipv6Bandwidth") != m.end() && !m["Ipv6Bandwidth"].empty()) {
      ipv6Bandwidth = make_shared<long>(boost::any_cast<long>(m["Ipv6Bandwidth"]));
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
class DescribeAndroidInstancesRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeAndroidInstancesRequestTag() {}

  explicit DescribeAndroidInstancesRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeAndroidInstancesRequestTag() = default;
};
class DescribeAndroidInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> androidInstanceIds{};
  shared_ptr<string> androidInstanceName{};
  shared_ptr<string> appManagePolicyId{};
  shared_ptr<string> authorizedUserId{};
  shared_ptr<string> bizRegionId{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> instanceGroupId{};
  shared_ptr<vector<string>> instanceGroupIds{};
  shared_ptr<string> instanceGroupName{};
  shared_ptr<string> keyPairId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> nodeId{};
  shared_ptr<string> nodeName{};
  shared_ptr<vector<string>> officeSiteIds{};
  shared_ptr<string> privateIpAddress{};
  shared_ptr<vector<string>> qosRuleIds{};
  shared_ptr<string> saleMode{};
  shared_ptr<string> status{};
  shared_ptr<vector<DescribeAndroidInstancesRequestTag>> tag{};

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
    if (appManagePolicyId) {
      res["AppManagePolicyId"] = boost::any(*appManagePolicyId);
    }
    if (authorizedUserId) {
      res["AuthorizedUserId"] = boost::any(*authorizedUserId);
    }
    if (bizRegionId) {
      res["BizRegionId"] = boost::any(*bizRegionId);
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
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (nodeName) {
      res["NodeName"] = boost::any(*nodeName);
    }
    if (officeSiteIds) {
      res["OfficeSiteIds"] = boost::any(*officeSiteIds);
    }
    if (privateIpAddress) {
      res["PrivateIpAddress"] = boost::any(*privateIpAddress);
    }
    if (qosRuleIds) {
      res["QosRuleIds"] = boost::any(*qosRuleIds);
    }
    if (saleMode) {
      res["SaleMode"] = boost::any(*saleMode);
    }
    if (status) {
      res["Status"] = boost::any(*status);
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
    if (m.find("AppManagePolicyId") != m.end() && !m["AppManagePolicyId"].empty()) {
      appManagePolicyId = make_shared<string>(boost::any_cast<string>(m["AppManagePolicyId"]));
    }
    if (m.find("AuthorizedUserId") != m.end() && !m["AuthorizedUserId"].empty()) {
      authorizedUserId = make_shared<string>(boost::any_cast<string>(m["AuthorizedUserId"]));
    }
    if (m.find("BizRegionId") != m.end() && !m["BizRegionId"].empty()) {
      bizRegionId = make_shared<string>(boost::any_cast<string>(m["BizRegionId"]));
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
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("NodeName") != m.end() && !m["NodeName"].empty()) {
      nodeName = make_shared<string>(boost::any_cast<string>(m["NodeName"]));
    }
    if (m.find("OfficeSiteIds") != m.end() && !m["OfficeSiteIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OfficeSiteIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OfficeSiteIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      officeSiteIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PrivateIpAddress") != m.end() && !m["PrivateIpAddress"].empty()) {
      privateIpAddress = make_shared<string>(boost::any_cast<string>(m["PrivateIpAddress"]));
    }
    if (m.find("QosRuleIds") != m.end() && !m["QosRuleIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["QosRuleIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["QosRuleIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      qosRuleIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SaleMode") != m.end() && !m["SaleMode"].empty()) {
      saleMode = make_shared<string>(boost::any_cast<string>(m["SaleMode"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<DescribeAndroidInstancesRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAndroidInstancesRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<DescribeAndroidInstancesRequestTag>>(expect1);
      }
    }
  }


  virtual ~DescribeAndroidInstancesRequest() = default;
};
class DescribeAndroidInstancesResponseBodyInstanceModelAppManagePolicy : public Darabonba::Model {
public:
  shared_ptr<string> appManagePolicyId{};
  shared_ptr<string> appManagePolicyName{};

  DescribeAndroidInstancesResponseBodyInstanceModelAppManagePolicy() {}

  explicit DescribeAndroidInstancesResponseBodyInstanceModelAppManagePolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appManagePolicyId) {
      res["AppManagePolicyId"] = boost::any(*appManagePolicyId);
    }
    if (appManagePolicyName) {
      res["AppManagePolicyName"] = boost::any(*appManagePolicyName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppManagePolicyId") != m.end() && !m["AppManagePolicyId"].empty()) {
      appManagePolicyId = make_shared<string>(boost::any_cast<string>(m["AppManagePolicyId"]));
    }
    if (m.find("AppManagePolicyName") != m.end() && !m["AppManagePolicyName"].empty()) {
      appManagePolicyName = make_shared<string>(boost::any_cast<string>(m["AppManagePolicyName"]));
    }
  }


  virtual ~DescribeAndroidInstancesResponseBodyInstanceModelAppManagePolicy() = default;
};
class DescribeAndroidInstancesResponseBodyInstanceModelBizTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeAndroidInstancesResponseBodyInstanceModelBizTags() {}

  explicit DescribeAndroidInstancesResponseBodyInstanceModelBizTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeAndroidInstancesResponseBodyInstanceModelBizTags() = default;
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
class DescribeAndroidInstancesResponseBodyInstanceModelDisplayConfig : public Darabonba::Model {
public:
  shared_ptr<long> dpi{};
  shared_ptr<long> fps{};
  shared_ptr<string> lockResolution{};
  shared_ptr<long> resolutionHeight{};
  shared_ptr<long> resolutionWidth{};

  DescribeAndroidInstancesResponseBodyInstanceModelDisplayConfig() {}

  explicit DescribeAndroidInstancesResponseBodyInstanceModelDisplayConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dpi) {
      res["Dpi"] = boost::any(*dpi);
    }
    if (fps) {
      res["Fps"] = boost::any(*fps);
    }
    if (lockResolution) {
      res["LockResolution"] = boost::any(*lockResolution);
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
    if (m.find("Dpi") != m.end() && !m["Dpi"].empty()) {
      dpi = make_shared<long>(boost::any_cast<long>(m["Dpi"]));
    }
    if (m.find("Fps") != m.end() && !m["Fps"].empty()) {
      fps = make_shared<long>(boost::any_cast<long>(m["Fps"]));
    }
    if (m.find("LockResolution") != m.end() && !m["LockResolution"].empty()) {
      lockResolution = make_shared<string>(boost::any_cast<string>(m["LockResolution"]));
    }
    if (m.find("ResolutionHeight") != m.end() && !m["ResolutionHeight"].empty()) {
      resolutionHeight = make_shared<long>(boost::any_cast<long>(m["ResolutionHeight"]));
    }
    if (m.find("ResolutionWidth") != m.end() && !m["ResolutionWidth"].empty()) {
      resolutionWidth = make_shared<long>(boost::any_cast<long>(m["ResolutionWidth"]));
    }
  }


  virtual ~DescribeAndroidInstancesResponseBodyInstanceModelDisplayConfig() = default;
};
class DescribeAndroidInstancesResponseBodyInstanceModelPhoneDataInfo : public Darabonba::Model {
public:
  shared_ptr<string> phoneDataId{};
  shared_ptr<long> phoneDataVolume{};

  DescribeAndroidInstancesResponseBodyInstanceModelPhoneDataInfo() {}

  explicit DescribeAndroidInstancesResponseBodyInstanceModelPhoneDataInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (phoneDataId) {
      res["PhoneDataId"] = boost::any(*phoneDataId);
    }
    if (phoneDataVolume) {
      res["PhoneDataVolume"] = boost::any(*phoneDataVolume);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PhoneDataId") != m.end() && !m["PhoneDataId"].empty()) {
      phoneDataId = make_shared<string>(boost::any_cast<string>(m["PhoneDataId"]));
    }
    if (m.find("PhoneDataVolume") != m.end() && !m["PhoneDataVolume"].empty()) {
      phoneDataVolume = make_shared<long>(boost::any_cast<long>(m["PhoneDataVolume"]));
    }
  }


  virtual ~DescribeAndroidInstancesResponseBodyInstanceModelPhoneDataInfo() = default;
};
class DescribeAndroidInstancesResponseBodyInstanceModelTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeAndroidInstancesResponseBodyInstanceModelTags() {}

  explicit DescribeAndroidInstancesResponseBodyInstanceModelTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeAndroidInstancesResponseBodyInstanceModelTags() = default;
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
  shared_ptr<DescribeAndroidInstancesResponseBodyInstanceModelAppManagePolicy> appManagePolicy{};
  shared_ptr<string> authorizedUserId{};
  shared_ptr<string> bandwidthPackageId{};
  shared_ptr<string> bandwidthPackageType{};
  shared_ptr<string> bindUserId{};
  shared_ptr<vector<DescribeAndroidInstancesResponseBodyInstanceModelBizTags>> bizTags{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> cpu{};
  shared_ptr<vector<DescribeAndroidInstancesResponseBodyInstanceModelDisks>> disks{};
  shared_ptr<DescribeAndroidInstancesResponseBodyInstanceModelDisplayConfig> displayConfig{};
  shared_ptr<long> downBandwidthLimit{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtExpired{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> imageId{};
  shared_ptr<string> imageVersion{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> keyPairId{};
  shared_ptr<long> memory{};
  shared_ptr<string> networkInterfaceIp{};
  shared_ptr<string> networkInterfaceIpv6Address{};
  shared_ptr<string> networkType{};
  shared_ptr<string> officeSiteId{};
  shared_ptr<string> persistentAppInstanceId{};
  shared_ptr<DescribeAndroidInstancesResponseBodyInstanceModelPhoneDataInfo> phoneDataInfo{};
  shared_ptr<string> policyGroupId{};
  shared_ptr<string> publicIpAddress{};
  shared_ptr<string> publicIpv6Address{};
  shared_ptr<string> qosRuleId{};
  shared_ptr<long> rate{};
  shared_ptr<string> regionId{};
  shared_ptr<string> renderingType{};
  shared_ptr<string> serverType{};
  shared_ptr<string> sessionStatus{};
  shared_ptr<long> streamMode{};
  shared_ptr<vector<DescribeAndroidInstancesResponseBodyInstanceModelTags>> tags{};
  shared_ptr<long> upBandwidthLimit{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> zoneId{};

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
    if (appManagePolicy) {
      res["AppManagePolicy"] = appManagePolicy ? boost::any(appManagePolicy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (authorizedUserId) {
      res["AuthorizedUserId"] = boost::any(*authorizedUserId);
    }
    if (bandwidthPackageId) {
      res["BandwidthPackageId"] = boost::any(*bandwidthPackageId);
    }
    if (bandwidthPackageType) {
      res["BandwidthPackageType"] = boost::any(*bandwidthPackageType);
    }
    if (bindUserId) {
      res["BindUserId"] = boost::any(*bindUserId);
    }
    if (bizTags) {
      vector<boost::any> temp1;
      for(auto item1:*bizTags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BizTags"] = boost::any(temp1);
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
    if (displayConfig) {
      res["DisplayConfig"] = displayConfig ? boost::any(displayConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (downBandwidthLimit) {
      res["DownBandwidthLimit"] = boost::any(*downBandwidthLimit);
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
    if (imageVersion) {
      res["ImageVersion"] = boost::any(*imageVersion);
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
    if (networkInterfaceIpv6Address) {
      res["NetworkInterfaceIpv6Address"] = boost::any(*networkInterfaceIpv6Address);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (officeSiteId) {
      res["OfficeSiteId"] = boost::any(*officeSiteId);
    }
    if (persistentAppInstanceId) {
      res["PersistentAppInstanceId"] = boost::any(*persistentAppInstanceId);
    }
    if (phoneDataInfo) {
      res["PhoneDataInfo"] = phoneDataInfo ? boost::any(phoneDataInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (policyGroupId) {
      res["PolicyGroupId"] = boost::any(*policyGroupId);
    }
    if (publicIpAddress) {
      res["PublicIpAddress"] = boost::any(*publicIpAddress);
    }
    if (publicIpv6Address) {
      res["PublicIpv6Address"] = boost::any(*publicIpv6Address);
    }
    if (qosRuleId) {
      res["QosRuleId"] = boost::any(*qosRuleId);
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
    if (serverType) {
      res["ServerType"] = boost::any(*serverType);
    }
    if (sessionStatus) {
      res["SessionStatus"] = boost::any(*sessionStatus);
    }
    if (streamMode) {
      res["StreamMode"] = boost::any(*streamMode);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (upBandwidthLimit) {
      res["UpBandwidthLimit"] = boost::any(*upBandwidthLimit);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
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
    if (m.find("AppManagePolicy") != m.end() && !m["AppManagePolicy"].empty()) {
      if (typeid(map<string, boost::any>) == m["AppManagePolicy"].type()) {
        DescribeAndroidInstancesResponseBodyInstanceModelAppManagePolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AppManagePolicy"]));
        appManagePolicy = make_shared<DescribeAndroidInstancesResponseBodyInstanceModelAppManagePolicy>(model1);
      }
    }
    if (m.find("AuthorizedUserId") != m.end() && !m["AuthorizedUserId"].empty()) {
      authorizedUserId = make_shared<string>(boost::any_cast<string>(m["AuthorizedUserId"]));
    }
    if (m.find("BandwidthPackageId") != m.end() && !m["BandwidthPackageId"].empty()) {
      bandwidthPackageId = make_shared<string>(boost::any_cast<string>(m["BandwidthPackageId"]));
    }
    if (m.find("BandwidthPackageType") != m.end() && !m["BandwidthPackageType"].empty()) {
      bandwidthPackageType = make_shared<string>(boost::any_cast<string>(m["BandwidthPackageType"]));
    }
    if (m.find("BindUserId") != m.end() && !m["BindUserId"].empty()) {
      bindUserId = make_shared<string>(boost::any_cast<string>(m["BindUserId"]));
    }
    if (m.find("BizTags") != m.end() && !m["BizTags"].empty()) {
      if (typeid(vector<boost::any>) == m["BizTags"].type()) {
        vector<DescribeAndroidInstancesResponseBodyInstanceModelBizTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BizTags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAndroidInstancesResponseBodyInstanceModelBizTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        bizTags = make_shared<vector<DescribeAndroidInstancesResponseBodyInstanceModelBizTags>>(expect1);
      }
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
    if (m.find("DisplayConfig") != m.end() && !m["DisplayConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["DisplayConfig"].type()) {
        DescribeAndroidInstancesResponseBodyInstanceModelDisplayConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DisplayConfig"]));
        displayConfig = make_shared<DescribeAndroidInstancesResponseBodyInstanceModelDisplayConfig>(model1);
      }
    }
    if (m.find("DownBandwidthLimit") != m.end() && !m["DownBandwidthLimit"].empty()) {
      downBandwidthLimit = make_shared<long>(boost::any_cast<long>(m["DownBandwidthLimit"]));
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
    if (m.find("ImageVersion") != m.end() && !m["ImageVersion"].empty()) {
      imageVersion = make_shared<string>(boost::any_cast<string>(m["ImageVersion"]));
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
    if (m.find("NetworkInterfaceIpv6Address") != m.end() && !m["NetworkInterfaceIpv6Address"].empty()) {
      networkInterfaceIpv6Address = make_shared<string>(boost::any_cast<string>(m["NetworkInterfaceIpv6Address"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("OfficeSiteId") != m.end() && !m["OfficeSiteId"].empty()) {
      officeSiteId = make_shared<string>(boost::any_cast<string>(m["OfficeSiteId"]));
    }
    if (m.find("PersistentAppInstanceId") != m.end() && !m["PersistentAppInstanceId"].empty()) {
      persistentAppInstanceId = make_shared<string>(boost::any_cast<string>(m["PersistentAppInstanceId"]));
    }
    if (m.find("PhoneDataInfo") != m.end() && !m["PhoneDataInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PhoneDataInfo"].type()) {
        DescribeAndroidInstancesResponseBodyInstanceModelPhoneDataInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PhoneDataInfo"]));
        phoneDataInfo = make_shared<DescribeAndroidInstancesResponseBodyInstanceModelPhoneDataInfo>(model1);
      }
    }
    if (m.find("PolicyGroupId") != m.end() && !m["PolicyGroupId"].empty()) {
      policyGroupId = make_shared<string>(boost::any_cast<string>(m["PolicyGroupId"]));
    }
    if (m.find("PublicIpAddress") != m.end() && !m["PublicIpAddress"].empty()) {
      publicIpAddress = make_shared<string>(boost::any_cast<string>(m["PublicIpAddress"]));
    }
    if (m.find("PublicIpv6Address") != m.end() && !m["PublicIpv6Address"].empty()) {
      publicIpv6Address = make_shared<string>(boost::any_cast<string>(m["PublicIpv6Address"]));
    }
    if (m.find("QosRuleId") != m.end() && !m["QosRuleId"].empty()) {
      qosRuleId = make_shared<string>(boost::any_cast<string>(m["QosRuleId"]));
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
    if (m.find("ServerType") != m.end() && !m["ServerType"].empty()) {
      serverType = make_shared<string>(boost::any_cast<string>(m["ServerType"]));
    }
    if (m.find("SessionStatus") != m.end() && !m["SessionStatus"].empty()) {
      sessionStatus = make_shared<string>(boost::any_cast<string>(m["SessionStatus"]));
    }
    if (m.find("StreamMode") != m.end() && !m["StreamMode"].empty()) {
      streamMode = make_shared<long>(boost::any_cast<long>(m["StreamMode"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<DescribeAndroidInstancesResponseBodyInstanceModelTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAndroidInstancesResponseBodyInstanceModelTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<DescribeAndroidInstancesResponseBodyInstanceModelTags>>(expect1);
      }
    }
    if (m.find("UpBandwidthLimit") != m.end() && !m["UpBandwidthLimit"].empty()) {
      upBandwidthLimit = make_shared<long>(boost::any_cast<long>(m["UpBandwidthLimit"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
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
  shared_ptr<string> appType{};
  shared_ptr<string> bizRegionId{};
  shared_ptr<string> installationStatus{};
  shared_ptr<string> MD5{};
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
    if (appType) {
      res["AppType"] = boost::any(*appType);
    }
    if (bizRegionId) {
      res["BizRegionId"] = boost::any(*bizRegionId);
    }
    if (installationStatus) {
      res["InstallationStatus"] = boost::any(*installationStatus);
    }
    if (MD5) {
      res["MD5"] = boost::any(*MD5);
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
    if (m.find("AppType") != m.end() && !m["AppType"].empty()) {
      appType = make_shared<string>(boost::any_cast<string>(m["AppType"]));
    }
    if (m.find("BizRegionId") != m.end() && !m["BizRegionId"].empty()) {
      bizRegionId = make_shared<string>(boost::any_cast<string>(m["BizRegionId"]));
    }
    if (m.find("InstallationStatus") != m.end() && !m["InstallationStatus"].empty()) {
      installationStatus = make_shared<string>(boost::any_cast<string>(m["InstallationStatus"]));
    }
    if (m.find("MD5") != m.end() && !m["MD5"].empty()) {
      MD5 = make_shared<string>(boost::any_cast<string>(m["MD5"]));
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
  shared_ptr<string> apkSize{};
  shared_ptr<long> appId{};
  shared_ptr<string> appName{};
  shared_ptr<string> appType{};
  shared_ptr<string> bizRegionId{};
  shared_ptr<string> description{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> iconUrl{};
  shared_ptr<string> installationStatus{};
  shared_ptr<vector<string>> instanceGroupList{};
  shared_ptr<string> MD5{};
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
    if (apkSize) {
      res["ApkSize"] = boost::any(*apkSize);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (appType) {
      res["AppType"] = boost::any(*appType);
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
    if (MD5) {
      res["MD5"] = boost::any(*MD5);
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
    if (m.find("ApkSize") != m.end() && !m["ApkSize"].empty()) {
      apkSize = make_shared<string>(boost::any_cast<string>(m["ApkSize"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<long>(boost::any_cast<long>(m["AppId"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("AppType") != m.end() && !m["AppType"].empty()) {
      appType = make_shared<string>(boost::any_cast<string>(m["AppType"]));
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
    if (m.find("MD5") != m.end() && !m["MD5"].empty()) {
      MD5 = make_shared<string>(boost::any_cast<string>(m["MD5"]));
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
  shared_ptr<bool> backupAll{};
  shared_ptr<string> backupFileId{};
  shared_ptr<string> backupFileName{};
  shared_ptr<string> description{};
  shared_ptr<string> endTime{};
  shared_ptr<string> endUserId{};
  shared_ptr<string> instanceGroupId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> startTime{};
  shared_ptr<vector<string>> statusList{};

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
    if (backupAll) {
      res["BackupAll"] = boost::any(*backupAll);
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
    if (statusList) {
      res["StatusList"] = boost::any(*statusList);
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
    if (m.find("BackupAll") != m.end() && !m["BackupAll"].empty()) {
      backupAll = make_shared<bool>(boost::any_cast<bool>(m["BackupAll"]));
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
    if (m.find("StatusList") != m.end() && !m["StatusList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["StatusList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["StatusList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      statusList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeBackupFilesRequest() = default;
};
class DescribeBackupFilesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> androidInstanceId{};
  shared_ptr<string> androidInstanceName{};
  shared_ptr<bool> backupAll{};
  shared_ptr<string> backupFileId{};
  shared_ptr<string> backupFileName{};
  shared_ptr<string> backupFilePath{};
  shared_ptr<string> description{};
  shared_ptr<string> endUserId{};
  shared_ptr<long> fileSize{};
  shared_ptr<string> gmtCreated{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> instanceGroupId{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> sourceAppInfoList{};
  shared_ptr<vector<string>> sourceFilePathList{};
  shared_ptr<string> status{};
  shared_ptr<string> taskId{};
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
    if (backupAll) {
      res["BackupAll"] = boost::any(*backupAll);
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sourceAppInfoList) {
      res["SourceAppInfoList"] = boost::any(*sourceAppInfoList);
    }
    if (sourceFilePathList) {
      res["SourceFilePathList"] = boost::any(*sourceFilePathList);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
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
    if (m.find("BackupAll") != m.end() && !m["BackupAll"].empty()) {
      backupAll = make_shared<bool>(boost::any_cast<bool>(m["BackupAll"]));
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SourceAppInfoList") != m.end() && !m["SourceAppInfoList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SourceAppInfoList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SourceAppInfoList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sourceAppInfoList = make_shared<vector<string>>(toVec1);
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
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
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
class DescribeCloudPhoneNodesRequest : public Darabonba::Model {
public:
  shared_ptr<string> bandwidthPackageId{};
  shared_ptr<string> bizRegionId{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<string>> nodeIds{};
  shared_ptr<string> nodeName{};
  shared_ptr<string> serverType{};
  shared_ptr<string> status{};

  DescribeCloudPhoneNodesRequest() {}

  explicit DescribeCloudPhoneNodesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bandwidthPackageId) {
      res["BandwidthPackageId"] = boost::any(*bandwidthPackageId);
    }
    if (bizRegionId) {
      res["BizRegionId"] = boost::any(*bizRegionId);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (nodeIds) {
      res["NodeIds"] = boost::any(*nodeIds);
    }
    if (nodeName) {
      res["NodeName"] = boost::any(*nodeName);
    }
    if (serverType) {
      res["ServerType"] = boost::any(*serverType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BandwidthPackageId") != m.end() && !m["BandwidthPackageId"].empty()) {
      bandwidthPackageId = make_shared<string>(boost::any_cast<string>(m["BandwidthPackageId"]));
    }
    if (m.find("BizRegionId") != m.end() && !m["BizRegionId"].empty()) {
      bizRegionId = make_shared<string>(boost::any_cast<string>(m["BizRegionId"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<string>(boost::any_cast<string>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("NodeIds") != m.end() && !m["NodeIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["NodeIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["NodeIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      nodeIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("NodeName") != m.end() && !m["NodeName"].empty()) {
      nodeName = make_shared<string>(boost::any_cast<string>(m["NodeName"]));
    }
    if (m.find("ServerType") != m.end() && !m["ServerType"].empty()) {
      serverType = make_shared<string>(boost::any_cast<string>(m["ServerType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeCloudPhoneNodesRequest() = default;
};
class DescribeCloudPhoneNodesResponseBodyNodeModelBizTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeCloudPhoneNodesResponseBodyNodeModelBizTags() {}

  explicit DescribeCloudPhoneNodesResponseBodyNodeModelBizTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeCloudPhoneNodesResponseBodyNodeModelBizTags() = default;
};
class DescribeCloudPhoneNodesResponseBodyNodeModelNetworkInfos : public Darabonba::Model {
public:
  shared_ptr<string> bandwidthPackageId{};
  shared_ptr<string> bandwidthPackageType{};
  shared_ptr<string> networkId{};
  shared_ptr<string> networkType{};
  shared_ptr<string> vSwitchId{};

  DescribeCloudPhoneNodesResponseBodyNodeModelNetworkInfos() {}

  explicit DescribeCloudPhoneNodesResponseBodyNodeModelNetworkInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bandwidthPackageId) {
      res["BandwidthPackageId"] = boost::any(*bandwidthPackageId);
    }
    if (bandwidthPackageType) {
      res["BandwidthPackageType"] = boost::any(*bandwidthPackageType);
    }
    if (networkId) {
      res["NetworkId"] = boost::any(*networkId);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BandwidthPackageId") != m.end() && !m["BandwidthPackageId"].empty()) {
      bandwidthPackageId = make_shared<string>(boost::any_cast<string>(m["BandwidthPackageId"]));
    }
    if (m.find("BandwidthPackageType") != m.end() && !m["BandwidthPackageType"].empty()) {
      bandwidthPackageType = make_shared<string>(boost::any_cast<string>(m["BandwidthPackageType"]));
    }
    if (m.find("NetworkId") != m.end() && !m["NetworkId"].empty()) {
      networkId = make_shared<string>(boost::any_cast<string>(m["NetworkId"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
  }


  virtual ~DescribeCloudPhoneNodesResponseBodyNodeModelNetworkInfos() = default;
};
class DescribeCloudPhoneNodesResponseBodyNodeModelPhoneDataInfo : public Darabonba::Model {
public:
  shared_ptr<string> phoneDataId{};
  shared_ptr<long> phoneDataVolume{};

  DescribeCloudPhoneNodesResponseBodyNodeModelPhoneDataInfo() {}

  explicit DescribeCloudPhoneNodesResponseBodyNodeModelPhoneDataInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (phoneDataId) {
      res["PhoneDataId"] = boost::any(*phoneDataId);
    }
    if (phoneDataVolume) {
      res["PhoneDataVolume"] = boost::any(*phoneDataVolume);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PhoneDataId") != m.end() && !m["PhoneDataId"].empty()) {
      phoneDataId = make_shared<string>(boost::any_cast<string>(m["PhoneDataId"]));
    }
    if (m.find("PhoneDataVolume") != m.end() && !m["PhoneDataVolume"].empty()) {
      phoneDataVolume = make_shared<long>(boost::any_cast<long>(m["PhoneDataVolume"]));
    }
  }


  virtual ~DescribeCloudPhoneNodesResponseBodyNodeModelPhoneDataInfo() = default;
};
class DescribeCloudPhoneNodesResponseBodyNodeModel : public Darabonba::Model {
public:
  shared_ptr<string> bandwidthPackageId{};
  shared_ptr<string> bandwidthPackageType{};
  shared_ptr<vector<DescribeCloudPhoneNodesResponseBodyNodeModelBizTags>> bizTags{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> cpu{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtExpired{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> instanceType{};
  shared_ptr<long> memory{};
  shared_ptr<string> networkId{};
  shared_ptr<vector<DescribeCloudPhoneNodesResponseBodyNodeModelNetworkInfos>> networkInfos{};
  shared_ptr<string> networkType{};
  shared_ptr<string> nodeId{};
  shared_ptr<string> nodeName{};
  shared_ptr<long> phoneCount{};
  shared_ptr<DescribeCloudPhoneNodesResponseBodyNodeModelPhoneDataInfo> phoneDataInfo{};
  shared_ptr<string> regionId{};
  shared_ptr<long> resolutionHeight{};
  shared_ptr<long> resolutionWidth{};
  shared_ptr<string> serverType{};
  shared_ptr<long> shareDataVolume{};
  shared_ptr<string> status{};
  shared_ptr<string> vSwitchId{};

  DescribeCloudPhoneNodesResponseBodyNodeModel() {}

  explicit DescribeCloudPhoneNodesResponseBodyNodeModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bandwidthPackageId) {
      res["BandwidthPackageId"] = boost::any(*bandwidthPackageId);
    }
    if (bandwidthPackageType) {
      res["BandwidthPackageType"] = boost::any(*bandwidthPackageType);
    }
    if (bizTags) {
      vector<boost::any> temp1;
      for(auto item1:*bizTags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BizTags"] = boost::any(temp1);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
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
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (networkId) {
      res["NetworkId"] = boost::any(*networkId);
    }
    if (networkInfos) {
      vector<boost::any> temp1;
      for(auto item1:*networkInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NetworkInfos"] = boost::any(temp1);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (nodeName) {
      res["NodeName"] = boost::any(*nodeName);
    }
    if (phoneCount) {
      res["PhoneCount"] = boost::any(*phoneCount);
    }
    if (phoneDataInfo) {
      res["PhoneDataInfo"] = phoneDataInfo ? boost::any(phoneDataInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resolutionHeight) {
      res["ResolutionHeight"] = boost::any(*resolutionHeight);
    }
    if (resolutionWidth) {
      res["ResolutionWidth"] = boost::any(*resolutionWidth);
    }
    if (serverType) {
      res["ServerType"] = boost::any(*serverType);
    }
    if (shareDataVolume) {
      res["ShareDataVolume"] = boost::any(*shareDataVolume);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BandwidthPackageId") != m.end() && !m["BandwidthPackageId"].empty()) {
      bandwidthPackageId = make_shared<string>(boost::any_cast<string>(m["BandwidthPackageId"]));
    }
    if (m.find("BandwidthPackageType") != m.end() && !m["BandwidthPackageType"].empty()) {
      bandwidthPackageType = make_shared<string>(boost::any_cast<string>(m["BandwidthPackageType"]));
    }
    if (m.find("BizTags") != m.end() && !m["BizTags"].empty()) {
      if (typeid(vector<boost::any>) == m["BizTags"].type()) {
        vector<DescribeCloudPhoneNodesResponseBodyNodeModelBizTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BizTags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCloudPhoneNodesResponseBodyNodeModelBizTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        bizTags = make_shared<vector<DescribeCloudPhoneNodesResponseBodyNodeModelBizTags>>(expect1);
      }
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<string>(boost::any_cast<string>(m["Cpu"]));
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
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<long>(boost::any_cast<long>(m["Memory"]));
    }
    if (m.find("NetworkId") != m.end() && !m["NetworkId"].empty()) {
      networkId = make_shared<string>(boost::any_cast<string>(m["NetworkId"]));
    }
    if (m.find("NetworkInfos") != m.end() && !m["NetworkInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["NetworkInfos"].type()) {
        vector<DescribeCloudPhoneNodesResponseBodyNodeModelNetworkInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NetworkInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCloudPhoneNodesResponseBodyNodeModelNetworkInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        networkInfos = make_shared<vector<DescribeCloudPhoneNodesResponseBodyNodeModelNetworkInfos>>(expect1);
      }
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("NodeName") != m.end() && !m["NodeName"].empty()) {
      nodeName = make_shared<string>(boost::any_cast<string>(m["NodeName"]));
    }
    if (m.find("PhoneCount") != m.end() && !m["PhoneCount"].empty()) {
      phoneCount = make_shared<long>(boost::any_cast<long>(m["PhoneCount"]));
    }
    if (m.find("PhoneDataInfo") != m.end() && !m["PhoneDataInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PhoneDataInfo"].type()) {
        DescribeCloudPhoneNodesResponseBodyNodeModelPhoneDataInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PhoneDataInfo"]));
        phoneDataInfo = make_shared<DescribeCloudPhoneNodesResponseBodyNodeModelPhoneDataInfo>(model1);
      }
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResolutionHeight") != m.end() && !m["ResolutionHeight"].empty()) {
      resolutionHeight = make_shared<long>(boost::any_cast<long>(m["ResolutionHeight"]));
    }
    if (m.find("ResolutionWidth") != m.end() && !m["ResolutionWidth"].empty()) {
      resolutionWidth = make_shared<long>(boost::any_cast<long>(m["ResolutionWidth"]));
    }
    if (m.find("ServerType") != m.end() && !m["ServerType"].empty()) {
      serverType = make_shared<string>(boost::any_cast<string>(m["ServerType"]));
    }
    if (m.find("ShareDataVolume") != m.end() && !m["ShareDataVolume"].empty()) {
      shareDataVolume = make_shared<long>(boost::any_cast<long>(m["ShareDataVolume"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
  }


  virtual ~DescribeCloudPhoneNodesResponseBodyNodeModel() = default;
};
class DescribeCloudPhoneNodesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<DescribeCloudPhoneNodesResponseBodyNodeModel>> nodeModel{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeCloudPhoneNodesResponseBody() {}

  explicit DescribeCloudPhoneNodesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (nodeModel) {
      vector<boost::any> temp1;
      for(auto item1:*nodeModel){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NodeModel"] = boost::any(temp1);
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
    if (m.find("NodeModel") != m.end() && !m["NodeModel"].empty()) {
      if (typeid(vector<boost::any>) == m["NodeModel"].type()) {
        vector<DescribeCloudPhoneNodesResponseBodyNodeModel> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NodeModel"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCloudPhoneNodesResponseBodyNodeModel model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodeModel = make_shared<vector<DescribeCloudPhoneNodesResponseBodyNodeModel>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeCloudPhoneNodesResponseBody() = default;
};
class DescribeCloudPhoneNodesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeCloudPhoneNodesResponseBody> body{};

  DescribeCloudPhoneNodesResponse() {}

  explicit DescribeCloudPhoneNodesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCloudPhoneNodesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCloudPhoneNodesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCloudPhoneNodesResponse() = default;
};
class DescribeDisplayConfigRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> androidInstanceIds{};

  DescribeDisplayConfigRequest() {}

  explicit DescribeDisplayConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeDisplayConfigRequest() = default;
};
class DescribeDisplayConfigResponseBodyDisplayConfigModel : public Darabonba::Model {
public:
  shared_ptr<string> androidInstanceId{};
  shared_ptr<long> dpi{};
  shared_ptr<long> fps{};
  shared_ptr<string> lockResolution{};
  shared_ptr<long> resolutionHeight{};
  shared_ptr<long> resolutionWidth{};

  DescribeDisplayConfigResponseBodyDisplayConfigModel() {}

  explicit DescribeDisplayConfigResponseBodyDisplayConfigModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (androidInstanceId) {
      res["AndroidInstanceId"] = boost::any(*androidInstanceId);
    }
    if (dpi) {
      res["Dpi"] = boost::any(*dpi);
    }
    if (fps) {
      res["Fps"] = boost::any(*fps);
    }
    if (lockResolution) {
      res["LockResolution"] = boost::any(*lockResolution);
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
    if (m.find("AndroidInstanceId") != m.end() && !m["AndroidInstanceId"].empty()) {
      androidInstanceId = make_shared<string>(boost::any_cast<string>(m["AndroidInstanceId"]));
    }
    if (m.find("Dpi") != m.end() && !m["Dpi"].empty()) {
      dpi = make_shared<long>(boost::any_cast<long>(m["Dpi"]));
    }
    if (m.find("Fps") != m.end() && !m["Fps"].empty()) {
      fps = make_shared<long>(boost::any_cast<long>(m["Fps"]));
    }
    if (m.find("LockResolution") != m.end() && !m["LockResolution"].empty()) {
      lockResolution = make_shared<string>(boost::any_cast<string>(m["LockResolution"]));
    }
    if (m.find("ResolutionHeight") != m.end() && !m["ResolutionHeight"].empty()) {
      resolutionHeight = make_shared<long>(boost::any_cast<long>(m["ResolutionHeight"]));
    }
    if (m.find("ResolutionWidth") != m.end() && !m["ResolutionWidth"].empty()) {
      resolutionWidth = make_shared<long>(boost::any_cast<long>(m["ResolutionWidth"]));
    }
  }


  virtual ~DescribeDisplayConfigResponseBodyDisplayConfigModel() = default;
};
class DescribeDisplayConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDisplayConfigResponseBodyDisplayConfigModel>> displayConfigModel{};
  shared_ptr<string> requestId{};

  DescribeDisplayConfigResponseBody() {}

  explicit DescribeDisplayConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayConfigModel) {
      vector<boost::any> temp1;
      for(auto item1:*displayConfigModel){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DisplayConfigModel"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisplayConfigModel") != m.end() && !m["DisplayConfigModel"].empty()) {
      if (typeid(vector<boost::any>) == m["DisplayConfigModel"].type()) {
        vector<DescribeDisplayConfigResponseBodyDisplayConfigModel> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DisplayConfigModel"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDisplayConfigResponseBodyDisplayConfigModel model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        displayConfigModel = make_shared<vector<DescribeDisplayConfigResponseBodyDisplayConfigModel>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeDisplayConfigResponseBody() = default;
};
class DescribeDisplayConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDisplayConfigResponseBody> body{};

  DescribeDisplayConfigResponse() {}

  explicit DescribeDisplayConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDisplayConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDisplayConfigResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDisplayConfigResponse() = default;
};
class DescribeImageListRequestImageBizTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeImageListRequestImageBizTags() {}

  explicit DescribeImageListRequestImageBizTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeImageListRequestImageBizTags() = default;
};
class DescribeImageListRequest : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeImageListRequestImageBizTags>> imageBizTags{};
  shared_ptr<string> imageId{};
  shared_ptr<string> imageName{};
  shared_ptr<string> imagePackageType{};
  shared_ptr<string> imageType{};
  shared_ptr<string> instanceType{};
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
    if (imageBizTags) {
      vector<boost::any> temp1;
      for(auto item1:*imageBizTags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ImageBizTags"] = boost::any(temp1);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (imageName) {
      res["ImageName"] = boost::any(*imageName);
    }
    if (imagePackageType) {
      res["ImagePackageType"] = boost::any(*imagePackageType);
    }
    if (imageType) {
      res["ImageType"] = boost::any(*imageType);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
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
    if (m.find("ImageBizTags") != m.end() && !m["ImageBizTags"].empty()) {
      if (typeid(vector<boost::any>) == m["ImageBizTags"].type()) {
        vector<DescribeImageListRequestImageBizTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ImageBizTags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeImageListRequestImageBizTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        imageBizTags = make_shared<vector<DescribeImageListRequestImageBizTags>>(expect1);
      }
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("ImageName") != m.end() && !m["ImageName"].empty()) {
      imageName = make_shared<string>(boost::any_cast<string>(m["ImageName"]));
    }
    if (m.find("ImagePackageType") != m.end() && !m["ImagePackageType"].empty()) {
      imagePackageType = make_shared<string>(boost::any_cast<string>(m["ImagePackageType"]));
    }
    if (m.find("ImageType") != m.end() && !m["ImageType"].empty()) {
      imageType = make_shared<string>(boost::any_cast<string>(m["ImageType"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
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
class DescribeImageListResponseBodyDataImageBizTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeImageListResponseBodyDataImageBizTags() {}

  explicit DescribeImageListResponseBodyDataImageBizTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeImageListResponseBodyDataImageBizTags() = default;
};
class DescribeImageListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> aliUid{};
  shared_ptr<string> description{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<vector<DescribeImageListResponseBodyDataImageBizTags>> imageBizTags{};
  shared_ptr<string> imageId{};
  shared_ptr<string> imageName{};
  shared_ptr<map<string, DataImageRegionDistributeMapValue>> imageRegionDistributeMap{};
  shared_ptr<vector<string>> imageRegionList{};
  shared_ptr<string> imageType{};
  shared_ptr<string> imageVersion{};
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
    if (imageBizTags) {
      vector<boost::any> temp1;
      for(auto item1:*imageBizTags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ImageBizTags"] = boost::any(temp1);
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
    if (imageVersion) {
      res["ImageVersion"] = boost::any(*imageVersion);
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
    if (m.find("ImageBizTags") != m.end() && !m["ImageBizTags"].empty()) {
      if (typeid(vector<boost::any>) == m["ImageBizTags"].type()) {
        vector<DescribeImageListResponseBodyDataImageBizTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ImageBizTags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeImageListResponseBodyDataImageBizTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        imageBizTags = make_shared<vector<DescribeImageListResponseBodyDataImageBizTags>>(expect1);
      }
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
    if (m.find("ImageVersion") != m.end() && !m["ImageVersion"].empty()) {
      imageVersion = make_shared<string>(boost::any_cast<string>(m["ImageVersion"]));
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
class DescribeMetricLastRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> androidInstanceIds{};
  shared_ptr<string> endTime{};
  shared_ptr<string> length{};
  shared_ptr<vector<string>> metricNames{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> period{};
  shared_ptr<string> startTime{};

  DescribeMetricLastRequest() {}

  explicit DescribeMetricLastRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (androidInstanceIds) {
      res["AndroidInstanceIds"] = boost::any(*androidInstanceIds);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (length) {
      res["Length"] = boost::any(*length);
    }
    if (metricNames) {
      res["MetricNames"] = boost::any(*metricNames);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
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
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Length") != m.end() && !m["Length"].empty()) {
      length = make_shared<string>(boost::any_cast<string>(m["Length"]));
    }
    if (m.find("MetricNames") != m.end() && !m["MetricNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["MetricNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["MetricNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      metricNames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeMetricLastRequest() = default;
};
class DescribeMetricLastResponseBodyMetricTotalModelMetricModelListDataPoints : public Darabonba::Model {
public:
  shared_ptr<double> average{};
  shared_ptr<double> maximum{};
  shared_ptr<double> minimum{};
  shared_ptr<long> timestamp{};

  DescribeMetricLastResponseBodyMetricTotalModelMetricModelListDataPoints() {}

  explicit DescribeMetricLastResponseBodyMetricTotalModelMetricModelListDataPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (average) {
      res["Average"] = boost::any(*average);
    }
    if (maximum) {
      res["Maximum"] = boost::any(*maximum);
    }
    if (minimum) {
      res["Minimum"] = boost::any(*minimum);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Average") != m.end() && !m["Average"].empty()) {
      average = make_shared<double>(boost::any_cast<double>(m["Average"]));
    }
    if (m.find("Maximum") != m.end() && !m["Maximum"].empty()) {
      maximum = make_shared<double>(boost::any_cast<double>(m["Maximum"]));
    }
    if (m.find("Minimum") != m.end() && !m["Minimum"].empty()) {
      minimum = make_shared<double>(boost::any_cast<double>(m["Minimum"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
  }


  virtual ~DescribeMetricLastResponseBodyMetricTotalModelMetricModelListDataPoints() = default;
};
class DescribeMetricLastResponseBodyMetricTotalModelMetricModelListProcessLastInfos : public Darabonba::Model {
public:
  shared_ptr<double> cpuUsage{};
  shared_ptr<double> memoryUsage{};
  shared_ptr<string> name{};
  shared_ptr<vector<long>> processIds{};
  shared_ptr<long> timestamp{};

  DescribeMetricLastResponseBodyMetricTotalModelMetricModelListProcessLastInfos() {}

  explicit DescribeMetricLastResponseBodyMetricTotalModelMetricModelListProcessLastInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpuUsage) {
      res["CpuUsage"] = boost::any(*cpuUsage);
    }
    if (memoryUsage) {
      res["MemoryUsage"] = boost::any(*memoryUsage);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (processIds) {
      res["ProcessIds"] = boost::any(*processIds);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CpuUsage") != m.end() && !m["CpuUsage"].empty()) {
      cpuUsage = make_shared<double>(boost::any_cast<double>(m["CpuUsage"]));
    }
    if (m.find("MemoryUsage") != m.end() && !m["MemoryUsage"].empty()) {
      memoryUsage = make_shared<double>(boost::any_cast<double>(m["MemoryUsage"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ProcessIds") != m.end() && !m["ProcessIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["ProcessIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ProcessIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      processIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
  }


  virtual ~DescribeMetricLastResponseBodyMetricTotalModelMetricModelListProcessLastInfos() = default;
};
class DescribeMetricLastResponseBodyMetricTotalModelMetricModelList : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeMetricLastResponseBodyMetricTotalModelMetricModelListDataPoints>> dataPoints{};
  shared_ptr<string> metricName{};
  shared_ptr<vector<DescribeMetricLastResponseBodyMetricTotalModelMetricModelListProcessLastInfos>> processLastInfos{};

  DescribeMetricLastResponseBodyMetricTotalModelMetricModelList() {}

  explicit DescribeMetricLastResponseBodyMetricTotalModelMetricModelList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataPoints) {
      vector<boost::any> temp1;
      for(auto item1:*dataPoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataPoints"] = boost::any(temp1);
    }
    if (metricName) {
      res["MetricName"] = boost::any(*metricName);
    }
    if (processLastInfos) {
      vector<boost::any> temp1;
      for(auto item1:*processLastInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ProcessLastInfos"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataPoints") != m.end() && !m["DataPoints"].empty()) {
      if (typeid(vector<boost::any>) == m["DataPoints"].type()) {
        vector<DescribeMetricLastResponseBodyMetricTotalModelMetricModelListDataPoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataPoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMetricLastResponseBodyMetricTotalModelMetricModelListDataPoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataPoints = make_shared<vector<DescribeMetricLastResponseBodyMetricTotalModelMetricModelListDataPoints>>(expect1);
      }
    }
    if (m.find("MetricName") != m.end() && !m["MetricName"].empty()) {
      metricName = make_shared<string>(boost::any_cast<string>(m["MetricName"]));
    }
    if (m.find("ProcessLastInfos") != m.end() && !m["ProcessLastInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["ProcessLastInfos"].type()) {
        vector<DescribeMetricLastResponseBodyMetricTotalModelMetricModelListProcessLastInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ProcessLastInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMetricLastResponseBodyMetricTotalModelMetricModelListProcessLastInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        processLastInfos = make_shared<vector<DescribeMetricLastResponseBodyMetricTotalModelMetricModelListProcessLastInfos>>(expect1);
      }
    }
  }


  virtual ~DescribeMetricLastResponseBodyMetricTotalModelMetricModelList() = default;
};
class DescribeMetricLastResponseBodyMetricTotalModel : public Darabonba::Model {
public:
  shared_ptr<string> androidInstanceId{};
  shared_ptr<vector<DescribeMetricLastResponseBodyMetricTotalModelMetricModelList>> metricModelList{};

  DescribeMetricLastResponseBodyMetricTotalModel() {}

  explicit DescribeMetricLastResponseBodyMetricTotalModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (androidInstanceId) {
      res["AndroidInstanceId"] = boost::any(*androidInstanceId);
    }
    if (metricModelList) {
      vector<boost::any> temp1;
      for(auto item1:*metricModelList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MetricModelList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AndroidInstanceId") != m.end() && !m["AndroidInstanceId"].empty()) {
      androidInstanceId = make_shared<string>(boost::any_cast<string>(m["AndroidInstanceId"]));
    }
    if (m.find("MetricModelList") != m.end() && !m["MetricModelList"].empty()) {
      if (typeid(vector<boost::any>) == m["MetricModelList"].type()) {
        vector<DescribeMetricLastResponseBodyMetricTotalModelMetricModelList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MetricModelList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMetricLastResponseBodyMetricTotalModelMetricModelList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        metricModelList = make_shared<vector<DescribeMetricLastResponseBodyMetricTotalModelMetricModelList>>(expect1);
      }
    }
  }


  virtual ~DescribeMetricLastResponseBodyMetricTotalModel() = default;
};
class DescribeMetricLastResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<vector<DescribeMetricLastResponseBodyMetricTotalModel>> metricTotalModel{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};

  DescribeMetricLastResponseBody() {}

  explicit DescribeMetricLastResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (metricTotalModel) {
      vector<boost::any> temp1;
      for(auto item1:*metricTotalModel){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MetricTotalModel"] = boost::any(temp1);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
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
    if (m.find("MetricTotalModel") != m.end() && !m["MetricTotalModel"].empty()) {
      if (typeid(vector<boost::any>) == m["MetricTotalModel"].type()) {
        vector<DescribeMetricLastResponseBodyMetricTotalModel> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MetricTotalModel"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMetricLastResponseBodyMetricTotalModel model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        metricTotalModel = make_shared<vector<DescribeMetricLastResponseBodyMetricTotalModel>>(expect1);
      }
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeMetricLastResponseBody() = default;
};
class DescribeMetricLastResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeMetricLastResponseBody> body{};

  DescribeMetricLastResponse() {}

  explicit DescribeMetricLastResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeMetricLastResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeMetricLastResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeMetricLastResponse() = default;
};
class DescribeRegionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> saleMode{};

  DescribeRegionsRequest() {}

  explicit DescribeRegionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (saleMode) {
      res["SaleMode"] = boost::any(*saleMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("SaleMode") != m.end() && !m["SaleMode"].empty()) {
      saleMode = make_shared<string>(boost::any_cast<string>(m["SaleMode"]));
    }
  }


  virtual ~DescribeRegionsRequest() = default;
};
class DescribeRegionsResponseBodyRegionModels : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> regionName{};

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
    if (regionName) {
      res["RegionName"] = boost::any(*regionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RegionName") != m.end() && !m["RegionName"].empty()) {
      regionName = make_shared<string>(boost::any_cast<string>(m["RegionName"]));
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
  shared_ptr<string> matrixSpec{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> saleMode{};
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
    if (matrixSpec) {
      res["MatrixSpec"] = boost::any(*matrixSpec);
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
    if (m.find("MatrixSpec") != m.end() && !m["MatrixSpec"].empty()) {
      matrixSpec = make_shared<string>(boost::any_cast<string>(m["MatrixSpec"]));
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
  shared_ptr<string> maxPhoneCount{};
  shared_ptr<long> memory{};
  shared_ptr<string> minPhoneCount{};
  shared_ptr<string> phoneCount{};
  shared_ptr<string> resolution{};
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
    if (maxPhoneCount) {
      res["MaxPhoneCount"] = boost::any(*maxPhoneCount);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (minPhoneCount) {
      res["MinPhoneCount"] = boost::any(*minPhoneCount);
    }
    if (phoneCount) {
      res["PhoneCount"] = boost::any(*phoneCount);
    }
    if (resolution) {
      res["Resolution"] = boost::any(*resolution);
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
    if (m.find("MaxPhoneCount") != m.end() && !m["MaxPhoneCount"].empty()) {
      maxPhoneCount = make_shared<string>(boost::any_cast<string>(m["MaxPhoneCount"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<long>(boost::any_cast<long>(m["Memory"]));
    }
    if (m.find("MinPhoneCount") != m.end() && !m["MinPhoneCount"].empty()) {
      minPhoneCount = make_shared<string>(boost::any_cast<string>(m["MinPhoneCount"]));
    }
    if (m.find("PhoneCount") != m.end() && !m["PhoneCount"].empty()) {
      phoneCount = make_shared<string>(boost::any_cast<string>(m["PhoneCount"]));
    }
    if (m.find("Resolution") != m.end() && !m["Resolution"].empty()) {
      resolution = make_shared<string>(boost::any_cast<string>(m["Resolution"]));
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
class DescribeSystemPropertyTemplatesRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<string>> templateIds{};
  shared_ptr<string> templateName{};

  DescribeSystemPropertyTemplatesRequest() {}

  explicit DescribeSystemPropertyTemplatesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (templateIds) {
      res["TemplateIds"] = boost::any(*templateIds);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
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
    if (m.find("TemplateIds") != m.end() && !m["TemplateIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TemplateIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TemplateIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      templateIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
  }


  virtual ~DescribeSystemPropertyTemplatesRequest() = default;
};
class DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModelSystemPropertyInfoCustomPropertyInfos : public Darabonba::Model {
public:
  shared_ptr<string> propertyName{};
  shared_ptr<string> propertyValue{};

  DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModelSystemPropertyInfoCustomPropertyInfos() {}

  explicit DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModelSystemPropertyInfoCustomPropertyInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (propertyName) {
      res["PropertyName"] = boost::any(*propertyName);
    }
    if (propertyValue) {
      res["PropertyValue"] = boost::any(*propertyValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PropertyName") != m.end() && !m["PropertyName"].empty()) {
      propertyName = make_shared<string>(boost::any_cast<string>(m["PropertyName"]));
    }
    if (m.find("PropertyValue") != m.end() && !m["PropertyValue"].empty()) {
      propertyValue = make_shared<string>(boost::any_cast<string>(m["PropertyValue"]));
    }
  }


  virtual ~DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModelSystemPropertyInfoCustomPropertyInfos() = default;
};
class DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModelSystemPropertyInfo : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModelSystemPropertyInfoCustomPropertyInfos>> customPropertyInfos{};
  shared_ptr<string> roProductDevice{};

  DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModelSystemPropertyInfo() {}

  explicit DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModelSystemPropertyInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customPropertyInfos) {
      vector<boost::any> temp1;
      for(auto item1:*customPropertyInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CustomPropertyInfos"] = boost::any(temp1);
    }
    if (roProductDevice) {
      res["RoProductDevice"] = boost::any(*roProductDevice);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomPropertyInfos") != m.end() && !m["CustomPropertyInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["CustomPropertyInfos"].type()) {
        vector<DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModelSystemPropertyInfoCustomPropertyInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CustomPropertyInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModelSystemPropertyInfoCustomPropertyInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        customPropertyInfos = make_shared<vector<DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModelSystemPropertyInfoCustomPropertyInfos>>(expect1);
      }
    }
    if (m.find("RoProductDevice") != m.end() && !m["RoProductDevice"].empty()) {
      roProductDevice = make_shared<string>(boost::any_cast<string>(m["RoProductDevice"]));
    }
  }


  virtual ~DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModelSystemPropertyInfo() = default;
};
class DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModel : public Darabonba::Model {
public:
  shared_ptr<bool> enableAuto{};
  shared_ptr<string> filePath{};
  shared_ptr<string> status{};
  shared_ptr<DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModelSystemPropertyInfo> systemPropertyInfo{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateName{};

  DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModel() {}

  explicit DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableAuto) {
      res["EnableAuto"] = boost::any(*enableAuto);
    }
    if (filePath) {
      res["FilePath"] = boost::any(*filePath);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (systemPropertyInfo) {
      res["SystemPropertyInfo"] = systemPropertyInfo ? boost::any(systemPropertyInfo->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("EnableAuto") != m.end() && !m["EnableAuto"].empty()) {
      enableAuto = make_shared<bool>(boost::any_cast<bool>(m["EnableAuto"]));
    }
    if (m.find("FilePath") != m.end() && !m["FilePath"].empty()) {
      filePath = make_shared<string>(boost::any_cast<string>(m["FilePath"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SystemPropertyInfo") != m.end() && !m["SystemPropertyInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["SystemPropertyInfo"].type()) {
        DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModelSystemPropertyInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SystemPropertyInfo"]));
        systemPropertyInfo = make_shared<DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModelSystemPropertyInfo>(model1);
      }
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
  }


  virtual ~DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModel() = default;
};
class DescribeSystemPropertyTemplatesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModel>> systemPropertyTemplateModel{};
  shared_ptr<long> totalCount{};

  DescribeSystemPropertyTemplatesResponseBody() {}

  explicit DescribeSystemPropertyTemplatesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (systemPropertyTemplateModel) {
      vector<boost::any> temp1;
      for(auto item1:*systemPropertyTemplateModel){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SystemPropertyTemplateModel"] = boost::any(temp1);
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
    if (m.find("SystemPropertyTemplateModel") != m.end() && !m["SystemPropertyTemplateModel"].empty()) {
      if (typeid(vector<boost::any>) == m["SystemPropertyTemplateModel"].type()) {
        vector<DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModel> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SystemPropertyTemplateModel"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModel model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        systemPropertyTemplateModel = make_shared<vector<DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModel>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeSystemPropertyTemplatesResponseBody() = default;
};
class DescribeSystemPropertyTemplatesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSystemPropertyTemplatesResponseBody> body{};

  DescribeSystemPropertyTemplatesResponse() {}

  explicit DescribeSystemPropertyTemplatesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSystemPropertyTemplatesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSystemPropertyTemplatesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSystemPropertyTemplatesResponse() = default;
};
class DescribeTasksRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> invokeId{};
  shared_ptr<long> level{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> param{};
  shared_ptr<string> parentTaskId{};
  shared_ptr<vector<string>> resourceIds{};
  shared_ptr<vector<string>> taskIds{};
  shared_ptr<string> taskStatus{};
  shared_ptr<vector<string>> taskStatuses{};
  shared_ptr<string> taskType{};
  shared_ptr<vector<string>> taskTypes{};

  DescribeTasksRequest() {}

  explicit DescribeTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (invokeId) {
      res["InvokeId"] = boost::any(*invokeId);
    }
    if (level) {
      res["Level"] = boost::any(*level);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (param) {
      res["Param"] = boost::any(*param);
    }
    if (parentTaskId) {
      res["ParentTaskId"] = boost::any(*parentTaskId);
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
    if (taskStatuses) {
      res["TaskStatuses"] = boost::any(*taskStatuses);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    if (taskTypes) {
      res["TaskTypes"] = boost::any(*taskTypes);
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
    if (m.find("InvokeId") != m.end() && !m["InvokeId"].empty()) {
      invokeId = make_shared<string>(boost::any_cast<string>(m["InvokeId"]));
    }
    if (m.find("Level") != m.end() && !m["Level"].empty()) {
      level = make_shared<long>(boost::any_cast<long>(m["Level"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Param") != m.end() && !m["Param"].empty()) {
      param = make_shared<string>(boost::any_cast<string>(m["Param"]));
    }
    if (m.find("ParentTaskId") != m.end() && !m["ParentTaskId"].empty()) {
      parentTaskId = make_shared<string>(boost::any_cast<string>(m["ParentTaskId"]));
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
    if (m.find("TaskStatuses") != m.end() && !m["TaskStatuses"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TaskStatuses"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TaskStatuses"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      taskStatuses = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
    if (m.find("TaskTypes") != m.end() && !m["TaskTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TaskTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TaskTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      taskTypes = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeTasksRequest() = default;
};
class DescribeTasksResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> failedChildCount{};
  shared_ptr<string> finishTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> instanceStatus{};
  shared_ptr<string> invokeId{};
  shared_ptr<long> level{};
  shared_ptr<string> operator_{};
  shared_ptr<string> param{};
  shared_ptr<string> parentTaskId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> result{};
  shared_ptr<long> runningChildCount{};
  shared_ptr<string> startTime{};
  shared_ptr<long> successChildCount{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskStatus{};
  shared_ptr<string> taskType{};
  shared_ptr<long> totalChildCount{};

  DescribeTasksResponseBodyData() {}

  explicit DescribeTasksResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (failedChildCount) {
      res["FailedChildCount"] = boost::any(*failedChildCount);
    }
    if (finishTime) {
      res["FinishTime"] = boost::any(*finishTime);
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
    if (invokeId) {
      res["InvokeId"] = boost::any(*invokeId);
    }
    if (level) {
      res["Level"] = boost::any(*level);
    }
    if (operator_) {
      res["Operator"] = boost::any(*operator_);
    }
    if (param) {
      res["Param"] = boost::any(*param);
    }
    if (parentTaskId) {
      res["ParentTaskId"] = boost::any(*parentTaskId);
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
    if (runningChildCount) {
      res["RunningChildCount"] = boost::any(*runningChildCount);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (successChildCount) {
      res["SuccessChildCount"] = boost::any(*successChildCount);
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
    if (totalChildCount) {
      res["TotalChildCount"] = boost::any(*totalChildCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("FailedChildCount") != m.end() && !m["FailedChildCount"].empty()) {
      failedChildCount = make_shared<long>(boost::any_cast<long>(m["FailedChildCount"]));
    }
    if (m.find("FinishTime") != m.end() && !m["FinishTime"].empty()) {
      finishTime = make_shared<string>(boost::any_cast<string>(m["FinishTime"]));
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
    if (m.find("InvokeId") != m.end() && !m["InvokeId"].empty()) {
      invokeId = make_shared<string>(boost::any_cast<string>(m["InvokeId"]));
    }
    if (m.find("Level") != m.end() && !m["Level"].empty()) {
      level = make_shared<long>(boost::any_cast<long>(m["Level"]));
    }
    if (m.find("Operator") != m.end() && !m["Operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["Operator"]));
    }
    if (m.find("Param") != m.end() && !m["Param"].empty()) {
      param = make_shared<string>(boost::any_cast<string>(m["Param"]));
    }
    if (m.find("ParentTaskId") != m.end() && !m["ParentTaskId"].empty()) {
      parentTaskId = make_shared<string>(boost::any_cast<string>(m["ParentTaskId"]));
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
    if (m.find("RunningChildCount") != m.end() && !m["RunningChildCount"].empty()) {
      runningChildCount = make_shared<long>(boost::any_cast<long>(m["RunningChildCount"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("SuccessChildCount") != m.end() && !m["SuccessChildCount"].empty()) {
      successChildCount = make_shared<long>(boost::any_cast<long>(m["SuccessChildCount"]));
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
    if (m.find("TotalChildCount") != m.end() && !m["TotalChildCount"].empty()) {
      totalChildCount = make_shared<long>(boost::any_cast<long>(m["TotalChildCount"]));
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
class DisconnectAndroidInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> endUserId{};
  shared_ptr<vector<string>> instanceIds{};

  DisconnectAndroidInstanceRequest() {}

  explicit DisconnectAndroidInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endUserId) {
      res["EndUserId"] = boost::any(*endUserId);
    }
    if (instanceIds) {
      res["InstanceIds"] = boost::any(*instanceIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndUserId") != m.end() && !m["EndUserId"].empty()) {
      endUserId = make_shared<string>(boost::any_cast<string>(m["EndUserId"]));
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


  virtual ~DisconnectAndroidInstanceRequest() = default;
};
class DisconnectAndroidInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DisconnectAndroidInstanceResponseBody() {}

  explicit DisconnectAndroidInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DisconnectAndroidInstanceResponseBody() = default;
};
class DisconnectAndroidInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DisconnectAndroidInstanceResponseBody> body{};

  DisconnectAndroidInstanceResponse() {}

  explicit DisconnectAndroidInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DisconnectAndroidInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisconnectAndroidInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~DisconnectAndroidInstanceResponse() = default;
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
class EndCoordinationRequest : public Darabonba::Model {
public:
  shared_ptr<string> coordinatorUserId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> ownerUserId{};

  EndCoordinationRequest() {}

  explicit EndCoordinationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (coordinatorUserId) {
      res["CoordinatorUserId"] = boost::any(*coordinatorUserId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ownerUserId) {
      res["OwnerUserId"] = boost::any(*ownerUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CoordinatorUserId") != m.end() && !m["CoordinatorUserId"].empty()) {
      coordinatorUserId = make_shared<string>(boost::any_cast<string>(m["CoordinatorUserId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OwnerUserId") != m.end() && !m["OwnerUserId"].empty()) {
      ownerUserId = make_shared<string>(boost::any_cast<string>(m["OwnerUserId"]));
    }
  }


  virtual ~EndCoordinationRequest() = default;
};
class EndCoordinationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  EndCoordinationResponseBody() {}

  explicit EndCoordinationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EndCoordinationResponseBody() = default;
};
class EndCoordinationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EndCoordinationResponseBody> body{};

  EndCoordinationResponse() {}

  explicit EndCoordinationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EndCoordinationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EndCoordinationResponseBody>(model1);
      }
    }
  }


  virtual ~EndCoordinationResponse() = default;
};
class ExpandDataVolumeRequest : public Darabonba::Model {
public:
  shared_ptr<bool> autoPay{};
  shared_ptr<string> bizRegionId{};
  shared_ptr<vector<string>> nodeIds{};
  shared_ptr<long> shareDataVolume{};

  ExpandDataVolumeRequest() {}

  explicit ExpandDataVolumeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoPay) {
      res["AutoPay"] = boost::any(*autoPay);
    }
    if (bizRegionId) {
      res["BizRegionId"] = boost::any(*bizRegionId);
    }
    if (nodeIds) {
      res["NodeIds"] = boost::any(*nodeIds);
    }
    if (shareDataVolume) {
      res["ShareDataVolume"] = boost::any(*shareDataVolume);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoPay") != m.end() && !m["AutoPay"].empty()) {
      autoPay = make_shared<bool>(boost::any_cast<bool>(m["AutoPay"]));
    }
    if (m.find("BizRegionId") != m.end() && !m["BizRegionId"].empty()) {
      bizRegionId = make_shared<string>(boost::any_cast<string>(m["BizRegionId"]));
    }
    if (m.find("NodeIds") != m.end() && !m["NodeIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["NodeIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["NodeIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      nodeIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ShareDataVolume") != m.end() && !m["ShareDataVolume"].empty()) {
      shareDataVolume = make_shared<long>(boost::any_cast<long>(m["ShareDataVolume"]));
    }
  }


  virtual ~ExpandDataVolumeRequest() = default;
};
class ExpandDataVolumeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  ExpandDataVolumeResponseBody() {}

  explicit ExpandDataVolumeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ExpandDataVolumeResponseBody() = default;
};
class ExpandDataVolumeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ExpandDataVolumeResponseBody> body{};

  ExpandDataVolumeResponse() {}

  explicit ExpandDataVolumeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExpandDataVolumeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExpandDataVolumeResponseBody>(model1);
      }
    }
  }


  virtual ~ExpandDataVolumeResponse() = default;
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
  shared_ptr<string> taskId{};

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
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
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
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
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
class GenerateCoordinationCodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> ownerUserId{};

  GenerateCoordinationCodeRequest() {}

  explicit GenerateCoordinationCodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OwnerUserId") != m.end() && !m["OwnerUserId"].empty()) {
      ownerUserId = make_shared<string>(boost::any_cast<string>(m["OwnerUserId"]));
    }
  }


  virtual ~GenerateCoordinationCodeRequest() = default;
};
class GenerateCoordinationCodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> coordinatorCode{};
  shared_ptr<string> requestId{};

  GenerateCoordinationCodeResponseBody() {}

  explicit GenerateCoordinationCodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (coordinatorCode) {
      res["CoordinatorCode"] = boost::any(*coordinatorCode);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CoordinatorCode") != m.end() && !m["CoordinatorCode"].empty()) {
      coordinatorCode = make_shared<string>(boost::any_cast<string>(m["CoordinatorCode"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GenerateCoordinationCodeResponseBody() = default;
};
class GenerateCoordinationCodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GenerateCoordinationCodeResponseBody> body{};

  GenerateCoordinationCodeResponse() {}

  explicit GenerateCoordinationCodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GenerateCoordinationCodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GenerateCoordinationCodeResponseBody>(model1);
      }
    }
  }


  virtual ~GenerateCoordinationCodeResponse() = default;
};
class GetInstancePropertiesRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  GetInstancePropertiesRequest() {}

  explicit GetInstancePropertiesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetInstancePropertiesRequest() = default;
};
class GetInstancePropertiesResponseBodyPropertyTemplateModel : public Darabonba::Model {
public:
  shared_ptr<string> content{};

  GetInstancePropertiesResponseBodyPropertyTemplateModel() {}

  explicit GetInstancePropertiesResponseBodyPropertyTemplateModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
  }


  virtual ~GetInstancePropertiesResponseBodyPropertyTemplateModel() = default;
};
class GetInstancePropertiesResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetInstancePropertiesResponseBodyPropertyTemplateModel> propertyTemplateModel{};
  shared_ptr<string> requestId{};

  GetInstancePropertiesResponseBody() {}

  explicit GetInstancePropertiesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (propertyTemplateModel) {
      res["PropertyTemplateModel"] = propertyTemplateModel ? boost::any(propertyTemplateModel->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PropertyTemplateModel") != m.end() && !m["PropertyTemplateModel"].empty()) {
      if (typeid(map<string, boost::any>) == m["PropertyTemplateModel"].type()) {
        GetInstancePropertiesResponseBodyPropertyTemplateModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PropertyTemplateModel"]));
        propertyTemplateModel = make_shared<GetInstancePropertiesResponseBodyPropertyTemplateModel>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetInstancePropertiesResponseBody() = default;
};
class GetInstancePropertiesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetInstancePropertiesResponseBody> body{};

  GetInstancePropertiesResponse() {}

  explicit GetInstancePropertiesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetInstancePropertiesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetInstancePropertiesResponseBody>(model1);
      }
    }
  }


  virtual ~GetInstancePropertiesResponse() = default;
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
  shared_ptr<string> taskId{};

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
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
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
  shared_ptr<string> policyType{};

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
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
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
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
  }


  virtual ~ListPolicyGroupsRequest() = default;
};
class ListPolicyGroupsResponseBodyPolicyGroupModelNetRedirectPolicyRules : public Darabonba::Model {
public:
  shared_ptr<string> ruleType{};
  shared_ptr<string> target{};

  ListPolicyGroupsResponseBodyPolicyGroupModelNetRedirectPolicyRules() {}

  explicit ListPolicyGroupsResponseBodyPolicyGroupModelNetRedirectPolicyRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ruleType) {
      res["RuleType"] = boost::any(*ruleType);
    }
    if (target) {
      res["Target"] = boost::any(*target);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RuleType") != m.end() && !m["RuleType"].empty()) {
      ruleType = make_shared<string>(boost::any_cast<string>(m["RuleType"]));
    }
    if (m.find("Target") != m.end() && !m["Target"].empty()) {
      target = make_shared<string>(boost::any_cast<string>(m["Target"]));
    }
  }


  virtual ~ListPolicyGroupsResponseBodyPolicyGroupModelNetRedirectPolicyRules() = default;
};
class ListPolicyGroupsResponseBodyPolicyGroupModelNetRedirectPolicy : public Darabonba::Model {
public:
  shared_ptr<string> customProxy{};
  shared_ptr<string> hostAddr{};
  shared_ptr<string> netRedirect{};
  shared_ptr<string> port{};
  shared_ptr<string> proxyPassword{};
  shared_ptr<string> proxyType{};
  shared_ptr<string> proxyUserName{};
  shared_ptr<vector<ListPolicyGroupsResponseBodyPolicyGroupModelNetRedirectPolicyRules>> rules{};

  ListPolicyGroupsResponseBodyPolicyGroupModelNetRedirectPolicy() {}

  explicit ListPolicyGroupsResponseBodyPolicyGroupModelNetRedirectPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customProxy) {
      res["CustomProxy"] = boost::any(*customProxy);
    }
    if (hostAddr) {
      res["HostAddr"] = boost::any(*hostAddr);
    }
    if (netRedirect) {
      res["NetRedirect"] = boost::any(*netRedirect);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (proxyPassword) {
      res["ProxyPassword"] = boost::any(*proxyPassword);
    }
    if (proxyType) {
      res["ProxyType"] = boost::any(*proxyType);
    }
    if (proxyUserName) {
      res["ProxyUserName"] = boost::any(*proxyUserName);
    }
    if (rules) {
      vector<boost::any> temp1;
      for(auto item1:*rules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Rules"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomProxy") != m.end() && !m["CustomProxy"].empty()) {
      customProxy = make_shared<string>(boost::any_cast<string>(m["CustomProxy"]));
    }
    if (m.find("HostAddr") != m.end() && !m["HostAddr"].empty()) {
      hostAddr = make_shared<string>(boost::any_cast<string>(m["HostAddr"]));
    }
    if (m.find("NetRedirect") != m.end() && !m["NetRedirect"].empty()) {
      netRedirect = make_shared<string>(boost::any_cast<string>(m["NetRedirect"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("ProxyPassword") != m.end() && !m["ProxyPassword"].empty()) {
      proxyPassword = make_shared<string>(boost::any_cast<string>(m["ProxyPassword"]));
    }
    if (m.find("ProxyType") != m.end() && !m["ProxyType"].empty()) {
      proxyType = make_shared<string>(boost::any_cast<string>(m["ProxyType"]));
    }
    if (m.find("ProxyUserName") != m.end() && !m["ProxyUserName"].empty()) {
      proxyUserName = make_shared<string>(boost::any_cast<string>(m["ProxyUserName"]));
    }
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      if (typeid(vector<boost::any>) == m["Rules"].type()) {
        vector<ListPolicyGroupsResponseBodyPolicyGroupModelNetRedirectPolicyRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Rules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPolicyGroupsResponseBodyPolicyGroupModelNetRedirectPolicyRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rules = make_shared<vector<ListPolicyGroupsResponseBodyPolicyGroupModelNetRedirectPolicyRules>>(expect1);
      }
    }
  }


  virtual ~ListPolicyGroupsResponseBodyPolicyGroupModelNetRedirectPolicy() = default;
};
class ListPolicyGroupsResponseBodyPolicyGroupModelPolicyRelatedResources : public Darabonba::Model {
public:
  shared_ptr<vector<string>> androidInstanceGroupIds{};
  shared_ptr<vector<string>> cloudPhoneMatrixIds{};

  ListPolicyGroupsResponseBodyPolicyGroupModelPolicyRelatedResources() {}

  explicit ListPolicyGroupsResponseBodyPolicyGroupModelPolicyRelatedResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (androidInstanceGroupIds) {
      res["AndroidInstanceGroupIds"] = boost::any(*androidInstanceGroupIds);
    }
    if (cloudPhoneMatrixIds) {
      res["CloudPhoneMatrixIds"] = boost::any(*cloudPhoneMatrixIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AndroidInstanceGroupIds") != m.end() && !m["AndroidInstanceGroupIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AndroidInstanceGroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AndroidInstanceGroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      androidInstanceGroupIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("CloudPhoneMatrixIds") != m.end() && !m["CloudPhoneMatrixIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CloudPhoneMatrixIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CloudPhoneMatrixIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      cloudPhoneMatrixIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListPolicyGroupsResponseBodyPolicyGroupModelPolicyRelatedResources() = default;
};
class ListPolicyGroupsResponseBodyPolicyGroupModelWatermark : public Darabonba::Model {
public:
  shared_ptr<long> watermarkColor{};
  shared_ptr<string> watermarkCustomText{};
  shared_ptr<long> watermarkFontSize{};
  shared_ptr<string> watermarkSwitch{};
  shared_ptr<long> watermarkTransparencyValue{};
  shared_ptr<vector<string>> watermarkTypes{};

  ListPolicyGroupsResponseBodyPolicyGroupModelWatermark() {}

  explicit ListPolicyGroupsResponseBodyPolicyGroupModelWatermark(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (watermarkColor) {
      res["WatermarkColor"] = boost::any(*watermarkColor);
    }
    if (watermarkCustomText) {
      res["WatermarkCustomText"] = boost::any(*watermarkCustomText);
    }
    if (watermarkFontSize) {
      res["WatermarkFontSize"] = boost::any(*watermarkFontSize);
    }
    if (watermarkSwitch) {
      res["WatermarkSwitch"] = boost::any(*watermarkSwitch);
    }
    if (watermarkTransparencyValue) {
      res["WatermarkTransparencyValue"] = boost::any(*watermarkTransparencyValue);
    }
    if (watermarkTypes) {
      res["WatermarkTypes"] = boost::any(*watermarkTypes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("WatermarkColor") != m.end() && !m["WatermarkColor"].empty()) {
      watermarkColor = make_shared<long>(boost::any_cast<long>(m["WatermarkColor"]));
    }
    if (m.find("WatermarkCustomText") != m.end() && !m["WatermarkCustomText"].empty()) {
      watermarkCustomText = make_shared<string>(boost::any_cast<string>(m["WatermarkCustomText"]));
    }
    if (m.find("WatermarkFontSize") != m.end() && !m["WatermarkFontSize"].empty()) {
      watermarkFontSize = make_shared<long>(boost::any_cast<long>(m["WatermarkFontSize"]));
    }
    if (m.find("WatermarkSwitch") != m.end() && !m["WatermarkSwitch"].empty()) {
      watermarkSwitch = make_shared<string>(boost::any_cast<string>(m["WatermarkSwitch"]));
    }
    if (m.find("WatermarkTransparencyValue") != m.end() && !m["WatermarkTransparencyValue"].empty()) {
      watermarkTransparencyValue = make_shared<long>(boost::any_cast<long>(m["WatermarkTransparencyValue"]));
    }
    if (m.find("WatermarkTypes") != m.end() && !m["WatermarkTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["WatermarkTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["WatermarkTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      watermarkTypes = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListPolicyGroupsResponseBodyPolicyGroupModelWatermark() = default;
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
  shared_ptr<ListPolicyGroupsResponseBodyPolicyGroupModelPolicyRelatedResources> policyRelatedResources{};
  shared_ptr<long> sessionResolutionHeight{};
  shared_ptr<long> sessionResolutionWidth{};
  shared_ptr<ListPolicyGroupsResponseBodyPolicyGroupModelWatermark> watermark{};

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
    if (policyRelatedResources) {
      res["PolicyRelatedResources"] = policyRelatedResources ? boost::any(policyRelatedResources->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sessionResolutionHeight) {
      res["SessionResolutionHeight"] = boost::any(*sessionResolutionHeight);
    }
    if (sessionResolutionWidth) {
      res["SessionResolutionWidth"] = boost::any(*sessionResolutionWidth);
    }
    if (watermark) {
      res["Watermark"] = watermark ? boost::any(watermark->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("PolicyRelatedResources") != m.end() && !m["PolicyRelatedResources"].empty()) {
      if (typeid(map<string, boost::any>) == m["PolicyRelatedResources"].type()) {
        ListPolicyGroupsResponseBodyPolicyGroupModelPolicyRelatedResources model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PolicyRelatedResources"]));
        policyRelatedResources = make_shared<ListPolicyGroupsResponseBodyPolicyGroupModelPolicyRelatedResources>(model1);
      }
    }
    if (m.find("SessionResolutionHeight") != m.end() && !m["SessionResolutionHeight"].empty()) {
      sessionResolutionHeight = make_shared<long>(boost::any_cast<long>(m["SessionResolutionHeight"]));
    }
    if (m.find("SessionResolutionWidth") != m.end() && !m["SessionResolutionWidth"].empty()) {
      sessionResolutionWidth = make_shared<long>(boost::any_cast<long>(m["SessionResolutionWidth"]));
    }
    if (m.find("Watermark") != m.end() && !m["Watermark"].empty()) {
      if (typeid(map<string, boost::any>) == m["Watermark"].type()) {
        ListPolicyGroupsResponseBodyPolicyGroupModelWatermark model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Watermark"]));
        watermark = make_shared<ListPolicyGroupsResponseBodyPolicyGroupModelWatermark>(model1);
      }
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
  shared_ptr<long> downBandwidthLimit{};
  shared_ptr<vector<string>> instanceIds{};
  shared_ptr<string> newAndroidInstanceName{};
  shared_ptr<long> upBandwidthLimit{};

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
    if (downBandwidthLimit) {
      res["DownBandwidthLimit"] = boost::any(*downBandwidthLimit);
    }
    if (instanceIds) {
      res["InstanceIds"] = boost::any(*instanceIds);
    }
    if (newAndroidInstanceName) {
      res["NewAndroidInstanceName"] = boost::any(*newAndroidInstanceName);
    }
    if (upBandwidthLimit) {
      res["UpBandwidthLimit"] = boost::any(*upBandwidthLimit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AndroidInstanceId") != m.end() && !m["AndroidInstanceId"].empty()) {
      androidInstanceId = make_shared<string>(boost::any_cast<string>(m["AndroidInstanceId"]));
    }
    if (m.find("DownBandwidthLimit") != m.end() && !m["DownBandwidthLimit"].empty()) {
      downBandwidthLimit = make_shared<long>(boost::any_cast<long>(m["DownBandwidthLimit"]));
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
    if (m.find("NewAndroidInstanceName") != m.end() && !m["NewAndroidInstanceName"].empty()) {
      newAndroidInstanceName = make_shared<string>(boost::any_cast<string>(m["NewAndroidInstanceName"]));
    }
    if (m.find("UpBandwidthLimit") != m.end() && !m["UpBandwidthLimit"].empty()) {
      upBandwidthLimit = make_shared<long>(boost::any_cast<long>(m["UpBandwidthLimit"]));
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
class ModifyCloudPhoneNodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> newNodeName{};
  shared_ptr<string> nodeId{};
  shared_ptr<long> streamMode{};

  ModifyCloudPhoneNodeRequest() {}

  explicit ModifyCloudPhoneNodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (newNodeName) {
      res["NewNodeName"] = boost::any(*newNodeName);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (streamMode) {
      res["StreamMode"] = boost::any(*streamMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NewNodeName") != m.end() && !m["NewNodeName"].empty()) {
      newNodeName = make_shared<string>(boost::any_cast<string>(m["NewNodeName"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("StreamMode") != m.end() && !m["StreamMode"].empty()) {
      streamMode = make_shared<long>(boost::any_cast<long>(m["StreamMode"]));
    }
  }


  virtual ~ModifyCloudPhoneNodeRequest() = default;
};
class ModifyCloudPhoneNodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyCloudPhoneNodeResponseBody() {}

  explicit ModifyCloudPhoneNodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyCloudPhoneNodeResponseBody() = default;
};
class ModifyCloudPhoneNodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyCloudPhoneNodeResponseBody> body{};

  ModifyCloudPhoneNodeResponse() {}

  explicit ModifyCloudPhoneNodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyCloudPhoneNodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyCloudPhoneNodeResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyCloudPhoneNodeResponse() = default;
};
class ModifyDisplayConfigRequestDisplayConfig : public Darabonba::Model {
public:
  shared_ptr<long> dpi{};
  shared_ptr<long> fps{};
  shared_ptr<string> lockResolution{};
  shared_ptr<long> resolutionHeight{};
  shared_ptr<long> resolutionWidth{};

  ModifyDisplayConfigRequestDisplayConfig() {}

  explicit ModifyDisplayConfigRequestDisplayConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dpi) {
      res["Dpi"] = boost::any(*dpi);
    }
    if (fps) {
      res["Fps"] = boost::any(*fps);
    }
    if (lockResolution) {
      res["LockResolution"] = boost::any(*lockResolution);
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
    if (m.find("Dpi") != m.end() && !m["Dpi"].empty()) {
      dpi = make_shared<long>(boost::any_cast<long>(m["Dpi"]));
    }
    if (m.find("Fps") != m.end() && !m["Fps"].empty()) {
      fps = make_shared<long>(boost::any_cast<long>(m["Fps"]));
    }
    if (m.find("LockResolution") != m.end() && !m["LockResolution"].empty()) {
      lockResolution = make_shared<string>(boost::any_cast<string>(m["LockResolution"]));
    }
    if (m.find("ResolutionHeight") != m.end() && !m["ResolutionHeight"].empty()) {
      resolutionHeight = make_shared<long>(boost::any_cast<long>(m["ResolutionHeight"]));
    }
    if (m.find("ResolutionWidth") != m.end() && !m["ResolutionWidth"].empty()) {
      resolutionWidth = make_shared<long>(boost::any_cast<long>(m["ResolutionWidth"]));
    }
  }


  virtual ~ModifyDisplayConfigRequestDisplayConfig() = default;
};
class ModifyDisplayConfigRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> androidInstanceIds{};
  shared_ptr<ModifyDisplayConfigRequestDisplayConfig> displayConfig{};

  ModifyDisplayConfigRequest() {}

  explicit ModifyDisplayConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (androidInstanceIds) {
      res["AndroidInstanceIds"] = boost::any(*androidInstanceIds);
    }
    if (displayConfig) {
      res["DisplayConfig"] = displayConfig ? boost::any(displayConfig->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("DisplayConfig") != m.end() && !m["DisplayConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["DisplayConfig"].type()) {
        ModifyDisplayConfigRequestDisplayConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DisplayConfig"]));
        displayConfig = make_shared<ModifyDisplayConfigRequestDisplayConfig>(model1);
      }
    }
  }


  virtual ~ModifyDisplayConfigRequest() = default;
};
class ModifyDisplayConfigShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> androidInstanceIds{};
  shared_ptr<string> displayConfigShrink{};

  ModifyDisplayConfigShrinkRequest() {}

  explicit ModifyDisplayConfigShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (androidInstanceIds) {
      res["AndroidInstanceIds"] = boost::any(*androidInstanceIds);
    }
    if (displayConfigShrink) {
      res["DisplayConfig"] = boost::any(*displayConfigShrink);
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
    if (m.find("DisplayConfig") != m.end() && !m["DisplayConfig"].empty()) {
      displayConfigShrink = make_shared<string>(boost::any_cast<string>(m["DisplayConfig"]));
    }
  }


  virtual ~ModifyDisplayConfigShrinkRequest() = default;
};
class ModifyDisplayConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDisplayConfigResponseBody() {}

  explicit ModifyDisplayConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyDisplayConfigResponseBody() = default;
};
class ModifyDisplayConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyDisplayConfigResponseBody> body{};

  ModifyDisplayConfigResponse() {}

  explicit ModifyDisplayConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDisplayConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDisplayConfigResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDisplayConfigResponse() = default;
};
class ModifyInstanceChargeTypeRequest : public Darabonba::Model {
public:
  shared_ptr<bool> autoPay{};
  shared_ptr<bool> autoRenew{};
  shared_ptr<string> chargeType{};
  shared_ptr<vector<string>> instanceGroupIds{};
  shared_ptr<long> period{};
  shared_ptr<string> periodUnit{};

  ModifyInstanceChargeTypeRequest() {}

  explicit ModifyInstanceChargeTypeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoPay) {
      res["AutoPay"] = boost::any(*autoPay);
    }
    if (autoRenew) {
      res["AutoRenew"] = boost::any(*autoRenew);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
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
    if (m.find("AutoRenew") != m.end() && !m["AutoRenew"].empty()) {
      autoRenew = make_shared<bool>(boost::any_cast<bool>(m["AutoRenew"]));
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
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("PeriodUnit") != m.end() && !m["PeriodUnit"].empty()) {
      periodUnit = make_shared<string>(boost::any_cast<string>(m["PeriodUnit"]));
    }
  }


  virtual ~ModifyInstanceChargeTypeRequest() = default;
};
class ModifyInstanceChargeTypeResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> instanceGroupIds{};
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  ModifyInstanceChargeTypeResponseBody() {}

  explicit ModifyInstanceChargeTypeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceGroupIds) {
      res["InstanceGroupIds"] = boost::any(*instanceGroupIds);
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
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyInstanceChargeTypeResponseBody() = default;
};
class ModifyInstanceChargeTypeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyInstanceChargeTypeResponseBody> body{};

  ModifyInstanceChargeTypeResponse() {}

  explicit ModifyInstanceChargeTypeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyInstanceChargeTypeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyInstanceChargeTypeResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyInstanceChargeTypeResponse() = default;
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
class ModifyPolicyGroupRequestNetRedirectPolicyRules : public Darabonba::Model {
public:
  shared_ptr<string> ruleType{};
  shared_ptr<string> target{};

  ModifyPolicyGroupRequestNetRedirectPolicyRules() {}

  explicit ModifyPolicyGroupRequestNetRedirectPolicyRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ruleType) {
      res["RuleType"] = boost::any(*ruleType);
    }
    if (target) {
      res["Target"] = boost::any(*target);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RuleType") != m.end() && !m["RuleType"].empty()) {
      ruleType = make_shared<string>(boost::any_cast<string>(m["RuleType"]));
    }
    if (m.find("Target") != m.end() && !m["Target"].empty()) {
      target = make_shared<string>(boost::any_cast<string>(m["Target"]));
    }
  }


  virtual ~ModifyPolicyGroupRequestNetRedirectPolicyRules() = default;
};
class ModifyPolicyGroupRequestNetRedirectPolicy : public Darabonba::Model {
public:
  shared_ptr<string> customProxy{};
  shared_ptr<string> hostAddr{};
  shared_ptr<string> netRedirect{};
  shared_ptr<string> port{};
  shared_ptr<string> proxyPassword{};
  shared_ptr<string> proxyType{};
  shared_ptr<string> proxyUserName{};
  shared_ptr<vector<ModifyPolicyGroupRequestNetRedirectPolicyRules>> rules{};

  ModifyPolicyGroupRequestNetRedirectPolicy() {}

  explicit ModifyPolicyGroupRequestNetRedirectPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customProxy) {
      res["CustomProxy"] = boost::any(*customProxy);
    }
    if (hostAddr) {
      res["HostAddr"] = boost::any(*hostAddr);
    }
    if (netRedirect) {
      res["NetRedirect"] = boost::any(*netRedirect);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (proxyPassword) {
      res["ProxyPassword"] = boost::any(*proxyPassword);
    }
    if (proxyType) {
      res["ProxyType"] = boost::any(*proxyType);
    }
    if (proxyUserName) {
      res["ProxyUserName"] = boost::any(*proxyUserName);
    }
    if (rules) {
      vector<boost::any> temp1;
      for(auto item1:*rules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Rules"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomProxy") != m.end() && !m["CustomProxy"].empty()) {
      customProxy = make_shared<string>(boost::any_cast<string>(m["CustomProxy"]));
    }
    if (m.find("HostAddr") != m.end() && !m["HostAddr"].empty()) {
      hostAddr = make_shared<string>(boost::any_cast<string>(m["HostAddr"]));
    }
    if (m.find("NetRedirect") != m.end() && !m["NetRedirect"].empty()) {
      netRedirect = make_shared<string>(boost::any_cast<string>(m["NetRedirect"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("ProxyPassword") != m.end() && !m["ProxyPassword"].empty()) {
      proxyPassword = make_shared<string>(boost::any_cast<string>(m["ProxyPassword"]));
    }
    if (m.find("ProxyType") != m.end() && !m["ProxyType"].empty()) {
      proxyType = make_shared<string>(boost::any_cast<string>(m["ProxyType"]));
    }
    if (m.find("ProxyUserName") != m.end() && !m["ProxyUserName"].empty()) {
      proxyUserName = make_shared<string>(boost::any_cast<string>(m["ProxyUserName"]));
    }
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      if (typeid(vector<boost::any>) == m["Rules"].type()) {
        vector<ModifyPolicyGroupRequestNetRedirectPolicyRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Rules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyPolicyGroupRequestNetRedirectPolicyRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rules = make_shared<vector<ModifyPolicyGroupRequestNetRedirectPolicyRules>>(expect1);
      }
    }
  }


  virtual ~ModifyPolicyGroupRequestNetRedirectPolicy() = default;
};
class ModifyPolicyGroupRequestWatermark : public Darabonba::Model {
public:
  shared_ptr<long> watermarkColor{};
  shared_ptr<string> watermarkCustomText{};
  shared_ptr<long> watermarkFontSize{};
  shared_ptr<string> watermarkSwitch{};
  shared_ptr<long> watermarkTransparencyValue{};
  shared_ptr<vector<string>> watermarkTypes{};

  ModifyPolicyGroupRequestWatermark() {}

  explicit ModifyPolicyGroupRequestWatermark(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (watermarkColor) {
      res["WatermarkColor"] = boost::any(*watermarkColor);
    }
    if (watermarkCustomText) {
      res["WatermarkCustomText"] = boost::any(*watermarkCustomText);
    }
    if (watermarkFontSize) {
      res["WatermarkFontSize"] = boost::any(*watermarkFontSize);
    }
    if (watermarkSwitch) {
      res["WatermarkSwitch"] = boost::any(*watermarkSwitch);
    }
    if (watermarkTransparencyValue) {
      res["WatermarkTransparencyValue"] = boost::any(*watermarkTransparencyValue);
    }
    if (watermarkTypes) {
      res["WatermarkTypes"] = boost::any(*watermarkTypes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("WatermarkColor") != m.end() && !m["WatermarkColor"].empty()) {
      watermarkColor = make_shared<long>(boost::any_cast<long>(m["WatermarkColor"]));
    }
    if (m.find("WatermarkCustomText") != m.end() && !m["WatermarkCustomText"].empty()) {
      watermarkCustomText = make_shared<string>(boost::any_cast<string>(m["WatermarkCustomText"]));
    }
    if (m.find("WatermarkFontSize") != m.end() && !m["WatermarkFontSize"].empty()) {
      watermarkFontSize = make_shared<long>(boost::any_cast<long>(m["WatermarkFontSize"]));
    }
    if (m.find("WatermarkSwitch") != m.end() && !m["WatermarkSwitch"].empty()) {
      watermarkSwitch = make_shared<string>(boost::any_cast<string>(m["WatermarkSwitch"]));
    }
    if (m.find("WatermarkTransparencyValue") != m.end() && !m["WatermarkTransparencyValue"].empty()) {
      watermarkTransparencyValue = make_shared<long>(boost::any_cast<long>(m["WatermarkTransparencyValue"]));
    }
    if (m.find("WatermarkTypes") != m.end() && !m["WatermarkTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["WatermarkTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["WatermarkTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      watermarkTypes = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ModifyPolicyGroupRequestWatermark() = default;
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
  shared_ptr<ModifyPolicyGroupRequestWatermark> watermark{};

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
    if (watermark) {
      res["Watermark"] = watermark ? boost::any(watermark->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Watermark") != m.end() && !m["Watermark"].empty()) {
      if (typeid(map<string, boost::any>) == m["Watermark"].type()) {
        ModifyPolicyGroupRequestWatermark model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Watermark"]));
        watermark = make_shared<ModifyPolicyGroupRequestWatermark>(model1);
      }
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
  shared_ptr<string> watermarkShrink{};

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
    if (watermarkShrink) {
      res["Watermark"] = boost::any(*watermarkShrink);
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
    if (m.find("Watermark") != m.end() && !m["Watermark"].empty()) {
      watermarkShrink = make_shared<string>(boost::any_cast<string>(m["Watermark"]));
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
class ModifySystemPropertyTemplateRequestSystemPropertyInfoCustomPropertyInfos : public Darabonba::Model {
public:
  shared_ptr<string> propertyName{};
  shared_ptr<string> propertyValue{};

  ModifySystemPropertyTemplateRequestSystemPropertyInfoCustomPropertyInfos() {}

  explicit ModifySystemPropertyTemplateRequestSystemPropertyInfoCustomPropertyInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (propertyName) {
      res["PropertyName"] = boost::any(*propertyName);
    }
    if (propertyValue) {
      res["PropertyValue"] = boost::any(*propertyValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PropertyName") != m.end() && !m["PropertyName"].empty()) {
      propertyName = make_shared<string>(boost::any_cast<string>(m["PropertyName"]));
    }
    if (m.find("PropertyValue") != m.end() && !m["PropertyValue"].empty()) {
      propertyValue = make_shared<string>(boost::any_cast<string>(m["PropertyValue"]));
    }
  }


  virtual ~ModifySystemPropertyTemplateRequestSystemPropertyInfoCustomPropertyInfos() = default;
};
class ModifySystemPropertyTemplateRequestSystemPropertyInfo : public Darabonba::Model {
public:
  shared_ptr<vector<ModifySystemPropertyTemplateRequestSystemPropertyInfoCustomPropertyInfos>> customPropertyInfos{};
  shared_ptr<string> roBootloader{};
  shared_ptr<string> roBuildDisplayId{};
  shared_ptr<string> roBuildFingerprint{};
  shared_ptr<string> roBuildHost{};
  shared_ptr<string> roBuildId{};
  shared_ptr<string> roBuildProduct{};
  shared_ptr<string> roBuildTags{};
  shared_ptr<string> roBuildType{};
  shared_ptr<string> roBuildUser{};
  shared_ptr<string> roProductBoard{};
  shared_ptr<string> roProductBrand{};
  shared_ptr<string> roProductDevice{};
  shared_ptr<string> roProductManufacturer{};
  shared_ptr<string> roProductModel{};
  shared_ptr<string> rwRoSerialNo{};

  ModifySystemPropertyTemplateRequestSystemPropertyInfo() {}

  explicit ModifySystemPropertyTemplateRequestSystemPropertyInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customPropertyInfos) {
      vector<boost::any> temp1;
      for(auto item1:*customPropertyInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CustomPropertyInfos"] = boost::any(temp1);
    }
    if (roBootloader) {
      res["RoBootloader"] = boost::any(*roBootloader);
    }
    if (roBuildDisplayId) {
      res["RoBuildDisplayId"] = boost::any(*roBuildDisplayId);
    }
    if (roBuildFingerprint) {
      res["RoBuildFingerprint"] = boost::any(*roBuildFingerprint);
    }
    if (roBuildHost) {
      res["RoBuildHost"] = boost::any(*roBuildHost);
    }
    if (roBuildId) {
      res["RoBuildId"] = boost::any(*roBuildId);
    }
    if (roBuildProduct) {
      res["RoBuildProduct"] = boost::any(*roBuildProduct);
    }
    if (roBuildTags) {
      res["RoBuildTags"] = boost::any(*roBuildTags);
    }
    if (roBuildType) {
      res["RoBuildType"] = boost::any(*roBuildType);
    }
    if (roBuildUser) {
      res["RoBuildUser"] = boost::any(*roBuildUser);
    }
    if (roProductBoard) {
      res["RoProductBoard"] = boost::any(*roProductBoard);
    }
    if (roProductBrand) {
      res["RoProductBrand"] = boost::any(*roProductBrand);
    }
    if (roProductDevice) {
      res["RoProductDevice"] = boost::any(*roProductDevice);
    }
    if (roProductManufacturer) {
      res["RoProductManufacturer"] = boost::any(*roProductManufacturer);
    }
    if (roProductModel) {
      res["RoProductModel"] = boost::any(*roProductModel);
    }
    if (rwRoSerialNo) {
      res["RwRoSerialNo"] = boost::any(*rwRoSerialNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomPropertyInfos") != m.end() && !m["CustomPropertyInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["CustomPropertyInfos"].type()) {
        vector<ModifySystemPropertyTemplateRequestSystemPropertyInfoCustomPropertyInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CustomPropertyInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifySystemPropertyTemplateRequestSystemPropertyInfoCustomPropertyInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        customPropertyInfos = make_shared<vector<ModifySystemPropertyTemplateRequestSystemPropertyInfoCustomPropertyInfos>>(expect1);
      }
    }
    if (m.find("RoBootloader") != m.end() && !m["RoBootloader"].empty()) {
      roBootloader = make_shared<string>(boost::any_cast<string>(m["RoBootloader"]));
    }
    if (m.find("RoBuildDisplayId") != m.end() && !m["RoBuildDisplayId"].empty()) {
      roBuildDisplayId = make_shared<string>(boost::any_cast<string>(m["RoBuildDisplayId"]));
    }
    if (m.find("RoBuildFingerprint") != m.end() && !m["RoBuildFingerprint"].empty()) {
      roBuildFingerprint = make_shared<string>(boost::any_cast<string>(m["RoBuildFingerprint"]));
    }
    if (m.find("RoBuildHost") != m.end() && !m["RoBuildHost"].empty()) {
      roBuildHost = make_shared<string>(boost::any_cast<string>(m["RoBuildHost"]));
    }
    if (m.find("RoBuildId") != m.end() && !m["RoBuildId"].empty()) {
      roBuildId = make_shared<string>(boost::any_cast<string>(m["RoBuildId"]));
    }
    if (m.find("RoBuildProduct") != m.end() && !m["RoBuildProduct"].empty()) {
      roBuildProduct = make_shared<string>(boost::any_cast<string>(m["RoBuildProduct"]));
    }
    if (m.find("RoBuildTags") != m.end() && !m["RoBuildTags"].empty()) {
      roBuildTags = make_shared<string>(boost::any_cast<string>(m["RoBuildTags"]));
    }
    if (m.find("RoBuildType") != m.end() && !m["RoBuildType"].empty()) {
      roBuildType = make_shared<string>(boost::any_cast<string>(m["RoBuildType"]));
    }
    if (m.find("RoBuildUser") != m.end() && !m["RoBuildUser"].empty()) {
      roBuildUser = make_shared<string>(boost::any_cast<string>(m["RoBuildUser"]));
    }
    if (m.find("RoProductBoard") != m.end() && !m["RoProductBoard"].empty()) {
      roProductBoard = make_shared<string>(boost::any_cast<string>(m["RoProductBoard"]));
    }
    if (m.find("RoProductBrand") != m.end() && !m["RoProductBrand"].empty()) {
      roProductBrand = make_shared<string>(boost::any_cast<string>(m["RoProductBrand"]));
    }
    if (m.find("RoProductDevice") != m.end() && !m["RoProductDevice"].empty()) {
      roProductDevice = make_shared<string>(boost::any_cast<string>(m["RoProductDevice"]));
    }
    if (m.find("RoProductManufacturer") != m.end() && !m["RoProductManufacturer"].empty()) {
      roProductManufacturer = make_shared<string>(boost::any_cast<string>(m["RoProductManufacturer"]));
    }
    if (m.find("RoProductModel") != m.end() && !m["RoProductModel"].empty()) {
      roProductModel = make_shared<string>(boost::any_cast<string>(m["RoProductModel"]));
    }
    if (m.find("RwRoSerialNo") != m.end() && !m["RwRoSerialNo"].empty()) {
      rwRoSerialNo = make_shared<string>(boost::any_cast<string>(m["RwRoSerialNo"]));
    }
  }


  virtual ~ModifySystemPropertyTemplateRequestSystemPropertyInfo() = default;
};
class ModifySystemPropertyTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<bool> enableAuto{};
  shared_ptr<string> filePath{};
  shared_ptr<ModifySystemPropertyTemplateRequestSystemPropertyInfo> systemPropertyInfo{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateName{};

  ModifySystemPropertyTemplateRequest() {}

  explicit ModifySystemPropertyTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableAuto) {
      res["EnableAuto"] = boost::any(*enableAuto);
    }
    if (filePath) {
      res["FilePath"] = boost::any(*filePath);
    }
    if (systemPropertyInfo) {
      res["SystemPropertyInfo"] = systemPropertyInfo ? boost::any(systemPropertyInfo->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("EnableAuto") != m.end() && !m["EnableAuto"].empty()) {
      enableAuto = make_shared<bool>(boost::any_cast<bool>(m["EnableAuto"]));
    }
    if (m.find("FilePath") != m.end() && !m["FilePath"].empty()) {
      filePath = make_shared<string>(boost::any_cast<string>(m["FilePath"]));
    }
    if (m.find("SystemPropertyInfo") != m.end() && !m["SystemPropertyInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["SystemPropertyInfo"].type()) {
        ModifySystemPropertyTemplateRequestSystemPropertyInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SystemPropertyInfo"]));
        systemPropertyInfo = make_shared<ModifySystemPropertyTemplateRequestSystemPropertyInfo>(model1);
      }
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
  }


  virtual ~ModifySystemPropertyTemplateRequest() = default;
};
class ModifySystemPropertyTemplateShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<bool> enableAuto{};
  shared_ptr<string> filePath{};
  shared_ptr<string> systemPropertyInfoShrink{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateName{};

  ModifySystemPropertyTemplateShrinkRequest() {}

  explicit ModifySystemPropertyTemplateShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableAuto) {
      res["EnableAuto"] = boost::any(*enableAuto);
    }
    if (filePath) {
      res["FilePath"] = boost::any(*filePath);
    }
    if (systemPropertyInfoShrink) {
      res["SystemPropertyInfo"] = boost::any(*systemPropertyInfoShrink);
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
    if (m.find("EnableAuto") != m.end() && !m["EnableAuto"].empty()) {
      enableAuto = make_shared<bool>(boost::any_cast<bool>(m["EnableAuto"]));
    }
    if (m.find("FilePath") != m.end() && !m["FilePath"].empty()) {
      filePath = make_shared<string>(boost::any_cast<string>(m["FilePath"]));
    }
    if (m.find("SystemPropertyInfo") != m.end() && !m["SystemPropertyInfo"].empty()) {
      systemPropertyInfoShrink = make_shared<string>(boost::any_cast<string>(m["SystemPropertyInfo"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
  }


  virtual ~ModifySystemPropertyTemplateShrinkRequest() = default;
};
class ModifySystemPropertyTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> templateId{};

  ModifySystemPropertyTemplateResponseBody() {}

  explicit ModifySystemPropertyTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~ModifySystemPropertyTemplateResponseBody() = default;
};
class ModifySystemPropertyTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifySystemPropertyTemplateResponseBody> body{};

  ModifySystemPropertyTemplateResponse() {}

  explicit ModifySystemPropertyTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifySystemPropertyTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifySystemPropertyTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~ModifySystemPropertyTemplateResponse() = default;
};
class OperateAppRequest : public Darabonba::Model {
public:
  shared_ptr<long> appId{};
  shared_ptr<vector<string>> instanceIdList{};
  shared_ptr<string> operateType{};

  OperateAppRequest() {}

  explicit OperateAppRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (instanceIdList) {
      res["InstanceIdList"] = boost::any(*instanceIdList);
    }
    if (operateType) {
      res["OperateType"] = boost::any(*operateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<long>(boost::any_cast<long>(m["AppId"]));
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
    if (m.find("OperateType") != m.end() && !m["OperateType"].empty()) {
      operateType = make_shared<string>(boost::any_cast<string>(m["OperateType"]));
    }
  }


  virtual ~OperateAppRequest() = default;
};
class OperateAppResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  OperateAppResponseBody() {}

  explicit OperateAppResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~OperateAppResponseBody() = default;
};
class OperateAppResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OperateAppResponseBody> body{};

  OperateAppResponse() {}

  explicit OperateAppResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OperateAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OperateAppResponseBody>(model1);
      }
    }
  }


  virtual ~OperateAppResponse() = default;
};
class RebootAndroidInstancesInGroupRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> androidInstanceIds{};
  shared_ptr<bool> forceStop{};
  shared_ptr<string> saleMode{};

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
    if (saleMode) {
      res["SaleMode"] = boost::any(*saleMode);
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
    if (m.find("SaleMode") != m.end() && !m["SaleMode"].empty()) {
      saleMode = make_shared<string>(boost::any_cast<string>(m["SaleMode"]));
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
  shared_ptr<bool> backupAll{};
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
    if (backupAll) {
      res["BackupAll"] = boost::any(*backupAll);
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
    if (m.find("BackupAll") != m.end() && !m["BackupAll"].empty()) {
      backupAll = make_shared<bool>(boost::any_cast<bool>(m["BackupAll"]));
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
  shared_ptr<string> taskId{};

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
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
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
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
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
class RenewCloudPhoneNodesRequest : public Darabonba::Model {
public:
  shared_ptr<bool> autoPay{};
  shared_ptr<bool> autoRenew{};
  shared_ptr<vector<string>> nodeIds{};
  shared_ptr<long> period{};
  shared_ptr<string> periodUnit{};

  RenewCloudPhoneNodesRequest() {}

  explicit RenewCloudPhoneNodesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoPay) {
      res["AutoPay"] = boost::any(*autoPay);
    }
    if (autoRenew) {
      res["AutoRenew"] = boost::any(*autoRenew);
    }
    if (nodeIds) {
      res["NodeIds"] = boost::any(*nodeIds);
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
    if (m.find("AutoRenew") != m.end() && !m["AutoRenew"].empty()) {
      autoRenew = make_shared<bool>(boost::any_cast<bool>(m["AutoRenew"]));
    }
    if (m.find("NodeIds") != m.end() && !m["NodeIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["NodeIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["NodeIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      nodeIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("PeriodUnit") != m.end() && !m["PeriodUnit"].empty()) {
      periodUnit = make_shared<string>(boost::any_cast<string>(m["PeriodUnit"]));
    }
  }


  virtual ~RenewCloudPhoneNodesRequest() = default;
};
class RenewCloudPhoneNodesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  RenewCloudPhoneNodesResponseBody() {}

  explicit RenewCloudPhoneNodesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RenewCloudPhoneNodesResponseBody() = default;
};
class RenewCloudPhoneNodesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RenewCloudPhoneNodesResponseBody> body{};

  RenewCloudPhoneNodesResponse() {}

  explicit RenewCloudPhoneNodesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RenewCloudPhoneNodesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RenewCloudPhoneNodesResponseBody>(model1);
      }
    }
  }


  virtual ~RenewCloudPhoneNodesResponse() = default;
};
class ResetAndroidInstancesInGroupRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> androidInstanceIds{};
  shared_ptr<string> saleMode{};
  shared_ptr<long> settingResetType{};

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
    if (saleMode) {
      res["SaleMode"] = boost::any(*saleMode);
    }
    if (settingResetType) {
      res["SettingResetType"] = boost::any(*settingResetType);
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
    if (m.find("SaleMode") != m.end() && !m["SaleMode"].empty()) {
      saleMode = make_shared<string>(boost::any_cast<string>(m["SaleMode"]));
    }
    if (m.find("SettingResetType") != m.end() && !m["SettingResetType"].empty()) {
      settingResetType = make_shared<long>(boost::any_cast<long>(m["SettingResetType"]));
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
  shared_ptr<string> contentEncoding{};
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
    if (contentEncoding) {
      res["ContentEncoding"] = boost::any(*contentEncoding);
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
    if (m.find("ContentEncoding") != m.end() && !m["ContentEncoding"].empty()) {
      contentEncoding = make_shared<string>(boost::any_cast<string>(m["ContentEncoding"]));
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
  shared_ptr<string> targetFileName{};
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
    if (targetFileName) {
      res["TargetFileName"] = boost::any(*targetFileName);
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
    if (m.find("TargetFileName") != m.end() && !m["TargetFileName"].empty()) {
      targetFileName = make_shared<string>(boost::any_cast<string>(m["TargetFileName"]));
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
  shared_ptr<string> taskId{};

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
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
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
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
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
class SendSystemPropertyTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> androidInstanceIds{};
  shared_ptr<string> templateId{};
  shared_ptr<vector<string>> templateIds{};

  SendSystemPropertyTemplateRequest() {}

  explicit SendSystemPropertyTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (androidInstanceIds) {
      res["AndroidInstanceIds"] = boost::any(*androidInstanceIds);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateIds) {
      res["TemplateIds"] = boost::any(*templateIds);
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
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateIds") != m.end() && !m["TemplateIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TemplateIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TemplateIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      templateIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~SendSystemPropertyTemplateRequest() = default;
};
class SendSystemPropertyTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SendSystemPropertyTemplateResponseBody() {}

  explicit SendSystemPropertyTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SendSystemPropertyTemplateResponseBody() = default;
};
class SendSystemPropertyTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SendSystemPropertyTemplateResponseBody> body{};

  SendSystemPropertyTemplateResponse() {}

  explicit SendSystemPropertyTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SendSystemPropertyTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SendSystemPropertyTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~SendSystemPropertyTemplateResponse() = default;
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
  shared_ptr<string> saleMode{};

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
    if (saleMode) {
      res["SaleMode"] = boost::any(*saleMode);
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
    if (m.find("SaleMode") != m.end() && !m["SaleMode"].empty()) {
      saleMode = make_shared<string>(boost::any_cast<string>(m["SaleMode"]));
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
  shared_ptr<string> saleMode{};

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
    if (saleMode) {
      res["SaleMode"] = boost::any(*saleMode);
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
    if (m.find("SaleMode") != m.end() && !m["SaleMode"].empty()) {
      saleMode = make_shared<string>(boost::any_cast<string>(m["SaleMode"]));
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
  shared_ptr<vector<string>> instanceIdList{};

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


  virtual ~UninstallAppRequest() = default;
};
class UninstallAppResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

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
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
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
class UpdateInstanceImageRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageId{};
  shared_ptr<vector<string>> instanceIdList{};

  UpdateInstanceImageRequest() {}

  explicit UpdateInstanceImageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (instanceIdList) {
      res["InstanceIdList"] = boost::any(*instanceIdList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
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


  virtual ~UpdateInstanceImageRequest() = default;
};
class UpdateInstanceImageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  UpdateInstanceImageResponseBody() {}

  explicit UpdateInstanceImageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~UpdateInstanceImageResponseBody() = default;
};
class UpdateInstanceImageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateInstanceImageResponseBody> body{};

  UpdateInstanceImageResponse() {}

  explicit UpdateInstanceImageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateInstanceImageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateInstanceImageResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateInstanceImageResponse() = default;
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
  BatchGetAcpConnectionTicketResponse batchGetAcpConnectionTicketWithOptions(shared_ptr<BatchGetAcpConnectionTicketRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchGetAcpConnectionTicketResponse batchGetAcpConnectionTicket(shared_ptr<BatchGetAcpConnectionTicketRequest> request);
  ChangeCloudPhoneNodeResponse changeCloudPhoneNodeWithOptions(shared_ptr<ChangeCloudPhoneNodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChangeCloudPhoneNodeResponse changeCloudPhoneNode(shared_ptr<ChangeCloudPhoneNodeRequest> request);
  CheckResourceStockResponse checkResourceStockWithOptions(shared_ptr<CheckResourceStockRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckResourceStockResponse checkResourceStock(shared_ptr<CheckResourceStockRequest> request);
  CreateAndroidInstanceGroupResponse createAndroidInstanceGroupWithOptions(shared_ptr<CreateAndroidInstanceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAndroidInstanceGroupResponse createAndroidInstanceGroup(shared_ptr<CreateAndroidInstanceGroupRequest> request);
  CreateAppResponse createAppWithOptions(shared_ptr<CreateAppRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAppResponse createApp(shared_ptr<CreateAppRequest> request);
  CreateCloudPhoneNodeResponse createCloudPhoneNodeWithOptions(shared_ptr<CreateCloudPhoneNodeRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateCloudPhoneNodeResponse createCloudPhoneNode(shared_ptr<CreateCloudPhoneNodeRequest> request);
  CreateCustomImageResponse createCustomImageWithOptions(shared_ptr<CreateCustomImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateCustomImageResponse createCustomImage(shared_ptr<CreateCustomImageRequest> request);
  CreateKeyPairResponse createKeyPairWithOptions(shared_ptr<CreateKeyPairRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateKeyPairResponse createKeyPair(shared_ptr<CreateKeyPairRequest> request);
  CreatePolicyGroupResponse createPolicyGroupWithOptions(shared_ptr<CreatePolicyGroupRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePolicyGroupResponse createPolicyGroup(shared_ptr<CreatePolicyGroupRequest> request);
  CreateScreenshotResponse createScreenshotWithOptions(shared_ptr<CreateScreenshotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateScreenshotResponse createScreenshot(shared_ptr<CreateScreenshotRequest> request);
  CreateSystemPropertyTemplateResponse createSystemPropertyTemplateWithOptions(shared_ptr<CreateSystemPropertyTemplateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSystemPropertyTemplateResponse createSystemPropertyTemplate(shared_ptr<CreateSystemPropertyTemplateRequest> request);
  DeleteAndroidInstanceGroupResponse deleteAndroidInstanceGroupWithOptions(shared_ptr<DeleteAndroidInstanceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAndroidInstanceGroupResponse deleteAndroidInstanceGroup(shared_ptr<DeleteAndroidInstanceGroupRequest> request);
  DeleteAppsResponse deleteAppsWithOptions(shared_ptr<DeleteAppsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAppsResponse deleteApps(shared_ptr<DeleteAppsRequest> request);
  DeleteBackupFileResponse deleteBackupFileWithOptions(shared_ptr<DeleteBackupFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteBackupFileResponse deleteBackupFile(shared_ptr<DeleteBackupFileRequest> request);
  DeleteCloudPhoneNodesResponse deleteCloudPhoneNodesWithOptions(shared_ptr<DeleteCloudPhoneNodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteCloudPhoneNodesResponse deleteCloudPhoneNodes(shared_ptr<DeleteCloudPhoneNodesRequest> request);
  DeleteImagesResponse deleteImagesWithOptions(shared_ptr<DeleteImagesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteImagesResponse deleteImages(shared_ptr<DeleteImagesRequest> request);
  DeleteKeyPairsResponse deleteKeyPairsWithOptions(shared_ptr<DeleteKeyPairsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteKeyPairsResponse deleteKeyPairs(shared_ptr<DeleteKeyPairsRequest> request);
  DeletePolicyGroupResponse deletePolicyGroupWithOptions(shared_ptr<DeletePolicyGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeletePolicyGroupResponse deletePolicyGroup(shared_ptr<DeletePolicyGroupRequest> request);
  DeleteSystemPropertyTemplatesResponse deleteSystemPropertyTemplatesWithOptions(shared_ptr<DeleteSystemPropertyTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteSystemPropertyTemplatesResponse deleteSystemPropertyTemplates(shared_ptr<DeleteSystemPropertyTemplatesRequest> request);
  DescribeAndroidInstanceGroupsResponse describeAndroidInstanceGroupsWithOptions(shared_ptr<DescribeAndroidInstanceGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAndroidInstanceGroupsResponse describeAndroidInstanceGroups(shared_ptr<DescribeAndroidInstanceGroupsRequest> request);
  DescribeAndroidInstancesResponse describeAndroidInstancesWithOptions(shared_ptr<DescribeAndroidInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAndroidInstancesResponse describeAndroidInstances(shared_ptr<DescribeAndroidInstancesRequest> request);
  DescribeAppsResponse describeAppsWithOptions(shared_ptr<DescribeAppsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAppsResponse describeApps(shared_ptr<DescribeAppsRequest> request);
  DescribeBackupFilesResponse describeBackupFilesWithOptions(shared_ptr<DescribeBackupFilesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeBackupFilesResponse describeBackupFiles(shared_ptr<DescribeBackupFilesRequest> request);
  DescribeCloudPhoneNodesResponse describeCloudPhoneNodesWithOptions(shared_ptr<DescribeCloudPhoneNodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCloudPhoneNodesResponse describeCloudPhoneNodes(shared_ptr<DescribeCloudPhoneNodesRequest> request);
  DescribeDisplayConfigResponse describeDisplayConfigWithOptions(shared_ptr<DescribeDisplayConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDisplayConfigResponse describeDisplayConfig(shared_ptr<DescribeDisplayConfigRequest> request);
  DescribeImageListResponse describeImageListWithOptions(shared_ptr<DescribeImageListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeImageListResponse describeImageList(shared_ptr<DescribeImageListRequest> request);
  DescribeInvocationsResponse describeInvocationsWithOptions(shared_ptr<DescribeInvocationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeInvocationsResponse describeInvocations(shared_ptr<DescribeInvocationsRequest> request);
  DescribeKeyPairsResponse describeKeyPairsWithOptions(shared_ptr<DescribeKeyPairsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeKeyPairsResponse describeKeyPairs(shared_ptr<DescribeKeyPairsRequest> request);
  DescribeMetricLastResponse describeMetricLastWithOptions(shared_ptr<DescribeMetricLastRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeMetricLastResponse describeMetricLast(shared_ptr<DescribeMetricLastRequest> request);
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions(shared_ptr<DescribeRegionsRequest> request);
  DescribeSpecResponse describeSpecWithOptions(shared_ptr<DescribeSpecRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSpecResponse describeSpec(shared_ptr<DescribeSpecRequest> request);
  DescribeSystemPropertyTemplatesResponse describeSystemPropertyTemplatesWithOptions(shared_ptr<DescribeSystemPropertyTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSystemPropertyTemplatesResponse describeSystemPropertyTemplates(shared_ptr<DescribeSystemPropertyTemplatesRequest> request);
  DescribeTasksResponse describeTasksWithOptions(shared_ptr<DescribeTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeTasksResponse describeTasks(shared_ptr<DescribeTasksRequest> request);
  DetachKeyPairResponse detachKeyPairWithOptions(shared_ptr<DetachKeyPairRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetachKeyPairResponse detachKeyPair(shared_ptr<DetachKeyPairRequest> request);
  DisconnectAndroidInstanceResponse disconnectAndroidInstanceWithOptions(shared_ptr<DisconnectAndroidInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisconnectAndroidInstanceResponse disconnectAndroidInstance(shared_ptr<DisconnectAndroidInstanceRequest> request);
  DistributeImageResponse distributeImageWithOptions(shared_ptr<DistributeImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DistributeImageResponse distributeImage(shared_ptr<DistributeImageRequest> request);
  DowngradeAndroidInstanceGroupResponse downgradeAndroidInstanceGroupWithOptions(shared_ptr<DowngradeAndroidInstanceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DowngradeAndroidInstanceGroupResponse downgradeAndroidInstanceGroup(shared_ptr<DowngradeAndroidInstanceGroupRequest> request);
  EndCoordinationResponse endCoordinationWithOptions(shared_ptr<EndCoordinationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EndCoordinationResponse endCoordination(shared_ptr<EndCoordinationRequest> request);
  ExpandDataVolumeResponse expandDataVolumeWithOptions(shared_ptr<ExpandDataVolumeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExpandDataVolumeResponse expandDataVolume(shared_ptr<ExpandDataVolumeRequest> request);
  FetchFileResponse fetchFileWithOptions(shared_ptr<FetchFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FetchFileResponse fetchFile(shared_ptr<FetchFileRequest> request);
  GenerateCoordinationCodeResponse generateCoordinationCodeWithOptions(shared_ptr<GenerateCoordinationCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateCoordinationCodeResponse generateCoordinationCode(shared_ptr<GenerateCoordinationCodeRequest> request);
  GetInstancePropertiesResponse getInstancePropertiesWithOptions(shared_ptr<GetInstancePropertiesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetInstancePropertiesResponse getInstanceProperties(shared_ptr<GetInstancePropertiesRequest> request);
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
  ModifyCloudPhoneNodeResponse modifyCloudPhoneNodeWithOptions(shared_ptr<ModifyCloudPhoneNodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyCloudPhoneNodeResponse modifyCloudPhoneNode(shared_ptr<ModifyCloudPhoneNodeRequest> request);
  ModifyDisplayConfigResponse modifyDisplayConfigWithOptions(shared_ptr<ModifyDisplayConfigRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDisplayConfigResponse modifyDisplayConfig(shared_ptr<ModifyDisplayConfigRequest> request);
  ModifyInstanceChargeTypeResponse modifyInstanceChargeTypeWithOptions(shared_ptr<ModifyInstanceChargeTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyInstanceChargeTypeResponse modifyInstanceChargeType(shared_ptr<ModifyInstanceChargeTypeRequest> request);
  ModifyKeyPairNameResponse modifyKeyPairNameWithOptions(shared_ptr<ModifyKeyPairNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyKeyPairNameResponse modifyKeyPairName(shared_ptr<ModifyKeyPairNameRequest> request);
  ModifyPolicyGroupResponse modifyPolicyGroupWithOptions(shared_ptr<ModifyPolicyGroupRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyPolicyGroupResponse modifyPolicyGroup(shared_ptr<ModifyPolicyGroupRequest> request);
  ModifySystemPropertyTemplateResponse modifySystemPropertyTemplateWithOptions(shared_ptr<ModifySystemPropertyTemplateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifySystemPropertyTemplateResponse modifySystemPropertyTemplate(shared_ptr<ModifySystemPropertyTemplateRequest> request);
  OperateAppResponse operateAppWithOptions(shared_ptr<OperateAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OperateAppResponse operateApp(shared_ptr<OperateAppRequest> request);
  RebootAndroidInstancesInGroupResponse rebootAndroidInstancesInGroupWithOptions(shared_ptr<RebootAndroidInstancesInGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RebootAndroidInstancesInGroupResponse rebootAndroidInstancesInGroup(shared_ptr<RebootAndroidInstancesInGroupRequest> request);
  RecoveryFileResponse recoveryFileWithOptions(shared_ptr<RecoveryFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecoveryFileResponse recoveryFile(shared_ptr<RecoveryFileRequest> request);
  RenewAndroidInstanceGroupsResponse renewAndroidInstanceGroupsWithOptions(shared_ptr<RenewAndroidInstanceGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RenewAndroidInstanceGroupsResponse renewAndroidInstanceGroups(shared_ptr<RenewAndroidInstanceGroupsRequest> request);
  RenewCloudPhoneNodesResponse renewCloudPhoneNodesWithOptions(shared_ptr<RenewCloudPhoneNodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RenewCloudPhoneNodesResponse renewCloudPhoneNodes(shared_ptr<RenewCloudPhoneNodesRequest> request);
  ResetAndroidInstancesInGroupResponse resetAndroidInstancesInGroupWithOptions(shared_ptr<ResetAndroidInstancesInGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResetAndroidInstancesInGroupResponse resetAndroidInstancesInGroup(shared_ptr<ResetAndroidInstancesInGroupRequest> request);
  RunCommandResponse runCommandWithOptions(shared_ptr<RunCommandRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RunCommandResponse runCommand(shared_ptr<RunCommandRequest> request);
  SendFileResponse sendFileWithOptions(shared_ptr<SendFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendFileResponse sendFile(shared_ptr<SendFileRequest> request);
  SendSystemPropertyTemplateResponse sendSystemPropertyTemplateWithOptions(shared_ptr<SendSystemPropertyTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendSystemPropertyTemplateResponse sendSystemPropertyTemplate(shared_ptr<SendSystemPropertyTemplateRequest> request);
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
  UpdateInstanceImageResponse updateInstanceImageWithOptions(shared_ptr<UpdateInstanceImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateInstanceImageResponse updateInstanceImage(shared_ptr<UpdateInstanceImageRequest> request);
  UpgradeAndroidInstanceGroupResponse upgradeAndroidInstanceGroupWithOptions(shared_ptr<UpgradeAndroidInstanceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpgradeAndroidInstanceGroupResponse upgradeAndroidInstanceGroup(shared_ptr<UpgradeAndroidInstanceGroupRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Eds-aic20230930

#endif
