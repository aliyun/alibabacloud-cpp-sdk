// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_DBS20210101_H_
#define ALIBABACLOUD_DBS20210101_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Dbs20210101 {
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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
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
class CreateSandboxInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> backupPlanId{};
  shared_ptr<string> backupSetId{};
  shared_ptr<string> restoreTime{};
  shared_ptr<string> sandboxInstanceName{};
  shared_ptr<string> sandboxPassword{};
  shared_ptr<string> sandboxSpecification{};
  shared_ptr<string> sandboxType{};
  shared_ptr<string> sandboxUser{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vpcSwitchId{};

  CreateSandboxInstanceRequest() {}

  explicit CreateSandboxInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (restoreTime) {
      res["RestoreTime"] = boost::any(*restoreTime);
    }
    if (sandboxInstanceName) {
      res["SandboxInstanceName"] = boost::any(*sandboxInstanceName);
    }
    if (sandboxPassword) {
      res["SandboxPassword"] = boost::any(*sandboxPassword);
    }
    if (sandboxSpecification) {
      res["SandboxSpecification"] = boost::any(*sandboxSpecification);
    }
    if (sandboxType) {
      res["SandboxType"] = boost::any(*sandboxType);
    }
    if (sandboxUser) {
      res["SandboxUser"] = boost::any(*sandboxUser);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vpcSwitchId) {
      res["VpcSwitchId"] = boost::any(*vpcSwitchId);
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
    if (m.find("RestoreTime") != m.end() && !m["RestoreTime"].empty()) {
      restoreTime = make_shared<string>(boost::any_cast<string>(m["RestoreTime"]));
    }
    if (m.find("SandboxInstanceName") != m.end() && !m["SandboxInstanceName"].empty()) {
      sandboxInstanceName = make_shared<string>(boost::any_cast<string>(m["SandboxInstanceName"]));
    }
    if (m.find("SandboxPassword") != m.end() && !m["SandboxPassword"].empty()) {
      sandboxPassword = make_shared<string>(boost::any_cast<string>(m["SandboxPassword"]));
    }
    if (m.find("SandboxSpecification") != m.end() && !m["SandboxSpecification"].empty()) {
      sandboxSpecification = make_shared<string>(boost::any_cast<string>(m["SandboxSpecification"]));
    }
    if (m.find("SandboxType") != m.end() && !m["SandboxType"].empty()) {
      sandboxType = make_shared<string>(boost::any_cast<string>(m["SandboxType"]));
    }
    if (m.find("SandboxUser") != m.end() && !m["SandboxUser"].empty()) {
      sandboxUser = make_shared<string>(boost::any_cast<string>(m["SandboxUser"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VpcSwitchId") != m.end() && !m["VpcSwitchId"].empty()) {
      vpcSwitchId = make_shared<string>(boost::any_cast<string>(m["VpcSwitchId"]));
    }
  }


  virtual ~CreateSandboxInstanceRequest() = default;
};
class CreateSandboxInstanceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> backupPlanId{};
  shared_ptr<string> instanceId{};

  CreateSandboxInstanceResponseBodyData() {}

  explicit CreateSandboxInstanceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupPlanId") != m.end() && !m["BackupPlanId"].empty()) {
      backupPlanId = make_shared<string>(boost::any_cast<string>(m["BackupPlanId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~CreateSandboxInstanceResponseBodyData() = default;
};
class CreateSandboxInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateSandboxInstanceResponseBodyData> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  CreateSandboxInstanceResponseBody() {}

  explicit CreateSandboxInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateSandboxInstanceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateSandboxInstanceResponseBodyData>(model1);
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


  virtual ~CreateSandboxInstanceResponseBody() = default;
};
class CreateSandboxInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateSandboxInstanceResponseBody> body{};

  CreateSandboxInstanceResponse() {}

  explicit CreateSandboxInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateSandboxInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSandboxInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSandboxInstanceResponse() = default;
};
class DeleteSandboxInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> backupPlanId{};
  shared_ptr<string> instanceId{};

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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupPlanId") != m.end() && !m["BackupPlanId"].empty()) {
      backupPlanId = make_shared<string>(boost::any_cast<string>(m["BackupPlanId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
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
class DescribeDBTablesRecoveryBackupSetRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionCode{};
  shared_ptr<string> regionId{};

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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
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
  shared_ptr<string> regionId{};

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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
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
  shared_ptr<string> regionId{};

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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
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
  shared_ptr<string> regionId{};
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
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
  shared_ptr<string> regionId{};

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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
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
  CreateDownloadResponse createDownloadWithOptions(shared_ptr<CreateDownloadRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDownloadResponse createDownload(shared_ptr<CreateDownloadRequest> request);
  CreateSandboxInstanceResponse createSandboxInstanceWithOptions(shared_ptr<CreateSandboxInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSandboxInstanceResponse createSandboxInstance(shared_ptr<CreateSandboxInstanceRequest> request);
  DeleteSandboxInstanceResponse deleteSandboxInstanceWithOptions(shared_ptr<DeleteSandboxInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteSandboxInstanceResponse deleteSandboxInstance(shared_ptr<DeleteSandboxInstanceRequest> request);
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
