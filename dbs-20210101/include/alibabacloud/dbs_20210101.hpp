// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_DBS20210101_H_
#define ALIBABACLOUD_DBS20210101_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Dbs20210101 {
class ChangeResourceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> newResourceGroupId{};
  shared_ptr<string> regionCode{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};

  ChangeResourceGroupRequest() {}

  explicit ChangeResourceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (newResourceGroupId) {
      res["NewResourceGroupId"] = boost::any(*newResourceGroupId);
    }
    if (regionCode) {
      res["RegionCode"] = boost::any(*regionCode);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("NewResourceGroupId") != m.end() && !m["NewResourceGroupId"].empty()) {
      newResourceGroupId = make_shared<string>(boost::any_cast<string>(m["NewResourceGroupId"]));
    }
    if (m.find("RegionCode") != m.end() && !m["RegionCode"].empty()) {
      regionCode = make_shared<string>(boost::any_cast<string>(m["RegionCode"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~ChangeResourceGroupRequest() = default;
};
class ChangeResourceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  ChangeResourceGroupResponseBody() {}

  explicit ChangeResourceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
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
class CreateDownloadRequest : public Darabonba::Model {
public:
  shared_ptr<string> bakSetId{};
  shared_ptr<string> bakSetSize{};
  shared_ptr<string> bakSetType{};
  shared_ptr<string> downloadPointInTime{};
  shared_ptr<string> formatType{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> regionCode{};
  shared_ptr<string> targetBucket{};
  shared_ptr<string> targetOssRegion{};
  shared_ptr<string> targetPath{};
  shared_ptr<string> targetType{};

  CreateDownloadRequest() {}

  explicit CreateDownloadRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bakSetId) {
      res["BakSetId"] = boost::any(*bakSetId);
    }
    if (bakSetSize) {
      res["BakSetSize"] = boost::any(*bakSetSize);
    }
    if (bakSetType) {
      res["BakSetType"] = boost::any(*bakSetType);
    }
    if (downloadPointInTime) {
      res["DownloadPointInTime"] = boost::any(*downloadPointInTime);
    }
    if (formatType) {
      res["FormatType"] = boost::any(*formatType);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (regionCode) {
      res["RegionCode"] = boost::any(*regionCode);
    }
    if (targetBucket) {
      res["TargetBucket"] = boost::any(*targetBucket);
    }
    if (targetOssRegion) {
      res["TargetOssRegion"] = boost::any(*targetOssRegion);
    }
    if (targetPath) {
      res["TargetPath"] = boost::any(*targetPath);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BakSetId") != m.end() && !m["BakSetId"].empty()) {
      bakSetId = make_shared<string>(boost::any_cast<string>(m["BakSetId"]));
    }
    if (m.find("BakSetSize") != m.end() && !m["BakSetSize"].empty()) {
      bakSetSize = make_shared<string>(boost::any_cast<string>(m["BakSetSize"]));
    }
    if (m.find("BakSetType") != m.end() && !m["BakSetType"].empty()) {
      bakSetType = make_shared<string>(boost::any_cast<string>(m["BakSetType"]));
    }
    if (m.find("DownloadPointInTime") != m.end() && !m["DownloadPointInTime"].empty()) {
      downloadPointInTime = make_shared<string>(boost::any_cast<string>(m["DownloadPointInTime"]));
    }
    if (m.find("FormatType") != m.end() && !m["FormatType"].empty()) {
      formatType = make_shared<string>(boost::any_cast<string>(m["FormatType"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("RegionCode") != m.end() && !m["RegionCode"].empty()) {
      regionCode = make_shared<string>(boost::any_cast<string>(m["RegionCode"]));
    }
    if (m.find("TargetBucket") != m.end() && !m["TargetBucket"].empty()) {
      targetBucket = make_shared<string>(boost::any_cast<string>(m["TargetBucket"]));
    }
    if (m.find("TargetOssRegion") != m.end() && !m["TargetOssRegion"].empty()) {
      targetOssRegion = make_shared<string>(boost::any_cast<string>(m["TargetOssRegion"]));
    }
    if (m.find("TargetPath") != m.end() && !m["TargetPath"].empty()) {
      targetPath = make_shared<string>(boost::any_cast<string>(m["TargetPath"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
  }


  virtual ~CreateDownloadRequest() = default;
};
class CreateDownloadResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> backupSetTime{};
  shared_ptr<string> bakSetId{};
  shared_ptr<string> dbList{};
  shared_ptr<string> downloadStatus{};
  shared_ptr<long> exportDataSize{};
  shared_ptr<string> format{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> importDataSize{};
  shared_ptr<string> progress{};
  shared_ptr<string> regionCode{};
  shared_ptr<string> targetPath{};
  shared_ptr<string> targetType{};
  shared_ptr<string> taskId{};

  CreateDownloadResponseBodyData() {}

  explicit CreateDownloadResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupSetTime) {
      res["BackupSetTime"] = boost::any(*backupSetTime);
    }
    if (bakSetId) {
      res["BakSetId"] = boost::any(*bakSetId);
    }
    if (dbList) {
      res["DbList"] = boost::any(*dbList);
    }
    if (downloadStatus) {
      res["DownloadStatus"] = boost::any(*downloadStatus);
    }
    if (exportDataSize) {
      res["ExportDataSize"] = boost::any(*exportDataSize);
    }
    if (format) {
      res["Format"] = boost::any(*format);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (importDataSize) {
      res["ImportDataSize"] = boost::any(*importDataSize);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (regionCode) {
      res["RegionCode"] = boost::any(*regionCode);
    }
    if (targetPath) {
      res["TargetPath"] = boost::any(*targetPath);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupSetTime") != m.end() && !m["BackupSetTime"].empty()) {
      backupSetTime = make_shared<long>(boost::any_cast<long>(m["BackupSetTime"]));
    }
    if (m.find("BakSetId") != m.end() && !m["BakSetId"].empty()) {
      bakSetId = make_shared<string>(boost::any_cast<string>(m["BakSetId"]));
    }
    if (m.find("DbList") != m.end() && !m["DbList"].empty()) {
      dbList = make_shared<string>(boost::any_cast<string>(m["DbList"]));
    }
    if (m.find("DownloadStatus") != m.end() && !m["DownloadStatus"].empty()) {
      downloadStatus = make_shared<string>(boost::any_cast<string>(m["DownloadStatus"]));
    }
    if (m.find("ExportDataSize") != m.end() && !m["ExportDataSize"].empty()) {
      exportDataSize = make_shared<long>(boost::any_cast<long>(m["ExportDataSize"]));
    }
    if (m.find("Format") != m.end() && !m["Format"].empty()) {
      format = make_shared<string>(boost::any_cast<string>(m["Format"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
    if (m.find("ImportDataSize") != m.end() && !m["ImportDataSize"].empty()) {
      importDataSize = make_shared<long>(boost::any_cast<long>(m["ImportDataSize"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<string>(boost::any_cast<string>(m["Progress"]));
    }
    if (m.find("RegionCode") != m.end() && !m["RegionCode"].empty()) {
      regionCode = make_shared<string>(boost::any_cast<string>(m["RegionCode"]));
    }
    if (m.find("TargetPath") != m.end() && !m["TargetPath"].empty()) {
      targetPath = make_shared<string>(boost::any_cast<string>(m["TargetPath"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~CreateDownloadResponseBodyData() = default;
};
class CreateDownloadResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateDownloadResponseBodyData> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  CreateDownloadResponseBody() {}

  explicit CreateDownloadResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
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
        CreateDownloadResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateDownloadResponseBodyData>(model1);
      }
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
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


  virtual ~CreateDownloadResponseBody() = default;
};
class CreateDownloadResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDownloadResponseBody> body{};

  CreateDownloadResponse() {}

  explicit CreateDownloadResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateDownloadResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDownloadResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDownloadResponse() = default;
};
class DeleteSandboxInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> backupPlanId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> zoneId{};

  DeleteSandboxInstanceRequest() {}

  explicit DeleteSandboxInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupPlanId) {
      res["BackupPlanId"] = boost::any(*backupPlanId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupPlanId") != m.end() && !m["BackupPlanId"].empty()) {
      backupPlanId = make_shared<string>(boost::any_cast<string>(m["BackupPlanId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DeleteSandboxInstanceRequest() = default;
};
class DeleteSandboxInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  DeleteSandboxInstanceResponseBody() {}

  explicit DeleteSandboxInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
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


  virtual ~DeleteSandboxInstanceResponseBody() = default;
};
class DeleteSandboxInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteSandboxInstanceResponseBody> body{};

  DeleteSandboxInstanceResponse() {}

  explicit DeleteSandboxInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteSandboxInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteSandboxInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteSandboxInstanceResponse() = default;
};
class DescribeBackupDataListRequest : public Darabonba::Model {
public:
  shared_ptr<string> backupId{};
  shared_ptr<string> backupMethod{};
  shared_ptr<string> backupMode{};
  shared_ptr<string> backupScale{};
  shared_ptr<string> backupStatus{};
  shared_ptr<string> backupType{};
  shared_ptr<string> dataSourceId{};
  shared_ptr<string> endTime{};
  shared_ptr<bool> instanceIsDeleted{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> instanceRegion{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionCode{};
  shared_ptr<string> sceneType{};
  shared_ptr<string> startTime{};

  DescribeBackupDataListRequest() {}

  explicit DescribeBackupDataListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupId) {
      res["BackupId"] = boost::any(*backupId);
    }
    if (backupMethod) {
      res["BackupMethod"] = boost::any(*backupMethod);
    }
    if (backupMode) {
      res["BackupMode"] = boost::any(*backupMode);
    }
    if (backupScale) {
      res["BackupScale"] = boost::any(*backupScale);
    }
    if (backupStatus) {
      res["BackupStatus"] = boost::any(*backupStatus);
    }
    if (backupType) {
      res["BackupType"] = boost::any(*backupType);
    }
    if (dataSourceId) {
      res["DataSourceId"] = boost::any(*dataSourceId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (instanceIsDeleted) {
      res["InstanceIsDeleted"] = boost::any(*instanceIsDeleted);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (instanceRegion) {
      res["InstanceRegion"] = boost::any(*instanceRegion);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionCode) {
      res["RegionCode"] = boost::any(*regionCode);
    }
    if (sceneType) {
      res["SceneType"] = boost::any(*sceneType);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupId") != m.end() && !m["BackupId"].empty()) {
      backupId = make_shared<string>(boost::any_cast<string>(m["BackupId"]));
    }
    if (m.find("BackupMethod") != m.end() && !m["BackupMethod"].empty()) {
      backupMethod = make_shared<string>(boost::any_cast<string>(m["BackupMethod"]));
    }
    if (m.find("BackupMode") != m.end() && !m["BackupMode"].empty()) {
      backupMode = make_shared<string>(boost::any_cast<string>(m["BackupMode"]));
    }
    if (m.find("BackupScale") != m.end() && !m["BackupScale"].empty()) {
      backupScale = make_shared<string>(boost::any_cast<string>(m["BackupScale"]));
    }
    if (m.find("BackupStatus") != m.end() && !m["BackupStatus"].empty()) {
      backupStatus = make_shared<string>(boost::any_cast<string>(m["BackupStatus"]));
    }
    if (m.find("BackupType") != m.end() && !m["BackupType"].empty()) {
      backupType = make_shared<string>(boost::any_cast<string>(m["BackupType"]));
    }
    if (m.find("DataSourceId") != m.end() && !m["DataSourceId"].empty()) {
      dataSourceId = make_shared<string>(boost::any_cast<string>(m["DataSourceId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("InstanceIsDeleted") != m.end() && !m["InstanceIsDeleted"].empty()) {
      instanceIsDeleted = make_shared<bool>(boost::any_cast<bool>(m["InstanceIsDeleted"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("InstanceRegion") != m.end() && !m["InstanceRegion"].empty()) {
      instanceRegion = make_shared<string>(boost::any_cast<string>(m["InstanceRegion"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionCode") != m.end() && !m["RegionCode"].empty()) {
      regionCode = make_shared<string>(boost::any_cast<string>(m["RegionCode"]));
    }
    if (m.find("SceneType") != m.end() && !m["SceneType"].empty()) {
      sceneType = make_shared<string>(boost::any_cast<string>(m["SceneType"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeBackupDataListRequest() = default;
};
class DescribeBackupDataListResponseBodyDataContentPolarSnapshot : public Darabonba::Model {
public:
  shared_ptr<long> dumpId{};
  shared_ptr<long> dumpSize{};
  shared_ptr<string> expectExpireTime{};
  shared_ptr<string> expectExpireType{};

  DescribeBackupDataListResponseBodyDataContentPolarSnapshot() {}

  explicit DescribeBackupDataListResponseBodyDataContentPolarSnapshot(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dumpId) {
      res["DumpId"] = boost::any(*dumpId);
    }
    if (dumpSize) {
      res["DumpSize"] = boost::any(*dumpSize);
    }
    if (expectExpireTime) {
      res["ExpectExpireTime"] = boost::any(*expectExpireTime);
    }
    if (expectExpireType) {
      res["expectExpireType"] = boost::any(*expectExpireType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DumpId") != m.end() && !m["DumpId"].empty()) {
      dumpId = make_shared<long>(boost::any_cast<long>(m["DumpId"]));
    }
    if (m.find("DumpSize") != m.end() && !m["DumpSize"].empty()) {
      dumpSize = make_shared<long>(boost::any_cast<long>(m["DumpSize"]));
    }
    if (m.find("ExpectExpireTime") != m.end() && !m["ExpectExpireTime"].empty()) {
      expectExpireTime = make_shared<string>(boost::any_cast<string>(m["ExpectExpireTime"]));
    }
    expectExpireType = make_shared<string>(boost::any_cast<string>(m["expectExpireType"]));
  }


  virtual ~DescribeBackupDataListResponseBodyDataContentPolarSnapshot() = default;
};
class DescribeBackupDataListResponseBodyDataContent : public Darabonba::Model {
public:
  shared_ptr<string> backupDownloadURL{};
  shared_ptr<string> backupEndTime{};
  shared_ptr<string> backupId{};
  shared_ptr<string> backupIntranetDownloadURL{};
  shared_ptr<string> backupLocation{};
  shared_ptr<string> backupMethod{};
  shared_ptr<string> backupMode{};
  shared_ptr<string> backupName{};
  shared_ptr<string> backupScale{};
  shared_ptr<long> backupSize{};
  shared_ptr<string> backupStartTime{};
  shared_ptr<string> backupStatus{};
  shared_ptr<string> backupType{};
  shared_ptr<string> checksum{};
  shared_ptr<long> consistentTime{};
  shared_ptr<string> encryption{};
  shared_ptr<string> engine{};
  shared_ptr<string> engineVersion{};
  shared_ptr<string> expectExpireTime{};
  shared_ptr<string> expectExpireType{};
  shared_ptr<string> instanceName{};
  shared_ptr<long> isAvail{};
  shared_ptr<DescribeBackupDataListResponseBodyDataContentPolarSnapshot> polarSnapshot{};
  shared_ptr<long> supportDeletion{};

  DescribeBackupDataListResponseBodyDataContent() {}

  explicit DescribeBackupDataListResponseBodyDataContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupDownloadURL) {
      res["BackupDownloadURL"] = boost::any(*backupDownloadURL);
    }
    if (backupEndTime) {
      res["BackupEndTime"] = boost::any(*backupEndTime);
    }
    if (backupId) {
      res["BackupId"] = boost::any(*backupId);
    }
    if (backupIntranetDownloadURL) {
      res["BackupIntranetDownloadURL"] = boost::any(*backupIntranetDownloadURL);
    }
    if (backupLocation) {
      res["BackupLocation"] = boost::any(*backupLocation);
    }
    if (backupMethod) {
      res["BackupMethod"] = boost::any(*backupMethod);
    }
    if (backupMode) {
      res["BackupMode"] = boost::any(*backupMode);
    }
    if (backupName) {
      res["BackupName"] = boost::any(*backupName);
    }
    if (backupScale) {
      res["BackupScale"] = boost::any(*backupScale);
    }
    if (backupSize) {
      res["BackupSize"] = boost::any(*backupSize);
    }
    if (backupStartTime) {
      res["BackupStartTime"] = boost::any(*backupStartTime);
    }
    if (backupStatus) {
      res["BackupStatus"] = boost::any(*backupStatus);
    }
    if (backupType) {
      res["BackupType"] = boost::any(*backupType);
    }
    if (checksum) {
      res["Checksum"] = boost::any(*checksum);
    }
    if (consistentTime) {
      res["ConsistentTime"] = boost::any(*consistentTime);
    }
    if (encryption) {
      res["Encryption"] = boost::any(*encryption);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (expectExpireTime) {
      res["ExpectExpireTime"] = boost::any(*expectExpireTime);
    }
    if (expectExpireType) {
      res["ExpectExpireType"] = boost::any(*expectExpireType);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (isAvail) {
      res["IsAvail"] = boost::any(*isAvail);
    }
    if (polarSnapshot) {
      res["PolarSnapshot"] = polarSnapshot ? boost::any(polarSnapshot->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (supportDeletion) {
      res["SupportDeletion"] = boost::any(*supportDeletion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupDownloadURL") != m.end() && !m["BackupDownloadURL"].empty()) {
      backupDownloadURL = make_shared<string>(boost::any_cast<string>(m["BackupDownloadURL"]));
    }
    if (m.find("BackupEndTime") != m.end() && !m["BackupEndTime"].empty()) {
      backupEndTime = make_shared<string>(boost::any_cast<string>(m["BackupEndTime"]));
    }
    if (m.find("BackupId") != m.end() && !m["BackupId"].empty()) {
      backupId = make_shared<string>(boost::any_cast<string>(m["BackupId"]));
    }
    if (m.find("BackupIntranetDownloadURL") != m.end() && !m["BackupIntranetDownloadURL"].empty()) {
      backupIntranetDownloadURL = make_shared<string>(boost::any_cast<string>(m["BackupIntranetDownloadURL"]));
    }
    if (m.find("BackupLocation") != m.end() && !m["BackupLocation"].empty()) {
      backupLocation = make_shared<string>(boost::any_cast<string>(m["BackupLocation"]));
    }
    if (m.find("BackupMethod") != m.end() && !m["BackupMethod"].empty()) {
      backupMethod = make_shared<string>(boost::any_cast<string>(m["BackupMethod"]));
    }
    if (m.find("BackupMode") != m.end() && !m["BackupMode"].empty()) {
      backupMode = make_shared<string>(boost::any_cast<string>(m["BackupMode"]));
    }
    if (m.find("BackupName") != m.end() && !m["BackupName"].empty()) {
      backupName = make_shared<string>(boost::any_cast<string>(m["BackupName"]));
    }
    if (m.find("BackupScale") != m.end() && !m["BackupScale"].empty()) {
      backupScale = make_shared<string>(boost::any_cast<string>(m["BackupScale"]));
    }
    if (m.find("BackupSize") != m.end() && !m["BackupSize"].empty()) {
      backupSize = make_shared<long>(boost::any_cast<long>(m["BackupSize"]));
    }
    if (m.find("BackupStartTime") != m.end() && !m["BackupStartTime"].empty()) {
      backupStartTime = make_shared<string>(boost::any_cast<string>(m["BackupStartTime"]));
    }
    if (m.find("BackupStatus") != m.end() && !m["BackupStatus"].empty()) {
      backupStatus = make_shared<string>(boost::any_cast<string>(m["BackupStatus"]));
    }
    if (m.find("BackupType") != m.end() && !m["BackupType"].empty()) {
      backupType = make_shared<string>(boost::any_cast<string>(m["BackupType"]));
    }
    if (m.find("Checksum") != m.end() && !m["Checksum"].empty()) {
      checksum = make_shared<string>(boost::any_cast<string>(m["Checksum"]));
    }
    if (m.find("ConsistentTime") != m.end() && !m["ConsistentTime"].empty()) {
      consistentTime = make_shared<long>(boost::any_cast<long>(m["ConsistentTime"]));
    }
    if (m.find("Encryption") != m.end() && !m["Encryption"].empty()) {
      encryption = make_shared<string>(boost::any_cast<string>(m["Encryption"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("ExpectExpireTime") != m.end() && !m["ExpectExpireTime"].empty()) {
      expectExpireTime = make_shared<string>(boost::any_cast<string>(m["ExpectExpireTime"]));
    }
    if (m.find("ExpectExpireType") != m.end() && !m["ExpectExpireType"].empty()) {
      expectExpireType = make_shared<string>(boost::any_cast<string>(m["ExpectExpireType"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("IsAvail") != m.end() && !m["IsAvail"].empty()) {
      isAvail = make_shared<long>(boost::any_cast<long>(m["IsAvail"]));
    }
    if (m.find("PolarSnapshot") != m.end() && !m["PolarSnapshot"].empty()) {
      if (typeid(map<string, boost::any>) == m["PolarSnapshot"].type()) {
        DescribeBackupDataListResponseBodyDataContentPolarSnapshot model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PolarSnapshot"]));
        polarSnapshot = make_shared<DescribeBackupDataListResponseBodyDataContentPolarSnapshot>(model1);
      }
    }
    if (m.find("SupportDeletion") != m.end() && !m["SupportDeletion"].empty()) {
      supportDeletion = make_shared<long>(boost::any_cast<long>(m["SupportDeletion"]));
    }
  }


  virtual ~DescribeBackupDataListResponseBodyDataContent() = default;
};
class DescribeBackupDataListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeBackupDataListResponseBodyDataContent>> content{};
  shared_ptr<string> extra{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalElements{};
  shared_ptr<long> totalPages{};

  DescribeBackupDataListResponseBodyData() {}

  explicit DescribeBackupDataListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      vector<boost::any> temp1;
      for(auto item1:*content){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Content"] = boost::any(temp1);
    }
    if (extra) {
      res["Extra"] = boost::any(*extra);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalElements) {
      res["TotalElements"] = boost::any(*totalElements);
    }
    if (totalPages) {
      res["TotalPages"] = boost::any(*totalPages);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(vector<boost::any>) == m["Content"].type()) {
        vector<DescribeBackupDataListResponseBodyDataContent> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Content"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeBackupDataListResponseBodyDataContent model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        content = make_shared<vector<DescribeBackupDataListResponseBodyDataContent>>(expect1);
      }
    }
    if (m.find("Extra") != m.end() && !m["Extra"].empty()) {
      extra = make_shared<string>(boost::any_cast<string>(m["Extra"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalElements") != m.end() && !m["TotalElements"].empty()) {
      totalElements = make_shared<long>(boost::any_cast<long>(m["TotalElements"]));
    }
    if (m.find("TotalPages") != m.end() && !m["TotalPages"].empty()) {
      totalPages = make_shared<long>(boost::any_cast<long>(m["TotalPages"]));
    }
  }


  virtual ~DescribeBackupDataListResponseBodyData() = default;
};
class DescribeBackupDataListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DescribeBackupDataListResponseBodyData> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  DescribeBackupDataListResponseBody() {}

  explicit DescribeBackupDataListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
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
        DescribeBackupDataListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeBackupDataListResponseBodyData>(model1);
      }
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
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


  virtual ~DescribeBackupDataListResponseBody() = default;
};
class DescribeBackupDataListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeBackupDataListResponseBody> body{};

  DescribeBackupDataListResponse() {}

  explicit DescribeBackupDataListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeBackupDataListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeBackupDataListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeBackupDataListResponse() = default;
};
class DescribeBackupPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceName{};
  shared_ptr<string> regionCode{};

  DescribeBackupPolicyRequest() {}

  explicit DescribeBackupPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (regionCode) {
      res["RegionCode"] = boost::any(*regionCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("RegionCode") != m.end() && !m["RegionCode"].empty()) {
      regionCode = make_shared<string>(boost::any_cast<string>(m["RegionCode"]));
    }
  }


  virtual ~DescribeBackupPolicyRequest() = default;
};
class DescribeBackupPolicyResponseBodyDataAdvanceDataPolicies : public Darabonba::Model {
public:
  shared_ptr<bool> autoCreated{};
  shared_ptr<string> bakType{};
  shared_ptr<string> destRegion{};
  shared_ptr<string> destType{};
  shared_ptr<string> dumpAction{};
  shared_ptr<string> filterKey{};
  shared_ptr<string> filterType{};
  shared_ptr<string> filterValue{};
  shared_ptr<string> policyId{};
  shared_ptr<string> retentionType{};
  shared_ptr<string> retentionValue{};
  shared_ptr<string> srcRegion{};
  shared_ptr<string> srcType{};
  shared_ptr<string> strategyId{};

  DescribeBackupPolicyResponseBodyDataAdvanceDataPolicies() {}

  explicit DescribeBackupPolicyResponseBodyDataAdvanceDataPolicies(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoCreated) {
      res["AutoCreated"] = boost::any(*autoCreated);
    }
    if (bakType) {
      res["BakType"] = boost::any(*bakType);
    }
    if (destRegion) {
      res["DestRegion"] = boost::any(*destRegion);
    }
    if (destType) {
      res["DestType"] = boost::any(*destType);
    }
    if (dumpAction) {
      res["DumpAction"] = boost::any(*dumpAction);
    }
    if (filterKey) {
      res["FilterKey"] = boost::any(*filterKey);
    }
    if (filterType) {
      res["FilterType"] = boost::any(*filterType);
    }
    if (filterValue) {
      res["FilterValue"] = boost::any(*filterValue);
    }
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    if (retentionType) {
      res["RetentionType"] = boost::any(*retentionType);
    }
    if (retentionValue) {
      res["RetentionValue"] = boost::any(*retentionValue);
    }
    if (srcRegion) {
      res["SrcRegion"] = boost::any(*srcRegion);
    }
    if (srcType) {
      res["SrcType"] = boost::any(*srcType);
    }
    if (strategyId) {
      res["StrategyId"] = boost::any(*strategyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoCreated") != m.end() && !m["AutoCreated"].empty()) {
      autoCreated = make_shared<bool>(boost::any_cast<bool>(m["AutoCreated"]));
    }
    if (m.find("BakType") != m.end() && !m["BakType"].empty()) {
      bakType = make_shared<string>(boost::any_cast<string>(m["BakType"]));
    }
    if (m.find("DestRegion") != m.end() && !m["DestRegion"].empty()) {
      destRegion = make_shared<string>(boost::any_cast<string>(m["DestRegion"]));
    }
    if (m.find("DestType") != m.end() && !m["DestType"].empty()) {
      destType = make_shared<string>(boost::any_cast<string>(m["DestType"]));
    }
    if (m.find("DumpAction") != m.end() && !m["DumpAction"].empty()) {
      dumpAction = make_shared<string>(boost::any_cast<string>(m["DumpAction"]));
    }
    if (m.find("FilterKey") != m.end() && !m["FilterKey"].empty()) {
      filterKey = make_shared<string>(boost::any_cast<string>(m["FilterKey"]));
    }
    if (m.find("FilterType") != m.end() && !m["FilterType"].empty()) {
      filterType = make_shared<string>(boost::any_cast<string>(m["FilterType"]));
    }
    if (m.find("FilterValue") != m.end() && !m["FilterValue"].empty()) {
      filterValue = make_shared<string>(boost::any_cast<string>(m["FilterValue"]));
    }
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
    if (m.find("RetentionType") != m.end() && !m["RetentionType"].empty()) {
      retentionType = make_shared<string>(boost::any_cast<string>(m["RetentionType"]));
    }
    if (m.find("RetentionValue") != m.end() && !m["RetentionValue"].empty()) {
      retentionValue = make_shared<string>(boost::any_cast<string>(m["RetentionValue"]));
    }
    if (m.find("SrcRegion") != m.end() && !m["SrcRegion"].empty()) {
      srcRegion = make_shared<string>(boost::any_cast<string>(m["SrcRegion"]));
    }
    if (m.find("SrcType") != m.end() && !m["SrcType"].empty()) {
      srcType = make_shared<string>(boost::any_cast<string>(m["SrcType"]));
    }
    if (m.find("StrategyId") != m.end() && !m["StrategyId"].empty()) {
      strategyId = make_shared<string>(boost::any_cast<string>(m["StrategyId"]));
    }
  }


  virtual ~DescribeBackupPolicyResponseBodyDataAdvanceDataPolicies() = default;
};
class DescribeBackupPolicyResponseBodyDataAdvanceLogPolicies : public Darabonba::Model {
public:
  shared_ptr<string> destRegion{};
  shared_ptr<string> destType{};
  shared_ptr<bool> enableLogBackup{};
  shared_ptr<string> logRetentionType{};
  shared_ptr<string> logRetentionValue{};
  shared_ptr<string> srcRegion{};
  shared_ptr<string> srcType{};
  shared_ptr<string> strategyId{};

  DescribeBackupPolicyResponseBodyDataAdvanceLogPolicies() {}

  explicit DescribeBackupPolicyResponseBodyDataAdvanceLogPolicies(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (destRegion) {
      res["DestRegion"] = boost::any(*destRegion);
    }
    if (destType) {
      res["DestType"] = boost::any(*destType);
    }
    if (enableLogBackup) {
      res["EnableLogBackup"] = boost::any(*enableLogBackup);
    }
    if (logRetentionType) {
      res["LogRetentionType"] = boost::any(*logRetentionType);
    }
    if (logRetentionValue) {
      res["LogRetentionValue"] = boost::any(*logRetentionValue);
    }
    if (srcRegion) {
      res["SrcRegion"] = boost::any(*srcRegion);
    }
    if (srcType) {
      res["SrcType"] = boost::any(*srcType);
    }
    if (strategyId) {
      res["StrategyId"] = boost::any(*strategyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DestRegion") != m.end() && !m["DestRegion"].empty()) {
      destRegion = make_shared<string>(boost::any_cast<string>(m["DestRegion"]));
    }
    if (m.find("DestType") != m.end() && !m["DestType"].empty()) {
      destType = make_shared<string>(boost::any_cast<string>(m["DestType"]));
    }
    if (m.find("EnableLogBackup") != m.end() && !m["EnableLogBackup"].empty()) {
      enableLogBackup = make_shared<bool>(boost::any_cast<bool>(m["EnableLogBackup"]));
    }
    if (m.find("LogRetentionType") != m.end() && !m["LogRetentionType"].empty()) {
      logRetentionType = make_shared<string>(boost::any_cast<string>(m["LogRetentionType"]));
    }
    if (m.find("LogRetentionValue") != m.end() && !m["LogRetentionValue"].empty()) {
      logRetentionValue = make_shared<string>(boost::any_cast<string>(m["LogRetentionValue"]));
    }
    if (m.find("SrcRegion") != m.end() && !m["SrcRegion"].empty()) {
      srcRegion = make_shared<string>(boost::any_cast<string>(m["SrcRegion"]));
    }
    if (m.find("SrcType") != m.end() && !m["SrcType"].empty()) {
      srcType = make_shared<string>(boost::any_cast<string>(m["SrcType"]));
    }
    if (m.find("StrategyId") != m.end() && !m["StrategyId"].empty()) {
      strategyId = make_shared<string>(boost::any_cast<string>(m["StrategyId"]));
    }
  }


  virtual ~DescribeBackupPolicyResponseBodyDataAdvanceLogPolicies() = default;
};
class DescribeBackupPolicyResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeBackupPolicyResponseBodyDataAdvanceDataPolicies>> advanceDataPolicies{};
  shared_ptr<vector<DescribeBackupPolicyResponseBodyDataAdvanceLogPolicies>> advanceLogPolicies{};
  shared_ptr<string> backupMethod{};
  shared_ptr<long> backupPriority{};
  shared_ptr<long> backupRetentionPeriod{};
  shared_ptr<string> backupRetentionPolicyOnClusterDeletion{};
  shared_ptr<string> category{};
  shared_ptr<long> enableBackup{};
  shared_ptr<long> enableIncBackup{};
  shared_ptr<long> enableLogBackup{};
  shared_ptr<long> highFrequencyBakInterval{};
  shared_ptr<string> highSpaceUsageProtection{};
  shared_ptr<long> incBackupInterval{};
  shared_ptr<long> localLogRetentionSpace{};
  shared_ptr<string> logBackupLocalRetentionNumber{};
  shared_ptr<long> logBackupRetention{};
  shared_ptr<string> preferredBackupDate{};
  shared_ptr<string> preferredBackupWindow{};
  shared_ptr<string> preferredBackupWindowBegin{};

  DescribeBackupPolicyResponseBodyData() {}

  explicit DescribeBackupPolicyResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (advanceDataPolicies) {
      vector<boost::any> temp1;
      for(auto item1:*advanceDataPolicies){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AdvanceDataPolicies"] = boost::any(temp1);
    }
    if (advanceLogPolicies) {
      vector<boost::any> temp1;
      for(auto item1:*advanceLogPolicies){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AdvanceLogPolicies"] = boost::any(temp1);
    }
    if (backupMethod) {
      res["BackupMethod"] = boost::any(*backupMethod);
    }
    if (backupPriority) {
      res["BackupPriority"] = boost::any(*backupPriority);
    }
    if (backupRetentionPeriod) {
      res["BackupRetentionPeriod"] = boost::any(*backupRetentionPeriod);
    }
    if (backupRetentionPolicyOnClusterDeletion) {
      res["BackupRetentionPolicyOnClusterDeletion"] = boost::any(*backupRetentionPolicyOnClusterDeletion);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (enableBackup) {
      res["EnableBackup"] = boost::any(*enableBackup);
    }
    if (enableIncBackup) {
      res["EnableIncBackup"] = boost::any(*enableIncBackup);
    }
    if (enableLogBackup) {
      res["EnableLogBackup"] = boost::any(*enableLogBackup);
    }
    if (highFrequencyBakInterval) {
      res["HighFrequencyBakInterval"] = boost::any(*highFrequencyBakInterval);
    }
    if (highSpaceUsageProtection) {
      res["HighSpaceUsageProtection"] = boost::any(*highSpaceUsageProtection);
    }
    if (incBackupInterval) {
      res["IncBackupInterval"] = boost::any(*incBackupInterval);
    }
    if (localLogRetentionSpace) {
      res["LocalLogRetentionSpace"] = boost::any(*localLogRetentionSpace);
    }
    if (logBackupLocalRetentionNumber) {
      res["LogBackupLocalRetentionNumber"] = boost::any(*logBackupLocalRetentionNumber);
    }
    if (logBackupRetention) {
      res["LogBackupRetention"] = boost::any(*logBackupRetention);
    }
    if (preferredBackupDate) {
      res["PreferredBackupDate"] = boost::any(*preferredBackupDate);
    }
    if (preferredBackupWindow) {
      res["PreferredBackupWindow"] = boost::any(*preferredBackupWindow);
    }
    if (preferredBackupWindowBegin) {
      res["PreferredBackupWindowBegin"] = boost::any(*preferredBackupWindowBegin);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdvanceDataPolicies") != m.end() && !m["AdvanceDataPolicies"].empty()) {
      if (typeid(vector<boost::any>) == m["AdvanceDataPolicies"].type()) {
        vector<DescribeBackupPolicyResponseBodyDataAdvanceDataPolicies> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AdvanceDataPolicies"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeBackupPolicyResponseBodyDataAdvanceDataPolicies model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        advanceDataPolicies = make_shared<vector<DescribeBackupPolicyResponseBodyDataAdvanceDataPolicies>>(expect1);
      }
    }
    if (m.find("AdvanceLogPolicies") != m.end() && !m["AdvanceLogPolicies"].empty()) {
      if (typeid(vector<boost::any>) == m["AdvanceLogPolicies"].type()) {
        vector<DescribeBackupPolicyResponseBodyDataAdvanceLogPolicies> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AdvanceLogPolicies"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeBackupPolicyResponseBodyDataAdvanceLogPolicies model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        advanceLogPolicies = make_shared<vector<DescribeBackupPolicyResponseBodyDataAdvanceLogPolicies>>(expect1);
      }
    }
    if (m.find("BackupMethod") != m.end() && !m["BackupMethod"].empty()) {
      backupMethod = make_shared<string>(boost::any_cast<string>(m["BackupMethod"]));
    }
    if (m.find("BackupPriority") != m.end() && !m["BackupPriority"].empty()) {
      backupPriority = make_shared<long>(boost::any_cast<long>(m["BackupPriority"]));
    }
    if (m.find("BackupRetentionPeriod") != m.end() && !m["BackupRetentionPeriod"].empty()) {
      backupRetentionPeriod = make_shared<long>(boost::any_cast<long>(m["BackupRetentionPeriod"]));
    }
    if (m.find("BackupRetentionPolicyOnClusterDeletion") != m.end() && !m["BackupRetentionPolicyOnClusterDeletion"].empty()) {
      backupRetentionPolicyOnClusterDeletion = make_shared<string>(boost::any_cast<string>(m["BackupRetentionPolicyOnClusterDeletion"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("EnableBackup") != m.end() && !m["EnableBackup"].empty()) {
      enableBackup = make_shared<long>(boost::any_cast<long>(m["EnableBackup"]));
    }
    if (m.find("EnableIncBackup") != m.end() && !m["EnableIncBackup"].empty()) {
      enableIncBackup = make_shared<long>(boost::any_cast<long>(m["EnableIncBackup"]));
    }
    if (m.find("EnableLogBackup") != m.end() && !m["EnableLogBackup"].empty()) {
      enableLogBackup = make_shared<long>(boost::any_cast<long>(m["EnableLogBackup"]));
    }
    if (m.find("HighFrequencyBakInterval") != m.end() && !m["HighFrequencyBakInterval"].empty()) {
      highFrequencyBakInterval = make_shared<long>(boost::any_cast<long>(m["HighFrequencyBakInterval"]));
    }
    if (m.find("HighSpaceUsageProtection") != m.end() && !m["HighSpaceUsageProtection"].empty()) {
      highSpaceUsageProtection = make_shared<string>(boost::any_cast<string>(m["HighSpaceUsageProtection"]));
    }
    if (m.find("IncBackupInterval") != m.end() && !m["IncBackupInterval"].empty()) {
      incBackupInterval = make_shared<long>(boost::any_cast<long>(m["IncBackupInterval"]));
    }
    if (m.find("LocalLogRetentionSpace") != m.end() && !m["LocalLogRetentionSpace"].empty()) {
      localLogRetentionSpace = make_shared<long>(boost::any_cast<long>(m["LocalLogRetentionSpace"]));
    }
    if (m.find("LogBackupLocalRetentionNumber") != m.end() && !m["LogBackupLocalRetentionNumber"].empty()) {
      logBackupLocalRetentionNumber = make_shared<string>(boost::any_cast<string>(m["LogBackupLocalRetentionNumber"]));
    }
    if (m.find("LogBackupRetention") != m.end() && !m["LogBackupRetention"].empty()) {
      logBackupRetention = make_shared<long>(boost::any_cast<long>(m["LogBackupRetention"]));
    }
    if (m.find("PreferredBackupDate") != m.end() && !m["PreferredBackupDate"].empty()) {
      preferredBackupDate = make_shared<string>(boost::any_cast<string>(m["PreferredBackupDate"]));
    }
    if (m.find("PreferredBackupWindow") != m.end() && !m["PreferredBackupWindow"].empty()) {
      preferredBackupWindow = make_shared<string>(boost::any_cast<string>(m["PreferredBackupWindow"]));
    }
    if (m.find("PreferredBackupWindowBegin") != m.end() && !m["PreferredBackupWindowBegin"].empty()) {
      preferredBackupWindowBegin = make_shared<string>(boost::any_cast<string>(m["PreferredBackupWindowBegin"]));
    }
  }


  virtual ~DescribeBackupPolicyResponseBodyData() = default;
};
class DescribeBackupPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DescribeBackupPolicyResponseBodyData> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  DescribeBackupPolicyResponseBody() {}

  explicit DescribeBackupPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
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
        DescribeBackupPolicyResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeBackupPolicyResponseBodyData>(model1);
      }
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
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


  virtual ~DescribeBackupPolicyResponseBody() = default;
};
class DescribeBackupPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeBackupPolicyResponseBody> body{};

  DescribeBackupPolicyResponse() {}

  explicit DescribeBackupPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeBackupPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeBackupPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeBackupPolicyResponse() = default;
};
class DescribeDBTablesRecoveryBackupSetRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionCode{};

  DescribeDBTablesRecoveryBackupSetRequest() {}

  explicit DescribeDBTablesRecoveryBackupSetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionCode) {
      res["RegionCode"] = boost::any(*regionCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionCode") != m.end() && !m["RegionCode"].empty()) {
      regionCode = make_shared<string>(boost::any_cast<string>(m["RegionCode"]));
    }
  }


  virtual ~DescribeDBTablesRecoveryBackupSetRequest() = default;
};
class DescribeDBTablesRecoveryBackupSetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  DescribeDBTablesRecoveryBackupSetResponseBody() {}

  explicit DescribeDBTablesRecoveryBackupSetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
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


  virtual ~DescribeDBTablesRecoveryBackupSetResponseBody() = default;
};
class DescribeDBTablesRecoveryBackupSetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDBTablesRecoveryBackupSetResponseBody> body{};

  DescribeDBTablesRecoveryBackupSetResponse() {}

  explicit DescribeDBTablesRecoveryBackupSetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDBTablesRecoveryBackupSetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBTablesRecoveryBackupSetResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBTablesRecoveryBackupSetResponse() = default;
};
class DescribeDBTablesRecoveryStateRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionCode{};

  DescribeDBTablesRecoveryStateRequest() {}

  explicit DescribeDBTablesRecoveryStateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionCode) {
      res["RegionCode"] = boost::any(*regionCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionCode") != m.end() && !m["RegionCode"].empty()) {
      regionCode = make_shared<string>(boost::any_cast<string>(m["RegionCode"]));
    }
  }


  virtual ~DescribeDBTablesRecoveryStateRequest() = default;
};
class DescribeDBTablesRecoveryStateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  DescribeDBTablesRecoveryStateResponseBody() {}

  explicit DescribeDBTablesRecoveryStateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
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


  virtual ~DescribeDBTablesRecoveryStateResponseBody() = default;
};
class DescribeDBTablesRecoveryStateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDBTablesRecoveryStateResponseBody> body{};

  DescribeDBTablesRecoveryStateResponse() {}

  explicit DescribeDBTablesRecoveryStateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDBTablesRecoveryStateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBTablesRecoveryStateResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBTablesRecoveryStateResponse() = default;
};
class DescribeDBTablesRecoveryTimeRangeRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionCode{};

  DescribeDBTablesRecoveryTimeRangeRequest() {}

  explicit DescribeDBTablesRecoveryTimeRangeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionCode) {
      res["RegionCode"] = boost::any(*regionCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionCode") != m.end() && !m["RegionCode"].empty()) {
      regionCode = make_shared<string>(boost::any_cast<string>(m["RegionCode"]));
    }
  }


  virtual ~DescribeDBTablesRecoveryTimeRangeRequest() = default;
};
class DescribeDBTablesRecoveryTimeRangeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  DescribeDBTablesRecoveryTimeRangeResponseBody() {}

  explicit DescribeDBTablesRecoveryTimeRangeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
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


  virtual ~DescribeDBTablesRecoveryTimeRangeResponseBody() = default;
};
class DescribeDBTablesRecoveryTimeRangeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDBTablesRecoveryTimeRangeResponseBody> body{};

  DescribeDBTablesRecoveryTimeRangeResponse() {}

  explicit DescribeDBTablesRecoveryTimeRangeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDBTablesRecoveryTimeRangeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBTablesRecoveryTimeRangeResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBTablesRecoveryTimeRangeResponse() = default;
};
class DescribeDownloadBackupSetStorageInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> backupSetId{};
  shared_ptr<string> duration{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> regionCode{};
  shared_ptr<string> taskId{};

  DescribeDownloadBackupSetStorageInfoRequest() {}

  explicit DescribeDownloadBackupSetStorageInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupSetId) {
      res["BackupSetId"] = boost::any(*backupSetId);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (regionCode) {
      res["RegionCode"] = boost::any(*regionCode);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupSetId") != m.end() && !m["BackupSetId"].empty()) {
      backupSetId = make_shared<string>(boost::any_cast<string>(m["BackupSetId"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<string>(boost::any_cast<string>(m["Duration"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("RegionCode") != m.end() && !m["RegionCode"].empty()) {
      regionCode = make_shared<string>(boost::any_cast<string>(m["RegionCode"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~DescribeDownloadBackupSetStorageInfoRequest() = default;
};
class DescribeDownloadBackupSetStorageInfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> expirationTime{};
  shared_ptr<string> privateUrl{};
  shared_ptr<string> publicUrl{};

  DescribeDownloadBackupSetStorageInfoResponseBodyData() {}

  explicit DescribeDownloadBackupSetStorageInfoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (expirationTime) {
      res["ExpirationTime"] = boost::any(*expirationTime);
    }
    if (privateUrl) {
      res["PrivateUrl"] = boost::any(*privateUrl);
    }
    if (publicUrl) {
      res["PublicUrl"] = boost::any(*publicUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExpirationTime") != m.end() && !m["ExpirationTime"].empty()) {
      expirationTime = make_shared<long>(boost::any_cast<long>(m["ExpirationTime"]));
    }
    if (m.find("PrivateUrl") != m.end() && !m["PrivateUrl"].empty()) {
      privateUrl = make_shared<string>(boost::any_cast<string>(m["PrivateUrl"]));
    }
    if (m.find("PublicUrl") != m.end() && !m["PublicUrl"].empty()) {
      publicUrl = make_shared<string>(boost::any_cast<string>(m["PublicUrl"]));
    }
  }


  virtual ~DescribeDownloadBackupSetStorageInfoResponseBodyData() = default;
};
class DescribeDownloadBackupSetStorageInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DescribeDownloadBackupSetStorageInfoResponseBodyData> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  DescribeDownloadBackupSetStorageInfoResponseBody() {}

  explicit DescribeDownloadBackupSetStorageInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
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
        DescribeDownloadBackupSetStorageInfoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeDownloadBackupSetStorageInfoResponseBodyData>(model1);
      }
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
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


  virtual ~DescribeDownloadBackupSetStorageInfoResponseBody() = default;
};
class DescribeDownloadBackupSetStorageInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDownloadBackupSetStorageInfoResponseBody> body{};

  DescribeDownloadBackupSetStorageInfoResponse() {}

  explicit DescribeDownloadBackupSetStorageInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDownloadBackupSetStorageInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDownloadBackupSetStorageInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDownloadBackupSetStorageInfoResponse() = default;
};
class DescribeDownloadSupportRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceName{};
  shared_ptr<string> regionCode{};

  DescribeDownloadSupportRequest() {}

  explicit DescribeDownloadSupportRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (regionCode) {
      res["RegionCode"] = boost::any(*regionCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("RegionCode") != m.end() && !m["RegionCode"].empty()) {
      regionCode = make_shared<string>(boost::any_cast<string>(m["RegionCode"]));
    }
  }


  virtual ~DescribeDownloadSupportRequest() = default;
};
class DescribeDownloadSupportResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  DescribeDownloadSupportResponseBody() {}

  explicit DescribeDownloadSupportResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
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


  virtual ~DescribeDownloadSupportResponseBody() = default;
};
class DescribeDownloadSupportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDownloadSupportResponseBody> body{};

  DescribeDownloadSupportResponse() {}

  explicit DescribeDownloadSupportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDownloadSupportResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDownloadSupportResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDownloadSupportResponse() = default;
};
class DescribeDownloadTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> backupSetId{};
  shared_ptr<string> currentPage{};
  shared_ptr<string> datasourceId{};
  shared_ptr<string> endTime{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> orderColumn{};
  shared_ptr<string> orderDirect{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> regionCode{};
  shared_ptr<string> startTime{};
  shared_ptr<string> state{};
  shared_ptr<string> taskType{};

  DescribeDownloadTaskRequest() {}

  explicit DescribeDownloadTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupSetId) {
      res["BackupSetId"] = boost::any(*backupSetId);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (datasourceId) {
      res["DatasourceId"] = boost::any(*datasourceId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (orderColumn) {
      res["OrderColumn"] = boost::any(*orderColumn);
    }
    if (orderDirect) {
      res["OrderDirect"] = boost::any(*orderDirect);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionCode) {
      res["RegionCode"] = boost::any(*regionCode);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupSetId") != m.end() && !m["BackupSetId"].empty()) {
      backupSetId = make_shared<string>(boost::any_cast<string>(m["BackupSetId"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<string>(boost::any_cast<string>(m["CurrentPage"]));
    }
    if (m.find("DatasourceId") != m.end() && !m["DatasourceId"].empty()) {
      datasourceId = make_shared<string>(boost::any_cast<string>(m["DatasourceId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("OrderColumn") != m.end() && !m["OrderColumn"].empty()) {
      orderColumn = make_shared<string>(boost::any_cast<string>(m["OrderColumn"]));
    }
    if (m.find("OrderDirect") != m.end() && !m["OrderDirect"].empty()) {
      orderDirect = make_shared<string>(boost::any_cast<string>(m["OrderDirect"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("RegionCode") != m.end() && !m["RegionCode"].empty()) {
      regionCode = make_shared<string>(boost::any_cast<string>(m["RegionCode"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
  }


  virtual ~DescribeDownloadTaskRequest() = default;
};
class DescribeDownloadTaskResponseBodyDataContentList : public Darabonba::Model {
public:
  shared_ptr<string> backupSetTime{};
  shared_ptr<string> bakSetId{};
  shared_ptr<string> dbList{};
  shared_ptr<string> downloadStatus{};
  shared_ptr<string> exportDataSize{};
  shared_ptr<string> format{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> importDataSize{};
  shared_ptr<string> progress{};
  shared_ptr<string> regionCode{};
  shared_ptr<string> targetPath{};
  shared_ptr<string> targetType{};
  shared_ptr<string> taskId{};

  DescribeDownloadTaskResponseBodyDataContentList() {}

  explicit DescribeDownloadTaskResponseBodyDataContentList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupSetTime) {
      res["BackupSetTime"] = boost::any(*backupSetTime);
    }
    if (bakSetId) {
      res["BakSetId"] = boost::any(*bakSetId);
    }
    if (dbList) {
      res["DbList"] = boost::any(*dbList);
    }
    if (downloadStatus) {
      res["DownloadStatus"] = boost::any(*downloadStatus);
    }
    if (exportDataSize) {
      res["ExportDataSize"] = boost::any(*exportDataSize);
    }
    if (format) {
      res["Format"] = boost::any(*format);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (importDataSize) {
      res["ImportDataSize"] = boost::any(*importDataSize);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (regionCode) {
      res["RegionCode"] = boost::any(*regionCode);
    }
    if (targetPath) {
      res["TargetPath"] = boost::any(*targetPath);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupSetTime") != m.end() && !m["BackupSetTime"].empty()) {
      backupSetTime = make_shared<string>(boost::any_cast<string>(m["BackupSetTime"]));
    }
    if (m.find("BakSetId") != m.end() && !m["BakSetId"].empty()) {
      bakSetId = make_shared<string>(boost::any_cast<string>(m["BakSetId"]));
    }
    if (m.find("DbList") != m.end() && !m["DbList"].empty()) {
      dbList = make_shared<string>(boost::any_cast<string>(m["DbList"]));
    }
    if (m.find("DownloadStatus") != m.end() && !m["DownloadStatus"].empty()) {
      downloadStatus = make_shared<string>(boost::any_cast<string>(m["DownloadStatus"]));
    }
    if (m.find("ExportDataSize") != m.end() && !m["ExportDataSize"].empty()) {
      exportDataSize = make_shared<string>(boost::any_cast<string>(m["ExportDataSize"]));
    }
    if (m.find("Format") != m.end() && !m["Format"].empty()) {
      format = make_shared<string>(boost::any_cast<string>(m["Format"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("ImportDataSize") != m.end() && !m["ImportDataSize"].empty()) {
      importDataSize = make_shared<string>(boost::any_cast<string>(m["ImportDataSize"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<string>(boost::any_cast<string>(m["Progress"]));
    }
    if (m.find("RegionCode") != m.end() && !m["RegionCode"].empty()) {
      regionCode = make_shared<string>(boost::any_cast<string>(m["RegionCode"]));
    }
    if (m.find("TargetPath") != m.end() && !m["TargetPath"].empty()) {
      targetPath = make_shared<string>(boost::any_cast<string>(m["TargetPath"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~DescribeDownloadTaskResponseBodyDataContentList() = default;
};
class DescribeDownloadTaskResponseBodyDataContent : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDownloadTaskResponseBodyDataContentList>> list{};

  DescribeDownloadTaskResponseBodyDataContent() {}

  explicit DescribeDownloadTaskResponseBodyDataContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["List"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(vector<boost::any>) == m["List"].type()) {
        vector<DescribeDownloadTaskResponseBodyDataContentList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["List"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDownloadTaskResponseBodyDataContentList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<DescribeDownloadTaskResponseBodyDataContentList>>(expect1);
      }
    }
  }


  virtual ~DescribeDownloadTaskResponseBodyDataContent() = default;
};
class DescribeDownloadTaskResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<DescribeDownloadTaskResponseBodyDataContent> content{};
  shared_ptr<string> extra{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalElements{};
  shared_ptr<long> totalPages{};

  DescribeDownloadTaskResponseBodyData() {}

  explicit DescribeDownloadTaskResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (extra) {
      res["Extra"] = boost::any(*extra);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalElements) {
      res["TotalElements"] = boost::any(*totalElements);
    }
    if (totalPages) {
      res["TotalPages"] = boost::any(*totalPages);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        DescribeDownloadTaskResponseBodyDataContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<DescribeDownloadTaskResponseBodyDataContent>(model1);
      }
    }
    if (m.find("Extra") != m.end() && !m["Extra"].empty()) {
      extra = make_shared<string>(boost::any_cast<string>(m["Extra"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalElements") != m.end() && !m["TotalElements"].empty()) {
      totalElements = make_shared<long>(boost::any_cast<long>(m["TotalElements"]));
    }
    if (m.find("TotalPages") != m.end() && !m["TotalPages"].empty()) {
      totalPages = make_shared<long>(boost::any_cast<long>(m["TotalPages"]));
    }
  }


  virtual ~DescribeDownloadTaskResponseBodyData() = default;
};
class DescribeDownloadTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DescribeDownloadTaskResponseBodyData> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  DescribeDownloadTaskResponseBody() {}

  explicit DescribeDownloadTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
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
        DescribeDownloadTaskResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeDownloadTaskResponseBodyData>(model1);
      }
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
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


  virtual ~DescribeDownloadTaskResponseBody() = default;
};
class DescribeDownloadTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDownloadTaskResponseBody> body{};

  DescribeDownloadTaskResponse() {}

  explicit DescribeDownloadTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDownloadTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDownloadTaskResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDownloadTaskResponse() = default;
};
class DescribeSandboxBackupSetsRequest : public Darabonba::Model {
public:
  shared_ptr<string> backupPlanId{};
  shared_ptr<string> backupSetId{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};

  DescribeSandboxBackupSetsRequest() {}

  explicit DescribeSandboxBackupSetsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupPlanId) {
      res["BackupPlanId"] = boost::any(*backupPlanId);
    }
    if (backupSetId) {
      res["BackupSetId"] = boost::any(*backupSetId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupPlanId") != m.end() && !m["BackupPlanId"].empty()) {
      backupPlanId = make_shared<string>(boost::any_cast<string>(m["BackupPlanId"]));
    }
    if (m.find("BackupSetId") != m.end() && !m["BackupSetId"].empty()) {
      backupSetId = make_shared<string>(boost::any_cast<string>(m["BackupSetId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
  }


  virtual ~DescribeSandboxBackupSetsRequest() = default;
};
class DescribeSandboxBackupSetsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  DescribeSandboxBackupSetsResponseBody() {}

  explicit DescribeSandboxBackupSetsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
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


  virtual ~DescribeSandboxBackupSetsResponseBody() = default;
};
class DescribeSandboxBackupSetsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSandboxBackupSetsResponseBody> body{};

  DescribeSandboxBackupSetsResponse() {}

  explicit DescribeSandboxBackupSetsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeSandboxBackupSetsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSandboxBackupSetsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSandboxBackupSetsResponse() = default;
};
class DescribeSandboxInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<string> backupPlanId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};

  DescribeSandboxInstancesRequest() {}

  explicit DescribeSandboxInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupPlanId) {
      res["BackupPlanId"] = boost::any(*backupPlanId);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupPlanId") != m.end() && !m["BackupPlanId"].empty()) {
      backupPlanId = make_shared<string>(boost::any_cast<string>(m["BackupPlanId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
  }


  virtual ~DescribeSandboxInstancesRequest() = default;
};
class DescribeSandboxInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  DescribeSandboxInstancesResponseBody() {}

  explicit DescribeSandboxInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
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


  virtual ~DescribeSandboxInstancesResponseBody() = default;
};
class DescribeSandboxInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSandboxInstancesResponseBody> body{};

  DescribeSandboxInstancesResponse() {}

  explicit DescribeSandboxInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeSandboxInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSandboxInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSandboxInstancesResponse() = default;
};
class DescribeSandboxRecoveryTimeRequest : public Darabonba::Model {
public:
  shared_ptr<string> backupPlanId{};

  DescribeSandboxRecoveryTimeRequest() {}

  explicit DescribeSandboxRecoveryTimeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupPlanId) {
      res["BackupPlanId"] = boost::any(*backupPlanId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupPlanId") != m.end() && !m["BackupPlanId"].empty()) {
      backupPlanId = make_shared<string>(boost::any_cast<string>(m["BackupPlanId"]));
    }
  }


  virtual ~DescribeSandboxRecoveryTimeRequest() = default;
};
class DescribeSandboxRecoveryTimeResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> backupPlanId{};
  shared_ptr<string> recoveryBeginTime{};
  shared_ptr<string> recoveryEndTime{};

  DescribeSandboxRecoveryTimeResponseBodyData() {}

  explicit DescribeSandboxRecoveryTimeResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupPlanId) {
      res["BackupPlanId"] = boost::any(*backupPlanId);
    }
    if (recoveryBeginTime) {
      res["RecoveryBeginTime"] = boost::any(*recoveryBeginTime);
    }
    if (recoveryEndTime) {
      res["RecoveryEndTime"] = boost::any(*recoveryEndTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupPlanId") != m.end() && !m["BackupPlanId"].empty()) {
      backupPlanId = make_shared<string>(boost::any_cast<string>(m["BackupPlanId"]));
    }
    if (m.find("RecoveryBeginTime") != m.end() && !m["RecoveryBeginTime"].empty()) {
      recoveryBeginTime = make_shared<string>(boost::any_cast<string>(m["RecoveryBeginTime"]));
    }
    if (m.find("RecoveryEndTime") != m.end() && !m["RecoveryEndTime"].empty()) {
      recoveryEndTime = make_shared<string>(boost::any_cast<string>(m["RecoveryEndTime"]));
    }
  }


  virtual ~DescribeSandboxRecoveryTimeResponseBodyData() = default;
};
class DescribeSandboxRecoveryTimeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DescribeSandboxRecoveryTimeResponseBodyData> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  DescribeSandboxRecoveryTimeResponseBody() {}

  explicit DescribeSandboxRecoveryTimeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
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
        DescribeSandboxRecoveryTimeResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeSandboxRecoveryTimeResponseBodyData>(model1);
      }
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
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


  virtual ~DescribeSandboxRecoveryTimeResponseBody() = default;
};
class DescribeSandboxRecoveryTimeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSandboxRecoveryTimeResponseBody> body{};

  DescribeSandboxRecoveryTimeResponse() {}

  explicit DescribeSandboxRecoveryTimeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeSandboxRecoveryTimeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSandboxRecoveryTimeResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSandboxRecoveryTimeResponse() = default;
};
class ModifyDBTablesRecoveryStateRequest : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionCode{};
  shared_ptr<string> retention{};

  ModifyDBTablesRecoveryStateRequest() {}

  explicit ModifyDBTablesRecoveryStateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionCode) {
      res["RegionCode"] = boost::any(*regionCode);
    }
    if (retention) {
      res["Retention"] = boost::any(*retention);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionCode") != m.end() && !m["RegionCode"].empty()) {
      regionCode = make_shared<string>(boost::any_cast<string>(m["RegionCode"]));
    }
    if (m.find("Retention") != m.end() && !m["Retention"].empty()) {
      retention = make_shared<string>(boost::any_cast<string>(m["Retention"]));
    }
  }


  virtual ~ModifyDBTablesRecoveryStateRequest() = default;
};
class ModifyDBTablesRecoveryStateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  ModifyDBTablesRecoveryStateResponseBody() {}

  explicit ModifyDBTablesRecoveryStateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
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


  virtual ~ModifyDBTablesRecoveryStateResponseBody() = default;
};
class ModifyDBTablesRecoveryStateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyDBTablesRecoveryStateResponseBody> body{};

  ModifyDBTablesRecoveryStateResponse() {}

  explicit ModifyDBTablesRecoveryStateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyDBTablesRecoveryStateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDBTablesRecoveryStateResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDBTablesRecoveryStateResponse() = default;
};
class SupportDBTableRecoveryRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionCode{};

  SupportDBTableRecoveryRequest() {}

  explicit SupportDBTableRecoveryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionCode) {
      res["RegionCode"] = boost::any(*regionCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionCode") != m.end() && !m["RegionCode"].empty()) {
      regionCode = make_shared<string>(boost::any_cast<string>(m["RegionCode"]));
    }
  }


  virtual ~SupportDBTableRecoveryRequest() = default;
};
class SupportDBTableRecoveryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  SupportDBTableRecoveryResponseBody() {}

  explicit SupportDBTableRecoveryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
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


  virtual ~SupportDBTableRecoveryResponseBody() = default;
};
class SupportDBTableRecoveryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SupportDBTableRecoveryResponseBody> body{};

  SupportDBTableRecoveryResponse() {}

  explicit SupportDBTableRecoveryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SupportDBTableRecoveryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SupportDBTableRecoveryResponseBody>(model1);
      }
    }
  }


  virtual ~SupportDBTableRecoveryResponse() = default;
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
  ChangeResourceGroupResponse changeResourceGroupWithOptions(shared_ptr<ChangeResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChangeResourceGroupResponse changeResourceGroup(shared_ptr<ChangeResourceGroupRequest> request);
  CreateDownloadResponse createDownloadWithOptions(shared_ptr<CreateDownloadRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDownloadResponse createDownload(shared_ptr<CreateDownloadRequest> request);
  DeleteSandboxInstanceResponse deleteSandboxInstanceWithOptions(shared_ptr<DeleteSandboxInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteSandboxInstanceResponse deleteSandboxInstance(shared_ptr<DeleteSandboxInstanceRequest> request);
  DescribeBackupDataListResponse describeBackupDataListWithOptions(shared_ptr<DescribeBackupDataListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeBackupDataListResponse describeBackupDataList(shared_ptr<DescribeBackupDataListRequest> request);
  DescribeBackupPolicyResponse describeBackupPolicyWithOptions(shared_ptr<DescribeBackupPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeBackupPolicyResponse describeBackupPolicy(shared_ptr<DescribeBackupPolicyRequest> request);
  DescribeDBTablesRecoveryBackupSetResponse describeDBTablesRecoveryBackupSetWithOptions(shared_ptr<DescribeDBTablesRecoveryBackupSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBTablesRecoveryBackupSetResponse describeDBTablesRecoveryBackupSet(shared_ptr<DescribeDBTablesRecoveryBackupSetRequest> request);
  DescribeDBTablesRecoveryStateResponse describeDBTablesRecoveryStateWithOptions(shared_ptr<DescribeDBTablesRecoveryStateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBTablesRecoveryStateResponse describeDBTablesRecoveryState(shared_ptr<DescribeDBTablesRecoveryStateRequest> request);
  DescribeDBTablesRecoveryTimeRangeResponse describeDBTablesRecoveryTimeRangeWithOptions(shared_ptr<DescribeDBTablesRecoveryTimeRangeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBTablesRecoveryTimeRangeResponse describeDBTablesRecoveryTimeRange(shared_ptr<DescribeDBTablesRecoveryTimeRangeRequest> request);
  DescribeDownloadBackupSetStorageInfoResponse describeDownloadBackupSetStorageInfoWithOptions(shared_ptr<DescribeDownloadBackupSetStorageInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDownloadBackupSetStorageInfoResponse describeDownloadBackupSetStorageInfo(shared_ptr<DescribeDownloadBackupSetStorageInfoRequest> request);
  DescribeDownloadSupportResponse describeDownloadSupportWithOptions(shared_ptr<DescribeDownloadSupportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDownloadSupportResponse describeDownloadSupport(shared_ptr<DescribeDownloadSupportRequest> request);
  DescribeDownloadTaskResponse describeDownloadTaskWithOptions(shared_ptr<DescribeDownloadTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDownloadTaskResponse describeDownloadTask(shared_ptr<DescribeDownloadTaskRequest> request);
  DescribeSandboxBackupSetsResponse describeSandboxBackupSetsWithOptions(shared_ptr<DescribeSandboxBackupSetsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSandboxBackupSetsResponse describeSandboxBackupSets(shared_ptr<DescribeSandboxBackupSetsRequest> request);
  DescribeSandboxInstancesResponse describeSandboxInstancesWithOptions(shared_ptr<DescribeSandboxInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSandboxInstancesResponse describeSandboxInstances(shared_ptr<DescribeSandboxInstancesRequest> request);
  DescribeSandboxRecoveryTimeResponse describeSandboxRecoveryTimeWithOptions(shared_ptr<DescribeSandboxRecoveryTimeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSandboxRecoveryTimeResponse describeSandboxRecoveryTime(shared_ptr<DescribeSandboxRecoveryTimeRequest> request);
  ModifyDBTablesRecoveryStateResponse modifyDBTablesRecoveryStateWithOptions(shared_ptr<ModifyDBTablesRecoveryStateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDBTablesRecoveryStateResponse modifyDBTablesRecoveryState(shared_ptr<ModifyDBTablesRecoveryStateRequest> request);
  SupportDBTableRecoveryResponse supportDBTableRecoveryWithOptions(shared_ptr<SupportDBTableRecoveryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SupportDBTableRecoveryResponse supportDBTableRecovery(shared_ptr<SupportDBTableRecoveryRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Dbs20210101

#endif
