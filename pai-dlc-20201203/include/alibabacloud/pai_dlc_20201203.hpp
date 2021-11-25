// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_PAI-DLC20201203_H_
#define ALIBABACLOUD_PAI-DLC20201203_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Pai-dlc20201203 {
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
class ContainerSpec : public Darabonba::Model {
public:
  shared_ptr<vector<string>> args{};
  shared_ptr<vector<string>> command{};
  shared_ptr<vector<EnvVar>> env{};
  shared_ptr<string> image{};
  shared_ptr<string> name{};
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
    if (m.find("WorkingDir") != m.end() && !m["WorkingDir"].empty()) {
      workingDir = make_shared<string>(boost::any_cast<string>(m["WorkingDir"]));
    }
  }


  virtual ~ContainerSpec() = default;
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
class EcsSpec : public Darabonba::Model {
public:
  shared_ptr<long> cpu{};
  shared_ptr<long> gpu{};
  shared_ptr<string> gpuType{};
  shared_ptr<string> instanceType{};
  shared_ptr<long> memory{};

  EcsSpec() {}

  explicit EcsSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (gpu) {
      res["Gpu"] = boost::any(*gpu);
    }
    if (gpuType) {
      res["GpuType"] = boost::any(*gpuType);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<long>(boost::any_cast<long>(m["Cpu"]));
    }
    if (m.find("Gpu") != m.end() && !m["Gpu"].empty()) {
      gpu = make_shared<long>(boost::any_cast<long>(m["Gpu"]));
    }
    if (m.find("GpuType") != m.end() && !m["GpuType"].empty()) {
      gpuType = make_shared<string>(boost::any_cast<string>(m["GpuType"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<long>(boost::any_cast<long>(m["Memory"]));
    }
  }


  virtual ~EcsSpec() = default;
};
class ExtraPodSpec : public Darabonba::Model {
public:
  shared_ptr<vector<ContainerSpec>> initContainers{};
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
class ImageItem : public Darabonba::Model {
public:
  shared_ptr<string> acceleratorType{};
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
class JobElasticSpec : public Darabonba::Model {
public:
  shared_ptr<string> AIMasterType{};
  shared_ptr<bool> enableElasticTraining{};
  shared_ptr<long> maxParallelism{};
  shared_ptr<long> minParallelism{};

  JobElasticSpec() {}

  explicit JobElasticSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (AIMasterType) {
      res["AIMasterType"] = boost::any(*AIMasterType);
    }
    if (enableElasticTraining) {
      res["EnableElasticTraining"] = boost::any(*enableElasticTraining);
    }
    if (maxParallelism) {
      res["MaxParallelism"] = boost::any(*maxParallelism);
    }
    if (minParallelism) {
      res["MinParallelism"] = boost::any(*minParallelism);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AIMasterType") != m.end() && !m["AIMasterType"].empty()) {
      AIMasterType = make_shared<string>(boost::any_cast<string>(m["AIMasterType"]));
    }
    if (m.find("EnableElasticTraining") != m.end() && !m["EnableElasticTraining"].empty()) {
      enableElasticTraining = make_shared<bool>(boost::any_cast<bool>(m["EnableElasticTraining"]));
    }
    if (m.find("MaxParallelism") != m.end() && !m["MaxParallelism"].empty()) {
      maxParallelism = make_shared<long>(boost::any_cast<long>(m["MaxParallelism"]));
    }
    if (m.find("MinParallelism") != m.end() && !m["MinParallelism"].empty()) {
      minParallelism = make_shared<long>(boost::any_cast<long>(m["MinParallelism"]));
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
class JobSpec : public Darabonba::Model {
public:
  shared_ptr<string> ecsSpec{};
  shared_ptr<ExtraPodSpec> extraPodSpec{};
  shared_ptr<string> image{};
  shared_ptr<long> podCount{};
  shared_ptr<ResourceConfig> resourceConfig{};
  shared_ptr<string> type{};

  JobSpec() {}

  explicit JobSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ecsSpec) {
      res["EcsSpec"] = boost::any(*ecsSpec);
    }
    if (extraPodSpec) {
      res["ExtraPodSpec"] = extraPodSpec ? boost::any(extraPodSpec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (image) {
      res["Image"] = boost::any(*image);
    }
    if (podCount) {
      res["PodCount"] = boost::any(*podCount);
    }
    if (resourceConfig) {
      res["ResourceConfig"] = resourceConfig ? boost::any(resourceConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~JobSpec() = default;
};
class JobSettings : public Darabonba::Model {
public:
  shared_ptr<string> businessUserId{};
  shared_ptr<string> caller{};
  shared_ptr<string> pipelineId{};
  shared_ptr<map<string, string>> tags{};

  JobSettings() {}

  explicit JobSettings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessUserId) {
      res["BusinessUserId"] = boost::any(*businessUserId);
    }
    if (caller) {
      res["Caller"] = boost::any(*caller);
    }
    if (pipelineId) {
      res["PipelineId"] = boost::any(*pipelineId);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BusinessUserId") != m.end() && !m["BusinessUserId"].empty()) {
      businessUserId = make_shared<string>(boost::any_cast<string>(m["BusinessUserId"]));
    }
    if (m.find("Caller") != m.end() && !m["Caller"].empty()) {
      caller = make_shared<string>(boost::any_cast<string>(m["Caller"]));
    }
    if (m.find("PipelineId") != m.end() && !m["PipelineId"].empty()) {
      pipelineId = make_shared<string>(boost::any_cast<string>(m["PipelineId"]));
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
class JobItem : public Darabonba::Model {
public:
  shared_ptr<JobItemCodeSource> codeSource{};
  shared_ptr<vector<JobItemDataSources>> dataSources{};
  shared_ptr<string> displayName{};
  shared_ptr<long> duration{};
  shared_ptr<map<string, string>> envs{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtFinishTime{};
  shared_ptr<string> jobId{};
  shared_ptr<vector<JobSpec>> jobSpecs{};
  shared_ptr<string> jobType{};
  shared_ptr<string> reasonCode{};
  shared_ptr<string> reasonMessage{};
  shared_ptr<string> resourceId{};
  shared_ptr<JobSettings> settings{};
  shared_ptr<string> status{};
  shared_ptr<string> thirdpartyLibDir{};
  shared_ptr<vector<string>> thirdpartyLibs{};
  shared_ptr<string> userCommand{};
  shared_ptr<string> userId{};
  shared_ptr<string> workspaceId{};
  shared_ptr<string> workspaceName{};

  JobItem() {}

  explicit JobItem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (codeSource) {
      res["CodeSource"] = codeSource ? boost::any(codeSource->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (envs) {
      res["Envs"] = boost::any(*envs);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtFinishTime) {
      res["GmtFinishTime"] = boost::any(*gmtFinishTime);
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
    if (reasonCode) {
      res["ReasonCode"] = boost::any(*reasonCode);
    }
    if (reasonMessage) {
      res["ReasonMessage"] = boost::any(*reasonMessage);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (settings) {
      res["Settings"] = settings ? boost::any(settings->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["Status"] = boost::any(*status);
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
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    if (workspaceName) {
      res["WorkspaceName"] = boost::any(*workspaceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CodeSource") != m.end() && !m["CodeSource"].empty()) {
      if (typeid(map<string, boost::any>) == m["CodeSource"].type()) {
        JobItemCodeSource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CodeSource"]));
        codeSource = make_shared<JobItemCodeSource>(model1);
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
    if (m.find("GmtFinishTime") != m.end() && !m["GmtFinishTime"].empty()) {
      gmtFinishTime = make_shared<string>(boost::any_cast<string>(m["GmtFinishTime"]));
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
    if (m.find("ReasonCode") != m.end() && !m["ReasonCode"].empty()) {
      reasonCode = make_shared<string>(boost::any_cast<string>(m["ReasonCode"]));
    }
    if (m.find("ReasonMessage") != m.end() && !m["ReasonMessage"].empty()) {
      reasonMessage = make_shared<string>(boost::any_cast<string>(m["ReasonMessage"]));
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
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
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
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
    if (m.find("WorkspaceName") != m.end() && !m["WorkspaceName"].empty()) {
      workspaceName = make_shared<string>(boost::any_cast<string>(m["WorkspaceName"]));
    }
  }


  virtual ~JobItem() = default;
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
  shared_ptr<bool> isExclusiveQuota{};
  shared_ptr<string> quotaId{};
  shared_ptr<string> quotaName{};
  shared_ptr<string> quotaType{};
  shared_ptr<QuotaDetail> totalQuota{};
  shared_ptr<QuotaDetail> usedQuota{};

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
    if (isExclusiveQuota) {
      res["IsExclusiveQuota"] = boost::any(*isExclusiveQuota);
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
    if (usedQuota) {
      res["UsedQuota"] = usedQuota ? boost::any(usedQuota->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("IsExclusiveQuota") != m.end() && !m["IsExclusiveQuota"].empty()) {
      isExclusiveQuota = make_shared<bool>(boost::any_cast<bool>(m["IsExclusiveQuota"]));
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
    if (m.find("UsedQuota") != m.end() && !m["UsedQuota"].empty()) {
      if (typeid(map<string, boost::any>) == m["UsedQuota"].type()) {
        QuotaDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UsedQuota"]));
        usedQuota = make_shared<QuotaDetail>(model1);
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
class Tensorboard : public Darabonba::Model {
public:
  shared_ptr<string> dataSourceId{};
  shared_ptr<string> displayName{};
  shared_ptr<string> duration{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifyTime{};
  shared_ptr<string> jobId{};
  shared_ptr<string> reasonCode{};
  shared_ptr<string> reasonMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<string> summaryPath{};
  shared_ptr<string> tensorboardId{};
  shared_ptr<string> tensorboardUrl{};
  shared_ptr<string> userId{};

  Tensorboard() {}

  explicit Tensorboard(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSourceId) {
      res["DataSourceId"] = boost::any(*dataSourceId);
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
    if (gmtModifyTime) {
      res["GmtModifyTime"] = boost::any(*gmtModifyTime);
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (summaryPath) {
      res["SummaryPath"] = boost::any(*summaryPath);
    }
    if (tensorboardId) {
      res["TensorboardId"] = boost::any(*tensorboardId);
    }
    if (tensorboardUrl) {
      res["TensorboardUrl"] = boost::any(*tensorboardUrl);
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
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<string>(boost::any_cast<string>(m["Duration"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifyTime") != m.end() && !m["GmtModifyTime"].empty()) {
      gmtModifyTime = make_shared<string>(boost::any_cast<string>(m["GmtModifyTime"]));
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SummaryPath") != m.end() && !m["SummaryPath"].empty()) {
      summaryPath = make_shared<string>(boost::any_cast<string>(m["SummaryPath"]));
    }
    if (m.find("TensorboardId") != m.end() && !m["TensorboardId"].empty()) {
      tensorboardId = make_shared<string>(boost::any_cast<string>(m["TensorboardId"]));
    }
    if (m.find("TensorboardUrl") != m.end() && !m["TensorboardUrl"].empty()) {
      tensorboardUrl = make_shared<string>(boost::any_cast<string>(m["TensorboardUrl"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
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
class BatchGetJobsStatisticsRequest : public Darabonba::Model {
public:
  shared_ptr<string> workspaceIds{};

  BatchGetJobsStatisticsRequest() {}

  explicit BatchGetJobsStatisticsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (workspaceIds) {
      res["WorkspaceIds"] = boost::any(*workspaceIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("WorkspaceIds") != m.end() && !m["WorkspaceIds"].empty()) {
      workspaceIds = make_shared<string>(boost::any_cast<string>(m["WorkspaceIds"]));
    }
  }


  virtual ~BatchGetJobsStatisticsRequest() = default;
};
class BatchGetJobsStatisticsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> statistics{};

  BatchGetJobsStatisticsResponseBody() {}

  explicit BatchGetJobsStatisticsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (statistics) {
      res["Statistics"] = boost::any(*statistics);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Statistics") != m.end() && !m["Statistics"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Statistics"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      statistics = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~BatchGetJobsStatisticsResponseBody() = default;
};
class BatchGetJobsStatisticsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<BatchGetJobsStatisticsResponseBody> body{};

  BatchGetJobsStatisticsResponse() {}

  explicit BatchGetJobsStatisticsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        BatchGetJobsStatisticsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchGetJobsStatisticsResponseBody>(model1);
      }
    }
  }


  virtual ~BatchGetJobsStatisticsResponse() = default;
};
class CreateCodeSourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> codeBranch{};
  shared_ptr<string> codeRepo{};
  shared_ptr<string> codeRepoAccessToken{};
  shared_ptr<string> codeRepoUserName{};
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<string> mountPath{};

  CreateCodeSourceRequest() {}

  explicit CreateCodeSourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (codeBranch) {
      res["CodeBranch"] = boost::any(*codeBranch);
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
  shared_ptr<CreateCodeSourceResponseBody> body{};

  CreateCodeSourceResponse() {}

  explicit CreateCodeSourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class CreateDataSourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataSourceType{};
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<string> endpoint{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> mountPath{};
  shared_ptr<string> options{};
  shared_ptr<string> path{};

  CreateDataSourceRequest() {}

  explicit CreateDataSourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (mountPath) {
      res["MountPath"] = boost::any(*mountPath);
    }
    if (options) {
      res["Options"] = boost::any(*options);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
    if (m.find("MountPath") != m.end() && !m["MountPath"].empty()) {
      mountPath = make_shared<string>(boost::any_cast<string>(m["MountPath"]));
    }
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      options = make_shared<string>(boost::any_cast<string>(m["Options"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
  }


  virtual ~CreateDataSourceRequest() = default;
};
class CreateDataSourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> dataSourceId{};
  shared_ptr<string> requestId{};

  CreateDataSourceResponseBody() {}

  explicit CreateDataSourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSourceId) {
      res["DataSourceId"] = boost::any(*dataSourceId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataSourceId") != m.end() && !m["DataSourceId"].empty()) {
      dataSourceId = make_shared<string>(boost::any_cast<string>(m["DataSourceId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateDataSourceResponseBody() = default;
};
class CreateDataSourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateDataSourceResponseBody> body{};

  CreateDataSourceResponse() {}

  explicit CreateDataSourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateDataSourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDataSourceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDataSourceResponse() = default;
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
  shared_ptr<string> mountPath{};

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


  virtual ~CreateJobRequestDataSources() = default;
};
class CreateJobRequestUserVpc : public Darabonba::Model {
public:
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
  shared_ptr<CreateJobRequestCodeSource> codeSource{};
  shared_ptr<vector<CreateJobRequestDataSources>> dataSources{};
  shared_ptr<string> displayName{};
  shared_ptr<JobElasticSpec> elasticSpec{};
  shared_ptr<map<string, string>> envs{};
  shared_ptr<long> jobMaxRunningTimeMinutes{};
  shared_ptr<vector<JobSpec>> jobSpecs{};
  shared_ptr<string> jobType{};
  shared_ptr<long> priority{};
  shared_ptr<string> resourceId{};
  shared_ptr<JobSettings> settings{};
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
    if (codeSource) {
      res["CodeSource"] = codeSource ? boost::any(codeSource->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (settings) {
      res["Settings"] = settings ? boost::any(settings->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("CodeSource") != m.end() && !m["CodeSource"].empty()) {
      if (typeid(map<string, boost::any>) == m["CodeSource"].type()) {
        CreateJobRequestCodeSource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CodeSource"]));
        codeSource = make_shared<CreateJobRequestCodeSource>(model1);
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
  shared_ptr<CreateJobResponseBody> body{};

  CreateJobResponse() {}

  explicit CreateJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
  shared_ptr<string> workspaceId{};
  shared_ptr<string> dataSourceId{};
  shared_ptr<vector<DataSourceItem>> dataSources{};
  shared_ptr<string> displayName{};
  shared_ptr<string> jobId{};
  shared_ptr<long> maxRunningTimeMinutes{};
  shared_ptr<string> summaryPath{};

  CreateTensorboardRequest() {}

  explicit CreateTensorboardRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    if (dataSourceId) {
      res["DataSourceId"] = boost::any(*dataSourceId);
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
    if (summaryPath) {
      res["SummaryPath"] = boost::any(*summaryPath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
    if (m.find("DataSourceId") != m.end() && !m["DataSourceId"].empty()) {
      dataSourceId = make_shared<string>(boost::any_cast<string>(m["DataSourceId"]));
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
    if (m.find("SummaryPath") != m.end() && !m["SummaryPath"].empty()) {
      summaryPath = make_shared<string>(boost::any_cast<string>(m["SummaryPath"]));
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
  shared_ptr<CreateTensorboardResponseBody> body{};

  CreateTensorboardResponse() {}

  explicit CreateTensorboardResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
  shared_ptr<DeleteCodeSourceResponseBody> body{};

  DeleteCodeSourceResponse() {}

  explicit DeleteCodeSourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class DeleteDataSourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> dataSourceId{};
  shared_ptr<string> requestId{};

  DeleteDataSourceResponseBody() {}

  explicit DeleteDataSourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSourceId) {
      res["DataSourceId"] = boost::any(*dataSourceId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataSourceId") != m.end() && !m["DataSourceId"].empty()) {
      dataSourceId = make_shared<string>(boost::any_cast<string>(m["DataSourceId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteDataSourceResponseBody() = default;
};
class DeleteDataSourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteDataSourceResponseBody> body{};

  DeleteDataSourceResponse() {}

  explicit DeleteDataSourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteDataSourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDataSourceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDataSourceResponse() = default;
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
  shared_ptr<DeleteJobResponseBody> body{};

  DeleteJobResponse() {}

  explicit DeleteJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
  shared_ptr<DeleteTensorboardResponseBody> body{};

  DeleteTensorboardResponse() {}

  explicit DeleteTensorboardResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class GetAuthorizationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> authorizationFailedCode{};
  shared_ptr<string> authorizationFailedMessage{};
  shared_ptr<bool> authorized{};
  shared_ptr<string> requestId{};

  GetAuthorizationResponseBody() {}

  explicit GetAuthorizationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorizationFailedCode) {
      res["AuthorizationFailedCode"] = boost::any(*authorizationFailedCode);
    }
    if (authorizationFailedMessage) {
      res["AuthorizationFailedMessage"] = boost::any(*authorizationFailedMessage);
    }
    if (authorized) {
      res["Authorized"] = boost::any(*authorized);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthorizationFailedCode") != m.end() && !m["AuthorizationFailedCode"].empty()) {
      authorizationFailedCode = make_shared<string>(boost::any_cast<string>(m["AuthorizationFailedCode"]));
    }
    if (m.find("AuthorizationFailedMessage") != m.end() && !m["AuthorizationFailedMessage"].empty()) {
      authorizationFailedMessage = make_shared<string>(boost::any_cast<string>(m["AuthorizationFailedMessage"]));
    }
    if (m.find("Authorized") != m.end() && !m["Authorized"].empty()) {
      authorized = make_shared<bool>(boost::any_cast<bool>(m["Authorized"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetAuthorizationResponseBody() = default;
};
class GetAuthorizationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetAuthorizationResponseBody> body{};

  GetAuthorizationResponse() {}

  explicit GetAuthorizationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetAuthorizationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAuthorizationResponseBody>(model1);
      }
    }
  }


  virtual ~GetAuthorizationResponse() = default;
};
class GetCodeSourceResponseBody : public Darabonba::Model {
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
  shared_ptr<string> mountPath{};
  shared_ptr<string> requestId{};
  shared_ptr<string> userId{};

  GetCodeSourceResponseBody() {}

  explicit GetCodeSourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (mountPath) {
      res["MountPath"] = boost::any(*mountPath);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("MountPath") != m.end() && !m["MountPath"].empty()) {
      mountPath = make_shared<string>(boost::any_cast<string>(m["MountPath"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~GetCodeSourceResponseBody() = default;
};
class GetCodeSourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetCodeSourceResponseBody> body{};

  GetCodeSourceResponse() {}

  explicit GetCodeSourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class GetDataSourceResponseBody : public Darabonba::Model {
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
  shared_ptr<string> requestId{};
  shared_ptr<string> userId{};

  GetDataSourceResponseBody() {}

  explicit GetDataSourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~GetDataSourceResponseBody() = default;
};
class GetDataSourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetDataSourceResponseBody> body{};

  GetDataSourceResponse() {}

  explicit GetDataSourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetDataSourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDataSourceResponseBody>(model1);
      }
    }
  }


  virtual ~GetDataSourceResponse() = default;
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


  virtual ~GetJobResponseBodyDataSources() = default;
};
class GetJobResponseBodyPods : public Darabonba::Model {
public:
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtFinishTime{};
  shared_ptr<string> gmtStartTime{};
  shared_ptr<string> ip{};
  shared_ptr<string> podId{};
  shared_ptr<string> status{};
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
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (podId) {
      res["PodId"] = boost::any(*podId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
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
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetJobResponseBodyPods() = default;
};
class GetJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<GetJobResponseBodyCodeSource> codeSource{};
  shared_ptr<vector<GetJobResponseBodyDataSources>> dataSources{};
  shared_ptr<string> displayName{};
  shared_ptr<long> duration{};
  shared_ptr<JobElasticSpec> elasticSpec{};
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
  shared_ptr<string> reasonCode{};
  shared_ptr<string> reasonMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceId{};
  shared_ptr<JobSettings> settings{};
  shared_ptr<string> status{};
  shared_ptr<string> thirdpartyLibDir{};
  shared_ptr<vector<string>> thirdpartyLibs{};
  shared_ptr<string> userCommand{};
  shared_ptr<string> userId{};
  shared_ptr<string> workspaceId{};
  shared_ptr<string> workspaceName{};

  GetJobResponseBody() {}

  explicit GetJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (codeSource) {
      res["CodeSource"] = codeSource ? boost::any(codeSource->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (settings) {
      res["Settings"] = settings ? boost::any(settings->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["Status"] = boost::any(*status);
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
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    if (workspaceName) {
      res["WorkspaceName"] = boost::any(*workspaceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
  shared_ptr<GetJobResponseBody> body{};

  GetJobResponse() {}

  explicit GetJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
  shared_ptr<long> requestId{};

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
      requestId = make_shared<long>(boost::any_cast<long>(m["RequestId"]));
    }
  }


  virtual ~GetJobEventsResponseBody() = default;
};
class GetJobEventsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetJobEventsResponseBody> body{};

  GetJobEventsResponse() {}

  explicit GetJobEventsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
  shared_ptr<GetJobMetricsResponseBody> body{};

  GetJobMetricsResponse() {}

  explicit GetJobMetricsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class GetJobsStatisticsRequest : public Darabonba::Model {
public:
  shared_ptr<string> workspaceId{};

  GetJobsStatisticsRequest() {}

  explicit GetJobsStatisticsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetJobsStatisticsRequest() = default;
};
class GetJobsStatisticsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> statistics{};

  GetJobsStatisticsResponseBody() {}

  explicit GetJobsStatisticsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (statistics) {
      res["Statistics"] = boost::any(*statistics);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Statistics") != m.end() && !m["Statistics"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Statistics"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      statistics = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~GetJobsStatisticsResponseBody() = default;
};
class GetJobsStatisticsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetJobsStatisticsResponseBody> body{};

  GetJobsStatisticsResponse() {}

  explicit GetJobsStatisticsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetJobsStatisticsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetJobsStatisticsResponseBody>(model1);
      }
    }
  }


  virtual ~GetJobsStatisticsResponse() = default;
};
class GetPodEventsRequest : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<long> maxEventsNum{};
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


  virtual ~GetPodEventsRequest() = default;
};
class GetPodEventsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> events{};
  shared_ptr<string> jobId{};
  shared_ptr<string> podId{};
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetPodEventsResponseBody() = default;
};
class GetPodEventsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetPodEventsResponseBody> body{};

  GetPodEventsResponse() {}

  explicit GetPodEventsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetPodLogsResponseBody() = default;
};
class GetPodLogsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetPodLogsResponseBody> body{};

  GetPodLogsResponse() {}

  explicit GetPodLogsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class GetSecurityGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> securityGroupName{};
  shared_ptr<string> vpcId{};

  GetSecurityGroupResponseBody() {}

  explicit GetSecurityGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (securityGroupName) {
      res["SecurityGroupName"] = boost::any(*securityGroupName);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("SecurityGroupName") != m.end() && !m["SecurityGroupName"].empty()) {
      securityGroupName = make_shared<string>(boost::any_cast<string>(m["SecurityGroupName"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~GetSecurityGroupResponseBody() = default;
};
class GetSecurityGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetSecurityGroupResponseBody> body{};

  GetSecurityGroupResponse() {}

  explicit GetSecurityGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetSecurityGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSecurityGroupResponseBody>(model1);
      }
    }
  }


  virtual ~GetSecurityGroupResponse() = default;
};
class GetSwitchResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> cidrBlock{};
  shared_ptr<string> requestId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vSwitchName{};
  shared_ptr<string> vpcId{};

  GetSwitchResponseBody() {}

  explicit GetSwitchResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cidrBlock) {
      res["CidrBlock"] = boost::any(*cidrBlock);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (vSwitchName) {
      res["VSwitchName"] = boost::any(*vSwitchName);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CidrBlock") != m.end() && !m["CidrBlock"].empty()) {
      cidrBlock = make_shared<string>(boost::any_cast<string>(m["CidrBlock"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VSwitchName") != m.end() && !m["VSwitchName"].empty()) {
      vSwitchName = make_shared<string>(boost::any_cast<string>(m["VSwitchName"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~GetSwitchResponseBody() = default;
};
class GetSwitchResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetSwitchResponseBody> body{};

  GetSwitchResponse() {}

  explicit GetSwitchResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetSwitchResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSwitchResponseBody>(model1);
      }
    }
  }


  virtual ~GetSwitchResponse() = default;
};
class GetTensorboardRequest : public Darabonba::Model {
public:
  shared_ptr<string> jodId{};
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
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JodId") != m.end() && !m["JodId"].empty()) {
      jodId = make_shared<string>(boost::any_cast<string>(m["JodId"]));
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
  shared_ptr<Tensorboard> body{};

  GetTensorboardResponse() {}

  explicit GetTensorboardResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
  shared_ptr<GetTokenResponseBody> body{};

  GetTokenResponse() {}

  explicit GetTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class GetUserAuthorizationResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> isPassed{};
  shared_ptr<long> requestId{};

  GetUserAuthorizationResponseBody() {}

  explicit GetUserAuthorizationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isPassed) {
      res["IsPassed"] = boost::any(*isPassed);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsPassed") != m.end() && !m["IsPassed"].empty()) {
      isPassed = make_shared<bool>(boost::any_cast<bool>(m["IsPassed"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<long>(boost::any_cast<long>(m["RequestId"]));
    }
  }


  virtual ~GetUserAuthorizationResponseBody() = default;
};
class GetUserAuthorizationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetUserAuthorizationResponseBody> body{};

  GetUserAuthorizationResponse() {}

  explicit GetUserAuthorizationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetUserAuthorizationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUserAuthorizationResponseBody>(model1);
      }
    }
  }


  virtual ~GetUserAuthorizationResponse() = default;
};
class GetVpcResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> vpcId{};
  shared_ptr<string> vpcName{};

  GetVpcResponseBody() {}

  explicit GetVpcResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vpcName) {
      res["VpcName"] = boost::any(*vpcName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<long>(boost::any_cast<long>(m["VpcId"]));
    }
    if (m.find("VpcName") != m.end() && !m["VpcName"].empty()) {
      vpcName = make_shared<string>(boost::any_cast<string>(m["VpcName"]));
    }
  }


  virtual ~GetVpcResponseBody() = default;
};
class GetVpcResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetVpcResponseBody> body{};

  GetVpcResponse() {}

  explicit GetVpcResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetVpcResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetVpcResponseBody>(model1);
      }
    }
  }


  virtual ~GetVpcResponse() = default;
};
class GetWorkspaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> isWorkspaceAdmin{};
  shared_ptr<string> requestId{};
  shared_ptr<Workspace> workspace{};

  GetWorkspaceResponseBody() {}

  explicit GetWorkspaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isWorkspaceAdmin) {
      res["IsWorkspaceAdmin"] = boost::any(*isWorkspaceAdmin);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (workspace) {
      res["Workspace"] = workspace ? boost::any(workspace->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsWorkspaceAdmin") != m.end() && !m["IsWorkspaceAdmin"].empty()) {
      isWorkspaceAdmin = make_shared<bool>(boost::any_cast<bool>(m["IsWorkspaceAdmin"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Workspace") != m.end() && !m["Workspace"].empty()) {
      if (typeid(map<string, boost::any>) == m["Workspace"].type()) {
        Workspace model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Workspace"]));
        workspace = make_shared<Workspace>(model1);
      }
    }
  }


  virtual ~GetWorkspaceResponseBody() = default;
};
class GetWorkspaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetWorkspaceResponseBody> body{};

  GetWorkspaceResponse() {}

  explicit GetWorkspaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class JobDispatchQueryRequest : public Darabonba::Model {
public:
  shared_ptr<string> algoName{};
  shared_ptr<string> projectName{};
  shared_ptr<map<string, string>> properties{};
  shared_ptr<map<string, string>> settings{};

  JobDispatchQueryRequest() {}

  explicit JobDispatchQueryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algoName) {
      res["AlgoName"] = boost::any(*algoName);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (properties) {
      res["Properties"] = boost::any(*properties);
    }
    if (settings) {
      res["Settings"] = boost::any(*settings);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlgoName") != m.end() && !m["AlgoName"].empty()) {
      algoName = make_shared<string>(boost::any_cast<string>(m["AlgoName"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("Properties") != m.end() && !m["Properties"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Properties"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      properties = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Settings") != m.end() && !m["Settings"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Settings"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      settings = make_shared<map<string, string>>(toMap1);
    }
  }


  virtual ~JobDispatchQueryRequest() = default;
};
class JobDispatchQueryShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> algoName{};
  shared_ptr<string> projectName{};
  shared_ptr<string> propertiesShrink{};
  shared_ptr<string> settingsShrink{};

  JobDispatchQueryShrinkRequest() {}

  explicit JobDispatchQueryShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algoName) {
      res["AlgoName"] = boost::any(*algoName);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (propertiesShrink) {
      res["Properties"] = boost::any(*propertiesShrink);
    }
    if (settingsShrink) {
      res["Settings"] = boost::any(*settingsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlgoName") != m.end() && !m["AlgoName"].empty()) {
      algoName = make_shared<string>(boost::any_cast<string>(m["AlgoName"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("Properties") != m.end() && !m["Properties"].empty()) {
      propertiesShrink = make_shared<string>(boost::any_cast<string>(m["Properties"]));
    }
    if (m.find("Settings") != m.end() && !m["Settings"].empty()) {
      settingsShrink = make_shared<string>(boost::any_cast<string>(m["Settings"]));
    }
  }


  virtual ~JobDispatchQueryShrinkRequest() = default;
};
class JobDispatchQueryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};

  JobDispatchQueryResponseBody() {}

  explicit JobDispatchQueryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~JobDispatchQueryResponseBody() = default;
};
class JobDispatchQueryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<JobDispatchQueryResponseBody> body{};

  JobDispatchQueryResponse() {}

  explicit JobDispatchQueryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        JobDispatchQueryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<JobDispatchQueryResponseBody>(model1);
      }
    }
  }


  virtual ~JobDispatchQueryResponse() = default;
};
class JobDispatchSubmitRequest : public Darabonba::Model {
public:
  shared_ptr<string> algoName{};
  shared_ptr<string> projectName{};
  shared_ptr<map<string, string>> properties{};
  shared_ptr<map<string, string>> settings{};

  JobDispatchSubmitRequest() {}

  explicit JobDispatchSubmitRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algoName) {
      res["AlgoName"] = boost::any(*algoName);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (properties) {
      res["Properties"] = boost::any(*properties);
    }
    if (settings) {
      res["Settings"] = boost::any(*settings);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlgoName") != m.end() && !m["AlgoName"].empty()) {
      algoName = make_shared<string>(boost::any_cast<string>(m["AlgoName"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("Properties") != m.end() && !m["Properties"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Properties"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      properties = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Settings") != m.end() && !m["Settings"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Settings"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      settings = make_shared<map<string, string>>(toMap1);
    }
  }


  virtual ~JobDispatchSubmitRequest() = default;
};
class JobDispatchSubmitResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobUrl{};

  JobDispatchSubmitResponseBody() {}

  explicit JobDispatchSubmitResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobUrl) {
      res["JobUrl"] = boost::any(*jobUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobUrl") != m.end() && !m["JobUrl"].empty()) {
      jobUrl = make_shared<string>(boost::any_cast<string>(m["JobUrl"]));
    }
  }


  virtual ~JobDispatchSubmitResponseBody() = default;
};
class JobDispatchSubmitResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<JobDispatchSubmitResponseBody> body{};

  JobDispatchSubmitResponse() {}

  explicit JobDispatchSubmitResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        JobDispatchSubmitResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<JobDispatchSubmitResponseBody>(model1);
      }
    }
  }


  virtual ~JobDispatchSubmitResponse() = default;
};
class ListCodeSourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> order{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> sortBy{};

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
  shared_ptr<ListCodeSourcesResponseBody> body{};

  ListCodeSourcesResponse() {}

  explicit ListCodeSourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class ListDataSourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataSourceType{};
  shared_ptr<string> displayName{};
  shared_ptr<string> order{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> sortBy{};

  ListDataSourcesRequest() {}

  explicit ListDataSourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSourceType) {
      res["DataSourceType"] = boost::any(*dataSourceType);
    }
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataSourceType") != m.end() && !m["DataSourceType"].empty()) {
      dataSourceType = make_shared<string>(boost::any_cast<string>(m["DataSourceType"]));
    }
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
  }


  virtual ~ListDataSourcesRequest() = default;
};
class ListDataSourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DataSourceItem>> dataSources{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListDataSourcesResponseBody() {}

  explicit ListDataSourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSources) {
      vector<boost::any> temp1;
      for(auto item1:*dataSources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataSources"] = boost::any(temp1);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListDataSourcesResponseBody() = default;
};
class ListDataSourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListDataSourcesResponseBody> body{};

  ListDataSourcesResponse() {}

  explicit ListDataSourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListDataSourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDataSourcesResponseBody>(model1);
      }
    }
  }


  virtual ~ListDataSourcesResponse() = default;
};
class ListEcsSpecsRequest : public Darabonba::Model {
public:
  shared_ptr<string> order{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> sortBy{};

  ListEcsSpecsRequest() {}

  explicit ListEcsSpecsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
  shared_ptr<ListEcsSpecsResponseBody> body{};

  ListEcsSpecsResponse() {}

  explicit ListEcsSpecsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class ListImagesRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceleratorType{};
  shared_ptr<string> framework{};
  shared_ptr<string> imageProviderType{};
  shared_ptr<string> order{};
  shared_ptr<string> sortBy{};

  ListImagesRequest() {}

  explicit ListImagesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceleratorType) {
      res["AcceleratorType"] = boost::any(*acceleratorType);
    }
    if (framework) {
      res["Framework"] = boost::any(*framework);
    }
    if (imageProviderType) {
      res["ImageProviderType"] = boost::any(*imageProviderType);
    }
    if (order) {
      res["Order"] = boost::any(*order);
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
    if (m.find("Framework") != m.end() && !m["Framework"].empty()) {
      framework = make_shared<string>(boost::any_cast<string>(m["Framework"]));
    }
    if (m.find("ImageProviderType") != m.end() && !m["ImageProviderType"].empty()) {
      imageProviderType = make_shared<string>(boost::any_cast<string>(m["ImageProviderType"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
  }


  virtual ~ListImagesRequest() = default;
};
class ListImagesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ImageItem>> images{};
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
        vector<ImageItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Images"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ImageItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        images = make_shared<vector<ImageItem>>(expect1);
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
  shared_ptr<ListImagesResponseBody> body{};

  ListImagesResponse() {}

  explicit ListImagesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class ListJobsRequest : public Darabonba::Model {
public:
  shared_ptr<string> businessUserId{};
  shared_ptr<string> caller{};
  shared_ptr<string> displayName{};
  shared_ptr<string> endTime{};
  shared_ptr<string> jobType{};
  shared_ptr<string> order{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> pipelineId{};
  shared_ptr<string> resourceId{};
  shared_ptr<bool> showOwn{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};
  shared_ptr<map<string, string>> tags{};
  shared_ptr<string> workspaceId{};

  ListJobsRequest() {}

  explicit ListJobsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (jobType) {
      res["JobType"] = boost::any(*jobType);
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
    if (pipelineId) {
      res["PipelineId"] = boost::any(*pipelineId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
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
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
    if (m.find("JobType") != m.end() && !m["JobType"].empty()) {
      jobType = make_shared<string>(boost::any_cast<string>(m["JobType"]));
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
    if (m.find("PipelineId") != m.end() && !m["PipelineId"].empty()) {
      pipelineId = make_shared<string>(boost::any_cast<string>(m["PipelineId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
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
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~ListJobsRequest() = default;
};
class ListJobsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> businessUserId{};
  shared_ptr<string> caller{};
  shared_ptr<string> displayName{};
  shared_ptr<string> endTime{};
  shared_ptr<string> jobType{};
  shared_ptr<string> order{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> pipelineId{};
  shared_ptr<string> resourceId{};
  shared_ptr<bool> showOwn{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};
  shared_ptr<string> tagsShrink{};
  shared_ptr<string> workspaceId{};

  ListJobsShrinkRequest() {}

  explicit ListJobsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (jobType) {
      res["JobType"] = boost::any(*jobType);
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
    if (pipelineId) {
      res["PipelineId"] = boost::any(*pipelineId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
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
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
    if (m.find("JobType") != m.end() && !m["JobType"].empty()) {
      jobType = make_shared<string>(boost::any_cast<string>(m["JobType"]));
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
    if (m.find("PipelineId") != m.end() && !m["PipelineId"].empty()) {
      pipelineId = make_shared<string>(boost::any_cast<string>(m["PipelineId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
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
  shared_ptr<ListJobsResponseBody> body{};

  ListJobsResponse() {}

  explicit ListJobsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class ListSecurityGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> vpcId{};

  ListSecurityGroupsRequest() {}

  explicit ListSecurityGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
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
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~ListSecurityGroupsRequest() = default;
};
class ListSecurityGroupsResponseBodySecurityGroups : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> securityGroupName{};
  shared_ptr<string> vpcId{};

  ListSecurityGroupsResponseBodySecurityGroups() {}

  explicit ListSecurityGroupsResponseBodySecurityGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (securityGroupName) {
      res["SecurityGroupName"] = boost::any(*securityGroupName);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("SecurityGroupName") != m.end() && !m["SecurityGroupName"].empty()) {
      securityGroupName = make_shared<string>(boost::any_cast<string>(m["SecurityGroupName"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~ListSecurityGroupsResponseBodySecurityGroups() = default;
};
class ListSecurityGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListSecurityGroupsResponseBodySecurityGroups>> securityGroups{};
  shared_ptr<long> totalCount{};

  ListSecurityGroupsResponseBody() {}

  explicit ListSecurityGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (securityGroups) {
      vector<boost::any> temp1;
      for(auto item1:*securityGroups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SecurityGroups"] = boost::any(temp1);
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
    if (m.find("SecurityGroups") != m.end() && !m["SecurityGroups"].empty()) {
      if (typeid(vector<boost::any>) == m["SecurityGroups"].type()) {
        vector<ListSecurityGroupsResponseBodySecurityGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SecurityGroups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSecurityGroupsResponseBodySecurityGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        securityGroups = make_shared<vector<ListSecurityGroupsResponseBodySecurityGroups>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListSecurityGroupsResponseBody() = default;
};
class ListSecurityGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListSecurityGroupsResponseBody> body{};

  ListSecurityGroupsResponse() {}

  explicit ListSecurityGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListSecurityGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSecurityGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~ListSecurityGroupsResponse() = default;
};
class ListSwitchesRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> vpcId{};

  ListSwitchesRequest() {}

  explicit ListSwitchesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
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
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~ListSwitchesRequest() = default;
};
class ListSwitchesResponseBodySwitches : public Darabonba::Model {
public:
  shared_ptr<string> cidrBlock{};
  shared_ptr<string> description{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vSwitchName{};
  shared_ptr<string> vpcId{};

  ListSwitchesResponseBodySwitches() {}

  explicit ListSwitchesResponseBodySwitches(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cidrBlock) {
      res["CidrBlock"] = boost::any(*cidrBlock);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (vSwitchName) {
      res["VSwitchName"] = boost::any(*vSwitchName);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CidrBlock") != m.end() && !m["CidrBlock"].empty()) {
      cidrBlock = make_shared<string>(boost::any_cast<string>(m["CidrBlock"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VSwitchName") != m.end() && !m["VSwitchName"].empty()) {
      vSwitchName = make_shared<string>(boost::any_cast<string>(m["VSwitchName"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~ListSwitchesResponseBodySwitches() = default;
};
class ListSwitchesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListSwitchesResponseBodySwitches>> switches{};
  shared_ptr<long> totalCount{};

  ListSwitchesResponseBody() {}

  explicit ListSwitchesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (switches) {
      vector<boost::any> temp1;
      for(auto item1:*switches){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Switches"] = boost::any(temp1);
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
    if (m.find("Switches") != m.end() && !m["Switches"].empty()) {
      if (typeid(vector<boost::any>) == m["Switches"].type()) {
        vector<ListSwitchesResponseBodySwitches> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Switches"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSwitchesResponseBodySwitches model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        switches = make_shared<vector<ListSwitchesResponseBodySwitches>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListSwitchesResponseBody() = default;
};
class ListSwitchesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListSwitchesResponseBody> body{};

  ListSwitchesResponse() {}

  explicit ListSwitchesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListSwitchesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSwitchesResponseBody>(model1);
      }
    }
  }


  virtual ~ListSwitchesResponse() = default;
};
class ListTensorboardsRequest : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> endTime{};
  shared_ptr<string> jobId{};
  shared_ptr<string> order{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};
  shared_ptr<string> tensorboardId{};
  shared_ptr<bool> verbose{};
  shared_ptr<string> workspaceId{};

  ListTensorboardsRequest() {}

  explicit ListTensorboardsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
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
    if (verbose) {
      res["Verbose"] = boost::any(*verbose);
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
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
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
  shared_ptr<ListTensorboardsResponseBody> body{};

  ListTensorboardsResponse() {}

  explicit ListTensorboardsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class ListVpcsRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListVpcsRequest() {}

  explicit ListVpcsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListVpcsRequest() = default;
};
class ListVpcsResponseBodyVpcs : public Darabonba::Model {
public:
  shared_ptr<string> vpcId{};
  shared_ptr<string> vpcName{};

  ListVpcsResponseBodyVpcs() {}

  explicit ListVpcsResponseBodyVpcs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vpcName) {
      res["VpcName"] = boost::any(*vpcName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VpcName") != m.end() && !m["VpcName"].empty()) {
      vpcName = make_shared<string>(boost::any_cast<string>(m["VpcName"]));
    }
  }


  virtual ~ListVpcsResponseBodyVpcs() = default;
};
class ListVpcsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<ListVpcsResponseBodyVpcs>> vpcs{};

  ListVpcsResponseBody() {}

  explicit ListVpcsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (vpcs) {
      vector<boost::any> temp1;
      for(auto item1:*vpcs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Vpcs"] = boost::any(temp1);
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
    if (m.find("Vpcs") != m.end() && !m["Vpcs"].empty()) {
      if (typeid(vector<boost::any>) == m["Vpcs"].type()) {
        vector<ListVpcsResponseBodyVpcs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Vpcs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListVpcsResponseBodyVpcs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        vpcs = make_shared<vector<ListVpcsResponseBodyVpcs>>(expect1);
      }
    }
  }


  virtual ~ListVpcsResponseBody() = default;
};
class ListVpcsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListVpcsResponseBody> body{};

  ListVpcsResponse() {}

  explicit ListVpcsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListVpcsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListVpcsResponseBody>(model1);
      }
    }
  }


  virtual ~ListVpcsResponse() = default;
};
class ListWorkspacesRequest : public Darabonba::Model {
public:
  shared_ptr<bool> needDetail{};
  shared_ptr<string> order{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> sortBy{};

  ListWorkspacesRequest() {}

  explicit ListWorkspacesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (needDetail) {
      res["NeedDetail"] = boost::any(*needDetail);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NeedDetail") != m.end() && !m["NeedDetail"].empty()) {
      needDetail = make_shared<bool>(boost::any_cast<bool>(m["NeedDetail"]));
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
  }


  virtual ~ListWorkspacesRequest() = default;
};
class ListWorkspacesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<Workspace>> workspaces{};

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
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("Workspaces") != m.end() && !m["Workspaces"].empty()) {
      if (typeid(vector<boost::any>) == m["Workspaces"].type()) {
        vector<Workspace> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Workspaces"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Workspace model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        workspaces = make_shared<vector<Workspace>>(expect1);
      }
    }
  }


  virtual ~ListWorkspacesResponseBody() = default;
};
class ListWorkspacesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListWorkspacesResponseBody> body{};

  ListWorkspacesResponse() {}

  explicit ListWorkspacesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
  shared_ptr<StartTensorboardResponseBody> body{};

  StartTensorboardResponse() {}

  explicit StartTensorboardResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
  shared_ptr<StopJobResponseBody> body{};

  StopJobResponse() {}

  explicit StopJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
  shared_ptr<StopTensorboardResponseBody> body{};

  StopTensorboardResponse() {}

  explicit StopTensorboardResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class UpdateTensorboardRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxRunningTimeMinutes{};
  shared_ptr<string> workspaceId{};

  UpdateTensorboardRequest() {}

  explicit UpdateTensorboardRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxRunningTimeMinutes) {
      res["MaxRunningTimeMinutes"] = boost::any(*maxRunningTimeMinutes);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxRunningTimeMinutes") != m.end() && !m["MaxRunningTimeMinutes"].empty()) {
      maxRunningTimeMinutes = make_shared<long>(boost::any_cast<long>(m["MaxRunningTimeMinutes"]));
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
  shared_ptr<UpdateTensorboardResponseBody> body{};

  UpdateTensorboardResponse() {}

  explicit UpdateTensorboardResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
  BatchGetJobsStatisticsResponse batchGetJobsStatistics(shared_ptr<BatchGetJobsStatisticsRequest> request);
  BatchGetJobsStatisticsResponse batchGetJobsStatisticsWithOptions(shared_ptr<BatchGetJobsStatisticsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateCodeSourceResponse createCodeSource(shared_ptr<CreateCodeSourceRequest> request);
  CreateCodeSourceResponse createCodeSourceWithOptions(shared_ptr<CreateCodeSourceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDataSourceResponse createDataSource(shared_ptr<CreateDataSourceRequest> request);
  CreateDataSourceResponse createDataSourceWithOptions(shared_ptr<CreateDataSourceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateJobResponse createJob(shared_ptr<CreateJobRequest> request);
  CreateJobResponse createJobWithOptions(shared_ptr<CreateJobRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTensorboardResponse createTensorboard(shared_ptr<CreateTensorboardRequest> request);
  CreateTensorboardResponse createTensorboardWithOptions(shared_ptr<CreateTensorboardRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteCodeSourceResponse deleteCodeSource(shared_ptr<string> CodeSourceId);
  DeleteCodeSourceResponse deleteCodeSourceWithOptions(shared_ptr<string> CodeSourceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDataSourceResponse deleteDataSource(shared_ptr<string> DataSourceId);
  DeleteDataSourceResponse deleteDataSourceWithOptions(shared_ptr<string> DataSourceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteJobResponse deleteJob(shared_ptr<string> JobId);
  DeleteJobResponse deleteJobWithOptions(shared_ptr<string> JobId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteTensorboardResponse deleteTensorboard(shared_ptr<string> TensorboardId, shared_ptr<DeleteTensorboardRequest> request);
  DeleteTensorboardResponse deleteTensorboardWithOptions(shared_ptr<string> TensorboardId,
                                                         shared_ptr<DeleteTensorboardRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAuthorizationResponse getAuthorization();
  GetAuthorizationResponse getAuthorizationWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCodeSourceResponse getCodeSource(shared_ptr<string> CodeSourceId);
  GetCodeSourceResponse getCodeSourceWithOptions(shared_ptr<string> CodeSourceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDataSourceResponse getDataSource(shared_ptr<string> DataSourceId);
  GetDataSourceResponse getDataSourceWithOptions(shared_ptr<string> DataSourceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetJobResponse getJob(shared_ptr<string> JobId);
  GetJobResponse getJobWithOptions(shared_ptr<string> JobId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetJobEventsResponse getJobEvents(shared_ptr<string> JobId, shared_ptr<GetJobEventsRequest> request);
  GetJobEventsResponse getJobEventsWithOptions(shared_ptr<string> JobId,
                                               shared_ptr<GetJobEventsRequest> request,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetJobMetricsResponse getJobMetrics(shared_ptr<string> JobId, shared_ptr<GetJobMetricsRequest> request);
  GetJobMetricsResponse getJobMetricsWithOptions(shared_ptr<string> JobId,
                                                 shared_ptr<GetJobMetricsRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetJobsStatisticsResponse getJobsStatistics(shared_ptr<GetJobsStatisticsRequest> request);
  GetJobsStatisticsResponse getJobsStatisticsWithOptions(shared_ptr<GetJobsStatisticsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPodEventsResponse getPodEvents(shared_ptr<string> JobId, shared_ptr<string> PodId, shared_ptr<GetPodEventsRequest> request);
  GetPodEventsResponse getPodEventsWithOptions(shared_ptr<string> JobId,
                                               shared_ptr<string> PodId,
                                               shared_ptr<GetPodEventsRequest> request,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPodLogsResponse getPodLogs(shared_ptr<string> JobId, shared_ptr<string> PodId, shared_ptr<GetPodLogsRequest> request);
  GetPodLogsResponse getPodLogsWithOptions(shared_ptr<string> JobId,
                                           shared_ptr<string> PodId,
                                           shared_ptr<GetPodLogsRequest> request,
                                           shared_ptr<map<string, string>> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSecurityGroupResponse getSecurityGroup(shared_ptr<string> SecurityGroupId);
  GetSecurityGroupResponse getSecurityGroupWithOptions(shared_ptr<string> SecurityGroupId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSwitchResponse getSwitch(shared_ptr<string> SwitchId);
  GetSwitchResponse getSwitchWithOptions(shared_ptr<string> SwitchId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTensorboardResponse getTensorboard(shared_ptr<string> TensorboardId, shared_ptr<GetTensorboardRequest> request);
  GetTensorboardResponse getTensorboardWithOptions(shared_ptr<string> TensorboardId,
                                                   shared_ptr<GetTensorboardRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTokenResponse getToken(shared_ptr<GetTokenRequest> request);
  GetTokenResponse getTokenWithOptions(shared_ptr<GetTokenRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserAuthorizationResponse getUserAuthorization(shared_ptr<string> UserId);
  GetUserAuthorizationResponse getUserAuthorizationWithOptions(shared_ptr<string> UserId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetVpcResponse getVpc(shared_ptr<string> VpcId);
  GetVpcResponse getVpcWithOptions(shared_ptr<string> VpcId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetWorkspaceResponse getWorkspace(shared_ptr<string> WorkspaceId);
  GetWorkspaceResponse getWorkspaceWithOptions(shared_ptr<string> WorkspaceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  JobDispatchQueryResponse jobDispatchQuery(shared_ptr<JobDispatchQueryRequest> request);
  JobDispatchQueryResponse jobDispatchQueryWithOptions(shared_ptr<JobDispatchQueryRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  JobDispatchSubmitResponse jobDispatchSubmit(shared_ptr<JobDispatchSubmitRequest> request);
  JobDispatchSubmitResponse jobDispatchSubmitWithOptions(shared_ptr<JobDispatchSubmitRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCodeSourcesResponse listCodeSources(shared_ptr<ListCodeSourcesRequest> request);
  ListCodeSourcesResponse listCodeSourcesWithOptions(shared_ptr<ListCodeSourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDataSourcesResponse listDataSources(shared_ptr<ListDataSourcesRequest> request);
  ListDataSourcesResponse listDataSourcesWithOptions(shared_ptr<ListDataSourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListEcsSpecsResponse listEcsSpecs(shared_ptr<ListEcsSpecsRequest> request);
  ListEcsSpecsResponse listEcsSpecsWithOptions(shared_ptr<ListEcsSpecsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListImagesResponse listImages(shared_ptr<ListImagesRequest> request);
  ListImagesResponse listImagesWithOptions(shared_ptr<ListImagesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListJobsResponse listJobs(shared_ptr<ListJobsRequest> request);
  ListJobsResponse listJobsWithOptions(shared_ptr<ListJobsRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSecurityGroupsResponse listSecurityGroups(shared_ptr<ListSecurityGroupsRequest> request);
  ListSecurityGroupsResponse listSecurityGroupsWithOptions(shared_ptr<ListSecurityGroupsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSwitchesResponse listSwitches(shared_ptr<ListSwitchesRequest> request);
  ListSwitchesResponse listSwitchesWithOptions(shared_ptr<ListSwitchesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTensorboardsResponse listTensorboards(shared_ptr<ListTensorboardsRequest> request);
  ListTensorboardsResponse listTensorboardsWithOptions(shared_ptr<ListTensorboardsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListVpcsResponse listVpcs(shared_ptr<ListVpcsRequest> request);
  ListVpcsResponse listVpcsWithOptions(shared_ptr<ListVpcsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListWorkspacesResponse listWorkspaces(shared_ptr<ListWorkspacesRequest> request);
  ListWorkspacesResponse listWorkspacesWithOptions(shared_ptr<ListWorkspacesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartTensorboardResponse startTensorboard(shared_ptr<string> TensorboardId, shared_ptr<StartTensorboardRequest> request);
  StartTensorboardResponse startTensorboardWithOptions(shared_ptr<string> TensorboardId,
                                                       shared_ptr<StartTensorboardRequest> request,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopJobResponse stopJob(shared_ptr<string> JobId);
  StopJobResponse stopJobWithOptions(shared_ptr<string> JobId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopTensorboardResponse stopTensorboard(shared_ptr<string> TensorboardId, shared_ptr<StopTensorboardRequest> request);
  StopTensorboardResponse stopTensorboardWithOptions(shared_ptr<string> TensorboardId,
                                                     shared_ptr<StopTensorboardRequest> request,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateTensorboardResponse updateTensorboard(shared_ptr<string> TensorboardId, shared_ptr<UpdateTensorboardRequest> request);
  UpdateTensorboardResponse updateTensorboardWithOptions(shared_ptr<string> TensorboardId,
                                                         shared_ptr<UpdateTensorboardRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Pai-dlc20201203

#endif
