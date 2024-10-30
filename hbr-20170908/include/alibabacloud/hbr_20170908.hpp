// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_HBR20170908_H_
#define ALIBABACLOUD_HBR20170908_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Hbr20170908 {
class OtsDetail : public Darabonba::Model {
public:
  shared_ptr<vector<string>> tableNames{};

  OtsDetail() {}

  explicit OtsDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tableNames) {
      res["TableNames"] = boost::any(*tableNames);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TableNames") != m.end() && !m["TableNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TableNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TableNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tableNames = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~OtsDetail() = default;
};
class OtsTableRestoreDetail : public Darabonba::Model {
public:
  shared_ptr<long> batchChannelCount{};
  shared_ptr<string> indexNameSuffix{};
  shared_ptr<bool> overwriteExisting{};
  shared_ptr<bool> reGenerateAutoIncrementPK{};
  shared_ptr<bool> restoreIndex{};
  shared_ptr<bool> restoreSearchIndex{};
  shared_ptr<string> searchIndexNameSuffix{};

  OtsTableRestoreDetail() {}

  explicit OtsTableRestoreDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (batchChannelCount) {
      res["BatchChannelCount"] = boost::any(*batchChannelCount);
    }
    if (indexNameSuffix) {
      res["IndexNameSuffix"] = boost::any(*indexNameSuffix);
    }
    if (overwriteExisting) {
      res["OverwriteExisting"] = boost::any(*overwriteExisting);
    }
    if (reGenerateAutoIncrementPK) {
      res["ReGenerateAutoIncrementPK"] = boost::any(*reGenerateAutoIncrementPK);
    }
    if (restoreIndex) {
      res["RestoreIndex"] = boost::any(*restoreIndex);
    }
    if (restoreSearchIndex) {
      res["RestoreSearchIndex"] = boost::any(*restoreSearchIndex);
    }
    if (searchIndexNameSuffix) {
      res["SearchIndexNameSuffix"] = boost::any(*searchIndexNameSuffix);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BatchChannelCount") != m.end() && !m["BatchChannelCount"].empty()) {
      batchChannelCount = make_shared<long>(boost::any_cast<long>(m["BatchChannelCount"]));
    }
    if (m.find("IndexNameSuffix") != m.end() && !m["IndexNameSuffix"].empty()) {
      indexNameSuffix = make_shared<string>(boost::any_cast<string>(m["IndexNameSuffix"]));
    }
    if (m.find("OverwriteExisting") != m.end() && !m["OverwriteExisting"].empty()) {
      overwriteExisting = make_shared<bool>(boost::any_cast<bool>(m["OverwriteExisting"]));
    }
    if (m.find("ReGenerateAutoIncrementPK") != m.end() && !m["ReGenerateAutoIncrementPK"].empty()) {
      reGenerateAutoIncrementPK = make_shared<bool>(boost::any_cast<bool>(m["ReGenerateAutoIncrementPK"]));
    }
    if (m.find("RestoreIndex") != m.end() && !m["RestoreIndex"].empty()) {
      restoreIndex = make_shared<bool>(boost::any_cast<bool>(m["RestoreIndex"]));
    }
    if (m.find("RestoreSearchIndex") != m.end() && !m["RestoreSearchIndex"].empty()) {
      restoreSearchIndex = make_shared<bool>(boost::any_cast<bool>(m["RestoreSearchIndex"]));
    }
    if (m.find("SearchIndexNameSuffix") != m.end() && !m["SearchIndexNameSuffix"].empty()) {
      searchIndexNameSuffix = make_shared<string>(boost::any_cast<string>(m["SearchIndexNameSuffix"]));
    }
  }


  virtual ~OtsTableRestoreDetail() = default;
};
class Report : public Darabonba::Model {
public:
  shared_ptr<string> failedFiles{};
  shared_ptr<string> skippedFiles{};
  shared_ptr<string> successFiles{};
  shared_ptr<string> totalFiles{};

  Report() {}

  explicit Report(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (failedFiles) {
      res["FailedFiles"] = boost::any(*failedFiles);
    }
    if (skippedFiles) {
      res["SkippedFiles"] = boost::any(*skippedFiles);
    }
    if (successFiles) {
      res["SuccessFiles"] = boost::any(*successFiles);
    }
    if (totalFiles) {
      res["TotalFiles"] = boost::any(*totalFiles);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FailedFiles") != m.end() && !m["FailedFiles"].empty()) {
      failedFiles = make_shared<string>(boost::any_cast<string>(m["FailedFiles"]));
    }
    if (m.find("SkippedFiles") != m.end() && !m["SkippedFiles"].empty()) {
      skippedFiles = make_shared<string>(boost::any_cast<string>(m["SkippedFiles"]));
    }
    if (m.find("SuccessFiles") != m.end() && !m["SuccessFiles"].empty()) {
      successFiles = make_shared<string>(boost::any_cast<string>(m["SuccessFiles"]));
    }
    if (m.find("TotalFiles") != m.end() && !m["TotalFiles"].empty()) {
      totalFiles = make_shared<string>(boost::any_cast<string>(m["TotalFiles"]));
    }
  }


  virtual ~Report() = default;
};
class Rule : public Darabonba::Model {
public:
  shared_ptr<string> backupType{};
  shared_ptr<string> destinationRegionId{};
  shared_ptr<long> destinationRetention{};
  shared_ptr<bool> disabled{};
  shared_ptr<bool> doCopy{};
  shared_ptr<long> retention{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> schedule{};

  Rule() {}

  explicit Rule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupType) {
      res["BackupType"] = boost::any(*backupType);
    }
    if (destinationRegionId) {
      res["DestinationRegionId"] = boost::any(*destinationRegionId);
    }
    if (destinationRetention) {
      res["DestinationRetention"] = boost::any(*destinationRetention);
    }
    if (disabled) {
      res["Disabled"] = boost::any(*disabled);
    }
    if (doCopy) {
      res["DoCopy"] = boost::any(*doCopy);
    }
    if (retention) {
      res["Retention"] = boost::any(*retention);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (schedule) {
      res["Schedule"] = boost::any(*schedule);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupType") != m.end() && !m["BackupType"].empty()) {
      backupType = make_shared<string>(boost::any_cast<string>(m["BackupType"]));
    }
    if (m.find("DestinationRegionId") != m.end() && !m["DestinationRegionId"].empty()) {
      destinationRegionId = make_shared<string>(boost::any_cast<string>(m["DestinationRegionId"]));
    }
    if (m.find("DestinationRetention") != m.end() && !m["DestinationRetention"].empty()) {
      destinationRetention = make_shared<long>(boost::any_cast<long>(m["DestinationRetention"]));
    }
    if (m.find("Disabled") != m.end() && !m["Disabled"].empty()) {
      disabled = make_shared<bool>(boost::any_cast<bool>(m["Disabled"]));
    }
    if (m.find("DoCopy") != m.end() && !m["DoCopy"].empty()) {
      doCopy = make_shared<bool>(boost::any_cast<bool>(m["DoCopy"]));
    }
    if (m.find("Retention") != m.end() && !m["Retention"].empty()) {
      retention = make_shared<long>(boost::any_cast<long>(m["Retention"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("Schedule") != m.end() && !m["Schedule"].empty()) {
      schedule = make_shared<string>(boost::any_cast<string>(m["Schedule"]));
    }
  }


  virtual ~Rule() = default;
};
class AddContainerClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterType{};
  shared_ptr<string> description{};
  shared_ptr<string> identifier{};
  shared_ptr<string> name{};
  shared_ptr<string> networkType{};

  AddContainerClusterRequest() {}

  explicit AddContainerClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterType) {
      res["ClusterType"] = boost::any(*clusterType);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (identifier) {
      res["Identifier"] = boost::any(*identifier);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterType") != m.end() && !m["ClusterType"].empty()) {
      clusterType = make_shared<string>(boost::any_cast<string>(m["ClusterType"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Identifier") != m.end() && !m["Identifier"].empty()) {
      identifier = make_shared<string>(boost::any_cast<string>(m["Identifier"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
  }


  virtual ~AddContainerClusterRequest() = default;
};
class AddContainerClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> token{};

  AddContainerClusterResponseBody() {}

  explicit AddContainerClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
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
    if (token) {
      res["Token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
  }


  virtual ~AddContainerClusterResponseBody() = default;
};
class AddContainerClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddContainerClusterResponseBody> body{};

  AddContainerClusterResponse() {}

  explicit AddContainerClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddContainerClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddContainerClusterResponseBody>(model1);
      }
    }
  }


  virtual ~AddContainerClusterResponse() = default;
};
class CancelBackupJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> vaultId{};

  CancelBackupJobRequest() {}

  explicit CancelBackupJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (vaultId) {
      res["VaultId"] = boost::any(*vaultId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("VaultId") != m.end() && !m["VaultId"].empty()) {
      vaultId = make_shared<string>(boost::any_cast<string>(m["VaultId"]));
    }
  }


  virtual ~CancelBackupJobRequest() = default;
};
class CancelBackupJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CancelBackupJobResponseBody() {}

  explicit CancelBackupJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CancelBackupJobResponseBody() = default;
};
class CancelBackupJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancelBackupJobResponseBody> body{};

  CancelBackupJobResponse() {}

  explicit CancelBackupJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CancelBackupJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelBackupJobResponseBody>(model1);
      }
    }
  }


  virtual ~CancelBackupJobResponse() = default;
};
class CancelRestoreJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> restoreId{};
  shared_ptr<string> vaultId{};

  CancelRestoreJobRequest() {}

  explicit CancelRestoreJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (restoreId) {
      res["RestoreId"] = boost::any(*restoreId);
    }
    if (vaultId) {
      res["VaultId"] = boost::any(*vaultId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RestoreId") != m.end() && !m["RestoreId"].empty()) {
      restoreId = make_shared<string>(boost::any_cast<string>(m["RestoreId"]));
    }
    if (m.find("VaultId") != m.end() && !m["VaultId"].empty()) {
      vaultId = make_shared<string>(boost::any_cast<string>(m["VaultId"]));
    }
  }


  virtual ~CancelRestoreJobRequest() = default;
};
class CancelRestoreJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CancelRestoreJobResponseBody() {}

  explicit CancelRestoreJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CancelRestoreJobResponseBody() = default;
};
class CancelRestoreJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancelRestoreJobResponseBody> body{};

  CancelRestoreJobResponse() {}

  explicit CancelRestoreJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CancelRestoreJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelRestoreJobResponseBody>(model1);
      }
    }
  }


  virtual ~CancelRestoreJobResponse() = default;
};
class ChangeResourceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> newResourceGroupId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};

  ChangeResourceGroupRequest() {}

  explicit ChangeResourceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (newResourceGroupId) {
      res["NewResourceGroupId"] = boost::any(*newResourceGroupId);
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
    if (m.find("NewResourceGroupId") != m.end() && !m["NewResourceGroupId"].empty()) {
      newResourceGroupId = make_shared<string>(boost::any_cast<string>(m["NewResourceGroupId"]));
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
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
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
class CheckRoleRequest : public Darabonba::Model {
public:
  shared_ptr<string> checkRoleType{};
  shared_ptr<string> crossAccountRoleName{};
  shared_ptr<long> crossAccountUserId{};

  CheckRoleRequest() {}

  explicit CheckRoleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkRoleType) {
      res["CheckRoleType"] = boost::any(*checkRoleType);
    }
    if (crossAccountRoleName) {
      res["CrossAccountRoleName"] = boost::any(*crossAccountRoleName);
    }
    if (crossAccountUserId) {
      res["CrossAccountUserId"] = boost::any(*crossAccountUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckRoleType") != m.end() && !m["CheckRoleType"].empty()) {
      checkRoleType = make_shared<string>(boost::any_cast<string>(m["CheckRoleType"]));
    }
    if (m.find("CrossAccountRoleName") != m.end() && !m["CrossAccountRoleName"].empty()) {
      crossAccountRoleName = make_shared<string>(boost::any_cast<string>(m["CrossAccountRoleName"]));
    }
    if (m.find("CrossAccountUserId") != m.end() && !m["CrossAccountUserId"].empty()) {
      crossAccountUserId = make_shared<long>(boost::any_cast<long>(m["CrossAccountUserId"]));
    }
  }


  virtual ~CheckRoleRequest() = default;
};
class CheckRoleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CheckRoleResponseBody() {}

  explicit CheckRoleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CheckRoleResponseBody() = default;
};
class CheckRoleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckRoleResponseBody> body{};

  CheckRoleResponse() {}

  explicit CheckRoleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckRoleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckRoleResponseBody>(model1);
      }
    }
  }


  virtual ~CheckRoleResponse() = default;
};
class CreateBackupJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> backupType{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> containerClusterId{};
  shared_ptr<string> containerResources{};
  shared_ptr<string> crossAccountRoleName{};
  shared_ptr<string> crossAccountType{};
  shared_ptr<long> crossAccountUserId{};
  shared_ptr<map<string, boost::any>> detail{};
  shared_ptr<string> exclude{};
  shared_ptr<string> include{};
  shared_ptr<bool> initiatedByAck{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> jobName{};
  shared_ptr<string> options{};
  shared_ptr<long> retention{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> speedLimit{};
  shared_ptr<string> vaultId{};

  CreateBackupJobRequest() {}

  explicit CreateBackupJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupType) {
      res["BackupType"] = boost::any(*backupType);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (containerClusterId) {
      res["ContainerClusterId"] = boost::any(*containerClusterId);
    }
    if (containerResources) {
      res["ContainerResources"] = boost::any(*containerResources);
    }
    if (crossAccountRoleName) {
      res["CrossAccountRoleName"] = boost::any(*crossAccountRoleName);
    }
    if (crossAccountType) {
      res["CrossAccountType"] = boost::any(*crossAccountType);
    }
    if (crossAccountUserId) {
      res["CrossAccountUserId"] = boost::any(*crossAccountUserId);
    }
    if (detail) {
      res["Detail"] = boost::any(*detail);
    }
    if (exclude) {
      res["Exclude"] = boost::any(*exclude);
    }
    if (include) {
      res["Include"] = boost::any(*include);
    }
    if (initiatedByAck) {
      res["InitiatedByAck"] = boost::any(*initiatedByAck);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (jobName) {
      res["JobName"] = boost::any(*jobName);
    }
    if (options) {
      res["Options"] = boost::any(*options);
    }
    if (retention) {
      res["Retention"] = boost::any(*retention);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (speedLimit) {
      res["SpeedLimit"] = boost::any(*speedLimit);
    }
    if (vaultId) {
      res["VaultId"] = boost::any(*vaultId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupType") != m.end() && !m["BackupType"].empty()) {
      backupType = make_shared<string>(boost::any_cast<string>(m["BackupType"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ContainerClusterId") != m.end() && !m["ContainerClusterId"].empty()) {
      containerClusterId = make_shared<string>(boost::any_cast<string>(m["ContainerClusterId"]));
    }
    if (m.find("ContainerResources") != m.end() && !m["ContainerResources"].empty()) {
      containerResources = make_shared<string>(boost::any_cast<string>(m["ContainerResources"]));
    }
    if (m.find("CrossAccountRoleName") != m.end() && !m["CrossAccountRoleName"].empty()) {
      crossAccountRoleName = make_shared<string>(boost::any_cast<string>(m["CrossAccountRoleName"]));
    }
    if (m.find("CrossAccountType") != m.end() && !m["CrossAccountType"].empty()) {
      crossAccountType = make_shared<string>(boost::any_cast<string>(m["CrossAccountType"]));
    }
    if (m.find("CrossAccountUserId") != m.end() && !m["CrossAccountUserId"].empty()) {
      crossAccountUserId = make_shared<long>(boost::any_cast<long>(m["CrossAccountUserId"]));
    }
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Detail"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      detail = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Exclude") != m.end() && !m["Exclude"].empty()) {
      exclude = make_shared<string>(boost::any_cast<string>(m["Exclude"]));
    }
    if (m.find("Include") != m.end() && !m["Include"].empty()) {
      include = make_shared<string>(boost::any_cast<string>(m["Include"]));
    }
    if (m.find("InitiatedByAck") != m.end() && !m["InitiatedByAck"].empty()) {
      initiatedByAck = make_shared<bool>(boost::any_cast<bool>(m["InitiatedByAck"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("JobName") != m.end() && !m["JobName"].empty()) {
      jobName = make_shared<string>(boost::any_cast<string>(m["JobName"]));
    }
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      options = make_shared<string>(boost::any_cast<string>(m["Options"]));
    }
    if (m.find("Retention") != m.end() && !m["Retention"].empty()) {
      retention = make_shared<long>(boost::any_cast<long>(m["Retention"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("SpeedLimit") != m.end() && !m["SpeedLimit"].empty()) {
      speedLimit = make_shared<string>(boost::any_cast<string>(m["SpeedLimit"]));
    }
    if (m.find("VaultId") != m.end() && !m["VaultId"].empty()) {
      vaultId = make_shared<string>(boost::any_cast<string>(m["VaultId"]));
    }
  }


  virtual ~CreateBackupJobRequest() = default;
};
class CreateBackupJobShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> backupType{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> containerClusterId{};
  shared_ptr<string> containerResources{};
  shared_ptr<string> crossAccountRoleName{};
  shared_ptr<string> crossAccountType{};
  shared_ptr<long> crossAccountUserId{};
  shared_ptr<string> detailShrink{};
  shared_ptr<string> exclude{};
  shared_ptr<string> include{};
  shared_ptr<bool> initiatedByAck{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> jobName{};
  shared_ptr<string> options{};
  shared_ptr<long> retention{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> speedLimit{};
  shared_ptr<string> vaultId{};

  CreateBackupJobShrinkRequest() {}

  explicit CreateBackupJobShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupType) {
      res["BackupType"] = boost::any(*backupType);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (containerClusterId) {
      res["ContainerClusterId"] = boost::any(*containerClusterId);
    }
    if (containerResources) {
      res["ContainerResources"] = boost::any(*containerResources);
    }
    if (crossAccountRoleName) {
      res["CrossAccountRoleName"] = boost::any(*crossAccountRoleName);
    }
    if (crossAccountType) {
      res["CrossAccountType"] = boost::any(*crossAccountType);
    }
    if (crossAccountUserId) {
      res["CrossAccountUserId"] = boost::any(*crossAccountUserId);
    }
    if (detailShrink) {
      res["Detail"] = boost::any(*detailShrink);
    }
    if (exclude) {
      res["Exclude"] = boost::any(*exclude);
    }
    if (include) {
      res["Include"] = boost::any(*include);
    }
    if (initiatedByAck) {
      res["InitiatedByAck"] = boost::any(*initiatedByAck);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (jobName) {
      res["JobName"] = boost::any(*jobName);
    }
    if (options) {
      res["Options"] = boost::any(*options);
    }
    if (retention) {
      res["Retention"] = boost::any(*retention);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (speedLimit) {
      res["SpeedLimit"] = boost::any(*speedLimit);
    }
    if (vaultId) {
      res["VaultId"] = boost::any(*vaultId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupType") != m.end() && !m["BackupType"].empty()) {
      backupType = make_shared<string>(boost::any_cast<string>(m["BackupType"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ContainerClusterId") != m.end() && !m["ContainerClusterId"].empty()) {
      containerClusterId = make_shared<string>(boost::any_cast<string>(m["ContainerClusterId"]));
    }
    if (m.find("ContainerResources") != m.end() && !m["ContainerResources"].empty()) {
      containerResources = make_shared<string>(boost::any_cast<string>(m["ContainerResources"]));
    }
    if (m.find("CrossAccountRoleName") != m.end() && !m["CrossAccountRoleName"].empty()) {
      crossAccountRoleName = make_shared<string>(boost::any_cast<string>(m["CrossAccountRoleName"]));
    }
    if (m.find("CrossAccountType") != m.end() && !m["CrossAccountType"].empty()) {
      crossAccountType = make_shared<string>(boost::any_cast<string>(m["CrossAccountType"]));
    }
    if (m.find("CrossAccountUserId") != m.end() && !m["CrossAccountUserId"].empty()) {
      crossAccountUserId = make_shared<long>(boost::any_cast<long>(m["CrossAccountUserId"]));
    }
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      detailShrink = make_shared<string>(boost::any_cast<string>(m["Detail"]));
    }
    if (m.find("Exclude") != m.end() && !m["Exclude"].empty()) {
      exclude = make_shared<string>(boost::any_cast<string>(m["Exclude"]));
    }
    if (m.find("Include") != m.end() && !m["Include"].empty()) {
      include = make_shared<string>(boost::any_cast<string>(m["Include"]));
    }
    if (m.find("InitiatedByAck") != m.end() && !m["InitiatedByAck"].empty()) {
      initiatedByAck = make_shared<bool>(boost::any_cast<bool>(m["InitiatedByAck"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("JobName") != m.end() && !m["JobName"].empty()) {
      jobName = make_shared<string>(boost::any_cast<string>(m["JobName"]));
    }
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      options = make_shared<string>(boost::any_cast<string>(m["Options"]));
    }
    if (m.find("Retention") != m.end() && !m["Retention"].empty()) {
      retention = make_shared<long>(boost::any_cast<long>(m["Retention"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("SpeedLimit") != m.end() && !m["SpeedLimit"].empty()) {
      speedLimit = make_shared<string>(boost::any_cast<string>(m["SpeedLimit"]));
    }
    if (m.find("VaultId") != m.end() && !m["VaultId"].empty()) {
      vaultId = make_shared<string>(boost::any_cast<string>(m["VaultId"]));
    }
  }


  virtual ~CreateBackupJobShrinkRequest() = default;
};
class CreateBackupJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> jobId{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateBackupJobResponseBody() {}

  explicit CreateBackupJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
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
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateBackupJobResponseBody() = default;
};
class CreateBackupJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateBackupJobResponseBody> body{};

  CreateBackupJobResponse() {}

  explicit CreateBackupJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateBackupJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateBackupJobResponseBody>(model1);
      }
    }
  }


  virtual ~CreateBackupJobResponse() = default;
};
class CreateBackupPlanRequestRule : public Darabonba::Model {
public:
  shared_ptr<string> backupType{};
  shared_ptr<string> destinationRegionId{};
  shared_ptr<long> destinationRetention{};
  shared_ptr<bool> disabled{};
  shared_ptr<bool> doCopy{};
  shared_ptr<long> retention{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> schedule{};

  CreateBackupPlanRequestRule() {}

  explicit CreateBackupPlanRequestRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupType) {
      res["BackupType"] = boost::any(*backupType);
    }
    if (destinationRegionId) {
      res["DestinationRegionId"] = boost::any(*destinationRegionId);
    }
    if (destinationRetention) {
      res["DestinationRetention"] = boost::any(*destinationRetention);
    }
    if (disabled) {
      res["Disabled"] = boost::any(*disabled);
    }
    if (doCopy) {
      res["DoCopy"] = boost::any(*doCopy);
    }
    if (retention) {
      res["Retention"] = boost::any(*retention);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (schedule) {
      res["Schedule"] = boost::any(*schedule);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupType") != m.end() && !m["BackupType"].empty()) {
      backupType = make_shared<string>(boost::any_cast<string>(m["BackupType"]));
    }
    if (m.find("DestinationRegionId") != m.end() && !m["DestinationRegionId"].empty()) {
      destinationRegionId = make_shared<string>(boost::any_cast<string>(m["DestinationRegionId"]));
    }
    if (m.find("DestinationRetention") != m.end() && !m["DestinationRetention"].empty()) {
      destinationRetention = make_shared<long>(boost::any_cast<long>(m["DestinationRetention"]));
    }
    if (m.find("Disabled") != m.end() && !m["Disabled"].empty()) {
      disabled = make_shared<bool>(boost::any_cast<bool>(m["Disabled"]));
    }
    if (m.find("DoCopy") != m.end() && !m["DoCopy"].empty()) {
      doCopy = make_shared<bool>(boost::any_cast<bool>(m["DoCopy"]));
    }
    if (m.find("Retention") != m.end() && !m["Retention"].empty()) {
      retention = make_shared<long>(boost::any_cast<long>(m["Retention"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("Schedule") != m.end() && !m["Schedule"].empty()) {
      schedule = make_shared<string>(boost::any_cast<string>(m["Schedule"]));
    }
  }


  virtual ~CreateBackupPlanRequestRule() = default;
};
class CreateBackupPlanRequest : public Darabonba::Model {
public:
  shared_ptr<string> backupType{};
  shared_ptr<string> bucket{};
  shared_ptr<string> changeListPath{};
  shared_ptr<long> createTime{};
  shared_ptr<string> crossAccountRoleName{};
  shared_ptr<string> crossAccountType{};
  shared_ptr<long> crossAccountUserId{};
  shared_ptr<map<string, boost::any>> destDataSourceDetail{};
  shared_ptr<string> destDataSourceId{};
  shared_ptr<string> destSourceType{};
  shared_ptr<map<string, boost::any>> detail{};
  shared_ptr<bool> disabled{};
  shared_ptr<string> exclude{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> include{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<long> keepLatestSnapshots{};
  shared_ptr<string> options{};
  shared_ptr<OtsDetail> otsDetail{};
  shared_ptr<vector<string>> path{};
  shared_ptr<string> planName{};
  shared_ptr<string> prefix{};
  shared_ptr<long> retention{};
  shared_ptr<vector<CreateBackupPlanRequestRule>> rule{};
  shared_ptr<string> schedule{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> speedLimit{};
  shared_ptr<string> udmRegionId{};
  shared_ptr<string> vaultId{};

  CreateBackupPlanRequest() {}

  explicit CreateBackupPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupType) {
      res["BackupType"] = boost::any(*backupType);
    }
    if (bucket) {
      res["Bucket"] = boost::any(*bucket);
    }
    if (changeListPath) {
      res["ChangeListPath"] = boost::any(*changeListPath);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (crossAccountRoleName) {
      res["CrossAccountRoleName"] = boost::any(*crossAccountRoleName);
    }
    if (crossAccountType) {
      res["CrossAccountType"] = boost::any(*crossAccountType);
    }
    if (crossAccountUserId) {
      res["CrossAccountUserId"] = boost::any(*crossAccountUserId);
    }
    if (destDataSourceDetail) {
      res["DestDataSourceDetail"] = boost::any(*destDataSourceDetail);
    }
    if (destDataSourceId) {
      res["DestDataSourceId"] = boost::any(*destDataSourceId);
    }
    if (destSourceType) {
      res["DestSourceType"] = boost::any(*destSourceType);
    }
    if (detail) {
      res["Detail"] = boost::any(*detail);
    }
    if (disabled) {
      res["Disabled"] = boost::any(*disabled);
    }
    if (exclude) {
      res["Exclude"] = boost::any(*exclude);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (include) {
      res["Include"] = boost::any(*include);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (keepLatestSnapshots) {
      res["KeepLatestSnapshots"] = boost::any(*keepLatestSnapshots);
    }
    if (options) {
      res["Options"] = boost::any(*options);
    }
    if (otsDetail) {
      res["OtsDetail"] = otsDetail ? boost::any(otsDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (planName) {
      res["PlanName"] = boost::any(*planName);
    }
    if (prefix) {
      res["Prefix"] = boost::any(*prefix);
    }
    if (retention) {
      res["Retention"] = boost::any(*retention);
    }
    if (rule) {
      vector<boost::any> temp1;
      for(auto item1:*rule){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Rule"] = boost::any(temp1);
    }
    if (schedule) {
      res["Schedule"] = boost::any(*schedule);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (speedLimit) {
      res["SpeedLimit"] = boost::any(*speedLimit);
    }
    if (udmRegionId) {
      res["UdmRegionId"] = boost::any(*udmRegionId);
    }
    if (vaultId) {
      res["VaultId"] = boost::any(*vaultId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupType") != m.end() && !m["BackupType"].empty()) {
      backupType = make_shared<string>(boost::any_cast<string>(m["BackupType"]));
    }
    if (m.find("Bucket") != m.end() && !m["Bucket"].empty()) {
      bucket = make_shared<string>(boost::any_cast<string>(m["Bucket"]));
    }
    if (m.find("ChangeListPath") != m.end() && !m["ChangeListPath"].empty()) {
      changeListPath = make_shared<string>(boost::any_cast<string>(m["ChangeListPath"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("CrossAccountRoleName") != m.end() && !m["CrossAccountRoleName"].empty()) {
      crossAccountRoleName = make_shared<string>(boost::any_cast<string>(m["CrossAccountRoleName"]));
    }
    if (m.find("CrossAccountType") != m.end() && !m["CrossAccountType"].empty()) {
      crossAccountType = make_shared<string>(boost::any_cast<string>(m["CrossAccountType"]));
    }
    if (m.find("CrossAccountUserId") != m.end() && !m["CrossAccountUserId"].empty()) {
      crossAccountUserId = make_shared<long>(boost::any_cast<long>(m["CrossAccountUserId"]));
    }
    if (m.find("DestDataSourceDetail") != m.end() && !m["DestDataSourceDetail"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["DestDataSourceDetail"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      destDataSourceDetail = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("DestDataSourceId") != m.end() && !m["DestDataSourceId"].empty()) {
      destDataSourceId = make_shared<string>(boost::any_cast<string>(m["DestDataSourceId"]));
    }
    if (m.find("DestSourceType") != m.end() && !m["DestSourceType"].empty()) {
      destSourceType = make_shared<string>(boost::any_cast<string>(m["DestSourceType"]));
    }
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Detail"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      detail = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Disabled") != m.end() && !m["Disabled"].empty()) {
      disabled = make_shared<bool>(boost::any_cast<bool>(m["Disabled"]));
    }
    if (m.find("Exclude") != m.end() && !m["Exclude"].empty()) {
      exclude = make_shared<string>(boost::any_cast<string>(m["Exclude"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("Include") != m.end() && !m["Include"].empty()) {
      include = make_shared<string>(boost::any_cast<string>(m["Include"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("KeepLatestSnapshots") != m.end() && !m["KeepLatestSnapshots"].empty()) {
      keepLatestSnapshots = make_shared<long>(boost::any_cast<long>(m["KeepLatestSnapshots"]));
    }
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      options = make_shared<string>(boost::any_cast<string>(m["Options"]));
    }
    if (m.find("OtsDetail") != m.end() && !m["OtsDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["OtsDetail"].type()) {
        OtsDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OtsDetail"]));
        otsDetail = make_shared<OtsDetail>(model1);
      }
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Path"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Path"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      path = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PlanName") != m.end() && !m["PlanName"].empty()) {
      planName = make_shared<string>(boost::any_cast<string>(m["PlanName"]));
    }
    if (m.find("Prefix") != m.end() && !m["Prefix"].empty()) {
      prefix = make_shared<string>(boost::any_cast<string>(m["Prefix"]));
    }
    if (m.find("Retention") != m.end() && !m["Retention"].empty()) {
      retention = make_shared<long>(boost::any_cast<long>(m["Retention"]));
    }
    if (m.find("Rule") != m.end() && !m["Rule"].empty()) {
      if (typeid(vector<boost::any>) == m["Rule"].type()) {
        vector<CreateBackupPlanRequestRule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Rule"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateBackupPlanRequestRule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rule = make_shared<vector<CreateBackupPlanRequestRule>>(expect1);
      }
    }
    if (m.find("Schedule") != m.end() && !m["Schedule"].empty()) {
      schedule = make_shared<string>(boost::any_cast<string>(m["Schedule"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("SpeedLimit") != m.end() && !m["SpeedLimit"].empty()) {
      speedLimit = make_shared<string>(boost::any_cast<string>(m["SpeedLimit"]));
    }
    if (m.find("UdmRegionId") != m.end() && !m["UdmRegionId"].empty()) {
      udmRegionId = make_shared<string>(boost::any_cast<string>(m["UdmRegionId"]));
    }
    if (m.find("VaultId") != m.end() && !m["VaultId"].empty()) {
      vaultId = make_shared<string>(boost::any_cast<string>(m["VaultId"]));
    }
  }


  virtual ~CreateBackupPlanRequest() = default;
};
class CreateBackupPlanShrinkRequestRule : public Darabonba::Model {
public:
  shared_ptr<string> backupType{};
  shared_ptr<string> destinationRegionId{};
  shared_ptr<long> destinationRetention{};
  shared_ptr<bool> disabled{};
  shared_ptr<bool> doCopy{};
  shared_ptr<long> retention{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> schedule{};

  CreateBackupPlanShrinkRequestRule() {}

  explicit CreateBackupPlanShrinkRequestRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupType) {
      res["BackupType"] = boost::any(*backupType);
    }
    if (destinationRegionId) {
      res["DestinationRegionId"] = boost::any(*destinationRegionId);
    }
    if (destinationRetention) {
      res["DestinationRetention"] = boost::any(*destinationRetention);
    }
    if (disabled) {
      res["Disabled"] = boost::any(*disabled);
    }
    if (doCopy) {
      res["DoCopy"] = boost::any(*doCopy);
    }
    if (retention) {
      res["Retention"] = boost::any(*retention);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (schedule) {
      res["Schedule"] = boost::any(*schedule);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupType") != m.end() && !m["BackupType"].empty()) {
      backupType = make_shared<string>(boost::any_cast<string>(m["BackupType"]));
    }
    if (m.find("DestinationRegionId") != m.end() && !m["DestinationRegionId"].empty()) {
      destinationRegionId = make_shared<string>(boost::any_cast<string>(m["DestinationRegionId"]));
    }
    if (m.find("DestinationRetention") != m.end() && !m["DestinationRetention"].empty()) {
      destinationRetention = make_shared<long>(boost::any_cast<long>(m["DestinationRetention"]));
    }
    if (m.find("Disabled") != m.end() && !m["Disabled"].empty()) {
      disabled = make_shared<bool>(boost::any_cast<bool>(m["Disabled"]));
    }
    if (m.find("DoCopy") != m.end() && !m["DoCopy"].empty()) {
      doCopy = make_shared<bool>(boost::any_cast<bool>(m["DoCopy"]));
    }
    if (m.find("Retention") != m.end() && !m["Retention"].empty()) {
      retention = make_shared<long>(boost::any_cast<long>(m["Retention"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("Schedule") != m.end() && !m["Schedule"].empty()) {
      schedule = make_shared<string>(boost::any_cast<string>(m["Schedule"]));
    }
  }


  virtual ~CreateBackupPlanShrinkRequestRule() = default;
};
class CreateBackupPlanShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> backupType{};
  shared_ptr<string> bucket{};
  shared_ptr<string> changeListPath{};
  shared_ptr<long> createTime{};
  shared_ptr<string> crossAccountRoleName{};
  shared_ptr<string> crossAccountType{};
  shared_ptr<long> crossAccountUserId{};
  shared_ptr<string> destDataSourceDetailShrink{};
  shared_ptr<string> destDataSourceId{};
  shared_ptr<string> destSourceType{};
  shared_ptr<string> detailShrink{};
  shared_ptr<bool> disabled{};
  shared_ptr<string> exclude{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> include{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<long> keepLatestSnapshots{};
  shared_ptr<string> options{};
  shared_ptr<string> otsDetailShrink{};
  shared_ptr<vector<string>> path{};
  shared_ptr<string> planName{};
  shared_ptr<string> prefix{};
  shared_ptr<long> retention{};
  shared_ptr<vector<CreateBackupPlanShrinkRequestRule>> rule{};
  shared_ptr<string> schedule{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> speedLimit{};
  shared_ptr<string> udmRegionId{};
  shared_ptr<string> vaultId{};

  CreateBackupPlanShrinkRequest() {}

  explicit CreateBackupPlanShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupType) {
      res["BackupType"] = boost::any(*backupType);
    }
    if (bucket) {
      res["Bucket"] = boost::any(*bucket);
    }
    if (changeListPath) {
      res["ChangeListPath"] = boost::any(*changeListPath);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (crossAccountRoleName) {
      res["CrossAccountRoleName"] = boost::any(*crossAccountRoleName);
    }
    if (crossAccountType) {
      res["CrossAccountType"] = boost::any(*crossAccountType);
    }
    if (crossAccountUserId) {
      res["CrossAccountUserId"] = boost::any(*crossAccountUserId);
    }
    if (destDataSourceDetailShrink) {
      res["DestDataSourceDetail"] = boost::any(*destDataSourceDetailShrink);
    }
    if (destDataSourceId) {
      res["DestDataSourceId"] = boost::any(*destDataSourceId);
    }
    if (destSourceType) {
      res["DestSourceType"] = boost::any(*destSourceType);
    }
    if (detailShrink) {
      res["Detail"] = boost::any(*detailShrink);
    }
    if (disabled) {
      res["Disabled"] = boost::any(*disabled);
    }
    if (exclude) {
      res["Exclude"] = boost::any(*exclude);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (include) {
      res["Include"] = boost::any(*include);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (keepLatestSnapshots) {
      res["KeepLatestSnapshots"] = boost::any(*keepLatestSnapshots);
    }
    if (options) {
      res["Options"] = boost::any(*options);
    }
    if (otsDetailShrink) {
      res["OtsDetail"] = boost::any(*otsDetailShrink);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (planName) {
      res["PlanName"] = boost::any(*planName);
    }
    if (prefix) {
      res["Prefix"] = boost::any(*prefix);
    }
    if (retention) {
      res["Retention"] = boost::any(*retention);
    }
    if (rule) {
      vector<boost::any> temp1;
      for(auto item1:*rule){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Rule"] = boost::any(temp1);
    }
    if (schedule) {
      res["Schedule"] = boost::any(*schedule);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (speedLimit) {
      res["SpeedLimit"] = boost::any(*speedLimit);
    }
    if (udmRegionId) {
      res["UdmRegionId"] = boost::any(*udmRegionId);
    }
    if (vaultId) {
      res["VaultId"] = boost::any(*vaultId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupType") != m.end() && !m["BackupType"].empty()) {
      backupType = make_shared<string>(boost::any_cast<string>(m["BackupType"]));
    }
    if (m.find("Bucket") != m.end() && !m["Bucket"].empty()) {
      bucket = make_shared<string>(boost::any_cast<string>(m["Bucket"]));
    }
    if (m.find("ChangeListPath") != m.end() && !m["ChangeListPath"].empty()) {
      changeListPath = make_shared<string>(boost::any_cast<string>(m["ChangeListPath"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("CrossAccountRoleName") != m.end() && !m["CrossAccountRoleName"].empty()) {
      crossAccountRoleName = make_shared<string>(boost::any_cast<string>(m["CrossAccountRoleName"]));
    }
    if (m.find("CrossAccountType") != m.end() && !m["CrossAccountType"].empty()) {
      crossAccountType = make_shared<string>(boost::any_cast<string>(m["CrossAccountType"]));
    }
    if (m.find("CrossAccountUserId") != m.end() && !m["CrossAccountUserId"].empty()) {
      crossAccountUserId = make_shared<long>(boost::any_cast<long>(m["CrossAccountUserId"]));
    }
    if (m.find("DestDataSourceDetail") != m.end() && !m["DestDataSourceDetail"].empty()) {
      destDataSourceDetailShrink = make_shared<string>(boost::any_cast<string>(m["DestDataSourceDetail"]));
    }
    if (m.find("DestDataSourceId") != m.end() && !m["DestDataSourceId"].empty()) {
      destDataSourceId = make_shared<string>(boost::any_cast<string>(m["DestDataSourceId"]));
    }
    if (m.find("DestSourceType") != m.end() && !m["DestSourceType"].empty()) {
      destSourceType = make_shared<string>(boost::any_cast<string>(m["DestSourceType"]));
    }
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      detailShrink = make_shared<string>(boost::any_cast<string>(m["Detail"]));
    }
    if (m.find("Disabled") != m.end() && !m["Disabled"].empty()) {
      disabled = make_shared<bool>(boost::any_cast<bool>(m["Disabled"]));
    }
    if (m.find("Exclude") != m.end() && !m["Exclude"].empty()) {
      exclude = make_shared<string>(boost::any_cast<string>(m["Exclude"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("Include") != m.end() && !m["Include"].empty()) {
      include = make_shared<string>(boost::any_cast<string>(m["Include"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("KeepLatestSnapshots") != m.end() && !m["KeepLatestSnapshots"].empty()) {
      keepLatestSnapshots = make_shared<long>(boost::any_cast<long>(m["KeepLatestSnapshots"]));
    }
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      options = make_shared<string>(boost::any_cast<string>(m["Options"]));
    }
    if (m.find("OtsDetail") != m.end() && !m["OtsDetail"].empty()) {
      otsDetailShrink = make_shared<string>(boost::any_cast<string>(m["OtsDetail"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Path"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Path"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      path = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PlanName") != m.end() && !m["PlanName"].empty()) {
      planName = make_shared<string>(boost::any_cast<string>(m["PlanName"]));
    }
    if (m.find("Prefix") != m.end() && !m["Prefix"].empty()) {
      prefix = make_shared<string>(boost::any_cast<string>(m["Prefix"]));
    }
    if (m.find("Retention") != m.end() && !m["Retention"].empty()) {
      retention = make_shared<long>(boost::any_cast<long>(m["Retention"]));
    }
    if (m.find("Rule") != m.end() && !m["Rule"].empty()) {
      if (typeid(vector<boost::any>) == m["Rule"].type()) {
        vector<CreateBackupPlanShrinkRequestRule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Rule"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateBackupPlanShrinkRequestRule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rule = make_shared<vector<CreateBackupPlanShrinkRequestRule>>(expect1);
      }
    }
    if (m.find("Schedule") != m.end() && !m["Schedule"].empty()) {
      schedule = make_shared<string>(boost::any_cast<string>(m["Schedule"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("SpeedLimit") != m.end() && !m["SpeedLimit"].empty()) {
      speedLimit = make_shared<string>(boost::any_cast<string>(m["SpeedLimit"]));
    }
    if (m.find("UdmRegionId") != m.end() && !m["UdmRegionId"].empty()) {
      udmRegionId = make_shared<string>(boost::any_cast<string>(m["UdmRegionId"]));
    }
    if (m.find("VaultId") != m.end() && !m["VaultId"].empty()) {
      vaultId = make_shared<string>(boost::any_cast<string>(m["VaultId"]));
    }
  }


  virtual ~CreateBackupPlanShrinkRequest() = default;
};
class CreateBackupPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> planId{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateBackupPlanResponseBody() {}

  explicit CreateBackupPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (planId) {
      res["PlanId"] = boost::any(*planId);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PlanId") != m.end() && !m["PlanId"].empty()) {
      planId = make_shared<string>(boost::any_cast<string>(m["PlanId"]));
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
        CreateBackupPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateBackupPlanResponseBody>(model1);
      }
    }
  }


  virtual ~CreateBackupPlanResponse() = default;
};
class CreateClientsRequest : public Darabonba::Model {
public:
  shared_ptr<string> alertSetting{};
  shared_ptr<string> clientInfo{};
  shared_ptr<string> crossAccountRoleName{};
  shared_ptr<string> crossAccountType{};
  shared_ptr<long> crossAccountUserId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<bool> useHttps{};
  shared_ptr<string> vaultId{};

  CreateClientsRequest() {}

  explicit CreateClientsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertSetting) {
      res["AlertSetting"] = boost::any(*alertSetting);
    }
    if (clientInfo) {
      res["ClientInfo"] = boost::any(*clientInfo);
    }
    if (crossAccountRoleName) {
      res["CrossAccountRoleName"] = boost::any(*crossAccountRoleName);
    }
    if (crossAccountType) {
      res["CrossAccountType"] = boost::any(*crossAccountType);
    }
    if (crossAccountUserId) {
      res["CrossAccountUserId"] = boost::any(*crossAccountUserId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (useHttps) {
      res["UseHttps"] = boost::any(*useHttps);
    }
    if (vaultId) {
      res["VaultId"] = boost::any(*vaultId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlertSetting") != m.end() && !m["AlertSetting"].empty()) {
      alertSetting = make_shared<string>(boost::any_cast<string>(m["AlertSetting"]));
    }
    if (m.find("ClientInfo") != m.end() && !m["ClientInfo"].empty()) {
      clientInfo = make_shared<string>(boost::any_cast<string>(m["ClientInfo"]));
    }
    if (m.find("CrossAccountRoleName") != m.end() && !m["CrossAccountRoleName"].empty()) {
      crossAccountRoleName = make_shared<string>(boost::any_cast<string>(m["CrossAccountRoleName"]));
    }
    if (m.find("CrossAccountType") != m.end() && !m["CrossAccountType"].empty()) {
      crossAccountType = make_shared<string>(boost::any_cast<string>(m["CrossAccountType"]));
    }
    if (m.find("CrossAccountUserId") != m.end() && !m["CrossAccountUserId"].empty()) {
      crossAccountUserId = make_shared<long>(boost::any_cast<long>(m["CrossAccountUserId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("UseHttps") != m.end() && !m["UseHttps"].empty()) {
      useHttps = make_shared<bool>(boost::any_cast<bool>(m["UseHttps"]));
    }
    if (m.find("VaultId") != m.end() && !m["VaultId"].empty()) {
      vaultId = make_shared<string>(boost::any_cast<string>(m["VaultId"]));
    }
  }


  virtual ~CreateClientsRequest() = default;
};
class CreateClientsResponseBodyInstanceStatusesInstanceStatus : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<bool> validInstance{};

  CreateClientsResponseBodyInstanceStatusesInstanceStatus() {}

  explicit CreateClientsResponseBodyInstanceStatusesInstanceStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (validInstance) {
      res["ValidInstance"] = boost::any(*validInstance);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ValidInstance") != m.end() && !m["ValidInstance"].empty()) {
      validInstance = make_shared<bool>(boost::any_cast<bool>(m["ValidInstance"]));
    }
  }


  virtual ~CreateClientsResponseBodyInstanceStatusesInstanceStatus() = default;
};
class CreateClientsResponseBodyInstanceStatuses : public Darabonba::Model {
public:
  shared_ptr<vector<CreateClientsResponseBodyInstanceStatusesInstanceStatus>> instanceStatus{};

  CreateClientsResponseBodyInstanceStatuses() {}

  explicit CreateClientsResponseBodyInstanceStatuses(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceStatus) {
      vector<boost::any> temp1;
      for(auto item1:*instanceStatus){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstanceStatus"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceStatus") != m.end() && !m["InstanceStatus"].empty()) {
      if (typeid(vector<boost::any>) == m["InstanceStatus"].type()) {
        vector<CreateClientsResponseBodyInstanceStatusesInstanceStatus> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanceStatus"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateClientsResponseBodyInstanceStatusesInstanceStatus model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceStatus = make_shared<vector<CreateClientsResponseBodyInstanceStatusesInstanceStatus>>(expect1);
      }
    }
  }


  virtual ~CreateClientsResponseBodyInstanceStatuses() = default;
};
class CreateClientsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateClientsResponseBodyInstanceStatuses> instanceStatuses{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> taskId{};

  CreateClientsResponseBody() {}

  explicit CreateClientsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (instanceStatuses) {
      res["InstanceStatuses"] = instanceStatuses ? boost::any(instanceStatuses->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("InstanceStatuses") != m.end() && !m["InstanceStatuses"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceStatuses"].type()) {
        CreateClientsResponseBodyInstanceStatuses model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceStatuses"]));
        instanceStatuses = make_shared<CreateClientsResponseBodyInstanceStatuses>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~CreateClientsResponseBody() = default;
};
class CreateClientsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateClientsResponseBody> body{};

  CreateClientsResponse() {}

  explicit CreateClientsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateClientsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateClientsResponseBody>(model1);
      }
    }
  }


  virtual ~CreateClientsResponse() = default;
};
class CreateHanaBackupPlanRequest : public Darabonba::Model {
public:
  shared_ptr<string> backupPrefix{};
  shared_ptr<string> backupType{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> databaseName{};
  shared_ptr<string> planName{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> schedule{};
  shared_ptr<string> vaultId{};

  CreateHanaBackupPlanRequest() {}

  explicit CreateHanaBackupPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupPrefix) {
      res["BackupPrefix"] = boost::any(*backupPrefix);
    }
    if (backupType) {
      res["BackupType"] = boost::any(*backupType);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (databaseName) {
      res["DatabaseName"] = boost::any(*databaseName);
    }
    if (planName) {
      res["PlanName"] = boost::any(*planName);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (schedule) {
      res["Schedule"] = boost::any(*schedule);
    }
    if (vaultId) {
      res["VaultId"] = boost::any(*vaultId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupPrefix") != m.end() && !m["BackupPrefix"].empty()) {
      backupPrefix = make_shared<string>(boost::any_cast<string>(m["BackupPrefix"]));
    }
    if (m.find("BackupType") != m.end() && !m["BackupType"].empty()) {
      backupType = make_shared<string>(boost::any_cast<string>(m["BackupType"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("DatabaseName") != m.end() && !m["DatabaseName"].empty()) {
      databaseName = make_shared<string>(boost::any_cast<string>(m["DatabaseName"]));
    }
    if (m.find("PlanName") != m.end() && !m["PlanName"].empty()) {
      planName = make_shared<string>(boost::any_cast<string>(m["PlanName"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Schedule") != m.end() && !m["Schedule"].empty()) {
      schedule = make_shared<string>(boost::any_cast<string>(m["Schedule"]));
    }
    if (m.find("VaultId") != m.end() && !m["VaultId"].empty()) {
      vaultId = make_shared<string>(boost::any_cast<string>(m["VaultId"]));
    }
  }


  virtual ~CreateHanaBackupPlanRequest() = default;
};
class CreateHanaBackupPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> planId{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateHanaBackupPlanResponseBody() {}

  explicit CreateHanaBackupPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (planId) {
      res["PlanId"] = boost::any(*planId);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PlanId") != m.end() && !m["PlanId"].empty()) {
      planId = make_shared<string>(boost::any_cast<string>(m["PlanId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateHanaBackupPlanResponseBody() = default;
};
class CreateHanaBackupPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateHanaBackupPlanResponseBody> body{};

  CreateHanaBackupPlanResponse() {}

  explicit CreateHanaBackupPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateHanaBackupPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateHanaBackupPlanResponseBody>(model1);
      }
    }
  }


  virtual ~CreateHanaBackupPlanResponse() = default;
};
class CreateHanaInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> alertSetting{};
  shared_ptr<string> crossAccountRoleName{};
  shared_ptr<string> crossAccountType{};
  shared_ptr<long> crossAccountUserId{};
  shared_ptr<string> ecsInstanceId{};
  shared_ptr<string> hanaName{};
  shared_ptr<string> host{};
  shared_ptr<long> instanceNumber{};
  shared_ptr<string> password{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> sid{};
  shared_ptr<bool> useSsl{};
  shared_ptr<string> userName{};
  shared_ptr<bool> validateCertificate{};
  shared_ptr<string> vaultId{};

  CreateHanaInstanceRequest() {}

  explicit CreateHanaInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertSetting) {
      res["AlertSetting"] = boost::any(*alertSetting);
    }
    if (crossAccountRoleName) {
      res["CrossAccountRoleName"] = boost::any(*crossAccountRoleName);
    }
    if (crossAccountType) {
      res["CrossAccountType"] = boost::any(*crossAccountType);
    }
    if (crossAccountUserId) {
      res["CrossAccountUserId"] = boost::any(*crossAccountUserId);
    }
    if (ecsInstanceId) {
      res["EcsInstanceId"] = boost::any(*ecsInstanceId);
    }
    if (hanaName) {
      res["HanaName"] = boost::any(*hanaName);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (instanceNumber) {
      res["InstanceNumber"] = boost::any(*instanceNumber);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (sid) {
      res["Sid"] = boost::any(*sid);
    }
    if (useSsl) {
      res["UseSsl"] = boost::any(*useSsl);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    if (validateCertificate) {
      res["ValidateCertificate"] = boost::any(*validateCertificate);
    }
    if (vaultId) {
      res["VaultId"] = boost::any(*vaultId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlertSetting") != m.end() && !m["AlertSetting"].empty()) {
      alertSetting = make_shared<string>(boost::any_cast<string>(m["AlertSetting"]));
    }
    if (m.find("CrossAccountRoleName") != m.end() && !m["CrossAccountRoleName"].empty()) {
      crossAccountRoleName = make_shared<string>(boost::any_cast<string>(m["CrossAccountRoleName"]));
    }
    if (m.find("CrossAccountType") != m.end() && !m["CrossAccountType"].empty()) {
      crossAccountType = make_shared<string>(boost::any_cast<string>(m["CrossAccountType"]));
    }
    if (m.find("CrossAccountUserId") != m.end() && !m["CrossAccountUserId"].empty()) {
      crossAccountUserId = make_shared<long>(boost::any_cast<long>(m["CrossAccountUserId"]));
    }
    if (m.find("EcsInstanceId") != m.end() && !m["EcsInstanceId"].empty()) {
      ecsInstanceId = make_shared<string>(boost::any_cast<string>(m["EcsInstanceId"]));
    }
    if (m.find("HanaName") != m.end() && !m["HanaName"].empty()) {
      hanaName = make_shared<string>(boost::any_cast<string>(m["HanaName"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("InstanceNumber") != m.end() && !m["InstanceNumber"].empty()) {
      instanceNumber = make_shared<long>(boost::any_cast<long>(m["InstanceNumber"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Sid") != m.end() && !m["Sid"].empty()) {
      sid = make_shared<string>(boost::any_cast<string>(m["Sid"]));
    }
    if (m.find("UseSsl") != m.end() && !m["UseSsl"].empty()) {
      useSsl = make_shared<bool>(boost::any_cast<bool>(m["UseSsl"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
    if (m.find("ValidateCertificate") != m.end() && !m["ValidateCertificate"].empty()) {
      validateCertificate = make_shared<bool>(boost::any_cast<bool>(m["ValidateCertificate"]));
    }
    if (m.find("VaultId") != m.end() && !m["VaultId"].empty()) {
      vaultId = make_shared<string>(boost::any_cast<string>(m["VaultId"]));
    }
  }


  virtual ~CreateHanaInstanceRequest() = default;
};
class CreateHanaInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateHanaInstanceResponseBody() {}

  explicit CreateHanaInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
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
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateHanaInstanceResponseBody() = default;
};
class CreateHanaInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateHanaInstanceResponseBody> body{};

  CreateHanaInstanceResponse() {}

  explicit CreateHanaInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateHanaInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateHanaInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateHanaInstanceResponse() = default;
};
class CreateHanaRestoreRequest : public Darabonba::Model {
public:
  shared_ptr<long> backupId{};
  shared_ptr<string> backupPrefix{};
  shared_ptr<bool> checkAccess{};
  shared_ptr<bool> clearLog{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> databaseName{};
  shared_ptr<long> logPosition{};
  shared_ptr<string> masterClientId{};
  shared_ptr<string> mode{};
  shared_ptr<long> recoveryPointInTime{};
  shared_ptr<string> sidAdmin{};
  shared_ptr<string> source{};
  shared_ptr<string> sourceClusterId{};
  shared_ptr<bool> systemCopy{};
  shared_ptr<bool> useCatalog{};
  shared_ptr<bool> useDelta{};
  shared_ptr<string> vaultId{};
  shared_ptr<long> volumeId{};

  CreateHanaRestoreRequest() {}

  explicit CreateHanaRestoreRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupId) {
      res["BackupId"] = boost::any(*backupId);
    }
    if (backupPrefix) {
      res["BackupPrefix"] = boost::any(*backupPrefix);
    }
    if (checkAccess) {
      res["CheckAccess"] = boost::any(*checkAccess);
    }
    if (clearLog) {
      res["ClearLog"] = boost::any(*clearLog);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (databaseName) {
      res["DatabaseName"] = boost::any(*databaseName);
    }
    if (logPosition) {
      res["LogPosition"] = boost::any(*logPosition);
    }
    if (masterClientId) {
      res["MasterClientId"] = boost::any(*masterClientId);
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (recoveryPointInTime) {
      res["RecoveryPointInTime"] = boost::any(*recoveryPointInTime);
    }
    if (sidAdmin) {
      res["SidAdmin"] = boost::any(*sidAdmin);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (sourceClusterId) {
      res["SourceClusterId"] = boost::any(*sourceClusterId);
    }
    if (systemCopy) {
      res["SystemCopy"] = boost::any(*systemCopy);
    }
    if (useCatalog) {
      res["UseCatalog"] = boost::any(*useCatalog);
    }
    if (useDelta) {
      res["UseDelta"] = boost::any(*useDelta);
    }
    if (vaultId) {
      res["VaultId"] = boost::any(*vaultId);
    }
    if (volumeId) {
      res["VolumeId"] = boost::any(*volumeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupId") != m.end() && !m["BackupId"].empty()) {
      backupId = make_shared<long>(boost::any_cast<long>(m["BackupId"]));
    }
    if (m.find("BackupPrefix") != m.end() && !m["BackupPrefix"].empty()) {
      backupPrefix = make_shared<string>(boost::any_cast<string>(m["BackupPrefix"]));
    }
    if (m.find("CheckAccess") != m.end() && !m["CheckAccess"].empty()) {
      checkAccess = make_shared<bool>(boost::any_cast<bool>(m["CheckAccess"]));
    }
    if (m.find("ClearLog") != m.end() && !m["ClearLog"].empty()) {
      clearLog = make_shared<bool>(boost::any_cast<bool>(m["ClearLog"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("DatabaseName") != m.end() && !m["DatabaseName"].empty()) {
      databaseName = make_shared<string>(boost::any_cast<string>(m["DatabaseName"]));
    }
    if (m.find("LogPosition") != m.end() && !m["LogPosition"].empty()) {
      logPosition = make_shared<long>(boost::any_cast<long>(m["LogPosition"]));
    }
    if (m.find("MasterClientId") != m.end() && !m["MasterClientId"].empty()) {
      masterClientId = make_shared<string>(boost::any_cast<string>(m["MasterClientId"]));
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("RecoveryPointInTime") != m.end() && !m["RecoveryPointInTime"].empty()) {
      recoveryPointInTime = make_shared<long>(boost::any_cast<long>(m["RecoveryPointInTime"]));
    }
    if (m.find("SidAdmin") != m.end() && !m["SidAdmin"].empty()) {
      sidAdmin = make_shared<string>(boost::any_cast<string>(m["SidAdmin"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("SourceClusterId") != m.end() && !m["SourceClusterId"].empty()) {
      sourceClusterId = make_shared<string>(boost::any_cast<string>(m["SourceClusterId"]));
    }
    if (m.find("SystemCopy") != m.end() && !m["SystemCopy"].empty()) {
      systemCopy = make_shared<bool>(boost::any_cast<bool>(m["SystemCopy"]));
    }
    if (m.find("UseCatalog") != m.end() && !m["UseCatalog"].empty()) {
      useCatalog = make_shared<bool>(boost::any_cast<bool>(m["UseCatalog"]));
    }
    if (m.find("UseDelta") != m.end() && !m["UseDelta"].empty()) {
      useDelta = make_shared<bool>(boost::any_cast<bool>(m["UseDelta"]));
    }
    if (m.find("VaultId") != m.end() && !m["VaultId"].empty()) {
      vaultId = make_shared<string>(boost::any_cast<string>(m["VaultId"]));
    }
    if (m.find("VolumeId") != m.end() && !m["VolumeId"].empty()) {
      volumeId = make_shared<long>(boost::any_cast<long>(m["VolumeId"]));
    }
  }


  virtual ~CreateHanaRestoreRequest() = default;
};
class CreateHanaRestoreResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> restoreId{};
  shared_ptr<bool> success{};

  CreateHanaRestoreResponseBody() {}

  explicit CreateHanaRestoreResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (restoreId) {
      res["RestoreId"] = boost::any(*restoreId);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RestoreId") != m.end() && !m["RestoreId"].empty()) {
      restoreId = make_shared<string>(boost::any_cast<string>(m["RestoreId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateHanaRestoreResponseBody() = default;
};
class CreateHanaRestoreResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateHanaRestoreResponseBody> body{};

  CreateHanaRestoreResponse() {}

  explicit CreateHanaRestoreResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateHanaRestoreResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateHanaRestoreResponseBody>(model1);
      }
    }
  }


  virtual ~CreateHanaRestoreResponse() = default;
};
class CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsCommonFileSystemDetail : public Darabonba::Model {
public:
  shared_ptr<long> fetchSliceSize{};
  shared_ptr<bool> fullOnIncrementFail{};

  CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsCommonFileSystemDetail() {}

  explicit CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsCommonFileSystemDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fetchSliceSize) {
      res["FetchSliceSize"] = boost::any(*fetchSliceSize);
    }
    if (fullOnIncrementFail) {
      res["FullOnIncrementFail"] = boost::any(*fullOnIncrementFail);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FetchSliceSize") != m.end() && !m["FetchSliceSize"].empty()) {
      fetchSliceSize = make_shared<long>(boost::any_cast<long>(m["FetchSliceSize"]));
    }
    if (m.find("FullOnIncrementFail") != m.end() && !m["FullOnIncrementFail"].empty()) {
      fullOnIncrementFail = make_shared<bool>(boost::any_cast<bool>(m["FullOnIncrementFail"]));
    }
  }


  virtual ~CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsCommonFileSystemDetail() = default;
};
class CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsCommonNasDetail : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<long> fetchSliceSize{};
  shared_ptr<bool> fullOnIncrementFail{};

  CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsCommonNasDetail() {}

  explicit CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsCommonNasDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (fetchSliceSize) {
      res["FetchSliceSize"] = boost::any(*fetchSliceSize);
    }
    if (fullOnIncrementFail) {
      res["FullOnIncrementFail"] = boost::any(*fullOnIncrementFail);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("FetchSliceSize") != m.end() && !m["FetchSliceSize"].empty()) {
      fetchSliceSize = make_shared<long>(boost::any_cast<long>(m["FetchSliceSize"]));
    }
    if (m.find("FullOnIncrementFail") != m.end() && !m["FullOnIncrementFail"].empty()) {
      fullOnIncrementFail = make_shared<bool>(boost::any_cast<bool>(m["FullOnIncrementFail"]));
    }
  }


  virtual ~CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsCommonNasDetail() = default;
};
class CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsFileDetail : public Darabonba::Model {
public:
  shared_ptr<bool> advPolicy{};
  shared_ptr<bool> useVSS{};

  CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsFileDetail() {}

  explicit CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsFileDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (advPolicy) {
      res["AdvPolicy"] = boost::any(*advPolicy);
    }
    if (useVSS) {
      res["UseVSS"] = boost::any(*useVSS);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdvPolicy") != m.end() && !m["AdvPolicy"].empty()) {
      advPolicy = make_shared<bool>(boost::any_cast<bool>(m["AdvPolicy"]));
    }
    if (m.find("UseVSS") != m.end() && !m["UseVSS"].empty()) {
      useVSS = make_shared<bool>(boost::any_cast<bool>(m["UseVSS"]));
    }
  }


  virtual ~CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsFileDetail() = default;
};
class CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsOssDetail : public Darabonba::Model {
public:
  shared_ptr<string> inventoryCleanupPolicy{};
  shared_ptr<string> inventoryId{};

  CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsOssDetail() {}

  explicit CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsOssDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inventoryCleanupPolicy) {
      res["InventoryCleanupPolicy"] = boost::any(*inventoryCleanupPolicy);
    }
    if (inventoryId) {
      res["InventoryId"] = boost::any(*inventoryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InventoryCleanupPolicy") != m.end() && !m["InventoryCleanupPolicy"].empty()) {
      inventoryCleanupPolicy = make_shared<string>(boost::any_cast<string>(m["InventoryCleanupPolicy"]));
    }
    if (m.find("InventoryId") != m.end() && !m["InventoryId"].empty()) {
      inventoryId = make_shared<string>(boost::any_cast<string>(m["InventoryId"]));
    }
  }


  virtual ~CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsOssDetail() = default;
};
class CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsUdmDetail : public Darabonba::Model {
public:
  shared_ptr<bool> appConsistent{};
  shared_ptr<vector<string>> diskIdList{};
  shared_ptr<bool> enableFsFreeze{};
  shared_ptr<bool> enableWriters{};
  shared_ptr<vector<string>> excludeDiskIdList{};
  shared_ptr<string> postScriptPath{};
  shared_ptr<string> preScriptPath{};
  shared_ptr<string> ramRoleName{};
  shared_ptr<bool> snapshotGroup{};
  shared_ptr<long> timeoutInSeconds{};

  CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsUdmDetail() {}

  explicit CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsUdmDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appConsistent) {
      res["AppConsistent"] = boost::any(*appConsistent);
    }
    if (diskIdList) {
      res["DiskIdList"] = boost::any(*diskIdList);
    }
    if (enableFsFreeze) {
      res["EnableFsFreeze"] = boost::any(*enableFsFreeze);
    }
    if (enableWriters) {
      res["EnableWriters"] = boost::any(*enableWriters);
    }
    if (excludeDiskIdList) {
      res["ExcludeDiskIdList"] = boost::any(*excludeDiskIdList);
    }
    if (postScriptPath) {
      res["PostScriptPath"] = boost::any(*postScriptPath);
    }
    if (preScriptPath) {
      res["PreScriptPath"] = boost::any(*preScriptPath);
    }
    if (ramRoleName) {
      res["RamRoleName"] = boost::any(*ramRoleName);
    }
    if (snapshotGroup) {
      res["SnapshotGroup"] = boost::any(*snapshotGroup);
    }
    if (timeoutInSeconds) {
      res["TimeoutInSeconds"] = boost::any(*timeoutInSeconds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppConsistent") != m.end() && !m["AppConsistent"].empty()) {
      appConsistent = make_shared<bool>(boost::any_cast<bool>(m["AppConsistent"]));
    }
    if (m.find("DiskIdList") != m.end() && !m["DiskIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DiskIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DiskIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      diskIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("EnableFsFreeze") != m.end() && !m["EnableFsFreeze"].empty()) {
      enableFsFreeze = make_shared<bool>(boost::any_cast<bool>(m["EnableFsFreeze"]));
    }
    if (m.find("EnableWriters") != m.end() && !m["EnableWriters"].empty()) {
      enableWriters = make_shared<bool>(boost::any_cast<bool>(m["EnableWriters"]));
    }
    if (m.find("ExcludeDiskIdList") != m.end() && !m["ExcludeDiskIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ExcludeDiskIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ExcludeDiskIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      excludeDiskIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PostScriptPath") != m.end() && !m["PostScriptPath"].empty()) {
      postScriptPath = make_shared<string>(boost::any_cast<string>(m["PostScriptPath"]));
    }
    if (m.find("PreScriptPath") != m.end() && !m["PreScriptPath"].empty()) {
      preScriptPath = make_shared<string>(boost::any_cast<string>(m["PreScriptPath"]));
    }
    if (m.find("RamRoleName") != m.end() && !m["RamRoleName"].empty()) {
      ramRoleName = make_shared<string>(boost::any_cast<string>(m["RamRoleName"]));
    }
    if (m.find("SnapshotGroup") != m.end() && !m["SnapshotGroup"].empty()) {
      snapshotGroup = make_shared<bool>(boost::any_cast<bool>(m["SnapshotGroup"]));
    }
    if (m.find("TimeoutInSeconds") != m.end() && !m["TimeoutInSeconds"].empty()) {
      timeoutInSeconds = make_shared<long>(boost::any_cast<long>(m["TimeoutInSeconds"]));
    }
  }


  virtual ~CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsUdmDetail() = default;
};
class CreatePolicyBindingsRequestPolicyBindingListAdvancedOptions : public Darabonba::Model {
public:
  shared_ptr<CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsCommonFileSystemDetail> commonFileSystemDetail{};
  shared_ptr<CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsCommonNasDetail> commonNasDetail{};
  shared_ptr<CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsFileDetail> fileDetail{};
  shared_ptr<CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsOssDetail> ossDetail{};
  shared_ptr<CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsUdmDetail> udmDetail{};

  CreatePolicyBindingsRequestPolicyBindingListAdvancedOptions() {}

  explicit CreatePolicyBindingsRequestPolicyBindingListAdvancedOptions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonFileSystemDetail) {
      res["CommonFileSystemDetail"] = commonFileSystemDetail ? boost::any(commonFileSystemDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (commonNasDetail) {
      res["CommonNasDetail"] = commonNasDetail ? boost::any(commonNasDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (fileDetail) {
      res["FileDetail"] = fileDetail ? boost::any(fileDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ossDetail) {
      res["OssDetail"] = ossDetail ? boost::any(ossDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (udmDetail) {
      res["UdmDetail"] = udmDetail ? boost::any(udmDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CommonFileSystemDetail") != m.end() && !m["CommonFileSystemDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["CommonFileSystemDetail"].type()) {
        CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsCommonFileSystemDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CommonFileSystemDetail"]));
        commonFileSystemDetail = make_shared<CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsCommonFileSystemDetail>(model1);
      }
    }
    if (m.find("CommonNasDetail") != m.end() && !m["CommonNasDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["CommonNasDetail"].type()) {
        CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsCommonNasDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CommonNasDetail"]));
        commonNasDetail = make_shared<CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsCommonNasDetail>(model1);
      }
    }
    if (m.find("FileDetail") != m.end() && !m["FileDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["FileDetail"].type()) {
        CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsFileDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FileDetail"]));
        fileDetail = make_shared<CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsFileDetail>(model1);
      }
    }
    if (m.find("OssDetail") != m.end() && !m["OssDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["OssDetail"].type()) {
        CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsOssDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OssDetail"]));
        ossDetail = make_shared<CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsOssDetail>(model1);
      }
    }
    if (m.find("UdmDetail") != m.end() && !m["UdmDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["UdmDetail"].type()) {
        CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsUdmDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UdmDetail"]));
        udmDetail = make_shared<CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsUdmDetail>(model1);
      }
    }
  }


  virtual ~CreatePolicyBindingsRequestPolicyBindingListAdvancedOptions() = default;
};
class CreatePolicyBindingsRequestPolicyBindingList : public Darabonba::Model {
public:
  shared_ptr<CreatePolicyBindingsRequestPolicyBindingListAdvancedOptions> advancedOptions{};
  shared_ptr<string> crossAccountRoleName{};
  shared_ptr<string> crossAccountType{};
  shared_ptr<long> crossAccountUserId{};
  shared_ptr<string> dataSourceId{};
  shared_ptr<string> disabled{};
  shared_ptr<string> exclude{};
  shared_ptr<string> include{};
  shared_ptr<string> policyBindingDescription{};
  shared_ptr<string> source{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> speedLimit{};

  CreatePolicyBindingsRequestPolicyBindingList() {}

  explicit CreatePolicyBindingsRequestPolicyBindingList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (advancedOptions) {
      res["AdvancedOptions"] = advancedOptions ? boost::any(advancedOptions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (crossAccountRoleName) {
      res["CrossAccountRoleName"] = boost::any(*crossAccountRoleName);
    }
    if (crossAccountType) {
      res["CrossAccountType"] = boost::any(*crossAccountType);
    }
    if (crossAccountUserId) {
      res["CrossAccountUserId"] = boost::any(*crossAccountUserId);
    }
    if (dataSourceId) {
      res["DataSourceId"] = boost::any(*dataSourceId);
    }
    if (disabled) {
      res["Disabled"] = boost::any(*disabled);
    }
    if (exclude) {
      res["Exclude"] = boost::any(*exclude);
    }
    if (include) {
      res["Include"] = boost::any(*include);
    }
    if (policyBindingDescription) {
      res["PolicyBindingDescription"] = boost::any(*policyBindingDescription);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (speedLimit) {
      res["SpeedLimit"] = boost::any(*speedLimit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdvancedOptions") != m.end() && !m["AdvancedOptions"].empty()) {
      if (typeid(map<string, boost::any>) == m["AdvancedOptions"].type()) {
        CreatePolicyBindingsRequestPolicyBindingListAdvancedOptions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AdvancedOptions"]));
        advancedOptions = make_shared<CreatePolicyBindingsRequestPolicyBindingListAdvancedOptions>(model1);
      }
    }
    if (m.find("CrossAccountRoleName") != m.end() && !m["CrossAccountRoleName"].empty()) {
      crossAccountRoleName = make_shared<string>(boost::any_cast<string>(m["CrossAccountRoleName"]));
    }
    if (m.find("CrossAccountType") != m.end() && !m["CrossAccountType"].empty()) {
      crossAccountType = make_shared<string>(boost::any_cast<string>(m["CrossAccountType"]));
    }
    if (m.find("CrossAccountUserId") != m.end() && !m["CrossAccountUserId"].empty()) {
      crossAccountUserId = make_shared<long>(boost::any_cast<long>(m["CrossAccountUserId"]));
    }
    if (m.find("DataSourceId") != m.end() && !m["DataSourceId"].empty()) {
      dataSourceId = make_shared<string>(boost::any_cast<string>(m["DataSourceId"]));
    }
    if (m.find("Disabled") != m.end() && !m["Disabled"].empty()) {
      disabled = make_shared<string>(boost::any_cast<string>(m["Disabled"]));
    }
    if (m.find("Exclude") != m.end() && !m["Exclude"].empty()) {
      exclude = make_shared<string>(boost::any_cast<string>(m["Exclude"]));
    }
    if (m.find("Include") != m.end() && !m["Include"].empty()) {
      include = make_shared<string>(boost::any_cast<string>(m["Include"]));
    }
    if (m.find("PolicyBindingDescription") != m.end() && !m["PolicyBindingDescription"].empty()) {
      policyBindingDescription = make_shared<string>(boost::any_cast<string>(m["PolicyBindingDescription"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("SpeedLimit") != m.end() && !m["SpeedLimit"].empty()) {
      speedLimit = make_shared<string>(boost::any_cast<string>(m["SpeedLimit"]));
    }
  }


  virtual ~CreatePolicyBindingsRequestPolicyBindingList() = default;
};
class CreatePolicyBindingsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<CreatePolicyBindingsRequestPolicyBindingList>> policyBindingList{};
  shared_ptr<string> policyId{};

  CreatePolicyBindingsRequest() {}

  explicit CreatePolicyBindingsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyBindingList) {
      vector<boost::any> temp1;
      for(auto item1:*policyBindingList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PolicyBindingList"] = boost::any(temp1);
    }
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyBindingList") != m.end() && !m["PolicyBindingList"].empty()) {
      if (typeid(vector<boost::any>) == m["PolicyBindingList"].type()) {
        vector<CreatePolicyBindingsRequestPolicyBindingList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PolicyBindingList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreatePolicyBindingsRequestPolicyBindingList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        policyBindingList = make_shared<vector<CreatePolicyBindingsRequestPolicyBindingList>>(expect1);
      }
    }
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
  }


  virtual ~CreatePolicyBindingsRequest() = default;
};
class CreatePolicyBindingsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> policyBindingListShrink{};
  shared_ptr<string> policyId{};

  CreatePolicyBindingsShrinkRequest() {}

  explicit CreatePolicyBindingsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyBindingListShrink) {
      res["PolicyBindingList"] = boost::any(*policyBindingListShrink);
    }
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyBindingList") != m.end() && !m["PolicyBindingList"].empty()) {
      policyBindingListShrink = make_shared<string>(boost::any_cast<string>(m["PolicyBindingList"]));
    }
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
  }


  virtual ~CreatePolicyBindingsShrinkRequest() = default;
};
class CreatePolicyBindingsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreatePolicyBindingsResponseBody() {}

  explicit CreatePolicyBindingsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreatePolicyBindingsResponseBody() = default;
};
class CreatePolicyBindingsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreatePolicyBindingsResponseBody> body{};

  CreatePolicyBindingsResponse() {}

  explicit CreatePolicyBindingsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreatePolicyBindingsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreatePolicyBindingsResponseBody>(model1);
      }
    }
  }


  virtual ~CreatePolicyBindingsResponse() = default;
};
class CreatePolicyV2RequestRulesDataSourceFilters : public Darabonba::Model {
public:
  shared_ptr<vector<string>> dataSourceIds{};
  shared_ptr<string> sourceType{};

  CreatePolicyV2RequestRulesDataSourceFilters() {}

  explicit CreatePolicyV2RequestRulesDataSourceFilters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSourceIds) {
      res["DataSourceIds"] = boost::any(*dataSourceIds);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataSourceIds") != m.end() && !m["DataSourceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DataSourceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DataSourceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dataSourceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
  }


  virtual ~CreatePolicyV2RequestRulesDataSourceFilters() = default;
};
class CreatePolicyV2RequestRulesRetentionRules : public Darabonba::Model {
public:
  shared_ptr<string> advancedRetentionType{};
  shared_ptr<long> retention{};
  shared_ptr<long> whichSnapshot{};

  CreatePolicyV2RequestRulesRetentionRules() {}

  explicit CreatePolicyV2RequestRulesRetentionRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (advancedRetentionType) {
      res["AdvancedRetentionType"] = boost::any(*advancedRetentionType);
    }
    if (retention) {
      res["Retention"] = boost::any(*retention);
    }
    if (whichSnapshot) {
      res["WhichSnapshot"] = boost::any(*whichSnapshot);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdvancedRetentionType") != m.end() && !m["AdvancedRetentionType"].empty()) {
      advancedRetentionType = make_shared<string>(boost::any_cast<string>(m["AdvancedRetentionType"]));
    }
    if (m.find("Retention") != m.end() && !m["Retention"].empty()) {
      retention = make_shared<long>(boost::any_cast<long>(m["Retention"]));
    }
    if (m.find("WhichSnapshot") != m.end() && !m["WhichSnapshot"].empty()) {
      whichSnapshot = make_shared<long>(boost::any_cast<long>(m["WhichSnapshot"]));
    }
  }


  virtual ~CreatePolicyV2RequestRulesRetentionRules() = default;
};
class CreatePolicyV2RequestRulesTagFilters : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> operator_{};
  shared_ptr<string> value{};

  CreatePolicyV2RequestRulesTagFilters() {}

  explicit CreatePolicyV2RequestRulesTagFilters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (operator_) {
      res["Operator"] = boost::any(*operator_);
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
    if (m.find("Operator") != m.end() && !m["Operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["Operator"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreatePolicyV2RequestRulesTagFilters() = default;
};
class CreatePolicyV2RequestRules : public Darabonba::Model {
public:
  shared_ptr<string> backupType{};
  shared_ptr<vector<CreatePolicyV2RequestRulesDataSourceFilters>> dataSourceFilters{};
  shared_ptr<long> keepLatestSnapshots{};
  shared_ptr<string> replicationRegionId{};
  shared_ptr<long> retention{};
  shared_ptr<vector<CreatePolicyV2RequestRulesRetentionRules>> retentionRules{};
  shared_ptr<string> ruleType{};
  shared_ptr<string> schedule{};
  shared_ptr<vector<CreatePolicyV2RequestRulesTagFilters>> tagFilters{};
  shared_ptr<string> vaultId{};

  CreatePolicyV2RequestRules() {}

  explicit CreatePolicyV2RequestRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupType) {
      res["BackupType"] = boost::any(*backupType);
    }
    if (dataSourceFilters) {
      vector<boost::any> temp1;
      for(auto item1:*dataSourceFilters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataSourceFilters"] = boost::any(temp1);
    }
    if (keepLatestSnapshots) {
      res["KeepLatestSnapshots"] = boost::any(*keepLatestSnapshots);
    }
    if (replicationRegionId) {
      res["ReplicationRegionId"] = boost::any(*replicationRegionId);
    }
    if (retention) {
      res["Retention"] = boost::any(*retention);
    }
    if (retentionRules) {
      vector<boost::any> temp1;
      for(auto item1:*retentionRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RetentionRules"] = boost::any(temp1);
    }
    if (ruleType) {
      res["RuleType"] = boost::any(*ruleType);
    }
    if (schedule) {
      res["Schedule"] = boost::any(*schedule);
    }
    if (tagFilters) {
      vector<boost::any> temp1;
      for(auto item1:*tagFilters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagFilters"] = boost::any(temp1);
    }
    if (vaultId) {
      res["VaultId"] = boost::any(*vaultId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupType") != m.end() && !m["BackupType"].empty()) {
      backupType = make_shared<string>(boost::any_cast<string>(m["BackupType"]));
    }
    if (m.find("DataSourceFilters") != m.end() && !m["DataSourceFilters"].empty()) {
      if (typeid(vector<boost::any>) == m["DataSourceFilters"].type()) {
        vector<CreatePolicyV2RequestRulesDataSourceFilters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataSourceFilters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreatePolicyV2RequestRulesDataSourceFilters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataSourceFilters = make_shared<vector<CreatePolicyV2RequestRulesDataSourceFilters>>(expect1);
      }
    }
    if (m.find("KeepLatestSnapshots") != m.end() && !m["KeepLatestSnapshots"].empty()) {
      keepLatestSnapshots = make_shared<long>(boost::any_cast<long>(m["KeepLatestSnapshots"]));
    }
    if (m.find("ReplicationRegionId") != m.end() && !m["ReplicationRegionId"].empty()) {
      replicationRegionId = make_shared<string>(boost::any_cast<string>(m["ReplicationRegionId"]));
    }
    if (m.find("Retention") != m.end() && !m["Retention"].empty()) {
      retention = make_shared<long>(boost::any_cast<long>(m["Retention"]));
    }
    if (m.find("RetentionRules") != m.end() && !m["RetentionRules"].empty()) {
      if (typeid(vector<boost::any>) == m["RetentionRules"].type()) {
        vector<CreatePolicyV2RequestRulesRetentionRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RetentionRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreatePolicyV2RequestRulesRetentionRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        retentionRules = make_shared<vector<CreatePolicyV2RequestRulesRetentionRules>>(expect1);
      }
    }
    if (m.find("RuleType") != m.end() && !m["RuleType"].empty()) {
      ruleType = make_shared<string>(boost::any_cast<string>(m["RuleType"]));
    }
    if (m.find("Schedule") != m.end() && !m["Schedule"].empty()) {
      schedule = make_shared<string>(boost::any_cast<string>(m["Schedule"]));
    }
    if (m.find("TagFilters") != m.end() && !m["TagFilters"].empty()) {
      if (typeid(vector<boost::any>) == m["TagFilters"].type()) {
        vector<CreatePolicyV2RequestRulesTagFilters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagFilters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreatePolicyV2RequestRulesTagFilters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagFilters = make_shared<vector<CreatePolicyV2RequestRulesTagFilters>>(expect1);
      }
    }
    if (m.find("VaultId") != m.end() && !m["VaultId"].empty()) {
      vaultId = make_shared<string>(boost::any_cast<string>(m["VaultId"]));
    }
  }


  virtual ~CreatePolicyV2RequestRules() = default;
};
class CreatePolicyV2Request : public Darabonba::Model {
public:
  shared_ptr<string> policyDescription{};
  shared_ptr<string> policyName{};
  shared_ptr<string> policyType{};
  shared_ptr<vector<CreatePolicyV2RequestRules>> rules{};

  CreatePolicyV2Request() {}

  explicit CreatePolicyV2Request(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyDescription) {
      res["PolicyDescription"] = boost::any(*policyDescription);
    }
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
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
    if (m.find("PolicyDescription") != m.end() && !m["PolicyDescription"].empty()) {
      policyDescription = make_shared<string>(boost::any_cast<string>(m["PolicyDescription"]));
    }
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      if (typeid(vector<boost::any>) == m["Rules"].type()) {
        vector<CreatePolicyV2RequestRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Rules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreatePolicyV2RequestRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rules = make_shared<vector<CreatePolicyV2RequestRules>>(expect1);
      }
    }
  }


  virtual ~CreatePolicyV2Request() = default;
};
class CreatePolicyV2ShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> policyDescription{};
  shared_ptr<string> policyName{};
  shared_ptr<string> policyType{};
  shared_ptr<string> rulesShrink{};

  CreatePolicyV2ShrinkRequest() {}

  explicit CreatePolicyV2ShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyDescription) {
      res["PolicyDescription"] = boost::any(*policyDescription);
    }
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
    }
    if (rulesShrink) {
      res["Rules"] = boost::any(*rulesShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyDescription") != m.end() && !m["PolicyDescription"].empty()) {
      policyDescription = make_shared<string>(boost::any_cast<string>(m["PolicyDescription"]));
    }
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      rulesShrink = make_shared<string>(boost::any_cast<string>(m["Rules"]));
    }
  }


  virtual ~CreatePolicyV2ShrinkRequest() = default;
};
class CreatePolicyV2ResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> policyId{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreatePolicyV2ResponseBody() {}

  explicit CreatePolicyV2ResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreatePolicyV2ResponseBody() = default;
};
class CreatePolicyV2Response : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreatePolicyV2ResponseBody> body{};

  CreatePolicyV2Response() {}

  explicit CreatePolicyV2Response(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreatePolicyV2ResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreatePolicyV2ResponseBody>(model1);
      }
    }
  }


  virtual ~CreatePolicyV2Response() = default;
};
class CreateReplicationVaultRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> encryptType{};
  shared_ptr<string> kmsKeyId{};
  shared_ptr<string> redundancyType{};
  shared_ptr<string> replicationSourceRegionId{};
  shared_ptr<string> replicationSourceVaultId{};
  shared_ptr<string> vaultName{};
  shared_ptr<string> vaultRegionId{};
  shared_ptr<string> vaultStorageClass{};

  CreateReplicationVaultRequest() {}

  explicit CreateReplicationVaultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (encryptType) {
      res["EncryptType"] = boost::any(*encryptType);
    }
    if (kmsKeyId) {
      res["KmsKeyId"] = boost::any(*kmsKeyId);
    }
    if (redundancyType) {
      res["RedundancyType"] = boost::any(*redundancyType);
    }
    if (replicationSourceRegionId) {
      res["ReplicationSourceRegionId"] = boost::any(*replicationSourceRegionId);
    }
    if (replicationSourceVaultId) {
      res["ReplicationSourceVaultId"] = boost::any(*replicationSourceVaultId);
    }
    if (vaultName) {
      res["VaultName"] = boost::any(*vaultName);
    }
    if (vaultRegionId) {
      res["VaultRegionId"] = boost::any(*vaultRegionId);
    }
    if (vaultStorageClass) {
      res["VaultStorageClass"] = boost::any(*vaultStorageClass);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EncryptType") != m.end() && !m["EncryptType"].empty()) {
      encryptType = make_shared<string>(boost::any_cast<string>(m["EncryptType"]));
    }
    if (m.find("KmsKeyId") != m.end() && !m["KmsKeyId"].empty()) {
      kmsKeyId = make_shared<string>(boost::any_cast<string>(m["KmsKeyId"]));
    }
    if (m.find("RedundancyType") != m.end() && !m["RedundancyType"].empty()) {
      redundancyType = make_shared<string>(boost::any_cast<string>(m["RedundancyType"]));
    }
    if (m.find("ReplicationSourceRegionId") != m.end() && !m["ReplicationSourceRegionId"].empty()) {
      replicationSourceRegionId = make_shared<string>(boost::any_cast<string>(m["ReplicationSourceRegionId"]));
    }
    if (m.find("ReplicationSourceVaultId") != m.end() && !m["ReplicationSourceVaultId"].empty()) {
      replicationSourceVaultId = make_shared<string>(boost::any_cast<string>(m["ReplicationSourceVaultId"]));
    }
    if (m.find("VaultName") != m.end() && !m["VaultName"].empty()) {
      vaultName = make_shared<string>(boost::any_cast<string>(m["VaultName"]));
    }
    if (m.find("VaultRegionId") != m.end() && !m["VaultRegionId"].empty()) {
      vaultRegionId = make_shared<string>(boost::any_cast<string>(m["VaultRegionId"]));
    }
    if (m.find("VaultStorageClass") != m.end() && !m["VaultStorageClass"].empty()) {
      vaultStorageClass = make_shared<string>(boost::any_cast<string>(m["VaultStorageClass"]));
    }
  }


  virtual ~CreateReplicationVaultRequest() = default;
};
class CreateReplicationVaultResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> taskId{};
  shared_ptr<string> vaultId{};

  CreateReplicationVaultResponseBody() {}

  explicit CreateReplicationVaultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (vaultId) {
      res["VaultId"] = boost::any(*vaultId);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("VaultId") != m.end() && !m["VaultId"].empty()) {
      vaultId = make_shared<string>(boost::any_cast<string>(m["VaultId"]));
    }
  }


  virtual ~CreateReplicationVaultResponseBody() = default;
};
class CreateReplicationVaultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateReplicationVaultResponseBody> body{};

  CreateReplicationVaultResponse() {}

  explicit CreateReplicationVaultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateReplicationVaultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateReplicationVaultResponseBody>(model1);
      }
    }
  }


  virtual ~CreateReplicationVaultResponse() = default;
};
class CreateRestoreJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> crossAccountRoleName{};
  shared_ptr<string> crossAccountType{};
  shared_ptr<long> crossAccountUserId{};
  shared_ptr<string> exclude{};
  shared_ptr<map<string, boost::any>> failbackDetail{};
  shared_ptr<string> include{};
  shared_ptr<bool> initiatedByAck{};
  shared_ptr<string> options{};
  shared_ptr<OtsTableRestoreDetail> otsDetail{};
  shared_ptr<string> restoreType{};
  shared_ptr<string> snapshotHash{};
  shared_ptr<string> snapshotId{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> targetBucket{};
  shared_ptr<string> targetContainer{};
  shared_ptr<string> targetContainerClusterId{};
  shared_ptr<long> targetCreateTime{};
  shared_ptr<string> targetFileSystemId{};
  shared_ptr<string> targetInstanceId{};
  shared_ptr<string> targetInstanceName{};
  shared_ptr<string> targetPath{};
  shared_ptr<string> targetPrefix{};
  shared_ptr<string> targetTableName{};
  shared_ptr<long> targetTime{};
  shared_ptr<map<string, boost::any>> udmDetail{};
  shared_ptr<string> udmRegionId{};
  shared_ptr<string> vaultId{};

  CreateRestoreJobRequest() {}

  explicit CreateRestoreJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (crossAccountRoleName) {
      res["CrossAccountRoleName"] = boost::any(*crossAccountRoleName);
    }
    if (crossAccountType) {
      res["CrossAccountType"] = boost::any(*crossAccountType);
    }
    if (crossAccountUserId) {
      res["CrossAccountUserId"] = boost::any(*crossAccountUserId);
    }
    if (exclude) {
      res["Exclude"] = boost::any(*exclude);
    }
    if (failbackDetail) {
      res["FailbackDetail"] = boost::any(*failbackDetail);
    }
    if (include) {
      res["Include"] = boost::any(*include);
    }
    if (initiatedByAck) {
      res["InitiatedByAck"] = boost::any(*initiatedByAck);
    }
    if (options) {
      res["Options"] = boost::any(*options);
    }
    if (otsDetail) {
      res["OtsDetail"] = otsDetail ? boost::any(otsDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (restoreType) {
      res["RestoreType"] = boost::any(*restoreType);
    }
    if (snapshotHash) {
      res["SnapshotHash"] = boost::any(*snapshotHash);
    }
    if (snapshotId) {
      res["SnapshotId"] = boost::any(*snapshotId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (targetBucket) {
      res["TargetBucket"] = boost::any(*targetBucket);
    }
    if (targetContainer) {
      res["TargetContainer"] = boost::any(*targetContainer);
    }
    if (targetContainerClusterId) {
      res["TargetContainerClusterId"] = boost::any(*targetContainerClusterId);
    }
    if (targetCreateTime) {
      res["TargetCreateTime"] = boost::any(*targetCreateTime);
    }
    if (targetFileSystemId) {
      res["TargetFileSystemId"] = boost::any(*targetFileSystemId);
    }
    if (targetInstanceId) {
      res["TargetInstanceId"] = boost::any(*targetInstanceId);
    }
    if (targetInstanceName) {
      res["TargetInstanceName"] = boost::any(*targetInstanceName);
    }
    if (targetPath) {
      res["TargetPath"] = boost::any(*targetPath);
    }
    if (targetPrefix) {
      res["TargetPrefix"] = boost::any(*targetPrefix);
    }
    if (targetTableName) {
      res["TargetTableName"] = boost::any(*targetTableName);
    }
    if (targetTime) {
      res["TargetTime"] = boost::any(*targetTime);
    }
    if (udmDetail) {
      res["UdmDetail"] = boost::any(*udmDetail);
    }
    if (udmRegionId) {
      res["UdmRegionId"] = boost::any(*udmRegionId);
    }
    if (vaultId) {
      res["VaultId"] = boost::any(*vaultId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CrossAccountRoleName") != m.end() && !m["CrossAccountRoleName"].empty()) {
      crossAccountRoleName = make_shared<string>(boost::any_cast<string>(m["CrossAccountRoleName"]));
    }
    if (m.find("CrossAccountType") != m.end() && !m["CrossAccountType"].empty()) {
      crossAccountType = make_shared<string>(boost::any_cast<string>(m["CrossAccountType"]));
    }
    if (m.find("CrossAccountUserId") != m.end() && !m["CrossAccountUserId"].empty()) {
      crossAccountUserId = make_shared<long>(boost::any_cast<long>(m["CrossAccountUserId"]));
    }
    if (m.find("Exclude") != m.end() && !m["Exclude"].empty()) {
      exclude = make_shared<string>(boost::any_cast<string>(m["Exclude"]));
    }
    if (m.find("FailbackDetail") != m.end() && !m["FailbackDetail"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["FailbackDetail"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      failbackDetail = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Include") != m.end() && !m["Include"].empty()) {
      include = make_shared<string>(boost::any_cast<string>(m["Include"]));
    }
    if (m.find("InitiatedByAck") != m.end() && !m["InitiatedByAck"].empty()) {
      initiatedByAck = make_shared<bool>(boost::any_cast<bool>(m["InitiatedByAck"]));
    }
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      options = make_shared<string>(boost::any_cast<string>(m["Options"]));
    }
    if (m.find("OtsDetail") != m.end() && !m["OtsDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["OtsDetail"].type()) {
        OtsTableRestoreDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OtsDetail"]));
        otsDetail = make_shared<OtsTableRestoreDetail>(model1);
      }
    }
    if (m.find("RestoreType") != m.end() && !m["RestoreType"].empty()) {
      restoreType = make_shared<string>(boost::any_cast<string>(m["RestoreType"]));
    }
    if (m.find("SnapshotHash") != m.end() && !m["SnapshotHash"].empty()) {
      snapshotHash = make_shared<string>(boost::any_cast<string>(m["SnapshotHash"]));
    }
    if (m.find("SnapshotId") != m.end() && !m["SnapshotId"].empty()) {
      snapshotId = make_shared<string>(boost::any_cast<string>(m["SnapshotId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("TargetBucket") != m.end() && !m["TargetBucket"].empty()) {
      targetBucket = make_shared<string>(boost::any_cast<string>(m["TargetBucket"]));
    }
    if (m.find("TargetContainer") != m.end() && !m["TargetContainer"].empty()) {
      targetContainer = make_shared<string>(boost::any_cast<string>(m["TargetContainer"]));
    }
    if (m.find("TargetContainerClusterId") != m.end() && !m["TargetContainerClusterId"].empty()) {
      targetContainerClusterId = make_shared<string>(boost::any_cast<string>(m["TargetContainerClusterId"]));
    }
    if (m.find("TargetCreateTime") != m.end() && !m["TargetCreateTime"].empty()) {
      targetCreateTime = make_shared<long>(boost::any_cast<long>(m["TargetCreateTime"]));
    }
    if (m.find("TargetFileSystemId") != m.end() && !m["TargetFileSystemId"].empty()) {
      targetFileSystemId = make_shared<string>(boost::any_cast<string>(m["TargetFileSystemId"]));
    }
    if (m.find("TargetInstanceId") != m.end() && !m["TargetInstanceId"].empty()) {
      targetInstanceId = make_shared<string>(boost::any_cast<string>(m["TargetInstanceId"]));
    }
    if (m.find("TargetInstanceName") != m.end() && !m["TargetInstanceName"].empty()) {
      targetInstanceName = make_shared<string>(boost::any_cast<string>(m["TargetInstanceName"]));
    }
    if (m.find("TargetPath") != m.end() && !m["TargetPath"].empty()) {
      targetPath = make_shared<string>(boost::any_cast<string>(m["TargetPath"]));
    }
    if (m.find("TargetPrefix") != m.end() && !m["TargetPrefix"].empty()) {
      targetPrefix = make_shared<string>(boost::any_cast<string>(m["TargetPrefix"]));
    }
    if (m.find("TargetTableName") != m.end() && !m["TargetTableName"].empty()) {
      targetTableName = make_shared<string>(boost::any_cast<string>(m["TargetTableName"]));
    }
    if (m.find("TargetTime") != m.end() && !m["TargetTime"].empty()) {
      targetTime = make_shared<long>(boost::any_cast<long>(m["TargetTime"]));
    }
    if (m.find("UdmDetail") != m.end() && !m["UdmDetail"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["UdmDetail"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      udmDetail = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("UdmRegionId") != m.end() && !m["UdmRegionId"].empty()) {
      udmRegionId = make_shared<string>(boost::any_cast<string>(m["UdmRegionId"]));
    }
    if (m.find("VaultId") != m.end() && !m["VaultId"].empty()) {
      vaultId = make_shared<string>(boost::any_cast<string>(m["VaultId"]));
    }
  }


  virtual ~CreateRestoreJobRequest() = default;
};
class CreateRestoreJobShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> crossAccountRoleName{};
  shared_ptr<string> crossAccountType{};
  shared_ptr<long> crossAccountUserId{};
  shared_ptr<string> exclude{};
  shared_ptr<string> failbackDetailShrink{};
  shared_ptr<string> include{};
  shared_ptr<bool> initiatedByAck{};
  shared_ptr<string> options{};
  shared_ptr<string> otsDetailShrink{};
  shared_ptr<string> restoreType{};
  shared_ptr<string> snapshotHash{};
  shared_ptr<string> snapshotId{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> targetBucket{};
  shared_ptr<string> targetContainer{};
  shared_ptr<string> targetContainerClusterId{};
  shared_ptr<long> targetCreateTime{};
  shared_ptr<string> targetFileSystemId{};
  shared_ptr<string> targetInstanceId{};
  shared_ptr<string> targetInstanceName{};
  shared_ptr<string> targetPath{};
  shared_ptr<string> targetPrefix{};
  shared_ptr<string> targetTableName{};
  shared_ptr<long> targetTime{};
  shared_ptr<string> udmDetailShrink{};
  shared_ptr<string> udmRegionId{};
  shared_ptr<string> vaultId{};

  CreateRestoreJobShrinkRequest() {}

  explicit CreateRestoreJobShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (crossAccountRoleName) {
      res["CrossAccountRoleName"] = boost::any(*crossAccountRoleName);
    }
    if (crossAccountType) {
      res["CrossAccountType"] = boost::any(*crossAccountType);
    }
    if (crossAccountUserId) {
      res["CrossAccountUserId"] = boost::any(*crossAccountUserId);
    }
    if (exclude) {
      res["Exclude"] = boost::any(*exclude);
    }
    if (failbackDetailShrink) {
      res["FailbackDetail"] = boost::any(*failbackDetailShrink);
    }
    if (include) {
      res["Include"] = boost::any(*include);
    }
    if (initiatedByAck) {
      res["InitiatedByAck"] = boost::any(*initiatedByAck);
    }
    if (options) {
      res["Options"] = boost::any(*options);
    }
    if (otsDetailShrink) {
      res["OtsDetail"] = boost::any(*otsDetailShrink);
    }
    if (restoreType) {
      res["RestoreType"] = boost::any(*restoreType);
    }
    if (snapshotHash) {
      res["SnapshotHash"] = boost::any(*snapshotHash);
    }
    if (snapshotId) {
      res["SnapshotId"] = boost::any(*snapshotId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (targetBucket) {
      res["TargetBucket"] = boost::any(*targetBucket);
    }
    if (targetContainer) {
      res["TargetContainer"] = boost::any(*targetContainer);
    }
    if (targetContainerClusterId) {
      res["TargetContainerClusterId"] = boost::any(*targetContainerClusterId);
    }
    if (targetCreateTime) {
      res["TargetCreateTime"] = boost::any(*targetCreateTime);
    }
    if (targetFileSystemId) {
      res["TargetFileSystemId"] = boost::any(*targetFileSystemId);
    }
    if (targetInstanceId) {
      res["TargetInstanceId"] = boost::any(*targetInstanceId);
    }
    if (targetInstanceName) {
      res["TargetInstanceName"] = boost::any(*targetInstanceName);
    }
    if (targetPath) {
      res["TargetPath"] = boost::any(*targetPath);
    }
    if (targetPrefix) {
      res["TargetPrefix"] = boost::any(*targetPrefix);
    }
    if (targetTableName) {
      res["TargetTableName"] = boost::any(*targetTableName);
    }
    if (targetTime) {
      res["TargetTime"] = boost::any(*targetTime);
    }
    if (udmDetailShrink) {
      res["UdmDetail"] = boost::any(*udmDetailShrink);
    }
    if (udmRegionId) {
      res["UdmRegionId"] = boost::any(*udmRegionId);
    }
    if (vaultId) {
      res["VaultId"] = boost::any(*vaultId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CrossAccountRoleName") != m.end() && !m["CrossAccountRoleName"].empty()) {
      crossAccountRoleName = make_shared<string>(boost::any_cast<string>(m["CrossAccountRoleName"]));
    }
    if (m.find("CrossAccountType") != m.end() && !m["CrossAccountType"].empty()) {
      crossAccountType = make_shared<string>(boost::any_cast<string>(m["CrossAccountType"]));
    }
    if (m.find("CrossAccountUserId") != m.end() && !m["CrossAccountUserId"].empty()) {
      crossAccountUserId = make_shared<long>(boost::any_cast<long>(m["CrossAccountUserId"]));
    }
    if (m.find("Exclude") != m.end() && !m["Exclude"].empty()) {
      exclude = make_shared<string>(boost::any_cast<string>(m["Exclude"]));
    }
    if (m.find("FailbackDetail") != m.end() && !m["FailbackDetail"].empty()) {
      failbackDetailShrink = make_shared<string>(boost::any_cast<string>(m["FailbackDetail"]));
    }
    if (m.find("Include") != m.end() && !m["Include"].empty()) {
      include = make_shared<string>(boost::any_cast<string>(m["Include"]));
    }
    if (m.find("InitiatedByAck") != m.end() && !m["InitiatedByAck"].empty()) {
      initiatedByAck = make_shared<bool>(boost::any_cast<bool>(m["InitiatedByAck"]));
    }
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      options = make_shared<string>(boost::any_cast<string>(m["Options"]));
    }
    if (m.find("OtsDetail") != m.end() && !m["OtsDetail"].empty()) {
      otsDetailShrink = make_shared<string>(boost::any_cast<string>(m["OtsDetail"]));
    }
    if (m.find("RestoreType") != m.end() && !m["RestoreType"].empty()) {
      restoreType = make_shared<string>(boost::any_cast<string>(m["RestoreType"]));
    }
    if (m.find("SnapshotHash") != m.end() && !m["SnapshotHash"].empty()) {
      snapshotHash = make_shared<string>(boost::any_cast<string>(m["SnapshotHash"]));
    }
    if (m.find("SnapshotId") != m.end() && !m["SnapshotId"].empty()) {
      snapshotId = make_shared<string>(boost::any_cast<string>(m["SnapshotId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("TargetBucket") != m.end() && !m["TargetBucket"].empty()) {
      targetBucket = make_shared<string>(boost::any_cast<string>(m["TargetBucket"]));
    }
    if (m.find("TargetContainer") != m.end() && !m["TargetContainer"].empty()) {
      targetContainer = make_shared<string>(boost::any_cast<string>(m["TargetContainer"]));
    }
    if (m.find("TargetContainerClusterId") != m.end() && !m["TargetContainerClusterId"].empty()) {
      targetContainerClusterId = make_shared<string>(boost::any_cast<string>(m["TargetContainerClusterId"]));
    }
    if (m.find("TargetCreateTime") != m.end() && !m["TargetCreateTime"].empty()) {
      targetCreateTime = make_shared<long>(boost::any_cast<long>(m["TargetCreateTime"]));
    }
    if (m.find("TargetFileSystemId") != m.end() && !m["TargetFileSystemId"].empty()) {
      targetFileSystemId = make_shared<string>(boost::any_cast<string>(m["TargetFileSystemId"]));
    }
    if (m.find("TargetInstanceId") != m.end() && !m["TargetInstanceId"].empty()) {
      targetInstanceId = make_shared<string>(boost::any_cast<string>(m["TargetInstanceId"]));
    }
    if (m.find("TargetInstanceName") != m.end() && !m["TargetInstanceName"].empty()) {
      targetInstanceName = make_shared<string>(boost::any_cast<string>(m["TargetInstanceName"]));
    }
    if (m.find("TargetPath") != m.end() && !m["TargetPath"].empty()) {
      targetPath = make_shared<string>(boost::any_cast<string>(m["TargetPath"]));
    }
    if (m.find("TargetPrefix") != m.end() && !m["TargetPrefix"].empty()) {
      targetPrefix = make_shared<string>(boost::any_cast<string>(m["TargetPrefix"]));
    }
    if (m.find("TargetTableName") != m.end() && !m["TargetTableName"].empty()) {
      targetTableName = make_shared<string>(boost::any_cast<string>(m["TargetTableName"]));
    }
    if (m.find("TargetTime") != m.end() && !m["TargetTime"].empty()) {
      targetTime = make_shared<long>(boost::any_cast<long>(m["TargetTime"]));
    }
    if (m.find("UdmDetail") != m.end() && !m["UdmDetail"].empty()) {
      udmDetailShrink = make_shared<string>(boost::any_cast<string>(m["UdmDetail"]));
    }
    if (m.find("UdmRegionId") != m.end() && !m["UdmRegionId"].empty()) {
      udmRegionId = make_shared<string>(boost::any_cast<string>(m["UdmRegionId"]));
    }
    if (m.find("VaultId") != m.end() && !m["VaultId"].empty()) {
      vaultId = make_shared<string>(boost::any_cast<string>(m["VaultId"]));
    }
  }


  virtual ~CreateRestoreJobShrinkRequest() = default;
};
class CreateRestoreJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> restoreId{};
  shared_ptr<bool> success{};

  CreateRestoreJobResponseBody() {}

  explicit CreateRestoreJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (restoreId) {
      res["RestoreId"] = boost::any(*restoreId);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RestoreId") != m.end() && !m["RestoreId"].empty()) {
      restoreId = make_shared<string>(boost::any_cast<string>(m["RestoreId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateRestoreJobResponseBody() = default;
};
class CreateRestoreJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateRestoreJobResponseBody> body{};

  CreateRestoreJobResponse() {}

  explicit CreateRestoreJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateRestoreJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateRestoreJobResponseBody>(model1);
      }
    }
  }


  virtual ~CreateRestoreJobResponse() = default;
};
class CreateTempFileUploadUrlRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileName{};

  CreateTempFileUploadUrlRequest() {}

  explicit CreateTempFileUploadUrlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
  }


  virtual ~CreateTempFileUploadUrlRequest() = default;
};
class CreateTempFileUploadUrlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> bucketName{};
  shared_ptr<string> code{};
  shared_ptr<string> endpoint{};
  shared_ptr<long> expireTime{};
  shared_ptr<string> message{};
  shared_ptr<string> ossAccessKeyId{};
  shared_ptr<string> policy{};
  shared_ptr<string> requestId{};
  shared_ptr<string> signature{};
  shared_ptr<bool> success{};
  shared_ptr<string> tempFileKey{};

  CreateTempFileUploadUrlResponseBody() {}

  explicit CreateTempFileUploadUrlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucketName) {
      res["BucketName"] = boost::any(*bucketName);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (endpoint) {
      res["Endpoint"] = boost::any(*endpoint);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (ossAccessKeyId) {
      res["OssAccessKeyId"] = boost::any(*ossAccessKeyId);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (signature) {
      res["Signature"] = boost::any(*signature);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (tempFileKey) {
      res["TempFileKey"] = boost::any(*tempFileKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BucketName") != m.end() && !m["BucketName"].empty()) {
      bucketName = make_shared<string>(boost::any_cast<string>(m["BucketName"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Endpoint") != m.end() && !m["Endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["Endpoint"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<long>(boost::any_cast<long>(m["ExpireTime"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("OssAccessKeyId") != m.end() && !m["OssAccessKeyId"].empty()) {
      ossAccessKeyId = make_shared<string>(boost::any_cast<string>(m["OssAccessKeyId"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Signature") != m.end() && !m["Signature"].empty()) {
      signature = make_shared<string>(boost::any_cast<string>(m["Signature"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TempFileKey") != m.end() && !m["TempFileKey"].empty()) {
      tempFileKey = make_shared<string>(boost::any_cast<string>(m["TempFileKey"]));
    }
  }


  virtual ~CreateTempFileUploadUrlResponseBody() = default;
};
class CreateTempFileUploadUrlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateTempFileUploadUrlResponseBody> body{};

  CreateTempFileUploadUrlResponse() {}

  explicit CreateTempFileUploadUrlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateTempFileUploadUrlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateTempFileUploadUrlResponseBody>(model1);
      }
    }
  }


  virtual ~CreateTempFileUploadUrlResponse() = default;
};
class CreateVaultRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> encryptType{};
  shared_ptr<string> kmsKeyId{};
  shared_ptr<string> vaultName{};
  shared_ptr<string> vaultRegionId{};
  shared_ptr<string> vaultStorageClass{};
  shared_ptr<string> vaultType{};

  CreateVaultRequest() {}

  explicit CreateVaultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (encryptType) {
      res["EncryptType"] = boost::any(*encryptType);
    }
    if (kmsKeyId) {
      res["KmsKeyId"] = boost::any(*kmsKeyId);
    }
    if (vaultName) {
      res["VaultName"] = boost::any(*vaultName);
    }
    if (vaultRegionId) {
      res["VaultRegionId"] = boost::any(*vaultRegionId);
    }
    if (vaultStorageClass) {
      res["VaultStorageClass"] = boost::any(*vaultStorageClass);
    }
    if (vaultType) {
      res["VaultType"] = boost::any(*vaultType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EncryptType") != m.end() && !m["EncryptType"].empty()) {
      encryptType = make_shared<string>(boost::any_cast<string>(m["EncryptType"]));
    }
    if (m.find("KmsKeyId") != m.end() && !m["KmsKeyId"].empty()) {
      kmsKeyId = make_shared<string>(boost::any_cast<string>(m["KmsKeyId"]));
    }
    if (m.find("VaultName") != m.end() && !m["VaultName"].empty()) {
      vaultName = make_shared<string>(boost::any_cast<string>(m["VaultName"]));
    }
    if (m.find("VaultRegionId") != m.end() && !m["VaultRegionId"].empty()) {
      vaultRegionId = make_shared<string>(boost::any_cast<string>(m["VaultRegionId"]));
    }
    if (m.find("VaultStorageClass") != m.end() && !m["VaultStorageClass"].empty()) {
      vaultStorageClass = make_shared<string>(boost::any_cast<string>(m["VaultStorageClass"]));
    }
    if (m.find("VaultType") != m.end() && !m["VaultType"].empty()) {
      vaultType = make_shared<string>(boost::any_cast<string>(m["VaultType"]));
    }
  }


  virtual ~CreateVaultRequest() = default;
};
class CreateVaultResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> taskId{};
  shared_ptr<string> vaultId{};

  CreateVaultResponseBody() {}

  explicit CreateVaultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (vaultId) {
      res["VaultId"] = boost::any(*vaultId);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("VaultId") != m.end() && !m["VaultId"].empty()) {
      vaultId = make_shared<string>(boost::any_cast<string>(m["VaultId"]));
    }
  }


  virtual ~CreateVaultResponseBody() = default;
};
class CreateVaultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateVaultResponseBody> body{};

  CreateVaultResponse() {}

  explicit CreateVaultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateVaultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateVaultResponseBody>(model1);
      }
    }
  }


  virtual ~CreateVaultResponse() = default;
};
class DeleteBackupClientRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientId{};

  DeleteBackupClientRequest() {}

  explicit DeleteBackupClientRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
  }


  virtual ~DeleteBackupClientRequest() = default;
};
class DeleteBackupClientResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteBackupClientResponseBody() {}

  explicit DeleteBackupClientResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteBackupClientResponseBody() = default;
};
class DeleteBackupClientResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteBackupClientResponseBody> body{};

  DeleteBackupClientResponse() {}

  explicit DeleteBackupClientResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteBackupClientResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteBackupClientResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteBackupClientResponse() = default;
};
class DeleteBackupClientResourceRequest : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> clientIds{};

  DeleteBackupClientResourceRequest() {}

  explicit DeleteBackupClientResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientIds) {
      res["ClientIds"] = boost::any(*clientIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientIds") != m.end() && !m["ClientIds"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ClientIds"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      clientIds = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~DeleteBackupClientResourceRequest() = default;
};
class DeleteBackupClientResourceShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientIdsShrink{};

  DeleteBackupClientResourceShrinkRequest() {}

  explicit DeleteBackupClientResourceShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientIdsShrink) {
      res["ClientIds"] = boost::any(*clientIdsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientIds") != m.end() && !m["ClientIds"].empty()) {
      clientIdsShrink = make_shared<string>(boost::any_cast<string>(m["ClientIds"]));
    }
  }


  virtual ~DeleteBackupClientResourceShrinkRequest() = default;
};
class DeleteBackupClientResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteBackupClientResourceResponseBody() {}

  explicit DeleteBackupClientResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteBackupClientResourceResponseBody() = default;
};
class DeleteBackupClientResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteBackupClientResourceResponseBody> body{};

  DeleteBackupClientResourceResponse() {}

  explicit DeleteBackupClientResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteBackupClientResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteBackupClientResourceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteBackupClientResourceResponse() = default;
};
class DeleteBackupPlanRequest : public Darabonba::Model {
public:
  shared_ptr<string> planId{};
  shared_ptr<bool> requireNoRunningJobs{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> vaultId{};

  DeleteBackupPlanRequest() {}

  explicit DeleteBackupPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (planId) {
      res["PlanId"] = boost::any(*planId);
    }
    if (requireNoRunningJobs) {
      res["RequireNoRunningJobs"] = boost::any(*requireNoRunningJobs);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (vaultId) {
      res["VaultId"] = boost::any(*vaultId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PlanId") != m.end() && !m["PlanId"].empty()) {
      planId = make_shared<string>(boost::any_cast<string>(m["PlanId"]));
    }
    if (m.find("RequireNoRunningJobs") != m.end() && !m["RequireNoRunningJobs"].empty()) {
      requireNoRunningJobs = make_shared<bool>(boost::any_cast<bool>(m["RequireNoRunningJobs"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("VaultId") != m.end() && !m["VaultId"].empty()) {
      vaultId = make_shared<string>(boost::any_cast<string>(m["VaultId"]));
    }
  }


  virtual ~DeleteBackupPlanRequest() = default;
};
class DeleteBackupPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteBackupPlanResponseBody() {}

  explicit DeleteBackupPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteBackupPlanResponseBody() = default;
};
class DeleteBackupPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteBackupPlanResponseBody> body{};

  DeleteBackupPlanResponse() {}

  explicit DeleteBackupPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteBackupPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteBackupPlanResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteBackupPlanResponse() = default;
};
class DeleteClientRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> vaultId{};

  DeleteClientRequest() {}

  explicit DeleteClientRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (vaultId) {
      res["VaultId"] = boost::any(*vaultId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("VaultId") != m.end() && !m["VaultId"].empty()) {
      vaultId = make_shared<string>(boost::any_cast<string>(m["VaultId"]));
    }
  }


  virtual ~DeleteClientRequest() = default;
};
class DeleteClientResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteClientResponseBody() {}

  explicit DeleteClientResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteClientResponseBody() = default;
};
class DeleteClientResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteClientResponseBody> body{};

  DeleteClientResponse() {}

  explicit DeleteClientResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteClientResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteClientResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteClientResponse() = default;
};
class DeleteHanaBackupPlanRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> planId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> vaultId{};

  DeleteHanaBackupPlanRequest() {}

  explicit DeleteHanaBackupPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (planId) {
      res["PlanId"] = boost::any(*planId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (vaultId) {
      res["VaultId"] = boost::any(*vaultId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("PlanId") != m.end() && !m["PlanId"].empty()) {
      planId = make_shared<string>(boost::any_cast<string>(m["PlanId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("VaultId") != m.end() && !m["VaultId"].empty()) {
      vaultId = make_shared<string>(boost::any_cast<string>(m["VaultId"]));
    }
  }


  virtual ~DeleteHanaBackupPlanRequest() = default;
};
class DeleteHanaBackupPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteHanaBackupPlanResponseBody() {}

  explicit DeleteHanaBackupPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteHanaBackupPlanResponseBody() = default;
};
class DeleteHanaBackupPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteHanaBackupPlanResponseBody> body{};

  DeleteHanaBackupPlanResponse() {}

  explicit DeleteHanaBackupPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteHanaBackupPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteHanaBackupPlanResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteHanaBackupPlanResponse() = default;
};
class DeleteHanaInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> sid{};
  shared_ptr<string> vaultId{};

  DeleteHanaInstanceRequest() {}

  explicit DeleteHanaInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (sid) {
      res["Sid"] = boost::any(*sid);
    }
    if (vaultId) {
      res["VaultId"] = boost::any(*vaultId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Sid") != m.end() && !m["Sid"].empty()) {
      sid = make_shared<string>(boost::any_cast<string>(m["Sid"]));
    }
    if (m.find("VaultId") != m.end() && !m["VaultId"].empty()) {
      vaultId = make_shared<string>(boost::any_cast<string>(m["VaultId"]));
    }
  }


  virtual ~DeleteHanaInstanceRequest() = default;
};
class DeleteHanaInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteHanaInstanceResponseBody() {}

  explicit DeleteHanaInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteHanaInstanceResponseBody() = default;
};
class DeleteHanaInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteHanaInstanceResponseBody> body{};

  DeleteHanaInstanceResponse() {}

  explicit DeleteHanaInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteHanaInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteHanaInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteHanaInstanceResponse() = default;
};
class DeletePolicyBindingRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> dataSourceIds{};
  shared_ptr<string> policyId{};
  shared_ptr<string> sourceType{};

  DeletePolicyBindingRequest() {}

  explicit DeletePolicyBindingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSourceIds) {
      res["DataSourceIds"] = boost::any(*dataSourceIds);
    }
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataSourceIds") != m.end() && !m["DataSourceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DataSourceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DataSourceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dataSourceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
  }


  virtual ~DeletePolicyBindingRequest() = default;
};
class DeletePolicyBindingShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataSourceIdsShrink{};
  shared_ptr<string> policyId{};
  shared_ptr<string> sourceType{};

  DeletePolicyBindingShrinkRequest() {}

  explicit DeletePolicyBindingShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSourceIdsShrink) {
      res["DataSourceIds"] = boost::any(*dataSourceIdsShrink);
    }
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataSourceIds") != m.end() && !m["DataSourceIds"].empty()) {
      dataSourceIdsShrink = make_shared<string>(boost::any_cast<string>(m["DataSourceIds"]));
    }
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
  }


  virtual ~DeletePolicyBindingShrinkRequest() = default;
};
class DeletePolicyBindingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeletePolicyBindingResponseBody() {}

  explicit DeletePolicyBindingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeletePolicyBindingResponseBody() = default;
};
class DeletePolicyBindingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeletePolicyBindingResponseBody> body{};

  DeletePolicyBindingResponse() {}

  explicit DeletePolicyBindingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeletePolicyBindingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeletePolicyBindingResponseBody>(model1);
      }
    }
  }


  virtual ~DeletePolicyBindingResponse() = default;
};
class DeletePolicyV2Request : public Darabonba::Model {
public:
  shared_ptr<string> policyId{};

  DeletePolicyV2Request() {}

  explicit DeletePolicyV2Request(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
  }


  virtual ~DeletePolicyV2Request() = default;
};
class DeletePolicyV2ResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeletePolicyV2ResponseBody() {}

  explicit DeletePolicyV2ResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeletePolicyV2ResponseBody() = default;
};
class DeletePolicyV2Response : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeletePolicyV2ResponseBody> body{};

  DeletePolicyV2Response() {}

  explicit DeletePolicyV2Response(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeletePolicyV2ResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeletePolicyV2ResponseBody>(model1);
      }
    }
  }


  virtual ~DeletePolicyV2Response() = default;
};
class DeleteSnapshotRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientId{};
  shared_ptr<bool> force{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> snapshotId{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> token{};
  shared_ptr<string> vaultId{};

  DeleteSnapshotRequest() {}

  explicit DeleteSnapshotRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (force) {
      res["Force"] = boost::any(*force);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (snapshotId) {
      res["SnapshotId"] = boost::any(*snapshotId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    if (vaultId) {
      res["VaultId"] = boost::any(*vaultId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("Force") != m.end() && !m["Force"].empty()) {
      force = make_shared<bool>(boost::any_cast<bool>(m["Force"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("SnapshotId") != m.end() && !m["SnapshotId"].empty()) {
      snapshotId = make_shared<string>(boost::any_cast<string>(m["SnapshotId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
    if (m.find("VaultId") != m.end() && !m["VaultId"].empty()) {
      vaultId = make_shared<string>(boost::any_cast<string>(m["VaultId"]));
    }
  }


  virtual ~DeleteSnapshotRequest() = default;
};
class DeleteSnapshotResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteSnapshotResponseBody() {}

  explicit DeleteSnapshotResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteSnapshotResponseBody() = default;
};
class DeleteSnapshotResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteSnapshotResponseBody> body{};

  DeleteSnapshotResponse() {}

  explicit DeleteSnapshotResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteSnapshotResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteSnapshotResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteSnapshotResponse() = default;
};
class DeleteUdmDiskRequest : public Darabonba::Model {
public:
  shared_ptr<string> diskId{};

  DeleteUdmDiskRequest() {}

  explicit DeleteUdmDiskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (diskId) {
      res["DiskId"] = boost::any(*diskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DiskId") != m.end() && !m["DiskId"].empty()) {
      diskId = make_shared<string>(boost::any_cast<string>(m["DiskId"]));
    }
  }


  virtual ~DeleteUdmDiskRequest() = default;
};
class DeleteUdmDiskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteUdmDiskResponseBody() {}

  explicit DeleteUdmDiskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteUdmDiskResponseBody() = default;
};
class DeleteUdmDiskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteUdmDiskResponseBody> body{};

  DeleteUdmDiskResponse() {}

  explicit DeleteUdmDiskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteUdmDiskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteUdmDiskResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteUdmDiskResponse() = default;
};
class DeleteUdmEcsInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  DeleteUdmEcsInstanceRequest() {}

  explicit DeleteUdmEcsInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteUdmEcsInstanceRequest() = default;
};
class DeleteUdmEcsInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteUdmEcsInstanceResponseBody() {}

  explicit DeleteUdmEcsInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteUdmEcsInstanceResponseBody() = default;
};
class DeleteUdmEcsInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteUdmEcsInstanceResponseBody> body{};

  DeleteUdmEcsInstanceResponse() {}

  explicit DeleteUdmEcsInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteUdmEcsInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteUdmEcsInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteUdmEcsInstanceResponse() = default;
};
class DeleteVaultRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> token{};
  shared_ptr<string> vaultId{};

  DeleteVaultRequest() {}

  explicit DeleteVaultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    if (vaultId) {
      res["VaultId"] = boost::any(*vaultId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
    if (m.find("VaultId") != m.end() && !m["VaultId"].empty()) {
      vaultId = make_shared<string>(boost::any_cast<string>(m["VaultId"]));
    }
  }


  virtual ~DeleteVaultRequest() = default;
};
class DeleteVaultResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteVaultResponseBody() {}

  explicit DeleteVaultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteVaultResponseBody() = default;
};
class DeleteVaultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteVaultResponseBody> body{};

  DeleteVaultResponse() {}

  explicit DeleteVaultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteVaultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteVaultResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteVaultResponse() = default;
};
class DescribeBackupClientsRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeBackupClientsRequestTag() {}

  explicit DescribeBackupClientsRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeBackupClientsRequestTag() = default;
};
class DescribeBackupClientsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> clientIds{};
  shared_ptr<string> clientType{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> crossAccountRoleName{};
  shared_ptr<string> crossAccountType{};
  shared_ptr<long> crossAccountUserId{};
  shared_ptr<vector<string>> instanceIds{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<DescribeBackupClientsRequestTag>> tag{};

  DescribeBackupClientsRequest() {}

  explicit DescribeBackupClientsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientIds) {
      res["ClientIds"] = boost::any(*clientIds);
    }
    if (clientType) {
      res["ClientType"] = boost::any(*clientType);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (crossAccountRoleName) {
      res["CrossAccountRoleName"] = boost::any(*crossAccountRoleName);
    }
    if (crossAccountType) {
      res["CrossAccountType"] = boost::any(*crossAccountType);
    }
    if (crossAccountUserId) {
      res["CrossAccountUserId"] = boost::any(*crossAccountUserId);
    }
    if (instanceIds) {
      res["InstanceIds"] = boost::any(*instanceIds);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
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
    if (m.find("ClientIds") != m.end() && !m["ClientIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ClientIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ClientIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      clientIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ClientType") != m.end() && !m["ClientType"].empty()) {
      clientType = make_shared<string>(boost::any_cast<string>(m["ClientType"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("CrossAccountRoleName") != m.end() && !m["CrossAccountRoleName"].empty()) {
      crossAccountRoleName = make_shared<string>(boost::any_cast<string>(m["CrossAccountRoleName"]));
    }
    if (m.find("CrossAccountType") != m.end() && !m["CrossAccountType"].empty()) {
      crossAccountType = make_shared<string>(boost::any_cast<string>(m["CrossAccountType"]));
    }
    if (m.find("CrossAccountUserId") != m.end() && !m["CrossAccountUserId"].empty()) {
      crossAccountUserId = make_shared<long>(boost::any_cast<long>(m["CrossAccountUserId"]));
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
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<DescribeBackupClientsRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeBackupClientsRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<DescribeBackupClientsRequestTag>>(expect1);
      }
    }
  }


  virtual ~DescribeBackupClientsRequest() = default;
};
class DescribeBackupClientsShrinkRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeBackupClientsShrinkRequestTag() {}

  explicit DescribeBackupClientsShrinkRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeBackupClientsShrinkRequestTag() = default;
};
class DescribeBackupClientsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientIdsShrink{};
  shared_ptr<string> clientType{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> crossAccountRoleName{};
  shared_ptr<string> crossAccountType{};
  shared_ptr<long> crossAccountUserId{};
  shared_ptr<string> instanceIdsShrink{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<DescribeBackupClientsShrinkRequestTag>> tag{};

  DescribeBackupClientsShrinkRequest() {}

  explicit DescribeBackupClientsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientIdsShrink) {
      res["ClientIds"] = boost::any(*clientIdsShrink);
    }
    if (clientType) {
      res["ClientType"] = boost::any(*clientType);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (crossAccountRoleName) {
      res["CrossAccountRoleName"] = boost::any(*crossAccountRoleName);
    }
    if (crossAccountType) {
      res["CrossAccountType"] = boost::any(*crossAccountType);
    }
    if (crossAccountUserId) {
      res["CrossAccountUserId"] = boost::any(*crossAccountUserId);
    }
    if (instanceIdsShrink) {
      res["InstanceIds"] = boost::any(*instanceIdsShrink);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
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
    if (m.find("ClientIds") != m.end() && !m["ClientIds"].empty()) {
      clientIdsShrink = make_shared<string>(boost::any_cast<string>(m["ClientIds"]));
    }
    if (m.find("ClientType") != m.end() && !m["ClientType"].empty()) {
      clientType = make_shared<string>(boost::any_cast<string>(m["ClientType"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("CrossAccountRoleName") != m.end() && !m["CrossAccountRoleName"].empty()) {
      crossAccountRoleName = make_shared<string>(boost::any_cast<string>(m["CrossAccountRoleName"]));
    }
    if (m.find("CrossAccountType") != m.end() && !m["CrossAccountType"].empty()) {
      crossAccountType = make_shared<string>(boost::any_cast<string>(m["CrossAccountType"]));
    }
    if (m.find("CrossAccountUserId") != m.end() && !m["CrossAccountUserId"].empty()) {
      crossAccountUserId = make_shared<long>(boost::any_cast<long>(m["CrossAccountUserId"]));
    }
    if (m.find("InstanceIds") != m.end() && !m["InstanceIds"].empty()) {
      instanceIdsShrink = make_shared<string>(boost::any_cast<string>(m["InstanceIds"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<DescribeBackupClientsShrinkRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeBackupClientsShrinkRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<DescribeBackupClientsShrinkRequestTag>>(expect1);
      }
    }
  }


  virtual ~DescribeBackupClientsShrinkRequest() = default;
};
class DescribeBackupClientsResponseBodyClientsSettings : public Darabonba::Model {
public:
  shared_ptr<bool> alertOnPartialComplete{};
  shared_ptr<string> dataNetworkType{};
  shared_ptr<string> dataProxySetting{};
  shared_ptr<string> maxCpuCore{};
  shared_ptr<long> maxMemory{};
  shared_ptr<string> maxWorker{};
  shared_ptr<string> proxyHost{};
  shared_ptr<string> proxyPassword{};
  shared_ptr<long> proxyPort{};
  shared_ptr<string> proxyUser{};
  shared_ptr<string> useHttps{};

  DescribeBackupClientsResponseBodyClientsSettings() {}

  explicit DescribeBackupClientsResponseBodyClientsSettings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertOnPartialComplete) {
      res["AlertOnPartialComplete"] = boost::any(*alertOnPartialComplete);
    }
    if (dataNetworkType) {
      res["DataNetworkType"] = boost::any(*dataNetworkType);
    }
    if (dataProxySetting) {
      res["DataProxySetting"] = boost::any(*dataProxySetting);
    }
    if (maxCpuCore) {
      res["MaxCpuCore"] = boost::any(*maxCpuCore);
    }
    if (maxMemory) {
      res["MaxMemory"] = boost::any(*maxMemory);
    }
    if (maxWorker) {
      res["MaxWorker"] = boost::any(*maxWorker);
    }
    if (proxyHost) {
      res["ProxyHost"] = boost::any(*proxyHost);
    }
    if (proxyPassword) {
      res["ProxyPassword"] = boost::any(*proxyPassword);
    }
    if (proxyPort) {
      res["ProxyPort"] = boost::any(*proxyPort);
    }
    if (proxyUser) {
      res["ProxyUser"] = boost::any(*proxyUser);
    }
    if (useHttps) {
      res["UseHttps"] = boost::any(*useHttps);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlertOnPartialComplete") != m.end() && !m["AlertOnPartialComplete"].empty()) {
      alertOnPartialComplete = make_shared<bool>(boost::any_cast<bool>(m["AlertOnPartialComplete"]));
    }
    if (m.find("DataNetworkType") != m.end() && !m["DataNetworkType"].empty()) {
      dataNetworkType = make_shared<string>(boost::any_cast<string>(m["DataNetworkType"]));
    }
    if (m.find("DataProxySetting") != m.end() && !m["DataProxySetting"].empty()) {
      dataProxySetting = make_shared<string>(boost::any_cast<string>(m["DataProxySetting"]));
    }
    if (m.find("MaxCpuCore") != m.end() && !m["MaxCpuCore"].empty()) {
      maxCpuCore = make_shared<string>(boost::any_cast<string>(m["MaxCpuCore"]));
    }
    if (m.find("MaxMemory") != m.end() && !m["MaxMemory"].empty()) {
      maxMemory = make_shared<long>(boost::any_cast<long>(m["MaxMemory"]));
    }
    if (m.find("MaxWorker") != m.end() && !m["MaxWorker"].empty()) {
      maxWorker = make_shared<string>(boost::any_cast<string>(m["MaxWorker"]));
    }
    if (m.find("ProxyHost") != m.end() && !m["ProxyHost"].empty()) {
      proxyHost = make_shared<string>(boost::any_cast<string>(m["ProxyHost"]));
    }
    if (m.find("ProxyPassword") != m.end() && !m["ProxyPassword"].empty()) {
      proxyPassword = make_shared<string>(boost::any_cast<string>(m["ProxyPassword"]));
    }
    if (m.find("ProxyPort") != m.end() && !m["ProxyPort"].empty()) {
      proxyPort = make_shared<long>(boost::any_cast<long>(m["ProxyPort"]));
    }
    if (m.find("ProxyUser") != m.end() && !m["ProxyUser"].empty()) {
      proxyUser = make_shared<string>(boost::any_cast<string>(m["ProxyUser"]));
    }
    if (m.find("UseHttps") != m.end() && !m["UseHttps"].empty()) {
      useHttps = make_shared<string>(boost::any_cast<string>(m["UseHttps"]));
    }
  }


  virtual ~DescribeBackupClientsResponseBodyClientsSettings() = default;
};
class DescribeBackupClientsResponseBodyClientsTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeBackupClientsResponseBodyClientsTags() {}

  explicit DescribeBackupClientsResponseBodyClientsTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeBackupClientsResponseBodyClientsTags() = default;
};
class DescribeBackupClientsResponseBodyClients : public Darabonba::Model {
public:
  shared_ptr<bool> appliance{};
  shared_ptr<string> archType{};
  shared_ptr<string> backupStatus{};
  shared_ptr<string> clientId{};
  shared_ptr<string> clientType{};
  shared_ptr<string> clientVersion{};
  shared_ptr<long> createdTime{};
  shared_ptr<string> hostname{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<long> lastHeartBeatTime{};
  shared_ptr<string> maxClientVersion{};
  shared_ptr<string> osType{};
  shared_ptr<string> privateIpV4{};
  shared_ptr<DescribeBackupClientsResponseBodyClientsSettings> settings{};
  shared_ptr<string> status{};
  shared_ptr<vector<DescribeBackupClientsResponseBodyClientsTags>> tags{};
  shared_ptr<long> updatedTime{};
  shared_ptr<string> zoneId{};

  DescribeBackupClientsResponseBodyClients() {}

  explicit DescribeBackupClientsResponseBodyClients(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appliance) {
      res["Appliance"] = boost::any(*appliance);
    }
    if (archType) {
      res["ArchType"] = boost::any(*archType);
    }
    if (backupStatus) {
      res["BackupStatus"] = boost::any(*backupStatus);
    }
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (clientType) {
      res["ClientType"] = boost::any(*clientType);
    }
    if (clientVersion) {
      res["ClientVersion"] = boost::any(*clientVersion);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (hostname) {
      res["Hostname"] = boost::any(*hostname);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (lastHeartBeatTime) {
      res["LastHeartBeatTime"] = boost::any(*lastHeartBeatTime);
    }
    if (maxClientVersion) {
      res["MaxClientVersion"] = boost::any(*maxClientVersion);
    }
    if (osType) {
      res["OsType"] = boost::any(*osType);
    }
    if (privateIpV4) {
      res["PrivateIpV4"] = boost::any(*privateIpV4);
    }
    if (settings) {
      res["Settings"] = settings ? boost::any(settings->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (updatedTime) {
      res["UpdatedTime"] = boost::any(*updatedTime);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Appliance") != m.end() && !m["Appliance"].empty()) {
      appliance = make_shared<bool>(boost::any_cast<bool>(m["Appliance"]));
    }
    if (m.find("ArchType") != m.end() && !m["ArchType"].empty()) {
      archType = make_shared<string>(boost::any_cast<string>(m["ArchType"]));
    }
    if (m.find("BackupStatus") != m.end() && !m["BackupStatus"].empty()) {
      backupStatus = make_shared<string>(boost::any_cast<string>(m["BackupStatus"]));
    }
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("ClientType") != m.end() && !m["ClientType"].empty()) {
      clientType = make_shared<string>(boost::any_cast<string>(m["ClientType"]));
    }
    if (m.find("ClientVersion") != m.end() && !m["ClientVersion"].empty()) {
      clientVersion = make_shared<string>(boost::any_cast<string>(m["ClientVersion"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<long>(boost::any_cast<long>(m["CreatedTime"]));
    }
    if (m.find("Hostname") != m.end() && !m["Hostname"].empty()) {
      hostname = make_shared<string>(boost::any_cast<string>(m["Hostname"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("LastHeartBeatTime") != m.end() && !m["LastHeartBeatTime"].empty()) {
      lastHeartBeatTime = make_shared<long>(boost::any_cast<long>(m["LastHeartBeatTime"]));
    }
    if (m.find("MaxClientVersion") != m.end() && !m["MaxClientVersion"].empty()) {
      maxClientVersion = make_shared<string>(boost::any_cast<string>(m["MaxClientVersion"]));
    }
    if (m.find("OsType") != m.end() && !m["OsType"].empty()) {
      osType = make_shared<string>(boost::any_cast<string>(m["OsType"]));
    }
    if (m.find("PrivateIpV4") != m.end() && !m["PrivateIpV4"].empty()) {
      privateIpV4 = make_shared<string>(boost::any_cast<string>(m["PrivateIpV4"]));
    }
    if (m.find("Settings") != m.end() && !m["Settings"].empty()) {
      if (typeid(map<string, boost::any>) == m["Settings"].type()) {
        DescribeBackupClientsResponseBodyClientsSettings model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Settings"]));
        settings = make_shared<DescribeBackupClientsResponseBodyClientsSettings>(model1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<DescribeBackupClientsResponseBodyClientsTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeBackupClientsResponseBodyClientsTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<DescribeBackupClientsResponseBodyClientsTags>>(expect1);
      }
    }
    if (m.find("UpdatedTime") != m.end() && !m["UpdatedTime"].empty()) {
      updatedTime = make_shared<long>(boost::any_cast<long>(m["UpdatedTime"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeBackupClientsResponseBodyClients() = default;
};
class DescribeBackupClientsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeBackupClientsResponseBodyClients>> clients{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  DescribeBackupClientsResponseBody() {}

  explicit DescribeBackupClientsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clients) {
      vector<boost::any> temp1;
      for(auto item1:*clients){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Clients"] = boost::any(temp1);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Clients") != m.end() && !m["Clients"].empty()) {
      if (typeid(vector<boost::any>) == m["Clients"].type()) {
        vector<DescribeBackupClientsResponseBodyClients> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Clients"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeBackupClientsResponseBodyClients model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        clients = make_shared<vector<DescribeBackupClientsResponseBodyClients>>(expect1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
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
  }


  virtual ~DescribeBackupClientsResponseBody() = default;
};
class DescribeBackupClientsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeBackupClientsResponseBody> body{};

  DescribeBackupClientsResponse() {}

  explicit DescribeBackupClientsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeBackupClientsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeBackupClientsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeBackupClientsResponse() = default;
};
class DescribeBackupJobs2RequestFilters : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> operator_{};
  shared_ptr<vector<string>> values{};

  DescribeBackupJobs2RequestFilters() {}

  explicit DescribeBackupJobs2RequestFilters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (operator_) {
      res["Operator"] = boost::any(*operator_);
    }
    if (values) {
      res["Values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Operator") != m.end() && !m["Operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["Operator"]));
    }
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeBackupJobs2RequestFilters() = default;
};
class DescribeBackupJobs2Request : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeBackupJobs2RequestFilters>> filters{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> sortDirection{};
  shared_ptr<string> sourceType{};

  DescribeBackupJobs2Request() {}

  explicit DescribeBackupJobs2Request(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filters) {
      vector<boost::any> temp1;
      for(auto item1:*filters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Filters"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (sortDirection) {
      res["SortDirection"] = boost::any(*sortDirection);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Filters") != m.end() && !m["Filters"].empty()) {
      if (typeid(vector<boost::any>) == m["Filters"].type()) {
        vector<DescribeBackupJobs2RequestFilters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Filters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeBackupJobs2RequestFilters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filters = make_shared<vector<DescribeBackupJobs2RequestFilters>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SortDirection") != m.end() && !m["SortDirection"].empty()) {
      sortDirection = make_shared<string>(boost::any_cast<string>(m["SortDirection"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
  }


  virtual ~DescribeBackupJobs2Request() = default;
};
class DescribeBackupJobs2ResponseBodyBackupJobsBackupJobDetailDiskNativeSnapshotIdList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> diskNativeSnapshotId{};

  DescribeBackupJobs2ResponseBodyBackupJobsBackupJobDetailDiskNativeSnapshotIdList() {}

  explicit DescribeBackupJobs2ResponseBodyBackupJobsBackupJobDetailDiskNativeSnapshotIdList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (diskNativeSnapshotId) {
      res["DiskNativeSnapshotId"] = boost::any(*diskNativeSnapshotId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DiskNativeSnapshotId") != m.end() && !m["DiskNativeSnapshotId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DiskNativeSnapshotId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DiskNativeSnapshotId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      diskNativeSnapshotId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeBackupJobs2ResponseBodyBackupJobsBackupJobDetailDiskNativeSnapshotIdList() = default;
};
class DescribeBackupJobs2ResponseBodyBackupJobsBackupJobDetail : public Darabonba::Model {
public:
  shared_ptr<string> destinationNativeSnapshotErrorMessage{};
  shared_ptr<string> destinationNativeSnapshotId{};
  shared_ptr<long> destinationNativeSnapshotProgress{};
  shared_ptr<string> destinationNativeSnapshotStatus{};
  shared_ptr<long> destinationRetention{};
  shared_ptr<string> destinationSnapshotId{};
  shared_ptr<DescribeBackupJobs2ResponseBodyBackupJobsBackupJobDetailDiskNativeSnapshotIdList> diskNativeSnapshotIdList{};
  shared_ptr<bool> doCopy{};
  shared_ptr<map<string, boost::any>> instanceInfos{};
  shared_ptr<string> nativeSnapshotId{};

  DescribeBackupJobs2ResponseBodyBackupJobsBackupJobDetail() {}

  explicit DescribeBackupJobs2ResponseBodyBackupJobsBackupJobDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (destinationNativeSnapshotErrorMessage) {
      res["DestinationNativeSnapshotErrorMessage"] = boost::any(*destinationNativeSnapshotErrorMessage);
    }
    if (destinationNativeSnapshotId) {
      res["DestinationNativeSnapshotId"] = boost::any(*destinationNativeSnapshotId);
    }
    if (destinationNativeSnapshotProgress) {
      res["DestinationNativeSnapshotProgress"] = boost::any(*destinationNativeSnapshotProgress);
    }
    if (destinationNativeSnapshotStatus) {
      res["DestinationNativeSnapshotStatus"] = boost::any(*destinationNativeSnapshotStatus);
    }
    if (destinationRetention) {
      res["DestinationRetention"] = boost::any(*destinationRetention);
    }
    if (destinationSnapshotId) {
      res["DestinationSnapshotId"] = boost::any(*destinationSnapshotId);
    }
    if (diskNativeSnapshotIdList) {
      res["DiskNativeSnapshotIdList"] = diskNativeSnapshotIdList ? boost::any(diskNativeSnapshotIdList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (doCopy) {
      res["DoCopy"] = boost::any(*doCopy);
    }
    if (instanceInfos) {
      res["InstanceInfos"] = boost::any(*instanceInfos);
    }
    if (nativeSnapshotId) {
      res["NativeSnapshotId"] = boost::any(*nativeSnapshotId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DestinationNativeSnapshotErrorMessage") != m.end() && !m["DestinationNativeSnapshotErrorMessage"].empty()) {
      destinationNativeSnapshotErrorMessage = make_shared<string>(boost::any_cast<string>(m["DestinationNativeSnapshotErrorMessage"]));
    }
    if (m.find("DestinationNativeSnapshotId") != m.end() && !m["DestinationNativeSnapshotId"].empty()) {
      destinationNativeSnapshotId = make_shared<string>(boost::any_cast<string>(m["DestinationNativeSnapshotId"]));
    }
    if (m.find("DestinationNativeSnapshotProgress") != m.end() && !m["DestinationNativeSnapshotProgress"].empty()) {
      destinationNativeSnapshotProgress = make_shared<long>(boost::any_cast<long>(m["DestinationNativeSnapshotProgress"]));
    }
    if (m.find("DestinationNativeSnapshotStatus") != m.end() && !m["DestinationNativeSnapshotStatus"].empty()) {
      destinationNativeSnapshotStatus = make_shared<string>(boost::any_cast<string>(m["DestinationNativeSnapshotStatus"]));
    }
    if (m.find("DestinationRetention") != m.end() && !m["DestinationRetention"].empty()) {
      destinationRetention = make_shared<long>(boost::any_cast<long>(m["DestinationRetention"]));
    }
    if (m.find("DestinationSnapshotId") != m.end() && !m["DestinationSnapshotId"].empty()) {
      destinationSnapshotId = make_shared<string>(boost::any_cast<string>(m["DestinationSnapshotId"]));
    }
    if (m.find("DiskNativeSnapshotIdList") != m.end() && !m["DiskNativeSnapshotIdList"].empty()) {
      if (typeid(map<string, boost::any>) == m["DiskNativeSnapshotIdList"].type()) {
        DescribeBackupJobs2ResponseBodyBackupJobsBackupJobDetailDiskNativeSnapshotIdList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DiskNativeSnapshotIdList"]));
        diskNativeSnapshotIdList = make_shared<DescribeBackupJobs2ResponseBodyBackupJobsBackupJobDetailDiskNativeSnapshotIdList>(model1);
      }
    }
    if (m.find("DoCopy") != m.end() && !m["DoCopy"].empty()) {
      doCopy = make_shared<bool>(boost::any_cast<bool>(m["DoCopy"]));
    }
    if (m.find("InstanceInfos") != m.end() && !m["InstanceInfos"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["InstanceInfos"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      instanceInfos = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("NativeSnapshotId") != m.end() && !m["NativeSnapshotId"].empty()) {
      nativeSnapshotId = make_shared<string>(boost::any_cast<string>(m["NativeSnapshotId"]));
    }
  }


  virtual ~DescribeBackupJobs2ResponseBodyBackupJobsBackupJobDetail() = default;
};
class DescribeBackupJobs2ResponseBodyBackupJobsBackupJobOtsDetailTableNames : public Darabonba::Model {
public:
  shared_ptr<vector<string>> tableName{};

  DescribeBackupJobs2ResponseBodyBackupJobsBackupJobOtsDetailTableNames() {}

  explicit DescribeBackupJobs2ResponseBodyBackupJobsBackupJobOtsDetailTableNames(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TableName"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TableName"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tableName = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeBackupJobs2ResponseBodyBackupJobsBackupJobOtsDetailTableNames() = default;
};
class DescribeBackupJobs2ResponseBodyBackupJobsBackupJobOtsDetail : public Darabonba::Model {
public:
  shared_ptr<DescribeBackupJobs2ResponseBodyBackupJobsBackupJobOtsDetailTableNames> tableNames{};

  DescribeBackupJobs2ResponseBodyBackupJobsBackupJobOtsDetail() {}

  explicit DescribeBackupJobs2ResponseBodyBackupJobsBackupJobOtsDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tableNames) {
      res["TableNames"] = tableNames ? boost::any(tableNames->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TableNames") != m.end() && !m["TableNames"].empty()) {
      if (typeid(map<string, boost::any>) == m["TableNames"].type()) {
        DescribeBackupJobs2ResponseBodyBackupJobsBackupJobOtsDetailTableNames model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TableNames"]));
        tableNames = make_shared<DescribeBackupJobs2ResponseBodyBackupJobsBackupJobOtsDetailTableNames>(model1);
      }
    }
  }


  virtual ~DescribeBackupJobs2ResponseBodyBackupJobsBackupJobOtsDetail() = default;
};
class DescribeBackupJobs2ResponseBodyBackupJobsBackupJobPaths : public Darabonba::Model {
public:
  shared_ptr<vector<string>> path{};

  DescribeBackupJobs2ResponseBodyBackupJobsBackupJobPaths() {}

  explicit DescribeBackupJobs2ResponseBodyBackupJobsBackupJobPaths(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (path) {
      res["Path"] = boost::any(*path);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Path"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Path"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      path = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeBackupJobs2ResponseBodyBackupJobsBackupJobPaths() = default;
};
class DescribeBackupJobs2ResponseBodyBackupJobsBackupJob : public Darabonba::Model {
public:
  shared_ptr<long> actualBytes{};
  shared_ptr<long> actualFiles{};
  shared_ptr<long> actualItems{};
  shared_ptr<string> backupType{};
  shared_ptr<string> bucket{};
  shared_ptr<long> bytesDone{};
  shared_ptr<long> bytesTotal{};
  shared_ptr<string> changeListPath{};
  shared_ptr<string> clientId{};
  shared_ptr<long> completeTime{};
  shared_ptr<long> createTime{};
  shared_ptr<long> createdTime{};
  shared_ptr<string> crossAccountRoleName{};
  shared_ptr<string> crossAccountType{};
  shared_ptr<long> crossAccountUserId{};
  shared_ptr<string> destDataSourceDetail{};
  shared_ptr<string> destDataSourceId{};
  shared_ptr<string> destSourceType{};
  shared_ptr<DescribeBackupJobs2ResponseBodyBackupJobsBackupJobDetail> detail{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> exclude{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<long> filesDone{};
  shared_ptr<long> filesTotal{};
  shared_ptr<string> identifier{};
  shared_ptr<string> include{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<long> itemsDone{};
  shared_ptr<long> itemsTotal{};
  shared_ptr<string> jobId{};
  shared_ptr<string> jobName{};
  shared_ptr<string> options{};
  shared_ptr<DescribeBackupJobs2ResponseBodyBackupJobsBackupJobOtsDetail> otsDetail{};
  shared_ptr<DescribeBackupJobs2ResponseBodyBackupJobsBackupJobPaths> paths{};
  shared_ptr<string> planId{};
  shared_ptr<string> prefix{};
  shared_ptr<long> progress{};
  shared_ptr<string> sourceType{};
  shared_ptr<long> speed{};
  shared_ptr<string> speedLimit{};
  shared_ptr<long> startTime{};
  shared_ptr<string> status{};
  shared_ptr<string> tableName{};
  shared_ptr<long> updatedTime{};
  shared_ptr<string> vaultId{};

  DescribeBackupJobs2ResponseBodyBackupJobsBackupJob() {}

  explicit DescribeBackupJobs2ResponseBodyBackupJobsBackupJob(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actualBytes) {
      res["ActualBytes"] = boost::any(*actualBytes);
    }
    if (actualFiles) {
      res["ActualFiles"] = boost::any(*actualFiles);
    }
    if (actualItems) {
      res["ActualItems"] = boost::any(*actualItems);
    }
    if (backupType) {
      res["BackupType"] = boost::any(*backupType);
    }
    if (bucket) {
      res["Bucket"] = boost::any(*bucket);
    }
    if (bytesDone) {
      res["BytesDone"] = boost::any(*bytesDone);
    }
    if (bytesTotal) {
      res["BytesTotal"] = boost::any(*bytesTotal);
    }
    if (changeListPath) {
      res["ChangeListPath"] = boost::any(*changeListPath);
    }
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (completeTime) {
      res["CompleteTime"] = boost::any(*completeTime);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (crossAccountRoleName) {
      res["CrossAccountRoleName"] = boost::any(*crossAccountRoleName);
    }
    if (crossAccountType) {
      res["CrossAccountType"] = boost::any(*crossAccountType);
    }
    if (crossAccountUserId) {
      res["CrossAccountUserId"] = boost::any(*crossAccountUserId);
    }
    if (destDataSourceDetail) {
      res["DestDataSourceDetail"] = boost::any(*destDataSourceDetail);
    }
    if (destDataSourceId) {
      res["DestDataSourceId"] = boost::any(*destDataSourceId);
    }
    if (destSourceType) {
      res["DestSourceType"] = boost::any(*destSourceType);
    }
    if (detail) {
      res["Detail"] = detail ? boost::any(detail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (exclude) {
      res["Exclude"] = boost::any(*exclude);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (filesDone) {
      res["FilesDone"] = boost::any(*filesDone);
    }
    if (filesTotal) {
      res["FilesTotal"] = boost::any(*filesTotal);
    }
    if (identifier) {
      res["Identifier"] = boost::any(*identifier);
    }
    if (include) {
      res["Include"] = boost::any(*include);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (itemsDone) {
      res["ItemsDone"] = boost::any(*itemsDone);
    }
    if (itemsTotal) {
      res["ItemsTotal"] = boost::any(*itemsTotal);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (jobName) {
      res["JobName"] = boost::any(*jobName);
    }
    if (options) {
      res["Options"] = boost::any(*options);
    }
    if (otsDetail) {
      res["OtsDetail"] = otsDetail ? boost::any(otsDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (paths) {
      res["Paths"] = paths ? boost::any(paths->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (planId) {
      res["PlanId"] = boost::any(*planId);
    }
    if (prefix) {
      res["Prefix"] = boost::any(*prefix);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (speed) {
      res["Speed"] = boost::any(*speed);
    }
    if (speedLimit) {
      res["SpeedLimit"] = boost::any(*speedLimit);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    if (updatedTime) {
      res["UpdatedTime"] = boost::any(*updatedTime);
    }
    if (vaultId) {
      res["VaultId"] = boost::any(*vaultId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActualBytes") != m.end() && !m["ActualBytes"].empty()) {
      actualBytes = make_shared<long>(boost::any_cast<long>(m["ActualBytes"]));
    }
    if (m.find("ActualFiles") != m.end() && !m["ActualFiles"].empty()) {
      actualFiles = make_shared<long>(boost::any_cast<long>(m["ActualFiles"]));
    }
    if (m.find("ActualItems") != m.end() && !m["ActualItems"].empty()) {
      actualItems = make_shared<long>(boost::any_cast<long>(m["ActualItems"]));
    }
    if (m.find("BackupType") != m.end() && !m["BackupType"].empty()) {
      backupType = make_shared<string>(boost::any_cast<string>(m["BackupType"]));
    }
    if (m.find("Bucket") != m.end() && !m["Bucket"].empty()) {
      bucket = make_shared<string>(boost::any_cast<string>(m["Bucket"]));
    }
    if (m.find("BytesDone") != m.end() && !m["BytesDone"].empty()) {
      bytesDone = make_shared<long>(boost::any_cast<long>(m["BytesDone"]));
    }
    if (m.find("BytesTotal") != m.end() && !m["BytesTotal"].empty()) {
      bytesTotal = make_shared<long>(boost::any_cast<long>(m["BytesTotal"]));
    }
    if (m.find("ChangeListPath") != m.end() && !m["ChangeListPath"].empty()) {
      changeListPath = make_shared<string>(boost::any_cast<string>(m["ChangeListPath"]));
    }
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("CompleteTime") != m.end() && !m["CompleteTime"].empty()) {
      completeTime = make_shared<long>(boost::any_cast<long>(m["CompleteTime"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<long>(boost::any_cast<long>(m["CreatedTime"]));
    }
    if (m.find("CrossAccountRoleName") != m.end() && !m["CrossAccountRoleName"].empty()) {
      crossAccountRoleName = make_shared<string>(boost::any_cast<string>(m["CrossAccountRoleName"]));
    }
    if (m.find("CrossAccountType") != m.end() && !m["CrossAccountType"].empty()) {
      crossAccountType = make_shared<string>(boost::any_cast<string>(m["CrossAccountType"]));
    }
    if (m.find("CrossAccountUserId") != m.end() && !m["CrossAccountUserId"].empty()) {
      crossAccountUserId = make_shared<long>(boost::any_cast<long>(m["CrossAccountUserId"]));
    }
    if (m.find("DestDataSourceDetail") != m.end() && !m["DestDataSourceDetail"].empty()) {
      destDataSourceDetail = make_shared<string>(boost::any_cast<string>(m["DestDataSourceDetail"]));
    }
    if (m.find("DestDataSourceId") != m.end() && !m["DestDataSourceId"].empty()) {
      destDataSourceId = make_shared<string>(boost::any_cast<string>(m["DestDataSourceId"]));
    }
    if (m.find("DestSourceType") != m.end() && !m["DestSourceType"].empty()) {
      destSourceType = make_shared<string>(boost::any_cast<string>(m["DestSourceType"]));
    }
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      if (typeid(map<string, boost::any>) == m["Detail"].type()) {
        DescribeBackupJobs2ResponseBodyBackupJobsBackupJobDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Detail"]));
        detail = make_shared<DescribeBackupJobs2ResponseBodyBackupJobsBackupJobDetail>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Exclude") != m.end() && !m["Exclude"].empty()) {
      exclude = make_shared<string>(boost::any_cast<string>(m["Exclude"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("FilesDone") != m.end() && !m["FilesDone"].empty()) {
      filesDone = make_shared<long>(boost::any_cast<long>(m["FilesDone"]));
    }
    if (m.find("FilesTotal") != m.end() && !m["FilesTotal"].empty()) {
      filesTotal = make_shared<long>(boost::any_cast<long>(m["FilesTotal"]));
    }
    if (m.find("Identifier") != m.end() && !m["Identifier"].empty()) {
      identifier = make_shared<string>(boost::any_cast<string>(m["Identifier"]));
    }
    if (m.find("Include") != m.end() && !m["Include"].empty()) {
      include = make_shared<string>(boost::any_cast<string>(m["Include"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("ItemsDone") != m.end() && !m["ItemsDone"].empty()) {
      itemsDone = make_shared<long>(boost::any_cast<long>(m["ItemsDone"]));
    }
    if (m.find("ItemsTotal") != m.end() && !m["ItemsTotal"].empty()) {
      itemsTotal = make_shared<long>(boost::any_cast<long>(m["ItemsTotal"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("JobName") != m.end() && !m["JobName"].empty()) {
      jobName = make_shared<string>(boost::any_cast<string>(m["JobName"]));
    }
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      options = make_shared<string>(boost::any_cast<string>(m["Options"]));
    }
    if (m.find("OtsDetail") != m.end() && !m["OtsDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["OtsDetail"].type()) {
        DescribeBackupJobs2ResponseBodyBackupJobsBackupJobOtsDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OtsDetail"]));
        otsDetail = make_shared<DescribeBackupJobs2ResponseBodyBackupJobsBackupJobOtsDetail>(model1);
      }
    }
    if (m.find("Paths") != m.end() && !m["Paths"].empty()) {
      if (typeid(map<string, boost::any>) == m["Paths"].type()) {
        DescribeBackupJobs2ResponseBodyBackupJobsBackupJobPaths model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Paths"]));
        paths = make_shared<DescribeBackupJobs2ResponseBodyBackupJobsBackupJobPaths>(model1);
      }
    }
    if (m.find("PlanId") != m.end() && !m["PlanId"].empty()) {
      planId = make_shared<string>(boost::any_cast<string>(m["PlanId"]));
    }
    if (m.find("Prefix") != m.end() && !m["Prefix"].empty()) {
      prefix = make_shared<string>(boost::any_cast<string>(m["Prefix"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<long>(boost::any_cast<long>(m["Progress"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("Speed") != m.end() && !m["Speed"].empty()) {
      speed = make_shared<long>(boost::any_cast<long>(m["Speed"]));
    }
    if (m.find("SpeedLimit") != m.end() && !m["SpeedLimit"].empty()) {
      speedLimit = make_shared<string>(boost::any_cast<string>(m["SpeedLimit"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
    if (m.find("UpdatedTime") != m.end() && !m["UpdatedTime"].empty()) {
      updatedTime = make_shared<long>(boost::any_cast<long>(m["UpdatedTime"]));
    }
    if (m.find("VaultId") != m.end() && !m["VaultId"].empty()) {
      vaultId = make_shared<string>(boost::any_cast<string>(m["VaultId"]));
    }
  }


  virtual ~DescribeBackupJobs2ResponseBodyBackupJobsBackupJob() = default;
};
class DescribeBackupJobs2ResponseBodyBackupJobs : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeBackupJobs2ResponseBodyBackupJobsBackupJob>> backupJob{};

  DescribeBackupJobs2ResponseBodyBackupJobs() {}

  explicit DescribeBackupJobs2ResponseBodyBackupJobs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupJob) {
      vector<boost::any> temp1;
      for(auto item1:*backupJob){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BackupJob"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupJob") != m.end() && !m["BackupJob"].empty()) {
      if (typeid(vector<boost::any>) == m["BackupJob"].type()) {
        vector<DescribeBackupJobs2ResponseBodyBackupJobsBackupJob> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BackupJob"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeBackupJobs2ResponseBodyBackupJobsBackupJob model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        backupJob = make_shared<vector<DescribeBackupJobs2ResponseBodyBackupJobsBackupJob>>(expect1);
      }
    }
  }


  virtual ~DescribeBackupJobs2ResponseBodyBackupJobs() = default;
};
class DescribeBackupJobs2ResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeBackupJobs2ResponseBodyBackupJobs> backupJobs{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  DescribeBackupJobs2ResponseBody() {}

  explicit DescribeBackupJobs2ResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupJobs) {
      res["BackupJobs"] = backupJobs ? boost::any(backupJobs->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupJobs") != m.end() && !m["BackupJobs"].empty()) {
      if (typeid(map<string, boost::any>) == m["BackupJobs"].type()) {
        DescribeBackupJobs2ResponseBodyBackupJobs model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BackupJobs"]));
        backupJobs = make_shared<DescribeBackupJobs2ResponseBodyBackupJobs>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
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
  }


  virtual ~DescribeBackupJobs2ResponseBody() = default;
};
class DescribeBackupJobs2Response : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeBackupJobs2ResponseBody> body{};

  DescribeBackupJobs2Response() {}

  explicit DescribeBackupJobs2Response(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeBackupJobs2ResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeBackupJobs2ResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeBackupJobs2Response() = default;
};
class DescribeBackupPlansRequestFilters : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<vector<string>> values{};

  DescribeBackupPlansRequestFilters() {}

  explicit DescribeBackupPlansRequestFilters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (values) {
      res["Values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeBackupPlansRequestFilters() = default;
};
class DescribeBackupPlansRequest : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeBackupPlansRequestFilters>> filters{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> sourceType{};

  DescribeBackupPlansRequest() {}

  explicit DescribeBackupPlansRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filters) {
      vector<boost::any> temp1;
      for(auto item1:*filters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Filters"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Filters") != m.end() && !m["Filters"].empty()) {
      if (typeid(vector<boost::any>) == m["Filters"].type()) {
        vector<DescribeBackupPlansRequestFilters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Filters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeBackupPlansRequestFilters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filters = make_shared<vector<DescribeBackupPlansRequestFilters>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
  }


  virtual ~DescribeBackupPlansRequest() = default;
};
class DescribeBackupPlansResponseBodyBackupPlansBackupPlanOtsDetailTableNames : public Darabonba::Model {
public:
  shared_ptr<vector<string>> tableName{};

  DescribeBackupPlansResponseBodyBackupPlansBackupPlanOtsDetailTableNames() {}

  explicit DescribeBackupPlansResponseBodyBackupPlansBackupPlanOtsDetailTableNames(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TableName"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TableName"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tableName = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeBackupPlansResponseBodyBackupPlansBackupPlanOtsDetailTableNames() = default;
};
class DescribeBackupPlansResponseBodyBackupPlansBackupPlanOtsDetail : public Darabonba::Model {
public:
  shared_ptr<DescribeBackupPlansResponseBodyBackupPlansBackupPlanOtsDetailTableNames> tableNames{};

  DescribeBackupPlansResponseBodyBackupPlansBackupPlanOtsDetail() {}

  explicit DescribeBackupPlansResponseBodyBackupPlansBackupPlanOtsDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tableNames) {
      res["TableNames"] = tableNames ? boost::any(tableNames->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TableNames") != m.end() && !m["TableNames"].empty()) {
      if (typeid(map<string, boost::any>) == m["TableNames"].type()) {
        DescribeBackupPlansResponseBodyBackupPlansBackupPlanOtsDetailTableNames model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TableNames"]));
        tableNames = make_shared<DescribeBackupPlansResponseBodyBackupPlansBackupPlanOtsDetailTableNames>(model1);
      }
    }
  }


  virtual ~DescribeBackupPlansResponseBodyBackupPlansBackupPlanOtsDetail() = default;
};
class DescribeBackupPlansResponseBodyBackupPlansBackupPlanPaths : public Darabonba::Model {
public:
  shared_ptr<vector<string>> path{};

  DescribeBackupPlansResponseBodyBackupPlansBackupPlanPaths() {}

  explicit DescribeBackupPlansResponseBodyBackupPlansBackupPlanPaths(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (path) {
      res["Path"] = boost::any(*path);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Path"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Path"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      path = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeBackupPlansResponseBodyBackupPlansBackupPlanPaths() = default;
};
class DescribeBackupPlansResponseBodyBackupPlansBackupPlanResourcesResource : public Darabonba::Model {
public:
  shared_ptr<string> extra{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> sourceType{};

  DescribeBackupPlansResponseBodyBackupPlansBackupPlanResourcesResource() {}

  explicit DescribeBackupPlansResponseBodyBackupPlansBackupPlanResourcesResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (extra) {
      res["Extra"] = boost::any(*extra);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Extra") != m.end() && !m["Extra"].empty()) {
      extra = make_shared<string>(boost::any_cast<string>(m["Extra"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
  }


  virtual ~DescribeBackupPlansResponseBodyBackupPlansBackupPlanResourcesResource() = default;
};
class DescribeBackupPlansResponseBodyBackupPlansBackupPlanResources : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeBackupPlansResponseBodyBackupPlansBackupPlanResourcesResource>> resource{};

  DescribeBackupPlansResponseBodyBackupPlansBackupPlanResources() {}

  explicit DescribeBackupPlansResponseBodyBackupPlansBackupPlanResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resource) {
      vector<boost::any> temp1;
      for(auto item1:*resource){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Resource"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Resource") != m.end() && !m["Resource"].empty()) {
      if (typeid(vector<boost::any>) == m["Resource"].type()) {
        vector<DescribeBackupPlansResponseBodyBackupPlansBackupPlanResourcesResource> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Resource"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeBackupPlansResponseBodyBackupPlansBackupPlanResourcesResource model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resource = make_shared<vector<DescribeBackupPlansResponseBodyBackupPlansBackupPlanResourcesResource>>(expect1);
      }
    }
  }


  virtual ~DescribeBackupPlansResponseBodyBackupPlansBackupPlanResources() = default;
};
class DescribeBackupPlansResponseBodyBackupPlansBackupPlanRulesRule : public Darabonba::Model {
public:
  shared_ptr<string> backupType{};
  shared_ptr<string> destinationRegionId{};
  shared_ptr<long> destinationRetention{};
  shared_ptr<bool> disabled{};
  shared_ptr<bool> doCopy{};
  shared_ptr<long> retention{};
  shared_ptr<string> ruleId{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> schedule{};

  DescribeBackupPlansResponseBodyBackupPlansBackupPlanRulesRule() {}

  explicit DescribeBackupPlansResponseBodyBackupPlansBackupPlanRulesRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupType) {
      res["BackupType"] = boost::any(*backupType);
    }
    if (destinationRegionId) {
      res["DestinationRegionId"] = boost::any(*destinationRegionId);
    }
    if (destinationRetention) {
      res["DestinationRetention"] = boost::any(*destinationRetention);
    }
    if (disabled) {
      res["Disabled"] = boost::any(*disabled);
    }
    if (doCopy) {
      res["DoCopy"] = boost::any(*doCopy);
    }
    if (retention) {
      res["Retention"] = boost::any(*retention);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (schedule) {
      res["Schedule"] = boost::any(*schedule);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupType") != m.end() && !m["BackupType"].empty()) {
      backupType = make_shared<string>(boost::any_cast<string>(m["BackupType"]));
    }
    if (m.find("DestinationRegionId") != m.end() && !m["DestinationRegionId"].empty()) {
      destinationRegionId = make_shared<string>(boost::any_cast<string>(m["DestinationRegionId"]));
    }
    if (m.find("DestinationRetention") != m.end() && !m["DestinationRetention"].empty()) {
      destinationRetention = make_shared<long>(boost::any_cast<long>(m["DestinationRetention"]));
    }
    if (m.find("Disabled") != m.end() && !m["Disabled"].empty()) {
      disabled = make_shared<bool>(boost::any_cast<bool>(m["Disabled"]));
    }
    if (m.find("DoCopy") != m.end() && !m["DoCopy"].empty()) {
      doCopy = make_shared<bool>(boost::any_cast<bool>(m["DoCopy"]));
    }
    if (m.find("Retention") != m.end() && !m["Retention"].empty()) {
      retention = make_shared<long>(boost::any_cast<long>(m["Retention"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("Schedule") != m.end() && !m["Schedule"].empty()) {
      schedule = make_shared<string>(boost::any_cast<string>(m["Schedule"]));
    }
  }


  virtual ~DescribeBackupPlansResponseBodyBackupPlansBackupPlanRulesRule() = default;
};
class DescribeBackupPlansResponseBodyBackupPlansBackupPlanRules : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeBackupPlansResponseBodyBackupPlansBackupPlanRulesRule>> rule{};

  DescribeBackupPlansResponseBodyBackupPlansBackupPlanRules() {}

  explicit DescribeBackupPlansResponseBodyBackupPlansBackupPlanRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rule) {
      vector<boost::any> temp1;
      for(auto item1:*rule){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Rule"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Rule") != m.end() && !m["Rule"].empty()) {
      if (typeid(vector<boost::any>) == m["Rule"].type()) {
        vector<DescribeBackupPlansResponseBodyBackupPlansBackupPlanRulesRule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Rule"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeBackupPlansResponseBodyBackupPlansBackupPlanRulesRule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rule = make_shared<vector<DescribeBackupPlansResponseBodyBackupPlansBackupPlanRulesRule>>(expect1);
      }
    }
  }


  virtual ~DescribeBackupPlansResponseBodyBackupPlansBackupPlanRules() = default;
};
class DescribeBackupPlansResponseBodyBackupPlansBackupPlanTrialInfo : public Darabonba::Model {
public:
  shared_ptr<bool> keepAfterTrialExpiration{};
  shared_ptr<long> trialExpireTime{};
  shared_ptr<long> trialStartTime{};
  shared_ptr<long> trialVaultReleaseTime{};

  DescribeBackupPlansResponseBodyBackupPlansBackupPlanTrialInfo() {}

  explicit DescribeBackupPlansResponseBodyBackupPlansBackupPlanTrialInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keepAfterTrialExpiration) {
      res["KeepAfterTrialExpiration"] = boost::any(*keepAfterTrialExpiration);
    }
    if (trialExpireTime) {
      res["TrialExpireTime"] = boost::any(*trialExpireTime);
    }
    if (trialStartTime) {
      res["TrialStartTime"] = boost::any(*trialStartTime);
    }
    if (trialVaultReleaseTime) {
      res["TrialVaultReleaseTime"] = boost::any(*trialVaultReleaseTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeepAfterTrialExpiration") != m.end() && !m["KeepAfterTrialExpiration"].empty()) {
      keepAfterTrialExpiration = make_shared<bool>(boost::any_cast<bool>(m["KeepAfterTrialExpiration"]));
    }
    if (m.find("TrialExpireTime") != m.end() && !m["TrialExpireTime"].empty()) {
      trialExpireTime = make_shared<long>(boost::any_cast<long>(m["TrialExpireTime"]));
    }
    if (m.find("TrialStartTime") != m.end() && !m["TrialStartTime"].empty()) {
      trialStartTime = make_shared<long>(boost::any_cast<long>(m["TrialStartTime"]));
    }
    if (m.find("TrialVaultReleaseTime") != m.end() && !m["TrialVaultReleaseTime"].empty()) {
      trialVaultReleaseTime = make_shared<long>(boost::any_cast<long>(m["TrialVaultReleaseTime"]));
    }
  }


  virtual ~DescribeBackupPlansResponseBodyBackupPlansBackupPlanTrialInfo() = default;
};
class DescribeBackupPlansResponseBodyBackupPlansBackupPlan : public Darabonba::Model {
public:
  shared_ptr<string> backupSourceGroupId{};
  shared_ptr<string> backupType{};
  shared_ptr<string> bucket{};
  shared_ptr<string> changeListPath{};
  shared_ptr<string> clientId{};
  shared_ptr<string> clusterId{};
  shared_ptr<long> createTime{};
  shared_ptr<long> createdTime{};
  shared_ptr<string> crossAccountRoleName{};
  shared_ptr<string> crossAccountType{};
  shared_ptr<long> crossAccountUserId{};
  shared_ptr<string> dataSourceId{};
  shared_ptr<string> destDataSourceDetail{};
  shared_ptr<string> destDataSourceId{};
  shared_ptr<string> destSourceType{};
  shared_ptr<string> detail{};
  shared_ptr<bool> disabled{};
  shared_ptr<string> exclude{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> include{};
  shared_ptr<string> instanceGroupId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<long> keepLatestSnapshots{};
  shared_ptr<string> latestExecuteJobId{};
  shared_ptr<string> options{};
  shared_ptr<DescribeBackupPlansResponseBodyBackupPlansBackupPlanOtsDetail> otsDetail{};
  shared_ptr<DescribeBackupPlansResponseBodyBackupPlansBackupPlanPaths> paths{};
  shared_ptr<string> planId{};
  shared_ptr<string> planName{};
  shared_ptr<string> prefix{};
  shared_ptr<DescribeBackupPlansResponseBodyBackupPlansBackupPlanResources> resources{};
  shared_ptr<long> retention{};
  shared_ptr<DescribeBackupPlansResponseBodyBackupPlansBackupPlanRules> rules{};
  shared_ptr<string> schedule{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> speedLimit{};
  shared_ptr<DescribeBackupPlansResponseBodyBackupPlansBackupPlanTrialInfo> trialInfo{};
  shared_ptr<long> updatedTime{};
  shared_ptr<string> vaultId{};

  DescribeBackupPlansResponseBodyBackupPlansBackupPlan() {}

  explicit DescribeBackupPlansResponseBodyBackupPlansBackupPlan(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupSourceGroupId) {
      res["BackupSourceGroupId"] = boost::any(*backupSourceGroupId);
    }
    if (backupType) {
      res["BackupType"] = boost::any(*backupType);
    }
    if (bucket) {
      res["Bucket"] = boost::any(*bucket);
    }
    if (changeListPath) {
      res["ChangeListPath"] = boost::any(*changeListPath);
    }
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (crossAccountRoleName) {
      res["CrossAccountRoleName"] = boost::any(*crossAccountRoleName);
    }
    if (crossAccountType) {
      res["CrossAccountType"] = boost::any(*crossAccountType);
    }
    if (crossAccountUserId) {
      res["CrossAccountUserId"] = boost::any(*crossAccountUserId);
    }
    if (dataSourceId) {
      res["DataSourceId"] = boost::any(*dataSourceId);
    }
    if (destDataSourceDetail) {
      res["DestDataSourceDetail"] = boost::any(*destDataSourceDetail);
    }
    if (destDataSourceId) {
      res["DestDataSourceId"] = boost::any(*destDataSourceId);
    }
    if (destSourceType) {
      res["DestSourceType"] = boost::any(*destSourceType);
    }
    if (detail) {
      res["Detail"] = boost::any(*detail);
    }
    if (disabled) {
      res["Disabled"] = boost::any(*disabled);
    }
    if (exclude) {
      res["Exclude"] = boost::any(*exclude);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (include) {
      res["Include"] = boost::any(*include);
    }
    if (instanceGroupId) {
      res["InstanceGroupId"] = boost::any(*instanceGroupId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (keepLatestSnapshots) {
      res["KeepLatestSnapshots"] = boost::any(*keepLatestSnapshots);
    }
    if (latestExecuteJobId) {
      res["LatestExecuteJobId"] = boost::any(*latestExecuteJobId);
    }
    if (options) {
      res["Options"] = boost::any(*options);
    }
    if (otsDetail) {
      res["OtsDetail"] = otsDetail ? boost::any(otsDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (paths) {
      res["Paths"] = paths ? boost::any(paths->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (planId) {
      res["PlanId"] = boost::any(*planId);
    }
    if (planName) {
      res["PlanName"] = boost::any(*planName);
    }
    if (prefix) {
      res["Prefix"] = boost::any(*prefix);
    }
    if (resources) {
      res["Resources"] = resources ? boost::any(resources->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (retention) {
      res["Retention"] = boost::any(*retention);
    }
    if (rules) {
      res["Rules"] = rules ? boost::any(rules->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (schedule) {
      res["Schedule"] = boost::any(*schedule);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (speedLimit) {
      res["SpeedLimit"] = boost::any(*speedLimit);
    }
    if (trialInfo) {
      res["TrialInfo"] = trialInfo ? boost::any(trialInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (updatedTime) {
      res["UpdatedTime"] = boost::any(*updatedTime);
    }
    if (vaultId) {
      res["VaultId"] = boost::any(*vaultId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupSourceGroupId") != m.end() && !m["BackupSourceGroupId"].empty()) {
      backupSourceGroupId = make_shared<string>(boost::any_cast<string>(m["BackupSourceGroupId"]));
    }
    if (m.find("BackupType") != m.end() && !m["BackupType"].empty()) {
      backupType = make_shared<string>(boost::any_cast<string>(m["BackupType"]));
    }
    if (m.find("Bucket") != m.end() && !m["Bucket"].empty()) {
      bucket = make_shared<string>(boost::any_cast<string>(m["Bucket"]));
    }
    if (m.find("ChangeListPath") != m.end() && !m["ChangeListPath"].empty()) {
      changeListPath = make_shared<string>(boost::any_cast<string>(m["ChangeListPath"]));
    }
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<long>(boost::any_cast<long>(m["CreatedTime"]));
    }
    if (m.find("CrossAccountRoleName") != m.end() && !m["CrossAccountRoleName"].empty()) {
      crossAccountRoleName = make_shared<string>(boost::any_cast<string>(m["CrossAccountRoleName"]));
    }
    if (m.find("CrossAccountType") != m.end() && !m["CrossAccountType"].empty()) {
      crossAccountType = make_shared<string>(boost::any_cast<string>(m["CrossAccountType"]));
    }
    if (m.find("CrossAccountUserId") != m.end() && !m["CrossAccountUserId"].empty()) {
      crossAccountUserId = make_shared<long>(boost::any_cast<long>(m["CrossAccountUserId"]));
    }
    if (m.find("DataSourceId") != m.end() && !m["DataSourceId"].empty()) {
      dataSourceId = make_shared<string>(boost::any_cast<string>(m["DataSourceId"]));
    }
    if (m.find("DestDataSourceDetail") != m.end() && !m["DestDataSourceDetail"].empty()) {
      destDataSourceDetail = make_shared<string>(boost::any_cast<string>(m["DestDataSourceDetail"]));
    }
    if (m.find("DestDataSourceId") != m.end() && !m["DestDataSourceId"].empty()) {
      destDataSourceId = make_shared<string>(boost::any_cast<string>(m["DestDataSourceId"]));
    }
    if (m.find("DestSourceType") != m.end() && !m["DestSourceType"].empty()) {
      destSourceType = make_shared<string>(boost::any_cast<string>(m["DestSourceType"]));
    }
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      detail = make_shared<string>(boost::any_cast<string>(m["Detail"]));
    }
    if (m.find("Disabled") != m.end() && !m["Disabled"].empty()) {
      disabled = make_shared<bool>(boost::any_cast<bool>(m["Disabled"]));
    }
    if (m.find("Exclude") != m.end() && !m["Exclude"].empty()) {
      exclude = make_shared<string>(boost::any_cast<string>(m["Exclude"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("Include") != m.end() && !m["Include"].empty()) {
      include = make_shared<string>(boost::any_cast<string>(m["Include"]));
    }
    if (m.find("InstanceGroupId") != m.end() && !m["InstanceGroupId"].empty()) {
      instanceGroupId = make_shared<string>(boost::any_cast<string>(m["InstanceGroupId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("KeepLatestSnapshots") != m.end() && !m["KeepLatestSnapshots"].empty()) {
      keepLatestSnapshots = make_shared<long>(boost::any_cast<long>(m["KeepLatestSnapshots"]));
    }
    if (m.find("LatestExecuteJobId") != m.end() && !m["LatestExecuteJobId"].empty()) {
      latestExecuteJobId = make_shared<string>(boost::any_cast<string>(m["LatestExecuteJobId"]));
    }
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      options = make_shared<string>(boost::any_cast<string>(m["Options"]));
    }
    if (m.find("OtsDetail") != m.end() && !m["OtsDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["OtsDetail"].type()) {
        DescribeBackupPlansResponseBodyBackupPlansBackupPlanOtsDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OtsDetail"]));
        otsDetail = make_shared<DescribeBackupPlansResponseBodyBackupPlansBackupPlanOtsDetail>(model1);
      }
    }
    if (m.find("Paths") != m.end() && !m["Paths"].empty()) {
      if (typeid(map<string, boost::any>) == m["Paths"].type()) {
        DescribeBackupPlansResponseBodyBackupPlansBackupPlanPaths model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Paths"]));
        paths = make_shared<DescribeBackupPlansResponseBodyBackupPlansBackupPlanPaths>(model1);
      }
    }
    if (m.find("PlanId") != m.end() && !m["PlanId"].empty()) {
      planId = make_shared<string>(boost::any_cast<string>(m["PlanId"]));
    }
    if (m.find("PlanName") != m.end() && !m["PlanName"].empty()) {
      planName = make_shared<string>(boost::any_cast<string>(m["PlanName"]));
    }
    if (m.find("Prefix") != m.end() && !m["Prefix"].empty()) {
      prefix = make_shared<string>(boost::any_cast<string>(m["Prefix"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      if (typeid(map<string, boost::any>) == m["Resources"].type()) {
        DescribeBackupPlansResponseBodyBackupPlansBackupPlanResources model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Resources"]));
        resources = make_shared<DescribeBackupPlansResponseBodyBackupPlansBackupPlanResources>(model1);
      }
    }
    if (m.find("Retention") != m.end() && !m["Retention"].empty()) {
      retention = make_shared<long>(boost::any_cast<long>(m["Retention"]));
    }
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      if (typeid(map<string, boost::any>) == m["Rules"].type()) {
        DescribeBackupPlansResponseBodyBackupPlansBackupPlanRules model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Rules"]));
        rules = make_shared<DescribeBackupPlansResponseBodyBackupPlansBackupPlanRules>(model1);
      }
    }
    if (m.find("Schedule") != m.end() && !m["Schedule"].empty()) {
      schedule = make_shared<string>(boost::any_cast<string>(m["Schedule"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("SpeedLimit") != m.end() && !m["SpeedLimit"].empty()) {
      speedLimit = make_shared<string>(boost::any_cast<string>(m["SpeedLimit"]));
    }
    if (m.find("TrialInfo") != m.end() && !m["TrialInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["TrialInfo"].type()) {
        DescribeBackupPlansResponseBodyBackupPlansBackupPlanTrialInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TrialInfo"]));
        trialInfo = make_shared<DescribeBackupPlansResponseBodyBackupPlansBackupPlanTrialInfo>(model1);
      }
    }
    if (m.find("UpdatedTime") != m.end() && !m["UpdatedTime"].empty()) {
      updatedTime = make_shared<long>(boost::any_cast<long>(m["UpdatedTime"]));
    }
    if (m.find("VaultId") != m.end() && !m["VaultId"].empty()) {
      vaultId = make_shared<string>(boost::any_cast<string>(m["VaultId"]));
    }
  }


  virtual ~DescribeBackupPlansResponseBodyBackupPlansBackupPlan() = default;
};
class DescribeBackupPlansResponseBodyBackupPlans : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeBackupPlansResponseBodyBackupPlansBackupPlan>> backupPlan{};

  DescribeBackupPlansResponseBodyBackupPlans() {}

  explicit DescribeBackupPlansResponseBodyBackupPlans(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupPlan) {
      vector<boost::any> temp1;
      for(auto item1:*backupPlan){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BackupPlan"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupPlan") != m.end() && !m["BackupPlan"].empty()) {
      if (typeid(vector<boost::any>) == m["BackupPlan"].type()) {
        vector<DescribeBackupPlansResponseBodyBackupPlansBackupPlan> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BackupPlan"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeBackupPlansResponseBodyBackupPlansBackupPlan model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        backupPlan = make_shared<vector<DescribeBackupPlansResponseBodyBackupPlansBackupPlan>>(expect1);
      }
    }
  }


  virtual ~DescribeBackupPlansResponseBodyBackupPlans() = default;
};
class DescribeBackupPlansResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeBackupPlansResponseBodyBackupPlans> backupPlans{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  DescribeBackupPlansResponseBody() {}

  explicit DescribeBackupPlansResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupPlans) {
      res["BackupPlans"] = backupPlans ? boost::any(backupPlans->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupPlans") != m.end() && !m["BackupPlans"].empty()) {
      if (typeid(map<string, boost::any>) == m["BackupPlans"].type()) {
        DescribeBackupPlansResponseBodyBackupPlans model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BackupPlans"]));
        backupPlans = make_shared<DescribeBackupPlansResponseBodyBackupPlans>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
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
  }


  virtual ~DescribeBackupPlansResponseBody() = default;
};
class DescribeBackupPlansResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeBackupPlansResponseBody> body{};

  DescribeBackupPlansResponse() {}

  explicit DescribeBackupPlansResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeBackupPlansResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeBackupPlansResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeBackupPlansResponse() = default;
};
class DescribeClientsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientId{};
  shared_ptr<string> clientType{};
  shared_ptr<string> clusterId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> vaultId{};

  DescribeClientsRequest() {}

  explicit DescribeClientsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (clientType) {
      res["ClientType"] = boost::any(*clientType);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (vaultId) {
      res["VaultId"] = boost::any(*vaultId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("ClientType") != m.end() && !m["ClientType"].empty()) {
      clientType = make_shared<string>(boost::any_cast<string>(m["ClientType"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("VaultId") != m.end() && !m["VaultId"].empty()) {
      vaultId = make_shared<string>(boost::any_cast<string>(m["VaultId"]));
    }
  }


  virtual ~DescribeClientsRequest() = default;
};
class DescribeClientsResponseBodyClientsClient : public Darabonba::Model {
public:
  shared_ptr<string> alertSetting{};
  shared_ptr<string> clientId{};
  shared_ptr<string> clientName{};
  shared_ptr<string> clientType{};
  shared_ptr<string> clientVersion{};
  shared_ptr<string> clusterId{};
  shared_ptr<long> createdTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> maxVersion{};
  shared_ptr<string> networkType{};
  shared_ptr<string> status{};
  shared_ptr<string> statusMessage{};
  shared_ptr<long> updatedTime{};
  shared_ptr<bool> useHttps{};
  shared_ptr<string> vaultId{};

  DescribeClientsResponseBodyClientsClient() {}

  explicit DescribeClientsResponseBodyClientsClient(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertSetting) {
      res["AlertSetting"] = boost::any(*alertSetting);
    }
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (clientName) {
      res["ClientName"] = boost::any(*clientName);
    }
    if (clientType) {
      res["ClientType"] = boost::any(*clientType);
    }
    if (clientVersion) {
      res["ClientVersion"] = boost::any(*clientVersion);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (maxVersion) {
      res["MaxVersion"] = boost::any(*maxVersion);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (statusMessage) {
      res["StatusMessage"] = boost::any(*statusMessage);
    }
    if (updatedTime) {
      res["UpdatedTime"] = boost::any(*updatedTime);
    }
    if (useHttps) {
      res["UseHttps"] = boost::any(*useHttps);
    }
    if (vaultId) {
      res["VaultId"] = boost::any(*vaultId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlertSetting") != m.end() && !m["AlertSetting"].empty()) {
      alertSetting = make_shared<string>(boost::any_cast<string>(m["AlertSetting"]));
    }
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("ClientName") != m.end() && !m["ClientName"].empty()) {
      clientName = make_shared<string>(boost::any_cast<string>(m["ClientName"]));
    }
    if (m.find("ClientType") != m.end() && !m["ClientType"].empty()) {
      clientType = make_shared<string>(boost::any_cast<string>(m["ClientType"]));
    }
    if (m.find("ClientVersion") != m.end() && !m["ClientVersion"].empty()) {
      clientVersion = make_shared<string>(boost::any_cast<string>(m["ClientVersion"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<long>(boost::any_cast<long>(m["CreatedTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("MaxVersion") != m.end() && !m["MaxVersion"].empty()) {
      maxVersion = make_shared<string>(boost::any_cast<string>(m["MaxVersion"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StatusMessage") != m.end() && !m["StatusMessage"].empty()) {
      statusMessage = make_shared<string>(boost::any_cast<string>(m["StatusMessage"]));
    }
    if (m.find("UpdatedTime") != m.end() && !m["UpdatedTime"].empty()) {
      updatedTime = make_shared<long>(boost::any_cast<long>(m["UpdatedTime"]));
    }
    if (m.find("UseHttps") != m.end() && !m["UseHttps"].empty()) {
      useHttps = make_shared<bool>(boost::any_cast<bool>(m["UseHttps"]));
    }
    if (m.find("VaultId") != m.end() && !m["VaultId"].empty()) {
      vaultId = make_shared<string>(boost::any_cast<string>(m["VaultId"]));
    }
  }


  virtual ~DescribeClientsResponseBodyClientsClient() = default;
};
class DescribeClientsResponseBodyClients : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeClientsResponseBodyClientsClient>> client{};

  DescribeClientsResponseBodyClients() {}

  explicit DescribeClientsResponseBodyClients(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (client) {
      vector<boost::any> temp1;
      for(auto item1:*client){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Client"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Client") != m.end() && !m["Client"].empty()) {
      if (typeid(vector<boost::any>) == m["Client"].type()) {
        vector<DescribeClientsResponseBodyClientsClient> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Client"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeClientsResponseBodyClientsClient model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        client = make_shared<vector<DescribeClientsResponseBodyClientsClient>>(expect1);
      }
    }
  }


  virtual ~DescribeClientsResponseBodyClients() = default;
};
class DescribeClientsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeClientsResponseBodyClients> clients{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  DescribeClientsResponseBody() {}

  explicit DescribeClientsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clients) {
      res["Clients"] = clients ? boost::any(clients->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Clients") != m.end() && !m["Clients"].empty()) {
      if (typeid(map<string, boost::any>) == m["Clients"].type()) {
        DescribeClientsResponseBodyClients model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Clients"]));
        clients = make_shared<DescribeClientsResponseBodyClients>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
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
  }


  virtual ~DescribeClientsResponseBody() = default;
};
class DescribeClientsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeClientsResponseBody> body{};

  DescribeClientsResponse() {}

  explicit DescribeClientsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeClientsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeClientsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeClientsResponse() = default;
};
class DescribeContainerClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> identifier{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  DescribeContainerClusterRequest() {}

  explicit DescribeContainerClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (identifier) {
      res["Identifier"] = boost::any(*identifier);
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
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Identifier") != m.end() && !m["Identifier"].empty()) {
      identifier = make_shared<string>(boost::any_cast<string>(m["Identifier"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~DescribeContainerClusterRequest() = default;
};
class DescribeContainerClusterResponseBodyClusters : public Darabonba::Model {
public:
  shared_ptr<string> agentStatus{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterType{};
  shared_ptr<string> description{};
  shared_ptr<string> identifier{};
  shared_ptr<string> name{};
  shared_ptr<string> networkType{};
  shared_ptr<string> token{};

  DescribeContainerClusterResponseBodyClusters() {}

  explicit DescribeContainerClusterResponseBodyClusters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentStatus) {
      res["AgentStatus"] = boost::any(*agentStatus);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (clusterType) {
      res["ClusterType"] = boost::any(*clusterType);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (identifier) {
      res["Identifier"] = boost::any(*identifier);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentStatus") != m.end() && !m["AgentStatus"].empty()) {
      agentStatus = make_shared<string>(boost::any_cast<string>(m["AgentStatus"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ClusterType") != m.end() && !m["ClusterType"].empty()) {
      clusterType = make_shared<string>(boost::any_cast<string>(m["ClusterType"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Identifier") != m.end() && !m["Identifier"].empty()) {
      identifier = make_shared<string>(boost::any_cast<string>(m["Identifier"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
  }


  virtual ~DescribeContainerClusterResponseBodyClusters() = default;
};
class DescribeContainerClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeContainerClusterResponseBodyClusters>> clusters{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  DescribeContainerClusterResponseBody() {}

  explicit DescribeContainerClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusters) {
      vector<boost::any> temp1;
      for(auto item1:*clusters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Clusters"] = boost::any(temp1);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Clusters") != m.end() && !m["Clusters"].empty()) {
      if (typeid(vector<boost::any>) == m["Clusters"].type()) {
        vector<DescribeContainerClusterResponseBodyClusters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Clusters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeContainerClusterResponseBodyClusters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        clusters = make_shared<vector<DescribeContainerClusterResponseBodyClusters>>(expect1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
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
  }


  virtual ~DescribeContainerClusterResponseBody() = default;
};
class DescribeContainerClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeContainerClusterResponseBody> body{};

  DescribeContainerClusterResponse() {}

  explicit DescribeContainerClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeContainerClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeContainerClusterResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeContainerClusterResponse() = default;
};
class DescribeCrossAccountsRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  DescribeCrossAccountsRequest() {}

  explicit DescribeCrossAccountsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~DescribeCrossAccountsRequest() = default;
};
class DescribeCrossAccountsResponseBodyCrossAccountsCrossAccount : public Darabonba::Model {
public:
  shared_ptr<string> alias{};
  shared_ptr<long> createdTime{};
  shared_ptr<string> crossAccountRoleName{};
  shared_ptr<long> crossAccountUserId{};
  shared_ptr<long> id{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> updatedTime{};

  DescribeCrossAccountsResponseBodyCrossAccountsCrossAccount() {}

  explicit DescribeCrossAccountsResponseBodyCrossAccountsCrossAccount(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alias) {
      res["Alias"] = boost::any(*alias);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (crossAccountRoleName) {
      res["CrossAccountRoleName"] = boost::any(*crossAccountRoleName);
    }
    if (crossAccountUserId) {
      res["CrossAccountUserId"] = boost::any(*crossAccountUserId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (updatedTime) {
      res["UpdatedTime"] = boost::any(*updatedTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Alias") != m.end() && !m["Alias"].empty()) {
      alias = make_shared<string>(boost::any_cast<string>(m["Alias"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<long>(boost::any_cast<long>(m["CreatedTime"]));
    }
    if (m.find("CrossAccountRoleName") != m.end() && !m["CrossAccountRoleName"].empty()) {
      crossAccountRoleName = make_shared<string>(boost::any_cast<string>(m["CrossAccountRoleName"]));
    }
    if (m.find("CrossAccountUserId") != m.end() && !m["CrossAccountUserId"].empty()) {
      crossAccountUserId = make_shared<long>(boost::any_cast<long>(m["CrossAccountUserId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("UpdatedTime") != m.end() && !m["UpdatedTime"].empty()) {
      updatedTime = make_shared<long>(boost::any_cast<long>(m["UpdatedTime"]));
    }
  }


  virtual ~DescribeCrossAccountsResponseBodyCrossAccountsCrossAccount() = default;
};
class DescribeCrossAccountsResponseBodyCrossAccounts : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeCrossAccountsResponseBodyCrossAccountsCrossAccount>> crossAccount{};

  DescribeCrossAccountsResponseBodyCrossAccounts() {}

  explicit DescribeCrossAccountsResponseBodyCrossAccounts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (crossAccount) {
      vector<boost::any> temp1;
      for(auto item1:*crossAccount){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CrossAccount"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CrossAccount") != m.end() && !m["CrossAccount"].empty()) {
      if (typeid(vector<boost::any>) == m["CrossAccount"].type()) {
        vector<DescribeCrossAccountsResponseBodyCrossAccountsCrossAccount> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CrossAccount"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCrossAccountsResponseBodyCrossAccountsCrossAccount model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        crossAccount = make_shared<vector<DescribeCrossAccountsResponseBodyCrossAccountsCrossAccount>>(expect1);
      }
    }
  }


  virtual ~DescribeCrossAccountsResponseBodyCrossAccounts() = default;
};
class DescribeCrossAccountsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DescribeCrossAccountsResponseBodyCrossAccounts> crossAccounts{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  DescribeCrossAccountsResponseBody() {}

  explicit DescribeCrossAccountsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (crossAccounts) {
      res["CrossAccounts"] = crossAccounts ? boost::any(crossAccounts->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("CrossAccounts") != m.end() && !m["CrossAccounts"].empty()) {
      if (typeid(map<string, boost::any>) == m["CrossAccounts"].type()) {
        DescribeCrossAccountsResponseBodyCrossAccounts model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CrossAccounts"]));
        crossAccounts = make_shared<DescribeCrossAccountsResponseBodyCrossAccounts>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
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
  }


  virtual ~DescribeCrossAccountsResponseBody() = default;
};
class DescribeCrossAccountsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeCrossAccountsResponseBody> body{};

  DescribeCrossAccountsResponse() {}

  explicit DescribeCrossAccountsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCrossAccountsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCrossAccountsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCrossAccountsResponse() = default;
};
class DescribeHanaBackupPlansRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> databaseName{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> vaultId{};

  DescribeHanaBackupPlansRequest() {}

  explicit DescribeHanaBackupPlansRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (databaseName) {
      res["DatabaseName"] = boost::any(*databaseName);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (vaultId) {
      res["VaultId"] = boost::any(*vaultId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("DatabaseName") != m.end() && !m["DatabaseName"].empty()) {
      databaseName = make_shared<string>(boost::any_cast<string>(m["DatabaseName"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("VaultId") != m.end() && !m["VaultId"].empty()) {
      vaultId = make_shared<string>(boost::any_cast<string>(m["VaultId"]));
    }
  }


  virtual ~DescribeHanaBackupPlansRequest() = default;
};
class DescribeHanaBackupPlansResponseBodyHanaBackupPlansHanaBackupPlan : public Darabonba::Model {
public:
  shared_ptr<string> backupPrefix{};
  shared_ptr<string> backupType{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> databaseName{};
  shared_ptr<bool> disabled{};
  shared_ptr<string> planId{};
  shared_ptr<string> planName{};
  shared_ptr<string> schedule{};
  shared_ptr<string> vaultId{};

  DescribeHanaBackupPlansResponseBodyHanaBackupPlansHanaBackupPlan() {}

  explicit DescribeHanaBackupPlansResponseBodyHanaBackupPlansHanaBackupPlan(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupPrefix) {
      res["BackupPrefix"] = boost::any(*backupPrefix);
    }
    if (backupType) {
      res["BackupType"] = boost::any(*backupType);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (databaseName) {
      res["DatabaseName"] = boost::any(*databaseName);
    }
    if (disabled) {
      res["Disabled"] = boost::any(*disabled);
    }
    if (planId) {
      res["PlanId"] = boost::any(*planId);
    }
    if (planName) {
      res["PlanName"] = boost::any(*planName);
    }
    if (schedule) {
      res["Schedule"] = boost::any(*schedule);
    }
    if (vaultId) {
      res["VaultId"] = boost::any(*vaultId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupPrefix") != m.end() && !m["BackupPrefix"].empty()) {
      backupPrefix = make_shared<string>(boost::any_cast<string>(m["BackupPrefix"]));
    }
    if (m.find("BackupType") != m.end() && !m["BackupType"].empty()) {
      backupType = make_shared<string>(boost::any_cast<string>(m["BackupType"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("DatabaseName") != m.end() && !m["DatabaseName"].empty()) {
      databaseName = make_shared<string>(boost::any_cast<string>(m["DatabaseName"]));
    }
    if (m.find("Disabled") != m.end() && !m["Disabled"].empty()) {
      disabled = make_shared<bool>(boost::any_cast<bool>(m["Disabled"]));
    }
    if (m.find("PlanId") != m.end() && !m["PlanId"].empty()) {
      planId = make_shared<string>(boost::any_cast<string>(m["PlanId"]));
    }
    if (m.find("PlanName") != m.end() && !m["PlanName"].empty()) {
      planName = make_shared<string>(boost::any_cast<string>(m["PlanName"]));
    }
    if (m.find("Schedule") != m.end() && !m["Schedule"].empty()) {
      schedule = make_shared<string>(boost::any_cast<string>(m["Schedule"]));
    }
    if (m.find("VaultId") != m.end() && !m["VaultId"].empty()) {
      vaultId = make_shared<string>(boost::any_cast<string>(m["VaultId"]));
    }
  }


  virtual ~DescribeHanaBackupPlansResponseBodyHanaBackupPlansHanaBackupPlan() = default;
};
class DescribeHanaBackupPlansResponseBodyHanaBackupPlans : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeHanaBackupPlansResponseBodyHanaBackupPlansHanaBackupPlan>> hanaBackupPlan{};

  DescribeHanaBackupPlansResponseBodyHanaBackupPlans() {}

  explicit DescribeHanaBackupPlansResponseBodyHanaBackupPlans(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hanaBackupPlan) {
      vector<boost::any> temp1;
      for(auto item1:*hanaBackupPlan){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HanaBackupPlan"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HanaBackupPlan") != m.end() && !m["HanaBackupPlan"].empty()) {
      if (typeid(vector<boost::any>) == m["HanaBackupPlan"].type()) {
        vector<DescribeHanaBackupPlansResponseBodyHanaBackupPlansHanaBackupPlan> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HanaBackupPlan"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeHanaBackupPlansResponseBodyHanaBackupPlansHanaBackupPlan model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hanaBackupPlan = make_shared<vector<DescribeHanaBackupPlansResponseBodyHanaBackupPlansHanaBackupPlan>>(expect1);
      }
    }
  }


  virtual ~DescribeHanaBackupPlansResponseBodyHanaBackupPlans() = default;
};
class DescribeHanaBackupPlansResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DescribeHanaBackupPlansResponseBodyHanaBackupPlans> hanaBackupPlans{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  DescribeHanaBackupPlansResponseBody() {}

  explicit DescribeHanaBackupPlansResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (hanaBackupPlans) {
      res["HanaBackupPlans"] = hanaBackupPlans ? boost::any(hanaBackupPlans->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HanaBackupPlans") != m.end() && !m["HanaBackupPlans"].empty()) {
      if (typeid(map<string, boost::any>) == m["HanaBackupPlans"].type()) {
        DescribeHanaBackupPlansResponseBodyHanaBackupPlans model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HanaBackupPlans"]));
        hanaBackupPlans = make_shared<DescribeHanaBackupPlansResponseBodyHanaBackupPlans>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
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
  }


  virtual ~DescribeHanaBackupPlansResponseBody() = default;
};
class DescribeHanaBackupPlansResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeHanaBackupPlansResponseBody> body{};

  DescribeHanaBackupPlansResponse() {}

  explicit DescribeHanaBackupPlansResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeHanaBackupPlansResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeHanaBackupPlansResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeHanaBackupPlansResponse() = default;
};
class DescribeHanaBackupSettingRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> databaseName{};
  shared_ptr<string> vaultId{};

  DescribeHanaBackupSettingRequest() {}

  explicit DescribeHanaBackupSettingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (databaseName) {
      res["DatabaseName"] = boost::any(*databaseName);
    }
    if (vaultId) {
      res["VaultId"] = boost::any(*vaultId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("DatabaseName") != m.end() && !m["DatabaseName"].empty()) {
      databaseName = make_shared<string>(boost::any_cast<string>(m["DatabaseName"]));
    }
    if (m.find("VaultId") != m.end() && !m["VaultId"].empty()) {
      vaultId = make_shared<string>(boost::any_cast<string>(m["VaultId"]));
    }
  }


  virtual ~DescribeHanaBackupSettingRequest() = default;
};
class DescribeHanaBackupSettingResponseBodyHanaBackupSetting : public Darabonba::Model {
public:
  shared_ptr<string> catalogBackupParameterFile{};
  shared_ptr<bool> catalogBackupUsingBackint{};
  shared_ptr<string> dataBackupParameterFile{};
  shared_ptr<string> databaseName{};
  shared_ptr<bool> enableAutoLogBackup{};
  shared_ptr<string> logBackupParameterFile{};
  shared_ptr<long> logBackupTimeout{};
  shared_ptr<bool> logBackupUsingBackint{};

  DescribeHanaBackupSettingResponseBodyHanaBackupSetting() {}

  explicit DescribeHanaBackupSettingResponseBodyHanaBackupSetting(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (catalogBackupParameterFile) {
      res["CatalogBackupParameterFile"] = boost::any(*catalogBackupParameterFile);
    }
    if (catalogBackupUsingBackint) {
      res["CatalogBackupUsingBackint"] = boost::any(*catalogBackupUsingBackint);
    }
    if (dataBackupParameterFile) {
      res["DataBackupParameterFile"] = boost::any(*dataBackupParameterFile);
    }
    if (databaseName) {
      res["DatabaseName"] = boost::any(*databaseName);
    }
    if (enableAutoLogBackup) {
      res["EnableAutoLogBackup"] = boost::any(*enableAutoLogBackup);
    }
    if (logBackupParameterFile) {
      res["LogBackupParameterFile"] = boost::any(*logBackupParameterFile);
    }
    if (logBackupTimeout) {
      res["LogBackupTimeout"] = boost::any(*logBackupTimeout);
    }
    if (logBackupUsingBackint) {
      res["LogBackupUsingBackint"] = boost::any(*logBackupUsingBackint);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CatalogBackupParameterFile") != m.end() && !m["CatalogBackupParameterFile"].empty()) {
      catalogBackupParameterFile = make_shared<string>(boost::any_cast<string>(m["CatalogBackupParameterFile"]));
    }
    if (m.find("CatalogBackupUsingBackint") != m.end() && !m["CatalogBackupUsingBackint"].empty()) {
      catalogBackupUsingBackint = make_shared<bool>(boost::any_cast<bool>(m["CatalogBackupUsingBackint"]));
    }
    if (m.find("DataBackupParameterFile") != m.end() && !m["DataBackupParameterFile"].empty()) {
      dataBackupParameterFile = make_shared<string>(boost::any_cast<string>(m["DataBackupParameterFile"]));
    }
    if (m.find("DatabaseName") != m.end() && !m["DatabaseName"].empty()) {
      databaseName = make_shared<string>(boost::any_cast<string>(m["DatabaseName"]));
    }
    if (m.find("EnableAutoLogBackup") != m.end() && !m["EnableAutoLogBackup"].empty()) {
      enableAutoLogBackup = make_shared<bool>(boost::any_cast<bool>(m["EnableAutoLogBackup"]));
    }
    if (m.find("LogBackupParameterFile") != m.end() && !m["LogBackupParameterFile"].empty()) {
      logBackupParameterFile = make_shared<string>(boost::any_cast<string>(m["LogBackupParameterFile"]));
    }
    if (m.find("LogBackupTimeout") != m.end() && !m["LogBackupTimeout"].empty()) {
      logBackupTimeout = make_shared<long>(boost::any_cast<long>(m["LogBackupTimeout"]));
    }
    if (m.find("LogBackupUsingBackint") != m.end() && !m["LogBackupUsingBackint"].empty()) {
      logBackupUsingBackint = make_shared<bool>(boost::any_cast<bool>(m["LogBackupUsingBackint"]));
    }
  }


  virtual ~DescribeHanaBackupSettingResponseBodyHanaBackupSetting() = default;
};
class DescribeHanaBackupSettingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DescribeHanaBackupSettingResponseBodyHanaBackupSetting> hanaBackupSetting{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeHanaBackupSettingResponseBody() {}

  explicit DescribeHanaBackupSettingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (hanaBackupSetting) {
      res["HanaBackupSetting"] = hanaBackupSetting ? boost::any(hanaBackupSetting->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("HanaBackupSetting") != m.end() && !m["HanaBackupSetting"].empty()) {
      if (typeid(map<string, boost::any>) == m["HanaBackupSetting"].type()) {
        DescribeHanaBackupSettingResponseBodyHanaBackupSetting model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HanaBackupSetting"]));
        hanaBackupSetting = make_shared<DescribeHanaBackupSettingResponseBodyHanaBackupSetting>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DescribeHanaBackupSettingResponseBody() = default;
};
class DescribeHanaBackupSettingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeHanaBackupSettingResponseBody> body{};

  DescribeHanaBackupSettingResponse() {}

  explicit DescribeHanaBackupSettingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeHanaBackupSettingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeHanaBackupSettingResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeHanaBackupSettingResponse() = default;
};
class DescribeHanaBackupsAsyncRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> databaseName{};
  shared_ptr<bool> includeDifferential{};
  shared_ptr<bool> includeIncremental{};
  shared_ptr<bool> includeLog{};
  shared_ptr<long> logPosition{};
  shared_ptr<string> mode{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> recoveryPointInTime{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> source{};
  shared_ptr<string> sourceClusterId{};
  shared_ptr<bool> systemCopy{};
  shared_ptr<bool> useBackint{};
  shared_ptr<string> vaultId{};
  shared_ptr<long> volumeId{};

  DescribeHanaBackupsAsyncRequest() {}

  explicit DescribeHanaBackupsAsyncRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (databaseName) {
      res["DatabaseName"] = boost::any(*databaseName);
    }
    if (includeDifferential) {
      res["IncludeDifferential"] = boost::any(*includeDifferential);
    }
    if (includeIncremental) {
      res["IncludeIncremental"] = boost::any(*includeIncremental);
    }
    if (includeLog) {
      res["IncludeLog"] = boost::any(*includeLog);
    }
    if (logPosition) {
      res["LogPosition"] = boost::any(*logPosition);
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (recoveryPointInTime) {
      res["RecoveryPointInTime"] = boost::any(*recoveryPointInTime);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (sourceClusterId) {
      res["SourceClusterId"] = boost::any(*sourceClusterId);
    }
    if (systemCopy) {
      res["SystemCopy"] = boost::any(*systemCopy);
    }
    if (useBackint) {
      res["UseBackint"] = boost::any(*useBackint);
    }
    if (vaultId) {
      res["VaultId"] = boost::any(*vaultId);
    }
    if (volumeId) {
      res["VolumeId"] = boost::any(*volumeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("DatabaseName") != m.end() && !m["DatabaseName"].empty()) {
      databaseName = make_shared<string>(boost::any_cast<string>(m["DatabaseName"]));
    }
    if (m.find("IncludeDifferential") != m.end() && !m["IncludeDifferential"].empty()) {
      includeDifferential = make_shared<bool>(boost::any_cast<bool>(m["IncludeDifferential"]));
    }
    if (m.find("IncludeIncremental") != m.end() && !m["IncludeIncremental"].empty()) {
      includeIncremental = make_shared<bool>(boost::any_cast<bool>(m["IncludeIncremental"]));
    }
    if (m.find("IncludeLog") != m.end() && !m["IncludeLog"].empty()) {
      includeLog = make_shared<bool>(boost::any_cast<bool>(m["IncludeLog"]));
    }
    if (m.find("LogPosition") != m.end() && !m["LogPosition"].empty()) {
      logPosition = make_shared<long>(boost::any_cast<long>(m["LogPosition"]));
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RecoveryPointInTime") != m.end() && !m["RecoveryPointInTime"].empty()) {
      recoveryPointInTime = make_shared<long>(boost::any_cast<long>(m["RecoveryPointInTime"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("SourceClusterId") != m.end() && !m["SourceClusterId"].empty()) {
      sourceClusterId = make_shared<string>(boost::any_cast<string>(m["SourceClusterId"]));
    }
    if (m.find("SystemCopy") != m.end() && !m["SystemCopy"].empty()) {
      systemCopy = make_shared<bool>(boost::any_cast<bool>(m["SystemCopy"]));
    }
    if (m.find("UseBackint") != m.end() && !m["UseBackint"].empty()) {
      useBackint = make_shared<bool>(boost::any_cast<bool>(m["UseBackint"]));
    }
    if (m.find("VaultId") != m.end() && !m["VaultId"].empty()) {
      vaultId = make_shared<string>(boost::any_cast<string>(m["VaultId"]));
    }
    if (m.find("VolumeId") != m.end() && !m["VolumeId"].empty()) {
      volumeId = make_shared<long>(boost::any_cast<long>(m["VolumeId"]));
    }
  }


  virtual ~DescribeHanaBackupsAsyncRequest() = default;
};
class DescribeHanaBackupsAsyncResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> taskId{};

  DescribeHanaBackupsAsyncResponseBody() {}

  explicit DescribeHanaBackupsAsyncResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~DescribeHanaBackupsAsyncResponseBody() = default;
};
class DescribeHanaBackupsAsyncResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeHanaBackupsAsyncResponseBody> body{};

  DescribeHanaBackupsAsyncResponse() {}

  explicit DescribeHanaBackupsAsyncResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeHanaBackupsAsyncResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeHanaBackupsAsyncResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeHanaBackupsAsyncResponse() = default;
};
class DescribeHanaDatabasesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> vaultId{};

  DescribeHanaDatabasesRequest() {}

  explicit DescribeHanaDatabasesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (vaultId) {
      res["VaultId"] = boost::any(*vaultId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("VaultId") != m.end() && !m["VaultId"].empty()) {
      vaultId = make_shared<string>(boost::any_cast<string>(m["VaultId"]));
    }
  }


  virtual ~DescribeHanaDatabasesRequest() = default;
};
class DescribeHanaDatabasesResponseBodyHanaDatabasesHanaDatabase : public Darabonba::Model {
public:
  shared_ptr<string> activeStatus{};
  shared_ptr<string> databaseName{};
  shared_ptr<string> detail{};
  shared_ptr<string> host{};
  shared_ptr<string> serviceName{};
  shared_ptr<long> sqlPort{};

  DescribeHanaDatabasesResponseBodyHanaDatabasesHanaDatabase() {}

  explicit DescribeHanaDatabasesResponseBodyHanaDatabasesHanaDatabase(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (activeStatus) {
      res["ActiveStatus"] = boost::any(*activeStatus);
    }
    if (databaseName) {
      res["DatabaseName"] = boost::any(*databaseName);
    }
    if (detail) {
      res["Detail"] = boost::any(*detail);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (sqlPort) {
      res["SqlPort"] = boost::any(*sqlPort);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActiveStatus") != m.end() && !m["ActiveStatus"].empty()) {
      activeStatus = make_shared<string>(boost::any_cast<string>(m["ActiveStatus"]));
    }
    if (m.find("DatabaseName") != m.end() && !m["DatabaseName"].empty()) {
      databaseName = make_shared<string>(boost::any_cast<string>(m["DatabaseName"]));
    }
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      detail = make_shared<string>(boost::any_cast<string>(m["Detail"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("SqlPort") != m.end() && !m["SqlPort"].empty()) {
      sqlPort = make_shared<long>(boost::any_cast<long>(m["SqlPort"]));
    }
  }


  virtual ~DescribeHanaDatabasesResponseBodyHanaDatabasesHanaDatabase() = default;
};
class DescribeHanaDatabasesResponseBodyHanaDatabases : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeHanaDatabasesResponseBodyHanaDatabasesHanaDatabase>> hanaDatabase{};

  DescribeHanaDatabasesResponseBodyHanaDatabases() {}

  explicit DescribeHanaDatabasesResponseBodyHanaDatabases(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hanaDatabase) {
      vector<boost::any> temp1;
      for(auto item1:*hanaDatabase){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HanaDatabase"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HanaDatabase") != m.end() && !m["HanaDatabase"].empty()) {
      if (typeid(vector<boost::any>) == m["HanaDatabase"].type()) {
        vector<DescribeHanaDatabasesResponseBodyHanaDatabasesHanaDatabase> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HanaDatabase"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeHanaDatabasesResponseBodyHanaDatabasesHanaDatabase model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hanaDatabase = make_shared<vector<DescribeHanaDatabasesResponseBodyHanaDatabasesHanaDatabase>>(expect1);
      }
    }
  }


  virtual ~DescribeHanaDatabasesResponseBodyHanaDatabases() = default;
};
class DescribeHanaDatabasesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DescribeHanaDatabasesResponseBodyHanaDatabases> hanaDatabases{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  DescribeHanaDatabasesResponseBody() {}

  explicit DescribeHanaDatabasesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (hanaDatabases) {
      res["HanaDatabases"] = hanaDatabases ? boost::any(hanaDatabases->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HanaDatabases") != m.end() && !m["HanaDatabases"].empty()) {
      if (typeid(map<string, boost::any>) == m["HanaDatabases"].type()) {
        DescribeHanaDatabasesResponseBodyHanaDatabases model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HanaDatabases"]));
        hanaDatabases = make_shared<DescribeHanaDatabasesResponseBodyHanaDatabases>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
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
  }


  virtual ~DescribeHanaDatabasesResponseBody() = default;
};
class DescribeHanaDatabasesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeHanaDatabasesResponseBody> body{};

  DescribeHanaDatabasesResponse() {}

  explicit DescribeHanaDatabasesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeHanaDatabasesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeHanaDatabasesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeHanaDatabasesResponse() = default;
};
class DescribeHanaInstancesRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeHanaInstancesRequestTag() {}

  explicit DescribeHanaInstancesRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeHanaInstancesRequestTag() = default;
};
class DescribeHanaInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<DescribeHanaInstancesRequestTag>> tag{};
  shared_ptr<string> vaultId{};

  DescribeHanaInstancesRequest() {}

  explicit DescribeHanaInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
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
    if (vaultId) {
      res["VaultId"] = boost::any(*vaultId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<DescribeHanaInstancesRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeHanaInstancesRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<DescribeHanaInstancesRequestTag>>(expect1);
      }
    }
    if (m.find("VaultId") != m.end() && !m["VaultId"].empty()) {
      vaultId = make_shared<string>(boost::any_cast<string>(m["VaultId"]));
    }
  }


  virtual ~DescribeHanaInstancesRequest() = default;
};
class DescribeHanaInstancesResponseBodyHanasHanaTagsTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeHanaInstancesResponseBodyHanasHanaTagsTag() {}

  explicit DescribeHanaInstancesResponseBodyHanasHanaTagsTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeHanaInstancesResponseBodyHanasHanaTagsTag() = default;
};
class DescribeHanaInstancesResponseBodyHanasHanaTags : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeHanaInstancesResponseBodyHanasHanaTagsTag>> tag{};

  DescribeHanaInstancesResponseBodyHanasHanaTags() {}

  explicit DescribeHanaInstancesResponseBodyHanasHanaTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<DescribeHanaInstancesResponseBodyHanasHanaTagsTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeHanaInstancesResponseBodyHanasHanaTagsTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<DescribeHanaInstancesResponseBodyHanasHanaTagsTag>>(expect1);
      }
    }
  }


  virtual ~DescribeHanaInstancesResponseBodyHanasHanaTags() = default;
};
class DescribeHanaInstancesResponseBodyHanasHana : public Darabonba::Model {
public:
  shared_ptr<string> alertSetting{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> crossAccountRoleName{};
  shared_ptr<string> crossAccountType{};
  shared_ptr<long> crossAccountUserId{};
  shared_ptr<string> hanaName{};
  shared_ptr<string> host{};
  shared_ptr<long> instanceNumber{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<long> status{};
  shared_ptr<string> statusMessage{};
  shared_ptr<DescribeHanaInstancesResponseBodyHanasHanaTags> tags{};
  shared_ptr<bool> useSsl{};
  shared_ptr<string> userName{};
  shared_ptr<bool> validateCertificate{};
  shared_ptr<string> vaultId{};

  DescribeHanaInstancesResponseBodyHanasHana() {}

  explicit DescribeHanaInstancesResponseBodyHanasHana(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertSetting) {
      res["AlertSetting"] = boost::any(*alertSetting);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (crossAccountRoleName) {
      res["CrossAccountRoleName"] = boost::any(*crossAccountRoleName);
    }
    if (crossAccountType) {
      res["CrossAccountType"] = boost::any(*crossAccountType);
    }
    if (crossAccountUserId) {
      res["CrossAccountUserId"] = boost::any(*crossAccountUserId);
    }
    if (hanaName) {
      res["HanaName"] = boost::any(*hanaName);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (instanceNumber) {
      res["InstanceNumber"] = boost::any(*instanceNumber);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (statusMessage) {
      res["StatusMessage"] = boost::any(*statusMessage);
    }
    if (tags) {
      res["Tags"] = tags ? boost::any(tags->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (useSsl) {
      res["UseSsl"] = boost::any(*useSsl);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    if (validateCertificate) {
      res["ValidateCertificate"] = boost::any(*validateCertificate);
    }
    if (vaultId) {
      res["VaultId"] = boost::any(*vaultId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlertSetting") != m.end() && !m["AlertSetting"].empty()) {
      alertSetting = make_shared<string>(boost::any_cast<string>(m["AlertSetting"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("CrossAccountRoleName") != m.end() && !m["CrossAccountRoleName"].empty()) {
      crossAccountRoleName = make_shared<string>(boost::any_cast<string>(m["CrossAccountRoleName"]));
    }
    if (m.find("CrossAccountType") != m.end() && !m["CrossAccountType"].empty()) {
      crossAccountType = make_shared<string>(boost::any_cast<string>(m["CrossAccountType"]));
    }
    if (m.find("CrossAccountUserId") != m.end() && !m["CrossAccountUserId"].empty()) {
      crossAccountUserId = make_shared<long>(boost::any_cast<long>(m["CrossAccountUserId"]));
    }
    if (m.find("HanaName") != m.end() && !m["HanaName"].empty()) {
      hanaName = make_shared<string>(boost::any_cast<string>(m["HanaName"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("InstanceNumber") != m.end() && !m["InstanceNumber"].empty()) {
      instanceNumber = make_shared<long>(boost::any_cast<long>(m["InstanceNumber"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("StatusMessage") != m.end() && !m["StatusMessage"].empty()) {
      statusMessage = make_shared<string>(boost::any_cast<string>(m["StatusMessage"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tags"].type()) {
        DescribeHanaInstancesResponseBodyHanasHanaTags model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tags"]));
        tags = make_shared<DescribeHanaInstancesResponseBodyHanasHanaTags>(model1);
      }
    }
    if (m.find("UseSsl") != m.end() && !m["UseSsl"].empty()) {
      useSsl = make_shared<bool>(boost::any_cast<bool>(m["UseSsl"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
    if (m.find("ValidateCertificate") != m.end() && !m["ValidateCertificate"].empty()) {
      validateCertificate = make_shared<bool>(boost::any_cast<bool>(m["ValidateCertificate"]));
    }
    if (m.find("VaultId") != m.end() && !m["VaultId"].empty()) {
      vaultId = make_shared<string>(boost::any_cast<string>(m["VaultId"]));
    }
  }


  virtual ~DescribeHanaInstancesResponseBodyHanasHana() = default;
};
class DescribeHanaInstancesResponseBodyHanas : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeHanaInstancesResponseBodyHanasHana>> hana{};

  DescribeHanaInstancesResponseBodyHanas() {}

  explicit DescribeHanaInstancesResponseBodyHanas(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hana) {
      vector<boost::any> temp1;
      for(auto item1:*hana){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Hana"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Hana") != m.end() && !m["Hana"].empty()) {
      if (typeid(vector<boost::any>) == m["Hana"].type()) {
        vector<DescribeHanaInstancesResponseBodyHanasHana> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Hana"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeHanaInstancesResponseBodyHanasHana model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hana = make_shared<vector<DescribeHanaInstancesResponseBodyHanasHana>>(expect1);
      }
    }
  }


  virtual ~DescribeHanaInstancesResponseBodyHanas() = default;
};
class DescribeHanaInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DescribeHanaInstancesResponseBodyHanas> hanas{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  DescribeHanaInstancesResponseBody() {}

  explicit DescribeHanaInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (hanas) {
      res["Hanas"] = hanas ? boost::any(hanas->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Hanas") != m.end() && !m["Hanas"].empty()) {
      if (typeid(map<string, boost::any>) == m["Hanas"].type()) {
        DescribeHanaInstancesResponseBodyHanas model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Hanas"]));
        hanas = make_shared<DescribeHanaInstancesResponseBodyHanas>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
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
  }


  virtual ~DescribeHanaInstancesResponseBody() = default;
};
class DescribeHanaInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeHanaInstancesResponseBody> body{};

  DescribeHanaInstancesResponse() {}

  explicit DescribeHanaInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeHanaInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeHanaInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeHanaInstancesResponse() = default;
};
class DescribeHanaRestoresRequest : public Darabonba::Model {
public:
  shared_ptr<long> backupId{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> databaseName{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> restoreId{};
  shared_ptr<string> restoreStatus{};
  shared_ptr<string> vaultId{};

  DescribeHanaRestoresRequest() {}

  explicit DescribeHanaRestoresRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupId) {
      res["BackupId"] = boost::any(*backupId);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (databaseName) {
      res["DatabaseName"] = boost::any(*databaseName);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (restoreId) {
      res["RestoreId"] = boost::any(*restoreId);
    }
    if (restoreStatus) {
      res["RestoreStatus"] = boost::any(*restoreStatus);
    }
    if (vaultId) {
      res["VaultId"] = boost::any(*vaultId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupId") != m.end() && !m["BackupId"].empty()) {
      backupId = make_shared<long>(boost::any_cast<long>(m["BackupId"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("DatabaseName") != m.end() && !m["DatabaseName"].empty()) {
      databaseName = make_shared<string>(boost::any_cast<string>(m["DatabaseName"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("RestoreId") != m.end() && !m["RestoreId"].empty()) {
      restoreId = make_shared<string>(boost::any_cast<string>(m["RestoreId"]));
    }
    if (m.find("RestoreStatus") != m.end() && !m["RestoreStatus"].empty()) {
      restoreStatus = make_shared<string>(boost::any_cast<string>(m["RestoreStatus"]));
    }
    if (m.find("VaultId") != m.end() && !m["VaultId"].empty()) {
      vaultId = make_shared<string>(boost::any_cast<string>(m["VaultId"]));
    }
  }


  virtual ~DescribeHanaRestoresRequest() = default;
};
class DescribeHanaRestoresResponseBodyHanaRestoreHanaRestores : public Darabonba::Model {
public:
  shared_ptr<long> backupID{};
  shared_ptr<string> backupPrefix{};
  shared_ptr<bool> checkAccess{};
  shared_ptr<bool> clearLog{};
  shared_ptr<string> clusterId{};
  shared_ptr<long> currentPhase{};
  shared_ptr<long> currentProgress{};
  shared_ptr<string> databaseName{};
  shared_ptr<long> databaseRestoreId{};
  shared_ptr<long> endTime{};
  shared_ptr<long> logPosition{};
  shared_ptr<long> maxPhase{};
  shared_ptr<long> maxProgress{};
  shared_ptr<string> message{};
  shared_ptr<string> mode{};
  shared_ptr<string> phase{};
  shared_ptr<long> reachedTime{};
  shared_ptr<long> recoveryPointInTime{};
  shared_ptr<string> restoreId{};
  shared_ptr<string> source{};
  shared_ptr<string> sourceClusterId{};
  shared_ptr<long> startTime{};
  shared_ptr<string> state{};
  shared_ptr<string> status{};
  shared_ptr<bool> systemCopy{};
  shared_ptr<bool> useCatalog{};
  shared_ptr<bool> useDelta{};
  shared_ptr<string> vaultId{};
  shared_ptr<long> volumeId{};

  DescribeHanaRestoresResponseBodyHanaRestoreHanaRestores() {}

  explicit DescribeHanaRestoresResponseBodyHanaRestoreHanaRestores(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupID) {
      res["BackupID"] = boost::any(*backupID);
    }
    if (backupPrefix) {
      res["BackupPrefix"] = boost::any(*backupPrefix);
    }
    if (checkAccess) {
      res["CheckAccess"] = boost::any(*checkAccess);
    }
    if (clearLog) {
      res["ClearLog"] = boost::any(*clearLog);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (currentPhase) {
      res["CurrentPhase"] = boost::any(*currentPhase);
    }
    if (currentProgress) {
      res["CurrentProgress"] = boost::any(*currentProgress);
    }
    if (databaseName) {
      res["DatabaseName"] = boost::any(*databaseName);
    }
    if (databaseRestoreId) {
      res["DatabaseRestoreId"] = boost::any(*databaseRestoreId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (logPosition) {
      res["LogPosition"] = boost::any(*logPosition);
    }
    if (maxPhase) {
      res["MaxPhase"] = boost::any(*maxPhase);
    }
    if (maxProgress) {
      res["MaxProgress"] = boost::any(*maxProgress);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (phase) {
      res["Phase"] = boost::any(*phase);
    }
    if (reachedTime) {
      res["ReachedTime"] = boost::any(*reachedTime);
    }
    if (recoveryPointInTime) {
      res["RecoveryPointInTime"] = boost::any(*recoveryPointInTime);
    }
    if (restoreId) {
      res["RestoreId"] = boost::any(*restoreId);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (sourceClusterId) {
      res["SourceClusterId"] = boost::any(*sourceClusterId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (systemCopy) {
      res["SystemCopy"] = boost::any(*systemCopy);
    }
    if (useCatalog) {
      res["UseCatalog"] = boost::any(*useCatalog);
    }
    if (useDelta) {
      res["UseDelta"] = boost::any(*useDelta);
    }
    if (vaultId) {
      res["VaultId"] = boost::any(*vaultId);
    }
    if (volumeId) {
      res["VolumeId"] = boost::any(*volumeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupID") != m.end() && !m["BackupID"].empty()) {
      backupID = make_shared<long>(boost::any_cast<long>(m["BackupID"]));
    }
    if (m.find("BackupPrefix") != m.end() && !m["BackupPrefix"].empty()) {
      backupPrefix = make_shared<string>(boost::any_cast<string>(m["BackupPrefix"]));
    }
    if (m.find("CheckAccess") != m.end() && !m["CheckAccess"].empty()) {
      checkAccess = make_shared<bool>(boost::any_cast<bool>(m["CheckAccess"]));
    }
    if (m.find("ClearLog") != m.end() && !m["ClearLog"].empty()) {
      clearLog = make_shared<bool>(boost::any_cast<bool>(m["ClearLog"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("CurrentPhase") != m.end() && !m["CurrentPhase"].empty()) {
      currentPhase = make_shared<long>(boost::any_cast<long>(m["CurrentPhase"]));
    }
    if (m.find("CurrentProgress") != m.end() && !m["CurrentProgress"].empty()) {
      currentProgress = make_shared<long>(boost::any_cast<long>(m["CurrentProgress"]));
    }
    if (m.find("DatabaseName") != m.end() && !m["DatabaseName"].empty()) {
      databaseName = make_shared<string>(boost::any_cast<string>(m["DatabaseName"]));
    }
    if (m.find("DatabaseRestoreId") != m.end() && !m["DatabaseRestoreId"].empty()) {
      databaseRestoreId = make_shared<long>(boost::any_cast<long>(m["DatabaseRestoreId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("LogPosition") != m.end() && !m["LogPosition"].empty()) {
      logPosition = make_shared<long>(boost::any_cast<long>(m["LogPosition"]));
    }
    if (m.find("MaxPhase") != m.end() && !m["MaxPhase"].empty()) {
      maxPhase = make_shared<long>(boost::any_cast<long>(m["MaxPhase"]));
    }
    if (m.find("MaxProgress") != m.end() && !m["MaxProgress"].empty()) {
      maxProgress = make_shared<long>(boost::any_cast<long>(m["MaxProgress"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("Phase") != m.end() && !m["Phase"].empty()) {
      phase = make_shared<string>(boost::any_cast<string>(m["Phase"]));
    }
    if (m.find("ReachedTime") != m.end() && !m["ReachedTime"].empty()) {
      reachedTime = make_shared<long>(boost::any_cast<long>(m["ReachedTime"]));
    }
    if (m.find("RecoveryPointInTime") != m.end() && !m["RecoveryPointInTime"].empty()) {
      recoveryPointInTime = make_shared<long>(boost::any_cast<long>(m["RecoveryPointInTime"]));
    }
    if (m.find("RestoreId") != m.end() && !m["RestoreId"].empty()) {
      restoreId = make_shared<string>(boost::any_cast<string>(m["RestoreId"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("SourceClusterId") != m.end() && !m["SourceClusterId"].empty()) {
      sourceClusterId = make_shared<string>(boost::any_cast<string>(m["SourceClusterId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SystemCopy") != m.end() && !m["SystemCopy"].empty()) {
      systemCopy = make_shared<bool>(boost::any_cast<bool>(m["SystemCopy"]));
    }
    if (m.find("UseCatalog") != m.end() && !m["UseCatalog"].empty()) {
      useCatalog = make_shared<bool>(boost::any_cast<bool>(m["UseCatalog"]));
    }
    if (m.find("UseDelta") != m.end() && !m["UseDelta"].empty()) {
      useDelta = make_shared<bool>(boost::any_cast<bool>(m["UseDelta"]));
    }
    if (m.find("VaultId") != m.end() && !m["VaultId"].empty()) {
      vaultId = make_shared<string>(boost::any_cast<string>(m["VaultId"]));
    }
    if (m.find("VolumeId") != m.end() && !m["VolumeId"].empty()) {
      volumeId = make_shared<long>(boost::any_cast<long>(m["VolumeId"]));
    }
  }


  virtual ~DescribeHanaRestoresResponseBodyHanaRestoreHanaRestores() = default;
};
class DescribeHanaRestoresResponseBodyHanaRestore : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeHanaRestoresResponseBodyHanaRestoreHanaRestores>> hanaRestores{};

  DescribeHanaRestoresResponseBodyHanaRestore() {}

  explicit DescribeHanaRestoresResponseBodyHanaRestore(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hanaRestores) {
      vector<boost::any> temp1;
      for(auto item1:*hanaRestores){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HanaRestores"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HanaRestores") != m.end() && !m["HanaRestores"].empty()) {
      if (typeid(vector<boost::any>) == m["HanaRestores"].type()) {
        vector<DescribeHanaRestoresResponseBodyHanaRestoreHanaRestores> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HanaRestores"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeHanaRestoresResponseBodyHanaRestoreHanaRestores model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hanaRestores = make_shared<vector<DescribeHanaRestoresResponseBodyHanaRestoreHanaRestores>>(expect1);
      }
    }
  }


  virtual ~DescribeHanaRestoresResponseBodyHanaRestore() = default;
};
class DescribeHanaRestoresResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DescribeHanaRestoresResponseBodyHanaRestore> hanaRestore{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  DescribeHanaRestoresResponseBody() {}

  explicit DescribeHanaRestoresResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (hanaRestore) {
      res["HanaRestore"] = hanaRestore ? boost::any(hanaRestore->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HanaRestore") != m.end() && !m["HanaRestore"].empty()) {
      if (typeid(map<string, boost::any>) == m["HanaRestore"].type()) {
        DescribeHanaRestoresResponseBodyHanaRestore model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HanaRestore"]));
        hanaRestore = make_shared<DescribeHanaRestoresResponseBodyHanaRestore>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
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
  }


  virtual ~DescribeHanaRestoresResponseBody() = default;
};
class DescribeHanaRestoresResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeHanaRestoresResponseBody> body{};

  DescribeHanaRestoresResponse() {}

  explicit DescribeHanaRestoresResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeHanaRestoresResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeHanaRestoresResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeHanaRestoresResponse() = default;
};
class DescribeHanaRetentionSettingRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> databaseName{};
  shared_ptr<string> vaultId{};

  DescribeHanaRetentionSettingRequest() {}

  explicit DescribeHanaRetentionSettingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (databaseName) {
      res["DatabaseName"] = boost::any(*databaseName);
    }
    if (vaultId) {
      res["VaultId"] = boost::any(*vaultId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("DatabaseName") != m.end() && !m["DatabaseName"].empty()) {
      databaseName = make_shared<string>(boost::any_cast<string>(m["DatabaseName"]));
    }
    if (m.find("VaultId") != m.end() && !m["VaultId"].empty()) {
      vaultId = make_shared<string>(boost::any_cast<string>(m["VaultId"]));
    }
  }


  virtual ~DescribeHanaRetentionSettingRequest() = default;
};
class DescribeHanaRetentionSettingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> code{};
  shared_ptr<string> databaseName{};
  shared_ptr<bool> disabled{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> retentionDays{};
  shared_ptr<string> schedule{};
  shared_ptr<bool> success{};
  shared_ptr<string> vaultId{};

  DescribeHanaRetentionSettingResponseBody() {}

  explicit DescribeHanaRetentionSettingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (databaseName) {
      res["DatabaseName"] = boost::any(*databaseName);
    }
    if (disabled) {
      res["Disabled"] = boost::any(*disabled);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (retentionDays) {
      res["RetentionDays"] = boost::any(*retentionDays);
    }
    if (schedule) {
      res["Schedule"] = boost::any(*schedule);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (vaultId) {
      res["VaultId"] = boost::any(*vaultId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DatabaseName") != m.end() && !m["DatabaseName"].empty()) {
      databaseName = make_shared<string>(boost::any_cast<string>(m["DatabaseName"]));
    }
    if (m.find("Disabled") != m.end() && !m["Disabled"].empty()) {
      disabled = make_shared<bool>(boost::any_cast<bool>(m["Disabled"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RetentionDays") != m.end() && !m["RetentionDays"].empty()) {
      retentionDays = make_shared<long>(boost::any_cast<long>(m["RetentionDays"]));
    }
    if (m.find("Schedule") != m.end() && !m["Schedule"].empty()) {
      schedule = make_shared<string>(boost::any_cast<string>(m["Schedule"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("VaultId") != m.end() && !m["VaultId"].empty()) {
      vaultId = make_shared<string>(boost::any_cast<string>(m["VaultId"]));
    }
  }


  virtual ~DescribeHanaRetentionSettingResponseBody() = default;
};
class DescribeHanaRetentionSettingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeHanaRetentionSettingResponseBody> body{};

  DescribeHanaRetentionSettingResponse() {}

  explicit DescribeHanaRetentionSettingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeHanaRetentionSettingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeHanaRetentionSettingResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeHanaRetentionSettingResponse() = default;
};
class DescribeOtsTableSnapshotsRequestOtsInstances : public Darabonba::Model {
public:
  shared_ptr<string> instanceName{};
  shared_ptr<vector<string>> tableNames{};

  DescribeOtsTableSnapshotsRequestOtsInstances() {}

  explicit DescribeOtsTableSnapshotsRequestOtsInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (tableNames) {
      res["TableNames"] = boost::any(*tableNames);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("TableNames") != m.end() && !m["TableNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TableNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TableNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tableNames = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeOtsTableSnapshotsRequestOtsInstances() = default;
};
class DescribeOtsTableSnapshotsRequest : public Darabonba::Model {
public:
  shared_ptr<string> crossAccountRoleName{};
  shared_ptr<string> crossAccountType{};
  shared_ptr<long> crossAccountUserId{};
  shared_ptr<long> endTime{};
  shared_ptr<long> limit{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<DescribeOtsTableSnapshotsRequestOtsInstances>> otsInstances{};
  shared_ptr<vector<string>> snapshotIds{};
  shared_ptr<long> startTime{};

  DescribeOtsTableSnapshotsRequest() {}

  explicit DescribeOtsTableSnapshotsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (crossAccountRoleName) {
      res["CrossAccountRoleName"] = boost::any(*crossAccountRoleName);
    }
    if (crossAccountType) {
      res["CrossAccountType"] = boost::any(*crossAccountType);
    }
    if (crossAccountUserId) {
      res["CrossAccountUserId"] = boost::any(*crossAccountUserId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (otsInstances) {
      vector<boost::any> temp1;
      for(auto item1:*otsInstances){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OtsInstances"] = boost::any(temp1);
    }
    if (snapshotIds) {
      res["SnapshotIds"] = boost::any(*snapshotIds);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CrossAccountRoleName") != m.end() && !m["CrossAccountRoleName"].empty()) {
      crossAccountRoleName = make_shared<string>(boost::any_cast<string>(m["CrossAccountRoleName"]));
    }
    if (m.find("CrossAccountType") != m.end() && !m["CrossAccountType"].empty()) {
      crossAccountType = make_shared<string>(boost::any_cast<string>(m["CrossAccountType"]));
    }
    if (m.find("CrossAccountUserId") != m.end() && !m["CrossAccountUserId"].empty()) {
      crossAccountUserId = make_shared<long>(boost::any_cast<long>(m["CrossAccountUserId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("OtsInstances") != m.end() && !m["OtsInstances"].empty()) {
      if (typeid(vector<boost::any>) == m["OtsInstances"].type()) {
        vector<DescribeOtsTableSnapshotsRequestOtsInstances> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OtsInstances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeOtsTableSnapshotsRequestOtsInstances model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        otsInstances = make_shared<vector<DescribeOtsTableSnapshotsRequestOtsInstances>>(expect1);
      }
    }
    if (m.find("SnapshotIds") != m.end() && !m["SnapshotIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SnapshotIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SnapshotIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      snapshotIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~DescribeOtsTableSnapshotsRequest() = default;
};
class DescribeOtsTableSnapshotsResponseBodySnapshots : public Darabonba::Model {
public:
  shared_ptr<string> actualBytes{};
  shared_ptr<string> backupType{};
  shared_ptr<long> bytesTotal{};
  shared_ptr<long> completeTime{};
  shared_ptr<long> createTime{};
  shared_ptr<long> createdTime{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> jobId{};
  shared_ptr<string> parentSnapshotHash{};
  shared_ptr<long> rangeEnd{};
  shared_ptr<long> rangeStart{};
  shared_ptr<long> retention{};
  shared_ptr<string> snapshotHash{};
  shared_ptr<string> snapshotId{};
  shared_ptr<string> sourceType{};
  shared_ptr<long> startTime{};
  shared_ptr<string> status{};
  shared_ptr<string> tableName{};
  shared_ptr<long> updatedTime{};
  shared_ptr<string> vaultId{};

  DescribeOtsTableSnapshotsResponseBodySnapshots() {}

  explicit DescribeOtsTableSnapshotsResponseBodySnapshots(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actualBytes) {
      res["ActualBytes"] = boost::any(*actualBytes);
    }
    if (backupType) {
      res["BackupType"] = boost::any(*backupType);
    }
    if (bytesTotal) {
      res["BytesTotal"] = boost::any(*bytesTotal);
    }
    if (completeTime) {
      res["CompleteTime"] = boost::any(*completeTime);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (parentSnapshotHash) {
      res["ParentSnapshotHash"] = boost::any(*parentSnapshotHash);
    }
    if (rangeEnd) {
      res["RangeEnd"] = boost::any(*rangeEnd);
    }
    if (rangeStart) {
      res["RangeStart"] = boost::any(*rangeStart);
    }
    if (retention) {
      res["Retention"] = boost::any(*retention);
    }
    if (snapshotHash) {
      res["SnapshotHash"] = boost::any(*snapshotHash);
    }
    if (snapshotId) {
      res["SnapshotId"] = boost::any(*snapshotId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    if (updatedTime) {
      res["UpdatedTime"] = boost::any(*updatedTime);
    }
    if (vaultId) {
      res["VaultId"] = boost::any(*vaultId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActualBytes") != m.end() && !m["ActualBytes"].empty()) {
      actualBytes = make_shared<string>(boost::any_cast<string>(m["ActualBytes"]));
    }
    if (m.find("BackupType") != m.end() && !m["BackupType"].empty()) {
      backupType = make_shared<string>(boost::any_cast<string>(m["BackupType"]));
    }
    if (m.find("BytesTotal") != m.end() && !m["BytesTotal"].empty()) {
      bytesTotal = make_shared<long>(boost::any_cast<long>(m["BytesTotal"]));
    }
    if (m.find("CompleteTime") != m.end() && !m["CompleteTime"].empty()) {
      completeTime = make_shared<long>(boost::any_cast<long>(m["CompleteTime"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<long>(boost::any_cast<long>(m["CreatedTime"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("ParentSnapshotHash") != m.end() && !m["ParentSnapshotHash"].empty()) {
      parentSnapshotHash = make_shared<string>(boost::any_cast<string>(m["ParentSnapshotHash"]));
    }
    if (m.find("RangeEnd") != m.end() && !m["RangeEnd"].empty()) {
      rangeEnd = make_shared<long>(boost::any_cast<long>(m["RangeEnd"]));
    }
    if (m.find("RangeStart") != m.end() && !m["RangeStart"].empty()) {
      rangeStart = make_shared<long>(boost::any_cast<long>(m["RangeStart"]));
    }
    if (m.find("Retention") != m.end() && !m["Retention"].empty()) {
      retention = make_shared<long>(boost::any_cast<long>(m["Retention"]));
    }
    if (m.find("SnapshotHash") != m.end() && !m["SnapshotHash"].empty()) {
      snapshotHash = make_shared<string>(boost::any_cast<string>(m["SnapshotHash"]));
    }
    if (m.find("SnapshotId") != m.end() && !m["SnapshotId"].empty()) {
      snapshotId = make_shared<string>(boost::any_cast<string>(m["SnapshotId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
    if (m.find("UpdatedTime") != m.end() && !m["UpdatedTime"].empty()) {
      updatedTime = make_shared<long>(boost::any_cast<long>(m["UpdatedTime"]));
    }
    if (m.find("VaultId") != m.end() && !m["VaultId"].empty()) {
      vaultId = make_shared<string>(boost::any_cast<string>(m["VaultId"]));
    }
  }


  virtual ~DescribeOtsTableSnapshotsResponseBodySnapshots() = default;
};
class DescribeOtsTableSnapshotsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> limit{};
  shared_ptr<string> message{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeOtsTableSnapshotsResponseBodySnapshots>> snapshots{};
  shared_ptr<bool> success{};

  DescribeOtsTableSnapshotsResponseBody() {}

  explicit DescribeOtsTableSnapshotsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
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
    if (snapshots) {
      vector<boost::any> temp1;
      for(auto item1:*snapshots){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Snapshots"] = boost::any(temp1);
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
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
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
    if (m.find("Snapshots") != m.end() && !m["Snapshots"].empty()) {
      if (typeid(vector<boost::any>) == m["Snapshots"].type()) {
        vector<DescribeOtsTableSnapshotsResponseBodySnapshots> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Snapshots"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeOtsTableSnapshotsResponseBodySnapshots model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        snapshots = make_shared<vector<DescribeOtsTableSnapshotsResponseBodySnapshots>>(expect1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DescribeOtsTableSnapshotsResponseBody() = default;
};
class DescribeOtsTableSnapshotsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeOtsTableSnapshotsResponseBody> body{};

  DescribeOtsTableSnapshotsResponse() {}

  explicit DescribeOtsTableSnapshotsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeOtsTableSnapshotsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeOtsTableSnapshotsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeOtsTableSnapshotsResponse() = default;
};
class DescribePoliciesV2Request : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> policyId{};

  DescribePoliciesV2Request() {}

  explicit DescribePoliciesV2Request(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
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
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
  }


  virtual ~DescribePoliciesV2Request() = default;
};
class DescribePoliciesV2ResponseBodyPoliciesRulesDataSourceFilters : public Darabonba::Model {
public:
  shared_ptr<vector<string>> dataSourceIds{};
  shared_ptr<string> sourceType{};

  DescribePoliciesV2ResponseBodyPoliciesRulesDataSourceFilters() {}

  explicit DescribePoliciesV2ResponseBodyPoliciesRulesDataSourceFilters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSourceIds) {
      res["DataSourceIds"] = boost::any(*dataSourceIds);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataSourceIds") != m.end() && !m["DataSourceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DataSourceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DataSourceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dataSourceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
  }


  virtual ~DescribePoliciesV2ResponseBodyPoliciesRulesDataSourceFilters() = default;
};
class DescribePoliciesV2ResponseBodyPoliciesRulesRetentionRules : public Darabonba::Model {
public:
  shared_ptr<string> advancedRetentionType{};
  shared_ptr<long> retention{};
  shared_ptr<long> whichSnapshot{};

  DescribePoliciesV2ResponseBodyPoliciesRulesRetentionRules() {}

  explicit DescribePoliciesV2ResponseBodyPoliciesRulesRetentionRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (advancedRetentionType) {
      res["AdvancedRetentionType"] = boost::any(*advancedRetentionType);
    }
    if (retention) {
      res["Retention"] = boost::any(*retention);
    }
    if (whichSnapshot) {
      res["WhichSnapshot"] = boost::any(*whichSnapshot);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdvancedRetentionType") != m.end() && !m["AdvancedRetentionType"].empty()) {
      advancedRetentionType = make_shared<string>(boost::any_cast<string>(m["AdvancedRetentionType"]));
    }
    if (m.find("Retention") != m.end() && !m["Retention"].empty()) {
      retention = make_shared<long>(boost::any_cast<long>(m["Retention"]));
    }
    if (m.find("WhichSnapshot") != m.end() && !m["WhichSnapshot"].empty()) {
      whichSnapshot = make_shared<long>(boost::any_cast<long>(m["WhichSnapshot"]));
    }
  }


  virtual ~DescribePoliciesV2ResponseBodyPoliciesRulesRetentionRules() = default;
};
class DescribePoliciesV2ResponseBodyPoliciesRulesTagFilters : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> operator_{};
  shared_ptr<string> value{};

  DescribePoliciesV2ResponseBodyPoliciesRulesTagFilters() {}

  explicit DescribePoliciesV2ResponseBodyPoliciesRulesTagFilters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (operator_) {
      res["Operator"] = boost::any(*operator_);
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
    if (m.find("Operator") != m.end() && !m["Operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["Operator"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribePoliciesV2ResponseBodyPoliciesRulesTagFilters() = default;
};
class DescribePoliciesV2ResponseBodyPoliciesRules : public Darabonba::Model {
public:
  shared_ptr<long> archiveDays{};
  shared_ptr<string> backupType{};
  shared_ptr<vector<DescribePoliciesV2ResponseBodyPoliciesRulesDataSourceFilters>> dataSourceFilters{};
  shared_ptr<long> keepLatestSnapshots{};
  shared_ptr<string> replicationRegionId{};
  shared_ptr<long> retention{};
  shared_ptr<vector<DescribePoliciesV2ResponseBodyPoliciesRulesRetentionRules>> retentionRules{};
  shared_ptr<string> ruleId{};
  shared_ptr<string> ruleType{};
  shared_ptr<string> schedule{};
  shared_ptr<vector<DescribePoliciesV2ResponseBodyPoliciesRulesTagFilters>> tagFilters{};
  shared_ptr<string> vaultId{};

  DescribePoliciesV2ResponseBodyPoliciesRules() {}

  explicit DescribePoliciesV2ResponseBodyPoliciesRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (archiveDays) {
      res["ArchiveDays"] = boost::any(*archiveDays);
    }
    if (backupType) {
      res["BackupType"] = boost::any(*backupType);
    }
    if (dataSourceFilters) {
      vector<boost::any> temp1;
      for(auto item1:*dataSourceFilters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataSourceFilters"] = boost::any(temp1);
    }
    if (keepLatestSnapshots) {
      res["KeepLatestSnapshots"] = boost::any(*keepLatestSnapshots);
    }
    if (replicationRegionId) {
      res["ReplicationRegionId"] = boost::any(*replicationRegionId);
    }
    if (retention) {
      res["Retention"] = boost::any(*retention);
    }
    if (retentionRules) {
      vector<boost::any> temp1;
      for(auto item1:*retentionRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RetentionRules"] = boost::any(temp1);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (ruleType) {
      res["RuleType"] = boost::any(*ruleType);
    }
    if (schedule) {
      res["Schedule"] = boost::any(*schedule);
    }
    if (tagFilters) {
      vector<boost::any> temp1;
      for(auto item1:*tagFilters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagFilters"] = boost::any(temp1);
    }
    if (vaultId) {
      res["VaultId"] = boost::any(*vaultId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArchiveDays") != m.end() && !m["ArchiveDays"].empty()) {
      archiveDays = make_shared<long>(boost::any_cast<long>(m["ArchiveDays"]));
    }
    if (m.find("BackupType") != m.end() && !m["BackupType"].empty()) {
      backupType = make_shared<string>(boost::any_cast<string>(m["BackupType"]));
    }
    if (m.find("DataSourceFilters") != m.end() && !m["DataSourceFilters"].empty()) {
      if (typeid(vector<boost::any>) == m["DataSourceFilters"].type()) {
        vector<DescribePoliciesV2ResponseBodyPoliciesRulesDataSourceFilters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataSourceFilters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePoliciesV2ResponseBodyPoliciesRulesDataSourceFilters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataSourceFilters = make_shared<vector<DescribePoliciesV2ResponseBodyPoliciesRulesDataSourceFilters>>(expect1);
      }
    }
    if (m.find("KeepLatestSnapshots") != m.end() && !m["KeepLatestSnapshots"].empty()) {
      keepLatestSnapshots = make_shared<long>(boost::any_cast<long>(m["KeepLatestSnapshots"]));
    }
    if (m.find("ReplicationRegionId") != m.end() && !m["ReplicationRegionId"].empty()) {
      replicationRegionId = make_shared<string>(boost::any_cast<string>(m["ReplicationRegionId"]));
    }
    if (m.find("Retention") != m.end() && !m["Retention"].empty()) {
      retention = make_shared<long>(boost::any_cast<long>(m["Retention"]));
    }
    if (m.find("RetentionRules") != m.end() && !m["RetentionRules"].empty()) {
      if (typeid(vector<boost::any>) == m["RetentionRules"].type()) {
        vector<DescribePoliciesV2ResponseBodyPoliciesRulesRetentionRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RetentionRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePoliciesV2ResponseBodyPoliciesRulesRetentionRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        retentionRules = make_shared<vector<DescribePoliciesV2ResponseBodyPoliciesRulesRetentionRules>>(expect1);
      }
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
    if (m.find("RuleType") != m.end() && !m["RuleType"].empty()) {
      ruleType = make_shared<string>(boost::any_cast<string>(m["RuleType"]));
    }
    if (m.find("Schedule") != m.end() && !m["Schedule"].empty()) {
      schedule = make_shared<string>(boost::any_cast<string>(m["Schedule"]));
    }
    if (m.find("TagFilters") != m.end() && !m["TagFilters"].empty()) {
      if (typeid(vector<boost::any>) == m["TagFilters"].type()) {
        vector<DescribePoliciesV2ResponseBodyPoliciesRulesTagFilters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagFilters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePoliciesV2ResponseBodyPoliciesRulesTagFilters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagFilters = make_shared<vector<DescribePoliciesV2ResponseBodyPoliciesRulesTagFilters>>(expect1);
      }
    }
    if (m.find("VaultId") != m.end() && !m["VaultId"].empty()) {
      vaultId = make_shared<string>(boost::any_cast<string>(m["VaultId"]));
    }
  }


  virtual ~DescribePoliciesV2ResponseBodyPoliciesRules() = default;
};
class DescribePoliciesV2ResponseBodyPolicies : public Darabonba::Model {
public:
  shared_ptr<long> createdTime{};
  shared_ptr<long> policyBindingCount{};
  shared_ptr<string> policyDescription{};
  shared_ptr<string> policyId{};
  shared_ptr<string> policyName{};
  shared_ptr<string> policyType{};
  shared_ptr<vector<DescribePoliciesV2ResponseBodyPoliciesRules>> rules{};
  shared_ptr<long> updatedTime{};

  DescribePoliciesV2ResponseBodyPolicies() {}

  explicit DescribePoliciesV2ResponseBodyPolicies(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (policyBindingCount) {
      res["PolicyBindingCount"] = boost::any(*policyBindingCount);
    }
    if (policyDescription) {
      res["PolicyDescription"] = boost::any(*policyDescription);
    }
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
    }
    if (rules) {
      vector<boost::any> temp1;
      for(auto item1:*rules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Rules"] = boost::any(temp1);
    }
    if (updatedTime) {
      res["UpdatedTime"] = boost::any(*updatedTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<long>(boost::any_cast<long>(m["CreatedTime"]));
    }
    if (m.find("PolicyBindingCount") != m.end() && !m["PolicyBindingCount"].empty()) {
      policyBindingCount = make_shared<long>(boost::any_cast<long>(m["PolicyBindingCount"]));
    }
    if (m.find("PolicyDescription") != m.end() && !m["PolicyDescription"].empty()) {
      policyDescription = make_shared<string>(boost::any_cast<string>(m["PolicyDescription"]));
    }
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      if (typeid(vector<boost::any>) == m["Rules"].type()) {
        vector<DescribePoliciesV2ResponseBodyPoliciesRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Rules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePoliciesV2ResponseBodyPoliciesRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rules = make_shared<vector<DescribePoliciesV2ResponseBodyPoliciesRules>>(expect1);
      }
    }
    if (m.find("UpdatedTime") != m.end() && !m["UpdatedTime"].empty()) {
      updatedTime = make_shared<long>(boost::any_cast<long>(m["UpdatedTime"]));
    }
  }


  virtual ~DescribePoliciesV2ResponseBodyPolicies() = default;
};
class DescribePoliciesV2ResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> message{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<DescribePoliciesV2ResponseBodyPolicies>> policies{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  DescribePoliciesV2ResponseBody() {}

  explicit DescribePoliciesV2ResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
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
    if (policies) {
      vector<boost::any> temp1;
      for(auto item1:*policies){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Policies"] = boost::any(temp1);
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
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Policies") != m.end() && !m["Policies"].empty()) {
      if (typeid(vector<boost::any>) == m["Policies"].type()) {
        vector<DescribePoliciesV2ResponseBodyPolicies> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Policies"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePoliciesV2ResponseBodyPolicies model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        policies = make_shared<vector<DescribePoliciesV2ResponseBodyPolicies>>(expect1);
      }
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
  }


  virtual ~DescribePoliciesV2ResponseBody() = default;
};
class DescribePoliciesV2Response : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribePoliciesV2ResponseBody> body{};

  DescribePoliciesV2Response() {}

  explicit DescribePoliciesV2Response(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribePoliciesV2ResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePoliciesV2ResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePoliciesV2Response() = default;
};
class DescribePolicyBindingsRequestFilters : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> operator_{};
  shared_ptr<vector<string>> values{};

  DescribePolicyBindingsRequestFilters() {}

  explicit DescribePolicyBindingsRequestFilters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (operator_) {
      res["Operator"] = boost::any(*operator_);
    }
    if (values) {
      res["Values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Operator") != m.end() && !m["Operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["Operator"]));
    }
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribePolicyBindingsRequestFilters() = default;
};
class DescribePolicyBindingsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> dataSourceIds{};
  shared_ptr<vector<DescribePolicyBindingsRequestFilters>> filters{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> policyId{};
  shared_ptr<string> sourceType{};

  DescribePolicyBindingsRequest() {}

  explicit DescribePolicyBindingsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSourceIds) {
      res["DataSourceIds"] = boost::any(*dataSourceIds);
    }
    if (filters) {
      vector<boost::any> temp1;
      for(auto item1:*filters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Filters"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataSourceIds") != m.end() && !m["DataSourceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DataSourceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DataSourceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dataSourceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Filters") != m.end() && !m["Filters"].empty()) {
      if (typeid(vector<boost::any>) == m["Filters"].type()) {
        vector<DescribePolicyBindingsRequestFilters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Filters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePolicyBindingsRequestFilters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filters = make_shared<vector<DescribePolicyBindingsRequestFilters>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
  }


  virtual ~DescribePolicyBindingsRequest() = default;
};
class DescribePolicyBindingsShrinkRequestFilters : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> operator_{};
  shared_ptr<vector<string>> values{};

  DescribePolicyBindingsShrinkRequestFilters() {}

  explicit DescribePolicyBindingsShrinkRequestFilters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (operator_) {
      res["Operator"] = boost::any(*operator_);
    }
    if (values) {
      res["Values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Operator") != m.end() && !m["Operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["Operator"]));
    }
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribePolicyBindingsShrinkRequestFilters() = default;
};
class DescribePolicyBindingsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataSourceIdsShrink{};
  shared_ptr<vector<DescribePolicyBindingsShrinkRequestFilters>> filters{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> policyId{};
  shared_ptr<string> sourceType{};

  DescribePolicyBindingsShrinkRequest() {}

  explicit DescribePolicyBindingsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSourceIdsShrink) {
      res["DataSourceIds"] = boost::any(*dataSourceIdsShrink);
    }
    if (filters) {
      vector<boost::any> temp1;
      for(auto item1:*filters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Filters"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataSourceIds") != m.end() && !m["DataSourceIds"].empty()) {
      dataSourceIdsShrink = make_shared<string>(boost::any_cast<string>(m["DataSourceIds"]));
    }
    if (m.find("Filters") != m.end() && !m["Filters"].empty()) {
      if (typeid(vector<boost::any>) == m["Filters"].type()) {
        vector<DescribePolicyBindingsShrinkRequestFilters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Filters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePolicyBindingsShrinkRequestFilters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filters = make_shared<vector<DescribePolicyBindingsShrinkRequestFilters>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
  }


  virtual ~DescribePolicyBindingsShrinkRequest() = default;
};
class DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsCommonFileSystemDetail : public Darabonba::Model {
public:
  shared_ptr<long> fetchSliceSize{};
  shared_ptr<bool> fullOnIncrementFail{};

  DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsCommonFileSystemDetail() {}

  explicit DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsCommonFileSystemDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fetchSliceSize) {
      res["FetchSliceSize"] = boost::any(*fetchSliceSize);
    }
    if (fullOnIncrementFail) {
      res["FullOnIncrementFail"] = boost::any(*fullOnIncrementFail);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FetchSliceSize") != m.end() && !m["FetchSliceSize"].empty()) {
      fetchSliceSize = make_shared<long>(boost::any_cast<long>(m["FetchSliceSize"]));
    }
    if (m.find("FullOnIncrementFail") != m.end() && !m["FullOnIncrementFail"].empty()) {
      fullOnIncrementFail = make_shared<bool>(boost::any_cast<bool>(m["FullOnIncrementFail"]));
    }
  }


  virtual ~DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsCommonFileSystemDetail() = default;
};
class DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsCommonNasDetail : public Darabonba::Model {
public:
  shared_ptr<string> clientId{};
  shared_ptr<string> clusterId{};
  shared_ptr<long> fetchSliceSize{};
  shared_ptr<bool> fullOnIncrementFail{};

  DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsCommonNasDetail() {}

  explicit DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsCommonNasDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (fetchSliceSize) {
      res["FetchSliceSize"] = boost::any(*fetchSliceSize);
    }
    if (fullOnIncrementFail) {
      res["FullOnIncrementFail"] = boost::any(*fullOnIncrementFail);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("FetchSliceSize") != m.end() && !m["FetchSliceSize"].empty()) {
      fetchSliceSize = make_shared<long>(boost::any_cast<long>(m["FetchSliceSize"]));
    }
    if (m.find("FullOnIncrementFail") != m.end() && !m["FullOnIncrementFail"].empty()) {
      fullOnIncrementFail = make_shared<bool>(boost::any_cast<bool>(m["FullOnIncrementFail"]));
    }
  }


  virtual ~DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsCommonNasDetail() = default;
};
class DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsFileDetail : public Darabonba::Model {
public:
  shared_ptr<bool> advPolicy{};
  shared_ptr<bool> useVSS{};

  DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsFileDetail() {}

  explicit DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsFileDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (advPolicy) {
      res["AdvPolicy"] = boost::any(*advPolicy);
    }
    if (useVSS) {
      res["UseVSS"] = boost::any(*useVSS);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdvPolicy") != m.end() && !m["AdvPolicy"].empty()) {
      advPolicy = make_shared<bool>(boost::any_cast<bool>(m["AdvPolicy"]));
    }
    if (m.find("UseVSS") != m.end() && !m["UseVSS"].empty()) {
      useVSS = make_shared<bool>(boost::any_cast<bool>(m["UseVSS"]));
    }
  }


  virtual ~DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsFileDetail() = default;
};
class DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsOssDetail : public Darabonba::Model {
public:
  shared_ptr<string> inventoryCleanupPolicy{};
  shared_ptr<string> inventoryId{};

  DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsOssDetail() {}

  explicit DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsOssDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inventoryCleanupPolicy) {
      res["InventoryCleanupPolicy"] = boost::any(*inventoryCleanupPolicy);
    }
    if (inventoryId) {
      res["InventoryId"] = boost::any(*inventoryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InventoryCleanupPolicy") != m.end() && !m["InventoryCleanupPolicy"].empty()) {
      inventoryCleanupPolicy = make_shared<string>(boost::any_cast<string>(m["InventoryCleanupPolicy"]));
    }
    if (m.find("InventoryId") != m.end() && !m["InventoryId"].empty()) {
      inventoryId = make_shared<string>(boost::any_cast<string>(m["InventoryId"]));
    }
  }


  virtual ~DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsOssDetail() = default;
};
class DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsUdmDetail : public Darabonba::Model {
public:
  shared_ptr<bool> appConsistent{};
  shared_ptr<string> destinationKmsKeyId{};
  shared_ptr<vector<string>> diskIdList{};
  shared_ptr<bool> enableFsFreeze{};
  shared_ptr<bool> enableWriters{};
  shared_ptr<vector<string>> excludeDiskIdList{};
  shared_ptr<string> postScriptPath{};
  shared_ptr<string> preScriptPath{};
  shared_ptr<string> ramRoleName{};
  shared_ptr<bool> snapshotGroup{};
  shared_ptr<long> timeoutInSeconds{};

  DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsUdmDetail() {}

  explicit DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsUdmDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appConsistent) {
      res["AppConsistent"] = boost::any(*appConsistent);
    }
    if (destinationKmsKeyId) {
      res["DestinationKmsKeyId"] = boost::any(*destinationKmsKeyId);
    }
    if (diskIdList) {
      res["DiskIdList"] = boost::any(*diskIdList);
    }
    if (enableFsFreeze) {
      res["EnableFsFreeze"] = boost::any(*enableFsFreeze);
    }
    if (enableWriters) {
      res["EnableWriters"] = boost::any(*enableWriters);
    }
    if (excludeDiskIdList) {
      res["ExcludeDiskIdList"] = boost::any(*excludeDiskIdList);
    }
    if (postScriptPath) {
      res["PostScriptPath"] = boost::any(*postScriptPath);
    }
    if (preScriptPath) {
      res["PreScriptPath"] = boost::any(*preScriptPath);
    }
    if (ramRoleName) {
      res["RamRoleName"] = boost::any(*ramRoleName);
    }
    if (snapshotGroup) {
      res["SnapshotGroup"] = boost::any(*snapshotGroup);
    }
    if (timeoutInSeconds) {
      res["TimeoutInSeconds"] = boost::any(*timeoutInSeconds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppConsistent") != m.end() && !m["AppConsistent"].empty()) {
      appConsistent = make_shared<bool>(boost::any_cast<bool>(m["AppConsistent"]));
    }
    if (m.find("DestinationKmsKeyId") != m.end() && !m["DestinationKmsKeyId"].empty()) {
      destinationKmsKeyId = make_shared<string>(boost::any_cast<string>(m["DestinationKmsKeyId"]));
    }
    if (m.find("DiskIdList") != m.end() && !m["DiskIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DiskIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DiskIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      diskIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("EnableFsFreeze") != m.end() && !m["EnableFsFreeze"].empty()) {
      enableFsFreeze = make_shared<bool>(boost::any_cast<bool>(m["EnableFsFreeze"]));
    }
    if (m.find("EnableWriters") != m.end() && !m["EnableWriters"].empty()) {
      enableWriters = make_shared<bool>(boost::any_cast<bool>(m["EnableWriters"]));
    }
    if (m.find("ExcludeDiskIdList") != m.end() && !m["ExcludeDiskIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ExcludeDiskIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ExcludeDiskIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      excludeDiskIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PostScriptPath") != m.end() && !m["PostScriptPath"].empty()) {
      postScriptPath = make_shared<string>(boost::any_cast<string>(m["PostScriptPath"]));
    }
    if (m.find("PreScriptPath") != m.end() && !m["PreScriptPath"].empty()) {
      preScriptPath = make_shared<string>(boost::any_cast<string>(m["PreScriptPath"]));
    }
    if (m.find("RamRoleName") != m.end() && !m["RamRoleName"].empty()) {
      ramRoleName = make_shared<string>(boost::any_cast<string>(m["RamRoleName"]));
    }
    if (m.find("SnapshotGroup") != m.end() && !m["SnapshotGroup"].empty()) {
      snapshotGroup = make_shared<bool>(boost::any_cast<bool>(m["SnapshotGroup"]));
    }
    if (m.find("TimeoutInSeconds") != m.end() && !m["TimeoutInSeconds"].empty()) {
      timeoutInSeconds = make_shared<long>(boost::any_cast<long>(m["TimeoutInSeconds"]));
    }
  }


  virtual ~DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsUdmDetail() = default;
};
class DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptions : public Darabonba::Model {
public:
  shared_ptr<DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsCommonFileSystemDetail> commonFileSystemDetail{};
  shared_ptr<DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsCommonNasDetail> commonNasDetail{};
  shared_ptr<DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsFileDetail> fileDetail{};
  shared_ptr<DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsOssDetail> ossDetail{};
  shared_ptr<DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsUdmDetail> udmDetail{};

  DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptions() {}

  explicit DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonFileSystemDetail) {
      res["CommonFileSystemDetail"] = commonFileSystemDetail ? boost::any(commonFileSystemDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (commonNasDetail) {
      res["CommonNasDetail"] = commonNasDetail ? boost::any(commonNasDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (fileDetail) {
      res["FileDetail"] = fileDetail ? boost::any(fileDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ossDetail) {
      res["OssDetail"] = ossDetail ? boost::any(ossDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (udmDetail) {
      res["UdmDetail"] = udmDetail ? boost::any(udmDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CommonFileSystemDetail") != m.end() && !m["CommonFileSystemDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["CommonFileSystemDetail"].type()) {
        DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsCommonFileSystemDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CommonFileSystemDetail"]));
        commonFileSystemDetail = make_shared<DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsCommonFileSystemDetail>(model1);
      }
    }
    if (m.find("CommonNasDetail") != m.end() && !m["CommonNasDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["CommonNasDetail"].type()) {
        DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsCommonNasDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CommonNasDetail"]));
        commonNasDetail = make_shared<DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsCommonNasDetail>(model1);
      }
    }
    if (m.find("FileDetail") != m.end() && !m["FileDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["FileDetail"].type()) {
        DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsFileDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FileDetail"]));
        fileDetail = make_shared<DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsFileDetail>(model1);
      }
    }
    if (m.find("OssDetail") != m.end() && !m["OssDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["OssDetail"].type()) {
        DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsOssDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OssDetail"]));
        ossDetail = make_shared<DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsOssDetail>(model1);
      }
    }
    if (m.find("UdmDetail") != m.end() && !m["UdmDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["UdmDetail"].type()) {
        DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsUdmDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UdmDetail"]));
        udmDetail = make_shared<DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsUdmDetail>(model1);
      }
    }
  }


  virtual ~DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptions() = default;
};
class DescribePolicyBindingsResponseBodyPolicyBindingsHitTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> operator_{};
  shared_ptr<string> value{};

  DescribePolicyBindingsResponseBodyPolicyBindingsHitTags() {}

  explicit DescribePolicyBindingsResponseBodyPolicyBindingsHitTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (operator_) {
      res["Operator"] = boost::any(*operator_);
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
    if (m.find("Operator") != m.end() && !m["Operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["Operator"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribePolicyBindingsResponseBodyPolicyBindingsHitTags() = default;
};
class DescribePolicyBindingsResponseBodyPolicyBindings : public Darabonba::Model {
public:
  shared_ptr<DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptions> advancedOptions{};
  shared_ptr<bool> createdByTag{};
  shared_ptr<long> createdTime{};
  shared_ptr<string> crossAccountRoleName{};
  shared_ptr<string> crossAccountType{};
  shared_ptr<long> crossAccountUserId{};
  shared_ptr<string> dataSourceId{};
  shared_ptr<bool> disabled{};
  shared_ptr<string> exclude{};
  shared_ptr<vector<DescribePolicyBindingsResponseBodyPolicyBindingsHitTags>> hitTags{};
  shared_ptr<string> include{};
  shared_ptr<string> policyBindingDescription{};
  shared_ptr<string> policyBindingId{};
  shared_ptr<string> policyId{};
  shared_ptr<string> source{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> speedLimit{};
  shared_ptr<long> updatedTime{};

  DescribePolicyBindingsResponseBodyPolicyBindings() {}

  explicit DescribePolicyBindingsResponseBodyPolicyBindings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (advancedOptions) {
      res["AdvancedOptions"] = advancedOptions ? boost::any(advancedOptions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (createdByTag) {
      res["CreatedByTag"] = boost::any(*createdByTag);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (crossAccountRoleName) {
      res["CrossAccountRoleName"] = boost::any(*crossAccountRoleName);
    }
    if (crossAccountType) {
      res["CrossAccountType"] = boost::any(*crossAccountType);
    }
    if (crossAccountUserId) {
      res["CrossAccountUserId"] = boost::any(*crossAccountUserId);
    }
    if (dataSourceId) {
      res["DataSourceId"] = boost::any(*dataSourceId);
    }
    if (disabled) {
      res["Disabled"] = boost::any(*disabled);
    }
    if (exclude) {
      res["Exclude"] = boost::any(*exclude);
    }
    if (hitTags) {
      vector<boost::any> temp1;
      for(auto item1:*hitTags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HitTags"] = boost::any(temp1);
    }
    if (include) {
      res["Include"] = boost::any(*include);
    }
    if (policyBindingDescription) {
      res["PolicyBindingDescription"] = boost::any(*policyBindingDescription);
    }
    if (policyBindingId) {
      res["PolicyBindingId"] = boost::any(*policyBindingId);
    }
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (speedLimit) {
      res["SpeedLimit"] = boost::any(*speedLimit);
    }
    if (updatedTime) {
      res["UpdatedTime"] = boost::any(*updatedTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdvancedOptions") != m.end() && !m["AdvancedOptions"].empty()) {
      if (typeid(map<string, boost::any>) == m["AdvancedOptions"].type()) {
        DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AdvancedOptions"]));
        advancedOptions = make_shared<DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptions>(model1);
      }
    }
    if (m.find("CreatedByTag") != m.end() && !m["CreatedByTag"].empty()) {
      createdByTag = make_shared<bool>(boost::any_cast<bool>(m["CreatedByTag"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<long>(boost::any_cast<long>(m["CreatedTime"]));
    }
    if (m.find("CrossAccountRoleName") != m.end() && !m["CrossAccountRoleName"].empty()) {
      crossAccountRoleName = make_shared<string>(boost::any_cast<string>(m["CrossAccountRoleName"]));
    }
    if (m.find("CrossAccountType") != m.end() && !m["CrossAccountType"].empty()) {
      crossAccountType = make_shared<string>(boost::any_cast<string>(m["CrossAccountType"]));
    }
    if (m.find("CrossAccountUserId") != m.end() && !m["CrossAccountUserId"].empty()) {
      crossAccountUserId = make_shared<long>(boost::any_cast<long>(m["CrossAccountUserId"]));
    }
    if (m.find("DataSourceId") != m.end() && !m["DataSourceId"].empty()) {
      dataSourceId = make_shared<string>(boost::any_cast<string>(m["DataSourceId"]));
    }
    if (m.find("Disabled") != m.end() && !m["Disabled"].empty()) {
      disabled = make_shared<bool>(boost::any_cast<bool>(m["Disabled"]));
    }
    if (m.find("Exclude") != m.end() && !m["Exclude"].empty()) {
      exclude = make_shared<string>(boost::any_cast<string>(m["Exclude"]));
    }
    if (m.find("HitTags") != m.end() && !m["HitTags"].empty()) {
      if (typeid(vector<boost::any>) == m["HitTags"].type()) {
        vector<DescribePolicyBindingsResponseBodyPolicyBindingsHitTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HitTags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePolicyBindingsResponseBodyPolicyBindingsHitTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hitTags = make_shared<vector<DescribePolicyBindingsResponseBodyPolicyBindingsHitTags>>(expect1);
      }
    }
    if (m.find("Include") != m.end() && !m["Include"].empty()) {
      include = make_shared<string>(boost::any_cast<string>(m["Include"]));
    }
    if (m.find("PolicyBindingDescription") != m.end() && !m["PolicyBindingDescription"].empty()) {
      policyBindingDescription = make_shared<string>(boost::any_cast<string>(m["PolicyBindingDescription"]));
    }
    if (m.find("PolicyBindingId") != m.end() && !m["PolicyBindingId"].empty()) {
      policyBindingId = make_shared<string>(boost::any_cast<string>(m["PolicyBindingId"]));
    }
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("SpeedLimit") != m.end() && !m["SpeedLimit"].empty()) {
      speedLimit = make_shared<string>(boost::any_cast<string>(m["SpeedLimit"]));
    }
    if (m.find("UpdatedTime") != m.end() && !m["UpdatedTime"].empty()) {
      updatedTime = make_shared<long>(boost::any_cast<long>(m["UpdatedTime"]));
    }
  }


  virtual ~DescribePolicyBindingsResponseBodyPolicyBindings() = default;
};
class DescribePolicyBindingsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> message{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<DescribePolicyBindingsResponseBodyPolicyBindings>> policyBindings{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  DescribePolicyBindingsResponseBody() {}

  explicit DescribePolicyBindingsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
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
    if (policyBindings) {
      vector<boost::any> temp1;
      for(auto item1:*policyBindings){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PolicyBindings"] = boost::any(temp1);
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
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("PolicyBindings") != m.end() && !m["PolicyBindings"].empty()) {
      if (typeid(vector<boost::any>) == m["PolicyBindings"].type()) {
        vector<DescribePolicyBindingsResponseBodyPolicyBindings> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PolicyBindings"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePolicyBindingsResponseBodyPolicyBindings model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        policyBindings = make_shared<vector<DescribePolicyBindingsResponseBodyPolicyBindings>>(expect1);
      }
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
  }


  virtual ~DescribePolicyBindingsResponseBody() = default;
};
class DescribePolicyBindingsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribePolicyBindingsResponseBody> body{};

  DescribePolicyBindingsResponse() {}

  explicit DescribePolicyBindingsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribePolicyBindingsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePolicyBindingsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePolicyBindingsResponse() = default;
};
class DescribeRecoverableOtsInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<string> crossAccountRoleName{};
  shared_ptr<string> crossAccountType{};
  shared_ptr<long> crossAccountUserId{};

  DescribeRecoverableOtsInstancesRequest() {}

  explicit DescribeRecoverableOtsInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (crossAccountRoleName) {
      res["CrossAccountRoleName"] = boost::any(*crossAccountRoleName);
    }
    if (crossAccountType) {
      res["CrossAccountType"] = boost::any(*crossAccountType);
    }
    if (crossAccountUserId) {
      res["CrossAccountUserId"] = boost::any(*crossAccountUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CrossAccountRoleName") != m.end() && !m["CrossAccountRoleName"].empty()) {
      crossAccountRoleName = make_shared<string>(boost::any_cast<string>(m["CrossAccountRoleName"]));
    }
    if (m.find("CrossAccountType") != m.end() && !m["CrossAccountType"].empty()) {
      crossAccountType = make_shared<string>(boost::any_cast<string>(m["CrossAccountType"]));
    }
    if (m.find("CrossAccountUserId") != m.end() && !m["CrossAccountUserId"].empty()) {
      crossAccountUserId = make_shared<long>(boost::any_cast<long>(m["CrossAccountUserId"]));
    }
  }


  virtual ~DescribeRecoverableOtsInstancesRequest() = default;
};
class DescribeRecoverableOtsInstancesResponseBodyOtsInstances : public Darabonba::Model {
public:
  shared_ptr<string> instanceName{};
  shared_ptr<vector<string>> tableNames{};

  DescribeRecoverableOtsInstancesResponseBodyOtsInstances() {}

  explicit DescribeRecoverableOtsInstancesResponseBodyOtsInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (tableNames) {
      res["TableNames"] = boost::any(*tableNames);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("TableNames") != m.end() && !m["TableNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TableNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TableNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tableNames = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeRecoverableOtsInstancesResponseBodyOtsInstances() = default;
};
class DescribeRecoverableOtsInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<vector<DescribeRecoverableOtsInstancesResponseBodyOtsInstances>> otsInstances{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeRecoverableOtsInstancesResponseBody() {}

  explicit DescribeRecoverableOtsInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (otsInstances) {
      vector<boost::any> temp1;
      for(auto item1:*otsInstances){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OtsInstances"] = boost::any(temp1);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("OtsInstances") != m.end() && !m["OtsInstances"].empty()) {
      if (typeid(vector<boost::any>) == m["OtsInstances"].type()) {
        vector<DescribeRecoverableOtsInstancesResponseBodyOtsInstances> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OtsInstances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRecoverableOtsInstancesResponseBodyOtsInstances model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        otsInstances = make_shared<vector<DescribeRecoverableOtsInstancesResponseBodyOtsInstances>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DescribeRecoverableOtsInstancesResponseBody() = default;
};
class DescribeRecoverableOtsInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeRecoverableOtsInstancesResponseBody> body{};

  DescribeRecoverableOtsInstancesResponse() {}

  explicit DescribeRecoverableOtsInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeRecoverableOtsInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRecoverableOtsInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRecoverableOtsInstancesResponse() = default;
};
class DescribeRegionsResponseBodyRegionsRegion : public Darabonba::Model {
public:
  shared_ptr<string> localName{};
  shared_ptr<string> regionId{};

  DescribeRegionsResponseBodyRegionsRegion() {}

  explicit DescribeRegionsResponseBodyRegionsRegion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (localName) {
      res["LocalName"] = boost::any(*localName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LocalName") != m.end() && !m["LocalName"].empty()) {
      localName = make_shared<string>(boost::any_cast<string>(m["LocalName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeRegionsResponseBodyRegionsRegion() = default;
};
class DescribeRegionsResponseBodyRegions : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRegionsResponseBodyRegionsRegion>> region{};

  DescribeRegionsResponseBodyRegions() {}

  explicit DescribeRegionsResponseBodyRegions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (region) {
      vector<boost::any> temp1;
      for(auto item1:*region){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Region"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      if (typeid(vector<boost::any>) == m["Region"].type()) {
        vector<DescribeRegionsResponseBodyRegionsRegion> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Region"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRegionsResponseBodyRegionsRegion model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        region = make_shared<vector<DescribeRegionsResponseBodyRegionsRegion>>(expect1);
      }
    }
  }


  virtual ~DescribeRegionsResponseBodyRegions() = default;
};
class DescribeRegionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
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
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
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
class DescribeRestoreJobs2RequestFilters : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> operator_{};
  shared_ptr<vector<string>> values{};

  DescribeRestoreJobs2RequestFilters() {}

  explicit DescribeRestoreJobs2RequestFilters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (operator_) {
      res["Operator"] = boost::any(*operator_);
    }
    if (values) {
      res["Values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Operator") != m.end() && !m["Operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["Operator"]));
    }
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeRestoreJobs2RequestFilters() = default;
};
class DescribeRestoreJobs2Request : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRestoreJobs2RequestFilters>> filters{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> restoreType{};

  DescribeRestoreJobs2Request() {}

  explicit DescribeRestoreJobs2Request(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filters) {
      vector<boost::any> temp1;
      for(auto item1:*filters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Filters"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (restoreType) {
      res["RestoreType"] = boost::any(*restoreType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Filters") != m.end() && !m["Filters"].empty()) {
      if (typeid(vector<boost::any>) == m["Filters"].type()) {
        vector<DescribeRestoreJobs2RequestFilters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Filters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRestoreJobs2RequestFilters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filters = make_shared<vector<DescribeRestoreJobs2RequestFilters>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RestoreType") != m.end() && !m["RestoreType"].empty()) {
      restoreType = make_shared<string>(boost::any_cast<string>(m["RestoreType"]));
    }
  }


  virtual ~DescribeRestoreJobs2Request() = default;
};
class DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJobOtsDetail : public Darabonba::Model {
public:
  shared_ptr<long> batchChannelCount{};
  shared_ptr<bool> overwriteExisting{};

  DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJobOtsDetail() {}

  explicit DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJobOtsDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (batchChannelCount) {
      res["BatchChannelCount"] = boost::any(*batchChannelCount);
    }
    if (overwriteExisting) {
      res["OverwriteExisting"] = boost::any(*overwriteExisting);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BatchChannelCount") != m.end() && !m["BatchChannelCount"].empty()) {
      batchChannelCount = make_shared<long>(boost::any_cast<long>(m["BatchChannelCount"]));
    }
    if (m.find("OverwriteExisting") != m.end() && !m["OverwriteExisting"].empty()) {
      overwriteExisting = make_shared<bool>(boost::any_cast<bool>(m["OverwriteExisting"]));
    }
  }


  virtual ~DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJobOtsDetail() = default;
};
class DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJobReport : public Darabonba::Model {
public:
  shared_ptr<string> failedFiles{};
  shared_ptr<string> reportTaskStatus{};
  shared_ptr<string> skippedFiles{};
  shared_ptr<string> successFiles{};
  shared_ptr<string> totalFiles{};

  DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJobReport() {}

  explicit DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJobReport(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (failedFiles) {
      res["FailedFiles"] = boost::any(*failedFiles);
    }
    if (reportTaskStatus) {
      res["ReportTaskStatus"] = boost::any(*reportTaskStatus);
    }
    if (skippedFiles) {
      res["SkippedFiles"] = boost::any(*skippedFiles);
    }
    if (successFiles) {
      res["SuccessFiles"] = boost::any(*successFiles);
    }
    if (totalFiles) {
      res["TotalFiles"] = boost::any(*totalFiles);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FailedFiles") != m.end() && !m["FailedFiles"].empty()) {
      failedFiles = make_shared<string>(boost::any_cast<string>(m["FailedFiles"]));
    }
    if (m.find("ReportTaskStatus") != m.end() && !m["ReportTaskStatus"].empty()) {
      reportTaskStatus = make_shared<string>(boost::any_cast<string>(m["ReportTaskStatus"]));
    }
    if (m.find("SkippedFiles") != m.end() && !m["SkippedFiles"].empty()) {
      skippedFiles = make_shared<string>(boost::any_cast<string>(m["SkippedFiles"]));
    }
    if (m.find("SuccessFiles") != m.end() && !m["SuccessFiles"].empty()) {
      successFiles = make_shared<string>(boost::any_cast<string>(m["SuccessFiles"]));
    }
    if (m.find("TotalFiles") != m.end() && !m["TotalFiles"].empty()) {
      totalFiles = make_shared<string>(boost::any_cast<string>(m["TotalFiles"]));
    }
  }


  virtual ~DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJobReport() = default;
};
class DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob : public Darabonba::Model {
public:
  shared_ptr<long> actualBytes{};
  shared_ptr<long> actualItems{};
  shared_ptr<long> bytesDone{};
  shared_ptr<long> bytesTotal{};
  shared_ptr<string> clusterId{};
  shared_ptr<long> completeTime{};
  shared_ptr<long> createdTime{};
  shared_ptr<string> crossAccountRoleName{};
  shared_ptr<string> crossAccountType{};
  shared_ptr<long> crossAccountUserId{};
  shared_ptr<string> errorFile{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> exclude{};
  shared_ptr<long> expireTime{};
  shared_ptr<string> failbackDetail{};
  shared_ptr<string> include{};
  shared_ptr<long> itemsDone{};
  shared_ptr<long> itemsTotal{};
  shared_ptr<long> meteringBytesDone{};
  shared_ptr<long> meteringBytesTotal{};
  shared_ptr<string> options{};
  shared_ptr<DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJobOtsDetail> otsDetail{};
  shared_ptr<string> parentId{};
  shared_ptr<long> progress{};
  shared_ptr<DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJobReport> report{};
  shared_ptr<string> restoreId{};
  shared_ptr<string> restoreType{};
  shared_ptr<string> snapshotHash{};
  shared_ptr<string> snapshotId{};
  shared_ptr<string> sourceType{};
  shared_ptr<long> speed{};
  shared_ptr<long> startTime{};
  shared_ptr<string> status{};
  shared_ptr<string> storageClass{};
  shared_ptr<string> targetBucket{};
  shared_ptr<string> targetClientId{};
  shared_ptr<long> targetCreateTime{};
  shared_ptr<string> targetDataSourceId{};
  shared_ptr<string> targetFileSystemId{};
  shared_ptr<string> targetInstanceId{};
  shared_ptr<string> targetInstanceName{};
  shared_ptr<string> targetPath{};
  shared_ptr<string> targetPrefix{};
  shared_ptr<string> targetTableName{};
  shared_ptr<long> targetTime{};
  shared_ptr<string> udmDetail{};
  shared_ptr<long> updatedTime{};
  shared_ptr<string> vaultId{};

  DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob() {}

  explicit DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actualBytes) {
      res["ActualBytes"] = boost::any(*actualBytes);
    }
    if (actualItems) {
      res["ActualItems"] = boost::any(*actualItems);
    }
    if (bytesDone) {
      res["BytesDone"] = boost::any(*bytesDone);
    }
    if (bytesTotal) {
      res["BytesTotal"] = boost::any(*bytesTotal);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (completeTime) {
      res["CompleteTime"] = boost::any(*completeTime);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (crossAccountRoleName) {
      res["CrossAccountRoleName"] = boost::any(*crossAccountRoleName);
    }
    if (crossAccountType) {
      res["CrossAccountType"] = boost::any(*crossAccountType);
    }
    if (crossAccountUserId) {
      res["CrossAccountUserId"] = boost::any(*crossAccountUserId);
    }
    if (errorFile) {
      res["ErrorFile"] = boost::any(*errorFile);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (exclude) {
      res["Exclude"] = boost::any(*exclude);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (failbackDetail) {
      res["FailbackDetail"] = boost::any(*failbackDetail);
    }
    if (include) {
      res["Include"] = boost::any(*include);
    }
    if (itemsDone) {
      res["ItemsDone"] = boost::any(*itemsDone);
    }
    if (itemsTotal) {
      res["ItemsTotal"] = boost::any(*itemsTotal);
    }
    if (meteringBytesDone) {
      res["MeteringBytesDone"] = boost::any(*meteringBytesDone);
    }
    if (meteringBytesTotal) {
      res["MeteringBytesTotal"] = boost::any(*meteringBytesTotal);
    }
    if (options) {
      res["Options"] = boost::any(*options);
    }
    if (otsDetail) {
      res["OtsDetail"] = otsDetail ? boost::any(otsDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (parentId) {
      res["ParentId"] = boost::any(*parentId);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (report) {
      res["Report"] = report ? boost::any(report->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (restoreId) {
      res["RestoreId"] = boost::any(*restoreId);
    }
    if (restoreType) {
      res["RestoreType"] = boost::any(*restoreType);
    }
    if (snapshotHash) {
      res["SnapshotHash"] = boost::any(*snapshotHash);
    }
    if (snapshotId) {
      res["SnapshotId"] = boost::any(*snapshotId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (speed) {
      res["Speed"] = boost::any(*speed);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (storageClass) {
      res["StorageClass"] = boost::any(*storageClass);
    }
    if (targetBucket) {
      res["TargetBucket"] = boost::any(*targetBucket);
    }
    if (targetClientId) {
      res["TargetClientId"] = boost::any(*targetClientId);
    }
    if (targetCreateTime) {
      res["TargetCreateTime"] = boost::any(*targetCreateTime);
    }
    if (targetDataSourceId) {
      res["TargetDataSourceId"] = boost::any(*targetDataSourceId);
    }
    if (targetFileSystemId) {
      res["TargetFileSystemId"] = boost::any(*targetFileSystemId);
    }
    if (targetInstanceId) {
      res["TargetInstanceId"] = boost::any(*targetInstanceId);
    }
    if (targetInstanceName) {
      res["TargetInstanceName"] = boost::any(*targetInstanceName);
    }
    if (targetPath) {
      res["TargetPath"] = boost::any(*targetPath);
    }
    if (targetPrefix) {
      res["TargetPrefix"] = boost::any(*targetPrefix);
    }
    if (targetTableName) {
      res["TargetTableName"] = boost::any(*targetTableName);
    }
    if (targetTime) {
      res["TargetTime"] = boost::any(*targetTime);
    }
    if (udmDetail) {
      res["UdmDetail"] = boost::any(*udmDetail);
    }
    if (updatedTime) {
      res["UpdatedTime"] = boost::any(*updatedTime);
    }
    if (vaultId) {
      res["VaultId"] = boost::any(*vaultId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActualBytes") != m.end() && !m["ActualBytes"].empty()) {
      actualBytes = make_shared<long>(boost::any_cast<long>(m["ActualBytes"]));
    }
    if (m.find("ActualItems") != m.end() && !m["ActualItems"].empty()) {
      actualItems = make_shared<long>(boost::any_cast<long>(m["ActualItems"]));
    }
    if (m.find("BytesDone") != m.end() && !m["BytesDone"].empty()) {
      bytesDone = make_shared<long>(boost::any_cast<long>(m["BytesDone"]));
    }
    if (m.find("BytesTotal") != m.end() && !m["BytesTotal"].empty()) {
      bytesTotal = make_shared<long>(boost::any_cast<long>(m["BytesTotal"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("CompleteTime") != m.end() && !m["CompleteTime"].empty()) {
      completeTime = make_shared<long>(boost::any_cast<long>(m["CompleteTime"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<long>(boost::any_cast<long>(m["CreatedTime"]));
    }
    if (m.find("CrossAccountRoleName") != m.end() && !m["CrossAccountRoleName"].empty()) {
      crossAccountRoleName = make_shared<string>(boost::any_cast<string>(m["CrossAccountRoleName"]));
    }
    if (m.find("CrossAccountType") != m.end() && !m["CrossAccountType"].empty()) {
      crossAccountType = make_shared<string>(boost::any_cast<string>(m["CrossAccountType"]));
    }
    if (m.find("CrossAccountUserId") != m.end() && !m["CrossAccountUserId"].empty()) {
      crossAccountUserId = make_shared<long>(boost::any_cast<long>(m["CrossAccountUserId"]));
    }
    if (m.find("ErrorFile") != m.end() && !m["ErrorFile"].empty()) {
      errorFile = make_shared<string>(boost::any_cast<string>(m["ErrorFile"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Exclude") != m.end() && !m["Exclude"].empty()) {
      exclude = make_shared<string>(boost::any_cast<string>(m["Exclude"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<long>(boost::any_cast<long>(m["ExpireTime"]));
    }
    if (m.find("FailbackDetail") != m.end() && !m["FailbackDetail"].empty()) {
      failbackDetail = make_shared<string>(boost::any_cast<string>(m["FailbackDetail"]));
    }
    if (m.find("Include") != m.end() && !m["Include"].empty()) {
      include = make_shared<string>(boost::any_cast<string>(m["Include"]));
    }
    if (m.find("ItemsDone") != m.end() && !m["ItemsDone"].empty()) {
      itemsDone = make_shared<long>(boost::any_cast<long>(m["ItemsDone"]));
    }
    if (m.find("ItemsTotal") != m.end() && !m["ItemsTotal"].empty()) {
      itemsTotal = make_shared<long>(boost::any_cast<long>(m["ItemsTotal"]));
    }
    if (m.find("MeteringBytesDone") != m.end() && !m["MeteringBytesDone"].empty()) {
      meteringBytesDone = make_shared<long>(boost::any_cast<long>(m["MeteringBytesDone"]));
    }
    if (m.find("MeteringBytesTotal") != m.end() && !m["MeteringBytesTotal"].empty()) {
      meteringBytesTotal = make_shared<long>(boost::any_cast<long>(m["MeteringBytesTotal"]));
    }
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      options = make_shared<string>(boost::any_cast<string>(m["Options"]));
    }
    if (m.find("OtsDetail") != m.end() && !m["OtsDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["OtsDetail"].type()) {
        DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJobOtsDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OtsDetail"]));
        otsDetail = make_shared<DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJobOtsDetail>(model1);
      }
    }
    if (m.find("ParentId") != m.end() && !m["ParentId"].empty()) {
      parentId = make_shared<string>(boost::any_cast<string>(m["ParentId"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<long>(boost::any_cast<long>(m["Progress"]));
    }
    if (m.find("Report") != m.end() && !m["Report"].empty()) {
      if (typeid(map<string, boost::any>) == m["Report"].type()) {
        DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJobReport model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Report"]));
        report = make_shared<DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJobReport>(model1);
      }
    }
    if (m.find("RestoreId") != m.end() && !m["RestoreId"].empty()) {
      restoreId = make_shared<string>(boost::any_cast<string>(m["RestoreId"]));
    }
    if (m.find("RestoreType") != m.end() && !m["RestoreType"].empty()) {
      restoreType = make_shared<string>(boost::any_cast<string>(m["RestoreType"]));
    }
    if (m.find("SnapshotHash") != m.end() && !m["SnapshotHash"].empty()) {
      snapshotHash = make_shared<string>(boost::any_cast<string>(m["SnapshotHash"]));
    }
    if (m.find("SnapshotId") != m.end() && !m["SnapshotId"].empty()) {
      snapshotId = make_shared<string>(boost::any_cast<string>(m["SnapshotId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("Speed") != m.end() && !m["Speed"].empty()) {
      speed = make_shared<long>(boost::any_cast<long>(m["Speed"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StorageClass") != m.end() && !m["StorageClass"].empty()) {
      storageClass = make_shared<string>(boost::any_cast<string>(m["StorageClass"]));
    }
    if (m.find("TargetBucket") != m.end() && !m["TargetBucket"].empty()) {
      targetBucket = make_shared<string>(boost::any_cast<string>(m["TargetBucket"]));
    }
    if (m.find("TargetClientId") != m.end() && !m["TargetClientId"].empty()) {
      targetClientId = make_shared<string>(boost::any_cast<string>(m["TargetClientId"]));
    }
    if (m.find("TargetCreateTime") != m.end() && !m["TargetCreateTime"].empty()) {
      targetCreateTime = make_shared<long>(boost::any_cast<long>(m["TargetCreateTime"]));
    }
    if (m.find("TargetDataSourceId") != m.end() && !m["TargetDataSourceId"].empty()) {
      targetDataSourceId = make_shared<string>(boost::any_cast<string>(m["TargetDataSourceId"]));
    }
    if (m.find("TargetFileSystemId") != m.end() && !m["TargetFileSystemId"].empty()) {
      targetFileSystemId = make_shared<string>(boost::any_cast<string>(m["TargetFileSystemId"]));
    }
    if (m.find("TargetInstanceId") != m.end() && !m["TargetInstanceId"].empty()) {
      targetInstanceId = make_shared<string>(boost::any_cast<string>(m["TargetInstanceId"]));
    }
    if (m.find("TargetInstanceName") != m.end() && !m["TargetInstanceName"].empty()) {
      targetInstanceName = make_shared<string>(boost::any_cast<string>(m["TargetInstanceName"]));
    }
    if (m.find("TargetPath") != m.end() && !m["TargetPath"].empty()) {
      targetPath = make_shared<string>(boost::any_cast<string>(m["TargetPath"]));
    }
    if (m.find("TargetPrefix") != m.end() && !m["TargetPrefix"].empty()) {
      targetPrefix = make_shared<string>(boost::any_cast<string>(m["TargetPrefix"]));
    }
    if (m.find("TargetTableName") != m.end() && !m["TargetTableName"].empty()) {
      targetTableName = make_shared<string>(boost::any_cast<string>(m["TargetTableName"]));
    }
    if (m.find("TargetTime") != m.end() && !m["TargetTime"].empty()) {
      targetTime = make_shared<long>(boost::any_cast<long>(m["TargetTime"]));
    }
    if (m.find("UdmDetail") != m.end() && !m["UdmDetail"].empty()) {
      udmDetail = make_shared<string>(boost::any_cast<string>(m["UdmDetail"]));
    }
    if (m.find("UpdatedTime") != m.end() && !m["UpdatedTime"].empty()) {
      updatedTime = make_shared<long>(boost::any_cast<long>(m["UpdatedTime"]));
    }
    if (m.find("VaultId") != m.end() && !m["VaultId"].empty()) {
      vaultId = make_shared<string>(boost::any_cast<string>(m["VaultId"]));
    }
  }


  virtual ~DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob() = default;
};
class DescribeRestoreJobs2ResponseBodyRestoreJobs : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob>> restoreJob{};

  DescribeRestoreJobs2ResponseBodyRestoreJobs() {}

  explicit DescribeRestoreJobs2ResponseBodyRestoreJobs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (restoreJob) {
      vector<boost::any> temp1;
      for(auto item1:*restoreJob){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RestoreJob"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RestoreJob") != m.end() && !m["RestoreJob"].empty()) {
      if (typeid(vector<boost::any>) == m["RestoreJob"].type()) {
        vector<DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RestoreJob"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        restoreJob = make_shared<vector<DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob>>(expect1);
      }
    }
  }


  virtual ~DescribeRestoreJobs2ResponseBodyRestoreJobs() = default;
};
class DescribeRestoreJobs2ResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeRestoreJobs2ResponseBodyRestoreJobs> restoreJobs{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  DescribeRestoreJobs2ResponseBody() {}

  explicit DescribeRestoreJobs2ResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (restoreJobs) {
      res["RestoreJobs"] = restoreJobs ? boost::any(restoreJobs->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RestoreJobs") != m.end() && !m["RestoreJobs"].empty()) {
      if (typeid(map<string, boost::any>) == m["RestoreJobs"].type()) {
        DescribeRestoreJobs2ResponseBodyRestoreJobs model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RestoreJobs"]));
        restoreJobs = make_shared<DescribeRestoreJobs2ResponseBodyRestoreJobs>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeRestoreJobs2ResponseBody() = default;
};
class DescribeRestoreJobs2Response : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeRestoreJobs2ResponseBody> body{};

  DescribeRestoreJobs2Response() {}

  explicit DescribeRestoreJobs2Response(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeRestoreJobs2ResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRestoreJobs2ResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRestoreJobs2Response() = default;
};
class DescribeTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> taskId{};
  shared_ptr<string> token{};

  DescribeTaskRequest() {}

  explicit DescribeTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
  }


  virtual ~DescribeTaskRequest() = default;
};
class DescribeTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> completedTime{};
  shared_ptr<long> createdTime{};
  shared_ptr<string> description{};
  shared_ptr<string> message{};
  shared_ptr<string> name{};
  shared_ptr<long> progress{};
  shared_ptr<string> requestId{};
  shared_ptr<string> result{};
  shared_ptr<bool> success{};
  shared_ptr<long> updatedTime{};

  DescribeTaskResponseBody() {}

  explicit DescribeTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (completedTime) {
      res["CompletedTime"] = boost::any(*completedTime);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (updatedTime) {
      res["UpdatedTime"] = boost::any(*updatedTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("CompletedTime") != m.end() && !m["CompletedTime"].empty()) {
      completedTime = make_shared<long>(boost::any_cast<long>(m["CompletedTime"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<long>(boost::any_cast<long>(m["CreatedTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<long>(boost::any_cast<long>(m["Progress"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("UpdatedTime") != m.end() && !m["UpdatedTime"].empty()) {
      updatedTime = make_shared<long>(boost::any_cast<long>(m["UpdatedTime"]));
    }
  }


  virtual ~DescribeTaskResponseBody() = default;
};
class DescribeTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeTaskResponseBody> body{};

  DescribeTaskResponse() {}

  explicit DescribeTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeTaskResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeTaskResponse() = default;
};
class DescribeUdmSnapshotsRequest : public Darabonba::Model {
public:
  shared_ptr<string> diskId{};
  shared_ptr<long> endTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> jobId{};
  shared_ptr<map<string, boost::any>> snapshotIds{};
  shared_ptr<string> sourceType{};
  shared_ptr<long> startTime{};
  shared_ptr<string> udmRegionId{};

  DescribeUdmSnapshotsRequest() {}

  explicit DescribeUdmSnapshotsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (diskId) {
      res["DiskId"] = boost::any(*diskId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (snapshotIds) {
      res["SnapshotIds"] = boost::any(*snapshotIds);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (udmRegionId) {
      res["UdmRegionId"] = boost::any(*udmRegionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DiskId") != m.end() && !m["DiskId"].empty()) {
      diskId = make_shared<string>(boost::any_cast<string>(m["DiskId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("SnapshotIds") != m.end() && !m["SnapshotIds"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["SnapshotIds"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      snapshotIds = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("UdmRegionId") != m.end() && !m["UdmRegionId"].empty()) {
      udmRegionId = make_shared<string>(boost::any_cast<string>(m["UdmRegionId"]));
    }
  }


  virtual ~DescribeUdmSnapshotsRequest() = default;
};
class DescribeUdmSnapshotsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> diskId{};
  shared_ptr<long> endTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> jobId{};
  shared_ptr<string> snapshotIdsShrink{};
  shared_ptr<string> sourceType{};
  shared_ptr<long> startTime{};
  shared_ptr<string> udmRegionId{};

  DescribeUdmSnapshotsShrinkRequest() {}

  explicit DescribeUdmSnapshotsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (diskId) {
      res["DiskId"] = boost::any(*diskId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (snapshotIdsShrink) {
      res["SnapshotIds"] = boost::any(*snapshotIdsShrink);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (udmRegionId) {
      res["UdmRegionId"] = boost::any(*udmRegionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DiskId") != m.end() && !m["DiskId"].empty()) {
      diskId = make_shared<string>(boost::any_cast<string>(m["DiskId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("SnapshotIds") != m.end() && !m["SnapshotIds"].empty()) {
      snapshotIdsShrink = make_shared<string>(boost::any_cast<string>(m["SnapshotIds"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("UdmRegionId") != m.end() && !m["UdmRegionId"].empty()) {
      udmRegionId = make_shared<string>(boost::any_cast<string>(m["UdmRegionId"]));
    }
  }


  virtual ~DescribeUdmSnapshotsShrinkRequest() = default;
};
class DescribeUdmSnapshotsResponseBodySnapshotsDetail : public Darabonba::Model {
public:
  shared_ptr<string> consistentLevel{};
  shared_ptr<bool> containOsDisk{};
  shared_ptr<string> diskCategory{};
  shared_ptr<string> diskDevName{};
  shared_ptr<map<string, boost::any>> diskHbrSnapshotIdWithDeviceMap{};
  shared_ptr<vector<string>> diskIdList{};
  shared_ptr<string> downgradeReason{};
  shared_ptr<string> hostName{};
  shared_ptr<map<string, boost::any>> instanceIdWithDiskIdListMap{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> instanceType{};
  shared_ptr<bool> instantAccess{};
  shared_ptr<vector<string>> nativeSnapshotIdList{};
  shared_ptr<string> osDiskId{};
  shared_ptr<string> osName{};
  shared_ptr<string> osNameEn{};
  shared_ptr<string> osType{};
  shared_ptr<string> performanceLevel{};
  shared_ptr<string> platform{};
  shared_ptr<string> snapshotGroupId{};
  shared_ptr<bool> systemDisk{};
  shared_ptr<string> vmName{};

  DescribeUdmSnapshotsResponseBodySnapshotsDetail() {}

  explicit DescribeUdmSnapshotsResponseBodySnapshotsDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (consistentLevel) {
      res["ConsistentLevel"] = boost::any(*consistentLevel);
    }
    if (containOsDisk) {
      res["ContainOsDisk"] = boost::any(*containOsDisk);
    }
    if (diskCategory) {
      res["DiskCategory"] = boost::any(*diskCategory);
    }
    if (diskDevName) {
      res["DiskDevName"] = boost::any(*diskDevName);
    }
    if (diskHbrSnapshotIdWithDeviceMap) {
      res["DiskHbrSnapshotIdWithDeviceMap"] = boost::any(*diskHbrSnapshotIdWithDeviceMap);
    }
    if (diskIdList) {
      res["DiskIdList"] = boost::any(*diskIdList);
    }
    if (downgradeReason) {
      res["DowngradeReason"] = boost::any(*downgradeReason);
    }
    if (hostName) {
      res["HostName"] = boost::any(*hostName);
    }
    if (instanceIdWithDiskIdListMap) {
      res["InstanceIdWithDiskIdListMap"] = boost::any(*instanceIdWithDiskIdListMap);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (instantAccess) {
      res["InstantAccess"] = boost::any(*instantAccess);
    }
    if (nativeSnapshotIdList) {
      res["NativeSnapshotIdList"] = boost::any(*nativeSnapshotIdList);
    }
    if (osDiskId) {
      res["OsDiskId"] = boost::any(*osDiskId);
    }
    if (osName) {
      res["OsName"] = boost::any(*osName);
    }
    if (osNameEn) {
      res["OsNameEn"] = boost::any(*osNameEn);
    }
    if (osType) {
      res["OsType"] = boost::any(*osType);
    }
    if (performanceLevel) {
      res["PerformanceLevel"] = boost::any(*performanceLevel);
    }
    if (platform) {
      res["Platform"] = boost::any(*platform);
    }
    if (snapshotGroupId) {
      res["SnapshotGroupId"] = boost::any(*snapshotGroupId);
    }
    if (systemDisk) {
      res["SystemDisk"] = boost::any(*systemDisk);
    }
    if (vmName) {
      res["VmName"] = boost::any(*vmName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConsistentLevel") != m.end() && !m["ConsistentLevel"].empty()) {
      consistentLevel = make_shared<string>(boost::any_cast<string>(m["ConsistentLevel"]));
    }
    if (m.find("ContainOsDisk") != m.end() && !m["ContainOsDisk"].empty()) {
      containOsDisk = make_shared<bool>(boost::any_cast<bool>(m["ContainOsDisk"]));
    }
    if (m.find("DiskCategory") != m.end() && !m["DiskCategory"].empty()) {
      diskCategory = make_shared<string>(boost::any_cast<string>(m["DiskCategory"]));
    }
    if (m.find("DiskDevName") != m.end() && !m["DiskDevName"].empty()) {
      diskDevName = make_shared<string>(boost::any_cast<string>(m["DiskDevName"]));
    }
    if (m.find("DiskHbrSnapshotIdWithDeviceMap") != m.end() && !m["DiskHbrSnapshotIdWithDeviceMap"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["DiskHbrSnapshotIdWithDeviceMap"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      diskHbrSnapshotIdWithDeviceMap = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("DiskIdList") != m.end() && !m["DiskIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DiskIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DiskIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      diskIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("DowngradeReason") != m.end() && !m["DowngradeReason"].empty()) {
      downgradeReason = make_shared<string>(boost::any_cast<string>(m["DowngradeReason"]));
    }
    if (m.find("HostName") != m.end() && !m["HostName"].empty()) {
      hostName = make_shared<string>(boost::any_cast<string>(m["HostName"]));
    }
    if (m.find("InstanceIdWithDiskIdListMap") != m.end() && !m["InstanceIdWithDiskIdListMap"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["InstanceIdWithDiskIdListMap"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      instanceIdWithDiskIdListMap = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("InstantAccess") != m.end() && !m["InstantAccess"].empty()) {
      instantAccess = make_shared<bool>(boost::any_cast<bool>(m["InstantAccess"]));
    }
    if (m.find("NativeSnapshotIdList") != m.end() && !m["NativeSnapshotIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["NativeSnapshotIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["NativeSnapshotIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      nativeSnapshotIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("OsDiskId") != m.end() && !m["OsDiskId"].empty()) {
      osDiskId = make_shared<string>(boost::any_cast<string>(m["OsDiskId"]));
    }
    if (m.find("OsName") != m.end() && !m["OsName"].empty()) {
      osName = make_shared<string>(boost::any_cast<string>(m["OsName"]));
    }
    if (m.find("OsNameEn") != m.end() && !m["OsNameEn"].empty()) {
      osNameEn = make_shared<string>(boost::any_cast<string>(m["OsNameEn"]));
    }
    if (m.find("OsType") != m.end() && !m["OsType"].empty()) {
      osType = make_shared<string>(boost::any_cast<string>(m["OsType"]));
    }
    if (m.find("PerformanceLevel") != m.end() && !m["PerformanceLevel"].empty()) {
      performanceLevel = make_shared<string>(boost::any_cast<string>(m["PerformanceLevel"]));
    }
    if (m.find("Platform") != m.end() && !m["Platform"].empty()) {
      platform = make_shared<string>(boost::any_cast<string>(m["Platform"]));
    }
    if (m.find("SnapshotGroupId") != m.end() && !m["SnapshotGroupId"].empty()) {
      snapshotGroupId = make_shared<string>(boost::any_cast<string>(m["SnapshotGroupId"]));
    }
    if (m.find("SystemDisk") != m.end() && !m["SystemDisk"].empty()) {
      systemDisk = make_shared<bool>(boost::any_cast<bool>(m["SystemDisk"]));
    }
    if (m.find("VmName") != m.end() && !m["VmName"].empty()) {
      vmName = make_shared<string>(boost::any_cast<string>(m["VmName"]));
    }
  }


  virtual ~DescribeUdmSnapshotsResponseBodySnapshotsDetail() = default;
};
class DescribeUdmSnapshotsResponseBodySnapshots : public Darabonba::Model {
public:
  shared_ptr<string> actualBytes{};
  shared_ptr<string> advancedRetentionType{};
  shared_ptr<string> backupType{};
  shared_ptr<long> bytesTotal{};
  shared_ptr<long> completeTime{};
  shared_ptr<long> createTime{};
  shared_ptr<long> createdTime{};
  shared_ptr<DescribeUdmSnapshotsResponseBodySnapshotsDetail> detail{};
  shared_ptr<string> diskId{};
  shared_ptr<long> expireTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> jobId{};
  shared_ptr<string> nativeSnapshotId{};
  shared_ptr<string> nativeSnapshotInfo{};
  shared_ptr<string> parentSnapshotHash{};
  shared_ptr<string> prefix{};
  shared_ptr<long> realSnapshotTime{};
  shared_ptr<long> retention{};
  shared_ptr<string> snapshotHash{};
  shared_ptr<string> snapshotId{};
  shared_ptr<string> sourceType{};
  shared_ptr<long> startTime{};
  shared_ptr<string> status{};
  shared_ptr<long> updatedTime{};

  DescribeUdmSnapshotsResponseBodySnapshots() {}

  explicit DescribeUdmSnapshotsResponseBodySnapshots(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actualBytes) {
      res["ActualBytes"] = boost::any(*actualBytes);
    }
    if (advancedRetentionType) {
      res["AdvancedRetentionType"] = boost::any(*advancedRetentionType);
    }
    if (backupType) {
      res["BackupType"] = boost::any(*backupType);
    }
    if (bytesTotal) {
      res["BytesTotal"] = boost::any(*bytesTotal);
    }
    if (completeTime) {
      res["CompleteTime"] = boost::any(*completeTime);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (detail) {
      res["Detail"] = detail ? boost::any(detail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (diskId) {
      res["DiskId"] = boost::any(*diskId);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (nativeSnapshotId) {
      res["NativeSnapshotId"] = boost::any(*nativeSnapshotId);
    }
    if (nativeSnapshotInfo) {
      res["NativeSnapshotInfo"] = boost::any(*nativeSnapshotInfo);
    }
    if (parentSnapshotHash) {
      res["ParentSnapshotHash"] = boost::any(*parentSnapshotHash);
    }
    if (prefix) {
      res["Prefix"] = boost::any(*prefix);
    }
    if (realSnapshotTime) {
      res["RealSnapshotTime"] = boost::any(*realSnapshotTime);
    }
    if (retention) {
      res["Retention"] = boost::any(*retention);
    }
    if (snapshotHash) {
      res["SnapshotHash"] = boost::any(*snapshotHash);
    }
    if (snapshotId) {
      res["SnapshotId"] = boost::any(*snapshotId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (updatedTime) {
      res["UpdatedTime"] = boost::any(*updatedTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActualBytes") != m.end() && !m["ActualBytes"].empty()) {
      actualBytes = make_shared<string>(boost::any_cast<string>(m["ActualBytes"]));
    }
    if (m.find("AdvancedRetentionType") != m.end() && !m["AdvancedRetentionType"].empty()) {
      advancedRetentionType = make_shared<string>(boost::any_cast<string>(m["AdvancedRetentionType"]));
    }
    if (m.find("BackupType") != m.end() && !m["BackupType"].empty()) {
      backupType = make_shared<string>(boost::any_cast<string>(m["BackupType"]));
    }
    if (m.find("BytesTotal") != m.end() && !m["BytesTotal"].empty()) {
      bytesTotal = make_shared<long>(boost::any_cast<long>(m["BytesTotal"]));
    }
    if (m.find("CompleteTime") != m.end() && !m["CompleteTime"].empty()) {
      completeTime = make_shared<long>(boost::any_cast<long>(m["CompleteTime"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<long>(boost::any_cast<long>(m["CreatedTime"]));
    }
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      if (typeid(map<string, boost::any>) == m["Detail"].type()) {
        DescribeUdmSnapshotsResponseBodySnapshotsDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Detail"]));
        detail = make_shared<DescribeUdmSnapshotsResponseBodySnapshotsDetail>(model1);
      }
    }
    if (m.find("DiskId") != m.end() && !m["DiskId"].empty()) {
      diskId = make_shared<string>(boost::any_cast<string>(m["DiskId"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<long>(boost::any_cast<long>(m["ExpireTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("NativeSnapshotId") != m.end() && !m["NativeSnapshotId"].empty()) {
      nativeSnapshotId = make_shared<string>(boost::any_cast<string>(m["NativeSnapshotId"]));
    }
    if (m.find("NativeSnapshotInfo") != m.end() && !m["NativeSnapshotInfo"].empty()) {
      nativeSnapshotInfo = make_shared<string>(boost::any_cast<string>(m["NativeSnapshotInfo"]));
    }
    if (m.find("ParentSnapshotHash") != m.end() && !m["ParentSnapshotHash"].empty()) {
      parentSnapshotHash = make_shared<string>(boost::any_cast<string>(m["ParentSnapshotHash"]));
    }
    if (m.find("Prefix") != m.end() && !m["Prefix"].empty()) {
      prefix = make_shared<string>(boost::any_cast<string>(m["Prefix"]));
    }
    if (m.find("RealSnapshotTime") != m.end() && !m["RealSnapshotTime"].empty()) {
      realSnapshotTime = make_shared<long>(boost::any_cast<long>(m["RealSnapshotTime"]));
    }
    if (m.find("Retention") != m.end() && !m["Retention"].empty()) {
      retention = make_shared<long>(boost::any_cast<long>(m["Retention"]));
    }
    if (m.find("SnapshotHash") != m.end() && !m["SnapshotHash"].empty()) {
      snapshotHash = make_shared<string>(boost::any_cast<string>(m["SnapshotHash"]));
    }
    if (m.find("SnapshotId") != m.end() && !m["SnapshotId"].empty()) {
      snapshotId = make_shared<string>(boost::any_cast<string>(m["SnapshotId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UpdatedTime") != m.end() && !m["UpdatedTime"].empty()) {
      updatedTime = make_shared<long>(boost::any_cast<long>(m["UpdatedTime"]));
    }
  }


  virtual ~DescribeUdmSnapshotsResponseBodySnapshots() = default;
};
class DescribeUdmSnapshotsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeUdmSnapshotsResponseBodySnapshots>> snapshots{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  DescribeUdmSnapshotsResponseBody() {}

  explicit DescribeUdmSnapshotsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (snapshots) {
      vector<boost::any> temp1;
      for(auto item1:*snapshots){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Snapshots"] = boost::any(temp1);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Snapshots") != m.end() && !m["Snapshots"].empty()) {
      if (typeid(vector<boost::any>) == m["Snapshots"].type()) {
        vector<DescribeUdmSnapshotsResponseBodySnapshots> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Snapshots"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeUdmSnapshotsResponseBodySnapshots model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        snapshots = make_shared<vector<DescribeUdmSnapshotsResponseBodySnapshots>>(expect1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeUdmSnapshotsResponseBody() = default;
};
class DescribeUdmSnapshotsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeUdmSnapshotsResponseBody> body{};

  DescribeUdmSnapshotsResponse() {}

  explicit DescribeUdmSnapshotsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeUdmSnapshotsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeUdmSnapshotsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeUdmSnapshotsResponse() = default;
};
class DescribeVaultReplicationRegionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> token{};
  shared_ptr<string> vaultId{};

  DescribeVaultReplicationRegionsRequest() {}

  explicit DescribeVaultReplicationRegionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (token) {
      res["Token"] = boost::any(*token);
    }
    if (vaultId) {
      res["VaultId"] = boost::any(*vaultId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
    if (m.find("VaultId") != m.end() && !m["VaultId"].empty()) {
      vaultId = make_shared<string>(boost::any_cast<string>(m["VaultId"]));
    }
  }


  virtual ~DescribeVaultReplicationRegionsRequest() = default;
};
class DescribeVaultReplicationRegionsResponseBodyRegions : public Darabonba::Model {
public:
  shared_ptr<vector<string>> regionId{};

  DescribeVaultReplicationRegionsResponseBodyRegions() {}

  explicit DescribeVaultReplicationRegionsResponseBodyRegions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RegionId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RegionId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      regionId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeVaultReplicationRegionsResponseBodyRegions() = default;
};
class DescribeVaultReplicationRegionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<DescribeVaultReplicationRegionsResponseBodyRegions> regions{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeVaultReplicationRegionsResponseBody() {}

  explicit DescribeVaultReplicationRegionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Regions") != m.end() && !m["Regions"].empty()) {
      if (typeid(map<string, boost::any>) == m["Regions"].type()) {
        DescribeVaultReplicationRegionsResponseBodyRegions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Regions"]));
        regions = make_shared<DescribeVaultReplicationRegionsResponseBodyRegions>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DescribeVaultReplicationRegionsResponseBody() = default;
};
class DescribeVaultReplicationRegionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeVaultReplicationRegionsResponseBody> body{};

  DescribeVaultReplicationRegionsResponse() {}

  explicit DescribeVaultReplicationRegionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeVaultReplicationRegionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeVaultReplicationRegionsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeVaultReplicationRegionsResponse() = default;
};
class DescribeVaultsRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeVaultsRequestTag() {}

  explicit DescribeVaultsRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeVaultsRequestTag() = default;
};
class DescribeVaultsRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> status{};
  shared_ptr<vector<DescribeVaultsRequestTag>> tag{};
  shared_ptr<string> vaultId{};
  shared_ptr<string> vaultRegionId{};
  shared_ptr<string> vaultType{};

  DescribeVaultsRequest() {}

  explicit DescribeVaultsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
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
    if (vaultId) {
      res["VaultId"] = boost::any(*vaultId);
    }
    if (vaultRegionId) {
      res["VaultRegionId"] = boost::any(*vaultRegionId);
    }
    if (vaultType) {
      res["VaultType"] = boost::any(*vaultType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<DescribeVaultsRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVaultsRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<DescribeVaultsRequestTag>>(expect1);
      }
    }
    if (m.find("VaultId") != m.end() && !m["VaultId"].empty()) {
      vaultId = make_shared<string>(boost::any_cast<string>(m["VaultId"]));
    }
    if (m.find("VaultRegionId") != m.end() && !m["VaultRegionId"].empty()) {
      vaultRegionId = make_shared<string>(boost::any_cast<string>(m["VaultRegionId"]));
    }
    if (m.find("VaultType") != m.end() && !m["VaultType"].empty()) {
      vaultType = make_shared<string>(boost::any_cast<string>(m["VaultType"]));
    }
  }


  virtual ~DescribeVaultsRequest() = default;
};
class DescribeVaultsResponseBodyVaultsVaultBackupPlanStatistics : public Darabonba::Model {
public:
  shared_ptr<long> archive{};
  shared_ptr<long> commonFileSystem{};
  shared_ptr<long> commonNas{};
  shared_ptr<long> csg{};
  shared_ptr<long> ecsFile{};
  shared_ptr<long> ecsHana{};
  shared_ptr<long> isilon{};
  shared_ptr<long> localFile{};
  shared_ptr<long> localVm{};
  shared_ptr<long> mySql{};
  shared_ptr<long> nas{};
  shared_ptr<long> oracle{};
  shared_ptr<long> oss{};
  shared_ptr<long> ots{};
  shared_ptr<long> sqlServer{};

  DescribeVaultsResponseBodyVaultsVaultBackupPlanStatistics() {}

  explicit DescribeVaultsResponseBodyVaultsVaultBackupPlanStatistics(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (archive) {
      res["Archive"] = boost::any(*archive);
    }
    if (commonFileSystem) {
      res["CommonFileSystem"] = boost::any(*commonFileSystem);
    }
    if (commonNas) {
      res["CommonNas"] = boost::any(*commonNas);
    }
    if (csg) {
      res["Csg"] = boost::any(*csg);
    }
    if (ecsFile) {
      res["EcsFile"] = boost::any(*ecsFile);
    }
    if (ecsHana) {
      res["EcsHana"] = boost::any(*ecsHana);
    }
    if (isilon) {
      res["Isilon"] = boost::any(*isilon);
    }
    if (localFile) {
      res["LocalFile"] = boost::any(*localFile);
    }
    if (localVm) {
      res["LocalVm"] = boost::any(*localVm);
    }
    if (mySql) {
      res["MySql"] = boost::any(*mySql);
    }
    if (nas) {
      res["Nas"] = boost::any(*nas);
    }
    if (oracle) {
      res["Oracle"] = boost::any(*oracle);
    }
    if (oss) {
      res["Oss"] = boost::any(*oss);
    }
    if (ots) {
      res["Ots"] = boost::any(*ots);
    }
    if (sqlServer) {
      res["SqlServer"] = boost::any(*sqlServer);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Archive") != m.end() && !m["Archive"].empty()) {
      archive = make_shared<long>(boost::any_cast<long>(m["Archive"]));
    }
    if (m.find("CommonFileSystem") != m.end() && !m["CommonFileSystem"].empty()) {
      commonFileSystem = make_shared<long>(boost::any_cast<long>(m["CommonFileSystem"]));
    }
    if (m.find("CommonNas") != m.end() && !m["CommonNas"].empty()) {
      commonNas = make_shared<long>(boost::any_cast<long>(m["CommonNas"]));
    }
    if (m.find("Csg") != m.end() && !m["Csg"].empty()) {
      csg = make_shared<long>(boost::any_cast<long>(m["Csg"]));
    }
    if (m.find("EcsFile") != m.end() && !m["EcsFile"].empty()) {
      ecsFile = make_shared<long>(boost::any_cast<long>(m["EcsFile"]));
    }
    if (m.find("EcsHana") != m.end() && !m["EcsHana"].empty()) {
      ecsHana = make_shared<long>(boost::any_cast<long>(m["EcsHana"]));
    }
    if (m.find("Isilon") != m.end() && !m["Isilon"].empty()) {
      isilon = make_shared<long>(boost::any_cast<long>(m["Isilon"]));
    }
    if (m.find("LocalFile") != m.end() && !m["LocalFile"].empty()) {
      localFile = make_shared<long>(boost::any_cast<long>(m["LocalFile"]));
    }
    if (m.find("LocalVm") != m.end() && !m["LocalVm"].empty()) {
      localVm = make_shared<long>(boost::any_cast<long>(m["LocalVm"]));
    }
    if (m.find("MySql") != m.end() && !m["MySql"].empty()) {
      mySql = make_shared<long>(boost::any_cast<long>(m["MySql"]));
    }
    if (m.find("Nas") != m.end() && !m["Nas"].empty()) {
      nas = make_shared<long>(boost::any_cast<long>(m["Nas"]));
    }
    if (m.find("Oracle") != m.end() && !m["Oracle"].empty()) {
      oracle = make_shared<long>(boost::any_cast<long>(m["Oracle"]));
    }
    if (m.find("Oss") != m.end() && !m["Oss"].empty()) {
      oss = make_shared<long>(boost::any_cast<long>(m["Oss"]));
    }
    if (m.find("Ots") != m.end() && !m["Ots"].empty()) {
      ots = make_shared<long>(boost::any_cast<long>(m["Ots"]));
    }
    if (m.find("SqlServer") != m.end() && !m["SqlServer"].empty()) {
      sqlServer = make_shared<long>(boost::any_cast<long>(m["SqlServer"]));
    }
  }


  virtual ~DescribeVaultsResponseBodyVaultsVaultBackupPlanStatistics() = default;
};
class DescribeVaultsResponseBodyVaultsVaultReplicationProgress : public Darabonba::Model {
public:
  shared_ptr<long> historicalReplicationProgress{};
  shared_ptr<long> newReplicationProgress{};

  DescribeVaultsResponseBodyVaultsVaultReplicationProgress() {}

  explicit DescribeVaultsResponseBodyVaultsVaultReplicationProgress(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (historicalReplicationProgress) {
      res["HistoricalReplicationProgress"] = boost::any(*historicalReplicationProgress);
    }
    if (newReplicationProgress) {
      res["NewReplicationProgress"] = boost::any(*newReplicationProgress);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HistoricalReplicationProgress") != m.end() && !m["HistoricalReplicationProgress"].empty()) {
      historicalReplicationProgress = make_shared<long>(boost::any_cast<long>(m["HistoricalReplicationProgress"]));
    }
    if (m.find("NewReplicationProgress") != m.end() && !m["NewReplicationProgress"].empty()) {
      newReplicationProgress = make_shared<long>(boost::any_cast<long>(m["NewReplicationProgress"]));
    }
  }


  virtual ~DescribeVaultsResponseBodyVaultsVaultReplicationProgress() = default;
};
class DescribeVaultsResponseBodyVaultsVaultSourceTypes : public Darabonba::Model {
public:
  shared_ptr<vector<string>> sourceType{};

  DescribeVaultsResponseBodyVaultsVaultSourceTypes() {}

  explicit DescribeVaultsResponseBodyVaultsVaultSourceTypes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SourceType"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SourceType"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sourceType = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeVaultsResponseBodyVaultsVaultSourceTypes() = default;
};
class DescribeVaultsResponseBodyVaultsVaultTagsTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeVaultsResponseBodyVaultsVaultTagsTag() {}

  explicit DescribeVaultsResponseBodyVaultsVaultTagsTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeVaultsResponseBodyVaultsVaultTagsTag() = default;
};
class DescribeVaultsResponseBodyVaultsVaultTags : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeVaultsResponseBodyVaultsVaultTagsTag>> tag{};

  DescribeVaultsResponseBodyVaultsVaultTags() {}

  explicit DescribeVaultsResponseBodyVaultsVaultTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<DescribeVaultsResponseBodyVaultsVaultTagsTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVaultsResponseBodyVaultsVaultTagsTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<DescribeVaultsResponseBodyVaultsVaultTagsTag>>(expect1);
      }
    }
  }


  virtual ~DescribeVaultsResponseBodyVaultsVaultTags() = default;
};
class DescribeVaultsResponseBodyVaultsVaultTrialInfo : public Darabonba::Model {
public:
  shared_ptr<bool> keepAfterTrialExpiration{};
  shared_ptr<long> trialExpireTime{};
  shared_ptr<long> trialStartTime{};
  shared_ptr<long> trialVaultReleaseTime{};

  DescribeVaultsResponseBodyVaultsVaultTrialInfo() {}

  explicit DescribeVaultsResponseBodyVaultsVaultTrialInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keepAfterTrialExpiration) {
      res["KeepAfterTrialExpiration"] = boost::any(*keepAfterTrialExpiration);
    }
    if (trialExpireTime) {
      res["TrialExpireTime"] = boost::any(*trialExpireTime);
    }
    if (trialStartTime) {
      res["TrialStartTime"] = boost::any(*trialStartTime);
    }
    if (trialVaultReleaseTime) {
      res["TrialVaultReleaseTime"] = boost::any(*trialVaultReleaseTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeepAfterTrialExpiration") != m.end() && !m["KeepAfterTrialExpiration"].empty()) {
      keepAfterTrialExpiration = make_shared<bool>(boost::any_cast<bool>(m["KeepAfterTrialExpiration"]));
    }
    if (m.find("TrialExpireTime") != m.end() && !m["TrialExpireTime"].empty()) {
      trialExpireTime = make_shared<long>(boost::any_cast<long>(m["TrialExpireTime"]));
    }
    if (m.find("TrialStartTime") != m.end() && !m["TrialStartTime"].empty()) {
      trialStartTime = make_shared<long>(boost::any_cast<long>(m["TrialStartTime"]));
    }
    if (m.find("TrialVaultReleaseTime") != m.end() && !m["TrialVaultReleaseTime"].empty()) {
      trialVaultReleaseTime = make_shared<long>(boost::any_cast<long>(m["TrialVaultReleaseTime"]));
    }
  }


  virtual ~DescribeVaultsResponseBodyVaultsVaultTrialInfo() = default;
};
class DescribeVaultsResponseBodyVaultsVault : public Darabonba::Model {
public:
  shared_ptr<long> archiveBytesDone{};
  shared_ptr<long> archiveStorageSize{};
  shared_ptr<DescribeVaultsResponseBodyVaultsVaultBackupPlanStatistics> backupPlanStatistics{};
  shared_ptr<string> bucketName{};
  shared_ptr<long> bytesDone{};
  shared_ptr<string> chargeType{};
  shared_ptr<long> chargedStorageSize{};
  shared_ptr<string> compressionAlgorithm{};
  shared_ptr<long> createdTime{};
  shared_ptr<bool> dedup{};
  shared_ptr<string> description{};
  shared_ptr<string> encryptType{};
  shared_ptr<bool> indexAvailable{};
  shared_ptr<string> indexLevel{};
  shared_ptr<long> indexUpdateTime{};
  shared_ptr<string> kmsKeyId{};
  shared_ptr<long> latestReplicationTime{};
  shared_ptr<string> redundancyType{};
  shared_ptr<bool> replication{};
  shared_ptr<DescribeVaultsResponseBodyVaultsVaultReplicationProgress> replicationProgress{};
  shared_ptr<string> replicationSourceRegionId{};
  shared_ptr<bool> replicationSourceVault{};
  shared_ptr<string> replicationSourceVaultId{};
  shared_ptr<string> replicationTargetRegionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<long> retention{};
  shared_ptr<bool> searchEnabled{};
  shared_ptr<long> snapshotCount{};
  shared_ptr<DescribeVaultsResponseBodyVaultsVaultSourceTypes> sourceTypes{};
  shared_ptr<string> status{};
  shared_ptr<long> storageSize{};
  shared_ptr<DescribeVaultsResponseBodyVaultsVaultTags> tags{};
  shared_ptr<DescribeVaultsResponseBodyVaultsVaultTrialInfo> trialInfo{};
  shared_ptr<long> updatedTime{};
  shared_ptr<string> vaultId{};
  shared_ptr<string> vaultName{};
  shared_ptr<string> vaultRegionId{};
  shared_ptr<string> vaultStatusMessage{};
  shared_ptr<string> vaultStorageClass{};
  shared_ptr<string> vaultType{};
  shared_ptr<bool> wormEnabled{};

  DescribeVaultsResponseBodyVaultsVault() {}

  explicit DescribeVaultsResponseBodyVaultsVault(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (archiveBytesDone) {
      res["ArchiveBytesDone"] = boost::any(*archiveBytesDone);
    }
    if (archiveStorageSize) {
      res["ArchiveStorageSize"] = boost::any(*archiveStorageSize);
    }
    if (backupPlanStatistics) {
      res["BackupPlanStatistics"] = backupPlanStatistics ? boost::any(backupPlanStatistics->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (bucketName) {
      res["BucketName"] = boost::any(*bucketName);
    }
    if (bytesDone) {
      res["BytesDone"] = boost::any(*bytesDone);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (chargedStorageSize) {
      res["ChargedStorageSize"] = boost::any(*chargedStorageSize);
    }
    if (compressionAlgorithm) {
      res["CompressionAlgorithm"] = boost::any(*compressionAlgorithm);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (dedup) {
      res["Dedup"] = boost::any(*dedup);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (encryptType) {
      res["EncryptType"] = boost::any(*encryptType);
    }
    if (indexAvailable) {
      res["IndexAvailable"] = boost::any(*indexAvailable);
    }
    if (indexLevel) {
      res["IndexLevel"] = boost::any(*indexLevel);
    }
    if (indexUpdateTime) {
      res["IndexUpdateTime"] = boost::any(*indexUpdateTime);
    }
    if (kmsKeyId) {
      res["KmsKeyId"] = boost::any(*kmsKeyId);
    }
    if (latestReplicationTime) {
      res["LatestReplicationTime"] = boost::any(*latestReplicationTime);
    }
    if (redundancyType) {
      res["RedundancyType"] = boost::any(*redundancyType);
    }
    if (replication) {
      res["Replication"] = boost::any(*replication);
    }
    if (replicationProgress) {
      res["ReplicationProgress"] = replicationProgress ? boost::any(replicationProgress->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (replicationSourceRegionId) {
      res["ReplicationSourceRegionId"] = boost::any(*replicationSourceRegionId);
    }
    if (replicationSourceVault) {
      res["ReplicationSourceVault"] = boost::any(*replicationSourceVault);
    }
    if (replicationSourceVaultId) {
      res["ReplicationSourceVaultId"] = boost::any(*replicationSourceVaultId);
    }
    if (replicationTargetRegionId) {
      res["ReplicationTargetRegionId"] = boost::any(*replicationTargetRegionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (retention) {
      res["Retention"] = boost::any(*retention);
    }
    if (searchEnabled) {
      res["SearchEnabled"] = boost::any(*searchEnabled);
    }
    if (snapshotCount) {
      res["SnapshotCount"] = boost::any(*snapshotCount);
    }
    if (sourceTypes) {
      res["SourceTypes"] = sourceTypes ? boost::any(sourceTypes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (storageSize) {
      res["StorageSize"] = boost::any(*storageSize);
    }
    if (tags) {
      res["Tags"] = tags ? boost::any(tags->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (trialInfo) {
      res["TrialInfo"] = trialInfo ? boost::any(trialInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (updatedTime) {
      res["UpdatedTime"] = boost::any(*updatedTime);
    }
    if (vaultId) {
      res["VaultId"] = boost::any(*vaultId);
    }
    if (vaultName) {
      res["VaultName"] = boost::any(*vaultName);
    }
    if (vaultRegionId) {
      res["VaultRegionId"] = boost::any(*vaultRegionId);
    }
    if (vaultStatusMessage) {
      res["VaultStatusMessage"] = boost::any(*vaultStatusMessage);
    }
    if (vaultStorageClass) {
      res["VaultStorageClass"] = boost::any(*vaultStorageClass);
    }
    if (vaultType) {
      res["VaultType"] = boost::any(*vaultType);
    }
    if (wormEnabled) {
      res["WormEnabled"] = boost::any(*wormEnabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArchiveBytesDone") != m.end() && !m["ArchiveBytesDone"].empty()) {
      archiveBytesDone = make_shared<long>(boost::any_cast<long>(m["ArchiveBytesDone"]));
    }
    if (m.find("ArchiveStorageSize") != m.end() && !m["ArchiveStorageSize"].empty()) {
      archiveStorageSize = make_shared<long>(boost::any_cast<long>(m["ArchiveStorageSize"]));
    }
    if (m.find("BackupPlanStatistics") != m.end() && !m["BackupPlanStatistics"].empty()) {
      if (typeid(map<string, boost::any>) == m["BackupPlanStatistics"].type()) {
        DescribeVaultsResponseBodyVaultsVaultBackupPlanStatistics model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BackupPlanStatistics"]));
        backupPlanStatistics = make_shared<DescribeVaultsResponseBodyVaultsVaultBackupPlanStatistics>(model1);
      }
    }
    if (m.find("BucketName") != m.end() && !m["BucketName"].empty()) {
      bucketName = make_shared<string>(boost::any_cast<string>(m["BucketName"]));
    }
    if (m.find("BytesDone") != m.end() && !m["BytesDone"].empty()) {
      bytesDone = make_shared<long>(boost::any_cast<long>(m["BytesDone"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("ChargedStorageSize") != m.end() && !m["ChargedStorageSize"].empty()) {
      chargedStorageSize = make_shared<long>(boost::any_cast<long>(m["ChargedStorageSize"]));
    }
    if (m.find("CompressionAlgorithm") != m.end() && !m["CompressionAlgorithm"].empty()) {
      compressionAlgorithm = make_shared<string>(boost::any_cast<string>(m["CompressionAlgorithm"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<long>(boost::any_cast<long>(m["CreatedTime"]));
    }
    if (m.find("Dedup") != m.end() && !m["Dedup"].empty()) {
      dedup = make_shared<bool>(boost::any_cast<bool>(m["Dedup"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EncryptType") != m.end() && !m["EncryptType"].empty()) {
      encryptType = make_shared<string>(boost::any_cast<string>(m["EncryptType"]));
    }
    if (m.find("IndexAvailable") != m.end() && !m["IndexAvailable"].empty()) {
      indexAvailable = make_shared<bool>(boost::any_cast<bool>(m["IndexAvailable"]));
    }
    if (m.find("IndexLevel") != m.end() && !m["IndexLevel"].empty()) {
      indexLevel = make_shared<string>(boost::any_cast<string>(m["IndexLevel"]));
    }
    if (m.find("IndexUpdateTime") != m.end() && !m["IndexUpdateTime"].empty()) {
      indexUpdateTime = make_shared<long>(boost::any_cast<long>(m["IndexUpdateTime"]));
    }
    if (m.find("KmsKeyId") != m.end() && !m["KmsKeyId"].empty()) {
      kmsKeyId = make_shared<string>(boost::any_cast<string>(m["KmsKeyId"]));
    }
    if (m.find("LatestReplicationTime") != m.end() && !m["LatestReplicationTime"].empty()) {
      latestReplicationTime = make_shared<long>(boost::any_cast<long>(m["LatestReplicationTime"]));
    }
    if (m.find("RedundancyType") != m.end() && !m["RedundancyType"].empty()) {
      redundancyType = make_shared<string>(boost::any_cast<string>(m["RedundancyType"]));
    }
    if (m.find("Replication") != m.end() && !m["Replication"].empty()) {
      replication = make_shared<bool>(boost::any_cast<bool>(m["Replication"]));
    }
    if (m.find("ReplicationProgress") != m.end() && !m["ReplicationProgress"].empty()) {
      if (typeid(map<string, boost::any>) == m["ReplicationProgress"].type()) {
        DescribeVaultsResponseBodyVaultsVaultReplicationProgress model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ReplicationProgress"]));
        replicationProgress = make_shared<DescribeVaultsResponseBodyVaultsVaultReplicationProgress>(model1);
      }
    }
    if (m.find("ReplicationSourceRegionId") != m.end() && !m["ReplicationSourceRegionId"].empty()) {
      replicationSourceRegionId = make_shared<string>(boost::any_cast<string>(m["ReplicationSourceRegionId"]));
    }
    if (m.find("ReplicationSourceVault") != m.end() && !m["ReplicationSourceVault"].empty()) {
      replicationSourceVault = make_shared<bool>(boost::any_cast<bool>(m["ReplicationSourceVault"]));
    }
    if (m.find("ReplicationSourceVaultId") != m.end() && !m["ReplicationSourceVaultId"].empty()) {
      replicationSourceVaultId = make_shared<string>(boost::any_cast<string>(m["ReplicationSourceVaultId"]));
    }
    if (m.find("ReplicationTargetRegionId") != m.end() && !m["ReplicationTargetRegionId"].empty()) {
      replicationTargetRegionId = make_shared<string>(boost::any_cast<string>(m["ReplicationTargetRegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Retention") != m.end() && !m["Retention"].empty()) {
      retention = make_shared<long>(boost::any_cast<long>(m["Retention"]));
    }
    if (m.find("SearchEnabled") != m.end() && !m["SearchEnabled"].empty()) {
      searchEnabled = make_shared<bool>(boost::any_cast<bool>(m["SearchEnabled"]));
    }
    if (m.find("SnapshotCount") != m.end() && !m["SnapshotCount"].empty()) {
      snapshotCount = make_shared<long>(boost::any_cast<long>(m["SnapshotCount"]));
    }
    if (m.find("SourceTypes") != m.end() && !m["SourceTypes"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceTypes"].type()) {
        DescribeVaultsResponseBodyVaultsVaultSourceTypes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceTypes"]));
        sourceTypes = make_shared<DescribeVaultsResponseBodyVaultsVaultSourceTypes>(model1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StorageSize") != m.end() && !m["StorageSize"].empty()) {
      storageSize = make_shared<long>(boost::any_cast<long>(m["StorageSize"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tags"].type()) {
        DescribeVaultsResponseBodyVaultsVaultTags model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tags"]));
        tags = make_shared<DescribeVaultsResponseBodyVaultsVaultTags>(model1);
      }
    }
    if (m.find("TrialInfo") != m.end() && !m["TrialInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["TrialInfo"].type()) {
        DescribeVaultsResponseBodyVaultsVaultTrialInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TrialInfo"]));
        trialInfo = make_shared<DescribeVaultsResponseBodyVaultsVaultTrialInfo>(model1);
      }
    }
    if (m.find("UpdatedTime") != m.end() && !m["UpdatedTime"].empty()) {
      updatedTime = make_shared<long>(boost::any_cast<long>(m["UpdatedTime"]));
    }
    if (m.find("VaultId") != m.end() && !m["VaultId"].empty()) {
      vaultId = make_shared<string>(boost::any_cast<string>(m["VaultId"]));
    }
    if (m.find("VaultName") != m.end() && !m["VaultName"].empty()) {
      vaultName = make_shared<string>(boost::any_cast<string>(m["VaultName"]));
    }
    if (m.find("VaultRegionId") != m.end() && !m["VaultRegionId"].empty()) {
      vaultRegionId = make_shared<string>(boost::any_cast<string>(m["VaultRegionId"]));
    }
    if (m.find("VaultStatusMessage") != m.end() && !m["VaultStatusMessage"].empty()) {
      vaultStatusMessage = make_shared<string>(boost::any_cast<string>(m["VaultStatusMessage"]));
    }
    if (m.find("VaultStorageClass") != m.end() && !m["VaultStorageClass"].empty()) {
      vaultStorageClass = make_shared<string>(boost::any_cast<string>(m["VaultStorageClass"]));
    }
    if (m.find("VaultType") != m.end() && !m["VaultType"].empty()) {
      vaultType = make_shared<string>(boost::any_cast<string>(m["VaultType"]));
    }
    if (m.find("WormEnabled") != m.end() && !m["WormEnabled"].empty()) {
      wormEnabled = make_shared<bool>(boost::any_cast<bool>(m["WormEnabled"]));
    }
  }


  virtual ~DescribeVaultsResponseBodyVaultsVault() = default;
};
class DescribeVaultsResponseBodyVaults : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeVaultsResponseBodyVaultsVault>> vault{};

  DescribeVaultsResponseBodyVaults() {}

  explicit DescribeVaultsResponseBodyVaults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vault) {
      vector<boost::any> temp1;
      for(auto item1:*vault){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Vault"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Vault") != m.end() && !m["Vault"].empty()) {
      if (typeid(vector<boost::any>) == m["Vault"].type()) {
        vector<DescribeVaultsResponseBodyVaultsVault> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Vault"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVaultsResponseBodyVaultsVault model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        vault = make_shared<vector<DescribeVaultsResponseBodyVaultsVault>>(expect1);
      }
    }
  }


  virtual ~DescribeVaultsResponseBodyVaults() = default;
};
class DescribeVaultsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};
  shared_ptr<DescribeVaultsResponseBodyVaults> vaults{};

  DescribeVaultsResponseBody() {}

  explicit DescribeVaultsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    if (vaults) {
      res["Vaults"] = vaults ? boost::any(vaults->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
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
    if (m.find("Vaults") != m.end() && !m["Vaults"].empty()) {
      if (typeid(map<string, boost::any>) == m["Vaults"].type()) {
        DescribeVaultsResponseBodyVaults model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Vaults"]));
        vaults = make_shared<DescribeVaultsResponseBodyVaults>(model1);
      }
    }
  }


  virtual ~DescribeVaultsResponseBody() = default;
};
class DescribeVaultsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeVaultsResponseBody> body{};

  DescribeVaultsResponse() {}

  explicit DescribeVaultsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeVaultsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeVaultsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeVaultsResponse() = default;
};
class DetachNasFileSystemRequest : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> crossAccountRoleName{};
  shared_ptr<string> crossAccountType{};
  shared_ptr<long> crossAccountUserId{};
  shared_ptr<string> fileSystemId{};

  DetachNasFileSystemRequest() {}

  explicit DetachNasFileSystemRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (crossAccountRoleName) {
      res["CrossAccountRoleName"] = boost::any(*crossAccountRoleName);
    }
    if (crossAccountType) {
      res["CrossAccountType"] = boost::any(*crossAccountType);
    }
    if (crossAccountUserId) {
      res["CrossAccountUserId"] = boost::any(*crossAccountUserId);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CrossAccountRoleName") != m.end() && !m["CrossAccountRoleName"].empty()) {
      crossAccountRoleName = make_shared<string>(boost::any_cast<string>(m["CrossAccountRoleName"]));
    }
    if (m.find("CrossAccountType") != m.end() && !m["CrossAccountType"].empty()) {
      crossAccountType = make_shared<string>(boost::any_cast<string>(m["CrossAccountType"]));
    }
    if (m.find("CrossAccountUserId") != m.end() && !m["CrossAccountUserId"].empty()) {
      crossAccountUserId = make_shared<long>(boost::any_cast<long>(m["CrossAccountUserId"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
  }


  virtual ~DetachNasFileSystemRequest() = default;
};
class DetachNasFileSystemResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> taskId{};

  DetachNasFileSystemResponseBody() {}

  explicit DetachNasFileSystemResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~DetachNasFileSystemResponseBody() = default;
};
class DetachNasFileSystemResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DetachNasFileSystemResponseBody> body{};

  DetachNasFileSystemResponse() {}

  explicit DetachNasFileSystemResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetachNasFileSystemResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetachNasFileSystemResponseBody>(model1);
      }
    }
  }


  virtual ~DetachNasFileSystemResponse() = default;
};
class DisableBackupPlanRequest : public Darabonba::Model {
public:
  shared_ptr<string> planId{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> vaultId{};

  DisableBackupPlanRequest() {}

  explicit DisableBackupPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (planId) {
      res["PlanId"] = boost::any(*planId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (vaultId) {
      res["VaultId"] = boost::any(*vaultId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PlanId") != m.end() && !m["PlanId"].empty()) {
      planId = make_shared<string>(boost::any_cast<string>(m["PlanId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("VaultId") != m.end() && !m["VaultId"].empty()) {
      vaultId = make_shared<string>(boost::any_cast<string>(m["VaultId"]));
    }
  }


  virtual ~DisableBackupPlanRequest() = default;
};
class DisableBackupPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DisableBackupPlanResponseBody() {}

  explicit DisableBackupPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DisableBackupPlanResponseBody() = default;
};
class DisableBackupPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DisableBackupPlanResponseBody> body{};

  DisableBackupPlanResponse() {}

  explicit DisableBackupPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DisableBackupPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableBackupPlanResponseBody>(model1);
      }
    }
  }


  virtual ~DisableBackupPlanResponse() = default;
};
class DisableHanaBackupPlanRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> planId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> vaultId{};

  DisableHanaBackupPlanRequest() {}

  explicit DisableHanaBackupPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (planId) {
      res["PlanId"] = boost::any(*planId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (vaultId) {
      res["VaultId"] = boost::any(*vaultId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("PlanId") != m.end() && !m["PlanId"].empty()) {
      planId = make_shared<string>(boost::any_cast<string>(m["PlanId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("VaultId") != m.end() && !m["VaultId"].empty()) {
      vaultId = make_shared<string>(boost::any_cast<string>(m["VaultId"]));
    }
  }


  virtual ~DisableHanaBackupPlanRequest() = default;
};
class DisableHanaBackupPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DisableHanaBackupPlanResponseBody() {}

  explicit DisableHanaBackupPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DisableHanaBackupPlanResponseBody() = default;
};
class DisableHanaBackupPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DisableHanaBackupPlanResponseBody> body{};

  DisableHanaBackupPlanResponse() {}

  explicit DisableHanaBackupPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DisableHanaBackupPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableHanaBackupPlanResponseBody>(model1);
      }
    }
  }


  virtual ~DisableHanaBackupPlanResponse() = default;
};
class EnableBackupPlanRequest : public Darabonba::Model {
public:
  shared_ptr<string> planId{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> vaultId{};

  EnableBackupPlanRequest() {}

  explicit EnableBackupPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (planId) {
      res["PlanId"] = boost::any(*planId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (vaultId) {
      res["VaultId"] = boost::any(*vaultId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PlanId") != m.end() && !m["PlanId"].empty()) {
      planId = make_shared<string>(boost::any_cast<string>(m["PlanId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("VaultId") != m.end() && !m["VaultId"].empty()) {
      vaultId = make_shared<string>(boost::any_cast<string>(m["VaultId"]));
    }
  }


  virtual ~EnableBackupPlanRequest() = default;
};
class EnableBackupPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  EnableBackupPlanResponseBody() {}

  explicit EnableBackupPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~EnableBackupPlanResponseBody() = default;
};
class EnableBackupPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnableBackupPlanResponseBody> body{};

  EnableBackupPlanResponse() {}

  explicit EnableBackupPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnableBackupPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableBackupPlanResponseBody>(model1);
      }
    }
  }


  virtual ~EnableBackupPlanResponse() = default;
};
class EnableHanaBackupPlanRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> planId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> vaultId{};

  EnableHanaBackupPlanRequest() {}

  explicit EnableHanaBackupPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (planId) {
      res["PlanId"] = boost::any(*planId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (vaultId) {
      res["VaultId"] = boost::any(*vaultId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("PlanId") != m.end() && !m["PlanId"].empty()) {
      planId = make_shared<string>(boost::any_cast<string>(m["PlanId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("VaultId") != m.end() && !m["VaultId"].empty()) {
      vaultId = make_shared<string>(boost::any_cast<string>(m["VaultId"]));
    }
  }


  virtual ~EnableHanaBackupPlanRequest() = default;
};
class EnableHanaBackupPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  EnableHanaBackupPlanResponseBody() {}

  explicit EnableHanaBackupPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~EnableHanaBackupPlanResponseBody() = default;
};
class EnableHanaBackupPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnableHanaBackupPlanResponseBody> body{};

  EnableHanaBackupPlanResponse() {}

  explicit EnableHanaBackupPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnableHanaBackupPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableHanaBackupPlanResponseBody>(model1);
      }
    }
  }


  virtual ~EnableHanaBackupPlanResponse() = default;
};
class ExecuteBackupPlanRequest : public Darabonba::Model {
public:
  shared_ptr<string> planId{};
  shared_ptr<string> ruleId{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> vaultId{};

  ExecuteBackupPlanRequest() {}

  explicit ExecuteBackupPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (planId) {
      res["PlanId"] = boost::any(*planId);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (vaultId) {
      res["VaultId"] = boost::any(*vaultId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PlanId") != m.end() && !m["PlanId"].empty()) {
      planId = make_shared<string>(boost::any_cast<string>(m["PlanId"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("VaultId") != m.end() && !m["VaultId"].empty()) {
      vaultId = make_shared<string>(boost::any_cast<string>(m["VaultId"]));
    }
  }


  virtual ~ExecuteBackupPlanRequest() = default;
};
class ExecuteBackupPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> jobId{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ExecuteBackupPlanResponseBody() {}

  explicit ExecuteBackupPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
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
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ExecuteBackupPlanResponseBody() = default;
};
class ExecuteBackupPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ExecuteBackupPlanResponseBody> body{};

  ExecuteBackupPlanResponse() {}

  explicit ExecuteBackupPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExecuteBackupPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExecuteBackupPlanResponseBody>(model1);
      }
    }
  }


  virtual ~ExecuteBackupPlanResponse() = default;
};
class ExecutePolicyV2Request : public Darabonba::Model {
public:
  shared_ptr<string> dataSourceId{};
  shared_ptr<string> policyId{};
  shared_ptr<string> ruleId{};
  shared_ptr<string> sourceType{};

  ExecutePolicyV2Request() {}

  explicit ExecutePolicyV2Request(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSourceId) {
      res["DataSourceId"] = boost::any(*dataSourceId);
    }
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataSourceId") != m.end() && !m["DataSourceId"].empty()) {
      dataSourceId = make_shared<string>(boost::any_cast<string>(m["DataSourceId"]));
    }
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
  }


  virtual ~ExecutePolicyV2Request() = default;
};
class ExecutePolicyV2ResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> jobId{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ExecutePolicyV2ResponseBody() {}

  explicit ExecutePolicyV2ResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
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
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ExecutePolicyV2ResponseBody() = default;
};
class ExecutePolicyV2Response : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ExecutePolicyV2ResponseBody> body{};

  ExecutePolicyV2Response() {}

  explicit ExecutePolicyV2Response(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExecutePolicyV2ResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExecutePolicyV2ResponseBody>(model1);
      }
    }
  }


  virtual ~ExecutePolicyV2Response() = default;
};
class GenerateRamPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> actionType{};
  shared_ptr<bool> requireBasePolicy{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> vaultId{};

  GenerateRamPolicyRequest() {}

  explicit GenerateRamPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actionType) {
      res["ActionType"] = boost::any(*actionType);
    }
    if (requireBasePolicy) {
      res["RequireBasePolicy"] = boost::any(*requireBasePolicy);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (vaultId) {
      res["VaultId"] = boost::any(*vaultId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActionType") != m.end() && !m["ActionType"].empty()) {
      actionType = make_shared<string>(boost::any_cast<string>(m["ActionType"]));
    }
    if (m.find("RequireBasePolicy") != m.end() && !m["RequireBasePolicy"].empty()) {
      requireBasePolicy = make_shared<bool>(boost::any_cast<bool>(m["RequireBasePolicy"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("VaultId") != m.end() && !m["VaultId"].empty()) {
      vaultId = make_shared<string>(boost::any_cast<string>(m["VaultId"]));
    }
  }


  virtual ~GenerateRamPolicyRequest() = default;
};
class GenerateRamPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> policyDocument{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GenerateRamPolicyResponseBody() {}

  explicit GenerateRamPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (policyDocument) {
      res["PolicyDocument"] = boost::any(*policyDocument);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PolicyDocument") != m.end() && !m["PolicyDocument"].empty()) {
      policyDocument = make_shared<string>(boost::any_cast<string>(m["PolicyDocument"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GenerateRamPolicyResponseBody() = default;
};
class GenerateRamPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GenerateRamPolicyResponseBody> body{};

  GenerateRamPolicyResponse() {}

  explicit GenerateRamPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GenerateRamPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GenerateRamPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~GenerateRamPolicyResponse() = default;
};
class GetTempFileDownloadLinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> tempFileKey{};

  GetTempFileDownloadLinkRequest() {}

  explicit GetTempFileDownloadLinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tempFileKey) {
      res["TempFileKey"] = boost::any(*tempFileKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TempFileKey") != m.end() && !m["TempFileKey"].empty()) {
      tempFileKey = make_shared<string>(boost::any_cast<string>(m["TempFileKey"]));
    }
  }


  virtual ~GetTempFileDownloadLinkRequest() = default;
};
class GetTempFileDownloadLinkResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> url{};

  GetTempFileDownloadLinkResponseBody() {}

  explicit GetTempFileDownloadLinkResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (url) {
      res["Url"] = boost::any(*url);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~GetTempFileDownloadLinkResponseBody() = default;
};
class GetTempFileDownloadLinkResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTempFileDownloadLinkResponseBody> body{};

  GetTempFileDownloadLinkResponse() {}

  explicit GetTempFileDownloadLinkResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTempFileDownloadLinkResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTempFileDownloadLinkResponseBody>(model1);
      }
    }
  }


  virtual ~GetTempFileDownloadLinkResponse() = default;
};
class InstallBackupClientsRequest : public Darabonba::Model {
public:
  shared_ptr<string> crossAccountRoleName{};
  shared_ptr<string> crossAccountType{};
  shared_ptr<long> crossAccountUserId{};
  shared_ptr<map<string, boost::any>> instanceIds{};

  InstallBackupClientsRequest() {}

  explicit InstallBackupClientsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (crossAccountRoleName) {
      res["CrossAccountRoleName"] = boost::any(*crossAccountRoleName);
    }
    if (crossAccountType) {
      res["CrossAccountType"] = boost::any(*crossAccountType);
    }
    if (crossAccountUserId) {
      res["CrossAccountUserId"] = boost::any(*crossAccountUserId);
    }
    if (instanceIds) {
      res["InstanceIds"] = boost::any(*instanceIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CrossAccountRoleName") != m.end() && !m["CrossAccountRoleName"].empty()) {
      crossAccountRoleName = make_shared<string>(boost::any_cast<string>(m["CrossAccountRoleName"]));
    }
    if (m.find("CrossAccountType") != m.end() && !m["CrossAccountType"].empty()) {
      crossAccountType = make_shared<string>(boost::any_cast<string>(m["CrossAccountType"]));
    }
    if (m.find("CrossAccountUserId") != m.end() && !m["CrossAccountUserId"].empty()) {
      crossAccountUserId = make_shared<long>(boost::any_cast<long>(m["CrossAccountUserId"]));
    }
    if (m.find("InstanceIds") != m.end() && !m["InstanceIds"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["InstanceIds"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      instanceIds = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~InstallBackupClientsRequest() = default;
};
class InstallBackupClientsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> crossAccountRoleName{};
  shared_ptr<string> crossAccountType{};
  shared_ptr<long> crossAccountUserId{};
  shared_ptr<string> instanceIdsShrink{};

  InstallBackupClientsShrinkRequest() {}

  explicit InstallBackupClientsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (crossAccountRoleName) {
      res["CrossAccountRoleName"] = boost::any(*crossAccountRoleName);
    }
    if (crossAccountType) {
      res["CrossAccountType"] = boost::any(*crossAccountType);
    }
    if (crossAccountUserId) {
      res["CrossAccountUserId"] = boost::any(*crossAccountUserId);
    }
    if (instanceIdsShrink) {
      res["InstanceIds"] = boost::any(*instanceIdsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CrossAccountRoleName") != m.end() && !m["CrossAccountRoleName"].empty()) {
      crossAccountRoleName = make_shared<string>(boost::any_cast<string>(m["CrossAccountRoleName"]));
    }
    if (m.find("CrossAccountType") != m.end() && !m["CrossAccountType"].empty()) {
      crossAccountType = make_shared<string>(boost::any_cast<string>(m["CrossAccountType"]));
    }
    if (m.find("CrossAccountUserId") != m.end() && !m["CrossAccountUserId"].empty()) {
      crossAccountUserId = make_shared<long>(boost::any_cast<long>(m["CrossAccountUserId"]));
    }
    if (m.find("InstanceIds") != m.end() && !m["InstanceIds"].empty()) {
      instanceIdsShrink = make_shared<string>(boost::any_cast<string>(m["InstanceIds"]));
    }
  }


  virtual ~InstallBackupClientsShrinkRequest() = default;
};
class InstallBackupClientsResponseBodyInstanceStatuses : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> instanceId{};
  shared_ptr<bool> validInstance{};

  InstallBackupClientsResponseBodyInstanceStatuses() {}

  explicit InstallBackupClientsResponseBodyInstanceStatuses(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (validInstance) {
      res["ValidInstance"] = boost::any(*validInstance);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ValidInstance") != m.end() && !m["ValidInstance"].empty()) {
      validInstance = make_shared<bool>(boost::any_cast<bool>(m["ValidInstance"]));
    }
  }


  virtual ~InstallBackupClientsResponseBodyInstanceStatuses() = default;
};
class InstallBackupClientsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<InstallBackupClientsResponseBodyInstanceStatuses>> instanceStatuses{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> taskId{};

  InstallBackupClientsResponseBody() {}

  explicit InstallBackupClientsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (instanceStatuses) {
      vector<boost::any> temp1;
      for(auto item1:*instanceStatuses){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstanceStatuses"] = boost::any(temp1);
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
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("InstanceStatuses") != m.end() && !m["InstanceStatuses"].empty()) {
      if (typeid(vector<boost::any>) == m["InstanceStatuses"].type()) {
        vector<InstallBackupClientsResponseBodyInstanceStatuses> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanceStatuses"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            InstallBackupClientsResponseBodyInstanceStatuses model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceStatuses = make_shared<vector<InstallBackupClientsResponseBodyInstanceStatuses>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~InstallBackupClientsResponseBody() = default;
};
class InstallBackupClientsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<InstallBackupClientsResponseBody> body{};

  InstallBackupClientsResponse() {}

  explicit InstallBackupClientsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        InstallBackupClientsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<InstallBackupClientsResponseBody>(model1);
      }
    }
  }


  virtual ~InstallBackupClientsResponse() = default;
};
class OpenHbrServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  OpenHbrServiceResponseBody() {}

  explicit OpenHbrServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~OpenHbrServiceResponseBody() = default;
};
class OpenHbrServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OpenHbrServiceResponseBody> body{};

  OpenHbrServiceResponse() {}

  explicit OpenHbrServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OpenHbrServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OpenHbrServiceResponseBody>(model1);
      }
    }
  }


  virtual ~OpenHbrServiceResponse() = default;
};
class SearchHistoricalSnapshotsRequest : public Darabonba::Model {
public:
  shared_ptr<long> limit{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> order{};
  shared_ptr<vector<boost::any>> query{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> sourceType{};

  SearchHistoricalSnapshotsRequest() {}

  explicit SearchHistoricalSnapshotsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (query) {
      res["Query"] = boost::any(*query);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("Query") != m.end() && !m["Query"].empty()) {
      vector<boost::any> toVec1;
      if (typeid(vector<boost::any>) == m["Query"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Query"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<boost::any>(item));
        }
      }
      query = make_shared<vector<boost::any>>(toVec1);
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
  }


  virtual ~SearchHistoricalSnapshotsRequest() = default;
};
class SearchHistoricalSnapshotsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> limit{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> order{};
  shared_ptr<string> queryShrink{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> sourceType{};

  SearchHistoricalSnapshotsShrinkRequest() {}

  explicit SearchHistoricalSnapshotsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (queryShrink) {
      res["Query"] = boost::any(*queryShrink);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("Query") != m.end() && !m["Query"].empty()) {
      queryShrink = make_shared<string>(boost::any_cast<string>(m["Query"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
  }


  virtual ~SearchHistoricalSnapshotsShrinkRequest() = default;
};
class SearchHistoricalSnapshotsResponseBodySnapshotsSnapshotPaths : public Darabonba::Model {
public:
  shared_ptr<vector<string>> path{};

  SearchHistoricalSnapshotsResponseBodySnapshotsSnapshotPaths() {}

  explicit SearchHistoricalSnapshotsResponseBodySnapshotsSnapshotPaths(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (path) {
      res["Path"] = boost::any(*path);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Path"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Path"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      path = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~SearchHistoricalSnapshotsResponseBodySnapshotsSnapshotPaths() = default;
};
class SearchHistoricalSnapshotsResponseBodySnapshotsSnapshot : public Darabonba::Model {
public:
  shared_ptr<long> actualBytes{};
  shared_ptr<long> actualItems{};
  shared_ptr<long> archiveTime{};
  shared_ptr<string> backupType{};
  shared_ptr<string> bucket{};
  shared_ptr<long> bytesDone{};
  shared_ptr<long> bytesTotal{};
  shared_ptr<string> clientId{};
  shared_ptr<long> completeTime{};
  shared_ptr<long> createTime{};
  shared_ptr<long> createdTime{};
  shared_ptr<string> errorFile{};
  shared_ptr<string> exclude{};
  shared_ptr<long> expireTime{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> include{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<long> itemsDone{};
  shared_ptr<long> itemsTotal{};
  shared_ptr<string> jobId{};
  shared_ptr<string> parentSnapshotHash{};
  shared_ptr<string> path{};
  shared_ptr<SearchHistoricalSnapshotsResponseBodySnapshotsSnapshotPaths> paths{};
  shared_ptr<string> prefix{};
  shared_ptr<long> rangeEnd{};
  shared_ptr<long> rangeStart{};
  shared_ptr<long> retention{};
  shared_ptr<string> snapshotHash{};
  shared_ptr<string> snapshotId{};
  shared_ptr<string> sourceParentSnapshotHash{};
  shared_ptr<string> sourceSnapshotHash{};
  shared_ptr<string> sourceType{};
  shared_ptr<long> startTime{};
  shared_ptr<string> status{};
  shared_ptr<string> storageClass{};
  shared_ptr<string> tableName{};
  shared_ptr<long> updatedTime{};
  shared_ptr<bool> useCommonNas{};
  shared_ptr<string> vaultId{};

  SearchHistoricalSnapshotsResponseBodySnapshotsSnapshot() {}

  explicit SearchHistoricalSnapshotsResponseBodySnapshotsSnapshot(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actualBytes) {
      res["ActualBytes"] = boost::any(*actualBytes);
    }
    if (actualItems) {
      res["ActualItems"] = boost::any(*actualItems);
    }
    if (archiveTime) {
      res["ArchiveTime"] = boost::any(*archiveTime);
    }
    if (backupType) {
      res["BackupType"] = boost::any(*backupType);
    }
    if (bucket) {
      res["Bucket"] = boost::any(*bucket);
    }
    if (bytesDone) {
      res["BytesDone"] = boost::any(*bytesDone);
    }
    if (bytesTotal) {
      res["BytesTotal"] = boost::any(*bytesTotal);
    }
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (completeTime) {
      res["CompleteTime"] = boost::any(*completeTime);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (errorFile) {
      res["ErrorFile"] = boost::any(*errorFile);
    }
    if (exclude) {
      res["Exclude"] = boost::any(*exclude);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (include) {
      res["Include"] = boost::any(*include);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (itemsDone) {
      res["ItemsDone"] = boost::any(*itemsDone);
    }
    if (itemsTotal) {
      res["ItemsTotal"] = boost::any(*itemsTotal);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (parentSnapshotHash) {
      res["ParentSnapshotHash"] = boost::any(*parentSnapshotHash);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (paths) {
      res["Paths"] = paths ? boost::any(paths->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (prefix) {
      res["Prefix"] = boost::any(*prefix);
    }
    if (rangeEnd) {
      res["RangeEnd"] = boost::any(*rangeEnd);
    }
    if (rangeStart) {
      res["RangeStart"] = boost::any(*rangeStart);
    }
    if (retention) {
      res["Retention"] = boost::any(*retention);
    }
    if (snapshotHash) {
      res["SnapshotHash"] = boost::any(*snapshotHash);
    }
    if (snapshotId) {
      res["SnapshotId"] = boost::any(*snapshotId);
    }
    if (sourceParentSnapshotHash) {
      res["SourceParentSnapshotHash"] = boost::any(*sourceParentSnapshotHash);
    }
    if (sourceSnapshotHash) {
      res["SourceSnapshotHash"] = boost::any(*sourceSnapshotHash);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (storageClass) {
      res["StorageClass"] = boost::any(*storageClass);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    if (updatedTime) {
      res["UpdatedTime"] = boost::any(*updatedTime);
    }
    if (useCommonNas) {
      res["UseCommonNas"] = boost::any(*useCommonNas);
    }
    if (vaultId) {
      res["VaultId"] = boost::any(*vaultId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActualBytes") != m.end() && !m["ActualBytes"].empty()) {
      actualBytes = make_shared<long>(boost::any_cast<long>(m["ActualBytes"]));
    }
    if (m.find("ActualItems") != m.end() && !m["ActualItems"].empty()) {
      actualItems = make_shared<long>(boost::any_cast<long>(m["ActualItems"]));
    }
    if (m.find("ArchiveTime") != m.end() && !m["ArchiveTime"].empty()) {
      archiveTime = make_shared<long>(boost::any_cast<long>(m["ArchiveTime"]));
    }
    if (m.find("BackupType") != m.end() && !m["BackupType"].empty()) {
      backupType = make_shared<string>(boost::any_cast<string>(m["BackupType"]));
    }
    if (m.find("Bucket") != m.end() && !m["Bucket"].empty()) {
      bucket = make_shared<string>(boost::any_cast<string>(m["Bucket"]));
    }
    if (m.find("BytesDone") != m.end() && !m["BytesDone"].empty()) {
      bytesDone = make_shared<long>(boost::any_cast<long>(m["BytesDone"]));
    }
    if (m.find("BytesTotal") != m.end() && !m["BytesTotal"].empty()) {
      bytesTotal = make_shared<long>(boost::any_cast<long>(m["BytesTotal"]));
    }
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("CompleteTime") != m.end() && !m["CompleteTime"].empty()) {
      completeTime = make_shared<long>(boost::any_cast<long>(m["CompleteTime"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<long>(boost::any_cast<long>(m["CreatedTime"]));
    }
    if (m.find("ErrorFile") != m.end() && !m["ErrorFile"].empty()) {
      errorFile = make_shared<string>(boost::any_cast<string>(m["ErrorFile"]));
    }
    if (m.find("Exclude") != m.end() && !m["Exclude"].empty()) {
      exclude = make_shared<string>(boost::any_cast<string>(m["Exclude"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<long>(boost::any_cast<long>(m["ExpireTime"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("Include") != m.end() && !m["Include"].empty()) {
      include = make_shared<string>(boost::any_cast<string>(m["Include"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("ItemsDone") != m.end() && !m["ItemsDone"].empty()) {
      itemsDone = make_shared<long>(boost::any_cast<long>(m["ItemsDone"]));
    }
    if (m.find("ItemsTotal") != m.end() && !m["ItemsTotal"].empty()) {
      itemsTotal = make_shared<long>(boost::any_cast<long>(m["ItemsTotal"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("ParentSnapshotHash") != m.end() && !m["ParentSnapshotHash"].empty()) {
      parentSnapshotHash = make_shared<string>(boost::any_cast<string>(m["ParentSnapshotHash"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("Paths") != m.end() && !m["Paths"].empty()) {
      if (typeid(map<string, boost::any>) == m["Paths"].type()) {
        SearchHistoricalSnapshotsResponseBodySnapshotsSnapshotPaths model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Paths"]));
        paths = make_shared<SearchHistoricalSnapshotsResponseBodySnapshotsSnapshotPaths>(model1);
      }
    }
    if (m.find("Prefix") != m.end() && !m["Prefix"].empty()) {
      prefix = make_shared<string>(boost::any_cast<string>(m["Prefix"]));
    }
    if (m.find("RangeEnd") != m.end() && !m["RangeEnd"].empty()) {
      rangeEnd = make_shared<long>(boost::any_cast<long>(m["RangeEnd"]));
    }
    if (m.find("RangeStart") != m.end() && !m["RangeStart"].empty()) {
      rangeStart = make_shared<long>(boost::any_cast<long>(m["RangeStart"]));
    }
    if (m.find("Retention") != m.end() && !m["Retention"].empty()) {
      retention = make_shared<long>(boost::any_cast<long>(m["Retention"]));
    }
    if (m.find("SnapshotHash") != m.end() && !m["SnapshotHash"].empty()) {
      snapshotHash = make_shared<string>(boost::any_cast<string>(m["SnapshotHash"]));
    }
    if (m.find("SnapshotId") != m.end() && !m["SnapshotId"].empty()) {
      snapshotId = make_shared<string>(boost::any_cast<string>(m["SnapshotId"]));
    }
    if (m.find("SourceParentSnapshotHash") != m.end() && !m["SourceParentSnapshotHash"].empty()) {
      sourceParentSnapshotHash = make_shared<string>(boost::any_cast<string>(m["SourceParentSnapshotHash"]));
    }
    if (m.find("SourceSnapshotHash") != m.end() && !m["SourceSnapshotHash"].empty()) {
      sourceSnapshotHash = make_shared<string>(boost::any_cast<string>(m["SourceSnapshotHash"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StorageClass") != m.end() && !m["StorageClass"].empty()) {
      storageClass = make_shared<string>(boost::any_cast<string>(m["StorageClass"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
    if (m.find("UpdatedTime") != m.end() && !m["UpdatedTime"].empty()) {
      updatedTime = make_shared<long>(boost::any_cast<long>(m["UpdatedTime"]));
    }
    if (m.find("UseCommonNas") != m.end() && !m["UseCommonNas"].empty()) {
      useCommonNas = make_shared<bool>(boost::any_cast<bool>(m["UseCommonNas"]));
    }
    if (m.find("VaultId") != m.end() && !m["VaultId"].empty()) {
      vaultId = make_shared<string>(boost::any_cast<string>(m["VaultId"]));
    }
  }


  virtual ~SearchHistoricalSnapshotsResponseBodySnapshotsSnapshot() = default;
};
class SearchHistoricalSnapshotsResponseBodySnapshots : public Darabonba::Model {
public:
  shared_ptr<vector<SearchHistoricalSnapshotsResponseBodySnapshotsSnapshot>> snapshot{};

  SearchHistoricalSnapshotsResponseBodySnapshots() {}

  explicit SearchHistoricalSnapshotsResponseBodySnapshots(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (snapshot) {
      vector<boost::any> temp1;
      for(auto item1:*snapshot){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Snapshot"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Snapshot") != m.end() && !m["Snapshot"].empty()) {
      if (typeid(vector<boost::any>) == m["Snapshot"].type()) {
        vector<SearchHistoricalSnapshotsResponseBodySnapshotsSnapshot> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Snapshot"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchHistoricalSnapshotsResponseBodySnapshotsSnapshot model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        snapshot = make_shared<vector<SearchHistoricalSnapshotsResponseBodySnapshotsSnapshot>>(expect1);
      }
    }
  }


  virtual ~SearchHistoricalSnapshotsResponseBodySnapshots() = default;
};
class SearchHistoricalSnapshotsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> limit{};
  shared_ptr<string> message{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<SearchHistoricalSnapshotsResponseBodySnapshots> snapshots{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  SearchHistoricalSnapshotsResponseBody() {}

  explicit SearchHistoricalSnapshotsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
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
    if (snapshots) {
      res["Snapshots"] = snapshots ? boost::any(snapshots->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
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
    if (m.find("Snapshots") != m.end() && !m["Snapshots"].empty()) {
      if (typeid(map<string, boost::any>) == m["Snapshots"].type()) {
        SearchHistoricalSnapshotsResponseBodySnapshots model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Snapshots"]));
        snapshots = make_shared<SearchHistoricalSnapshotsResponseBodySnapshots>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~SearchHistoricalSnapshotsResponseBody() = default;
};
class SearchHistoricalSnapshotsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SearchHistoricalSnapshotsResponseBody> body{};

  SearchHistoricalSnapshotsResponse() {}

  explicit SearchHistoricalSnapshotsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SearchHistoricalSnapshotsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SearchHistoricalSnapshotsResponseBody>(model1);
      }
    }
  }


  virtual ~SearchHistoricalSnapshotsResponse() = default;
};
class StartHanaDatabaseAsyncRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> databaseName{};
  shared_ptr<string> vaultId{};

  StartHanaDatabaseAsyncRequest() {}

  explicit StartHanaDatabaseAsyncRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (databaseName) {
      res["DatabaseName"] = boost::any(*databaseName);
    }
    if (vaultId) {
      res["VaultId"] = boost::any(*vaultId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("DatabaseName") != m.end() && !m["DatabaseName"].empty()) {
      databaseName = make_shared<string>(boost::any_cast<string>(m["DatabaseName"]));
    }
    if (m.find("VaultId") != m.end() && !m["VaultId"].empty()) {
      vaultId = make_shared<string>(boost::any_cast<string>(m["VaultId"]));
    }
  }


  virtual ~StartHanaDatabaseAsyncRequest() = default;
};
class StartHanaDatabaseAsyncResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> taskId{};

  StartHanaDatabaseAsyncResponseBody() {}

  explicit StartHanaDatabaseAsyncResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~StartHanaDatabaseAsyncResponseBody() = default;
};
class StartHanaDatabaseAsyncResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StartHanaDatabaseAsyncResponseBody> body{};

  StartHanaDatabaseAsyncResponse() {}

  explicit StartHanaDatabaseAsyncResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartHanaDatabaseAsyncResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartHanaDatabaseAsyncResponseBody>(model1);
      }
    }
  }


  virtual ~StartHanaDatabaseAsyncResponse() = default;
};
class StopHanaDatabaseAsyncRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> databaseName{};
  shared_ptr<string> vaultId{};

  StopHanaDatabaseAsyncRequest() {}

  explicit StopHanaDatabaseAsyncRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (databaseName) {
      res["DatabaseName"] = boost::any(*databaseName);
    }
    if (vaultId) {
      res["VaultId"] = boost::any(*vaultId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("DatabaseName") != m.end() && !m["DatabaseName"].empty()) {
      databaseName = make_shared<string>(boost::any_cast<string>(m["DatabaseName"]));
    }
    if (m.find("VaultId") != m.end() && !m["VaultId"].empty()) {
      vaultId = make_shared<string>(boost::any_cast<string>(m["VaultId"]));
    }
  }


  virtual ~StopHanaDatabaseAsyncRequest() = default;
};
class StopHanaDatabaseAsyncResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> taskId{};

  StopHanaDatabaseAsyncResponseBody() {}

  explicit StopHanaDatabaseAsyncResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~StopHanaDatabaseAsyncResponseBody() = default;
};
class StopHanaDatabaseAsyncResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopHanaDatabaseAsyncResponseBody> body{};

  StopHanaDatabaseAsyncResponse() {}

  explicit StopHanaDatabaseAsyncResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopHanaDatabaseAsyncResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopHanaDatabaseAsyncResponseBody>(model1);
      }
    }
  }


  virtual ~StopHanaDatabaseAsyncResponse() = default;
};
class UninstallBackupClientsRequest : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> clientIds{};
  shared_ptr<string> crossAccountRoleName{};
  shared_ptr<string> crossAccountType{};
  shared_ptr<long> crossAccountUserId{};
  shared_ptr<map<string, boost::any>> instanceIds{};

  UninstallBackupClientsRequest() {}

  explicit UninstallBackupClientsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientIds) {
      res["ClientIds"] = boost::any(*clientIds);
    }
    if (crossAccountRoleName) {
      res["CrossAccountRoleName"] = boost::any(*crossAccountRoleName);
    }
    if (crossAccountType) {
      res["CrossAccountType"] = boost::any(*crossAccountType);
    }
    if (crossAccountUserId) {
      res["CrossAccountUserId"] = boost::any(*crossAccountUserId);
    }
    if (instanceIds) {
      res["InstanceIds"] = boost::any(*instanceIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientIds") != m.end() && !m["ClientIds"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ClientIds"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      clientIds = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("CrossAccountRoleName") != m.end() && !m["CrossAccountRoleName"].empty()) {
      crossAccountRoleName = make_shared<string>(boost::any_cast<string>(m["CrossAccountRoleName"]));
    }
    if (m.find("CrossAccountType") != m.end() && !m["CrossAccountType"].empty()) {
      crossAccountType = make_shared<string>(boost::any_cast<string>(m["CrossAccountType"]));
    }
    if (m.find("CrossAccountUserId") != m.end() && !m["CrossAccountUserId"].empty()) {
      crossAccountUserId = make_shared<long>(boost::any_cast<long>(m["CrossAccountUserId"]));
    }
    if (m.find("InstanceIds") != m.end() && !m["InstanceIds"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["InstanceIds"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      instanceIds = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~UninstallBackupClientsRequest() = default;
};
class UninstallBackupClientsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientIdsShrink{};
  shared_ptr<string> crossAccountRoleName{};
  shared_ptr<string> crossAccountType{};
  shared_ptr<long> crossAccountUserId{};
  shared_ptr<string> instanceIdsShrink{};

  UninstallBackupClientsShrinkRequest() {}

  explicit UninstallBackupClientsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientIdsShrink) {
      res["ClientIds"] = boost::any(*clientIdsShrink);
    }
    if (crossAccountRoleName) {
      res["CrossAccountRoleName"] = boost::any(*crossAccountRoleName);
    }
    if (crossAccountType) {
      res["CrossAccountType"] = boost::any(*crossAccountType);
    }
    if (crossAccountUserId) {
      res["CrossAccountUserId"] = boost::any(*crossAccountUserId);
    }
    if (instanceIdsShrink) {
      res["InstanceIds"] = boost::any(*instanceIdsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientIds") != m.end() && !m["ClientIds"].empty()) {
      clientIdsShrink = make_shared<string>(boost::any_cast<string>(m["ClientIds"]));
    }
    if (m.find("CrossAccountRoleName") != m.end() && !m["CrossAccountRoleName"].empty()) {
      crossAccountRoleName = make_shared<string>(boost::any_cast<string>(m["CrossAccountRoleName"]));
    }
    if (m.find("CrossAccountType") != m.end() && !m["CrossAccountType"].empty()) {
      crossAccountType = make_shared<string>(boost::any_cast<string>(m["CrossAccountType"]));
    }
    if (m.find("CrossAccountUserId") != m.end() && !m["CrossAccountUserId"].empty()) {
      crossAccountUserId = make_shared<long>(boost::any_cast<long>(m["CrossAccountUserId"]));
    }
    if (m.find("InstanceIds") != m.end() && !m["InstanceIds"].empty()) {
      instanceIdsShrink = make_shared<string>(boost::any_cast<string>(m["InstanceIds"]));
    }
  }


  virtual ~UninstallBackupClientsShrinkRequest() = default;
};
class UninstallBackupClientsResponseBodyInstanceStatuses : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> instanceId{};
  shared_ptr<bool> validInstance{};

  UninstallBackupClientsResponseBodyInstanceStatuses() {}

  explicit UninstallBackupClientsResponseBodyInstanceStatuses(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (validInstance) {
      res["ValidInstance"] = boost::any(*validInstance);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ValidInstance") != m.end() && !m["ValidInstance"].empty()) {
      validInstance = make_shared<bool>(boost::any_cast<bool>(m["ValidInstance"]));
    }
  }


  virtual ~UninstallBackupClientsResponseBodyInstanceStatuses() = default;
};
class UninstallBackupClientsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<UninstallBackupClientsResponseBodyInstanceStatuses>> instanceStatuses{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> taskId{};

  UninstallBackupClientsResponseBody() {}

  explicit UninstallBackupClientsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (instanceStatuses) {
      vector<boost::any> temp1;
      for(auto item1:*instanceStatuses){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstanceStatuses"] = boost::any(temp1);
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
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("InstanceStatuses") != m.end() && !m["InstanceStatuses"].empty()) {
      if (typeid(vector<boost::any>) == m["InstanceStatuses"].type()) {
        vector<UninstallBackupClientsResponseBodyInstanceStatuses> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanceStatuses"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UninstallBackupClientsResponseBodyInstanceStatuses model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceStatuses = make_shared<vector<UninstallBackupClientsResponseBodyInstanceStatuses>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~UninstallBackupClientsResponseBody() = default;
};
class UninstallBackupClientsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UninstallBackupClientsResponseBody> body{};

  UninstallBackupClientsResponse() {}

  explicit UninstallBackupClientsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UninstallBackupClientsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UninstallBackupClientsResponseBody>(model1);
      }
    }
  }


  virtual ~UninstallBackupClientsResponse() = default;
};
class UninstallClientRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> vaultId{};

  UninstallClientRequest() {}

  explicit UninstallClientRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (vaultId) {
      res["VaultId"] = boost::any(*vaultId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("VaultId") != m.end() && !m["VaultId"].empty()) {
      vaultId = make_shared<string>(boost::any_cast<string>(m["VaultId"]));
    }
  }


  virtual ~UninstallClientRequest() = default;
};
class UninstallClientResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> taskId{};

  UninstallClientResponseBody() {}

  explicit UninstallClientResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~UninstallClientResponseBody() = default;
};
class UninstallClientResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UninstallClientResponseBody> body{};

  UninstallClientResponse() {}

  explicit UninstallClientResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UninstallClientResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UninstallClientResponseBody>(model1);
      }
    }
  }


  virtual ~UninstallClientResponse() = default;
};
class UpdateBackupPlanRequestRule : public Darabonba::Model {
public:
  shared_ptr<string> backupType{};
  shared_ptr<string> destinationRegionId{};
  shared_ptr<long> destinationRetention{};
  shared_ptr<bool> disabled{};
  shared_ptr<bool> doCopy{};
  shared_ptr<long> retention{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> schedule{};

  UpdateBackupPlanRequestRule() {}

  explicit UpdateBackupPlanRequestRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupType) {
      res["BackupType"] = boost::any(*backupType);
    }
    if (destinationRegionId) {
      res["DestinationRegionId"] = boost::any(*destinationRegionId);
    }
    if (destinationRetention) {
      res["DestinationRetention"] = boost::any(*destinationRetention);
    }
    if (disabled) {
      res["Disabled"] = boost::any(*disabled);
    }
    if (doCopy) {
      res["DoCopy"] = boost::any(*doCopy);
    }
    if (retention) {
      res["Retention"] = boost::any(*retention);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (schedule) {
      res["Schedule"] = boost::any(*schedule);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupType") != m.end() && !m["BackupType"].empty()) {
      backupType = make_shared<string>(boost::any_cast<string>(m["BackupType"]));
    }
    if (m.find("DestinationRegionId") != m.end() && !m["DestinationRegionId"].empty()) {
      destinationRegionId = make_shared<string>(boost::any_cast<string>(m["DestinationRegionId"]));
    }
    if (m.find("DestinationRetention") != m.end() && !m["DestinationRetention"].empty()) {
      destinationRetention = make_shared<long>(boost::any_cast<long>(m["DestinationRetention"]));
    }
    if (m.find("Disabled") != m.end() && !m["Disabled"].empty()) {
      disabled = make_shared<bool>(boost::any_cast<bool>(m["Disabled"]));
    }
    if (m.find("DoCopy") != m.end() && !m["DoCopy"].empty()) {
      doCopy = make_shared<bool>(boost::any_cast<bool>(m["DoCopy"]));
    }
    if (m.find("Retention") != m.end() && !m["Retention"].empty()) {
      retention = make_shared<long>(boost::any_cast<long>(m["Retention"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("Schedule") != m.end() && !m["Schedule"].empty()) {
      schedule = make_shared<string>(boost::any_cast<string>(m["Schedule"]));
    }
  }


  virtual ~UpdateBackupPlanRequestRule() = default;
};
class UpdateBackupPlanRequest : public Darabonba::Model {
public:
  shared_ptr<string> changeListPath{};
  shared_ptr<map<string, boost::any>> detail{};
  shared_ptr<string> exclude{};
  shared_ptr<string> include{};
  shared_ptr<long> keepLatestSnapshots{};
  shared_ptr<string> options{};
  shared_ptr<OtsDetail> otsDetail{};
  shared_ptr<vector<string>> path{};
  shared_ptr<string> planId{};
  shared_ptr<string> planName{};
  shared_ptr<string> prefix{};
  shared_ptr<long> retention{};
  shared_ptr<vector<UpdateBackupPlanRequestRule>> rule{};
  shared_ptr<string> schedule{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> speedLimit{};
  shared_ptr<bool> updatePaths{};
  shared_ptr<string> vaultId{};

  UpdateBackupPlanRequest() {}

  explicit UpdateBackupPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changeListPath) {
      res["ChangeListPath"] = boost::any(*changeListPath);
    }
    if (detail) {
      res["Detail"] = boost::any(*detail);
    }
    if (exclude) {
      res["Exclude"] = boost::any(*exclude);
    }
    if (include) {
      res["Include"] = boost::any(*include);
    }
    if (keepLatestSnapshots) {
      res["KeepLatestSnapshots"] = boost::any(*keepLatestSnapshots);
    }
    if (options) {
      res["Options"] = boost::any(*options);
    }
    if (otsDetail) {
      res["OtsDetail"] = otsDetail ? boost::any(otsDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (planId) {
      res["PlanId"] = boost::any(*planId);
    }
    if (planName) {
      res["PlanName"] = boost::any(*planName);
    }
    if (prefix) {
      res["Prefix"] = boost::any(*prefix);
    }
    if (retention) {
      res["Retention"] = boost::any(*retention);
    }
    if (rule) {
      vector<boost::any> temp1;
      for(auto item1:*rule){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Rule"] = boost::any(temp1);
    }
    if (schedule) {
      res["Schedule"] = boost::any(*schedule);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (speedLimit) {
      res["SpeedLimit"] = boost::any(*speedLimit);
    }
    if (updatePaths) {
      res["UpdatePaths"] = boost::any(*updatePaths);
    }
    if (vaultId) {
      res["VaultId"] = boost::any(*vaultId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChangeListPath") != m.end() && !m["ChangeListPath"].empty()) {
      changeListPath = make_shared<string>(boost::any_cast<string>(m["ChangeListPath"]));
    }
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Detail"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      detail = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Exclude") != m.end() && !m["Exclude"].empty()) {
      exclude = make_shared<string>(boost::any_cast<string>(m["Exclude"]));
    }
    if (m.find("Include") != m.end() && !m["Include"].empty()) {
      include = make_shared<string>(boost::any_cast<string>(m["Include"]));
    }
    if (m.find("KeepLatestSnapshots") != m.end() && !m["KeepLatestSnapshots"].empty()) {
      keepLatestSnapshots = make_shared<long>(boost::any_cast<long>(m["KeepLatestSnapshots"]));
    }
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      options = make_shared<string>(boost::any_cast<string>(m["Options"]));
    }
    if (m.find("OtsDetail") != m.end() && !m["OtsDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["OtsDetail"].type()) {
        OtsDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OtsDetail"]));
        otsDetail = make_shared<OtsDetail>(model1);
      }
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Path"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Path"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      path = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PlanId") != m.end() && !m["PlanId"].empty()) {
      planId = make_shared<string>(boost::any_cast<string>(m["PlanId"]));
    }
    if (m.find("PlanName") != m.end() && !m["PlanName"].empty()) {
      planName = make_shared<string>(boost::any_cast<string>(m["PlanName"]));
    }
    if (m.find("Prefix") != m.end() && !m["Prefix"].empty()) {
      prefix = make_shared<string>(boost::any_cast<string>(m["Prefix"]));
    }
    if (m.find("Retention") != m.end() && !m["Retention"].empty()) {
      retention = make_shared<long>(boost::any_cast<long>(m["Retention"]));
    }
    if (m.find("Rule") != m.end() && !m["Rule"].empty()) {
      if (typeid(vector<boost::any>) == m["Rule"].type()) {
        vector<UpdateBackupPlanRequestRule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Rule"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateBackupPlanRequestRule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rule = make_shared<vector<UpdateBackupPlanRequestRule>>(expect1);
      }
    }
    if (m.find("Schedule") != m.end() && !m["Schedule"].empty()) {
      schedule = make_shared<string>(boost::any_cast<string>(m["Schedule"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("SpeedLimit") != m.end() && !m["SpeedLimit"].empty()) {
      speedLimit = make_shared<string>(boost::any_cast<string>(m["SpeedLimit"]));
    }
    if (m.find("UpdatePaths") != m.end() && !m["UpdatePaths"].empty()) {
      updatePaths = make_shared<bool>(boost::any_cast<bool>(m["UpdatePaths"]));
    }
    if (m.find("VaultId") != m.end() && !m["VaultId"].empty()) {
      vaultId = make_shared<string>(boost::any_cast<string>(m["VaultId"]));
    }
  }


  virtual ~UpdateBackupPlanRequest() = default;
};
class UpdateBackupPlanShrinkRequestRule : public Darabonba::Model {
public:
  shared_ptr<string> backupType{};
  shared_ptr<string> destinationRegionId{};
  shared_ptr<long> destinationRetention{};
  shared_ptr<bool> disabled{};
  shared_ptr<bool> doCopy{};
  shared_ptr<long> retention{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> schedule{};

  UpdateBackupPlanShrinkRequestRule() {}

  explicit UpdateBackupPlanShrinkRequestRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupType) {
      res["BackupType"] = boost::any(*backupType);
    }
    if (destinationRegionId) {
      res["DestinationRegionId"] = boost::any(*destinationRegionId);
    }
    if (destinationRetention) {
      res["DestinationRetention"] = boost::any(*destinationRetention);
    }
    if (disabled) {
      res["Disabled"] = boost::any(*disabled);
    }
    if (doCopy) {
      res["DoCopy"] = boost::any(*doCopy);
    }
    if (retention) {
      res["Retention"] = boost::any(*retention);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (schedule) {
      res["Schedule"] = boost::any(*schedule);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupType") != m.end() && !m["BackupType"].empty()) {
      backupType = make_shared<string>(boost::any_cast<string>(m["BackupType"]));
    }
    if (m.find("DestinationRegionId") != m.end() && !m["DestinationRegionId"].empty()) {
      destinationRegionId = make_shared<string>(boost::any_cast<string>(m["DestinationRegionId"]));
    }
    if (m.find("DestinationRetention") != m.end() && !m["DestinationRetention"].empty()) {
      destinationRetention = make_shared<long>(boost::any_cast<long>(m["DestinationRetention"]));
    }
    if (m.find("Disabled") != m.end() && !m["Disabled"].empty()) {
      disabled = make_shared<bool>(boost::any_cast<bool>(m["Disabled"]));
    }
    if (m.find("DoCopy") != m.end() && !m["DoCopy"].empty()) {
      doCopy = make_shared<bool>(boost::any_cast<bool>(m["DoCopy"]));
    }
    if (m.find("Retention") != m.end() && !m["Retention"].empty()) {
      retention = make_shared<long>(boost::any_cast<long>(m["Retention"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("Schedule") != m.end() && !m["Schedule"].empty()) {
      schedule = make_shared<string>(boost::any_cast<string>(m["Schedule"]));
    }
  }


  virtual ~UpdateBackupPlanShrinkRequestRule() = default;
};
class UpdateBackupPlanShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> changeListPath{};
  shared_ptr<string> detailShrink{};
  shared_ptr<string> exclude{};
  shared_ptr<string> include{};
  shared_ptr<long> keepLatestSnapshots{};
  shared_ptr<string> options{};
  shared_ptr<string> otsDetailShrink{};
  shared_ptr<vector<string>> path{};
  shared_ptr<string> planId{};
  shared_ptr<string> planName{};
  shared_ptr<string> prefix{};
  shared_ptr<long> retention{};
  shared_ptr<vector<UpdateBackupPlanShrinkRequestRule>> rule{};
  shared_ptr<string> schedule{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> speedLimit{};
  shared_ptr<bool> updatePaths{};
  shared_ptr<string> vaultId{};

  UpdateBackupPlanShrinkRequest() {}

  explicit UpdateBackupPlanShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changeListPath) {
      res["ChangeListPath"] = boost::any(*changeListPath);
    }
    if (detailShrink) {
      res["Detail"] = boost::any(*detailShrink);
    }
    if (exclude) {
      res["Exclude"] = boost::any(*exclude);
    }
    if (include) {
      res["Include"] = boost::any(*include);
    }
    if (keepLatestSnapshots) {
      res["KeepLatestSnapshots"] = boost::any(*keepLatestSnapshots);
    }
    if (options) {
      res["Options"] = boost::any(*options);
    }
    if (otsDetailShrink) {
      res["OtsDetail"] = boost::any(*otsDetailShrink);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (planId) {
      res["PlanId"] = boost::any(*planId);
    }
    if (planName) {
      res["PlanName"] = boost::any(*planName);
    }
    if (prefix) {
      res["Prefix"] = boost::any(*prefix);
    }
    if (retention) {
      res["Retention"] = boost::any(*retention);
    }
    if (rule) {
      vector<boost::any> temp1;
      for(auto item1:*rule){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Rule"] = boost::any(temp1);
    }
    if (schedule) {
      res["Schedule"] = boost::any(*schedule);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (speedLimit) {
      res["SpeedLimit"] = boost::any(*speedLimit);
    }
    if (updatePaths) {
      res["UpdatePaths"] = boost::any(*updatePaths);
    }
    if (vaultId) {
      res["VaultId"] = boost::any(*vaultId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChangeListPath") != m.end() && !m["ChangeListPath"].empty()) {
      changeListPath = make_shared<string>(boost::any_cast<string>(m["ChangeListPath"]));
    }
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      detailShrink = make_shared<string>(boost::any_cast<string>(m["Detail"]));
    }
    if (m.find("Exclude") != m.end() && !m["Exclude"].empty()) {
      exclude = make_shared<string>(boost::any_cast<string>(m["Exclude"]));
    }
    if (m.find("Include") != m.end() && !m["Include"].empty()) {
      include = make_shared<string>(boost::any_cast<string>(m["Include"]));
    }
    if (m.find("KeepLatestSnapshots") != m.end() && !m["KeepLatestSnapshots"].empty()) {
      keepLatestSnapshots = make_shared<long>(boost::any_cast<long>(m["KeepLatestSnapshots"]));
    }
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      options = make_shared<string>(boost::any_cast<string>(m["Options"]));
    }
    if (m.find("OtsDetail") != m.end() && !m["OtsDetail"].empty()) {
      otsDetailShrink = make_shared<string>(boost::any_cast<string>(m["OtsDetail"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Path"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Path"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      path = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PlanId") != m.end() && !m["PlanId"].empty()) {
      planId = make_shared<string>(boost::any_cast<string>(m["PlanId"]));
    }
    if (m.find("PlanName") != m.end() && !m["PlanName"].empty()) {
      planName = make_shared<string>(boost::any_cast<string>(m["PlanName"]));
    }
    if (m.find("Prefix") != m.end() && !m["Prefix"].empty()) {
      prefix = make_shared<string>(boost::any_cast<string>(m["Prefix"]));
    }
    if (m.find("Retention") != m.end() && !m["Retention"].empty()) {
      retention = make_shared<long>(boost::any_cast<long>(m["Retention"]));
    }
    if (m.find("Rule") != m.end() && !m["Rule"].empty()) {
      if (typeid(vector<boost::any>) == m["Rule"].type()) {
        vector<UpdateBackupPlanShrinkRequestRule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Rule"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateBackupPlanShrinkRequestRule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rule = make_shared<vector<UpdateBackupPlanShrinkRequestRule>>(expect1);
      }
    }
    if (m.find("Schedule") != m.end() && !m["Schedule"].empty()) {
      schedule = make_shared<string>(boost::any_cast<string>(m["Schedule"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("SpeedLimit") != m.end() && !m["SpeedLimit"].empty()) {
      speedLimit = make_shared<string>(boost::any_cast<string>(m["SpeedLimit"]));
    }
    if (m.find("UpdatePaths") != m.end() && !m["UpdatePaths"].empty()) {
      updatePaths = make_shared<bool>(boost::any_cast<bool>(m["UpdatePaths"]));
    }
    if (m.find("VaultId") != m.end() && !m["VaultId"].empty()) {
      vaultId = make_shared<string>(boost::any_cast<string>(m["VaultId"]));
    }
  }


  virtual ~UpdateBackupPlanShrinkRequest() = default;
};
class UpdateBackupPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateBackupPlanResponseBody() {}

  explicit UpdateBackupPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateBackupPlanResponseBody() = default;
};
class UpdateBackupPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateBackupPlanResponseBody> body{};

  UpdateBackupPlanResponse() {}

  explicit UpdateBackupPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateBackupPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateBackupPlanResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateBackupPlanResponse() = default;
};
class UpdateClientSettingsRequest : public Darabonba::Model {
public:
  shared_ptr<bool> alertOnPartialComplete{};
  shared_ptr<string> clientId{};
  shared_ptr<string> dataNetworkType{};
  shared_ptr<string> dataProxySetting{};
  shared_ptr<long> maxCpuCore{};
  shared_ptr<long> maxMemory{};
  shared_ptr<long> maxWorker{};
  shared_ptr<string> proxyHost{};
  shared_ptr<string> proxyPassword{};
  shared_ptr<long> proxyPort{};
  shared_ptr<string> proxyUser{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<bool> useHttps{};
  shared_ptr<string> vaultId{};

  UpdateClientSettingsRequest() {}

  explicit UpdateClientSettingsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertOnPartialComplete) {
      res["AlertOnPartialComplete"] = boost::any(*alertOnPartialComplete);
    }
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (dataNetworkType) {
      res["DataNetworkType"] = boost::any(*dataNetworkType);
    }
    if (dataProxySetting) {
      res["DataProxySetting"] = boost::any(*dataProxySetting);
    }
    if (maxCpuCore) {
      res["MaxCpuCore"] = boost::any(*maxCpuCore);
    }
    if (maxMemory) {
      res["MaxMemory"] = boost::any(*maxMemory);
    }
    if (maxWorker) {
      res["MaxWorker"] = boost::any(*maxWorker);
    }
    if (proxyHost) {
      res["ProxyHost"] = boost::any(*proxyHost);
    }
    if (proxyPassword) {
      res["ProxyPassword"] = boost::any(*proxyPassword);
    }
    if (proxyPort) {
      res["ProxyPort"] = boost::any(*proxyPort);
    }
    if (proxyUser) {
      res["ProxyUser"] = boost::any(*proxyUser);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (useHttps) {
      res["UseHttps"] = boost::any(*useHttps);
    }
    if (vaultId) {
      res["VaultId"] = boost::any(*vaultId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlertOnPartialComplete") != m.end() && !m["AlertOnPartialComplete"].empty()) {
      alertOnPartialComplete = make_shared<bool>(boost::any_cast<bool>(m["AlertOnPartialComplete"]));
    }
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("DataNetworkType") != m.end() && !m["DataNetworkType"].empty()) {
      dataNetworkType = make_shared<string>(boost::any_cast<string>(m["DataNetworkType"]));
    }
    if (m.find("DataProxySetting") != m.end() && !m["DataProxySetting"].empty()) {
      dataProxySetting = make_shared<string>(boost::any_cast<string>(m["DataProxySetting"]));
    }
    if (m.find("MaxCpuCore") != m.end() && !m["MaxCpuCore"].empty()) {
      maxCpuCore = make_shared<long>(boost::any_cast<long>(m["MaxCpuCore"]));
    }
    if (m.find("MaxMemory") != m.end() && !m["MaxMemory"].empty()) {
      maxMemory = make_shared<long>(boost::any_cast<long>(m["MaxMemory"]));
    }
    if (m.find("MaxWorker") != m.end() && !m["MaxWorker"].empty()) {
      maxWorker = make_shared<long>(boost::any_cast<long>(m["MaxWorker"]));
    }
    if (m.find("ProxyHost") != m.end() && !m["ProxyHost"].empty()) {
      proxyHost = make_shared<string>(boost::any_cast<string>(m["ProxyHost"]));
    }
    if (m.find("ProxyPassword") != m.end() && !m["ProxyPassword"].empty()) {
      proxyPassword = make_shared<string>(boost::any_cast<string>(m["ProxyPassword"]));
    }
    if (m.find("ProxyPort") != m.end() && !m["ProxyPort"].empty()) {
      proxyPort = make_shared<long>(boost::any_cast<long>(m["ProxyPort"]));
    }
    if (m.find("ProxyUser") != m.end() && !m["ProxyUser"].empty()) {
      proxyUser = make_shared<string>(boost::any_cast<string>(m["ProxyUser"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("UseHttps") != m.end() && !m["UseHttps"].empty()) {
      useHttps = make_shared<bool>(boost::any_cast<bool>(m["UseHttps"]));
    }
    if (m.find("VaultId") != m.end() && !m["VaultId"].empty()) {
      vaultId = make_shared<string>(boost::any_cast<string>(m["VaultId"]));
    }
  }


  virtual ~UpdateClientSettingsRequest() = default;
};
class UpdateClientSettingsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateClientSettingsResponseBody() {}

  explicit UpdateClientSettingsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateClientSettingsResponseBody() = default;
};
class UpdateClientSettingsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateClientSettingsResponseBody> body{};

  UpdateClientSettingsResponse() {}

  explicit UpdateClientSettingsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateClientSettingsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateClientSettingsResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateClientSettingsResponse() = default;
};
class UpdateContainerClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> networkType{};
  shared_ptr<bool> renewToken{};

  UpdateContainerClusterRequest() {}

  explicit UpdateContainerClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (renewToken) {
      res["RenewToken"] = boost::any(*renewToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("RenewToken") != m.end() && !m["RenewToken"].empty()) {
      renewToken = make_shared<bool>(boost::any_cast<bool>(m["RenewToken"]));
    }
  }


  virtual ~UpdateContainerClusterRequest() = default;
};
class UpdateContainerClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> token{};
  shared_ptr<bool> tokenUpdated{};

  UpdateContainerClusterResponseBody() {}

  explicit UpdateContainerClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    if (tokenUpdated) {
      res["TokenUpdated"] = boost::any(*tokenUpdated);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
    if (m.find("TokenUpdated") != m.end() && !m["TokenUpdated"].empty()) {
      tokenUpdated = make_shared<bool>(boost::any_cast<bool>(m["TokenUpdated"]));
    }
  }


  virtual ~UpdateContainerClusterResponseBody() = default;
};
class UpdateContainerClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateContainerClusterResponseBody> body{};

  UpdateContainerClusterResponse() {}

  explicit UpdateContainerClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateContainerClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateContainerClusterResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateContainerClusterResponse() = default;
};
class UpdateHanaBackupPlanRequest : public Darabonba::Model {
public:
  shared_ptr<string> backupPrefix{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> planId{};
  shared_ptr<string> planName{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> schedule{};
  shared_ptr<string> vaultId{};

  UpdateHanaBackupPlanRequest() {}

  explicit UpdateHanaBackupPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupPrefix) {
      res["BackupPrefix"] = boost::any(*backupPrefix);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (planId) {
      res["PlanId"] = boost::any(*planId);
    }
    if (planName) {
      res["PlanName"] = boost::any(*planName);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (schedule) {
      res["Schedule"] = boost::any(*schedule);
    }
    if (vaultId) {
      res["VaultId"] = boost::any(*vaultId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupPrefix") != m.end() && !m["BackupPrefix"].empty()) {
      backupPrefix = make_shared<string>(boost::any_cast<string>(m["BackupPrefix"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("PlanId") != m.end() && !m["PlanId"].empty()) {
      planId = make_shared<string>(boost::any_cast<string>(m["PlanId"]));
    }
    if (m.find("PlanName") != m.end() && !m["PlanName"].empty()) {
      planName = make_shared<string>(boost::any_cast<string>(m["PlanName"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Schedule") != m.end() && !m["Schedule"].empty()) {
      schedule = make_shared<string>(boost::any_cast<string>(m["Schedule"]));
    }
    if (m.find("VaultId") != m.end() && !m["VaultId"].empty()) {
      vaultId = make_shared<string>(boost::any_cast<string>(m["VaultId"]));
    }
  }


  virtual ~UpdateHanaBackupPlanRequest() = default;
};
class UpdateHanaBackupPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateHanaBackupPlanResponseBody() {}

  explicit UpdateHanaBackupPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateHanaBackupPlanResponseBody() = default;
};
class UpdateHanaBackupPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateHanaBackupPlanResponseBody> body{};

  UpdateHanaBackupPlanResponse() {}

  explicit UpdateHanaBackupPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateHanaBackupPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateHanaBackupPlanResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateHanaBackupPlanResponse() = default;
};
class UpdateHanaBackupSettingRequest : public Darabonba::Model {
public:
  shared_ptr<string> catalogBackupParameterFile{};
  shared_ptr<bool> catalogBackupUsingBackint{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> dataBackupParameterFile{};
  shared_ptr<string> databaseName{};
  shared_ptr<bool> enableAutoLogBackup{};
  shared_ptr<string> logBackupParameterFile{};
  shared_ptr<long> logBackupTimeout{};
  shared_ptr<bool> logBackupUsingBackint{};
  shared_ptr<string> vaultId{};

  UpdateHanaBackupSettingRequest() {}

  explicit UpdateHanaBackupSettingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (catalogBackupParameterFile) {
      res["CatalogBackupParameterFile"] = boost::any(*catalogBackupParameterFile);
    }
    if (catalogBackupUsingBackint) {
      res["CatalogBackupUsingBackint"] = boost::any(*catalogBackupUsingBackint);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (dataBackupParameterFile) {
      res["DataBackupParameterFile"] = boost::any(*dataBackupParameterFile);
    }
    if (databaseName) {
      res["DatabaseName"] = boost::any(*databaseName);
    }
    if (enableAutoLogBackup) {
      res["EnableAutoLogBackup"] = boost::any(*enableAutoLogBackup);
    }
    if (logBackupParameterFile) {
      res["LogBackupParameterFile"] = boost::any(*logBackupParameterFile);
    }
    if (logBackupTimeout) {
      res["LogBackupTimeout"] = boost::any(*logBackupTimeout);
    }
    if (logBackupUsingBackint) {
      res["LogBackupUsingBackint"] = boost::any(*logBackupUsingBackint);
    }
    if (vaultId) {
      res["VaultId"] = boost::any(*vaultId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CatalogBackupParameterFile") != m.end() && !m["CatalogBackupParameterFile"].empty()) {
      catalogBackupParameterFile = make_shared<string>(boost::any_cast<string>(m["CatalogBackupParameterFile"]));
    }
    if (m.find("CatalogBackupUsingBackint") != m.end() && !m["CatalogBackupUsingBackint"].empty()) {
      catalogBackupUsingBackint = make_shared<bool>(boost::any_cast<bool>(m["CatalogBackupUsingBackint"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("DataBackupParameterFile") != m.end() && !m["DataBackupParameterFile"].empty()) {
      dataBackupParameterFile = make_shared<string>(boost::any_cast<string>(m["DataBackupParameterFile"]));
    }
    if (m.find("DatabaseName") != m.end() && !m["DatabaseName"].empty()) {
      databaseName = make_shared<string>(boost::any_cast<string>(m["DatabaseName"]));
    }
    if (m.find("EnableAutoLogBackup") != m.end() && !m["EnableAutoLogBackup"].empty()) {
      enableAutoLogBackup = make_shared<bool>(boost::any_cast<bool>(m["EnableAutoLogBackup"]));
    }
    if (m.find("LogBackupParameterFile") != m.end() && !m["LogBackupParameterFile"].empty()) {
      logBackupParameterFile = make_shared<string>(boost::any_cast<string>(m["LogBackupParameterFile"]));
    }
    if (m.find("LogBackupTimeout") != m.end() && !m["LogBackupTimeout"].empty()) {
      logBackupTimeout = make_shared<long>(boost::any_cast<long>(m["LogBackupTimeout"]));
    }
    if (m.find("LogBackupUsingBackint") != m.end() && !m["LogBackupUsingBackint"].empty()) {
      logBackupUsingBackint = make_shared<bool>(boost::any_cast<bool>(m["LogBackupUsingBackint"]));
    }
    if (m.find("VaultId") != m.end() && !m["VaultId"].empty()) {
      vaultId = make_shared<string>(boost::any_cast<string>(m["VaultId"]));
    }
  }


  virtual ~UpdateHanaBackupSettingRequest() = default;
};
class UpdateHanaBackupSettingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateHanaBackupSettingResponseBody() {}

  explicit UpdateHanaBackupSettingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateHanaBackupSettingResponseBody() = default;
};
class UpdateHanaBackupSettingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateHanaBackupSettingResponseBody> body{};

  UpdateHanaBackupSettingResponse() {}

  explicit UpdateHanaBackupSettingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateHanaBackupSettingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateHanaBackupSettingResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateHanaBackupSettingResponse() = default;
};
class UpdateHanaInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> alertSetting{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> hanaName{};
  shared_ptr<string> host{};
  shared_ptr<long> instanceNumber{};
  shared_ptr<string> password{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<bool> useSsl{};
  shared_ptr<string> userName{};
  shared_ptr<bool> validateCertificate{};
  shared_ptr<string> vaultId{};

  UpdateHanaInstanceRequest() {}

  explicit UpdateHanaInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertSetting) {
      res["AlertSetting"] = boost::any(*alertSetting);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (hanaName) {
      res["HanaName"] = boost::any(*hanaName);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (instanceNumber) {
      res["InstanceNumber"] = boost::any(*instanceNumber);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (useSsl) {
      res["UseSsl"] = boost::any(*useSsl);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    if (validateCertificate) {
      res["ValidateCertificate"] = boost::any(*validateCertificate);
    }
    if (vaultId) {
      res["VaultId"] = boost::any(*vaultId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlertSetting") != m.end() && !m["AlertSetting"].empty()) {
      alertSetting = make_shared<string>(boost::any_cast<string>(m["AlertSetting"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("HanaName") != m.end() && !m["HanaName"].empty()) {
      hanaName = make_shared<string>(boost::any_cast<string>(m["HanaName"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("InstanceNumber") != m.end() && !m["InstanceNumber"].empty()) {
      instanceNumber = make_shared<long>(boost::any_cast<long>(m["InstanceNumber"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("UseSsl") != m.end() && !m["UseSsl"].empty()) {
      useSsl = make_shared<bool>(boost::any_cast<bool>(m["UseSsl"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
    if (m.find("ValidateCertificate") != m.end() && !m["ValidateCertificate"].empty()) {
      validateCertificate = make_shared<bool>(boost::any_cast<bool>(m["ValidateCertificate"]));
    }
    if (m.find("VaultId") != m.end() && !m["VaultId"].empty()) {
      vaultId = make_shared<string>(boost::any_cast<string>(m["VaultId"]));
    }
  }


  virtual ~UpdateHanaInstanceRequest() = default;
};
class UpdateHanaInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateHanaInstanceResponseBody() {}

  explicit UpdateHanaInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateHanaInstanceResponseBody() = default;
};
class UpdateHanaInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateHanaInstanceResponseBody> body{};

  UpdateHanaInstanceResponse() {}

  explicit UpdateHanaInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateHanaInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateHanaInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateHanaInstanceResponse() = default;
};
class UpdateHanaRetentionSettingRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> databaseName{};
  shared_ptr<bool> disabled{};
  shared_ptr<long> retentionDays{};
  shared_ptr<string> schedule{};
  shared_ptr<string> vaultId{};

  UpdateHanaRetentionSettingRequest() {}

  explicit UpdateHanaRetentionSettingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (databaseName) {
      res["DatabaseName"] = boost::any(*databaseName);
    }
    if (disabled) {
      res["Disabled"] = boost::any(*disabled);
    }
    if (retentionDays) {
      res["RetentionDays"] = boost::any(*retentionDays);
    }
    if (schedule) {
      res["Schedule"] = boost::any(*schedule);
    }
    if (vaultId) {
      res["VaultId"] = boost::any(*vaultId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("DatabaseName") != m.end() && !m["DatabaseName"].empty()) {
      databaseName = make_shared<string>(boost::any_cast<string>(m["DatabaseName"]));
    }
    if (m.find("Disabled") != m.end() && !m["Disabled"].empty()) {
      disabled = make_shared<bool>(boost::any_cast<bool>(m["Disabled"]));
    }
    if (m.find("RetentionDays") != m.end() && !m["RetentionDays"].empty()) {
      retentionDays = make_shared<long>(boost::any_cast<long>(m["RetentionDays"]));
    }
    if (m.find("Schedule") != m.end() && !m["Schedule"].empty()) {
      schedule = make_shared<string>(boost::any_cast<string>(m["Schedule"]));
    }
    if (m.find("VaultId") != m.end() && !m["VaultId"].empty()) {
      vaultId = make_shared<string>(boost::any_cast<string>(m["VaultId"]));
    }
  }


  virtual ~UpdateHanaRetentionSettingRequest() = default;
};
class UpdateHanaRetentionSettingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateHanaRetentionSettingResponseBody() {}

  explicit UpdateHanaRetentionSettingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateHanaRetentionSettingResponseBody() = default;
};
class UpdateHanaRetentionSettingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateHanaRetentionSettingResponseBody> body{};

  UpdateHanaRetentionSettingResponse() {}

  explicit UpdateHanaRetentionSettingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateHanaRetentionSettingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateHanaRetentionSettingResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateHanaRetentionSettingResponse() = default;
};
class UpdatePolicyBindingRequestAdvancedOptionsCommonFileSystemDetail : public Darabonba::Model {
public:
  shared_ptr<long> fetchSliceSize{};
  shared_ptr<bool> fullOnIncrementFail{};

  UpdatePolicyBindingRequestAdvancedOptionsCommonFileSystemDetail() {}

  explicit UpdatePolicyBindingRequestAdvancedOptionsCommonFileSystemDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fetchSliceSize) {
      res["FetchSliceSize"] = boost::any(*fetchSliceSize);
    }
    if (fullOnIncrementFail) {
      res["FullOnIncrementFail"] = boost::any(*fullOnIncrementFail);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FetchSliceSize") != m.end() && !m["FetchSliceSize"].empty()) {
      fetchSliceSize = make_shared<long>(boost::any_cast<long>(m["FetchSliceSize"]));
    }
    if (m.find("FullOnIncrementFail") != m.end() && !m["FullOnIncrementFail"].empty()) {
      fullOnIncrementFail = make_shared<bool>(boost::any_cast<bool>(m["FullOnIncrementFail"]));
    }
  }


  virtual ~UpdatePolicyBindingRequestAdvancedOptionsCommonFileSystemDetail() = default;
};
class UpdatePolicyBindingRequestAdvancedOptionsOssDetail : public Darabonba::Model {
public:
  shared_ptr<string> inventoryCleanupPolicy{};
  shared_ptr<string> inventoryId{};

  UpdatePolicyBindingRequestAdvancedOptionsOssDetail() {}

  explicit UpdatePolicyBindingRequestAdvancedOptionsOssDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inventoryCleanupPolicy) {
      res["InventoryCleanupPolicy"] = boost::any(*inventoryCleanupPolicy);
    }
    if (inventoryId) {
      res["InventoryId"] = boost::any(*inventoryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InventoryCleanupPolicy") != m.end() && !m["InventoryCleanupPolicy"].empty()) {
      inventoryCleanupPolicy = make_shared<string>(boost::any_cast<string>(m["InventoryCleanupPolicy"]));
    }
    if (m.find("InventoryId") != m.end() && !m["InventoryId"].empty()) {
      inventoryId = make_shared<string>(boost::any_cast<string>(m["InventoryId"]));
    }
  }


  virtual ~UpdatePolicyBindingRequestAdvancedOptionsOssDetail() = default;
};
class UpdatePolicyBindingRequestAdvancedOptionsUdmDetail : public Darabonba::Model {
public:
  shared_ptr<bool> appConsistent{};
  shared_ptr<vector<string>> diskIdList{};
  shared_ptr<bool> enableFsFreeze{};
  shared_ptr<bool> enableWriters{};
  shared_ptr<vector<string>> excludeDiskIdList{};
  shared_ptr<string> postScriptPath{};
  shared_ptr<string> preScriptPath{};
  shared_ptr<string> ramRoleName{};
  shared_ptr<bool> snapshotGroup{};
  shared_ptr<long> timeoutInSeconds{};

  UpdatePolicyBindingRequestAdvancedOptionsUdmDetail() {}

  explicit UpdatePolicyBindingRequestAdvancedOptionsUdmDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appConsistent) {
      res["AppConsistent"] = boost::any(*appConsistent);
    }
    if (diskIdList) {
      res["DiskIdList"] = boost::any(*diskIdList);
    }
    if (enableFsFreeze) {
      res["EnableFsFreeze"] = boost::any(*enableFsFreeze);
    }
    if (enableWriters) {
      res["EnableWriters"] = boost::any(*enableWriters);
    }
    if (excludeDiskIdList) {
      res["ExcludeDiskIdList"] = boost::any(*excludeDiskIdList);
    }
    if (postScriptPath) {
      res["PostScriptPath"] = boost::any(*postScriptPath);
    }
    if (preScriptPath) {
      res["PreScriptPath"] = boost::any(*preScriptPath);
    }
    if (ramRoleName) {
      res["RamRoleName"] = boost::any(*ramRoleName);
    }
    if (snapshotGroup) {
      res["SnapshotGroup"] = boost::any(*snapshotGroup);
    }
    if (timeoutInSeconds) {
      res["TimeoutInSeconds"] = boost::any(*timeoutInSeconds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppConsistent") != m.end() && !m["AppConsistent"].empty()) {
      appConsistent = make_shared<bool>(boost::any_cast<bool>(m["AppConsistent"]));
    }
    if (m.find("DiskIdList") != m.end() && !m["DiskIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DiskIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DiskIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      diskIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("EnableFsFreeze") != m.end() && !m["EnableFsFreeze"].empty()) {
      enableFsFreeze = make_shared<bool>(boost::any_cast<bool>(m["EnableFsFreeze"]));
    }
    if (m.find("EnableWriters") != m.end() && !m["EnableWriters"].empty()) {
      enableWriters = make_shared<bool>(boost::any_cast<bool>(m["EnableWriters"]));
    }
    if (m.find("ExcludeDiskIdList") != m.end() && !m["ExcludeDiskIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ExcludeDiskIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ExcludeDiskIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      excludeDiskIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PostScriptPath") != m.end() && !m["PostScriptPath"].empty()) {
      postScriptPath = make_shared<string>(boost::any_cast<string>(m["PostScriptPath"]));
    }
    if (m.find("PreScriptPath") != m.end() && !m["PreScriptPath"].empty()) {
      preScriptPath = make_shared<string>(boost::any_cast<string>(m["PreScriptPath"]));
    }
    if (m.find("RamRoleName") != m.end() && !m["RamRoleName"].empty()) {
      ramRoleName = make_shared<string>(boost::any_cast<string>(m["RamRoleName"]));
    }
    if (m.find("SnapshotGroup") != m.end() && !m["SnapshotGroup"].empty()) {
      snapshotGroup = make_shared<bool>(boost::any_cast<bool>(m["SnapshotGroup"]));
    }
    if (m.find("TimeoutInSeconds") != m.end() && !m["TimeoutInSeconds"].empty()) {
      timeoutInSeconds = make_shared<long>(boost::any_cast<long>(m["TimeoutInSeconds"]));
    }
  }


  virtual ~UpdatePolicyBindingRequestAdvancedOptionsUdmDetail() = default;
};
class UpdatePolicyBindingRequestAdvancedOptions : public Darabonba::Model {
public:
  shared_ptr<UpdatePolicyBindingRequestAdvancedOptionsCommonFileSystemDetail> commonFileSystemDetail{};
  shared_ptr<UpdatePolicyBindingRequestAdvancedOptionsOssDetail> ossDetail{};
  shared_ptr<UpdatePolicyBindingRequestAdvancedOptionsUdmDetail> udmDetail{};

  UpdatePolicyBindingRequestAdvancedOptions() {}

  explicit UpdatePolicyBindingRequestAdvancedOptions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonFileSystemDetail) {
      res["CommonFileSystemDetail"] = commonFileSystemDetail ? boost::any(commonFileSystemDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ossDetail) {
      res["OssDetail"] = ossDetail ? boost::any(ossDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (udmDetail) {
      res["UdmDetail"] = udmDetail ? boost::any(udmDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CommonFileSystemDetail") != m.end() && !m["CommonFileSystemDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["CommonFileSystemDetail"].type()) {
        UpdatePolicyBindingRequestAdvancedOptionsCommonFileSystemDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CommonFileSystemDetail"]));
        commonFileSystemDetail = make_shared<UpdatePolicyBindingRequestAdvancedOptionsCommonFileSystemDetail>(model1);
      }
    }
    if (m.find("OssDetail") != m.end() && !m["OssDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["OssDetail"].type()) {
        UpdatePolicyBindingRequestAdvancedOptionsOssDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OssDetail"]));
        ossDetail = make_shared<UpdatePolicyBindingRequestAdvancedOptionsOssDetail>(model1);
      }
    }
    if (m.find("UdmDetail") != m.end() && !m["UdmDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["UdmDetail"].type()) {
        UpdatePolicyBindingRequestAdvancedOptionsUdmDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UdmDetail"]));
        udmDetail = make_shared<UpdatePolicyBindingRequestAdvancedOptionsUdmDetail>(model1);
      }
    }
  }


  virtual ~UpdatePolicyBindingRequestAdvancedOptions() = default;
};
class UpdatePolicyBindingRequest : public Darabonba::Model {
public:
  shared_ptr<UpdatePolicyBindingRequestAdvancedOptions> advancedOptions{};
  shared_ptr<string> dataSourceId{};
  shared_ptr<bool> disabled{};
  shared_ptr<string> exclude{};
  shared_ptr<string> include{};
  shared_ptr<string> policyBindingDescription{};
  shared_ptr<string> policyId{};
  shared_ptr<string> source{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> speedLimit{};

  UpdatePolicyBindingRequest() {}

  explicit UpdatePolicyBindingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (advancedOptions) {
      res["AdvancedOptions"] = advancedOptions ? boost::any(advancedOptions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dataSourceId) {
      res["DataSourceId"] = boost::any(*dataSourceId);
    }
    if (disabled) {
      res["Disabled"] = boost::any(*disabled);
    }
    if (exclude) {
      res["Exclude"] = boost::any(*exclude);
    }
    if (include) {
      res["Include"] = boost::any(*include);
    }
    if (policyBindingDescription) {
      res["PolicyBindingDescription"] = boost::any(*policyBindingDescription);
    }
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (speedLimit) {
      res["SpeedLimit"] = boost::any(*speedLimit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdvancedOptions") != m.end() && !m["AdvancedOptions"].empty()) {
      if (typeid(map<string, boost::any>) == m["AdvancedOptions"].type()) {
        UpdatePolicyBindingRequestAdvancedOptions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AdvancedOptions"]));
        advancedOptions = make_shared<UpdatePolicyBindingRequestAdvancedOptions>(model1);
      }
    }
    if (m.find("DataSourceId") != m.end() && !m["DataSourceId"].empty()) {
      dataSourceId = make_shared<string>(boost::any_cast<string>(m["DataSourceId"]));
    }
    if (m.find("Disabled") != m.end() && !m["Disabled"].empty()) {
      disabled = make_shared<bool>(boost::any_cast<bool>(m["Disabled"]));
    }
    if (m.find("Exclude") != m.end() && !m["Exclude"].empty()) {
      exclude = make_shared<string>(boost::any_cast<string>(m["Exclude"]));
    }
    if (m.find("Include") != m.end() && !m["Include"].empty()) {
      include = make_shared<string>(boost::any_cast<string>(m["Include"]));
    }
    if (m.find("PolicyBindingDescription") != m.end() && !m["PolicyBindingDescription"].empty()) {
      policyBindingDescription = make_shared<string>(boost::any_cast<string>(m["PolicyBindingDescription"]));
    }
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("SpeedLimit") != m.end() && !m["SpeedLimit"].empty()) {
      speedLimit = make_shared<string>(boost::any_cast<string>(m["SpeedLimit"]));
    }
  }


  virtual ~UpdatePolicyBindingRequest() = default;
};
class UpdatePolicyBindingShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> advancedOptionsShrink{};
  shared_ptr<string> dataSourceId{};
  shared_ptr<bool> disabled{};
  shared_ptr<string> exclude{};
  shared_ptr<string> include{};
  shared_ptr<string> policyBindingDescription{};
  shared_ptr<string> policyId{};
  shared_ptr<string> source{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> speedLimit{};

  UpdatePolicyBindingShrinkRequest() {}

  explicit UpdatePolicyBindingShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (advancedOptionsShrink) {
      res["AdvancedOptions"] = boost::any(*advancedOptionsShrink);
    }
    if (dataSourceId) {
      res["DataSourceId"] = boost::any(*dataSourceId);
    }
    if (disabled) {
      res["Disabled"] = boost::any(*disabled);
    }
    if (exclude) {
      res["Exclude"] = boost::any(*exclude);
    }
    if (include) {
      res["Include"] = boost::any(*include);
    }
    if (policyBindingDescription) {
      res["PolicyBindingDescription"] = boost::any(*policyBindingDescription);
    }
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (speedLimit) {
      res["SpeedLimit"] = boost::any(*speedLimit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdvancedOptions") != m.end() && !m["AdvancedOptions"].empty()) {
      advancedOptionsShrink = make_shared<string>(boost::any_cast<string>(m["AdvancedOptions"]));
    }
    if (m.find("DataSourceId") != m.end() && !m["DataSourceId"].empty()) {
      dataSourceId = make_shared<string>(boost::any_cast<string>(m["DataSourceId"]));
    }
    if (m.find("Disabled") != m.end() && !m["Disabled"].empty()) {
      disabled = make_shared<bool>(boost::any_cast<bool>(m["Disabled"]));
    }
    if (m.find("Exclude") != m.end() && !m["Exclude"].empty()) {
      exclude = make_shared<string>(boost::any_cast<string>(m["Exclude"]));
    }
    if (m.find("Include") != m.end() && !m["Include"].empty()) {
      include = make_shared<string>(boost::any_cast<string>(m["Include"]));
    }
    if (m.find("PolicyBindingDescription") != m.end() && !m["PolicyBindingDescription"].empty()) {
      policyBindingDescription = make_shared<string>(boost::any_cast<string>(m["PolicyBindingDescription"]));
    }
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("SpeedLimit") != m.end() && !m["SpeedLimit"].empty()) {
      speedLimit = make_shared<string>(boost::any_cast<string>(m["SpeedLimit"]));
    }
  }


  virtual ~UpdatePolicyBindingShrinkRequest() = default;
};
class UpdatePolicyBindingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdatePolicyBindingResponseBody() {}

  explicit UpdatePolicyBindingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdatePolicyBindingResponseBody() = default;
};
class UpdatePolicyBindingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdatePolicyBindingResponseBody> body{};

  UpdatePolicyBindingResponse() {}

  explicit UpdatePolicyBindingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdatePolicyBindingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdatePolicyBindingResponseBody>(model1);
      }
    }
  }


  virtual ~UpdatePolicyBindingResponse() = default;
};
class UpdatePolicyV2RequestRulesDataSourceFilters : public Darabonba::Model {
public:
  shared_ptr<vector<string>> dataSourceIds{};
  shared_ptr<string> sourceType{};

  UpdatePolicyV2RequestRulesDataSourceFilters() {}

  explicit UpdatePolicyV2RequestRulesDataSourceFilters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSourceIds) {
      res["DataSourceIds"] = boost::any(*dataSourceIds);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataSourceIds") != m.end() && !m["DataSourceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DataSourceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DataSourceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dataSourceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
  }


  virtual ~UpdatePolicyV2RequestRulesDataSourceFilters() = default;
};
class UpdatePolicyV2RequestRulesRetentionRules : public Darabonba::Model {
public:
  shared_ptr<string> advancedRetentionType{};
  shared_ptr<long> retention{};
  shared_ptr<long> whichSnapshot{};

  UpdatePolicyV2RequestRulesRetentionRules() {}

  explicit UpdatePolicyV2RequestRulesRetentionRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (advancedRetentionType) {
      res["AdvancedRetentionType"] = boost::any(*advancedRetentionType);
    }
    if (retention) {
      res["Retention"] = boost::any(*retention);
    }
    if (whichSnapshot) {
      res["WhichSnapshot"] = boost::any(*whichSnapshot);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdvancedRetentionType") != m.end() && !m["AdvancedRetentionType"].empty()) {
      advancedRetentionType = make_shared<string>(boost::any_cast<string>(m["AdvancedRetentionType"]));
    }
    if (m.find("Retention") != m.end() && !m["Retention"].empty()) {
      retention = make_shared<long>(boost::any_cast<long>(m["Retention"]));
    }
    if (m.find("WhichSnapshot") != m.end() && !m["WhichSnapshot"].empty()) {
      whichSnapshot = make_shared<long>(boost::any_cast<long>(m["WhichSnapshot"]));
    }
  }


  virtual ~UpdatePolicyV2RequestRulesRetentionRules() = default;
};
class UpdatePolicyV2RequestRulesTagFilters : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> operator_{};
  shared_ptr<string> value{};

  UpdatePolicyV2RequestRulesTagFilters() {}

  explicit UpdatePolicyV2RequestRulesTagFilters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (operator_) {
      res["Operator"] = boost::any(*operator_);
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
    if (m.find("Operator") != m.end() && !m["Operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["Operator"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~UpdatePolicyV2RequestRulesTagFilters() = default;
};
class UpdatePolicyV2RequestRules : public Darabonba::Model {
public:
  shared_ptr<long> archiveDays{};
  shared_ptr<string> backupType{};
  shared_ptr<long> coldArchiveDays{};
  shared_ptr<vector<UpdatePolicyV2RequestRulesDataSourceFilters>> dataSourceFilters{};
  shared_ptr<long> keepLatestSnapshots{};
  shared_ptr<string> replicationRegionId{};
  shared_ptr<long> retention{};
  shared_ptr<vector<UpdatePolicyV2RequestRulesRetentionRules>> retentionRules{};
  shared_ptr<string> ruleId{};
  shared_ptr<string> ruleType{};
  shared_ptr<string> schedule{};
  shared_ptr<vector<UpdatePolicyV2RequestRulesTagFilters>> tagFilters{};

  UpdatePolicyV2RequestRules() {}

  explicit UpdatePolicyV2RequestRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (archiveDays) {
      res["ArchiveDays"] = boost::any(*archiveDays);
    }
    if (backupType) {
      res["BackupType"] = boost::any(*backupType);
    }
    if (coldArchiveDays) {
      res["ColdArchiveDays"] = boost::any(*coldArchiveDays);
    }
    if (dataSourceFilters) {
      vector<boost::any> temp1;
      for(auto item1:*dataSourceFilters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataSourceFilters"] = boost::any(temp1);
    }
    if (keepLatestSnapshots) {
      res["KeepLatestSnapshots"] = boost::any(*keepLatestSnapshots);
    }
    if (replicationRegionId) {
      res["ReplicationRegionId"] = boost::any(*replicationRegionId);
    }
    if (retention) {
      res["Retention"] = boost::any(*retention);
    }
    if (retentionRules) {
      vector<boost::any> temp1;
      for(auto item1:*retentionRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RetentionRules"] = boost::any(temp1);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (ruleType) {
      res["RuleType"] = boost::any(*ruleType);
    }
    if (schedule) {
      res["Schedule"] = boost::any(*schedule);
    }
    if (tagFilters) {
      vector<boost::any> temp1;
      for(auto item1:*tagFilters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagFilters"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArchiveDays") != m.end() && !m["ArchiveDays"].empty()) {
      archiveDays = make_shared<long>(boost::any_cast<long>(m["ArchiveDays"]));
    }
    if (m.find("BackupType") != m.end() && !m["BackupType"].empty()) {
      backupType = make_shared<string>(boost::any_cast<string>(m["BackupType"]));
    }
    if (m.find("ColdArchiveDays") != m.end() && !m["ColdArchiveDays"].empty()) {
      coldArchiveDays = make_shared<long>(boost::any_cast<long>(m["ColdArchiveDays"]));
    }
    if (m.find("DataSourceFilters") != m.end() && !m["DataSourceFilters"].empty()) {
      if (typeid(vector<boost::any>) == m["DataSourceFilters"].type()) {
        vector<UpdatePolicyV2RequestRulesDataSourceFilters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataSourceFilters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdatePolicyV2RequestRulesDataSourceFilters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataSourceFilters = make_shared<vector<UpdatePolicyV2RequestRulesDataSourceFilters>>(expect1);
      }
    }
    if (m.find("KeepLatestSnapshots") != m.end() && !m["KeepLatestSnapshots"].empty()) {
      keepLatestSnapshots = make_shared<long>(boost::any_cast<long>(m["KeepLatestSnapshots"]));
    }
    if (m.find("ReplicationRegionId") != m.end() && !m["ReplicationRegionId"].empty()) {
      replicationRegionId = make_shared<string>(boost::any_cast<string>(m["ReplicationRegionId"]));
    }
    if (m.find("Retention") != m.end() && !m["Retention"].empty()) {
      retention = make_shared<long>(boost::any_cast<long>(m["Retention"]));
    }
    if (m.find("RetentionRules") != m.end() && !m["RetentionRules"].empty()) {
      if (typeid(vector<boost::any>) == m["RetentionRules"].type()) {
        vector<UpdatePolicyV2RequestRulesRetentionRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RetentionRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdatePolicyV2RequestRulesRetentionRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        retentionRules = make_shared<vector<UpdatePolicyV2RequestRulesRetentionRules>>(expect1);
      }
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
    if (m.find("RuleType") != m.end() && !m["RuleType"].empty()) {
      ruleType = make_shared<string>(boost::any_cast<string>(m["RuleType"]));
    }
    if (m.find("Schedule") != m.end() && !m["Schedule"].empty()) {
      schedule = make_shared<string>(boost::any_cast<string>(m["Schedule"]));
    }
    if (m.find("TagFilters") != m.end() && !m["TagFilters"].empty()) {
      if (typeid(vector<boost::any>) == m["TagFilters"].type()) {
        vector<UpdatePolicyV2RequestRulesTagFilters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagFilters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdatePolicyV2RequestRulesTagFilters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagFilters = make_shared<vector<UpdatePolicyV2RequestRulesTagFilters>>(expect1);
      }
    }
  }


  virtual ~UpdatePolicyV2RequestRules() = default;
};
class UpdatePolicyV2Request : public Darabonba::Model {
public:
  shared_ptr<string> policyDescription{};
  shared_ptr<string> policyId{};
  shared_ptr<string> policyName{};
  shared_ptr<vector<UpdatePolicyV2RequestRules>> rules{};

  UpdatePolicyV2Request() {}

  explicit UpdatePolicyV2Request(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyDescription) {
      res["PolicyDescription"] = boost::any(*policyDescription);
    }
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
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
    if (m.find("PolicyDescription") != m.end() && !m["PolicyDescription"].empty()) {
      policyDescription = make_shared<string>(boost::any_cast<string>(m["PolicyDescription"]));
    }
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      if (typeid(vector<boost::any>) == m["Rules"].type()) {
        vector<UpdatePolicyV2RequestRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Rules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdatePolicyV2RequestRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rules = make_shared<vector<UpdatePolicyV2RequestRules>>(expect1);
      }
    }
  }


  virtual ~UpdatePolicyV2Request() = default;
};
class UpdatePolicyV2ShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> policyDescription{};
  shared_ptr<string> policyId{};
  shared_ptr<string> policyName{};
  shared_ptr<string> rulesShrink{};

  UpdatePolicyV2ShrinkRequest() {}

  explicit UpdatePolicyV2ShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyDescription) {
      res["PolicyDescription"] = boost::any(*policyDescription);
    }
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (rulesShrink) {
      res["Rules"] = boost::any(*rulesShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyDescription") != m.end() && !m["PolicyDescription"].empty()) {
      policyDescription = make_shared<string>(boost::any_cast<string>(m["PolicyDescription"]));
    }
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      rulesShrink = make_shared<string>(boost::any_cast<string>(m["Rules"]));
    }
  }


  virtual ~UpdatePolicyV2ShrinkRequest() = default;
};
class UpdatePolicyV2ResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdatePolicyV2ResponseBody() {}

  explicit UpdatePolicyV2ResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdatePolicyV2ResponseBody() = default;
};
class UpdatePolicyV2Response : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdatePolicyV2ResponseBody> body{};

  UpdatePolicyV2Response() {}

  explicit UpdatePolicyV2Response(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdatePolicyV2ResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdatePolicyV2ResponseBody>(model1);
      }
    }
  }


  virtual ~UpdatePolicyV2Response() = default;
};
class UpdateVaultRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> vaultId{};
  shared_ptr<string> vaultName{};

  UpdateVaultRequest() {}

  explicit UpdateVaultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (vaultId) {
      res["VaultId"] = boost::any(*vaultId);
    }
    if (vaultName) {
      res["VaultName"] = boost::any(*vaultName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("VaultId") != m.end() && !m["VaultId"].empty()) {
      vaultId = make_shared<string>(boost::any_cast<string>(m["VaultId"]));
    }
    if (m.find("VaultName") != m.end() && !m["VaultName"].empty()) {
      vaultName = make_shared<string>(boost::any_cast<string>(m["VaultName"]));
    }
  }


  virtual ~UpdateVaultRequest() = default;
};
class UpdateVaultResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateVaultResponseBody() {}

  explicit UpdateVaultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateVaultResponseBody() = default;
};
class UpdateVaultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateVaultResponseBody> body{};

  UpdateVaultResponse() {}

  explicit UpdateVaultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateVaultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateVaultResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateVaultResponse() = default;
};
class UpgradeBackupClientsRequest : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> clientIds{};
  shared_ptr<string> crossAccountRoleName{};
  shared_ptr<string> crossAccountType{};
  shared_ptr<long> crossAccountUserId{};
  shared_ptr<map<string, boost::any>> instanceIds{};

  UpgradeBackupClientsRequest() {}

  explicit UpgradeBackupClientsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientIds) {
      res["ClientIds"] = boost::any(*clientIds);
    }
    if (crossAccountRoleName) {
      res["CrossAccountRoleName"] = boost::any(*crossAccountRoleName);
    }
    if (crossAccountType) {
      res["CrossAccountType"] = boost::any(*crossAccountType);
    }
    if (crossAccountUserId) {
      res["CrossAccountUserId"] = boost::any(*crossAccountUserId);
    }
    if (instanceIds) {
      res["InstanceIds"] = boost::any(*instanceIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientIds") != m.end() && !m["ClientIds"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ClientIds"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      clientIds = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("CrossAccountRoleName") != m.end() && !m["CrossAccountRoleName"].empty()) {
      crossAccountRoleName = make_shared<string>(boost::any_cast<string>(m["CrossAccountRoleName"]));
    }
    if (m.find("CrossAccountType") != m.end() && !m["CrossAccountType"].empty()) {
      crossAccountType = make_shared<string>(boost::any_cast<string>(m["CrossAccountType"]));
    }
    if (m.find("CrossAccountUserId") != m.end() && !m["CrossAccountUserId"].empty()) {
      crossAccountUserId = make_shared<long>(boost::any_cast<long>(m["CrossAccountUserId"]));
    }
    if (m.find("InstanceIds") != m.end() && !m["InstanceIds"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["InstanceIds"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      instanceIds = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~UpgradeBackupClientsRequest() = default;
};
class UpgradeBackupClientsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientIdsShrink{};
  shared_ptr<string> crossAccountRoleName{};
  shared_ptr<string> crossAccountType{};
  shared_ptr<long> crossAccountUserId{};
  shared_ptr<string> instanceIdsShrink{};

  UpgradeBackupClientsShrinkRequest() {}

  explicit UpgradeBackupClientsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientIdsShrink) {
      res["ClientIds"] = boost::any(*clientIdsShrink);
    }
    if (crossAccountRoleName) {
      res["CrossAccountRoleName"] = boost::any(*crossAccountRoleName);
    }
    if (crossAccountType) {
      res["CrossAccountType"] = boost::any(*crossAccountType);
    }
    if (crossAccountUserId) {
      res["CrossAccountUserId"] = boost::any(*crossAccountUserId);
    }
    if (instanceIdsShrink) {
      res["InstanceIds"] = boost::any(*instanceIdsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientIds") != m.end() && !m["ClientIds"].empty()) {
      clientIdsShrink = make_shared<string>(boost::any_cast<string>(m["ClientIds"]));
    }
    if (m.find("CrossAccountRoleName") != m.end() && !m["CrossAccountRoleName"].empty()) {
      crossAccountRoleName = make_shared<string>(boost::any_cast<string>(m["CrossAccountRoleName"]));
    }
    if (m.find("CrossAccountType") != m.end() && !m["CrossAccountType"].empty()) {
      crossAccountType = make_shared<string>(boost::any_cast<string>(m["CrossAccountType"]));
    }
    if (m.find("CrossAccountUserId") != m.end() && !m["CrossAccountUserId"].empty()) {
      crossAccountUserId = make_shared<long>(boost::any_cast<long>(m["CrossAccountUserId"]));
    }
    if (m.find("InstanceIds") != m.end() && !m["InstanceIds"].empty()) {
      instanceIdsShrink = make_shared<string>(boost::any_cast<string>(m["InstanceIds"]));
    }
  }


  virtual ~UpgradeBackupClientsShrinkRequest() = default;
};
class UpgradeBackupClientsResponseBodyInstanceStatuses : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> instanceId{};
  shared_ptr<bool> validInstance{};

  UpgradeBackupClientsResponseBodyInstanceStatuses() {}

  explicit UpgradeBackupClientsResponseBodyInstanceStatuses(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (validInstance) {
      res["ValidInstance"] = boost::any(*validInstance);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ValidInstance") != m.end() && !m["ValidInstance"].empty()) {
      validInstance = make_shared<bool>(boost::any_cast<bool>(m["ValidInstance"]));
    }
  }


  virtual ~UpgradeBackupClientsResponseBodyInstanceStatuses() = default;
};
class UpgradeBackupClientsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<UpgradeBackupClientsResponseBodyInstanceStatuses>> instanceStatuses{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> taskId{};

  UpgradeBackupClientsResponseBody() {}

  explicit UpgradeBackupClientsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (instanceStatuses) {
      vector<boost::any> temp1;
      for(auto item1:*instanceStatuses){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstanceStatuses"] = boost::any(temp1);
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
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("InstanceStatuses") != m.end() && !m["InstanceStatuses"].empty()) {
      if (typeid(vector<boost::any>) == m["InstanceStatuses"].type()) {
        vector<UpgradeBackupClientsResponseBodyInstanceStatuses> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanceStatuses"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpgradeBackupClientsResponseBodyInstanceStatuses model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceStatuses = make_shared<vector<UpgradeBackupClientsResponseBodyInstanceStatuses>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~UpgradeBackupClientsResponseBody() = default;
};
class UpgradeBackupClientsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpgradeBackupClientsResponseBody> body{};

  UpgradeBackupClientsResponse() {}

  explicit UpgradeBackupClientsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpgradeBackupClientsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpgradeBackupClientsResponseBody>(model1);
      }
    }
  }


  virtual ~UpgradeBackupClientsResponse() = default;
};
class UpgradeClientRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> vaultId{};

  UpgradeClientRequest() {}

  explicit UpgradeClientRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (vaultId) {
      res["VaultId"] = boost::any(*vaultId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("VaultId") != m.end() && !m["VaultId"].empty()) {
      vaultId = make_shared<string>(boost::any_cast<string>(m["VaultId"]));
    }
  }


  virtual ~UpgradeClientRequest() = default;
};
class UpgradeClientResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> taskId{};

  UpgradeClientResponseBody() {}

  explicit UpgradeClientResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~UpgradeClientResponseBody() = default;
};
class UpgradeClientResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpgradeClientResponseBody> body{};

  UpgradeClientResponse() {}

  explicit UpgradeClientResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpgradeClientResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpgradeClientResponseBody>(model1);
      }
    }
  }


  virtual ~UpgradeClientResponse() = default;
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
  AddContainerClusterResponse addContainerClusterWithOptions(shared_ptr<AddContainerClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddContainerClusterResponse addContainerCluster(shared_ptr<AddContainerClusterRequest> request);
  CancelBackupJobResponse cancelBackupJobWithOptions(shared_ptr<CancelBackupJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelBackupJobResponse cancelBackupJob(shared_ptr<CancelBackupJobRequest> request);
  CancelRestoreJobResponse cancelRestoreJobWithOptions(shared_ptr<CancelRestoreJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelRestoreJobResponse cancelRestoreJob(shared_ptr<CancelRestoreJobRequest> request);
  ChangeResourceGroupResponse changeResourceGroupWithOptions(shared_ptr<ChangeResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChangeResourceGroupResponse changeResourceGroup(shared_ptr<ChangeResourceGroupRequest> request);
  CheckRoleResponse checkRoleWithOptions(shared_ptr<CheckRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckRoleResponse checkRole(shared_ptr<CheckRoleRequest> request);
  CreateBackupJobResponse createBackupJobWithOptions(shared_ptr<CreateBackupJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateBackupJobResponse createBackupJob(shared_ptr<CreateBackupJobRequest> request);
  CreateBackupPlanResponse createBackupPlanWithOptions(shared_ptr<CreateBackupPlanRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateBackupPlanResponse createBackupPlan(shared_ptr<CreateBackupPlanRequest> request);
  CreateClientsResponse createClientsWithOptions(shared_ptr<CreateClientsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateClientsResponse createClients(shared_ptr<CreateClientsRequest> request);
  CreateHanaBackupPlanResponse createHanaBackupPlanWithOptions(shared_ptr<CreateHanaBackupPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateHanaBackupPlanResponse createHanaBackupPlan(shared_ptr<CreateHanaBackupPlanRequest> request);
  CreateHanaInstanceResponse createHanaInstanceWithOptions(shared_ptr<CreateHanaInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateHanaInstanceResponse createHanaInstance(shared_ptr<CreateHanaInstanceRequest> request);
  CreateHanaRestoreResponse createHanaRestoreWithOptions(shared_ptr<CreateHanaRestoreRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateHanaRestoreResponse createHanaRestore(shared_ptr<CreateHanaRestoreRequest> request);
  CreatePolicyBindingsResponse createPolicyBindingsWithOptions(shared_ptr<CreatePolicyBindingsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePolicyBindingsResponse createPolicyBindings(shared_ptr<CreatePolicyBindingsRequest> request);
  CreatePolicyV2Response createPolicyV2WithOptions(shared_ptr<CreatePolicyV2Request> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePolicyV2Response createPolicyV2(shared_ptr<CreatePolicyV2Request> request);
  CreateReplicationVaultResponse createReplicationVaultWithOptions(shared_ptr<CreateReplicationVaultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateReplicationVaultResponse createReplicationVault(shared_ptr<CreateReplicationVaultRequest> request);
  CreateRestoreJobResponse createRestoreJobWithOptions(shared_ptr<CreateRestoreJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRestoreJobResponse createRestoreJob(shared_ptr<CreateRestoreJobRequest> request);
  CreateTempFileUploadUrlResponse createTempFileUploadUrlWithOptions(shared_ptr<CreateTempFileUploadUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTempFileUploadUrlResponse createTempFileUploadUrl(shared_ptr<CreateTempFileUploadUrlRequest> request);
  CreateVaultResponse createVaultWithOptions(shared_ptr<CreateVaultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateVaultResponse createVault(shared_ptr<CreateVaultRequest> request);
  DeleteBackupClientResponse deleteBackupClientWithOptions(shared_ptr<DeleteBackupClientRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteBackupClientResponse deleteBackupClient(shared_ptr<DeleteBackupClientRequest> request);
  DeleteBackupClientResourceResponse deleteBackupClientResourceWithOptions(shared_ptr<DeleteBackupClientResourceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteBackupClientResourceResponse deleteBackupClientResource(shared_ptr<DeleteBackupClientResourceRequest> request);
  DeleteBackupPlanResponse deleteBackupPlanWithOptions(shared_ptr<DeleteBackupPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteBackupPlanResponse deleteBackupPlan(shared_ptr<DeleteBackupPlanRequest> request);
  DeleteClientResponse deleteClientWithOptions(shared_ptr<DeleteClientRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteClientResponse deleteClient(shared_ptr<DeleteClientRequest> request);
  DeleteHanaBackupPlanResponse deleteHanaBackupPlanWithOptions(shared_ptr<DeleteHanaBackupPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteHanaBackupPlanResponse deleteHanaBackupPlan(shared_ptr<DeleteHanaBackupPlanRequest> request);
  DeleteHanaInstanceResponse deleteHanaInstanceWithOptions(shared_ptr<DeleteHanaInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteHanaInstanceResponse deleteHanaInstance(shared_ptr<DeleteHanaInstanceRequest> request);
  DeletePolicyBindingResponse deletePolicyBindingWithOptions(shared_ptr<DeletePolicyBindingRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeletePolicyBindingResponse deletePolicyBinding(shared_ptr<DeletePolicyBindingRequest> request);
  DeletePolicyV2Response deletePolicyV2WithOptions(shared_ptr<DeletePolicyV2Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeletePolicyV2Response deletePolicyV2(shared_ptr<DeletePolicyV2Request> request);
  DeleteSnapshotResponse deleteSnapshotWithOptions(shared_ptr<DeleteSnapshotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteSnapshotResponse deleteSnapshot(shared_ptr<DeleteSnapshotRequest> request);
  DeleteUdmDiskResponse deleteUdmDiskWithOptions(shared_ptr<DeleteUdmDiskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteUdmDiskResponse deleteUdmDisk(shared_ptr<DeleteUdmDiskRequest> request);
  DeleteUdmEcsInstanceResponse deleteUdmEcsInstanceWithOptions(shared_ptr<DeleteUdmEcsInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteUdmEcsInstanceResponse deleteUdmEcsInstance(shared_ptr<DeleteUdmEcsInstanceRequest> request);
  DeleteVaultResponse deleteVaultWithOptions(shared_ptr<DeleteVaultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteVaultResponse deleteVault(shared_ptr<DeleteVaultRequest> request);
  DescribeBackupClientsResponse describeBackupClientsWithOptions(shared_ptr<DescribeBackupClientsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeBackupClientsResponse describeBackupClients(shared_ptr<DescribeBackupClientsRequest> request);
  DescribeBackupJobs2Response describeBackupJobs2WithOptions(shared_ptr<DescribeBackupJobs2Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeBackupJobs2Response describeBackupJobs2(shared_ptr<DescribeBackupJobs2Request> request);
  DescribeBackupPlansResponse describeBackupPlansWithOptions(shared_ptr<DescribeBackupPlansRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeBackupPlansResponse describeBackupPlans(shared_ptr<DescribeBackupPlansRequest> request);
  DescribeClientsResponse describeClientsWithOptions(shared_ptr<DescribeClientsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeClientsResponse describeClients(shared_ptr<DescribeClientsRequest> request);
  DescribeContainerClusterResponse describeContainerClusterWithOptions(shared_ptr<DescribeContainerClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeContainerClusterResponse describeContainerCluster(shared_ptr<DescribeContainerClusterRequest> request);
  DescribeCrossAccountsResponse describeCrossAccountsWithOptions(shared_ptr<DescribeCrossAccountsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCrossAccountsResponse describeCrossAccounts(shared_ptr<DescribeCrossAccountsRequest> request);
  DescribeHanaBackupPlansResponse describeHanaBackupPlansWithOptions(shared_ptr<DescribeHanaBackupPlansRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeHanaBackupPlansResponse describeHanaBackupPlans(shared_ptr<DescribeHanaBackupPlansRequest> request);
  DescribeHanaBackupSettingResponse describeHanaBackupSettingWithOptions(shared_ptr<DescribeHanaBackupSettingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeHanaBackupSettingResponse describeHanaBackupSetting(shared_ptr<DescribeHanaBackupSettingRequest> request);
  DescribeHanaBackupsAsyncResponse describeHanaBackupsAsyncWithOptions(shared_ptr<DescribeHanaBackupsAsyncRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeHanaBackupsAsyncResponse describeHanaBackupsAsync(shared_ptr<DescribeHanaBackupsAsyncRequest> request);
  DescribeHanaDatabasesResponse describeHanaDatabasesWithOptions(shared_ptr<DescribeHanaDatabasesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeHanaDatabasesResponse describeHanaDatabases(shared_ptr<DescribeHanaDatabasesRequest> request);
  DescribeHanaInstancesResponse describeHanaInstancesWithOptions(shared_ptr<DescribeHanaInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeHanaInstancesResponse describeHanaInstances(shared_ptr<DescribeHanaInstancesRequest> request);
  DescribeHanaRestoresResponse describeHanaRestoresWithOptions(shared_ptr<DescribeHanaRestoresRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeHanaRestoresResponse describeHanaRestores(shared_ptr<DescribeHanaRestoresRequest> request);
  DescribeHanaRetentionSettingResponse describeHanaRetentionSettingWithOptions(shared_ptr<DescribeHanaRetentionSettingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeHanaRetentionSettingResponse describeHanaRetentionSetting(shared_ptr<DescribeHanaRetentionSettingRequest> request);
  DescribeOtsTableSnapshotsResponse describeOtsTableSnapshotsWithOptions(shared_ptr<DescribeOtsTableSnapshotsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeOtsTableSnapshotsResponse describeOtsTableSnapshots(shared_ptr<DescribeOtsTableSnapshotsRequest> request);
  DescribePoliciesV2Response describePoliciesV2WithOptions(shared_ptr<DescribePoliciesV2Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePoliciesV2Response describePoliciesV2(shared_ptr<DescribePoliciesV2Request> request);
  DescribePolicyBindingsResponse describePolicyBindingsWithOptions(shared_ptr<DescribePolicyBindingsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePolicyBindingsResponse describePolicyBindings(shared_ptr<DescribePolicyBindingsRequest> request);
  DescribeRecoverableOtsInstancesResponse describeRecoverableOtsInstancesWithOptions(shared_ptr<DescribeRecoverableOtsInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRecoverableOtsInstancesResponse describeRecoverableOtsInstances(shared_ptr<DescribeRecoverableOtsInstancesRequest> request);
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions();
  DescribeRestoreJobs2Response describeRestoreJobs2WithOptions(shared_ptr<DescribeRestoreJobs2Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRestoreJobs2Response describeRestoreJobs2(shared_ptr<DescribeRestoreJobs2Request> request);
  DescribeTaskResponse describeTaskWithOptions(shared_ptr<DescribeTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeTaskResponse describeTask(shared_ptr<DescribeTaskRequest> request);
  DescribeUdmSnapshotsResponse describeUdmSnapshotsWithOptions(shared_ptr<DescribeUdmSnapshotsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeUdmSnapshotsResponse describeUdmSnapshots(shared_ptr<DescribeUdmSnapshotsRequest> request);
  DescribeVaultReplicationRegionsResponse describeVaultReplicationRegionsWithOptions(shared_ptr<DescribeVaultReplicationRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVaultReplicationRegionsResponse describeVaultReplicationRegions(shared_ptr<DescribeVaultReplicationRegionsRequest> request);
  DescribeVaultsResponse describeVaultsWithOptions(shared_ptr<DescribeVaultsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVaultsResponse describeVaults(shared_ptr<DescribeVaultsRequest> request);
  DetachNasFileSystemResponse detachNasFileSystemWithOptions(shared_ptr<DetachNasFileSystemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetachNasFileSystemResponse detachNasFileSystem(shared_ptr<DetachNasFileSystemRequest> request);
  DisableBackupPlanResponse disableBackupPlanWithOptions(shared_ptr<DisableBackupPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableBackupPlanResponse disableBackupPlan(shared_ptr<DisableBackupPlanRequest> request);
  DisableHanaBackupPlanResponse disableHanaBackupPlanWithOptions(shared_ptr<DisableHanaBackupPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableHanaBackupPlanResponse disableHanaBackupPlan(shared_ptr<DisableHanaBackupPlanRequest> request);
  EnableBackupPlanResponse enableBackupPlanWithOptions(shared_ptr<EnableBackupPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableBackupPlanResponse enableBackupPlan(shared_ptr<EnableBackupPlanRequest> request);
  EnableHanaBackupPlanResponse enableHanaBackupPlanWithOptions(shared_ptr<EnableHanaBackupPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableHanaBackupPlanResponse enableHanaBackupPlan(shared_ptr<EnableHanaBackupPlanRequest> request);
  ExecuteBackupPlanResponse executeBackupPlanWithOptions(shared_ptr<ExecuteBackupPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExecuteBackupPlanResponse executeBackupPlan(shared_ptr<ExecuteBackupPlanRequest> request);
  ExecutePolicyV2Response executePolicyV2WithOptions(shared_ptr<ExecutePolicyV2Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExecutePolicyV2Response executePolicyV2(shared_ptr<ExecutePolicyV2Request> request);
  GenerateRamPolicyResponse generateRamPolicyWithOptions(shared_ptr<GenerateRamPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateRamPolicyResponse generateRamPolicy(shared_ptr<GenerateRamPolicyRequest> request);
  GetTempFileDownloadLinkResponse getTempFileDownloadLinkWithOptions(shared_ptr<GetTempFileDownloadLinkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTempFileDownloadLinkResponse getTempFileDownloadLink(shared_ptr<GetTempFileDownloadLinkRequest> request);
  InstallBackupClientsResponse installBackupClientsWithOptions(shared_ptr<InstallBackupClientsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InstallBackupClientsResponse installBackupClients(shared_ptr<InstallBackupClientsRequest> request);
  OpenHbrServiceResponse openHbrServiceWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OpenHbrServiceResponse openHbrService();
  SearchHistoricalSnapshotsResponse searchHistoricalSnapshotsWithOptions(shared_ptr<SearchHistoricalSnapshotsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SearchHistoricalSnapshotsResponse searchHistoricalSnapshots(shared_ptr<SearchHistoricalSnapshotsRequest> request);
  StartHanaDatabaseAsyncResponse startHanaDatabaseAsyncWithOptions(shared_ptr<StartHanaDatabaseAsyncRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartHanaDatabaseAsyncResponse startHanaDatabaseAsync(shared_ptr<StartHanaDatabaseAsyncRequest> request);
  StopHanaDatabaseAsyncResponse stopHanaDatabaseAsyncWithOptions(shared_ptr<StopHanaDatabaseAsyncRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopHanaDatabaseAsyncResponse stopHanaDatabaseAsync(shared_ptr<StopHanaDatabaseAsyncRequest> request);
  UninstallBackupClientsResponse uninstallBackupClientsWithOptions(shared_ptr<UninstallBackupClientsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UninstallBackupClientsResponse uninstallBackupClients(shared_ptr<UninstallBackupClientsRequest> request);
  UninstallClientResponse uninstallClientWithOptions(shared_ptr<UninstallClientRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UninstallClientResponse uninstallClient(shared_ptr<UninstallClientRequest> request);
  UpdateBackupPlanResponse updateBackupPlanWithOptions(shared_ptr<UpdateBackupPlanRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateBackupPlanResponse updateBackupPlan(shared_ptr<UpdateBackupPlanRequest> request);
  UpdateClientSettingsResponse updateClientSettingsWithOptions(shared_ptr<UpdateClientSettingsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateClientSettingsResponse updateClientSettings(shared_ptr<UpdateClientSettingsRequest> request);
  UpdateContainerClusterResponse updateContainerClusterWithOptions(shared_ptr<UpdateContainerClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateContainerClusterResponse updateContainerCluster(shared_ptr<UpdateContainerClusterRequest> request);
  UpdateHanaBackupPlanResponse updateHanaBackupPlanWithOptions(shared_ptr<UpdateHanaBackupPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateHanaBackupPlanResponse updateHanaBackupPlan(shared_ptr<UpdateHanaBackupPlanRequest> request);
  UpdateHanaBackupSettingResponse updateHanaBackupSettingWithOptions(shared_ptr<UpdateHanaBackupSettingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateHanaBackupSettingResponse updateHanaBackupSetting(shared_ptr<UpdateHanaBackupSettingRequest> request);
  UpdateHanaInstanceResponse updateHanaInstanceWithOptions(shared_ptr<UpdateHanaInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateHanaInstanceResponse updateHanaInstance(shared_ptr<UpdateHanaInstanceRequest> request);
  UpdateHanaRetentionSettingResponse updateHanaRetentionSettingWithOptions(shared_ptr<UpdateHanaRetentionSettingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateHanaRetentionSettingResponse updateHanaRetentionSetting(shared_ptr<UpdateHanaRetentionSettingRequest> request);
  UpdatePolicyBindingResponse updatePolicyBindingWithOptions(shared_ptr<UpdatePolicyBindingRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdatePolicyBindingResponse updatePolicyBinding(shared_ptr<UpdatePolicyBindingRequest> request);
  UpdatePolicyV2Response updatePolicyV2WithOptions(shared_ptr<UpdatePolicyV2Request> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdatePolicyV2Response updatePolicyV2(shared_ptr<UpdatePolicyV2Request> request);
  UpdateVaultResponse updateVaultWithOptions(shared_ptr<UpdateVaultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateVaultResponse updateVault(shared_ptr<UpdateVaultRequest> request);
  UpgradeBackupClientsResponse upgradeBackupClientsWithOptions(shared_ptr<UpgradeBackupClientsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpgradeBackupClientsResponse upgradeBackupClients(shared_ptr<UpgradeBackupClientsRequest> request);
  UpgradeClientResponse upgradeClientWithOptions(shared_ptr<UpgradeClientRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpgradeClientResponse upgradeClient(shared_ptr<UpgradeClientRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Hbr20170908

#endif
