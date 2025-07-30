// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_PAI-DLC20201203_H_
#define ALIBABACLOUD_PAI-DLC20201203_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Pai-dlc20201203 {
class AIMasterMessage : public Darabonba::Model {
public:
  shared_ptr<string> extended{};
  shared_ptr<long> jobRestartCount{};
  shared_ptr<string> messageContent{};
  shared_ptr<string> messageEvent{};
  shared_ptr<long> messageVersion{};
  shared_ptr<string> restartType{};

  AIMasterMessage() {}

  explicit AIMasterMessage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (extended) {
      res["Extended"] = boost::any(*extended);
    }
    if (jobRestartCount) {
      res["JobRestartCount"] = boost::any(*jobRestartCount);
    }
    if (messageContent) {
      res["MessageContent"] = boost::any(*messageContent);
    }
    if (messageEvent) {
      res["MessageEvent"] = boost::any(*messageEvent);
    }
    if (messageVersion) {
      res["MessageVersion"] = boost::any(*messageVersion);
    }
    if (restartType) {
      res["RestartType"] = boost::any(*restartType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Extended") != m.end() && !m["Extended"].empty()) {
      extended = make_shared<string>(boost::any_cast<string>(m["Extended"]));
    }
    if (m.find("JobRestartCount") != m.end() && !m["JobRestartCount"].empty()) {
      jobRestartCount = make_shared<long>(boost::any_cast<long>(m["JobRestartCount"]));
    }
    if (m.find("MessageContent") != m.end() && !m["MessageContent"].empty()) {
      messageContent = make_shared<string>(boost::any_cast<string>(m["MessageContent"]));
    }
    if (m.find("MessageEvent") != m.end() && !m["MessageEvent"].empty()) {
      messageEvent = make_shared<string>(boost::any_cast<string>(m["MessageEvent"]));
    }
    if (m.find("MessageVersion") != m.end() && !m["MessageVersion"].empty()) {
      messageVersion = make_shared<long>(boost::any_cast<long>(m["MessageVersion"]));
    }
    if (m.find("RestartType") != m.end() && !m["RestartType"].empty()) {
      restartType = make_shared<string>(boost::any_cast<string>(m["RestartType"]));
    }
  }


