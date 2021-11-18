// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_PAI-DSW20210226_H_
#define ALIBABACLOUD_PAI-DSW20210226_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Pai-dsw20210226 {
class Cluster : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterType{};
  shared_ptr<string> config{};
  shared_ptr<string> name{};
  shared_ptr<string> nas{};
  shared_ptr<string> owner{};
  shared_ptr<string> privateContainerPath{};
  shared_ptr<string> privateNasPath{};
  shared_ptr<string> publicContainerPath{};
  shared_ptr<string> publicNasPath{};
  shared_ptr<string> state{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};

  Cluster() {}

  explicit Cluster(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (clusterType) {
      res["ClusterType"] = boost::any(*clusterType);
    }
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (nas) {
      res["Nas"] = boost::any(*nas);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (privateContainerPath) {
      res["PrivateContainerPath"] = boost::any(*privateContainerPath);
    }
    if (privateNasPath) {
      res["PrivateNasPath"] = boost::any(*privateNasPath);
    }
    if (publicContainerPath) {
      res["PublicContainerPath"] = boost::any(*publicContainerPath);
    }
    if (publicNasPath) {
      res["PublicNasPath"] = boost::any(*publicNasPath);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ClusterType") != m.end() && !m["ClusterType"].empty()) {
      clusterType = make_shared<string>(boost::any_cast<string>(m["ClusterType"]));
    }
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Nas") != m.end() && !m["Nas"].empty()) {
      nas = make_shared<string>(boost::any_cast<string>(m["Nas"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("PrivateContainerPath") != m.end() && !m["PrivateContainerPath"].empty()) {
      privateContainerPath = make_shared<string>(boost::any_cast<string>(m["PrivateContainerPath"]));
    }
    if (m.find("PrivateNasPath") != m.end() && !m["PrivateNasPath"].empty()) {
      privateNasPath = make_shared<string>(boost::any_cast<string>(m["PrivateNasPath"]));
    }
    if (m.find("PublicContainerPath") != m.end() && !m["PublicContainerPath"].empty()) {
      publicContainerPath = make_shared<string>(boost::any_cast<string>(m["PublicContainerPath"]));
    }
    if (m.find("PublicNasPath") != m.end() && !m["PublicNasPath"].empty()) {
      publicNasPath = make_shared<string>(boost::any_cast<string>(m["PublicNasPath"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~Cluster() = default;
};
class Config : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  Config() {}

  explicit Config(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~Config() = default;
};
class Dataset : public Darabonba::Model {
public:
  shared_ptr<string> datasetId{};
  shared_ptr<string> defaultMountPath{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> mountPath{};
  shared_ptr<string> name{};
  shared_ptr<string> nasPath{};

  Dataset() {}

  explicit Dataset(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetId) {
      res["DatasetId"] = boost::any(*datasetId);
    }
    if (defaultMountPath) {
      res["DefaultMountPath"] = boost::any(*defaultMountPath);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (mountPath) {
      res["MountPath"] = boost::any(*mountPath);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (nasPath) {
      res["NasPath"] = boost::any(*nasPath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetId") != m.end() && !m["DatasetId"].empty()) {
      datasetId = make_shared<string>(boost::any_cast<string>(m["DatasetId"]));
    }
    if (m.find("DefaultMountPath") != m.end() && !m["DefaultMountPath"].empty()) {
      defaultMountPath = make_shared<string>(boost::any_cast<string>(m["DefaultMountPath"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("MountPath") != m.end() && !m["MountPath"].empty()) {
      mountPath = make_shared<string>(boost::any_cast<string>(m["MountPath"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NasPath") != m.end() && !m["NasPath"].empty()) {
      nasPath = make_shared<string>(boost::any_cast<string>(m["NasPath"]));
    }
  }


  virtual ~Dataset() = default;
};
class EcsSpec : public Darabonba::Model {
public:
  shared_ptr<long> cpu{};
  shared_ptr<long> gpu{};
  shared_ptr<string> gpuType{};
  shared_ptr<string> instanceType{};
  shared_ptr<long> memoryInGiB{};
  shared_ptr<string> systemDiskCategory{};
  shared_ptr<long> systemDiskSizeInGiB{};

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
    if (memoryInGiB) {
      res["MemoryInGiB"] = boost::any(*memoryInGiB);
    }
    if (systemDiskCategory) {
      res["SystemDiskCategory"] = boost::any(*systemDiskCategory);
    }
    if (systemDiskSizeInGiB) {
      res["SystemDiskSizeInGiB"] = boost::any(*systemDiskSizeInGiB);
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
    if (m.find("MemoryInGiB") != m.end() && !m["MemoryInGiB"].empty()) {
      memoryInGiB = make_shared<long>(boost::any_cast<long>(m["MemoryInGiB"]));
    }
    if (m.find("SystemDiskCategory") != m.end() && !m["SystemDiskCategory"].empty()) {
      systemDiskCategory = make_shared<string>(boost::any_cast<string>(m["SystemDiskCategory"]));
    }
    if (m.find("SystemDiskSizeInGiB") != m.end() && !m["SystemDiskSizeInGiB"].empty()) {
      systemDiskSizeInGiB = make_shared<long>(boost::any_cast<long>(m["SystemDiskSizeInGiB"]));
    }
  }


  virtual ~EcsSpec() = default;
};
class Image : public Darabonba::Model {
public:
  shared_ptr<string> acceleratorType{};
  shared_ptr<string> author{};
  shared_ptr<string> cudaVersion{};
  shared_ptr<string> description{};
  shared_ptr<string> ecsImageKey{};
  shared_ptr<string> framework{};
  shared_ptr<string> frameworkVersion{};
  shared_ptr<string> fromImageId{};
  shared_ptr<string> fromImageName{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> imageId{};
  shared_ptr<string> imageName{};
  shared_ptr<string> imageUrl{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> OS{};
  shared_ptr<string> OSVersion{};
  shared_ptr<string> pythonVersion{};
  shared_ptr<string> region{};
  shared_ptr<string> repository{};
  shared_ptr<string> repositoryPage{};
  shared_ptr<long> resourceType{};
  shared_ptr<string> rootImageId{};
  shared_ptr<bool> shared{};
  shared_ptr<string> shortImageUrl{};
  shared_ptr<string> shortRepository{};
  shared_ptr<string> stage{};
  shared_ptr<long> stageCode{};
  shared_ptr<string> suggestedName{};
  shared_ptr<string> tag{};
  shared_ptr<string> type{};
  shared_ptr<string> workspaceImageId{};

  Image() {}

  explicit Image(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceleratorType) {
      res["AcceleratorType"] = boost::any(*acceleratorType);
    }
    if (author) {
      res["Author"] = boost::any(*author);
    }
    if (cudaVersion) {
      res["CudaVersion"] = boost::any(*cudaVersion);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (ecsImageKey) {
      res["EcsImageKey"] = boost::any(*ecsImageKey);
    }
    if (framework) {
      res["Framework"] = boost::any(*framework);
    }
    if (frameworkVersion) {
      res["FrameworkVersion"] = boost::any(*frameworkVersion);
    }
    if (fromImageId) {
      res["FromImageId"] = boost::any(*fromImageId);
    }
    if (fromImageName) {
      res["FromImageName"] = boost::any(*fromImageName);
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
    if (imageName) {
      res["ImageName"] = boost::any(*imageName);
    }
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (OS) {
      res["OS"] = boost::any(*OS);
    }
    if (OSVersion) {
      res["OSVersion"] = boost::any(*OSVersion);
    }
    if (pythonVersion) {
      res["PythonVersion"] = boost::any(*pythonVersion);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (repository) {
      res["Repository"] = boost::any(*repository);
    }
    if (repositoryPage) {
      res["RepositoryPage"] = boost::any(*repositoryPage);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (rootImageId) {
      res["RootImageId"] = boost::any(*rootImageId);
    }
    if (shared) {
      res["Shared"] = boost::any(*shared);
    }
    if (shortImageUrl) {
      res["ShortImageUrl"] = boost::any(*shortImageUrl);
    }
    if (shortRepository) {
      res["ShortRepository"] = boost::any(*shortRepository);
    }
    if (stage) {
      res["Stage"] = boost::any(*stage);
    }
    if (stageCode) {
      res["StageCode"] = boost::any(*stageCode);
    }
    if (suggestedName) {
      res["SuggestedName"] = boost::any(*suggestedName);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (workspaceImageId) {
      res["WorkspaceImageId"] = boost::any(*workspaceImageId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceleratorType") != m.end() && !m["AcceleratorType"].empty()) {
      acceleratorType = make_shared<string>(boost::any_cast<string>(m["AcceleratorType"]));
    }
    if (m.find("Author") != m.end() && !m["Author"].empty()) {
      author = make_shared<string>(boost::any_cast<string>(m["Author"]));
    }
    if (m.find("CudaVersion") != m.end() && !m["CudaVersion"].empty()) {
      cudaVersion = make_shared<string>(boost::any_cast<string>(m["CudaVersion"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EcsImageKey") != m.end() && !m["EcsImageKey"].empty()) {
      ecsImageKey = make_shared<string>(boost::any_cast<string>(m["EcsImageKey"]));
    }
    if (m.find("Framework") != m.end() && !m["Framework"].empty()) {
      framework = make_shared<string>(boost::any_cast<string>(m["Framework"]));
    }
    if (m.find("FrameworkVersion") != m.end() && !m["FrameworkVersion"].empty()) {
      frameworkVersion = make_shared<string>(boost::any_cast<string>(m["FrameworkVersion"]));
    }
    if (m.find("FromImageId") != m.end() && !m["FromImageId"].empty()) {
      fromImageId = make_shared<string>(boost::any_cast<string>(m["FromImageId"]));
    }
    if (m.find("FromImageName") != m.end() && !m["FromImageName"].empty()) {
      fromImageName = make_shared<string>(boost::any_cast<string>(m["FromImageName"]));
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
    if (m.find("ImageName") != m.end() && !m["ImageName"].empty()) {
      imageName = make_shared<string>(boost::any_cast<string>(m["ImageName"]));
    }
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("OS") != m.end() && !m["OS"].empty()) {
      OS = make_shared<string>(boost::any_cast<string>(m["OS"]));
    }
    if (m.find("OSVersion") != m.end() && !m["OSVersion"].empty()) {
      OSVersion = make_shared<string>(boost::any_cast<string>(m["OSVersion"]));
    }
    if (m.find("PythonVersion") != m.end() && !m["PythonVersion"].empty()) {
      pythonVersion = make_shared<string>(boost::any_cast<string>(m["PythonVersion"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("Repository") != m.end() && !m["Repository"].empty()) {
      repository = make_shared<string>(boost::any_cast<string>(m["Repository"]));
    }
    if (m.find("RepositoryPage") != m.end() && !m["RepositoryPage"].empty()) {
      repositoryPage = make_shared<string>(boost::any_cast<string>(m["RepositoryPage"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<long>(boost::any_cast<long>(m["ResourceType"]));
    }
    if (m.find("RootImageId") != m.end() && !m["RootImageId"].empty()) {
      rootImageId = make_shared<string>(boost::any_cast<string>(m["RootImageId"]));
    }
    if (m.find("Shared") != m.end() && !m["Shared"].empty()) {
      shared = make_shared<bool>(boost::any_cast<bool>(m["Shared"]));
    }
    if (m.find("ShortImageUrl") != m.end() && !m["ShortImageUrl"].empty()) {
      shortImageUrl = make_shared<string>(boost::any_cast<string>(m["ShortImageUrl"]));
    }
    if (m.find("ShortRepository") != m.end() && !m["ShortRepository"].empty()) {
      shortRepository = make_shared<string>(boost::any_cast<string>(m["ShortRepository"]));
    }
    if (m.find("Stage") != m.end() && !m["Stage"].empty()) {
      stage = make_shared<string>(boost::any_cast<string>(m["Stage"]));
    }
    if (m.find("StageCode") != m.end() && !m["StageCode"].empty()) {
      stageCode = make_shared<long>(boost::any_cast<long>(m["StageCode"]));
    }
    if (m.find("SuggestedName") != m.end() && !m["SuggestedName"].empty()) {
      suggestedName = make_shared<string>(boost::any_cast<string>(m["SuggestedName"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("WorkspaceImageId") != m.end() && !m["WorkspaceImageId"].empty()) {
      workspaceImageId = make_shared<string>(boost::any_cast<string>(m["WorkspaceImageId"]));
    }
  }


  virtual ~Image() = default;
};
class ImageNamespace : public Darabonba::Model {
public:
  shared_ptr<string> namespace_{};
  shared_ptr<string> namespaceStatus{};

  ImageNamespace() {}

  explicit ImageNamespace(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (namespaceStatus) {
      res["NamespaceStatus"] = boost::any(*namespaceStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("NamespaceStatus") != m.end() && !m["NamespaceStatus"].empty()) {
      namespaceStatus = make_shared<string>(boost::any_cast<string>(m["NamespaceStatus"]));
    }
  }


  virtual ~ImageNamespace() = default;
};
class ImageRepository : public Darabonba::Model {
public:
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> regionId{};
  shared_ptr<string> repoName{};
  shared_ptr<string> repoNamespace{};
  shared_ptr<string> repoStatus{};
  shared_ptr<string> repository{};

  ImageRepository() {}

  explicit ImageRepository(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (repoName) {
      res["RepoName"] = boost::any(*repoName);
    }
    if (repoNamespace) {
      res["RepoNamespace"] = boost::any(*repoNamespace);
    }
    if (repoStatus) {
      res["RepoStatus"] = boost::any(*repoStatus);
    }
    if (repository) {
      res["Repository"] = boost::any(*repository);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RepoName") != m.end() && !m["RepoName"].empty()) {
      repoName = make_shared<string>(boost::any_cast<string>(m["RepoName"]));
    }
    if (m.find("RepoNamespace") != m.end() && !m["RepoNamespace"].empty()) {
      repoNamespace = make_shared<string>(boost::any_cast<string>(m["RepoNamespace"]));
    }
    if (m.find("RepoStatus") != m.end() && !m["RepoStatus"].empty()) {
      repoStatus = make_shared<string>(boost::any_cast<string>(m["RepoStatus"]));
    }
    if (m.find("Repository") != m.end() && !m["Repository"].empty()) {
      repository = make_shared<string>(boost::any_cast<string>(m["Repository"]));
    }
  }


  virtual ~ImageRepository() = default;
};
class InstanceShutdownTimer : public Darabonba::Model {
public:
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> scheduleTime{};
  shared_ptr<long> ttlInMillis{};

  InstanceShutdownTimer() {}

  explicit InstanceShutdownTimer(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (scheduleTime) {
      res["ScheduleTime"] = boost::any(*scheduleTime);
    }
    if (ttlInMillis) {
      res["TtlInMillis"] = boost::any(*ttlInMillis);
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
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ScheduleTime") != m.end() && !m["ScheduleTime"].empty()) {
      scheduleTime = make_shared<string>(boost::any_cast<string>(m["ScheduleTime"]));
    }
    if (m.find("TtlInMillis") != m.end() && !m["TtlInMillis"].empty()) {
      ttlInMillis = make_shared<long>(boost::any_cast<long>(m["TtlInMillis"]));
    }
  }


  virtual ~InstanceShutdownTimer() = default;
};
class UserVpc : public Darabonba::Model {
public:
  shared_ptr<string> roleArn{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vswitchId{};

  UserVpc() {}

  explicit UserVpc(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (roleArn) {
      res["RoleArn"] = boost::any(*roleArn);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vswitchId) {
      res["VswitchId"] = boost::any(*vswitchId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RoleArn") != m.end() && !m["RoleArn"].empty()) {
      roleArn = make_shared<string>(boost::any_cast<string>(m["RoleArn"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VswitchId") != m.end() && !m["VswitchId"].empty()) {
      vswitchId = make_shared<string>(boost::any_cast<string>(m["VswitchId"]));
    }
  }


  virtual ~UserVpc() = default;
};
class Instance : public Darabonba::Model {
public:
  shared_ptr<long> accumulativeRunningTimeInMillis{};
  shared_ptr<long> accumulativeRunningTimeInMinutes{};
  shared_ptr<string> createUser{};
  shared_ptr<vector<Dataset>> datasetList{};
  shared_ptr<string> ecsSpec{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> imageId{};
  shared_ptr<string> imageName{};
  shared_ptr<string> imageType{};
  shared_ptr<string> imageUrl{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<InstanceShutdownTimer> instanceShutdownTimer{};
  shared_ptr<string> instanceStatus{};
  shared_ptr<string> instanceUrl{};
  shared_ptr<string> instanceVersion{};
  shared_ptr<long> isPublic{};
  shared_ptr<string> jupyterlabUrl{};
  shared_ptr<string> message{};
  shared_ptr<string> nasFileSystemId{};
  shared_ptr<long> payType{};
  shared_ptr<string> payTypeName{};
  shared_ptr<string> resource{};
  shared_ptr<long> resourceType{};
  shared_ptr<bool> shutdownEnabled{};
  shared_ptr<string> terminalUrl{};
  shared_ptr<string> userId{};
  shared_ptr<vector<Image>> userImageList{};
  shared_ptr<UserVpc> userVpc{};
  shared_ptr<string> webIdeUrl{};
  shared_ptr<string> workspaceId{};
  shared_ptr<string> workspaceName{};

  Instance() {}

  explicit Instance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accumulativeRunningTimeInMillis) {
      res["AccumulativeRunningTimeInMillis"] = boost::any(*accumulativeRunningTimeInMillis);
    }
    if (accumulativeRunningTimeInMinutes) {
      res["AccumulativeRunningTimeInMinutes"] = boost::any(*accumulativeRunningTimeInMinutes);
    }
    if (createUser) {
      res["CreateUser"] = boost::any(*createUser);
    }
    if (datasetList) {
      vector<boost::any> temp1;
      for(auto item1:*datasetList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DatasetList"] = boost::any(temp1);
    }
    if (ecsSpec) {
      res["EcsSpec"] = boost::any(*ecsSpec);
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
    if (imageName) {
      res["ImageName"] = boost::any(*imageName);
    }
    if (imageType) {
      res["ImageType"] = boost::any(*imageType);
    }
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (instanceShutdownTimer) {
      res["InstanceShutdownTimer"] = instanceShutdownTimer ? boost::any(instanceShutdownTimer->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (instanceStatus) {
      res["InstanceStatus"] = boost::any(*instanceStatus);
    }
    if (instanceUrl) {
      res["InstanceUrl"] = boost::any(*instanceUrl);
    }
    if (instanceVersion) {
      res["InstanceVersion"] = boost::any(*instanceVersion);
    }
    if (isPublic) {
      res["IsPublic"] = boost::any(*isPublic);
    }
    if (jupyterlabUrl) {
      res["JupyterlabUrl"] = boost::any(*jupyterlabUrl);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (nasFileSystemId) {
      res["NasFileSystemId"] = boost::any(*nasFileSystemId);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (payTypeName) {
      res["PayTypeName"] = boost::any(*payTypeName);
    }
    if (resource) {
      res["Resource"] = boost::any(*resource);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (shutdownEnabled) {
      res["ShutdownEnabled"] = boost::any(*shutdownEnabled);
    }
    if (terminalUrl) {
      res["TerminalUrl"] = boost::any(*terminalUrl);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userImageList) {
      vector<boost::any> temp1;
      for(auto item1:*userImageList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UserImageList"] = boost::any(temp1);
    }
    if (userVpc) {
      res["UserVpc"] = userVpc ? boost::any(userVpc->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (webIdeUrl) {
      res["WebIdeUrl"] = boost::any(*webIdeUrl);
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
    if (m.find("AccumulativeRunningTimeInMillis") != m.end() && !m["AccumulativeRunningTimeInMillis"].empty()) {
      accumulativeRunningTimeInMillis = make_shared<long>(boost::any_cast<long>(m["AccumulativeRunningTimeInMillis"]));
    }
    if (m.find("AccumulativeRunningTimeInMinutes") != m.end() && !m["AccumulativeRunningTimeInMinutes"].empty()) {
      accumulativeRunningTimeInMinutes = make_shared<long>(boost::any_cast<long>(m["AccumulativeRunningTimeInMinutes"]));
    }
    if (m.find("CreateUser") != m.end() && !m["CreateUser"].empty()) {
      createUser = make_shared<string>(boost::any_cast<string>(m["CreateUser"]));
    }
    if (m.find("DatasetList") != m.end() && !m["DatasetList"].empty()) {
      if (typeid(vector<boost::any>) == m["DatasetList"].type()) {
        vector<Dataset> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DatasetList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Dataset model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        datasetList = make_shared<vector<Dataset>>(expect1);
      }
    }
    if (m.find("EcsSpec") != m.end() && !m["EcsSpec"].empty()) {
      ecsSpec = make_shared<string>(boost::any_cast<string>(m["EcsSpec"]));
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
    if (m.find("ImageName") != m.end() && !m["ImageName"].empty()) {
      imageName = make_shared<string>(boost::any_cast<string>(m["ImageName"]));
    }
    if (m.find("ImageType") != m.end() && !m["ImageType"].empty()) {
      imageType = make_shared<string>(boost::any_cast<string>(m["ImageType"]));
    }
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("InstanceShutdownTimer") != m.end() && !m["InstanceShutdownTimer"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceShutdownTimer"].type()) {
        InstanceShutdownTimer model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceShutdownTimer"]));
        instanceShutdownTimer = make_shared<InstanceShutdownTimer>(model1);
      }
    }
    if (m.find("InstanceStatus") != m.end() && !m["InstanceStatus"].empty()) {
      instanceStatus = make_shared<string>(boost::any_cast<string>(m["InstanceStatus"]));
    }
    if (m.find("InstanceUrl") != m.end() && !m["InstanceUrl"].empty()) {
      instanceUrl = make_shared<string>(boost::any_cast<string>(m["InstanceUrl"]));
    }
    if (m.find("InstanceVersion") != m.end() && !m["InstanceVersion"].empty()) {
      instanceVersion = make_shared<string>(boost::any_cast<string>(m["InstanceVersion"]));
    }
    if (m.find("IsPublic") != m.end() && !m["IsPublic"].empty()) {
      isPublic = make_shared<long>(boost::any_cast<long>(m["IsPublic"]));
    }
    if (m.find("JupyterlabUrl") != m.end() && !m["JupyterlabUrl"].empty()) {
      jupyterlabUrl = make_shared<string>(boost::any_cast<string>(m["JupyterlabUrl"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("NasFileSystemId") != m.end() && !m["NasFileSystemId"].empty()) {
      nasFileSystemId = make_shared<string>(boost::any_cast<string>(m["NasFileSystemId"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<long>(boost::any_cast<long>(m["PayType"]));
    }
    if (m.find("PayTypeName") != m.end() && !m["PayTypeName"].empty()) {
      payTypeName = make_shared<string>(boost::any_cast<string>(m["PayTypeName"]));
    }
    if (m.find("Resource") != m.end() && !m["Resource"].empty()) {
      resource = make_shared<string>(boost::any_cast<string>(m["Resource"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<long>(boost::any_cast<long>(m["ResourceType"]));
    }
    if (m.find("ShutdownEnabled") != m.end() && !m["ShutdownEnabled"].empty()) {
      shutdownEnabled = make_shared<bool>(boost::any_cast<bool>(m["ShutdownEnabled"]));
    }
    if (m.find("TerminalUrl") != m.end() && !m["TerminalUrl"].empty()) {
      terminalUrl = make_shared<string>(boost::any_cast<string>(m["TerminalUrl"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserImageList") != m.end() && !m["UserImageList"].empty()) {
      if (typeid(vector<boost::any>) == m["UserImageList"].type()) {
        vector<Image> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UserImageList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Image model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        userImageList = make_shared<vector<Image>>(expect1);
      }
    }
    if (m.find("UserVpc") != m.end() && !m["UserVpc"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserVpc"].type()) {
        UserVpc model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserVpc"]));
        userVpc = make_shared<UserVpc>(model1);
      }
    }
    if (m.find("WebIdeUrl") != m.end() && !m["WebIdeUrl"].empty()) {
      webIdeUrl = make_shared<string>(boost::any_cast<string>(m["WebIdeUrl"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
    if (m.find("WorkspaceName") != m.end() && !m["WorkspaceName"].empty()) {
      workspaceName = make_shared<string>(boost::any_cast<string>(m["WorkspaceName"]));
    }
  }


  virtual ~Instance() = default;
};
class InstanceSnapshot : public Darabonba::Model {
public:
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceSnapshotDescription{};
  shared_ptr<string> instanceSnapshotId{};
  shared_ptr<string> instanceSnapshotName{};
  shared_ptr<string> instanceSnapshotRepoUrl{};
  shared_ptr<string> instanceSnapshotStatus{};
  shared_ptr<string> instanceSnapshotTag{};

  InstanceSnapshot() {}

  explicit InstanceSnapshot(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceSnapshotDescription) {
      res["InstanceSnapshotDescription"] = boost::any(*instanceSnapshotDescription);
    }
    if (instanceSnapshotId) {
      res["InstanceSnapshotId"] = boost::any(*instanceSnapshotId);
    }
    if (instanceSnapshotName) {
      res["InstanceSnapshotName"] = boost::any(*instanceSnapshotName);
    }
    if (instanceSnapshotRepoUrl) {
      res["InstanceSnapshotRepoUrl"] = boost::any(*instanceSnapshotRepoUrl);
    }
    if (instanceSnapshotStatus) {
      res["InstanceSnapshotStatus"] = boost::any(*instanceSnapshotStatus);
    }
    if (instanceSnapshotTag) {
      res["InstanceSnapshotTag"] = boost::any(*instanceSnapshotTag);
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
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceSnapshotDescription") != m.end() && !m["InstanceSnapshotDescription"].empty()) {
      instanceSnapshotDescription = make_shared<string>(boost::any_cast<string>(m["InstanceSnapshotDescription"]));
    }
    if (m.find("InstanceSnapshotId") != m.end() && !m["InstanceSnapshotId"].empty()) {
      instanceSnapshotId = make_shared<string>(boost::any_cast<string>(m["InstanceSnapshotId"]));
    }
    if (m.find("InstanceSnapshotName") != m.end() && !m["InstanceSnapshotName"].empty()) {
      instanceSnapshotName = make_shared<string>(boost::any_cast<string>(m["InstanceSnapshotName"]));
    }
    if (m.find("InstanceSnapshotRepoUrl") != m.end() && !m["InstanceSnapshotRepoUrl"].empty()) {
      instanceSnapshotRepoUrl = make_shared<string>(boost::any_cast<string>(m["InstanceSnapshotRepoUrl"]));
    }
    if (m.find("InstanceSnapshotStatus") != m.end() && !m["InstanceSnapshotStatus"].empty()) {
      instanceSnapshotStatus = make_shared<string>(boost::any_cast<string>(m["InstanceSnapshotStatus"]));
    }
    if (m.find("InstanceSnapshotTag") != m.end() && !m["InstanceSnapshotTag"].empty()) {
      instanceSnapshotTag = make_shared<string>(boost::any_cast<string>(m["InstanceSnapshotTag"]));
    }
  }


  virtual ~InstanceSnapshot() = default;
};
class InstanceStatus : public Darabonba::Model {
public:
  shared_ptr<long> accumulativeRunningTimeInMinutes{};
  shared_ptr<string> instanceId{};
  shared_ptr<InstanceShutdownTimer> instanceShutdownTimer{};
  shared_ptr<string> instanceStatus{};
  shared_ptr<string> msg{};
  shared_ptr<bool> shutdownEnabled{};
  shared_ptr<string> type{};

  InstanceStatus() {}

  explicit InstanceStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accumulativeRunningTimeInMinutes) {
      res["AccumulativeRunningTimeInMinutes"] = boost::any(*accumulativeRunningTimeInMinutes);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceShutdownTimer) {
      res["InstanceShutdownTimer"] = instanceShutdownTimer ? boost::any(instanceShutdownTimer->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (instanceStatus) {
      res["InstanceStatus"] = boost::any(*instanceStatus);
    }
    if (msg) {
      res["Msg"] = boost::any(*msg);
    }
    if (shutdownEnabled) {
      res["ShutdownEnabled"] = boost::any(*shutdownEnabled);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccumulativeRunningTimeInMinutes") != m.end() && !m["AccumulativeRunningTimeInMinutes"].empty()) {
      accumulativeRunningTimeInMinutes = make_shared<long>(boost::any_cast<long>(m["AccumulativeRunningTimeInMinutes"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceShutdownTimer") != m.end() && !m["InstanceShutdownTimer"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceShutdownTimer"].type()) {
        InstanceShutdownTimer model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceShutdownTimer"]));
        instanceShutdownTimer = make_shared<InstanceShutdownTimer>(model1);
      }
    }
    if (m.find("InstanceStatus") != m.end() && !m["InstanceStatus"].empty()) {
      instanceStatus = make_shared<string>(boost::any_cast<string>(m["InstanceStatus"]));
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("ShutdownEnabled") != m.end() && !m["ShutdownEnabled"].empty()) {
      shutdownEnabled = make_shared<bool>(boost::any_cast<bool>(m["ShutdownEnabled"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~InstanceStatus() = default;
};
class InstanceType : public Darabonba::Model {
public:
  shared_ptr<long> cpuCoreCount{};
  shared_ptr<double> discount{};
  shared_ptr<double> domesticPrice{};
  shared_ptr<long> GPUAmount{};
  shared_ptr<string> GPUSpec{};
  shared_ptr<long> instanceBandwidthRx{};
  shared_ptr<long> instanceBandwidthTx{};
  shared_ptr<long> instancePpsRx{};
  shared_ptr<long> instancePpsTx{};
  shared_ptr<string> instanceTypeFamily{};
  shared_ptr<string> instanceTypeId{};
  shared_ptr<bool> international{};
  shared_ptr<long> localStorageCapacity{};
  shared_ptr<double> memorySize{};
  shared_ptr<double> price{};
  shared_ptr<double> priceCNY{};
  shared_ptr<double> priceUSD{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> systemDiskCategory{};
  shared_ptr<long> systemDiskSize{};

  InstanceType() {}

  explicit InstanceType(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpuCoreCount) {
      res["CpuCoreCount"] = boost::any(*cpuCoreCount);
    }
    if (discount) {
      res["Discount"] = boost::any(*discount);
    }
    if (domesticPrice) {
      res["DomesticPrice"] = boost::any(*domesticPrice);
    }
    if (GPUAmount) {
      res["GPUAmount"] = boost::any(*GPUAmount);
    }
    if (GPUSpec) {
      res["GPUSpec"] = boost::any(*GPUSpec);
    }
    if (instanceBandwidthRx) {
      res["InstanceBandwidthRx"] = boost::any(*instanceBandwidthRx);
    }
    if (instanceBandwidthTx) {
      res["InstanceBandwidthTx"] = boost::any(*instanceBandwidthTx);
    }
    if (instancePpsRx) {
      res["InstancePpsRx"] = boost::any(*instancePpsRx);
    }
    if (instancePpsTx) {
      res["InstancePpsTx"] = boost::any(*instancePpsTx);
    }
    if (instanceTypeFamily) {
      res["InstanceTypeFamily"] = boost::any(*instanceTypeFamily);
    }
    if (instanceTypeId) {
      res["InstanceTypeId"] = boost::any(*instanceTypeId);
    }
    if (international) {
      res["International"] = boost::any(*international);
    }
    if (localStorageCapacity) {
      res["LocalStorageCapacity"] = boost::any(*localStorageCapacity);
    }
    if (memorySize) {
      res["MemorySize"] = boost::any(*memorySize);
    }
    if (price) {
      res["Price"] = boost::any(*price);
    }
    if (priceCNY) {
      res["PriceCNY"] = boost::any(*priceCNY);
    }
    if (priceUSD) {
      res["PriceUSD"] = boost::any(*priceUSD);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (systemDiskCategory) {
      res["SystemDiskCategory"] = boost::any(*systemDiskCategory);
    }
    if (systemDiskSize) {
      res["SystemDiskSize"] = boost::any(*systemDiskSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CpuCoreCount") != m.end() && !m["CpuCoreCount"].empty()) {
      cpuCoreCount = make_shared<long>(boost::any_cast<long>(m["CpuCoreCount"]));
    }
    if (m.find("Discount") != m.end() && !m["Discount"].empty()) {
      discount = make_shared<double>(boost::any_cast<double>(m["Discount"]));
    }
    if (m.find("DomesticPrice") != m.end() && !m["DomesticPrice"].empty()) {
      domesticPrice = make_shared<double>(boost::any_cast<double>(m["DomesticPrice"]));
    }
    if (m.find("GPUAmount") != m.end() && !m["GPUAmount"].empty()) {
      GPUAmount = make_shared<long>(boost::any_cast<long>(m["GPUAmount"]));
    }
    if (m.find("GPUSpec") != m.end() && !m["GPUSpec"].empty()) {
      GPUSpec = make_shared<string>(boost::any_cast<string>(m["GPUSpec"]));
    }
    if (m.find("InstanceBandwidthRx") != m.end() && !m["InstanceBandwidthRx"].empty()) {
      instanceBandwidthRx = make_shared<long>(boost::any_cast<long>(m["InstanceBandwidthRx"]));
    }
    if (m.find("InstanceBandwidthTx") != m.end() && !m["InstanceBandwidthTx"].empty()) {
      instanceBandwidthTx = make_shared<long>(boost::any_cast<long>(m["InstanceBandwidthTx"]));
    }
    if (m.find("InstancePpsRx") != m.end() && !m["InstancePpsRx"].empty()) {
      instancePpsRx = make_shared<long>(boost::any_cast<long>(m["InstancePpsRx"]));
    }
    if (m.find("InstancePpsTx") != m.end() && !m["InstancePpsTx"].empty()) {
      instancePpsTx = make_shared<long>(boost::any_cast<long>(m["InstancePpsTx"]));
    }
    if (m.find("InstanceTypeFamily") != m.end() && !m["InstanceTypeFamily"].empty()) {
      instanceTypeFamily = make_shared<string>(boost::any_cast<string>(m["InstanceTypeFamily"]));
    }
    if (m.find("InstanceTypeId") != m.end() && !m["InstanceTypeId"].empty()) {
      instanceTypeId = make_shared<string>(boost::any_cast<string>(m["InstanceTypeId"]));
    }
    if (m.find("International") != m.end() && !m["International"].empty()) {
      international = make_shared<bool>(boost::any_cast<bool>(m["International"]));
    }
    if (m.find("LocalStorageCapacity") != m.end() && !m["LocalStorageCapacity"].empty()) {
      localStorageCapacity = make_shared<long>(boost::any_cast<long>(m["LocalStorageCapacity"]));
    }
    if (m.find("MemorySize") != m.end() && !m["MemorySize"].empty()) {
      memorySize = make_shared<double>(boost::any_cast<double>(m["MemorySize"]));
    }
    if (m.find("Price") != m.end() && !m["Price"].empty()) {
      price = make_shared<double>(boost::any_cast<double>(m["Price"]));
    }
    if (m.find("PriceCNY") != m.end() && !m["PriceCNY"].empty()) {
      priceCNY = make_shared<double>(boost::any_cast<double>(m["PriceCNY"]));
    }
    if (m.find("PriceUSD") != m.end() && !m["PriceUSD"].empty()) {
      priceUSD = make_shared<double>(boost::any_cast<double>(m["PriceUSD"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("SystemDiskCategory") != m.end() && !m["SystemDiskCategory"].empty()) {
      systemDiskCategory = make_shared<string>(boost::any_cast<string>(m["SystemDiskCategory"]));
    }
    if (m.find("SystemDiskSize") != m.end() && !m["SystemDiskSize"].empty()) {
      systemDiskSize = make_shared<long>(boost::any_cast<long>(m["SystemDiskSize"]));
    }
  }


  virtual ~InstanceType() = default;
};
class Nas : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> status{};

  Nas() {}

  explicit Nas(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~Nas() = default;
};
class Region : public Darabonba::Model {
public:
  shared_ptr<string> regionCity{};
  shared_ptr<string> regionId{};
  shared_ptr<string> regionName{};
  shared_ptr<string> regionState{};
  shared_ptr<string> serviceUrl{};

  Region() {}

  explicit Region(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionCity) {
      res["RegionCity"] = boost::any(*regionCity);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (regionName) {
      res["RegionName"] = boost::any(*regionName);
    }
    if (regionState) {
      res["RegionState"] = boost::any(*regionState);
    }
    if (serviceUrl) {
      res["ServiceUrl"] = boost::any(*serviceUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionCity") != m.end() && !m["RegionCity"].empty()) {
      regionCity = make_shared<string>(boost::any_cast<string>(m["RegionCity"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RegionName") != m.end() && !m["RegionName"].empty()) {
      regionName = make_shared<string>(boost::any_cast<string>(m["RegionName"]));
    }
    if (m.find("RegionState") != m.end() && !m["RegionState"].empty()) {
      regionState = make_shared<string>(boost::any_cast<string>(m["RegionState"]));
    }
    if (m.find("ServiceUrl") != m.end() && !m["ServiceUrl"].empty()) {
      serviceUrl = make_shared<string>(boost::any_cast<string>(m["ServiceUrl"]));
    }
  }


  virtual ~Region() = default;
};
class ResourceInfo : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<long> payType{};
  shared_ptr<long> resourceType{};

  ResourceInfo() {}

  explicit ResourceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<long>(boost::any_cast<long>(m["PayType"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<long>(boost::any_cast<long>(m["ResourceType"]));
    }
  }


  virtual ~ResourceInfo() = default;
};
class SecurityGroup : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> securityGroupName{};
  shared_ptr<string> vpcId{};

  SecurityGroup() {}

  explicit SecurityGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
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
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
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


  virtual ~SecurityGroup() = default;
};
class Status : public Darabonba::Model {
public:
  shared_ptr<long> accumulativeRunningTimeInMinutes{};
  shared_ptr<string> instanceId{};
  shared_ptr<InstanceShutdownTimer> instanceShutdownTimer{};
  shared_ptr<string> instanceStatus{};
  shared_ptr<string> msg{};
  shared_ptr<string> type{};

  Status() {}

  explicit Status(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accumulativeRunningTimeInMinutes) {
      res["AccumulativeRunningTimeInMinutes"] = boost::any(*accumulativeRunningTimeInMinutes);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceShutdownTimer) {
      res["InstanceShutdownTimer"] = instanceShutdownTimer ? boost::any(instanceShutdownTimer->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (instanceStatus) {
      res["InstanceStatus"] = boost::any(*instanceStatus);
    }
    if (msg) {
      res["Msg"] = boost::any(*msg);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccumulativeRunningTimeInMinutes") != m.end() && !m["AccumulativeRunningTimeInMinutes"].empty()) {
      accumulativeRunningTimeInMinutes = make_shared<long>(boost::any_cast<long>(m["AccumulativeRunningTimeInMinutes"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceShutdownTimer") != m.end() && !m["InstanceShutdownTimer"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceShutdownTimer"].type()) {
        InstanceShutdownTimer model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceShutdownTimer"]));
        instanceShutdownTimer = make_shared<InstanceShutdownTimer>(model1);
      }
    }
    if (m.find("InstanceStatus") != m.end() && !m["InstanceStatus"].empty()) {
      instanceStatus = make_shared<string>(boost::any_cast<string>(m["InstanceStatus"]));
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~Status() = default;
};
class VSwitch : public Darabonba::Model {
public:
  shared_ptr<long> availableIpAddressCount{};
  shared_ptr<string> cidrBlock{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<bool> isDefault{};
  shared_ptr<string> status{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vSwitchName{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> zoneId{};

  VSwitch() {}

  explicit VSwitch(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (availableIpAddressCount) {
      res["AvailableIpAddressCount"] = boost::any(*availableIpAddressCount);
    }
    if (cidrBlock) {
      res["CidrBlock"] = boost::any(*cidrBlock);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (isDefault) {
      res["IsDefault"] = boost::any(*isDefault);
    }
    if (status) {
      res["Status"] = boost::any(*status);
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
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvailableIpAddressCount") != m.end() && !m["AvailableIpAddressCount"].empty()) {
      availableIpAddressCount = make_shared<long>(boost::any_cast<long>(m["AvailableIpAddressCount"]));
    }
    if (m.find("CidrBlock") != m.end() && !m["CidrBlock"].empty()) {
      cidrBlock = make_shared<string>(boost::any_cast<string>(m["CidrBlock"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("IsDefault") != m.end() && !m["IsDefault"].empty()) {
      isDefault = make_shared<bool>(boost::any_cast<bool>(m["IsDefault"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
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
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~VSwitch() = default;
};
class Vpc : public Darabonba::Model {
public:
  shared_ptr<string> cidrBlock{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<bool> isDefault{};
  shared_ptr<string> status{};
  shared_ptr<string> VRouterId{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vpcName{};

  Vpc() {}

  explicit Vpc(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cidrBlock) {
      res["CidrBlock"] = boost::any(*cidrBlock);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (isDefault) {
      res["IsDefault"] = boost::any(*isDefault);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (VRouterId) {
      res["VRouterId"] = boost::any(*VRouterId);
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
    if (m.find("CidrBlock") != m.end() && !m["CidrBlock"].empty()) {
      cidrBlock = make_shared<string>(boost::any_cast<string>(m["CidrBlock"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("IsDefault") != m.end() && !m["IsDefault"].empty()) {
      isDefault = make_shared<bool>(boost::any_cast<bool>(m["IsDefault"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("VRouterId") != m.end() && !m["VRouterId"].empty()) {
      VRouterId = make_shared<string>(boost::any_cast<string>(m["VRouterId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VpcName") != m.end() && !m["VpcName"].empty()) {
      vpcName = make_shared<string>(boost::any_cast<string>(m["VpcName"]));
    }
  }


  virtual ~Vpc() = default;
};
class CreateImageRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> name{};
  shared_ptr<string> repository{};

  CreateImageRequest() {}

  explicit CreateImageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (repository) {
      res["Repository"] = boost::any(*repository);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Repository") != m.end() && !m["Repository"].empty()) {
      repository = make_shared<string>(boost::any_cast<string>(m["Repository"]));
    }
  }


  virtual ~CreateImageRequest() = default;
};
class CreateImageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> imageId{};
  shared_ptr<string> requestId{};

  CreateImageResponseBody() {}

  explicit CreateImageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateImageResponseBody() = default;
};
class CreateImageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateImageResponseBody> body{};

  CreateImageResponse() {}

  explicit CreateImageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateImageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateImageResponseBody>(model1);
      }
    }
  }


  virtual ~CreateImageResponse() = default;
};
class CreateInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<vector<Dataset>> datasetList{};
  shared_ptr<string> ecsSpec{};
  shared_ptr<map<string, boost::any>> environments{};
  shared_ptr<string> imageId{};
  shared_ptr<string> imageUrl{};
  shared_ptr<string> instanceName{};
  shared_ptr<long> isPublic{};
  shared_ptr<string> nasFileSystemId{};
  shared_ptr<string> userName{};
  shared_ptr<UserVpc> userVpc{};
  shared_ptr<string> workspaceId{};

  CreateInstanceRequest() {}

  explicit CreateInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetList) {
      vector<boost::any> temp1;
      for(auto item1:*datasetList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DatasetList"] = boost::any(temp1);
    }
    if (ecsSpec) {
      res["EcsSpec"] = boost::any(*ecsSpec);
    }
    if (environments) {
      res["Environments"] = boost::any(*environments);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (isPublic) {
      res["IsPublic"] = boost::any(*isPublic);
    }
    if (nasFileSystemId) {
      res["NasFileSystemId"] = boost::any(*nasFileSystemId);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
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
    if (m.find("DatasetList") != m.end() && !m["DatasetList"].empty()) {
      if (typeid(vector<boost::any>) == m["DatasetList"].type()) {
        vector<Dataset> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DatasetList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Dataset model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        datasetList = make_shared<vector<Dataset>>(expect1);
      }
    }
    if (m.find("EcsSpec") != m.end() && !m["EcsSpec"].empty()) {
      ecsSpec = make_shared<string>(boost::any_cast<string>(m["EcsSpec"]));
    }
    if (m.find("Environments") != m.end() && !m["Environments"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Environments"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      environments = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("IsPublic") != m.end() && !m["IsPublic"].empty()) {
      isPublic = make_shared<long>(boost::any_cast<long>(m["IsPublic"]));
    }
    if (m.find("NasFileSystemId") != m.end() && !m["NasFileSystemId"].empty()) {
      nasFileSystemId = make_shared<string>(boost::any_cast<string>(m["NasFileSystemId"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
    if (m.find("UserVpc") != m.end() && !m["UserVpc"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserVpc"].type()) {
        UserVpc model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserVpc"]));
        userVpc = make_shared<UserVpc>(model1);
      }
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~CreateInstanceRequest() = default;
};
class CreateInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> requestId{};

  CreateInstanceResponseBody() {}

  explicit CreateInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateInstanceResponseBody() = default;
};
class CreateInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateInstanceResponseBody> body{};

  CreateInstanceResponse() {}

  explicit CreateInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateInstanceResponse() = default;
};
class CreateInstanceShutdownTimerRequest : public Darabonba::Model {
public:
  shared_ptr<string> scheduleTime{};
  shared_ptr<long> ttlInMillis{};

  CreateInstanceShutdownTimerRequest() {}

  explicit CreateInstanceShutdownTimerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scheduleTime) {
      res["ScheduleTime"] = boost::any(*scheduleTime);
    }
    if (ttlInMillis) {
      res["TtlInMillis"] = boost::any(*ttlInMillis);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ScheduleTime") != m.end() && !m["ScheduleTime"].empty()) {
      scheduleTime = make_shared<string>(boost::any_cast<string>(m["ScheduleTime"]));
    }
    if (m.find("TtlInMillis") != m.end() && !m["TtlInMillis"].empty()) {
      ttlInMillis = make_shared<long>(boost::any_cast<long>(m["TtlInMillis"]));
    }
  }


  virtual ~CreateInstanceShutdownTimerRequest() = default;
};
class CreateInstanceShutdownTimerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> requestId{};

  CreateInstanceShutdownTimerResponseBody() {}

  explicit CreateInstanceShutdownTimerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateInstanceShutdownTimerResponseBody() = default;
};
class CreateInstanceShutdownTimerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateInstanceShutdownTimerResponseBody> body{};

  CreateInstanceShutdownTimerResponse() {}

  explicit CreateInstanceShutdownTimerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateInstanceShutdownTimerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateInstanceShutdownTimerResponseBody>(model1);
      }
    }
  }


  virtual ~CreateInstanceShutdownTimerResponse() = default;
};
class CreateInstanceSnapshotRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceSnapshotDescription{};
  shared_ptr<string> instanceSnapshotName{};
  shared_ptr<string> instanceSnapshotRepoUrl{};

  CreateInstanceSnapshotRequest() {}

  explicit CreateInstanceSnapshotRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceSnapshotDescription) {
      res["InstanceSnapshotDescription"] = boost::any(*instanceSnapshotDescription);
    }
    if (instanceSnapshotName) {
      res["InstanceSnapshotName"] = boost::any(*instanceSnapshotName);
    }
    if (instanceSnapshotRepoUrl) {
      res["InstanceSnapshotRepoUrl"] = boost::any(*instanceSnapshotRepoUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceSnapshotDescription") != m.end() && !m["InstanceSnapshotDescription"].empty()) {
      instanceSnapshotDescription = make_shared<string>(boost::any_cast<string>(m["InstanceSnapshotDescription"]));
    }
    if (m.find("InstanceSnapshotName") != m.end() && !m["InstanceSnapshotName"].empty()) {
      instanceSnapshotName = make_shared<string>(boost::any_cast<string>(m["InstanceSnapshotName"]));
    }
    if (m.find("InstanceSnapshotRepoUrl") != m.end() && !m["InstanceSnapshotRepoUrl"].empty()) {
      instanceSnapshotRepoUrl = make_shared<string>(boost::any_cast<string>(m["InstanceSnapshotRepoUrl"]));
    }
  }


  virtual ~CreateInstanceSnapshotRequest() = default;
};
class CreateInstanceSnapshotResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceSnapshotId{};
  shared_ptr<string> requestId{};

  CreateInstanceSnapshotResponseBody() {}

  explicit CreateInstanceSnapshotResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceSnapshotId) {
      res["InstanceSnapshotId"] = boost::any(*instanceSnapshotId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceSnapshotId") != m.end() && !m["InstanceSnapshotId"].empty()) {
      instanceSnapshotId = make_shared<string>(boost::any_cast<string>(m["InstanceSnapshotId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateInstanceSnapshotResponseBody() = default;
};
class CreateInstanceSnapshotResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateInstanceSnapshotResponseBody> body{};

  CreateInstanceSnapshotResponse() {}

  explicit CreateInstanceSnapshotResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateInstanceSnapshotResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateInstanceSnapshotResponseBody>(model1);
      }
    }
  }


  virtual ~CreateInstanceSnapshotResponse() = default;
};
class DeleteInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> requestId{};

  DeleteInstanceResponseBody() {}

  explicit DeleteInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteInstanceResponseBody() = default;
};
class DeleteInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteInstanceResponseBody> body{};

  DeleteInstanceResponse() {}

  explicit DeleteInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteInstanceResponse() = default;
};
class DeleteInstanceShutdownTimerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> requestId{};

  DeleteInstanceShutdownTimerResponseBody() {}

  explicit DeleteInstanceShutdownTimerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteInstanceShutdownTimerResponseBody() = default;
};
class DeleteInstanceShutdownTimerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteInstanceShutdownTimerResponseBody> body{};

  DeleteInstanceShutdownTimerResponse() {}

  explicit DeleteInstanceShutdownTimerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteInstanceShutdownTimerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteInstanceShutdownTimerResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteInstanceShutdownTimerResponse() = default;
};
class DeleteInstanceSnapshotResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceSnapshotId{};
  shared_ptr<string> requestId{};

  DeleteInstanceSnapshotResponseBody() {}

  explicit DeleteInstanceSnapshotResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceSnapshotId) {
      res["InstanceSnapshotId"] = boost::any(*instanceSnapshotId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceSnapshotId") != m.end() && !m["InstanceSnapshotId"].empty()) {
      instanceSnapshotId = make_shared<string>(boost::any_cast<string>(m["InstanceSnapshotId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteInstanceSnapshotResponseBody() = default;
};
class DeleteInstanceSnapshotResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteInstanceSnapshotResponseBody> body{};

  DeleteInstanceSnapshotResponse() {}

  explicit DeleteInstanceSnapshotResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteInstanceSnapshotResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteInstanceSnapshotResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteInstanceSnapshotResponse() = default;
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
class GetDashboardStatisticsRequest : public Darabonba::Model {
public:
  shared_ptr<string> workspaceId{};

  GetDashboardStatisticsRequest() {}

  explicit GetDashboardStatisticsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetDashboardStatisticsRequest() = default;
};
class GetDashboardStatisticsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> instanceTotal{};
  shared_ptr<long> instsanceRunningTotal{};
  shared_ptr<string> requestId{};

  GetDashboardStatisticsResponseBody() {}

  explicit GetDashboardStatisticsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceTotal) {
      res["InstanceTotal"] = boost::any(*instanceTotal);
    }
    if (instsanceRunningTotal) {
      res["InstsanceRunningTotal"] = boost::any(*instsanceRunningTotal);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceTotal") != m.end() && !m["InstanceTotal"].empty()) {
      instanceTotal = make_shared<long>(boost::any_cast<long>(m["InstanceTotal"]));
    }
    if (m.find("InstsanceRunningTotal") != m.end() && !m["InstsanceRunningTotal"].empty()) {
      instsanceRunningTotal = make_shared<long>(boost::any_cast<long>(m["InstsanceRunningTotal"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetDashboardStatisticsResponseBody() = default;
};
class GetDashboardStatisticsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetDashboardStatisticsResponseBody> body{};

  GetDashboardStatisticsResponse() {}

  explicit GetDashboardStatisticsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDashboardStatisticsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDashboardStatisticsResponseBody>(model1);
      }
    }
  }


  virtual ~GetDashboardStatisticsResponse() = default;
};
class GetInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> accumulativeRunningTimeInMinutes{};
  shared_ptr<string> ecsSpec{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> imageId{};
  shared_ptr<string> imageUrl{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<InstanceShutdownTimer> instanceShutdownTimer{};
  shared_ptr<string> instanceStatus{};
  shared_ptr<string> jupyterlabUrl{};
  shared_ptr<string> nasFileSystemId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> terminalUrl{};
  shared_ptr<string> userId{};
  shared_ptr<UserVpc> userVpc{};
  shared_ptr<string> webIdeUrl{};

  GetInstanceResponseBody() {}

  explicit GetInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accumulativeRunningTimeInMinutes) {
      res["AccumulativeRunningTimeInMinutes"] = boost::any(*accumulativeRunningTimeInMinutes);
    }
    if (ecsSpec) {
      res["EcsSpec"] = boost::any(*ecsSpec);
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
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (instanceShutdownTimer) {
      res["InstanceShutdownTimer"] = instanceShutdownTimer ? boost::any(instanceShutdownTimer->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (instanceStatus) {
      res["InstanceStatus"] = boost::any(*instanceStatus);
    }
    if (jupyterlabUrl) {
      res["JupyterlabUrl"] = boost::any(*jupyterlabUrl);
    }
    if (nasFileSystemId) {
      res["NasFileSystemId"] = boost::any(*nasFileSystemId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (terminalUrl) {
      res["TerminalUrl"] = boost::any(*terminalUrl);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userVpc) {
      res["UserVpc"] = userVpc ? boost::any(userVpc->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (webIdeUrl) {
      res["WebIdeUrl"] = boost::any(*webIdeUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccumulativeRunningTimeInMinutes") != m.end() && !m["AccumulativeRunningTimeInMinutes"].empty()) {
      accumulativeRunningTimeInMinutes = make_shared<long>(boost::any_cast<long>(m["AccumulativeRunningTimeInMinutes"]));
    }
    if (m.find("EcsSpec") != m.end() && !m["EcsSpec"].empty()) {
      ecsSpec = make_shared<string>(boost::any_cast<string>(m["EcsSpec"]));
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
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("InstanceShutdownTimer") != m.end() && !m["InstanceShutdownTimer"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceShutdownTimer"].type()) {
        InstanceShutdownTimer model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceShutdownTimer"]));
        instanceShutdownTimer = make_shared<InstanceShutdownTimer>(model1);
      }
    }
    if (m.find("InstanceStatus") != m.end() && !m["InstanceStatus"].empty()) {
      instanceStatus = make_shared<string>(boost::any_cast<string>(m["InstanceStatus"]));
    }
    if (m.find("JupyterlabUrl") != m.end() && !m["JupyterlabUrl"].empty()) {
      jupyterlabUrl = make_shared<string>(boost::any_cast<string>(m["JupyterlabUrl"]));
    }
    if (m.find("NasFileSystemId") != m.end() && !m["NasFileSystemId"].empty()) {
      nasFileSystemId = make_shared<string>(boost::any_cast<string>(m["NasFileSystemId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TerminalUrl") != m.end() && !m["TerminalUrl"].empty()) {
      terminalUrl = make_shared<string>(boost::any_cast<string>(m["TerminalUrl"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserVpc") != m.end() && !m["UserVpc"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserVpc"].type()) {
        UserVpc model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserVpc"]));
        userVpc = make_shared<UserVpc>(model1);
      }
    }
    if (m.find("WebIdeUrl") != m.end() && !m["WebIdeUrl"].empty()) {
      webIdeUrl = make_shared<string>(boost::any_cast<string>(m["WebIdeUrl"]));
    }
  }


  virtual ~GetInstanceResponseBody() = default;
};
class GetInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetInstanceResponseBody> body{};

  GetInstanceResponse() {}

  explicit GetInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~GetInstanceResponse() = default;
};
class GetInstanceImageResponseBody : public Darabonba::Model {
public:
  shared_ptr<Image> image{};
  shared_ptr<string> requestId{};

  GetInstanceImageResponseBody() {}

  explicit GetInstanceImageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (image) {
      res["Image"] = image ? boost::any(image->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Image") != m.end() && !m["Image"].empty()) {
      if (typeid(map<string, boost::any>) == m["Image"].type()) {
        Image model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Image"]));
        image = make_shared<Image>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetInstanceImageResponseBody() = default;
};
class GetInstanceImageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetInstanceImageResponseBody> body{};

  GetInstanceImageResponse() {}

  explicit GetInstanceImageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetInstanceImageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetInstanceImageResponseBody>(model1);
      }
    }
  }


  virtual ~GetInstanceImageResponse() = default;
};
class GetInstanceShutdownTimerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> scheduleTime{};

  GetInstanceShutdownTimerResponseBody() {}

  explicit GetInstanceShutdownTimerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (scheduleTime) {
      res["ScheduleTime"] = boost::any(*scheduleTime);
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
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ScheduleTime") != m.end() && !m["ScheduleTime"].empty()) {
      scheduleTime = make_shared<string>(boost::any_cast<string>(m["ScheduleTime"]));
    }
  }


  virtual ~GetInstanceShutdownTimerResponseBody() = default;
};
class GetInstanceShutdownTimerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetInstanceShutdownTimerResponseBody> body{};

  GetInstanceShutdownTimerResponse() {}

  explicit GetInstanceShutdownTimerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetInstanceShutdownTimerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetInstanceShutdownTimerResponseBody>(model1);
      }
    }
  }


  virtual ~GetInstanceShutdownTimerResponse() = default;
};
class GetInstanceSnapshotResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceSnapshotDescription{};
  shared_ptr<string> instanceSnapshotId{};
  shared_ptr<string> instanceSnapshotName{};
  shared_ptr<string> instanceSnapshotRepoUrl{};
  shared_ptr<string> instanceSnapshotStatus{};
  shared_ptr<string> instanceSnapshotTag{};
  shared_ptr<string> requestId{};

  GetInstanceSnapshotResponseBody() {}

  explicit GetInstanceSnapshotResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceSnapshotDescription) {
      res["InstanceSnapshotDescription"] = boost::any(*instanceSnapshotDescription);
    }
    if (instanceSnapshotId) {
      res["InstanceSnapshotId"] = boost::any(*instanceSnapshotId);
    }
    if (instanceSnapshotName) {
      res["InstanceSnapshotName"] = boost::any(*instanceSnapshotName);
    }
    if (instanceSnapshotRepoUrl) {
      res["InstanceSnapshotRepoUrl"] = boost::any(*instanceSnapshotRepoUrl);
    }
    if (instanceSnapshotStatus) {
      res["InstanceSnapshotStatus"] = boost::any(*instanceSnapshotStatus);
    }
    if (instanceSnapshotTag) {
      res["InstanceSnapshotTag"] = boost::any(*instanceSnapshotTag);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceSnapshotDescription") != m.end() && !m["InstanceSnapshotDescription"].empty()) {
      instanceSnapshotDescription = make_shared<string>(boost::any_cast<string>(m["InstanceSnapshotDescription"]));
    }
    if (m.find("InstanceSnapshotId") != m.end() && !m["InstanceSnapshotId"].empty()) {
      instanceSnapshotId = make_shared<string>(boost::any_cast<string>(m["InstanceSnapshotId"]));
    }
    if (m.find("InstanceSnapshotName") != m.end() && !m["InstanceSnapshotName"].empty()) {
      instanceSnapshotName = make_shared<string>(boost::any_cast<string>(m["InstanceSnapshotName"]));
    }
    if (m.find("InstanceSnapshotRepoUrl") != m.end() && !m["InstanceSnapshotRepoUrl"].empty()) {
      instanceSnapshotRepoUrl = make_shared<string>(boost::any_cast<string>(m["InstanceSnapshotRepoUrl"]));
    }
    if (m.find("InstanceSnapshotStatus") != m.end() && !m["InstanceSnapshotStatus"].empty()) {
      instanceSnapshotStatus = make_shared<string>(boost::any_cast<string>(m["InstanceSnapshotStatus"]));
    }
    if (m.find("InstanceSnapshotTag") != m.end() && !m["InstanceSnapshotTag"].empty()) {
      instanceSnapshotTag = make_shared<string>(boost::any_cast<string>(m["InstanceSnapshotTag"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetInstanceSnapshotResponseBody() = default;
};
class GetInstanceSnapshotResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetInstanceSnapshotResponseBody> body{};

  GetInstanceSnapshotResponse() {}

  explicit GetInstanceSnapshotResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetInstanceSnapshotResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetInstanceSnapshotResponseBody>(model1);
      }
    }
  }


  virtual ~GetInstanceSnapshotResponse() = default;
};
class GetInstanceTypeResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> cpuCoreCount{};
  shared_ptr<double> discount{};
  shared_ptr<double> domesticPrice{};
  shared_ptr<long> GPUAmount{};
  shared_ptr<string> GPUSpec{};
  shared_ptr<long> instanceBandwidthRx{};
  shared_ptr<long> instanceBandwidthTx{};
  shared_ptr<long> instancePpsRx{};
  shared_ptr<long> instancePpsTx{};
  shared_ptr<string> instanceTypeFamily{};
  shared_ptr<string> instanceTypeId{};
  shared_ptr<bool> international{};
  shared_ptr<long> localStorageCapacity{};
  shared_ptr<double> memorySize{};
  shared_ptr<double> price{};
  shared_ptr<double> priceCNY{};
  shared_ptr<double> priceUSD{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> systemDiskCategory{};
  shared_ptr<long> systemDiskSize{};

  GetInstanceTypeResponseBody() {}

  explicit GetInstanceTypeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpuCoreCount) {
      res["CpuCoreCount"] = boost::any(*cpuCoreCount);
    }
    if (discount) {
      res["Discount"] = boost::any(*discount);
    }
    if (domesticPrice) {
      res["DomesticPrice"] = boost::any(*domesticPrice);
    }
    if (GPUAmount) {
      res["GPUAmount"] = boost::any(*GPUAmount);
    }
    if (GPUSpec) {
      res["GPUSpec"] = boost::any(*GPUSpec);
    }
    if (instanceBandwidthRx) {
      res["InstanceBandwidthRx"] = boost::any(*instanceBandwidthRx);
    }
    if (instanceBandwidthTx) {
      res["InstanceBandwidthTx"] = boost::any(*instanceBandwidthTx);
    }
    if (instancePpsRx) {
      res["InstancePpsRx"] = boost::any(*instancePpsRx);
    }
    if (instancePpsTx) {
      res["InstancePpsTx"] = boost::any(*instancePpsTx);
    }
    if (instanceTypeFamily) {
      res["InstanceTypeFamily"] = boost::any(*instanceTypeFamily);
    }
    if (instanceTypeId) {
      res["InstanceTypeId"] = boost::any(*instanceTypeId);
    }
    if (international) {
      res["International"] = boost::any(*international);
    }
    if (localStorageCapacity) {
      res["LocalStorageCapacity"] = boost::any(*localStorageCapacity);
    }
    if (memorySize) {
      res["MemorySize"] = boost::any(*memorySize);
    }
    if (price) {
      res["Price"] = boost::any(*price);
    }
    if (priceCNY) {
      res["PriceCNY"] = boost::any(*priceCNY);
    }
    if (priceUSD) {
      res["PriceUSD"] = boost::any(*priceUSD);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (systemDiskCategory) {
      res["SystemDiskCategory"] = boost::any(*systemDiskCategory);
    }
    if (systemDiskSize) {
      res["SystemDiskSize"] = boost::any(*systemDiskSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CpuCoreCount") != m.end() && !m["CpuCoreCount"].empty()) {
      cpuCoreCount = make_shared<long>(boost::any_cast<long>(m["CpuCoreCount"]));
    }
    if (m.find("Discount") != m.end() && !m["Discount"].empty()) {
      discount = make_shared<double>(boost::any_cast<double>(m["Discount"]));
    }
    if (m.find("DomesticPrice") != m.end() && !m["DomesticPrice"].empty()) {
      domesticPrice = make_shared<double>(boost::any_cast<double>(m["DomesticPrice"]));
    }
    if (m.find("GPUAmount") != m.end() && !m["GPUAmount"].empty()) {
      GPUAmount = make_shared<long>(boost::any_cast<long>(m["GPUAmount"]));
    }
    if (m.find("GPUSpec") != m.end() && !m["GPUSpec"].empty()) {
      GPUSpec = make_shared<string>(boost::any_cast<string>(m["GPUSpec"]));
    }
    if (m.find("InstanceBandwidthRx") != m.end() && !m["InstanceBandwidthRx"].empty()) {
      instanceBandwidthRx = make_shared<long>(boost::any_cast<long>(m["InstanceBandwidthRx"]));
    }
    if (m.find("InstanceBandwidthTx") != m.end() && !m["InstanceBandwidthTx"].empty()) {
      instanceBandwidthTx = make_shared<long>(boost::any_cast<long>(m["InstanceBandwidthTx"]));
    }
    if (m.find("InstancePpsRx") != m.end() && !m["InstancePpsRx"].empty()) {
      instancePpsRx = make_shared<long>(boost::any_cast<long>(m["InstancePpsRx"]));
    }
    if (m.find("InstancePpsTx") != m.end() && !m["InstancePpsTx"].empty()) {
      instancePpsTx = make_shared<long>(boost::any_cast<long>(m["InstancePpsTx"]));
    }
    if (m.find("InstanceTypeFamily") != m.end() && !m["InstanceTypeFamily"].empty()) {
      instanceTypeFamily = make_shared<string>(boost::any_cast<string>(m["InstanceTypeFamily"]));
    }
    if (m.find("InstanceTypeId") != m.end() && !m["InstanceTypeId"].empty()) {
      instanceTypeId = make_shared<string>(boost::any_cast<string>(m["InstanceTypeId"]));
    }
    if (m.find("International") != m.end() && !m["International"].empty()) {
      international = make_shared<bool>(boost::any_cast<bool>(m["International"]));
    }
    if (m.find("LocalStorageCapacity") != m.end() && !m["LocalStorageCapacity"].empty()) {
      localStorageCapacity = make_shared<long>(boost::any_cast<long>(m["LocalStorageCapacity"]));
    }
    if (m.find("MemorySize") != m.end() && !m["MemorySize"].empty()) {
      memorySize = make_shared<double>(boost::any_cast<double>(m["MemorySize"]));
    }
    if (m.find("Price") != m.end() && !m["Price"].empty()) {
      price = make_shared<double>(boost::any_cast<double>(m["Price"]));
    }
    if (m.find("PriceCNY") != m.end() && !m["PriceCNY"].empty()) {
      priceCNY = make_shared<double>(boost::any_cast<double>(m["PriceCNY"]));
    }
    if (m.find("PriceUSD") != m.end() && !m["PriceUSD"].empty()) {
      priceUSD = make_shared<double>(boost::any_cast<double>(m["PriceUSD"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("SystemDiskCategory") != m.end() && !m["SystemDiskCategory"].empty()) {
      systemDiskCategory = make_shared<string>(boost::any_cast<string>(m["SystemDiskCategory"]));
    }
    if (m.find("SystemDiskSize") != m.end() && !m["SystemDiskSize"].empty()) {
      systemDiskSize = make_shared<long>(boost::any_cast<long>(m["SystemDiskSize"]));
    }
  }


  virtual ~GetInstanceTypeResponseBody() = default;
};
class GetInstanceTypeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetInstanceTypeResponseBody> body{};

  GetInstanceTypeResponse() {}

  explicit GetInstanceTypeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetInstanceTypeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetInstanceTypeResponseBody>(model1);
      }
    }
  }


  virtual ~GetInstanceTypeResponse() = default;
};
class GetInstanceUrlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> ide{};
  shared_ptr<string> lab{};
  shared_ptr<string> requestId{};
  shared_ptr<string> terminal{};

  GetInstanceUrlResponseBody() {}

  explicit GetInstanceUrlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ide) {
      res["Ide"] = boost::any(*ide);
    }
    if (lab) {
      res["Lab"] = boost::any(*lab);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (terminal) {
      res["Terminal"] = boost::any(*terminal);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ide") != m.end() && !m["Ide"].empty()) {
      ide = make_shared<string>(boost::any_cast<string>(m["Ide"]));
    }
    if (m.find("Lab") != m.end() && !m["Lab"].empty()) {
      lab = make_shared<string>(boost::any_cast<string>(m["Lab"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Terminal") != m.end() && !m["Terminal"].empty()) {
      terminal = make_shared<string>(boost::any_cast<string>(m["Terminal"]));
    }
  }


  virtual ~GetInstanceUrlResponseBody() = default;
};
class GetInstanceUrlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetInstanceUrlResponseBody> body{};

  GetInstanceUrlResponse() {}

  explicit GetInstanceUrlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetInstanceUrlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetInstanceUrlResponseBody>(model1);
      }
    }
  }


  virtual ~GetInstanceUrlResponse() = default;
};
class GetInstancesStatisticsRequest : public Darabonba::Model {
public:
  shared_ptr<string> workspaceIds{};

  GetInstancesStatisticsRequest() {}

  explicit GetInstancesStatisticsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetInstancesStatisticsRequest() = default;
};
class GetInstancesStatisticsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> statistics{};

  GetInstancesStatisticsResponseBody() {}

  explicit GetInstancesStatisticsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetInstancesStatisticsResponseBody() = default;
};
class GetInstancesStatisticsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetInstancesStatisticsResponseBody> body{};

  GetInstancesStatisticsResponse() {}

  explicit GetInstancesStatisticsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetInstancesStatisticsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetInstancesStatisticsResponseBody>(model1);
      }
    }
  }


  virtual ~GetInstancesStatisticsResponse() = default;
};
class GetUserConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> currentFeatureVersion{};
  shared_ptr<bool> enableEmrCluster{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> useOnSaleVersion{};
  shared_ptr<bool> useV21Feature{};

  GetUserConfigResponseBody() {}

  explicit GetUserConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentFeatureVersion) {
      res["CurrentFeatureVersion"] = boost::any(*currentFeatureVersion);
    }
    if (enableEmrCluster) {
      res["EnableEmrCluster"] = boost::any(*enableEmrCluster);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (useOnSaleVersion) {
      res["UseOnSaleVersion"] = boost::any(*useOnSaleVersion);
    }
    if (useV21Feature) {
      res["UseV21Feature"] = boost::any(*useV21Feature);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentFeatureVersion") != m.end() && !m["CurrentFeatureVersion"].empty()) {
      currentFeatureVersion = make_shared<string>(boost::any_cast<string>(m["CurrentFeatureVersion"]));
    }
    if (m.find("EnableEmrCluster") != m.end() && !m["EnableEmrCluster"].empty()) {
      enableEmrCluster = make_shared<bool>(boost::any_cast<bool>(m["EnableEmrCluster"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UseOnSaleVersion") != m.end() && !m["UseOnSaleVersion"].empty()) {
      useOnSaleVersion = make_shared<bool>(boost::any_cast<bool>(m["UseOnSaleVersion"]));
    }
    if (m.find("UseV21Feature") != m.end() && !m["UseV21Feature"].empty()) {
      useV21Feature = make_shared<bool>(boost::any_cast<bool>(m["UseV21Feature"]));
    }
  }


  virtual ~GetUserConfigResponseBody() = default;
};
class GetUserConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetUserConfigResponseBody> body{};

  GetUserConfigResponse() {}

  explicit GetUserConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetUserConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUserConfigResponseBody>(model1);
      }
    }
  }


  virtual ~GetUserConfigResponse() = default;
};
class GetUserResourceAuthorizationStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<double> accountBalance{};
  shared_ptr<bool> accountSufficient{};
  shared_ptr<string> accountTopUpPage{};
  shared_ptr<string> allAuthorizationPage{};
  shared_ptr<string> buyPage{};
  shared_ptr<double> couponBalance{};
  shared_ptr<string> currentFeatureVersion{};
  shared_ptr<bool> disableBalanceCheck{};
  shared_ptr<string> dswDefaultAuthorizationPage{};
  shared_ptr<string> env{};
  shared_ptr<string> essConsolePage{};
  shared_ptr<bool> essServiceAvailable{};
  shared_ptr<bool> hasAllAuthorization{};
  shared_ptr<bool> hasDswDefaultAuthorization{};
  shared_ptr<bool> international{};
  shared_ptr<bool> isSubUser{};
  shared_ptr<string> nasConsolePage{};
  shared_ptr<bool> realNameVerified{};
  shared_ptr<string> realNameVerifiedPage{};
  shared_ptr<string> region{};
  shared_ptr<string> requestId{};
  shared_ptr<string> subUserAuthorizationPage{};
  shared_ptr<bool> subUserAuthorized{};
  shared_ptr<double> totalBalance{};

  GetUserResourceAuthorizationStatusResponseBody() {}

  explicit GetUserResourceAuthorizationStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountBalance) {
      res["AccountBalance"] = boost::any(*accountBalance);
    }
    if (accountSufficient) {
      res["AccountSufficient"] = boost::any(*accountSufficient);
    }
    if (accountTopUpPage) {
      res["AccountTopUpPage"] = boost::any(*accountTopUpPage);
    }
    if (allAuthorizationPage) {
      res["AllAuthorizationPage"] = boost::any(*allAuthorizationPage);
    }
    if (buyPage) {
      res["BuyPage"] = boost::any(*buyPage);
    }
    if (couponBalance) {
      res["CouponBalance"] = boost::any(*couponBalance);
    }
    if (currentFeatureVersion) {
      res["CurrentFeatureVersion"] = boost::any(*currentFeatureVersion);
    }
    if (disableBalanceCheck) {
      res["DisableBalanceCheck"] = boost::any(*disableBalanceCheck);
    }
    if (dswDefaultAuthorizationPage) {
      res["DswDefaultAuthorizationPage"] = boost::any(*dswDefaultAuthorizationPage);
    }
    if (env) {
      res["Env"] = boost::any(*env);
    }
    if (essConsolePage) {
      res["EssConsolePage"] = boost::any(*essConsolePage);
    }
    if (essServiceAvailable) {
      res["EssServiceAvailable"] = boost::any(*essServiceAvailable);
    }
    if (hasAllAuthorization) {
      res["HasAllAuthorization"] = boost::any(*hasAllAuthorization);
    }
    if (hasDswDefaultAuthorization) {
      res["HasDswDefaultAuthorization"] = boost::any(*hasDswDefaultAuthorization);
    }
    if (international) {
      res["International"] = boost::any(*international);
    }
    if (isSubUser) {
      res["IsSubUser"] = boost::any(*isSubUser);
    }
    if (nasConsolePage) {
      res["NasConsolePage"] = boost::any(*nasConsolePage);
    }
    if (realNameVerified) {
      res["RealNameVerified"] = boost::any(*realNameVerified);
    }
    if (realNameVerifiedPage) {
      res["RealNameVerifiedPage"] = boost::any(*realNameVerifiedPage);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (subUserAuthorizationPage) {
      res["SubUserAuthorizationPage"] = boost::any(*subUserAuthorizationPage);
    }
    if (subUserAuthorized) {
      res["SubUserAuthorized"] = boost::any(*subUserAuthorized);
    }
    if (totalBalance) {
      res["TotalBalance"] = boost::any(*totalBalance);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountBalance") != m.end() && !m["AccountBalance"].empty()) {
      accountBalance = make_shared<double>(boost::any_cast<double>(m["AccountBalance"]));
    }
    if (m.find("AccountSufficient") != m.end() && !m["AccountSufficient"].empty()) {
      accountSufficient = make_shared<bool>(boost::any_cast<bool>(m["AccountSufficient"]));
    }
    if (m.find("AccountTopUpPage") != m.end() && !m["AccountTopUpPage"].empty()) {
      accountTopUpPage = make_shared<string>(boost::any_cast<string>(m["AccountTopUpPage"]));
    }
    if (m.find("AllAuthorizationPage") != m.end() && !m["AllAuthorizationPage"].empty()) {
      allAuthorizationPage = make_shared<string>(boost::any_cast<string>(m["AllAuthorizationPage"]));
    }
    if (m.find("BuyPage") != m.end() && !m["BuyPage"].empty()) {
      buyPage = make_shared<string>(boost::any_cast<string>(m["BuyPage"]));
    }
    if (m.find("CouponBalance") != m.end() && !m["CouponBalance"].empty()) {
      couponBalance = make_shared<double>(boost::any_cast<double>(m["CouponBalance"]));
    }
    if (m.find("CurrentFeatureVersion") != m.end() && !m["CurrentFeatureVersion"].empty()) {
      currentFeatureVersion = make_shared<string>(boost::any_cast<string>(m["CurrentFeatureVersion"]));
    }
    if (m.find("DisableBalanceCheck") != m.end() && !m["DisableBalanceCheck"].empty()) {
      disableBalanceCheck = make_shared<bool>(boost::any_cast<bool>(m["DisableBalanceCheck"]));
    }
    if (m.find("DswDefaultAuthorizationPage") != m.end() && !m["DswDefaultAuthorizationPage"].empty()) {
      dswDefaultAuthorizationPage = make_shared<string>(boost::any_cast<string>(m["DswDefaultAuthorizationPage"]));
    }
    if (m.find("Env") != m.end() && !m["Env"].empty()) {
      env = make_shared<string>(boost::any_cast<string>(m["Env"]));
    }
    if (m.find("EssConsolePage") != m.end() && !m["EssConsolePage"].empty()) {
      essConsolePage = make_shared<string>(boost::any_cast<string>(m["EssConsolePage"]));
    }
    if (m.find("EssServiceAvailable") != m.end() && !m["EssServiceAvailable"].empty()) {
      essServiceAvailable = make_shared<bool>(boost::any_cast<bool>(m["EssServiceAvailable"]));
    }
    if (m.find("HasAllAuthorization") != m.end() && !m["HasAllAuthorization"].empty()) {
      hasAllAuthorization = make_shared<bool>(boost::any_cast<bool>(m["HasAllAuthorization"]));
    }
    if (m.find("HasDswDefaultAuthorization") != m.end() && !m["HasDswDefaultAuthorization"].empty()) {
      hasDswDefaultAuthorization = make_shared<bool>(boost::any_cast<bool>(m["HasDswDefaultAuthorization"]));
    }
    if (m.find("International") != m.end() && !m["International"].empty()) {
      international = make_shared<bool>(boost::any_cast<bool>(m["International"]));
    }
    if (m.find("IsSubUser") != m.end() && !m["IsSubUser"].empty()) {
      isSubUser = make_shared<bool>(boost::any_cast<bool>(m["IsSubUser"]));
    }
    if (m.find("NasConsolePage") != m.end() && !m["NasConsolePage"].empty()) {
      nasConsolePage = make_shared<string>(boost::any_cast<string>(m["NasConsolePage"]));
    }
    if (m.find("RealNameVerified") != m.end() && !m["RealNameVerified"].empty()) {
      realNameVerified = make_shared<bool>(boost::any_cast<bool>(m["RealNameVerified"]));
    }
    if (m.find("RealNameVerifiedPage") != m.end() && !m["RealNameVerifiedPage"].empty()) {
      realNameVerifiedPage = make_shared<string>(boost::any_cast<string>(m["RealNameVerifiedPage"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SubUserAuthorizationPage") != m.end() && !m["SubUserAuthorizationPage"].empty()) {
      subUserAuthorizationPage = make_shared<string>(boost::any_cast<string>(m["SubUserAuthorizationPage"]));
    }
    if (m.find("SubUserAuthorized") != m.end() && !m["SubUserAuthorized"].empty()) {
      subUserAuthorized = make_shared<bool>(boost::any_cast<bool>(m["SubUserAuthorized"]));
    }
    if (m.find("TotalBalance") != m.end() && !m["TotalBalance"].empty()) {
      totalBalance = make_shared<double>(boost::any_cast<double>(m["TotalBalance"]));
    }
  }


  virtual ~GetUserResourceAuthorizationStatusResponseBody() = default;
};
class GetUserResourceAuthorizationStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetUserResourceAuthorizationStatusResponseBody> body{};

  GetUserResourceAuthorizationStatusResponse() {}

  explicit GetUserResourceAuthorizationStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetUserResourceAuthorizationStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUserResourceAuthorizationStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetUserResourceAuthorizationStatusResponse() = default;
};
class GetUserResourceStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<double> accountBalance{};
  shared_ptr<bool> accountSufficient{};
  shared_ptr<string> accountTopUpPage{};
  shared_ptr<string> allAuthorizationPage{};
  shared_ptr<double> couponBalance{};
  shared_ptr<string> env{};
  shared_ptr<bool> hasAllAuthorization{};
  shared_ptr<bool> international{};
  shared_ptr<bool> realNameVerified{};
  shared_ptr<string> realNameVerifiedPage{};
  shared_ptr<string> region{};
  shared_ptr<string> requestId{};
  shared_ptr<double> totalBalance{};

  GetUserResourceStatusResponseBody() {}

  explicit GetUserResourceStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountBalance) {
      res["AccountBalance"] = boost::any(*accountBalance);
    }
    if (accountSufficient) {
      res["AccountSufficient"] = boost::any(*accountSufficient);
    }
    if (accountTopUpPage) {
      res["AccountTopUpPage"] = boost::any(*accountTopUpPage);
    }
    if (allAuthorizationPage) {
      res["AllAuthorizationPage"] = boost::any(*allAuthorizationPage);
    }
    if (couponBalance) {
      res["CouponBalance"] = boost::any(*couponBalance);
    }
    if (env) {
      res["Env"] = boost::any(*env);
    }
    if (hasAllAuthorization) {
      res["HasAllAuthorization"] = boost::any(*hasAllAuthorization);
    }
    if (international) {
      res["International"] = boost::any(*international);
    }
    if (realNameVerified) {
      res["RealNameVerified"] = boost::any(*realNameVerified);
    }
    if (realNameVerifiedPage) {
      res["RealNameVerifiedPage"] = boost::any(*realNameVerifiedPage);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalBalance) {
      res["TotalBalance"] = boost::any(*totalBalance);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountBalance") != m.end() && !m["AccountBalance"].empty()) {
      accountBalance = make_shared<double>(boost::any_cast<double>(m["AccountBalance"]));
    }
    if (m.find("AccountSufficient") != m.end() && !m["AccountSufficient"].empty()) {
      accountSufficient = make_shared<bool>(boost::any_cast<bool>(m["AccountSufficient"]));
    }
    if (m.find("AccountTopUpPage") != m.end() && !m["AccountTopUpPage"].empty()) {
      accountTopUpPage = make_shared<string>(boost::any_cast<string>(m["AccountTopUpPage"]));
    }
    if (m.find("AllAuthorizationPage") != m.end() && !m["AllAuthorizationPage"].empty()) {
      allAuthorizationPage = make_shared<string>(boost::any_cast<string>(m["AllAuthorizationPage"]));
    }
    if (m.find("CouponBalance") != m.end() && !m["CouponBalance"].empty()) {
      couponBalance = make_shared<double>(boost::any_cast<double>(m["CouponBalance"]));
    }
    if (m.find("Env") != m.end() && !m["Env"].empty()) {
      env = make_shared<string>(boost::any_cast<string>(m["Env"]));
    }
    if (m.find("HasAllAuthorization") != m.end() && !m["HasAllAuthorization"].empty()) {
      hasAllAuthorization = make_shared<bool>(boost::any_cast<bool>(m["HasAllAuthorization"]));
    }
    if (m.find("International") != m.end() && !m["International"].empty()) {
      international = make_shared<bool>(boost::any_cast<bool>(m["International"]));
    }
    if (m.find("RealNameVerified") != m.end() && !m["RealNameVerified"].empty()) {
      realNameVerified = make_shared<bool>(boost::any_cast<bool>(m["RealNameVerified"]));
    }
    if (m.find("RealNameVerifiedPage") != m.end() && !m["RealNameVerifiedPage"].empty()) {
      realNameVerifiedPage = make_shared<string>(boost::any_cast<string>(m["RealNameVerifiedPage"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalBalance") != m.end() && !m["TotalBalance"].empty()) {
      totalBalance = make_shared<double>(boost::any_cast<double>(m["TotalBalance"]));
    }
  }


  virtual ~GetUserResourceStatusResponseBody() = default;
};
class GetUserResourceStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetUserResourceStatusResponseBody> body{};

  GetUserResourceStatusResponse() {}

  explicit GetUserResourceStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetUserResourceStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUserResourceStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetUserResourceStatusResponse() = default;
};
class GetUserSpecialVersionGpuResourceInfoRequest : public Darabonba::Model {
public:
  shared_ptr<long> payType{};

  GetUserSpecialVersionGpuResourceInfoRequest() {}

  explicit GetUserSpecialVersionGpuResourceInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<long>(boost::any_cast<long>(m["PayType"]));
    }
  }


  virtual ~GetUserSpecialVersionGpuResourceInfoRequest() = default;
};
class GetUserSpecialVersionGpuResourceInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> gpuAvailableQuota{};
  shared_ptr<long> gpuTotalQuota{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ResourceInfo>> resources{};

  GetUserSpecialVersionGpuResourceInfoResponseBody() {}

  explicit GetUserSpecialVersionGpuResourceInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gpuAvailableQuota) {
      res["GpuAvailableQuota"] = boost::any(*gpuAvailableQuota);
    }
    if (gpuTotalQuota) {
      res["GpuTotalQuota"] = boost::any(*gpuTotalQuota);
    }
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GpuAvailableQuota") != m.end() && !m["GpuAvailableQuota"].empty()) {
      gpuAvailableQuota = make_shared<long>(boost::any_cast<long>(m["GpuAvailableQuota"]));
    }
    if (m.find("GpuTotalQuota") != m.end() && !m["GpuTotalQuota"].empty()) {
      gpuTotalQuota = make_shared<long>(boost::any_cast<long>(m["GpuTotalQuota"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      if (typeid(vector<boost::any>) == m["Resources"].type()) {
        vector<ResourceInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Resources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ResourceInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resources = make_shared<vector<ResourceInfo>>(expect1);
      }
    }
  }


  virtual ~GetUserSpecialVersionGpuResourceInfoResponseBody() = default;
};
class GetUserSpecialVersionGpuResourceInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetUserSpecialVersionGpuResourceInfoResponseBody> body{};

  GetUserSpecialVersionGpuResourceInfoResponse() {}

  explicit GetUserSpecialVersionGpuResourceInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetUserSpecialVersionGpuResourceInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUserSpecialVersionGpuResourceInfoResponseBody>(model1);
      }
    }
  }


  virtual ~GetUserSpecialVersionGpuResourceInfoResponse() = default;
};
class ListConfigsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<Config>> configs{};
  shared_ptr<string> requestId{};

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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Configs") != m.end() && !m["Configs"].empty()) {
      if (typeid(vector<boost::any>) == m["Configs"].type()) {
        vector<Config> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Configs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Config model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configs = make_shared<vector<Config>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListConfigsResponseBody() = default;
};
class ListConfigsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListConfigsResponseBody> body{};

  ListConfigsResponse() {}

  explicit ListConfigsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListConfigsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListConfigsResponseBody>(model1);
      }
    }
  }


  virtual ~ListConfigsResponse() = default;
};
class ListDatasetsRequest : public Darabonba::Model {
public:
  shared_ptr<string> workspaceId{};

  ListDatasetsRequest() {}

  explicit ListDatasetsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListDatasetsRequest() = default;
};
class ListDatasetsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<Dataset>> datasets{};
  shared_ptr<string> requestId{};

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
  }


  virtual ~ListDatasetsResponseBody() = default;
};
class ListDatasetsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListDatasetsResponseBody> body{};

  ListDatasetsResponse() {}

  explicit ListDatasetsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDatasetsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDatasetsResponseBody>(model1);
      }
    }
  }


  virtual ~ListDatasetsResponse() = default;
};
class ListEcsSpecsRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceleratorTypeEquals{};

  ListEcsSpecsRequest() {}

  explicit ListEcsSpecsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceleratorTypeEquals) {
      res["AcceleratorTypeEquals"] = boost::any(*acceleratorTypeEquals);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceleratorTypeEquals") != m.end() && !m["AcceleratorTypeEquals"].empty()) {
      acceleratorTypeEquals = make_shared<string>(boost::any_cast<string>(m["AcceleratorTypeEquals"]));
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
  shared_ptr<string> acceleratorTypeEquals{};
  shared_ptr<string> imageNameContains{};
  shared_ptr<string> imageTypeEquals{};
  shared_ptr<string> product{};
  shared_ptr<string> workspaceId{};

  ListImagesRequest() {}

  explicit ListImagesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceleratorTypeEquals) {
      res["AcceleratorTypeEquals"] = boost::any(*acceleratorTypeEquals);
    }
    if (imageNameContains) {
      res["ImageNameContains"] = boost::any(*imageNameContains);
    }
    if (imageTypeEquals) {
      res["ImageTypeEquals"] = boost::any(*imageTypeEquals);
    }
    if (product) {
      res["Product"] = boost::any(*product);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceleratorTypeEquals") != m.end() && !m["AcceleratorTypeEquals"].empty()) {
      acceleratorTypeEquals = make_shared<string>(boost::any_cast<string>(m["AcceleratorTypeEquals"]));
    }
    if (m.find("ImageNameContains") != m.end() && !m["ImageNameContains"].empty()) {
      imageNameContains = make_shared<string>(boost::any_cast<string>(m["ImageNameContains"]));
    }
    if (m.find("ImageTypeEquals") != m.end() && !m["ImageTypeEquals"].empty()) {
      imageTypeEquals = make_shared<string>(boost::any_cast<string>(m["ImageTypeEquals"]));
    }
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["Product"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~ListImagesRequest() = default;
};
class ListImagesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<Image>> images{};
  shared_ptr<string> requestId{};

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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Images") != m.end() && !m["Images"].empty()) {
      if (typeid(vector<boost::any>) == m["Images"].type()) {
        vector<Image> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Images"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Image model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        images = make_shared<vector<Image>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
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
class ListInstanceSnapshotsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<InstanceSnapshot>> instanceSnapshots{};
  shared_ptr<string> requestId{};

  ListInstanceSnapshotsResponseBody() {}

  explicit ListInstanceSnapshotsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceSnapshots) {
      vector<boost::any> temp1;
      for(auto item1:*instanceSnapshots){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstanceSnapshots"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceSnapshots") != m.end() && !m["InstanceSnapshots"].empty()) {
      if (typeid(vector<boost::any>) == m["InstanceSnapshots"].type()) {
        vector<InstanceSnapshot> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanceSnapshots"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            InstanceSnapshot model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceSnapshots = make_shared<vector<InstanceSnapshot>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListInstanceSnapshotsResponseBody() = default;
};
class ListInstanceSnapshotsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListInstanceSnapshotsResponseBody> body{};

  ListInstanceSnapshotsResponse() {}

  explicit ListInstanceSnapshotsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListInstanceSnapshotsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListInstanceSnapshotsResponseBody>(model1);
      }
    }
  }


  virtual ~ListInstanceSnapshotsResponse() = default;
};
class ListInstanceTypesRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceleratorType{};

  ListInstanceTypesRequest() {}

  explicit ListInstanceTypesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceleratorType) {
      res["AcceleratorType"] = boost::any(*acceleratorType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceleratorType") != m.end() && !m["AcceleratorType"].empty()) {
      acceleratorType = make_shared<string>(boost::any_cast<string>(m["AcceleratorType"]));
    }
  }


  virtual ~ListInstanceTypesRequest() = default;
};
class ListInstanceTypesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<InstanceType>> instanceTypes{};
  shared_ptr<string> requestId{};

  ListInstanceTypesResponseBody() {}

  explicit ListInstanceTypesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceTypes) {
      vector<boost::any> temp1;
      for(auto item1:*instanceTypes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstanceTypes"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceTypes") != m.end() && !m["InstanceTypes"].empty()) {
      if (typeid(vector<boost::any>) == m["InstanceTypes"].type()) {
        vector<InstanceType> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanceTypes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            InstanceType model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceTypes = make_shared<vector<InstanceType>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListInstanceTypesResponseBody() = default;
};
class ListInstanceTypesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListInstanceTypesResponseBody> body{};

  ListInstanceTypesResponse() {}

  explicit ListInstanceTypesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListInstanceTypesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListInstanceTypesResponseBody>(model1);
      }
    }
  }


  virtual ~ListInstanceTypesResponse() = default;
};
class ListInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<bool> inWorkspace{};
  shared_ptr<string> instanceNameContains{};
  shared_ptr<string> instanceStatusEquals{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> sortOrder{};
  shared_ptr<string> workspaceIdEquals{};

  ListInstancesRequest() {}

  explicit ListInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inWorkspace) {
      res["InWorkspace"] = boost::any(*inWorkspace);
    }
    if (instanceNameContains) {
      res["InstanceNameContains"] = boost::any(*instanceNameContains);
    }
    if (instanceStatusEquals) {
      res["InstanceStatusEquals"] = boost::any(*instanceStatusEquals);
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
    if (sortOrder) {
      res["SortOrder"] = boost::any(*sortOrder);
    }
    if (workspaceIdEquals) {
      res["WorkspaceIdEquals"] = boost::any(*workspaceIdEquals);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InWorkspace") != m.end() && !m["InWorkspace"].empty()) {
      inWorkspace = make_shared<bool>(boost::any_cast<bool>(m["InWorkspace"]));
    }
    if (m.find("InstanceNameContains") != m.end() && !m["InstanceNameContains"].empty()) {
      instanceNameContains = make_shared<string>(boost::any_cast<string>(m["InstanceNameContains"]));
    }
    if (m.find("InstanceStatusEquals") != m.end() && !m["InstanceStatusEquals"].empty()) {
      instanceStatusEquals = make_shared<string>(boost::any_cast<string>(m["InstanceStatusEquals"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("SortOrder") != m.end() && !m["SortOrder"].empty()) {
      sortOrder = make_shared<string>(boost::any_cast<string>(m["SortOrder"]));
    }
    if (m.find("WorkspaceIdEquals") != m.end() && !m["WorkspaceIdEquals"].empty()) {
      workspaceIdEquals = make_shared<string>(boost::any_cast<string>(m["WorkspaceIdEquals"]));
    }
  }


  virtual ~ListInstancesRequest() = default;
};
class ListInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<Instance>> instances{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListInstancesResponseBody() {}

  explicit ListInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instances) {
      vector<boost::any> temp1;
      for(auto item1:*instances){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Instances"] = boost::any(temp1);
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
    if (m.find("Instances") != m.end() && !m["Instances"].empty()) {
      if (typeid(vector<boost::any>) == m["Instances"].type()) {
        vector<Instance> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Instances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Instance model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instances = make_shared<vector<Instance>>(expect1);
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


  virtual ~ListInstancesResponseBody() = default;
};
class ListInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListInstancesResponseBody> body{};

  ListInstancesResponse() {}

  explicit ListInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~ListInstancesResponse() = default;
};
class ListInstancesStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceIds{};

  ListInstancesStatusRequest() {}

  explicit ListInstancesStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      instanceIds = make_shared<string>(boost::any_cast<string>(m["InstanceIds"]));
    }
  }


  virtual ~ListInstancesStatusRequest() = default;
};
class ListInstancesStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<InstanceStatus>> statuses{};

  ListInstancesStatusResponseBody() {}

  explicit ListInstancesStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (statuses) {
      vector<boost::any> temp1;
      for(auto item1:*statuses){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Statuses"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Statuses") != m.end() && !m["Statuses"].empty()) {
      if (typeid(vector<boost::any>) == m["Statuses"].type()) {
        vector<InstanceStatus> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Statuses"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            InstanceStatus model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        statuses = make_shared<vector<InstanceStatus>>(expect1);
      }
    }
  }


  virtual ~ListInstancesStatusResponseBody() = default;
};
class ListInstancesStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListInstancesStatusResponseBody> body{};

  ListInstancesStatusResponse() {}

  explicit ListInstancesStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListInstancesStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListInstancesStatusResponseBody>(model1);
      }
    }
  }


  virtual ~ListInstancesStatusResponse() = default;
};
class ListNamespacesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ImageNamespace>> namespaces{};
  shared_ptr<string> requestId{};

  ListNamespacesResponseBody() {}

  explicit ListNamespacesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (namespaces) {
      vector<boost::any> temp1;
      for(auto item1:*namespaces){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Namespaces"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Namespaces") != m.end() && !m["Namespaces"].empty()) {
      if (typeid(vector<boost::any>) == m["Namespaces"].type()) {
        vector<ImageNamespace> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Namespaces"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ImageNamespace model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        namespaces = make_shared<vector<ImageNamespace>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListNamespacesResponseBody() = default;
};
class ListNamespacesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListNamespacesResponseBody> body{};

  ListNamespacesResponse() {}

  explicit ListNamespacesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListNamespacesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListNamespacesResponseBody>(model1);
      }
    }
  }


  virtual ~ListNamespacesResponse() = default;
};
class ListNasesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<Nas>> nases{};
  shared_ptr<string> requestId{};

  ListNasesResponseBody() {}

  explicit ListNasesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nases) {
      vector<boost::any> temp1;
      for(auto item1:*nases){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Nases"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Nases") != m.end() && !m["Nases"].empty()) {
      if (typeid(vector<boost::any>) == m["Nases"].type()) {
        vector<Nas> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Nases"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Nas model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nases = make_shared<vector<Nas>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListNasesResponseBody() = default;
};
class ListNasesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListNasesResponseBody> body{};

  ListNasesResponse() {}

  explicit ListNasesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListNasesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListNasesResponseBody>(model1);
      }
    }
  }


  virtual ~ListNasesResponse() = default;
};
class ListNetworkSecurityGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<SecurityGroup>> securityGroups{};

  ListNetworkSecurityGroupsResponseBody() {}

  explicit ListNetworkSecurityGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SecurityGroups") != m.end() && !m["SecurityGroups"].empty()) {
      if (typeid(vector<boost::any>) == m["SecurityGroups"].type()) {
        vector<SecurityGroup> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SecurityGroups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SecurityGroup model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        securityGroups = make_shared<vector<SecurityGroup>>(expect1);
      }
    }
  }


  virtual ~ListNetworkSecurityGroupsResponseBody() = default;
};
class ListNetworkSecurityGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListNetworkSecurityGroupsResponseBody> body{};

  ListNetworkSecurityGroupsResponse() {}

  explicit ListNetworkSecurityGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListNetworkSecurityGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListNetworkSecurityGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~ListNetworkSecurityGroupsResponse() = default;
};
class ListNetworkVSwitchesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<VSwitch>> vSwitches{};

  ListNetworkVSwitchesResponseBody() {}

  explicit ListNetworkVSwitchesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (vSwitches) {
      vector<boost::any> temp1;
      for(auto item1:*vSwitches){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VSwitches"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("VSwitches") != m.end() && !m["VSwitches"].empty()) {
      if (typeid(vector<boost::any>) == m["VSwitches"].type()) {
        vector<VSwitch> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VSwitches"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            VSwitch model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        vSwitches = make_shared<vector<VSwitch>>(expect1);
      }
    }
  }


  virtual ~ListNetworkVSwitchesResponseBody() = default;
};
class ListNetworkVSwitchesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListNetworkVSwitchesResponseBody> body{};

  ListNetworkVSwitchesResponse() {}

  explicit ListNetworkVSwitchesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListNetworkVSwitchesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListNetworkVSwitchesResponseBody>(model1);
      }
    }
  }


  virtual ~ListNetworkVSwitchesResponse() = default;
};
class ListNetworkVpcsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<Vpc>> vpcs{};

  ListNetworkVpcsResponseBody() {}

  explicit ListNetworkVpcsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("Vpcs") != m.end() && !m["Vpcs"].empty()) {
      if (typeid(vector<boost::any>) == m["Vpcs"].type()) {
        vector<Vpc> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Vpcs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Vpc model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        vpcs = make_shared<vector<Vpc>>(expect1);
      }
    }
  }


  virtual ~ListNetworkVpcsResponseBody() = default;
};
class ListNetworkVpcsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListNetworkVpcsResponseBody> body{};

  ListNetworkVpcsResponse() {}

  explicit ListNetworkVpcsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListNetworkVpcsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListNetworkVpcsResponseBody>(model1);
      }
    }
  }


  virtual ~ListNetworkVpcsResponse() = default;
};
class ListRegionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<Region>> regions{};
  shared_ptr<string> requestId{};

  ListRegionsResponseBody() {}

  explicit ListRegionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regions) {
      vector<boost::any> temp1;
      for(auto item1:*regions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Regions"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Regions") != m.end() && !m["Regions"].empty()) {
      if (typeid(vector<boost::any>) == m["Regions"].type()) {
        vector<Region> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Regions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Region model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        regions = make_shared<vector<Region>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListRegionsResponseBody() = default;
};
class ListRegionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListRegionsResponseBody> body{};

  ListRegionsResponse() {}

  explicit ListRegionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRegionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRegionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListRegionsResponse() = default;
};
class ListRepositoriesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ImageRepository>> repositories{};
  shared_ptr<string> requestId{};

  ListRepositoriesResponseBody() {}

  explicit ListRepositoriesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (repositories) {
      vector<boost::any> temp1;
      for(auto item1:*repositories){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Repositories"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Repositories") != m.end() && !m["Repositories"].empty()) {
      if (typeid(vector<boost::any>) == m["Repositories"].type()) {
        vector<ImageRepository> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Repositories"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ImageRepository model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        repositories = make_shared<vector<ImageRepository>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListRepositoriesResponseBody() = default;
};
class ListRepositoriesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListRepositoriesResponseBody> body{};

  ListRepositoriesResponse() {}

  explicit ListRepositoriesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRepositoriesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRepositoriesResponseBody>(model1);
      }
    }
  }


  virtual ~ListRepositoriesResponse() = default;
};
class ListUserClustersResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<Cluster>> clusters{};
  shared_ptr<string> requestId{};

  ListUserClustersResponseBody() {}

  explicit ListUserClustersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Clusters") != m.end() && !m["Clusters"].empty()) {
      if (typeid(vector<boost::any>) == m["Clusters"].type()) {
        vector<Cluster> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Clusters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Cluster model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        clusters = make_shared<vector<Cluster>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListUserClustersResponseBody() = default;
};
class ListUserClustersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListUserClustersResponseBody> body{};

  ListUserClustersResponse() {}

  explicit ListUserClustersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListUserClustersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListUserClustersResponseBody>(model1);
      }
    }
  }


  virtual ~ListUserClustersResponse() = default;
};
class ListUserWorkNodesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};

  ListUserWorkNodesRequest() {}

  explicit ListUserWorkNodesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
  }


  virtual ~ListUserWorkNodesRequest() = default;
};
class ListUserWorkNodesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ListUserWorkNodesResponseBody() {}

  explicit ListUserWorkNodesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListUserWorkNodesResponseBody() = default;
};
class ListUserWorkNodesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListUserWorkNodesResponseBody> body{};

  ListUserWorkNodesResponse() {}

  explicit ListUserWorkNodesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListUserWorkNodesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListUserWorkNodesResponseBody>(model1);
      }
    }
  }


  virtual ~ListUserWorkNodesResponse() = default;
};
class StartInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> requestId{};

  StartInstanceResponseBody() {}

  explicit StartInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~StartInstanceResponseBody() = default;
};
class StartInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StartInstanceResponseBody> body{};

  StartInstanceResponse() {}

  explicit StartInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~StartInstanceResponse() = default;
};
class StopInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<bool> saveImage{};

  StopInstanceRequest() {}

  explicit StopInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (saveImage) {
      res["SaveImage"] = boost::any(*saveImage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SaveImage") != m.end() && !m["SaveImage"].empty()) {
      saveImage = make_shared<bool>(boost::any_cast<bool>(m["SaveImage"]));
    }
  }


  virtual ~StopInstanceRequest() = default;
};
class StopInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> requestId{};

  StopInstanceResponseBody() {}

  explicit StopInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~StopInstanceResponseBody() = default;
};
class StopInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StopInstanceResponseBody> body{};

  StopInstanceResponse() {}

  explicit StopInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~StopInstanceResponse() = default;
};
class UpdateInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceName{};

  UpdateInstanceRequest() {}

  explicit UpdateInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
  }


  virtual ~UpdateInstanceRequest() = default;
};
class UpdateInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> requestId{};

  UpdateInstanceResponseBody() {}

  explicit UpdateInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateInstanceResponseBody() = default;
};
class UpdateInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateInstanceResponseBody> body{};

  UpdateInstanceResponse() {}

  explicit UpdateInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateInstanceResponse() = default;
};
class UpdateInstanceSnapshotRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceSnapshotName{};

  UpdateInstanceSnapshotRequest() {}

  explicit UpdateInstanceSnapshotRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceSnapshotName) {
      res["InstanceSnapshotName"] = boost::any(*instanceSnapshotName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceSnapshotName") != m.end() && !m["InstanceSnapshotName"].empty()) {
      instanceSnapshotName = make_shared<string>(boost::any_cast<string>(m["InstanceSnapshotName"]));
    }
  }


  virtual ~UpdateInstanceSnapshotRequest() = default;
};
class UpdateInstanceSnapshotResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceSnapshotId{};
  shared_ptr<string> requestId{};

  UpdateInstanceSnapshotResponseBody() {}

  explicit UpdateInstanceSnapshotResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceSnapshotId) {
      res["InstanceSnapshotId"] = boost::any(*instanceSnapshotId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceSnapshotId") != m.end() && !m["InstanceSnapshotId"].empty()) {
      instanceSnapshotId = make_shared<string>(boost::any_cast<string>(m["InstanceSnapshotId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateInstanceSnapshotResponseBody() = default;
};
class UpdateInstanceSnapshotResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateInstanceSnapshotResponseBody> body{};

  UpdateInstanceSnapshotResponse() {}

  explicit UpdateInstanceSnapshotResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateInstanceSnapshotResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateInstanceSnapshotResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateInstanceSnapshotResponse() = default;
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
  CreateImageResponse createImage(shared_ptr<CreateImageRequest> request);
  CreateImageResponse createImageWithOptions(shared_ptr<CreateImageRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateInstanceResponse createInstance(shared_ptr<CreateInstanceRequest> request);
  CreateInstanceResponse createInstanceWithOptions(shared_ptr<CreateInstanceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateInstanceShutdownTimerResponse createInstanceShutdownTimer(shared_ptr<string> InstanceId, shared_ptr<CreateInstanceShutdownTimerRequest> request);
  CreateInstanceShutdownTimerResponse createInstanceShutdownTimerWithOptions(shared_ptr<string> InstanceId,
                                                                             shared_ptr<CreateInstanceShutdownTimerRequest> request,
                                                                             shared_ptr<map<string, string>> headers,
                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateInstanceSnapshotResponse createInstanceSnapshot(shared_ptr<string> InstanceId, shared_ptr<CreateInstanceSnapshotRequest> request);
  CreateInstanceSnapshotResponse createInstanceSnapshotWithOptions(shared_ptr<string> InstanceId,
                                                                   shared_ptr<CreateInstanceSnapshotRequest> request,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteInstanceResponse deleteInstance(shared_ptr<string> InstanceId);
  DeleteInstanceResponse deleteInstanceWithOptions(shared_ptr<string> InstanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteInstanceShutdownTimerResponse deleteInstanceShutdownTimer(shared_ptr<string> InstanceId);
  DeleteInstanceShutdownTimerResponse deleteInstanceShutdownTimerWithOptions(shared_ptr<string> InstanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteInstanceSnapshotResponse deleteInstanceSnapshot(shared_ptr<string> InstanceId, shared_ptr<string> InstanceSnapshotId);
  DeleteInstanceSnapshotResponse deleteInstanceSnapshotWithOptions(shared_ptr<string> InstanceId,
                                                                   shared_ptr<string> InstanceSnapshotId,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAuthorizationResponse getAuthorization();
  GetAuthorizationResponse getAuthorizationWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDashboardStatisticsResponse getDashboardStatistics(shared_ptr<GetDashboardStatisticsRequest> request);
  GetDashboardStatisticsResponse getDashboardStatisticsWithOptions(shared_ptr<GetDashboardStatisticsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetInstanceResponse getInstance(shared_ptr<string> InstanceId);
  GetInstanceResponse getInstanceWithOptions(shared_ptr<string> InstanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetInstanceImageResponse getInstanceImage(shared_ptr<string> InstanceId);
  GetInstanceImageResponse getInstanceImageWithOptions(shared_ptr<string> InstanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetInstanceShutdownTimerResponse getInstanceShutdownTimer(shared_ptr<string> InstanceId);
  GetInstanceShutdownTimerResponse getInstanceShutdownTimerWithOptions(shared_ptr<string> InstanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetInstanceSnapshotResponse getInstanceSnapshot(shared_ptr<string> InstanceId, shared_ptr<string> InstanceSnapshotId);
  GetInstanceSnapshotResponse getInstanceSnapshotWithOptions(shared_ptr<string> InstanceId,
                                                             shared_ptr<string> InstanceSnapshotId,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetInstanceTypeResponse getInstanceType(shared_ptr<string> InstanceTypeId);
  GetInstanceTypeResponse getInstanceTypeWithOptions(shared_ptr<string> InstanceTypeId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetInstanceUrlResponse getInstanceUrl(shared_ptr<string> InstanceId);
  GetInstanceUrlResponse getInstanceUrlWithOptions(shared_ptr<string> InstanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetInstancesStatisticsResponse getInstancesStatistics(shared_ptr<GetInstancesStatisticsRequest> request);
  GetInstancesStatisticsResponse getInstancesStatisticsWithOptions(shared_ptr<GetInstancesStatisticsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserConfigResponse getUserConfig();
  GetUserConfigResponse getUserConfigWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserResourceAuthorizationStatusResponse getUserResourceAuthorizationStatus();
  GetUserResourceAuthorizationStatusResponse getUserResourceAuthorizationStatusWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserResourceStatusResponse getUserResourceStatus();
  GetUserResourceStatusResponse getUserResourceStatusWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserSpecialVersionGpuResourceInfoResponse getUserSpecialVersionGpuResourceInfo(shared_ptr<GetUserSpecialVersionGpuResourceInfoRequest> request);
  GetUserSpecialVersionGpuResourceInfoResponse getUserSpecialVersionGpuResourceInfoWithOptions(shared_ptr<GetUserSpecialVersionGpuResourceInfoRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListConfigsResponse listConfigs();
  ListConfigsResponse listConfigsWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDatasetsResponse listDatasets(shared_ptr<ListDatasetsRequest> request);
  ListDatasetsResponse listDatasetsWithOptions(shared_ptr<ListDatasetsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListEcsSpecsResponse listEcsSpecs(shared_ptr<ListEcsSpecsRequest> request);
  ListEcsSpecsResponse listEcsSpecsWithOptions(shared_ptr<ListEcsSpecsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListImagesResponse listImages(shared_ptr<ListImagesRequest> request);
  ListImagesResponse listImagesWithOptions(shared_ptr<ListImagesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListInstanceSnapshotsResponse listInstanceSnapshots(shared_ptr<string> InstanceId);
  ListInstanceSnapshotsResponse listInstanceSnapshotsWithOptions(shared_ptr<string> InstanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListInstanceTypesResponse listInstanceTypes(shared_ptr<ListInstanceTypesRequest> request);
  ListInstanceTypesResponse listInstanceTypesWithOptions(shared_ptr<ListInstanceTypesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListInstancesResponse listInstances(shared_ptr<ListInstancesRequest> request);
  ListInstancesResponse listInstancesWithOptions(shared_ptr<ListInstancesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListInstancesStatusResponse listInstancesStatus(shared_ptr<ListInstancesStatusRequest> request);
  ListInstancesStatusResponse listInstancesStatusWithOptions(shared_ptr<ListInstancesStatusRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListNamespacesResponse listNamespaces();
  ListNamespacesResponse listNamespacesWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListNasesResponse listNases();
  ListNasesResponse listNasesWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListNetworkSecurityGroupsResponse listNetworkSecurityGroups(shared_ptr<string> VpcId);
  ListNetworkSecurityGroupsResponse listNetworkSecurityGroupsWithOptions(shared_ptr<string> VpcId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListNetworkVSwitchesResponse listNetworkVSwitches(shared_ptr<string> VpcId);
  ListNetworkVSwitchesResponse listNetworkVSwitchesWithOptions(shared_ptr<string> VpcId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListNetworkVpcsResponse listNetworkVpcs();
  ListNetworkVpcsResponse listNetworkVpcsWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRegionsResponse listRegions();
  ListRegionsResponse listRegionsWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRepositoriesResponse listRepositories(shared_ptr<string> Namespace_);
  ListRepositoriesResponse listRepositoriesWithOptions(shared_ptr<string> Namespace_, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListUserClustersResponse listUserClusters();
  ListUserClustersResponse listUserClustersWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListUserWorkNodesResponse listUserWorkNodes(shared_ptr<ListUserWorkNodesRequest> request);
  ListUserWorkNodesResponse listUserWorkNodesWithOptions(shared_ptr<ListUserWorkNodesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartInstanceResponse startInstance(shared_ptr<string> InstanceId);
  StartInstanceResponse startInstanceWithOptions(shared_ptr<string> InstanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopInstanceResponse stopInstance(shared_ptr<string> InstanceId, shared_ptr<StopInstanceRequest> request);
  StopInstanceResponse stopInstanceWithOptions(shared_ptr<string> InstanceId,
                                               shared_ptr<StopInstanceRequest> request,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateInstanceResponse updateInstance(shared_ptr<string> InstanceId, shared_ptr<UpdateInstanceRequest> request);
  UpdateInstanceResponse updateInstanceWithOptions(shared_ptr<string> InstanceId,
                                                   shared_ptr<UpdateInstanceRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateInstanceSnapshotResponse updateInstanceSnapshot(shared_ptr<string> InstanceId, shared_ptr<string> InstanceSnapshotId, shared_ptr<UpdateInstanceSnapshotRequest> request);
  UpdateInstanceSnapshotResponse updateInstanceSnapshotWithOptions(shared_ptr<string> InstanceId,
                                                                   shared_ptr<string> InstanceSnapshotId,
                                                                   shared_ptr<UpdateInstanceSnapshotRequest> request,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Pai-dsw20210226

#endif
