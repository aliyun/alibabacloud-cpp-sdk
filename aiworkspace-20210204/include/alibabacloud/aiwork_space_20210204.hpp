// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_AIWORKSPACE20210204_H_
#define ALIBABACLOUD_AIWORKSPACE20210204_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_AIWorkSpace20210204 {
class CodeSourceItem : public Darabonba::Model {
public:
  shared_ptr<string> accessibility{};
  shared_ptr<string> codeBranch{};
  shared_ptr<string> codeCommit{};
  shared_ptr<string> codeRepo{};
  shared_ptr<string> codeRepoAccessToken{};
  shared_ptr<string> codeRepoUserName{};
  shared_ptr<string> codeSourceId{};
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifyTime{};
  shared_ptr<string> mountPath{};
  shared_ptr<string> userId{};
  shared_ptr<string> workspaceId{};

  CodeSourceItem() {}

  explicit CodeSourceItem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessibility) {
      res["Accessibility"] = boost::any(*accessibility);
    }
    if (codeBranch) {
      res["CodeBranch"] = boost::any(*codeBranch);
    }
    if (codeCommit) {
      res["CodeCommit"] = boost::any(*codeCommit);
    }
    if (codeRepo) {
      res["CodeRepo"] = boost::any(*codeRepo);
    }
    if (codeRepoAccessToken) {
      res["CodeRepoAccessToken"] = boost::any(*codeRepoAccessToken);
    }
    if (codeRepoUserName) {
      res["CodeRepoUserName"] = boost::any(*codeRepoUserName);
    }
    if (codeSourceId) {
      res["CodeSourceId"] = boost::any(*codeSourceId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifyTime) {
      res["GmtModifyTime"] = boost::any(*gmtModifyTime);
    }
    if (mountPath) {
      res["MountPath"] = boost::any(*mountPath);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accessibility") != m.end() && !m["Accessibility"].empty()) {
      accessibility = make_shared<string>(boost::any_cast<string>(m["Accessibility"]));
    }
    if (m.find("CodeBranch") != m.end() && !m["CodeBranch"].empty()) {
      codeBranch = make_shared<string>(boost::any_cast<string>(m["CodeBranch"]));
    }
    if (m.find("CodeCommit") != m.end() && !m["CodeCommit"].empty()) {
      codeCommit = make_shared<string>(boost::any_cast<string>(m["CodeCommit"]));
    }
    if (m.find("CodeRepo") != m.end() && !m["CodeRepo"].empty()) {
      codeRepo = make_shared<string>(boost::any_cast<string>(m["CodeRepo"]));
    }
    if (m.find("CodeRepoAccessToken") != m.end() && !m["CodeRepoAccessToken"].empty()) {
      codeRepoAccessToken = make_shared<string>(boost::any_cast<string>(m["CodeRepoAccessToken"]));
    }
    if (m.find("CodeRepoUserName") != m.end() && !m["CodeRepoUserName"].empty()) {
      codeRepoUserName = make_shared<string>(boost::any_cast<string>(m["CodeRepoUserName"]));
    }
    if (m.find("CodeSourceId") != m.end() && !m["CodeSourceId"].empty()) {
      codeSourceId = make_shared<string>(boost::any_cast<string>(m["CodeSourceId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifyTime") != m.end() && !m["GmtModifyTime"].empty()) {
      gmtModifyTime = make_shared<string>(boost::any_cast<string>(m["GmtModifyTime"]));
    }
    if (m.find("MountPath") != m.end() && !m["MountPath"].empty()) {
      mountPath = make_shared<string>(boost::any_cast<string>(m["MountPath"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~CodeSourceItem() = default;
};
class Collection : public Darabonba::Model {
public:
  shared_ptr<string> collectionName{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> userId{};

  Collection() {}

  explicit Collection(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (collectionName) {
      res["CollectionName"] = boost::any(*collectionName);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CollectionName") != m.end() && !m["CollectionName"].empty()) {
      collectionName = make_shared<string>(boost::any_cast<string>(m["CollectionName"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~Collection() = default;
};
class ConnectionModels : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> model{};
  shared_ptr<string> modelType{};
  shared_ptr<bool> toolCall{};

  ConnectionModels() {}

  explicit ConnectionModels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (model) {
      res["Model"] = boost::any(*model);
    }
    if (modelType) {
      res["ModelType"] = boost::any(*modelType);
    }
    if (toolCall) {
      res["ToolCall"] = boost::any(*toolCall);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      model = make_shared<string>(boost::any_cast<string>(m["Model"]));
    }
    if (m.find("ModelType") != m.end() && !m["ModelType"].empty()) {
      modelType = make_shared<string>(boost::any_cast<string>(m["ModelType"]));
    }
    if (m.find("ToolCall") != m.end() && !m["ToolCall"].empty()) {
      toolCall = make_shared<bool>(boost::any_cast<bool>(m["ToolCall"]));
    }
  }


  virtual ~ConnectionModels() = default;
};
class ConnectionResourceMeta : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};

  ConnectionResourceMeta() {}

  explicit ConnectionResourceMeta(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
  }


  virtual ~ConnectionResourceMeta() = default;
};
class Connection : public Darabonba::Model {
public:
  shared_ptr<string> accessibility{};
  shared_ptr<map<string, string>> configs{};
  shared_ptr<string> connectionId{};
  shared_ptr<string> connectionName{};
  shared_ptr<string> connectionType{};
  shared_ptr<string> creator{};
  shared_ptr<string> description{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<vector<ConnectionModels>> models{};
  shared_ptr<ConnectionResourceMeta> resourceMeta{};
  shared_ptr<map<string, string>> secrets{};
  shared_ptr<string> workspaceId{};

  Connection() {}

  explicit Connection(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessibility) {
      res["Accessibility"] = boost::any(*accessibility);
    }
    if (configs) {
      res["Configs"] = boost::any(*configs);
    }
    if (connectionId) {
      res["ConnectionId"] = boost::any(*connectionId);
    }
    if (connectionName) {
      res["ConnectionName"] = boost::any(*connectionName);
    }
    if (connectionType) {
      res["ConnectionType"] = boost::any(*connectionType);
    }
    if (creator) {
      res["Creator"] = boost::any(*creator);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (models) {
      vector<boost::any> temp1;
      for(auto item1:*models){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Models"] = boost::any(temp1);
    }
    if (resourceMeta) {
      res["ResourceMeta"] = resourceMeta ? boost::any(resourceMeta->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (secrets) {
      res["Secrets"] = boost::any(*secrets);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accessibility") != m.end() && !m["Accessibility"].empty()) {
      accessibility = make_shared<string>(boost::any_cast<string>(m["Accessibility"]));
    }
    if (m.find("Configs") != m.end() && !m["Configs"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Configs"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      configs = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("ConnectionId") != m.end() && !m["ConnectionId"].empty()) {
      connectionId = make_shared<string>(boost::any_cast<string>(m["ConnectionId"]));
    }
    if (m.find("ConnectionName") != m.end() && !m["ConnectionName"].empty()) {
      connectionName = make_shared<string>(boost::any_cast<string>(m["ConnectionName"]));
    }
    if (m.find("ConnectionType") != m.end() && !m["ConnectionType"].empty()) {
      connectionType = make_shared<string>(boost::any_cast<string>(m["ConnectionType"]));
    }
    if (m.find("Creator") != m.end() && !m["Creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["Creator"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("Models") != m.end() && !m["Models"].empty()) {
      if (typeid(vector<boost::any>) == m["Models"].type()) {
        vector<ConnectionModels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Models"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ConnectionModels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        models = make_shared<vector<ConnectionModels>>(expect1);
      }
    }
    if (m.find("ResourceMeta") != m.end() && !m["ResourceMeta"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourceMeta"].type()) {
        ConnectionResourceMeta model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceMeta"]));
        resourceMeta = make_shared<ConnectionResourceMeta>(model1);
      }
    }
    if (m.find("Secrets") != m.end() && !m["Secrets"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Secrets"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      secrets = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~Connection() = default;
};
class Label : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  Label() {}

  explicit Label(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~Label() = default;
};
class DatasetVersion : public Darabonba::Model {
public:
  shared_ptr<long> dataCount{};
  shared_ptr<long> dataSize{};
  shared_ptr<string> dataSourceType{};
  shared_ptr<string> description{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> importInfo{};
  shared_ptr<vector<Label>> labels{};
  shared_ptr<string> mountAccess{};
  shared_ptr<string> options{};
  shared_ptr<string> property{};
  shared_ptr<string> sourceId{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> uri{};
  shared_ptr<string> versionName{};

  DatasetVersion() {}

  explicit DatasetVersion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataCount) {
      res["DataCount"] = boost::any(*dataCount);
    }
    if (dataSize) {
      res["DataSize"] = boost::any(*dataSize);
    }
    if (dataSourceType) {
      res["DataSourceType"] = boost::any(*dataSourceType);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (importInfo) {
      res["ImportInfo"] = boost::any(*importInfo);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (mountAccess) {
      res["MountAccess"] = boost::any(*mountAccess);
    }
    if (options) {
      res["Options"] = boost::any(*options);
    }
    if (property) {
      res["Property"] = boost::any(*property);
    }
    if (sourceId) {
      res["SourceId"] = boost::any(*sourceId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (uri) {
      res["Uri"] = boost::any(*uri);
    }
    if (versionName) {
      res["VersionName"] = boost::any(*versionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataCount") != m.end() && !m["DataCount"].empty()) {
      dataCount = make_shared<long>(boost::any_cast<long>(m["DataCount"]));
    }
    if (m.find("DataSize") != m.end() && !m["DataSize"].empty()) {
      dataSize = make_shared<long>(boost::any_cast<long>(m["DataSize"]));
    }
    if (m.find("DataSourceType") != m.end() && !m["DataSourceType"].empty()) {
      dataSourceType = make_shared<string>(boost::any_cast<string>(m["DataSourceType"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("ImportInfo") != m.end() && !m["ImportInfo"].empty()) {
      importInfo = make_shared<string>(boost::any_cast<string>(m["ImportInfo"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<Label> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Label model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<Label>>(expect1);
      }
    }
    if (m.find("MountAccess") != m.end() && !m["MountAccess"].empty()) {
      mountAccess = make_shared<string>(boost::any_cast<string>(m["MountAccess"]));
    }
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      options = make_shared<string>(boost::any_cast<string>(m["Options"]));
    }
    if (m.find("Property") != m.end() && !m["Property"].empty()) {
      property = make_shared<string>(boost::any_cast<string>(m["Property"]));
    }
    if (m.find("SourceId") != m.end() && !m["SourceId"].empty()) {
      sourceId = make_shared<string>(boost::any_cast<string>(m["SourceId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("Uri") != m.end() && !m["Uri"].empty()) {
      uri = make_shared<string>(boost::any_cast<string>(m["Uri"]));
    }
    if (m.find("VersionName") != m.end() && !m["VersionName"].empty()) {
      versionName = make_shared<string>(boost::any_cast<string>(m["VersionName"]));
    }
  }


  virtual ~DatasetVersion() = default;
};
class Dataset : public Darabonba::Model {
public:
  shared_ptr<string> accessibility{};
  shared_ptr<string> dataSourceType{};
  shared_ptr<string> dataType{};
  shared_ptr<string> datasetId{};
  shared_ptr<string> description{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> importInfo{};
  shared_ptr<vector<Label>> labels{};
  shared_ptr<DatasetVersion> latestVersion{};
  shared_ptr<string> mountAccess{};
  shared_ptr<vector<string>> mountAccessReadWriteRoleIdList{};
  shared_ptr<string> name{};
  shared_ptr<string> options{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> property{};
  shared_ptr<string> providerType{};
  shared_ptr<string> sourceDatasetId{};
  shared_ptr<string> sourceDatasetVersion{};
  shared_ptr<string> sourceId{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> tagTemplateType{};
  shared_ptr<string> uri{};
  shared_ptr<string> userId{};
  shared_ptr<string> workspaceId{};

  Dataset() {}

  explicit Dataset(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessibility) {
      res["Accessibility"] = boost::any(*accessibility);
    }
    if (dataSourceType) {
      res["DataSourceType"] = boost::any(*dataSourceType);
    }
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (datasetId) {
      res["DatasetId"] = boost::any(*datasetId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (importInfo) {
      res["ImportInfo"] = boost::any(*importInfo);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (latestVersion) {
      res["LatestVersion"] = latestVersion ? boost::any(latestVersion->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (mountAccess) {
      res["MountAccess"] = boost::any(*mountAccess);
    }
    if (mountAccessReadWriteRoleIdList) {
      res["MountAccessReadWriteRoleIdList"] = boost::any(*mountAccessReadWriteRoleIdList);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (options) {
      res["Options"] = boost::any(*options);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (property) {
      res["Property"] = boost::any(*property);
    }
    if (providerType) {
      res["ProviderType"] = boost::any(*providerType);
    }
    if (sourceDatasetId) {
      res["SourceDatasetId"] = boost::any(*sourceDatasetId);
    }
    if (sourceDatasetVersion) {
      res["SourceDatasetVersion"] = boost::any(*sourceDatasetVersion);
    }
    if (sourceId) {
      res["SourceId"] = boost::any(*sourceId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (tagTemplateType) {
      res["TagTemplateType"] = boost::any(*tagTemplateType);
    }
    if (uri) {
      res["Uri"] = boost::any(*uri);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accessibility") != m.end() && !m["Accessibility"].empty()) {
      accessibility = make_shared<string>(boost::any_cast<string>(m["Accessibility"]));
    }
    if (m.find("DataSourceType") != m.end() && !m["DataSourceType"].empty()) {
      dataSourceType = make_shared<string>(boost::any_cast<string>(m["DataSourceType"]));
    }
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
    if (m.find("DatasetId") != m.end() && !m["DatasetId"].empty()) {
      datasetId = make_shared<string>(boost::any_cast<string>(m["DatasetId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("ImportInfo") != m.end() && !m["ImportInfo"].empty()) {
      importInfo = make_shared<string>(boost::any_cast<string>(m["ImportInfo"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<Label> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Label model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<Label>>(expect1);
      }
    }
    if (m.find("LatestVersion") != m.end() && !m["LatestVersion"].empty()) {
      if (typeid(map<string, boost::any>) == m["LatestVersion"].type()) {
        DatasetVersion model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LatestVersion"]));
        latestVersion = make_shared<DatasetVersion>(model1);
      }
    }
    if (m.find("MountAccess") != m.end() && !m["MountAccess"].empty()) {
      mountAccess = make_shared<string>(boost::any_cast<string>(m["MountAccess"]));
    }
    if (m.find("MountAccessReadWriteRoleIdList") != m.end() && !m["MountAccessReadWriteRoleIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["MountAccessReadWriteRoleIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["MountAccessReadWriteRoleIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      mountAccessReadWriteRoleIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      options = make_shared<string>(boost::any_cast<string>(m["Options"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("Property") != m.end() && !m["Property"].empty()) {
      property = make_shared<string>(boost::any_cast<string>(m["Property"]));
    }
    if (m.find("ProviderType") != m.end() && !m["ProviderType"].empty()) {
      providerType = make_shared<string>(boost::any_cast<string>(m["ProviderType"]));
    }
    if (m.find("SourceDatasetId") != m.end() && !m["SourceDatasetId"].empty()) {
      sourceDatasetId = make_shared<string>(boost::any_cast<string>(m["SourceDatasetId"]));
    }
    if (m.find("SourceDatasetVersion") != m.end() && !m["SourceDatasetVersion"].empty()) {
      sourceDatasetVersion = make_shared<string>(boost::any_cast<string>(m["SourceDatasetVersion"]));
    }
    if (m.find("SourceId") != m.end() && !m["SourceId"].empty()) {
      sourceId = make_shared<string>(boost::any_cast<string>(m["SourceId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("TagTemplateType") != m.end() && !m["TagTemplateType"].empty()) {
      tagTemplateType = make_shared<string>(boost::any_cast<string>(m["TagTemplateType"]));
    }
    if (m.find("Uri") != m.end() && !m["Uri"].empty()) {
      uri = make_shared<string>(boost::any_cast<string>(m["Uri"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~Dataset() = default;
};
class DatasetFileMeta : public Darabonba::Model {
public:
  shared_ptr<string> contentType{};
  shared_ptr<long> dataSize{};
  shared_ptr<string> datasetFileMetaId{};
  shared_ptr<string> downloadUrl{};
  shared_ptr<string> fileCreateTime{};
  shared_ptr<string> fileFingerPrint{};
  shared_ptr<string> fileName{};
  shared_ptr<string> fileType{};
  shared_ptr<string> fileUpdateTime{};
  shared_ptr<string> metaAttributes{};
  shared_ptr<double> score{};
  shared_ptr<string> semanticIndexJobId{};
  shared_ptr<string> semanticIndexUpdateTime{};
  shared_ptr<string> tags{};
  shared_ptr<string> thumbnailUrl{};
  shared_ptr<string> uri{};

  DatasetFileMeta() {}

  explicit DatasetFileMeta(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contentType) {
      res["ContentType"] = boost::any(*contentType);
    }
    if (dataSize) {
      res["DataSize"] = boost::any(*dataSize);
    }
    if (datasetFileMetaId) {
      res["DatasetFileMetaId"] = boost::any(*datasetFileMetaId);
    }
    if (downloadUrl) {
      res["DownloadUrl"] = boost::any(*downloadUrl);
    }
    if (fileCreateTime) {
      res["FileCreateTime"] = boost::any(*fileCreateTime);
    }
    if (fileFingerPrint) {
      res["FileFingerPrint"] = boost::any(*fileFingerPrint);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileType) {
      res["FileType"] = boost::any(*fileType);
    }
    if (fileUpdateTime) {
      res["FileUpdateTime"] = boost::any(*fileUpdateTime);
    }
    if (metaAttributes) {
      res["MetaAttributes"] = boost::any(*metaAttributes);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (semanticIndexJobId) {
      res["SemanticIndexJobId"] = boost::any(*semanticIndexJobId);
    }
    if (semanticIndexUpdateTime) {
      res["SemanticIndexUpdateTime"] = boost::any(*semanticIndexUpdateTime);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (thumbnailUrl) {
      res["ThumbnailUrl"] = boost::any(*thumbnailUrl);
    }
    if (uri) {
      res["Uri"] = boost::any(*uri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContentType") != m.end() && !m["ContentType"].empty()) {
      contentType = make_shared<string>(boost::any_cast<string>(m["ContentType"]));
    }
    if (m.find("DataSize") != m.end() && !m["DataSize"].empty()) {
      dataSize = make_shared<long>(boost::any_cast<long>(m["DataSize"]));
    }
    if (m.find("DatasetFileMetaId") != m.end() && !m["DatasetFileMetaId"].empty()) {
      datasetFileMetaId = make_shared<string>(boost::any_cast<string>(m["DatasetFileMetaId"]));
    }
    if (m.find("DownloadUrl") != m.end() && !m["DownloadUrl"].empty()) {
      downloadUrl = make_shared<string>(boost::any_cast<string>(m["DownloadUrl"]));
    }
    if (m.find("FileCreateTime") != m.end() && !m["FileCreateTime"].empty()) {
      fileCreateTime = make_shared<string>(boost::any_cast<string>(m["FileCreateTime"]));
    }
    if (m.find("FileFingerPrint") != m.end() && !m["FileFingerPrint"].empty()) {
      fileFingerPrint = make_shared<string>(boost::any_cast<string>(m["FileFingerPrint"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileType") != m.end() && !m["FileType"].empty()) {
      fileType = make_shared<string>(boost::any_cast<string>(m["FileType"]));
    }
    if (m.find("FileUpdateTime") != m.end() && !m["FileUpdateTime"].empty()) {
      fileUpdateTime = make_shared<string>(boost::any_cast<string>(m["FileUpdateTime"]));
    }
    if (m.find("MetaAttributes") != m.end() && !m["MetaAttributes"].empty()) {
      metaAttributes = make_shared<string>(boost::any_cast<string>(m["MetaAttributes"]));
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("SemanticIndexJobId") != m.end() && !m["SemanticIndexJobId"].empty()) {
      semanticIndexJobId = make_shared<string>(boost::any_cast<string>(m["SemanticIndexJobId"]));
    }
    if (m.find("SemanticIndexUpdateTime") != m.end() && !m["SemanticIndexUpdateTime"].empty()) {
      semanticIndexUpdateTime = make_shared<string>(boost::any_cast<string>(m["SemanticIndexUpdateTime"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("ThumbnailUrl") != m.end() && !m["ThumbnailUrl"].empty()) {
      thumbnailUrl = make_shared<string>(boost::any_cast<string>(m["ThumbnailUrl"]));
    }
    if (m.find("Uri") != m.end() && !m["Uri"].empty()) {
      uri = make_shared<string>(boost::any_cast<string>(m["Uri"]));
    }
  }


  virtual ~DatasetFileMeta() = default;
};
class DatasetFileMetaConentUpdate : public Darabonba::Model {
public:
  shared_ptr<string> comment{};
  shared_ptr<string> contentType{};
  shared_ptr<long> dataSize{};
  shared_ptr<string> datasetFileMetaId{};
  shared_ptr<string> fileCreateTime{};
  shared_ptr<string> fileFingerPrint{};
  shared_ptr<string> fileName{};
  shared_ptr<string> fileType{};
  shared_ptr<string> fileUpdateTime{};
  shared_ptr<string> metaAttributes{};
  shared_ptr<string> semanticIndexJobId{};
  shared_ptr<string> semanticIndexUpdateTime{};
  shared_ptr<string> tags{};

  DatasetFileMetaConentUpdate() {}

  explicit DatasetFileMetaConentUpdate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (contentType) {
      res["ContentType"] = boost::any(*contentType);
    }
    if (dataSize) {
      res["DataSize"] = boost::any(*dataSize);
    }
    if (datasetFileMetaId) {
      res["DatasetFileMetaId"] = boost::any(*datasetFileMetaId);
    }
    if (fileCreateTime) {
      res["FileCreateTime"] = boost::any(*fileCreateTime);
    }
    if (fileFingerPrint) {
      res["FileFingerPrint"] = boost::any(*fileFingerPrint);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileType) {
      res["FileType"] = boost::any(*fileType);
    }
    if (fileUpdateTime) {
      res["FileUpdateTime"] = boost::any(*fileUpdateTime);
    }
    if (metaAttributes) {
      res["MetaAttributes"] = boost::any(*metaAttributes);
    }
    if (semanticIndexJobId) {
      res["SemanticIndexJobId"] = boost::any(*semanticIndexJobId);
    }
    if (semanticIndexUpdateTime) {
      res["SemanticIndexUpdateTime"] = boost::any(*semanticIndexUpdateTime);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("ContentType") != m.end() && !m["ContentType"].empty()) {
      contentType = make_shared<string>(boost::any_cast<string>(m["ContentType"]));
    }
    if (m.find("DataSize") != m.end() && !m["DataSize"].empty()) {
      dataSize = make_shared<long>(boost::any_cast<long>(m["DataSize"]));
    }
    if (m.find("DatasetFileMetaId") != m.end() && !m["DatasetFileMetaId"].empty()) {
      datasetFileMetaId = make_shared<string>(boost::any_cast<string>(m["DatasetFileMetaId"]));
    }
    if (m.find("FileCreateTime") != m.end() && !m["FileCreateTime"].empty()) {
      fileCreateTime = make_shared<string>(boost::any_cast<string>(m["FileCreateTime"]));
    }
    if (m.find("FileFingerPrint") != m.end() && !m["FileFingerPrint"].empty()) {
      fileFingerPrint = make_shared<string>(boost::any_cast<string>(m["FileFingerPrint"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileType") != m.end() && !m["FileType"].empty()) {
      fileType = make_shared<string>(boost::any_cast<string>(m["FileType"]));
    }
    if (m.find("FileUpdateTime") != m.end() && !m["FileUpdateTime"].empty()) {
      fileUpdateTime = make_shared<string>(boost::any_cast<string>(m["FileUpdateTime"]));
    }
    if (m.find("MetaAttributes") != m.end() && !m["MetaAttributes"].empty()) {
      metaAttributes = make_shared<string>(boost::any_cast<string>(m["MetaAttributes"]));
    }
    if (m.find("SemanticIndexJobId") != m.end() && !m["SemanticIndexJobId"].empty()) {
      semanticIndexJobId = make_shared<string>(boost::any_cast<string>(m["SemanticIndexJobId"]));
    }
    if (m.find("SemanticIndexUpdateTime") != m.end() && !m["SemanticIndexUpdateTime"].empty()) {
      semanticIndexUpdateTime = make_shared<string>(boost::any_cast<string>(m["SemanticIndexUpdateTime"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
  }


  virtual ~DatasetFileMetaConentUpdate() = default;
};
class DatasetFileMetaContentCreate : public Darabonba::Model {
public:
  shared_ptr<string> comment{};
  shared_ptr<string> contentType{};
  shared_ptr<long> dataSize{};
  shared_ptr<string> fileCreateTime{};
  shared_ptr<string> fileFingerPrint{};
  shared_ptr<string> fileName{};
  shared_ptr<string> fileType{};
  shared_ptr<string> fileUpdateTime{};
  shared_ptr<string> metaAttributes{};
  shared_ptr<string> tags{};
  shared_ptr<string> uri{};

  DatasetFileMetaContentCreate() {}

  explicit DatasetFileMetaContentCreate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (contentType) {
      res["ContentType"] = boost::any(*contentType);
    }
    if (dataSize) {
      res["DataSize"] = boost::any(*dataSize);
    }
    if (fileCreateTime) {
      res["FileCreateTime"] = boost::any(*fileCreateTime);
    }
    if (fileFingerPrint) {
      res["FileFingerPrint"] = boost::any(*fileFingerPrint);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileType) {
      res["FileType"] = boost::any(*fileType);
    }
    if (fileUpdateTime) {
      res["FileUpdateTime"] = boost::any(*fileUpdateTime);
    }
    if (metaAttributes) {
      res["MetaAttributes"] = boost::any(*metaAttributes);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (uri) {
      res["Uri"] = boost::any(*uri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("ContentType") != m.end() && !m["ContentType"].empty()) {
      contentType = make_shared<string>(boost::any_cast<string>(m["ContentType"]));
    }
    if (m.find("DataSize") != m.end() && !m["DataSize"].empty()) {
      dataSize = make_shared<long>(boost::any_cast<long>(m["DataSize"]));
    }
    if (m.find("FileCreateTime") != m.end() && !m["FileCreateTime"].empty()) {
      fileCreateTime = make_shared<string>(boost::any_cast<string>(m["FileCreateTime"]));
    }
    if (m.find("FileFingerPrint") != m.end() && !m["FileFingerPrint"].empty()) {
      fileFingerPrint = make_shared<string>(boost::any_cast<string>(m["FileFingerPrint"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileType") != m.end() && !m["FileType"].empty()) {
      fileType = make_shared<string>(boost::any_cast<string>(m["FileType"]));
    }
    if (m.find("FileUpdateTime") != m.end() && !m["FileUpdateTime"].empty()) {
      fileUpdateTime = make_shared<string>(boost::any_cast<string>(m["FileUpdateTime"]));
    }
    if (m.find("MetaAttributes") != m.end() && !m["MetaAttributes"].empty()) {
      metaAttributes = make_shared<string>(boost::any_cast<string>(m["MetaAttributes"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("Uri") != m.end() && !m["Uri"].empty()) {
      uri = make_shared<string>(boost::any_cast<string>(m["Uri"]));
    }
  }


  virtual ~DatasetFileMetaContentCreate() = default;
};
class DatasetFileMetaContentGet : public Darabonba::Model {
public:
  shared_ptr<string> comment{};
  shared_ptr<string> contentType{};
  shared_ptr<long> dataSize{};
  shared_ptr<string> datasetFileMetaId{};
  shared_ptr<string> fileCreateTime{};
  shared_ptr<string> fileDir{};
  shared_ptr<string> fileFingerPrint{};
  shared_ptr<string> fileName{};
  shared_ptr<string> fileType{};
  shared_ptr<string> fileUpdateTime{};
  shared_ptr<string> metaAttributes{};
  shared_ptr<string> semanticIndexJobId{};
  shared_ptr<string> semanticIndexUpdateTime{};
  shared_ptr<string> tagUpdateTime{};
  shared_ptr<string> tags{};
  shared_ptr<string> uri{};

  DatasetFileMetaContentGet() {}

  explicit DatasetFileMetaContentGet(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (contentType) {
      res["ContentType"] = boost::any(*contentType);
    }
    if (dataSize) {
      res["DataSize"] = boost::any(*dataSize);
    }
    if (datasetFileMetaId) {
      res["DatasetFileMetaId"] = boost::any(*datasetFileMetaId);
    }
    if (fileCreateTime) {
      res["FileCreateTime"] = boost::any(*fileCreateTime);
    }
    if (fileDir) {
      res["FileDir"] = boost::any(*fileDir);
    }
    if (fileFingerPrint) {
      res["FileFingerPrint"] = boost::any(*fileFingerPrint);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileType) {
      res["FileType"] = boost::any(*fileType);
    }
    if (fileUpdateTime) {
      res["FileUpdateTime"] = boost::any(*fileUpdateTime);
    }
    if (metaAttributes) {
      res["MetaAttributes"] = boost::any(*metaAttributes);
    }
    if (semanticIndexJobId) {
      res["SemanticIndexJobId"] = boost::any(*semanticIndexJobId);
    }
    if (semanticIndexUpdateTime) {
      res["SemanticIndexUpdateTime"] = boost::any(*semanticIndexUpdateTime);
    }
    if (tagUpdateTime) {
      res["TagUpdateTime"] = boost::any(*tagUpdateTime);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (uri) {
      res["Uri"] = boost::any(*uri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("ContentType") != m.end() && !m["ContentType"].empty()) {
      contentType = make_shared<string>(boost::any_cast<string>(m["ContentType"]));
    }
    if (m.find("DataSize") != m.end() && !m["DataSize"].empty()) {
      dataSize = make_shared<long>(boost::any_cast<long>(m["DataSize"]));
    }
    if (m.find("DatasetFileMetaId") != m.end() && !m["DatasetFileMetaId"].empty()) {
      datasetFileMetaId = make_shared<string>(boost::any_cast<string>(m["DatasetFileMetaId"]));
    }
    if (m.find("FileCreateTime") != m.end() && !m["FileCreateTime"].empty()) {
      fileCreateTime = make_shared<string>(boost::any_cast<string>(m["FileCreateTime"]));
    }
    if (m.find("FileDir") != m.end() && !m["FileDir"].empty()) {
      fileDir = make_shared<string>(boost::any_cast<string>(m["FileDir"]));
    }
    if (m.find("FileFingerPrint") != m.end() && !m["FileFingerPrint"].empty()) {
      fileFingerPrint = make_shared<string>(boost::any_cast<string>(m["FileFingerPrint"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileType") != m.end() && !m["FileType"].empty()) {
      fileType = make_shared<string>(boost::any_cast<string>(m["FileType"]));
    }
    if (m.find("FileUpdateTime") != m.end() && !m["FileUpdateTime"].empty()) {
      fileUpdateTime = make_shared<string>(boost::any_cast<string>(m["FileUpdateTime"]));
    }
    if (m.find("MetaAttributes") != m.end() && !m["MetaAttributes"].empty()) {
      metaAttributes = make_shared<string>(boost::any_cast<string>(m["MetaAttributes"]));
    }
    if (m.find("SemanticIndexJobId") != m.end() && !m["SemanticIndexJobId"].empty()) {
      semanticIndexJobId = make_shared<string>(boost::any_cast<string>(m["SemanticIndexJobId"]));
    }
    if (m.find("SemanticIndexUpdateTime") != m.end() && !m["SemanticIndexUpdateTime"].empty()) {
      semanticIndexUpdateTime = make_shared<string>(boost::any_cast<string>(m["SemanticIndexUpdateTime"]));
    }
    if (m.find("TagUpdateTime") != m.end() && !m["TagUpdateTime"].empty()) {
      tagUpdateTime = make_shared<string>(boost::any_cast<string>(m["TagUpdateTime"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("Uri") != m.end() && !m["Uri"].empty()) {
      uri = make_shared<string>(boost::any_cast<string>(m["Uri"]));
    }
  }


  virtual ~DatasetFileMetaContentGet() = default;
};
class DatasetFileMetaResponse : public Darabonba::Model {
public:
  shared_ptr<string> datasetFileMetaId{};
  shared_ptr<string> result{};
  shared_ptr<string> uri{};

  DatasetFileMetaResponse() {}

  explicit DatasetFileMetaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetFileMetaId) {
      res["DatasetFileMetaId"] = boost::any(*datasetFileMetaId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (uri) {
      res["Uri"] = boost::any(*uri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetFileMetaId") != m.end() && !m["DatasetFileMetaId"].empty()) {
      datasetFileMetaId = make_shared<string>(boost::any_cast<string>(m["DatasetFileMetaId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
    if (m.find("Uri") != m.end() && !m["Uri"].empty()) {
      uri = make_shared<string>(boost::any_cast<string>(m["Uri"]));
    }
  }


  virtual ~DatasetFileMetaResponse() = default;
};
class DatasetFileMetasStat : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<string> key{};

  DatasetFileMetasStat() {}

  explicit DatasetFileMetasStat(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
  }


  virtual ~DatasetFileMetasStat() = default;
};
class DatasetJob : public Darabonba::Model {
public:
  shared_ptr<long> completedFileCount{};
  shared_ptr<string> createTime{};
  shared_ptr<string> datasetJobId{};
  shared_ptr<string> datasetVersion{};
  shared_ptr<string> description{};
  shared_ptr<long> failedFileCount{};
  shared_ptr<string> finishTime{};
  shared_ptr<string> jobAction{};
  shared_ptr<string> jobMode{};
  shared_ptr<string> jobSpec{};
  shared_ptr<vector<string>> logs{};
  shared_ptr<string> status{};
  shared_ptr<long> totalFileCount{};
  shared_ptr<string> workspaceId{};

  DatasetJob() {}

  explicit DatasetJob(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (completedFileCount) {
      res["CompletedFileCount"] = boost::any(*completedFileCount);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (datasetJobId) {
      res["DatasetJobId"] = boost::any(*datasetJobId);
    }
    if (datasetVersion) {
      res["DatasetVersion"] = boost::any(*datasetVersion);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (failedFileCount) {
      res["FailedFileCount"] = boost::any(*failedFileCount);
    }
    if (finishTime) {
      res["FinishTime"] = boost::any(*finishTime);
    }
    if (jobAction) {
      res["JobAction"] = boost::any(*jobAction);
    }
    if (jobMode) {
      res["JobMode"] = boost::any(*jobMode);
    }
    if (jobSpec) {
      res["JobSpec"] = boost::any(*jobSpec);
    }
    if (logs) {
      res["Logs"] = boost::any(*logs);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (totalFileCount) {
      res["TotalFileCount"] = boost::any(*totalFileCount);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompletedFileCount") != m.end() && !m["CompletedFileCount"].empty()) {
      completedFileCount = make_shared<long>(boost::any_cast<long>(m["CompletedFileCount"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DatasetJobId") != m.end() && !m["DatasetJobId"].empty()) {
      datasetJobId = make_shared<string>(boost::any_cast<string>(m["DatasetJobId"]));
    }
    if (m.find("DatasetVersion") != m.end() && !m["DatasetVersion"].empty()) {
      datasetVersion = make_shared<string>(boost::any_cast<string>(m["DatasetVersion"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("FailedFileCount") != m.end() && !m["FailedFileCount"].empty()) {
      failedFileCount = make_shared<long>(boost::any_cast<long>(m["FailedFileCount"]));
    }
    if (m.find("FinishTime") != m.end() && !m["FinishTime"].empty()) {
      finishTime = make_shared<string>(boost::any_cast<string>(m["FinishTime"]));
    }
    if (m.find("JobAction") != m.end() && !m["JobAction"].empty()) {
      jobAction = make_shared<string>(boost::any_cast<string>(m["JobAction"]));
    }
    if (m.find("JobMode") != m.end() && !m["JobMode"].empty()) {
      jobMode = make_shared<string>(boost::any_cast<string>(m["JobMode"]));
    }
    if (m.find("JobSpec") != m.end() && !m["JobSpec"].empty()) {
      jobSpec = make_shared<string>(boost::any_cast<string>(m["JobSpec"]));
    }
    if (m.find("Logs") != m.end() && !m["Logs"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Logs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Logs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      logs = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TotalFileCount") != m.end() && !m["TotalFileCount"].empty()) {
      totalFileCount = make_shared<long>(boost::any_cast<long>(m["TotalFileCount"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~DatasetJob() = default;
};
class DatasetJobConfig : public Darabonba::Model {
public:
  shared_ptr<string> config{};
  shared_ptr<string> configType{};
  shared_ptr<string> createTime{};
  shared_ptr<string> datasetJobConfigId{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> workspaceId{};

  DatasetJobConfig() {}

  explicit DatasetJobConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (configType) {
      res["ConfigType"] = boost::any(*configType);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (datasetJobConfigId) {
      res["DatasetJobConfigId"] = boost::any(*datasetJobConfigId);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("ConfigType") != m.end() && !m["ConfigType"].empty()) {
      configType = make_shared<string>(boost::any_cast<string>(m["ConfigType"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DatasetJobConfigId") != m.end() && !m["DatasetJobConfigId"].empty()) {
      datasetJobConfigId = make_shared<string>(boost::any_cast<string>(m["DatasetJobConfigId"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~DatasetJobConfig() = default;
};
class DatasetLabel : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DatasetLabel() {}

  explicit DatasetLabel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DatasetLabel() = default;
};
class ExperimentLabel : public Darabonba::Model {
public:
  shared_ptr<string> experimentId{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ExperimentLabel() {}

  explicit ExperimentLabel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (experimentId) {
      res["ExperimentId"] = boost::any(*experimentId);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExperimentId") != m.end() && !m["ExperimentId"].empty()) {
      experimentId = make_shared<string>(boost::any_cast<string>(m["ExperimentId"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ExperimentLabel() = default;
};
class RunLabel : public Darabonba::Model {
public:
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> key{};
  shared_ptr<string> runId{};
  shared_ptr<string> value{};

  RunLabel() {}

  explicit RunLabel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (runId) {
      res["RunId"] = boost::any(*runId);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("RunId") != m.end() && !m["RunId"].empty()) {
      runId = make_shared<string>(boost::any_cast<string>(m["RunId"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~RunLabel() = default;
};
class RunMetric : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<long> step{};
  shared_ptr<long> timestamp{};
  shared_ptr<double> value{};

  RunMetric() {}

  explicit RunMetric(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (step) {
      res["Step"] = boost::any(*step);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
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
    if (m.find("Step") != m.end() && !m["Step"].empty()) {
      step = make_shared<long>(boost::any_cast<long>(m["Step"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<double>(boost::any_cast<double>(m["Value"]));
    }
  }


  virtual ~RunMetric() = default;
};
class RunParam : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  RunParam() {}

  explicit RunParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RunParam() = default;
};
class Run : public Darabonba::Model {
public:
  shared_ptr<string> accessibility{};
  shared_ptr<string> experimentId{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<vector<RunLabel>> labels{};
  shared_ptr<vector<RunMetric>> metrics{};
  shared_ptr<string> name{};
  shared_ptr<string> ownerId{};
  shared_ptr<vector<RunParam>> params{};
  shared_ptr<string> requestId{};
  shared_ptr<string> runId{};
  shared_ptr<string> sourceId{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> userId{};
  shared_ptr<string> workspaceId{};

  Run() {}

  explicit Run(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessibility) {
      res["Accessibility"] = boost::any(*accessibility);
    }
    if (experimentId) {
      res["ExperimentId"] = boost::any(*experimentId);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (metrics) {
      vector<boost::any> temp1;
      for(auto item1:*metrics){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Metrics"] = boost::any(temp1);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (params) {
      vector<boost::any> temp1;
      for(auto item1:*params){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Params"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (runId) {
      res["RunId"] = boost::any(*runId);
    }
    if (sourceId) {
      res["SourceId"] = boost::any(*sourceId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accessibility") != m.end() && !m["Accessibility"].empty()) {
      accessibility = make_shared<string>(boost::any_cast<string>(m["Accessibility"]));
    }
    if (m.find("ExperimentId") != m.end() && !m["ExperimentId"].empty()) {
      experimentId = make_shared<string>(boost::any_cast<string>(m["ExperimentId"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<RunLabel> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunLabel model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<RunLabel>>(expect1);
      }
    }
    if (m.find("Metrics") != m.end() && !m["Metrics"].empty()) {
      if (typeid(vector<boost::any>) == m["Metrics"].type()) {
        vector<RunMetric> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Metrics"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunMetric model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        metrics = make_shared<vector<RunMetric>>(expect1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("Params") != m.end() && !m["Params"].empty()) {
      if (typeid(vector<boost::any>) == m["Params"].type()) {
        vector<RunParam> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Params"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunParam model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        params = make_shared<vector<RunParam>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RunId") != m.end() && !m["RunId"].empty()) {
      runId = make_shared<string>(boost::any_cast<string>(m["RunId"]));
    }
    if (m.find("SourceId") != m.end() && !m["SourceId"].empty()) {
      sourceId = make_shared<string>(boost::any_cast<string>(m["SourceId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~Run() = default;
};
class Experiment : public Darabonba::Model {
public:
  shared_ptr<string> accessibility{};
  shared_ptr<string> artifactUri{};
  shared_ptr<string> experimentId{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<vector<ExperimentLabel>> labels{};
  shared_ptr<Run> latestRun{};
  shared_ptr<string> name{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> tensorboardLogUri{};
  shared_ptr<string> userId{};
  shared_ptr<string> workspaceId{};

  Experiment() {}

  explicit Experiment(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessibility) {
      res["Accessibility"] = boost::any(*accessibility);
    }
    if (artifactUri) {
      res["ArtifactUri"] = boost::any(*artifactUri);
    }
    if (experimentId) {
      res["ExperimentId"] = boost::any(*experimentId);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (latestRun) {
      res["LatestRun"] = latestRun ? boost::any(latestRun->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tensorboardLogUri) {
      res["TensorboardLogUri"] = boost::any(*tensorboardLogUri);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accessibility") != m.end() && !m["Accessibility"].empty()) {
      accessibility = make_shared<string>(boost::any_cast<string>(m["Accessibility"]));
    }
    if (m.find("ArtifactUri") != m.end() && !m["ArtifactUri"].empty()) {
      artifactUri = make_shared<string>(boost::any_cast<string>(m["ArtifactUri"]));
    }
    if (m.find("ExperimentId") != m.end() && !m["ExperimentId"].empty()) {
      experimentId = make_shared<string>(boost::any_cast<string>(m["ExperimentId"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<ExperimentLabel> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ExperimentLabel model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<ExperimentLabel>>(expect1);
      }
    }
    if (m.find("LatestRun") != m.end() && !m["LatestRun"].empty()) {
      if (typeid(map<string, boost::any>) == m["LatestRun"].type()) {
        Run model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LatestRun"]));
        latestRun = make_shared<Run>(model1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TensorboardLogUri") != m.end() && !m["TensorboardLogUri"].empty()) {
      tensorboardLogUri = make_shared<string>(boost::any_cast<string>(m["TensorboardLogUri"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~Experiment() = default;
};
class LabelInfo : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  LabelInfo() {}

  explicit LabelInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~LabelInfo() = default;
};
class LineageEntity : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> attributes{};
  shared_ptr<string> entityType{};
  shared_ptr<string> name{};
  shared_ptr<string> qualifiedName{};

  LineageEntity() {}

  explicit LineageEntity(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attributes) {
      res["Attributes"] = boost::any(*attributes);
    }
    if (entityType) {
      res["EntityType"] = boost::any(*entityType);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (qualifiedName) {
      res["QualifiedName"] = boost::any(*qualifiedName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Attributes") != m.end() && !m["Attributes"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Attributes"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      attributes = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("EntityType") != m.end() && !m["EntityType"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["EntityType"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("QualifiedName") != m.end() && !m["QualifiedName"].empty()) {
      qualifiedName = make_shared<string>(boost::any_cast<string>(m["QualifiedName"]));
    }
  }


  virtual ~LineageEntity() = default;
};
class LineageRelation : public Darabonba::Model {
public:
  shared_ptr<string> destEntityQualifiedName{};
  shared_ptr<string> relationshipGuid{};
  shared_ptr<string> srcEntityQualifiedName{};

  LineageRelation() {}

  explicit LineageRelation(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (destEntityQualifiedName) {
      res["DestEntityQualifiedName"] = boost::any(*destEntityQualifiedName);
    }
    if (relationshipGuid) {
      res["RelationshipGuid"] = boost::any(*relationshipGuid);
    }
    if (srcEntityQualifiedName) {
      res["SrcEntityQualifiedName"] = boost::any(*srcEntityQualifiedName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DestEntityQualifiedName") != m.end() && !m["DestEntityQualifiedName"].empty()) {
      destEntityQualifiedName = make_shared<string>(boost::any_cast<string>(m["DestEntityQualifiedName"]));
    }
    if (m.find("RelationshipGuid") != m.end() && !m["RelationshipGuid"].empty()) {
      relationshipGuid = make_shared<string>(boost::any_cast<string>(m["RelationshipGuid"]));
    }
    if (m.find("SrcEntityQualifiedName") != m.end() && !m["SrcEntityQualifiedName"].empty()) {
      srcEntityQualifiedName = make_shared<string>(boost::any_cast<string>(m["SrcEntityQualifiedName"]));
    }
  }


  virtual ~LineageRelation() = default;
};
class ModelVersion : public Darabonba::Model {
public:
  shared_ptr<string> approvalStatus{};
  shared_ptr<map<string, boost::any>> compressionSpec{};
  shared_ptr<map<string, boost::any>> evaluationSpec{};
  shared_ptr<map<string, boost::any>> extraInfo{};
  shared_ptr<string> formatType{};
  shared_ptr<string> frameworkType{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<map<string, boost::any>> inferenceSpec{};
  shared_ptr<vector<Label>> labels{};
  shared_ptr<map<string, boost::any>> metrics{};
  shared_ptr<string> options{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> sourceId{};
  shared_ptr<string> sourceType{};
  shared_ptr<map<string, boost::any>> trainingSpec{};
  shared_ptr<string> uri{};
  shared_ptr<string> userId{};
  shared_ptr<string> versionDescription{};
  shared_ptr<string> versionName{};

  ModelVersion() {}

  explicit ModelVersion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (approvalStatus) {
      res["ApprovalStatus"] = boost::any(*approvalStatus);
    }
    if (compressionSpec) {
      res["CompressionSpec"] = boost::any(*compressionSpec);
    }
    if (evaluationSpec) {
      res["EvaluationSpec"] = boost::any(*evaluationSpec);
    }
    if (extraInfo) {
      res["ExtraInfo"] = boost::any(*extraInfo);
    }
    if (formatType) {
      res["FormatType"] = boost::any(*formatType);
    }
    if (frameworkType) {
      res["FrameworkType"] = boost::any(*frameworkType);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (inferenceSpec) {
      res["InferenceSpec"] = boost::any(*inferenceSpec);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (metrics) {
      res["Metrics"] = boost::any(*metrics);
    }
    if (options) {
      res["Options"] = boost::any(*options);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (sourceId) {
      res["SourceId"] = boost::any(*sourceId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (trainingSpec) {
      res["TrainingSpec"] = boost::any(*trainingSpec);
    }
    if (uri) {
      res["Uri"] = boost::any(*uri);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (versionDescription) {
      res["VersionDescription"] = boost::any(*versionDescription);
    }
    if (versionName) {
      res["VersionName"] = boost::any(*versionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApprovalStatus") != m.end() && !m["ApprovalStatus"].empty()) {
      approvalStatus = make_shared<string>(boost::any_cast<string>(m["ApprovalStatus"]));
    }
    if (m.find("CompressionSpec") != m.end() && !m["CompressionSpec"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["CompressionSpec"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      compressionSpec = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("EvaluationSpec") != m.end() && !m["EvaluationSpec"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["EvaluationSpec"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      evaluationSpec = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("ExtraInfo") != m.end() && !m["ExtraInfo"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ExtraInfo"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extraInfo = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("FormatType") != m.end() && !m["FormatType"].empty()) {
      formatType = make_shared<string>(boost::any_cast<string>(m["FormatType"]));
    }
    if (m.find("FrameworkType") != m.end() && !m["FrameworkType"].empty()) {
      frameworkType = make_shared<string>(boost::any_cast<string>(m["FrameworkType"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("InferenceSpec") != m.end() && !m["InferenceSpec"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["InferenceSpec"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      inferenceSpec = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<Label> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Label model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<Label>>(expect1);
      }
    }
    if (m.find("Metrics") != m.end() && !m["Metrics"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Metrics"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      metrics = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      options = make_shared<string>(boost::any_cast<string>(m["Options"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("SourceId") != m.end() && !m["SourceId"].empty()) {
      sourceId = make_shared<string>(boost::any_cast<string>(m["SourceId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("TrainingSpec") != m.end() && !m["TrainingSpec"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["TrainingSpec"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      trainingSpec = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Uri") != m.end() && !m["Uri"].empty()) {
      uri = make_shared<string>(boost::any_cast<string>(m["Uri"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("VersionDescription") != m.end() && !m["VersionDescription"].empty()) {
      versionDescription = make_shared<string>(boost::any_cast<string>(m["VersionDescription"]));
    }
    if (m.find("VersionName") != m.end() && !m["VersionName"].empty()) {
      versionName = make_shared<string>(boost::any_cast<string>(m["VersionName"]));
    }
  }


  virtual ~ModelVersion() = default;
};
class Model : public Darabonba::Model {
public:
  shared_ptr<string> accessibility{};
  shared_ptr<string> domain{};
  shared_ptr<map<string, boost::any>> extraInfo{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<vector<Label>> labels{};
  shared_ptr<ModelVersion> latestVersion{};
  shared_ptr<string> modelDescription{};
  shared_ptr<string> modelDoc{};
  shared_ptr<string> modelId{};
  shared_ptr<string> modelName{};
  shared_ptr<string> modelType{};
  shared_ptr<long> orderNumber{};
  shared_ptr<string> origin{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> provider{};
  shared_ptr<vector<Label>> tags{};
  shared_ptr<string> task{};
  shared_ptr<string> userId{};
  shared_ptr<string> workspaceId{};

  Model() {}

  explicit Model(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessibility) {
      res["Accessibility"] = boost::any(*accessibility);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (extraInfo) {
      res["ExtraInfo"] = boost::any(*extraInfo);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (latestVersion) {
      res["LatestVersion"] = latestVersion ? boost::any(latestVersion->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (modelDescription) {
      res["ModelDescription"] = boost::any(*modelDescription);
    }
    if (modelDoc) {
      res["ModelDoc"] = boost::any(*modelDoc);
    }
    if (modelId) {
      res["ModelId"] = boost::any(*modelId);
    }
    if (modelName) {
      res["ModelName"] = boost::any(*modelName);
    }
    if (modelType) {
      res["ModelType"] = boost::any(*modelType);
    }
    if (orderNumber) {
      res["OrderNumber"] = boost::any(*orderNumber);
    }
    if (origin) {
      res["Origin"] = boost::any(*origin);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (provider) {
      res["Provider"] = boost::any(*provider);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (task) {
      res["Task"] = boost::any(*task);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accessibility") != m.end() && !m["Accessibility"].empty()) {
      accessibility = make_shared<string>(boost::any_cast<string>(m["Accessibility"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("ExtraInfo") != m.end() && !m["ExtraInfo"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ExtraInfo"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extraInfo = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<Label> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Label model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<Label>>(expect1);
      }
    }
    if (m.find("LatestVersion") != m.end() && !m["LatestVersion"].empty()) {
      if (typeid(map<string, boost::any>) == m["LatestVersion"].type()) {
        ModelVersion model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LatestVersion"]));
        latestVersion = make_shared<ModelVersion>(model1);
      }
    }
    if (m.find("ModelDescription") != m.end() && !m["ModelDescription"].empty()) {
      modelDescription = make_shared<string>(boost::any_cast<string>(m["ModelDescription"]));
    }
    if (m.find("ModelDoc") != m.end() && !m["ModelDoc"].empty()) {
      modelDoc = make_shared<string>(boost::any_cast<string>(m["ModelDoc"]));
    }
    if (m.find("ModelId") != m.end() && !m["ModelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["ModelId"]));
    }
    if (m.find("ModelName") != m.end() && !m["ModelName"].empty()) {
      modelName = make_shared<string>(boost::any_cast<string>(m["ModelName"]));
    }
    if (m.find("ModelType") != m.end() && !m["ModelType"].empty()) {
      modelType = make_shared<string>(boost::any_cast<string>(m["ModelType"]));
    }
    if (m.find("OrderNumber") != m.end() && !m["OrderNumber"].empty()) {
      orderNumber = make_shared<long>(boost::any_cast<long>(m["OrderNumber"]));
    }
    if (m.find("Origin") != m.end() && !m["Origin"].empty()) {
      origin = make_shared<string>(boost::any_cast<string>(m["Origin"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("Provider") != m.end() && !m["Provider"].empty()) {
      provider = make_shared<string>(boost::any_cast<string>(m["Provider"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<Label> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Label model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<Label>>(expect1);
      }
    }
    if (m.find("Task") != m.end() && !m["Task"].empty()) {
      task = make_shared<string>(boost::any_cast<string>(m["Task"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~Model() = default;
};
class Prompt : public Darabonba::Model {
public:
  shared_ptr<string> accessibility{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> frameworkContent{};
  shared_ptr<string> frameworkType{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> promptId{};
  shared_ptr<string> promptName{};

  Prompt() {}

  explicit Prompt(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessibility) {
      res["Accessibility"] = boost::any(*accessibility);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (frameworkContent) {
      res["FrameworkContent"] = boost::any(*frameworkContent);
    }
    if (frameworkType) {
      res["FrameworkType"] = boost::any(*frameworkType);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (promptId) {
      res["PromptId"] = boost::any(*promptId);
    }
    if (promptName) {
      res["PromptName"] = boost::any(*promptName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accessibility") != m.end() && !m["Accessibility"].empty()) {
      accessibility = make_shared<string>(boost::any_cast<string>(m["Accessibility"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("FrameworkContent") != m.end() && !m["FrameworkContent"].empty()) {
      frameworkContent = make_shared<string>(boost::any_cast<string>(m["FrameworkContent"]));
    }
    if (m.find("FrameworkType") != m.end() && !m["FrameworkType"].empty()) {
      frameworkType = make_shared<string>(boost::any_cast<string>(m["FrameworkType"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("PromptId") != m.end() && !m["PromptId"].empty()) {
      promptId = make_shared<string>(boost::any_cast<string>(m["PromptId"]));
    }
    if (m.find("PromptName") != m.end() && !m["PromptName"].empty()) {
      promptName = make_shared<string>(boost::any_cast<string>(m["PromptName"]));
    }
  }


  virtual ~Prompt() = default;
};
class Relation : public Darabonba::Model {
public:
  shared_ptr<string> errMsg{};
  shared_ptr<LineageRelation> lineageRelation{};
  shared_ptr<bool> result{};

  Relation() {}

  explicit Relation(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errMsg) {
      res["ErrMsg"] = boost::any(*errMsg);
    }
    if (lineageRelation) {
      res["LineageRelation"] = lineageRelation ? boost::any(lineageRelation->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrMsg") != m.end() && !m["ErrMsg"].empty()) {
      errMsg = make_shared<string>(boost::any_cast<string>(m["ErrMsg"]));
    }
    if (m.find("LineageRelation") != m.end() && !m["LineageRelation"].empty()) {
      if (typeid(map<string, boost::any>) == m["LineageRelation"].type()) {
        LineageRelation model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LineageRelation"]));
        lineageRelation = make_shared<LineageRelation>(model1);
      }
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
  }


  virtual ~Relation() = default;
};
class Relationship : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> attributes{};
  shared_ptr<string> dataChannel{};
  shared_ptr<string> relationshipGuid{};
  shared_ptr<string> relationshipType{};

  Relationship() {}

  explicit Relationship(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attributes) {
      res["Attributes"] = boost::any(*attributes);
    }
    if (dataChannel) {
      res["DataChannel"] = boost::any(*dataChannel);
    }
    if (relationshipGuid) {
      res["RelationshipGuid"] = boost::any(*relationshipGuid);
    }
    if (relationshipType) {
      res["RelationshipType"] = boost::any(*relationshipType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Attributes") != m.end() && !m["Attributes"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Attributes"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      attributes = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("DataChannel") != m.end() && !m["DataChannel"].empty()) {
      dataChannel = make_shared<string>(boost::any_cast<string>(m["DataChannel"]));
    }
    if (m.find("RelationshipGuid") != m.end() && !m["RelationshipGuid"].empty()) {
      relationshipGuid = make_shared<string>(boost::any_cast<string>(m["RelationshipGuid"]));
    }
    if (m.find("RelationshipType") != m.end() && !m["RelationshipType"].empty()) {
      relationshipType = make_shared<string>(boost::any_cast<string>(m["RelationshipType"]));
    }
  }


  virtual ~Relationship() = default;
};
class Trial : public Darabonba::Model {
public:
  shared_ptr<string> accessibility{};
  shared_ptr<string> experimentId{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<vector<map<string, boost::any>>> labels{};
  shared_ptr<string> name{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> sourceId{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> trialId{};
  shared_ptr<string> userId{};
  shared_ptr<string> workspaceId{};

  Trial() {}

  explicit Trial(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessibility) {
      res["Accessibility"] = boost::any(*accessibility);
    }
    if (experimentId) {
      res["ExperimentId"] = boost::any(*experimentId);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (sourceId) {
      res["SourceId"] = boost::any(*sourceId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (trialId) {
      res["TrialId"] = boost::any(*trialId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accessibility") != m.end() && !m["Accessibility"].empty()) {
      accessibility = make_shared<string>(boost::any_cast<string>(m["Accessibility"]));
    }
    if (m.find("ExperimentId") != m.end() && !m["ExperimentId"].empty()) {
      experimentId = make_shared<string>(boost::any_cast<string>(m["ExperimentId"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Labels"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      labels = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("SourceId") != m.end() && !m["SourceId"].empty()) {
      sourceId = make_shared<string>(boost::any_cast<string>(m["SourceId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("TrialId") != m.end() && !m["TrialId"].empty()) {
      trialId = make_shared<string>(boost::any_cast<string>(m["TrialId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~Trial() = default;
};
class TrialLabel : public Darabonba::Model {
public:
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> key{};
  shared_ptr<string> trialId{};
  shared_ptr<string> value{};

  TrialLabel() {}

  explicit TrialLabel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (trialId) {
      res["TrialId"] = boost::any(*trialId);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("TrialId") != m.end() && !m["TrialId"].empty()) {
      trialId = make_shared<string>(boost::any_cast<string>(m["TrialId"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~TrialLabel() = default;
};
class AcceptDataworksEventRequest : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> data{};
  shared_ptr<string> messageId{};

  AcceptDataworksEventRequest() {}

  explicit AcceptDataworksEventRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (messageId) {
      res["MessageId"] = boost::any(*messageId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Data"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      data = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("MessageId") != m.end() && !m["MessageId"].empty()) {
      messageId = make_shared<string>(boost::any_cast<string>(m["MessageId"]));
    }
  }


  virtual ~AcceptDataworksEventRequest() = default;
};
class AcceptDataworksEventResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AcceptDataworksEventResponseBody() {}

  explicit AcceptDataworksEventResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~AcceptDataworksEventResponseBody() = default;
};
class AcceptDataworksEventResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AcceptDataworksEventResponseBody> body{};

  AcceptDataworksEventResponse() {}

  explicit AcceptDataworksEventResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AcceptDataworksEventResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AcceptDataworksEventResponseBody>(model1);
      }
    }
  }


  virtual ~AcceptDataworksEventResponse() = default;
};
class AddImageRequestLabels : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  AddImageRequestLabels() {}

  explicit AddImageRequestLabels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AddImageRequestLabels() = default;
};
class AddImageRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessibility{};
  shared_ptr<string> description{};
  shared_ptr<string> imageId{};
  shared_ptr<string> imageUri{};
  shared_ptr<vector<AddImageRequestLabels>> labels{};
  shared_ptr<string> name{};
  shared_ptr<long> size{};
  shared_ptr<string> sourceId{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> workspaceId{};

  AddImageRequest() {}

  explicit AddImageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessibility) {
      res["Accessibility"] = boost::any(*accessibility);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (imageUri) {
      res["ImageUri"] = boost::any(*imageUri);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (sourceId) {
      res["SourceId"] = boost::any(*sourceId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accessibility") != m.end() && !m["Accessibility"].empty()) {
      accessibility = make_shared<string>(boost::any_cast<string>(m["Accessibility"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("ImageUri") != m.end() && !m["ImageUri"].empty()) {
      imageUri = make_shared<string>(boost::any_cast<string>(m["ImageUri"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<AddImageRequestLabels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AddImageRequestLabels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<AddImageRequestLabels>>(expect1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("SourceId") != m.end() && !m["SourceId"].empty()) {
      sourceId = make_shared<string>(boost::any_cast<string>(m["SourceId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~AddImageRequest() = default;
};
class AddImageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> imageId{};
  shared_ptr<string> requestId{};

  AddImageResponseBody() {}

  explicit AddImageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AddImageResponseBody() = default;
};
class AddImageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddImageResponseBody> body{};

  AddImageResponse() {}

  explicit AddImageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddImageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddImageResponseBody>(model1);
      }
    }
  }


  virtual ~AddImageResponse() = default;
};
class AddImageLabelsRequestLabels : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  AddImageLabelsRequestLabels() {}

  explicit AddImageLabelsRequestLabels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AddImageLabelsRequestLabels() = default;
};
class AddImageLabelsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<AddImageLabelsRequestLabels>> labels{};

  AddImageLabelsRequest() {}

  explicit AddImageLabelsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<AddImageLabelsRequestLabels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AddImageLabelsRequestLabels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<AddImageLabelsRequestLabels>>(expect1);
      }
    }
  }


  virtual ~AddImageLabelsRequest() = default;
};
class AddImageLabelsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AddImageLabelsResponseBody() {}

  explicit AddImageLabelsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AddImageLabelsResponseBody() = default;
};
class AddImageLabelsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddImageLabelsResponseBody> body{};

  AddImageLabelsResponse() {}

  explicit AddImageLabelsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddImageLabelsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddImageLabelsResponseBody>(model1);
      }
    }
  }


  virtual ~AddImageLabelsResponse() = default;
};
class AddMemberRoleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AddMemberRoleResponseBody() {}

  explicit AddMemberRoleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AddMemberRoleResponseBody() = default;
};
class AddMemberRoleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddMemberRoleResponseBody> body{};

  AddMemberRoleResponse() {}

  explicit AddMemberRoleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddMemberRoleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddMemberRoleResponseBody>(model1);
      }
    }
  }


  virtual ~AddMemberRoleResponse() = default;
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
  shared_ptr<string> requestId{};

  ChangeResourceGroupResponseBody() {}

  explicit ChangeResourceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
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
class CreateCodeSourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessibility{};
  shared_ptr<string> codeBranch{};
  shared_ptr<string> codeCommit{};
  shared_ptr<string> codeRepo{};
  shared_ptr<string> codeRepoAccessToken{};
  shared_ptr<string> codeRepoUserName{};
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<string> mountPath{};
  shared_ptr<string> workspaceId{};

  CreateCodeSourceRequest() {}

  explicit CreateCodeSourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessibility) {
      res["Accessibility"] = boost::any(*accessibility);
    }
    if (codeBranch) {
      res["CodeBranch"] = boost::any(*codeBranch);
    }
    if (codeCommit) {
      res["CodeCommit"] = boost::any(*codeCommit);
    }
    if (codeRepo) {
      res["CodeRepo"] = boost::any(*codeRepo);
    }
    if (codeRepoAccessToken) {
      res["CodeRepoAccessToken"] = boost::any(*codeRepoAccessToken);
    }
    if (codeRepoUserName) {
      res["CodeRepoUserName"] = boost::any(*codeRepoUserName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (mountPath) {
      res["MountPath"] = boost::any(*mountPath);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accessibility") != m.end() && !m["Accessibility"].empty()) {
      accessibility = make_shared<string>(boost::any_cast<string>(m["Accessibility"]));
    }
    if (m.find("CodeBranch") != m.end() && !m["CodeBranch"].empty()) {
      codeBranch = make_shared<string>(boost::any_cast<string>(m["CodeBranch"]));
    }
    if (m.find("CodeCommit") != m.end() && !m["CodeCommit"].empty()) {
      codeCommit = make_shared<string>(boost::any_cast<string>(m["CodeCommit"]));
    }
    if (m.find("CodeRepo") != m.end() && !m["CodeRepo"].empty()) {
      codeRepo = make_shared<string>(boost::any_cast<string>(m["CodeRepo"]));
    }
    if (m.find("CodeRepoAccessToken") != m.end() && !m["CodeRepoAccessToken"].empty()) {
      codeRepoAccessToken = make_shared<string>(boost::any_cast<string>(m["CodeRepoAccessToken"]));
    }
    if (m.find("CodeRepoUserName") != m.end() && !m["CodeRepoUserName"].empty()) {
      codeRepoUserName = make_shared<string>(boost::any_cast<string>(m["CodeRepoUserName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("MountPath") != m.end() && !m["MountPath"].empty()) {
      mountPath = make_shared<string>(boost::any_cast<string>(m["MountPath"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~CreateCodeSourceRequest() = default;
};
class CreateCodeSourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> codeSourceId{};
  shared_ptr<string> requestId{};

  CreateCodeSourceResponseBody() {}

  explicit CreateCodeSourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (codeSourceId) {
      res["CodeSourceId"] = boost::any(*codeSourceId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CodeSourceId") != m.end() && !m["CodeSourceId"].empty()) {
      codeSourceId = make_shared<string>(boost::any_cast<string>(m["CodeSourceId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateCodeSourceResponseBody() = default;
};
class CreateCodeSourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateCodeSourceResponseBody> body{};

  CreateCodeSourceResponse() {}

  explicit CreateCodeSourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateCodeSourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateCodeSourceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateCodeSourceResponse() = default;
};
class CreateConnectionRequestModels : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> model{};
  shared_ptr<string> modelType{};
  shared_ptr<bool> toolCall{};

  CreateConnectionRequestModels() {}

  explicit CreateConnectionRequestModels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (model) {
      res["Model"] = boost::any(*model);
    }
    if (modelType) {
      res["ModelType"] = boost::any(*modelType);
    }
    if (toolCall) {
      res["ToolCall"] = boost::any(*toolCall);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      model = make_shared<string>(boost::any_cast<string>(m["Model"]));
    }
    if (m.find("ModelType") != m.end() && !m["ModelType"].empty()) {
      modelType = make_shared<string>(boost::any_cast<string>(m["ModelType"]));
    }
    if (m.find("ToolCall") != m.end() && !m["ToolCall"].empty()) {
      toolCall = make_shared<bool>(boost::any_cast<bool>(m["ToolCall"]));
    }
  }


  virtual ~CreateConnectionRequestModels() = default;
};
class CreateConnectionRequestResourceMeta : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};

  CreateConnectionRequestResourceMeta() {}

  explicit CreateConnectionRequestResourceMeta(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
  }


  virtual ~CreateConnectionRequestResourceMeta() = default;
};
class CreateConnectionRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessibility{};
  shared_ptr<map<string, string>> configs{};
  shared_ptr<string> connectionName{};
  shared_ptr<string> connectionType{};
  shared_ptr<string> description{};
  shared_ptr<vector<CreateConnectionRequestModels>> models{};
  shared_ptr<CreateConnectionRequestResourceMeta> resourceMeta{};
  shared_ptr<map<string, string>> secrets{};
  shared_ptr<string> workspaceId{};

  CreateConnectionRequest() {}

  explicit CreateConnectionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessibility) {
      res["Accessibility"] = boost::any(*accessibility);
    }
    if (configs) {
      res["Configs"] = boost::any(*configs);
    }
    if (connectionName) {
      res["ConnectionName"] = boost::any(*connectionName);
    }
    if (connectionType) {
      res["ConnectionType"] = boost::any(*connectionType);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (models) {
      vector<boost::any> temp1;
      for(auto item1:*models){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Models"] = boost::any(temp1);
    }
    if (resourceMeta) {
      res["ResourceMeta"] = resourceMeta ? boost::any(resourceMeta->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (secrets) {
      res["Secrets"] = boost::any(*secrets);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accessibility") != m.end() && !m["Accessibility"].empty()) {
      accessibility = make_shared<string>(boost::any_cast<string>(m["Accessibility"]));
    }
    if (m.find("Configs") != m.end() && !m["Configs"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Configs"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      configs = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("ConnectionName") != m.end() && !m["ConnectionName"].empty()) {
      connectionName = make_shared<string>(boost::any_cast<string>(m["ConnectionName"]));
    }
    if (m.find("ConnectionType") != m.end() && !m["ConnectionType"].empty()) {
      connectionType = make_shared<string>(boost::any_cast<string>(m["ConnectionType"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Models") != m.end() && !m["Models"].empty()) {
      if (typeid(vector<boost::any>) == m["Models"].type()) {
        vector<CreateConnectionRequestModels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Models"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateConnectionRequestModels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        models = make_shared<vector<CreateConnectionRequestModels>>(expect1);
      }
    }
    if (m.find("ResourceMeta") != m.end() && !m["ResourceMeta"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourceMeta"].type()) {
        CreateConnectionRequestResourceMeta model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceMeta"]));
        resourceMeta = make_shared<CreateConnectionRequestResourceMeta>(model1);
      }
    }
    if (m.find("Secrets") != m.end() && !m["Secrets"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Secrets"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      secrets = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~CreateConnectionRequest() = default;
};
class CreateConnectionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> connectionId{};
  shared_ptr<string> requestId{};

  CreateConnectionResponseBody() {}

  explicit CreateConnectionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionId) {
      res["ConnectionId"] = boost::any(*connectionId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectionId") != m.end() && !m["ConnectionId"].empty()) {
      connectionId = make_shared<string>(boost::any_cast<string>(m["ConnectionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateConnectionResponseBody() = default;
};
class CreateConnectionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateConnectionResponseBody> body{};

  CreateConnectionResponse() {}

  explicit CreateConnectionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateConnectionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateConnectionResponseBody>(model1);
      }
    }
  }


  virtual ~CreateConnectionResponse() = default;
};
class CreateDatasetRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessibility{};
  shared_ptr<long> dataCount{};
  shared_ptr<long> dataSize{};
  shared_ptr<string> dataSourceType{};
  shared_ptr<string> dataType{};
  shared_ptr<string> description{};
  shared_ptr<string> importInfo{};
  shared_ptr<vector<Label>> labels{};
  shared_ptr<vector<string>> mountAccessReadWriteRoleIdList{};
  shared_ptr<string> name{};
  shared_ptr<string> options{};
  shared_ptr<string> property{};
  shared_ptr<string> provider{};
  shared_ptr<string> providerType{};
  shared_ptr<string> sourceDatasetId{};
  shared_ptr<string> sourceDatasetVersion{};
  shared_ptr<string> sourceId{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> uri{};
  shared_ptr<string> userId{};
  shared_ptr<string> versionDescription{};
  shared_ptr<vector<Label>> versionLabels{};
  shared_ptr<string> workspaceId{};

  CreateDatasetRequest() {}

  explicit CreateDatasetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessibility) {
      res["Accessibility"] = boost::any(*accessibility);
    }
    if (dataCount) {
      res["DataCount"] = boost::any(*dataCount);
    }
    if (dataSize) {
      res["DataSize"] = boost::any(*dataSize);
    }
    if (dataSourceType) {
      res["DataSourceType"] = boost::any(*dataSourceType);
    }
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (importInfo) {
      res["ImportInfo"] = boost::any(*importInfo);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (mountAccessReadWriteRoleIdList) {
      res["MountAccessReadWriteRoleIdList"] = boost::any(*mountAccessReadWriteRoleIdList);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (options) {
      res["Options"] = boost::any(*options);
    }
    if (property) {
      res["Property"] = boost::any(*property);
    }
    if (provider) {
      res["Provider"] = boost::any(*provider);
    }
    if (providerType) {
      res["ProviderType"] = boost::any(*providerType);
    }
    if (sourceDatasetId) {
      res["SourceDatasetId"] = boost::any(*sourceDatasetId);
    }
    if (sourceDatasetVersion) {
      res["SourceDatasetVersion"] = boost::any(*sourceDatasetVersion);
    }
    if (sourceId) {
      res["SourceId"] = boost::any(*sourceId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (uri) {
      res["Uri"] = boost::any(*uri);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (versionDescription) {
      res["VersionDescription"] = boost::any(*versionDescription);
    }
    if (versionLabels) {
      vector<boost::any> temp1;
      for(auto item1:*versionLabels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VersionLabels"] = boost::any(temp1);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accessibility") != m.end() && !m["Accessibility"].empty()) {
      accessibility = make_shared<string>(boost::any_cast<string>(m["Accessibility"]));
    }
    if (m.find("DataCount") != m.end() && !m["DataCount"].empty()) {
      dataCount = make_shared<long>(boost::any_cast<long>(m["DataCount"]));
    }
    if (m.find("DataSize") != m.end() && !m["DataSize"].empty()) {
      dataSize = make_shared<long>(boost::any_cast<long>(m["DataSize"]));
    }
    if (m.find("DataSourceType") != m.end() && !m["DataSourceType"].empty()) {
      dataSourceType = make_shared<string>(boost::any_cast<string>(m["DataSourceType"]));
    }
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ImportInfo") != m.end() && !m["ImportInfo"].empty()) {
      importInfo = make_shared<string>(boost::any_cast<string>(m["ImportInfo"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<Label> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Label model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<Label>>(expect1);
      }
    }
    if (m.find("MountAccessReadWriteRoleIdList") != m.end() && !m["MountAccessReadWriteRoleIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["MountAccessReadWriteRoleIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["MountAccessReadWriteRoleIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      mountAccessReadWriteRoleIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      options = make_shared<string>(boost::any_cast<string>(m["Options"]));
    }
    if (m.find("Property") != m.end() && !m["Property"].empty()) {
      property = make_shared<string>(boost::any_cast<string>(m["Property"]));
    }
    if (m.find("Provider") != m.end() && !m["Provider"].empty()) {
      provider = make_shared<string>(boost::any_cast<string>(m["Provider"]));
    }
    if (m.find("ProviderType") != m.end() && !m["ProviderType"].empty()) {
      providerType = make_shared<string>(boost::any_cast<string>(m["ProviderType"]));
    }
    if (m.find("SourceDatasetId") != m.end() && !m["SourceDatasetId"].empty()) {
      sourceDatasetId = make_shared<string>(boost::any_cast<string>(m["SourceDatasetId"]));
    }
    if (m.find("SourceDatasetVersion") != m.end() && !m["SourceDatasetVersion"].empty()) {
      sourceDatasetVersion = make_shared<string>(boost::any_cast<string>(m["SourceDatasetVersion"]));
    }
    if (m.find("SourceId") != m.end() && !m["SourceId"].empty()) {
      sourceId = make_shared<string>(boost::any_cast<string>(m["SourceId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("Uri") != m.end() && !m["Uri"].empty()) {
      uri = make_shared<string>(boost::any_cast<string>(m["Uri"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("VersionDescription") != m.end() && !m["VersionDescription"].empty()) {
      versionDescription = make_shared<string>(boost::any_cast<string>(m["VersionDescription"]));
    }
    if (m.find("VersionLabels") != m.end() && !m["VersionLabels"].empty()) {
      if (typeid(vector<boost::any>) == m["VersionLabels"].type()) {
        vector<Label> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VersionLabels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Label model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        versionLabels = make_shared<vector<Label>>(expect1);
      }
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~CreateDatasetRequest() = default;
};
class CreateDatasetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> datasetId{};
  shared_ptr<string> requestId{};

  CreateDatasetResponseBody() {}

  explicit CreateDatasetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetId) {
      res["DatasetId"] = boost::any(*datasetId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetId") != m.end() && !m["DatasetId"].empty()) {
      datasetId = make_shared<string>(boost::any_cast<string>(m["DatasetId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateDatasetResponseBody() = default;
};
class CreateDatasetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDatasetResponseBody> body{};

  CreateDatasetResponse() {}

  explicit CreateDatasetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateDatasetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDatasetResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDatasetResponse() = default;
};
class CreateDatasetFileMetasRequest : public Darabonba::Model {
public:
  shared_ptr<vector<DatasetFileMetaContentCreate>> datasetFileMetas{};
  shared_ptr<string> datasetVersion{};
  shared_ptr<string> workspaceId{};

  CreateDatasetFileMetasRequest() {}

  explicit CreateDatasetFileMetasRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetFileMetas) {
      vector<boost::any> temp1;
      for(auto item1:*datasetFileMetas){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DatasetFileMetas"] = boost::any(temp1);
    }
    if (datasetVersion) {
      res["DatasetVersion"] = boost::any(*datasetVersion);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetFileMetas") != m.end() && !m["DatasetFileMetas"].empty()) {
      if (typeid(vector<boost::any>) == m["DatasetFileMetas"].type()) {
        vector<DatasetFileMetaContentCreate> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DatasetFileMetas"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DatasetFileMetaContentCreate model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        datasetFileMetas = make_shared<vector<DatasetFileMetaContentCreate>>(expect1);
      }
    }
    if (m.find("DatasetVersion") != m.end() && !m["DatasetVersion"].empty()) {
      datasetVersion = make_shared<string>(boost::any_cast<string>(m["DatasetVersion"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~CreateDatasetFileMetasRequest() = default;
};
class CreateDatasetFileMetasResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DatasetFileMetaResponse>> failedDetails{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> status{};
  shared_ptr<vector<DatasetFileMetaResponse>> succeedDetails{};

  CreateDatasetFileMetasResponseBody() {}

  explicit CreateDatasetFileMetasResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (failedDetails) {
      vector<boost::any> temp1;
      for(auto item1:*failedDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FailedDetails"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (succeedDetails) {
      vector<boost::any> temp1;
      for(auto item1:*succeedDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SucceedDetails"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FailedDetails") != m.end() && !m["FailedDetails"].empty()) {
      if (typeid(vector<boost::any>) == m["FailedDetails"].type()) {
        vector<DatasetFileMetaResponse> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FailedDetails"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DatasetFileMetaResponse model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        failedDetails = make_shared<vector<DatasetFileMetaResponse>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<bool>(boost::any_cast<bool>(m["Status"]));
    }
    if (m.find("SucceedDetails") != m.end() && !m["SucceedDetails"].empty()) {
      if (typeid(vector<boost::any>) == m["SucceedDetails"].type()) {
        vector<DatasetFileMetaResponse> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SucceedDetails"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DatasetFileMetaResponse model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        succeedDetails = make_shared<vector<DatasetFileMetaResponse>>(expect1);
      }
    }
  }


  virtual ~CreateDatasetFileMetasResponseBody() = default;
};
class CreateDatasetFileMetasResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDatasetFileMetasResponseBody> body{};

  CreateDatasetFileMetasResponse() {}

  explicit CreateDatasetFileMetasResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateDatasetFileMetasResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDatasetFileMetasResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDatasetFileMetasResponse() = default;
};
class CreateDatasetJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> datasetVersion{};
  shared_ptr<string> description{};
  shared_ptr<string> jobAction{};
  shared_ptr<string> jobMode{};
  shared_ptr<string> jobSpec{};
  shared_ptr<string> workspaceId{};

  CreateDatasetJobRequest() {}

  explicit CreateDatasetJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetVersion) {
      res["DatasetVersion"] = boost::any(*datasetVersion);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (jobAction) {
      res["JobAction"] = boost::any(*jobAction);
    }
    if (jobMode) {
      res["JobMode"] = boost::any(*jobMode);
    }
    if (jobSpec) {
      res["JobSpec"] = boost::any(*jobSpec);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetVersion") != m.end() && !m["DatasetVersion"].empty()) {
      datasetVersion = make_shared<string>(boost::any_cast<string>(m["DatasetVersion"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("JobAction") != m.end() && !m["JobAction"].empty()) {
      jobAction = make_shared<string>(boost::any_cast<string>(m["JobAction"]));
    }
    if (m.find("JobMode") != m.end() && !m["JobMode"].empty()) {
      jobMode = make_shared<string>(boost::any_cast<string>(m["JobMode"]));
    }
    if (m.find("JobSpec") != m.end() && !m["JobSpec"].empty()) {
      jobSpec = make_shared<string>(boost::any_cast<string>(m["JobSpec"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~CreateDatasetJobRequest() = default;
};
class CreateDatasetJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> datasetJobId{};
  shared_ptr<string> requestId{};

  CreateDatasetJobResponseBody() {}

  explicit CreateDatasetJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetJobId) {
      res["DatasetJobId"] = boost::any(*datasetJobId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetJobId") != m.end() && !m["DatasetJobId"].empty()) {
      datasetJobId = make_shared<string>(boost::any_cast<string>(m["DatasetJobId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateDatasetJobResponseBody() = default;
};
class CreateDatasetJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDatasetJobResponseBody> body{};

  CreateDatasetJobResponse() {}

  explicit CreateDatasetJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateDatasetJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDatasetJobResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDatasetJobResponse() = default;
};
class CreateDatasetJobConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> config{};
  shared_ptr<string> configType{};
  shared_ptr<string> workspaceId{};

  CreateDatasetJobConfigRequest() {}

  explicit CreateDatasetJobConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (configType) {
      res["ConfigType"] = boost::any(*configType);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("ConfigType") != m.end() && !m["ConfigType"].empty()) {
      configType = make_shared<string>(boost::any_cast<string>(m["ConfigType"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~CreateDatasetJobConfigRequest() = default;
};
class CreateDatasetJobConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> datasetJobConfigId{};
  shared_ptr<string> requestId{};

  CreateDatasetJobConfigResponseBody() {}

  explicit CreateDatasetJobConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetJobConfigId) {
      res["DatasetJobConfigId"] = boost::any(*datasetJobConfigId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetJobConfigId") != m.end() && !m["DatasetJobConfigId"].empty()) {
      datasetJobConfigId = make_shared<string>(boost::any_cast<string>(m["DatasetJobConfigId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateDatasetJobConfigResponseBody() = default;
};
class CreateDatasetJobConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDatasetJobConfigResponseBody> body{};

  CreateDatasetJobConfigResponse() {}

  explicit CreateDatasetJobConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateDatasetJobConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDatasetJobConfigResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDatasetJobConfigResponse() = default;
};
class CreateDatasetLabelsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<Label>> labels{};

  CreateDatasetLabelsRequest() {}

  explicit CreateDatasetLabelsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<Label> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Label model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<Label>>(expect1);
      }
    }
  }


  virtual ~CreateDatasetLabelsRequest() = default;
};
class CreateDatasetLabelsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateDatasetLabelsResponseBody() {}

  explicit CreateDatasetLabelsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateDatasetLabelsResponseBody() = default;
};
class CreateDatasetLabelsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDatasetLabelsResponseBody> body{};

  CreateDatasetLabelsResponse() {}

  explicit CreateDatasetLabelsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateDatasetLabelsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDatasetLabelsResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDatasetLabelsResponse() = default;
};
class CreateDatasetVersionRequest : public Darabonba::Model {
public:
  shared_ptr<long> dataCount{};
  shared_ptr<long> dataSize{};
  shared_ptr<string> dataSourceType{};
  shared_ptr<string> description{};
  shared_ptr<string> importInfo{};
  shared_ptr<vector<Label>> labels{};
  shared_ptr<string> options{};
  shared_ptr<string> property{};
  shared_ptr<string> sourceId{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> uri{};

  CreateDatasetVersionRequest() {}

  explicit CreateDatasetVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataCount) {
      res["DataCount"] = boost::any(*dataCount);
    }
    if (dataSize) {
      res["DataSize"] = boost::any(*dataSize);
    }
    if (dataSourceType) {
      res["DataSourceType"] = boost::any(*dataSourceType);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (importInfo) {
      res["ImportInfo"] = boost::any(*importInfo);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (options) {
      res["Options"] = boost::any(*options);
    }
    if (property) {
      res["Property"] = boost::any(*property);
    }
    if (sourceId) {
      res["SourceId"] = boost::any(*sourceId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (uri) {
      res["Uri"] = boost::any(*uri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataCount") != m.end() && !m["DataCount"].empty()) {
      dataCount = make_shared<long>(boost::any_cast<long>(m["DataCount"]));
    }
    if (m.find("DataSize") != m.end() && !m["DataSize"].empty()) {
      dataSize = make_shared<long>(boost::any_cast<long>(m["DataSize"]));
    }
    if (m.find("DataSourceType") != m.end() && !m["DataSourceType"].empty()) {
      dataSourceType = make_shared<string>(boost::any_cast<string>(m["DataSourceType"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ImportInfo") != m.end() && !m["ImportInfo"].empty()) {
      importInfo = make_shared<string>(boost::any_cast<string>(m["ImportInfo"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<Label> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Label model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<Label>>(expect1);
      }
    }
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      options = make_shared<string>(boost::any_cast<string>(m["Options"]));
    }
    if (m.find("Property") != m.end() && !m["Property"].empty()) {
      property = make_shared<string>(boost::any_cast<string>(m["Property"]));
    }
    if (m.find("SourceId") != m.end() && !m["SourceId"].empty()) {
      sourceId = make_shared<string>(boost::any_cast<string>(m["SourceId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("Uri") != m.end() && !m["Uri"].empty()) {
      uri = make_shared<string>(boost::any_cast<string>(m["Uri"]));
    }
  }


  virtual ~CreateDatasetVersionRequest() = default;
};
class CreateDatasetVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> versionName{};

  CreateDatasetVersionResponseBody() {}

  explicit CreateDatasetVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (versionName) {
      res["VersionName"] = boost::any(*versionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("VersionName") != m.end() && !m["VersionName"].empty()) {
      versionName = make_shared<string>(boost::any_cast<string>(m["VersionName"]));
    }
  }


  virtual ~CreateDatasetVersionResponseBody() = default;
};
class CreateDatasetVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDatasetVersionResponseBody> body{};

  CreateDatasetVersionResponse() {}

  explicit CreateDatasetVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateDatasetVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDatasetVersionResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDatasetVersionResponse() = default;
};
class CreateDatasetVersionLabelsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<Label>> labels{};

  CreateDatasetVersionLabelsRequest() {}

  explicit CreateDatasetVersionLabelsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<Label> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Label model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<Label>>(expect1);
      }
    }
  }


  virtual ~CreateDatasetVersionLabelsRequest() = default;
};
class CreateDatasetVersionLabelsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateDatasetVersionLabelsResponseBody() {}

  explicit CreateDatasetVersionLabelsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateDatasetVersionLabelsResponseBody() = default;
};
class CreateDatasetVersionLabelsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDatasetVersionLabelsResponseBody> body{};

  CreateDatasetVersionLabelsResponse() {}

  explicit CreateDatasetVersionLabelsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateDatasetVersionLabelsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDatasetVersionLabelsResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDatasetVersionLabelsResponse() = default;
};
class CreateExperimentRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessibility{};
  shared_ptr<string> artifactUri{};
  shared_ptr<vector<LabelInfo>> labels{};
  shared_ptr<string> name{};
  shared_ptr<string> workspaceId{};

  CreateExperimentRequest() {}

  explicit CreateExperimentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessibility) {
      res["Accessibility"] = boost::any(*accessibility);
    }
    if (artifactUri) {
      res["ArtifactUri"] = boost::any(*artifactUri);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accessibility") != m.end() && !m["Accessibility"].empty()) {
      accessibility = make_shared<string>(boost::any_cast<string>(m["Accessibility"]));
    }
    if (m.find("ArtifactUri") != m.end() && !m["ArtifactUri"].empty()) {
      artifactUri = make_shared<string>(boost::any_cast<string>(m["ArtifactUri"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<LabelInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            LabelInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<LabelInfo>>(expect1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~CreateExperimentRequest() = default;
};
class CreateExperimentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> experimentId{};
  shared_ptr<string> requestId{};

  CreateExperimentResponseBody() {}

  explicit CreateExperimentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (experimentId) {
      res["ExperimentId"] = boost::any(*experimentId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExperimentId") != m.end() && !m["ExperimentId"].empty()) {
      experimentId = make_shared<string>(boost::any_cast<string>(m["ExperimentId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateExperimentResponseBody() = default;
};
class CreateExperimentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateExperimentResponseBody> body{};

  CreateExperimentResponse() {}

  explicit CreateExperimentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateExperimentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateExperimentResponseBody>(model1);
      }
    }
  }


  virtual ~CreateExperimentResponse() = default;
};
class CreateMemberRequestMembers : public Darabonba::Model {
public:
  shared_ptr<vector<string>> roles{};
  shared_ptr<string> userId{};

  CreateMemberRequestMembers() {}

  explicit CreateMemberRequestMembers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (roles) {
      res["Roles"] = boost::any(*roles);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Roles") != m.end() && !m["Roles"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Roles"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Roles"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      roles = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~CreateMemberRequestMembers() = default;
};
class CreateMemberRequest : public Darabonba::Model {
public:
  shared_ptr<vector<CreateMemberRequestMembers>> members{};

  CreateMemberRequest() {}

  explicit CreateMemberRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (members) {
      vector<boost::any> temp1;
      for(auto item1:*members){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Members"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Members") != m.end() && !m["Members"].empty()) {
      if (typeid(vector<boost::any>) == m["Members"].type()) {
        vector<CreateMemberRequestMembers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Members"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateMemberRequestMembers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        members = make_shared<vector<CreateMemberRequestMembers>>(expect1);
      }
    }
  }


  virtual ~CreateMemberRequest() = default;
};
class CreateMemberResponseBodyMembers : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> memberId{};
  shared_ptr<vector<string>> roles{};
  shared_ptr<string> userId{};

  CreateMemberResponseBodyMembers() {}

  explicit CreateMemberResponseBodyMembers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (memberId) {
      res["MemberId"] = boost::any(*memberId);
    }
    if (roles) {
      res["Roles"] = boost::any(*roles);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("MemberId") != m.end() && !m["MemberId"].empty()) {
      memberId = make_shared<string>(boost::any_cast<string>(m["MemberId"]));
    }
    if (m.find("Roles") != m.end() && !m["Roles"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Roles"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Roles"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      roles = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~CreateMemberResponseBodyMembers() = default;
};
class CreateMemberResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<CreateMemberResponseBodyMembers>> members{};
  shared_ptr<string> requestId{};

  CreateMemberResponseBody() {}

  explicit CreateMemberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (members) {
      vector<boost::any> temp1;
      for(auto item1:*members){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Members"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Members") != m.end() && !m["Members"].empty()) {
      if (typeid(vector<boost::any>) == m["Members"].type()) {
        vector<CreateMemberResponseBodyMembers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Members"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateMemberResponseBodyMembers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        members = make_shared<vector<CreateMemberResponseBodyMembers>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateMemberResponseBody() = default;
};
class CreateMemberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateMemberResponseBody> body{};

  CreateMemberResponse() {}

  explicit CreateMemberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateMemberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateMemberResponseBody>(model1);
      }
    }
  }


  virtual ~CreateMemberResponse() = default;
};
class CreateModelRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessibility{};
  shared_ptr<string> domain{};
  shared_ptr<map<string, boost::any>> extraInfo{};
  shared_ptr<vector<Label>> labels{};
  shared_ptr<string> modelDescription{};
  shared_ptr<string> modelDoc{};
  shared_ptr<string> modelName{};
  shared_ptr<string> modelType{};
  shared_ptr<long> orderNumber{};
  shared_ptr<string> origin{};
  shared_ptr<vector<Label>> tag{};
  shared_ptr<string> task{};
  shared_ptr<string> workspaceId{};

  CreateModelRequest() {}

  explicit CreateModelRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessibility) {
      res["Accessibility"] = boost::any(*accessibility);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (extraInfo) {
      res["ExtraInfo"] = boost::any(*extraInfo);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (modelDescription) {
      res["ModelDescription"] = boost::any(*modelDescription);
    }
    if (modelDoc) {
      res["ModelDoc"] = boost::any(*modelDoc);
    }
    if (modelName) {
      res["ModelName"] = boost::any(*modelName);
    }
    if (modelType) {
      res["ModelType"] = boost::any(*modelType);
    }
    if (orderNumber) {
      res["OrderNumber"] = boost::any(*orderNumber);
    }
    if (origin) {
      res["Origin"] = boost::any(*origin);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    if (task) {
      res["Task"] = boost::any(*task);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accessibility") != m.end() && !m["Accessibility"].empty()) {
      accessibility = make_shared<string>(boost::any_cast<string>(m["Accessibility"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("ExtraInfo") != m.end() && !m["ExtraInfo"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ExtraInfo"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extraInfo = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<Label> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Label model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<Label>>(expect1);
      }
    }
    if (m.find("ModelDescription") != m.end() && !m["ModelDescription"].empty()) {
      modelDescription = make_shared<string>(boost::any_cast<string>(m["ModelDescription"]));
    }
    if (m.find("ModelDoc") != m.end() && !m["ModelDoc"].empty()) {
      modelDoc = make_shared<string>(boost::any_cast<string>(m["ModelDoc"]));
    }
    if (m.find("ModelName") != m.end() && !m["ModelName"].empty()) {
      modelName = make_shared<string>(boost::any_cast<string>(m["ModelName"]));
    }
    if (m.find("ModelType") != m.end() && !m["ModelType"].empty()) {
      modelType = make_shared<string>(boost::any_cast<string>(m["ModelType"]));
    }
    if (m.find("OrderNumber") != m.end() && !m["OrderNumber"].empty()) {
      orderNumber = make_shared<long>(boost::any_cast<long>(m["OrderNumber"]));
    }
    if (m.find("Origin") != m.end() && !m["Origin"].empty()) {
      origin = make_shared<string>(boost::any_cast<string>(m["Origin"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<Label> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Label model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<Label>>(expect1);
      }
    }
    if (m.find("Task") != m.end() && !m["Task"].empty()) {
      task = make_shared<string>(boost::any_cast<string>(m["Task"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~CreateModelRequest() = default;
};
class CreateModelResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> modelId{};
  shared_ptr<string> requestId{};

  CreateModelResponseBody() {}

  explicit CreateModelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (modelId) {
      res["ModelId"] = boost::any(*modelId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ModelId") != m.end() && !m["ModelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["ModelId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateModelResponseBody() = default;
};
class CreateModelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateModelResponseBody> body{};

  CreateModelResponse() {}

  explicit CreateModelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateModelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateModelResponseBody>(model1);
      }
    }
  }


  virtual ~CreateModelResponse() = default;
};
class CreateModelLabelsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<Label>> labels{};

  CreateModelLabelsRequest() {}

  explicit CreateModelLabelsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<Label> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Label model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<Label>>(expect1);
      }
    }
  }


  virtual ~CreateModelLabelsRequest() = default;
};
class CreateModelLabelsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateModelLabelsResponseBody() {}

  explicit CreateModelLabelsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateModelLabelsResponseBody() = default;
};
class CreateModelLabelsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateModelLabelsResponseBody> body{};

  CreateModelLabelsResponse() {}

  explicit CreateModelLabelsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateModelLabelsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateModelLabelsResponseBody>(model1);
      }
    }
  }


  virtual ~CreateModelLabelsResponse() = default;
};
class CreateModelVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> approvalStatus{};
  shared_ptr<map<string, boost::any>> compressionSpec{};
  shared_ptr<map<string, boost::any>> evaluationSpec{};
  shared_ptr<map<string, boost::any>> extraInfo{};
  shared_ptr<string> formatType{};
  shared_ptr<string> frameworkType{};
  shared_ptr<map<string, boost::any>> inferenceSpec{};
  shared_ptr<vector<Label>> labels{};
  shared_ptr<map<string, boost::any>> metrics{};
  shared_ptr<string> options{};
  shared_ptr<string> sourceId{};
  shared_ptr<string> sourceType{};
  shared_ptr<map<string, boost::any>> trainingSpec{};
  shared_ptr<string> uri{};
  shared_ptr<string> versionDescription{};
  shared_ptr<string> versionName{};

  CreateModelVersionRequest() {}

  explicit CreateModelVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (approvalStatus) {
      res["ApprovalStatus"] = boost::any(*approvalStatus);
    }
    if (compressionSpec) {
      res["CompressionSpec"] = boost::any(*compressionSpec);
    }
    if (evaluationSpec) {
      res["EvaluationSpec"] = boost::any(*evaluationSpec);
    }
    if (extraInfo) {
      res["ExtraInfo"] = boost::any(*extraInfo);
    }
    if (formatType) {
      res["FormatType"] = boost::any(*formatType);
    }
    if (frameworkType) {
      res["FrameworkType"] = boost::any(*frameworkType);
    }
    if (inferenceSpec) {
      res["InferenceSpec"] = boost::any(*inferenceSpec);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (metrics) {
      res["Metrics"] = boost::any(*metrics);
    }
    if (options) {
      res["Options"] = boost::any(*options);
    }
    if (sourceId) {
      res["SourceId"] = boost::any(*sourceId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (trainingSpec) {
      res["TrainingSpec"] = boost::any(*trainingSpec);
    }
    if (uri) {
      res["Uri"] = boost::any(*uri);
    }
    if (versionDescription) {
      res["VersionDescription"] = boost::any(*versionDescription);
    }
    if (versionName) {
      res["VersionName"] = boost::any(*versionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApprovalStatus") != m.end() && !m["ApprovalStatus"].empty()) {
      approvalStatus = make_shared<string>(boost::any_cast<string>(m["ApprovalStatus"]));
    }
    if (m.find("CompressionSpec") != m.end() && !m["CompressionSpec"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["CompressionSpec"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      compressionSpec = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("EvaluationSpec") != m.end() && !m["EvaluationSpec"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["EvaluationSpec"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      evaluationSpec = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("ExtraInfo") != m.end() && !m["ExtraInfo"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ExtraInfo"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extraInfo = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("FormatType") != m.end() && !m["FormatType"].empty()) {
      formatType = make_shared<string>(boost::any_cast<string>(m["FormatType"]));
    }
    if (m.find("FrameworkType") != m.end() && !m["FrameworkType"].empty()) {
      frameworkType = make_shared<string>(boost::any_cast<string>(m["FrameworkType"]));
    }
    if (m.find("InferenceSpec") != m.end() && !m["InferenceSpec"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["InferenceSpec"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      inferenceSpec = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<Label> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Label model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<Label>>(expect1);
      }
    }
    if (m.find("Metrics") != m.end() && !m["Metrics"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Metrics"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      metrics = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      options = make_shared<string>(boost::any_cast<string>(m["Options"]));
    }
    if (m.find("SourceId") != m.end() && !m["SourceId"].empty()) {
      sourceId = make_shared<string>(boost::any_cast<string>(m["SourceId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("TrainingSpec") != m.end() && !m["TrainingSpec"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["TrainingSpec"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      trainingSpec = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Uri") != m.end() && !m["Uri"].empty()) {
      uri = make_shared<string>(boost::any_cast<string>(m["Uri"]));
    }
    if (m.find("VersionDescription") != m.end() && !m["VersionDescription"].empty()) {
      versionDescription = make_shared<string>(boost::any_cast<string>(m["VersionDescription"]));
    }
    if (m.find("VersionName") != m.end() && !m["VersionName"].empty()) {
      versionName = make_shared<string>(boost::any_cast<string>(m["VersionName"]));
    }
  }


  virtual ~CreateModelVersionRequest() = default;
};
class CreateModelVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> versionName{};

  CreateModelVersionResponseBody() {}

  explicit CreateModelVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (versionName) {
      res["VersionName"] = boost::any(*versionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("VersionName") != m.end() && !m["VersionName"].empty()) {
      versionName = make_shared<string>(boost::any_cast<string>(m["VersionName"]));
    }
  }


  virtual ~CreateModelVersionResponseBody() = default;
};
class CreateModelVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateModelVersionResponseBody> body{};

  CreateModelVersionResponse() {}

  explicit CreateModelVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateModelVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateModelVersionResponseBody>(model1);
      }
    }
  }


  virtual ~CreateModelVersionResponse() = default;
};
class CreateModelVersionLabelsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<Label>> labels{};

  CreateModelVersionLabelsRequest() {}

  explicit CreateModelVersionLabelsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<Label> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Label model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<Label>>(expect1);
      }
    }
  }


  virtual ~CreateModelVersionLabelsRequest() = default;
};
class CreateModelVersionLabelsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateModelVersionLabelsResponseBody() {}

  explicit CreateModelVersionLabelsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateModelVersionLabelsResponseBody() = default;
};
class CreateModelVersionLabelsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateModelVersionLabelsResponseBody> body{};

  CreateModelVersionLabelsResponse() {}

  explicit CreateModelVersionLabelsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateModelVersionLabelsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateModelVersionLabelsResponseBody>(model1);
      }
    }
  }


  virtual ~CreateModelVersionLabelsResponse() = default;
};
class CreateProductOrdersRequestProductsInstanceProperties : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  CreateProductOrdersRequestProductsInstanceProperties() {}

  explicit CreateProductOrdersRequestProductsInstanceProperties(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateProductOrdersRequestProductsInstanceProperties() = default;
};
class CreateProductOrdersRequestProducts : public Darabonba::Model {
public:
  shared_ptr<bool> autoRenew{};
  shared_ptr<string> chargeType{};
  shared_ptr<long> duration{};
  shared_ptr<vector<CreateProductOrdersRequestProductsInstanceProperties>> instanceProperties{};
  shared_ptr<string> orderType{};
  shared_ptr<string> pricingCycle{};
  shared_ptr<string> productCode{};

  CreateProductOrdersRequestProducts() {}

  explicit CreateProductOrdersRequestProducts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoRenew) {
      res["AutoRenew"] = boost::any(*autoRenew);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (instanceProperties) {
      vector<boost::any> temp1;
      for(auto item1:*instanceProperties){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstanceProperties"] = boost::any(temp1);
    }
    if (orderType) {
      res["OrderType"] = boost::any(*orderType);
    }
    if (pricingCycle) {
      res["PricingCycle"] = boost::any(*pricingCycle);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoRenew") != m.end() && !m["AutoRenew"].empty()) {
      autoRenew = make_shared<bool>(boost::any_cast<bool>(m["AutoRenew"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("InstanceProperties") != m.end() && !m["InstanceProperties"].empty()) {
      if (typeid(vector<boost::any>) == m["InstanceProperties"].type()) {
        vector<CreateProductOrdersRequestProductsInstanceProperties> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanceProperties"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateProductOrdersRequestProductsInstanceProperties model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceProperties = make_shared<vector<CreateProductOrdersRequestProductsInstanceProperties>>(expect1);
      }
    }
    if (m.find("OrderType") != m.end() && !m["OrderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["OrderType"]));
    }
    if (m.find("PricingCycle") != m.end() && !m["PricingCycle"].empty()) {
      pricingCycle = make_shared<string>(boost::any_cast<string>(m["PricingCycle"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
  }


  virtual ~CreateProductOrdersRequestProducts() = default;
};
class CreateProductOrdersRequest : public Darabonba::Model {
public:
  shared_ptr<bool> autoPay{};
  shared_ptr<vector<CreateProductOrdersRequestProducts>> products{};

  CreateProductOrdersRequest() {}

  explicit CreateProductOrdersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoPay) {
      res["AutoPay"] = boost::any(*autoPay);
    }
    if (products) {
      vector<boost::any> temp1;
      for(auto item1:*products){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Products"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoPay") != m.end() && !m["AutoPay"].empty()) {
      autoPay = make_shared<bool>(boost::any_cast<bool>(m["AutoPay"]));
    }
    if (m.find("Products") != m.end() && !m["Products"].empty()) {
      if (typeid(vector<boost::any>) == m["Products"].type()) {
        vector<CreateProductOrdersRequestProducts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Products"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateProductOrdersRequestProducts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        products = make_shared<vector<CreateProductOrdersRequestProducts>>(expect1);
      }
    }
  }


  virtual ~CreateProductOrdersRequest() = default;
};
class CreateProductOrdersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> buyProductRequestId{};
  shared_ptr<string> message{};
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  CreateProductOrdersResponseBody() {}

  explicit CreateProductOrdersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buyProductRequestId) {
      res["BuyProductRequestId"] = boost::any(*buyProductRequestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("BuyProductRequestId") != m.end() && !m["BuyProductRequestId"].empty()) {
      buyProductRequestId = make_shared<string>(boost::any_cast<string>(m["BuyProductRequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateProductOrdersResponseBody() = default;
};
class CreateProductOrdersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateProductOrdersResponseBody> body{};

  CreateProductOrdersResponse() {}

  explicit CreateProductOrdersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateProductOrdersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateProductOrdersResponseBody>(model1);
      }
    }
  }


  virtual ~CreateProductOrdersResponse() = default;
};
class CreateRunRequest : public Darabonba::Model {
public:
  shared_ptr<string> experimentId{};
  shared_ptr<vector<Label>> labels{};
  shared_ptr<string> name{};
  shared_ptr<vector<RunParam>> params{};
  shared_ptr<string> sourceId{};
  shared_ptr<string> sourceType{};

  CreateRunRequest() {}

  explicit CreateRunRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (experimentId) {
      res["ExperimentId"] = boost::any(*experimentId);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (params) {
      vector<boost::any> temp1;
      for(auto item1:*params){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Params"] = boost::any(temp1);
    }
    if (sourceId) {
      res["SourceId"] = boost::any(*sourceId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExperimentId") != m.end() && !m["ExperimentId"].empty()) {
      experimentId = make_shared<string>(boost::any_cast<string>(m["ExperimentId"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<Label> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Label model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<Label>>(expect1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Params") != m.end() && !m["Params"].empty()) {
      if (typeid(vector<boost::any>) == m["Params"].type()) {
        vector<RunParam> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Params"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunParam model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        params = make_shared<vector<RunParam>>(expect1);
      }
    }
    if (m.find("SourceId") != m.end() && !m["SourceId"].empty()) {
      sourceId = make_shared<string>(boost::any_cast<string>(m["SourceId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
  }


  virtual ~CreateRunRequest() = default;
};
class CreateRunResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> runId{};
  shared_ptr<string> requestId{};

  CreateRunResponseBody() {}

  explicit CreateRunResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (runId) {
      res["RunId"] = boost::any(*runId);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RunId") != m.end() && !m["RunId"].empty()) {
      runId = make_shared<string>(boost::any_cast<string>(m["RunId"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~CreateRunResponseBody() = default;
};
class CreateRunResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateRunResponseBody> body{};

  CreateRunResponse() {}

  explicit CreateRunResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateRunResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateRunResponseBody>(model1);
      }
    }
  }


  virtual ~CreateRunResponse() = default;
};
class CreateWorkspaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<vector<string>> envTypes{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> workspaceName{};

  CreateWorkspaceRequest() {}

  explicit CreateWorkspaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (envTypes) {
      res["EnvTypes"] = boost::any(*envTypes);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (workspaceName) {
      res["WorkspaceName"] = boost::any(*workspaceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("EnvTypes") != m.end() && !m["EnvTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["EnvTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["EnvTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      envTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("WorkspaceName") != m.end() && !m["WorkspaceName"].empty()) {
      workspaceName = make_shared<string>(boost::any_cast<string>(m["WorkspaceName"]));
    }
  }


  virtual ~CreateWorkspaceRequest() = default;
};
class CreateWorkspaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> workspaceId{};

  CreateWorkspaceResponseBody() {}

  explicit CreateWorkspaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~CreateWorkspaceResponseBody() = default;
};
class CreateWorkspaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateWorkspaceResponseBody> body{};

  CreateWorkspaceResponse() {}

  explicit CreateWorkspaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateWorkspaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateWorkspaceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateWorkspaceResponse() = default;
};
class CreateWorkspaceResourceRequestResourcesLabels : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateWorkspaceResourceRequestResourcesLabels() {}

  explicit CreateWorkspaceResourceRequestResourcesLabels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateWorkspaceResourceRequestResourcesLabels() = default;
};
class CreateWorkspaceResourceRequestResourcesQuotas : public Darabonba::Model {
public:
  shared_ptr<string> id{};

  CreateWorkspaceResourceRequestResourcesQuotas() {}

  explicit CreateWorkspaceResourceRequestResourcesQuotas(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~CreateWorkspaceResourceRequestResourcesQuotas() = default;
};
class CreateWorkspaceResourceRequestResources : public Darabonba::Model {
public:
  shared_ptr<string> envType{};
  shared_ptr<string> groupName{};
  shared_ptr<bool> isDefault{};
  shared_ptr<vector<CreateWorkspaceResourceRequestResourcesLabels>> labels{};
  shared_ptr<string> name{};
  shared_ptr<string> productType{};
  shared_ptr<vector<CreateWorkspaceResourceRequestResourcesQuotas>> quotas{};
  shared_ptr<string> resourceType{};
  shared_ptr<map<string, boost::any>> spec{};
  shared_ptr<string> workspaceId{};

  CreateWorkspaceResourceRequestResources() {}

  explicit CreateWorkspaceResourceRequestResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (envType) {
      res["EnvType"] = boost::any(*envType);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (isDefault) {
      res["IsDefault"] = boost::any(*isDefault);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (quotas) {
      vector<boost::any> temp1;
      for(auto item1:*quotas){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Quotas"] = boost::any(temp1);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (spec) {
      res["Spec"] = boost::any(*spec);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnvType") != m.end() && !m["EnvType"].empty()) {
      envType = make_shared<string>(boost::any_cast<string>(m["EnvType"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("IsDefault") != m.end() && !m["IsDefault"].empty()) {
      isDefault = make_shared<bool>(boost::any_cast<bool>(m["IsDefault"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<CreateWorkspaceResourceRequestResourcesLabels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateWorkspaceResourceRequestResourcesLabels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<CreateWorkspaceResourceRequestResourcesLabels>>(expect1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("Quotas") != m.end() && !m["Quotas"].empty()) {
      if (typeid(vector<boost::any>) == m["Quotas"].type()) {
        vector<CreateWorkspaceResourceRequestResourcesQuotas> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Quotas"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateWorkspaceResourceRequestResourcesQuotas model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        quotas = make_shared<vector<CreateWorkspaceResourceRequestResourcesQuotas>>(expect1);
      }
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Spec") != m.end() && !m["Spec"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Spec"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      spec = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~CreateWorkspaceResourceRequestResources() = default;
};
class CreateWorkspaceResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> option{};
  shared_ptr<vector<CreateWorkspaceResourceRequestResources>> resources{};

  CreateWorkspaceResourceRequest() {}

  explicit CreateWorkspaceResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (option) {
      res["Option"] = boost::any(*option);
    }
    if (resources) {
      vector<boost::any> temp1;
      for(auto item1:*resources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Resources"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Option") != m.end() && !m["Option"].empty()) {
      option = make_shared<string>(boost::any_cast<string>(m["Option"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      if (typeid(vector<boost::any>) == m["Resources"].type()) {
        vector<CreateWorkspaceResourceRequestResources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Resources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateWorkspaceResourceRequestResources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resources = make_shared<vector<CreateWorkspaceResourceRequestResources>>(expect1);
      }
    }
  }


  virtual ~CreateWorkspaceResourceRequest() = default;
};
class CreateWorkspaceResourceResponseBodyResources : public Darabonba::Model {
public:
  shared_ptr<string> id{};

  CreateWorkspaceResourceResponseBodyResources() {}

  explicit CreateWorkspaceResourceResponseBodyResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~CreateWorkspaceResourceResponseBodyResources() = default;
};
class CreateWorkspaceResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<CreateWorkspaceResourceResponseBodyResources>> resources{};
  shared_ptr<long> totalCount{};

  CreateWorkspaceResourceResponseBody() {}

  explicit CreateWorkspaceResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resources) {
      vector<boost::any> temp1;
      for(auto item1:*resources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Resources"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      if (typeid(vector<boost::any>) == m["Resources"].type()) {
        vector<CreateWorkspaceResourceResponseBodyResources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Resources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateWorkspaceResourceResponseBodyResources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resources = make_shared<vector<CreateWorkspaceResourceResponseBodyResources>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~CreateWorkspaceResourceResponseBody() = default;
};
class CreateWorkspaceResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateWorkspaceResourceResponseBody> body{};

  CreateWorkspaceResourceResponse() {}

  explicit CreateWorkspaceResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateWorkspaceResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateWorkspaceResourceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateWorkspaceResourceResponse() = default;
};
class DeleteCodeSourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> codeSourceId{};
  shared_ptr<string> requestId{};

  DeleteCodeSourceResponseBody() {}

  explicit DeleteCodeSourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (codeSourceId) {
      res["CodeSourceId"] = boost::any(*codeSourceId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CodeSourceId") != m.end() && !m["CodeSourceId"].empty()) {
      codeSourceId = make_shared<string>(boost::any_cast<string>(m["CodeSourceId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteCodeSourceResponseBody() = default;
};
class DeleteCodeSourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteCodeSourceResponseBody> body{};

  DeleteCodeSourceResponse() {}

  explicit DeleteCodeSourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteCodeSourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteCodeSourceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteCodeSourceResponse() = default;
};
class DeleteConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> categoryName{};
  shared_ptr<string> labels{};

  DeleteConfigRequest() {}

  explicit DeleteConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryName) {
      res["CategoryName"] = boost::any(*categoryName);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryName") != m.end() && !m["CategoryName"].empty()) {
      categoryName = make_shared<string>(boost::any_cast<string>(m["CategoryName"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      labels = make_shared<string>(boost::any_cast<string>(m["Labels"]));
    }
  }


  virtual ~DeleteConfigRequest() = default;
};
class DeleteConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteConfigResponseBody() {}

  explicit DeleteConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteConfigResponseBody() = default;
};
class DeleteConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteConfigResponseBody> body{};

  DeleteConfigResponse() {}

  explicit DeleteConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteConfigResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteConfigResponse() = default;
};
class DeleteConnectionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteConnectionResponseBody() {}

  explicit DeleteConnectionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteConnectionResponseBody() = default;
};
class DeleteConnectionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteConnectionResponseBody> body{};

  DeleteConnectionResponse() {}

  explicit DeleteConnectionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteConnectionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteConnectionResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteConnectionResponse() = default;
};
class DeleteDatasetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteDatasetResponseBody() {}

  explicit DeleteDatasetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteDatasetResponseBody() = default;
};
class DeleteDatasetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDatasetResponseBody> body{};

  DeleteDatasetResponse() {}

  explicit DeleteDatasetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteDatasetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDatasetResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDatasetResponse() = default;
};
class DeleteDatasetFileMetasRequest : public Darabonba::Model {
public:
  shared_ptr<string> datasetFileMetaIds{};
  shared_ptr<string> datasetVersion{};
  shared_ptr<string> workspaceId{};

  DeleteDatasetFileMetasRequest() {}

  explicit DeleteDatasetFileMetasRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetFileMetaIds) {
      res["DatasetFileMetaIds"] = boost::any(*datasetFileMetaIds);
    }
    if (datasetVersion) {
      res["DatasetVersion"] = boost::any(*datasetVersion);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetFileMetaIds") != m.end() && !m["DatasetFileMetaIds"].empty()) {
      datasetFileMetaIds = make_shared<string>(boost::any_cast<string>(m["DatasetFileMetaIds"]));
    }
    if (m.find("DatasetVersion") != m.end() && !m["DatasetVersion"].empty()) {
      datasetVersion = make_shared<string>(boost::any_cast<string>(m["DatasetVersion"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~DeleteDatasetFileMetasRequest() = default;
};
class DeleteDatasetFileMetasResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DatasetFileMetaResponse>> failedDetails{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> status{};

  DeleteDatasetFileMetasResponseBody() {}

  explicit DeleteDatasetFileMetasResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (failedDetails) {
      vector<boost::any> temp1;
      for(auto item1:*failedDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FailedDetails"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FailedDetails") != m.end() && !m["FailedDetails"].empty()) {
      if (typeid(vector<boost::any>) == m["FailedDetails"].type()) {
        vector<DatasetFileMetaResponse> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FailedDetails"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DatasetFileMetaResponse model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        failedDetails = make_shared<vector<DatasetFileMetaResponse>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<bool>(boost::any_cast<bool>(m["Status"]));
    }
  }


  virtual ~DeleteDatasetFileMetasResponseBody() = default;
};
class DeleteDatasetFileMetasResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDatasetFileMetasResponseBody> body{};

  DeleteDatasetFileMetasResponse() {}

  explicit DeleteDatasetFileMetasResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteDatasetFileMetasResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDatasetFileMetasResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDatasetFileMetasResponse() = default;
};
class DeleteDatasetJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteDatasetJobResponseBody() {}

  explicit DeleteDatasetJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteDatasetJobResponseBody() = default;
};
class DeleteDatasetJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDatasetJobResponseBody> body{};

  DeleteDatasetJobResponse() {}

  explicit DeleteDatasetJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteDatasetJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDatasetJobResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDatasetJobResponse() = default;
};
class DeleteDatasetJobConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> workspaceId{};

  DeleteDatasetJobConfigRequest() {}

  explicit DeleteDatasetJobConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~DeleteDatasetJobConfigRequest() = default;
};
class DeleteDatasetJobConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteDatasetJobConfigResponseBody() {}

  explicit DeleteDatasetJobConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteDatasetJobConfigResponseBody() = default;
};
class DeleteDatasetJobConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDatasetJobConfigResponseBody> body{};

  DeleteDatasetJobConfigResponse() {}

  explicit DeleteDatasetJobConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteDatasetJobConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDatasetJobConfigResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDatasetJobConfigResponse() = default;
};
class DeleteDatasetLabelsRequest : public Darabonba::Model {
public:
  shared_ptr<string> labelKeys{};

  DeleteDatasetLabelsRequest() {}

  explicit DeleteDatasetLabelsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labelKeys) {
      res["LabelKeys"] = boost::any(*labelKeys);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LabelKeys") != m.end() && !m["LabelKeys"].empty()) {
      labelKeys = make_shared<string>(boost::any_cast<string>(m["LabelKeys"]));
    }
  }


  virtual ~DeleteDatasetLabelsRequest() = default;
};
class DeleteDatasetLabelsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteDatasetLabelsResponseBody() {}

  explicit DeleteDatasetLabelsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteDatasetLabelsResponseBody() = default;
};
class DeleteDatasetLabelsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDatasetLabelsResponseBody> body{};

  DeleteDatasetLabelsResponse() {}

  explicit DeleteDatasetLabelsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteDatasetLabelsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDatasetLabelsResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDatasetLabelsResponse() = default;
};
class DeleteDatasetVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteDatasetVersionResponseBody() {}

  explicit DeleteDatasetVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteDatasetVersionResponseBody() = default;
};
class DeleteDatasetVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDatasetVersionResponseBody> body{};

  DeleteDatasetVersionResponse() {}

  explicit DeleteDatasetVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteDatasetVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDatasetVersionResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDatasetVersionResponse() = default;
};
class DeleteDatasetVersionLabelsRequest : public Darabonba::Model {
public:
  shared_ptr<string> keys{};

  DeleteDatasetVersionLabelsRequest() {}

  explicit DeleteDatasetVersionLabelsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keys) {
      res["Keys"] = boost::any(*keys);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Keys") != m.end() && !m["Keys"].empty()) {
      keys = make_shared<string>(boost::any_cast<string>(m["Keys"]));
    }
  }


  virtual ~DeleteDatasetVersionLabelsRequest() = default;
};
class DeleteDatasetVersionLabelsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteDatasetVersionLabelsResponseBody() {}

  explicit DeleteDatasetVersionLabelsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteDatasetVersionLabelsResponseBody() = default;
};
class DeleteDatasetVersionLabelsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDatasetVersionLabelsResponseBody> body{};

  DeleteDatasetVersionLabelsResponse() {}

  explicit DeleteDatasetVersionLabelsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteDatasetVersionLabelsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDatasetVersionLabelsResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDatasetVersionLabelsResponse() = default;
};
class DeleteExperimentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteExperimentResponseBody() {}

  explicit DeleteExperimentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteExperimentResponseBody() = default;
};
class DeleteExperimentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteExperimentResponseBody> body{};

  DeleteExperimentResponse() {}

  explicit DeleteExperimentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteExperimentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteExperimentResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteExperimentResponse() = default;
};
class DeleteExperimentLabelResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteExperimentLabelResponseBody() {}

  explicit DeleteExperimentLabelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteExperimentLabelResponseBody() = default;
};
class DeleteExperimentLabelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteExperimentLabelResponseBody> body{};

  DeleteExperimentLabelResponse() {}

  explicit DeleteExperimentLabelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteExperimentLabelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteExperimentLabelResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteExperimentLabelResponse() = default;
};
class DeleteMembersRequest : public Darabonba::Model {
public:
  shared_ptr<string> memberIds{};

  DeleteMembersRequest() {}

  explicit DeleteMembersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (memberIds) {
      res["MemberIds"] = boost::any(*memberIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MemberIds") != m.end() && !m["MemberIds"].empty()) {
      memberIds = make_shared<string>(boost::any_cast<string>(m["MemberIds"]));
    }
  }


  virtual ~DeleteMembersRequest() = default;
};
class DeleteMembersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeleteMembersResponseBody() {}

  explicit DeleteMembersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteMembersResponseBody() = default;
};
class DeleteMembersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteMembersResponseBody> body{};

  DeleteMembersResponse() {}

  explicit DeleteMembersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteMembersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteMembersResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteMembersResponse() = default;
};
class DeleteModelResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteModelResponseBody() {}

  explicit DeleteModelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteModelResponseBody() = default;
};
class DeleteModelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteModelResponseBody> body{};

  DeleteModelResponse() {}

  explicit DeleteModelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteModelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteModelResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteModelResponse() = default;
};
class DeleteModelLabelsRequest : public Darabonba::Model {
public:
  shared_ptr<string> labelKeys{};

  DeleteModelLabelsRequest() {}

  explicit DeleteModelLabelsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labelKeys) {
      res["LabelKeys"] = boost::any(*labelKeys);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LabelKeys") != m.end() && !m["LabelKeys"].empty()) {
      labelKeys = make_shared<string>(boost::any_cast<string>(m["LabelKeys"]));
    }
  }


  virtual ~DeleteModelLabelsRequest() = default;
};
class DeleteModelLabelsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteModelLabelsResponseBody() {}

  explicit DeleteModelLabelsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteModelLabelsResponseBody() = default;
};
class DeleteModelLabelsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteModelLabelsResponseBody> body{};

  DeleteModelLabelsResponse() {}

  explicit DeleteModelLabelsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteModelLabelsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteModelLabelsResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteModelLabelsResponse() = default;
};
class DeleteModelVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteModelVersionResponseBody() {}

  explicit DeleteModelVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteModelVersionResponseBody() = default;
};
class DeleteModelVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteModelVersionResponseBody> body{};

  DeleteModelVersionResponse() {}

  explicit DeleteModelVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteModelVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteModelVersionResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteModelVersionResponse() = default;
};
class DeleteModelVersionLabelsRequest : public Darabonba::Model {
public:
  shared_ptr<string> labelKeys{};

  DeleteModelVersionLabelsRequest() {}

  explicit DeleteModelVersionLabelsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labelKeys) {
      res["LabelKeys"] = boost::any(*labelKeys);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LabelKeys") != m.end() && !m["LabelKeys"].empty()) {
      labelKeys = make_shared<string>(boost::any_cast<string>(m["LabelKeys"]));
    }
  }


  virtual ~DeleteModelVersionLabelsRequest() = default;
};
class DeleteModelVersionLabelsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteModelVersionLabelsResponseBody() {}

  explicit DeleteModelVersionLabelsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteModelVersionLabelsResponseBody() = default;
};
class DeleteModelVersionLabelsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteModelVersionLabelsResponseBody> body{};

  DeleteModelVersionLabelsResponse() {}

  explicit DeleteModelVersionLabelsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteModelVersionLabelsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteModelVersionLabelsResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteModelVersionLabelsResponse() = default;
};
class DeleteRunResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteRunResponseBody() {}

  explicit DeleteRunResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~DeleteRunResponseBody() = default;
};
class DeleteRunResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteRunResponseBody> body{};

  DeleteRunResponse() {}

  explicit DeleteRunResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteRunResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteRunResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteRunResponse() = default;
};
class DeleteRunLabelResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteRunLabelResponseBody() {}

  explicit DeleteRunLabelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~DeleteRunLabelResponseBody() = default;
};
class DeleteRunLabelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteRunLabelResponseBody> body{};

  DeleteRunLabelResponse() {}

  explicit DeleteRunLabelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteRunLabelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteRunLabelResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteRunLabelResponse() = default;
};
class DeleteUserConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> configKey{};
  shared_ptr<string> scope{};

  DeleteUserConfigRequest() {}

  explicit DeleteUserConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configKey) {
      res["ConfigKey"] = boost::any(*configKey);
    }
    if (scope) {
      res["Scope"] = boost::any(*scope);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigKey") != m.end() && !m["ConfigKey"].empty()) {
      configKey = make_shared<string>(boost::any_cast<string>(m["ConfigKey"]));
    }
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["Scope"]));
    }
  }


  virtual ~DeleteUserConfigRequest() = default;
};
class DeleteUserConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteUserConfigResponseBody() {}

  explicit DeleteUserConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteUserConfigResponseBody() = default;
};
class DeleteUserConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteUserConfigResponseBody> body{};

  DeleteUserConfigResponse() {}

  explicit DeleteUserConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteUserConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteUserConfigResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteUserConfigResponse() = default;
};
class DeleteWorkspaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteWorkspaceResponseBody() {}

  explicit DeleteWorkspaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteWorkspaceResponseBody() = default;
};
class DeleteWorkspaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteWorkspaceResponseBody> body{};

  DeleteWorkspaceResponse() {}

  explicit DeleteWorkspaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteWorkspaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteWorkspaceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteWorkspaceResponse() = default;
};
class DeleteWorkspaceResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupName{};
  shared_ptr<string> labels{};
  shared_ptr<string> option{};
  shared_ptr<string> productType{};
  shared_ptr<string> resourceIds{};
  shared_ptr<string> resourceType{};

  DeleteWorkspaceResourceRequest() {}

  explicit DeleteWorkspaceResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (option) {
      res["Option"] = boost::any(*option);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (resourceIds) {
      res["ResourceIds"] = boost::any(*resourceIds);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      labels = make_shared<string>(boost::any_cast<string>(m["Labels"]));
    }
    if (m.find("Option") != m.end() && !m["Option"].empty()) {
      option = make_shared<string>(boost::any_cast<string>(m["Option"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("ResourceIds") != m.end() && !m["ResourceIds"].empty()) {
      resourceIds = make_shared<string>(boost::any_cast<string>(m["ResourceIds"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~DeleteWorkspaceResourceRequest() = default;
};
class DeleteWorkspaceResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> resourceIds{};

  DeleteWorkspaceResourceResponseBody() {}

  explicit DeleteWorkspaceResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceIds) {
      res["ResourceIds"] = boost::any(*resourceIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
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
  }


  virtual ~DeleteWorkspaceResourceResponseBody() = default;
};
class DeleteWorkspaceResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteWorkspaceResourceResponseBody> body{};

  DeleteWorkspaceResourceResponse() {}

  explicit DeleteWorkspaceResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteWorkspaceResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteWorkspaceResourceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteWorkspaceResourceResponse() = default;
};
class GetCodeSourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessibility{};
  shared_ptr<string> codeBranch{};
  shared_ptr<string> codeCommit{};
  shared_ptr<string> codeRepo{};
  shared_ptr<string> codeRepoAccessToken{};
  shared_ptr<string> codeRepoUserName{};
  shared_ptr<string> codeSourceId{};
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifyTime{};
  shared_ptr<string> mountPath{};
  shared_ptr<string> requestId{};
  shared_ptr<string> userId{};
  shared_ptr<string> workspaceId{};

  GetCodeSourceResponseBody() {}

  explicit GetCodeSourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessibility) {
      res["Accessibility"] = boost::any(*accessibility);
    }
    if (codeBranch) {
      res["CodeBranch"] = boost::any(*codeBranch);
    }
    if (codeCommit) {
      res["CodeCommit"] = boost::any(*codeCommit);
    }
    if (codeRepo) {
      res["CodeRepo"] = boost::any(*codeRepo);
    }
    if (codeRepoAccessToken) {
      res["CodeRepoAccessToken"] = boost::any(*codeRepoAccessToken);
    }
    if (codeRepoUserName) {
      res["CodeRepoUserName"] = boost::any(*codeRepoUserName);
    }
    if (codeSourceId) {
      res["CodeSourceId"] = boost::any(*codeSourceId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifyTime) {
      res["GmtModifyTime"] = boost::any(*gmtModifyTime);
    }
    if (mountPath) {
      res["MountPath"] = boost::any(*mountPath);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accessibility") != m.end() && !m["Accessibility"].empty()) {
      accessibility = make_shared<string>(boost::any_cast<string>(m["Accessibility"]));
    }
    if (m.find("CodeBranch") != m.end() && !m["CodeBranch"].empty()) {
      codeBranch = make_shared<string>(boost::any_cast<string>(m["CodeBranch"]));
    }
    if (m.find("CodeCommit") != m.end() && !m["CodeCommit"].empty()) {
      codeCommit = make_shared<string>(boost::any_cast<string>(m["CodeCommit"]));
    }
    if (m.find("CodeRepo") != m.end() && !m["CodeRepo"].empty()) {
      codeRepo = make_shared<string>(boost::any_cast<string>(m["CodeRepo"]));
    }
    if (m.find("CodeRepoAccessToken") != m.end() && !m["CodeRepoAccessToken"].empty()) {
      codeRepoAccessToken = make_shared<string>(boost::any_cast<string>(m["CodeRepoAccessToken"]));
    }
    if (m.find("CodeRepoUserName") != m.end() && !m["CodeRepoUserName"].empty()) {
      codeRepoUserName = make_shared<string>(boost::any_cast<string>(m["CodeRepoUserName"]));
    }
    if (m.find("CodeSourceId") != m.end() && !m["CodeSourceId"].empty()) {
      codeSourceId = make_shared<string>(boost::any_cast<string>(m["CodeSourceId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifyTime") != m.end() && !m["GmtModifyTime"].empty()) {
      gmtModifyTime = make_shared<string>(boost::any_cast<string>(m["GmtModifyTime"]));
    }
    if (m.find("MountPath") != m.end() && !m["MountPath"].empty()) {
      mountPath = make_shared<string>(boost::any_cast<string>(m["MountPath"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~GetCodeSourceResponseBody() = default;
};
class GetCodeSourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetCodeSourceResponseBody> body{};

  GetCodeSourceResponse() {}

  explicit GetCodeSourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetCodeSourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCodeSourceResponseBody>(model1);
      }
    }
  }


  virtual ~GetCodeSourceResponse() = default;
};
class GetConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> categoryName{};
  shared_ptr<string> configKey{};
  shared_ptr<string> verbose{};

  GetConfigRequest() {}

  explicit GetConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryName) {
      res["CategoryName"] = boost::any(*categoryName);
    }
    if (configKey) {
      res["ConfigKey"] = boost::any(*configKey);
    }
    if (verbose) {
      res["Verbose"] = boost::any(*verbose);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryName") != m.end() && !m["CategoryName"].empty()) {
      categoryName = make_shared<string>(boost::any_cast<string>(m["CategoryName"]));
    }
    if (m.find("ConfigKey") != m.end() && !m["ConfigKey"].empty()) {
      configKey = make_shared<string>(boost::any_cast<string>(m["ConfigKey"]));
    }
    if (m.find("Verbose") != m.end() && !m["Verbose"].empty()) {
      verbose = make_shared<string>(boost::any_cast<string>(m["Verbose"]));
    }
  }


  virtual ~GetConfigRequest() = default;
};
class GetConfigResponseBodyLabels : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  GetConfigResponseBodyLabels() {}

  explicit GetConfigResponseBodyLabels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetConfigResponseBodyLabels() = default;
};
class GetConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> categoryName{};
  shared_ptr<string> configKey{};
  shared_ptr<string> configValue{};
  shared_ptr<vector<GetConfigResponseBodyLabels>> labels{};
  shared_ptr<string> requestId{};
  shared_ptr<string> workspaceId{};

  GetConfigResponseBody() {}

  explicit GetConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryName) {
      res["CategoryName"] = boost::any(*categoryName);
    }
    if (configKey) {
      res["ConfigKey"] = boost::any(*configKey);
    }
    if (configValue) {
      res["ConfigValue"] = boost::any(*configValue);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryName") != m.end() && !m["CategoryName"].empty()) {
      categoryName = make_shared<string>(boost::any_cast<string>(m["CategoryName"]));
    }
    if (m.find("ConfigKey") != m.end() && !m["ConfigKey"].empty()) {
      configKey = make_shared<string>(boost::any_cast<string>(m["ConfigKey"]));
    }
    if (m.find("ConfigValue") != m.end() && !m["ConfigValue"].empty()) {
      configValue = make_shared<string>(boost::any_cast<string>(m["ConfigValue"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<GetConfigResponseBodyLabels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetConfigResponseBodyLabels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<GetConfigResponseBodyLabels>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~GetConfigResponseBody() = default;
};
class GetConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetConfigResponseBody> body{};

  GetConfigResponse() {}

  explicit GetConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetConfigResponseBody>(model1);
      }
    }
  }


  virtual ~GetConfigResponse() = default;
};
class GetConnectionRequest : public Darabonba::Model {
public:
  shared_ptr<string> encryptOption{};

  GetConnectionRequest() {}

  explicit GetConnectionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encryptOption) {
      res["EncryptOption"] = boost::any(*encryptOption);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncryptOption") != m.end() && !m["EncryptOption"].empty()) {
      encryptOption = make_shared<string>(boost::any_cast<string>(m["EncryptOption"]));
    }
  }


  virtual ~GetConnectionRequest() = default;
};
class GetConnectionResponseBodyModels : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> model{};
  shared_ptr<string> modelType{};
  shared_ptr<bool> toolCall{};

  GetConnectionResponseBodyModels() {}

  explicit GetConnectionResponseBodyModels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (model) {
      res["Model"] = boost::any(*model);
    }
    if (modelType) {
      res["ModelType"] = boost::any(*modelType);
    }
    if (toolCall) {
      res["ToolCall"] = boost::any(*toolCall);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      model = make_shared<string>(boost::any_cast<string>(m["Model"]));
    }
    if (m.find("ModelType") != m.end() && !m["ModelType"].empty()) {
      modelType = make_shared<string>(boost::any_cast<string>(m["ModelType"]));
    }
    if (m.find("ToolCall") != m.end() && !m["ToolCall"].empty()) {
      toolCall = make_shared<bool>(boost::any_cast<bool>(m["ToolCall"]));
    }
  }


  virtual ~GetConnectionResponseBodyModels() = default;
};
class GetConnectionResponseBodyResourceMeta : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};

  GetConnectionResponseBodyResourceMeta() {}

  explicit GetConnectionResponseBodyResourceMeta(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
  }


  virtual ~GetConnectionResponseBodyResourceMeta() = default;
};
class GetConnectionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessibility{};
  shared_ptr<map<string, string>> configs{};
  shared_ptr<string> connectionId{};
  shared_ptr<string> connectionName{};
  shared_ptr<string> connectionType{};
  shared_ptr<string> creator{};
  shared_ptr<string> description{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<vector<GetConnectionResponseBodyModels>> models{};
  shared_ptr<string> requestId{};
  shared_ptr<GetConnectionResponseBodyResourceMeta> resourceMeta{};
  shared_ptr<map<string, string>> secrets{};
  shared_ptr<string> workspaceId{};

  GetConnectionResponseBody() {}

  explicit GetConnectionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessibility) {
      res["Accessibility"] = boost::any(*accessibility);
    }
    if (configs) {
      res["Configs"] = boost::any(*configs);
    }
    if (connectionId) {
      res["ConnectionId"] = boost::any(*connectionId);
    }
    if (connectionName) {
      res["ConnectionName"] = boost::any(*connectionName);
    }
    if (connectionType) {
      res["ConnectionType"] = boost::any(*connectionType);
    }
    if (creator) {
      res["Creator"] = boost::any(*creator);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (models) {
      vector<boost::any> temp1;
      for(auto item1:*models){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Models"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceMeta) {
      res["ResourceMeta"] = resourceMeta ? boost::any(resourceMeta->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (secrets) {
      res["Secrets"] = boost::any(*secrets);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accessibility") != m.end() && !m["Accessibility"].empty()) {
      accessibility = make_shared<string>(boost::any_cast<string>(m["Accessibility"]));
    }
    if (m.find("Configs") != m.end() && !m["Configs"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Configs"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      configs = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("ConnectionId") != m.end() && !m["ConnectionId"].empty()) {
      connectionId = make_shared<string>(boost::any_cast<string>(m["ConnectionId"]));
    }
    if (m.find("ConnectionName") != m.end() && !m["ConnectionName"].empty()) {
      connectionName = make_shared<string>(boost::any_cast<string>(m["ConnectionName"]));
    }
    if (m.find("ConnectionType") != m.end() && !m["ConnectionType"].empty()) {
      connectionType = make_shared<string>(boost::any_cast<string>(m["ConnectionType"]));
    }
    if (m.find("Creator") != m.end() && !m["Creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["Creator"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("Models") != m.end() && !m["Models"].empty()) {
      if (typeid(vector<boost::any>) == m["Models"].type()) {
        vector<GetConnectionResponseBodyModels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Models"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetConnectionResponseBodyModels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        models = make_shared<vector<GetConnectionResponseBodyModels>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceMeta") != m.end() && !m["ResourceMeta"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourceMeta"].type()) {
        GetConnectionResponseBodyResourceMeta model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceMeta"]));
        resourceMeta = make_shared<GetConnectionResponseBodyResourceMeta>(model1);
      }
    }
    if (m.find("Secrets") != m.end() && !m["Secrets"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Secrets"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      secrets = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~GetConnectionResponseBody() = default;
};
class GetConnectionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetConnectionResponseBody> body{};

  GetConnectionResponse() {}

  explicit GetConnectionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetConnectionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetConnectionResponseBody>(model1);
      }
    }
  }


  virtual ~GetConnectionResponse() = default;
};
class GetDatasetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessibility{};
  shared_ptr<string> dataSourceType{};
  shared_ptr<string> dataType{};
  shared_ptr<string> datasetId{};
  shared_ptr<string> description{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> importInfo{};
  shared_ptr<vector<Label>> labels{};
  shared_ptr<DatasetVersion> latestVersion{};
  shared_ptr<string> mountAccess{};
  shared_ptr<vector<string>> mountAccessReadWriteRoleIdList{};
  shared_ptr<string> name{};
  shared_ptr<string> options{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> property{};
  shared_ptr<string> provider{};
  shared_ptr<string> providerType{};
  shared_ptr<string> requestId{};
  shared_ptr<string> sourceDatasetId{};
  shared_ptr<string> sourceDatasetVersion{};
  shared_ptr<string> sourceId{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> tagTemplateType{};
  shared_ptr<string> uri{};
  shared_ptr<string> userId{};
  shared_ptr<string> workspaceId{};

  GetDatasetResponseBody() {}

  explicit GetDatasetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessibility) {
      res["Accessibility"] = boost::any(*accessibility);
    }
    if (dataSourceType) {
      res["DataSourceType"] = boost::any(*dataSourceType);
    }
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (datasetId) {
      res["DatasetId"] = boost::any(*datasetId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (importInfo) {
      res["ImportInfo"] = boost::any(*importInfo);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (latestVersion) {
      res["LatestVersion"] = latestVersion ? boost::any(latestVersion->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (mountAccess) {
      res["MountAccess"] = boost::any(*mountAccess);
    }
    if (mountAccessReadWriteRoleIdList) {
      res["MountAccessReadWriteRoleIdList"] = boost::any(*mountAccessReadWriteRoleIdList);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (options) {
      res["Options"] = boost::any(*options);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (property) {
      res["Property"] = boost::any(*property);
    }
    if (provider) {
      res["Provider"] = boost::any(*provider);
    }
    if (providerType) {
      res["ProviderType"] = boost::any(*providerType);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sourceDatasetId) {
      res["SourceDatasetId"] = boost::any(*sourceDatasetId);
    }
    if (sourceDatasetVersion) {
      res["SourceDatasetVersion"] = boost::any(*sourceDatasetVersion);
    }
    if (sourceId) {
      res["SourceId"] = boost::any(*sourceId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (tagTemplateType) {
      res["TagTemplateType"] = boost::any(*tagTemplateType);
    }
    if (uri) {
      res["Uri"] = boost::any(*uri);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accessibility") != m.end() && !m["Accessibility"].empty()) {
      accessibility = make_shared<string>(boost::any_cast<string>(m["Accessibility"]));
    }
    if (m.find("DataSourceType") != m.end() && !m["DataSourceType"].empty()) {
      dataSourceType = make_shared<string>(boost::any_cast<string>(m["DataSourceType"]));
    }
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
    if (m.find("DatasetId") != m.end() && !m["DatasetId"].empty()) {
      datasetId = make_shared<string>(boost::any_cast<string>(m["DatasetId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("ImportInfo") != m.end() && !m["ImportInfo"].empty()) {
      importInfo = make_shared<string>(boost::any_cast<string>(m["ImportInfo"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<Label> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Label model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<Label>>(expect1);
      }
    }
    if (m.find("LatestVersion") != m.end() && !m["LatestVersion"].empty()) {
      if (typeid(map<string, boost::any>) == m["LatestVersion"].type()) {
        DatasetVersion model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LatestVersion"]));
        latestVersion = make_shared<DatasetVersion>(model1);
      }
    }
    if (m.find("MountAccess") != m.end() && !m["MountAccess"].empty()) {
      mountAccess = make_shared<string>(boost::any_cast<string>(m["MountAccess"]));
    }
    if (m.find("MountAccessReadWriteRoleIdList") != m.end() && !m["MountAccessReadWriteRoleIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["MountAccessReadWriteRoleIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["MountAccessReadWriteRoleIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      mountAccessReadWriteRoleIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      options = make_shared<string>(boost::any_cast<string>(m["Options"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("Property") != m.end() && !m["Property"].empty()) {
      property = make_shared<string>(boost::any_cast<string>(m["Property"]));
    }
    if (m.find("Provider") != m.end() && !m["Provider"].empty()) {
      provider = make_shared<string>(boost::any_cast<string>(m["Provider"]));
    }
    if (m.find("ProviderType") != m.end() && !m["ProviderType"].empty()) {
      providerType = make_shared<string>(boost::any_cast<string>(m["ProviderType"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SourceDatasetId") != m.end() && !m["SourceDatasetId"].empty()) {
      sourceDatasetId = make_shared<string>(boost::any_cast<string>(m["SourceDatasetId"]));
    }
    if (m.find("SourceDatasetVersion") != m.end() && !m["SourceDatasetVersion"].empty()) {
      sourceDatasetVersion = make_shared<string>(boost::any_cast<string>(m["SourceDatasetVersion"]));
    }
    if (m.find("SourceId") != m.end() && !m["SourceId"].empty()) {
      sourceId = make_shared<string>(boost::any_cast<string>(m["SourceId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("TagTemplateType") != m.end() && !m["TagTemplateType"].empty()) {
      tagTemplateType = make_shared<string>(boost::any_cast<string>(m["TagTemplateType"]));
    }
    if (m.find("Uri") != m.end() && !m["Uri"].empty()) {
      uri = make_shared<string>(boost::any_cast<string>(m["Uri"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~GetDatasetResponseBody() = default;
};
class GetDatasetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDatasetResponseBody> body{};

  GetDatasetResponse() {}

  explicit GetDatasetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetDatasetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDatasetResponseBody>(model1);
      }
    }
  }


  virtual ~GetDatasetResponse() = default;
};
class GetDatasetFileMetaRequest : public Darabonba::Model {
public:
  shared_ptr<string> datasetVersion{};
  shared_ptr<string> workspaceId{};

  GetDatasetFileMetaRequest() {}

  explicit GetDatasetFileMetaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetVersion) {
      res["DatasetVersion"] = boost::any(*datasetVersion);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetVersion") != m.end() && !m["DatasetVersion"].empty()) {
      datasetVersion = make_shared<string>(boost::any_cast<string>(m["DatasetVersion"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~GetDatasetFileMetaRequest() = default;
};
class GetDatasetFileMetaResponseBody : public Darabonba::Model {
public:
  shared_ptr<DatasetFileMetaContentGet> datasetFileMeta{};
  shared_ptr<string> datasetId{};
  shared_ptr<string> datasetVersion{};
  shared_ptr<string> requestId{};
  shared_ptr<string> workspaceId{};

  GetDatasetFileMetaResponseBody() {}

  explicit GetDatasetFileMetaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetFileMeta) {
      res["DatasetFileMeta"] = datasetFileMeta ? boost::any(datasetFileMeta->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (datasetId) {
      res["DatasetId"] = boost::any(*datasetId);
    }
    if (datasetVersion) {
      res["DatasetVersion"] = boost::any(*datasetVersion);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetFileMeta") != m.end() && !m["DatasetFileMeta"].empty()) {
      if (typeid(map<string, boost::any>) == m["DatasetFileMeta"].type()) {
        DatasetFileMetaContentGet model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DatasetFileMeta"]));
        datasetFileMeta = make_shared<DatasetFileMetaContentGet>(model1);
      }
    }
    if (m.find("DatasetId") != m.end() && !m["DatasetId"].empty()) {
      datasetId = make_shared<string>(boost::any_cast<string>(m["DatasetId"]));
    }
    if (m.find("DatasetVersion") != m.end() && !m["DatasetVersion"].empty()) {
      datasetVersion = make_shared<string>(boost::any_cast<string>(m["DatasetVersion"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~GetDatasetFileMetaResponseBody() = default;
};
class GetDatasetFileMetaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDatasetFileMetaResponseBody> body{};

  GetDatasetFileMetaResponse() {}

  explicit GetDatasetFileMetaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetDatasetFileMetaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDatasetFileMetaResponseBody>(model1);
      }
    }
  }


  virtual ~GetDatasetFileMetaResponse() = default;
};
class GetDatasetFileMetasStatisticsRequest : public Darabonba::Model {
public:
  shared_ptr<string> aggregateBy{};
  shared_ptr<string> datasetVersion{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> workspaceId{};

  GetDatasetFileMetasStatisticsRequest() {}

  explicit GetDatasetFileMetasStatisticsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggregateBy) {
      res["AggregateBy"] = boost::any(*aggregateBy);
    }
    if (datasetVersion) {
      res["DatasetVersion"] = boost::any(*datasetVersion);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AggregateBy") != m.end() && !m["AggregateBy"].empty()) {
      aggregateBy = make_shared<string>(boost::any_cast<string>(m["AggregateBy"]));
    }
    if (m.find("DatasetVersion") != m.end() && !m["DatasetVersion"].empty()) {
      datasetVersion = make_shared<string>(boost::any_cast<string>(m["DatasetVersion"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~GetDatasetFileMetasStatisticsRequest() = default;
};
class GetDatasetFileMetasStatisticsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DatasetFileMetasStat>> datasetFileMetasStats{};
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};

  GetDatasetFileMetasStatisticsResponseBody() {}

  explicit GetDatasetFileMetasStatisticsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetFileMetasStats) {
      vector<boost::any> temp1;
      for(auto item1:*datasetFileMetasStats){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DatasetFileMetasStats"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetFileMetasStats") != m.end() && !m["DatasetFileMetasStats"].empty()) {
      if (typeid(vector<boost::any>) == m["DatasetFileMetasStats"].type()) {
        vector<DatasetFileMetasStat> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DatasetFileMetasStats"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DatasetFileMetasStat model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        datasetFileMetasStats = make_shared<vector<DatasetFileMetasStat>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetDatasetFileMetasStatisticsResponseBody() = default;
};
class GetDatasetFileMetasStatisticsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDatasetFileMetasStatisticsResponseBody> body{};

  GetDatasetFileMetasStatisticsResponse() {}

  explicit GetDatasetFileMetasStatisticsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetDatasetFileMetasStatisticsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDatasetFileMetasStatisticsResponseBody>(model1);
      }
    }
  }


  virtual ~GetDatasetFileMetasStatisticsResponse() = default;
};
class GetDatasetJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> datasetVersion{};
  shared_ptr<string> workspaceId{};

  GetDatasetJobRequest() {}

  explicit GetDatasetJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetVersion) {
      res["DatasetVersion"] = boost::any(*datasetVersion);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetVersion") != m.end() && !m["DatasetVersion"].empty()) {
      datasetVersion = make_shared<string>(boost::any_cast<string>(m["DatasetVersion"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~GetDatasetJobRequest() = default;
};
class GetDatasetJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> completedFileCount{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<long> failedFileCount{};
  shared_ptr<string> finishTime{};
  shared_ptr<string> jobAction{};
  shared_ptr<string> jobMode{};
  shared_ptr<string> jobSpec{};
  shared_ptr<vector<string>> logs{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<long> totalFileCount{};

  GetDatasetJobResponseBody() {}

  explicit GetDatasetJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (completedFileCount) {
      res["CompletedFileCount"] = boost::any(*completedFileCount);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (failedFileCount) {
      res["FailedFileCount"] = boost::any(*failedFileCount);
    }
    if (finishTime) {
      res["FinishTime"] = boost::any(*finishTime);
    }
    if (jobAction) {
      res["JobAction"] = boost::any(*jobAction);
    }
    if (jobMode) {
      res["JobMode"] = boost::any(*jobMode);
    }
    if (jobSpec) {
      res["JobSpec"] = boost::any(*jobSpec);
    }
    if (logs) {
      res["Logs"] = boost::any(*logs);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (totalFileCount) {
      res["TotalFileCount"] = boost::any(*totalFileCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompletedFileCount") != m.end() && !m["CompletedFileCount"].empty()) {
      completedFileCount = make_shared<long>(boost::any_cast<long>(m["CompletedFileCount"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("FailedFileCount") != m.end() && !m["FailedFileCount"].empty()) {
      failedFileCount = make_shared<long>(boost::any_cast<long>(m["FailedFileCount"]));
    }
    if (m.find("FinishTime") != m.end() && !m["FinishTime"].empty()) {
      finishTime = make_shared<string>(boost::any_cast<string>(m["FinishTime"]));
    }
    if (m.find("JobAction") != m.end() && !m["JobAction"].empty()) {
      jobAction = make_shared<string>(boost::any_cast<string>(m["JobAction"]));
    }
    if (m.find("JobMode") != m.end() && !m["JobMode"].empty()) {
      jobMode = make_shared<string>(boost::any_cast<string>(m["JobMode"]));
    }
    if (m.find("JobSpec") != m.end() && !m["JobSpec"].empty()) {
      jobSpec = make_shared<string>(boost::any_cast<string>(m["JobSpec"]));
    }
    if (m.find("Logs") != m.end() && !m["Logs"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Logs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Logs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      logs = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TotalFileCount") != m.end() && !m["TotalFileCount"].empty()) {
      totalFileCount = make_shared<long>(boost::any_cast<long>(m["TotalFileCount"]));
    }
  }


  virtual ~GetDatasetJobResponseBody() = default;
};
class GetDatasetJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDatasetJobResponseBody> body{};

  GetDatasetJobResponse() {}

  explicit GetDatasetJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetDatasetJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDatasetJobResponseBody>(model1);
      }
    }
  }


  virtual ~GetDatasetJobResponse() = default;
};
class GetDatasetJobConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> workspaceId{};

  GetDatasetJobConfigRequest() {}

  explicit GetDatasetJobConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~GetDatasetJobConfigRequest() = default;
};
class GetDatasetJobConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> config{};
  shared_ptr<string> configType{};
  shared_ptr<string> createTime{};
  shared_ptr<string> datasetId{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> workspaceId{};

  GetDatasetJobConfigResponseBody() {}

  explicit GetDatasetJobConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (configType) {
      res["ConfigType"] = boost::any(*configType);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (datasetId) {
      res["DatasetId"] = boost::any(*datasetId);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("ConfigType") != m.end() && !m["ConfigType"].empty()) {
      configType = make_shared<string>(boost::any_cast<string>(m["ConfigType"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DatasetId") != m.end() && !m["DatasetId"].empty()) {
      datasetId = make_shared<string>(boost::any_cast<string>(m["DatasetId"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~GetDatasetJobConfigResponseBody() = default;
};
class GetDatasetJobConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDatasetJobConfigResponseBody> body{};

  GetDatasetJobConfigResponse() {}

  explicit GetDatasetJobConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetDatasetJobConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDatasetJobConfigResponseBody>(model1);
      }
    }
  }


  virtual ~GetDatasetJobConfigResponse() = default;
};
class GetDatasetVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> dataCount{};
  shared_ptr<long> dataSize{};
  shared_ptr<string> dataSourceType{};
  shared_ptr<string> datasetId{};
  shared_ptr<string> description{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> importInfo{};
  shared_ptr<vector<Label>> labels{};
  shared_ptr<string> mountAccess{};
  shared_ptr<string> options{};
  shared_ptr<string> property{};
  shared_ptr<string> requestId{};
  shared_ptr<string> sourceId{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> uri{};
  shared_ptr<string> versionName{};

  GetDatasetVersionResponseBody() {}

  explicit GetDatasetVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataCount) {
      res["DataCount"] = boost::any(*dataCount);
    }
    if (dataSize) {
      res["DataSize"] = boost::any(*dataSize);
    }
    if (dataSourceType) {
      res["DataSourceType"] = boost::any(*dataSourceType);
    }
    if (datasetId) {
      res["DatasetId"] = boost::any(*datasetId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (importInfo) {
      res["ImportInfo"] = boost::any(*importInfo);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (mountAccess) {
      res["MountAccess"] = boost::any(*mountAccess);
    }
    if (options) {
      res["Options"] = boost::any(*options);
    }
    if (property) {
      res["Property"] = boost::any(*property);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sourceId) {
      res["SourceId"] = boost::any(*sourceId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (uri) {
      res["Uri"] = boost::any(*uri);
    }
    if (versionName) {
      res["VersionName"] = boost::any(*versionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataCount") != m.end() && !m["DataCount"].empty()) {
      dataCount = make_shared<long>(boost::any_cast<long>(m["DataCount"]));
    }
    if (m.find("DataSize") != m.end() && !m["DataSize"].empty()) {
      dataSize = make_shared<long>(boost::any_cast<long>(m["DataSize"]));
    }
    if (m.find("DataSourceType") != m.end() && !m["DataSourceType"].empty()) {
      dataSourceType = make_shared<string>(boost::any_cast<string>(m["DataSourceType"]));
    }
    if (m.find("DatasetId") != m.end() && !m["DatasetId"].empty()) {
      datasetId = make_shared<string>(boost::any_cast<string>(m["DatasetId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("ImportInfo") != m.end() && !m["ImportInfo"].empty()) {
      importInfo = make_shared<string>(boost::any_cast<string>(m["ImportInfo"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<Label> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Label model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<Label>>(expect1);
      }
    }
    if (m.find("MountAccess") != m.end() && !m["MountAccess"].empty()) {
      mountAccess = make_shared<string>(boost::any_cast<string>(m["MountAccess"]));
    }
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      options = make_shared<string>(boost::any_cast<string>(m["Options"]));
    }
    if (m.find("Property") != m.end() && !m["Property"].empty()) {
      property = make_shared<string>(boost::any_cast<string>(m["Property"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SourceId") != m.end() && !m["SourceId"].empty()) {
      sourceId = make_shared<string>(boost::any_cast<string>(m["SourceId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("Uri") != m.end() && !m["Uri"].empty()) {
      uri = make_shared<string>(boost::any_cast<string>(m["Uri"]));
    }
    if (m.find("VersionName") != m.end() && !m["VersionName"].empty()) {
      versionName = make_shared<string>(boost::any_cast<string>(m["VersionName"]));
    }
  }


  virtual ~GetDatasetVersionResponseBody() = default;
};
class GetDatasetVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDatasetVersionResponseBody> body{};

  GetDatasetVersionResponse() {}

  explicit GetDatasetVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetDatasetVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDatasetVersionResponseBody>(model1);
      }
    }
  }


  virtual ~GetDatasetVersionResponse() = default;
};
class GetDefaultWorkspaceRequest : public Darabonba::Model {
public:
  shared_ptr<bool> verbose{};

  GetDefaultWorkspaceRequest() {}

  explicit GetDefaultWorkspaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (verbose) {
      res["Verbose"] = boost::any(*verbose);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Verbose") != m.end() && !m["Verbose"].empty()) {
      verbose = make_shared<bool>(boost::any_cast<bool>(m["Verbose"]));
    }
  }


  virtual ~GetDefaultWorkspaceRequest() = default;
};
class GetDefaultWorkspaceResponseBodyConditions : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> type{};

  GetDefaultWorkspaceResponseBodyConditions() {}

  explicit GetDefaultWorkspaceResponseBodyConditions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetDefaultWorkspaceResponseBodyConditions() = default;
};
class GetDefaultWorkspaceResponseBodyOwner : public Darabonba::Model {
public:
  shared_ptr<string> userId{};
  shared_ptr<string> userKp{};
  shared_ptr<string> userName{};

  GetDefaultWorkspaceResponseBodyOwner() {}

  explicit GetDefaultWorkspaceResponseBodyOwner(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userKp) {
      res["UserKp"] = boost::any(*userKp);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserKp") != m.end() && !m["UserKp"].empty()) {
      userKp = make_shared<string>(boost::any_cast<string>(m["UserKp"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~GetDefaultWorkspaceResponseBodyOwner() = default;
};
class GetDefaultWorkspaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<GetDefaultWorkspaceResponseBodyConditions>> conditions{};
  shared_ptr<string> creator{};
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<vector<string>> envTypes{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<GetDefaultWorkspaceResponseBodyOwner> owner{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<string> workspaceId{};
  shared_ptr<string> workspaceName{};

  GetDefaultWorkspaceResponseBody() {}

  explicit GetDefaultWorkspaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conditions) {
      vector<boost::any> temp1;
      for(auto item1:*conditions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Conditions"] = boost::any(temp1);
    }
    if (creator) {
      res["Creator"] = boost::any(*creator);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (envTypes) {
      res["EnvTypes"] = boost::any(*envTypes);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (owner) {
      res["Owner"] = owner ? boost::any(owner->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    if (workspaceName) {
      res["WorkspaceName"] = boost::any(*workspaceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Conditions") != m.end() && !m["Conditions"].empty()) {
      if (typeid(vector<boost::any>) == m["Conditions"].type()) {
        vector<GetDefaultWorkspaceResponseBodyConditions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Conditions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetDefaultWorkspaceResponseBodyConditions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        conditions = make_shared<vector<GetDefaultWorkspaceResponseBodyConditions>>(expect1);
      }
    }
    if (m.find("Creator") != m.end() && !m["Creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["Creator"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("EnvTypes") != m.end() && !m["EnvTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["EnvTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["EnvTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      envTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      if (typeid(map<string, boost::any>) == m["Owner"].type()) {
        GetDefaultWorkspaceResponseBodyOwner model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Owner"]));
        owner = make_shared<GetDefaultWorkspaceResponseBodyOwner>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
    if (m.find("WorkspaceName") != m.end() && !m["WorkspaceName"].empty()) {
      workspaceName = make_shared<string>(boost::any_cast<string>(m["WorkspaceName"]));
    }
  }


  virtual ~GetDefaultWorkspaceResponseBody() = default;
};
class GetDefaultWorkspaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDefaultWorkspaceResponseBody> body{};

  GetDefaultWorkspaceResponse() {}

  explicit GetDefaultWorkspaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetDefaultWorkspaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDefaultWorkspaceResponseBody>(model1);
      }
    }
  }


  virtual ~GetDefaultWorkspaceResponse() = default;
};
class GetExperimentRequest : public Darabonba::Model {
public:
  shared_ptr<bool> verbose{};

  GetExperimentRequest() {}

  explicit GetExperimentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (verbose) {
      res["Verbose"] = boost::any(*verbose);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Verbose") != m.end() && !m["Verbose"].empty()) {
      verbose = make_shared<bool>(boost::any_cast<bool>(m["Verbose"]));
    }
  }


  virtual ~GetExperimentRequest() = default;
};
class GetExperimentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Experiment> body{};

  GetExperimentResponse() {}

  explicit GetExperimentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        Experiment model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Experiment>(model1);
      }
    }
  }


  virtual ~GetExperimentResponse() = default;
};
class GetImageRequest : public Darabonba::Model {
public:
  shared_ptr<bool> verbose{};

  GetImageRequest() {}

  explicit GetImageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (verbose) {
      res["Verbose"] = boost::any(*verbose);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Verbose") != m.end() && !m["Verbose"].empty()) {
      verbose = make_shared<bool>(boost::any_cast<bool>(m["Verbose"]));
    }
  }


  virtual ~GetImageRequest() = default;
};
class GetImageResponseBodyLabels : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  GetImageResponseBodyLabels() {}

  explicit GetImageResponseBodyLabels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetImageResponseBodyLabels() = default;
};
class GetImageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessibility{};
  shared_ptr<string> description{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> imageUri{};
  shared_ptr<vector<GetImageResponseBodyLabels>> labels{};
  shared_ptr<string> name{};
  shared_ptr<string> parentUserId{};
  shared_ptr<string> requestId{};
  shared_ptr<long> size{};
  shared_ptr<string> sourceId{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> userId{};
  shared_ptr<string> workspaceId{};

  GetImageResponseBody() {}

  explicit GetImageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessibility) {
      res["Accessibility"] = boost::any(*accessibility);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (imageUri) {
      res["ImageUri"] = boost::any(*imageUri);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (parentUserId) {
      res["ParentUserId"] = boost::any(*parentUserId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (sourceId) {
      res["SourceId"] = boost::any(*sourceId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accessibility") != m.end() && !m["Accessibility"].empty()) {
      accessibility = make_shared<string>(boost::any_cast<string>(m["Accessibility"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("ImageUri") != m.end() && !m["ImageUri"].empty()) {
      imageUri = make_shared<string>(boost::any_cast<string>(m["ImageUri"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<GetImageResponseBodyLabels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetImageResponseBodyLabels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<GetImageResponseBodyLabels>>(expect1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ParentUserId") != m.end() && !m["ParentUserId"].empty()) {
      parentUserId = make_shared<string>(boost::any_cast<string>(m["ParentUserId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("SourceId") != m.end() && !m["SourceId"].empty()) {
      sourceId = make_shared<string>(boost::any_cast<string>(m["SourceId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~GetImageResponseBody() = default;
};
class GetImageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetImageResponseBody> body{};

  GetImageResponse() {}

  explicit GetImageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetImageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetImageResponseBody>(model1);
      }
    }
  }


  virtual ~GetImageResponse() = default;
};
class GetMemberRequest : public Darabonba::Model {
public:
  shared_ptr<string> memberId{};
  shared_ptr<string> userId{};

  GetMemberRequest() {}

  explicit GetMemberRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (memberId) {
      res["MemberId"] = boost::any(*memberId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MemberId") != m.end() && !m["MemberId"].empty()) {
      memberId = make_shared<string>(boost::any_cast<string>(m["MemberId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~GetMemberRequest() = default;
};
class GetMemberResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> memberId{};
  shared_ptr<string> memberName{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> roles{};
  shared_ptr<string> userId{};

  GetMemberResponseBody() {}

  explicit GetMemberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (memberId) {
      res["MemberId"] = boost::any(*memberId);
    }
    if (memberName) {
      res["MemberName"] = boost::any(*memberName);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (roles) {
      res["Roles"] = boost::any(*roles);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("MemberId") != m.end() && !m["MemberId"].empty()) {
      memberId = make_shared<string>(boost::any_cast<string>(m["MemberId"]));
    }
    if (m.find("MemberName") != m.end() && !m["MemberName"].empty()) {
      memberName = make_shared<string>(boost::any_cast<string>(m["MemberName"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Roles") != m.end() && !m["Roles"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Roles"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Roles"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      roles = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~GetMemberResponseBody() = default;
};
class GetMemberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetMemberResponseBody> body{};

  GetMemberResponse() {}

  explicit GetMemberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetMemberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMemberResponseBody>(model1);
      }
    }
  }


  virtual ~GetMemberResponse() = default;
};
class GetModelResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessibility{};
  shared_ptr<string> domain{};
  shared_ptr<map<string, boost::any>> extraInfo{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<vector<Label>> labels{};
  shared_ptr<ModelVersion> latestVersion{};
  shared_ptr<string> modelDescription{};
  shared_ptr<string> modelDoc{};
  shared_ptr<string> modelId{};
  shared_ptr<string> modelName{};
  shared_ptr<string> modelType{};
  shared_ptr<long> orderNumber{};
  shared_ptr<string> origin{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> provider{};
  shared_ptr<string> requestId{};
  shared_ptr<string> task{};
  shared_ptr<string> userId{};
  shared_ptr<string> workspaceId{};

  GetModelResponseBody() {}

  explicit GetModelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessibility) {
      res["Accessibility"] = boost::any(*accessibility);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (extraInfo) {
      res["ExtraInfo"] = boost::any(*extraInfo);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (latestVersion) {
      res["LatestVersion"] = latestVersion ? boost::any(latestVersion->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (modelDescription) {
      res["ModelDescription"] = boost::any(*modelDescription);
    }
    if (modelDoc) {
      res["ModelDoc"] = boost::any(*modelDoc);
    }
    if (modelId) {
      res["ModelId"] = boost::any(*modelId);
    }
    if (modelName) {
      res["ModelName"] = boost::any(*modelName);
    }
    if (modelType) {
      res["ModelType"] = boost::any(*modelType);
    }
    if (orderNumber) {
      res["OrderNumber"] = boost::any(*orderNumber);
    }
    if (origin) {
      res["Origin"] = boost::any(*origin);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (provider) {
      res["Provider"] = boost::any(*provider);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (task) {
      res["Task"] = boost::any(*task);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accessibility") != m.end() && !m["Accessibility"].empty()) {
      accessibility = make_shared<string>(boost::any_cast<string>(m["Accessibility"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("ExtraInfo") != m.end() && !m["ExtraInfo"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ExtraInfo"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extraInfo = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<Label> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Label model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<Label>>(expect1);
      }
    }
    if (m.find("LatestVersion") != m.end() && !m["LatestVersion"].empty()) {
      if (typeid(map<string, boost::any>) == m["LatestVersion"].type()) {
        ModelVersion model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LatestVersion"]));
        latestVersion = make_shared<ModelVersion>(model1);
      }
    }
    if (m.find("ModelDescription") != m.end() && !m["ModelDescription"].empty()) {
      modelDescription = make_shared<string>(boost::any_cast<string>(m["ModelDescription"]));
    }
    if (m.find("ModelDoc") != m.end() && !m["ModelDoc"].empty()) {
      modelDoc = make_shared<string>(boost::any_cast<string>(m["ModelDoc"]));
    }
    if (m.find("ModelId") != m.end() && !m["ModelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["ModelId"]));
    }
    if (m.find("ModelName") != m.end() && !m["ModelName"].empty()) {
      modelName = make_shared<string>(boost::any_cast<string>(m["ModelName"]));
    }
    if (m.find("ModelType") != m.end() && !m["ModelType"].empty()) {
      modelType = make_shared<string>(boost::any_cast<string>(m["ModelType"]));
    }
    if (m.find("OrderNumber") != m.end() && !m["OrderNumber"].empty()) {
      orderNumber = make_shared<long>(boost::any_cast<long>(m["OrderNumber"]));
    }
    if (m.find("Origin") != m.end() && !m["Origin"].empty()) {
      origin = make_shared<string>(boost::any_cast<string>(m["Origin"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("Provider") != m.end() && !m["Provider"].empty()) {
      provider = make_shared<string>(boost::any_cast<string>(m["Provider"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Task") != m.end() && !m["Task"].empty()) {
      task = make_shared<string>(boost::any_cast<string>(m["Task"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~GetModelResponseBody() = default;
};
class GetModelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetModelResponseBody> body{};

  GetModelResponse() {}

  explicit GetModelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetModelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetModelResponseBody>(model1);
      }
    }
  }


  virtual ~GetModelResponse() = default;
};
class GetModelVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> approvalStatus{};
  shared_ptr<map<string, boost::any>> compressionSpec{};
  shared_ptr<map<string, boost::any>> evaluationSpec{};
  shared_ptr<map<string, boost::any>> extraInfo{};
  shared_ptr<string> formatType{};
  shared_ptr<string> frameworkType{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<map<string, boost::any>> inferenceSpec{};
  shared_ptr<vector<Label>> labels{};
  shared_ptr<map<string, boost::any>> metrics{};
  shared_ptr<string> options{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> sourceId{};
  shared_ptr<string> sourceType{};
  shared_ptr<map<string, boost::any>> trainingSpec{};
  shared_ptr<string> uri{};
  shared_ptr<string> userId{};
  shared_ptr<string> versionDescription{};
  shared_ptr<string> versionName{};

  GetModelVersionResponseBody() {}

  explicit GetModelVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (approvalStatus) {
      res["ApprovalStatus"] = boost::any(*approvalStatus);
    }
    if (compressionSpec) {
      res["CompressionSpec"] = boost::any(*compressionSpec);
    }
    if (evaluationSpec) {
      res["EvaluationSpec"] = boost::any(*evaluationSpec);
    }
    if (extraInfo) {
      res["ExtraInfo"] = boost::any(*extraInfo);
    }
    if (formatType) {
      res["FormatType"] = boost::any(*formatType);
    }
    if (frameworkType) {
      res["FrameworkType"] = boost::any(*frameworkType);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (inferenceSpec) {
      res["InferenceSpec"] = boost::any(*inferenceSpec);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (metrics) {
      res["Metrics"] = boost::any(*metrics);
    }
    if (options) {
      res["Options"] = boost::any(*options);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sourceId) {
      res["SourceId"] = boost::any(*sourceId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (trainingSpec) {
      res["TrainingSpec"] = boost::any(*trainingSpec);
    }
    if (uri) {
      res["Uri"] = boost::any(*uri);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (versionDescription) {
      res["VersionDescription"] = boost::any(*versionDescription);
    }
    if (versionName) {
      res["VersionName"] = boost::any(*versionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApprovalStatus") != m.end() && !m["ApprovalStatus"].empty()) {
      approvalStatus = make_shared<string>(boost::any_cast<string>(m["ApprovalStatus"]));
    }
    if (m.find("CompressionSpec") != m.end() && !m["CompressionSpec"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["CompressionSpec"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      compressionSpec = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("EvaluationSpec") != m.end() && !m["EvaluationSpec"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["EvaluationSpec"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      evaluationSpec = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("ExtraInfo") != m.end() && !m["ExtraInfo"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ExtraInfo"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extraInfo = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("FormatType") != m.end() && !m["FormatType"].empty()) {
      formatType = make_shared<string>(boost::any_cast<string>(m["FormatType"]));
    }
    if (m.find("FrameworkType") != m.end() && !m["FrameworkType"].empty()) {
      frameworkType = make_shared<string>(boost::any_cast<string>(m["FrameworkType"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("InferenceSpec") != m.end() && !m["InferenceSpec"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["InferenceSpec"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      inferenceSpec = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<Label> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Label model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<Label>>(expect1);
      }
    }
    if (m.find("Metrics") != m.end() && !m["Metrics"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Metrics"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      metrics = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      options = make_shared<string>(boost::any_cast<string>(m["Options"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SourceId") != m.end() && !m["SourceId"].empty()) {
      sourceId = make_shared<string>(boost::any_cast<string>(m["SourceId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("TrainingSpec") != m.end() && !m["TrainingSpec"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["TrainingSpec"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      trainingSpec = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Uri") != m.end() && !m["Uri"].empty()) {
      uri = make_shared<string>(boost::any_cast<string>(m["Uri"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("VersionDescription") != m.end() && !m["VersionDescription"].empty()) {
      versionDescription = make_shared<string>(boost::any_cast<string>(m["VersionDescription"]));
    }
    if (m.find("VersionName") != m.end() && !m["VersionName"].empty()) {
      versionName = make_shared<string>(boost::any_cast<string>(m["VersionName"]));
    }
  }


  virtual ~GetModelVersionResponseBody() = default;
};
class GetModelVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetModelVersionResponseBody> body{};

  GetModelVersionResponse() {}

  explicit GetModelVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetModelVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetModelVersionResponseBody>(model1);
      }
    }
  }


  virtual ~GetModelVersionResponse() = default;
};
class GetPermissionRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessibility{};
  shared_ptr<string> creator{};
  shared_ptr<map<string, boost::any>> labels{};
  shared_ptr<string> option{};
  shared_ptr<string> resource{};

  GetPermissionRequest() {}

  explicit GetPermissionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessibility) {
      res["Accessibility"] = boost::any(*accessibility);
    }
    if (creator) {
      res["Creator"] = boost::any(*creator);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (option) {
      res["Option"] = boost::any(*option);
    }
    if (resource) {
      res["Resource"] = boost::any(*resource);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accessibility") != m.end() && !m["Accessibility"].empty()) {
      accessibility = make_shared<string>(boost::any_cast<string>(m["Accessibility"]));
    }
    if (m.find("Creator") != m.end() && !m["Creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["Creator"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Labels"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      labels = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Option") != m.end() && !m["Option"].empty()) {
      option = make_shared<string>(boost::any_cast<string>(m["Option"]));
    }
    if (m.find("Resource") != m.end() && !m["Resource"].empty()) {
      resource = make_shared<string>(boost::any_cast<string>(m["Resource"]));
    }
  }


  virtual ~GetPermissionRequest() = default;
};
class GetPermissionShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessibility{};
  shared_ptr<string> creator{};
  shared_ptr<string> labelsShrink{};
  shared_ptr<string> option{};
  shared_ptr<string> resource{};

  GetPermissionShrinkRequest() {}

  explicit GetPermissionShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessibility) {
      res["Accessibility"] = boost::any(*accessibility);
    }
    if (creator) {
      res["Creator"] = boost::any(*creator);
    }
    if (labelsShrink) {
      res["Labels"] = boost::any(*labelsShrink);
    }
    if (option) {
      res["Option"] = boost::any(*option);
    }
    if (resource) {
      res["Resource"] = boost::any(*resource);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accessibility") != m.end() && !m["Accessibility"].empty()) {
      accessibility = make_shared<string>(boost::any_cast<string>(m["Accessibility"]));
    }
    if (m.find("Creator") != m.end() && !m["Creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["Creator"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      labelsShrink = make_shared<string>(boost::any_cast<string>(m["Labels"]));
    }
    if (m.find("Option") != m.end() && !m["Option"].empty()) {
      option = make_shared<string>(boost::any_cast<string>(m["Option"]));
    }
    if (m.find("Resource") != m.end() && !m["Resource"].empty()) {
      resource = make_shared<string>(boost::any_cast<string>(m["Resource"]));
    }
  }


  virtual ~GetPermissionShrinkRequest() = default;
};
class GetPermissionResponseBodyPermissionRules : public Darabonba::Model {
public:
  shared_ptr<string> accessibility{};
  shared_ptr<string> entityAccessType{};

  GetPermissionResponseBodyPermissionRules() {}

  explicit GetPermissionResponseBodyPermissionRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessibility) {
      res["Accessibility"] = boost::any(*accessibility);
    }
    if (entityAccessType) {
      res["EntityAccessType"] = boost::any(*entityAccessType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accessibility") != m.end() && !m["Accessibility"].empty()) {
      accessibility = make_shared<string>(boost::any_cast<string>(m["Accessibility"]));
    }
    if (m.find("EntityAccessType") != m.end() && !m["EntityAccessType"].empty()) {
      entityAccessType = make_shared<string>(boost::any_cast<string>(m["EntityAccessType"]));
    }
  }


  virtual ~GetPermissionResponseBodyPermissionRules() = default;
};
class GetPermissionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> permissionCode{};
  shared_ptr<vector<GetPermissionResponseBodyPermissionRules>> permissionRules{};
  shared_ptr<string> requestId{};

  GetPermissionResponseBody() {}

  explicit GetPermissionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (permissionCode) {
      res["PermissionCode"] = boost::any(*permissionCode);
    }
    if (permissionRules) {
      vector<boost::any> temp1;
      for(auto item1:*permissionRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PermissionRules"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PermissionCode") != m.end() && !m["PermissionCode"].empty()) {
      permissionCode = make_shared<string>(boost::any_cast<string>(m["PermissionCode"]));
    }
    if (m.find("PermissionRules") != m.end() && !m["PermissionRules"].empty()) {
      if (typeid(vector<boost::any>) == m["PermissionRules"].type()) {
        vector<GetPermissionResponseBodyPermissionRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PermissionRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPermissionResponseBodyPermissionRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        permissionRules = make_shared<vector<GetPermissionResponseBodyPermissionRules>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetPermissionResponseBody() = default;
};
class GetPermissionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPermissionResponseBody> body{};

  GetPermissionResponse() {}

  explicit GetPermissionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetPermissionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPermissionResponseBody>(model1);
      }
    }
  }


  virtual ~GetPermissionResponse() = default;
};
class GetRunRequest : public Darabonba::Model {
public:
  shared_ptr<bool> verbose{};

  GetRunRequest() {}

  explicit GetRunRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (verbose) {
      res["Verbose"] = boost::any(*verbose);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Verbose") != m.end() && !m["Verbose"].empty()) {
      verbose = make_shared<bool>(boost::any_cast<bool>(m["Verbose"]));
    }
  }


  virtual ~GetRunRequest() = default;
};
class GetRunResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Run> body{};

  GetRunResponse() {}

  explicit GetRunResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        Run model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Run>(model1);
      }
    }
  }


  virtual ~GetRunResponse() = default;
};
class GetWorkspaceRequest : public Darabonba::Model {
public:
  shared_ptr<bool> verbose{};

  GetWorkspaceRequest() {}

  explicit GetWorkspaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (verbose) {
      res["Verbose"] = boost::any(*verbose);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Verbose") != m.end() && !m["Verbose"].empty()) {
      verbose = make_shared<bool>(boost::any_cast<bool>(m["Verbose"]));
    }
  }


  virtual ~GetWorkspaceRequest() = default;
};
class GetWorkspaceResponseBodyOwner : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> userId{};
  shared_ptr<string> userKp{};
  shared_ptr<string> userName{};

  GetWorkspaceResponseBodyOwner() {}

  explicit GetWorkspaceResponseBodyOwner(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userKp) {
      res["UserKp"] = boost::any(*userKp);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserKp") != m.end() && !m["UserKp"].empty()) {
      userKp = make_shared<string>(boost::any_cast<string>(m["UserKp"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~GetWorkspaceResponseBodyOwner() = default;
};
class GetWorkspaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> adminNames{};
  shared_ptr<string> creator{};
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<vector<string>> envTypes{};
  shared_ptr<map<string, boost::any>> extraInfos{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<bool> isDefault{};
  shared_ptr<GetWorkspaceResponseBodyOwner> owner{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> status{};
  shared_ptr<string> workspaceId{};
  shared_ptr<string> workspaceName{};

  GetWorkspaceResponseBody() {}

  explicit GetWorkspaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (adminNames) {
      res["AdminNames"] = boost::any(*adminNames);
    }
    if (creator) {
      res["Creator"] = boost::any(*creator);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (envTypes) {
      res["EnvTypes"] = boost::any(*envTypes);
    }
    if (extraInfos) {
      res["ExtraInfos"] = boost::any(*extraInfos);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (isDefault) {
      res["IsDefault"] = boost::any(*isDefault);
    }
    if (owner) {
      res["Owner"] = owner ? boost::any(owner->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    if (workspaceName) {
      res["WorkspaceName"] = boost::any(*workspaceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdminNames") != m.end() && !m["AdminNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AdminNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AdminNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      adminNames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Creator") != m.end() && !m["Creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["Creator"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("EnvTypes") != m.end() && !m["EnvTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["EnvTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["EnvTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      envTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ExtraInfos") != m.end() && !m["ExtraInfos"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ExtraInfos"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extraInfos = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("IsDefault") != m.end() && !m["IsDefault"].empty()) {
      isDefault = make_shared<bool>(boost::any_cast<bool>(m["IsDefault"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      if (typeid(map<string, boost::any>) == m["Owner"].type()) {
        GetWorkspaceResponseBodyOwner model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Owner"]));
        owner = make_shared<GetWorkspaceResponseBodyOwner>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
    if (m.find("WorkspaceName") != m.end() && !m["WorkspaceName"].empty()) {
      workspaceName = make_shared<string>(boost::any_cast<string>(m["WorkspaceName"]));
    }
  }


  virtual ~GetWorkspaceResponseBody() = default;
};
class GetWorkspaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetWorkspaceResponseBody> body{};

  GetWorkspaceResponse() {}

  explicit GetWorkspaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetWorkspaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetWorkspaceResponseBody>(model1);
      }
    }
  }


  virtual ~GetWorkspaceResponse() = default;
};
class ListCodeSourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> order{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> workspaceId{};

  ListCodeSourcesRequest() {}

  explicit ListCodeSourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~ListCodeSourcesRequest() = default;
};
class ListCodeSourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<CodeSourceItem>> codeSources{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListCodeSourcesResponseBody() {}

  explicit ListCodeSourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (codeSources) {
      vector<boost::any> temp1;
      for(auto item1:*codeSources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CodeSources"] = boost::any(temp1);
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
    if (m.find("CodeSources") != m.end() && !m["CodeSources"].empty()) {
      if (typeid(vector<boost::any>) == m["CodeSources"].type()) {
        vector<CodeSourceItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CodeSources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CodeSourceItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        codeSources = make_shared<vector<CodeSourceItem>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListCodeSourcesResponseBody() = default;
};
class ListCodeSourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListCodeSourcesResponseBody> body{};

  ListCodeSourcesResponse() {}

  explicit ListCodeSourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListCodeSourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListCodeSourcesResponseBody>(model1);
      }
    }
  }


  virtual ~ListCodeSourcesResponse() = default;
};
class ListConfigsRequest : public Darabonba::Model {
public:
  shared_ptr<string> categoryName{};
  shared_ptr<string> configKeys{};
  shared_ptr<string> labels{};
  shared_ptr<string> verbose{};

  ListConfigsRequest() {}

  explicit ListConfigsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryName) {
      res["CategoryName"] = boost::any(*categoryName);
    }
    if (configKeys) {
      res["ConfigKeys"] = boost::any(*configKeys);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (verbose) {
      res["Verbose"] = boost::any(*verbose);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryName") != m.end() && !m["CategoryName"].empty()) {
      categoryName = make_shared<string>(boost::any_cast<string>(m["CategoryName"]));
    }
    if (m.find("ConfigKeys") != m.end() && !m["ConfigKeys"].empty()) {
      configKeys = make_shared<string>(boost::any_cast<string>(m["ConfigKeys"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      labels = make_shared<string>(boost::any_cast<string>(m["Labels"]));
    }
    if (m.find("Verbose") != m.end() && !m["Verbose"].empty()) {
      verbose = make_shared<string>(boost::any_cast<string>(m["Verbose"]));
    }
  }


  virtual ~ListConfigsRequest() = default;
};
class ListConfigsResponseBodyConfigsLabels : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListConfigsResponseBodyConfigsLabels() {}

  explicit ListConfigsResponseBodyConfigsLabels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListConfigsResponseBodyConfigsLabels() = default;
};
class ListConfigsResponseBodyConfigs : public Darabonba::Model {
public:
  shared_ptr<string> configKey{};
  shared_ptr<string> configValue{};
  shared_ptr<vector<ListConfigsResponseBodyConfigsLabels>> labels{};

  ListConfigsResponseBodyConfigs() {}

  explicit ListConfigsResponseBodyConfigs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configKey) {
      res["ConfigKey"] = boost::any(*configKey);
    }
    if (configValue) {
      res["ConfigValue"] = boost::any(*configValue);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigKey") != m.end() && !m["ConfigKey"].empty()) {
      configKey = make_shared<string>(boost::any_cast<string>(m["ConfigKey"]));
    }
    if (m.find("ConfigValue") != m.end() && !m["ConfigValue"].empty()) {
      configValue = make_shared<string>(boost::any_cast<string>(m["ConfigValue"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<ListConfigsResponseBodyConfigsLabels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListConfigsResponseBodyConfigsLabels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<ListConfigsResponseBodyConfigsLabels>>(expect1);
      }
    }
  }


  virtual ~ListConfigsResponseBodyConfigs() = default;
};
class ListConfigsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListConfigsResponseBodyConfigs>> configs{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListConfigsResponseBody() {}

  explicit ListConfigsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configs) {
      vector<boost::any> temp1;
      for(auto item1:*configs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Configs"] = boost::any(temp1);
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
    if (m.find("Configs") != m.end() && !m["Configs"].empty()) {
      if (typeid(vector<boost::any>) == m["Configs"].type()) {
        vector<ListConfigsResponseBodyConfigs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Configs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListConfigsResponseBodyConfigs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configs = make_shared<vector<ListConfigsResponseBodyConfigs>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListConfigsResponseBody() = default;
};
class ListConfigsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListConfigsResponseBody> body{};

  ListConfigsResponse() {}

  explicit ListConfigsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListConfigsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListConfigsResponseBody>(model1);
      }
    }
  }


  virtual ~ListConfigsResponse() = default;
};
class ListConnectionsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> connectionIds{};
  shared_ptr<string> connectionName{};
  shared_ptr<vector<string>> connectionTypes{};
  shared_ptr<string> encryptOption{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> model{};
  shared_ptr<vector<string>> modelTypes{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> order{};
  shared_ptr<string> sortBy{};
  shared_ptr<bool> toolCall{};
  shared_ptr<string> workspaceId{};

  ListConnectionsRequest() {}

  explicit ListConnectionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionIds) {
      res["ConnectionIds"] = boost::any(*connectionIds);
    }
    if (connectionName) {
      res["ConnectionName"] = boost::any(*connectionName);
    }
    if (connectionTypes) {
      res["ConnectionTypes"] = boost::any(*connectionTypes);
    }
    if (encryptOption) {
      res["EncryptOption"] = boost::any(*encryptOption);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (model) {
      res["Model"] = boost::any(*model);
    }
    if (modelTypes) {
      res["ModelTypes"] = boost::any(*modelTypes);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (toolCall) {
      res["ToolCall"] = boost::any(*toolCall);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectionIds") != m.end() && !m["ConnectionIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ConnectionIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ConnectionIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      connectionIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ConnectionName") != m.end() && !m["ConnectionName"].empty()) {
      connectionName = make_shared<string>(boost::any_cast<string>(m["ConnectionName"]));
    }
    if (m.find("ConnectionTypes") != m.end() && !m["ConnectionTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ConnectionTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ConnectionTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      connectionTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("EncryptOption") != m.end() && !m["EncryptOption"].empty()) {
      encryptOption = make_shared<string>(boost::any_cast<string>(m["EncryptOption"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      model = make_shared<string>(boost::any_cast<string>(m["Model"]));
    }
    if (m.find("ModelTypes") != m.end() && !m["ModelTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ModelTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ModelTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      modelTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("ToolCall") != m.end() && !m["ToolCall"].empty()) {
      toolCall = make_shared<bool>(boost::any_cast<bool>(m["ToolCall"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~ListConnectionsRequest() = default;
};
class ListConnectionsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> connectionIdsShrink{};
  shared_ptr<string> connectionName{};
  shared_ptr<string> connectionTypesShrink{};
  shared_ptr<string> encryptOption{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> model{};
  shared_ptr<string> modelTypesShrink{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> order{};
  shared_ptr<string> sortBy{};
  shared_ptr<bool> toolCall{};
  shared_ptr<string> workspaceId{};

  ListConnectionsShrinkRequest() {}

  explicit ListConnectionsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionIdsShrink) {
      res["ConnectionIds"] = boost::any(*connectionIdsShrink);
    }
    if (connectionName) {
      res["ConnectionName"] = boost::any(*connectionName);
    }
    if (connectionTypesShrink) {
      res["ConnectionTypes"] = boost::any(*connectionTypesShrink);
    }
    if (encryptOption) {
      res["EncryptOption"] = boost::any(*encryptOption);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (model) {
      res["Model"] = boost::any(*model);
    }
    if (modelTypesShrink) {
      res["ModelTypes"] = boost::any(*modelTypesShrink);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (toolCall) {
      res["ToolCall"] = boost::any(*toolCall);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectionIds") != m.end() && !m["ConnectionIds"].empty()) {
      connectionIdsShrink = make_shared<string>(boost::any_cast<string>(m["ConnectionIds"]));
    }
    if (m.find("ConnectionName") != m.end() && !m["ConnectionName"].empty()) {
      connectionName = make_shared<string>(boost::any_cast<string>(m["ConnectionName"]));
    }
    if (m.find("ConnectionTypes") != m.end() && !m["ConnectionTypes"].empty()) {
      connectionTypesShrink = make_shared<string>(boost::any_cast<string>(m["ConnectionTypes"]));
    }
    if (m.find("EncryptOption") != m.end() && !m["EncryptOption"].empty()) {
      encryptOption = make_shared<string>(boost::any_cast<string>(m["EncryptOption"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      model = make_shared<string>(boost::any_cast<string>(m["Model"]));
    }
    if (m.find("ModelTypes") != m.end() && !m["ModelTypes"].empty()) {
      modelTypesShrink = make_shared<string>(boost::any_cast<string>(m["ModelTypes"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("ToolCall") != m.end() && !m["ToolCall"].empty()) {
      toolCall = make_shared<bool>(boost::any_cast<bool>(m["ToolCall"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~ListConnectionsShrinkRequest() = default;
};
class ListConnectionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<Connection>> connections{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListConnectionsResponseBody() {}

  explicit ListConnectionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connections) {
      vector<boost::any> temp1;
      for(auto item1:*connections){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Connections"] = boost::any(temp1);
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
    if (m.find("Connections") != m.end() && !m["Connections"].empty()) {
      if (typeid(vector<boost::any>) == m["Connections"].type()) {
        vector<Connection> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Connections"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Connection model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        connections = make_shared<vector<Connection>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
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


  virtual ~ListConnectionsResponseBody() = default;
};
class ListConnectionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListConnectionsResponseBody> body{};

  ListConnectionsResponse() {}

  explicit ListConnectionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListConnectionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListConnectionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListConnectionsResponse() = default;
};
class ListDatasetFileMetasRequest : public Darabonba::Model {
public:
  shared_ptr<string> datasetVersion{};
  shared_ptr<string> endFileUpdateTime{};
  shared_ptr<string> endTagUpdateTime{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> order{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> queryFileDir{};
  shared_ptr<string> queryFileName{};
  shared_ptr<vector<string>> queryFileTypeIncludeAny{};
  shared_ptr<string> queryImage{};
  shared_ptr<vector<string>> queryTagsExclude{};
  shared_ptr<vector<string>> queryTagsIncludeAll{};
  shared_ptr<vector<string>> queryTagsIncludeAny{};
  shared_ptr<string> queryText{};
  shared_ptr<string> queryType{};
  shared_ptr<double> scoreThreshold{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> startFileUpdateTime{};
  shared_ptr<string> startTagUpdateTime{};
  shared_ptr<string> thumbnailMode{};
  shared_ptr<long> topK{};
  shared_ptr<string> workspaceId{};

  ListDatasetFileMetasRequest() {}

  explicit ListDatasetFileMetasRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetVersion) {
      res["DatasetVersion"] = boost::any(*datasetVersion);
    }
    if (endFileUpdateTime) {
      res["EndFileUpdateTime"] = boost::any(*endFileUpdateTime);
    }
    if (endTagUpdateTime) {
      res["EndTagUpdateTime"] = boost::any(*endTagUpdateTime);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (queryFileDir) {
      res["QueryFileDir"] = boost::any(*queryFileDir);
    }
    if (queryFileName) {
      res["QueryFileName"] = boost::any(*queryFileName);
    }
    if (queryFileTypeIncludeAny) {
      res["QueryFileTypeIncludeAny"] = boost::any(*queryFileTypeIncludeAny);
    }
    if (queryImage) {
      res["QueryImage"] = boost::any(*queryImage);
    }
    if (queryTagsExclude) {
      res["QueryTagsExclude"] = boost::any(*queryTagsExclude);
    }
    if (queryTagsIncludeAll) {
      res["QueryTagsIncludeAll"] = boost::any(*queryTagsIncludeAll);
    }
    if (queryTagsIncludeAny) {
      res["QueryTagsIncludeAny"] = boost::any(*queryTagsIncludeAny);
    }
    if (queryText) {
      res["QueryText"] = boost::any(*queryText);
    }
    if (queryType) {
      res["QueryType"] = boost::any(*queryType);
    }
    if (scoreThreshold) {
      res["ScoreThreshold"] = boost::any(*scoreThreshold);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (startFileUpdateTime) {
      res["StartFileUpdateTime"] = boost::any(*startFileUpdateTime);
    }
    if (startTagUpdateTime) {
      res["StartTagUpdateTime"] = boost::any(*startTagUpdateTime);
    }
    if (thumbnailMode) {
      res["ThumbnailMode"] = boost::any(*thumbnailMode);
    }
    if (topK) {
      res["TopK"] = boost::any(*topK);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetVersion") != m.end() && !m["DatasetVersion"].empty()) {
      datasetVersion = make_shared<string>(boost::any_cast<string>(m["DatasetVersion"]));
    }
    if (m.find("EndFileUpdateTime") != m.end() && !m["EndFileUpdateTime"].empty()) {
      endFileUpdateTime = make_shared<string>(boost::any_cast<string>(m["EndFileUpdateTime"]));
    }
    if (m.find("EndTagUpdateTime") != m.end() && !m["EndTagUpdateTime"].empty()) {
      endTagUpdateTime = make_shared<string>(boost::any_cast<string>(m["EndTagUpdateTime"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("QueryFileDir") != m.end() && !m["QueryFileDir"].empty()) {
      queryFileDir = make_shared<string>(boost::any_cast<string>(m["QueryFileDir"]));
    }
    if (m.find("QueryFileName") != m.end() && !m["QueryFileName"].empty()) {
      queryFileName = make_shared<string>(boost::any_cast<string>(m["QueryFileName"]));
    }
    if (m.find("QueryFileTypeIncludeAny") != m.end() && !m["QueryFileTypeIncludeAny"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["QueryFileTypeIncludeAny"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["QueryFileTypeIncludeAny"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      queryFileTypeIncludeAny = make_shared<vector<string>>(toVec1);
    }
    if (m.find("QueryImage") != m.end() && !m["QueryImage"].empty()) {
      queryImage = make_shared<string>(boost::any_cast<string>(m["QueryImage"]));
    }
    if (m.find("QueryTagsExclude") != m.end() && !m["QueryTagsExclude"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["QueryTagsExclude"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["QueryTagsExclude"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      queryTagsExclude = make_shared<vector<string>>(toVec1);
    }
    if (m.find("QueryTagsIncludeAll") != m.end() && !m["QueryTagsIncludeAll"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["QueryTagsIncludeAll"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["QueryTagsIncludeAll"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      queryTagsIncludeAll = make_shared<vector<string>>(toVec1);
    }
    if (m.find("QueryTagsIncludeAny") != m.end() && !m["QueryTagsIncludeAny"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["QueryTagsIncludeAny"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["QueryTagsIncludeAny"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      queryTagsIncludeAny = make_shared<vector<string>>(toVec1);
    }
    if (m.find("QueryText") != m.end() && !m["QueryText"].empty()) {
      queryText = make_shared<string>(boost::any_cast<string>(m["QueryText"]));
    }
    if (m.find("QueryType") != m.end() && !m["QueryType"].empty()) {
      queryType = make_shared<string>(boost::any_cast<string>(m["QueryType"]));
    }
    if (m.find("ScoreThreshold") != m.end() && !m["ScoreThreshold"].empty()) {
      scoreThreshold = make_shared<double>(boost::any_cast<double>(m["ScoreThreshold"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("StartFileUpdateTime") != m.end() && !m["StartFileUpdateTime"].empty()) {
      startFileUpdateTime = make_shared<string>(boost::any_cast<string>(m["StartFileUpdateTime"]));
    }
    if (m.find("StartTagUpdateTime") != m.end() && !m["StartTagUpdateTime"].empty()) {
      startTagUpdateTime = make_shared<string>(boost::any_cast<string>(m["StartTagUpdateTime"]));
    }
    if (m.find("ThumbnailMode") != m.end() && !m["ThumbnailMode"].empty()) {
      thumbnailMode = make_shared<string>(boost::any_cast<string>(m["ThumbnailMode"]));
    }
    if (m.find("TopK") != m.end() && !m["TopK"].empty()) {
      topK = make_shared<long>(boost::any_cast<long>(m["TopK"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~ListDatasetFileMetasRequest() = default;
};
class ListDatasetFileMetasShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> datasetVersion{};
  shared_ptr<string> endFileUpdateTime{};
  shared_ptr<string> endTagUpdateTime{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> order{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> queryFileDir{};
  shared_ptr<string> queryFileName{};
  shared_ptr<string> queryFileTypeIncludeAnyShrink{};
  shared_ptr<string> queryImage{};
  shared_ptr<string> queryTagsExcludeShrink{};
  shared_ptr<string> queryTagsIncludeAllShrink{};
  shared_ptr<string> queryTagsIncludeAnyShrink{};
  shared_ptr<string> queryText{};
  shared_ptr<string> queryType{};
  shared_ptr<double> scoreThreshold{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> startFileUpdateTime{};
  shared_ptr<string> startTagUpdateTime{};
  shared_ptr<string> thumbnailMode{};
  shared_ptr<long> topK{};
  shared_ptr<string> workspaceId{};

  ListDatasetFileMetasShrinkRequest() {}

  explicit ListDatasetFileMetasShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetVersion) {
      res["DatasetVersion"] = boost::any(*datasetVersion);
    }
    if (endFileUpdateTime) {
      res["EndFileUpdateTime"] = boost::any(*endFileUpdateTime);
    }
    if (endTagUpdateTime) {
      res["EndTagUpdateTime"] = boost::any(*endTagUpdateTime);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (queryFileDir) {
      res["QueryFileDir"] = boost::any(*queryFileDir);
    }
    if (queryFileName) {
      res["QueryFileName"] = boost::any(*queryFileName);
    }
    if (queryFileTypeIncludeAnyShrink) {
      res["QueryFileTypeIncludeAny"] = boost::any(*queryFileTypeIncludeAnyShrink);
    }
    if (queryImage) {
      res["QueryImage"] = boost::any(*queryImage);
    }
    if (queryTagsExcludeShrink) {
      res["QueryTagsExclude"] = boost::any(*queryTagsExcludeShrink);
    }
    if (queryTagsIncludeAllShrink) {
      res["QueryTagsIncludeAll"] = boost::any(*queryTagsIncludeAllShrink);
    }
    if (queryTagsIncludeAnyShrink) {
      res["QueryTagsIncludeAny"] = boost::any(*queryTagsIncludeAnyShrink);
    }
    if (queryText) {
      res["QueryText"] = boost::any(*queryText);
    }
    if (queryType) {
      res["QueryType"] = boost::any(*queryType);
    }
    if (scoreThreshold) {
      res["ScoreThreshold"] = boost::any(*scoreThreshold);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (startFileUpdateTime) {
      res["StartFileUpdateTime"] = boost::any(*startFileUpdateTime);
    }
    if (startTagUpdateTime) {
      res["StartTagUpdateTime"] = boost::any(*startTagUpdateTime);
    }
    if (thumbnailMode) {
      res["ThumbnailMode"] = boost::any(*thumbnailMode);
    }
    if (topK) {
      res["TopK"] = boost::any(*topK);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetVersion") != m.end() && !m["DatasetVersion"].empty()) {
      datasetVersion = make_shared<string>(boost::any_cast<string>(m["DatasetVersion"]));
    }
    if (m.find("EndFileUpdateTime") != m.end() && !m["EndFileUpdateTime"].empty()) {
      endFileUpdateTime = make_shared<string>(boost::any_cast<string>(m["EndFileUpdateTime"]));
    }
    if (m.find("EndTagUpdateTime") != m.end() && !m["EndTagUpdateTime"].empty()) {
      endTagUpdateTime = make_shared<string>(boost::any_cast<string>(m["EndTagUpdateTime"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("QueryFileDir") != m.end() && !m["QueryFileDir"].empty()) {
      queryFileDir = make_shared<string>(boost::any_cast<string>(m["QueryFileDir"]));
    }
    if (m.find("QueryFileName") != m.end() && !m["QueryFileName"].empty()) {
      queryFileName = make_shared<string>(boost::any_cast<string>(m["QueryFileName"]));
    }
    if (m.find("QueryFileTypeIncludeAny") != m.end() && !m["QueryFileTypeIncludeAny"].empty()) {
      queryFileTypeIncludeAnyShrink = make_shared<string>(boost::any_cast<string>(m["QueryFileTypeIncludeAny"]));
    }
    if (m.find("QueryImage") != m.end() && !m["QueryImage"].empty()) {
      queryImage = make_shared<string>(boost::any_cast<string>(m["QueryImage"]));
    }
    if (m.find("QueryTagsExclude") != m.end() && !m["QueryTagsExclude"].empty()) {
      queryTagsExcludeShrink = make_shared<string>(boost::any_cast<string>(m["QueryTagsExclude"]));
    }
    if (m.find("QueryTagsIncludeAll") != m.end() && !m["QueryTagsIncludeAll"].empty()) {
      queryTagsIncludeAllShrink = make_shared<string>(boost::any_cast<string>(m["QueryTagsIncludeAll"]));
    }
    if (m.find("QueryTagsIncludeAny") != m.end() && !m["QueryTagsIncludeAny"].empty()) {
      queryTagsIncludeAnyShrink = make_shared<string>(boost::any_cast<string>(m["QueryTagsIncludeAny"]));
    }
    if (m.find("QueryText") != m.end() && !m["QueryText"].empty()) {
      queryText = make_shared<string>(boost::any_cast<string>(m["QueryText"]));
    }
    if (m.find("QueryType") != m.end() && !m["QueryType"].empty()) {
      queryType = make_shared<string>(boost::any_cast<string>(m["QueryType"]));
    }
    if (m.find("ScoreThreshold") != m.end() && !m["ScoreThreshold"].empty()) {
      scoreThreshold = make_shared<double>(boost::any_cast<double>(m["ScoreThreshold"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("StartFileUpdateTime") != m.end() && !m["StartFileUpdateTime"].empty()) {
      startFileUpdateTime = make_shared<string>(boost::any_cast<string>(m["StartFileUpdateTime"]));
    }
    if (m.find("StartTagUpdateTime") != m.end() && !m["StartTagUpdateTime"].empty()) {
      startTagUpdateTime = make_shared<string>(boost::any_cast<string>(m["StartTagUpdateTime"]));
    }
    if (m.find("ThumbnailMode") != m.end() && !m["ThumbnailMode"].empty()) {
      thumbnailMode = make_shared<string>(boost::any_cast<string>(m["ThumbnailMode"]));
    }
    if (m.find("TopK") != m.end() && !m["TopK"].empty()) {
      topK = make_shared<long>(boost::any_cast<long>(m["TopK"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~ListDatasetFileMetasShrinkRequest() = default;
};
class ListDatasetFileMetasResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DatasetFileMeta>> datasetFileMetas{};
  shared_ptr<string> datasetId{};
  shared_ptr<string> datasetVersion{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};
  shared_ptr<string> workspaceId{};

  ListDatasetFileMetasResponseBody() {}

  explicit ListDatasetFileMetasResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetFileMetas) {
      vector<boost::any> temp1;
      for(auto item1:*datasetFileMetas){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DatasetFileMetas"] = boost::any(temp1);
    }
    if (datasetId) {
      res["DatasetId"] = boost::any(*datasetId);
    }
    if (datasetVersion) {
      res["DatasetVersion"] = boost::any(*datasetVersion);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetFileMetas") != m.end() && !m["DatasetFileMetas"].empty()) {
      if (typeid(vector<boost::any>) == m["DatasetFileMetas"].type()) {
        vector<DatasetFileMeta> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DatasetFileMetas"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DatasetFileMeta model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        datasetFileMetas = make_shared<vector<DatasetFileMeta>>(expect1);
      }
    }
    if (m.find("DatasetId") != m.end() && !m["DatasetId"].empty()) {
      datasetId = make_shared<string>(boost::any_cast<string>(m["DatasetId"]));
    }
    if (m.find("DatasetVersion") != m.end() && !m["DatasetVersion"].empty()) {
      datasetVersion = make_shared<string>(boost::any_cast<string>(m["DatasetVersion"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~ListDatasetFileMetasResponseBody() = default;
};
class ListDatasetFileMetasResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDatasetFileMetasResponseBody> body{};

  ListDatasetFileMetasResponse() {}

  explicit ListDatasetFileMetasResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListDatasetFileMetasResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDatasetFileMetasResponseBody>(model1);
      }
    }
  }


  virtual ~ListDatasetFileMetasResponse() = default;
};
class ListDatasetJobConfigsRequest : public Darabonba::Model {
public:
  shared_ptr<string> configType{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> workspaceId{};

  ListDatasetJobConfigsRequest() {}

  explicit ListDatasetJobConfigsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configType) {
      res["ConfigType"] = boost::any(*configType);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigType") != m.end() && !m["ConfigType"].empty()) {
      configType = make_shared<string>(boost::any_cast<string>(m["ConfigType"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~ListDatasetJobConfigsRequest() = default;
};
class ListDatasetJobConfigsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DatasetJobConfig>> datasetJobConfigs{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListDatasetJobConfigsResponseBody() {}

  explicit ListDatasetJobConfigsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetJobConfigs) {
      vector<boost::any> temp1;
      for(auto item1:*datasetJobConfigs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DatasetJobConfigs"] = boost::any(temp1);
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
    if (m.find("DatasetJobConfigs") != m.end() && !m["DatasetJobConfigs"].empty()) {
      if (typeid(vector<boost::any>) == m["DatasetJobConfigs"].type()) {
        vector<DatasetJobConfig> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DatasetJobConfigs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DatasetJobConfig model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        datasetJobConfigs = make_shared<vector<DatasetJobConfig>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListDatasetJobConfigsResponseBody() = default;
};
class ListDatasetJobConfigsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDatasetJobConfigsResponseBody> body{};

  ListDatasetJobConfigsResponse() {}

  explicit ListDatasetJobConfigsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListDatasetJobConfigsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDatasetJobConfigsResponseBody>(model1);
      }
    }
  }


  virtual ~ListDatasetJobConfigsResponse() = default;
};
class ListDatasetJobsRequest : public Darabonba::Model {
public:
  shared_ptr<string> datasetVersion{};
  shared_ptr<string> jobAction{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> workspaceId{};

  ListDatasetJobsRequest() {}

  explicit ListDatasetJobsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetVersion) {
      res["DatasetVersion"] = boost::any(*datasetVersion);
    }
    if (jobAction) {
      res["JobAction"] = boost::any(*jobAction);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetVersion") != m.end() && !m["DatasetVersion"].empty()) {
      datasetVersion = make_shared<string>(boost::any_cast<string>(m["DatasetVersion"]));
    }
    if (m.find("JobAction") != m.end() && !m["JobAction"].empty()) {
      jobAction = make_shared<string>(boost::any_cast<string>(m["JobAction"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~ListDatasetJobsRequest() = default;
};
class ListDatasetJobsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DatasetJob>> datasetJobs{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListDatasetJobsResponseBody() {}

  explicit ListDatasetJobsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetJobs) {
      vector<boost::any> temp1;
      for(auto item1:*datasetJobs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DatasetJobs"] = boost::any(temp1);
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
    if (m.find("DatasetJobs") != m.end() && !m["DatasetJobs"].empty()) {
      if (typeid(vector<boost::any>) == m["DatasetJobs"].type()) {
        vector<DatasetJob> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DatasetJobs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DatasetJob model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        datasetJobs = make_shared<vector<DatasetJob>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListDatasetJobsResponseBody() = default;
};
class ListDatasetJobsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDatasetJobsResponseBody> body{};

  ListDatasetJobsResponse() {}

  explicit ListDatasetJobsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListDatasetJobsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDatasetJobsResponseBody>(model1);
      }
    }
  }


  virtual ~ListDatasetJobsResponse() = default;
};
class ListDatasetVersionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> labelKeys{};
  shared_ptr<string> labelValues{};
  shared_ptr<string> order{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> properties{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> sourceId{};
  shared_ptr<string> sourceTypes{};

  ListDatasetVersionsRequest() {}

  explicit ListDatasetVersionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labelKeys) {
      res["LabelKeys"] = boost::any(*labelKeys);
    }
    if (labelValues) {
      res["LabelValues"] = boost::any(*labelValues);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (properties) {
      res["Properties"] = boost::any(*properties);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (sourceId) {
      res["SourceId"] = boost::any(*sourceId);
    }
    if (sourceTypes) {
      res["SourceTypes"] = boost::any(*sourceTypes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LabelKeys") != m.end() && !m["LabelKeys"].empty()) {
      labelKeys = make_shared<string>(boost::any_cast<string>(m["LabelKeys"]));
    }
    if (m.find("LabelValues") != m.end() && !m["LabelValues"].empty()) {
      labelValues = make_shared<string>(boost::any_cast<string>(m["LabelValues"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Properties") != m.end() && !m["Properties"].empty()) {
      properties = make_shared<string>(boost::any_cast<string>(m["Properties"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("SourceId") != m.end() && !m["SourceId"].empty()) {
      sourceId = make_shared<string>(boost::any_cast<string>(m["SourceId"]));
    }
    if (m.find("SourceTypes") != m.end() && !m["SourceTypes"].empty()) {
      sourceTypes = make_shared<string>(boost::any_cast<string>(m["SourceTypes"]));
    }
  }


  virtual ~ListDatasetVersionsRequest() = default;
};
class ListDatasetVersionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DatasetVersion>> datasetVersions{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListDatasetVersionsResponseBody() {}

  explicit ListDatasetVersionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetVersions) {
      vector<boost::any> temp1;
      for(auto item1:*datasetVersions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DatasetVersions"] = boost::any(temp1);
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetVersions") != m.end() && !m["DatasetVersions"].empty()) {
      if (typeid(vector<boost::any>) == m["DatasetVersions"].type()) {
        vector<DatasetVersion> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DatasetVersions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DatasetVersion model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        datasetVersions = make_shared<vector<DatasetVersion>>(expect1);
      }
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
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListDatasetVersionsResponseBody() = default;
};
class ListDatasetVersionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDatasetVersionsResponseBody> body{};

  ListDatasetVersionsResponse() {}

  explicit ListDatasetVersionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListDatasetVersionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDatasetVersionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListDatasetVersionsResponse() = default;
};
class ListDatasetsRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataSourceTypes{};
  shared_ptr<string> dataTypes{};
  shared_ptr<string> label{};
  shared_ptr<string> name{};
  shared_ptr<string> order{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> properties{};
  shared_ptr<string> provider{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> sourceDatasetId{};
  shared_ptr<string> sourceId{};
  shared_ptr<string> sourceTypes{};
  shared_ptr<string> workspaceId{};

  ListDatasetsRequest() {}

  explicit ListDatasetsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSourceTypes) {
      res["DataSourceTypes"] = boost::any(*dataSourceTypes);
    }
    if (dataTypes) {
      res["DataTypes"] = boost::any(*dataTypes);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (properties) {
      res["Properties"] = boost::any(*properties);
    }
    if (provider) {
      res["Provider"] = boost::any(*provider);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (sourceDatasetId) {
      res["SourceDatasetId"] = boost::any(*sourceDatasetId);
    }
    if (sourceId) {
      res["SourceId"] = boost::any(*sourceId);
    }
    if (sourceTypes) {
      res["SourceTypes"] = boost::any(*sourceTypes);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataSourceTypes") != m.end() && !m["DataSourceTypes"].empty()) {
      dataSourceTypes = make_shared<string>(boost::any_cast<string>(m["DataSourceTypes"]));
    }
    if (m.find("DataTypes") != m.end() && !m["DataTypes"].empty()) {
      dataTypes = make_shared<string>(boost::any_cast<string>(m["DataTypes"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Properties") != m.end() && !m["Properties"].empty()) {
      properties = make_shared<string>(boost::any_cast<string>(m["Properties"]));
    }
    if (m.find("Provider") != m.end() && !m["Provider"].empty()) {
      provider = make_shared<string>(boost::any_cast<string>(m["Provider"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("SourceDatasetId") != m.end() && !m["SourceDatasetId"].empty()) {
      sourceDatasetId = make_shared<string>(boost::any_cast<string>(m["SourceDatasetId"]));
    }
    if (m.find("SourceId") != m.end() && !m["SourceId"].empty()) {
      sourceId = make_shared<string>(boost::any_cast<string>(m["SourceId"]));
    }
    if (m.find("SourceTypes") != m.end() && !m["SourceTypes"].empty()) {
      sourceTypes = make_shared<string>(boost::any_cast<string>(m["SourceTypes"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~ListDatasetsRequest() = default;
};
class ListDatasetsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<Dataset>> datasets{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListDatasetsResponseBody() {}

  explicit ListDatasetsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasets) {
      vector<boost::any> temp1;
      for(auto item1:*datasets){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Datasets"] = boost::any(temp1);
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
    if (m.find("Datasets") != m.end() && !m["Datasets"].empty()) {
      if (typeid(vector<boost::any>) == m["Datasets"].type()) {
        vector<Dataset> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Datasets"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Dataset model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        datasets = make_shared<vector<Dataset>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListDatasetsResponseBody() = default;
};
class ListDatasetsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDatasetsResponseBody> body{};

  ListDatasetsResponse() {}

  explicit ListDatasetsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListDatasetsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDatasetsResponseBody>(model1);
      }
    }
  }


  virtual ~ListDatasetsResponse() = default;
};
class ListExperimentRequestOptions : public Darabonba::Model {
public:
  shared_ptr<string> matchNameExactly{};

  ListExperimentRequestOptions() {}

  explicit ListExperimentRequestOptions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (matchNameExactly) {
      res["match_name_exactly"] = boost::any(*matchNameExactly);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("match_name_exactly") != m.end() && !m["match_name_exactly"].empty()) {
      matchNameExactly = make_shared<string>(boost::any_cast<string>(m["match_name_exactly"]));
    }
  }


  virtual ~ListExperimentRequestOptions() = default;
};
class ListExperimentRequest : public Darabonba::Model {
public:
  shared_ptr<string> labels{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> name{};
  shared_ptr<ListExperimentRequestOptions> options{};
  shared_ptr<string> order{};
  shared_ptr<string> orderBy{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageToken{};
  shared_ptr<string> sortBy{};
  shared_ptr<bool> verbose{};
  shared_ptr<string> workspaceId{};

  ListExperimentRequest() {}

  explicit ListExperimentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (options) {
      res["Options"] = options ? boost::any(options->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (orderBy) {
      res["OrderBy"] = boost::any(*orderBy);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageToken) {
      res["PageToken"] = boost::any(*pageToken);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (verbose) {
      res["Verbose"] = boost::any(*verbose);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      labels = make_shared<string>(boost::any_cast<string>(m["Labels"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      if (typeid(map<string, boost::any>) == m["Options"].type()) {
        ListExperimentRequestOptions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Options"]));
        options = make_shared<ListExperimentRequestOptions>(model1);
      }
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("OrderBy") != m.end() && !m["OrderBy"].empty()) {
      orderBy = make_shared<string>(boost::any_cast<string>(m["OrderBy"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageToken") != m.end() && !m["PageToken"].empty()) {
      pageToken = make_shared<long>(boost::any_cast<long>(m["PageToken"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("Verbose") != m.end() && !m["Verbose"].empty()) {
      verbose = make_shared<bool>(boost::any_cast<bool>(m["Verbose"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~ListExperimentRequest() = default;
};
class ListExperimentShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> labels{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> name{};
  shared_ptr<string> optionsShrink{};
  shared_ptr<string> order{};
  shared_ptr<string> orderBy{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageToken{};
  shared_ptr<string> sortBy{};
  shared_ptr<bool> verbose{};
  shared_ptr<string> workspaceId{};

  ListExperimentShrinkRequest() {}

  explicit ListExperimentShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (optionsShrink) {
      res["Options"] = boost::any(*optionsShrink);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (orderBy) {
      res["OrderBy"] = boost::any(*orderBy);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageToken) {
      res["PageToken"] = boost::any(*pageToken);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (verbose) {
      res["Verbose"] = boost::any(*verbose);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      labels = make_shared<string>(boost::any_cast<string>(m["Labels"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      optionsShrink = make_shared<string>(boost::any_cast<string>(m["Options"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("OrderBy") != m.end() && !m["OrderBy"].empty()) {
      orderBy = make_shared<string>(boost::any_cast<string>(m["OrderBy"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageToken") != m.end() && !m["PageToken"].empty()) {
      pageToken = make_shared<long>(boost::any_cast<long>(m["PageToken"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("Verbose") != m.end() && !m["Verbose"].empty()) {
      verbose = make_shared<bool>(boost::any_cast<bool>(m["Verbose"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~ListExperimentShrinkRequest() = default;
};
class ListExperimentResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<Experiment>> experiments{};
  shared_ptr<long> nextPageToken{};
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};

  ListExperimentResponseBody() {}

  explicit ListExperimentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (experiments) {
      vector<boost::any> temp1;
      for(auto item1:*experiments){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Experiments"] = boost::any(temp1);
    }
    if (nextPageToken) {
      res["NextPageToken"] = boost::any(*nextPageToken);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Experiments") != m.end() && !m["Experiments"].empty()) {
      if (typeid(vector<boost::any>) == m["Experiments"].type()) {
        vector<Experiment> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Experiments"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Experiment model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        experiments = make_shared<vector<Experiment>>(expect1);
      }
    }
    if (m.find("NextPageToken") != m.end() && !m["NextPageToken"].empty()) {
      nextPageToken = make_shared<long>(boost::any_cast<long>(m["NextPageToken"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ListExperimentResponseBody() = default;
};
class ListExperimentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListExperimentResponseBody> body{};

  ListExperimentResponse() {}

  explicit ListExperimentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListExperimentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListExperimentResponseBody>(model1);
      }
    }
  }


  virtual ~ListExperimentResponse() = default;
};
class ListImageLabelsRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageId{};
  shared_ptr<string> labelFilter{};
  shared_ptr<string> labelKeys{};
  shared_ptr<string> region{};
  shared_ptr<string> workspaceId{};

  ListImageLabelsRequest() {}

  explicit ListImageLabelsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (labelFilter) {
      res["LabelFilter"] = boost::any(*labelFilter);
    }
    if (labelKeys) {
      res["LabelKeys"] = boost::any(*labelKeys);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("LabelFilter") != m.end() && !m["LabelFilter"].empty()) {
      labelFilter = make_shared<string>(boost::any_cast<string>(m["LabelFilter"]));
    }
    if (m.find("LabelKeys") != m.end() && !m["LabelKeys"].empty()) {
      labelKeys = make_shared<string>(boost::any_cast<string>(m["LabelKeys"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~ListImageLabelsRequest() = default;
};
class ListImageLabelsResponseBodyLabels : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListImageLabelsResponseBodyLabels() {}

  explicit ListImageLabelsResponseBodyLabels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListImageLabelsResponseBodyLabels() = default;
};
class ListImageLabelsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListImageLabelsResponseBodyLabels>> labels{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListImageLabelsResponseBody() {}

  explicit ListImageLabelsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
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
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<ListImageLabelsResponseBodyLabels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListImageLabelsResponseBodyLabels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<ListImageLabelsResponseBodyLabels>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListImageLabelsResponseBody() = default;
};
class ListImageLabelsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListImageLabelsResponseBody> body{};

  ListImageLabelsResponse() {}

  explicit ListImageLabelsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListImageLabelsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListImageLabelsResponseBody>(model1);
      }
    }
  }


  virtual ~ListImageLabelsResponse() = default;
};
class ListImagesRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessibility{};
  shared_ptr<string> imageUri{};
  shared_ptr<string> labels{};
  shared_ptr<string> name{};
  shared_ptr<string> order{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> query{};
  shared_ptr<string> sortBy{};
  shared_ptr<bool> verbose{};
  shared_ptr<string> workspaceId{};

  ListImagesRequest() {}

  explicit ListImagesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessibility) {
      res["Accessibility"] = boost::any(*accessibility);
    }
    if (imageUri) {
      res["ImageUri"] = boost::any(*imageUri);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (query) {
      res["Query"] = boost::any(*query);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (verbose) {
      res["Verbose"] = boost::any(*verbose);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accessibility") != m.end() && !m["Accessibility"].empty()) {
      accessibility = make_shared<string>(boost::any_cast<string>(m["Accessibility"]));
    }
    if (m.find("ImageUri") != m.end() && !m["ImageUri"].empty()) {
      imageUri = make_shared<string>(boost::any_cast<string>(m["ImageUri"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      labels = make_shared<string>(boost::any_cast<string>(m["Labels"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Query") != m.end() && !m["Query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["Query"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("Verbose") != m.end() && !m["Verbose"].empty()) {
      verbose = make_shared<bool>(boost::any_cast<bool>(m["Verbose"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~ListImagesRequest() = default;
};
class ListImagesResponseBodyImagesLabels : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListImagesResponseBodyImagesLabels() {}

  explicit ListImagesResponseBodyImagesLabels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListImagesResponseBodyImagesLabels() = default;
};
class ListImagesResponseBodyImages : public Darabonba::Model {
public:
  shared_ptr<string> accessibility{};
  shared_ptr<string> description{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> imageId{};
  shared_ptr<string> imageUri{};
  shared_ptr<vector<ListImagesResponseBodyImagesLabels>> labels{};
  shared_ptr<string> name{};
  shared_ptr<string> parentUserId{};
  shared_ptr<long> size{};
  shared_ptr<string> sourceId{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> userId{};
  shared_ptr<string> workspaceId{};

  ListImagesResponseBodyImages() {}

  explicit ListImagesResponseBodyImages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessibility) {
      res["Accessibility"] = boost::any(*accessibility);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (imageUri) {
      res["ImageUri"] = boost::any(*imageUri);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (parentUserId) {
      res["ParentUserId"] = boost::any(*parentUserId);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (sourceId) {
      res["SourceId"] = boost::any(*sourceId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accessibility") != m.end() && !m["Accessibility"].empty()) {
      accessibility = make_shared<string>(boost::any_cast<string>(m["Accessibility"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("ImageUri") != m.end() && !m["ImageUri"].empty()) {
      imageUri = make_shared<string>(boost::any_cast<string>(m["ImageUri"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<ListImagesResponseBodyImagesLabels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListImagesResponseBodyImagesLabels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<ListImagesResponseBodyImagesLabels>>(expect1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ParentUserId") != m.end() && !m["ParentUserId"].empty()) {
      parentUserId = make_shared<string>(boost::any_cast<string>(m["ParentUserId"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("SourceId") != m.end() && !m["SourceId"].empty()) {
      sourceId = make_shared<string>(boost::any_cast<string>(m["SourceId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~ListImagesResponseBodyImages() = default;
};
class ListImagesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListImagesResponseBodyImages>> images{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListImagesResponseBody() {}

  explicit ListImagesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (images) {
      vector<boost::any> temp1;
      for(auto item1:*images){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Images"] = boost::any(temp1);
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
    if (m.find("Images") != m.end() && !m["Images"].empty()) {
      if (typeid(vector<boost::any>) == m["Images"].type()) {
        vector<ListImagesResponseBodyImages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Images"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListImagesResponseBodyImages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        images = make_shared<vector<ListImagesResponseBodyImages>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListImagesResponseBody() = default;
};
class ListImagesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListImagesResponseBody> body{};

  ListImagesResponse() {}

  explicit ListImagesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListImagesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListImagesResponseBody>(model1);
      }
    }
  }


  virtual ~ListImagesResponse() = default;
};
class ListMembersRequest : public Darabonba::Model {
public:
  shared_ptr<string> memberName{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> roles{};

  ListMembersRequest() {}

  explicit ListMembersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (memberName) {
      res["MemberName"] = boost::any(*memberName);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (roles) {
      res["Roles"] = boost::any(*roles);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MemberName") != m.end() && !m["MemberName"].empty()) {
      memberName = make_shared<string>(boost::any_cast<string>(m["MemberName"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Roles") != m.end() && !m["Roles"].empty()) {
      roles = make_shared<string>(boost::any_cast<string>(m["Roles"]));
    }
  }


  virtual ~ListMembersRequest() = default;
};
class ListMembersResponseBodyMembers : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<string> displayName{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> memberId{};
  shared_ptr<string> memberName{};
  shared_ptr<vector<string>> roles{};
  shared_ptr<string> userId{};

  ListMembersResponseBodyMembers() {}

  explicit ListMembersResponseBodyMembers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (memberId) {
      res["MemberId"] = boost::any(*memberId);
    }
    if (memberName) {
      res["MemberName"] = boost::any(*memberName);
    }
    if (roles) {
      res["Roles"] = boost::any(*roles);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("MemberId") != m.end() && !m["MemberId"].empty()) {
      memberId = make_shared<string>(boost::any_cast<string>(m["MemberId"]));
    }
    if (m.find("MemberName") != m.end() && !m["MemberName"].empty()) {
      memberName = make_shared<string>(boost::any_cast<string>(m["MemberName"]));
    }
    if (m.find("Roles") != m.end() && !m["Roles"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Roles"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Roles"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      roles = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~ListMembersResponseBodyMembers() = default;
};
class ListMembersResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListMembersResponseBodyMembers>> members{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListMembersResponseBody() {}

  explicit ListMembersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (members) {
      vector<boost::any> temp1;
      for(auto item1:*members){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Members"] = boost::any(temp1);
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
    if (m.find("Members") != m.end() && !m["Members"].empty()) {
      if (typeid(vector<boost::any>) == m["Members"].type()) {
        vector<ListMembersResponseBodyMembers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Members"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListMembersResponseBodyMembers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        members = make_shared<vector<ListMembersResponseBodyMembers>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListMembersResponseBody() = default;
};
class ListMembersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListMembersResponseBody> body{};

  ListMembersResponse() {}

  explicit ListMembersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListMembersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListMembersResponseBody>(model1);
      }
    }
  }


  virtual ~ListMembersResponse() = default;
};
class ListModelVersionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> approvalStatus{};
  shared_ptr<string> formatType{};
  shared_ptr<string> frameworkType{};
  shared_ptr<string> label{};
  shared_ptr<string> order{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> sourceId{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> versionName{};

  ListModelVersionsRequest() {}

  explicit ListModelVersionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (approvalStatus) {
      res["ApprovalStatus"] = boost::any(*approvalStatus);
    }
    if (formatType) {
      res["FormatType"] = boost::any(*formatType);
    }
    if (frameworkType) {
      res["FrameworkType"] = boost::any(*frameworkType);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (sourceId) {
      res["SourceId"] = boost::any(*sourceId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (versionName) {
      res["VersionName"] = boost::any(*versionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApprovalStatus") != m.end() && !m["ApprovalStatus"].empty()) {
      approvalStatus = make_shared<string>(boost::any_cast<string>(m["ApprovalStatus"]));
    }
    if (m.find("FormatType") != m.end() && !m["FormatType"].empty()) {
      formatType = make_shared<string>(boost::any_cast<string>(m["FormatType"]));
    }
    if (m.find("FrameworkType") != m.end() && !m["FrameworkType"].empty()) {
      frameworkType = make_shared<string>(boost::any_cast<string>(m["FrameworkType"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("SourceId") != m.end() && !m["SourceId"].empty()) {
      sourceId = make_shared<string>(boost::any_cast<string>(m["SourceId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("VersionName") != m.end() && !m["VersionName"].empty()) {
      versionName = make_shared<string>(boost::any_cast<string>(m["VersionName"]));
    }
  }


  virtual ~ListModelVersionsRequest() = default;
};
class ListModelVersionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<ModelVersion>> versions{};

  ListModelVersionsResponseBody() {}

  explicit ListModelVersionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (versions) {
      vector<boost::any> temp1;
      for(auto item1:*versions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Versions"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("Versions") != m.end() && !m["Versions"].empty()) {
      if (typeid(vector<boost::any>) == m["Versions"].type()) {
        vector<ModelVersion> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Versions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModelVersion model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        versions = make_shared<vector<ModelVersion>>(expect1);
      }
    }
  }


  virtual ~ListModelVersionsResponseBody() = default;
};
class ListModelVersionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListModelVersionsResponseBody> body{};

  ListModelVersionsResponse() {}

  explicit ListModelVersionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListModelVersionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListModelVersionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListModelVersionsResponse() = default;
};
class ListModelsRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListModelsRequestTag() {}

  explicit ListModelsRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListModelsRequestTag() = default;
};
class ListModelsRequest : public Darabonba::Model {
public:
  shared_ptr<string> collections{};
  shared_ptr<string> domain{};
  shared_ptr<string> label{};
  shared_ptr<string> modelName{};
  shared_ptr<string> modelType{};
  shared_ptr<string> order{};
  shared_ptr<string> origin{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> provider{};
  shared_ptr<string> query{};
  shared_ptr<string> sortBy{};
  shared_ptr<vector<ListModelsRequestTag>> tag{};
  shared_ptr<string> task{};
  shared_ptr<string> workspaceId{};

  ListModelsRequest() {}

  explicit ListModelsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (collections) {
      res["Collections"] = boost::any(*collections);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (modelName) {
      res["ModelName"] = boost::any(*modelName);
    }
    if (modelType) {
      res["ModelType"] = boost::any(*modelType);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (origin) {
      res["Origin"] = boost::any(*origin);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (provider) {
      res["Provider"] = boost::any(*provider);
    }
    if (query) {
      res["Query"] = boost::any(*query);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    if (task) {
      res["Task"] = boost::any(*task);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Collections") != m.end() && !m["Collections"].empty()) {
      collections = make_shared<string>(boost::any_cast<string>(m["Collections"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("ModelName") != m.end() && !m["ModelName"].empty()) {
      modelName = make_shared<string>(boost::any_cast<string>(m["ModelName"]));
    }
    if (m.find("ModelType") != m.end() && !m["ModelType"].empty()) {
      modelType = make_shared<string>(boost::any_cast<string>(m["ModelType"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("Origin") != m.end() && !m["Origin"].empty()) {
      origin = make_shared<string>(boost::any_cast<string>(m["Origin"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Provider") != m.end() && !m["Provider"].empty()) {
      provider = make_shared<string>(boost::any_cast<string>(m["Provider"]));
    }
    if (m.find("Query") != m.end() && !m["Query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["Query"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<ListModelsRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListModelsRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<ListModelsRequestTag>>(expect1);
      }
    }
    if (m.find("Task") != m.end() && !m["Task"].empty()) {
      task = make_shared<string>(boost::any_cast<string>(m["Task"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~ListModelsRequest() = default;
};
class ListModelsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> collections{};
  shared_ptr<string> domain{};
  shared_ptr<string> label{};
  shared_ptr<string> modelName{};
  shared_ptr<string> modelType{};
  shared_ptr<string> order{};
  shared_ptr<string> origin{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> provider{};
  shared_ptr<string> query{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> tagShrink{};
  shared_ptr<string> task{};
  shared_ptr<string> workspaceId{};

  ListModelsShrinkRequest() {}

  explicit ListModelsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (collections) {
      res["Collections"] = boost::any(*collections);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (modelName) {
      res["ModelName"] = boost::any(*modelName);
    }
    if (modelType) {
      res["ModelType"] = boost::any(*modelType);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (origin) {
      res["Origin"] = boost::any(*origin);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (provider) {
      res["Provider"] = boost::any(*provider);
    }
    if (query) {
      res["Query"] = boost::any(*query);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (tagShrink) {
      res["Tag"] = boost::any(*tagShrink);
    }
    if (task) {
      res["Task"] = boost::any(*task);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Collections") != m.end() && !m["Collections"].empty()) {
      collections = make_shared<string>(boost::any_cast<string>(m["Collections"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("ModelName") != m.end() && !m["ModelName"].empty()) {
      modelName = make_shared<string>(boost::any_cast<string>(m["ModelName"]));
    }
    if (m.find("ModelType") != m.end() && !m["ModelType"].empty()) {
      modelType = make_shared<string>(boost::any_cast<string>(m["ModelType"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("Origin") != m.end() && !m["Origin"].empty()) {
      origin = make_shared<string>(boost::any_cast<string>(m["Origin"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Provider") != m.end() && !m["Provider"].empty()) {
      provider = make_shared<string>(boost::any_cast<string>(m["Provider"]));
    }
    if (m.find("Query") != m.end() && !m["Query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["Query"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tagShrink = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
    if (m.find("Task") != m.end() && !m["Task"].empty()) {
      task = make_shared<string>(boost::any_cast<string>(m["Task"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~ListModelsShrinkRequest() = default;
};
class ListModelsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<Model>> models{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListModelsResponseBody() {}

  explicit ListModelsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (models) {
      vector<boost::any> temp1;
      for(auto item1:*models){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Models"] = boost::any(temp1);
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
    if (m.find("Models") != m.end() && !m["Models"].empty()) {
      if (typeid(vector<boost::any>) == m["Models"].type()) {
        vector<Model> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Models"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Model model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        models = make_shared<vector<Model>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListModelsResponseBody() = default;
};
class ListModelsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListModelsResponseBody> body{};

  ListModelsResponse() {}

  explicit ListModelsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListModelsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListModelsResponseBody>(model1);
      }
    }
  }


  virtual ~ListModelsResponse() = default;
};
class ListPermissionsResponseBodyPermissionsPermissionRules : public Darabonba::Model {
public:
  shared_ptr<string> accessibility{};
  shared_ptr<string> entityAccessType{};

  ListPermissionsResponseBodyPermissionsPermissionRules() {}

  explicit ListPermissionsResponseBodyPermissionsPermissionRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessibility) {
      res["Accessibility"] = boost::any(*accessibility);
    }
    if (entityAccessType) {
      res["EntityAccessType"] = boost::any(*entityAccessType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accessibility") != m.end() && !m["Accessibility"].empty()) {
      accessibility = make_shared<string>(boost::any_cast<string>(m["Accessibility"]));
    }
    if (m.find("EntityAccessType") != m.end() && !m["EntityAccessType"].empty()) {
      entityAccessType = make_shared<string>(boost::any_cast<string>(m["EntityAccessType"]));
    }
  }


  virtual ~ListPermissionsResponseBodyPermissionsPermissionRules() = default;
};
class ListPermissionsResponseBodyPermissions : public Darabonba::Model {
public:
  shared_ptr<string> permissionCode{};
  shared_ptr<vector<ListPermissionsResponseBodyPermissionsPermissionRules>> permissionRules{};

  ListPermissionsResponseBodyPermissions() {}

  explicit ListPermissionsResponseBodyPermissions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (permissionCode) {
      res["PermissionCode"] = boost::any(*permissionCode);
    }
    if (permissionRules) {
      vector<boost::any> temp1;
      for(auto item1:*permissionRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PermissionRules"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PermissionCode") != m.end() && !m["PermissionCode"].empty()) {
      permissionCode = make_shared<string>(boost::any_cast<string>(m["PermissionCode"]));
    }
    if (m.find("PermissionRules") != m.end() && !m["PermissionRules"].empty()) {
      if (typeid(vector<boost::any>) == m["PermissionRules"].type()) {
        vector<ListPermissionsResponseBodyPermissionsPermissionRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PermissionRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPermissionsResponseBodyPermissionsPermissionRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        permissionRules = make_shared<vector<ListPermissionsResponseBodyPermissionsPermissionRules>>(expect1);
      }
    }
  }


  virtual ~ListPermissionsResponseBodyPermissions() = default;
};
class ListPermissionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListPermissionsResponseBodyPermissions>> permissions{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListPermissionsResponseBody() {}

  explicit ListPermissionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (permissions) {
      vector<boost::any> temp1;
      for(auto item1:*permissions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Permissions"] = boost::any(temp1);
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
    if (m.find("Permissions") != m.end() && !m["Permissions"].empty()) {
      if (typeid(vector<boost::any>) == m["Permissions"].type()) {
        vector<ListPermissionsResponseBodyPermissions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Permissions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPermissionsResponseBodyPermissions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        permissions = make_shared<vector<ListPermissionsResponseBodyPermissions>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListPermissionsResponseBody() = default;
};
class ListPermissionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListPermissionsResponseBody> body{};

  ListPermissionsResponse() {}

  explicit ListPermissionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListPermissionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPermissionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListPermissionsResponse() = default;
};
class ListProductsRequest : public Darabonba::Model {
public:
  shared_ptr<string> productCodes{};
  shared_ptr<string> serviceCodes{};
  shared_ptr<bool> verbose{};

  ListProductsRequest() {}

  explicit ListProductsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productCodes) {
      res["ProductCodes"] = boost::any(*productCodes);
    }
    if (serviceCodes) {
      res["ServiceCodes"] = boost::any(*serviceCodes);
    }
    if (verbose) {
      res["Verbose"] = boost::any(*verbose);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProductCodes") != m.end() && !m["ProductCodes"].empty()) {
      productCodes = make_shared<string>(boost::any_cast<string>(m["ProductCodes"]));
    }
    if (m.find("ServiceCodes") != m.end() && !m["ServiceCodes"].empty()) {
      serviceCodes = make_shared<string>(boost::any_cast<string>(m["ServiceCodes"]));
    }
    if (m.find("Verbose") != m.end() && !m["Verbose"].empty()) {
      verbose = make_shared<bool>(boost::any_cast<bool>(m["Verbose"]));
    }
  }


  virtual ~ListProductsRequest() = default;
};
class ListProductsResponseBodyProducts : public Darabonba::Model {
public:
  shared_ptr<bool> hasPermissionToPurchase{};
  shared_ptr<bool> isPurchased{};
  shared_ptr<string> productCode{};
  shared_ptr<string> productInstanceId{};
  shared_ptr<string> purchaseUrl{};

  ListProductsResponseBodyProducts() {}

  explicit ListProductsResponseBodyProducts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hasPermissionToPurchase) {
      res["HasPermissionToPurchase"] = boost::any(*hasPermissionToPurchase);
    }
    if (isPurchased) {
      res["IsPurchased"] = boost::any(*isPurchased);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (productInstanceId) {
      res["ProductInstanceId"] = boost::any(*productInstanceId);
    }
    if (purchaseUrl) {
      res["PurchaseUrl"] = boost::any(*purchaseUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HasPermissionToPurchase") != m.end() && !m["HasPermissionToPurchase"].empty()) {
      hasPermissionToPurchase = make_shared<bool>(boost::any_cast<bool>(m["HasPermissionToPurchase"]));
    }
    if (m.find("IsPurchased") != m.end() && !m["IsPurchased"].empty()) {
      isPurchased = make_shared<bool>(boost::any_cast<bool>(m["IsPurchased"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ProductInstanceId") != m.end() && !m["ProductInstanceId"].empty()) {
      productInstanceId = make_shared<string>(boost::any_cast<string>(m["ProductInstanceId"]));
    }
    if (m.find("PurchaseUrl") != m.end() && !m["PurchaseUrl"].empty()) {
      purchaseUrl = make_shared<string>(boost::any_cast<string>(m["PurchaseUrl"]));
    }
  }


  virtual ~ListProductsResponseBodyProducts() = default;
};
class ListProductsResponseBodyServices : public Darabonba::Model {
public:
  shared_ptr<bool> isOpen{};
  shared_ptr<string> openUrl{};
  shared_ptr<string> serviceCode{};

  ListProductsResponseBodyServices() {}

  explicit ListProductsResponseBodyServices(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isOpen) {
      res["IsOpen"] = boost::any(*isOpen);
    }
    if (openUrl) {
      res["OpenUrl"] = boost::any(*openUrl);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsOpen") != m.end() && !m["IsOpen"].empty()) {
      isOpen = make_shared<bool>(boost::any_cast<bool>(m["IsOpen"]));
    }
    if (m.find("OpenUrl") != m.end() && !m["OpenUrl"].empty()) {
      openUrl = make_shared<string>(boost::any_cast<string>(m["OpenUrl"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
  }


  virtual ~ListProductsResponseBodyServices() = default;
};
class ListProductsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListProductsResponseBodyProducts>> products{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListProductsResponseBodyServices>> services{};

  ListProductsResponseBody() {}

  explicit ListProductsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (products) {
      vector<boost::any> temp1;
      for(auto item1:*products){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Products"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (services) {
      vector<boost::any> temp1;
      for(auto item1:*services){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Services"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Products") != m.end() && !m["Products"].empty()) {
      if (typeid(vector<boost::any>) == m["Products"].type()) {
        vector<ListProductsResponseBodyProducts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Products"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListProductsResponseBodyProducts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        products = make_shared<vector<ListProductsResponseBodyProducts>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Services") != m.end() && !m["Services"].empty()) {
      if (typeid(vector<boost::any>) == m["Services"].type()) {
        vector<ListProductsResponseBodyServices> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Services"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListProductsResponseBodyServices model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        services = make_shared<vector<ListProductsResponseBodyServices>>(expect1);
      }
    }
  }


  virtual ~ListProductsResponseBody() = default;
};
class ListProductsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListProductsResponseBody> body{};

  ListProductsResponse() {}

  explicit ListProductsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListProductsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListProductsResponseBody>(model1);
      }
    }
  }


  virtual ~ListProductsResponse() = default;
};
class ListQuotasRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};

  ListQuotasRequest() {}

  explicit ListQuotasRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~ListQuotasRequest() = default;
};
class ListQuotasResponseBodyQuotasSpecs : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> type{};
  shared_ptr<string> value{};

  ListQuotasResponseBodyQuotasSpecs() {}

  explicit ListQuotasResponseBodyQuotasSpecs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListQuotasResponseBodyQuotasSpecs() = default;
};
class ListQuotasResponseBodyQuotas : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> id{};
  shared_ptr<string> mode{};
  shared_ptr<string> name{};
  shared_ptr<string> productCode{};
  shared_ptr<string> quotaType{};
  shared_ptr<vector<ListQuotasResponseBodyQuotasSpecs>> specs{};

  ListQuotasResponseBodyQuotas() {}

  explicit ListQuotasResponseBodyQuotas(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (quotaType) {
      res["QuotaType"] = boost::any(*quotaType);
    }
    if (specs) {
      vector<boost::any> temp1;
      for(auto item1:*specs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Specs"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("QuotaType") != m.end() && !m["QuotaType"].empty()) {
      quotaType = make_shared<string>(boost::any_cast<string>(m["QuotaType"]));
    }
    if (m.find("Specs") != m.end() && !m["Specs"].empty()) {
      if (typeid(vector<boost::any>) == m["Specs"].type()) {
        vector<ListQuotasResponseBodyQuotasSpecs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Specs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListQuotasResponseBodyQuotasSpecs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        specs = make_shared<vector<ListQuotasResponseBodyQuotasSpecs>>(expect1);
      }
    }
  }


  virtual ~ListQuotasResponseBodyQuotas() = default;
};
class ListQuotasResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListQuotasResponseBodyQuotas>> quotas{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListQuotasResponseBody() {}

  explicit ListQuotasResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (quotas) {
      vector<boost::any> temp1;
      for(auto item1:*quotas){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Quotas"] = boost::any(temp1);
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
    if (m.find("Quotas") != m.end() && !m["Quotas"].empty()) {
      if (typeid(vector<boost::any>) == m["Quotas"].type()) {
        vector<ListQuotasResponseBodyQuotas> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Quotas"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListQuotasResponseBodyQuotas model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        quotas = make_shared<vector<ListQuotasResponseBodyQuotas>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListQuotasResponseBody() = default;
};
class ListQuotasResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListQuotasResponseBody> body{};

  ListQuotasResponse() {}

  explicit ListQuotasResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListQuotasResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListQuotasResponseBody>(model1);
      }
    }
  }


  virtual ~ListQuotasResponse() = default;
};
class ListResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupName{};
  shared_ptr<string> labels{};
  shared_ptr<string> option{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> productTypes{};
  shared_ptr<string> quotaIds{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> resourceTypes{};
  shared_ptr<bool> verbose{};
  shared_ptr<string> verboseFields{};
  shared_ptr<string> workspaceId{};

  ListResourcesRequest() {}

  explicit ListResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (option) {
      res["Option"] = boost::any(*option);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (productTypes) {
      res["ProductTypes"] = boost::any(*productTypes);
    }
    if (quotaIds) {
      res["QuotaIds"] = boost::any(*quotaIds);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    if (resourceTypes) {
      res["ResourceTypes"] = boost::any(*resourceTypes);
    }
    if (verbose) {
      res["Verbose"] = boost::any(*verbose);
    }
    if (verboseFields) {
      res["VerboseFields"] = boost::any(*verboseFields);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      labels = make_shared<string>(boost::any_cast<string>(m["Labels"]));
    }
    if (m.find("Option") != m.end() && !m["Option"].empty()) {
      option = make_shared<string>(boost::any_cast<string>(m["Option"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProductTypes") != m.end() && !m["ProductTypes"].empty()) {
      productTypes = make_shared<string>(boost::any_cast<string>(m["ProductTypes"]));
    }
    if (m.find("QuotaIds") != m.end() && !m["QuotaIds"].empty()) {
      quotaIds = make_shared<string>(boost::any_cast<string>(m["QuotaIds"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("ResourceTypes") != m.end() && !m["ResourceTypes"].empty()) {
      resourceTypes = make_shared<string>(boost::any_cast<string>(m["ResourceTypes"]));
    }
    if (m.find("Verbose") != m.end() && !m["Verbose"].empty()) {
      verbose = make_shared<bool>(boost::any_cast<bool>(m["Verbose"]));
    }
    if (m.find("VerboseFields") != m.end() && !m["VerboseFields"].empty()) {
      verboseFields = make_shared<string>(boost::any_cast<string>(m["VerboseFields"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~ListResourcesRequest() = default;
};
class ListResourcesResponseBodyResourcesEncryption : public Darabonba::Model {
public:
  shared_ptr<string> algorithm{};
  shared_ptr<bool> enabled{};
  shared_ptr<string> key{};

  ListResourcesResponseBodyResourcesEncryption() {}

  explicit ListResourcesResponseBodyResourcesEncryption(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithm) {
      res["Algorithm"] = boost::any(*algorithm);
    }
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Algorithm") != m.end() && !m["Algorithm"].empty()) {
      algorithm = make_shared<string>(boost::any_cast<string>(m["Algorithm"]));
    }
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
  }


  virtual ~ListResourcesResponseBodyResourcesEncryption() = default;
};
class ListResourcesResponseBodyResourcesExecutor : public Darabonba::Model {
public:
  shared_ptr<string> ownerId{};

  ListResourcesResponseBodyResourcesExecutor() {}

  explicit ListResourcesResponseBodyResourcesExecutor(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
  }


  virtual ~ListResourcesResponseBodyResourcesExecutor() = default;
};
class ListResourcesResponseBodyResourcesLabels : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListResourcesResponseBodyResourcesLabels() {}

  explicit ListResourcesResponseBodyResourcesLabels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListResourcesResponseBodyResourcesLabels() = default;
};
class ListResourcesResponseBodyResourcesQuotasSpecs : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  ListResourcesResponseBodyResourcesQuotasSpecs() {}

  explicit ListResourcesResponseBodyResourcesQuotasSpecs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListResourcesResponseBodyResourcesQuotasSpecs() = default;
};
class ListResourcesResponseBodyResourcesQuotas : public Darabonba::Model {
public:
  shared_ptr<string> cardType{};
  shared_ptr<string> displayName{};
  shared_ptr<string> id{};
  shared_ptr<string> mode{};
  shared_ptr<string> name{};
  shared_ptr<string> productCode{};
  shared_ptr<string> quotaType{};
  shared_ptr<vector<ListResourcesResponseBodyResourcesQuotasSpecs>> specs{};

  ListResourcesResponseBodyResourcesQuotas() {}

  explicit ListResourcesResponseBodyResourcesQuotas(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cardType) {
      res["CardType"] = boost::any(*cardType);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (quotaType) {
      res["QuotaType"] = boost::any(*quotaType);
    }
    if (specs) {
      vector<boost::any> temp1;
      for(auto item1:*specs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Specs"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CardType") != m.end() && !m["CardType"].empty()) {
      cardType = make_shared<string>(boost::any_cast<string>(m["CardType"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("QuotaType") != m.end() && !m["QuotaType"].empty()) {
      quotaType = make_shared<string>(boost::any_cast<string>(m["QuotaType"]));
    }
    if (m.find("Specs") != m.end() && !m["Specs"].empty()) {
      if (typeid(vector<boost::any>) == m["Specs"].type()) {
        vector<ListResourcesResponseBodyResourcesQuotasSpecs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Specs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListResourcesResponseBodyResourcesQuotasSpecs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        specs = make_shared<vector<ListResourcesResponseBodyResourcesQuotasSpecs>>(expect1);
      }
    }
  }


  virtual ~ListResourcesResponseBodyResourcesQuotas() = default;
};
class ListResourcesResponseBodyResources : public Darabonba::Model {
public:
  shared_ptr<ListResourcesResponseBodyResourcesEncryption> encryption{};
  shared_ptr<string> envType{};
  shared_ptr<ListResourcesResponseBodyResourcesExecutor> executor{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> groupName{};
  shared_ptr<string> id{};
  shared_ptr<bool> isDefault{};
  shared_ptr<vector<ListResourcesResponseBodyResourcesLabels>> labels{};
  shared_ptr<string> name{};
  shared_ptr<string> productType{};
  shared_ptr<vector<ListResourcesResponseBodyResourcesQuotas>> quotas{};
  shared_ptr<string> resourceType{};
  shared_ptr<map<string, boost::any>> spec{};
  shared_ptr<string> workspaceId{};

  ListResourcesResponseBodyResources() {}

  explicit ListResourcesResponseBodyResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encryption) {
      res["Encryption"] = encryption ? boost::any(encryption->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (envType) {
      res["EnvType"] = boost::any(*envType);
    }
    if (executor) {
      res["Executor"] = executor ? boost::any(executor->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (isDefault) {
      res["IsDefault"] = boost::any(*isDefault);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (quotas) {
      vector<boost::any> temp1;
      for(auto item1:*quotas){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Quotas"] = boost::any(temp1);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (spec) {
      res["Spec"] = boost::any(*spec);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Encryption") != m.end() && !m["Encryption"].empty()) {
      if (typeid(map<string, boost::any>) == m["Encryption"].type()) {
        ListResourcesResponseBodyResourcesEncryption model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Encryption"]));
        encryption = make_shared<ListResourcesResponseBodyResourcesEncryption>(model1);
      }
    }
    if (m.find("EnvType") != m.end() && !m["EnvType"].empty()) {
      envType = make_shared<string>(boost::any_cast<string>(m["EnvType"]));
    }
    if (m.find("Executor") != m.end() && !m["Executor"].empty()) {
      if (typeid(map<string, boost::any>) == m["Executor"].type()) {
        ListResourcesResponseBodyResourcesExecutor model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Executor"]));
        executor = make_shared<ListResourcesResponseBodyResourcesExecutor>(model1);
      }
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IsDefault") != m.end() && !m["IsDefault"].empty()) {
      isDefault = make_shared<bool>(boost::any_cast<bool>(m["IsDefault"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<ListResourcesResponseBodyResourcesLabels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListResourcesResponseBodyResourcesLabels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<ListResourcesResponseBodyResourcesLabels>>(expect1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("Quotas") != m.end() && !m["Quotas"].empty()) {
      if (typeid(vector<boost::any>) == m["Quotas"].type()) {
        vector<ListResourcesResponseBodyResourcesQuotas> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Quotas"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListResourcesResponseBodyResourcesQuotas model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        quotas = make_shared<vector<ListResourcesResponseBodyResourcesQuotas>>(expect1);
      }
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Spec") != m.end() && !m["Spec"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Spec"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      spec = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~ListResourcesResponseBodyResources() = default;
};
class ListResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListResourcesResponseBodyResources>> resources{};
  shared_ptr<long> totalCount{};

  ListResourcesResponseBody() {}

  explicit ListResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resources) {
      vector<boost::any> temp1;
      for(auto item1:*resources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Resources"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      if (typeid(vector<boost::any>) == m["Resources"].type()) {
        vector<ListResourcesResponseBodyResources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Resources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListResourcesResponseBodyResources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resources = make_shared<vector<ListResourcesResponseBodyResources>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListResourcesResponseBody() = default;
};
class ListResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListResourcesResponseBody> body{};

  ListResourcesResponse() {}

  explicit ListResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~ListResourcesResponse() = default;
};
class ListRunMetricsRequest : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<long> maxResults{};
  shared_ptr<long> pageToken{};

  ListRunMetricsRequest() {}

  explicit ListRunMetricsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (pageToken) {
      res["PageToken"] = boost::any(*pageToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("PageToken") != m.end() && !m["PageToken"].empty()) {
      pageToken = make_shared<long>(boost::any_cast<long>(m["PageToken"]));
    }
  }


  virtual ~ListRunMetricsRequest() = default;
};
class ListRunMetricsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<RunMetric>> metrics{};
  shared_ptr<long> nextPageToken{};
  shared_ptr<string> requestId{};

  ListRunMetricsResponseBody() {}

  explicit ListRunMetricsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (metrics) {
      vector<boost::any> temp1;
      for(auto item1:*metrics){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Metrics"] = boost::any(temp1);
    }
    if (nextPageToken) {
      res["NextPageToken"] = boost::any(*nextPageToken);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Metrics") != m.end() && !m["Metrics"].empty()) {
      if (typeid(vector<boost::any>) == m["Metrics"].type()) {
        vector<RunMetric> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Metrics"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunMetric model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        metrics = make_shared<vector<RunMetric>>(expect1);
      }
    }
    if (m.find("NextPageToken") != m.end() && !m["NextPageToken"].empty()) {
      nextPageToken = make_shared<long>(boost::any_cast<long>(m["NextPageToken"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ListRunMetricsResponseBody() = default;
};
class ListRunMetricsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListRunMetricsResponseBody> body{};

  ListRunMetricsResponse() {}

  explicit ListRunMetricsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListRunMetricsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRunMetricsResponseBody>(model1);
      }
    }
  }


  virtual ~ListRunMetricsResponse() = default;
};
class ListRunsRequest : public Darabonba::Model {
public:
  shared_ptr<string> experimentId{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> labels{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> name{};
  shared_ptr<string> order{};
  shared_ptr<string> orderBy{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageToken{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> sourceId{};
  shared_ptr<string> sourceType{};
  shared_ptr<bool> verbose{};
  shared_ptr<string> workspaceId{};

  ListRunsRequest() {}

  explicit ListRunsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (experimentId) {
      res["ExperimentId"] = boost::any(*experimentId);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (orderBy) {
      res["OrderBy"] = boost::any(*orderBy);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageToken) {
      res["PageToken"] = boost::any(*pageToken);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (sourceId) {
      res["SourceId"] = boost::any(*sourceId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (verbose) {
      res["Verbose"] = boost::any(*verbose);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExperimentId") != m.end() && !m["ExperimentId"].empty()) {
      experimentId = make_shared<string>(boost::any_cast<string>(m["ExperimentId"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      labels = make_shared<string>(boost::any_cast<string>(m["Labels"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("OrderBy") != m.end() && !m["OrderBy"].empty()) {
      orderBy = make_shared<string>(boost::any_cast<string>(m["OrderBy"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageToken") != m.end() && !m["PageToken"].empty()) {
      pageToken = make_shared<long>(boost::any_cast<long>(m["PageToken"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("SourceId") != m.end() && !m["SourceId"].empty()) {
      sourceId = make_shared<string>(boost::any_cast<string>(m["SourceId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("Verbose") != m.end() && !m["Verbose"].empty()) {
      verbose = make_shared<bool>(boost::any_cast<bool>(m["Verbose"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~ListRunsRequest() = default;
};
class ListRunsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> nextPageToken{};
  shared_ptr<vector<Run>> runs{};
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};

  ListRunsResponseBody() {}

  explicit ListRunsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextPageToken) {
      res["NextPageToken"] = boost::any(*nextPageToken);
    }
    if (runs) {
      vector<boost::any> temp1;
      for(auto item1:*runs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Runs"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NextPageToken") != m.end() && !m["NextPageToken"].empty()) {
      nextPageToken = make_shared<long>(boost::any_cast<long>(m["NextPageToken"]));
    }
    if (m.find("Runs") != m.end() && !m["Runs"].empty()) {
      if (typeid(vector<boost::any>) == m["Runs"].type()) {
        vector<Run> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Runs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Run model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        runs = make_shared<vector<Run>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ListRunsResponseBody() = default;
};
class ListRunsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListRunsResponseBody> body{};

  ListRunsResponse() {}

  explicit ListRunsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListRunsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRunsResponseBody>(model1);
      }
    }
  }


  virtual ~ListRunsResponse() = default;
};
class ListUserConfigsRequest : public Darabonba::Model {
public:
  shared_ptr<string> categoryNames{};
  shared_ptr<string> configKeys{};

  ListUserConfigsRequest() {}

  explicit ListUserConfigsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryNames) {
      res["CategoryNames"] = boost::any(*categoryNames);
    }
    if (configKeys) {
      res["ConfigKeys"] = boost::any(*configKeys);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryNames") != m.end() && !m["CategoryNames"].empty()) {
      categoryNames = make_shared<string>(boost::any_cast<string>(m["CategoryNames"]));
    }
    if (m.find("ConfigKeys") != m.end() && !m["ConfigKeys"].empty()) {
      configKeys = make_shared<string>(boost::any_cast<string>(m["ConfigKeys"]));
    }
  }


  virtual ~ListUserConfigsRequest() = default;
};
class ListUserConfigsResponseBodyConfigs : public Darabonba::Model {
public:
  shared_ptr<string> categoryName{};
  shared_ptr<string> configKey{};
  shared_ptr<string> configValue{};
  shared_ptr<string> scope{};

  ListUserConfigsResponseBodyConfigs() {}

  explicit ListUserConfigsResponseBodyConfigs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryName) {
      res["CategoryName"] = boost::any(*categoryName);
    }
    if (configKey) {
      res["ConfigKey"] = boost::any(*configKey);
    }
    if (configValue) {
      res["ConfigValue"] = boost::any(*configValue);
    }
    if (scope) {
      res["Scope"] = boost::any(*scope);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryName") != m.end() && !m["CategoryName"].empty()) {
      categoryName = make_shared<string>(boost::any_cast<string>(m["CategoryName"]));
    }
    if (m.find("ConfigKey") != m.end() && !m["ConfigKey"].empty()) {
      configKey = make_shared<string>(boost::any_cast<string>(m["ConfigKey"]));
    }
    if (m.find("ConfigValue") != m.end() && !m["ConfigValue"].empty()) {
      configValue = make_shared<string>(boost::any_cast<string>(m["ConfigValue"]));
    }
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["Scope"]));
    }
  }


  virtual ~ListUserConfigsResponseBodyConfigs() = default;
};
class ListUserConfigsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListUserConfigsResponseBodyConfigs>> configs{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListUserConfigsResponseBody() {}

  explicit ListUserConfigsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configs) {
      vector<boost::any> temp1;
      for(auto item1:*configs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Configs"] = boost::any(temp1);
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
    if (m.find("Configs") != m.end() && !m["Configs"].empty()) {
      if (typeid(vector<boost::any>) == m["Configs"].type()) {
        vector<ListUserConfigsResponseBodyConfigs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Configs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUserConfigsResponseBodyConfigs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configs = make_shared<vector<ListUserConfigsResponseBodyConfigs>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListUserConfigsResponseBody() = default;
};
class ListUserConfigsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListUserConfigsResponseBody> body{};

  ListUserConfigsResponse() {}

  explicit ListUserConfigsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListUserConfigsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListUserConfigsResponseBody>(model1);
      }
    }
  }


  virtual ~ListUserConfigsResponse() = default;
};
class ListWorkspaceUsersRequest : public Darabonba::Model {
public:
  shared_ptr<string> userName{};

  ListWorkspaceUsersRequest() {}

  explicit ListWorkspaceUsersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~ListWorkspaceUsersRequest() = default;
};
class ListWorkspaceUsersResponseBodyUsers : public Darabonba::Model {
public:
  shared_ptr<string> userId{};
  shared_ptr<string> userName{};

  ListWorkspaceUsersResponseBodyUsers() {}

  explicit ListWorkspaceUsersResponseBodyUsers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~ListWorkspaceUsersResponseBodyUsers() = default;
};
class ListWorkspaceUsersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<ListWorkspaceUsersResponseBodyUsers>> users{};

  ListWorkspaceUsersResponseBody() {}

  explicit ListWorkspaceUsersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (users) {
      vector<boost::any> temp1;
      for(auto item1:*users){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Users"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("Users") != m.end() && !m["Users"].empty()) {
      if (typeid(vector<boost::any>) == m["Users"].type()) {
        vector<ListWorkspaceUsersResponseBodyUsers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Users"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListWorkspaceUsersResponseBodyUsers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        users = make_shared<vector<ListWorkspaceUsersResponseBodyUsers>>(expect1);
      }
    }
  }


  virtual ~ListWorkspaceUsersResponseBody() = default;
};
class ListWorkspaceUsersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListWorkspaceUsersResponseBody> body{};

  ListWorkspaceUsersResponse() {}

  explicit ListWorkspaceUsersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListWorkspaceUsersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListWorkspaceUsersResponseBody>(model1);
      }
    }
  }


  virtual ~ListWorkspaceUsersResponse() = default;
};
class ListWorkspacesRequest : public Darabonba::Model {
public:
  shared_ptr<string> fields{};
  shared_ptr<string> moduleList{};
  shared_ptr<string> option{};
  shared_ptr<string> order{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> status{};
  shared_ptr<bool> verbose{};
  shared_ptr<string> workspaceIds{};
  shared_ptr<string> workspaceName{};

  ListWorkspacesRequest() {}

  explicit ListWorkspacesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fields) {
      res["Fields"] = boost::any(*fields);
    }
    if (moduleList) {
      res["ModuleList"] = boost::any(*moduleList);
    }
    if (option) {
      res["Option"] = boost::any(*option);
    }
    if (order) {
      res["Order"] = boost::any(*order);
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
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (verbose) {
      res["Verbose"] = boost::any(*verbose);
    }
    if (workspaceIds) {
      res["WorkspaceIds"] = boost::any(*workspaceIds);
    }
    if (workspaceName) {
      res["WorkspaceName"] = boost::any(*workspaceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Fields") != m.end() && !m["Fields"].empty()) {
      fields = make_shared<string>(boost::any_cast<string>(m["Fields"]));
    }
    if (m.find("ModuleList") != m.end() && !m["ModuleList"].empty()) {
      moduleList = make_shared<string>(boost::any_cast<string>(m["ModuleList"]));
    }
    if (m.find("Option") != m.end() && !m["Option"].empty()) {
      option = make_shared<string>(boost::any_cast<string>(m["Option"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
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
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Verbose") != m.end() && !m["Verbose"].empty()) {
      verbose = make_shared<bool>(boost::any_cast<bool>(m["Verbose"]));
    }
    if (m.find("WorkspaceIds") != m.end() && !m["WorkspaceIds"].empty()) {
      workspaceIds = make_shared<string>(boost::any_cast<string>(m["WorkspaceIds"]));
    }
    if (m.find("WorkspaceName") != m.end() && !m["WorkspaceName"].empty()) {
      workspaceName = make_shared<string>(boost::any_cast<string>(m["WorkspaceName"]));
    }
  }


  virtual ~ListWorkspacesRequest() = default;
};
class ListWorkspacesResponseBodyWorkspaces : public Darabonba::Model {
public:
  shared_ptr<vector<string>> adminNames{};
  shared_ptr<string> creator{};
  shared_ptr<string> description{};
  shared_ptr<vector<string>> envTypes{};
  shared_ptr<map<string, boost::any>> extraInfos{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<bool> isDefault{};
  shared_ptr<string> status{};
  shared_ptr<string> workspaceId{};
  shared_ptr<string> workspaceName{};
  shared_ptr<string> resourceGroupId{};

  ListWorkspacesResponseBodyWorkspaces() {}

  explicit ListWorkspacesResponseBodyWorkspaces(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (adminNames) {
      res["AdminNames"] = boost::any(*adminNames);
    }
    if (creator) {
      res["Creator"] = boost::any(*creator);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (envTypes) {
      res["EnvTypes"] = boost::any(*envTypes);
    }
    if (extraInfos) {
      res["ExtraInfos"] = boost::any(*extraInfos);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (isDefault) {
      res["IsDefault"] = boost::any(*isDefault);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    if (workspaceName) {
      res["WorkspaceName"] = boost::any(*workspaceName);
    }
    if (resourceGroupId) {
      res["resourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdminNames") != m.end() && !m["AdminNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AdminNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AdminNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      adminNames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Creator") != m.end() && !m["Creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["Creator"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EnvTypes") != m.end() && !m["EnvTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["EnvTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["EnvTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      envTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ExtraInfos") != m.end() && !m["ExtraInfos"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ExtraInfos"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extraInfos = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("IsDefault") != m.end() && !m["IsDefault"].empty()) {
      isDefault = make_shared<bool>(boost::any_cast<bool>(m["IsDefault"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
    if (m.find("WorkspaceName") != m.end() && !m["WorkspaceName"].empty()) {
      workspaceName = make_shared<string>(boost::any_cast<string>(m["WorkspaceName"]));
    }
    if (m.find("resourceGroupId") != m.end() && !m["resourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["resourceGroupId"]));
    }
  }


  virtual ~ListWorkspacesResponseBodyWorkspaces() = default;
};
class ListWorkspacesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> resourceLimits{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<ListWorkspacesResponseBodyWorkspaces>> workspaces{};

  ListWorkspacesResponseBody() {}

  explicit ListWorkspacesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceLimits) {
      res["ResourceLimits"] = boost::any(*resourceLimits);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (workspaces) {
      vector<boost::any> temp1;
      for(auto item1:*workspaces){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Workspaces"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceLimits") != m.end() && !m["ResourceLimits"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ResourceLimits"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      resourceLimits = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("Workspaces") != m.end() && !m["Workspaces"].empty()) {
      if (typeid(vector<boost::any>) == m["Workspaces"].type()) {
        vector<ListWorkspacesResponseBodyWorkspaces> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Workspaces"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListWorkspacesResponseBodyWorkspaces model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        workspaces = make_shared<vector<ListWorkspacesResponseBodyWorkspaces>>(expect1);
      }
    }
  }


  virtual ~ListWorkspacesResponseBody() = default;
};
class ListWorkspacesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListWorkspacesResponseBody> body{};

  ListWorkspacesResponse() {}

  explicit ListWorkspacesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListWorkspacesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListWorkspacesResponseBody>(model1);
      }
    }
  }


  virtual ~ListWorkspacesResponse() = default;
};
class LogRunMetricsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<RunMetric>> metrics{};

  LogRunMetricsRequest() {}

  explicit LogRunMetricsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (metrics) {
      vector<boost::any> temp1;
      for(auto item1:*metrics){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Metrics"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Metrics") != m.end() && !m["Metrics"].empty()) {
      if (typeid(vector<boost::any>) == m["Metrics"].type()) {
        vector<RunMetric> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Metrics"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunMetric model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        metrics = make_shared<vector<RunMetric>>(expect1);
      }
    }
  }


  virtual ~LogRunMetricsRequest() = default;
};
class LogRunMetricsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  LogRunMetricsResponseBody() {}

  explicit LogRunMetricsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~LogRunMetricsResponseBody() = default;
};
class LogRunMetricsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<LogRunMetricsResponseBody> body{};

  LogRunMetricsResponse() {}

  explicit LogRunMetricsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        LogRunMetricsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<LogRunMetricsResponseBody>(model1);
      }
    }
  }


  virtual ~LogRunMetricsResponse() = default;
};
class PublishCodeSourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> codeSourceId{};
  shared_ptr<string> requestId{};

  PublishCodeSourceResponseBody() {}

  explicit PublishCodeSourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (codeSourceId) {
      res["CodeSourceId"] = boost::any(*codeSourceId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CodeSourceId") != m.end() && !m["CodeSourceId"].empty()) {
      codeSourceId = make_shared<string>(boost::any_cast<string>(m["CodeSourceId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~PublishCodeSourceResponseBody() = default;
};
class PublishCodeSourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PublishCodeSourceResponseBody> body{};

  PublishCodeSourceResponse() {}

  explicit PublishCodeSourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        PublishCodeSourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PublishCodeSourceResponseBody>(model1);
      }
    }
  }


  virtual ~PublishCodeSourceResponse() = default;
};
class PublishDatasetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  PublishDatasetResponseBody() {}

  explicit PublishDatasetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~PublishDatasetResponseBody() = default;
};
class PublishDatasetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PublishDatasetResponseBody> body{};

  PublishDatasetResponse() {}

  explicit PublishDatasetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        PublishDatasetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PublishDatasetResponseBody>(model1);
      }
    }
  }


  virtual ~PublishDatasetResponse() = default;
};
class PublishImageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> imageId{};
  shared_ptr<string> requestId{};

  PublishImageResponseBody() {}

  explicit PublishImageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~PublishImageResponseBody() = default;
};
class PublishImageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PublishImageResponseBody> body{};

  PublishImageResponse() {}

  explicit PublishImageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        PublishImageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PublishImageResponseBody>(model1);
      }
    }
  }


  virtual ~PublishImageResponse() = default;
};
class RemoveImageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RemoveImageResponseBody() {}

  explicit RemoveImageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RemoveImageResponseBody() = default;
};
class RemoveImageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RemoveImageResponseBody> body{};

  RemoveImageResponse() {}

  explicit RemoveImageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RemoveImageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveImageResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveImageResponse() = default;
};
class RemoveImageLabelsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RemoveImageLabelsResponseBody() {}

  explicit RemoveImageLabelsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RemoveImageLabelsResponseBody() = default;
};
class RemoveImageLabelsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RemoveImageLabelsResponseBody> body{};

  RemoveImageLabelsResponse() {}

  explicit RemoveImageLabelsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RemoveImageLabelsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveImageLabelsResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveImageLabelsResponse() = default;
};
class RemoveMemberRoleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RemoveMemberRoleResponseBody() {}

  explicit RemoveMemberRoleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RemoveMemberRoleResponseBody() = default;
};
class RemoveMemberRoleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RemoveMemberRoleResponseBody> body{};

  RemoveMemberRoleResponse() {}

  explicit RemoveMemberRoleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RemoveMemberRoleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveMemberRoleResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveMemberRoleResponse() = default;
};
class SetExperimentLabelsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<LabelInfo>> labels{};

  SetExperimentLabelsRequest() {}

  explicit SetExperimentLabelsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<LabelInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            LabelInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<LabelInfo>>(expect1);
      }
    }
  }


  virtual ~SetExperimentLabelsRequest() = default;
};
class SetExperimentLabelsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetExperimentLabelsResponseBody() {}

  explicit SetExperimentLabelsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SetExperimentLabelsResponseBody() = default;
};
class SetExperimentLabelsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetExperimentLabelsResponseBody> body{};

  SetExperimentLabelsResponse() {}

  explicit SetExperimentLabelsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SetExperimentLabelsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetExperimentLabelsResponseBody>(model1);
      }
    }
  }


  virtual ~SetExperimentLabelsResponse() = default;
};
class SetUserConfigsRequestConfigs : public Darabonba::Model {
public:
  shared_ptr<string> categoryName{};
  shared_ptr<string> configKey{};
  shared_ptr<string> configValue{};
  shared_ptr<string> scope{};

  SetUserConfigsRequestConfigs() {}

  explicit SetUserConfigsRequestConfigs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryName) {
      res["CategoryName"] = boost::any(*categoryName);
    }
    if (configKey) {
      res["ConfigKey"] = boost::any(*configKey);
    }
    if (configValue) {
      res["ConfigValue"] = boost::any(*configValue);
    }
    if (scope) {
      res["Scope"] = boost::any(*scope);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryName") != m.end() && !m["CategoryName"].empty()) {
      categoryName = make_shared<string>(boost::any_cast<string>(m["CategoryName"]));
    }
    if (m.find("ConfigKey") != m.end() && !m["ConfigKey"].empty()) {
      configKey = make_shared<string>(boost::any_cast<string>(m["ConfigKey"]));
    }
    if (m.find("ConfigValue") != m.end() && !m["ConfigValue"].empty()) {
      configValue = make_shared<string>(boost::any_cast<string>(m["ConfigValue"]));
    }
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["Scope"]));
    }
  }


  virtual ~SetUserConfigsRequestConfigs() = default;
};
class SetUserConfigsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<SetUserConfigsRequestConfigs>> configs{};

  SetUserConfigsRequest() {}

  explicit SetUserConfigsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configs) {
      vector<boost::any> temp1;
      for(auto item1:*configs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Configs"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Configs") != m.end() && !m["Configs"].empty()) {
      if (typeid(vector<boost::any>) == m["Configs"].type()) {
        vector<SetUserConfigsRequestConfigs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Configs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SetUserConfigsRequestConfigs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configs = make_shared<vector<SetUserConfigsRequestConfigs>>(expect1);
      }
    }
  }


  virtual ~SetUserConfigsRequest() = default;
};
class SetUserConfigsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetUserConfigsResponseBody() {}

  explicit SetUserConfigsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SetUserConfigsResponseBody() = default;
};
class SetUserConfigsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetUserConfigsResponseBody> body{};

  SetUserConfigsResponse() {}

  explicit SetUserConfigsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SetUserConfigsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetUserConfigsResponseBody>(model1);
      }
    }
  }


  virtual ~SetUserConfigsResponse() = default;
};
class StopDatasetJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> datasetVersion{};
  shared_ptr<string> workspaceId{};

  StopDatasetJobRequest() {}

  explicit StopDatasetJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetVersion) {
      res["DatasetVersion"] = boost::any(*datasetVersion);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetVersion") != m.end() && !m["DatasetVersion"].empty()) {
      datasetVersion = make_shared<string>(boost::any_cast<string>(m["DatasetVersion"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~StopDatasetJobRequest() = default;
};
class StopDatasetJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  StopDatasetJobResponseBody() {}

  explicit StopDatasetJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StopDatasetJobResponseBody() = default;
};
class StopDatasetJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopDatasetJobResponseBody> body{};

  StopDatasetJobResponse() {}

  explicit StopDatasetJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        StopDatasetJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopDatasetJobResponseBody>(model1);
      }
    }
  }


  virtual ~StopDatasetJobResponse() = default;
};
class UpdateCodeSourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> codeBranch{};
  shared_ptr<string> codeCommit{};
  shared_ptr<string> codeRepo{};
  shared_ptr<string> codeRepoAccessToken{};
  shared_ptr<string> codeRepoUserName{};
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<string> mountPath{};

  UpdateCodeSourceRequest() {}

  explicit UpdateCodeSourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (codeBranch) {
      res["CodeBranch"] = boost::any(*codeBranch);
    }
    if (codeCommit) {
      res["CodeCommit"] = boost::any(*codeCommit);
    }
    if (codeRepo) {
      res["CodeRepo"] = boost::any(*codeRepo);
    }
    if (codeRepoAccessToken) {
      res["CodeRepoAccessToken"] = boost::any(*codeRepoAccessToken);
    }
    if (codeRepoUserName) {
      res["CodeRepoUserName"] = boost::any(*codeRepoUserName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (mountPath) {
      res["MountPath"] = boost::any(*mountPath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CodeBranch") != m.end() && !m["CodeBranch"].empty()) {
      codeBranch = make_shared<string>(boost::any_cast<string>(m["CodeBranch"]));
    }
    if (m.find("CodeCommit") != m.end() && !m["CodeCommit"].empty()) {
      codeCommit = make_shared<string>(boost::any_cast<string>(m["CodeCommit"]));
    }
    if (m.find("CodeRepo") != m.end() && !m["CodeRepo"].empty()) {
      codeRepo = make_shared<string>(boost::any_cast<string>(m["CodeRepo"]));
    }
    if (m.find("CodeRepoAccessToken") != m.end() && !m["CodeRepoAccessToken"].empty()) {
      codeRepoAccessToken = make_shared<string>(boost::any_cast<string>(m["CodeRepoAccessToken"]));
    }
    if (m.find("CodeRepoUserName") != m.end() && !m["CodeRepoUserName"].empty()) {
      codeRepoUserName = make_shared<string>(boost::any_cast<string>(m["CodeRepoUserName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("MountPath") != m.end() && !m["MountPath"].empty()) {
      mountPath = make_shared<string>(boost::any_cast<string>(m["MountPath"]));
    }
  }


  virtual ~UpdateCodeSourceRequest() = default;
};
class UpdateCodeSourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> codeSourceId{};
  shared_ptr<string> requestId{};

  UpdateCodeSourceResponseBody() {}

  explicit UpdateCodeSourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (codeSourceId) {
      res["CodeSourceId"] = boost::any(*codeSourceId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CodeSourceId") != m.end() && !m["CodeSourceId"].empty()) {
      codeSourceId = make_shared<string>(boost::any_cast<string>(m["CodeSourceId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateCodeSourceResponseBody() = default;
};
class UpdateCodeSourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateCodeSourceResponseBody> body{};

  UpdateCodeSourceResponse() {}

  explicit UpdateCodeSourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateCodeSourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateCodeSourceResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateCodeSourceResponse() = default;
};
class UpdateConfigRequestLabels : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  UpdateConfigRequestLabels() {}

  explicit UpdateConfigRequestLabels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateConfigRequestLabels() = default;
};
class UpdateConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> categoryName{};
  shared_ptr<string> configKey{};
  shared_ptr<string> configValue{};
  shared_ptr<vector<UpdateConfigRequestLabels>> labels{};

  UpdateConfigRequest() {}

  explicit UpdateConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryName) {
      res["CategoryName"] = boost::any(*categoryName);
    }
    if (configKey) {
      res["ConfigKey"] = boost::any(*configKey);
    }
    if (configValue) {
      res["ConfigValue"] = boost::any(*configValue);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryName") != m.end() && !m["CategoryName"].empty()) {
      categoryName = make_shared<string>(boost::any_cast<string>(m["CategoryName"]));
    }
    if (m.find("ConfigKey") != m.end() && !m["ConfigKey"].empty()) {
      configKey = make_shared<string>(boost::any_cast<string>(m["ConfigKey"]));
    }
    if (m.find("ConfigValue") != m.end() && !m["ConfigValue"].empty()) {
      configValue = make_shared<string>(boost::any_cast<string>(m["ConfigValue"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<UpdateConfigRequestLabels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateConfigRequestLabels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<UpdateConfigRequestLabels>>(expect1);
      }
    }
  }


  virtual ~UpdateConfigRequest() = default;
};
class UpdateConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateConfigResponseBody() {}

  explicit UpdateConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateConfigResponseBody() = default;
};
class UpdateConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateConfigResponseBody> body{};

  UpdateConfigResponse() {}

  explicit UpdateConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateConfigResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateConfigResponse() = default;
};
class UpdateConfigsRequestConfigsLabels : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  UpdateConfigsRequestConfigsLabels() {}

  explicit UpdateConfigsRequestConfigsLabels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateConfigsRequestConfigsLabels() = default;
};
class UpdateConfigsRequestConfigs : public Darabonba::Model {
public:
  shared_ptr<string> categoryName{};
  shared_ptr<string> configKey{};
  shared_ptr<string> configValue{};
  shared_ptr<vector<UpdateConfigsRequestConfigsLabels>> labels{};

  UpdateConfigsRequestConfigs() {}

  explicit UpdateConfigsRequestConfigs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryName) {
      res["CategoryName"] = boost::any(*categoryName);
    }
    if (configKey) {
      res["ConfigKey"] = boost::any(*configKey);
    }
    if (configValue) {
      res["ConfigValue"] = boost::any(*configValue);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryName") != m.end() && !m["CategoryName"].empty()) {
      categoryName = make_shared<string>(boost::any_cast<string>(m["CategoryName"]));
    }
    if (m.find("ConfigKey") != m.end() && !m["ConfigKey"].empty()) {
      configKey = make_shared<string>(boost::any_cast<string>(m["ConfigKey"]));
    }
    if (m.find("ConfigValue") != m.end() && !m["ConfigValue"].empty()) {
      configValue = make_shared<string>(boost::any_cast<string>(m["ConfigValue"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<UpdateConfigsRequestConfigsLabels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateConfigsRequestConfigsLabels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<UpdateConfigsRequestConfigsLabels>>(expect1);
      }
    }
  }


  virtual ~UpdateConfigsRequestConfigs() = default;
};
class UpdateConfigsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<UpdateConfigsRequestConfigs>> configs{};

  UpdateConfigsRequest() {}

  explicit UpdateConfigsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configs) {
      vector<boost::any> temp1;
      for(auto item1:*configs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Configs"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Configs") != m.end() && !m["Configs"].empty()) {
      if (typeid(vector<boost::any>) == m["Configs"].type()) {
        vector<UpdateConfigsRequestConfigs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Configs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateConfigsRequestConfigs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configs = make_shared<vector<UpdateConfigsRequestConfigs>>(expect1);
      }
    }
  }


  virtual ~UpdateConfigsRequest() = default;
};
class UpdateConfigsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateConfigsResponseBody() {}

  explicit UpdateConfigsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateConfigsResponseBody() = default;
};
class UpdateConfigsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateConfigsResponseBody> body{};

  UpdateConfigsResponse() {}

  explicit UpdateConfigsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateConfigsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateConfigsResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateConfigsResponse() = default;
};
class UpdateConnectionRequestModels : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> model{};
  shared_ptr<string> modelType{};
  shared_ptr<bool> toolCall{};

  UpdateConnectionRequestModels() {}

  explicit UpdateConnectionRequestModels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (model) {
      res["Model"] = boost::any(*model);
    }
    if (modelType) {
      res["ModelType"] = boost::any(*modelType);
    }
    if (toolCall) {
      res["ToolCall"] = boost::any(*toolCall);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      model = make_shared<string>(boost::any_cast<string>(m["Model"]));
    }
    if (m.find("ModelType") != m.end() && !m["ModelType"].empty()) {
      modelType = make_shared<string>(boost::any_cast<string>(m["ModelType"]));
    }
    if (m.find("ToolCall") != m.end() && !m["ToolCall"].empty()) {
      toolCall = make_shared<bool>(boost::any_cast<bool>(m["ToolCall"]));
    }
  }


  virtual ~UpdateConnectionRequestModels() = default;
};
class UpdateConnectionRequest : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> configs{};
  shared_ptr<string> description{};
  shared_ptr<vector<UpdateConnectionRequestModels>> models{};
  shared_ptr<map<string, string>> secrets{};

  UpdateConnectionRequest() {}

  explicit UpdateConnectionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configs) {
      res["Configs"] = boost::any(*configs);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (models) {
      vector<boost::any> temp1;
      for(auto item1:*models){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Models"] = boost::any(temp1);
    }
    if (secrets) {
      res["Secrets"] = boost::any(*secrets);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Configs") != m.end() && !m["Configs"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Configs"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      configs = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Models") != m.end() && !m["Models"].empty()) {
      if (typeid(vector<boost::any>) == m["Models"].type()) {
        vector<UpdateConnectionRequestModels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Models"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateConnectionRequestModels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        models = make_shared<vector<UpdateConnectionRequestModels>>(expect1);
      }
    }
    if (m.find("Secrets") != m.end() && !m["Secrets"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Secrets"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      secrets = make_shared<map<string, string>>(toMap1);
    }
  }


  virtual ~UpdateConnectionRequest() = default;
};
class UpdateConnectionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateConnectionResponseBody() {}

  explicit UpdateConnectionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateConnectionResponseBody() = default;
};
class UpdateConnectionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateConnectionResponseBody> body{};

  UpdateConnectionResponse() {}

  explicit UpdateConnectionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateConnectionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateConnectionResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateConnectionResponse() = default;
};
class UpdateDatasetRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<vector<string>> mountAccessReadWriteRoleIdList{};
  shared_ptr<string> name{};
  shared_ptr<string> options{};

  UpdateDatasetRequest() {}

  explicit UpdateDatasetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (mountAccessReadWriteRoleIdList) {
      res["MountAccessReadWriteRoleIdList"] = boost::any(*mountAccessReadWriteRoleIdList);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (options) {
      res["Options"] = boost::any(*options);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("MountAccessReadWriteRoleIdList") != m.end() && !m["MountAccessReadWriteRoleIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["MountAccessReadWriteRoleIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["MountAccessReadWriteRoleIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      mountAccessReadWriteRoleIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      options = make_shared<string>(boost::any_cast<string>(m["Options"]));
    }
  }


  virtual ~UpdateDatasetRequest() = default;
};
class UpdateDatasetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateDatasetResponseBody() {}

  explicit UpdateDatasetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateDatasetResponseBody() = default;
};
class UpdateDatasetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateDatasetResponseBody> body{};

  UpdateDatasetResponse() {}

  explicit UpdateDatasetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateDatasetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateDatasetResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateDatasetResponse() = default;
};
class UpdateDatasetFileMetasRequest : public Darabonba::Model {
public:
  shared_ptr<vector<DatasetFileMetaConentUpdate>> datasetFileMetas{};
  shared_ptr<string> datasetVersion{};
  shared_ptr<string> tagJobId{};
  shared_ptr<string> workspaceId{};

  UpdateDatasetFileMetasRequest() {}

  explicit UpdateDatasetFileMetasRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetFileMetas) {
      vector<boost::any> temp1;
      for(auto item1:*datasetFileMetas){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DatasetFileMetas"] = boost::any(temp1);
    }
    if (datasetVersion) {
      res["DatasetVersion"] = boost::any(*datasetVersion);
    }
    if (tagJobId) {
      res["TagJobId"] = boost::any(*tagJobId);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetFileMetas") != m.end() && !m["DatasetFileMetas"].empty()) {
      if (typeid(vector<boost::any>) == m["DatasetFileMetas"].type()) {
        vector<DatasetFileMetaConentUpdate> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DatasetFileMetas"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DatasetFileMetaConentUpdate model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        datasetFileMetas = make_shared<vector<DatasetFileMetaConentUpdate>>(expect1);
      }
    }
    if (m.find("DatasetVersion") != m.end() && !m["DatasetVersion"].empty()) {
      datasetVersion = make_shared<string>(boost::any_cast<string>(m["DatasetVersion"]));
    }
    if (m.find("TagJobId") != m.end() && !m["TagJobId"].empty()) {
      tagJobId = make_shared<string>(boost::any_cast<string>(m["TagJobId"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~UpdateDatasetFileMetasRequest() = default;
};
class UpdateDatasetFileMetasResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DatasetFileMetaResponse>> failedDetails{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> status{};

  UpdateDatasetFileMetasResponseBody() {}

  explicit UpdateDatasetFileMetasResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (failedDetails) {
      vector<boost::any> temp1;
      for(auto item1:*failedDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FailedDetails"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FailedDetails") != m.end() && !m["FailedDetails"].empty()) {
      if (typeid(vector<boost::any>) == m["FailedDetails"].type()) {
        vector<DatasetFileMetaResponse> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FailedDetails"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DatasetFileMetaResponse model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        failedDetails = make_shared<vector<DatasetFileMetaResponse>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<bool>(boost::any_cast<bool>(m["Status"]));
    }
  }


  virtual ~UpdateDatasetFileMetasResponseBody() = default;
};
class UpdateDatasetFileMetasResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateDatasetFileMetasResponseBody> body{};

  UpdateDatasetFileMetasResponse() {}

  explicit UpdateDatasetFileMetasResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateDatasetFileMetasResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateDatasetFileMetasResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateDatasetFileMetasResponse() = default;
};
class UpdateDatasetJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> datasetVersion{};
  shared_ptr<string> description{};
  shared_ptr<string> workspaceId{};

  UpdateDatasetJobRequest() {}

  explicit UpdateDatasetJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetVersion) {
      res["DatasetVersion"] = boost::any(*datasetVersion);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetVersion") != m.end() && !m["DatasetVersion"].empty()) {
      datasetVersion = make_shared<string>(boost::any_cast<string>(m["DatasetVersion"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~UpdateDatasetJobRequest() = default;
};
class UpdateDatasetJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateDatasetJobResponseBody() {}

  explicit UpdateDatasetJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateDatasetJobResponseBody() = default;
};
class UpdateDatasetJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateDatasetJobResponseBody> body{};

  UpdateDatasetJobResponse() {}

  explicit UpdateDatasetJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateDatasetJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateDatasetJobResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateDatasetJobResponse() = default;
};
class UpdateDatasetJobConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> config{};
  shared_ptr<string> configType{};
  shared_ptr<string> workspaceId{};

  UpdateDatasetJobConfigRequest() {}

  explicit UpdateDatasetJobConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (configType) {
      res["ConfigType"] = boost::any(*configType);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("ConfigType") != m.end() && !m["ConfigType"].empty()) {
      configType = make_shared<string>(boost::any_cast<string>(m["ConfigType"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~UpdateDatasetJobConfigRequest() = default;
};
class UpdateDatasetJobConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateDatasetJobConfigResponseBody() {}

  explicit UpdateDatasetJobConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateDatasetJobConfigResponseBody() = default;
};
class UpdateDatasetJobConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateDatasetJobConfigResponseBody> body{};

  UpdateDatasetJobConfigResponse() {}

  explicit UpdateDatasetJobConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateDatasetJobConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateDatasetJobConfigResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateDatasetJobConfigResponse() = default;
};
class UpdateDatasetVersionRequest : public Darabonba::Model {
public:
  shared_ptr<long> dataCount{};
  shared_ptr<long> dataSize{};
  shared_ptr<string> description{};
  shared_ptr<string> options{};

  UpdateDatasetVersionRequest() {}

  explicit UpdateDatasetVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataCount) {
      res["DataCount"] = boost::any(*dataCount);
    }
    if (dataSize) {
      res["DataSize"] = boost::any(*dataSize);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (options) {
      res["Options"] = boost::any(*options);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataCount") != m.end() && !m["DataCount"].empty()) {
      dataCount = make_shared<long>(boost::any_cast<long>(m["DataCount"]));
    }
    if (m.find("DataSize") != m.end() && !m["DataSize"].empty()) {
      dataSize = make_shared<long>(boost::any_cast<long>(m["DataSize"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      options = make_shared<string>(boost::any_cast<string>(m["Options"]));
    }
  }


  virtual ~UpdateDatasetVersionRequest() = default;
};
class UpdateDatasetVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateDatasetVersionResponseBody() {}

  explicit UpdateDatasetVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateDatasetVersionResponseBody() = default;
};
class UpdateDatasetVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateDatasetVersionResponseBody> body{};

  UpdateDatasetVersionResponse() {}

  explicit UpdateDatasetVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateDatasetVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateDatasetVersionResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateDatasetVersionResponse() = default;
};
class UpdateDefaultWorkspaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> workspaceId{};

  UpdateDefaultWorkspaceRequest() {}

  explicit UpdateDefaultWorkspaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~UpdateDefaultWorkspaceRequest() = default;
};
class UpdateDefaultWorkspaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateDefaultWorkspaceResponseBody() {}

  explicit UpdateDefaultWorkspaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateDefaultWorkspaceResponseBody() = default;
};
class UpdateDefaultWorkspaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateDefaultWorkspaceResponseBody> body{};

  UpdateDefaultWorkspaceResponse() {}

  explicit UpdateDefaultWorkspaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateDefaultWorkspaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateDefaultWorkspaceResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateDefaultWorkspaceResponse() = default;
};
class UpdateExperimentRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessibility{};
  shared_ptr<string> name{};

  UpdateExperimentRequest() {}

  explicit UpdateExperimentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessibility) {
      res["Accessibility"] = boost::any(*accessibility);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accessibility") != m.end() && !m["Accessibility"].empty()) {
      accessibility = make_shared<string>(boost::any_cast<string>(m["Accessibility"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~UpdateExperimentRequest() = default;
};
class UpdateExperimentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateExperimentResponseBody() {}

  explicit UpdateExperimentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateExperimentResponseBody() = default;
};
class UpdateExperimentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateExperimentResponseBody> body{};

  UpdateExperimentResponse() {}

  explicit UpdateExperimentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateExperimentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateExperimentResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateExperimentResponse() = default;
};
class UpdateModelRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessibility{};
  shared_ptr<string> domain{};
  shared_ptr<map<string, boost::any>> extraInfo{};
  shared_ptr<string> modelDescription{};
  shared_ptr<string> modelDoc{};
  shared_ptr<string> modelName{};
  shared_ptr<string> modelType{};
  shared_ptr<long> orderNumber{};
  shared_ptr<string> origin{};
  shared_ptr<string> task{};

  UpdateModelRequest() {}

  explicit UpdateModelRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessibility) {
      res["Accessibility"] = boost::any(*accessibility);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (extraInfo) {
      res["ExtraInfo"] = boost::any(*extraInfo);
    }
    if (modelDescription) {
      res["ModelDescription"] = boost::any(*modelDescription);
    }
    if (modelDoc) {
      res["ModelDoc"] = boost::any(*modelDoc);
    }
    if (modelName) {
      res["ModelName"] = boost::any(*modelName);
    }
    if (modelType) {
      res["ModelType"] = boost::any(*modelType);
    }
    if (orderNumber) {
      res["OrderNumber"] = boost::any(*orderNumber);
    }
    if (origin) {
      res["Origin"] = boost::any(*origin);
    }
    if (task) {
      res["Task"] = boost::any(*task);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accessibility") != m.end() && !m["Accessibility"].empty()) {
      accessibility = make_shared<string>(boost::any_cast<string>(m["Accessibility"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("ExtraInfo") != m.end() && !m["ExtraInfo"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ExtraInfo"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extraInfo = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("ModelDescription") != m.end() && !m["ModelDescription"].empty()) {
      modelDescription = make_shared<string>(boost::any_cast<string>(m["ModelDescription"]));
    }
    if (m.find("ModelDoc") != m.end() && !m["ModelDoc"].empty()) {
      modelDoc = make_shared<string>(boost::any_cast<string>(m["ModelDoc"]));
    }
    if (m.find("ModelName") != m.end() && !m["ModelName"].empty()) {
      modelName = make_shared<string>(boost::any_cast<string>(m["ModelName"]));
    }
    if (m.find("ModelType") != m.end() && !m["ModelType"].empty()) {
      modelType = make_shared<string>(boost::any_cast<string>(m["ModelType"]));
    }
    if (m.find("OrderNumber") != m.end() && !m["OrderNumber"].empty()) {
      orderNumber = make_shared<long>(boost::any_cast<long>(m["OrderNumber"]));
    }
    if (m.find("Origin") != m.end() && !m["Origin"].empty()) {
      origin = make_shared<string>(boost::any_cast<string>(m["Origin"]));
    }
    if (m.find("Task") != m.end() && !m["Task"].empty()) {
      task = make_shared<string>(boost::any_cast<string>(m["Task"]));
    }
  }


  virtual ~UpdateModelRequest() = default;
};
class UpdateModelResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateModelResponseBody() {}

  explicit UpdateModelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateModelResponseBody() = default;
};
class UpdateModelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateModelResponseBody> body{};

  UpdateModelResponse() {}

  explicit UpdateModelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateModelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateModelResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateModelResponse() = default;
};
class UpdateModelVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> approvalStatus{};
  shared_ptr<map<string, boost::any>> compressionSpec{};
  shared_ptr<map<string, boost::any>> evaluationSpec{};
  shared_ptr<map<string, boost::any>> extraInfo{};
  shared_ptr<map<string, boost::any>> inferenceSpec{};
  shared_ptr<map<string, boost::any>> metrics{};
  shared_ptr<string> options{};
  shared_ptr<string> sourceId{};
  shared_ptr<string> sourceType{};
  shared_ptr<map<string, boost::any>> trainingSpec{};
  shared_ptr<string> versionDescription{};

  UpdateModelVersionRequest() {}

  explicit UpdateModelVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (approvalStatus) {
      res["ApprovalStatus"] = boost::any(*approvalStatus);
    }
    if (compressionSpec) {
      res["CompressionSpec"] = boost::any(*compressionSpec);
    }
    if (evaluationSpec) {
      res["EvaluationSpec"] = boost::any(*evaluationSpec);
    }
    if (extraInfo) {
      res["ExtraInfo"] = boost::any(*extraInfo);
    }
    if (inferenceSpec) {
      res["InferenceSpec"] = boost::any(*inferenceSpec);
    }
    if (metrics) {
      res["Metrics"] = boost::any(*metrics);
    }
    if (options) {
      res["Options"] = boost::any(*options);
    }
    if (sourceId) {
      res["SourceId"] = boost::any(*sourceId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (trainingSpec) {
      res["TrainingSpec"] = boost::any(*trainingSpec);
    }
    if (versionDescription) {
      res["VersionDescription"] = boost::any(*versionDescription);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApprovalStatus") != m.end() && !m["ApprovalStatus"].empty()) {
      approvalStatus = make_shared<string>(boost::any_cast<string>(m["ApprovalStatus"]));
    }
    if (m.find("CompressionSpec") != m.end() && !m["CompressionSpec"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["CompressionSpec"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      compressionSpec = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("EvaluationSpec") != m.end() && !m["EvaluationSpec"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["EvaluationSpec"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      evaluationSpec = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("ExtraInfo") != m.end() && !m["ExtraInfo"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ExtraInfo"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extraInfo = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("InferenceSpec") != m.end() && !m["InferenceSpec"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["InferenceSpec"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      inferenceSpec = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Metrics") != m.end() && !m["Metrics"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Metrics"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      metrics = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      options = make_shared<string>(boost::any_cast<string>(m["Options"]));
    }
    if (m.find("SourceId") != m.end() && !m["SourceId"].empty()) {
      sourceId = make_shared<string>(boost::any_cast<string>(m["SourceId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("TrainingSpec") != m.end() && !m["TrainingSpec"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["TrainingSpec"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      trainingSpec = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("VersionDescription") != m.end() && !m["VersionDescription"].empty()) {
      versionDescription = make_shared<string>(boost::any_cast<string>(m["VersionDescription"]));
    }
  }


  virtual ~UpdateModelVersionRequest() = default;
};
class UpdateModelVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateModelVersionResponseBody() {}

  explicit UpdateModelVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateModelVersionResponseBody() = default;
};
class UpdateModelVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateModelVersionResponseBody> body{};

  UpdateModelVersionResponse() {}

  explicit UpdateModelVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateModelVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateModelVersionResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateModelVersionResponse() = default;
};
class UpdateRunRequest : public Darabonba::Model {
public:
  shared_ptr<vector<Label>> labels{};
  shared_ptr<string> name{};
  shared_ptr<vector<RunParam>> params{};

  UpdateRunRequest() {}

  explicit UpdateRunRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (params) {
      vector<boost::any> temp1;
      for(auto item1:*params){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Params"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<Label> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Label model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<Label>>(expect1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Params") != m.end() && !m["Params"].empty()) {
      if (typeid(vector<boost::any>) == m["Params"].type()) {
        vector<RunParam> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Params"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunParam model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        params = make_shared<vector<RunParam>>(expect1);
      }
    }
  }


  virtual ~UpdateRunRequest() = default;
};
class UpdateRunResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateRunResponseBody() {}

  explicit UpdateRunResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~UpdateRunResponseBody() = default;
};
class UpdateRunResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateRunResponseBody> body{};

  UpdateRunResponse() {}

  explicit UpdateRunResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateRunResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateRunResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateRunResponse() = default;
};
class UpdateWorkspaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};

  UpdateWorkspaceRequest() {}

  explicit UpdateWorkspaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
  }


  virtual ~UpdateWorkspaceRequest() = default;
};
class UpdateWorkspaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateWorkspaceResponseBody() {}

  explicit UpdateWorkspaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateWorkspaceResponseBody() = default;
};
class UpdateWorkspaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateWorkspaceResponseBody> body{};

  UpdateWorkspaceResponse() {}

  explicit UpdateWorkspaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateWorkspaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateWorkspaceResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateWorkspaceResponse() = default;
};
class UpdateWorkspaceResourceRequestLabels : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  UpdateWorkspaceResourceRequestLabels() {}

  explicit UpdateWorkspaceResourceRequestLabels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateWorkspaceResourceRequestLabels() = default;
};
class UpdateWorkspaceResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupName{};
  shared_ptr<bool> isDefault{};
  shared_ptr<vector<UpdateWorkspaceResourceRequestLabels>> labels{};
  shared_ptr<string> productType{};
  shared_ptr<vector<string>> resourceIds{};
  shared_ptr<string> resourceType{};
  shared_ptr<map<string, boost::any>> spec{};

  UpdateWorkspaceResourceRequest() {}

  explicit UpdateWorkspaceResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (isDefault) {
      res["IsDefault"] = boost::any(*isDefault);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (resourceIds) {
      res["ResourceIds"] = boost::any(*resourceIds);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (spec) {
      res["Spec"] = boost::any(*spec);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("IsDefault") != m.end() && !m["IsDefault"].empty()) {
      isDefault = make_shared<bool>(boost::any_cast<bool>(m["IsDefault"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<UpdateWorkspaceResourceRequestLabels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateWorkspaceResourceRequestLabels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<UpdateWorkspaceResourceRequestLabels>>(expect1);
      }
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
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
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Spec") != m.end() && !m["Spec"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Spec"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      spec = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~UpdateWorkspaceResourceRequest() = default;
};
class UpdateWorkspaceResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> resourceIds{};

  UpdateWorkspaceResourceResponseBody() {}

  explicit UpdateWorkspaceResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceIds) {
      res["ResourceIds"] = boost::any(*resourceIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
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
  }


  virtual ~UpdateWorkspaceResourceResponseBody() = default;
};
class UpdateWorkspaceResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateWorkspaceResourceResponseBody> body{};

  UpdateWorkspaceResourceResponse() {}

  explicit UpdateWorkspaceResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateWorkspaceResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateWorkspaceResourceResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateWorkspaceResourceResponse() = default;
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
  AcceptDataworksEventResponse acceptDataworksEventWithOptions(shared_ptr<AcceptDataworksEventRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AcceptDataworksEventResponse acceptDataworksEvent(shared_ptr<AcceptDataworksEventRequest> request);
  AddImageResponse addImageWithOptions(shared_ptr<AddImageRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddImageResponse addImage(shared_ptr<AddImageRequest> request);
  AddImageLabelsResponse addImageLabelsWithOptions(shared_ptr<string> ImageId,
                                                   shared_ptr<AddImageLabelsRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddImageLabelsResponse addImageLabels(shared_ptr<string> ImageId, shared_ptr<AddImageLabelsRequest> request);
  AddMemberRoleResponse addMemberRoleWithOptions(shared_ptr<string> WorkspaceId,
                                                 shared_ptr<string> MemberId,
                                                 shared_ptr<string> RoleName,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddMemberRoleResponse addMemberRole(shared_ptr<string> WorkspaceId, shared_ptr<string> MemberId, shared_ptr<string> RoleName);
  ChangeResourceGroupResponse changeResourceGroupWithOptions(shared_ptr<ChangeResourceGroupRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChangeResourceGroupResponse changeResourceGroup(shared_ptr<ChangeResourceGroupRequest> request);
  CreateCodeSourceResponse createCodeSourceWithOptions(shared_ptr<CreateCodeSourceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateCodeSourceResponse createCodeSource(shared_ptr<CreateCodeSourceRequest> request);
  CreateConnectionResponse createConnectionWithOptions(shared_ptr<CreateConnectionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateConnectionResponse createConnection(shared_ptr<CreateConnectionRequest> request);
  CreateDatasetResponse createDatasetWithOptions(shared_ptr<CreateDatasetRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDatasetResponse createDataset(shared_ptr<CreateDatasetRequest> request);
  CreateDatasetFileMetasResponse createDatasetFileMetasWithOptions(shared_ptr<string> DatasetId,
                                                                   shared_ptr<CreateDatasetFileMetasRequest> request,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDatasetFileMetasResponse createDatasetFileMetas(shared_ptr<string> DatasetId, shared_ptr<CreateDatasetFileMetasRequest> request);
  CreateDatasetJobResponse createDatasetJobWithOptions(shared_ptr<string> DatasetId,
                                                       shared_ptr<CreateDatasetJobRequest> request,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDatasetJobResponse createDatasetJob(shared_ptr<string> DatasetId, shared_ptr<CreateDatasetJobRequest> request);
  CreateDatasetJobConfigResponse createDatasetJobConfigWithOptions(shared_ptr<string> DatasetId,
                                                                   shared_ptr<CreateDatasetJobConfigRequest> request,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDatasetJobConfigResponse createDatasetJobConfig(shared_ptr<string> DatasetId, shared_ptr<CreateDatasetJobConfigRequest> request);
  CreateDatasetLabelsResponse createDatasetLabelsWithOptions(shared_ptr<string> DatasetId,
                                                             shared_ptr<CreateDatasetLabelsRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDatasetLabelsResponse createDatasetLabels(shared_ptr<string> DatasetId, shared_ptr<CreateDatasetLabelsRequest> request);
  CreateDatasetVersionResponse createDatasetVersionWithOptions(shared_ptr<string> DatasetId,
                                                               shared_ptr<CreateDatasetVersionRequest> request,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDatasetVersionResponse createDatasetVersion(shared_ptr<string> DatasetId, shared_ptr<CreateDatasetVersionRequest> request);
  CreateDatasetVersionLabelsResponse createDatasetVersionLabelsWithOptions(shared_ptr<string> DatasetId,
                                                                           shared_ptr<string> VersionName,
                                                                           shared_ptr<CreateDatasetVersionLabelsRequest> request,
                                                                           shared_ptr<map<string, string>> headers,
                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDatasetVersionLabelsResponse createDatasetVersionLabels(shared_ptr<string> DatasetId, shared_ptr<string> VersionName, shared_ptr<CreateDatasetVersionLabelsRequest> request);
  CreateExperimentResponse createExperimentWithOptions(shared_ptr<CreateExperimentRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateExperimentResponse createExperiment(shared_ptr<CreateExperimentRequest> request);
  CreateMemberResponse createMemberWithOptions(shared_ptr<string> WorkspaceId,
                                               shared_ptr<CreateMemberRequest> request,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateMemberResponse createMember(shared_ptr<string> WorkspaceId, shared_ptr<CreateMemberRequest> request);
  CreateModelResponse createModelWithOptions(shared_ptr<CreateModelRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateModelResponse createModel(shared_ptr<CreateModelRequest> request);
  CreateModelLabelsResponse createModelLabelsWithOptions(shared_ptr<string> ModelId,
                                                         shared_ptr<CreateModelLabelsRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateModelLabelsResponse createModelLabels(shared_ptr<string> ModelId, shared_ptr<CreateModelLabelsRequest> request);
  CreateModelVersionResponse createModelVersionWithOptions(shared_ptr<string> ModelId,
                                                           shared_ptr<CreateModelVersionRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateModelVersionResponse createModelVersion(shared_ptr<string> ModelId, shared_ptr<CreateModelVersionRequest> request);
  CreateModelVersionLabelsResponse createModelVersionLabelsWithOptions(shared_ptr<string> ModelId,
                                                                       shared_ptr<string> VersionName,
                                                                       shared_ptr<CreateModelVersionLabelsRequest> request,
                                                                       shared_ptr<map<string, string>> headers,
                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateModelVersionLabelsResponse createModelVersionLabels(shared_ptr<string> ModelId, shared_ptr<string> VersionName, shared_ptr<CreateModelVersionLabelsRequest> request);
  CreateProductOrdersResponse createProductOrdersWithOptions(shared_ptr<CreateProductOrdersRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateProductOrdersResponse createProductOrders(shared_ptr<CreateProductOrdersRequest> request);
  CreateRunResponse createRunWithOptions(shared_ptr<CreateRunRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRunResponse createRun(shared_ptr<CreateRunRequest> request);
  CreateWorkspaceResponse createWorkspaceWithOptions(shared_ptr<CreateWorkspaceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateWorkspaceResponse createWorkspace(shared_ptr<CreateWorkspaceRequest> request);
  CreateWorkspaceResourceResponse createWorkspaceResourceWithOptions(shared_ptr<string> WorkspaceId,
                                                                     shared_ptr<CreateWorkspaceResourceRequest> request,
                                                                     shared_ptr<map<string, string>> headers,
                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateWorkspaceResourceResponse createWorkspaceResource(shared_ptr<string> WorkspaceId, shared_ptr<CreateWorkspaceResourceRequest> request);
  DeleteCodeSourceResponse deleteCodeSourceWithOptions(shared_ptr<string> CodeSourceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteCodeSourceResponse deleteCodeSource(shared_ptr<string> CodeSourceId);
  DeleteConfigResponse deleteConfigWithOptions(shared_ptr<string> WorkspaceId,
                                               shared_ptr<string> ConfigKey,
                                               shared_ptr<DeleteConfigRequest> request,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteConfigResponse deleteConfig(shared_ptr<string> WorkspaceId, shared_ptr<string> ConfigKey, shared_ptr<DeleteConfigRequest> request);
  DeleteConnectionResponse deleteConnectionWithOptions(shared_ptr<string> ConnectionId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteConnectionResponse deleteConnection(shared_ptr<string> ConnectionId);
  DeleteDatasetResponse deleteDatasetWithOptions(shared_ptr<string> DatasetId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDatasetResponse deleteDataset(shared_ptr<string> DatasetId);
  DeleteDatasetFileMetasResponse deleteDatasetFileMetasWithOptions(shared_ptr<string> DatasetId,
                                                                   shared_ptr<DeleteDatasetFileMetasRequest> request,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDatasetFileMetasResponse deleteDatasetFileMetas(shared_ptr<string> DatasetId, shared_ptr<DeleteDatasetFileMetasRequest> request);
  DeleteDatasetJobResponse deleteDatasetJobWithOptions(shared_ptr<string> DatasetId,
                                                       shared_ptr<string> DatasetJobId,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDatasetJobResponse deleteDatasetJob(shared_ptr<string> DatasetId, shared_ptr<string> DatasetJobId);
  DeleteDatasetJobConfigResponse deleteDatasetJobConfigWithOptions(shared_ptr<string> DatasetId,
                                                                   shared_ptr<string> DatasetJobConfigId,
                                                                   shared_ptr<DeleteDatasetJobConfigRequest> request,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDatasetJobConfigResponse deleteDatasetJobConfig(shared_ptr<string> DatasetId, shared_ptr<string> DatasetJobConfigId, shared_ptr<DeleteDatasetJobConfigRequest> request);
  DeleteDatasetLabelsResponse deleteDatasetLabelsWithOptions(shared_ptr<string> DatasetId,
                                                             shared_ptr<DeleteDatasetLabelsRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDatasetLabelsResponse deleteDatasetLabels(shared_ptr<string> DatasetId, shared_ptr<DeleteDatasetLabelsRequest> request);
  DeleteDatasetVersionResponse deleteDatasetVersionWithOptions(shared_ptr<string> DatasetId,
                                                               shared_ptr<string> VersionName,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDatasetVersionResponse deleteDatasetVersion(shared_ptr<string> DatasetId, shared_ptr<string> VersionName);
  DeleteDatasetVersionLabelsResponse deleteDatasetVersionLabelsWithOptions(shared_ptr<string> DatasetId,
                                                                           shared_ptr<string> VersionName,
                                                                           shared_ptr<DeleteDatasetVersionLabelsRequest> request,
                                                                           shared_ptr<map<string, string>> headers,
                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDatasetVersionLabelsResponse deleteDatasetVersionLabels(shared_ptr<string> DatasetId, shared_ptr<string> VersionName, shared_ptr<DeleteDatasetVersionLabelsRequest> request);
  DeleteExperimentResponse deleteExperimentWithOptions(shared_ptr<string> ExperimentId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteExperimentResponse deleteExperiment(shared_ptr<string> ExperimentId);
  DeleteExperimentLabelResponse deleteExperimentLabelWithOptions(shared_ptr<string> ExperimentId,
                                                                 shared_ptr<string> Key,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteExperimentLabelResponse deleteExperimentLabel(shared_ptr<string> ExperimentId, shared_ptr<string> Key);
  DeleteMembersResponse deleteMembersWithOptions(shared_ptr<string> WorkspaceId,
                                                 shared_ptr<DeleteMembersRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteMembersResponse deleteMembers(shared_ptr<string> WorkspaceId, shared_ptr<DeleteMembersRequest> request);
  DeleteModelResponse deleteModelWithOptions(shared_ptr<string> ModelId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteModelResponse deleteModel(shared_ptr<string> ModelId);
  DeleteModelLabelsResponse deleteModelLabelsWithOptions(shared_ptr<string> ModelId,
                                                         shared_ptr<DeleteModelLabelsRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteModelLabelsResponse deleteModelLabels(shared_ptr<string> ModelId, shared_ptr<DeleteModelLabelsRequest> request);
  DeleteModelVersionResponse deleteModelVersionWithOptions(shared_ptr<string> ModelId,
                                                           shared_ptr<string> VersionName,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteModelVersionResponse deleteModelVersion(shared_ptr<string> ModelId, shared_ptr<string> VersionName);
  DeleteModelVersionLabelsResponse deleteModelVersionLabelsWithOptions(shared_ptr<string> ModelId,
                                                                       shared_ptr<string> VersionName,
                                                                       shared_ptr<DeleteModelVersionLabelsRequest> request,
                                                                       shared_ptr<map<string, string>> headers,
                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteModelVersionLabelsResponse deleteModelVersionLabels(shared_ptr<string> ModelId, shared_ptr<string> VersionName, shared_ptr<DeleteModelVersionLabelsRequest> request);
  DeleteRunResponse deleteRunWithOptions(shared_ptr<string> RunId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteRunResponse deleteRun(shared_ptr<string> RunId);
  DeleteRunLabelResponse deleteRunLabelWithOptions(shared_ptr<string> RunId,
                                                   shared_ptr<string> Key,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteRunLabelResponse deleteRunLabel(shared_ptr<string> RunId, shared_ptr<string> Key);
  DeleteUserConfigResponse deleteUserConfigWithOptions(shared_ptr<string> CategoryName,
                                                       shared_ptr<DeleteUserConfigRequest> request,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteUserConfigResponse deleteUserConfig(shared_ptr<string> CategoryName, shared_ptr<DeleteUserConfigRequest> request);
  DeleteWorkspaceResponse deleteWorkspaceWithOptions(shared_ptr<string> WorkspaceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteWorkspaceResponse deleteWorkspace(shared_ptr<string> WorkspaceId);
  DeleteWorkspaceResourceResponse deleteWorkspaceResourceWithOptions(shared_ptr<string> WorkspaceId,
                                                                     shared_ptr<DeleteWorkspaceResourceRequest> request,
                                                                     shared_ptr<map<string, string>> headers,
                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteWorkspaceResourceResponse deleteWorkspaceResource(shared_ptr<string> WorkspaceId, shared_ptr<DeleteWorkspaceResourceRequest> request);
  GetCodeSourceResponse getCodeSourceWithOptions(shared_ptr<string> CodeSourceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCodeSourceResponse getCodeSource(shared_ptr<string> CodeSourceId);
  GetConfigResponse getConfigWithOptions(shared_ptr<string> WorkspaceId,
                                         shared_ptr<GetConfigRequest> request,
                                         shared_ptr<map<string, string>> headers,
                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetConfigResponse getConfig(shared_ptr<string> WorkspaceId, shared_ptr<GetConfigRequest> request);
  GetConnectionResponse getConnectionWithOptions(shared_ptr<string> ConnectionId,
                                                 shared_ptr<GetConnectionRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetConnectionResponse getConnection(shared_ptr<string> ConnectionId, shared_ptr<GetConnectionRequest> request);
  GetDatasetResponse getDatasetWithOptions(shared_ptr<string> DatasetId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDatasetResponse getDataset(shared_ptr<string> DatasetId);
  GetDatasetFileMetaResponse getDatasetFileMetaWithOptions(shared_ptr<string> DatasetId,
                                                           shared_ptr<string> DatasetFileMetaId,
                                                           shared_ptr<GetDatasetFileMetaRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDatasetFileMetaResponse getDatasetFileMeta(shared_ptr<string> DatasetId, shared_ptr<string> DatasetFileMetaId, shared_ptr<GetDatasetFileMetaRequest> request);
  GetDatasetFileMetasStatisticsResponse getDatasetFileMetasStatisticsWithOptions(shared_ptr<string> DatasetId,
                                                                                 shared_ptr<GetDatasetFileMetasStatisticsRequest> request,
                                                                                 shared_ptr<map<string, string>> headers,
                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDatasetFileMetasStatisticsResponse getDatasetFileMetasStatistics(shared_ptr<string> DatasetId, shared_ptr<GetDatasetFileMetasStatisticsRequest> request);
  GetDatasetJobResponse getDatasetJobWithOptions(shared_ptr<string> DatasetId,
                                                 shared_ptr<string> DatasetJobId,
                                                 shared_ptr<GetDatasetJobRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDatasetJobResponse getDatasetJob(shared_ptr<string> DatasetId, shared_ptr<string> DatasetJobId, shared_ptr<GetDatasetJobRequest> request);
  GetDatasetJobConfigResponse getDatasetJobConfigWithOptions(shared_ptr<string> DatasetId,
                                                             shared_ptr<string> DatasetJobConfigId,
                                                             shared_ptr<GetDatasetJobConfigRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDatasetJobConfigResponse getDatasetJobConfig(shared_ptr<string> DatasetId, shared_ptr<string> DatasetJobConfigId, shared_ptr<GetDatasetJobConfigRequest> request);
  GetDatasetVersionResponse getDatasetVersionWithOptions(shared_ptr<string> DatasetId,
                                                         shared_ptr<string> VersionName,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDatasetVersionResponse getDatasetVersion(shared_ptr<string> DatasetId, shared_ptr<string> VersionName);
  GetDefaultWorkspaceResponse getDefaultWorkspaceWithOptions(shared_ptr<GetDefaultWorkspaceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDefaultWorkspaceResponse getDefaultWorkspace(shared_ptr<GetDefaultWorkspaceRequest> request);
  GetExperimentResponse getExperimentWithOptions(shared_ptr<string> ExperimentId,
                                                 shared_ptr<GetExperimentRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetExperimentResponse getExperiment(shared_ptr<string> ExperimentId, shared_ptr<GetExperimentRequest> request);
  GetImageResponse getImageWithOptions(shared_ptr<string> ImageId,
                                       shared_ptr<GetImageRequest> request,
                                       shared_ptr<map<string, string>> headers,
                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetImageResponse getImage(shared_ptr<string> ImageId, shared_ptr<GetImageRequest> request);
  GetMemberResponse getMemberWithOptions(shared_ptr<string> WorkspaceId,
                                         shared_ptr<GetMemberRequest> request,
                                         shared_ptr<map<string, string>> headers,
                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMemberResponse getMember(shared_ptr<string> WorkspaceId, shared_ptr<GetMemberRequest> request);
  GetModelResponse getModelWithOptions(shared_ptr<string> ModelId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetModelResponse getModel(shared_ptr<string> ModelId);
  GetModelVersionResponse getModelVersionWithOptions(shared_ptr<string> ModelId,
                                                     shared_ptr<string> VersionName,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetModelVersionResponse getModelVersion(shared_ptr<string> ModelId, shared_ptr<string> VersionName);
  GetPermissionResponse getPermissionWithOptions(shared_ptr<string> WorkspaceId,
                                                 shared_ptr<string> PermissionCode,
                                                 shared_ptr<GetPermissionRequest> tmpReq,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPermissionResponse getPermission(shared_ptr<string> WorkspaceId, shared_ptr<string> PermissionCode, shared_ptr<GetPermissionRequest> request);
  GetRunResponse getRunWithOptions(shared_ptr<string> RunId,
                                   shared_ptr<GetRunRequest> request,
                                   shared_ptr<map<string, string>> headers,
                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRunResponse getRun(shared_ptr<string> RunId, shared_ptr<GetRunRequest> request);
  GetWorkspaceResponse getWorkspaceWithOptions(shared_ptr<string> WorkspaceId,
                                               shared_ptr<GetWorkspaceRequest> request,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetWorkspaceResponse getWorkspace(shared_ptr<string> WorkspaceId, shared_ptr<GetWorkspaceRequest> request);
  ListCodeSourcesResponse listCodeSourcesWithOptions(shared_ptr<ListCodeSourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCodeSourcesResponse listCodeSources(shared_ptr<ListCodeSourcesRequest> request);
  ListConfigsResponse listConfigsWithOptions(shared_ptr<string> WorkspaceId,
                                             shared_ptr<ListConfigsRequest> request,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListConfigsResponse listConfigs(shared_ptr<string> WorkspaceId, shared_ptr<ListConfigsRequest> request);
  ListConnectionsResponse listConnectionsWithOptions(shared_ptr<ListConnectionsRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListConnectionsResponse listConnections(shared_ptr<ListConnectionsRequest> request);
  ListDatasetFileMetasResponse listDatasetFileMetasWithOptions(shared_ptr<string> DatasetId,
                                                               shared_ptr<ListDatasetFileMetasRequest> tmpReq,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDatasetFileMetasResponse listDatasetFileMetas(shared_ptr<string> DatasetId, shared_ptr<ListDatasetFileMetasRequest> request);
  ListDatasetJobConfigsResponse listDatasetJobConfigsWithOptions(shared_ptr<string> DatasetId,
                                                                 shared_ptr<ListDatasetJobConfigsRequest> request,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDatasetJobConfigsResponse listDatasetJobConfigs(shared_ptr<string> DatasetId, shared_ptr<ListDatasetJobConfigsRequest> request);
  ListDatasetJobsResponse listDatasetJobsWithOptions(shared_ptr<string> DatasetId,
                                                     shared_ptr<ListDatasetJobsRequest> request,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDatasetJobsResponse listDatasetJobs(shared_ptr<string> DatasetId, shared_ptr<ListDatasetJobsRequest> request);
  ListDatasetVersionsResponse listDatasetVersionsWithOptions(shared_ptr<string> DatasetId,
                                                             shared_ptr<ListDatasetVersionsRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDatasetVersionsResponse listDatasetVersions(shared_ptr<string> DatasetId, shared_ptr<ListDatasetVersionsRequest> request);
  ListDatasetsResponse listDatasetsWithOptions(shared_ptr<ListDatasetsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDatasetsResponse listDatasets(shared_ptr<ListDatasetsRequest> request);
  ListExperimentResponse listExperimentWithOptions(shared_ptr<ListExperimentRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListExperimentResponse listExperiment(shared_ptr<ListExperimentRequest> request);
  ListImageLabelsResponse listImageLabelsWithOptions(shared_ptr<ListImageLabelsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListImageLabelsResponse listImageLabels(shared_ptr<ListImageLabelsRequest> request);
  ListImagesResponse listImagesWithOptions(shared_ptr<ListImagesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListImagesResponse listImages(shared_ptr<ListImagesRequest> request);
  ListMembersResponse listMembersWithOptions(shared_ptr<string> WorkspaceId,
                                             shared_ptr<ListMembersRequest> request,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListMembersResponse listMembers(shared_ptr<string> WorkspaceId, shared_ptr<ListMembersRequest> request);
  ListModelVersionsResponse listModelVersionsWithOptions(shared_ptr<string> ModelId,
                                                         shared_ptr<ListModelVersionsRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListModelVersionsResponse listModelVersions(shared_ptr<string> ModelId, shared_ptr<ListModelVersionsRequest> request);
  ListModelsResponse listModelsWithOptions(shared_ptr<ListModelsRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListModelsResponse listModels(shared_ptr<ListModelsRequest> request);
  ListPermissionsResponse listPermissionsWithOptions(shared_ptr<string> WorkspaceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPermissionsResponse listPermissions(shared_ptr<string> WorkspaceId);
  ListProductsResponse listProductsWithOptions(shared_ptr<ListProductsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListProductsResponse listProducts(shared_ptr<ListProductsRequest> request);
  ListQuotasResponse listQuotasWithOptions(shared_ptr<ListQuotasRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListQuotasResponse listQuotas(shared_ptr<ListQuotasRequest> request);
  ListResourcesResponse listResourcesWithOptions(shared_ptr<ListResourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListResourcesResponse listResources(shared_ptr<ListResourcesRequest> request);
  ListRunMetricsResponse listRunMetricsWithOptions(shared_ptr<string> RunId,
                                                   shared_ptr<ListRunMetricsRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRunMetricsResponse listRunMetrics(shared_ptr<string> RunId, shared_ptr<ListRunMetricsRequest> request);
  ListRunsResponse listRunsWithOptions(shared_ptr<ListRunsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRunsResponse listRuns(shared_ptr<ListRunsRequest> request);
  ListUserConfigsResponse listUserConfigsWithOptions(shared_ptr<ListUserConfigsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListUserConfigsResponse listUserConfigs(shared_ptr<ListUserConfigsRequest> request);
  ListWorkspaceUsersResponse listWorkspaceUsersWithOptions(shared_ptr<string> WorkspaceId,
                                                           shared_ptr<ListWorkspaceUsersRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListWorkspaceUsersResponse listWorkspaceUsers(shared_ptr<string> WorkspaceId, shared_ptr<ListWorkspaceUsersRequest> request);
  ListWorkspacesResponse listWorkspacesWithOptions(shared_ptr<ListWorkspacesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListWorkspacesResponse listWorkspaces(shared_ptr<ListWorkspacesRequest> request);
  LogRunMetricsResponse logRunMetricsWithOptions(shared_ptr<string> RunId,
                                                 shared_ptr<LogRunMetricsRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  LogRunMetricsResponse logRunMetrics(shared_ptr<string> RunId, shared_ptr<LogRunMetricsRequest> request);
  PublishCodeSourceResponse publishCodeSourceWithOptions(shared_ptr<string> CodeSourceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PublishCodeSourceResponse publishCodeSource(shared_ptr<string> CodeSourceId);
  PublishDatasetResponse publishDatasetWithOptions(shared_ptr<string> DatasetId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PublishDatasetResponse publishDataset(shared_ptr<string> DatasetId);
  PublishImageResponse publishImageWithOptions(shared_ptr<string> ImageId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PublishImageResponse publishImage(shared_ptr<string> ImageId);
  RemoveImageResponse removeImageWithOptions(shared_ptr<string> ImageId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveImageResponse removeImage(shared_ptr<string> ImageId);
  RemoveImageLabelsResponse removeImageLabelsWithOptions(shared_ptr<string> ImageId,
                                                         shared_ptr<string> LabelKey,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveImageLabelsResponse removeImageLabels(shared_ptr<string> ImageId, shared_ptr<string> LabelKey);
  RemoveMemberRoleResponse removeMemberRoleWithOptions(shared_ptr<string> WorkspaceId,
                                                       shared_ptr<string> MemberId,
                                                       shared_ptr<string> RoleName,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveMemberRoleResponse removeMemberRole(shared_ptr<string> WorkspaceId, shared_ptr<string> MemberId, shared_ptr<string> RoleName);
  SetExperimentLabelsResponse setExperimentLabelsWithOptions(shared_ptr<string> ExperimentId,
                                                             shared_ptr<SetExperimentLabelsRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetExperimentLabelsResponse setExperimentLabels(shared_ptr<string> ExperimentId, shared_ptr<SetExperimentLabelsRequest> request);
  SetUserConfigsResponse setUserConfigsWithOptions(shared_ptr<SetUserConfigsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetUserConfigsResponse setUserConfigs(shared_ptr<SetUserConfigsRequest> request);
  StopDatasetJobResponse stopDatasetJobWithOptions(shared_ptr<string> DatasetId,
                                                   shared_ptr<string> DatasetJobId,
                                                   shared_ptr<StopDatasetJobRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopDatasetJobResponse stopDatasetJob(shared_ptr<string> DatasetId, shared_ptr<string> DatasetJobId, shared_ptr<StopDatasetJobRequest> request);
  UpdateCodeSourceResponse updateCodeSourceWithOptions(shared_ptr<string> CodeSourceId,
                                                       shared_ptr<UpdateCodeSourceRequest> request,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateCodeSourceResponse updateCodeSource(shared_ptr<string> CodeSourceId, shared_ptr<UpdateCodeSourceRequest> request);
  UpdateConfigResponse updateConfigWithOptions(shared_ptr<string> WorkspaceId,
                                               shared_ptr<UpdateConfigRequest> request,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateConfigResponse updateConfig(shared_ptr<string> WorkspaceId, shared_ptr<UpdateConfigRequest> request);
  UpdateConfigsResponse updateConfigsWithOptions(shared_ptr<string> WorkspaceId,
                                                 shared_ptr<UpdateConfigsRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateConfigsResponse updateConfigs(shared_ptr<string> WorkspaceId, shared_ptr<UpdateConfigsRequest> request);
  UpdateConnectionResponse updateConnectionWithOptions(shared_ptr<string> ConnectionId,
                                                       shared_ptr<UpdateConnectionRequest> request,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateConnectionResponse updateConnection(shared_ptr<string> ConnectionId, shared_ptr<UpdateConnectionRequest> request);
  UpdateDatasetResponse updateDatasetWithOptions(shared_ptr<string> DatasetId,
                                                 shared_ptr<UpdateDatasetRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateDatasetResponse updateDataset(shared_ptr<string> DatasetId, shared_ptr<UpdateDatasetRequest> request);
  UpdateDatasetFileMetasResponse updateDatasetFileMetasWithOptions(shared_ptr<string> DatasetId,
                                                                   shared_ptr<UpdateDatasetFileMetasRequest> request,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateDatasetFileMetasResponse updateDatasetFileMetas(shared_ptr<string> DatasetId, shared_ptr<UpdateDatasetFileMetasRequest> request);
  UpdateDatasetJobResponse updateDatasetJobWithOptions(shared_ptr<string> DatasetId,
                                                       shared_ptr<string> DatasetJobId,
                                                       shared_ptr<UpdateDatasetJobRequest> request,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateDatasetJobResponse updateDatasetJob(shared_ptr<string> DatasetId, shared_ptr<string> DatasetJobId, shared_ptr<UpdateDatasetJobRequest> request);
  UpdateDatasetJobConfigResponse updateDatasetJobConfigWithOptions(shared_ptr<string> DatasetId,
                                                                   shared_ptr<string> DatasetJobConfigId,
                                                                   shared_ptr<UpdateDatasetJobConfigRequest> request,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateDatasetJobConfigResponse updateDatasetJobConfig(shared_ptr<string> DatasetId, shared_ptr<string> DatasetJobConfigId, shared_ptr<UpdateDatasetJobConfigRequest> request);
  UpdateDatasetVersionResponse updateDatasetVersionWithOptions(shared_ptr<string> DatasetId,
                                                               shared_ptr<string> VersionName,
                                                               shared_ptr<UpdateDatasetVersionRequest> request,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateDatasetVersionResponse updateDatasetVersion(shared_ptr<string> DatasetId, shared_ptr<string> VersionName, shared_ptr<UpdateDatasetVersionRequest> request);
  UpdateDefaultWorkspaceResponse updateDefaultWorkspaceWithOptions(shared_ptr<UpdateDefaultWorkspaceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateDefaultWorkspaceResponse updateDefaultWorkspace(shared_ptr<UpdateDefaultWorkspaceRequest> request);
  UpdateExperimentResponse updateExperimentWithOptions(shared_ptr<string> ExperimentId,
                                                       shared_ptr<UpdateExperimentRequest> request,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateExperimentResponse updateExperiment(shared_ptr<string> ExperimentId, shared_ptr<UpdateExperimentRequest> request);
  UpdateModelResponse updateModelWithOptions(shared_ptr<string> ModelId,
                                             shared_ptr<UpdateModelRequest> request,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateModelResponse updateModel(shared_ptr<string> ModelId, shared_ptr<UpdateModelRequest> request);
  UpdateModelVersionResponse updateModelVersionWithOptions(shared_ptr<string> ModelId,
                                                           shared_ptr<string> VersionName,
                                                           shared_ptr<UpdateModelVersionRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateModelVersionResponse updateModelVersion(shared_ptr<string> ModelId, shared_ptr<string> VersionName, shared_ptr<UpdateModelVersionRequest> request);
  UpdateRunResponse updateRunWithOptions(shared_ptr<string> RunId,
                                         shared_ptr<UpdateRunRequest> request,
                                         shared_ptr<map<string, string>> headers,
                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateRunResponse updateRun(shared_ptr<string> RunId, shared_ptr<UpdateRunRequest> request);
  UpdateWorkspaceResponse updateWorkspaceWithOptions(shared_ptr<string> WorkspaceId,
                                                     shared_ptr<UpdateWorkspaceRequest> request,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateWorkspaceResponse updateWorkspace(shared_ptr<string> WorkspaceId, shared_ptr<UpdateWorkspaceRequest> request);
  UpdateWorkspaceResourceResponse updateWorkspaceResourceWithOptions(shared_ptr<string> WorkspaceId,
                                                                     shared_ptr<UpdateWorkspaceResourceRequest> request,
                                                                     shared_ptr<map<string, string>> headers,
                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateWorkspaceResourceResponse updateWorkspaceResource(shared_ptr<string> WorkspaceId, shared_ptr<UpdateWorkspaceResourceRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_AIWorkSpace20210204

#endif