  virtual ~AIMasterMessage() = default;
};
class AliyunAccounts : public Darabonba::Model {
public:
  shared_ptr<string> aliyunUid{};
  shared_ptr<string> employeeId{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifyTime{};

  AliyunAccounts() {}

  explicit AliyunAccounts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliyunUid) {
      res["AliyunUid"] = boost::any(*aliyunUid);
    }
    if (employeeId) {
      res["EmployeeId"] = boost::any(*employeeId);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifyTime) {
      res["GmtModifyTime"] = boost::any(*gmtModifyTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliyunUid") != m.end() && !m["AliyunUid"].empty()) {
      aliyunUid = make_shared<string>(boost::any_cast<string>(m["AliyunUid"]));
    }
    if (m.find("EmployeeId") != m.end() && !m["EmployeeId"].empty()) {
      employeeId = make_shared<string>(boost::any_cast<string>(m["EmployeeId"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifyTime") != m.end() && !m["GmtModifyTime"].empty()) {
      gmtModifyTime = make_shared<string>(boost::any_cast<string>(m["GmtModifyTime"]));
    }
  }


  virtual ~AliyunAccounts() = default;
};
class AssignNodeSpec : public Darabonba::Model {
public:
  shared_ptr<string> antiAffinityNodeNames{};
  shared_ptr<bool> enableAssignNode{};
  shared_ptr<string> nodeNames{};

  AssignNodeSpec() {}

  explicit AssignNodeSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (antiAffinityNodeNames) {
      res["AntiAffinityNodeNames"] = boost::any(*antiAffinityNodeNames);
    }
    if (enableAssignNode) {
      res["EnableAssignNode"] = boost::any(*enableAssignNode);
    }
    if (nodeNames) {
      res["NodeNames"] = boost::any(*nodeNames);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AntiAffinityNodeNames") != m.end() && !m["AntiAffinityNodeNames"].empty()) {
      antiAffinityNodeNames = make_shared<string>(boost::any_cast<string>(m["AntiAffinityNodeNames"]));
    }
    if (m.find("EnableAssignNode") != m.end() && !m["EnableAssignNode"].empty()) {
      enableAssignNode = make_shared<bool>(boost::any_cast<bool>(m["EnableAssignNode"]));
    }
    if (m.find("NodeNames") != m.end() && !m["NodeNames"].empty()) {
      nodeNames = make_shared<string>(boost::any_cast<string>(m["NodeNames"]));
    }
  }


  virtual ~AssignNodeSpec() = default;
};
class AssumeUserInfo : public Darabonba::Model {
public:
  shared_ptr<string> accessKeyId{};
  shared_ptr<string> id{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> type{};

  AssumeUserInfo() {}

  explicit AssumeUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKeyId) {
      res["AccessKeyId"] = boost::any(*accessKeyId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessKeyId") != m.end() && !m["AccessKeyId"].empty()) {
      accessKeyId = make_shared<string>(boost::any_cast<string>(m["AccessKeyId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~AssumeUserInfo() = default;
};
class AutoScalingSpec : public Darabonba::Model {
public:
  shared_ptr<string> scalingStrategy{};

  AutoScalingSpec() {}

  explicit AutoScalingSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scalingStrategy) {
      res["ScalingStrategy"] = boost::any(*scalingStrategy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ScalingStrategy") != m.end() && !m["ScalingStrategy"].empty()) {
      scalingStrategy = make_shared<string>(boost::any_cast<string>(m["ScalingStrategy"]));
    }
  }


  virtual ~AutoScalingSpec() = default;
};
class CodeSourceItem : public Darabonba::Model {
public:
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
  shared_ptr<string> userId{};

  CodeSourceItem() {}

  explicit CodeSourceItem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (userId) {
      res["UserId"] = boost::any(*userId);
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
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~CodeSourceItem() = default;
};
class EnvVar : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  EnvVar() {}

  explicit EnvVar(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EnvVar() = default;
};
class ResourceRequirements : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> limits{};
  shared_ptr<map<string, string>> requests{};

  ResourceRequirements() {}

  explicit ResourceRequirements(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (limits) {
      res["Limits"] = boost::any(*limits);
    }
    if (requests) {
      res["Requests"] = boost::any(*requests);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Limits") != m.end() && !m["Limits"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Limits"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      limits = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Requests") != m.end() && !m["Requests"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Requests"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      requests = make_shared<map<string, string>>(toMap1);
    }
  }


  virtual ~ResourceRequirements() = default;
};
class ContainerSpec : public Darabonba::Model {
public:
  shared_ptr<vector<string>> args{};
  shared_ptr<vector<string>> command{};
  shared_ptr<vector<EnvVar>> env{};
  shared_ptr<string> image{};
  shared_ptr<string> name{};
  shared_ptr<ResourceRequirements> resources{};
  shared_ptr<string> workingDir{};

  ContainerSpec() {}

  explicit ContainerSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (args) {
      res["Args"] = boost::any(*args);
    }
    if (command) {
      res["Command"] = boost::any(*command);
    }
    if (env) {
      vector<boost::any> temp1;
      for(auto item1:*env){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Env"] = boost::any(temp1);
    }
    if (image) {
      res["Image"] = boost::any(*image);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (resources) {
      res["Resources"] = resources ? boost::any(resources->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (workingDir) {
      res["WorkingDir"] = boost::any(*workingDir);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Args") != m.end() && !m["Args"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Args"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Args"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      args = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Command") != m.end() && !m["Command"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Command"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Command"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      command = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Env") != m.end() && !m["Env"].empty()) {
      if (typeid(vector<boost::any>) == m["Env"].type()) {
        vector<EnvVar> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Env"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            EnvVar model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        env = make_shared<vector<EnvVar>>(expect1);
      }
    }
    if (m.find("Image") != m.end() && !m["Image"].empty()) {
      image = make_shared<string>(boost::any_cast<string>(m["Image"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      if (typeid(map<string, boost::any>) == m["Resources"].type()) {
        ResourceRequirements model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Resources"]));
        resources = make_shared<ResourceRequirements>(model1);
      }
    }
    if (m.find("WorkingDir") != m.end() && !m["WorkingDir"].empty()) {
      workingDir = make_shared<string>(boost::any_cast<string>(m["WorkingDir"]));
    }
  }


  virtual ~ContainerSpec() = default;
};
class CredentialRole : public Darabonba::Model {
public:
  shared_ptr<string> assumeRoleFor{};
  shared_ptr<AssumeUserInfo> assumeUserInfo{};
  shared_ptr<string> policy{};
  shared_ptr<string> roleArn{};
  shared_ptr<string> roleType{};

  CredentialRole() {}

  explicit CredentialRole(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assumeRoleFor) {
      res["AssumeRoleFor"] = boost::any(*assumeRoleFor);
    }
    if (assumeUserInfo) {
      res["AssumeUserInfo"] = assumeUserInfo ? boost::any(assumeUserInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    if (roleArn) {
      res["RoleArn"] = boost::any(*roleArn);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AssumeRoleFor") != m.end() && !m["AssumeRoleFor"].empty()) {
      assumeRoleFor = make_shared<string>(boost::any_cast<string>(m["AssumeRoleFor"]));
    }
    if (m.find("AssumeUserInfo") != m.end() && !m["AssumeUserInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["AssumeUserInfo"].type()) {
        AssumeUserInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AssumeUserInfo"]));
        assumeUserInfo = make_shared<AssumeUserInfo>(model1);
      }
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
    if (m.find("RoleArn") != m.end() && !m["RoleArn"].empty()) {
      roleArn = make_shared<string>(boost::any_cast<string>(m["RoleArn"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<string>(boost::any_cast<string>(m["RoleType"]));
    }
  }


  virtual ~CredentialRole() = default;
};
class CredentialConfigItem : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<vector<CredentialRole>> roles{};
  shared_ptr<string> type{};

  CredentialConfigItem() {}

  explicit CredentialConfigItem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (roles) {
      vector<boost::any> temp1;
      for(auto item1:*roles){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Roles"] = boost::any(temp1);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Roles") != m.end() && !m["Roles"].empty()) {
      if (typeid(vector<boost::any>) == m["Roles"].type()) {
        vector<CredentialRole> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Roles"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CredentialRole model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        roles = make_shared<vector<CredentialRole>>(expect1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~CredentialConfigItem() = default;
};
class CredentialConfig : public Darabonba::Model {
public:
  shared_ptr<string> aliyunEnvRoleKey{};
  shared_ptr<vector<CredentialConfigItem>> credentialConfigItems{};
  shared_ptr<bool> enableCredentialInject{};

  CredentialConfig() {}

  explicit CredentialConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliyunEnvRoleKey) {
      res["AliyunEnvRoleKey"] = boost::any(*aliyunEnvRoleKey);
    }
    if (credentialConfigItems) {
      vector<boost::any> temp1;
      for(auto item1:*credentialConfigItems){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CredentialConfigItems"] = boost::any(temp1);
    }
    if (enableCredentialInject) {
      res["EnableCredentialInject"] = boost::any(*enableCredentialInject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliyunEnvRoleKey") != m.end() && !m["AliyunEnvRoleKey"].empty()) {
      aliyunEnvRoleKey = make_shared<string>(boost::any_cast<string>(m["AliyunEnvRoleKey"]));
    }
    if (m.find("CredentialConfigItems") != m.end() && !m["CredentialConfigItems"].empty()) {
      if (typeid(vector<boost::any>) == m["CredentialConfigItems"].type()) {
        vector<CredentialConfigItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CredentialConfigItems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CredentialConfigItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        credentialConfigItems = make_shared<vector<CredentialConfigItem>>(expect1);
      }
    }
    if (m.find("EnableCredentialInject") != m.end() && !m["EnableCredentialInject"].empty()) {
      enableCredentialInject = make_shared<bool>(boost::any_cast<bool>(m["EnableCredentialInject"]));
    }
  }


  virtual ~CredentialConfig() = default;
};
class DataSourceItem : public Darabonba::Model {
public:
  shared_ptr<string> dataSourceId{};
  shared_ptr<string> dataSourceType{};
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<string> endpoint{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifyTime{};
  shared_ptr<string> mountPath{};
  shared_ptr<string> options{};
  shared_ptr<string> path{};
  shared_ptr<string> userId{};

  DataSourceItem() {}

  explicit DataSourceItem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSourceId) {
      res["DataSourceId"] = boost::any(*dataSourceId);
    }
    if (dataSourceType) {
      res["DataSourceType"] = boost::any(*dataSourceType);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (endpoint) {
      res["Endpoint"] = boost::any(*endpoint);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
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
    if (options) {
      res["Options"] = boost::any(*options);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataSourceId") != m.end() && !m["DataSourceId"].empty()) {
      dataSourceId = make_shared<string>(boost::any_cast<string>(m["DataSourceId"]));
    }
    if (m.find("DataSourceType") != m.end() && !m["DataSourceType"].empty()) {
      dataSourceType = make_shared<string>(boost::any_cast<string>(m["DataSourceType"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Endpoint") != m.end() && !m["Endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["Endpoint"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
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
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      options = make_shared<string>(boost::any_cast<string>(m["Options"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~DataSourceItem() = default;
};
class DebuggerConfig : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> debuggerConfigId{};
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifyTime{};

  DebuggerConfig() {}

  explicit DebuggerConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (debuggerConfigId) {
      res["DebuggerConfigId"] = boost::any(*debuggerConfigId);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("DebuggerConfigId") != m.end() && !m["DebuggerConfigId"].empty()) {
      debuggerConfigId = make_shared<string>(boost::any_cast<string>(m["DebuggerConfigId"]));
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
  }


  virtual ~DebuggerConfig() = default;
};
class DebuggerJob : public Darabonba::Model {
public:
  shared_ptr<string> debuggerJobId{};
  shared_ptr<string> displayName{};
  shared_ptr<string> duration{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtFailedTime{};
  shared_ptr<string> gmtFinishTime{};
  shared_ptr<string> gmtRunningTime{};
  shared_ptr<string> gmtStoppedTime{};
  shared_ptr<string> gmtSubmittedTime{};
  shared_ptr<string> gmtSucceedTime{};
  shared_ptr<string> status{};
  shared_ptr<string> userId{};
  shared_ptr<string> workspaceId{};
  shared_ptr<string> workspaceName{};

  DebuggerJob() {}

  explicit DebuggerJob(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (debuggerJobId) {
      res["DebuggerJobId"] = boost::any(*debuggerJobId);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtFailedTime) {
      res["GmtFailedTime"] = boost::any(*gmtFailedTime);
    }
    if (gmtFinishTime) {
      res["GmtFinishTime"] = boost::any(*gmtFinishTime);
    }
    if (gmtRunningTime) {
      res["GmtRunningTime"] = boost::any(*gmtRunningTime);
    }
    if (gmtStoppedTime) {
      res["GmtStoppedTime"] = boost::any(*gmtStoppedTime);
    }
    if (gmtSubmittedTime) {
      res["GmtSubmittedTime"] = boost::any(*gmtSubmittedTime);
    }
    if (gmtSucceedTime) {
      res["GmtSucceedTime"] = boost::any(*gmtSucceedTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
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
    if (m.find("DebuggerJobId") != m.end() && !m["DebuggerJobId"].empty()) {
      debuggerJobId = make_shared<string>(boost::any_cast<string>(m["DebuggerJobId"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<string>(boost::any_cast<string>(m["Duration"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtFailedTime") != m.end() && !m["GmtFailedTime"].empty()) {
      gmtFailedTime = make_shared<string>(boost::any_cast<string>(m["GmtFailedTime"]));
    }
    if (m.find("GmtFinishTime") != m.end() && !m["GmtFinishTime"].empty()) {
      gmtFinishTime = make_shared<string>(boost::any_cast<string>(m["GmtFinishTime"]));
    }
    if (m.find("GmtRunningTime") != m.end() && !m["GmtRunningTime"].empty()) {
      gmtRunningTime = make_shared<string>(boost::any_cast<string>(m["GmtRunningTime"]));
    }
    if (m.find("GmtStoppedTime") != m.end() && !m["GmtStoppedTime"].empty()) {
      gmtStoppedTime = make_shared<string>(boost::any_cast<string>(m["GmtStoppedTime"]));
    }
    if (m.find("GmtSubmittedTime") != m.end() && !m["GmtSubmittedTime"].empty()) {
      gmtSubmittedTime = make_shared<string>(boost::any_cast<string>(m["GmtSubmittedTime"]));
    }
    if (m.find("GmtSucceedTime") != m.end() && !m["GmtSucceedTime"].empty()) {
      gmtSucceedTime = make_shared<string>(boost::any_cast<string>(m["GmtSucceedTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
    if (m.find("WorkspaceName") != m.end() && !m["WorkspaceName"].empty()) {
      workspaceName = make_shared<string>(boost::any_cast<string>(m["WorkspaceName"]));
    }
  }


  virtual ~DebuggerJob() = default;
};
class DebuggerJobIssue : public Darabonba::Model {
public:
  shared_ptr<string> debuggerJobIssue{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> jobDebuggerIssueId{};
  shared_ptr<string> jobId{};
  shared_ptr<string> reasonCode{};
  shared_ptr<string> reasonMessage{};
  shared_ptr<string> ruleName{};

  DebuggerJobIssue() {}

  explicit DebuggerJobIssue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (debuggerJobIssue) {
      res["DebuggerJobIssue"] = boost::any(*debuggerJobIssue);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (jobDebuggerIssueId) {
      res["JobDebuggerIssueId"] = boost::any(*jobDebuggerIssueId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (reasonCode) {
      res["ReasonCode"] = boost::any(*reasonCode);
    }
    if (reasonMessage) {
      res["ReasonMessage"] = boost::any(*reasonMessage);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DebuggerJobIssue") != m.end() && !m["DebuggerJobIssue"].empty()) {
      debuggerJobIssue = make_shared<string>(boost::any_cast<string>(m["DebuggerJobIssue"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("JobDebuggerIssueId") != m.end() && !m["JobDebuggerIssueId"].empty()) {
      jobDebuggerIssueId = make_shared<string>(boost::any_cast<string>(m["JobDebuggerIssueId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("ReasonCode") != m.end() && !m["ReasonCode"].empty()) {
      reasonCode = make_shared<string>(boost::any_cast<string>(m["ReasonCode"]));
    }
    if (m.find("ReasonMessage") != m.end() && !m["ReasonMessage"].empty()) {
      reasonMessage = make_shared<string>(boost::any_cast<string>(m["ReasonMessage"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
  }


  virtual ~DebuggerJobIssue() = default;
};
class DebuggerResult : public Darabonba::Model {
public:
  shared_ptr<string> debuggerConfigContent{};
  shared_ptr<string> debuggerJobIssues{};
  shared_ptr<string> debuggerJobStatus{};
  shared_ptr<string> debuggerReportURL{};
  shared_ptr<string> jobDisplayName{};
  shared_ptr<string> jobId{};
  shared_ptr<string> jobUserId{};

  DebuggerResult() {}

  explicit DebuggerResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (debuggerConfigContent) {
      res["DebuggerConfigContent"] = boost::any(*debuggerConfigContent);
    }
    if (debuggerJobIssues) {
      res["DebuggerJobIssues"] = boost::any(*debuggerJobIssues);
    }
    if (debuggerJobStatus) {
      res["DebuggerJobStatus"] = boost::any(*debuggerJobStatus);
    }
    if (debuggerReportURL) {
      res["DebuggerReportURL"] = boost::any(*debuggerReportURL);
    }
    if (jobDisplayName) {
      res["JobDisplayName"] = boost::any(*jobDisplayName);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (jobUserId) {
      res["JobUserId"] = boost::any(*jobUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DebuggerConfigContent") != m.end() && !m["DebuggerConfigContent"].empty()) {
      debuggerConfigContent = make_shared<string>(boost::any_cast<string>(m["DebuggerConfigContent"]));
    }
    if (m.find("DebuggerJobIssues") != m.end() && !m["DebuggerJobIssues"].empty()) {
      debuggerJobIssues = make_shared<string>(boost::any_cast<string>(m["DebuggerJobIssues"]));
    }
    if (m.find("DebuggerJobStatus") != m.end() && !m["DebuggerJobStatus"].empty()) {
      debuggerJobStatus = make_shared<string>(boost::any_cast<string>(m["DebuggerJobStatus"]));
    }
    if (m.find("DebuggerReportURL") != m.end() && !m["DebuggerReportURL"].empty()) {
      debuggerReportURL = make_shared<string>(boost::any_cast<string>(m["DebuggerReportURL"]));
    }
    if (m.find("JobDisplayName") != m.end() && !m["JobDisplayName"].empty()) {
      jobDisplayName = make_shared<string>(boost::any_cast<string>(m["JobDisplayName"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("JobUserId") != m.end() && !m["JobUserId"].empty()) {
      jobUserId = make_shared<string>(boost::any_cast<string>(m["JobUserId"]));
    }
  }


  virtual ~DebuggerResult() = default;
};
class EcsSpec : public Darabonba::Model {
public:
  shared_ptr<string> acceleratorType{};
  shared_ptr<long> cpu{};
  shared_ptr<string> defaultGPUDriver{};
  shared_ptr<long> gpu{};
  shared_ptr<long> gpuMemory{};
  shared_ptr<string> gpuType{};
  shared_ptr<string> instanceType{};
  shared_ptr<bool> isAvailable{};
  shared_ptr<long> memory{};
  shared_ptr<double> nonProtectSpotDiscount{};
  shared_ptr<vector<string>> paymentTypes{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> spotStockStatus{};
  shared_ptr<vector<string>> supportedGPUDrivers{};

  EcsSpec() {}

  explicit EcsSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceleratorType) {
      res["AcceleratorType"] = boost::any(*acceleratorType);
    }
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (defaultGPUDriver) {
      res["DefaultGPUDriver"] = boost::any(*defaultGPUDriver);
    }
    if (gpu) {
      res["Gpu"] = boost::any(*gpu);
    }
    if (gpuMemory) {
      res["GpuMemory"] = boost::any(*gpuMemory);
    }
    if (gpuType) {
      res["GpuType"] = boost::any(*gpuType);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (isAvailable) {
      res["IsAvailable"] = boost::any(*isAvailable);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (nonProtectSpotDiscount) {
      res["NonProtectSpotDiscount"] = boost::any(*nonProtectSpotDiscount);
    }
    if (paymentTypes) {
      res["PaymentTypes"] = boost::any(*paymentTypes);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (spotStockStatus) {
      res["SpotStockStatus"] = boost::any(*spotStockStatus);
    }
    if (supportedGPUDrivers) {
      res["SupportedGPUDrivers"] = boost::any(*supportedGPUDrivers);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceleratorType") != m.end() && !m["AcceleratorType"].empty()) {
      acceleratorType = make_shared<string>(boost::any_cast<string>(m["AcceleratorType"]));
    }
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<long>(boost::any_cast<long>(m["Cpu"]));
    }
    if (m.find("DefaultGPUDriver") != m.end() && !m["DefaultGPUDriver"].empty()) {
      defaultGPUDriver = make_shared<string>(boost::any_cast<string>(m["DefaultGPUDriver"]));
    }
    if (m.find("Gpu") != m.end() && !m["Gpu"].empty()) {
      gpu = make_shared<long>(boost::any_cast<long>(m["Gpu"]));
    }
    if (m.find("GpuMemory") != m.end() && !m["GpuMemory"].empty()) {
      gpuMemory = make_shared<long>(boost::any_cast<long>(m["GpuMemory"]));
    }
    if (m.find("GpuType") != m.end() && !m["GpuType"].empty()) {
      gpuType = make_shared<string>(boost::any_cast<string>(m["GpuType"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("IsAvailable") != m.end() && !m["IsAvailable"].empty()) {
      isAvailable = make_shared<bool>(boost::any_cast<bool>(m["IsAvailable"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<long>(boost::any_cast<long>(m["Memory"]));
    }
    if (m.find("NonProtectSpotDiscount") != m.end() && !m["NonProtectSpotDiscount"].empty()) {
      nonProtectSpotDiscount = make_shared<double>(boost::any_cast<double>(m["NonProtectSpotDiscount"]));
    }
    if (m.find("PaymentTypes") != m.end() && !m["PaymentTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PaymentTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PaymentTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      paymentTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("SpotStockStatus") != m.end() && !m["SpotStockStatus"].empty()) {
      spotStockStatus = make_shared<string>(boost::any_cast<string>(m["SpotStockStatus"]));
    }
    if (m.find("SupportedGPUDrivers") != m.end() && !m["SupportedGPUDrivers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SupportedGPUDrivers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SupportedGPUDrivers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      supportedGPUDrivers = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~EcsSpec() = default;
};
class EventInfo : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> id{};
  shared_ptr<string> podId{};
  shared_ptr<string> podUid{};
  shared_ptr<string> time{};

  EventInfo() {}

  explicit EventInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (podId) {
      res["PodId"] = boost::any(*podId);
    }
    if (podUid) {
      res["PodUid"] = boost::any(*podUid);
    }
    if (time) {
      res["Time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("PodId") != m.end() && !m["PodId"].empty()) {
      podId = make_shared<string>(boost::any_cast<string>(m["PodId"]));
    }
    if (m.find("PodUid") != m.end() && !m["PodUid"].empty()) {
      podUid = make_shared<string>(boost::any_cast<string>(m["PodUid"]));
    }
    if (m.find("Time") != m.end() && !m["Time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["Time"]));
    }
  }


  virtual ~EventInfo() = default;
};
class LifecyclePostStartExec : public Darabonba::Model {
public:
  shared_ptr<vector<string>> command{};

  LifecyclePostStartExec() {}

  explicit LifecyclePostStartExec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (command) {
      res["Command"] = boost::any(*command);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Command") != m.end() && !m["Command"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Command"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Command"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      command = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~LifecyclePostStartExec() = default;
};
class LifecyclePostStart : public Darabonba::Model {
public:
  shared_ptr<LifecyclePostStartExec> exec{};

  LifecyclePostStart() {}

  explicit LifecyclePostStart(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (exec) {
      res["Exec"] = exec ? boost::any(exec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Exec") != m.end() && !m["Exec"].empty()) {
      if (typeid(map<string, boost::any>) == m["Exec"].type()) {
        LifecyclePostStartExec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Exec"]));
        exec = make_shared<LifecyclePostStartExec>(model1);
      }
    }
  }


  virtual ~LifecyclePostStart() = default;
};
class LifecyclePreStopExec : public Darabonba::Model {
public:
  shared_ptr<vector<string>> command{};

  LifecyclePreStopExec() {}

  explicit LifecyclePreStopExec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (command) {
      res["Command"] = boost::any(*command);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Command") != m.end() && !m["Command"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Command"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Command"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      command = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~LifecyclePreStopExec() = default;
};
class LifecyclePreStop : public Darabonba::Model {
public:
  shared_ptr<LifecyclePreStopExec> exec{};

  LifecyclePreStop() {}

  explicit LifecyclePreStop(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (exec) {
      res["Exec"] = exec ? boost::any(exec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Exec") != m.end() && !m["Exec"].empty()) {
      if (typeid(map<string, boost::any>) == m["Exec"].type()) {
        LifecyclePreStopExec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Exec"]));
        exec = make_shared<LifecyclePreStopExec>(model1);
      }
    }
  }


  virtual ~LifecyclePreStop() = default;
};
class Lifecycle : public Darabonba::Model {
public:
  shared_ptr<LifecyclePostStart> postStart{};
  shared_ptr<LifecyclePreStop> preStop{};

  Lifecycle() {}

  explicit Lifecycle(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (postStart) {
      res["PostStart"] = postStart ? boost::any(postStart->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (preStop) {
      res["PreStop"] = preStop ? boost::any(preStop->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PostStart") != m.end() && !m["PostStart"].empty()) {
      if (typeid(map<string, boost::any>) == m["PostStart"].type()) {
        LifecyclePostStart model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PostStart"]));
        postStart = make_shared<LifecyclePostStart>(model1);
      }
    }
    if (m.find("PreStop") != m.end() && !m["PreStop"].empty()) {
      if (typeid(map<string, boost::any>) == m["PreStop"].type()) {
        LifecyclePreStop model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PreStop"]));
        preStop = make_shared<LifecyclePreStop>(model1);
      }
    }
  }


  virtual ~Lifecycle() = default;
};
class ExtraPodSpec : public Darabonba::Model {
public:
  shared_ptr<vector<ContainerSpec>> initContainers{};
  shared_ptr<Lifecycle> lifecycle{};
  shared_ptr<map<string, string>> podAnnotations{};
  shared_ptr<map<string, string>> podLabels{};
  shared_ptr<vector<string>> sharedVolumeMountPaths{};
  shared_ptr<vector<ContainerSpec>> sideCarContainers{};

  ExtraPodSpec() {}

  explicit ExtraPodSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (initContainers) {
      vector<boost::any> temp1;
      for(auto item1:*initContainers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InitContainers"] = boost::any(temp1);
    }
    if (lifecycle) {
      res["Lifecycle"] = lifecycle ? boost::any(lifecycle->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (podAnnotations) {
      res["PodAnnotations"] = boost::any(*podAnnotations);
    }
    if (podLabels) {
      res["PodLabels"] = boost::any(*podLabels);
    }
    if (sharedVolumeMountPaths) {
      res["SharedVolumeMountPaths"] = boost::any(*sharedVolumeMountPaths);
    }
    if (sideCarContainers) {
      vector<boost::any> temp1;
      for(auto item1:*sideCarContainers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SideCarContainers"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InitContainers") != m.end() && !m["InitContainers"].empty()) {
      if (typeid(vector<boost::any>) == m["InitContainers"].type()) {
        vector<ContainerSpec> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InitContainers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ContainerSpec model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        initContainers = make_shared<vector<ContainerSpec>>(expect1);
      }
    }
    if (m.find("Lifecycle") != m.end() && !m["Lifecycle"].empty()) {
      if (typeid(map<string, boost::any>) == m["Lifecycle"].type()) {
        Lifecycle model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Lifecycle"]));
        lifecycle = make_shared<Lifecycle>(model1);
      }
    }
    if (m.find("PodAnnotations") != m.end() && !m["PodAnnotations"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["PodAnnotations"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      podAnnotations = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("PodLabels") != m.end() && !m["PodLabels"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["PodLabels"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      podLabels = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("SharedVolumeMountPaths") != m.end() && !m["SharedVolumeMountPaths"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SharedVolumeMountPaths"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SharedVolumeMountPaths"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sharedVolumeMountPaths = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SideCarContainers") != m.end() && !m["SideCarContainers"].empty()) {
      if (typeid(vector<boost::any>) == m["SideCarContainers"].type()) {
        vector<ContainerSpec> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SideCarContainers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ContainerSpec model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sideCarContainers = make_shared<vector<ContainerSpec>>(expect1);
      }
    }
  }


  virtual ~ExtraPodSpec() = default;
};
class FreeResourceClusterControlItem : public Darabonba::Model {
public:
  shared_ptr<string> clusterID{};
  shared_ptr<string> clusterName{};
  shared_ptr<bool> crossClusters{};
  shared_ptr<bool> enableFreeResource{};
  shared_ptr<string> freeResourceClusterControlId{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifyTime{};
  shared_ptr<string> regionID{};

  FreeResourceClusterControlItem() {}

  explicit FreeResourceClusterControlItem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterID) {
      res["ClusterID"] = boost::any(*clusterID);
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (crossClusters) {
      res["CrossClusters"] = boost::any(*crossClusters);
    }
    if (enableFreeResource) {
      res["EnableFreeResource"] = boost::any(*enableFreeResource);
    }
    if (freeResourceClusterControlId) {
      res["FreeResourceClusterControlId"] = boost::any(*freeResourceClusterControlId);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifyTime) {
      res["GmtModifyTime"] = boost::any(*gmtModifyTime);
    }
    if (regionID) {
      res["RegionID"] = boost::any(*regionID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterID") != m.end() && !m["ClusterID"].empty()) {
      clusterID = make_shared<string>(boost::any_cast<string>(m["ClusterID"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("CrossClusters") != m.end() && !m["CrossClusters"].empty()) {
      crossClusters = make_shared<bool>(boost::any_cast<bool>(m["CrossClusters"]));
    }
    if (m.find("EnableFreeResource") != m.end() && !m["EnableFreeResource"].empty()) {
      enableFreeResource = make_shared<bool>(boost::any_cast<bool>(m["EnableFreeResource"]));
    }
    if (m.find("FreeResourceClusterControlId") != m.end() && !m["FreeResourceClusterControlId"].empty()) {
      freeResourceClusterControlId = make_shared<string>(boost::any_cast<string>(m["FreeResourceClusterControlId"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifyTime") != m.end() && !m["GmtModifyTime"].empty()) {
      gmtModifyTime = make_shared<string>(boost::any_cast<string>(m["GmtModifyTime"]));
    }
    if (m.find("RegionID") != m.end() && !m["RegionID"].empty()) {
      regionID = make_shared<string>(boost::any_cast<string>(m["RegionID"]));
    }
  }


  virtual ~FreeResourceClusterControlItem() = default;
};
class FreeResourceDetail : public Darabonba::Model {
public:
  shared_ptr<long> amount{};
  shared_ptr<string> resourceType{};

  FreeResourceDetail() {}

  explicit FreeResourceDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (amount) {
      res["Amount"] = boost::any(*amount);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<long>(boost::any_cast<long>(m["Amount"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~FreeResourceDetail() = default;
};
class FreeResourceItem : public Darabonba::Model {
public:
  shared_ptr<long> availableNumber{};
  shared_ptr<string> clusterID{};
  shared_ptr<string> clusterName{};
  shared_ptr<string> freeResourceId{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifyTime{};
  shared_ptr<string> regionID{};
  shared_ptr<string> resourceType{};

  FreeResourceItem() {}

  explicit FreeResourceItem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (availableNumber) {
      res["AvailableNumber"] = boost::any(*availableNumber);
    }
    if (clusterID) {
      res["ClusterID"] = boost::any(*clusterID);
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (freeResourceId) {
      res["FreeResourceId"] = boost::any(*freeResourceId);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifyTime) {
      res["GmtModifyTime"] = boost::any(*gmtModifyTime);
    }
    if (regionID) {
      res["RegionID"] = boost::any(*regionID);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvailableNumber") != m.end() && !m["AvailableNumber"].empty()) {
      availableNumber = make_shared<long>(boost::any_cast<long>(m["AvailableNumber"]));
    }
    if (m.find("ClusterID") != m.end() && !m["ClusterID"].empty()) {
      clusterID = make_shared<string>(boost::any_cast<string>(m["ClusterID"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("FreeResourceId") != m.end() && !m["FreeResourceId"].empty()) {
      freeResourceId = make_shared<string>(boost::any_cast<string>(m["FreeResourceId"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifyTime") != m.end() && !m["GmtModifyTime"].empty()) {
      gmtModifyTime = make_shared<string>(boost::any_cast<string>(m["GmtModifyTime"]));
    }
    if (m.find("RegionID") != m.end() && !m["RegionID"].empty()) {
      regionID = make_shared<string>(boost::any_cast<string>(m["RegionID"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~FreeResourceItem() = default;
};
class GPUDetail : public Darabonba::Model {
public:
  shared_ptr<string> GPU{};
  shared_ptr<string> GPUType{};
  shared_ptr<string> GPUTypeFullName{};

  GPUDetail() {}

  explicit GPUDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (GPU) {
      res["GPU"] = boost::any(*GPU);
    }
    if (GPUType) {
      res["GPUType"] = boost::any(*GPUType);
    }
    if (GPUTypeFullName) {
      res["GPUTypeFullName"] = boost::any(*GPUTypeFullName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GPU") != m.end() && !m["GPU"].empty()) {
      GPU = make_shared<string>(boost::any_cast<string>(m["GPU"]));
    }
    if (m.find("GPUType") != m.end() && !m["GPUType"].empty()) {
      GPUType = make_shared<string>(boost::any_cast<string>(m["GPUType"]));
    }
    if (m.find("GPUTypeFullName") != m.end() && !m["GPUTypeFullName"].empty()) {
      GPUTypeFullName = make_shared<string>(boost::any_cast<string>(m["GPUTypeFullName"]));
    }
  }


  virtual ~GPUDetail() = default;
};
class ImageConfig : public Darabonba::Model {
public:
  shared_ptr<string> auth{};
  shared_ptr<string> dockerRegistry{};
  shared_ptr<string> password{};
  shared_ptr<string> username{};

  ImageConfig() {}

  explicit ImageConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auth) {
      res["Auth"] = boost::any(*auth);
    }
    if (dockerRegistry) {
      res["DockerRegistry"] = boost::any(*dockerRegistry);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (username) {
      res["Username"] = boost::any(*username);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Auth") != m.end() && !m["Auth"].empty()) {
      auth = make_shared<string>(boost::any_cast<string>(m["Auth"]));
    }
    if (m.find("DockerRegistry") != m.end() && !m["DockerRegistry"].empty()) {
      dockerRegistry = make_shared<string>(boost::any_cast<string>(m["DockerRegistry"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
  }


  virtual ~ImageConfig() = default;
};
class ImageItem : public Darabonba::Model {
public:
  shared_ptr<string> acceleratorType{};
  shared_ptr<string> authorId{};
  shared_ptr<string> framework{};
  shared_ptr<string> imageProviderType{};
  shared_ptr<string> imageTag{};
  shared_ptr<string> imageUrl{};
  shared_ptr<string> imageUrlVpc{};

  ImageItem() {}

  explicit ImageItem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceleratorType) {
      res["AcceleratorType"] = boost::any(*acceleratorType);
    }
    if (authorId) {
      res["AuthorId"] = boost::any(*authorId);
    }
    if (framework) {
      res["Framework"] = boost::any(*framework);
    }
    if (imageProviderType) {
      res["ImageProviderType"] = boost::any(*imageProviderType);
    }
    if (imageTag) {
      res["ImageTag"] = boost::any(*imageTag);
    }
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    if (imageUrlVpc) {
      res["ImageUrlVpc"] = boost::any(*imageUrlVpc);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceleratorType") != m.end() && !m["AcceleratorType"].empty()) {
      acceleratorType = make_shared<string>(boost::any_cast<string>(m["AcceleratorType"]));
    }
    if (m.find("AuthorId") != m.end() && !m["AuthorId"].empty()) {
      authorId = make_shared<string>(boost::any_cast<string>(m["AuthorId"]));
    }
    if (m.find("Framework") != m.end() && !m["Framework"].empty()) {
      framework = make_shared<string>(boost::any_cast<string>(m["Framework"]));
    }
    if (m.find("ImageProviderType") != m.end() && !m["ImageProviderType"].empty()) {
      imageProviderType = make_shared<string>(boost::any_cast<string>(m["ImageProviderType"]));
    }
    if (m.find("ImageTag") != m.end() && !m["ImageTag"].empty()) {
      imageTag = make_shared<string>(boost::any_cast<string>(m["ImageTag"]));
    }
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
    if (m.find("ImageUrlVpc") != m.end() && !m["ImageUrlVpc"].empty()) {
      imageUrlVpc = make_shared<string>(boost::any_cast<string>(m["ImageUrlVpc"]));
    }
  }


  virtual ~ImageItem() = default;
};
class JobDebuggerConfig : public Darabonba::Model {
public:
  shared_ptr<string> debuggerConfigContent{};
  shared_ptr<string> debuggerConfigId{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> jobId{};

  JobDebuggerConfig() {}

  explicit JobDebuggerConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (debuggerConfigContent) {
      res["DebuggerConfigContent"] = boost::any(*debuggerConfigContent);
    }
    if (debuggerConfigId) {
      res["DebuggerConfigId"] = boost::any(*debuggerConfigId);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DebuggerConfigContent") != m.end() && !m["DebuggerConfigContent"].empty()) {
      debuggerConfigContent = make_shared<string>(boost::any_cast<string>(m["DebuggerConfigContent"]));
    }
    if (m.find("DebuggerConfigId") != m.end() && !m["DebuggerConfigId"].empty()) {
      debuggerConfigId = make_shared<string>(boost::any_cast<string>(m["DebuggerConfigId"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
  }


  virtual ~JobDebuggerConfig() = default;
};
class JobElasticSpec : public Darabonba::Model {
public:
  shared_ptr<string> AIMasterDockerImage{};
  shared_ptr<string> AIMasterType{};
  shared_ptr<long> EDPMaxParallelism{};
  shared_ptr<long> EDPMinParallelism{};
  shared_ptr<string> elasticStrategy{};
  shared_ptr<bool> enableAIMaster{};
  shared_ptr<bool> enableEDP{};
  shared_ptr<bool> enableElasticTraining{};
  shared_ptr<bool> enablePsJobElasticPS{};
  shared_ptr<bool> enablePsJobElasticWorker{};
  shared_ptr<bool> enablePsResourceEstimate{};
  shared_ptr<long> maxParallelism{};
  shared_ptr<long> minParallelism{};
  shared_ptr<long> PSMaxParallelism{};
  shared_ptr<long> PSMinParallelism{};

  JobElasticSpec() {}

  explicit JobElasticSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (AIMasterDockerImage) {
      res["AIMasterDockerImage"] = boost::any(*AIMasterDockerImage);
    }
    if (AIMasterType) {
      res["AIMasterType"] = boost::any(*AIMasterType);
    }
    if (EDPMaxParallelism) {
      res["EDPMaxParallelism"] = boost::any(*EDPMaxParallelism);
    }
    if (EDPMinParallelism) {
      res["EDPMinParallelism"] = boost::any(*EDPMinParallelism);
    }
    if (elasticStrategy) {
      res["ElasticStrategy"] = boost::any(*elasticStrategy);
    }
    if (enableAIMaster) {
      res["EnableAIMaster"] = boost::any(*enableAIMaster);
    }
    if (enableEDP) {
      res["EnableEDP"] = boost::any(*enableEDP);
    }
    if (enableElasticTraining) {
      res["EnableElasticTraining"] = boost::any(*enableElasticTraining);
    }
    if (enablePsJobElasticPS) {
      res["EnablePsJobElasticPS"] = boost::any(*enablePsJobElasticPS);
    }
    if (enablePsJobElasticWorker) {
      res["EnablePsJobElasticWorker"] = boost::any(*enablePsJobElasticWorker);
    }
    if (enablePsResourceEstimate) {
      res["EnablePsResourceEstimate"] = boost::any(*enablePsResourceEstimate);
    }
    if (maxParallelism) {
      res["MaxParallelism"] = boost::any(*maxParallelism);
    }
    if (minParallelism) {
      res["MinParallelism"] = boost::any(*minParallelism);
    }
    if (PSMaxParallelism) {
      res["PSMaxParallelism"] = boost::any(*PSMaxParallelism);
    }
    if (PSMinParallelism) {
      res["PSMinParallelism"] = boost::any(*PSMinParallelism);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AIMasterDockerImage") != m.end() && !m["AIMasterDockerImage"].empty()) {
      AIMasterDockerImage = make_shared<string>(boost::any_cast<string>(m["AIMasterDockerImage"]));
    }
    if (m.find("AIMasterType") != m.end() && !m["AIMasterType"].empty()) {
      AIMasterType = make_shared<string>(boost::any_cast<string>(m["AIMasterType"]));
    }
    if (m.find("EDPMaxParallelism") != m.end() && !m["EDPMaxParallelism"].empty()) {
      EDPMaxParallelism = make_shared<long>(boost::any_cast<long>(m["EDPMaxParallelism"]));
    }
    if (m.find("EDPMinParallelism") != m.end() && !m["EDPMinParallelism"].empty()) {
      EDPMinParallelism = make_shared<long>(boost::any_cast<long>(m["EDPMinParallelism"]));
    }
    if (m.find("ElasticStrategy") != m.end() && !m["ElasticStrategy"].empty()) {
      elasticStrategy = make_shared<string>(boost::any_cast<string>(m["ElasticStrategy"]));
    }
    if (m.find("EnableAIMaster") != m.end() && !m["EnableAIMaster"].empty()) {
      enableAIMaster = make_shared<bool>(boost::any_cast<bool>(m["EnableAIMaster"]));
    }
    if (m.find("EnableEDP") != m.end() && !m["EnableEDP"].empty()) {
      enableEDP = make_shared<bool>(boost::any_cast<bool>(m["EnableEDP"]));
    }
    if (m.find("EnableElasticTraining") != m.end() && !m["EnableElasticTraining"].empty()) {
      enableElasticTraining = make_shared<bool>(boost::any_cast<bool>(m["EnableElasticTraining"]));
    }
    if (m.find("EnablePsJobElasticPS") != m.end() && !m["EnablePsJobElasticPS"].empty()) {
      enablePsJobElasticPS = make_shared<bool>(boost::any_cast<bool>(m["EnablePsJobElasticPS"]));
    }
    if (m.find("EnablePsJobElasticWorker") != m.end() && !m["EnablePsJobElasticWorker"].empty()) {
      enablePsJobElasticWorker = make_shared<bool>(boost::any_cast<bool>(m["EnablePsJobElasticWorker"]));
    }
    if (m.find("EnablePsResourceEstimate") != m.end() && !m["EnablePsResourceEstimate"].empty()) {
      enablePsResourceEstimate = make_shared<bool>(boost::any_cast<bool>(m["EnablePsResourceEstimate"]));
    }
    if (m.find("MaxParallelism") != m.end() && !m["MaxParallelism"].empty()) {
      maxParallelism = make_shared<long>(boost::any_cast<long>(m["MaxParallelism"]));
    }
    if (m.find("MinParallelism") != m.end() && !m["MinParallelism"].empty()) {
      minParallelism = make_shared<long>(boost::any_cast<long>(m["MinParallelism"]));
    }
    if (m.find("PSMaxParallelism") != m.end() && !m["PSMaxParallelism"].empty()) {
      PSMaxParallelism = make_shared<long>(boost::any_cast<long>(m["PSMaxParallelism"]));
    }
    if (m.find("PSMinParallelism") != m.end() && !m["PSMinParallelism"].empty()) {
      PSMinParallelism = make_shared<long>(boost::any_cast<long>(m["PSMinParallelism"]));
    }
  }


  virtual ~JobElasticSpec() = default;
};
class JobItemCodeSource : public Darabonba::Model {
public:
  shared_ptr<string> branch{};
  shared_ptr<string> codeSourceId{};
  shared_ptr<string> commit{};
  shared_ptr<string> mountPath{};

  JobItemCodeSource() {}

  explicit JobItemCodeSource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (branch) {
      res["Branch"] = boost::any(*branch);
    }
    if (codeSourceId) {
      res["CodeSourceId"] = boost::any(*codeSourceId);
    }
    if (commit) {
      res["Commit"] = boost::any(*commit);
    }
    if (mountPath) {
      res["MountPath"] = boost::any(*mountPath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Branch") != m.end() && !m["Branch"].empty()) {
      branch = make_shared<string>(boost::any_cast<string>(m["Branch"]));
    }
    if (m.find("CodeSourceId") != m.end() && !m["CodeSourceId"].empty()) {
      codeSourceId = make_shared<string>(boost::any_cast<string>(m["CodeSourceId"]));
    }
    if (m.find("Commit") != m.end() && !m["Commit"].empty()) {
      commit = make_shared<string>(boost::any_cast<string>(m["Commit"]));
    }
    if (m.find("MountPath") != m.end() && !m["MountPath"].empty()) {
      mountPath = make_shared<string>(boost::any_cast<string>(m["MountPath"]));
    }
  }


  virtual ~JobItemCodeSource() = default;
};
class JobItemDataSources : public Darabonba::Model {
public:
  shared_ptr<string> dataSourceId{};
  shared_ptr<string> mountPath{};

  JobItemDataSources() {}

  explicit JobItemDataSources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSourceId) {
      res["DataSourceId"] = boost::any(*dataSourceId);
    }
    if (mountPath) {
      res["MountPath"] = boost::any(*mountPath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataSourceId") != m.end() && !m["DataSourceId"].empty()) {
      dataSourceId = make_shared<string>(boost::any_cast<string>(m["DataSourceId"]));
    }
    if (m.find("MountPath") != m.end() && !m["MountPath"].empty()) {
      mountPath = make_shared<string>(boost::any_cast<string>(m["MountPath"]));
    }
  }


  virtual ~JobItemDataSources() = default;
};
class JobItemUserVpc : public Darabonba::Model {
public:
  shared_ptr<string> defaultRoute{};
  shared_ptr<vector<string>> extendedCidrs{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> switchId{};
  shared_ptr<string> vpcId{};

  JobItemUserVpc() {}

  explicit JobItemUserVpc(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defaultRoute) {
      res["DefaultRoute"] = boost::any(*defaultRoute);
    }
    if (extendedCidrs) {
      res["ExtendedCidrs"] = boost::any(*extendedCidrs);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (switchId) {
      res["SwitchId"] = boost::any(*switchId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefaultRoute") != m.end() && !m["DefaultRoute"].empty()) {
      defaultRoute = make_shared<string>(boost::any_cast<string>(m["DefaultRoute"]));
    }
    if (m.find("ExtendedCidrs") != m.end() && !m["ExtendedCidrs"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ExtendedCidrs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ExtendedCidrs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      extendedCidrs = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("SwitchId") != m.end() && !m["SwitchId"].empty()) {
      switchId = make_shared<string>(boost::any_cast<string>(m["SwitchId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~JobItemUserVpc() = default;
};
class LocalMountSpec : public Darabonba::Model {
public:
  shared_ptr<string> localPath{};
  shared_ptr<string> mountMode{};
  shared_ptr<string> mountPath{};

  LocalMountSpec() {}

  explicit LocalMountSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (localPath) {
      res["LocalPath"] = boost::any(*localPath);
    }
    if (mountMode) {
      res["MountMode"] = boost::any(*mountMode);
    }
    if (mountPath) {
      res["MountPath"] = boost::any(*mountPath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LocalPath") != m.end() && !m["LocalPath"].empty()) {
      localPath = make_shared<string>(boost::any_cast<string>(m["LocalPath"]));
    }
    if (m.find("MountMode") != m.end() && !m["MountMode"].empty()) {
      mountMode = make_shared<string>(boost::any_cast<string>(m["MountMode"]));
    }
    if (m.find("MountPath") != m.end() && !m["MountPath"].empty()) {
      mountPath = make_shared<string>(boost::any_cast<string>(m["MountPath"]));
    }
  }


  virtual ~LocalMountSpec() = default;
};
class ResourceConfig : public Darabonba::Model {
public:
  shared_ptr<string> CPU{};
  shared_ptr<string> GPU{};
  shared_ptr<string> GPUType{};
  shared_ptr<string> memory{};
  shared_ptr<string> sharedMemory{};

  ResourceConfig() {}

  explicit ResourceConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (CPU) {
      res["CPU"] = boost::any(*CPU);
    }
    if (GPU) {
      res["GPU"] = boost::any(*GPU);
    }
    if (GPUType) {
      res["GPUType"] = boost::any(*GPUType);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (sharedMemory) {
      res["SharedMemory"] = boost::any(*sharedMemory);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CPU") != m.end() && !m["CPU"].empty()) {
      CPU = make_shared<string>(boost::any_cast<string>(m["CPU"]));
    }
    if (m.find("GPU") != m.end() && !m["GPU"].empty()) {
      GPU = make_shared<string>(boost::any_cast<string>(m["GPU"]));
    }
    if (m.find("GPUType") != m.end() && !m["GPUType"].empty()) {
      GPUType = make_shared<string>(boost::any_cast<string>(m["GPUType"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<string>(boost::any_cast<string>(m["Memory"]));
    }
    if (m.find("SharedMemory") != m.end() && !m["SharedMemory"].empty()) {
      sharedMemory = make_shared<string>(boost::any_cast<string>(m["SharedMemory"]));
    }
  }


  virtual ~ResourceConfig() = default;
};
class ServiceSpec : public Darabonba::Model {
public:
  shared_ptr<long> defaultPort{};
  shared_ptr<vector<long>> extraPorts{};
  shared_ptr<string> serviceMode{};

  ServiceSpec() {}

  explicit ServiceSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defaultPort) {
      res["DefaultPort"] = boost::any(*defaultPort);
    }
    if (extraPorts) {
      res["ExtraPorts"] = boost::any(*extraPorts);
    }
    if (serviceMode) {
      res["ServiceMode"] = boost::any(*serviceMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefaultPort") != m.end() && !m["DefaultPort"].empty()) {
      defaultPort = make_shared<long>(boost::any_cast<long>(m["DefaultPort"]));
    }
    if (m.find("ExtraPorts") != m.end() && !m["ExtraPorts"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["ExtraPorts"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ExtraPorts"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      extraPorts = make_shared<vector<long>>(toVec1);
    }
    if (m.find("ServiceMode") != m.end() && !m["ServiceMode"].empty()) {
      serviceMode = make_shared<string>(boost::any_cast<string>(m["ServiceMode"]));
    }
  }


  virtual ~ServiceSpec() = default;
};
class SpotSpec : public Darabonba::Model {
public:
  shared_ptr<double> spotDiscountLimit{};
  shared_ptr<double> spotPriceLimit{};
  shared_ptr<string> spotStrategy{};

  SpotSpec() {}

  explicit SpotSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (spotDiscountLimit) {
      res["SpotDiscountLimit"] = boost::any(*spotDiscountLimit);
    }
    if (spotPriceLimit) {
      res["SpotPriceLimit"] = boost::any(*spotPriceLimit);
    }
    if (spotStrategy) {
      res["SpotStrategy"] = boost::any(*spotStrategy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SpotDiscountLimit") != m.end() && !m["SpotDiscountLimit"].empty()) {
      spotDiscountLimit = make_shared<double>(boost::any_cast<double>(m["SpotDiscountLimit"]));
    }
    if (m.find("SpotPriceLimit") != m.end() && !m["SpotPriceLimit"].empty()) {
      spotPriceLimit = make_shared<double>(boost::any_cast<double>(m["SpotPriceLimit"]));
    }
    if (m.find("SpotStrategy") != m.end() && !m["SpotStrategy"].empty()) {
      spotStrategy = make_shared<string>(boost::any_cast<string>(m["SpotStrategy"]));
    }
  }


  virtual ~SpotSpec() = default;
};
class JobSpec : public Darabonba::Model {
public:
  shared_ptr<AssignNodeSpec> assignNodeSpec{};
  shared_ptr<AutoScalingSpec> autoScalingSpec{};
  shared_ptr<string> ecsSpec{};
  shared_ptr<ExtraPodSpec> extraPodSpec{};
  shared_ptr<string> image{};
  shared_ptr<ImageConfig> imageConfig{};
  shared_ptr<bool> isCheif{};
  shared_ptr<bool> isChief{};
  shared_ptr<vector<LocalMountSpec>> localMountSpecs{};
  shared_ptr<long> podCount{};
  shared_ptr<ResourceConfig> resourceConfig{};
  shared_ptr<string> restartPolicy{};
  shared_ptr<ServiceSpec> serviceSpec{};
  shared_ptr<SpotSpec> spotSpec{};
  shared_ptr<string> type{};
  shared_ptr<bool> useSpotInstance{};

  JobSpec() {}

  explicit JobSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assignNodeSpec) {
      res["AssignNodeSpec"] = assignNodeSpec ? boost::any(assignNodeSpec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (autoScalingSpec) {
      res["AutoScalingSpec"] = autoScalingSpec ? boost::any(autoScalingSpec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ecsSpec) {
      res["EcsSpec"] = boost::any(*ecsSpec);
    }
    if (extraPodSpec) {
      res["ExtraPodSpec"] = extraPodSpec ? boost::any(extraPodSpec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (image) {
      res["Image"] = boost::any(*image);
    }
    if (imageConfig) {
      res["ImageConfig"] = imageConfig ? boost::any(imageConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (isCheif) {
      res["IsCheif"] = boost::any(*isCheif);
    }
    if (isChief) {
      res["IsChief"] = boost::any(*isChief);
    }
    if (localMountSpecs) {
      vector<boost::any> temp1;
      for(auto item1:*localMountSpecs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LocalMountSpecs"] = boost::any(temp1);
    }
    if (podCount) {
      res["PodCount"] = boost::any(*podCount);
    }
    if (resourceConfig) {
      res["ResourceConfig"] = resourceConfig ? boost::any(resourceConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (restartPolicy) {
      res["RestartPolicy"] = boost::any(*restartPolicy);
    }
    if (serviceSpec) {
      res["ServiceSpec"] = serviceSpec ? boost::any(serviceSpec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (spotSpec) {
      res["SpotSpec"] = spotSpec ? boost::any(spotSpec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (useSpotInstance) {
      res["UseSpotInstance"] = boost::any(*useSpotInstance);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AssignNodeSpec") != m.end() && !m["AssignNodeSpec"].empty()) {
      if (typeid(map<string, boost::any>) == m["AssignNodeSpec"].type()) {
        AssignNodeSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AssignNodeSpec"]));
        assignNodeSpec = make_shared<AssignNodeSpec>(model1);
      }
    }
    if (m.find("AutoScalingSpec") != m.end() && !m["AutoScalingSpec"].empty()) {
      if (typeid(map<string, boost::any>) == m["AutoScalingSpec"].type()) {
        AutoScalingSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AutoScalingSpec"]));
        autoScalingSpec = make_shared<AutoScalingSpec>(model1);
      }
    }
    if (m.find("EcsSpec") != m.end() && !m["EcsSpec"].empty()) {
      ecsSpec = make_shared<string>(boost::any_cast<string>(m["EcsSpec"]));
    }
    if (m.find("ExtraPodSpec") != m.end() && !m["ExtraPodSpec"].empty()) {
      if (typeid(map<string, boost::any>) == m["ExtraPodSpec"].type()) {
        ExtraPodSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ExtraPodSpec"]));
        extraPodSpec = make_shared<ExtraPodSpec>(model1);
      }
    }
    if (m.find("Image") != m.end() && !m["Image"].empty()) {
      image = make_shared<string>(boost::any_cast<string>(m["Image"]));
    }
    if (m.find("ImageConfig") != m.end() && !m["ImageConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["ImageConfig"].type()) {
        ImageConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ImageConfig"]));
        imageConfig = make_shared<ImageConfig>(model1);
      }
    }
    if (m.find("IsCheif") != m.end() && !m["IsCheif"].empty()) {
      isCheif = make_shared<bool>(boost::any_cast<bool>(m["IsCheif"]));
    }
    if (m.find("IsChief") != m.end() && !m["IsChief"].empty()) {
      isChief = make_shared<bool>(boost::any_cast<bool>(m["IsChief"]));
    }
    if (m.find("LocalMountSpecs") != m.end() && !m["LocalMountSpecs"].empty()) {
      if (typeid(vector<boost::any>) == m["LocalMountSpecs"].type()) {
        vector<LocalMountSpec> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LocalMountSpecs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            LocalMountSpec model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        localMountSpecs = make_shared<vector<LocalMountSpec>>(expect1);
      }
    }
    if (m.find("PodCount") != m.end() && !m["PodCount"].empty()) {
      podCount = make_shared<long>(boost::any_cast<long>(m["PodCount"]));
    }
    if (m.find("ResourceConfig") != m.end() && !m["ResourceConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourceConfig"].type()) {
        ResourceConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceConfig"]));
        resourceConfig = make_shared<ResourceConfig>(model1);
      }
    }
    if (m.find("RestartPolicy") != m.end() && !m["RestartPolicy"].empty()) {
      restartPolicy = make_shared<string>(boost::any_cast<string>(m["RestartPolicy"]));
    }
    if (m.find("ServiceSpec") != m.end() && !m["ServiceSpec"].empty()) {
      if (typeid(map<string, boost::any>) == m["ServiceSpec"].type()) {
        ServiceSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ServiceSpec"]));
        serviceSpec = make_shared<ServiceSpec>(model1);
      }
    }
    if (m.find("SpotSpec") != m.end() && !m["SpotSpec"].empty()) {
      if (typeid(map<string, boost::any>) == m["SpotSpec"].type()) {
        SpotSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SpotSpec"]));
        spotSpec = make_shared<SpotSpec>(model1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("UseSpotInstance") != m.end() && !m["UseSpotInstance"].empty()) {
      useSpotInstance = make_shared<bool>(boost::any_cast<bool>(m["UseSpotInstance"]));
    }
  }


  virtual ~JobSpec() = default;
};
class PodItem : public Darabonba::Model {
public:
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtFinishTime{};
  shared_ptr<string> gmtStartTime{};
  shared_ptr<vector<PodItem>> historyPods{};
  shared_ptr<string> ip{};
  shared_ptr<string> nodeName{};
  shared_ptr<string> podId{};
  shared_ptr<string> podUid{};
  shared_ptr<string> status{};
  shared_ptr<string> subStatus{};
  shared_ptr<string> type{};

  PodItem() {}

  explicit PodItem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtFinishTime) {
      res["GmtFinishTime"] = boost::any(*gmtFinishTime);
    }
    if (gmtStartTime) {
      res["GmtStartTime"] = boost::any(*gmtStartTime);
    }
    if (historyPods) {
      vector<boost::any> temp1;
      for(auto item1:*historyPods){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HistoryPods"] = boost::any(temp1);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (nodeName) {
      res["NodeName"] = boost::any(*nodeName);
    }
    if (podId) {
      res["PodId"] = boost::any(*podId);
    }
    if (podUid) {
      res["PodUid"] = boost::any(*podUid);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (subStatus) {
      res["SubStatus"] = boost::any(*subStatus);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtFinishTime") != m.end() && !m["GmtFinishTime"].empty()) {
      gmtFinishTime = make_shared<string>(boost::any_cast<string>(m["GmtFinishTime"]));
    }
    if (m.find("GmtStartTime") != m.end() && !m["GmtStartTime"].empty()) {
      gmtStartTime = make_shared<string>(boost::any_cast<string>(m["GmtStartTime"]));
    }
    if (m.find("HistoryPods") != m.end() && !m["HistoryPods"].empty()) {
      if (typeid(vector<boost::any>) == m["HistoryPods"].type()) {
        vector<PodItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HistoryPods"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PodItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        historyPods = make_shared<vector<PodItem>>(expect1);
      }
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("NodeName") != m.end() && !m["NodeName"].empty()) {
      nodeName = make_shared<string>(boost::any_cast<string>(m["NodeName"]));
    }
    if (m.find("PodId") != m.end() && !m["PodId"].empty()) {
      podId = make_shared<string>(boost::any_cast<string>(m["PodId"]));
    }
    if (m.find("PodUid") != m.end() && !m["PodUid"].empty()) {
      podUid = make_shared<string>(boost::any_cast<string>(m["PodUid"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SubStatus") != m.end() && !m["SubStatus"].empty()) {
      subStatus = make_shared<string>(boost::any_cast<string>(m["SubStatus"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~PodItem() = default;
};
class JobSettings : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> advancedSettings{};
  shared_ptr<bool> allocateAllRDMADevices{};
  shared_ptr<string> businessUserId{};
  shared_ptr<string> caller{};
  shared_ptr<bool> disableEcsStockCheck{};
  shared_ptr<string> driver{};
  shared_ptr<bool> enableCPUAffinity{};
  shared_ptr<bool> enableErrorMonitoringInAIMaster{};
  shared_ptr<bool> enableOssAppend{};
  shared_ptr<bool> enableRDMA{};
  shared_ptr<bool> enableSanityCheck{};
  shared_ptr<bool> enableTideResource{};
  shared_ptr<string> errorMonitoringArgs{};
  shared_ptr<long> jobReservedMinutes{};
  shared_ptr<string> jobReservedPolicy{};
  shared_ptr<string> oversoldType{};
  shared_ptr<string> pipelineId{};
  shared_ptr<string> sanityCheckArgs{};
  shared_ptr<map<string, string>> tags{};

  JobSettings() {}

  explicit JobSettings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (advancedSettings) {
      res["AdvancedSettings"] = boost::any(*advancedSettings);
    }
    if (allocateAllRDMADevices) {
      res["AllocateAllRDMADevices"] = boost::any(*allocateAllRDMADevices);
    }
    if (businessUserId) {
      res["BusinessUserId"] = boost::any(*businessUserId);
    }
    if (caller) {
      res["Caller"] = boost::any(*caller);
    }
    if (disableEcsStockCheck) {
      res["DisableEcsStockCheck"] = boost::any(*disableEcsStockCheck);
    }
    if (driver) {
      res["Driver"] = boost::any(*driver);
    }
    if (enableCPUAffinity) {
      res["EnableCPUAffinity"] = boost::any(*enableCPUAffinity);
    }
    if (enableErrorMonitoringInAIMaster) {
      res["EnableErrorMonitoringInAIMaster"] = boost::any(*enableErrorMonitoringInAIMaster);
    }
    if (enableOssAppend) {
      res["EnableOssAppend"] = boost::any(*enableOssAppend);
    }
    if (enableRDMA) {
      res["EnableRDMA"] = boost::any(*enableRDMA);
    }
    if (enableSanityCheck) {
      res["EnableSanityCheck"] = boost::any(*enableSanityCheck);
    }
    if (enableTideResource) {
      res["EnableTideResource"] = boost::any(*enableTideResource);
    }
    if (errorMonitoringArgs) {
      res["ErrorMonitoringArgs"] = boost::any(*errorMonitoringArgs);
    }
    if (jobReservedMinutes) {
      res["JobReservedMinutes"] = boost::any(*jobReservedMinutes);
    }
    if (jobReservedPolicy) {
      res["JobReservedPolicy"] = boost::any(*jobReservedPolicy);
    }
    if (oversoldType) {
      res["OversoldType"] = boost::any(*oversoldType);
    }
    if (pipelineId) {
      res["PipelineId"] = boost::any(*pipelineId);
    }
    if (sanityCheckArgs) {
      res["SanityCheckArgs"] = boost::any(*sanityCheckArgs);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdvancedSettings") != m.end() && !m["AdvancedSettings"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["AdvancedSettings"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      advancedSettings = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("AllocateAllRDMADevices") != m.end() && !m["AllocateAllRDMADevices"].empty()) {
      allocateAllRDMADevices = make_shared<bool>(boost::any_cast<bool>(m["AllocateAllRDMADevices"]));
    }
    if (m.find("BusinessUserId") != m.end() && !m["BusinessUserId"].empty()) {
      businessUserId = make_shared<string>(boost::any_cast<string>(m["BusinessUserId"]));
    }
    if (m.find("Caller") != m.end() && !m["Caller"].empty()) {
      caller = make_shared<string>(boost::any_cast<string>(m["Caller"]));
    }
    if (m.find("DisableEcsStockCheck") != m.end() && !m["DisableEcsStockCheck"].empty()) {
      disableEcsStockCheck = make_shared<bool>(boost::any_cast<bool>(m["DisableEcsStockCheck"]));
    }
    if (m.find("Driver") != m.end() && !m["Driver"].empty()) {
      driver = make_shared<string>(boost::any_cast<string>(m["Driver"]));
    }
    if (m.find("EnableCPUAffinity") != m.end() && !m["EnableCPUAffinity"].empty()) {
      enableCPUAffinity = make_shared<bool>(boost::any_cast<bool>(m["EnableCPUAffinity"]));
    }
    if (m.find("EnableErrorMonitoringInAIMaster") != m.end() && !m["EnableErrorMonitoringInAIMaster"].empty()) {
      enableErrorMonitoringInAIMaster = make_shared<bool>(boost::any_cast<bool>(m["EnableErrorMonitoringInAIMaster"]));
    }
    if (m.find("EnableOssAppend") != m.end() && !m["EnableOssAppend"].empty()) {
      enableOssAppend = make_shared<bool>(boost::any_cast<bool>(m["EnableOssAppend"]));
    }
    if (m.find("EnableRDMA") != m.end() && !m["EnableRDMA"].empty()) {
      enableRDMA = make_shared<bool>(boost::any_cast<bool>(m["EnableRDMA"]));
    }
    if (m.find("EnableSanityCheck") != m.end() && !m["EnableSanityCheck"].empty()) {
      enableSanityCheck = make_shared<bool>(boost::any_cast<bool>(m["EnableSanityCheck"]));
    }
    if (m.find("EnableTideResource") != m.end() && !m["EnableTideResource"].empty()) {
      enableTideResource = make_shared<bool>(boost::any_cast<bool>(m["EnableTideResource"]));
    }
    if (m.find("ErrorMonitoringArgs") != m.end() && !m["ErrorMonitoringArgs"].empty()) {
      errorMonitoringArgs = make_shared<string>(boost::any_cast<string>(m["ErrorMonitoringArgs"]));
    }
    if (m.find("JobReservedMinutes") != m.end() && !m["JobReservedMinutes"].empty()) {
      jobReservedMinutes = make_shared<long>(boost::any_cast<long>(m["JobReservedMinutes"]));
    }
    if (m.find("JobReservedPolicy") != m.end() && !m["JobReservedPolicy"].empty()) {
      jobReservedPolicy = make_shared<string>(boost::any_cast<string>(m["JobReservedPolicy"]));
    }
    if (m.find("OversoldType") != m.end() && !m["OversoldType"].empty()) {
      oversoldType = make_shared<string>(boost::any_cast<string>(m["OversoldType"]));
    }
    if (m.find("PipelineId") != m.end() && !m["PipelineId"].empty()) {
      pipelineId = make_shared<string>(boost::any_cast<string>(m["PipelineId"]));
    }
    if (m.find("SanityCheckArgs") != m.end() && !m["SanityCheckArgs"].empty()) {
      sanityCheckArgs = make_shared<string>(boost::any_cast<string>(m["SanityCheckArgs"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Tags"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, string>>(toMap1);
    }
  }


  virtual ~JobSettings() = default;
};
class StatusTransitionItem : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> reasonCode{};
  shared_ptr<string> reasonMessage{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};

  StatusTransitionItem() {}

  explicit StatusTransitionItem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (reasonCode) {
      res["ReasonCode"] = boost::any(*reasonCode);
    }
    if (reasonMessage) {
      res["ReasonMessage"] = boost::any(*reasonMessage);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("ReasonCode") != m.end() && !m["ReasonCode"].empty()) {
      reasonCode = make_shared<string>(boost::any_cast<string>(m["ReasonCode"]));
    }
    if (m.find("ReasonMessage") != m.end() && !m["ReasonMessage"].empty()) {
      reasonMessage = make_shared<string>(boost::any_cast<string>(m["ReasonMessage"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~StatusTransitionItem() = default;
};
class JobItem : public Darabonba::Model {
public:
  shared_ptr<string> accessibility{};
  shared_ptr<string> clusterId{};
  shared_ptr<JobItemCodeSource> codeSource{};
  shared_ptr<CredentialConfig> credentialConfig{};
  shared_ptr<vector<JobItemDataSources>> dataSources{};
  shared_ptr<string> displayName{};
  shared_ptr<long> duration{};
  shared_ptr<JobElasticSpec> elasticSpec{};
  shared_ptr<bool> enablePreemptibleJob{};
  shared_ptr<bool> enabledDebugger{};
  shared_ptr<map<string, string>> envs{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtFailedTime{};
  shared_ptr<string> gmtFinishTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> gmtRunningTime{};
  shared_ptr<string> gmtStoppedTime{};
  shared_ptr<string> gmtSubmittedTime{};
  shared_ptr<string> gmtSuccessedTime{};
  shared_ptr<bool> isDeleted{};
  shared_ptr<string> jobId{};
  shared_ptr<long> jobMaxRunningTimeMinutes{};
  shared_ptr<vector<JobSpec>> jobSpecs{};
  shared_ptr<string> jobType{};
  shared_ptr<string> nodeCount{};
  shared_ptr<vector<string>> nodeNames{};
  shared_ptr<vector<PodItem>> pods{};
  shared_ptr<long> priority{};
  shared_ptr<string> reasonCode{};
  shared_ptr<string> reasonMessage{};
  shared_ptr<long> requestCPU{};
  shared_ptr<string> requestGPU{};
  shared_ptr<string> requestMemory{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceLevel{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> resourceQuotaName{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> restartTimes{};
  shared_ptr<JobSettings> settings{};
  shared_ptr<string> status{};
  shared_ptr<vector<StatusTransitionItem>> statusHistory{};
  shared_ptr<string> subStatus{};
  shared_ptr<map<string, string>> systemEnvs{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> thirdpartyLibDir{};
  shared_ptr<vector<string>> thirdpartyLibs{};
  shared_ptr<bool> useOversoldResource{};
  shared_ptr<string> userCommand{};
  shared_ptr<string> userId{};
  shared_ptr<string> userScript{};
  shared_ptr<JobItemUserVpc> userVpc{};
  shared_ptr<string> username{};
  shared_ptr<string> workingDir{};
  shared_ptr<string> workspaceId{};
  shared_ptr<string> workspaceName{};

  JobItem() {}

  explicit JobItem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessibility) {
      res["Accessibility"] = boost::any(*accessibility);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (codeSource) {
      res["CodeSource"] = codeSource ? boost::any(codeSource->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (credentialConfig) {
      res["CredentialConfig"] = credentialConfig ? boost::any(credentialConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dataSources) {
      vector<boost::any> temp1;
      for(auto item1:*dataSources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataSources"] = boost::any(temp1);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (elasticSpec) {
      res["ElasticSpec"] = elasticSpec ? boost::any(elasticSpec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (enablePreemptibleJob) {
      res["EnablePreemptibleJob"] = boost::any(*enablePreemptibleJob);
    }
    if (enabledDebugger) {
      res["EnabledDebugger"] = boost::any(*enabledDebugger);
    }
    if (envs) {
      res["Envs"] = boost::any(*envs);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtFailedTime) {
      res["GmtFailedTime"] = boost::any(*gmtFailedTime);
    }
    if (gmtFinishTime) {
      res["GmtFinishTime"] = boost::any(*gmtFinishTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (gmtRunningTime) {
      res["GmtRunningTime"] = boost::any(*gmtRunningTime);
    }
    if (gmtStoppedTime) {
      res["GmtStoppedTime"] = boost::any(*gmtStoppedTime);
    }
    if (gmtSubmittedTime) {
      res["GmtSubmittedTime"] = boost::any(*gmtSubmittedTime);
    }
    if (gmtSuccessedTime) {
      res["GmtSuccessedTime"] = boost::any(*gmtSuccessedTime);
    }
    if (isDeleted) {
      res["IsDeleted"] = boost::any(*isDeleted);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (jobMaxRunningTimeMinutes) {
      res["JobMaxRunningTimeMinutes"] = boost::any(*jobMaxRunningTimeMinutes);
    }
    if (jobSpecs) {
      vector<boost::any> temp1;
      for(auto item1:*jobSpecs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["JobSpecs"] = boost::any(temp1);
    }
    if (jobType) {
      res["JobType"] = boost::any(*jobType);
    }
    if (nodeCount) {
      res["NodeCount"] = boost::any(*nodeCount);
    }
    if (nodeNames) {
      res["NodeNames"] = boost::any(*nodeNames);
    }
    if (pods) {
      vector<boost::any> temp1;
      for(auto item1:*pods){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Pods"] = boost::any(temp1);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (reasonCode) {
      res["ReasonCode"] = boost::any(*reasonCode);
    }
    if (reasonMessage) {
      res["ReasonMessage"] = boost::any(*reasonMessage);
    }
    if (requestCPU) {
      res["RequestCPU"] = boost::any(*requestCPU);
    }
    if (requestGPU) {
      res["RequestGPU"] = boost::any(*requestGPU);
    }
    if (requestMemory) {
      res["RequestMemory"] = boost::any(*requestMemory);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceLevel) {
      res["ResourceLevel"] = boost::any(*resourceLevel);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    if (resourceQuotaName) {
      res["ResourceQuotaName"] = boost::any(*resourceQuotaName);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (restartTimes) {
      res["RestartTimes"] = boost::any(*restartTimes);
    }
    if (settings) {
      res["Settings"] = settings ? boost::any(settings->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (statusHistory) {
      vector<boost::any> temp1;
      for(auto item1:*statusHistory){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["StatusHistory"] = boost::any(temp1);
    }
    if (subStatus) {
      res["SubStatus"] = boost::any(*subStatus);
    }
    if (systemEnvs) {
      res["SystemEnvs"] = boost::any(*systemEnvs);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (thirdpartyLibDir) {
      res["ThirdpartyLibDir"] = boost::any(*thirdpartyLibDir);
    }
    if (thirdpartyLibs) {
      res["ThirdpartyLibs"] = boost::any(*thirdpartyLibs);
    }
    if (useOversoldResource) {
      res["UseOversoldResource"] = boost::any(*useOversoldResource);
    }
    if (userCommand) {
      res["UserCommand"] = boost::any(*userCommand);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userScript) {
      res["UserScript"] = boost::any(*userScript);
    }
    if (userVpc) {
      res["UserVpc"] = userVpc ? boost::any(userVpc->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (username) {
      res["Username"] = boost::any(*username);
    }
    if (workingDir) {
      res["WorkingDir"] = boost::any(*workingDir);
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
    if (m.find("Accessibility") != m.end() && !m["Accessibility"].empty()) {
      accessibility = make_shared<string>(boost::any_cast<string>(m["Accessibility"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("CodeSource") != m.end() && !m["CodeSource"].empty()) {
      if (typeid(map<string, boost::any>) == m["CodeSource"].type()) {
        JobItemCodeSource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CodeSource"]));
        codeSource = make_shared<JobItemCodeSource>(model1);
      }
    }
    if (m.find("CredentialConfig") != m.end() && !m["CredentialConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["CredentialConfig"].type()) {
        CredentialConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CredentialConfig"]));
        credentialConfig = make_shared<CredentialConfig>(model1);
      }
    }
    if (m.find("DataSources") != m.end() && !m["DataSources"].empty()) {
      if (typeid(vector<boost::any>) == m["DataSources"].type()) {
        vector<JobItemDataSources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataSources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            JobItemDataSources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataSources = make_shared<vector<JobItemDataSources>>(expect1);
      }
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("ElasticSpec") != m.end() && !m["ElasticSpec"].empty()) {
      if (typeid(map<string, boost::any>) == m["ElasticSpec"].type()) {
        JobElasticSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ElasticSpec"]));
        elasticSpec = make_shared<JobElasticSpec>(model1);
      }
    }
    if (m.find("EnablePreemptibleJob") != m.end() && !m["EnablePreemptibleJob"].empty()) {
      enablePreemptibleJob = make_shared<bool>(boost::any_cast<bool>(m["EnablePreemptibleJob"]));
    }
    if (m.find("EnabledDebugger") != m.end() && !m["EnabledDebugger"].empty()) {
      enabledDebugger = make_shared<bool>(boost::any_cast<bool>(m["EnabledDebugger"]));
    }
    if (m.find("Envs") != m.end() && !m["Envs"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Envs"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      envs = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtFailedTime") != m.end() && !m["GmtFailedTime"].empty()) {
      gmtFailedTime = make_shared<string>(boost::any_cast<string>(m["GmtFailedTime"]));
    }
    if (m.find("GmtFinishTime") != m.end() && !m["GmtFinishTime"].empty()) {
      gmtFinishTime = make_shared<string>(boost::any_cast<string>(m["GmtFinishTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("GmtRunningTime") != m.end() && !m["GmtRunningTime"].empty()) {
      gmtRunningTime = make_shared<string>(boost::any_cast<string>(m["GmtRunningTime"]));
    }
    if (m.find("GmtStoppedTime") != m.end() && !m["GmtStoppedTime"].empty()) {
      gmtStoppedTime = make_shared<string>(boost::any_cast<string>(m["GmtStoppedTime"]));
    }
    if (m.find("GmtSubmittedTime") != m.end() && !m["GmtSubmittedTime"].empty()) {
      gmtSubmittedTime = make_shared<string>(boost::any_cast<string>(m["GmtSubmittedTime"]));
    }
    if (m.find("GmtSuccessedTime") != m.end() && !m["GmtSuccessedTime"].empty()) {
      gmtSuccessedTime = make_shared<string>(boost::any_cast<string>(m["GmtSuccessedTime"]));
    }
    if (m.find("IsDeleted") != m.end() && !m["IsDeleted"].empty()) {
      isDeleted = make_shared<bool>(boost::any_cast<bool>(m["IsDeleted"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("JobMaxRunningTimeMinutes") != m.end() && !m["JobMaxRunningTimeMinutes"].empty()) {
      jobMaxRunningTimeMinutes = make_shared<long>(boost::any_cast<long>(m["JobMaxRunningTimeMinutes"]));
    }
    if (m.find("JobSpecs") != m.end() && !m["JobSpecs"].empty()) {
      if (typeid(vector<boost::any>) == m["JobSpecs"].type()) {
        vector<JobSpec> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["JobSpecs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            JobSpec model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        jobSpecs = make_shared<vector<JobSpec>>(expect1);
      }
    }
    if (m.find("JobType") != m.end() && !m["JobType"].empty()) {
      jobType = make_shared<string>(boost::any_cast<string>(m["JobType"]));
    }
    if (m.find("NodeCount") != m.end() && !m["NodeCount"].empty()) {
      nodeCount = make_shared<string>(boost::any_cast<string>(m["NodeCount"]));
    }
    if (m.find("NodeNames") != m.end() && !m["NodeNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["NodeNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["NodeNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      nodeNames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Pods") != m.end() && !m["Pods"].empty()) {
      if (typeid(vector<boost::any>) == m["Pods"].type()) {
        vector<PodItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Pods"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PodItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pods = make_shared<vector<PodItem>>(expect1);
      }
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("ReasonCode") != m.end() && !m["ReasonCode"].empty()) {
      reasonCode = make_shared<string>(boost::any_cast<string>(m["ReasonCode"]));
    }
    if (m.find("ReasonMessage") != m.end() && !m["ReasonMessage"].empty()) {
      reasonMessage = make_shared<string>(boost::any_cast<string>(m["ReasonMessage"]));
    }
    if (m.find("RequestCPU") != m.end() && !m["RequestCPU"].empty()) {
      requestCPU = make_shared<long>(boost::any_cast<long>(m["RequestCPU"]));
    }
    if (m.find("RequestGPU") != m.end() && !m["RequestGPU"].empty()) {
      requestGPU = make_shared<string>(boost::any_cast<string>(m["RequestGPU"]));
    }
    if (m.find("RequestMemory") != m.end() && !m["RequestMemory"].empty()) {
      requestMemory = make_shared<string>(boost::any_cast<string>(m["RequestMemory"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceLevel") != m.end() && !m["ResourceLevel"].empty()) {
      resourceLevel = make_shared<string>(boost::any_cast<string>(m["ResourceLevel"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("ResourceQuotaName") != m.end() && !m["ResourceQuotaName"].empty()) {
      resourceQuotaName = make_shared<string>(boost::any_cast<string>(m["ResourceQuotaName"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("RestartTimes") != m.end() && !m["RestartTimes"].empty()) {
      restartTimes = make_shared<string>(boost::any_cast<string>(m["RestartTimes"]));
    }
    if (m.find("Settings") != m.end() && !m["Settings"].empty()) {
      if (typeid(map<string, boost::any>) == m["Settings"].type()) {
        JobSettings model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Settings"]));
        settings = make_shared<JobSettings>(model1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StatusHistory") != m.end() && !m["StatusHistory"].empty()) {
      if (typeid(vector<boost::any>) == m["StatusHistory"].type()) {
        vector<StatusTransitionItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["StatusHistory"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            StatusTransitionItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        statusHistory = make_shared<vector<StatusTransitionItem>>(expect1);
      }
    }
    if (m.find("SubStatus") != m.end() && !m["SubStatus"].empty()) {
      subStatus = make_shared<string>(boost::any_cast<string>(m["SubStatus"]));
    }
    if (m.find("SystemEnvs") != m.end() && !m["SystemEnvs"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["SystemEnvs"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      systemEnvs = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
    if (m.find("ThirdpartyLibDir") != m.end() && !m["ThirdpartyLibDir"].empty()) {
      thirdpartyLibDir = make_shared<string>(boost::any_cast<string>(m["ThirdpartyLibDir"]));
    }
    if (m.find("ThirdpartyLibs") != m.end() && !m["ThirdpartyLibs"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ThirdpartyLibs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ThirdpartyLibs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      thirdpartyLibs = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UseOversoldResource") != m.end() && !m["UseOversoldResource"].empty()) {
      useOversoldResource = make_shared<bool>(boost::any_cast<bool>(m["UseOversoldResource"]));
    }
    if (m.find("UserCommand") != m.end() && !m["UserCommand"].empty()) {
      userCommand = make_shared<string>(boost::any_cast<string>(m["UserCommand"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserScript") != m.end() && !m["UserScript"].empty()) {
      userScript = make_shared<string>(boost::any_cast<string>(m["UserScript"]));
    }
    if (m.find("UserVpc") != m.end() && !m["UserVpc"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserVpc"].type()) {
        JobItemUserVpc model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserVpc"]));
        userVpc = make_shared<JobItemUserVpc>(model1);
      }
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
    if (m.find("WorkingDir") != m.end() && !m["WorkingDir"].empty()) {
      workingDir = make_shared<string>(boost::any_cast<string>(m["WorkingDir"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
    if (m.find("WorkspaceName") != m.end() && !m["WorkspaceName"].empty()) {
      workspaceName = make_shared<string>(boost::any_cast<string>(m["WorkspaceName"]));
    }
  }


  virtual ~JobItem() = default;
};
class LogInfo : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> id{};
  shared_ptr<bool> isTruncated{};
  shared_ptr<string> podId{};
  shared_ptr<string> podUid{};
  shared_ptr<string> source{};
  shared_ptr<string> time{};

  LogInfo() {}

  explicit LogInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (isTruncated) {
      res["IsTruncated"] = boost::any(*isTruncated);
    }
    if (podId) {
      res["PodId"] = boost::any(*podId);
    }
    if (podUid) {
      res["PodUid"] = boost::any(*podUid);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (time) {
      res["Time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IsTruncated") != m.end() && !m["IsTruncated"].empty()) {
      isTruncated = make_shared<bool>(boost::any_cast<bool>(m["IsTruncated"]));
    }
    if (m.find("PodId") != m.end() && !m["PodId"].empty()) {
      podId = make_shared<string>(boost::any_cast<string>(m["PodId"]));
    }
    if (m.find("PodUid") != m.end() && !m["PodUid"].empty()) {
      podUid = make_shared<string>(boost::any_cast<string>(m["PodUid"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Time") != m.end() && !m["Time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["Time"]));
    }
  }


  virtual ~LogInfo() = default;
};
class Member : public Darabonba::Model {
public:
  shared_ptr<string> memberId{};
  shared_ptr<string> memberType{};

  Member() {}

  explicit Member(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (memberId) {
      res["MemberId"] = boost::any(*memberId);
    }
    if (memberType) {
      res["MemberType"] = boost::any(*memberType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MemberId") != m.end() && !m["MemberId"].empty()) {
      memberId = make_shared<string>(boost::any_cast<string>(m["MemberId"]));
    }
    if (m.find("MemberType") != m.end() && !m["MemberType"].empty()) {
      memberType = make_shared<string>(boost::any_cast<string>(m["MemberType"]));
    }
  }


  virtual ~Member() = default;
};
class Metric : public Darabonba::Model {
public:
  shared_ptr<long> time{};
  shared_ptr<double> value{};

  Metric() {}

  explicit Metric(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (time) {
      res["Time"] = boost::any(*time);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Time") != m.end() && !m["Time"].empty()) {
      time = make_shared<long>(boost::any_cast<long>(m["Time"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<double>(boost::any_cast<double>(m["Value"]));
    }
  }


  virtual ~Metric() = default;
};
class NodeMetric : public Darabonba::Model {
public:
  shared_ptr<vector<Metric>> metrics{};
  shared_ptr<string> nodeName{};

  NodeMetric() {}

  explicit NodeMetric(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (nodeName) {
      res["NodeName"] = boost::any(*nodeName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Metrics") != m.end() && !m["Metrics"].empty()) {
      if (typeid(vector<boost::any>) == m["Metrics"].type()) {
        vector<Metric> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Metrics"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Metric model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        metrics = make_shared<vector<Metric>>(expect1);
      }
    }
    if (m.find("NodeName") != m.end() && !m["NodeName"].empty()) {
      nodeName = make_shared<string>(boost::any_cast<string>(m["NodeName"]));
    }
  }


  virtual ~NodeMetric() = default;
};
class PodMetric : public Darabonba::Model {
public:
  shared_ptr<vector<Metric>> metrics{};
  shared_ptr<string> podId{};

  PodMetric() {}

  explicit PodMetric(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (podId) {
      res["PodId"] = boost::any(*podId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Metrics") != m.end() && !m["Metrics"].empty()) {
      if (typeid(vector<boost::any>) == m["Metrics"].type()) {
        vector<Metric> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Metrics"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Metric model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        metrics = make_shared<vector<Metric>>(expect1);
      }
    }
    if (m.find("PodId") != m.end() && !m["PodId"].empty()) {
      podId = make_shared<string>(boost::any_cast<string>(m["PodId"]));
    }
  }


  virtual ~PodMetric() = default;
};
class QuotaConfig : public Darabonba::Model {
public:
  shared_ptr<long> allowedMaxPriority{};
  shared_ptr<bool> enableDLC{};
  shared_ptr<bool> enableDSW{};
  shared_ptr<bool> enableTideResource{};
  shared_ptr<string> resourceLevel{};

  QuotaConfig() {}

  explicit QuotaConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowedMaxPriority) {
      res["AllowedMaxPriority"] = boost::any(*allowedMaxPriority);
    }
    if (enableDLC) {
      res["EnableDLC"] = boost::any(*enableDLC);
    }
    if (enableDSW) {
      res["EnableDSW"] = boost::any(*enableDSW);
    }
    if (enableTideResource) {
      res["EnableTideResource"] = boost::any(*enableTideResource);
    }
    if (resourceLevel) {
      res["ResourceLevel"] = boost::any(*resourceLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllowedMaxPriority") != m.end() && !m["AllowedMaxPriority"].empty()) {
      allowedMaxPriority = make_shared<long>(boost::any_cast<long>(m["AllowedMaxPriority"]));
    }
    if (m.find("EnableDLC") != m.end() && !m["EnableDLC"].empty()) {
      enableDLC = make_shared<bool>(boost::any_cast<bool>(m["EnableDLC"]));
    }
    if (m.find("EnableDSW") != m.end() && !m["EnableDSW"].empty()) {
      enableDSW = make_shared<bool>(boost::any_cast<bool>(m["EnableDSW"]));
    }
    if (m.find("EnableTideResource") != m.end() && !m["EnableTideResource"].empty()) {
      enableTideResource = make_shared<bool>(boost::any_cast<bool>(m["EnableTideResource"]));
    }
    if (m.find("ResourceLevel") != m.end() && !m["ResourceLevel"].empty()) {
      resourceLevel = make_shared<string>(boost::any_cast<string>(m["ResourceLevel"]));
    }
  }


  virtual ~QuotaConfig() = default;
};
class QuotaDetail : public Darabonba::Model {
public:
  shared_ptr<string> CPU{};
  shared_ptr<string> GPU{};
  shared_ptr<vector<GPUDetail>> GPUDetails{};
  shared_ptr<string> GPUType{};
  shared_ptr<string> GPUTypeFullName{};
  shared_ptr<string> memory{};

  QuotaDetail() {}

  explicit QuotaDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (CPU) {
      res["CPU"] = boost::any(*CPU);
    }
    if (GPU) {
      res["GPU"] = boost::any(*GPU);
    }
    if (GPUDetails) {
      vector<boost::any> temp1;
      for(auto item1:*GPUDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["GPUDetails"] = boost::any(temp1);
    }
    if (GPUType) {
      res["GPUType"] = boost::any(*GPUType);
    }
    if (GPUTypeFullName) {
      res["GPUTypeFullName"] = boost::any(*GPUTypeFullName);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CPU") != m.end() && !m["CPU"].empty()) {
      CPU = make_shared<string>(boost::any_cast<string>(m["CPU"]));
    }
    if (m.find("GPU") != m.end() && !m["GPU"].empty()) {
      GPU = make_shared<string>(boost::any_cast<string>(m["GPU"]));
    }
    if (m.find("GPUDetails") != m.end() && !m["GPUDetails"].empty()) {
      if (typeid(vector<boost::any>) == m["GPUDetails"].type()) {
        vector<GPUDetail> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["GPUDetails"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GPUDetail model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        GPUDetails = make_shared<vector<GPUDetail>>(expect1);
      }
    }
    if (m.find("GPUType") != m.end() && !m["GPUType"].empty()) {
      GPUType = make_shared<string>(boost::any_cast<string>(m["GPUType"]));
    }
    if (m.find("GPUTypeFullName") != m.end() && !m["GPUTypeFullName"].empty()) {
      GPUTypeFullName = make_shared<string>(boost::any_cast<string>(m["GPUTypeFullName"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<string>(boost::any_cast<string>(m["Memory"]));
    }
  }


  virtual ~QuotaDetail() = default;
};
class Quota : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterName{};
  shared_ptr<QuotaConfig> quotaConfig{};
  shared_ptr<string> quotaId{};
  shared_ptr<string> quotaName{};
  shared_ptr<string> quotaType{};
  shared_ptr<QuotaDetail> totalQuota{};
  shared_ptr<QuotaDetail> totalTideQuota{};
  shared_ptr<QuotaDetail> usedQuota{};
  shared_ptr<QuotaDetail> usedTideQuota{};

  Quota() {}

  explicit Quota(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (quotaConfig) {
      res["QuotaConfig"] = quotaConfig ? boost::any(quotaConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (quotaId) {
      res["QuotaId"] = boost::any(*quotaId);
    }
    if (quotaName) {
      res["QuotaName"] = boost::any(*quotaName);
    }
    if (quotaType) {
      res["QuotaType"] = boost::any(*quotaType);
    }
    if (totalQuota) {
      res["TotalQuota"] = totalQuota ? boost::any(totalQuota->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (totalTideQuota) {
      res["TotalTideQuota"] = totalTideQuota ? boost::any(totalTideQuota->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (usedQuota) {
      res["UsedQuota"] = usedQuota ? boost::any(usedQuota->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (usedTideQuota) {
      res["UsedTideQuota"] = usedTideQuota ? boost::any(usedTideQuota->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("QuotaConfig") != m.end() && !m["QuotaConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["QuotaConfig"].type()) {
        QuotaConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["QuotaConfig"]));
        quotaConfig = make_shared<QuotaConfig>(model1);
      }
    }
    if (m.find("QuotaId") != m.end() && !m["QuotaId"].empty()) {
      quotaId = make_shared<string>(boost::any_cast<string>(m["QuotaId"]));
    }
    if (m.find("QuotaName") != m.end() && !m["QuotaName"].empty()) {
      quotaName = make_shared<string>(boost::any_cast<string>(m["QuotaName"]));
    }
    if (m.find("QuotaType") != m.end() && !m["QuotaType"].empty()) {
      quotaType = make_shared<string>(boost::any_cast<string>(m["QuotaType"]));
    }
    if (m.find("TotalQuota") != m.end() && !m["TotalQuota"].empty()) {
      if (typeid(map<string, boost::any>) == m["TotalQuota"].type()) {
        QuotaDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TotalQuota"]));
        totalQuota = make_shared<QuotaDetail>(model1);
      }
    }
    if (m.find("TotalTideQuota") != m.end() && !m["TotalTideQuota"].empty()) {
      if (typeid(map<string, boost::any>) == m["TotalTideQuota"].type()) {
        QuotaDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TotalTideQuota"]));
        totalTideQuota = make_shared<QuotaDetail>(model1);
      }
    }
    if (m.find("UsedQuota") != m.end() && !m["UsedQuota"].empty()) {
      if (typeid(map<string, boost::any>) == m["UsedQuota"].type()) {
        QuotaDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UsedQuota"]));
        usedQuota = make_shared<QuotaDetail>(model1);
      }
    }
    if (m.find("UsedTideQuota") != m.end() && !m["UsedTideQuota"].empty()) {
      if (typeid(map<string, boost::any>) == m["UsedTideQuota"].type()) {
        QuotaDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UsedTideQuota"]));
        usedTideQuota = make_shared<QuotaDetail>(model1);
      }
    }
  }


  virtual ~Quota() = default;
};
class Resources : public Darabonba::Model {
public:
  shared_ptr<string> CPU{};
  shared_ptr<string> GPU{};
  shared_ptr<string> memory{};

  Resources() {}

  explicit Resources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (CPU) {
      res["CPU"] = boost::any(*CPU);
    }
    if (GPU) {
      res["GPU"] = boost::any(*GPU);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CPU") != m.end() && !m["CPU"].empty()) {
      CPU = make_shared<string>(boost::any_cast<string>(m["CPU"]));
    }
    if (m.find("GPU") != m.end() && !m["GPU"].empty()) {
      GPU = make_shared<string>(boost::any_cast<string>(m["GPU"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<string>(boost::any_cast<string>(m["Memory"]));
    }
  }


  virtual ~Resources() = default;
};
class SanityCheckResultItem : public Darabonba::Model {
public:
  shared_ptr<long> checkNumber{};
  shared_ptr<string> finishedAt{};
  shared_ptr<string> message{};
  shared_ptr<string> phase{};
  shared_ptr<string> startedAt{};
  shared_ptr<string> status{};

  SanityCheckResultItem() {}

  explicit SanityCheckResultItem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkNumber) {
      res["CheckNumber"] = boost::any(*checkNumber);
    }
    if (finishedAt) {
      res["FinishedAt"] = boost::any(*finishedAt);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (phase) {
      res["Phase"] = boost::any(*phase);
    }
    if (startedAt) {
      res["StartedAt"] = boost::any(*startedAt);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckNumber") != m.end() && !m["CheckNumber"].empty()) {
      checkNumber = make_shared<long>(boost::any_cast<long>(m["CheckNumber"]));
    }
    if (m.find("FinishedAt") != m.end() && !m["FinishedAt"].empty()) {
      finishedAt = make_shared<string>(boost::any_cast<string>(m["FinishedAt"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Phase") != m.end() && !m["Phase"].empty()) {
      phase = make_shared<string>(boost::any_cast<string>(m["Phase"]));
    }
    if (m.find("StartedAt") != m.end() && !m["StartedAt"].empty()) {
      startedAt = make_shared<string>(boost::any_cast<string>(m["StartedAt"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~SanityCheckResultItem() = default;
};
class SeccompProfile : public Darabonba::Model {
public:
  shared_ptr<string> localhostProfile{};
  shared_ptr<string> type{};

  SeccompProfile() {}

  explicit SeccompProfile(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (localhostProfile) {
      res["LocalhostProfile"] = boost::any(*localhostProfile);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LocalhostProfile") != m.end() && !m["LocalhostProfile"].empty()) {
      localhostProfile = make_shared<string>(boost::any_cast<string>(m["LocalhostProfile"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~SeccompProfile() = default;
};
class SecurityContextCapabilities : public Darabonba::Model {
public:
  shared_ptr<vector<string>> add{};
  shared_ptr<vector<string>> drop{};

  SecurityContextCapabilities() {}

  explicit SecurityContextCapabilities(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (add) {
      res["Add"] = boost::any(*add);
    }
    if (drop) {
      res["Drop"] = boost::any(*drop);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Add") != m.end() && !m["Add"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Add"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Add"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      add = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Drop") != m.end() && !m["Drop"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Drop"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Drop"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      drop = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~SecurityContextCapabilities() = default;
};
class SecurityContext : public Darabonba::Model {
public:
  shared_ptr<SecurityContextCapabilities> capabilities{};
  shared_ptr<bool> privileged{};
  shared_ptr<long> runAsGroup{};
  shared_ptr<long> runAsUser{};
  shared_ptr<SeccompProfile> seccompProfile{};

  SecurityContext() {}

  explicit SecurityContext(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (capabilities) {
      res["Capabilities"] = capabilities ? boost::any(capabilities->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (privileged) {
      res["Privileged"] = boost::any(*privileged);
    }
    if (runAsGroup) {
      res["RunAsGroup"] = boost::any(*runAsGroup);
    }
    if (runAsUser) {
      res["RunAsUser"] = boost::any(*runAsUser);
    }
    if (seccompProfile) {
      res["SeccompProfile"] = seccompProfile ? boost::any(seccompProfile->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Capabilities") != m.end() && !m["Capabilities"].empty()) {
      if (typeid(map<string, boost::any>) == m["Capabilities"].type()) {
        SecurityContextCapabilities model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Capabilities"]));
        capabilities = make_shared<SecurityContextCapabilities>(model1);
      }
    }
    if (m.find("Privileged") != m.end() && !m["Privileged"].empty()) {
      privileged = make_shared<bool>(boost::any_cast<bool>(m["Privileged"]));
    }
    if (m.find("RunAsGroup") != m.end() && !m["RunAsGroup"].empty()) {
      runAsGroup = make_shared<long>(boost::any_cast<long>(m["RunAsGroup"]));
    }
    if (m.find("RunAsUser") != m.end() && !m["RunAsUser"].empty()) {
      runAsUser = make_shared<long>(boost::any_cast<long>(m["RunAsUser"]));
    }
    if (m.find("SeccompProfile") != m.end() && !m["SeccompProfile"].empty()) {
      if (typeid(map<string, boost::any>) == m["SeccompProfile"].type()) {
        SeccompProfile model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SeccompProfile"]));
        seccompProfile = make_shared<SeccompProfile>(model1);
      }
    }
  }


  virtual ~SecurityContext() = default;
};
class SmartCache : public Darabonba::Model {
public:
  shared_ptr<long> cacheWorkerNum{};
  shared_ptr<long> cacheWorkerSize{};
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<string> duration{};
  shared_ptr<string> endpoint{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifyTime{};
  shared_ptr<string> mountPath{};
  shared_ptr<string> options{};
  shared_ptr<string> path{};
  shared_ptr<string> smartCacheId{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};
  shared_ptr<string> userId{};

  SmartCache() {}

  explicit SmartCache(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cacheWorkerNum) {
      res["CacheWorkerNum"] = boost::any(*cacheWorkerNum);
    }
    if (cacheWorkerSize) {
      res["CacheWorkerSize"] = boost::any(*cacheWorkerSize);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (endpoint) {
      res["Endpoint"] = boost::any(*endpoint);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
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
    if (options) {
      res["Options"] = boost::any(*options);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (smartCacheId) {
      res["SmartCacheId"] = boost::any(*smartCacheId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CacheWorkerNum") != m.end() && !m["CacheWorkerNum"].empty()) {
      cacheWorkerNum = make_shared<long>(boost::any_cast<long>(m["CacheWorkerNum"]));
    }
    if (m.find("CacheWorkerSize") != m.end() && !m["CacheWorkerSize"].empty()) {
      cacheWorkerSize = make_shared<long>(boost::any_cast<long>(m["CacheWorkerSize"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<string>(boost::any_cast<string>(m["Duration"]));
    }
    if (m.find("Endpoint") != m.end() && !m["Endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["Endpoint"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
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
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      options = make_shared<string>(boost::any_cast<string>(m["Options"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("SmartCacheId") != m.end() && !m["SmartCacheId"].empty()) {
      smartCacheId = make_shared<string>(boost::any_cast<string>(m["SmartCacheId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~SmartCache() = default;
};
class TensorboardDataSourceSpec : public Darabonba::Model {
public:
  shared_ptr<string> dataSourceType{};
  shared_ptr<string> directoryName{};
  shared_ptr<string> fullSummaryPath{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> summaryPath{};
  shared_ptr<string> uri{};

  TensorboardDataSourceSpec() {}

  explicit TensorboardDataSourceSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSourceType) {
      res["DataSourceType"] = boost::any(*dataSourceType);
    }
    if (directoryName) {
      res["DirectoryName"] = boost::any(*directoryName);
    }
    if (fullSummaryPath) {
      res["FullSummaryPath"] = boost::any(*fullSummaryPath);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (summaryPath) {
      res["SummaryPath"] = boost::any(*summaryPath);
    }
    if (uri) {
      res["Uri"] = boost::any(*uri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataSourceType") != m.end() && !m["DataSourceType"].empty()) {
      dataSourceType = make_shared<string>(boost::any_cast<string>(m["DataSourceType"]));
    }
    if (m.find("DirectoryName") != m.end() && !m["DirectoryName"].empty()) {
      directoryName = make_shared<string>(boost::any_cast<string>(m["DirectoryName"]));
    }
    if (m.find("FullSummaryPath") != m.end() && !m["FullSummaryPath"].empty()) {
      fullSummaryPath = make_shared<string>(boost::any_cast<string>(m["FullSummaryPath"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("SummaryPath") != m.end() && !m["SummaryPath"].empty()) {
      summaryPath = make_shared<string>(boost::any_cast<string>(m["SummaryPath"]));
    }
    if (m.find("Uri") != m.end() && !m["Uri"].empty()) {
      uri = make_shared<string>(boost::any_cast<string>(m["Uri"]));
    }
  }


  virtual ~TensorboardDataSourceSpec() = default;
};
class TensorboardSpec : public Darabonba::Model {
public:
  shared_ptr<string> ecsType{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> switchId{};
  shared_ptr<string> vpcId{};

  TensorboardSpec() {}

  explicit TensorboardSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ecsType) {
      res["EcsType"] = boost::any(*ecsType);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (switchId) {
      res["SwitchId"] = boost::any(*switchId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EcsType") != m.end() && !m["EcsType"].empty()) {
      ecsType = make_shared<string>(boost::any_cast<string>(m["EcsType"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("SwitchId") != m.end() && !m["SwitchId"].empty()) {
      switchId = make_shared<string>(boost::any_cast<string>(m["SwitchId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~TensorboardSpec() = default;
};
class Tensorboard : public Darabonba::Model {
public:
  shared_ptr<string> accessibility{};
  shared_ptr<long> cpu{};
  shared_ptr<string> dataSourceId{};
  shared_ptr<string> dataSourceType{};
  shared_ptr<string> displayName{};
  shared_ptr<string> duration{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtFinishTime{};
  shared_ptr<string> gmtModifyTime{};
  shared_ptr<string> jobId{};
  shared_ptr<long> maxRunningTimeMinutes{};
  shared_ptr<long> memory{};
  shared_ptr<string> options{};
  shared_ptr<string> priority{};
  shared_ptr<string> quotaId{};
  shared_ptr<string> quotaName{};
  shared_ptr<string> reasonCode{};
  shared_ptr<string> reasonMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<string> summaryPath{};
  shared_ptr<string> summaryRelativePath{};
  shared_ptr<vector<TensorboardDataSourceSpec>> tensorboardDataSources{};
  shared_ptr<string> tensorboardId{};
  shared_ptr<TensorboardSpec> tensorboardSpec{};
  shared_ptr<string> tensorboardUrl{};
  shared_ptr<string> token{};
  shared_ptr<string> userId{};
  shared_ptr<string> username{};
  shared_ptr<string> workspaceId{};

  Tensorboard() {}

  explicit Tensorboard(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessibility) {
      res["Accessibility"] = boost::any(*accessibility);
    }
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (dataSourceId) {
      res["DataSourceId"] = boost::any(*dataSourceId);
    }
    if (dataSourceType) {
      res["DataSourceType"] = boost::any(*dataSourceType);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtFinishTime) {
      res["GmtFinishTime"] = boost::any(*gmtFinishTime);
    }
    if (gmtModifyTime) {
      res["GmtModifyTime"] = boost::any(*gmtModifyTime);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (maxRunningTimeMinutes) {
      res["MaxRunningTimeMinutes"] = boost::any(*maxRunningTimeMinutes);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (options) {
      res["Options"] = boost::any(*options);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (quotaId) {
      res["QuotaId"] = boost::any(*quotaId);
    }
    if (quotaName) {
      res["QuotaName"] = boost::any(*quotaName);
    }
    if (reasonCode) {
      res["ReasonCode"] = boost::any(*reasonCode);
    }
    if (reasonMessage) {
      res["ReasonMessage"] = boost::any(*reasonMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (summaryPath) {
      res["SummaryPath"] = boost::any(*summaryPath);
    }
    if (summaryRelativePath) {
      res["SummaryRelativePath"] = boost::any(*summaryRelativePath);
    }
    if (tensorboardDataSources) {
      vector<boost::any> temp1;
      for(auto item1:*tensorboardDataSources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TensorboardDataSources"] = boost::any(temp1);
    }
    if (tensorboardId) {
      res["TensorboardId"] = boost::any(*tensorboardId);
    }
    if (tensorboardSpec) {
      res["TensorboardSpec"] = tensorboardSpec ? boost::any(tensorboardSpec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tensorboardUrl) {
      res["TensorboardUrl"] = boost::any(*tensorboardUrl);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (username) {
      res["Username"] = boost::any(*username);
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
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<long>(boost::any_cast<long>(m["Cpu"]));
    }
    if (m.find("DataSourceId") != m.end() && !m["DataSourceId"].empty()) {
      dataSourceId = make_shared<string>(boost::any_cast<string>(m["DataSourceId"]));
    }
    if (m.find("DataSourceType") != m.end() && !m["DataSourceType"].empty()) {
      dataSourceType = make_shared<string>(boost::any_cast<string>(m["DataSourceType"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<string>(boost::any_cast<string>(m["Duration"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtFinishTime") != m.end() && !m["GmtFinishTime"].empty()) {
      gmtFinishTime = make_shared<string>(boost::any_cast<string>(m["GmtFinishTime"]));
    }
    if (m.find("GmtModifyTime") != m.end() && !m["GmtModifyTime"].empty()) {
      gmtModifyTime = make_shared<string>(boost::any_cast<string>(m["GmtModifyTime"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("MaxRunningTimeMinutes") != m.end() && !m["MaxRunningTimeMinutes"].empty()) {
      maxRunningTimeMinutes = make_shared<long>(boost::any_cast<long>(m["MaxRunningTimeMinutes"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<long>(boost::any_cast<long>(m["Memory"]));
    }
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      options = make_shared<string>(boost::any_cast<string>(m["Options"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<string>(boost::any_cast<string>(m["Priority"]));
    }
    if (m.find("QuotaId") != m.end() && !m["QuotaId"].empty()) {
      quotaId = make_shared<string>(boost::any_cast<string>(m["QuotaId"]));
    }
    if (m.find("QuotaName") != m.end() && !m["QuotaName"].empty()) {
      quotaName = make_shared<string>(boost::any_cast<string>(m["QuotaName"]));
    }
    if (m.find("ReasonCode") != m.end() && !m["ReasonCode"].empty()) {
      reasonCode = make_shared<string>(boost::any_cast<string>(m["ReasonCode"]));
    }
    if (m.find("ReasonMessage") != m.end() && !m["ReasonMessage"].empty()) {
      reasonMessage = make_shared<string>(boost::any_cast<string>(m["ReasonMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SummaryPath") != m.end() && !m["SummaryPath"].empty()) {
      summaryPath = make_shared<string>(boost::any_cast<string>(m["SummaryPath"]));
    }
    if (m.find("SummaryRelativePath") != m.end() && !m["SummaryRelativePath"].empty()) {
      summaryRelativePath = make_shared<string>(boost::any_cast<string>(m["SummaryRelativePath"]));
    }
    if (m.find("TensorboardDataSources") != m.end() && !m["TensorboardDataSources"].empty()) {
      if (typeid(vector<boost::any>) == m["TensorboardDataSources"].type()) {
        vector<TensorboardDataSourceSpec> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TensorboardDataSources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TensorboardDataSourceSpec model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tensorboardDataSources = make_shared<vector<TensorboardDataSourceSpec>>(expect1);
      }
    }
    if (m.find("TensorboardId") != m.end() && !m["TensorboardId"].empty()) {
      tensorboardId = make_shared<string>(boost::any_cast<string>(m["TensorboardId"]));
    }
    if (m.find("TensorboardSpec") != m.end() && !m["TensorboardSpec"].empty()) {
      if (typeid(map<string, boost::any>) == m["TensorboardSpec"].type()) {
        TensorboardSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TensorboardSpec"]));
        tensorboardSpec = make_shared<TensorboardSpec>(model1);
      }
    }
    if (m.find("TensorboardUrl") != m.end() && !m["TensorboardUrl"].empty()) {
      tensorboardUrl = make_shared<string>(boost::any_cast<string>(m["TensorboardUrl"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~Tensorboard() = default;
};
class Workspace : public Darabonba::Model {
public:
  shared_ptr<string> creator{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifyTime{};
  shared_ptr<vector<Member>> members{};
  shared_ptr<vector<Quota>> quotas{};
  shared_ptr<Resources> totalResources{};
  shared_ptr<vector<Member>> workspaceAdmins{};
  shared_ptr<string> workspaceId{};
  shared_ptr<string> workspaceName{};

  Workspace() {}

  explicit Workspace(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creator) {
      res["Creator"] = boost::any(*creator);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifyTime) {
      res["GmtModifyTime"] = boost::any(*gmtModifyTime);
    }
    if (members) {
      vector<boost::any> temp1;
      for(auto item1:*members){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Members"] = boost::any(temp1);
    }
    if (quotas) {
      vector<boost::any> temp1;
      for(auto item1:*quotas){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Quotas"] = boost::any(temp1);
    }
    if (totalResources) {
      res["TotalResources"] = totalResources ? boost::any(totalResources->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (workspaceAdmins) {
      vector<boost::any> temp1;
      for(auto item1:*workspaceAdmins){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["WorkspaceAdmins"] = boost::any(temp1);
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
    if (m.find("Creator") != m.end() && !m["Creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["Creator"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifyTime") != m.end() && !m["GmtModifyTime"].empty()) {
      gmtModifyTime = make_shared<string>(boost::any_cast<string>(m["GmtModifyTime"]));
    }
    if (m.find("Members") != m.end() && !m["Members"].empty()) {
      if (typeid(vector<boost::any>) == m["Members"].type()) {
        vector<Member> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Members"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Member model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        members = make_shared<vector<Member>>(expect1);
      }
    }
    if (m.find("Quotas") != m.end() && !m["Quotas"].empty()) {
      if (typeid(vector<boost::any>) == m["Quotas"].type()) {
        vector<Quota> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Quotas"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Quota model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        quotas = make_shared<vector<Quota>>(expect1);
      }
    }
    if (m.find("TotalResources") != m.end() && !m["TotalResources"].empty()) {
      if (typeid(map<string, boost::any>) == m["TotalResources"].type()) {
        Resources model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TotalResources"]));
        totalResources = make_shared<Resources>(model1);
      }
    }
    if (m.find("WorkspaceAdmins") != m.end() && !m["WorkspaceAdmins"].empty()) {
      if (typeid(vector<boost::any>) == m["WorkspaceAdmins"].type()) {
        vector<Member> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["WorkspaceAdmins"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Member model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        workspaceAdmins = make_shared<vector<Member>>(expect1);
      }
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
    if (m.find("WorkspaceName") != m.end() && !m["WorkspaceName"].empty()) {
      workspaceName = make_shared<string>(boost::any_cast<string>(m["WorkspaceName"]));
    }
  }


  virtual ~Workspace() = default;
};
class CreateJobRequestCodeSource : public Darabonba::Model {
public:
  shared_ptr<string> branch{};
  shared_ptr<string> codeSourceId{};
  shared_ptr<string> commit{};
  shared_ptr<string> mountPath{};

  CreateJobRequestCodeSource() {}

  explicit CreateJobRequestCodeSource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (branch) {
      res["Branch"] = boost::any(*branch);
    }
    if (codeSourceId) {
      res["CodeSourceId"] = boost::any(*codeSourceId);
    }
    if (commit) {
      res["Commit"] = boost::any(*commit);
    }
    if (mountPath) {
      res["MountPath"] = boost::any(*mountPath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Branch") != m.end() && !m["Branch"].empty()) {
      branch = make_shared<string>(boost::any_cast<string>(m["Branch"]));
    }
    if (m.find("CodeSourceId") != m.end() && !m["CodeSourceId"].empty()) {
      codeSourceId = make_shared<string>(boost::any_cast<string>(m["CodeSourceId"]));
    }
    if (m.find("Commit") != m.end() && !m["Commit"].empty()) {
      commit = make_shared<string>(boost::any_cast<string>(m["Commit"]));
    }
    if (m.find("MountPath") != m.end() && !m["MountPath"].empty()) {
      mountPath = make_shared<string>(boost::any_cast<string>(m["MountPath"]));
    }
  }


  virtual ~CreateJobRequestCodeSource() = default;
};
class CreateJobRequestDataSources : public Darabonba::Model {
public:
  shared_ptr<string> dataSourceId{};
  shared_ptr<string> dataSourceVersion{};
  shared_ptr<bool> enableCache{};
  shared_ptr<string> mountAccess{};
  shared_ptr<string> mountPath{};
  shared_ptr<string> options{};
  shared_ptr<string> uri{};

  CreateJobRequestDataSources() {}

  explicit CreateJobRequestDataSources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSourceId) {
      res["DataSourceId"] = boost::any(*dataSourceId);
    }
    if (dataSourceVersion) {
      res["DataSourceVersion"] = boost::any(*dataSourceVersion);
    }
    if (enableCache) {
      res["EnableCache"] = boost::any(*enableCache);
    }
    if (mountAccess) {
      res["MountAccess"] = boost::any(*mountAccess);
    }
    if (mountPath) {
      res["MountPath"] = boost::any(*mountPath);
    }
    if (options) {
      res["Options"] = boost::any(*options);
    }
    if (uri) {
      res["Uri"] = boost::any(*uri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataSourceId") != m.end() && !m["DataSourceId"].empty()) {
      dataSourceId = make_shared<string>(boost::any_cast<string>(m["DataSourceId"]));
    }
    if (m.find("DataSourceVersion") != m.end() && !m["DataSourceVersion"].empty()) {
      dataSourceVersion = make_shared<string>(boost::any_cast<string>(m["DataSourceVersion"]));
    }
    if (m.find("EnableCache") != m.end() && !m["EnableCache"].empty()) {
      enableCache = make_shared<bool>(boost::any_cast<bool>(m["EnableCache"]));
    }
    if (m.find("MountAccess") != m.end() && !m["MountAccess"].empty()) {
      mountAccess = make_shared<string>(boost::any_cast<string>(m["MountAccess"]));
    }
    if (m.find("MountPath") != m.end() && !m["MountPath"].empty()) {
      mountPath = make_shared<string>(boost::any_cast<string>(m["MountPath"]));
    }
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      options = make_shared<string>(boost::any_cast<string>(m["Options"]));
    }
    if (m.find("Uri") != m.end() && !m["Uri"].empty()) {
      uri = make_shared<string>(boost::any_cast<string>(m["Uri"]));
    }
  }


  virtual ~CreateJobRequestDataSources() = default;
};
class CreateJobRequestUserVpc : public Darabonba::Model {
public:
  shared_ptr<string> defaultRoute{};
  shared_ptr<vector<string>> extendedCIDRs{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> switchId{};
  shared_ptr<string> vpcId{};

  CreateJobRequestUserVpc() {}

  explicit CreateJobRequestUserVpc(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defaultRoute) {
      res["DefaultRoute"] = boost::any(*defaultRoute);
    }
    if (extendedCIDRs) {
      res["ExtendedCIDRs"] = boost::any(*extendedCIDRs);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (switchId) {
      res["SwitchId"] = boost::any(*switchId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefaultRoute") != m.end() && !m["DefaultRoute"].empty()) {
      defaultRoute = make_shared<string>(boost::any_cast<string>(m["DefaultRoute"]));
    }
    if (m.find("ExtendedCIDRs") != m.end() && !m["ExtendedCIDRs"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ExtendedCIDRs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ExtendedCIDRs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      extendedCIDRs = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("SwitchId") != m.end() && !m["SwitchId"].empty()) {
      switchId = make_shared<string>(boost::any_cast<string>(m["SwitchId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~CreateJobRequestUserVpc() = default;
};
class CreateJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessibility{};
  shared_ptr<CreateJobRequestCodeSource> codeSource{};
  shared_ptr<CredentialConfig> credentialConfig{};
  shared_ptr<vector<CreateJobRequestDataSources>> dataSources{};
  shared_ptr<string> debuggerConfigContent{};
  shared_ptr<string> displayName{};
  shared_ptr<JobElasticSpec> elasticSpec{};
  shared_ptr<map<string, string>> envs{};
  shared_ptr<long> jobMaxRunningTimeMinutes{};
  shared_ptr<vector<JobSpec>> jobSpecs{};
  shared_ptr<string> jobType{};
  shared_ptr<string> options{};
  shared_ptr<long> priority{};
  shared_ptr<string> resourceId{};
  shared_ptr<JobSettings> settings{};
  shared_ptr<string> successPolicy{};
  shared_ptr<string> thirdpartyLibDir{};
  shared_ptr<vector<string>> thirdpartyLibs{};
  shared_ptr<string> userCommand{};
  shared_ptr<CreateJobRequestUserVpc> userVpc{};
  shared_ptr<string> workspaceId{};

  CreateJobRequest() {}

  explicit CreateJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessibility) {
      res["Accessibility"] = boost::any(*accessibility);
    }
    if (codeSource) {
      res["CodeSource"] = codeSource ? boost::any(codeSource->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (credentialConfig) {
      res["CredentialConfig"] = credentialConfig ? boost::any(credentialConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dataSources) {
      vector<boost::any> temp1;
      for(auto item1:*dataSources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataSources"] = boost::any(temp1);
    }
    if (debuggerConfigContent) {
      res["DebuggerConfigContent"] = boost::any(*debuggerConfigContent);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (elasticSpec) {
      res["ElasticSpec"] = elasticSpec ? boost::any(elasticSpec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (envs) {
      res["Envs"] = boost::any(*envs);
    }
    if (jobMaxRunningTimeMinutes) {
      res["JobMaxRunningTimeMinutes"] = boost::any(*jobMaxRunningTimeMinutes);
    }
    if (jobSpecs) {
      vector<boost::any> temp1;
      for(auto item1:*jobSpecs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["JobSpecs"] = boost::any(temp1);
    }
    if (jobType) {
      res["JobType"] = boost::any(*jobType);
    }
    if (options) {
      res["Options"] = boost::any(*options);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (settings) {
      res["Settings"] = settings ? boost::any(settings->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (successPolicy) {
      res["SuccessPolicy"] = boost::any(*successPolicy);
    }
    if (thirdpartyLibDir) {
      res["ThirdpartyLibDir"] = boost::any(*thirdpartyLibDir);
    }
    if (thirdpartyLibs) {
      res["ThirdpartyLibs"] = boost::any(*thirdpartyLibs);
    }
    if (userCommand) {
      res["UserCommand"] = boost::any(*userCommand);
    }
    if (userVpc) {
      res["UserVpc"] = userVpc ? boost::any(userVpc->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("CodeSource") != m.end() && !m["CodeSource"].empty()) {
      if (typeid(map<string, boost::any>) == m["CodeSource"].type()) {
        CreateJobRequestCodeSource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CodeSource"]));
        codeSource = make_shared<CreateJobRequestCodeSource>(model1);
      }
    }
    if (m.find("CredentialConfig") != m.end() && !m["CredentialConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["CredentialConfig"].type()) {
        CredentialConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CredentialConfig"]));
        credentialConfig = make_shared<CredentialConfig>(model1);
      }
    }
    if (m.find("DataSources") != m.end() && !m["DataSources"].empty()) {
      if (typeid(vector<boost::any>) == m["DataSources"].type()) {
        vector<CreateJobRequestDataSources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataSources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateJobRequestDataSources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataSources = make_shared<vector<CreateJobRequestDataSources>>(expect1);
      }
    }
    if (m.find("DebuggerConfigContent") != m.end() && !m["DebuggerConfigContent"].empty()) {
      debuggerConfigContent = make_shared<string>(boost::any_cast<string>(m["DebuggerConfigContent"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("ElasticSpec") != m.end() && !m["ElasticSpec"].empty()) {
      if (typeid(map<string, boost::any>) == m["ElasticSpec"].type()) {
        JobElasticSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ElasticSpec"]));
        elasticSpec = make_shared<JobElasticSpec>(model1);
      }
    }
    if (m.find("Envs") != m.end() && !m["Envs"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Envs"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      envs = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("JobMaxRunningTimeMinutes") != m.end() && !m["JobMaxRunningTimeMinutes"].empty()) {
      jobMaxRunningTimeMinutes = make_shared<long>(boost::any_cast<long>(m["JobMaxRunningTimeMinutes"]));
    }
    if (m.find("JobSpecs") != m.end() && !m["JobSpecs"].empty()) {
      if (typeid(vector<boost::any>) == m["JobSpecs"].type()) {
        vector<JobSpec> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["JobSpecs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            JobSpec model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        jobSpecs = make_shared<vector<JobSpec>>(expect1);
      }
    }
    if (m.find("JobType") != m.end() && !m["JobType"].empty()) {
      jobType = make_shared<string>(boost::any_cast<string>(m["JobType"]));
    }
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      options = make_shared<string>(boost::any_cast<string>(m["Options"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("Settings") != m.end() && !m["Settings"].empty()) {
      if (typeid(map<string, boost::any>) == m["Settings"].type()) {
        JobSettings model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Settings"]));
        settings = make_shared<JobSettings>(model1);
      }
    }
    if (m.find("SuccessPolicy") != m.end() && !m["SuccessPolicy"].empty()) {
      successPolicy = make_shared<string>(boost::any_cast<string>(m["SuccessPolicy"]));
    }
    if (m.find("ThirdpartyLibDir") != m.end() && !m["ThirdpartyLibDir"].empty()) {
      thirdpartyLibDir = make_shared<string>(boost::any_cast<string>(m["ThirdpartyLibDir"]));
    }
    if (m.find("ThirdpartyLibs") != m.end() && !m["ThirdpartyLibs"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ThirdpartyLibs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ThirdpartyLibs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      thirdpartyLibs = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UserCommand") != m.end() && !m["UserCommand"].empty()) {
      userCommand = make_shared<string>(boost::any_cast<string>(m["UserCommand"]));
    }
    if (m.find("UserVpc") != m.end() && !m["UserVpc"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserVpc"].type()) {
        CreateJobRequestUserVpc model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserVpc"]));
        userVpc = make_shared<CreateJobRequestUserVpc>(model1);
      }
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~CreateJobRequest() = default;
};
class CreateJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};

  CreateJobResponseBody() {}

  explicit CreateJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateJobResponseBody() = default;
};
class CreateJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateJobResponseBody> body{};

  CreateJobResponse() {}

  explicit CreateJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateJobResponseBody>(model1);
      }
    }
  }


  virtual ~CreateJobResponse() = default;
};
class CreateTensorboardRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessibility{};
  shared_ptr<long> cpu{};
  shared_ptr<string> dataSourceId{};
  shared_ptr<string> dataSourceType{};
  shared_ptr<vector<DataSourceItem>> dataSources{};
  shared_ptr<string> displayName{};
  shared_ptr<string> jobId{};
  shared_ptr<long> maxRunningTimeMinutes{};
  shared_ptr<long> memory{};
  shared_ptr<string> options{};
  shared_ptr<string> priority{};
  shared_ptr<string> quotaId{};
  shared_ptr<string> sourceId{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> summaryPath{};
  shared_ptr<string> summaryRelativePath{};
  shared_ptr<vector<TensorboardDataSourceSpec>> tensorboardDataSources{};
  shared_ptr<TensorboardSpec> tensorboardSpec{};
  shared_ptr<string> uri{};
  shared_ptr<string> workspaceId{};

  CreateTensorboardRequest() {}

  explicit CreateTensorboardRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessibility) {
      res["Accessibility"] = boost::any(*accessibility);
    }
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (dataSourceId) {
      res["DataSourceId"] = boost::any(*dataSourceId);
    }
    if (dataSourceType) {
      res["DataSourceType"] = boost::any(*dataSourceType);
    }
    if (dataSources) {
      vector<boost::any> temp1;
      for(auto item1:*dataSources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataSources"] = boost::any(temp1);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (maxRunningTimeMinutes) {
      res["MaxRunningTimeMinutes"] = boost::any(*maxRunningTimeMinutes);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (options) {
      res["Options"] = boost::any(*options);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (quotaId) {
      res["QuotaId"] = boost::any(*quotaId);
    }
    if (sourceId) {
      res["SourceId"] = boost::any(*sourceId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (summaryPath) {
      res["SummaryPath"] = boost::any(*summaryPath);
    }
    if (summaryRelativePath) {
      res["SummaryRelativePath"] = boost::any(*summaryRelativePath);
    }
    if (tensorboardDataSources) {
      vector<boost::any> temp1;
      for(auto item1:*tensorboardDataSources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TensorboardDataSources"] = boost::any(temp1);
    }
    if (tensorboardSpec) {
      res["TensorboardSpec"] = tensorboardSpec ? boost::any(tensorboardSpec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (uri) {
      res["Uri"] = boost::any(*uri);
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
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<long>(boost::any_cast<long>(m["Cpu"]));
    }
    if (m.find("DataSourceId") != m.end() && !m["DataSourceId"].empty()) {
      dataSourceId = make_shared<string>(boost::any_cast<string>(m["DataSourceId"]));
    }
    if (m.find("DataSourceType") != m.end() && !m["DataSourceType"].empty()) {
      dataSourceType = make_shared<string>(boost::any_cast<string>(m["DataSourceType"]));
    }
    if (m.find("DataSources") != m.end() && !m["DataSources"].empty()) {
      if (typeid(vector<boost::any>) == m["DataSources"].type()) {
        vector<DataSourceItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataSources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DataSourceItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataSources = make_shared<vector<DataSourceItem>>(expect1);
      }
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("MaxRunningTimeMinutes") != m.end() && !m["MaxRunningTimeMinutes"].empty()) {
      maxRunningTimeMinutes = make_shared<long>(boost::any_cast<long>(m["MaxRunningTimeMinutes"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<long>(boost::any_cast<long>(m["Memory"]));
    }
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      options = make_shared<string>(boost::any_cast<string>(m["Options"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<string>(boost::any_cast<string>(m["Priority"]));
    }
    if (m.find("QuotaId") != m.end() && !m["QuotaId"].empty()) {
      quotaId = make_shared<string>(boost::any_cast<string>(m["QuotaId"]));
    }
    if (m.find("SourceId") != m.end() && !m["SourceId"].empty()) {
      sourceId = make_shared<string>(boost::any_cast<string>(m["SourceId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("SummaryPath") != m.end() && !m["SummaryPath"].empty()) {
      summaryPath = make_shared<string>(boost::any_cast<string>(m["SummaryPath"]));
    }
    if (m.find("SummaryRelativePath") != m.end() && !m["SummaryRelativePath"].empty()) {
      summaryRelativePath = make_shared<string>(boost::any_cast<string>(m["SummaryRelativePath"]));
    }
    if (m.find("TensorboardDataSources") != m.end() && !m["TensorboardDataSources"].empty()) {
      if (typeid(vector<boost::any>) == m["TensorboardDataSources"].type()) {
        vector<TensorboardDataSourceSpec> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TensorboardDataSources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TensorboardDataSourceSpec model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tensorboardDataSources = make_shared<vector<TensorboardDataSourceSpec>>(expect1);
      }
    }
    if (m.find("TensorboardSpec") != m.end() && !m["TensorboardSpec"].empty()) {
      if (typeid(map<string, boost::any>) == m["TensorboardSpec"].type()) {
        TensorboardSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TensorboardSpec"]));
        tensorboardSpec = make_shared<TensorboardSpec>(model1);
      }
    }
    if (m.find("Uri") != m.end() && !m["Uri"].empty()) {
      uri = make_shared<string>(boost::any_cast<string>(m["Uri"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~CreateTensorboardRequest() = default;
};
class CreateTensorboardResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> dataSourceId{};
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> tensorboardId{};

  CreateTensorboardResponseBody() {}

  explicit CreateTensorboardResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSourceId) {
      res["DataSourceId"] = boost::any(*dataSourceId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tensorboardId) {
      res["TensorboardId"] = boost::any(*tensorboardId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataSourceId") != m.end() && !m["DataSourceId"].empty()) {
      dataSourceId = make_shared<string>(boost::any_cast<string>(m["DataSourceId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TensorboardId") != m.end() && !m["TensorboardId"].empty()) {
      tensorboardId = make_shared<string>(boost::any_cast<string>(m["TensorboardId"]));
    }
  }


  virtual ~CreateTensorboardResponseBody() = default;
};
class CreateTensorboardResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateTensorboardResponseBody> body{};

  CreateTensorboardResponse() {}

  explicit CreateTensorboardResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateTensorboardResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateTensorboardResponseBody>(model1);
      }
    }
  }


  virtual ~CreateTensorboardResponse() = default;
};
class DeleteJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};

  DeleteJobResponseBody() {}

  explicit DeleteJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteJobResponseBody() = default;
};
class DeleteJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteJobResponseBody> body{};

  DeleteJobResponse() {}

  explicit DeleteJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteJobResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteJobResponse() = default;
};
class DeleteTensorboardRequest : public Darabonba::Model {
public:
  shared_ptr<string> workspaceId{};

  DeleteTensorboardRequest() {}

  explicit DeleteTensorboardRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteTensorboardRequest() = default;
};
class DeleteTensorboardResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> tensorboardId{};

  DeleteTensorboardResponseBody() {}

  explicit DeleteTensorboardResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tensorboardId) {
      res["TensorboardId"] = boost::any(*tensorboardId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TensorboardId") != m.end() && !m["TensorboardId"].empty()) {
      tensorboardId = make_shared<string>(boost::any_cast<string>(m["TensorboardId"]));
    }
  }


  virtual ~DeleteTensorboardResponseBody() = default;
};
class DeleteTensorboardResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteTensorboardResponseBody> body{};

  DeleteTensorboardResponse() {}

  explicit DeleteTensorboardResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteTensorboardResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteTensorboardResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteTensorboardResponse() = default;
};
class GetJobRequest : public Darabonba::Model {
public:
  shared_ptr<bool> needDetail{};

  GetJobRequest() {}

  explicit GetJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (needDetail) {
      res["NeedDetail"] = boost::any(*needDetail);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NeedDetail") != m.end() && !m["NeedDetail"].empty()) {
      needDetail = make_shared<bool>(boost::any_cast<bool>(m["NeedDetail"]));
    }
  }


  virtual ~GetJobRequest() = default;
};
class GetJobResponseBodyCodeSource : public Darabonba::Model {
public:
  shared_ptr<string> branch{};
  shared_ptr<string> codeSourceId{};
  shared_ptr<string> commit{};
  shared_ptr<string> mountPath{};

  GetJobResponseBodyCodeSource() {}

  explicit GetJobResponseBodyCodeSource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (branch) {
      res["Branch"] = boost::any(*branch);
    }
    if (codeSourceId) {
      res["CodeSourceId"] = boost::any(*codeSourceId);
    }
    if (commit) {
      res["Commit"] = boost::any(*commit);
    }
    if (mountPath) {
      res["MountPath"] = boost::any(*mountPath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Branch") != m.end() && !m["Branch"].empty()) {
      branch = make_shared<string>(boost::any_cast<string>(m["Branch"]));
    }
    if (m.find("CodeSourceId") != m.end() && !m["CodeSourceId"].empty()) {
      codeSourceId = make_shared<string>(boost::any_cast<string>(m["CodeSourceId"]));
    }
    if (m.find("Commit") != m.end() && !m["Commit"].empty()) {
      commit = make_shared<string>(boost::any_cast<string>(m["Commit"]));
    }
    if (m.find("MountPath") != m.end() && !m["MountPath"].empty()) {
      mountPath = make_shared<string>(boost::any_cast<string>(m["MountPath"]));
    }
  }


  virtual ~GetJobResponseBodyCodeSource() = default;
};
class GetJobResponseBodyDataSources : public Darabonba::Model {
public:
  shared_ptr<string> dataSourceId{};
  shared_ptr<string> mountPath{};
  shared_ptr<string> uri{};

  GetJobResponseBodyDataSources() {}

  explicit GetJobResponseBodyDataSources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSourceId) {
      res["DataSourceId"] = boost::any(*dataSourceId);
    }
    if (mountPath) {
      res["MountPath"] = boost::any(*mountPath);
    }
    if (uri) {
      res["Uri"] = boost::any(*uri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataSourceId") != m.end() && !m["DataSourceId"].empty()) {
      dataSourceId = make_shared<string>(boost::any_cast<string>(m["DataSourceId"]));
    }
    if (m.find("MountPath") != m.end() && !m["MountPath"].empty()) {
      mountPath = make_shared<string>(boost::any_cast<string>(m["MountPath"]));
    }
    if (m.find("Uri") != m.end() && !m["Uri"].empty()) {
      uri = make_shared<string>(boost::any_cast<string>(m["Uri"]));
    }
  }


  virtual ~GetJobResponseBodyDataSources() = default;
};
class GetJobResponseBodyPodsHistoryPods : public Darabonba::Model {
public:
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtFinishTime{};
  shared_ptr<string> gmtStartTime{};
  shared_ptr<string> ip{};
  shared_ptr<string> podId{};
  shared_ptr<string> podUid{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> status{};
  shared_ptr<string> subStatus{};
  shared_ptr<string> type{};

  GetJobResponseBodyPodsHistoryPods() {}

  explicit GetJobResponseBodyPodsHistoryPods(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtFinishTime) {
      res["GmtFinishTime"] = boost::any(*gmtFinishTime);
    }
    if (gmtStartTime) {
      res["GmtStartTime"] = boost::any(*gmtStartTime);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (podId) {
      res["PodId"] = boost::any(*podId);
    }
    if (podUid) {
      res["PodUid"] = boost::any(*podUid);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (subStatus) {
      res["SubStatus"] = boost::any(*subStatus);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtFinishTime") != m.end() && !m["GmtFinishTime"].empty()) {
      gmtFinishTime = make_shared<string>(boost::any_cast<string>(m["GmtFinishTime"]));
    }
    if (m.find("GmtStartTime") != m.end() && !m["GmtStartTime"].empty()) {
      gmtStartTime = make_shared<string>(boost::any_cast<string>(m["GmtStartTime"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("PodId") != m.end() && !m["PodId"].empty()) {
      podId = make_shared<string>(boost::any_cast<string>(m["PodId"]));
    }
    if (m.find("PodUid") != m.end() && !m["PodUid"].empty()) {
      podUid = make_shared<string>(boost::any_cast<string>(m["PodUid"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SubStatus") != m.end() && !m["SubStatus"].empty()) {
      subStatus = make_shared<string>(boost::any_cast<string>(m["SubStatus"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetJobResponseBodyPodsHistoryPods() = default;
};
class GetJobResponseBodyPods : public Darabonba::Model {
public:
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtFinishTime{};
  shared_ptr<string> gmtStartTime{};
  shared_ptr<vector<GetJobResponseBodyPodsHistoryPods>> historyPods{};
  shared_ptr<string> ip{};
  shared_ptr<string> podId{};
  shared_ptr<string> podUid{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> status{};
  shared_ptr<string> subStatus{};
  shared_ptr<string> type{};

  GetJobResponseBodyPods() {}

  explicit GetJobResponseBodyPods(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtFinishTime) {
      res["GmtFinishTime"] = boost::any(*gmtFinishTime);
    }
    if (gmtStartTime) {
      res["GmtStartTime"] = boost::any(*gmtStartTime);
    }
    if (historyPods) {
      vector<boost::any> temp1;
      for(auto item1:*historyPods){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HistoryPods"] = boost::any(temp1);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (podId) {
      res["PodId"] = boost::any(*podId);
    }
    if (podUid) {
      res["PodUid"] = boost::any(*podUid);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (subStatus) {
      res["SubStatus"] = boost::any(*subStatus);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtFinishTime") != m.end() && !m["GmtFinishTime"].empty()) {
      gmtFinishTime = make_shared<string>(boost::any_cast<string>(m["GmtFinishTime"]));
    }
    if (m.find("GmtStartTime") != m.end() && !m["GmtStartTime"].empty()) {
      gmtStartTime = make_shared<string>(boost::any_cast<string>(m["GmtStartTime"]));
    }
    if (m.find("HistoryPods") != m.end() && !m["HistoryPods"].empty()) {
      if (typeid(vector<boost::any>) == m["HistoryPods"].type()) {
        vector<GetJobResponseBodyPodsHistoryPods> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HistoryPods"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetJobResponseBodyPodsHistoryPods model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        historyPods = make_shared<vector<GetJobResponseBodyPodsHistoryPods>>(expect1);
      }
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("PodId") != m.end() && !m["PodId"].empty()) {
      podId = make_shared<string>(boost::any_cast<string>(m["PodId"]));
    }
    if (m.find("PodUid") != m.end() && !m["PodUid"].empty()) {
      podUid = make_shared<string>(boost::any_cast<string>(m["PodUid"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SubStatus") != m.end() && !m["SubStatus"].empty()) {
      subStatus = make_shared<string>(boost::any_cast<string>(m["SubStatus"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetJobResponseBodyPods() = default;
};
class GetJobResponseBodyUserVpc : public Darabonba::Model {
public:
  shared_ptr<string> defaultRoute{};
  shared_ptr<vector<string>> extendedCidrs{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> switchId{};
  shared_ptr<string> vpcId{};

  GetJobResponseBodyUserVpc() {}

  explicit GetJobResponseBodyUserVpc(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defaultRoute) {
      res["DefaultRoute"] = boost::any(*defaultRoute);
    }
    if (extendedCidrs) {
      res["ExtendedCidrs"] = boost::any(*extendedCidrs);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (switchId) {
      res["SwitchId"] = boost::any(*switchId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefaultRoute") != m.end() && !m["DefaultRoute"].empty()) {
      defaultRoute = make_shared<string>(boost::any_cast<string>(m["DefaultRoute"]));
    }
    if (m.find("ExtendedCidrs") != m.end() && !m["ExtendedCidrs"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ExtendedCidrs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ExtendedCidrs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      extendedCidrs = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("SwitchId") != m.end() && !m["SwitchId"].empty()) {
      switchId = make_shared<string>(boost::any_cast<string>(m["SwitchId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~GetJobResponseBodyUserVpc() = default;
};
class GetJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessibility{};
  shared_ptr<string> clusterId{};
  shared_ptr<GetJobResponseBodyCodeSource> codeSource{};
  shared_ptr<CredentialConfig> credentialConfig{};
  shared_ptr<vector<GetJobResponseBodyDataSources>> dataSources{};
  shared_ptr<string> displayName{};
  shared_ptr<long> duration{};
  shared_ptr<JobElasticSpec> elasticSpec{};
  shared_ptr<bool> enabledDebugger{};
  shared_ptr<map<string, string>> envs{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtFailedTime{};
  shared_ptr<string> gmtFinishTime{};
  shared_ptr<string> gmtRunningTime{};
  shared_ptr<string> gmtStoppedTime{};
  shared_ptr<string> gmtSubmittedTime{};
  shared_ptr<string> gmtSuccessedTime{};
  shared_ptr<string> jobId{};
  shared_ptr<vector<JobSpec>> jobSpecs{};
  shared_ptr<string> jobType{};
  shared_ptr<vector<GetJobResponseBodyPods>> pods{};
  shared_ptr<long> priority{};
  shared_ptr<string> reasonCode{};
  shared_ptr<string> reasonMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceLevel{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> restartTimes{};
  shared_ptr<JobSettings> settings{};
  shared_ptr<string> status{};
  shared_ptr<vector<StatusTransitionItem>> statusHistory{};
  shared_ptr<string> subStatus{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> thirdpartyLibDir{};
  shared_ptr<vector<string>> thirdpartyLibs{};
  shared_ptr<string> userCommand{};
  shared_ptr<string> userId{};
  shared_ptr<GetJobResponseBodyUserVpc> userVpc{};
  shared_ptr<string> workspaceId{};
  shared_ptr<string> workspaceName{};

  GetJobResponseBody() {}

  explicit GetJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessibility) {
      res["Accessibility"] = boost::any(*accessibility);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (codeSource) {
      res["CodeSource"] = codeSource ? boost::any(codeSource->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (credentialConfig) {
      res["CredentialConfig"] = credentialConfig ? boost::any(credentialConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dataSources) {
      vector<boost::any> temp1;
      for(auto item1:*dataSources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataSources"] = boost::any(temp1);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (elasticSpec) {
      res["ElasticSpec"] = elasticSpec ? boost::any(elasticSpec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (enabledDebugger) {
      res["EnabledDebugger"] = boost::any(*enabledDebugger);
    }
    if (envs) {
      res["Envs"] = boost::any(*envs);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtFailedTime) {
      res["GmtFailedTime"] = boost::any(*gmtFailedTime);
    }
    if (gmtFinishTime) {
      res["GmtFinishTime"] = boost::any(*gmtFinishTime);
    }
    if (gmtRunningTime) {
      res["GmtRunningTime"] = boost::any(*gmtRunningTime);
    }
    if (gmtStoppedTime) {
      res["GmtStoppedTime"] = boost::any(*gmtStoppedTime);
    }
    if (gmtSubmittedTime) {
      res["GmtSubmittedTime"] = boost::any(*gmtSubmittedTime);
    }
    if (gmtSuccessedTime) {
      res["GmtSuccessedTime"] = boost::any(*gmtSuccessedTime);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (jobSpecs) {
      vector<boost::any> temp1;
      for(auto item1:*jobSpecs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["JobSpecs"] = boost::any(temp1);
    }
    if (jobType) {
      res["JobType"] = boost::any(*jobType);
    }
    if (pods) {
      vector<boost::any> temp1;
      for(auto item1:*pods){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Pods"] = boost::any(temp1);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (reasonCode) {
      res["ReasonCode"] = boost::any(*reasonCode);
    }
    if (reasonMessage) {
      res["ReasonMessage"] = boost::any(*reasonMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceLevel) {
      res["ResourceLevel"] = boost::any(*resourceLevel);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (restartTimes) {
      res["RestartTimes"] = boost::any(*restartTimes);
    }
    if (settings) {
      res["Settings"] = settings ? boost::any(settings->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (statusHistory) {
      vector<boost::any> temp1;
      for(auto item1:*statusHistory){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["StatusHistory"] = boost::any(temp1);
    }
    if (subStatus) {
      res["SubStatus"] = boost::any(*subStatus);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (thirdpartyLibDir) {
      res["ThirdpartyLibDir"] = boost::any(*thirdpartyLibDir);
    }
    if (thirdpartyLibs) {
      res["ThirdpartyLibs"] = boost::any(*thirdpartyLibs);
    }
    if (userCommand) {
      res["UserCommand"] = boost::any(*userCommand);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userVpc) {
      res["UserVpc"] = userVpc ? boost::any(userVpc->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Accessibility") != m.end() && !m["Accessibility"].empty()) {
      accessibility = make_shared<string>(boost::any_cast<string>(m["Accessibility"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("CodeSource") != m.end() && !m["CodeSource"].empty()) {
      if (typeid(map<string, boost::any>) == m["CodeSource"].type()) {
        GetJobResponseBodyCodeSource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CodeSource"]));
        codeSource = make_shared<GetJobResponseBodyCodeSource>(model1);
      }
    }
    if (m.find("CredentialConfig") != m.end() && !m["CredentialConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["CredentialConfig"].type()) {
        CredentialConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CredentialConfig"]));
        credentialConfig = make_shared<CredentialConfig>(model1);
      }
    }
    if (m.find("DataSources") != m.end() && !m["DataSources"].empty()) {
      if (typeid(vector<boost::any>) == m["DataSources"].type()) {
        vector<GetJobResponseBodyDataSources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataSources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetJobResponseBodyDataSources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataSources = make_shared<vector<GetJobResponseBodyDataSources>>(expect1);
      }
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("ElasticSpec") != m.end() && !m["ElasticSpec"].empty()) {
      if (typeid(map<string, boost::any>) == m["ElasticSpec"].type()) {
        JobElasticSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ElasticSpec"]));
        elasticSpec = make_shared<JobElasticSpec>(model1);
      }
    }
    if (m.find("EnabledDebugger") != m.end() && !m["EnabledDebugger"].empty()) {
      enabledDebugger = make_shared<bool>(boost::any_cast<bool>(m["EnabledDebugger"]));
    }
    if (m.find("Envs") != m.end() && !m["Envs"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Envs"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      envs = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtFailedTime") != m.end() && !m["GmtFailedTime"].empty()) {
      gmtFailedTime = make_shared<string>(boost::any_cast<string>(m["GmtFailedTime"]));
    }
    if (m.find("GmtFinishTime") != m.end() && !m["GmtFinishTime"].empty()) {
      gmtFinishTime = make_shared<string>(boost::any_cast<string>(m["GmtFinishTime"]));
    }
    if (m.find("GmtRunningTime") != m.end() && !m["GmtRunningTime"].empty()) {
      gmtRunningTime = make_shared<string>(boost::any_cast<string>(m["GmtRunningTime"]));
    }
    if (m.find("GmtStoppedTime") != m.end() && !m["GmtStoppedTime"].empty()) {
      gmtStoppedTime = make_shared<string>(boost::any_cast<string>(m["GmtStoppedTime"]));
    }
    if (m.find("GmtSubmittedTime") != m.end() && !m["GmtSubmittedTime"].empty()) {
      gmtSubmittedTime = make_shared<string>(boost::any_cast<string>(m["GmtSubmittedTime"]));
    }
    if (m.find("GmtSuccessedTime") != m.end() && !m["GmtSuccessedTime"].empty()) {
      gmtSuccessedTime = make_shared<string>(boost::any_cast<string>(m["GmtSuccessedTime"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("JobSpecs") != m.end() && !m["JobSpecs"].empty()) {
      if (typeid(vector<boost::any>) == m["JobSpecs"].type()) {
        vector<JobSpec> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["JobSpecs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            JobSpec model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        jobSpecs = make_shared<vector<JobSpec>>(expect1);
      }
    }
    if (m.find("JobType") != m.end() && !m["JobType"].empty()) {
      jobType = make_shared<string>(boost::any_cast<string>(m["JobType"]));
    }
    if (m.find("Pods") != m.end() && !m["Pods"].empty()) {
      if (typeid(vector<boost::any>) == m["Pods"].type()) {
        vector<GetJobResponseBodyPods> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Pods"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetJobResponseBodyPods model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pods = make_shared<vector<GetJobResponseBodyPods>>(expect1);
      }
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("ReasonCode") != m.end() && !m["ReasonCode"].empty()) {
      reasonCode = make_shared<string>(boost::any_cast<string>(m["ReasonCode"]));
    }
    if (m.find("ReasonMessage") != m.end() && !m["ReasonMessage"].empty()) {
      reasonMessage = make_shared<string>(boost::any_cast<string>(m["ReasonMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceLevel") != m.end() && !m["ResourceLevel"].empty()) {
      resourceLevel = make_shared<string>(boost::any_cast<string>(m["ResourceLevel"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("RestartTimes") != m.end() && !m["RestartTimes"].empty()) {
      restartTimes = make_shared<string>(boost::any_cast<string>(m["RestartTimes"]));
    }
    if (m.find("Settings") != m.end() && !m["Settings"].empty()) {
      if (typeid(map<string, boost::any>) == m["Settings"].type()) {
        JobSettings model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Settings"]));
        settings = make_shared<JobSettings>(model1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StatusHistory") != m.end() && !m["StatusHistory"].empty()) {
      if (typeid(vector<boost::any>) == m["StatusHistory"].type()) {
        vector<StatusTransitionItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["StatusHistory"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            StatusTransitionItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        statusHistory = make_shared<vector<StatusTransitionItem>>(expect1);
      }
    }
    if (m.find("SubStatus") != m.end() && !m["SubStatus"].empty()) {
      subStatus = make_shared<string>(boost::any_cast<string>(m["SubStatus"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
    if (m.find("ThirdpartyLibDir") != m.end() && !m["ThirdpartyLibDir"].empty()) {
      thirdpartyLibDir = make_shared<string>(boost::any_cast<string>(m["ThirdpartyLibDir"]));
    }
    if (m.find("ThirdpartyLibs") != m.end() && !m["ThirdpartyLibs"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ThirdpartyLibs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ThirdpartyLibs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      thirdpartyLibs = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UserCommand") != m.end() && !m["UserCommand"].empty()) {
      userCommand = make_shared<string>(boost::any_cast<string>(m["UserCommand"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserVpc") != m.end() && !m["UserVpc"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserVpc"].type()) {
        GetJobResponseBodyUserVpc model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserVpc"]));
        userVpc = make_shared<GetJobResponseBodyUserVpc>(model1);
      }
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
    if (m.find("WorkspaceName") != m.end() && !m["WorkspaceName"].empty()) {
      workspaceName = make_shared<string>(boost::any_cast<string>(m["WorkspaceName"]));
    }
  }


  virtual ~GetJobResponseBody() = default;
};
class GetJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetJobResponseBody> body{};

  GetJobResponse() {}

  explicit GetJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetJobResponseBody>(model1);
      }
    }
  }


  virtual ~GetJobResponse() = default;
};
class GetJobEventsRequest : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<long> maxEventsNum{};
  shared_ptr<string> startTime{};

  GetJobEventsRequest() {}

  explicit GetJobEventsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (maxEventsNum) {
      res["MaxEventsNum"] = boost::any(*maxEventsNum);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("MaxEventsNum") != m.end() && !m["MaxEventsNum"].empty()) {
      maxEventsNum = make_shared<long>(boost::any_cast<long>(m["MaxEventsNum"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~GetJobEventsRequest() = default;
};
class GetJobEventsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> events{};
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};

  GetJobEventsResponseBody() {}

  explicit GetJobEventsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (events) {
      res["Events"] = boost::any(*events);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Events") != m.end() && !m["Events"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Events"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Events"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      events = make_shared<vector<string>>(toVec1);
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetJobEventsResponseBody() = default;
};
class GetJobEventsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetJobEventsResponseBody> body{};

  GetJobEventsResponse() {}

  explicit GetJobEventsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetJobEventsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetJobEventsResponseBody>(model1);
      }
    }
  }


  virtual ~GetJobEventsResponse() = default;
};
class GetJobMetricsRequest : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> metricType{};
  shared_ptr<string> startTime{};
  shared_ptr<string> timeStep{};
  shared_ptr<string> token{};

  GetJobMetricsRequest() {}

  explicit GetJobMetricsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (metricType) {
      res["MetricType"] = boost::any(*metricType);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (timeStep) {
      res["TimeStep"] = boost::any(*timeStep);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("MetricType") != m.end() && !m["MetricType"].empty()) {
      metricType = make_shared<string>(boost::any_cast<string>(m["MetricType"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("TimeStep") != m.end() && !m["TimeStep"].empty()) {
      timeStep = make_shared<string>(boost::any_cast<string>(m["TimeStep"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
  }


  virtual ~GetJobMetricsRequest() = default;
};
class GetJobMetricsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<vector<PodMetric>> podMetrics{};
  shared_ptr<string> requestId{};

  GetJobMetricsResponseBody() {}

  explicit GetJobMetricsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (podMetrics) {
      vector<boost::any> temp1;
      for(auto item1:*podMetrics){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PodMetrics"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("PodMetrics") != m.end() && !m["PodMetrics"].empty()) {
      if (typeid(vector<boost::any>) == m["PodMetrics"].type()) {
        vector<PodMetric> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PodMetrics"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PodMetric model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        podMetrics = make_shared<vector<PodMetric>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetJobMetricsResponseBody() = default;
};
class GetJobMetricsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetJobMetricsResponseBody> body{};

  GetJobMetricsResponse() {}

  explicit GetJobMetricsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetJobMetricsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetJobMetricsResponseBody>(model1);
      }
    }
  }


  virtual ~GetJobMetricsResponse() = default;
};
class GetJobSanityCheckResultRequest : public Darabonba::Model {
public:
  shared_ptr<long> sanityCheckNumber{};
  shared_ptr<string> sanityCheckPhase{};
  shared_ptr<string> token{};

  GetJobSanityCheckResultRequest() {}

  explicit GetJobSanityCheckResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sanityCheckNumber) {
      res["SanityCheckNumber"] = boost::any(*sanityCheckNumber);
    }
    if (sanityCheckPhase) {
      res["SanityCheckPhase"] = boost::any(*sanityCheckPhase);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SanityCheckNumber") != m.end() && !m["SanityCheckNumber"].empty()) {
      sanityCheckNumber = make_shared<long>(boost::any_cast<long>(m["SanityCheckNumber"]));
    }
    if (m.find("SanityCheckPhase") != m.end() && !m["SanityCheckPhase"].empty()) {
      sanityCheckPhase = make_shared<string>(boost::any_cast<string>(m["SanityCheckPhase"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
  }


  virtual ~GetJobSanityCheckResultRequest() = default;
};
class GetJobSanityCheckResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestID{};
  shared_ptr<vector<SanityCheckResultItem>> sanityCheckResult{};

  GetJobSanityCheckResultResponseBody() {}

  explicit GetJobSanityCheckResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (requestID) {
      res["RequestID"] = boost::any(*requestID);
    }
    if (sanityCheckResult) {
      vector<boost::any> temp1;
      for(auto item1:*sanityCheckResult){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SanityCheckResult"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("RequestID") != m.end() && !m["RequestID"].empty()) {
      requestID = make_shared<string>(boost::any_cast<string>(m["RequestID"]));
    }
    if (m.find("SanityCheckResult") != m.end() && !m["SanityCheckResult"].empty()) {
      if (typeid(vector<boost::any>) == m["SanityCheckResult"].type()) {
        vector<SanityCheckResultItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SanityCheckResult"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SanityCheckResultItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sanityCheckResult = make_shared<vector<SanityCheckResultItem>>(expect1);
      }
    }
  }


  virtual ~GetJobSanityCheckResultResponseBody() = default;
};
class GetJobSanityCheckResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetJobSanityCheckResultResponseBody> body{};

  GetJobSanityCheckResultResponse() {}

  explicit GetJobSanityCheckResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetJobSanityCheckResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetJobSanityCheckResultResponseBody>(model1);
      }
    }
  }


  virtual ~GetJobSanityCheckResultResponse() = default;
};
class GetPodEventsRequest : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<long> maxEventsNum{};
  shared_ptr<string> podUid{};
  shared_ptr<string> startTime{};

  GetPodEventsRequest() {}

  explicit GetPodEventsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (maxEventsNum) {
      res["MaxEventsNum"] = boost::any(*maxEventsNum);
    }
    if (podUid) {
      res["PodUid"] = boost::any(*podUid);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("MaxEventsNum") != m.end() && !m["MaxEventsNum"].empty()) {
      maxEventsNum = make_shared<long>(boost::any_cast<long>(m["MaxEventsNum"]));
    }
    if (m.find("PodUid") != m.end() && !m["PodUid"].empty()) {
      podUid = make_shared<string>(boost::any_cast<string>(m["PodUid"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~GetPodEventsRequest() = default;
};
class GetPodEventsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> events{};
  shared_ptr<string> jobId{};
  shared_ptr<string> podId{};
  shared_ptr<string> podUid{};
  shared_ptr<string> requestId{};

  GetPodEventsResponseBody() {}

  explicit GetPodEventsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (events) {
      res["Events"] = boost::any(*events);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (podId) {
      res["PodId"] = boost::any(*podId);
    }
    if (podUid) {
      res["PodUid"] = boost::any(*podUid);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Events") != m.end() && !m["Events"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Events"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Events"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      events = make_shared<vector<string>>(toVec1);
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("PodId") != m.end() && !m["PodId"].empty()) {
      podId = make_shared<string>(boost::any_cast<string>(m["PodId"]));
    }
    if (m.find("PodUid") != m.end() && !m["PodUid"].empty()) {
      podUid = make_shared<string>(boost::any_cast<string>(m["PodUid"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetPodEventsResponseBody() = default;
};
class GetPodEventsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPodEventsResponseBody> body{};

  GetPodEventsResponse() {}

  explicit GetPodEventsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetPodEventsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPodEventsResponseBody>(model1);
      }
    }
  }


  virtual ~GetPodEventsResponse() = default;
};
class GetPodLogsRequest : public Darabonba::Model {
public:
  shared_ptr<bool> downloadToFile{};
  shared_ptr<string> endTime{};
  shared_ptr<long> maxLines{};
  shared_ptr<string> podUid{};
  shared_ptr<string> startTime{};

  GetPodLogsRequest() {}

  explicit GetPodLogsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (downloadToFile) {
      res["DownloadToFile"] = boost::any(*downloadToFile);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (maxLines) {
      res["MaxLines"] = boost::any(*maxLines);
    }
    if (podUid) {
      res["PodUid"] = boost::any(*podUid);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DownloadToFile") != m.end() && !m["DownloadToFile"].empty()) {
      downloadToFile = make_shared<bool>(boost::any_cast<bool>(m["DownloadToFile"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("MaxLines") != m.end() && !m["MaxLines"].empty()) {
      maxLines = make_shared<long>(boost::any_cast<long>(m["MaxLines"]));
    }
    if (m.find("PodUid") != m.end() && !m["PodUid"].empty()) {
      podUid = make_shared<string>(boost::any_cast<string>(m["PodUid"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~GetPodLogsRequest() = default;
};
class GetPodLogsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<vector<string>> logs{};
  shared_ptr<string> podId{};
  shared_ptr<string> podUid{};
  shared_ptr<string> requestId{};

  GetPodLogsResponseBody() {}

  explicit GetPodLogsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (logs) {
      res["Logs"] = boost::any(*logs);
    }
    if (podId) {
      res["PodId"] = boost::any(*podId);
    }
    if (podUid) {
      res["PodUid"] = boost::any(*podUid);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
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
    if (m.find("PodId") != m.end() && !m["PodId"].empty()) {
      podId = make_shared<string>(boost::any_cast<string>(m["PodId"]));
    }
    if (m.find("PodUid") != m.end() && !m["PodUid"].empty()) {
      podUid = make_shared<string>(boost::any_cast<string>(m["PodUid"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetPodLogsResponseBody() = default;
};
class GetPodLogsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPodLogsResponseBody> body{};

  GetPodLogsResponse() {}

  explicit GetPodLogsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetPodLogsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPodLogsResponseBody>(model1);
      }
    }
  }


  virtual ~GetPodLogsResponse() = default;
};
class GetRayDashboardRequest : public Darabonba::Model {
public:
  shared_ptr<bool> isShared{};
  shared_ptr<string> token{};

  GetRayDashboardRequest() {}

  explicit GetRayDashboardRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isShared) {
      res["isShared"] = boost::any(*isShared);
    }
    if (token) {
      res["token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("isShared") != m.end() && !m["isShared"].empty()) {
      isShared = make_shared<bool>(boost::any_cast<bool>(m["isShared"]));
    }
    if (m.find("token") != m.end() && !m["token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["token"]));
    }
  }


  virtual ~GetRayDashboardRequest() = default;
};
class GetRayDashboardResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> metricsEnabled{};
  shared_ptr<string> url{};

  GetRayDashboardResponseBody() {}

  explicit GetRayDashboardResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (metricsEnabled) {
      res["metricsEnabled"] = boost::any(*metricsEnabled);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("metricsEnabled") != m.end() && !m["metricsEnabled"].empty()) {
      metricsEnabled = make_shared<string>(boost::any_cast<string>(m["metricsEnabled"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~GetRayDashboardResponseBody() = default;
};
class GetRayDashboardResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetRayDashboardResponseBody> body{};

  GetRayDashboardResponse() {}

  explicit GetRayDashboardResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetRayDashboardResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRayDashboardResponseBody>(model1);
      }
    }
  }


  virtual ~GetRayDashboardResponse() = default;
};
class GetTensorboardRequest : public Darabonba::Model {
public:
  shared_ptr<string> jodId{};
  shared_ptr<string> token{};
  shared_ptr<string> workspaceId{};

  GetTensorboardRequest() {}

  explicit GetTensorboardRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jodId) {
      res["JodId"] = boost::any(*jodId);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JodId") != m.end() && !m["JodId"].empty()) {
      jodId = make_shared<string>(boost::any_cast<string>(m["JodId"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~GetTensorboardRequest() = default;
};
class GetTensorboardResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Tensorboard> body{};

  GetTensorboardResponse() {}

  explicit GetTensorboardResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        Tensorboard model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Tensorboard>(model1);
      }
    }
  }


  virtual ~GetTensorboardResponse() = default;
};
class GetTensorboardSharedUrlRequest : public Darabonba::Model {
public:
  shared_ptr<string> expireTimeSeconds{};

  GetTensorboardSharedUrlRequest() {}

  explicit GetTensorboardSharedUrlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (expireTimeSeconds) {
      res["ExpireTimeSeconds"] = boost::any(*expireTimeSeconds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExpireTimeSeconds") != m.end() && !m["ExpireTimeSeconds"].empty()) {
      expireTimeSeconds = make_shared<string>(boost::any_cast<string>(m["ExpireTimeSeconds"]));
    }
  }


  virtual ~GetTensorboardSharedUrlRequest() = default;
};
class GetTensorboardSharedUrlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> tensorboardSharedUrl{};

  GetTensorboardSharedUrlResponseBody() {}

  explicit GetTensorboardSharedUrlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tensorboardSharedUrl) {
      res["TensorboardSharedUrl"] = boost::any(*tensorboardSharedUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TensorboardSharedUrl") != m.end() && !m["TensorboardSharedUrl"].empty()) {
      tensorboardSharedUrl = make_shared<string>(boost::any_cast<string>(m["TensorboardSharedUrl"]));
    }
  }


  virtual ~GetTensorboardSharedUrlResponseBody() = default;
};
class GetTensorboardSharedUrlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTensorboardSharedUrlResponseBody> body{};

  GetTensorboardSharedUrlResponse() {}

  explicit GetTensorboardSharedUrlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetTensorboardSharedUrlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTensorboardSharedUrlResponseBody>(model1);
      }
    }
  }


  virtual ~GetTensorboardSharedUrlResponse() = default;
};
class GetTokenRequest : public Darabonba::Model {
public:
  shared_ptr<long> expireTime{};
  shared_ptr<string> targetId{};
  shared_ptr<string> targetType{};

  GetTokenRequest() {}

  explicit GetTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (targetId) {
      res["TargetId"] = boost::any(*targetId);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<long>(boost::any_cast<long>(m["ExpireTime"]));
    }
    if (m.find("TargetId") != m.end() && !m["TargetId"].empty()) {
      targetId = make_shared<string>(boost::any_cast<string>(m["TargetId"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
  }


  virtual ~GetTokenRequest() = default;
};
class GetTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> token{};

  GetTokenResponseBody() {}

  explicit GetTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
  }


  virtual ~GetTokenResponseBody() = default;
};
class GetTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTokenResponseBody> body{};

  GetTokenResponse() {}

  explicit GetTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTokenResponseBody>(model1);
      }
    }
  }


  virtual ~GetTokenResponse() = default;
};
class GetWebTerminalRequest : public Darabonba::Model {
public:
  shared_ptr<bool> isShared{};
  shared_ptr<string> podUid{};

  GetWebTerminalRequest() {}

  explicit GetWebTerminalRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isShared) {
      res["IsShared"] = boost::any(*isShared);
    }
    if (podUid) {
      res["PodUid"] = boost::any(*podUid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsShared") != m.end() && !m["IsShared"].empty()) {
      isShared = make_shared<bool>(boost::any_cast<bool>(m["IsShared"]));
    }
    if (m.find("PodUid") != m.end() && !m["PodUid"].empty()) {
      podUid = make_shared<string>(boost::any_cast<string>(m["PodUid"]));
    }
  }


  virtual ~GetWebTerminalRequest() = default;
};
class GetWebTerminalResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> webTerminalUrl{};

  GetWebTerminalResponseBody() {}

  explicit GetWebTerminalResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (webTerminalUrl) {
      res["WebTerminalUrl"] = boost::any(*webTerminalUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("WebTerminalUrl") != m.end() && !m["WebTerminalUrl"].empty()) {
      webTerminalUrl = make_shared<string>(boost::any_cast<string>(m["WebTerminalUrl"]));
    }
  }


  virtual ~GetWebTerminalResponseBody() = default;
};
class GetWebTerminalResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetWebTerminalResponseBody> body{};

  GetWebTerminalResponse() {}

  explicit GetWebTerminalResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetWebTerminalResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetWebTerminalResponseBody>(model1);
      }
    }
  }


  virtual ~GetWebTerminalResponse() = default;
};
class ListEcsSpecsRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceleratorType{};
  shared_ptr<string> instanceTypes{};
  shared_ptr<string> order{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> sortBy{};

  ListEcsSpecsRequest() {}

  explicit ListEcsSpecsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceleratorType) {
      res["AcceleratorType"] = boost::any(*acceleratorType);
    }
    if (instanceTypes) {
      res["InstanceTypes"] = boost::any(*instanceTypes);
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
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceleratorType") != m.end() && !m["AcceleratorType"].empty()) {
      acceleratorType = make_shared<string>(boost::any_cast<string>(m["AcceleratorType"]));
    }
    if (m.find("InstanceTypes") != m.end() && !m["InstanceTypes"].empty()) {
      instanceTypes = make_shared<string>(boost::any_cast<string>(m["InstanceTypes"]));
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
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
  }


  virtual ~ListEcsSpecsRequest() = default;
};
class ListEcsSpecsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<EcsSpec>> ecsSpecs{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListEcsSpecsResponseBody() {}

  explicit ListEcsSpecsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ecsSpecs) {
      vector<boost::any> temp1;
      for(auto item1:*ecsSpecs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EcsSpecs"] = boost::any(temp1);
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
    if (m.find("EcsSpecs") != m.end() && !m["EcsSpecs"].empty()) {
      if (typeid(vector<boost::any>) == m["EcsSpecs"].type()) {
        vector<EcsSpec> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EcsSpecs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            EcsSpec model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ecsSpecs = make_shared<vector<EcsSpec>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListEcsSpecsResponseBody() = default;
};
class ListEcsSpecsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListEcsSpecsResponseBody> body{};

  ListEcsSpecsResponse() {}

  explicit ListEcsSpecsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListEcsSpecsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListEcsSpecsResponseBody>(model1);
      }
    }
  }


  virtual ~ListEcsSpecsResponse() = default;
};
class ListJobSanityCheckResultsRequest : public Darabonba::Model {
public:
  shared_ptr<string> order{};

  ListJobSanityCheckResultsRequest() {}

  explicit ListJobSanityCheckResultsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (order) {
      res["Order"] = boost::any(*order);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
  }


  virtual ~ListJobSanityCheckResultsRequest() = default;
};
class ListJobSanityCheckResultsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestID{};
  shared_ptr<vector<vector<SanityCheckResultItem>>> sanityCheckResults{};
  shared_ptr<long> totalCount{};

  ListJobSanityCheckResultsResponseBody() {}

  explicit ListJobSanityCheckResultsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestID) {
      res["RequestID"] = boost::any(*requestID);
    }
    if (sanityCheckResults) {
      vector<boost::any> temp1;
      for(auto item1:*sanityCheckResults){
        vector<boost::any> temp2;
        for(auto item2:item1){
          temp2.push_back(boost::any(item2.toMap()));
        }
        temp1 = boost::any(temp2);
      }
      res["SanityCheckResults"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestID") != m.end() && !m["RequestID"].empty()) {
      requestID = make_shared<string>(boost::any_cast<string>(m["RequestID"]));
    }
    if (m.find("SanityCheckResults") != m.end() && !m["SanityCheckResults"].empty()) {
      if (typeid(vector<boost::any>) == m["SanityCheckResults"].type()) {
        vector<vector<SanityCheckResultItem>> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SanityCheckResults"])){
          if (typeid(vector<boost::any>) == item1.type()) {
            vector<SanityCheckResultItem> expect2;
            for(auto item2:boost::any_cast<vector<boost::any>>(item1)){
              if (typeid(map<string, boost::any>) == item2.type()) {
                SanityCheckResultItem model3;
                model3.fromMap(boost::any_cast<map<string, boost::any>>(item2));
                expect2.push_back(model3);
              }
            }
            expect1.push_back(expect2);
          }
        }
        sanityCheckResults = make_shared<vector<vector<SanityCheckResultItem>>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListJobSanityCheckResultsResponseBody() = default;
};
class ListJobSanityCheckResultsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListJobSanityCheckResultsResponseBody> body{};

  ListJobSanityCheckResultsResponse() {}

  explicit ListJobSanityCheckResultsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListJobSanityCheckResultsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListJobSanityCheckResultsResponseBody>(model1);
      }
    }
  }


  virtual ~ListJobSanityCheckResultsResponse() = default;
};
class ListJobsRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessibility{};
  shared_ptr<string> businessUserId{};
  shared_ptr<string> caller{};
  shared_ptr<string> displayName{};
  shared_ptr<string> endTime{};
  shared_ptr<bool> fromAllWorkspaces{};
  shared_ptr<string> jobId{};
  shared_ptr<string> jobIds{};
  shared_ptr<string> jobType{};
  shared_ptr<string> order{};
  shared_ptr<string> oversoldInfo{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> paymentType{};
  shared_ptr<string> pipelineId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceQuotaName{};
  shared_ptr<bool> showOwn{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};
  shared_ptr<map<string, string>> tags{};
  shared_ptr<string> userIdForFilter{};
  shared_ptr<string> username{};
  shared_ptr<string> workspaceId{};

  ListJobsRequest() {}

  explicit ListJobsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessibility) {
      res["Accessibility"] = boost::any(*accessibility);
    }
    if (businessUserId) {
      res["BusinessUserId"] = boost::any(*businessUserId);
    }
    if (caller) {
      res["Caller"] = boost::any(*caller);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (fromAllWorkspaces) {
      res["FromAllWorkspaces"] = boost::any(*fromAllWorkspaces);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (jobIds) {
      res["JobIds"] = boost::any(*jobIds);
    }
    if (jobType) {
      res["JobType"] = boost::any(*jobType);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (oversoldInfo) {
      res["OversoldInfo"] = boost::any(*oversoldInfo);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (paymentType) {
      res["PaymentType"] = boost::any(*paymentType);
    }
    if (pipelineId) {
      res["PipelineId"] = boost::any(*pipelineId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceQuotaName) {
      res["ResourceQuotaName"] = boost::any(*resourceQuotaName);
    }
    if (showOwn) {
      res["ShowOwn"] = boost::any(*showOwn);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (userIdForFilter) {
      res["UserIdForFilter"] = boost::any(*userIdForFilter);
    }
    if (username) {
      res["Username"] = boost::any(*username);
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
    if (m.find("BusinessUserId") != m.end() && !m["BusinessUserId"].empty()) {
      businessUserId = make_shared<string>(boost::any_cast<string>(m["BusinessUserId"]));
    }
    if (m.find("Caller") != m.end() && !m["Caller"].empty()) {
      caller = make_shared<string>(boost::any_cast<string>(m["Caller"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("FromAllWorkspaces") != m.end() && !m["FromAllWorkspaces"].empty()) {
      fromAllWorkspaces = make_shared<bool>(boost::any_cast<bool>(m["FromAllWorkspaces"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("JobIds") != m.end() && !m["JobIds"].empty()) {
      jobIds = make_shared<string>(boost::any_cast<string>(m["JobIds"]));
    }
    if (m.find("JobType") != m.end() && !m["JobType"].empty()) {
      jobType = make_shared<string>(boost::any_cast<string>(m["JobType"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("OversoldInfo") != m.end() && !m["OversoldInfo"].empty()) {
      oversoldInfo = make_shared<string>(boost::any_cast<string>(m["OversoldInfo"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PaymentType") != m.end() && !m["PaymentType"].empty()) {
      paymentType = make_shared<string>(boost::any_cast<string>(m["PaymentType"]));
    }
    if (m.find("PipelineId") != m.end() && !m["PipelineId"].empty()) {
      pipelineId = make_shared<string>(boost::any_cast<string>(m["PipelineId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceQuotaName") != m.end() && !m["ResourceQuotaName"].empty()) {
      resourceQuotaName = make_shared<string>(boost::any_cast<string>(m["ResourceQuotaName"]));
    }
    if (m.find("ShowOwn") != m.end() && !m["ShowOwn"].empty()) {
      showOwn = make_shared<bool>(boost::any_cast<bool>(m["ShowOwn"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Tags"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("UserIdForFilter") != m.end() && !m["UserIdForFilter"].empty()) {
      userIdForFilter = make_shared<string>(boost::any_cast<string>(m["UserIdForFilter"]));
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~ListJobsRequest() = default;
};
class ListJobsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessibility{};
  shared_ptr<string> businessUserId{};
  shared_ptr<string> caller{};
  shared_ptr<string> displayName{};
  shared_ptr<string> endTime{};
  shared_ptr<bool> fromAllWorkspaces{};
  shared_ptr<string> jobId{};
  shared_ptr<string> jobIds{};
  shared_ptr<string> jobType{};
  shared_ptr<string> order{};
  shared_ptr<string> oversoldInfo{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> paymentType{};
  shared_ptr<string> pipelineId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceQuotaName{};
  shared_ptr<bool> showOwn{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};
  shared_ptr<string> tagsShrink{};
  shared_ptr<string> userIdForFilter{};
  shared_ptr<string> username{};
  shared_ptr<string> workspaceId{};

  ListJobsShrinkRequest() {}

  explicit ListJobsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessibility) {
      res["Accessibility"] = boost::any(*accessibility);
    }
    if (businessUserId) {
      res["BusinessUserId"] = boost::any(*businessUserId);
    }
    if (caller) {
      res["Caller"] = boost::any(*caller);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (fromAllWorkspaces) {
      res["FromAllWorkspaces"] = boost::any(*fromAllWorkspaces);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (jobIds) {
      res["JobIds"] = boost::any(*jobIds);
    }
    if (jobType) {
      res["JobType"] = boost::any(*jobType);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (oversoldInfo) {
      res["OversoldInfo"] = boost::any(*oversoldInfo);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (paymentType) {
      res["PaymentType"] = boost::any(*paymentType);
    }
    if (pipelineId) {
      res["PipelineId"] = boost::any(*pipelineId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceQuotaName) {
      res["ResourceQuotaName"] = boost::any(*resourceQuotaName);
    }
    if (showOwn) {
      res["ShowOwn"] = boost::any(*showOwn);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tagsShrink) {
      res["Tags"] = boost::any(*tagsShrink);
    }
    if (userIdForFilter) {
      res["UserIdForFilter"] = boost::any(*userIdForFilter);
    }
    if (username) {
      res["Username"] = boost::any(*username);
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
    if (m.find("BusinessUserId") != m.end() && !m["BusinessUserId"].empty()) {
      businessUserId = make_shared<string>(boost::any_cast<string>(m["BusinessUserId"]));
    }
    if (m.find("Caller") != m.end() && !m["Caller"].empty()) {
      caller = make_shared<string>(boost::any_cast<string>(m["Caller"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("FromAllWorkspaces") != m.end() && !m["FromAllWorkspaces"].empty()) {
      fromAllWorkspaces = make_shared<bool>(boost::any_cast<bool>(m["FromAllWorkspaces"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("JobIds") != m.end() && !m["JobIds"].empty()) {
      jobIds = make_shared<string>(boost::any_cast<string>(m["JobIds"]));
    }
    if (m.find("JobType") != m.end() && !m["JobType"].empty()) {
      jobType = make_shared<string>(boost::any_cast<string>(m["JobType"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("OversoldInfo") != m.end() && !m["OversoldInfo"].empty()) {
      oversoldInfo = make_shared<string>(boost::any_cast<string>(m["OversoldInfo"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PaymentType") != m.end() && !m["PaymentType"].empty()) {
      paymentType = make_shared<string>(boost::any_cast<string>(m["PaymentType"]));
    }
    if (m.find("PipelineId") != m.end() && !m["PipelineId"].empty()) {
      pipelineId = make_shared<string>(boost::any_cast<string>(m["PipelineId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceQuotaName") != m.end() && !m["ResourceQuotaName"].empty()) {
      resourceQuotaName = make_shared<string>(boost::any_cast<string>(m["ResourceQuotaName"]));
    }
    if (m.find("ShowOwn") != m.end() && !m["ShowOwn"].empty()) {
      showOwn = make_shared<bool>(boost::any_cast<bool>(m["ShowOwn"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tagsShrink = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("UserIdForFilter") != m.end() && !m["UserIdForFilter"].empty()) {
      userIdForFilter = make_shared<string>(boost::any_cast<string>(m["UserIdForFilter"]));
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~ListJobsShrinkRequest() = default;
};
class ListJobsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<JobItem>> jobs{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListJobsResponseBody() {}

  explicit ListJobsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobs) {
      vector<boost::any> temp1;
      for(auto item1:*jobs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Jobs"] = boost::any(temp1);
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
    if (m.find("Jobs") != m.end() && !m["Jobs"].empty()) {
      if (typeid(vector<boost::any>) == m["Jobs"].type()) {
        vector<JobItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Jobs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            JobItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        jobs = make_shared<vector<JobItem>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListJobsResponseBody() = default;
};
class ListJobsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListJobsResponseBody> body{};

  ListJobsResponse() {}

  explicit ListJobsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListJobsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListJobsResponseBody>(model1);
      }
    }
  }


  virtual ~ListJobsResponse() = default;
};
class ListTensorboardsRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessibility{};
  shared_ptr<string> displayName{};
  shared_ptr<string> endTime{};
  shared_ptr<string> jobId{};
  shared_ptr<string> order{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> paymentType{};
  shared_ptr<string> quotaId{};
  shared_ptr<bool> showOwn{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> sourceId{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};
  shared_ptr<string> tensorboardId{};
  shared_ptr<string> userId{};
  shared_ptr<string> username{};
  shared_ptr<bool> verbose{};
  shared_ptr<string> workspaceId{};

  ListTensorboardsRequest() {}

  explicit ListTensorboardsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessibility) {
      res["Accessibility"] = boost::any(*accessibility);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
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
    if (paymentType) {
      res["PaymentType"] = boost::any(*paymentType);
    }
    if (quotaId) {
      res["QuotaId"] = boost::any(*quotaId);
    }
    if (showOwn) {
      res["ShowOwn"] = boost::any(*showOwn);
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
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tensorboardId) {
      res["TensorboardId"] = boost::any(*tensorboardId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (username) {
      res["Username"] = boost::any(*username);
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
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
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
    if (m.find("PaymentType") != m.end() && !m["PaymentType"].empty()) {
      paymentType = make_shared<string>(boost::any_cast<string>(m["PaymentType"]));
    }
    if (m.find("QuotaId") != m.end() && !m["QuotaId"].empty()) {
      quotaId = make_shared<string>(boost::any_cast<string>(m["QuotaId"]));
    }
    if (m.find("ShowOwn") != m.end() && !m["ShowOwn"].empty()) {
      showOwn = make_shared<bool>(boost::any_cast<bool>(m["ShowOwn"]));
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
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TensorboardId") != m.end() && !m["TensorboardId"].empty()) {
      tensorboardId = make_shared<string>(boost::any_cast<string>(m["TensorboardId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
    if (m.find("Verbose") != m.end() && !m["Verbose"].empty()) {
      verbose = make_shared<bool>(boost::any_cast<bool>(m["Verbose"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~ListTensorboardsRequest() = default;
};
class ListTensorboardsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<Tensorboard>> tensorboards{};
  shared_ptr<long> totalCount{};

  ListTensorboardsResponseBody() {}

  explicit ListTensorboardsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tensorboards) {
      vector<boost::any> temp1;
      for(auto item1:*tensorboards){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tensorboards"] = boost::any(temp1);
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
    if (m.find("Tensorboards") != m.end() && !m["Tensorboards"].empty()) {
      if (typeid(vector<boost::any>) == m["Tensorboards"].type()) {
        vector<Tensorboard> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tensorboards"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Tensorboard model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tensorboards = make_shared<vector<Tensorboard>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListTensorboardsResponseBody() = default;
};
class ListTensorboardsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTensorboardsResponseBody> body{};

  ListTensorboardsResponse() {}

  explicit ListTensorboardsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListTensorboardsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTensorboardsResponseBody>(model1);
      }
    }
  }


  virtual ~ListTensorboardsResponse() = default;
};
class StartTensorboardRequest : public Darabonba::Model {
public:
  shared_ptr<string> workspaceId{};

  StartTensorboardRequest() {}

  explicit StartTensorboardRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StartTensorboardRequest() = default;
};
class StartTensorboardResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> tensorboardId{};

  StartTensorboardResponseBody() {}

  explicit StartTensorboardResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tensorboardId) {
      res["TensorboardId"] = boost::any(*tensorboardId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TensorboardId") != m.end() && !m["TensorboardId"].empty()) {
      tensorboardId = make_shared<string>(boost::any_cast<string>(m["TensorboardId"]));
    }
  }


  virtual ~StartTensorboardResponseBody() = default;
};
class StartTensorboardResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StartTensorboardResponseBody> body{};

  StartTensorboardResponse() {}

  explicit StartTensorboardResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        StartTensorboardResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartTensorboardResponseBody>(model1);
      }
    }
  }


  virtual ~StartTensorboardResponse() = default;
};
class StopJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};

  StopJobResponseBody() {}

  explicit StopJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~StopJobResponseBody() = default;
};
class StopJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopJobResponseBody> body{};

  StopJobResponse() {}

  explicit StopJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        StopJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopJobResponseBody>(model1);
      }
    }
  }


  virtual ~StopJobResponse() = default;
};
class StopTensorboardRequest : public Darabonba::Model {
public:
  shared_ptr<string> workspaceId{};

  StopTensorboardRequest() {}

  explicit StopTensorboardRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StopTensorboardRequest() = default;
};
class StopTensorboardResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> tensorboardId{};

  StopTensorboardResponseBody() {}

  explicit StopTensorboardResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tensorboardId) {
      res["TensorboardId"] = boost::any(*tensorboardId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TensorboardId") != m.end() && !m["TensorboardId"].empty()) {
      tensorboardId = make_shared<string>(boost::any_cast<string>(m["TensorboardId"]));
    }
  }


  virtual ~StopTensorboardResponseBody() = default;
};
class StopTensorboardResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopTensorboardResponseBody> body{};

  StopTensorboardResponse() {}

  explicit StopTensorboardResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        StopTensorboardResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopTensorboardResponseBody>(model1);
      }
    }
  }


  virtual ~StopTensorboardResponse() = default;
};
class UpdateJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessibility{};
  shared_ptr<long> priority{};

  UpdateJobRequest() {}

  explicit UpdateJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessibility) {
      res["Accessibility"] = boost::any(*accessibility);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accessibility") != m.end() && !m["Accessibility"].empty()) {
      accessibility = make_shared<string>(boost::any_cast<string>(m["Accessibility"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
  }


  virtual ~UpdateJobRequest() = default;
};
class UpdateJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};

  UpdateJobResponseBody() {}

  explicit UpdateJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateJobResponseBody() = default;
};
class UpdateJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateJobResponseBody> body{};

  UpdateJobResponse() {}

  explicit UpdateJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateJobResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateJobResponse() = default;
};
class UpdateTensorboardRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessibility{};
  shared_ptr<long> maxRunningTimeMinutes{};
  shared_ptr<string> priority{};
  shared_ptr<string> workspaceId{};

  UpdateTensorboardRequest() {}

  explicit UpdateTensorboardRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessibility) {
      res["Accessibility"] = boost::any(*accessibility);
    }
    if (maxRunningTimeMinutes) {
      res["MaxRunningTimeMinutes"] = boost::any(*maxRunningTimeMinutes);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
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
    if (m.find("MaxRunningTimeMinutes") != m.end() && !m["MaxRunningTimeMinutes"].empty()) {
      maxRunningTimeMinutes = make_shared<long>(boost::any_cast<long>(m["MaxRunningTimeMinutes"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<string>(boost::any_cast<string>(m["Priority"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~UpdateTensorboardRequest() = default;
};
class UpdateTensorboardResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> tensorboardId{};

  UpdateTensorboardResponseBody() {}

  explicit UpdateTensorboardResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tensorboardId) {
      res["TensorboardId"] = boost::any(*tensorboardId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TensorboardId") != m.end() && !m["TensorboardId"].empty()) {
      tensorboardId = make_shared<string>(boost::any_cast<string>(m["TensorboardId"]));
    }
  }


  virtual ~UpdateTensorboardResponseBody() = default;
};
class UpdateTensorboardResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateTensorboardResponseBody> body{};

  UpdateTensorboardResponse() {}

  explicit UpdateTensorboardResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateTensorboardResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateTensorboardResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateTensorboardResponse() = default;
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
  CreateJobResponse createJobWithOptions(shared_ptr<CreateJobRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateJobResponse createJob(shared_ptr<CreateJobRequest> request);
  CreateTensorboardResponse createTensorboardWithOptions(shared_ptr<CreateTensorboardRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTensorboardResponse createTensorboard(shared_ptr<CreateTensorboardRequest> request);
  DeleteJobResponse deleteJobWithOptions(shared_ptr<string> JobId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteJobResponse deleteJob(shared_ptr<string> JobId);
  DeleteTensorboardResponse deleteTensorboardWithOptions(shared_ptr<string> TensorboardId,
                                                         shared_ptr<DeleteTensorboardRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteTensorboardResponse deleteTensorboard(shared_ptr<string> TensorboardId, shared_ptr<DeleteTensorboardRequest> request);
  GetJobResponse getJobWithOptions(shared_ptr<string> JobId,
                                   shared_ptr<GetJobRequest> request,
                                   shared_ptr<map<string, string>> headers,
                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetJobResponse getJob(shared_ptr<string> JobId, shared_ptr<GetJobRequest> request);
  GetJobEventsResponse getJobEventsWithOptions(shared_ptr<string> JobId,
                                               shared_ptr<GetJobEventsRequest> request,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetJobEventsResponse getJobEvents(shared_ptr<string> JobId, shared_ptr<GetJobEventsRequest> request);
  GetJobMetricsResponse getJobMetricsWithOptions(shared_ptr<string> JobId,
                                                 shared_ptr<GetJobMetricsRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetJobMetricsResponse getJobMetrics(shared_ptr<string> JobId, shared_ptr<GetJobMetricsRequest> request);
  GetJobSanityCheckResultResponse getJobSanityCheckResultWithOptions(shared_ptr<string> JobId,
                                                                     shared_ptr<GetJobSanityCheckResultRequest> request,
                                                                     shared_ptr<map<string, string>> headers,
                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetJobSanityCheckResultResponse getJobSanityCheckResult(shared_ptr<string> JobId, shared_ptr<GetJobSanityCheckResultRequest> request);
  GetPodEventsResponse getPodEventsWithOptions(shared_ptr<string> JobId,
                                               shared_ptr<string> PodId,
                                               shared_ptr<GetPodEventsRequest> request,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPodEventsResponse getPodEvents(shared_ptr<string> JobId, shared_ptr<string> PodId, shared_ptr<GetPodEventsRequest> request);
  GetPodLogsResponse getPodLogsWithOptions(shared_ptr<string> JobId,
                                           shared_ptr<string> PodId,
                                           shared_ptr<GetPodLogsRequest> request,
                                           shared_ptr<map<string, string>> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPodLogsResponse getPodLogs(shared_ptr<string> JobId, shared_ptr<string> PodId, shared_ptr<GetPodLogsRequest> request);
  GetRayDashboardResponse getRayDashboardWithOptions(shared_ptr<string> jobId,
                                                     shared_ptr<GetRayDashboardRequest> request,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRayDashboardResponse getRayDashboard(shared_ptr<string> jobId, shared_ptr<GetRayDashboardRequest> request);
  GetTensorboardResponse getTensorboardWithOptions(shared_ptr<string> TensorboardId,
                                                   shared_ptr<GetTensorboardRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTensorboardResponse getTensorboard(shared_ptr<string> TensorboardId, shared_ptr<GetTensorboardRequest> request);
  GetTensorboardSharedUrlResponse getTensorboardSharedUrlWithOptions(shared_ptr<string> TensorboardId,
                                                                     shared_ptr<GetTensorboardSharedUrlRequest> request,
                                                                     shared_ptr<map<string, string>> headers,
                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTensorboardSharedUrlResponse getTensorboardSharedUrl(shared_ptr<string> TensorboardId, shared_ptr<GetTensorboardSharedUrlRequest> request);
  GetTokenResponse getTokenWithOptions(shared_ptr<GetTokenRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTokenResponse getToken(shared_ptr<GetTokenRequest> request);
  GetWebTerminalResponse getWebTerminalWithOptions(shared_ptr<string> JobId,
                                                   shared_ptr<string> PodId,
                                                   shared_ptr<GetWebTerminalRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetWebTerminalResponse getWebTerminal(shared_ptr<string> JobId, shared_ptr<string> PodId, shared_ptr<GetWebTerminalRequest> request);
  ListEcsSpecsResponse listEcsSpecsWithOptions(shared_ptr<ListEcsSpecsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListEcsSpecsResponse listEcsSpecs(shared_ptr<ListEcsSpecsRequest> request);
  ListJobSanityCheckResultsResponse listJobSanityCheckResultsWithOptions(shared_ptr<string> JobId,
                                                                         shared_ptr<ListJobSanityCheckResultsRequest> request,
                                                                         shared_ptr<map<string, string>> headers,
                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListJobSanityCheckResultsResponse listJobSanityCheckResults(shared_ptr<string> JobId, shared_ptr<ListJobSanityCheckResultsRequest> request);
  ListJobsResponse listJobsWithOptions(shared_ptr<ListJobsRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListJobsResponse listJobs(shared_ptr<ListJobsRequest> request);
  ListTensorboardsResponse listTensorboardsWithOptions(shared_ptr<ListTensorboardsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTensorboardsResponse listTensorboards(shared_ptr<ListTensorboardsRequest> request);
  StartTensorboardResponse startTensorboardWithOptions(shared_ptr<string> TensorboardId,
                                                       shared_ptr<StartTensorboardRequest> request,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartTensorboardResponse startTensorboard(shared_ptr<string> TensorboardId, shared_ptr<StartTensorboardRequest> request);
  StopJobResponse stopJobWithOptions(shared_ptr<string> JobId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopJobResponse stopJob(shared_ptr<string> JobId);
  StopTensorboardResponse stopTensorboardWithOptions(shared_ptr<string> TensorboardId,
                                                     shared_ptr<StopTensorboardRequest> request,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopTensorboardResponse stopTensorboard(shared_ptr<string> TensorboardId, shared_ptr<StopTensorboardRequest> request);
  UpdateJobResponse updateJobWithOptions(shared_ptr<string> JobId,
                                         shared_ptr<UpdateJobRequest> request,
                                         shared_ptr<map<string, string>> headers,
                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateJobResponse updateJob(shared_ptr<string> JobId, shared_ptr<UpdateJobRequest> request);
  UpdateTensorboardResponse updateTensorboardWithOptions(shared_ptr<string> TensorboardId,
                                                         shared_ptr<UpdateTensorboardRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateTensorboardResponse updateTensorboard(shared_ptr<string> TensorboardId, shared_ptr<UpdateTensorboardRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Pai-dlc20201203

#endif
