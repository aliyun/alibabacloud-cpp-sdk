// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_DBS20190306_H_
#define ALIBABACLOUD_DBS20190306_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Dbs20190306 {
class ConfigureBackupPlanRequest : public Darabonba::Model {
public:
  shared_ptr<bool> autoStartBackup{};
  shared_ptr<long> backupGatewayId{};
  shared_ptr<long> backupLogIntervalSeconds{};
  shared_ptr<string> backupObjects{};
  shared_ptr<string> backupPeriod{};
  shared_ptr<string> backupPlanId{};
  shared_ptr<string> backupPlanName{};
  shared_ptr<long> backupRateLimit{};
  shared_ptr<long> backupRetentionPeriod{};
  shared_ptr<long> backupSpeedLimit{};
  shared_ptr<string> backupStartTime{};
  shared_ptr<string> backupStorageType{};
  shared_ptr<string> backupStrategyType{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> crossAliyunId{};
  shared_ptr<string> crossRoleName{};
  shared_ptr<long> duplicationArchivePeriod{};
  shared_ptr<long> duplicationInfrequentAccessPeriod{};
  shared_ptr<bool> enableBackupLog{};
  shared_ptr<string> OSSBucketName{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> sourceEndpointDatabaseName{};
  shared_ptr<string> sourceEndpointIP{};
  shared_ptr<string> sourceEndpointInstanceID{};
  shared_ptr<string> sourceEndpointInstanceType{};
  shared_ptr<string> sourceEndpointOracleSID{};
  shared_ptr<string> sourceEndpointPassword{};
  shared_ptr<long> sourceEndpointPort{};
  shared_ptr<string> sourceEndpointRegion{};
  shared_ptr<string> sourceEndpointUserName{};

  ConfigureBackupPlanRequest() {}

  explicit ConfigureBackupPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoStartBackup) {
      res["AutoStartBackup"] = boost::any(*autoStartBackup);
    }
    if (backupGatewayId) {
      res["BackupGatewayId"] = boost::any(*backupGatewayId);
    }
    if (backupLogIntervalSeconds) {
      res["BackupLogIntervalSeconds"] = boost::any(*backupLogIntervalSeconds);
    }
    if (backupObjects) {
      res["BackupObjects"] = boost::any(*backupObjects);
    }
    if (backupPeriod) {
      res["BackupPeriod"] = boost::any(*backupPeriod);
    }
    if (backupPlanId) {
      res["BackupPlanId"] = boost::any(*backupPlanId);
    }
    if (backupPlanName) {
      res["BackupPlanName"] = boost::any(*backupPlanName);
    }
    if (backupRateLimit) {
      res["BackupRateLimit"] = boost::any(*backupRateLimit);
    }
    if (backupRetentionPeriod) {
      res["BackupRetentionPeriod"] = boost::any(*backupRetentionPeriod);
    }
    if (backupSpeedLimit) {
      res["BackupSpeedLimit"] = boost::any(*backupSpeedLimit);
    }
    if (backupStartTime) {
      res["BackupStartTime"] = boost::any(*backupStartTime);
    }
    if (backupStorageType) {
      res["BackupStorageType"] = boost::any(*backupStorageType);
    }
    if (backupStrategyType) {
      res["BackupStrategyType"] = boost::any(*backupStrategyType);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (crossAliyunId) {
      res["CrossAliyunId"] = boost::any(*crossAliyunId);
    }
    if (crossRoleName) {
      res["CrossRoleName"] = boost::any(*crossRoleName);
    }
    if (duplicationArchivePeriod) {
      res["DuplicationArchivePeriod"] = boost::any(*duplicationArchivePeriod);
    }
    if (duplicationInfrequentAccessPeriod) {
      res["DuplicationInfrequentAccessPeriod"] = boost::any(*duplicationInfrequentAccessPeriod);
    }
    if (enableBackupLog) {
      res["EnableBackupLog"] = boost::any(*enableBackupLog);
    }
    if (OSSBucketName) {
      res["OSSBucketName"] = boost::any(*OSSBucketName);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (sourceEndpointDatabaseName) {
      res["SourceEndpointDatabaseName"] = boost::any(*sourceEndpointDatabaseName);
    }
    if (sourceEndpointIP) {
      res["SourceEndpointIP"] = boost::any(*sourceEndpointIP);
    }
    if (sourceEndpointInstanceID) {
      res["SourceEndpointInstanceID"] = boost::any(*sourceEndpointInstanceID);
    }
    if (sourceEndpointInstanceType) {
      res["SourceEndpointInstanceType"] = boost::any(*sourceEndpointInstanceType);
    }
    if (sourceEndpointOracleSID) {
      res["SourceEndpointOracleSID"] = boost::any(*sourceEndpointOracleSID);
    }
    if (sourceEndpointPassword) {
      res["SourceEndpointPassword"] = boost::any(*sourceEndpointPassword);
    }
    if (sourceEndpointPort) {
      res["SourceEndpointPort"] = boost::any(*sourceEndpointPort);
    }
    if (sourceEndpointRegion) {
      res["SourceEndpointRegion"] = boost::any(*sourceEndpointRegion);
    }
    if (sourceEndpointUserName) {
      res["SourceEndpointUserName"] = boost::any(*sourceEndpointUserName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoStartBackup") != m.end() && !m["AutoStartBackup"].empty()) {
      autoStartBackup = make_shared<bool>(boost::any_cast<bool>(m["AutoStartBackup"]));
    }
    if (m.find("BackupGatewayId") != m.end() && !m["BackupGatewayId"].empty()) {
      backupGatewayId = make_shared<long>(boost::any_cast<long>(m["BackupGatewayId"]));
    }
    if (m.find("BackupLogIntervalSeconds") != m.end() && !m["BackupLogIntervalSeconds"].empty()) {
      backupLogIntervalSeconds = make_shared<long>(boost::any_cast<long>(m["BackupLogIntervalSeconds"]));
    }
    if (m.find("BackupObjects") != m.end() && !m["BackupObjects"].empty()) {
      backupObjects = make_shared<string>(boost::any_cast<string>(m["BackupObjects"]));
    }
    if (m.find("BackupPeriod") != m.end() && !m["BackupPeriod"].empty()) {
      backupPeriod = make_shared<string>(boost::any_cast<string>(m["BackupPeriod"]));
    }
    if (m.find("BackupPlanId") != m.end() && !m["BackupPlanId"].empty()) {
      backupPlanId = make_shared<string>(boost::any_cast<string>(m["BackupPlanId"]));
    }
    if (m.find("BackupPlanName") != m.end() && !m["BackupPlanName"].empty()) {
      backupPlanName = make_shared<string>(boost::any_cast<string>(m["BackupPlanName"]));
    }
    if (m.find("BackupRateLimit") != m.end() && !m["BackupRateLimit"].empty()) {
      backupRateLimit = make_shared<long>(boost::any_cast<long>(m["BackupRateLimit"]));
    }
    if (m.find("BackupRetentionPeriod") != m.end() && !m["BackupRetentionPeriod"].empty()) {
      backupRetentionPeriod = make_shared<long>(boost::any_cast<long>(m["BackupRetentionPeriod"]));
    }
    if (m.find("BackupSpeedLimit") != m.end() && !m["BackupSpeedLimit"].empty()) {
      backupSpeedLimit = make_shared<long>(boost::any_cast<long>(m["BackupSpeedLimit"]));
    }
    if (m.find("BackupStartTime") != m.end() && !m["BackupStartTime"].empty()) {
      backupStartTime = make_shared<string>(boost::any_cast<string>(m["BackupStartTime"]));
    }
    if (m.find("BackupStorageType") != m.end() && !m["BackupStorageType"].empty()) {
      backupStorageType = make_shared<string>(boost::any_cast<string>(m["BackupStorageType"]));
    }
    if (m.find("BackupStrategyType") != m.end() && !m["BackupStrategyType"].empty()) {
      backupStrategyType = make_shared<string>(boost::any_cast<string>(m["BackupStrategyType"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("CrossAliyunId") != m.end() && !m["CrossAliyunId"].empty()) {
      crossAliyunId = make_shared<string>(boost::any_cast<string>(m["CrossAliyunId"]));
    }
    if (m.find("CrossRoleName") != m.end() && !m["CrossRoleName"].empty()) {
      crossRoleName = make_shared<string>(boost::any_cast<string>(m["CrossRoleName"]));
    }
    if (m.find("DuplicationArchivePeriod") != m.end() && !m["DuplicationArchivePeriod"].empty()) {
      duplicationArchivePeriod = make_shared<long>(boost::any_cast<long>(m["DuplicationArchivePeriod"]));
    }
    if (m.find("DuplicationInfrequentAccessPeriod") != m.end() && !m["DuplicationInfrequentAccessPeriod"].empty()) {
      duplicationInfrequentAccessPeriod = make_shared<long>(boost::any_cast<long>(m["DuplicationInfrequentAccessPeriod"]));
    }
    if (m.find("EnableBackupLog") != m.end() && !m["EnableBackupLog"].empty()) {
      enableBackupLog = make_shared<bool>(boost::any_cast<bool>(m["EnableBackupLog"]));
    }
    if (m.find("OSSBucketName") != m.end() && !m["OSSBucketName"].empty()) {
      OSSBucketName = make_shared<string>(boost::any_cast<string>(m["OSSBucketName"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SourceEndpointDatabaseName") != m.end() && !m["SourceEndpointDatabaseName"].empty()) {
      sourceEndpointDatabaseName = make_shared<string>(boost::any_cast<string>(m["SourceEndpointDatabaseName"]));
    }
    if (m.find("SourceEndpointIP") != m.end() && !m["SourceEndpointIP"].empty()) {
      sourceEndpointIP = make_shared<string>(boost::any_cast<string>(m["SourceEndpointIP"]));
    }
    if (m.find("SourceEndpointInstanceID") != m.end() && !m["SourceEndpointInstanceID"].empty()) {
      sourceEndpointInstanceID = make_shared<string>(boost::any_cast<string>(m["SourceEndpointInstanceID"]));
    }
    if (m.find("SourceEndpointInstanceType") != m.end() && !m["SourceEndpointInstanceType"].empty()) {
      sourceEndpointInstanceType = make_shared<string>(boost::any_cast<string>(m["SourceEndpointInstanceType"]));
    }
    if (m.find("SourceEndpointOracleSID") != m.end() && !m["SourceEndpointOracleSID"].empty()) {
      sourceEndpointOracleSID = make_shared<string>(boost::any_cast<string>(m["SourceEndpointOracleSID"]));
    }
    if (m.find("SourceEndpointPassword") != m.end() && !m["SourceEndpointPassword"].empty()) {
      sourceEndpointPassword = make_shared<string>(boost::any_cast<string>(m["SourceEndpointPassword"]));
    }
    if (m.find("SourceEndpointPort") != m.end() && !m["SourceEndpointPort"].empty()) {
      sourceEndpointPort = make_shared<long>(boost::any_cast<long>(m["SourceEndpointPort"]));
    }
    if (m.find("SourceEndpointRegion") != m.end() && !m["SourceEndpointRegion"].empty()) {
      sourceEndpointRegion = make_shared<string>(boost::any_cast<string>(m["SourceEndpointRegion"]));
    }
    if (m.find("SourceEndpointUserName") != m.end() && !m["SourceEndpointUserName"].empty()) {
      sourceEndpointUserName = make_shared<string>(boost::any_cast<string>(m["SourceEndpointUserName"]));
    }
  }


  virtual ~ConfigureBackupPlanRequest() = default;
};
class ConfigureBackupPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> backupPlanId{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ConfigureBackupPlanResponseBody() {}

  explicit ConfigureBackupPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupPlanId) {
      res["BackupPlanId"] = boost::any(*backupPlanId);
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
    if (m.find("BackupPlanId") != m.end() && !m["BackupPlanId"].empty()) {
      backupPlanId = make_shared<string>(boost::any_cast<string>(m["BackupPlanId"]));
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


  virtual ~ConfigureBackupPlanResponseBody() = default;
};
class ConfigureBackupPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ConfigureBackupPlanResponseBody> body{};

  ConfigureBackupPlanResponse() {}

  explicit ConfigureBackupPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ConfigureBackupPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ConfigureBackupPlanResponseBody>(model1);
      }
    }
  }


  virtual ~ConfigureBackupPlanResponse() = default;
};
class CreateAndStartBackupPlanRequest : public Darabonba::Model {
public:
  shared_ptr<long> backupGatewayId{};
  shared_ptr<long> backupLogIntervalSeconds{};
  shared_ptr<string> backupMethod{};
  shared_ptr<string> backupObjects{};
  shared_ptr<string> backupPeriod{};
  shared_ptr<string> backupPlanId{};
  shared_ptr<string> backupPlanName{};
  shared_ptr<long> backupRateLimit{};
  shared_ptr<long> backupRetentionPeriod{};
  shared_ptr<long> backupSpeedLimit{};
  shared_ptr<string> backupStartTime{};
  shared_ptr<string> backupStorageType{};
  shared_ptr<string> backupStrategyType{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> crossAliyunId{};
  shared_ptr<string> crossRoleName{};
  shared_ptr<string> databaseRegion{};
  shared_ptr<string> databaseType{};
  shared_ptr<long> duplicationArchivePeriod{};
  shared_ptr<long> duplicationInfrequentAccessPeriod{};
  shared_ptr<bool> enableBackupLog{};
  shared_ptr<string> fromApp{};
  shared_ptr<string> instanceClass{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> OSSBucketName{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> payType{};
  shared_ptr<string> period{};
  shared_ptr<string> region{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> sourceEndpointDatabaseName{};
  shared_ptr<string> sourceEndpointIP{};
  shared_ptr<string> sourceEndpointInstanceID{};
  shared_ptr<string> sourceEndpointInstanceType{};
  shared_ptr<string> sourceEndpointOracleSID{};
  shared_ptr<string> sourceEndpointPassword{};
  shared_ptr<long> sourceEndpointPort{};
  shared_ptr<string> sourceEndpointRegion{};
  shared_ptr<string> sourceEndpointUserName{};
  shared_ptr<string> storageRegion{};
  shared_ptr<string> storageType{};
  shared_ptr<long> usedTime{};

  CreateAndStartBackupPlanRequest() {}

  explicit CreateAndStartBackupPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupGatewayId) {
      res["BackupGatewayId"] = boost::any(*backupGatewayId);
    }
    if (backupLogIntervalSeconds) {
      res["BackupLogIntervalSeconds"] = boost::any(*backupLogIntervalSeconds);
    }
    if (backupMethod) {
      res["BackupMethod"] = boost::any(*backupMethod);
    }
    if (backupObjects) {
      res["BackupObjects"] = boost::any(*backupObjects);
    }
    if (backupPeriod) {
      res["BackupPeriod"] = boost::any(*backupPeriod);
    }
    if (backupPlanId) {
      res["BackupPlanId"] = boost::any(*backupPlanId);
    }
    if (backupPlanName) {
      res["BackupPlanName"] = boost::any(*backupPlanName);
    }
    if (backupRateLimit) {
      res["BackupRateLimit"] = boost::any(*backupRateLimit);
    }
    if (backupRetentionPeriod) {
      res["BackupRetentionPeriod"] = boost::any(*backupRetentionPeriod);
    }
    if (backupSpeedLimit) {
      res["BackupSpeedLimit"] = boost::any(*backupSpeedLimit);
    }
    if (backupStartTime) {
      res["BackupStartTime"] = boost::any(*backupStartTime);
    }
    if (backupStorageType) {
      res["BackupStorageType"] = boost::any(*backupStorageType);
    }
    if (backupStrategyType) {
      res["BackupStrategyType"] = boost::any(*backupStrategyType);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (crossAliyunId) {
      res["CrossAliyunId"] = boost::any(*crossAliyunId);
    }
    if (crossRoleName) {
      res["CrossRoleName"] = boost::any(*crossRoleName);
    }
    if (databaseRegion) {
      res["DatabaseRegion"] = boost::any(*databaseRegion);
    }
    if (databaseType) {
      res["DatabaseType"] = boost::any(*databaseType);
    }
    if (duplicationArchivePeriod) {
      res["DuplicationArchivePeriod"] = boost::any(*duplicationArchivePeriod);
    }
    if (duplicationInfrequentAccessPeriod) {
      res["DuplicationInfrequentAccessPeriod"] = boost::any(*duplicationInfrequentAccessPeriod);
    }
    if (enableBackupLog) {
      res["EnableBackupLog"] = boost::any(*enableBackupLog);
    }
    if (fromApp) {
      res["FromApp"] = boost::any(*fromApp);
    }
    if (instanceClass) {
      res["InstanceClass"] = boost::any(*instanceClass);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (OSSBucketName) {
      res["OSSBucketName"] = boost::any(*OSSBucketName);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (sourceEndpointDatabaseName) {
      res["SourceEndpointDatabaseName"] = boost::any(*sourceEndpointDatabaseName);
    }
    if (sourceEndpointIP) {
      res["SourceEndpointIP"] = boost::any(*sourceEndpointIP);
    }
    if (sourceEndpointInstanceID) {
      res["SourceEndpointInstanceID"] = boost::any(*sourceEndpointInstanceID);
    }
    if (sourceEndpointInstanceType) {
      res["SourceEndpointInstanceType"] = boost::any(*sourceEndpointInstanceType);
    }
    if (sourceEndpointOracleSID) {
      res["SourceEndpointOracleSID"] = boost::any(*sourceEndpointOracleSID);
    }
    if (sourceEndpointPassword) {
      res["SourceEndpointPassword"] = boost::any(*sourceEndpointPassword);
    }
    if (sourceEndpointPort) {
      res["SourceEndpointPort"] = boost::any(*sourceEndpointPort);
    }
    if (sourceEndpointRegion) {
      res["SourceEndpointRegion"] = boost::any(*sourceEndpointRegion);
    }
    if (sourceEndpointUserName) {
      res["SourceEndpointUserName"] = boost::any(*sourceEndpointUserName);
    }
    if (storageRegion) {
      res["StorageRegion"] = boost::any(*storageRegion);
    }
    if (storageType) {
      res["StorageType"] = boost::any(*storageType);
    }
    if (usedTime) {
      res["UsedTime"] = boost::any(*usedTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupGatewayId") != m.end() && !m["BackupGatewayId"].empty()) {
      backupGatewayId = make_shared<long>(boost::any_cast<long>(m["BackupGatewayId"]));
    }
    if (m.find("BackupLogIntervalSeconds") != m.end() && !m["BackupLogIntervalSeconds"].empty()) {
      backupLogIntervalSeconds = make_shared<long>(boost::any_cast<long>(m["BackupLogIntervalSeconds"]));
    }
    if (m.find("BackupMethod") != m.end() && !m["BackupMethod"].empty()) {
      backupMethod = make_shared<string>(boost::any_cast<string>(m["BackupMethod"]));
    }
    if (m.find("BackupObjects") != m.end() && !m["BackupObjects"].empty()) {
      backupObjects = make_shared<string>(boost::any_cast<string>(m["BackupObjects"]));
    }
    if (m.find("BackupPeriod") != m.end() && !m["BackupPeriod"].empty()) {
      backupPeriod = make_shared<string>(boost::any_cast<string>(m["BackupPeriod"]));
    }
    if (m.find("BackupPlanId") != m.end() && !m["BackupPlanId"].empty()) {
      backupPlanId = make_shared<string>(boost::any_cast<string>(m["BackupPlanId"]));
    }
    if (m.find("BackupPlanName") != m.end() && !m["BackupPlanName"].empty()) {
      backupPlanName = make_shared<string>(boost::any_cast<string>(m["BackupPlanName"]));
    }
    if (m.find("BackupRateLimit") != m.end() && !m["BackupRateLimit"].empty()) {
      backupRateLimit = make_shared<long>(boost::any_cast<long>(m["BackupRateLimit"]));
    }
    if (m.find("BackupRetentionPeriod") != m.end() && !m["BackupRetentionPeriod"].empty()) {
      backupRetentionPeriod = make_shared<long>(boost::any_cast<long>(m["BackupRetentionPeriod"]));
    }
    if (m.find("BackupSpeedLimit") != m.end() && !m["BackupSpeedLimit"].empty()) {
      backupSpeedLimit = make_shared<long>(boost::any_cast<long>(m["BackupSpeedLimit"]));
    }
    if (m.find("BackupStartTime") != m.end() && !m["BackupStartTime"].empty()) {
      backupStartTime = make_shared<string>(boost::any_cast<string>(m["BackupStartTime"]));
    }
    if (m.find("BackupStorageType") != m.end() && !m["BackupStorageType"].empty()) {
      backupStorageType = make_shared<string>(boost::any_cast<string>(m["BackupStorageType"]));
    }
    if (m.find("BackupStrategyType") != m.end() && !m["BackupStrategyType"].empty()) {
      backupStrategyType = make_shared<string>(boost::any_cast<string>(m["BackupStrategyType"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("CrossAliyunId") != m.end() && !m["CrossAliyunId"].empty()) {
      crossAliyunId = make_shared<string>(boost::any_cast<string>(m["CrossAliyunId"]));
    }
    if (m.find("CrossRoleName") != m.end() && !m["CrossRoleName"].empty()) {
      crossRoleName = make_shared<string>(boost::any_cast<string>(m["CrossRoleName"]));
    }
    if (m.find("DatabaseRegion") != m.end() && !m["DatabaseRegion"].empty()) {
      databaseRegion = make_shared<string>(boost::any_cast<string>(m["DatabaseRegion"]));
    }
    if (m.find("DatabaseType") != m.end() && !m["DatabaseType"].empty()) {
      databaseType = make_shared<string>(boost::any_cast<string>(m["DatabaseType"]));
    }
    if (m.find("DuplicationArchivePeriod") != m.end() && !m["DuplicationArchivePeriod"].empty()) {
      duplicationArchivePeriod = make_shared<long>(boost::any_cast<long>(m["DuplicationArchivePeriod"]));
    }
    if (m.find("DuplicationInfrequentAccessPeriod") != m.end() && !m["DuplicationInfrequentAccessPeriod"].empty()) {
      duplicationInfrequentAccessPeriod = make_shared<long>(boost::any_cast<long>(m["DuplicationInfrequentAccessPeriod"]));
    }
    if (m.find("EnableBackupLog") != m.end() && !m["EnableBackupLog"].empty()) {
      enableBackupLog = make_shared<bool>(boost::any_cast<bool>(m["EnableBackupLog"]));
    }
    if (m.find("FromApp") != m.end() && !m["FromApp"].empty()) {
      fromApp = make_shared<string>(boost::any_cast<string>(m["FromApp"]));
    }
    if (m.find("InstanceClass") != m.end() && !m["InstanceClass"].empty()) {
      instanceClass = make_shared<string>(boost::any_cast<string>(m["InstanceClass"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("OSSBucketName") != m.end() && !m["OSSBucketName"].empty()) {
      OSSBucketName = make_shared<string>(boost::any_cast<string>(m["OSSBucketName"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<string>(boost::any_cast<string>(m["Period"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SourceEndpointDatabaseName") != m.end() && !m["SourceEndpointDatabaseName"].empty()) {
      sourceEndpointDatabaseName = make_shared<string>(boost::any_cast<string>(m["SourceEndpointDatabaseName"]));
    }
    if (m.find("SourceEndpointIP") != m.end() && !m["SourceEndpointIP"].empty()) {
      sourceEndpointIP = make_shared<string>(boost::any_cast<string>(m["SourceEndpointIP"]));
    }
    if (m.find("SourceEndpointInstanceID") != m.end() && !m["SourceEndpointInstanceID"].empty()) {
      sourceEndpointInstanceID = make_shared<string>(boost::any_cast<string>(m["SourceEndpointInstanceID"]));
    }
    if (m.find("SourceEndpointInstanceType") != m.end() && !m["SourceEndpointInstanceType"].empty()) {
      sourceEndpointInstanceType = make_shared<string>(boost::any_cast<string>(m["SourceEndpointInstanceType"]));
    }
    if (m.find("SourceEndpointOracleSID") != m.end() && !m["SourceEndpointOracleSID"].empty()) {
      sourceEndpointOracleSID = make_shared<string>(boost::any_cast<string>(m["SourceEndpointOracleSID"]));
    }
    if (m.find("SourceEndpointPassword") != m.end() && !m["SourceEndpointPassword"].empty()) {
      sourceEndpointPassword = make_shared<string>(boost::any_cast<string>(m["SourceEndpointPassword"]));
    }
    if (m.find("SourceEndpointPort") != m.end() && !m["SourceEndpointPort"].empty()) {
      sourceEndpointPort = make_shared<long>(boost::any_cast<long>(m["SourceEndpointPort"]));
    }
    if (m.find("SourceEndpointRegion") != m.end() && !m["SourceEndpointRegion"].empty()) {
      sourceEndpointRegion = make_shared<string>(boost::any_cast<string>(m["SourceEndpointRegion"]));
    }
    if (m.find("SourceEndpointUserName") != m.end() && !m["SourceEndpointUserName"].empty()) {
      sourceEndpointUserName = make_shared<string>(boost::any_cast<string>(m["SourceEndpointUserName"]));
    }
    if (m.find("StorageRegion") != m.end() && !m["StorageRegion"].empty()) {
      storageRegion = make_shared<string>(boost::any_cast<string>(m["StorageRegion"]));
    }
    if (m.find("StorageType") != m.end() && !m["StorageType"].empty()) {
      storageType = make_shared<string>(boost::any_cast<string>(m["StorageType"]));
    }
    if (m.find("UsedTime") != m.end() && !m["UsedTime"].empty()) {
      usedTime = make_shared<long>(boost::any_cast<long>(m["UsedTime"]));
    }
  }


  virtual ~CreateAndStartBackupPlanRequest() = default;
};
class CreateAndStartBackupPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> backupPlanId{};
  shared_ptr<bool> createBackupSet{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateAndStartBackupPlanResponseBody() {}

  explicit CreateAndStartBackupPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupPlanId) {
      res["BackupPlanId"] = boost::any(*backupPlanId);
    }
    if (createBackupSet) {
      res["CreateBackupSet"] = boost::any(*createBackupSet);
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
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
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
    if (m.find("BackupPlanId") != m.end() && !m["BackupPlanId"].empty()) {
      backupPlanId = make_shared<string>(boost::any_cast<string>(m["BackupPlanId"]));
    }
    if (m.find("CreateBackupSet") != m.end() && !m["CreateBackupSet"].empty()) {
      createBackupSet = make_shared<bool>(boost::any_cast<bool>(m["CreateBackupSet"]));
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
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateAndStartBackupPlanResponseBody() = default;
};
class CreateAndStartBackupPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAndStartBackupPlanResponseBody> body{};

  CreateAndStartBackupPlanResponse() {}

  explicit CreateAndStartBackupPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAndStartBackupPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAndStartBackupPlanResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAndStartBackupPlanResponse() = default;
};
class CreateBackupPlanRequest : public Darabonba::Model {
public:
  shared_ptr<string> backupMethod{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> databaseRegion{};
  shared_ptr<string> databaseType{};
  shared_ptr<string> fromApp{};
  shared_ptr<string> instanceClass{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> payType{};
  shared_ptr<string> period{};
  shared_ptr<string> region{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> storageRegion{};
  shared_ptr<string> storageType{};
  shared_ptr<long> usedTime{};

  CreateBackupPlanRequest() {}

  explicit CreateBackupPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupMethod) {
      res["BackupMethod"] = boost::any(*backupMethod);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (databaseRegion) {
      res["DatabaseRegion"] = boost::any(*databaseRegion);
    }
    if (databaseType) {
      res["DatabaseType"] = boost::any(*databaseType);
    }
    if (fromApp) {
      res["FromApp"] = boost::any(*fromApp);
    }
    if (instanceClass) {
      res["InstanceClass"] = boost::any(*instanceClass);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (storageRegion) {
      res["StorageRegion"] = boost::any(*storageRegion);
    }
    if (storageType) {
      res["StorageType"] = boost::any(*storageType);
    }
    if (usedTime) {
      res["UsedTime"] = boost::any(*usedTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupMethod") != m.end() && !m["BackupMethod"].empty()) {
      backupMethod = make_shared<string>(boost::any_cast<string>(m["BackupMethod"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DatabaseRegion") != m.end() && !m["DatabaseRegion"].empty()) {
      databaseRegion = make_shared<string>(boost::any_cast<string>(m["DatabaseRegion"]));
    }
    if (m.find("DatabaseType") != m.end() && !m["DatabaseType"].empty()) {
      databaseType = make_shared<string>(boost::any_cast<string>(m["DatabaseType"]));
    }
    if (m.find("FromApp") != m.end() && !m["FromApp"].empty()) {
      fromApp = make_shared<string>(boost::any_cast<string>(m["FromApp"]));
    }
    if (m.find("InstanceClass") != m.end() && !m["InstanceClass"].empty()) {
      instanceClass = make_shared<string>(boost::any_cast<string>(m["InstanceClass"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<string>(boost::any_cast<string>(m["Period"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("StorageRegion") != m.end() && !m["StorageRegion"].empty()) {
      storageRegion = make_shared<string>(boost::any_cast<string>(m["StorageRegion"]));
    }
    if (m.find("StorageType") != m.end() && !m["StorageType"].empty()) {
      storageType = make_shared<string>(boost::any_cast<string>(m["StorageType"]));
    }
    if (m.find("UsedTime") != m.end() && !m["UsedTime"].empty()) {
      usedTime = make_shared<long>(boost::any_cast<long>(m["UsedTime"]));
    }
  }


  virtual ~CreateBackupPlanRequest() = default;
};
class CreateBackupPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> backupPlanId{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateBackupPlanResponseBody() {}

  explicit CreateBackupPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupPlanId) {
      res["BackupPlanId"] = boost::any(*backupPlanId);
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
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
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
    if (m.find("BackupPlanId") != m.end() && !m["BackupPlanId"].empty()) {
      backupPlanId = make_shared<string>(boost::any_cast<string>(m["BackupPlanId"]));
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
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateBackupPlanResponseBody() = default;
};
class CreateBackupPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateBackupPlanResponseBody> body{};

  CreateBackupPlanResponse() {}

  explicit CreateBackupPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateBackupPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateBackupPlanResponseBody>(model1);
      }
    }
  }


  virtual ~CreateBackupPlanResponse() = default;
};
class CreateFullBackupSetDownloadRequest : public Darabonba::Model {
public:
  shared_ptr<string> backupSetDataFormat{};
  shared_ptr<string> backupSetId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> ownerId{};

  CreateFullBackupSetDownloadRequest() {}

  explicit CreateFullBackupSetDownloadRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupSetDataFormat) {
      res["BackupSetDataFormat"] = boost::any(*backupSetDataFormat);
    }
    if (backupSetId) {
      res["BackupSetId"] = boost::any(*backupSetId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupSetDataFormat") != m.end() && !m["BackupSetDataFormat"].empty()) {
      backupSetDataFormat = make_shared<string>(boost::any_cast<string>(m["BackupSetDataFormat"]));
    }
    if (m.find("BackupSetId") != m.end() && !m["BackupSetId"].empty()) {
      backupSetId = make_shared<string>(boost::any_cast<string>(m["BackupSetId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
  }


  virtual ~CreateFullBackupSetDownloadRequest() = default;
};
class CreateFullBackupSetDownloadResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> backupSetDownloadTaskId{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateFullBackupSetDownloadResponseBody() {}

  explicit CreateFullBackupSetDownloadResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupSetDownloadTaskId) {
      res["BackupSetDownloadTaskId"] = boost::any(*backupSetDownloadTaskId);
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
    if (m.find("BackupSetDownloadTaskId") != m.end() && !m["BackupSetDownloadTaskId"].empty()) {
      backupSetDownloadTaskId = make_shared<string>(boost::any_cast<string>(m["BackupSetDownloadTaskId"]));
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


  virtual ~CreateFullBackupSetDownloadResponseBody() = default;
};
class CreateFullBackupSetDownloadResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateFullBackupSetDownloadResponseBody> body{};

  CreateFullBackupSetDownloadResponse() {}

  explicit CreateFullBackupSetDownloadResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateFullBackupSetDownloadResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateFullBackupSetDownloadResponseBody>(model1);
      }
    }
  }


  virtual ~CreateFullBackupSetDownloadResponse() = default;
};
class CreateGetDBListFromAgentTaskRequest : public Darabonba::Model {
public:
  shared_ptr<long> backupGatewayId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> databaseType{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> sourceEndpointIP{};
  shared_ptr<long> sourceEndpointPort{};
  shared_ptr<string> sourceEndpointRegion{};

  CreateGetDBListFromAgentTaskRequest() {}

  explicit CreateGetDBListFromAgentTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupGatewayId) {
      res["BackupGatewayId"] = boost::any(*backupGatewayId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (databaseType) {
      res["DatabaseType"] = boost::any(*databaseType);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (sourceEndpointIP) {
      res["SourceEndpointIP"] = boost::any(*sourceEndpointIP);
    }
    if (sourceEndpointPort) {
      res["SourceEndpointPort"] = boost::any(*sourceEndpointPort);
    }
    if (sourceEndpointRegion) {
      res["SourceEndpointRegion"] = boost::any(*sourceEndpointRegion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupGatewayId") != m.end() && !m["BackupGatewayId"].empty()) {
      backupGatewayId = make_shared<long>(boost::any_cast<long>(m["BackupGatewayId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DatabaseType") != m.end() && !m["DatabaseType"].empty()) {
      databaseType = make_shared<string>(boost::any_cast<string>(m["DatabaseType"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("SourceEndpointIP") != m.end() && !m["SourceEndpointIP"].empty()) {
      sourceEndpointIP = make_shared<string>(boost::any_cast<string>(m["SourceEndpointIP"]));
    }
    if (m.find("SourceEndpointPort") != m.end() && !m["SourceEndpointPort"].empty()) {
      sourceEndpointPort = make_shared<long>(boost::any_cast<long>(m["SourceEndpointPort"]));
    }
    if (m.find("SourceEndpointRegion") != m.end() && !m["SourceEndpointRegion"].empty()) {
      sourceEndpointRegion = make_shared<string>(boost::any_cast<string>(m["SourceEndpointRegion"]));
    }
  }


  virtual ~CreateGetDBListFromAgentTaskRequest() = default;
};
class CreateGetDBListFromAgentTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> taskId{};

  CreateGetDBListFromAgentTaskResponseBody() {}

  explicit CreateGetDBListFromAgentTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
  }


  virtual ~CreateGetDBListFromAgentTaskResponseBody() = default;
};
class CreateGetDBListFromAgentTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateGetDBListFromAgentTaskResponseBody> body{};

  CreateGetDBListFromAgentTaskResponse() {}

  explicit CreateGetDBListFromAgentTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateGetDBListFromAgentTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateGetDBListFromAgentTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateGetDBListFromAgentTaskResponse() = default;
};
class CreateIncrementBackupSetDownloadRequest : public Darabonba::Model {
public:
  shared_ptr<string> backupSetDataFormat{};
  shared_ptr<string> backupSetId{};
  shared_ptr<string> backupSetName{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> ownerId{};

  CreateIncrementBackupSetDownloadRequest() {}

  explicit CreateIncrementBackupSetDownloadRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupSetDataFormat) {
      res["BackupSetDataFormat"] = boost::any(*backupSetDataFormat);
    }
    if (backupSetId) {
      res["BackupSetId"] = boost::any(*backupSetId);
    }
    if (backupSetName) {
      res["BackupSetName"] = boost::any(*backupSetName);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupSetDataFormat") != m.end() && !m["BackupSetDataFormat"].empty()) {
      backupSetDataFormat = make_shared<string>(boost::any_cast<string>(m["BackupSetDataFormat"]));
    }
    if (m.find("BackupSetId") != m.end() && !m["BackupSetId"].empty()) {
      backupSetId = make_shared<string>(boost::any_cast<string>(m["BackupSetId"]));
    }
    if (m.find("BackupSetName") != m.end() && !m["BackupSetName"].empty()) {
      backupSetName = make_shared<string>(boost::any_cast<string>(m["BackupSetName"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
  }


  virtual ~CreateIncrementBackupSetDownloadRequest() = default;
};
class CreateIncrementBackupSetDownloadResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> backupSetDownloadTaskId{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateIncrementBackupSetDownloadResponseBody() {}

  explicit CreateIncrementBackupSetDownloadResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupSetDownloadTaskId) {
      res["BackupSetDownloadTaskId"] = boost::any(*backupSetDownloadTaskId);
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
    if (m.find("BackupSetDownloadTaskId") != m.end() && !m["BackupSetDownloadTaskId"].empty()) {
      backupSetDownloadTaskId = make_shared<string>(boost::any_cast<string>(m["BackupSetDownloadTaskId"]));
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


  virtual ~CreateIncrementBackupSetDownloadResponseBody() = default;
};
class CreateIncrementBackupSetDownloadResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateIncrementBackupSetDownloadResponseBody> body{};

  CreateIncrementBackupSetDownloadResponse() {}

  explicit CreateIncrementBackupSetDownloadResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateIncrementBackupSetDownloadResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateIncrementBackupSetDownloadResponseBody>(model1);
      }
    }
  }


  virtual ~CreateIncrementBackupSetDownloadResponse() = default;
};
class CreateRestoreTaskRequest : public Darabonba::Model {
public:
  shared_ptr<long> backupGatewayId{};
  shared_ptr<string> backupPlanId{};
  shared_ptr<string> backupSetId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> crossAliyunId{};
  shared_ptr<string> crossRoleName{};
  shared_ptr<string> destinationEndpointDatabaseName{};
  shared_ptr<string> destinationEndpointIP{};
  shared_ptr<string> destinationEndpointInstanceID{};
  shared_ptr<string> destinationEndpointInstanceType{};
  shared_ptr<string> destinationEndpointOracleSID{};
  shared_ptr<string> destinationEndpointPassword{};
  shared_ptr<long> destinationEndpointPort{};
  shared_ptr<string> destinationEndpointRegion{};
  shared_ptr<string> destinationEndpointUserName{};
  shared_ptr<string> duplicateConflict{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> restoreDir{};
  shared_ptr<string> restoreHome{};
  shared_ptr<string> restoreObjects{};
  shared_ptr<string> restoreTaskName{};
  shared_ptr<long> restoreTime{};

  CreateRestoreTaskRequest() {}

  explicit CreateRestoreTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupGatewayId) {
      res["BackupGatewayId"] = boost::any(*backupGatewayId);
    }
    if (backupPlanId) {
      res["BackupPlanId"] = boost::any(*backupPlanId);
    }
    if (backupSetId) {
      res["BackupSetId"] = boost::any(*backupSetId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (crossAliyunId) {
      res["CrossAliyunId"] = boost::any(*crossAliyunId);
    }
    if (crossRoleName) {
      res["CrossRoleName"] = boost::any(*crossRoleName);
    }
    if (destinationEndpointDatabaseName) {
      res["DestinationEndpointDatabaseName"] = boost::any(*destinationEndpointDatabaseName);
    }
    if (destinationEndpointIP) {
      res["DestinationEndpointIP"] = boost::any(*destinationEndpointIP);
    }
    if (destinationEndpointInstanceID) {
      res["DestinationEndpointInstanceID"] = boost::any(*destinationEndpointInstanceID);
    }
    if (destinationEndpointInstanceType) {
      res["DestinationEndpointInstanceType"] = boost::any(*destinationEndpointInstanceType);
    }
    if (destinationEndpointOracleSID) {
      res["DestinationEndpointOracleSID"] = boost::any(*destinationEndpointOracleSID);
    }
    if (destinationEndpointPassword) {
      res["DestinationEndpointPassword"] = boost::any(*destinationEndpointPassword);
    }
    if (destinationEndpointPort) {
      res["DestinationEndpointPort"] = boost::any(*destinationEndpointPort);
    }
    if (destinationEndpointRegion) {
      res["DestinationEndpointRegion"] = boost::any(*destinationEndpointRegion);
    }
    if (destinationEndpointUserName) {
      res["DestinationEndpointUserName"] = boost::any(*destinationEndpointUserName);
    }
    if (duplicateConflict) {
      res["DuplicateConflict"] = boost::any(*duplicateConflict);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (restoreDir) {
      res["RestoreDir"] = boost::any(*restoreDir);
    }
    if (restoreHome) {
      res["RestoreHome"] = boost::any(*restoreHome);
    }
    if (restoreObjects) {
      res["RestoreObjects"] = boost::any(*restoreObjects);
    }
    if (restoreTaskName) {
      res["RestoreTaskName"] = boost::any(*restoreTaskName);
    }
    if (restoreTime) {
      res["RestoreTime"] = boost::any(*restoreTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupGatewayId") != m.end() && !m["BackupGatewayId"].empty()) {
      backupGatewayId = make_shared<long>(boost::any_cast<long>(m["BackupGatewayId"]));
    }
    if (m.find("BackupPlanId") != m.end() && !m["BackupPlanId"].empty()) {
      backupPlanId = make_shared<string>(boost::any_cast<string>(m["BackupPlanId"]));
    }
    if (m.find("BackupSetId") != m.end() && !m["BackupSetId"].empty()) {
      backupSetId = make_shared<string>(boost::any_cast<string>(m["BackupSetId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("CrossAliyunId") != m.end() && !m["CrossAliyunId"].empty()) {
      crossAliyunId = make_shared<string>(boost::any_cast<string>(m["CrossAliyunId"]));
    }
    if (m.find("CrossRoleName") != m.end() && !m["CrossRoleName"].empty()) {
      crossRoleName = make_shared<string>(boost::any_cast<string>(m["CrossRoleName"]));
    }
    if (m.find("DestinationEndpointDatabaseName") != m.end() && !m["DestinationEndpointDatabaseName"].empty()) {
      destinationEndpointDatabaseName = make_shared<string>(boost::any_cast<string>(m["DestinationEndpointDatabaseName"]));
    }
    if (m.find("DestinationEndpointIP") != m.end() && !m["DestinationEndpointIP"].empty()) {
      destinationEndpointIP = make_shared<string>(boost::any_cast<string>(m["DestinationEndpointIP"]));
    }
    if (m.find("DestinationEndpointInstanceID") != m.end() && !m["DestinationEndpointInstanceID"].empty()) {
      destinationEndpointInstanceID = make_shared<string>(boost::any_cast<string>(m["DestinationEndpointInstanceID"]));
    }
    if (m.find("DestinationEndpointInstanceType") != m.end() && !m["DestinationEndpointInstanceType"].empty()) {
      destinationEndpointInstanceType = make_shared<string>(boost::any_cast<string>(m["DestinationEndpointInstanceType"]));
    }
    if (m.find("DestinationEndpointOracleSID") != m.end() && !m["DestinationEndpointOracleSID"].empty()) {
      destinationEndpointOracleSID = make_shared<string>(boost::any_cast<string>(m["DestinationEndpointOracleSID"]));
    }
    if (m.find("DestinationEndpointPassword") != m.end() && !m["DestinationEndpointPassword"].empty()) {
      destinationEndpointPassword = make_shared<string>(boost::any_cast<string>(m["DestinationEndpointPassword"]));
    }
    if (m.find("DestinationEndpointPort") != m.end() && !m["DestinationEndpointPort"].empty()) {
      destinationEndpointPort = make_shared<long>(boost::any_cast<long>(m["DestinationEndpointPort"]));
    }
    if (m.find("DestinationEndpointRegion") != m.end() && !m["DestinationEndpointRegion"].empty()) {
      destinationEndpointRegion = make_shared<string>(boost::any_cast<string>(m["DestinationEndpointRegion"]));
    }
    if (m.find("DestinationEndpointUserName") != m.end() && !m["DestinationEndpointUserName"].empty()) {
      destinationEndpointUserName = make_shared<string>(boost::any_cast<string>(m["DestinationEndpointUserName"]));
    }
    if (m.find("DuplicateConflict") != m.end() && !m["DuplicateConflict"].empty()) {
      duplicateConflict = make_shared<string>(boost::any_cast<string>(m["DuplicateConflict"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("RestoreDir") != m.end() && !m["RestoreDir"].empty()) {
      restoreDir = make_shared<string>(boost::any_cast<string>(m["RestoreDir"]));
    }
    if (m.find("RestoreHome") != m.end() && !m["RestoreHome"].empty()) {
      restoreHome = make_shared<string>(boost::any_cast<string>(m["RestoreHome"]));
    }
    if (m.find("RestoreObjects") != m.end() && !m["RestoreObjects"].empty()) {
      restoreObjects = make_shared<string>(boost::any_cast<string>(m["RestoreObjects"]));
    }
    if (m.find("RestoreTaskName") != m.end() && !m["RestoreTaskName"].empty()) {
      restoreTaskName = make_shared<string>(boost::any_cast<string>(m["RestoreTaskName"]));
    }
    if (m.find("RestoreTime") != m.end() && !m["RestoreTime"].empty()) {
      restoreTime = make_shared<long>(boost::any_cast<long>(m["RestoreTime"]));
    }
  }


  virtual ~CreateRestoreTaskRequest() = default;
};
class CreateRestoreTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<string> restoreTaskId{};
  shared_ptr<bool> success{};

  CreateRestoreTaskResponseBody() {}

  explicit CreateRestoreTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (restoreTaskId) {
      res["RestoreTaskId"] = boost::any(*restoreTaskId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
    if (m.find("RestoreTaskId") != m.end() && !m["RestoreTaskId"].empty()) {
      restoreTaskId = make_shared<string>(boost::any_cast<string>(m["RestoreTaskId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateRestoreTaskResponseBody() = default;
};
class CreateRestoreTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateRestoreTaskResponseBody> body{};

  CreateRestoreTaskResponse() {}

  explicit CreateRestoreTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateRestoreTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateRestoreTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateRestoreTaskResponse() = default;
};
class DescribeBackupGatewayListRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> identifier{};
  shared_ptr<string> ownerId{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> region{};

  DescribeBackupGatewayListRequest() {}

  explicit DescribeBackupGatewayListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (identifier) {
      res["Identifier"] = boost::any(*identifier);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Identifier") != m.end() && !m["Identifier"].empty()) {
      identifier = make_shared<string>(boost::any_cast<string>(m["Identifier"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
  }


  virtual ~DescribeBackupGatewayListRequest() = default;
};
class DescribeBackupGatewayListResponseBodyItemsBackupGateway : public Darabonba::Model {
public:
  shared_ptr<long> backupGatewayCreateTime{};
  shared_ptr<string> backupGatewayId{};
  shared_ptr<string> backupGatewayStatus{};
  shared_ptr<string> displayName{};
  shared_ptr<string> identifier{};
  shared_ptr<long> lastHeartbeatTime{};
  shared_ptr<string> region{};
  shared_ptr<string> sourceEndpointHostname{};
  shared_ptr<string> sourceEndpointInternetIP{};
  shared_ptr<string> sourceEndpointIntranetIP{};

  DescribeBackupGatewayListResponseBodyItemsBackupGateway() {}

  explicit DescribeBackupGatewayListResponseBodyItemsBackupGateway(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupGatewayCreateTime) {
      res["BackupGatewayCreateTime"] = boost::any(*backupGatewayCreateTime);
    }
    if (backupGatewayId) {
      res["BackupGatewayId"] = boost::any(*backupGatewayId);
    }
    if (backupGatewayStatus) {
      res["BackupGatewayStatus"] = boost::any(*backupGatewayStatus);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (identifier) {
      res["Identifier"] = boost::any(*identifier);
    }
    if (lastHeartbeatTime) {
      res["LastHeartbeatTime"] = boost::any(*lastHeartbeatTime);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (sourceEndpointHostname) {
      res["SourceEndpointHostname"] = boost::any(*sourceEndpointHostname);
    }
    if (sourceEndpointInternetIP) {
      res["SourceEndpointInternetIP"] = boost::any(*sourceEndpointInternetIP);
    }
    if (sourceEndpointIntranetIP) {
      res["SourceEndpointIntranetIP"] = boost::any(*sourceEndpointIntranetIP);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupGatewayCreateTime") != m.end() && !m["BackupGatewayCreateTime"].empty()) {
      backupGatewayCreateTime = make_shared<long>(boost::any_cast<long>(m["BackupGatewayCreateTime"]));
    }
    if (m.find("BackupGatewayId") != m.end() && !m["BackupGatewayId"].empty()) {
      backupGatewayId = make_shared<string>(boost::any_cast<string>(m["BackupGatewayId"]));
    }
    if (m.find("BackupGatewayStatus") != m.end() && !m["BackupGatewayStatus"].empty()) {
      backupGatewayStatus = make_shared<string>(boost::any_cast<string>(m["BackupGatewayStatus"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Identifier") != m.end() && !m["Identifier"].empty()) {
      identifier = make_shared<string>(boost::any_cast<string>(m["Identifier"]));
    }
    if (m.find("LastHeartbeatTime") != m.end() && !m["LastHeartbeatTime"].empty()) {
      lastHeartbeatTime = make_shared<long>(boost::any_cast<long>(m["LastHeartbeatTime"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("SourceEndpointHostname") != m.end() && !m["SourceEndpointHostname"].empty()) {
      sourceEndpointHostname = make_shared<string>(boost::any_cast<string>(m["SourceEndpointHostname"]));
    }
    if (m.find("SourceEndpointInternetIP") != m.end() && !m["SourceEndpointInternetIP"].empty()) {
      sourceEndpointInternetIP = make_shared<string>(boost::any_cast<string>(m["SourceEndpointInternetIP"]));
    }
    if (m.find("SourceEndpointIntranetIP") != m.end() && !m["SourceEndpointIntranetIP"].empty()) {
      sourceEndpointIntranetIP = make_shared<string>(boost::any_cast<string>(m["SourceEndpointIntranetIP"]));
    }
  }


  virtual ~DescribeBackupGatewayListResponseBodyItemsBackupGateway() = default;
};
class DescribeBackupGatewayListResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeBackupGatewayListResponseBodyItemsBackupGateway>> backupGateway{};

  DescribeBackupGatewayListResponseBodyItems() {}

  explicit DescribeBackupGatewayListResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupGateway) {
      vector<boost::any> temp1;
      for(auto item1:*backupGateway){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BackupGateway"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupGateway") != m.end() && !m["BackupGateway"].empty()) {
      if (typeid(vector<boost::any>) == m["BackupGateway"].type()) {
        vector<DescribeBackupGatewayListResponseBodyItemsBackupGateway> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BackupGateway"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeBackupGatewayListResponseBodyItemsBackupGateway model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        backupGateway = make_shared<vector<DescribeBackupGatewayListResponseBodyItemsBackupGateway>>(expect1);
      }
    }
  }


  virtual ~DescribeBackupGatewayListResponseBodyItems() = default;
};
class DescribeBackupGatewayListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<DescribeBackupGatewayListResponseBodyItems> items{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalElements{};
  shared_ptr<long> totalPages{};

  DescribeBackupGatewayListResponseBody() {}

  explicit DescribeBackupGatewayListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
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
    if (totalElements) {
      res["TotalElements"] = boost::any(*totalElements);
    }
    if (totalPages) {
      res["TotalPages"] = boost::any(*totalPages);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        DescribeBackupGatewayListResponseBodyItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<DescribeBackupGatewayListResponseBodyItems>(model1);
      }
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
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
    if (m.find("TotalElements") != m.end() && !m["TotalElements"].empty()) {
      totalElements = make_shared<long>(boost::any_cast<long>(m["TotalElements"]));
    }
    if (m.find("TotalPages") != m.end() && !m["TotalPages"].empty()) {
      totalPages = make_shared<long>(boost::any_cast<long>(m["TotalPages"]));
    }
  }


  virtual ~DescribeBackupGatewayListResponseBody() = default;
};
class DescribeBackupGatewayListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeBackupGatewayListResponseBody> body{};

  DescribeBackupGatewayListResponse() {}

  explicit DescribeBackupGatewayListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeBackupGatewayListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeBackupGatewayListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeBackupGatewayListResponse() = default;
};
class DescribeBackupPlanBillingRequest : public Darabonba::Model {
public:
  shared_ptr<string> backupPlanId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> ownerId{};
  shared_ptr<bool> showStorageType{};

  DescribeBackupPlanBillingRequest() {}

  explicit DescribeBackupPlanBillingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupPlanId) {
      res["BackupPlanId"] = boost::any(*backupPlanId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (showStorageType) {
      res["ShowStorageType"] = boost::any(*showStorageType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupPlanId") != m.end() && !m["BackupPlanId"].empty()) {
      backupPlanId = make_shared<string>(boost::any_cast<string>(m["BackupPlanId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("ShowStorageType") != m.end() && !m["ShowStorageType"].empty()) {
      showStorageType = make_shared<bool>(boost::any_cast<bool>(m["ShowStorageType"]));
    }
  }


  virtual ~DescribeBackupPlanBillingRequest() = default;
};
class DescribeBackupPlanBillingResponseBodyItem : public Darabonba::Model {
public:
  shared_ptr<string> buyChargeType{};
  shared_ptr<long> buyCreateTimestamp{};
  shared_ptr<long> buyExpiredTimestamp{};
  shared_ptr<string> buySpec{};
  shared_ptr<long> contStorageSize{};
  shared_ptr<long> fullStorageSize{};
  shared_ptr<bool> isExpired{};
  shared_ptr<bool> isFreeBytesUnlimited{};
  shared_ptr<long> paiedBytes{};
  shared_ptr<long> quotaEndTimestamp{};
  shared_ptr<long> quotaStartTimestamp{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<long> totalFreeBytes{};
  shared_ptr<long> usedFullBytes{};
  shared_ptr<long> usedIncrementBytes{};

  DescribeBackupPlanBillingResponseBodyItem() {}

  explicit DescribeBackupPlanBillingResponseBodyItem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buyChargeType) {
      res["BuyChargeType"] = boost::any(*buyChargeType);
    }
    if (buyCreateTimestamp) {
      res["BuyCreateTimestamp"] = boost::any(*buyCreateTimestamp);
    }
    if (buyExpiredTimestamp) {
      res["BuyExpiredTimestamp"] = boost::any(*buyExpiredTimestamp);
    }
    if (buySpec) {
      res["BuySpec"] = boost::any(*buySpec);
    }
    if (contStorageSize) {
      res["ContStorageSize"] = boost::any(*contStorageSize);
    }
    if (fullStorageSize) {
      res["FullStorageSize"] = boost::any(*fullStorageSize);
    }
    if (isExpired) {
      res["IsExpired"] = boost::any(*isExpired);
    }
    if (isFreeBytesUnlimited) {
      res["IsFreeBytesUnlimited"] = boost::any(*isFreeBytesUnlimited);
    }
    if (paiedBytes) {
      res["PaiedBytes"] = boost::any(*paiedBytes);
    }
    if (quotaEndTimestamp) {
      res["QuotaEndTimestamp"] = boost::any(*quotaEndTimestamp);
    }
    if (quotaStartTimestamp) {
      res["QuotaStartTimestamp"] = boost::any(*quotaStartTimestamp);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (totalFreeBytes) {
      res["TotalFreeBytes"] = boost::any(*totalFreeBytes);
    }
    if (usedFullBytes) {
      res["UsedFullBytes"] = boost::any(*usedFullBytes);
    }
    if (usedIncrementBytes) {
      res["UsedIncrementBytes"] = boost::any(*usedIncrementBytes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BuyChargeType") != m.end() && !m["BuyChargeType"].empty()) {
      buyChargeType = make_shared<string>(boost::any_cast<string>(m["BuyChargeType"]));
    }
    if (m.find("BuyCreateTimestamp") != m.end() && !m["BuyCreateTimestamp"].empty()) {
      buyCreateTimestamp = make_shared<long>(boost::any_cast<long>(m["BuyCreateTimestamp"]));
    }
    if (m.find("BuyExpiredTimestamp") != m.end() && !m["BuyExpiredTimestamp"].empty()) {
      buyExpiredTimestamp = make_shared<long>(boost::any_cast<long>(m["BuyExpiredTimestamp"]));
    }
    if (m.find("BuySpec") != m.end() && !m["BuySpec"].empty()) {
      buySpec = make_shared<string>(boost::any_cast<string>(m["BuySpec"]));
    }
    if (m.find("ContStorageSize") != m.end() && !m["ContStorageSize"].empty()) {
      contStorageSize = make_shared<long>(boost::any_cast<long>(m["ContStorageSize"]));
    }
    if (m.find("FullStorageSize") != m.end() && !m["FullStorageSize"].empty()) {
      fullStorageSize = make_shared<long>(boost::any_cast<long>(m["FullStorageSize"]));
    }
    if (m.find("IsExpired") != m.end() && !m["IsExpired"].empty()) {
      isExpired = make_shared<bool>(boost::any_cast<bool>(m["IsExpired"]));
    }
    if (m.find("IsFreeBytesUnlimited") != m.end() && !m["IsFreeBytesUnlimited"].empty()) {
      isFreeBytesUnlimited = make_shared<bool>(boost::any_cast<bool>(m["IsFreeBytesUnlimited"]));
    }
    if (m.find("PaiedBytes") != m.end() && !m["PaiedBytes"].empty()) {
      paiedBytes = make_shared<long>(boost::any_cast<long>(m["PaiedBytes"]));
    }
    if (m.find("QuotaEndTimestamp") != m.end() && !m["QuotaEndTimestamp"].empty()) {
      quotaEndTimestamp = make_shared<long>(boost::any_cast<long>(m["QuotaEndTimestamp"]));
    }
    if (m.find("QuotaStartTimestamp") != m.end() && !m["QuotaStartTimestamp"].empty()) {
      quotaStartTimestamp = make_shared<long>(boost::any_cast<long>(m["QuotaStartTimestamp"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("TotalFreeBytes") != m.end() && !m["TotalFreeBytes"].empty()) {
      totalFreeBytes = make_shared<long>(boost::any_cast<long>(m["TotalFreeBytes"]));
    }
    if (m.find("UsedFullBytes") != m.end() && !m["UsedFullBytes"].empty()) {
      usedFullBytes = make_shared<long>(boost::any_cast<long>(m["UsedFullBytes"]));
    }
    if (m.find("UsedIncrementBytes") != m.end() && !m["UsedIncrementBytes"].empty()) {
      usedIncrementBytes = make_shared<long>(boost::any_cast<long>(m["UsedIncrementBytes"]));
    }
  }


  virtual ~DescribeBackupPlanBillingResponseBodyItem() = default;
};
class DescribeBackupPlanBillingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<DescribeBackupPlanBillingResponseBodyItem> item{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeBackupPlanBillingResponseBody() {}

  explicit DescribeBackupPlanBillingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (item) {
      res["Item"] = item ? boost::any(item->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Item") != m.end() && !m["Item"].empty()) {
      if (typeid(map<string, boost::any>) == m["Item"].type()) {
        DescribeBackupPlanBillingResponseBodyItem model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Item"]));
        item = make_shared<DescribeBackupPlanBillingResponseBodyItem>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DescribeBackupPlanBillingResponseBody() = default;
};
class DescribeBackupPlanBillingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeBackupPlanBillingResponseBody> body{};

  DescribeBackupPlanBillingResponse() {}

  explicit DescribeBackupPlanBillingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeBackupPlanBillingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeBackupPlanBillingResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeBackupPlanBillingResponse() = default;
};
class DescribeBackupPlanListRequest : public Darabonba::Model {
public:
  shared_ptr<string> backupPlanId{};
  shared_ptr<string> backupPlanName{};
  shared_ptr<string> backupPlanStatus{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> ownerId{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> region{};
  shared_ptr<string> resourceGroupId{};

  DescribeBackupPlanListRequest() {}

  explicit DescribeBackupPlanListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupPlanId) {
      res["BackupPlanId"] = boost::any(*backupPlanId);
    }
    if (backupPlanName) {
      res["BackupPlanName"] = boost::any(*backupPlanName);
    }
    if (backupPlanStatus) {
      res["BackupPlanStatus"] = boost::any(*backupPlanStatus);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupPlanId") != m.end() && !m["BackupPlanId"].empty()) {
      backupPlanId = make_shared<string>(boost::any_cast<string>(m["BackupPlanId"]));
    }
    if (m.find("BackupPlanName") != m.end() && !m["BackupPlanName"].empty()) {
      backupPlanName = make_shared<string>(boost::any_cast<string>(m["BackupPlanName"]));
    }
    if (m.find("BackupPlanStatus") != m.end() && !m["BackupPlanStatus"].empty()) {
      backupPlanStatus = make_shared<string>(boost::any_cast<string>(m["BackupPlanStatus"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~DescribeBackupPlanListRequest() = default;
};
class DescribeBackupPlanListResponseBodyItemsBackupPlanDetail : public Darabonba::Model {
public:
  shared_ptr<long> backupGatewayId{};
  shared_ptr<string> backupMethod{};
  shared_ptr<string> backupObjects{};
  shared_ptr<string> backupPeriod{};
  shared_ptr<long> backupPlanCreateTime{};
  shared_ptr<string> backupPlanId{};
  shared_ptr<string> backupPlanName{};
  shared_ptr<string> backupPlanStatus{};
  shared_ptr<long> backupRetentionPeriod{};
  shared_ptr<string> backupSetDownloadDir{};
  shared_ptr<string> backupSetDownloadFullDataFormat{};
  shared_ptr<long> backupSetDownloadGatewayId{};
  shared_ptr<string> backupSetDownloadIncrementDataFormat{};
  shared_ptr<string> backupSetDownloadTargetType{};
  shared_ptr<string> backupStartTime{};
  shared_ptr<string> backupStorageType{};
  shared_ptr<long> beginTimestampForRestore{};
  shared_ptr<string> crossAliyunId{};
  shared_ptr<string> crossRoleName{};
  shared_ptr<long> duplicationArchivePeriod{};
  shared_ptr<long> duplicationInfrequentAccessPeriod{};
  shared_ptr<bool> enableBackupLog{};
  shared_ptr<long> endTimestampForRestore{};
  shared_ptr<string> errMessage{};
  shared_ptr<string> instanceClass{};
  shared_ptr<string> OSSBucketName{};
  shared_ptr<string> OSSBucketRegion{};
  shared_ptr<bool> openBackupSetAutoDownload{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> sourceEndpointDatabaseName{};
  shared_ptr<string> sourceEndpointInstanceID{};
  shared_ptr<string> sourceEndpointInstanceType{};
  shared_ptr<string> sourceEndpointIpPort{};
  shared_ptr<string> sourceEndpointOracleSID{};
  shared_ptr<string> sourceEndpointRegion{};
  shared_ptr<string> sourceEndpointUserName{};

  DescribeBackupPlanListResponseBodyItemsBackupPlanDetail() {}

  explicit DescribeBackupPlanListResponseBodyItemsBackupPlanDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupGatewayId) {
      res["BackupGatewayId"] = boost::any(*backupGatewayId);
    }
    if (backupMethod) {
      res["BackupMethod"] = boost::any(*backupMethod);
    }
    if (backupObjects) {
      res["BackupObjects"] = boost::any(*backupObjects);
    }
    if (backupPeriod) {
      res["BackupPeriod"] = boost::any(*backupPeriod);
    }
    if (backupPlanCreateTime) {
      res["BackupPlanCreateTime"] = boost::any(*backupPlanCreateTime);
    }
    if (backupPlanId) {
      res["BackupPlanId"] = boost::any(*backupPlanId);
    }
    if (backupPlanName) {
      res["BackupPlanName"] = boost::any(*backupPlanName);
    }
    if (backupPlanStatus) {
      res["BackupPlanStatus"] = boost::any(*backupPlanStatus);
    }
    if (backupRetentionPeriod) {
      res["BackupRetentionPeriod"] = boost::any(*backupRetentionPeriod);
    }
    if (backupSetDownloadDir) {
      res["BackupSetDownloadDir"] = boost::any(*backupSetDownloadDir);
    }
    if (backupSetDownloadFullDataFormat) {
      res["BackupSetDownloadFullDataFormat"] = boost::any(*backupSetDownloadFullDataFormat);
    }
    if (backupSetDownloadGatewayId) {
      res["BackupSetDownloadGatewayId"] = boost::any(*backupSetDownloadGatewayId);
    }
    if (backupSetDownloadIncrementDataFormat) {
      res["BackupSetDownloadIncrementDataFormat"] = boost::any(*backupSetDownloadIncrementDataFormat);
    }
    if (backupSetDownloadTargetType) {
      res["BackupSetDownloadTargetType"] = boost::any(*backupSetDownloadTargetType);
    }
    if (backupStartTime) {
      res["BackupStartTime"] = boost::any(*backupStartTime);
    }
    if (backupStorageType) {
      res["BackupStorageType"] = boost::any(*backupStorageType);
    }
    if (beginTimestampForRestore) {
      res["BeginTimestampForRestore"] = boost::any(*beginTimestampForRestore);
    }
    if (crossAliyunId) {
      res["CrossAliyunId"] = boost::any(*crossAliyunId);
    }
    if (crossRoleName) {
      res["CrossRoleName"] = boost::any(*crossRoleName);
    }
    if (duplicationArchivePeriod) {
      res["DuplicationArchivePeriod"] = boost::any(*duplicationArchivePeriod);
    }
    if (duplicationInfrequentAccessPeriod) {
      res["DuplicationInfrequentAccessPeriod"] = boost::any(*duplicationInfrequentAccessPeriod);
    }
    if (enableBackupLog) {
      res["EnableBackupLog"] = boost::any(*enableBackupLog);
    }
    if (endTimestampForRestore) {
      res["EndTimestampForRestore"] = boost::any(*endTimestampForRestore);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
    }
    if (instanceClass) {
      res["InstanceClass"] = boost::any(*instanceClass);
    }
    if (OSSBucketName) {
      res["OSSBucketName"] = boost::any(*OSSBucketName);
    }
    if (OSSBucketRegion) {
      res["OSSBucketRegion"] = boost::any(*OSSBucketRegion);
    }
    if (openBackupSetAutoDownload) {
      res["OpenBackupSetAutoDownload"] = boost::any(*openBackupSetAutoDownload);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (sourceEndpointDatabaseName) {
      res["SourceEndpointDatabaseName"] = boost::any(*sourceEndpointDatabaseName);
    }
    if (sourceEndpointInstanceID) {
      res["SourceEndpointInstanceID"] = boost::any(*sourceEndpointInstanceID);
    }
    if (sourceEndpointInstanceType) {
      res["SourceEndpointInstanceType"] = boost::any(*sourceEndpointInstanceType);
    }
    if (sourceEndpointIpPort) {
      res["SourceEndpointIpPort"] = boost::any(*sourceEndpointIpPort);
    }
    if (sourceEndpointOracleSID) {
      res["SourceEndpointOracleSID"] = boost::any(*sourceEndpointOracleSID);
    }
    if (sourceEndpointRegion) {
      res["SourceEndpointRegion"] = boost::any(*sourceEndpointRegion);
    }
    if (sourceEndpointUserName) {
      res["SourceEndpointUserName"] = boost::any(*sourceEndpointUserName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupGatewayId") != m.end() && !m["BackupGatewayId"].empty()) {
      backupGatewayId = make_shared<long>(boost::any_cast<long>(m["BackupGatewayId"]));
    }
    if (m.find("BackupMethod") != m.end() && !m["BackupMethod"].empty()) {
      backupMethod = make_shared<string>(boost::any_cast<string>(m["BackupMethod"]));
    }
    if (m.find("BackupObjects") != m.end() && !m["BackupObjects"].empty()) {
      backupObjects = make_shared<string>(boost::any_cast<string>(m["BackupObjects"]));
    }
    if (m.find("BackupPeriod") != m.end() && !m["BackupPeriod"].empty()) {
      backupPeriod = make_shared<string>(boost::any_cast<string>(m["BackupPeriod"]));
    }
    if (m.find("BackupPlanCreateTime") != m.end() && !m["BackupPlanCreateTime"].empty()) {
      backupPlanCreateTime = make_shared<long>(boost::any_cast<long>(m["BackupPlanCreateTime"]));
    }
    if (m.find("BackupPlanId") != m.end() && !m["BackupPlanId"].empty()) {
      backupPlanId = make_shared<string>(boost::any_cast<string>(m["BackupPlanId"]));
    }
    if (m.find("BackupPlanName") != m.end() && !m["BackupPlanName"].empty()) {
      backupPlanName = make_shared<string>(boost::any_cast<string>(m["BackupPlanName"]));
    }
    if (m.find("BackupPlanStatus") != m.end() && !m["BackupPlanStatus"].empty()) {
      backupPlanStatus = make_shared<string>(boost::any_cast<string>(m["BackupPlanStatus"]));
    }
    if (m.find("BackupRetentionPeriod") != m.end() && !m["BackupRetentionPeriod"].empty()) {
      backupRetentionPeriod = make_shared<long>(boost::any_cast<long>(m["BackupRetentionPeriod"]));
    }
    if (m.find("BackupSetDownloadDir") != m.end() && !m["BackupSetDownloadDir"].empty()) {
      backupSetDownloadDir = make_shared<string>(boost::any_cast<string>(m["BackupSetDownloadDir"]));
    }
    if (m.find("BackupSetDownloadFullDataFormat") != m.end() && !m["BackupSetDownloadFullDataFormat"].empty()) {
      backupSetDownloadFullDataFormat = make_shared<string>(boost::any_cast<string>(m["BackupSetDownloadFullDataFormat"]));
    }
    if (m.find("BackupSetDownloadGatewayId") != m.end() && !m["BackupSetDownloadGatewayId"].empty()) {
      backupSetDownloadGatewayId = make_shared<long>(boost::any_cast<long>(m["BackupSetDownloadGatewayId"]));
    }
    if (m.find("BackupSetDownloadIncrementDataFormat") != m.end() && !m["BackupSetDownloadIncrementDataFormat"].empty()) {
      backupSetDownloadIncrementDataFormat = make_shared<string>(boost::any_cast<string>(m["BackupSetDownloadIncrementDataFormat"]));
    }
    if (m.find("BackupSetDownloadTargetType") != m.end() && !m["BackupSetDownloadTargetType"].empty()) {
      backupSetDownloadTargetType = make_shared<string>(boost::any_cast<string>(m["BackupSetDownloadTargetType"]));
    }
    if (m.find("BackupStartTime") != m.end() && !m["BackupStartTime"].empty()) {
      backupStartTime = make_shared<string>(boost::any_cast<string>(m["BackupStartTime"]));
    }
    if (m.find("BackupStorageType") != m.end() && !m["BackupStorageType"].empty()) {
      backupStorageType = make_shared<string>(boost::any_cast<string>(m["BackupStorageType"]));
    }
    if (m.find("BeginTimestampForRestore") != m.end() && !m["BeginTimestampForRestore"].empty()) {
      beginTimestampForRestore = make_shared<long>(boost::any_cast<long>(m["BeginTimestampForRestore"]));
    }
    if (m.find("CrossAliyunId") != m.end() && !m["CrossAliyunId"].empty()) {
      crossAliyunId = make_shared<string>(boost::any_cast<string>(m["CrossAliyunId"]));
    }
    if (m.find("CrossRoleName") != m.end() && !m["CrossRoleName"].empty()) {
      crossRoleName = make_shared<string>(boost::any_cast<string>(m["CrossRoleName"]));
    }
    if (m.find("DuplicationArchivePeriod") != m.end() && !m["DuplicationArchivePeriod"].empty()) {
      duplicationArchivePeriod = make_shared<long>(boost::any_cast<long>(m["DuplicationArchivePeriod"]));
    }
    if (m.find("DuplicationInfrequentAccessPeriod") != m.end() && !m["DuplicationInfrequentAccessPeriod"].empty()) {
      duplicationInfrequentAccessPeriod = make_shared<long>(boost::any_cast<long>(m["DuplicationInfrequentAccessPeriod"]));
    }
    if (m.find("EnableBackupLog") != m.end() && !m["EnableBackupLog"].empty()) {
      enableBackupLog = make_shared<bool>(boost::any_cast<bool>(m["EnableBackupLog"]));
    }
    if (m.find("EndTimestampForRestore") != m.end() && !m["EndTimestampForRestore"].empty()) {
      endTimestampForRestore = make_shared<long>(boost::any_cast<long>(m["EndTimestampForRestore"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("InstanceClass") != m.end() && !m["InstanceClass"].empty()) {
      instanceClass = make_shared<string>(boost::any_cast<string>(m["InstanceClass"]));
    }
    if (m.find("OSSBucketName") != m.end() && !m["OSSBucketName"].empty()) {
      OSSBucketName = make_shared<string>(boost::any_cast<string>(m["OSSBucketName"]));
    }
    if (m.find("OSSBucketRegion") != m.end() && !m["OSSBucketRegion"].empty()) {
      OSSBucketRegion = make_shared<string>(boost::any_cast<string>(m["OSSBucketRegion"]));
    }
    if (m.find("OpenBackupSetAutoDownload") != m.end() && !m["OpenBackupSetAutoDownload"].empty()) {
      openBackupSetAutoDownload = make_shared<bool>(boost::any_cast<bool>(m["OpenBackupSetAutoDownload"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SourceEndpointDatabaseName") != m.end() && !m["SourceEndpointDatabaseName"].empty()) {
      sourceEndpointDatabaseName = make_shared<string>(boost::any_cast<string>(m["SourceEndpointDatabaseName"]));
    }
    if (m.find("SourceEndpointInstanceID") != m.end() && !m["SourceEndpointInstanceID"].empty()) {
      sourceEndpointInstanceID = make_shared<string>(boost::any_cast<string>(m["SourceEndpointInstanceID"]));
    }
    if (m.find("SourceEndpointInstanceType") != m.end() && !m["SourceEndpointInstanceType"].empty()) {
      sourceEndpointInstanceType = make_shared<string>(boost::any_cast<string>(m["SourceEndpointInstanceType"]));
    }
    if (m.find("SourceEndpointIpPort") != m.end() && !m["SourceEndpointIpPort"].empty()) {
      sourceEndpointIpPort = make_shared<string>(boost::any_cast<string>(m["SourceEndpointIpPort"]));
    }
    if (m.find("SourceEndpointOracleSID") != m.end() && !m["SourceEndpointOracleSID"].empty()) {
      sourceEndpointOracleSID = make_shared<string>(boost::any_cast<string>(m["SourceEndpointOracleSID"]));
    }
    if (m.find("SourceEndpointRegion") != m.end() && !m["SourceEndpointRegion"].empty()) {
      sourceEndpointRegion = make_shared<string>(boost::any_cast<string>(m["SourceEndpointRegion"]));
    }
    if (m.find("SourceEndpointUserName") != m.end() && !m["SourceEndpointUserName"].empty()) {
      sourceEndpointUserName = make_shared<string>(boost::any_cast<string>(m["SourceEndpointUserName"]));
    }
  }


  virtual ~DescribeBackupPlanListResponseBodyItemsBackupPlanDetail() = default;
};
class DescribeBackupPlanListResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeBackupPlanListResponseBodyItemsBackupPlanDetail>> backupPlanDetail{};

  DescribeBackupPlanListResponseBodyItems() {}

  explicit DescribeBackupPlanListResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupPlanDetail) {
      vector<boost::any> temp1;
      for(auto item1:*backupPlanDetail){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BackupPlanDetail"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupPlanDetail") != m.end() && !m["BackupPlanDetail"].empty()) {
      if (typeid(vector<boost::any>) == m["BackupPlanDetail"].type()) {
        vector<DescribeBackupPlanListResponseBodyItemsBackupPlanDetail> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BackupPlanDetail"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeBackupPlanListResponseBodyItemsBackupPlanDetail model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        backupPlanDetail = make_shared<vector<DescribeBackupPlanListResponseBodyItemsBackupPlanDetail>>(expect1);
      }
    }
  }


  virtual ~DescribeBackupPlanListResponseBodyItems() = default;
};
class DescribeBackupPlanListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<DescribeBackupPlanListResponseBodyItems> items{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalElements{};
  shared_ptr<long> totalPages{};

  DescribeBackupPlanListResponseBody() {}

  explicit DescribeBackupPlanListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
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
    if (totalElements) {
      res["TotalElements"] = boost::any(*totalElements);
    }
    if (totalPages) {
      res["TotalPages"] = boost::any(*totalPages);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        DescribeBackupPlanListResponseBodyItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<DescribeBackupPlanListResponseBodyItems>(model1);
      }
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
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
    if (m.find("TotalElements") != m.end() && !m["TotalElements"].empty()) {
      totalElements = make_shared<long>(boost::any_cast<long>(m["TotalElements"]));
    }
    if (m.find("TotalPages") != m.end() && !m["TotalPages"].empty()) {
      totalPages = make_shared<long>(boost::any_cast<long>(m["TotalPages"]));
    }
  }


  virtual ~DescribeBackupPlanListResponseBody() = default;
};
class DescribeBackupPlanListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeBackupPlanListResponseBody> body{};

  DescribeBackupPlanListResponse() {}

  explicit DescribeBackupPlanListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeBackupPlanListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeBackupPlanListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeBackupPlanListResponse() = default;
};
class DescribeBackupSetDownloadTaskListRequest : public Darabonba::Model {
public:
  shared_ptr<string> backupPlanId{};
  shared_ptr<string> backupSetDownloadTaskId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> ownerId{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};

  DescribeBackupSetDownloadTaskListRequest() {}

  explicit DescribeBackupSetDownloadTaskListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupPlanId) {
      res["BackupPlanId"] = boost::any(*backupPlanId);
    }
    if (backupSetDownloadTaskId) {
      res["BackupSetDownloadTaskId"] = boost::any(*backupSetDownloadTaskId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
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
    if (m.find("BackupSetDownloadTaskId") != m.end() && !m["BackupSetDownloadTaskId"].empty()) {
      backupSetDownloadTaskId = make_shared<string>(boost::any_cast<string>(m["BackupSetDownloadTaskId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~DescribeBackupSetDownloadTaskListRequest() = default;
};
class DescribeBackupSetDownloadTaskListResponseBodyItemsBackupSetDownloadTaskDetail : public Darabonba::Model {
public:
  shared_ptr<long> backupGatewayId{};
  shared_ptr<string> backupPlanId{};
  shared_ptr<string> backupSetCode{};
  shared_ptr<string> backupSetDataFormat{};
  shared_ptr<long> backupSetDataSize{};
  shared_ptr<string> backupSetDbType{};
  shared_ptr<long> backupSetDownloadCreateTime{};
  shared_ptr<string> backupSetDownloadDir{};
  shared_ptr<long> backupSetDownloadFinishTime{};
  shared_ptr<string> backupSetDownloadInternetUrl{};
  shared_ptr<string> backupSetDownloadIntranetUrl{};
  shared_ptr<string> backupSetDownloadStatus{};
  shared_ptr<string> backupSetDownloadTargetType{};
  shared_ptr<string> backupSetDownloadTaskId{};
  shared_ptr<string> backupSetDownloadTaskName{};
  shared_ptr<string> backupSetDownloadWay{};
  shared_ptr<string> backupSetId{};
  shared_ptr<string> backupSetJobType{};
  shared_ptr<string> errMessage{};

  DescribeBackupSetDownloadTaskListResponseBodyItemsBackupSetDownloadTaskDetail() {}

  explicit DescribeBackupSetDownloadTaskListResponseBodyItemsBackupSetDownloadTaskDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupGatewayId) {
      res["BackupGatewayId"] = boost::any(*backupGatewayId);
    }
    if (backupPlanId) {
      res["BackupPlanId"] = boost::any(*backupPlanId);
    }
    if (backupSetCode) {
      res["BackupSetCode"] = boost::any(*backupSetCode);
    }
    if (backupSetDataFormat) {
      res["BackupSetDataFormat"] = boost::any(*backupSetDataFormat);
    }
    if (backupSetDataSize) {
      res["BackupSetDataSize"] = boost::any(*backupSetDataSize);
    }
    if (backupSetDbType) {
      res["BackupSetDbType"] = boost::any(*backupSetDbType);
    }
    if (backupSetDownloadCreateTime) {
      res["BackupSetDownloadCreateTime"] = boost::any(*backupSetDownloadCreateTime);
    }
    if (backupSetDownloadDir) {
      res["BackupSetDownloadDir"] = boost::any(*backupSetDownloadDir);
    }
    if (backupSetDownloadFinishTime) {
      res["BackupSetDownloadFinishTime"] = boost::any(*backupSetDownloadFinishTime);
    }
    if (backupSetDownloadInternetUrl) {
      res["BackupSetDownloadInternetUrl"] = boost::any(*backupSetDownloadInternetUrl);
    }
    if (backupSetDownloadIntranetUrl) {
      res["BackupSetDownloadIntranetUrl"] = boost::any(*backupSetDownloadIntranetUrl);
    }
    if (backupSetDownloadStatus) {
      res["BackupSetDownloadStatus"] = boost::any(*backupSetDownloadStatus);
    }
    if (backupSetDownloadTargetType) {
      res["BackupSetDownloadTargetType"] = boost::any(*backupSetDownloadTargetType);
    }
    if (backupSetDownloadTaskId) {
      res["BackupSetDownloadTaskId"] = boost::any(*backupSetDownloadTaskId);
    }
    if (backupSetDownloadTaskName) {
      res["BackupSetDownloadTaskName"] = boost::any(*backupSetDownloadTaskName);
    }
    if (backupSetDownloadWay) {
      res["BackupSetDownloadWay"] = boost::any(*backupSetDownloadWay);
    }
    if (backupSetId) {
      res["BackupSetId"] = boost::any(*backupSetId);
    }
    if (backupSetJobType) {
      res["BackupSetJobType"] = boost::any(*backupSetJobType);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupGatewayId") != m.end() && !m["BackupGatewayId"].empty()) {
      backupGatewayId = make_shared<long>(boost::any_cast<long>(m["BackupGatewayId"]));
    }
    if (m.find("BackupPlanId") != m.end() && !m["BackupPlanId"].empty()) {
      backupPlanId = make_shared<string>(boost::any_cast<string>(m["BackupPlanId"]));
    }
    if (m.find("BackupSetCode") != m.end() && !m["BackupSetCode"].empty()) {
      backupSetCode = make_shared<string>(boost::any_cast<string>(m["BackupSetCode"]));
    }
    if (m.find("BackupSetDataFormat") != m.end() && !m["BackupSetDataFormat"].empty()) {
      backupSetDataFormat = make_shared<string>(boost::any_cast<string>(m["BackupSetDataFormat"]));
    }
    if (m.find("BackupSetDataSize") != m.end() && !m["BackupSetDataSize"].empty()) {
      backupSetDataSize = make_shared<long>(boost::any_cast<long>(m["BackupSetDataSize"]));
    }
    if (m.find("BackupSetDbType") != m.end() && !m["BackupSetDbType"].empty()) {
      backupSetDbType = make_shared<string>(boost::any_cast<string>(m["BackupSetDbType"]));
    }
    if (m.find("BackupSetDownloadCreateTime") != m.end() && !m["BackupSetDownloadCreateTime"].empty()) {
      backupSetDownloadCreateTime = make_shared<long>(boost::any_cast<long>(m["BackupSetDownloadCreateTime"]));
    }
    if (m.find("BackupSetDownloadDir") != m.end() && !m["BackupSetDownloadDir"].empty()) {
      backupSetDownloadDir = make_shared<string>(boost::any_cast<string>(m["BackupSetDownloadDir"]));
    }
    if (m.find("BackupSetDownloadFinishTime") != m.end() && !m["BackupSetDownloadFinishTime"].empty()) {
      backupSetDownloadFinishTime = make_shared<long>(boost::any_cast<long>(m["BackupSetDownloadFinishTime"]));
    }
    if (m.find("BackupSetDownloadInternetUrl") != m.end() && !m["BackupSetDownloadInternetUrl"].empty()) {
      backupSetDownloadInternetUrl = make_shared<string>(boost::any_cast<string>(m["BackupSetDownloadInternetUrl"]));
    }
    if (m.find("BackupSetDownloadIntranetUrl") != m.end() && !m["BackupSetDownloadIntranetUrl"].empty()) {
      backupSetDownloadIntranetUrl = make_shared<string>(boost::any_cast<string>(m["BackupSetDownloadIntranetUrl"]));
    }
    if (m.find("BackupSetDownloadStatus") != m.end() && !m["BackupSetDownloadStatus"].empty()) {
      backupSetDownloadStatus = make_shared<string>(boost::any_cast<string>(m["BackupSetDownloadStatus"]));
    }
    if (m.find("BackupSetDownloadTargetType") != m.end() && !m["BackupSetDownloadTargetType"].empty()) {
      backupSetDownloadTargetType = make_shared<string>(boost::any_cast<string>(m["BackupSetDownloadTargetType"]));
    }
    if (m.find("BackupSetDownloadTaskId") != m.end() && !m["BackupSetDownloadTaskId"].empty()) {
      backupSetDownloadTaskId = make_shared<string>(boost::any_cast<string>(m["BackupSetDownloadTaskId"]));
    }
    if (m.find("BackupSetDownloadTaskName") != m.end() && !m["BackupSetDownloadTaskName"].empty()) {
      backupSetDownloadTaskName = make_shared<string>(boost::any_cast<string>(m["BackupSetDownloadTaskName"]));
    }
    if (m.find("BackupSetDownloadWay") != m.end() && !m["BackupSetDownloadWay"].empty()) {
      backupSetDownloadWay = make_shared<string>(boost::any_cast<string>(m["BackupSetDownloadWay"]));
    }
    if (m.find("BackupSetId") != m.end() && !m["BackupSetId"].empty()) {
      backupSetId = make_shared<string>(boost::any_cast<string>(m["BackupSetId"]));
    }
    if (m.find("BackupSetJobType") != m.end() && !m["BackupSetJobType"].empty()) {
      backupSetJobType = make_shared<string>(boost::any_cast<string>(m["BackupSetJobType"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
  }


  virtual ~DescribeBackupSetDownloadTaskListResponseBodyItemsBackupSetDownloadTaskDetail() = default;
};
class DescribeBackupSetDownloadTaskListResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeBackupSetDownloadTaskListResponseBodyItemsBackupSetDownloadTaskDetail>> backupSetDownloadTaskDetail{};

  DescribeBackupSetDownloadTaskListResponseBodyItems() {}

  explicit DescribeBackupSetDownloadTaskListResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupSetDownloadTaskDetail) {
      vector<boost::any> temp1;
      for(auto item1:*backupSetDownloadTaskDetail){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BackupSetDownloadTaskDetail"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupSetDownloadTaskDetail") != m.end() && !m["BackupSetDownloadTaskDetail"].empty()) {
      if (typeid(vector<boost::any>) == m["BackupSetDownloadTaskDetail"].type()) {
        vector<DescribeBackupSetDownloadTaskListResponseBodyItemsBackupSetDownloadTaskDetail> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BackupSetDownloadTaskDetail"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeBackupSetDownloadTaskListResponseBodyItemsBackupSetDownloadTaskDetail model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        backupSetDownloadTaskDetail = make_shared<vector<DescribeBackupSetDownloadTaskListResponseBodyItemsBackupSetDownloadTaskDetail>>(expect1);
      }
    }
  }


  virtual ~DescribeBackupSetDownloadTaskListResponseBodyItems() = default;
};
class DescribeBackupSetDownloadTaskListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<DescribeBackupSetDownloadTaskListResponseBodyItems> items{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalElements{};
  shared_ptr<long> totalPages{};

  DescribeBackupSetDownloadTaskListResponseBody() {}

  explicit DescribeBackupSetDownloadTaskListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
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
    if (totalElements) {
      res["TotalElements"] = boost::any(*totalElements);
    }
    if (totalPages) {
      res["TotalPages"] = boost::any(*totalPages);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        DescribeBackupSetDownloadTaskListResponseBodyItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<DescribeBackupSetDownloadTaskListResponseBodyItems>(model1);
      }
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
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
    if (m.find("TotalElements") != m.end() && !m["TotalElements"].empty()) {
      totalElements = make_shared<long>(boost::any_cast<long>(m["TotalElements"]));
    }
    if (m.find("TotalPages") != m.end() && !m["TotalPages"].empty()) {
      totalPages = make_shared<long>(boost::any_cast<long>(m["TotalPages"]));
    }
  }


  virtual ~DescribeBackupSetDownloadTaskListResponseBody() = default;
};
class DescribeBackupSetDownloadTaskListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeBackupSetDownloadTaskListResponseBody> body{};

  DescribeBackupSetDownloadTaskListResponse() {}

  explicit DescribeBackupSetDownloadTaskListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeBackupSetDownloadTaskListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeBackupSetDownloadTaskListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeBackupSetDownloadTaskListResponse() = default;
};
class DescribeDLAServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> backupPlanId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> ownerId{};

  DescribeDLAServiceRequest() {}

  explicit DescribeDLAServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupPlanId) {
      res["BackupPlanId"] = boost::any(*backupPlanId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupPlanId") != m.end() && !m["BackupPlanId"].empty()) {
      backupPlanId = make_shared<string>(boost::any_cast<string>(m["BackupPlanId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
  }


  virtual ~DescribeDLAServiceRequest() = default;
};
class DescribeDLAServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> autoAdd{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<bool> haveJobFailed{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<string> state{};
  shared_ptr<bool> success{};

  DescribeDLAServiceResponseBody() {}

  explicit DescribeDLAServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoAdd) {
      res["AutoAdd"] = boost::any(*autoAdd);
    }
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
    }
    if (haveJobFailed) {
      res["HaveJobFailed"] = boost::any(*haveJobFailed);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoAdd") != m.end() && !m["AutoAdd"].empty()) {
      autoAdd = make_shared<bool>(boost::any_cast<bool>(m["AutoAdd"]));
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("HaveJobFailed") != m.end() && !m["HaveJobFailed"].empty()) {
      haveJobFailed = make_shared<bool>(boost::any_cast<bool>(m["HaveJobFailed"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DescribeDLAServiceResponseBody() = default;
};
class DescribeDLAServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDLAServiceResponseBody> body{};

  DescribeDLAServiceResponse() {}

  explicit DescribeDLAServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDLAServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDLAServiceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDLAServiceResponse() = default;
};
class DescribeFullBackupListRequest : public Darabonba::Model {
public:
  shared_ptr<string> backupPlanId{};
  shared_ptr<string> backupSetId{};
  shared_ptr<string> clientToken{};
  shared_ptr<long> endTimestamp{};
  shared_ptr<string> ownerId{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<bool> showStorageType{};
  shared_ptr<long> startTimestamp{};

  DescribeFullBackupListRequest() {}

  explicit DescribeFullBackupListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (endTimestamp) {
      res["EndTimestamp"] = boost::any(*endTimestamp);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (showStorageType) {
      res["ShowStorageType"] = boost::any(*showStorageType);
    }
    if (startTimestamp) {
      res["StartTimestamp"] = boost::any(*startTimestamp);
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
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("EndTimestamp") != m.end() && !m["EndTimestamp"].empty()) {
      endTimestamp = make_shared<long>(boost::any_cast<long>(m["EndTimestamp"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ShowStorageType") != m.end() && !m["ShowStorageType"].empty()) {
      showStorageType = make_shared<bool>(boost::any_cast<bool>(m["ShowStorageType"]));
    }
    if (m.find("StartTimestamp") != m.end() && !m["StartTimestamp"].empty()) {
      startTimestamp = make_shared<long>(boost::any_cast<long>(m["StartTimestamp"]));
    }
  }


  virtual ~DescribeFullBackupListRequest() = default;
};
class DescribeFullBackupListResponseBodyItemsFullBackupFile : public Darabonba::Model {
public:
  shared_ptr<string> backupObjects{};
  shared_ptr<long> backupSetExpiredTime{};
  shared_ptr<string> backupSetId{};
  shared_ptr<long> backupSize{};
  shared_ptr<string> backupStatus{};
  shared_ptr<long> createTime{};
  shared_ptr<long> endTime{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> finishTime{};
  shared_ptr<string> sourceEndpointIpPort{};
  shared_ptr<long> startTime{};
  shared_ptr<string> storageMethod{};

  DescribeFullBackupListResponseBodyItemsFullBackupFile() {}

  explicit DescribeFullBackupListResponseBodyItemsFullBackupFile(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupObjects) {
      res["BackupObjects"] = boost::any(*backupObjects);
    }
    if (backupSetExpiredTime) {
      res["BackupSetExpiredTime"] = boost::any(*backupSetExpiredTime);
    }
    if (backupSetId) {
      res["BackupSetId"] = boost::any(*backupSetId);
    }
    if (backupSize) {
      res["BackupSize"] = boost::any(*backupSize);
    }
    if (backupStatus) {
      res["BackupStatus"] = boost::any(*backupStatus);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
    }
    if (finishTime) {
      res["FinishTime"] = boost::any(*finishTime);
    }
    if (sourceEndpointIpPort) {
      res["SourceEndpointIpPort"] = boost::any(*sourceEndpointIpPort);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (storageMethod) {
      res["StorageMethod"] = boost::any(*storageMethod);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupObjects") != m.end() && !m["BackupObjects"].empty()) {
      backupObjects = make_shared<string>(boost::any_cast<string>(m["BackupObjects"]));
    }
    if (m.find("BackupSetExpiredTime") != m.end() && !m["BackupSetExpiredTime"].empty()) {
      backupSetExpiredTime = make_shared<long>(boost::any_cast<long>(m["BackupSetExpiredTime"]));
    }
    if (m.find("BackupSetId") != m.end() && !m["BackupSetId"].empty()) {
      backupSetId = make_shared<string>(boost::any_cast<string>(m["BackupSetId"]));
    }
    if (m.find("BackupSize") != m.end() && !m["BackupSize"].empty()) {
      backupSize = make_shared<long>(boost::any_cast<long>(m["BackupSize"]));
    }
    if (m.find("BackupStatus") != m.end() && !m["BackupStatus"].empty()) {
      backupStatus = make_shared<string>(boost::any_cast<string>(m["BackupStatus"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("FinishTime") != m.end() && !m["FinishTime"].empty()) {
      finishTime = make_shared<long>(boost::any_cast<long>(m["FinishTime"]));
    }
    if (m.find("SourceEndpointIpPort") != m.end() && !m["SourceEndpointIpPort"].empty()) {
      sourceEndpointIpPort = make_shared<string>(boost::any_cast<string>(m["SourceEndpointIpPort"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("StorageMethod") != m.end() && !m["StorageMethod"].empty()) {
      storageMethod = make_shared<string>(boost::any_cast<string>(m["StorageMethod"]));
    }
  }


  virtual ~DescribeFullBackupListResponseBodyItemsFullBackupFile() = default;
};
class DescribeFullBackupListResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeFullBackupListResponseBodyItemsFullBackupFile>> fullBackupFile{};

  DescribeFullBackupListResponseBodyItems() {}

  explicit DescribeFullBackupListResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fullBackupFile) {
      vector<boost::any> temp1;
      for(auto item1:*fullBackupFile){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FullBackupFile"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FullBackupFile") != m.end() && !m["FullBackupFile"].empty()) {
      if (typeid(vector<boost::any>) == m["FullBackupFile"].type()) {
        vector<DescribeFullBackupListResponseBodyItemsFullBackupFile> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FullBackupFile"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeFullBackupListResponseBodyItemsFullBackupFile model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fullBackupFile = make_shared<vector<DescribeFullBackupListResponseBodyItemsFullBackupFile>>(expect1);
      }
    }
  }


  virtual ~DescribeFullBackupListResponseBodyItems() = default;
};
class DescribeFullBackupListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<DescribeFullBackupListResponseBodyItems> items{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalElements{};
  shared_ptr<long> totalPages{};

  DescribeFullBackupListResponseBody() {}

  explicit DescribeFullBackupListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
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
    if (totalElements) {
      res["TotalElements"] = boost::any(*totalElements);
    }
    if (totalPages) {
      res["TotalPages"] = boost::any(*totalPages);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        DescribeFullBackupListResponseBodyItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<DescribeFullBackupListResponseBodyItems>(model1);
      }
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
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
    if (m.find("TotalElements") != m.end() && !m["TotalElements"].empty()) {
      totalElements = make_shared<long>(boost::any_cast<long>(m["TotalElements"]));
    }
    if (m.find("TotalPages") != m.end() && !m["TotalPages"].empty()) {
      totalPages = make_shared<long>(boost::any_cast<long>(m["TotalPages"]));
    }
  }


  virtual ~DescribeFullBackupListResponseBody() = default;
};
class DescribeFullBackupListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeFullBackupListResponseBody> body{};

  DescribeFullBackupListResponse() {}

  explicit DescribeFullBackupListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeFullBackupListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeFullBackupListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeFullBackupListResponse() = default;
};
class DescribeIncrementBackupListRequest : public Darabonba::Model {
public:
  shared_ptr<string> backupPlanId{};
  shared_ptr<string> clientToken{};
  shared_ptr<long> endTimestamp{};
  shared_ptr<string> ownerId{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<bool> showStorageType{};
  shared_ptr<long> startTimestamp{};

  DescribeIncrementBackupListRequest() {}

  explicit DescribeIncrementBackupListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupPlanId) {
      res["BackupPlanId"] = boost::any(*backupPlanId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (endTimestamp) {
      res["EndTimestamp"] = boost::any(*endTimestamp);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (showStorageType) {
      res["ShowStorageType"] = boost::any(*showStorageType);
    }
    if (startTimestamp) {
      res["StartTimestamp"] = boost::any(*startTimestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupPlanId") != m.end() && !m["BackupPlanId"].empty()) {
      backupPlanId = make_shared<string>(boost::any_cast<string>(m["BackupPlanId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("EndTimestamp") != m.end() && !m["EndTimestamp"].empty()) {
      endTimestamp = make_shared<long>(boost::any_cast<long>(m["EndTimestamp"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ShowStorageType") != m.end() && !m["ShowStorageType"].empty()) {
      showStorageType = make_shared<bool>(boost::any_cast<bool>(m["ShowStorageType"]));
    }
    if (m.find("StartTimestamp") != m.end() && !m["StartTimestamp"].empty()) {
      startTimestamp = make_shared<long>(boost::any_cast<long>(m["StartTimestamp"]));
    }
  }


  virtual ~DescribeIncrementBackupListRequest() = default;
};
class DescribeIncrementBackupListResponseBodyItemsIncrementBackupFile : public Darabonba::Model {
public:
  shared_ptr<long> backupSetExpiredTime{};
  shared_ptr<string> backupSetId{};
  shared_ptr<string> backupSetJobId{};
  shared_ptr<long> backupSize{};
  shared_ptr<string> backupStatus{};
  shared_ptr<long> endTime{};
  shared_ptr<string> sourceEndpointIpPort{};
  shared_ptr<long> startTime{};
  shared_ptr<string> storageMethod{};

  DescribeIncrementBackupListResponseBodyItemsIncrementBackupFile() {}

  explicit DescribeIncrementBackupListResponseBodyItemsIncrementBackupFile(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupSetExpiredTime) {
      res["BackupSetExpiredTime"] = boost::any(*backupSetExpiredTime);
    }
    if (backupSetId) {
      res["BackupSetId"] = boost::any(*backupSetId);
    }
    if (backupSetJobId) {
      res["BackupSetJobId"] = boost::any(*backupSetJobId);
    }
    if (backupSize) {
      res["BackupSize"] = boost::any(*backupSize);
    }
    if (backupStatus) {
      res["BackupStatus"] = boost::any(*backupStatus);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (sourceEndpointIpPort) {
      res["SourceEndpointIpPort"] = boost::any(*sourceEndpointIpPort);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (storageMethod) {
      res["StorageMethod"] = boost::any(*storageMethod);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupSetExpiredTime") != m.end() && !m["BackupSetExpiredTime"].empty()) {
      backupSetExpiredTime = make_shared<long>(boost::any_cast<long>(m["BackupSetExpiredTime"]));
    }
    if (m.find("BackupSetId") != m.end() && !m["BackupSetId"].empty()) {
      backupSetId = make_shared<string>(boost::any_cast<string>(m["BackupSetId"]));
    }
    if (m.find("BackupSetJobId") != m.end() && !m["BackupSetJobId"].empty()) {
      backupSetJobId = make_shared<string>(boost::any_cast<string>(m["BackupSetJobId"]));
    }
    if (m.find("BackupSize") != m.end() && !m["BackupSize"].empty()) {
      backupSize = make_shared<long>(boost::any_cast<long>(m["BackupSize"]));
    }
    if (m.find("BackupStatus") != m.end() && !m["BackupStatus"].empty()) {
      backupStatus = make_shared<string>(boost::any_cast<string>(m["BackupStatus"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("SourceEndpointIpPort") != m.end() && !m["SourceEndpointIpPort"].empty()) {
      sourceEndpointIpPort = make_shared<string>(boost::any_cast<string>(m["SourceEndpointIpPort"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("StorageMethod") != m.end() && !m["StorageMethod"].empty()) {
      storageMethod = make_shared<string>(boost::any_cast<string>(m["StorageMethod"]));
    }
  }


  virtual ~DescribeIncrementBackupListResponseBodyItemsIncrementBackupFile() = default;
};
class DescribeIncrementBackupListResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeIncrementBackupListResponseBodyItemsIncrementBackupFile>> incrementBackupFile{};

  DescribeIncrementBackupListResponseBodyItems() {}

  explicit DescribeIncrementBackupListResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (incrementBackupFile) {
      vector<boost::any> temp1;
      for(auto item1:*incrementBackupFile){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["IncrementBackupFile"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IncrementBackupFile") != m.end() && !m["IncrementBackupFile"].empty()) {
      if (typeid(vector<boost::any>) == m["IncrementBackupFile"].type()) {
        vector<DescribeIncrementBackupListResponseBodyItemsIncrementBackupFile> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["IncrementBackupFile"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeIncrementBackupListResponseBodyItemsIncrementBackupFile model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        incrementBackupFile = make_shared<vector<DescribeIncrementBackupListResponseBodyItemsIncrementBackupFile>>(expect1);
      }
    }
  }


  virtual ~DescribeIncrementBackupListResponseBodyItems() = default;
};
class DescribeIncrementBackupListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<DescribeIncrementBackupListResponseBodyItems> items{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalElements{};
  shared_ptr<long> totalPages{};

  DescribeIncrementBackupListResponseBody() {}

  explicit DescribeIncrementBackupListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
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
    if (totalElements) {
      res["TotalElements"] = boost::any(*totalElements);
    }
    if (totalPages) {
      res["TotalPages"] = boost::any(*totalPages);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        DescribeIncrementBackupListResponseBodyItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<DescribeIncrementBackupListResponseBodyItems>(model1);
      }
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
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
    if (m.find("TotalElements") != m.end() && !m["TotalElements"].empty()) {
      totalElements = make_shared<long>(boost::any_cast<long>(m["TotalElements"]));
    }
    if (m.find("TotalPages") != m.end() && !m["TotalPages"].empty()) {
      totalPages = make_shared<long>(boost::any_cast<long>(m["TotalPages"]));
    }
  }


  virtual ~DescribeIncrementBackupListResponseBody() = default;
};
class DescribeIncrementBackupListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeIncrementBackupListResponseBody> body{};

  DescribeIncrementBackupListResponse() {}

  explicit DescribeIncrementBackupListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeIncrementBackupListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeIncrementBackupListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeIncrementBackupListResponse() = default;
};
class DescribeJobErrorCodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> language{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> taskId{};

  DescribeJobErrorCodeRequest() {}

  explicit DescribeJobErrorCodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~DescribeJobErrorCodeRequest() = default;
};
class DescribeJobErrorCodeResponseBodyItem : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> jobId{};
  shared_ptr<string> jobState{};
  shared_ptr<string> jobType{};
  shared_ptr<string> language{};

  DescribeJobErrorCodeResponseBodyItem() {}

  explicit DescribeJobErrorCodeResponseBodyItem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (jobState) {
      res["JobState"] = boost::any(*jobState);
    }
    if (jobType) {
      res["JobType"] = boost::any(*jobType);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("JobState") != m.end() && !m["JobState"].empty()) {
      jobState = make_shared<string>(boost::any_cast<string>(m["JobState"]));
    }
    if (m.find("JobType") != m.end() && !m["JobType"].empty()) {
      jobType = make_shared<string>(boost::any_cast<string>(m["JobType"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
  }


  virtual ~DescribeJobErrorCodeResponseBodyItem() = default;
};
class DescribeJobErrorCodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<DescribeJobErrorCodeResponseBodyItem> item{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeJobErrorCodeResponseBody() {}

  explicit DescribeJobErrorCodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (item) {
      res["Item"] = item ? boost::any(item->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Item") != m.end() && !m["Item"].empty()) {
      if (typeid(map<string, boost::any>) == m["Item"].type()) {
        DescribeJobErrorCodeResponseBodyItem model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Item"]));
        item = make_shared<DescribeJobErrorCodeResponseBodyItem>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DescribeJobErrorCodeResponseBody() = default;
};
class DescribeJobErrorCodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeJobErrorCodeResponseBody> body{};

  DescribeJobErrorCodeResponse() {}

  explicit DescribeJobErrorCodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeJobErrorCodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeJobErrorCodeResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeJobErrorCodeResponse() = default;
};
class DescribeNodeCidrListRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> region{};

  DescribeNodeCidrListRequest() {}

  explicit DescribeNodeCidrListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
  }


  virtual ~DescribeNodeCidrListRequest() = default;
};
class DescribeNodeCidrListResponseBodyInternetIPs : public Darabonba::Model {
public:
  shared_ptr<vector<string>> internetIP{};

  DescribeNodeCidrListResponseBodyInternetIPs() {}

  explicit DescribeNodeCidrListResponseBodyInternetIPs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (internetIP) {
      res["InternetIP"] = boost::any(*internetIP);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InternetIP") != m.end() && !m["InternetIP"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InternetIP"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InternetIP"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      internetIP = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeNodeCidrListResponseBodyInternetIPs() = default;
};
class DescribeNodeCidrListResponseBodyIntranetIPs : public Darabonba::Model {
public:
  shared_ptr<vector<string>> intranetIP{};

  DescribeNodeCidrListResponseBodyIntranetIPs() {}

  explicit DescribeNodeCidrListResponseBodyIntranetIPs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (intranetIP) {
      res["IntranetIP"] = boost::any(*intranetIP);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IntranetIP") != m.end() && !m["IntranetIP"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["IntranetIP"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["IntranetIP"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      intranetIP = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeNodeCidrListResponseBodyIntranetIPs() = default;
};
class DescribeNodeCidrListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<DescribeNodeCidrListResponseBodyInternetIPs> internetIPs{};
  shared_ptr<DescribeNodeCidrListResponseBodyIntranetIPs> intranetIPs{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeNodeCidrListResponseBody() {}

  explicit DescribeNodeCidrListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (internetIPs) {
      res["InternetIPs"] = internetIPs ? boost::any(internetIPs->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (intranetIPs) {
      res["IntranetIPs"] = intranetIPs ? boost::any(intranetIPs->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("InternetIPs") != m.end() && !m["InternetIPs"].empty()) {
      if (typeid(map<string, boost::any>) == m["InternetIPs"].type()) {
        DescribeNodeCidrListResponseBodyInternetIPs model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InternetIPs"]));
        internetIPs = make_shared<DescribeNodeCidrListResponseBodyInternetIPs>(model1);
      }
    }
    if (m.find("IntranetIPs") != m.end() && !m["IntranetIPs"].empty()) {
      if (typeid(map<string, boost::any>) == m["IntranetIPs"].type()) {
        DescribeNodeCidrListResponseBodyIntranetIPs model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["IntranetIPs"]));
        intranetIPs = make_shared<DescribeNodeCidrListResponseBodyIntranetIPs>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DescribeNodeCidrListResponseBody() = default;
};
class DescribeNodeCidrListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeNodeCidrListResponseBody> body{};

  DescribeNodeCidrListResponse() {}

  explicit DescribeNodeCidrListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeNodeCidrListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeNodeCidrListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeNodeCidrListResponse() = default;
};
class DescribePreCheckProgressListRequest : public Darabonba::Model {
public:
  shared_ptr<string> backupPlanId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> restoreTaskId{};

  DescribePreCheckProgressListRequest() {}

  explicit DescribePreCheckProgressListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupPlanId) {
      res["BackupPlanId"] = boost::any(*backupPlanId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (restoreTaskId) {
      res["RestoreTaskId"] = boost::any(*restoreTaskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupPlanId") != m.end() && !m["BackupPlanId"].empty()) {
      backupPlanId = make_shared<string>(boost::any_cast<string>(m["BackupPlanId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("RestoreTaskId") != m.end() && !m["RestoreTaskId"].empty()) {
      restoreTaskId = make_shared<string>(boost::any_cast<string>(m["RestoreTaskId"]));
    }
  }


  virtual ~DescribePreCheckProgressListRequest() = default;
};
class DescribePreCheckProgressListResponseBodyItemsPreCheckProgressDetail : public Darabonba::Model {
public:
  shared_ptr<long> bootTime{};
  shared_ptr<string> errMsg{};
  shared_ptr<long> finishTime{};
  shared_ptr<string> item{};
  shared_ptr<string> jobId{};
  shared_ptr<string> names{};
  shared_ptr<string> orderNum{};
  shared_ptr<string> state{};

  DescribePreCheckProgressListResponseBodyItemsPreCheckProgressDetail() {}

  explicit DescribePreCheckProgressListResponseBodyItemsPreCheckProgressDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bootTime) {
      res["BootTime"] = boost::any(*bootTime);
    }
    if (errMsg) {
      res["ErrMsg"] = boost::any(*errMsg);
    }
    if (finishTime) {
      res["FinishTime"] = boost::any(*finishTime);
    }
    if (item) {
      res["Item"] = boost::any(*item);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (names) {
      res["Names"] = boost::any(*names);
    }
    if (orderNum) {
      res["OrderNum"] = boost::any(*orderNum);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BootTime") != m.end() && !m["BootTime"].empty()) {
      bootTime = make_shared<long>(boost::any_cast<long>(m["BootTime"]));
    }
    if (m.find("ErrMsg") != m.end() && !m["ErrMsg"].empty()) {
      errMsg = make_shared<string>(boost::any_cast<string>(m["ErrMsg"]));
    }
    if (m.find("FinishTime") != m.end() && !m["FinishTime"].empty()) {
      finishTime = make_shared<long>(boost::any_cast<long>(m["FinishTime"]));
    }
    if (m.find("Item") != m.end() && !m["Item"].empty()) {
      item = make_shared<string>(boost::any_cast<string>(m["Item"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("Names") != m.end() && !m["Names"].empty()) {
      names = make_shared<string>(boost::any_cast<string>(m["Names"]));
    }
    if (m.find("OrderNum") != m.end() && !m["OrderNum"].empty()) {
      orderNum = make_shared<string>(boost::any_cast<string>(m["OrderNum"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
  }


  virtual ~DescribePreCheckProgressListResponseBodyItemsPreCheckProgressDetail() = default;
};
class DescribePreCheckProgressListResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribePreCheckProgressListResponseBodyItemsPreCheckProgressDetail>> preCheckProgressDetail{};

  DescribePreCheckProgressListResponseBodyItems() {}

  explicit DescribePreCheckProgressListResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (preCheckProgressDetail) {
      vector<boost::any> temp1;
      for(auto item1:*preCheckProgressDetail){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PreCheckProgressDetail"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PreCheckProgressDetail") != m.end() && !m["PreCheckProgressDetail"].empty()) {
      if (typeid(vector<boost::any>) == m["PreCheckProgressDetail"].type()) {
        vector<DescribePreCheckProgressListResponseBodyItemsPreCheckProgressDetail> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PreCheckProgressDetail"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePreCheckProgressListResponseBodyItemsPreCheckProgressDetail model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        preCheckProgressDetail = make_shared<vector<DescribePreCheckProgressListResponseBodyItemsPreCheckProgressDetail>>(expect1);
      }
    }
  }


  virtual ~DescribePreCheckProgressListResponseBodyItems() = default;
};
class DescribePreCheckProgressListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<DescribePreCheckProgressListResponseBodyItems> items{};
  shared_ptr<long> progress{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<bool> success{};

  DescribePreCheckProgressListResponseBody() {}

  explicit DescribePreCheckProgressListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        DescribePreCheckProgressListResponseBodyItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<DescribePreCheckProgressListResponseBodyItems>(model1);
      }
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<long>(boost::any_cast<long>(m["Progress"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DescribePreCheckProgressListResponseBody() = default;
};
class DescribePreCheckProgressListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribePreCheckProgressListResponseBody> body{};

  DescribePreCheckProgressListResponse() {}

  explicit DescribePreCheckProgressListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribePreCheckProgressListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePreCheckProgressListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePreCheckProgressListResponse() = default;
};
class DescribeRegionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> ownerId{};

  DescribeRegionsRequest() {}

  explicit DescribeRegionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
  }


  virtual ~DescribeRegionsRequest() = default;
};
class DescribeRegionsResponseBodyRegions : public Darabonba::Model {
public:
  shared_ptr<vector<string>> regionCode{};

  DescribeRegionsResponseBodyRegions() {}

  explicit DescribeRegionsResponseBodyRegions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionCode) {
      res["RegionCode"] = boost::any(*regionCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionCode") != m.end() && !m["RegionCode"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RegionCode"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RegionCode"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      regionCode = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeRegionsResponseBodyRegions() = default;
};
class DescribeRegionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<DescribeRegionsResponseBodyRegions> regions{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeRegionsResponseBody() {}

  explicit DescribeRegionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (regions) {
      res["Regions"] = regions ? boost::any(regions->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Regions") != m.end() && !m["Regions"].empty()) {
      if (typeid(map<string, boost::any>) == m["Regions"].type()) {
        DescribeRegionsResponseBodyRegions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Regions"]));
        regions = make_shared<DescribeRegionsResponseBodyRegions>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
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
        DescribeRegionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRegionsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRegionsResponse() = default;
};
class DescribeRestoreRangeInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> backupPlanId{};
  shared_ptr<long> beginTimestampForRestore{};
  shared_ptr<string> clientToken{};
  shared_ptr<long> endTimestampForRestore{};
  shared_ptr<string> ownerId{};
  shared_ptr<bool> recentlyRestore{};

  DescribeRestoreRangeInfoRequest() {}

  explicit DescribeRestoreRangeInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupPlanId) {
      res["BackupPlanId"] = boost::any(*backupPlanId);
    }
    if (beginTimestampForRestore) {
      res["BeginTimestampForRestore"] = boost::any(*beginTimestampForRestore);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (endTimestampForRestore) {
      res["EndTimestampForRestore"] = boost::any(*endTimestampForRestore);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (recentlyRestore) {
      res["RecentlyRestore"] = boost::any(*recentlyRestore);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupPlanId") != m.end() && !m["BackupPlanId"].empty()) {
      backupPlanId = make_shared<string>(boost::any_cast<string>(m["BackupPlanId"]));
    }
    if (m.find("BeginTimestampForRestore") != m.end() && !m["BeginTimestampForRestore"].empty()) {
      beginTimestampForRestore = make_shared<long>(boost::any_cast<long>(m["BeginTimestampForRestore"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("EndTimestampForRestore") != m.end() && !m["EndTimestampForRestore"].empty()) {
      endTimestampForRestore = make_shared<long>(boost::any_cast<long>(m["EndTimestampForRestore"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("RecentlyRestore") != m.end() && !m["RecentlyRestore"].empty()) {
      recentlyRestore = make_shared<bool>(boost::any_cast<bool>(m["RecentlyRestore"]));
    }
  }


  virtual ~DescribeRestoreRangeInfoRequest() = default;
};
class DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRangeFullBackupListFullBackupDetail : public Darabonba::Model {
public:
  shared_ptr<string> backupSetId{};
  shared_ptr<long> endTime{};
  shared_ptr<long> startTime{};

  DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRangeFullBackupListFullBackupDetail() {}

  explicit DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRangeFullBackupListFullBackupDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupSetId) {
      res["BackupSetId"] = boost::any(*backupSetId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupSetId") != m.end() && !m["BackupSetId"].empty()) {
      backupSetId = make_shared<string>(boost::any_cast<string>(m["BackupSetId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRangeFullBackupListFullBackupDetail() = default;
};
class DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRangeFullBackupList : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRangeFullBackupListFullBackupDetail>> fullBackupDetail{};

  DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRangeFullBackupList() {}

  explicit DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRangeFullBackupList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fullBackupDetail) {
      vector<boost::any> temp1;
      for(auto item1:*fullBackupDetail){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FullBackupDetail"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FullBackupDetail") != m.end() && !m["FullBackupDetail"].empty()) {
      if (typeid(vector<boost::any>) == m["FullBackupDetail"].type()) {
        vector<DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRangeFullBackupListFullBackupDetail> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FullBackupDetail"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRangeFullBackupListFullBackupDetail model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fullBackupDetail = make_shared<vector<DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRangeFullBackupListFullBackupDetail>>(expect1);
      }
    }
  }


  virtual ~DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRangeFullBackupList() = default;
};
class DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRange : public Darabonba::Model {
public:
  shared_ptr<long> beginTimestampForRestore{};
  shared_ptr<long> endTimestampForRestore{};
  shared_ptr<DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRangeFullBackupList> fullBackupList{};
  shared_ptr<string> rangeType{};
  shared_ptr<string> sourceEndpointInstanceID{};
  shared_ptr<string> sourceEndpointInstanceType{};

  DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRange() {}

  explicit DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRange(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginTimestampForRestore) {
      res["BeginTimestampForRestore"] = boost::any(*beginTimestampForRestore);
    }
    if (endTimestampForRestore) {
      res["EndTimestampForRestore"] = boost::any(*endTimestampForRestore);
    }
    if (fullBackupList) {
      res["FullBackupList"] = fullBackupList ? boost::any(fullBackupList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (rangeType) {
      res["RangeType"] = boost::any(*rangeType);
    }
    if (sourceEndpointInstanceID) {
      res["SourceEndpointInstanceID"] = boost::any(*sourceEndpointInstanceID);
    }
    if (sourceEndpointInstanceType) {
      res["SourceEndpointInstanceType"] = boost::any(*sourceEndpointInstanceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeginTimestampForRestore") != m.end() && !m["BeginTimestampForRestore"].empty()) {
      beginTimestampForRestore = make_shared<long>(boost::any_cast<long>(m["BeginTimestampForRestore"]));
    }
    if (m.find("EndTimestampForRestore") != m.end() && !m["EndTimestampForRestore"].empty()) {
      endTimestampForRestore = make_shared<long>(boost::any_cast<long>(m["EndTimestampForRestore"]));
    }
    if (m.find("FullBackupList") != m.end() && !m["FullBackupList"].empty()) {
      if (typeid(map<string, boost::any>) == m["FullBackupList"].type()) {
        DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRangeFullBackupList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FullBackupList"]));
        fullBackupList = make_shared<DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRangeFullBackupList>(model1);
      }
    }
    if (m.find("RangeType") != m.end() && !m["RangeType"].empty()) {
      rangeType = make_shared<string>(boost::any_cast<string>(m["RangeType"]));
    }
    if (m.find("SourceEndpointInstanceID") != m.end() && !m["SourceEndpointInstanceID"].empty()) {
      sourceEndpointInstanceID = make_shared<string>(boost::any_cast<string>(m["SourceEndpointInstanceID"]));
    }
    if (m.find("SourceEndpointInstanceType") != m.end() && !m["SourceEndpointInstanceType"].empty()) {
      sourceEndpointInstanceType = make_shared<string>(boost::any_cast<string>(m["SourceEndpointInstanceType"]));
    }
  }


  virtual ~DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRange() = default;
};
class DescribeRestoreRangeInfoResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRange>> DBSRecoverRange{};

  DescribeRestoreRangeInfoResponseBodyItems() {}

  explicit DescribeRestoreRangeInfoResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBSRecoverRange) {
      vector<boost::any> temp1;
      for(auto item1:*DBSRecoverRange){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DBSRecoverRange"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBSRecoverRange") != m.end() && !m["DBSRecoverRange"].empty()) {
      if (typeid(vector<boost::any>) == m["DBSRecoverRange"].type()) {
        vector<DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRange> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DBSRecoverRange"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRange model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        DBSRecoverRange = make_shared<vector<DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRange>>(expect1);
      }
    }
  }


  virtual ~DescribeRestoreRangeInfoResponseBodyItems() = default;
};
class DescribeRestoreRangeInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<DescribeRestoreRangeInfoResponseBodyItems> items{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeRestoreRangeInfoResponseBody() {}

  explicit DescribeRestoreRangeInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        DescribeRestoreRangeInfoResponseBodyItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<DescribeRestoreRangeInfoResponseBodyItems>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DescribeRestoreRangeInfoResponseBody() = default;
};
class DescribeRestoreRangeInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeRestoreRangeInfoResponseBody> body{};

  DescribeRestoreRangeInfoResponse() {}

  explicit DescribeRestoreRangeInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeRestoreRangeInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRestoreRangeInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRestoreRangeInfoResponse() = default;
};
class DescribeRestoreTaskListRequest : public Darabonba::Model {
public:
  shared_ptr<string> backupPlanId{};
  shared_ptr<string> clientToken{};
  shared_ptr<long> endTimestamp{};
  shared_ptr<string> ownerId{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> restoreTaskId{};
  shared_ptr<long> startTimestamp{};

  DescribeRestoreTaskListRequest() {}

  explicit DescribeRestoreTaskListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupPlanId) {
      res["BackupPlanId"] = boost::any(*backupPlanId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (endTimestamp) {
      res["EndTimestamp"] = boost::any(*endTimestamp);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (restoreTaskId) {
      res["RestoreTaskId"] = boost::any(*restoreTaskId);
    }
    if (startTimestamp) {
      res["StartTimestamp"] = boost::any(*startTimestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupPlanId") != m.end() && !m["BackupPlanId"].empty()) {
      backupPlanId = make_shared<string>(boost::any_cast<string>(m["BackupPlanId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("EndTimestamp") != m.end() && !m["EndTimestamp"].empty()) {
      endTimestamp = make_shared<long>(boost::any_cast<long>(m["EndTimestamp"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RestoreTaskId") != m.end() && !m["RestoreTaskId"].empty()) {
      restoreTaskId = make_shared<string>(boost::any_cast<string>(m["RestoreTaskId"]));
    }
    if (m.find("StartTimestamp") != m.end() && !m["StartTimestamp"].empty()) {
      startTimestamp = make_shared<long>(boost::any_cast<long>(m["StartTimestamp"]));
    }
  }


  virtual ~DescribeRestoreTaskListRequest() = default;
};
class DescribeRestoreTaskListResponseBodyItemsRestoreTaskDetail : public Darabonba::Model {
public:
  shared_ptr<long> backupGatewayId{};
  shared_ptr<string> backupPlanId{};
  shared_ptr<string> backupSetId{};
  shared_ptr<long> continuousRestoreProgress{};
  shared_ptr<string> crossAliyunId{};
  shared_ptr<string> crossRoleName{};
  shared_ptr<string> destinationEndpointDatabaseName{};
  shared_ptr<string> destinationEndpointInstanceID{};
  shared_ptr<string> destinationEndpointInstanceType{};
  shared_ptr<string> destinationEndpointIpPort{};
  shared_ptr<string> destinationEndpointOracleSID{};
  shared_ptr<string> destinationEndpointRegion{};
  shared_ptr<string> destinationEndpointUserName{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> fullDataRestoreProgress{};
  shared_ptr<long> fullStruAfterRestoreProgress{};
  shared_ptr<long> fullStruforeRestoreProgress{};
  shared_ptr<string> restoreDir{};
  shared_ptr<string> restoreObjects{};
  shared_ptr<string> restoreStatus{};
  shared_ptr<long> restoreTaskCreateTime{};
  shared_ptr<long> restoreTaskFinishTime{};
  shared_ptr<string> restoreTaskId{};
  shared_ptr<string> restoreTaskName{};
  shared_ptr<long> restoreTime{};

  DescribeRestoreTaskListResponseBodyItemsRestoreTaskDetail() {}

  explicit DescribeRestoreTaskListResponseBodyItemsRestoreTaskDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupGatewayId) {
      res["BackupGatewayId"] = boost::any(*backupGatewayId);
    }
    if (backupPlanId) {
      res["BackupPlanId"] = boost::any(*backupPlanId);
    }
    if (backupSetId) {
      res["BackupSetId"] = boost::any(*backupSetId);
    }
    if (continuousRestoreProgress) {
      res["ContinuousRestoreProgress"] = boost::any(*continuousRestoreProgress);
    }
    if (crossAliyunId) {
      res["CrossAliyunId"] = boost::any(*crossAliyunId);
    }
    if (crossRoleName) {
      res["CrossRoleName"] = boost::any(*crossRoleName);
    }
    if (destinationEndpointDatabaseName) {
      res["DestinationEndpointDatabaseName"] = boost::any(*destinationEndpointDatabaseName);
    }
    if (destinationEndpointInstanceID) {
      res["DestinationEndpointInstanceID"] = boost::any(*destinationEndpointInstanceID);
    }
    if (destinationEndpointInstanceType) {
      res["DestinationEndpointInstanceType"] = boost::any(*destinationEndpointInstanceType);
    }
    if (destinationEndpointIpPort) {
      res["DestinationEndpointIpPort"] = boost::any(*destinationEndpointIpPort);
    }
    if (destinationEndpointOracleSID) {
      res["DestinationEndpointOracleSID"] = boost::any(*destinationEndpointOracleSID);
    }
    if (destinationEndpointRegion) {
      res["DestinationEndpointRegion"] = boost::any(*destinationEndpointRegion);
    }
    if (destinationEndpointUserName) {
      res["DestinationEndpointUserName"] = boost::any(*destinationEndpointUserName);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
    }
    if (fullDataRestoreProgress) {
      res["FullDataRestoreProgress"] = boost::any(*fullDataRestoreProgress);
    }
    if (fullStruAfterRestoreProgress) {
      res["FullStruAfterRestoreProgress"] = boost::any(*fullStruAfterRestoreProgress);
    }
    if (fullStruforeRestoreProgress) {
      res["FullStruforeRestoreProgress"] = boost::any(*fullStruforeRestoreProgress);
    }
    if (restoreDir) {
      res["RestoreDir"] = boost::any(*restoreDir);
    }
    if (restoreObjects) {
      res["RestoreObjects"] = boost::any(*restoreObjects);
    }
    if (restoreStatus) {
      res["RestoreStatus"] = boost::any(*restoreStatus);
    }
    if (restoreTaskCreateTime) {
      res["RestoreTaskCreateTime"] = boost::any(*restoreTaskCreateTime);
    }
    if (restoreTaskFinishTime) {
      res["RestoreTaskFinishTime"] = boost::any(*restoreTaskFinishTime);
    }
    if (restoreTaskId) {
      res["RestoreTaskId"] = boost::any(*restoreTaskId);
    }
    if (restoreTaskName) {
      res["RestoreTaskName"] = boost::any(*restoreTaskName);
    }
    if (restoreTime) {
      res["RestoreTime"] = boost::any(*restoreTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupGatewayId") != m.end() && !m["BackupGatewayId"].empty()) {
      backupGatewayId = make_shared<long>(boost::any_cast<long>(m["BackupGatewayId"]));
    }
    if (m.find("BackupPlanId") != m.end() && !m["BackupPlanId"].empty()) {
      backupPlanId = make_shared<string>(boost::any_cast<string>(m["BackupPlanId"]));
    }
    if (m.find("BackupSetId") != m.end() && !m["BackupSetId"].empty()) {
      backupSetId = make_shared<string>(boost::any_cast<string>(m["BackupSetId"]));
    }
    if (m.find("ContinuousRestoreProgress") != m.end() && !m["ContinuousRestoreProgress"].empty()) {
      continuousRestoreProgress = make_shared<long>(boost::any_cast<long>(m["ContinuousRestoreProgress"]));
    }
    if (m.find("CrossAliyunId") != m.end() && !m["CrossAliyunId"].empty()) {
      crossAliyunId = make_shared<string>(boost::any_cast<string>(m["CrossAliyunId"]));
    }
    if (m.find("CrossRoleName") != m.end() && !m["CrossRoleName"].empty()) {
      crossRoleName = make_shared<string>(boost::any_cast<string>(m["CrossRoleName"]));
    }
    if (m.find("DestinationEndpointDatabaseName") != m.end() && !m["DestinationEndpointDatabaseName"].empty()) {
      destinationEndpointDatabaseName = make_shared<string>(boost::any_cast<string>(m["DestinationEndpointDatabaseName"]));
    }
    if (m.find("DestinationEndpointInstanceID") != m.end() && !m["DestinationEndpointInstanceID"].empty()) {
      destinationEndpointInstanceID = make_shared<string>(boost::any_cast<string>(m["DestinationEndpointInstanceID"]));
    }
    if (m.find("DestinationEndpointInstanceType") != m.end() && !m["DestinationEndpointInstanceType"].empty()) {
      destinationEndpointInstanceType = make_shared<string>(boost::any_cast<string>(m["DestinationEndpointInstanceType"]));
    }
    if (m.find("DestinationEndpointIpPort") != m.end() && !m["DestinationEndpointIpPort"].empty()) {
      destinationEndpointIpPort = make_shared<string>(boost::any_cast<string>(m["DestinationEndpointIpPort"]));
    }
    if (m.find("DestinationEndpointOracleSID") != m.end() && !m["DestinationEndpointOracleSID"].empty()) {
      destinationEndpointOracleSID = make_shared<string>(boost::any_cast<string>(m["DestinationEndpointOracleSID"]));
    }
    if (m.find("DestinationEndpointRegion") != m.end() && !m["DestinationEndpointRegion"].empty()) {
      destinationEndpointRegion = make_shared<string>(boost::any_cast<string>(m["DestinationEndpointRegion"]));
    }
    if (m.find("DestinationEndpointUserName") != m.end() && !m["DestinationEndpointUserName"].empty()) {
      destinationEndpointUserName = make_shared<string>(boost::any_cast<string>(m["DestinationEndpointUserName"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("FullDataRestoreProgress") != m.end() && !m["FullDataRestoreProgress"].empty()) {
      fullDataRestoreProgress = make_shared<long>(boost::any_cast<long>(m["FullDataRestoreProgress"]));
    }
    if (m.find("FullStruAfterRestoreProgress") != m.end() && !m["FullStruAfterRestoreProgress"].empty()) {
      fullStruAfterRestoreProgress = make_shared<long>(boost::any_cast<long>(m["FullStruAfterRestoreProgress"]));
    }
    if (m.find("FullStruforeRestoreProgress") != m.end() && !m["FullStruforeRestoreProgress"].empty()) {
      fullStruforeRestoreProgress = make_shared<long>(boost::any_cast<long>(m["FullStruforeRestoreProgress"]));
    }
    if (m.find("RestoreDir") != m.end() && !m["RestoreDir"].empty()) {
      restoreDir = make_shared<string>(boost::any_cast<string>(m["RestoreDir"]));
    }
    if (m.find("RestoreObjects") != m.end() && !m["RestoreObjects"].empty()) {
      restoreObjects = make_shared<string>(boost::any_cast<string>(m["RestoreObjects"]));
    }
    if (m.find("RestoreStatus") != m.end() && !m["RestoreStatus"].empty()) {
      restoreStatus = make_shared<string>(boost::any_cast<string>(m["RestoreStatus"]));
    }
    if (m.find("RestoreTaskCreateTime") != m.end() && !m["RestoreTaskCreateTime"].empty()) {
      restoreTaskCreateTime = make_shared<long>(boost::any_cast<long>(m["RestoreTaskCreateTime"]));
    }
    if (m.find("RestoreTaskFinishTime") != m.end() && !m["RestoreTaskFinishTime"].empty()) {
      restoreTaskFinishTime = make_shared<long>(boost::any_cast<long>(m["RestoreTaskFinishTime"]));
    }
    if (m.find("RestoreTaskId") != m.end() && !m["RestoreTaskId"].empty()) {
      restoreTaskId = make_shared<string>(boost::any_cast<string>(m["RestoreTaskId"]));
    }
    if (m.find("RestoreTaskName") != m.end() && !m["RestoreTaskName"].empty()) {
      restoreTaskName = make_shared<string>(boost::any_cast<string>(m["RestoreTaskName"]));
    }
    if (m.find("RestoreTime") != m.end() && !m["RestoreTime"].empty()) {
      restoreTime = make_shared<long>(boost::any_cast<long>(m["RestoreTime"]));
    }
  }


  virtual ~DescribeRestoreTaskListResponseBodyItemsRestoreTaskDetail() = default;
};
class DescribeRestoreTaskListResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRestoreTaskListResponseBodyItemsRestoreTaskDetail>> restoreTaskDetail{};

  DescribeRestoreTaskListResponseBodyItems() {}

  explicit DescribeRestoreTaskListResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (restoreTaskDetail) {
      vector<boost::any> temp1;
      for(auto item1:*restoreTaskDetail){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RestoreTaskDetail"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RestoreTaskDetail") != m.end() && !m["RestoreTaskDetail"].empty()) {
      if (typeid(vector<boost::any>) == m["RestoreTaskDetail"].type()) {
        vector<DescribeRestoreTaskListResponseBodyItemsRestoreTaskDetail> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RestoreTaskDetail"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRestoreTaskListResponseBodyItemsRestoreTaskDetail model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        restoreTaskDetail = make_shared<vector<DescribeRestoreTaskListResponseBodyItemsRestoreTaskDetail>>(expect1);
      }
    }
  }


  virtual ~DescribeRestoreTaskListResponseBodyItems() = default;
};
class DescribeRestoreTaskListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<DescribeRestoreTaskListResponseBodyItems> items{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalElements{};
  shared_ptr<long> totalPages{};

  DescribeRestoreTaskListResponseBody() {}

  explicit DescribeRestoreTaskListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
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
    if (totalElements) {
      res["TotalElements"] = boost::any(*totalElements);
    }
    if (totalPages) {
      res["TotalPages"] = boost::any(*totalPages);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        DescribeRestoreTaskListResponseBodyItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<DescribeRestoreTaskListResponseBodyItems>(model1);
      }
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
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
    if (m.find("TotalElements") != m.end() && !m["TotalElements"].empty()) {
      totalElements = make_shared<long>(boost::any_cast<long>(m["TotalElements"]));
    }
    if (m.find("TotalPages") != m.end() && !m["TotalPages"].empty()) {
      totalPages = make_shared<long>(boost::any_cast<long>(m["TotalPages"]));
    }
  }


  virtual ~DescribeRestoreTaskListResponseBody() = default;
};
class DescribeRestoreTaskListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeRestoreTaskListResponseBody> body{};

  DescribeRestoreTaskListResponse() {}

  explicit DescribeRestoreTaskListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeRestoreTaskListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRestoreTaskListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRestoreTaskListResponse() = default;
};
class DisableBackupLogRequest : public Darabonba::Model {
public:
  shared_ptr<string> backupPlanId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> ownerId{};

  DisableBackupLogRequest() {}

  explicit DisableBackupLogRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupPlanId) {
      res["BackupPlanId"] = boost::any(*backupPlanId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupPlanId") != m.end() && !m["BackupPlanId"].empty()) {
      backupPlanId = make_shared<string>(boost::any_cast<string>(m["BackupPlanId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
  }


  virtual ~DisableBackupLogRequest() = default;
};
class DisableBackupLogResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> backupPlanId{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<bool> needPrecheck{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DisableBackupLogResponseBody() {}

  explicit DisableBackupLogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupPlanId) {
      res["BackupPlanId"] = boost::any(*backupPlanId);
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
    if (needPrecheck) {
      res["NeedPrecheck"] = boost::any(*needPrecheck);
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
    if (m.find("BackupPlanId") != m.end() && !m["BackupPlanId"].empty()) {
      backupPlanId = make_shared<string>(boost::any_cast<string>(m["BackupPlanId"]));
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
    if (m.find("NeedPrecheck") != m.end() && !m["NeedPrecheck"].empty()) {
      needPrecheck = make_shared<bool>(boost::any_cast<bool>(m["NeedPrecheck"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DisableBackupLogResponseBody() = default;
};
class DisableBackupLogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DisableBackupLogResponseBody> body{};

  DisableBackupLogResponse() {}

  explicit DisableBackupLogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DisableBackupLogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableBackupLogResponseBody>(model1);
      }
    }
  }


  virtual ~DisableBackupLogResponse() = default;
};
class EnableBackupLogRequest : public Darabonba::Model {
public:
  shared_ptr<string> backupPlanId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> ownerId{};

  EnableBackupLogRequest() {}

  explicit EnableBackupLogRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupPlanId) {
      res["BackupPlanId"] = boost::any(*backupPlanId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupPlanId") != m.end() && !m["BackupPlanId"].empty()) {
      backupPlanId = make_shared<string>(boost::any_cast<string>(m["BackupPlanId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
  }


  virtual ~EnableBackupLogRequest() = default;
};
class EnableBackupLogResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> backupPlanId{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<bool> needPrecheck{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  EnableBackupLogResponseBody() {}

  explicit EnableBackupLogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupPlanId) {
      res["BackupPlanId"] = boost::any(*backupPlanId);
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
    if (needPrecheck) {
      res["NeedPrecheck"] = boost::any(*needPrecheck);
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
    if (m.find("BackupPlanId") != m.end() && !m["BackupPlanId"].empty()) {
      backupPlanId = make_shared<string>(boost::any_cast<string>(m["BackupPlanId"]));
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
    if (m.find("NeedPrecheck") != m.end() && !m["NeedPrecheck"].empty()) {
      needPrecheck = make_shared<bool>(boost::any_cast<bool>(m["NeedPrecheck"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~EnableBackupLogResponseBody() = default;
};
class EnableBackupLogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnableBackupLogResponseBody> body{};

  EnableBackupLogResponse() {}

  explicit EnableBackupLogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnableBackupLogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableBackupLogResponseBody>(model1);
      }
    }
  }


  virtual ~EnableBackupLogResponse() = default;
};
class GetDBListFromAgentRequest : public Darabonba::Model {
public:
  shared_ptr<long> backupGatewayId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> sourceEndpointRegion{};
  shared_ptr<long> taskId{};

  GetDBListFromAgentRequest() {}

  explicit GetDBListFromAgentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupGatewayId) {
      res["BackupGatewayId"] = boost::any(*backupGatewayId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (sourceEndpointRegion) {
      res["SourceEndpointRegion"] = boost::any(*sourceEndpointRegion);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupGatewayId") != m.end() && !m["BackupGatewayId"].empty()) {
      backupGatewayId = make_shared<long>(boost::any_cast<long>(m["BackupGatewayId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("SourceEndpointRegion") != m.end() && !m["SourceEndpointRegion"].empty()) {
      sourceEndpointRegion = make_shared<string>(boost::any_cast<string>(m["SourceEndpointRegion"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
  }


  virtual ~GetDBListFromAgentRequest() = default;
};
class GetDBListFromAgentResponseBodyDbList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> dbName{};

  GetDBListFromAgentResponseBodyDbList() {}

  explicit GetDBListFromAgentResponseBodyDbList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbName) {
      res["dbName"] = boost::any(*dbName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dbName") != m.end() && !m["dbName"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["dbName"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["dbName"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dbName = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetDBListFromAgentResponseBodyDbList() = default;
};
class GetDBListFromAgentResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetDBListFromAgentResponseBodyDbList> dbList{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetDBListFromAgentResponseBody() {}

  explicit GetDBListFromAgentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbList) {
      res["DbList"] = dbList ? boost::any(dbList->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("DbList") != m.end() && !m["DbList"].empty()) {
      if (typeid(map<string, boost::any>) == m["DbList"].type()) {
        GetDBListFromAgentResponseBodyDbList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DbList"]));
        dbList = make_shared<GetDBListFromAgentResponseBodyDbList>(model1);
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


  virtual ~GetDBListFromAgentResponseBody() = default;
};
class GetDBListFromAgentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDBListFromAgentResponseBody> body{};

  GetDBListFromAgentResponse() {}

  explicit GetDBListFromAgentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDBListFromAgentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDBListFromAgentResponseBody>(model1);
      }
    }
  }


  virtual ~GetDBListFromAgentResponse() = default;
};
class InitializeDbsServiceLinkedRoleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> errMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  InitializeDbsServiceLinkedRoleResponseBody() {}

  explicit InitializeDbsServiceLinkedRoleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~InitializeDbsServiceLinkedRoleResponseBody() = default;
};
class InitializeDbsServiceLinkedRoleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<InitializeDbsServiceLinkedRoleResponseBody> body{};

  InitializeDbsServiceLinkedRoleResponse() {}

  explicit InitializeDbsServiceLinkedRoleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        InitializeDbsServiceLinkedRoleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<InitializeDbsServiceLinkedRoleResponseBody>(model1);
      }
    }
  }


  virtual ~InitializeDbsServiceLinkedRoleResponse() = default;
};
class ModifyBackupObjectsRequest : public Darabonba::Model {
public:
  shared_ptr<string> backupObjects{};
  shared_ptr<string> backupPlanId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> ownerId{};

  ModifyBackupObjectsRequest() {}

  explicit ModifyBackupObjectsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupObjects) {
      res["BackupObjects"] = boost::any(*backupObjects);
    }
    if (backupPlanId) {
      res["BackupPlanId"] = boost::any(*backupPlanId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupObjects") != m.end() && !m["BackupObjects"].empty()) {
      backupObjects = make_shared<string>(boost::any_cast<string>(m["BackupObjects"]));
    }
    if (m.find("BackupPlanId") != m.end() && !m["BackupPlanId"].empty()) {
      backupPlanId = make_shared<string>(boost::any_cast<string>(m["BackupPlanId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
  }


  virtual ~ModifyBackupObjectsRequest() = default;
};
class ModifyBackupObjectsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> backupPlanId{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<bool> needPrecheck{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ModifyBackupObjectsResponseBody() {}

  explicit ModifyBackupObjectsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupPlanId) {
      res["BackupPlanId"] = boost::any(*backupPlanId);
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
    if (needPrecheck) {
      res["NeedPrecheck"] = boost::any(*needPrecheck);
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
    if (m.find("BackupPlanId") != m.end() && !m["BackupPlanId"].empty()) {
      backupPlanId = make_shared<string>(boost::any_cast<string>(m["BackupPlanId"]));
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
    if (m.find("NeedPrecheck") != m.end() && !m["NeedPrecheck"].empty()) {
      needPrecheck = make_shared<bool>(boost::any_cast<bool>(m["NeedPrecheck"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ModifyBackupObjectsResponseBody() = default;
};
class ModifyBackupObjectsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyBackupObjectsResponseBody> body{};

  ModifyBackupObjectsResponse() {}

  explicit ModifyBackupObjectsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyBackupObjectsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyBackupObjectsResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyBackupObjectsResponse() = default;
};
class ModifyBackupPlanNameRequest : public Darabonba::Model {
public:
  shared_ptr<string> backupPlanId{};
  shared_ptr<string> backupPlanName{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> ownerId{};

  ModifyBackupPlanNameRequest() {}

  explicit ModifyBackupPlanNameRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupPlanId) {
      res["BackupPlanId"] = boost::any(*backupPlanId);
    }
    if (backupPlanName) {
      res["BackupPlanName"] = boost::any(*backupPlanName);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupPlanId") != m.end() && !m["BackupPlanId"].empty()) {
      backupPlanId = make_shared<string>(boost::any_cast<string>(m["BackupPlanId"]));
    }
    if (m.find("BackupPlanName") != m.end() && !m["BackupPlanName"].empty()) {
      backupPlanName = make_shared<string>(boost::any_cast<string>(m["BackupPlanName"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
  }


  virtual ~ModifyBackupPlanNameRequest() = default;
};
class ModifyBackupPlanNameResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> backupPlanId{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ModifyBackupPlanNameResponseBody() {}

  explicit ModifyBackupPlanNameResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupPlanId) {
      res["BackupPlanId"] = boost::any(*backupPlanId);
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
    if (m.find("BackupPlanId") != m.end() && !m["BackupPlanId"].empty()) {
      backupPlanId = make_shared<string>(boost::any_cast<string>(m["BackupPlanId"]));
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


  virtual ~ModifyBackupPlanNameResponseBody() = default;
};
class ModifyBackupPlanNameResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyBackupPlanNameResponseBody> body{};

  ModifyBackupPlanNameResponse() {}

  explicit ModifyBackupPlanNameResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyBackupPlanNameResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyBackupPlanNameResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyBackupPlanNameResponse() = default;
};
class ModifyBackupSetDownloadRulesRequest : public Darabonba::Model {
public:
  shared_ptr<long> backupGatewayId{};
  shared_ptr<string> backupPlanId{};
  shared_ptr<string> backupSetDownloadDir{};
  shared_ptr<string> backupSetDownloadTargetType{};
  shared_ptr<string> backupSetDownloadTargetTypeLocation{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> fullDataFormat{};
  shared_ptr<string> incrementDataFormat{};
  shared_ptr<bool> openAutoDownload{};
  shared_ptr<string> ownerId{};

  ModifyBackupSetDownloadRulesRequest() {}

  explicit ModifyBackupSetDownloadRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupGatewayId) {
      res["BackupGatewayId"] = boost::any(*backupGatewayId);
    }
    if (backupPlanId) {
      res["BackupPlanId"] = boost::any(*backupPlanId);
    }
    if (backupSetDownloadDir) {
      res["BackupSetDownloadDir"] = boost::any(*backupSetDownloadDir);
    }
    if (backupSetDownloadTargetType) {
      res["BackupSetDownloadTargetType"] = boost::any(*backupSetDownloadTargetType);
    }
    if (backupSetDownloadTargetTypeLocation) {
      res["BackupSetDownloadTargetTypeLocation"] = boost::any(*backupSetDownloadTargetTypeLocation);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (fullDataFormat) {
      res["FullDataFormat"] = boost::any(*fullDataFormat);
    }
    if (incrementDataFormat) {
      res["IncrementDataFormat"] = boost::any(*incrementDataFormat);
    }
    if (openAutoDownload) {
      res["OpenAutoDownload"] = boost::any(*openAutoDownload);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupGatewayId") != m.end() && !m["BackupGatewayId"].empty()) {
      backupGatewayId = make_shared<long>(boost::any_cast<long>(m["BackupGatewayId"]));
    }
    if (m.find("BackupPlanId") != m.end() && !m["BackupPlanId"].empty()) {
      backupPlanId = make_shared<string>(boost::any_cast<string>(m["BackupPlanId"]));
    }
    if (m.find("BackupSetDownloadDir") != m.end() && !m["BackupSetDownloadDir"].empty()) {
      backupSetDownloadDir = make_shared<string>(boost::any_cast<string>(m["BackupSetDownloadDir"]));
    }
    if (m.find("BackupSetDownloadTargetType") != m.end() && !m["BackupSetDownloadTargetType"].empty()) {
      backupSetDownloadTargetType = make_shared<string>(boost::any_cast<string>(m["BackupSetDownloadTargetType"]));
    }
    if (m.find("BackupSetDownloadTargetTypeLocation") != m.end() && !m["BackupSetDownloadTargetTypeLocation"].empty()) {
      backupSetDownloadTargetTypeLocation = make_shared<string>(boost::any_cast<string>(m["BackupSetDownloadTargetTypeLocation"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("FullDataFormat") != m.end() && !m["FullDataFormat"].empty()) {
      fullDataFormat = make_shared<string>(boost::any_cast<string>(m["FullDataFormat"]));
    }
    if (m.find("IncrementDataFormat") != m.end() && !m["IncrementDataFormat"].empty()) {
      incrementDataFormat = make_shared<string>(boost::any_cast<string>(m["IncrementDataFormat"]));
    }
    if (m.find("OpenAutoDownload") != m.end() && !m["OpenAutoDownload"].empty()) {
      openAutoDownload = make_shared<bool>(boost::any_cast<bool>(m["OpenAutoDownload"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
  }


  virtual ~ModifyBackupSetDownloadRulesRequest() = default;
};
class ModifyBackupSetDownloadRulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> backupPlanId{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ModifyBackupSetDownloadRulesResponseBody() {}

  explicit ModifyBackupSetDownloadRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupPlanId) {
      res["BackupPlanId"] = boost::any(*backupPlanId);
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
    if (m.find("BackupPlanId") != m.end() && !m["BackupPlanId"].empty()) {
      backupPlanId = make_shared<string>(boost::any_cast<string>(m["BackupPlanId"]));
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


  virtual ~ModifyBackupSetDownloadRulesResponseBody() = default;
};
class ModifyBackupSetDownloadRulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyBackupSetDownloadRulesResponseBody> body{};

  ModifyBackupSetDownloadRulesResponse() {}

  explicit ModifyBackupSetDownloadRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyBackupSetDownloadRulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyBackupSetDownloadRulesResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyBackupSetDownloadRulesResponse() = default;
};
class ModifyBackupSourceEndpointRequest : public Darabonba::Model {
public:
  shared_ptr<long> backupGatewayId{};
  shared_ptr<string> backupObjects{};
  shared_ptr<string> backupPlanId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> crossAliyunId{};
  shared_ptr<string> crossRoleName{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> sourceEndpointDatabaseName{};
  shared_ptr<string> sourceEndpointIP{};
  shared_ptr<string> sourceEndpointInstanceID{};
  shared_ptr<string> sourceEndpointInstanceType{};
  shared_ptr<string> sourceEndpointOracleSID{};
  shared_ptr<string> sourceEndpointPassword{};
  shared_ptr<long> sourceEndpointPort{};
  shared_ptr<string> sourceEndpointRegion{};
  shared_ptr<string> sourceEndpointUserName{};

  ModifyBackupSourceEndpointRequest() {}

  explicit ModifyBackupSourceEndpointRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupGatewayId) {
      res["BackupGatewayId"] = boost::any(*backupGatewayId);
    }
    if (backupObjects) {
      res["BackupObjects"] = boost::any(*backupObjects);
    }
    if (backupPlanId) {
      res["BackupPlanId"] = boost::any(*backupPlanId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (crossAliyunId) {
      res["CrossAliyunId"] = boost::any(*crossAliyunId);
    }
    if (crossRoleName) {
      res["CrossRoleName"] = boost::any(*crossRoleName);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (sourceEndpointDatabaseName) {
      res["SourceEndpointDatabaseName"] = boost::any(*sourceEndpointDatabaseName);
    }
    if (sourceEndpointIP) {
      res["SourceEndpointIP"] = boost::any(*sourceEndpointIP);
    }
    if (sourceEndpointInstanceID) {
      res["SourceEndpointInstanceID"] = boost::any(*sourceEndpointInstanceID);
    }
    if (sourceEndpointInstanceType) {
      res["SourceEndpointInstanceType"] = boost::any(*sourceEndpointInstanceType);
    }
    if (sourceEndpointOracleSID) {
      res["SourceEndpointOracleSID"] = boost::any(*sourceEndpointOracleSID);
    }
    if (sourceEndpointPassword) {
      res["SourceEndpointPassword"] = boost::any(*sourceEndpointPassword);
    }
    if (sourceEndpointPort) {
      res["SourceEndpointPort"] = boost::any(*sourceEndpointPort);
    }
    if (sourceEndpointRegion) {
      res["SourceEndpointRegion"] = boost::any(*sourceEndpointRegion);
    }
    if (sourceEndpointUserName) {
      res["SourceEndpointUserName"] = boost::any(*sourceEndpointUserName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupGatewayId") != m.end() && !m["BackupGatewayId"].empty()) {
      backupGatewayId = make_shared<long>(boost::any_cast<long>(m["BackupGatewayId"]));
    }
    if (m.find("BackupObjects") != m.end() && !m["BackupObjects"].empty()) {
      backupObjects = make_shared<string>(boost::any_cast<string>(m["BackupObjects"]));
    }
    if (m.find("BackupPlanId") != m.end() && !m["BackupPlanId"].empty()) {
      backupPlanId = make_shared<string>(boost::any_cast<string>(m["BackupPlanId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("CrossAliyunId") != m.end() && !m["CrossAliyunId"].empty()) {
      crossAliyunId = make_shared<string>(boost::any_cast<string>(m["CrossAliyunId"]));
    }
    if (m.find("CrossRoleName") != m.end() && !m["CrossRoleName"].empty()) {
      crossRoleName = make_shared<string>(boost::any_cast<string>(m["CrossRoleName"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("SourceEndpointDatabaseName") != m.end() && !m["SourceEndpointDatabaseName"].empty()) {
      sourceEndpointDatabaseName = make_shared<string>(boost::any_cast<string>(m["SourceEndpointDatabaseName"]));
    }
    if (m.find("SourceEndpointIP") != m.end() && !m["SourceEndpointIP"].empty()) {
      sourceEndpointIP = make_shared<string>(boost::any_cast<string>(m["SourceEndpointIP"]));
    }
    if (m.find("SourceEndpointInstanceID") != m.end() && !m["SourceEndpointInstanceID"].empty()) {
      sourceEndpointInstanceID = make_shared<string>(boost::any_cast<string>(m["SourceEndpointInstanceID"]));
    }
    if (m.find("SourceEndpointInstanceType") != m.end() && !m["SourceEndpointInstanceType"].empty()) {
      sourceEndpointInstanceType = make_shared<string>(boost::any_cast<string>(m["SourceEndpointInstanceType"]));
    }
    if (m.find("SourceEndpointOracleSID") != m.end() && !m["SourceEndpointOracleSID"].empty()) {
      sourceEndpointOracleSID = make_shared<string>(boost::any_cast<string>(m["SourceEndpointOracleSID"]));
    }
    if (m.find("SourceEndpointPassword") != m.end() && !m["SourceEndpointPassword"].empty()) {
      sourceEndpointPassword = make_shared<string>(boost::any_cast<string>(m["SourceEndpointPassword"]));
    }
    if (m.find("SourceEndpointPort") != m.end() && !m["SourceEndpointPort"].empty()) {
      sourceEndpointPort = make_shared<long>(boost::any_cast<long>(m["SourceEndpointPort"]));
    }
    if (m.find("SourceEndpointRegion") != m.end() && !m["SourceEndpointRegion"].empty()) {
      sourceEndpointRegion = make_shared<string>(boost::any_cast<string>(m["SourceEndpointRegion"]));
    }
    if (m.find("SourceEndpointUserName") != m.end() && !m["SourceEndpointUserName"].empty()) {
      sourceEndpointUserName = make_shared<string>(boost::any_cast<string>(m["SourceEndpointUserName"]));
    }
  }


  virtual ~ModifyBackupSourceEndpointRequest() = default;
};
class ModifyBackupSourceEndpointResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> backupPlanId{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<bool> needPrecheck{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ModifyBackupSourceEndpointResponseBody() {}

  explicit ModifyBackupSourceEndpointResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupPlanId) {
      res["BackupPlanId"] = boost::any(*backupPlanId);
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
    if (needPrecheck) {
      res["NeedPrecheck"] = boost::any(*needPrecheck);
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
    if (m.find("BackupPlanId") != m.end() && !m["BackupPlanId"].empty()) {
      backupPlanId = make_shared<string>(boost::any_cast<string>(m["BackupPlanId"]));
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
    if (m.find("NeedPrecheck") != m.end() && !m["NeedPrecheck"].empty()) {
      needPrecheck = make_shared<bool>(boost::any_cast<bool>(m["NeedPrecheck"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ModifyBackupSourceEndpointResponseBody() = default;
};
class ModifyBackupSourceEndpointResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyBackupSourceEndpointResponseBody> body{};

  ModifyBackupSourceEndpointResponse() {}

  explicit ModifyBackupSourceEndpointResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyBackupSourceEndpointResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyBackupSourceEndpointResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyBackupSourceEndpointResponse() = default;
};
class ModifyBackupStrategyRequest : public Darabonba::Model {
public:
  shared_ptr<long> backupLogIntervalSeconds{};
  shared_ptr<string> backupPeriod{};
  shared_ptr<string> backupPlanId{};
  shared_ptr<string> backupStartTime{};
  shared_ptr<string> backupStrategyType{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> ownerId{};

  ModifyBackupStrategyRequest() {}

  explicit ModifyBackupStrategyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupLogIntervalSeconds) {
      res["BackupLogIntervalSeconds"] = boost::any(*backupLogIntervalSeconds);
    }
    if (backupPeriod) {
      res["BackupPeriod"] = boost::any(*backupPeriod);
    }
    if (backupPlanId) {
      res["BackupPlanId"] = boost::any(*backupPlanId);
    }
    if (backupStartTime) {
      res["BackupStartTime"] = boost::any(*backupStartTime);
    }
    if (backupStrategyType) {
      res["BackupStrategyType"] = boost::any(*backupStrategyType);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupLogIntervalSeconds") != m.end() && !m["BackupLogIntervalSeconds"].empty()) {
      backupLogIntervalSeconds = make_shared<long>(boost::any_cast<long>(m["BackupLogIntervalSeconds"]));
    }
    if (m.find("BackupPeriod") != m.end() && !m["BackupPeriod"].empty()) {
      backupPeriod = make_shared<string>(boost::any_cast<string>(m["BackupPeriod"]));
    }
    if (m.find("BackupPlanId") != m.end() && !m["BackupPlanId"].empty()) {
      backupPlanId = make_shared<string>(boost::any_cast<string>(m["BackupPlanId"]));
    }
    if (m.find("BackupStartTime") != m.end() && !m["BackupStartTime"].empty()) {
      backupStartTime = make_shared<string>(boost::any_cast<string>(m["BackupStartTime"]));
    }
    if (m.find("BackupStrategyType") != m.end() && !m["BackupStrategyType"].empty()) {
      backupStrategyType = make_shared<string>(boost::any_cast<string>(m["BackupStrategyType"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
  }


  virtual ~ModifyBackupStrategyRequest() = default;
};
class ModifyBackupStrategyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> backupPlanId{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<bool> needPrecheck{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ModifyBackupStrategyResponseBody() {}

  explicit ModifyBackupStrategyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupPlanId) {
      res["BackupPlanId"] = boost::any(*backupPlanId);
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
    if (needPrecheck) {
      res["NeedPrecheck"] = boost::any(*needPrecheck);
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
    if (m.find("BackupPlanId") != m.end() && !m["BackupPlanId"].empty()) {
      backupPlanId = make_shared<string>(boost::any_cast<string>(m["BackupPlanId"]));
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
    if (m.find("NeedPrecheck") != m.end() && !m["NeedPrecheck"].empty()) {
      needPrecheck = make_shared<bool>(boost::any_cast<bool>(m["NeedPrecheck"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ModifyBackupStrategyResponseBody() = default;
};
class ModifyBackupStrategyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyBackupStrategyResponseBody> body{};

  ModifyBackupStrategyResponse() {}

  explicit ModifyBackupStrategyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyBackupStrategyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyBackupStrategyResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyBackupStrategyResponse() = default;
};
class ModifyStorageStrategyRequest : public Darabonba::Model {
public:
  shared_ptr<string> backupPlanId{};
  shared_ptr<long> backupRetentionPeriod{};
  shared_ptr<string> clientToken{};
  shared_ptr<long> duplicationArchivePeriod{};
  shared_ptr<long> duplicationInfrequentAccessPeriod{};
  shared_ptr<string> ownerId{};

  ModifyStorageStrategyRequest() {}

  explicit ModifyStorageStrategyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupPlanId) {
      res["BackupPlanId"] = boost::any(*backupPlanId);
    }
    if (backupRetentionPeriod) {
      res["BackupRetentionPeriod"] = boost::any(*backupRetentionPeriod);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (duplicationArchivePeriod) {
      res["DuplicationArchivePeriod"] = boost::any(*duplicationArchivePeriod);
    }
    if (duplicationInfrequentAccessPeriod) {
      res["DuplicationInfrequentAccessPeriod"] = boost::any(*duplicationInfrequentAccessPeriod);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupPlanId") != m.end() && !m["BackupPlanId"].empty()) {
      backupPlanId = make_shared<string>(boost::any_cast<string>(m["BackupPlanId"]));
    }
    if (m.find("BackupRetentionPeriod") != m.end() && !m["BackupRetentionPeriod"].empty()) {
      backupRetentionPeriod = make_shared<long>(boost::any_cast<long>(m["BackupRetentionPeriod"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DuplicationArchivePeriod") != m.end() && !m["DuplicationArchivePeriod"].empty()) {
      duplicationArchivePeriod = make_shared<long>(boost::any_cast<long>(m["DuplicationArchivePeriod"]));
    }
    if (m.find("DuplicationInfrequentAccessPeriod") != m.end() && !m["DuplicationInfrequentAccessPeriod"].empty()) {
      duplicationInfrequentAccessPeriod = make_shared<long>(boost::any_cast<long>(m["DuplicationInfrequentAccessPeriod"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
  }


  virtual ~ModifyStorageStrategyRequest() = default;
};
class ModifyStorageStrategyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> backupPlanId{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<bool> needPrecheck{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ModifyStorageStrategyResponseBody() {}

  explicit ModifyStorageStrategyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupPlanId) {
      res["BackupPlanId"] = boost::any(*backupPlanId);
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
    if (needPrecheck) {
      res["NeedPrecheck"] = boost::any(*needPrecheck);
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
    if (m.find("BackupPlanId") != m.end() && !m["BackupPlanId"].empty()) {
      backupPlanId = make_shared<string>(boost::any_cast<string>(m["BackupPlanId"]));
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
    if (m.find("NeedPrecheck") != m.end() && !m["NeedPrecheck"].empty()) {
      needPrecheck = make_shared<bool>(boost::any_cast<bool>(m["NeedPrecheck"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ModifyStorageStrategyResponseBody() = default;
};
class ModifyStorageStrategyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyStorageStrategyResponseBody> body{};

  ModifyStorageStrategyResponse() {}

  explicit ModifyStorageStrategyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyStorageStrategyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyStorageStrategyResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyStorageStrategyResponse() = default;
};
class ReleaseBackupPlanRequest : public Darabonba::Model {
public:
  shared_ptr<string> backupPlanId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> ownerId{};

  ReleaseBackupPlanRequest() {}

  explicit ReleaseBackupPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupPlanId) {
      res["BackupPlanId"] = boost::any(*backupPlanId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupPlanId") != m.end() && !m["BackupPlanId"].empty()) {
      backupPlanId = make_shared<string>(boost::any_cast<string>(m["BackupPlanId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
  }


  virtual ~ReleaseBackupPlanRequest() = default;
};
class ReleaseBackupPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> backupPlanId{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ReleaseBackupPlanResponseBody() {}

  explicit ReleaseBackupPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupPlanId) {
      res["BackupPlanId"] = boost::any(*backupPlanId);
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
    if (m.find("BackupPlanId") != m.end() && !m["BackupPlanId"].empty()) {
      backupPlanId = make_shared<string>(boost::any_cast<string>(m["BackupPlanId"]));
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


  virtual ~ReleaseBackupPlanResponseBody() = default;
};
class ReleaseBackupPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReleaseBackupPlanResponseBody> body{};

  ReleaseBackupPlanResponse() {}

  explicit ReleaseBackupPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReleaseBackupPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReleaseBackupPlanResponseBody>(model1);
      }
    }
  }


  virtual ~ReleaseBackupPlanResponse() = default;
};
class RenewBackupPlanRequest : public Darabonba::Model {
public:
  shared_ptr<string> backupPlanId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> period{};
  shared_ptr<long> usedTime{};

  RenewBackupPlanRequest() {}

  explicit RenewBackupPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupPlanId) {
      res["BackupPlanId"] = boost::any(*backupPlanId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (usedTime) {
      res["UsedTime"] = boost::any(*usedTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupPlanId") != m.end() && !m["BackupPlanId"].empty()) {
      backupPlanId = make_shared<string>(boost::any_cast<string>(m["BackupPlanId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<string>(boost::any_cast<string>(m["Period"]));
    }
    if (m.find("UsedTime") != m.end() && !m["UsedTime"].empty()) {
      usedTime = make_shared<long>(boost::any_cast<long>(m["UsedTime"]));
    }
  }


  virtual ~RenewBackupPlanRequest() = default;
};
class RenewBackupPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> backupPlanId{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  RenewBackupPlanResponseBody() {}

  explicit RenewBackupPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupPlanId) {
      res["BackupPlanId"] = boost::any(*backupPlanId);
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
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
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
    if (m.find("BackupPlanId") != m.end() && !m["BackupPlanId"].empty()) {
      backupPlanId = make_shared<string>(boost::any_cast<string>(m["BackupPlanId"]));
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
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~RenewBackupPlanResponseBody() = default;
};
class RenewBackupPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RenewBackupPlanResponseBody> body{};

  RenewBackupPlanResponse() {}

  explicit RenewBackupPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RenewBackupPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RenewBackupPlanResponseBody>(model1);
      }
    }
  }


  virtual ~RenewBackupPlanResponse() = default;
};
class StartBackupPlanRequest : public Darabonba::Model {
public:
  shared_ptr<string> backupPlanId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> ownerId{};

  StartBackupPlanRequest() {}

  explicit StartBackupPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupPlanId) {
      res["BackupPlanId"] = boost::any(*backupPlanId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupPlanId") != m.end() && !m["BackupPlanId"].empty()) {
      backupPlanId = make_shared<string>(boost::any_cast<string>(m["BackupPlanId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
  }


  virtual ~StartBackupPlanRequest() = default;
};
class StartBackupPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> backupPlanId{};
  shared_ptr<string> createdFullBackupsetId{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  StartBackupPlanResponseBody() {}

  explicit StartBackupPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupPlanId) {
      res["BackupPlanId"] = boost::any(*backupPlanId);
    }
    if (createdFullBackupsetId) {
      res["CreatedFullBackupsetId"] = boost::any(*createdFullBackupsetId);
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
    if (m.find("BackupPlanId") != m.end() && !m["BackupPlanId"].empty()) {
      backupPlanId = make_shared<string>(boost::any_cast<string>(m["BackupPlanId"]));
    }
    if (m.find("CreatedFullBackupsetId") != m.end() && !m["CreatedFullBackupsetId"].empty()) {
      createdFullBackupsetId = make_shared<string>(boost::any_cast<string>(m["CreatedFullBackupsetId"]));
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


  virtual ~StartBackupPlanResponseBody() = default;
};
class StartBackupPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StartBackupPlanResponseBody> body{};

  StartBackupPlanResponse() {}

  explicit StartBackupPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartBackupPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartBackupPlanResponseBody>(model1);
      }
    }
  }


  virtual ~StartBackupPlanResponse() = default;
};
class StartRestoreTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> restoreTaskId{};

  StartRestoreTaskRequest() {}

  explicit StartRestoreTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (restoreTaskId) {
      res["RestoreTaskId"] = boost::any(*restoreTaskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("RestoreTaskId") != m.end() && !m["RestoreTaskId"].empty()) {
      restoreTaskId = make_shared<string>(boost::any_cast<string>(m["RestoreTaskId"]));
    }
  }


  virtual ~StartRestoreTaskRequest() = default;
};
class StartRestoreTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<string> restoreTaskId{};
  shared_ptr<bool> success{};

  StartRestoreTaskResponseBody() {}

  explicit StartRestoreTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (restoreTaskId) {
      res["RestoreTaskId"] = boost::any(*restoreTaskId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
    if (m.find("RestoreTaskId") != m.end() && !m["RestoreTaskId"].empty()) {
      restoreTaskId = make_shared<string>(boost::any_cast<string>(m["RestoreTaskId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~StartRestoreTaskResponseBody() = default;
};
class StartRestoreTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StartRestoreTaskResponseBody> body{};

  StartRestoreTaskResponse() {}

  explicit StartRestoreTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartRestoreTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartRestoreTaskResponseBody>(model1);
      }
    }
  }


  virtual ~StartRestoreTaskResponse() = default;
};
class StopBackupPlanRequest : public Darabonba::Model {
public:
  shared_ptr<string> backupPlanId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> stopMethod{};

  StopBackupPlanRequest() {}

  explicit StopBackupPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupPlanId) {
      res["BackupPlanId"] = boost::any(*backupPlanId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (stopMethod) {
      res["StopMethod"] = boost::any(*stopMethod);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupPlanId") != m.end() && !m["BackupPlanId"].empty()) {
      backupPlanId = make_shared<string>(boost::any_cast<string>(m["BackupPlanId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("StopMethod") != m.end() && !m["StopMethod"].empty()) {
      stopMethod = make_shared<string>(boost::any_cast<string>(m["StopMethod"]));
    }
  }


  virtual ~StopBackupPlanRequest() = default;
};
class StopBackupPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> backupPlanId{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  StopBackupPlanResponseBody() {}

  explicit StopBackupPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupPlanId) {
      res["BackupPlanId"] = boost::any(*backupPlanId);
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
    if (m.find("BackupPlanId") != m.end() && !m["BackupPlanId"].empty()) {
      backupPlanId = make_shared<string>(boost::any_cast<string>(m["BackupPlanId"]));
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


  virtual ~StopBackupPlanResponseBody() = default;
};
class StopBackupPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopBackupPlanResponseBody> body{};

  StopBackupPlanResponse() {}

  explicit StopBackupPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopBackupPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopBackupPlanResponseBody>(model1);
      }
    }
  }


  virtual ~StopBackupPlanResponse() = default;
};
class UpgradeBackupPlanRequest : public Darabonba::Model {
public:
  shared_ptr<string> backupPlanId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceClass{};
  shared_ptr<string> ownerId{};

  UpgradeBackupPlanRequest() {}

  explicit UpgradeBackupPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupPlanId) {
      res["BackupPlanId"] = boost::any(*backupPlanId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (instanceClass) {
      res["InstanceClass"] = boost::any(*instanceClass);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupPlanId") != m.end() && !m["BackupPlanId"].empty()) {
      backupPlanId = make_shared<string>(boost::any_cast<string>(m["BackupPlanId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("InstanceClass") != m.end() && !m["InstanceClass"].empty()) {
      instanceClass = make_shared<string>(boost::any_cast<string>(m["InstanceClass"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
  }


  virtual ~UpgradeBackupPlanRequest() = default;
};
class UpgradeBackupPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> backupPlanId{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpgradeBackupPlanResponseBody() {}

  explicit UpgradeBackupPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupPlanId) {
      res["BackupPlanId"] = boost::any(*backupPlanId);
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
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
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
    if (m.find("BackupPlanId") != m.end() && !m["BackupPlanId"].empty()) {
      backupPlanId = make_shared<string>(boost::any_cast<string>(m["BackupPlanId"]));
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
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpgradeBackupPlanResponseBody() = default;
};
class UpgradeBackupPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpgradeBackupPlanResponseBody> body{};

  UpgradeBackupPlanResponse() {}

  explicit UpgradeBackupPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpgradeBackupPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpgradeBackupPlanResponseBody>(model1);
      }
    }
  }


  virtual ~UpgradeBackupPlanResponse() = default;
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
  ConfigureBackupPlanResponse configureBackupPlanWithOptions(shared_ptr<ConfigureBackupPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ConfigureBackupPlanResponse configureBackupPlan(shared_ptr<ConfigureBackupPlanRequest> request);
  CreateAndStartBackupPlanResponse createAndStartBackupPlanWithOptions(shared_ptr<CreateAndStartBackupPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAndStartBackupPlanResponse createAndStartBackupPlan(shared_ptr<CreateAndStartBackupPlanRequest> request);
  CreateBackupPlanResponse createBackupPlanWithOptions(shared_ptr<CreateBackupPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateBackupPlanResponse createBackupPlan(shared_ptr<CreateBackupPlanRequest> request);
  CreateFullBackupSetDownloadResponse createFullBackupSetDownloadWithOptions(shared_ptr<CreateFullBackupSetDownloadRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateFullBackupSetDownloadResponse createFullBackupSetDownload(shared_ptr<CreateFullBackupSetDownloadRequest> request);
  CreateGetDBListFromAgentTaskResponse createGetDBListFromAgentTaskWithOptions(shared_ptr<CreateGetDBListFromAgentTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateGetDBListFromAgentTaskResponse createGetDBListFromAgentTask(shared_ptr<CreateGetDBListFromAgentTaskRequest> request);
  CreateIncrementBackupSetDownloadResponse createIncrementBackupSetDownloadWithOptions(shared_ptr<CreateIncrementBackupSetDownloadRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateIncrementBackupSetDownloadResponse createIncrementBackupSetDownload(shared_ptr<CreateIncrementBackupSetDownloadRequest> request);
  CreateRestoreTaskResponse createRestoreTaskWithOptions(shared_ptr<CreateRestoreTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRestoreTaskResponse createRestoreTask(shared_ptr<CreateRestoreTaskRequest> request);
  DescribeBackupGatewayListResponse describeBackupGatewayListWithOptions(shared_ptr<DescribeBackupGatewayListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeBackupGatewayListResponse describeBackupGatewayList(shared_ptr<DescribeBackupGatewayListRequest> request);
  DescribeBackupPlanBillingResponse describeBackupPlanBillingWithOptions(shared_ptr<DescribeBackupPlanBillingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeBackupPlanBillingResponse describeBackupPlanBilling(shared_ptr<DescribeBackupPlanBillingRequest> request);
  DescribeBackupPlanListResponse describeBackupPlanListWithOptions(shared_ptr<DescribeBackupPlanListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeBackupPlanListResponse describeBackupPlanList(shared_ptr<DescribeBackupPlanListRequest> request);
  DescribeBackupSetDownloadTaskListResponse describeBackupSetDownloadTaskListWithOptions(shared_ptr<DescribeBackupSetDownloadTaskListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeBackupSetDownloadTaskListResponse describeBackupSetDownloadTaskList(shared_ptr<DescribeBackupSetDownloadTaskListRequest> request);
  DescribeDLAServiceResponse describeDLAServiceWithOptions(shared_ptr<DescribeDLAServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDLAServiceResponse describeDLAService(shared_ptr<DescribeDLAServiceRequest> request);
  DescribeFullBackupListResponse describeFullBackupListWithOptions(shared_ptr<DescribeFullBackupListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeFullBackupListResponse describeFullBackupList(shared_ptr<DescribeFullBackupListRequest> request);
  DescribeIncrementBackupListResponse describeIncrementBackupListWithOptions(shared_ptr<DescribeIncrementBackupListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeIncrementBackupListResponse describeIncrementBackupList(shared_ptr<DescribeIncrementBackupListRequest> request);
  DescribeJobErrorCodeResponse describeJobErrorCodeWithOptions(shared_ptr<DescribeJobErrorCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeJobErrorCodeResponse describeJobErrorCode(shared_ptr<DescribeJobErrorCodeRequest> request);
  DescribeNodeCidrListResponse describeNodeCidrListWithOptions(shared_ptr<DescribeNodeCidrListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeNodeCidrListResponse describeNodeCidrList(shared_ptr<DescribeNodeCidrListRequest> request);
  DescribePreCheckProgressListResponse describePreCheckProgressListWithOptions(shared_ptr<DescribePreCheckProgressListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePreCheckProgressListResponse describePreCheckProgressList(shared_ptr<DescribePreCheckProgressListRequest> request);
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions(shared_ptr<DescribeRegionsRequest> request);
  DescribeRestoreRangeInfoResponse describeRestoreRangeInfoWithOptions(shared_ptr<DescribeRestoreRangeInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRestoreRangeInfoResponse describeRestoreRangeInfo(shared_ptr<DescribeRestoreRangeInfoRequest> request);
  DescribeRestoreTaskListResponse describeRestoreTaskListWithOptions(shared_ptr<DescribeRestoreTaskListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRestoreTaskListResponse describeRestoreTaskList(shared_ptr<DescribeRestoreTaskListRequest> request);
  DisableBackupLogResponse disableBackupLogWithOptions(shared_ptr<DisableBackupLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableBackupLogResponse disableBackupLog(shared_ptr<DisableBackupLogRequest> request);
  EnableBackupLogResponse enableBackupLogWithOptions(shared_ptr<EnableBackupLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableBackupLogResponse enableBackupLog(shared_ptr<EnableBackupLogRequest> request);
  GetDBListFromAgentResponse getDBListFromAgentWithOptions(shared_ptr<GetDBListFromAgentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDBListFromAgentResponse getDBListFromAgent(shared_ptr<GetDBListFromAgentRequest> request);
  InitializeDbsServiceLinkedRoleResponse initializeDbsServiceLinkedRoleWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InitializeDbsServiceLinkedRoleResponse initializeDbsServiceLinkedRole();
  ModifyBackupObjectsResponse modifyBackupObjectsWithOptions(shared_ptr<ModifyBackupObjectsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyBackupObjectsResponse modifyBackupObjects(shared_ptr<ModifyBackupObjectsRequest> request);
  ModifyBackupPlanNameResponse modifyBackupPlanNameWithOptions(shared_ptr<ModifyBackupPlanNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyBackupPlanNameResponse modifyBackupPlanName(shared_ptr<ModifyBackupPlanNameRequest> request);
  ModifyBackupSetDownloadRulesResponse modifyBackupSetDownloadRulesWithOptions(shared_ptr<ModifyBackupSetDownloadRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyBackupSetDownloadRulesResponse modifyBackupSetDownloadRules(shared_ptr<ModifyBackupSetDownloadRulesRequest> request);
  ModifyBackupSourceEndpointResponse modifyBackupSourceEndpointWithOptions(shared_ptr<ModifyBackupSourceEndpointRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyBackupSourceEndpointResponse modifyBackupSourceEndpoint(shared_ptr<ModifyBackupSourceEndpointRequest> request);
  ModifyBackupStrategyResponse modifyBackupStrategyWithOptions(shared_ptr<ModifyBackupStrategyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyBackupStrategyResponse modifyBackupStrategy(shared_ptr<ModifyBackupStrategyRequest> request);
  ModifyStorageStrategyResponse modifyStorageStrategyWithOptions(shared_ptr<ModifyStorageStrategyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyStorageStrategyResponse modifyStorageStrategy(shared_ptr<ModifyStorageStrategyRequest> request);
  ReleaseBackupPlanResponse releaseBackupPlanWithOptions(shared_ptr<ReleaseBackupPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReleaseBackupPlanResponse releaseBackupPlan(shared_ptr<ReleaseBackupPlanRequest> request);
  RenewBackupPlanResponse renewBackupPlanWithOptions(shared_ptr<RenewBackupPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RenewBackupPlanResponse renewBackupPlan(shared_ptr<RenewBackupPlanRequest> request);
  StartBackupPlanResponse startBackupPlanWithOptions(shared_ptr<StartBackupPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartBackupPlanResponse startBackupPlan(shared_ptr<StartBackupPlanRequest> request);
  StartRestoreTaskResponse startRestoreTaskWithOptions(shared_ptr<StartRestoreTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartRestoreTaskResponse startRestoreTask(shared_ptr<StartRestoreTaskRequest> request);
  StopBackupPlanResponse stopBackupPlanWithOptions(shared_ptr<StopBackupPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopBackupPlanResponse stopBackupPlan(shared_ptr<StopBackupPlanRequest> request);
  UpgradeBackupPlanResponse upgradeBackupPlanWithOptions(shared_ptr<UpgradeBackupPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpgradeBackupPlanResponse upgradeBackupPlan(shared_ptr<UpgradeBackupPlanRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Dbs20190306

#endif
