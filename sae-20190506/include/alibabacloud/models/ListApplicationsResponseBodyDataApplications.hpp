// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONSRESPONSEBODYDATAAPPLICATIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONSRESPONSEBODYDATAAPPLICATIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListApplicationsResponseBodyDataApplicationsChildren.hpp>
#include <alibabacloud/models/ListApplicationsResponseBodyDataApplicationsTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListApplicationsResponseBodyDataApplications : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationsResponseBodyDataApplications& obj) { 
      DARABONBA_PTR_TO_JSON(AppDeletingStatus, appDeletingStatus_);
      DARABONBA_PTR_TO_JSON(AppDescription, appDescription_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(BaseAppId, baseAppId_);
      DARABONBA_PTR_TO_JSON(Children, children_);
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(DiskSize, diskSize_);
      DARABONBA_PTR_TO_JSON(EnableIdle, enableIdle_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(IsStateful, isStateful_);
      DARABONBA_PTR_TO_JSON(Mem, mem_);
      DARABONBA_PTR_TO_JSON(MseEnabled, mseEnabled_);
      DARABONBA_PTR_TO_JSON(MseNamespaceId, mseNamespaceId_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(NamespaceName, namespaceName_);
      DARABONBA_PTR_TO_JSON(NewSaeVersion, newSaeVersion_);
      DARABONBA_PTR_TO_JSON(PackageUrl, packageUrl_);
      DARABONBA_PTR_TO_JSON(ProgrammingLanguage, programmingLanguage_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(RunningInstances, runningInstances_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationsResponseBodyDataApplications& obj) { 
      DARABONBA_PTR_FROM_JSON(AppDeletingStatus, appDeletingStatus_);
      DARABONBA_PTR_FROM_JSON(AppDescription, appDescription_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(BaseAppId, baseAppId_);
      DARABONBA_PTR_FROM_JSON(Children, children_);
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(DiskSize, diskSize_);
      DARABONBA_PTR_FROM_JSON(EnableIdle, enableIdle_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(IsStateful, isStateful_);
      DARABONBA_PTR_FROM_JSON(Mem, mem_);
      DARABONBA_PTR_FROM_JSON(MseEnabled, mseEnabled_);
      DARABONBA_PTR_FROM_JSON(MseNamespaceId, mseNamespaceId_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(NamespaceName, namespaceName_);
      DARABONBA_PTR_FROM_JSON(NewSaeVersion, newSaeVersion_);
      DARABONBA_PTR_FROM_JSON(PackageUrl, packageUrl_);
      DARABONBA_PTR_FROM_JSON(ProgrammingLanguage, programmingLanguage_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(RunningInstances, runningInstances_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    ListApplicationsResponseBodyDataApplications() = default ;
    ListApplicationsResponseBodyDataApplications(const ListApplicationsResponseBodyDataApplications &) = default ;
    ListApplicationsResponseBodyDataApplications(ListApplicationsResponseBodyDataApplications &&) = default ;
    ListApplicationsResponseBodyDataApplications(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationsResponseBodyDataApplications() = default ;
    ListApplicationsResponseBodyDataApplications& operator=(const ListApplicationsResponseBodyDataApplications &) = default ;
    ListApplicationsResponseBodyDataApplications& operator=(ListApplicationsResponseBodyDataApplications &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appDeletingStatus_ == nullptr
        && return this->appDescription_ == nullptr && return this->appId_ == nullptr && return this->appName_ == nullptr && return this->appType_ == nullptr && return this->baseAppId_ == nullptr
        && return this->children_ == nullptr && return this->cpu_ == nullptr && return this->diskSize_ == nullptr && return this->enableIdle_ == nullptr && return this->imageUrl_ == nullptr
        && return this->instances_ == nullptr && return this->isStateful_ == nullptr && return this->mem_ == nullptr && return this->mseEnabled_ == nullptr && return this->mseNamespaceId_ == nullptr
        && return this->namespaceId_ == nullptr && return this->namespaceName_ == nullptr && return this->newSaeVersion_ == nullptr && return this->packageUrl_ == nullptr && return this->programmingLanguage_ == nullptr
        && return this->regionId_ == nullptr && return this->resourceType_ == nullptr && return this->runningInstances_ == nullptr && return this->tags_ == nullptr && return this->vpcId_ == nullptr; };
    // appDeletingStatus Field Functions 
    bool hasAppDeletingStatus() const { return this->appDeletingStatus_ != nullptr;};
    void deleteAppDeletingStatus() { this->appDeletingStatus_ = nullptr;};
    inline bool appDeletingStatus() const { DARABONBA_PTR_GET_DEFAULT(appDeletingStatus_, false) };
    inline ListApplicationsResponseBodyDataApplications& setAppDeletingStatus(bool appDeletingStatus) { DARABONBA_PTR_SET_VALUE(appDeletingStatus_, appDeletingStatus) };


    // appDescription Field Functions 
    bool hasAppDescription() const { return this->appDescription_ != nullptr;};
    void deleteAppDescription() { this->appDescription_ = nullptr;};
    inline string appDescription() const { DARABONBA_PTR_GET_DEFAULT(appDescription_, "") };
    inline ListApplicationsResponseBodyDataApplications& setAppDescription(string appDescription) { DARABONBA_PTR_SET_VALUE(appDescription_, appDescription) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListApplicationsResponseBodyDataApplications& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListApplicationsResponseBodyDataApplications& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string appType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline ListApplicationsResponseBodyDataApplications& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // baseAppId Field Functions 
    bool hasBaseAppId() const { return this->baseAppId_ != nullptr;};
    void deleteBaseAppId() { this->baseAppId_ = nullptr;};
    inline string baseAppId() const { DARABONBA_PTR_GET_DEFAULT(baseAppId_, "") };
    inline ListApplicationsResponseBodyDataApplications& setBaseAppId(string baseAppId) { DARABONBA_PTR_SET_VALUE(baseAppId_, baseAppId) };


    // children Field Functions 
    bool hasChildren() const { return this->children_ != nullptr;};
    void deleteChildren() { this->children_ = nullptr;};
    inline const vector<Models::ListApplicationsResponseBodyDataApplicationsChildren> & children() const { DARABONBA_PTR_GET_CONST(children_, vector<Models::ListApplicationsResponseBodyDataApplicationsChildren>) };
    inline vector<Models::ListApplicationsResponseBodyDataApplicationsChildren> children() { DARABONBA_PTR_GET(children_, vector<Models::ListApplicationsResponseBodyDataApplicationsChildren>) };
    inline ListApplicationsResponseBodyDataApplications& setChildren(const vector<Models::ListApplicationsResponseBodyDataApplicationsChildren> & children) { DARABONBA_PTR_SET_VALUE(children_, children) };
    inline ListApplicationsResponseBodyDataApplications& setChildren(vector<Models::ListApplicationsResponseBodyDataApplicationsChildren> && children) { DARABONBA_PTR_SET_RVALUE(children_, children) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int32_t cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
    inline ListApplicationsResponseBodyDataApplications& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // diskSize Field Functions 
    bool hasDiskSize() const { return this->diskSize_ != nullptr;};
    void deleteDiskSize() { this->diskSize_ = nullptr;};
    inline int32_t diskSize() const { DARABONBA_PTR_GET_DEFAULT(diskSize_, 0) };
    inline ListApplicationsResponseBodyDataApplications& setDiskSize(int32_t diskSize) { DARABONBA_PTR_SET_VALUE(diskSize_, diskSize) };


    // enableIdle Field Functions 
    bool hasEnableIdle() const { return this->enableIdle_ != nullptr;};
    void deleteEnableIdle() { this->enableIdle_ = nullptr;};
    inline string enableIdle() const { DARABONBA_PTR_GET_DEFAULT(enableIdle_, "") };
    inline ListApplicationsResponseBodyDataApplications& setEnableIdle(string enableIdle) { DARABONBA_PTR_SET_VALUE(enableIdle_, enableIdle) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string imageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline ListApplicationsResponseBodyDataApplications& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline int32_t instances() const { DARABONBA_PTR_GET_DEFAULT(instances_, 0) };
    inline ListApplicationsResponseBodyDataApplications& setInstances(int32_t instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };


    // isStateful Field Functions 
    bool hasIsStateful() const { return this->isStateful_ != nullptr;};
    void deleteIsStateful() { this->isStateful_ = nullptr;};
    inline bool isStateful() const { DARABONBA_PTR_GET_DEFAULT(isStateful_, false) };
    inline ListApplicationsResponseBodyDataApplications& setIsStateful(bool isStateful) { DARABONBA_PTR_SET_VALUE(isStateful_, isStateful) };


    // mem Field Functions 
    bool hasMem() const { return this->mem_ != nullptr;};
    void deleteMem() { this->mem_ = nullptr;};
    inline int32_t mem() const { DARABONBA_PTR_GET_DEFAULT(mem_, 0) };
    inline ListApplicationsResponseBodyDataApplications& setMem(int32_t mem) { DARABONBA_PTR_SET_VALUE(mem_, mem) };


    // mseEnabled Field Functions 
    bool hasMseEnabled() const { return this->mseEnabled_ != nullptr;};
    void deleteMseEnabled() { this->mseEnabled_ = nullptr;};
    inline bool mseEnabled() const { DARABONBA_PTR_GET_DEFAULT(mseEnabled_, false) };
    inline ListApplicationsResponseBodyDataApplications& setMseEnabled(bool mseEnabled) { DARABONBA_PTR_SET_VALUE(mseEnabled_, mseEnabled) };


    // mseNamespaceId Field Functions 
    bool hasMseNamespaceId() const { return this->mseNamespaceId_ != nullptr;};
    void deleteMseNamespaceId() { this->mseNamespaceId_ = nullptr;};
    inline string mseNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(mseNamespaceId_, "") };
    inline ListApplicationsResponseBodyDataApplications& setMseNamespaceId(string mseNamespaceId) { DARABONBA_PTR_SET_VALUE(mseNamespaceId_, mseNamespaceId) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline ListApplicationsResponseBodyDataApplications& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // namespaceName Field Functions 
    bool hasNamespaceName() const { return this->namespaceName_ != nullptr;};
    void deleteNamespaceName() { this->namespaceName_ = nullptr;};
    inline string namespaceName() const { DARABONBA_PTR_GET_DEFAULT(namespaceName_, "") };
    inline ListApplicationsResponseBodyDataApplications& setNamespaceName(string namespaceName) { DARABONBA_PTR_SET_VALUE(namespaceName_, namespaceName) };


    // newSaeVersion Field Functions 
    bool hasNewSaeVersion() const { return this->newSaeVersion_ != nullptr;};
    void deleteNewSaeVersion() { this->newSaeVersion_ = nullptr;};
    inline string newSaeVersion() const { DARABONBA_PTR_GET_DEFAULT(newSaeVersion_, "") };
    inline ListApplicationsResponseBodyDataApplications& setNewSaeVersion(string newSaeVersion) { DARABONBA_PTR_SET_VALUE(newSaeVersion_, newSaeVersion) };


    // packageUrl Field Functions 
    bool hasPackageUrl() const { return this->packageUrl_ != nullptr;};
    void deletePackageUrl() { this->packageUrl_ = nullptr;};
    inline string packageUrl() const { DARABONBA_PTR_GET_DEFAULT(packageUrl_, "") };
    inline ListApplicationsResponseBodyDataApplications& setPackageUrl(string packageUrl) { DARABONBA_PTR_SET_VALUE(packageUrl_, packageUrl) };


    // programmingLanguage Field Functions 
    bool hasProgrammingLanguage() const { return this->programmingLanguage_ != nullptr;};
    void deleteProgrammingLanguage() { this->programmingLanguage_ = nullptr;};
    inline string programmingLanguage() const { DARABONBA_PTR_GET_DEFAULT(programmingLanguage_, "") };
    inline ListApplicationsResponseBodyDataApplications& setProgrammingLanguage(string programmingLanguage) { DARABONBA_PTR_SET_VALUE(programmingLanguage_, programmingLanguage) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListApplicationsResponseBodyDataApplications& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListApplicationsResponseBodyDataApplications& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // runningInstances Field Functions 
    bool hasRunningInstances() const { return this->runningInstances_ != nullptr;};
    void deleteRunningInstances() { this->runningInstances_ = nullptr;};
    inline int32_t runningInstances() const { DARABONBA_PTR_GET_DEFAULT(runningInstances_, 0) };
    inline ListApplicationsResponseBodyDataApplications& setRunningInstances(int32_t runningInstances) { DARABONBA_PTR_SET_VALUE(runningInstances_, runningInstances) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListApplicationsResponseBodyDataApplicationsTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListApplicationsResponseBodyDataApplicationsTags>) };
    inline vector<Models::ListApplicationsResponseBodyDataApplicationsTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListApplicationsResponseBodyDataApplicationsTags>) };
    inline ListApplicationsResponseBodyDataApplications& setTags(const vector<Models::ListApplicationsResponseBodyDataApplicationsTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListApplicationsResponseBodyDataApplications& setTags(vector<Models::ListApplicationsResponseBodyDataApplicationsTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListApplicationsResponseBodyDataApplications& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // Indicates whether the application is being deleted. Valid values:
    // 
    // *   **true**: The application is being deleted.
    // *   **false**: The application is not being deleted.
    std::shared_ptr<bool> appDeletingStatus_ = nullptr;
    // The description of the application.
    std::shared_ptr<string> appDescription_ = nullptr;
    // The application ID.
    std::shared_ptr<string> appId_ = nullptr;
    // The application name.
    std::shared_ptr<string> appName_ = nullptr;
    // The application type.
    std::shared_ptr<string> appType_ = nullptr;
    // The base app ID. Only gray-release applications have this property.
    std::shared_ptr<string> baseAppId_ = nullptr;
    // The gray-release application list of this application.
    std::shared_ptr<vector<Models::ListApplicationsResponseBodyDataApplicationsChildren>> children_ = nullptr;
    // The CPU specifications that are required for each instance. Unit: millicores. This parameter cannot be set to 0. Valid values:
    // 
    // *   **500**
    // *   **1000**
    // *   **2000**
    // *   **4000**
    // *   **8000**
    // *   **16000**
    // *   **32000**
    std::shared_ptr<int32_t> cpu_ = nullptr;
    // The disk size. Unit: GB.
    std::shared_ptr<int32_t> diskSize_ = nullptr;
    // If the idle mode is enabled.
    std::shared_ptr<string> enableIdle_ = nullptr;
    // The image URL.
    std::shared_ptr<string> imageUrl_ = nullptr;
    // The number of application instances.
    std::shared_ptr<int32_t> instances_ = nullptr;
    std::shared_ptr<bool> isStateful_ = nullptr;
    // The memory size that is required by each instance. Unit: MB. This parameter cannot be set to 0. The values of this parameter correspond to the values of the Cpu parameter:
    // 
    // *   This parameter is set to **1024** if the Cpu parameter is set to 500 or 1000.
    // *   This parameter is set to **2048** if the Cpu parameter is set to 500, 1000, or 2000.
    // *   This parameter is set to **4096** if the Cpu parameter is set to 1000, 2000, or 4000.
    // *   This parameter is set to **8192** if the Cpu parameter is set to 2000, 4000, or 8000.
    // *   This parameter is set to **12288** if the Cpu parameter is set to 12000.
    // *   This parameter is set to **16384** if the Cpu parameter is set to 4000, 8000, or 16000.
    // *   This parameter is set to **24576** if the Cpu parameter is set to 12000.
    // *   This parameter is set to **32768** if the Cpu parameter is set to 16000.
    // *   This parameter is set to **65536** if the Cpu parameter is set to 8000, 16000, or 32000.
    // *   This parameter is set to **131072** if the Cpu parameter is set to 32000.
    std::shared_ptr<int32_t> mem_ = nullptr;
    // The application has enabled MSE or not.
    std::shared_ptr<bool> mseEnabled_ = nullptr;
    // The name space of MSE:
    // 
    // - default: the free edition.
    // - sae-pro: the professional edition.
    // - sae-ent: the enterprise eiditon.
    std::shared_ptr<string> mseNamespaceId_ = nullptr;
    // The namespace ID.
    std::shared_ptr<string> namespaceId_ = nullptr;
    // The name of the namespace.
    std::shared_ptr<string> namespaceName_ = nullptr;
    // The application edition.
    // 
    // - lite: the lightweight edition.
    // - std: the standard edition.
    // - pro: the professional edition.
    std::shared_ptr<string> newSaeVersion_ = nullptr;
    // The package URL.
    std::shared_ptr<string> packageUrl_ = nullptr;
    // The programming language of the application.
    std::shared_ptr<string> programmingLanguage_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceType_ = nullptr;
    // The number of running instances.
    std::shared_ptr<int32_t> runningInstances_ = nullptr;
    // The tags of the application.
    std::shared_ptr<vector<Models::ListApplicationsResponseBodyDataApplicationsTags>> tags_ = nullptr;
    // VPC ID.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
