// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROJECTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETPROJECTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetProjectResponseBodyDataTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetProjectResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProjectResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Appkey, appkey_);
      DARABONBA_PTR_TO_JSON(BaseProject, baseProject_);
      DARABONBA_PTR_TO_JSON(DefaultDiResourceGroupIdentifier, defaultDiResourceGroupIdentifier_);
      DARABONBA_PTR_TO_JSON(Destination, destination_);
      DARABONBA_PTR_TO_JSON(DevStorageQuota, devStorageQuota_);
      DARABONBA_PTR_TO_JSON(DevelopmentType, developmentType_);
      DARABONBA_PTR_TO_JSON(DisableDevelopment, disableDevelopment_);
      DARABONBA_PTR_TO_JSON(EnvTypes, envTypes_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(IsAllowDownload, isAllowDownload_);
      DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_TO_JSON(MaxFlowNode, maxFlowNode_);
      DARABONBA_PTR_TO_JSON(ProdStorageQuota, prodStorageQuota_);
      DARABONBA_PTR_TO_JSON(ProjectDescription, projectDescription_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ProjectIdentifier, projectIdentifier_);
      DARABONBA_PTR_TO_JSON(ProjectMode, projectMode_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(ProjectOwnerBaseId, projectOwnerBaseId_);
      DARABONBA_PTR_TO_JSON(ProtectedMode, protectedMode_);
      DARABONBA_PTR_TO_JSON(ResidentArea, residentArea_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_TO_JSON(SchedulerMaxRetryTimes, schedulerMaxRetryTimes_);
      DARABONBA_PTR_TO_JSON(SchedulerRetryInterval, schedulerRetryInterval_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TablePrivacyMode, tablePrivacyMode_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(UseProxyOdpsAccount, useProxyOdpsAccount_);
    };
    friend void from_json(const Darabonba::Json& j, GetProjectResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Appkey, appkey_);
      DARABONBA_PTR_FROM_JSON(BaseProject, baseProject_);
      DARABONBA_PTR_FROM_JSON(DefaultDiResourceGroupIdentifier, defaultDiResourceGroupIdentifier_);
      DARABONBA_PTR_FROM_JSON(Destination, destination_);
      DARABONBA_PTR_FROM_JSON(DevStorageQuota, devStorageQuota_);
      DARABONBA_PTR_FROM_JSON(DevelopmentType, developmentType_);
      DARABONBA_PTR_FROM_JSON(DisableDevelopment, disableDevelopment_);
      DARABONBA_PTR_FROM_JSON(EnvTypes, envTypes_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(IsAllowDownload, isAllowDownload_);
      DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_FROM_JSON(MaxFlowNode, maxFlowNode_);
      DARABONBA_PTR_FROM_JSON(ProdStorageQuota, prodStorageQuota_);
      DARABONBA_PTR_FROM_JSON(ProjectDescription, projectDescription_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ProjectIdentifier, projectIdentifier_);
      DARABONBA_PTR_FROM_JSON(ProjectMode, projectMode_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(ProjectOwnerBaseId, projectOwnerBaseId_);
      DARABONBA_PTR_FROM_JSON(ProtectedMode, protectedMode_);
      DARABONBA_PTR_FROM_JSON(ResidentArea, residentArea_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SchedulerMaxRetryTimes, schedulerMaxRetryTimes_);
      DARABONBA_PTR_FROM_JSON(SchedulerRetryInterval, schedulerRetryInterval_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TablePrivacyMode, tablePrivacyMode_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(UseProxyOdpsAccount, useProxyOdpsAccount_);
    };
    GetProjectResponseBodyData() = default ;
    GetProjectResponseBodyData(const GetProjectResponseBodyData &) = default ;
    GetProjectResponseBodyData(GetProjectResponseBodyData &&) = default ;
    GetProjectResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProjectResponseBodyData() = default ;
    GetProjectResponseBodyData& operator=(const GetProjectResponseBodyData &) = default ;
    GetProjectResponseBodyData& operator=(GetProjectResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appkey_ != nullptr
        && this->baseProject_ != nullptr && this->defaultDiResourceGroupIdentifier_ != nullptr && this->destination_ != nullptr && this->devStorageQuota_ != nullptr && this->developmentType_ != nullptr
        && this->disableDevelopment_ != nullptr && this->envTypes_ != nullptr && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->isAllowDownload_ != nullptr
        && this->isDefault_ != nullptr && this->maxFlowNode_ != nullptr && this->prodStorageQuota_ != nullptr && this->projectDescription_ != nullptr && this->projectId_ != nullptr
        && this->projectIdentifier_ != nullptr && this->projectMode_ != nullptr && this->projectName_ != nullptr && this->projectOwnerBaseId_ != nullptr && this->protectedMode_ != nullptr
        && this->residentArea_ != nullptr && this->resourceManagerResourceGroupId_ != nullptr && this->schedulerMaxRetryTimes_ != nullptr && this->schedulerRetryInterval_ != nullptr && this->status_ != nullptr
        && this->tablePrivacyMode_ != nullptr && this->tags_ != nullptr && this->tenantId_ != nullptr && this->useProxyOdpsAccount_ != nullptr; };
    // appkey Field Functions 
    bool hasAppkey() const { return this->appkey_ != nullptr;};
    void deleteAppkey() { this->appkey_ = nullptr;};
    inline string appkey() const { DARABONBA_PTR_GET_DEFAULT(appkey_, "") };
    inline GetProjectResponseBodyData& setAppkey(string appkey) { DARABONBA_PTR_SET_VALUE(appkey_, appkey) };


    // baseProject Field Functions 
    bool hasBaseProject() const { return this->baseProject_ != nullptr;};
    void deleteBaseProject() { this->baseProject_ = nullptr;};
    inline bool baseProject() const { DARABONBA_PTR_GET_DEFAULT(baseProject_, false) };
    inline GetProjectResponseBodyData& setBaseProject(bool baseProject) { DARABONBA_PTR_SET_VALUE(baseProject_, baseProject) };


    // defaultDiResourceGroupIdentifier Field Functions 
    bool hasDefaultDiResourceGroupIdentifier() const { return this->defaultDiResourceGroupIdentifier_ != nullptr;};
    void deleteDefaultDiResourceGroupIdentifier() { this->defaultDiResourceGroupIdentifier_ = nullptr;};
    inline string defaultDiResourceGroupIdentifier() const { DARABONBA_PTR_GET_DEFAULT(defaultDiResourceGroupIdentifier_, "") };
    inline GetProjectResponseBodyData& setDefaultDiResourceGroupIdentifier(string defaultDiResourceGroupIdentifier) { DARABONBA_PTR_SET_VALUE(defaultDiResourceGroupIdentifier_, defaultDiResourceGroupIdentifier) };


    // destination Field Functions 
    bool hasDestination() const { return this->destination_ != nullptr;};
    void deleteDestination() { this->destination_ = nullptr;};
    inline int32_t destination() const { DARABONBA_PTR_GET_DEFAULT(destination_, 0) };
    inline GetProjectResponseBodyData& setDestination(int32_t destination) { DARABONBA_PTR_SET_VALUE(destination_, destination) };


    // devStorageQuota Field Functions 
    bool hasDevStorageQuota() const { return this->devStorageQuota_ != nullptr;};
    void deleteDevStorageQuota() { this->devStorageQuota_ = nullptr;};
    inline string devStorageQuota() const { DARABONBA_PTR_GET_DEFAULT(devStorageQuota_, "") };
    inline GetProjectResponseBodyData& setDevStorageQuota(string devStorageQuota) { DARABONBA_PTR_SET_VALUE(devStorageQuota_, devStorageQuota) };


    // developmentType Field Functions 
    bool hasDevelopmentType() const { return this->developmentType_ != nullptr;};
    void deleteDevelopmentType() { this->developmentType_ = nullptr;};
    inline int32_t developmentType() const { DARABONBA_PTR_GET_DEFAULT(developmentType_, 0) };
    inline GetProjectResponseBodyData& setDevelopmentType(int32_t developmentType) { DARABONBA_PTR_SET_VALUE(developmentType_, developmentType) };


    // disableDevelopment Field Functions 
    bool hasDisableDevelopment() const { return this->disableDevelopment_ != nullptr;};
    void deleteDisableDevelopment() { this->disableDevelopment_ = nullptr;};
    inline bool disableDevelopment() const { DARABONBA_PTR_GET_DEFAULT(disableDevelopment_, false) };
    inline GetProjectResponseBodyData& setDisableDevelopment(bool disableDevelopment) { DARABONBA_PTR_SET_VALUE(disableDevelopment_, disableDevelopment) };


    // envTypes Field Functions 
    bool hasEnvTypes() const { return this->envTypes_ != nullptr;};
    void deleteEnvTypes() { this->envTypes_ = nullptr;};
    inline const vector<string> & envTypes() const { DARABONBA_PTR_GET_CONST(envTypes_, vector<string>) };
    inline vector<string> envTypes() { DARABONBA_PTR_GET(envTypes_, vector<string>) };
    inline GetProjectResponseBodyData& setEnvTypes(const vector<string> & envTypes) { DARABONBA_PTR_SET_VALUE(envTypes_, envTypes) };
    inline GetProjectResponseBodyData& setEnvTypes(vector<string> && envTypes) { DARABONBA_PTR_SET_RVALUE(envTypes_, envTypes) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GetProjectResponseBodyData& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline GetProjectResponseBodyData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // isAllowDownload Field Functions 
    bool hasIsAllowDownload() const { return this->isAllowDownload_ != nullptr;};
    void deleteIsAllowDownload() { this->isAllowDownload_ = nullptr;};
    inline int32_t isAllowDownload() const { DARABONBA_PTR_GET_DEFAULT(isAllowDownload_, 0) };
    inline GetProjectResponseBodyData& setIsAllowDownload(int32_t isAllowDownload) { DARABONBA_PTR_SET_VALUE(isAllowDownload_, isAllowDownload) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline int32_t isDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, 0) };
    inline GetProjectResponseBodyData& setIsDefault(int32_t isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // maxFlowNode Field Functions 
    bool hasMaxFlowNode() const { return this->maxFlowNode_ != nullptr;};
    void deleteMaxFlowNode() { this->maxFlowNode_ = nullptr;};
    inline int32_t maxFlowNode() const { DARABONBA_PTR_GET_DEFAULT(maxFlowNode_, 0) };
    inline GetProjectResponseBodyData& setMaxFlowNode(int32_t maxFlowNode) { DARABONBA_PTR_SET_VALUE(maxFlowNode_, maxFlowNode) };


    // prodStorageQuota Field Functions 
    bool hasProdStorageQuota() const { return this->prodStorageQuota_ != nullptr;};
    void deleteProdStorageQuota() { this->prodStorageQuota_ = nullptr;};
    inline string prodStorageQuota() const { DARABONBA_PTR_GET_DEFAULT(prodStorageQuota_, "") };
    inline GetProjectResponseBodyData& setProdStorageQuota(string prodStorageQuota) { DARABONBA_PTR_SET_VALUE(prodStorageQuota_, prodStorageQuota) };


    // projectDescription Field Functions 
    bool hasProjectDescription() const { return this->projectDescription_ != nullptr;};
    void deleteProjectDescription() { this->projectDescription_ = nullptr;};
    inline string projectDescription() const { DARABONBA_PTR_GET_DEFAULT(projectDescription_, "") };
    inline GetProjectResponseBodyData& setProjectDescription(string projectDescription) { DARABONBA_PTR_SET_VALUE(projectDescription_, projectDescription) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int32_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0) };
    inline GetProjectResponseBodyData& setProjectId(int32_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectIdentifier Field Functions 
    bool hasProjectIdentifier() const { return this->projectIdentifier_ != nullptr;};
    void deleteProjectIdentifier() { this->projectIdentifier_ = nullptr;};
    inline string projectIdentifier() const { DARABONBA_PTR_GET_DEFAULT(projectIdentifier_, "") };
    inline GetProjectResponseBodyData& setProjectIdentifier(string projectIdentifier) { DARABONBA_PTR_SET_VALUE(projectIdentifier_, projectIdentifier) };


    // projectMode Field Functions 
    bool hasProjectMode() const { return this->projectMode_ != nullptr;};
    void deleteProjectMode() { this->projectMode_ = nullptr;};
    inline int32_t projectMode() const { DARABONBA_PTR_GET_DEFAULT(projectMode_, 0) };
    inline GetProjectResponseBodyData& setProjectMode(int32_t projectMode) { DARABONBA_PTR_SET_VALUE(projectMode_, projectMode) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline GetProjectResponseBodyData& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // projectOwnerBaseId Field Functions 
    bool hasProjectOwnerBaseId() const { return this->projectOwnerBaseId_ != nullptr;};
    void deleteProjectOwnerBaseId() { this->projectOwnerBaseId_ = nullptr;};
    inline string projectOwnerBaseId() const { DARABONBA_PTR_GET_DEFAULT(projectOwnerBaseId_, "") };
    inline GetProjectResponseBodyData& setProjectOwnerBaseId(string projectOwnerBaseId) { DARABONBA_PTR_SET_VALUE(projectOwnerBaseId_, projectOwnerBaseId) };


    // protectedMode Field Functions 
    bool hasProtectedMode() const { return this->protectedMode_ != nullptr;};
    void deleteProtectedMode() { this->protectedMode_ = nullptr;};
    inline int32_t protectedMode() const { DARABONBA_PTR_GET_DEFAULT(protectedMode_, 0) };
    inline GetProjectResponseBodyData& setProtectedMode(int32_t protectedMode) { DARABONBA_PTR_SET_VALUE(protectedMode_, protectedMode) };


    // residentArea Field Functions 
    bool hasResidentArea() const { return this->residentArea_ != nullptr;};
    void deleteResidentArea() { this->residentArea_ = nullptr;};
    inline string residentArea() const { DARABONBA_PTR_GET_DEFAULT(residentArea_, "") };
    inline GetProjectResponseBodyData& setResidentArea(string residentArea) { DARABONBA_PTR_SET_VALUE(residentArea_, residentArea) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string resourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline GetProjectResponseBodyData& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // schedulerMaxRetryTimes Field Functions 
    bool hasSchedulerMaxRetryTimes() const { return this->schedulerMaxRetryTimes_ != nullptr;};
    void deleteSchedulerMaxRetryTimes() { this->schedulerMaxRetryTimes_ = nullptr;};
    inline int32_t schedulerMaxRetryTimes() const { DARABONBA_PTR_GET_DEFAULT(schedulerMaxRetryTimes_, 0) };
    inline GetProjectResponseBodyData& setSchedulerMaxRetryTimes(int32_t schedulerMaxRetryTimes) { DARABONBA_PTR_SET_VALUE(schedulerMaxRetryTimes_, schedulerMaxRetryTimes) };


    // schedulerRetryInterval Field Functions 
    bool hasSchedulerRetryInterval() const { return this->schedulerRetryInterval_ != nullptr;};
    void deleteSchedulerRetryInterval() { this->schedulerRetryInterval_ = nullptr;};
    inline int32_t schedulerRetryInterval() const { DARABONBA_PTR_GET_DEFAULT(schedulerRetryInterval_, 0) };
    inline GetProjectResponseBodyData& setSchedulerRetryInterval(int32_t schedulerRetryInterval) { DARABONBA_PTR_SET_VALUE(schedulerRetryInterval_, schedulerRetryInterval) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetProjectResponseBodyData& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tablePrivacyMode Field Functions 
    bool hasTablePrivacyMode() const { return this->tablePrivacyMode_ != nullptr;};
    void deleteTablePrivacyMode() { this->tablePrivacyMode_ = nullptr;};
    inline int32_t tablePrivacyMode() const { DARABONBA_PTR_GET_DEFAULT(tablePrivacyMode_, 0) };
    inline GetProjectResponseBodyData& setTablePrivacyMode(int32_t tablePrivacyMode) { DARABONBA_PTR_SET_VALUE(tablePrivacyMode_, tablePrivacyMode) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::GetProjectResponseBodyDataTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::GetProjectResponseBodyDataTags>) };
    inline vector<Models::GetProjectResponseBodyDataTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::GetProjectResponseBodyDataTags>) };
    inline GetProjectResponseBodyData& setTags(const vector<Models::GetProjectResponseBodyDataTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetProjectResponseBodyData& setTags(vector<Models::GetProjectResponseBodyDataTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline int64_t tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
    inline GetProjectResponseBodyData& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // useProxyOdpsAccount Field Functions 
    bool hasUseProxyOdpsAccount() const { return this->useProxyOdpsAccount_ != nullptr;};
    void deleteUseProxyOdpsAccount() { this->useProxyOdpsAccount_ = nullptr;};
    inline bool useProxyOdpsAccount() const { DARABONBA_PTR_GET_DEFAULT(useProxyOdpsAccount_, false) };
    inline GetProjectResponseBodyData& setUseProxyOdpsAccount(bool useProxyOdpsAccount) { DARABONBA_PTR_SET_VALUE(useProxyOdpsAccount_, useProxyOdpsAccount) };


  protected:
    // This parameter is deprecated.
    std::shared_ptr<string> appkey_ = nullptr;
    // This parameter is deprecated.
    std::shared_ptr<bool> baseProject_ = nullptr;
    // The ID of the resource group that was allocated by default when you purchased an exclusive resource group for MaxCompute.
    std::shared_ptr<string> defaultDiResourceGroupIdentifier_ = nullptr;
    // This parameter is deprecated.
    std::shared_ptr<int32_t> destination_ = nullptr;
    // This parameter is deprecated.
    std::shared_ptr<string> devStorageQuota_ = nullptr;
    // This parameter is deprecated.
    std::shared_ptr<int32_t> developmentType_ = nullptr;
    // Indicates whether the Develop role is disabled. Valid values:
    // 
    // *   **false** (default)
    // *   **true**
    std::shared_ptr<bool> disableDevelopment_ = nullptr;
    // The environment information of the workspace.
    std::shared_ptr<vector<string>> envTypes_ = nullptr;
    // The time when the workspace was created. Example: `Dec 3, 2019 9:12:20 PM`.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The time when the workspace was last modified. Example: `Dec 3, 2019 9:12:20 PM`.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // Indicates whether you are allowed to download the query result from DataStudio. Valid values:
    // 
    // *   **1**: You are allowed to download the query result from DataStudio.
    // *   **0**: You are not allowed to download the query result from DataStudio.
    std::shared_ptr<int32_t> isAllowDownload_ = nullptr;
    // Indicates whether the workspace is a default workspace. Valid values:
    // 
    // *   **1**: The workspace is a default workspace.
    // *   **0**: The workspace is not a default workspace.
    std::shared_ptr<int32_t> isDefault_ = nullptr;
    // This parameter is deprecated.
    std::shared_ptr<int32_t> maxFlowNode_ = nullptr;
    // This parameter is deprecated.
    std::shared_ptr<string> prodStorageQuota_ = nullptr;
    // The description of the workspace.
    std::shared_ptr<string> projectDescription_ = nullptr;
    // The ID of the workspace.
    std::shared_ptr<int32_t> projectId_ = nullptr;
    // The name of the workspace.
    std::shared_ptr<string> projectIdentifier_ = nullptr;
    // The mode of the workspace. Valid values:
    // 
    // *   **2**: The workspace is in basic mode.
    // *   **3**: The workspace is in standard mode.
    std::shared_ptr<int32_t> projectMode_ = nullptr;
    // The display name of the workspace.
    std::shared_ptr<string> projectName_ = nullptr;
    // The ID of the Alibaba Cloud account used by the workspace owner.
    std::shared_ptr<string> projectOwnerBaseId_ = nullptr;
    // Indicates whether the workspace protection feature is enabled. Valid values:
    // 
    // *   **1**: enabled
    // *   **0**: disabled
    std::shared_ptr<int32_t> protectedMode_ = nullptr;
    // The type of the workspace. Valid values:
    // 
    // *   **private**
    // *   **swap**
    std::shared_ptr<string> residentArea_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceManagerResourceGroupId_ = nullptr;
    // The default maximum number of automatic reruns that are allowed after an error occurs.
    std::shared_ptr<int32_t> schedulerMaxRetryTimes_ = nullptr;
    // The default interval between automatic reruns after an error occurs. Unit: milliseconds. The maximum interval is 30 minutes. You must pay attention to the conversion between units.
    std::shared_ptr<int32_t> schedulerRetryInterval_ = nullptr;
    // The status of the workspace. Valid values:
    // 
    // *   **0**: AVAILABLE, which indicates that the workspace runs as expected.
    // *   **1**: DELETED, which indicates that the workspace is deleted.
    // *   **2**: INITIALIZING, which indicates that the workspace is being initialized.
    // *   **3**: INIT_FAILED, which indicates that the workspace fails to be initialized.
    // *   **4**: FORBIDDEN, which indicates that the workspace is manually disabled.
    // *   **5**: DELETING, which indicates that the workspace is being deleted.
    // *   **6**: DEL_FAILED, which indicates that the workspace fails to be deleted.
    // *   **7**: FROZEN, which indicates that the workspace is frozen due to overdue payments.
    // *   **8**: UPDATING, which indicates that the workspace is being updated. The workspace enters this state after you associate a new compute engine with the workspace and the compute engine is initialized.
    // *   **9**: UPDATE_FAILED, which indicates that the workspace fails to be updated.
    std::shared_ptr<int32_t> status_ = nullptr;
    // Indicates whether the MaxCompute tables in the workspace are visible to the users within a tenant. Valid values:
    // 
    // *   **0**: invisible
    // *   **1**: visible
    std::shared_ptr<int32_t> tablePrivacyMode_ = nullptr;
    // The tags added to the workspace.
    std::shared_ptr<vector<Models::GetProjectResponseBodyDataTags>> tags_ = nullptr;
    // The tenant ID.
    std::shared_ptr<int64_t> tenantId_ = nullptr;
    // Indicates whether a proxy account is used to access the MaxCompute compute engine associated with the workspace.
    std::shared_ptr<bool> useProxyOdpsAccount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
