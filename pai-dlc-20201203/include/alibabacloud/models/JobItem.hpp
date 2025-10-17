// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_JOBITEM_HPP_
#define ALIBABACLOUD_MODELS_JOBITEM_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/JobItemCodeSource.hpp>
#include <alibabacloud/models/CredentialConfig.hpp>
#include <vector>
#include <alibabacloud/models/JobItemDataSources.hpp>
#include <alibabacloud/models/JobElasticSpec.hpp>
#include <map>
#include <alibabacloud/models/JobSpec.hpp>
#include <alibabacloud/models/PodItem.hpp>
#include <alibabacloud/models/JobSettings.hpp>
#include <alibabacloud/models/StatusTransitionItem.hpp>
#include <alibabacloud/models/JobItemUserVpc.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class JobItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const JobItem& obj) { 
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(CodeSource, codeSource_);
      DARABONBA_PTR_TO_JSON(CredentialConfig, credentialConfig_);
      DARABONBA_PTR_TO_JSON(DataSources, dataSources_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(ElasticSpec, elasticSpec_);
      DARABONBA_PTR_TO_JSON(EnablePreemptibleJob, enablePreemptibleJob_);
      DARABONBA_PTR_TO_JSON(EnabledDebugger, enabledDebugger_);
      DARABONBA_PTR_TO_JSON(Envs, envs_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtFailedTime, gmtFailedTime_);
      DARABONBA_PTR_TO_JSON(GmtFinishTime, gmtFinishTime_);
      DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_TO_JSON(GmtRunningTime, gmtRunningTime_);
      DARABONBA_PTR_TO_JSON(GmtStoppedTime, gmtStoppedTime_);
      DARABONBA_PTR_TO_JSON(GmtSubmittedTime, gmtSubmittedTime_);
      DARABONBA_PTR_TO_JSON(GmtSuccessedTime, gmtSuccessedTime_);
      DARABONBA_PTR_TO_JSON(IsDeleted, isDeleted_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(JobMaxRunningTimeMinutes, jobMaxRunningTimeMinutes_);
      DARABONBA_PTR_TO_JSON(JobSpecs, jobSpecs_);
      DARABONBA_PTR_TO_JSON(JobType, jobType_);
      DARABONBA_PTR_TO_JSON(NodeCount, nodeCount_);
      DARABONBA_PTR_TO_JSON(NodeNames, nodeNames_);
      DARABONBA_PTR_TO_JSON(Pods, pods_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(ReasonCode, reasonCode_);
      DARABONBA_PTR_TO_JSON(ReasonMessage, reasonMessage_);
      DARABONBA_PTR_TO_JSON(RequestCPU, requestCPU_);
      DARABONBA_PTR_TO_JSON(RequestGPU, requestGPU_);
      DARABONBA_PTR_TO_JSON(RequestMemory, requestMemory_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceLevel, resourceLevel_);
      DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_TO_JSON(ResourceQuotaName, resourceQuotaName_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(RestartTimes, restartTimes_);
      DARABONBA_PTR_TO_JSON(Settings, settings_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusHistory, statusHistory_);
      DARABONBA_PTR_TO_JSON(SubStatus, subStatus_);
      DARABONBA_PTR_TO_JSON(SystemEnvs, systemEnvs_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(ThirdpartyLibDir, thirdpartyLibDir_);
      DARABONBA_PTR_TO_JSON(ThirdpartyLibs, thirdpartyLibs_);
      DARABONBA_PTR_TO_JSON(UseOversoldResource, useOversoldResource_);
      DARABONBA_PTR_TO_JSON(UserCommand, userCommand_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserScript, userScript_);
      DARABONBA_PTR_TO_JSON(UserVpc, userVpc_);
      DARABONBA_PTR_TO_JSON(Username, username_);
      DARABONBA_PTR_TO_JSON(WorkingDir, workingDir_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_TO_JSON(WorkspaceName, workspaceName_);
    };
    friend void from_json(const Darabonba::Json& j, JobItem& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(CodeSource, codeSource_);
      DARABONBA_PTR_FROM_JSON(CredentialConfig, credentialConfig_);
      DARABONBA_PTR_FROM_JSON(DataSources, dataSources_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(ElasticSpec, elasticSpec_);
      DARABONBA_PTR_FROM_JSON(EnablePreemptibleJob, enablePreemptibleJob_);
      DARABONBA_PTR_FROM_JSON(EnabledDebugger, enabledDebugger_);
      DARABONBA_PTR_FROM_JSON(Envs, envs_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtFailedTime, gmtFailedTime_);
      DARABONBA_PTR_FROM_JSON(GmtFinishTime, gmtFinishTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_FROM_JSON(GmtRunningTime, gmtRunningTime_);
      DARABONBA_PTR_FROM_JSON(GmtStoppedTime, gmtStoppedTime_);
      DARABONBA_PTR_FROM_JSON(GmtSubmittedTime, gmtSubmittedTime_);
      DARABONBA_PTR_FROM_JSON(GmtSuccessedTime, gmtSuccessedTime_);
      DARABONBA_PTR_FROM_JSON(IsDeleted, isDeleted_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(JobMaxRunningTimeMinutes, jobMaxRunningTimeMinutes_);
      DARABONBA_PTR_FROM_JSON(JobSpecs, jobSpecs_);
      DARABONBA_PTR_FROM_JSON(JobType, jobType_);
      DARABONBA_PTR_FROM_JSON(NodeCount, nodeCount_);
      DARABONBA_PTR_FROM_JSON(NodeNames, nodeNames_);
      DARABONBA_PTR_FROM_JSON(Pods, pods_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(ReasonCode, reasonCode_);
      DARABONBA_PTR_FROM_JSON(ReasonMessage, reasonMessage_);
      DARABONBA_PTR_FROM_JSON(RequestCPU, requestCPU_);
      DARABONBA_PTR_FROM_JSON(RequestGPU, requestGPU_);
      DARABONBA_PTR_FROM_JSON(RequestMemory, requestMemory_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceLevel, resourceLevel_);
      DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_FROM_JSON(ResourceQuotaName, resourceQuotaName_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(RestartTimes, restartTimes_);
      DARABONBA_PTR_FROM_JSON(Settings, settings_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusHistory, statusHistory_);
      DARABONBA_PTR_FROM_JSON(SubStatus, subStatus_);
      DARABONBA_PTR_FROM_JSON(SystemEnvs, systemEnvs_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(ThirdpartyLibDir, thirdpartyLibDir_);
      DARABONBA_PTR_FROM_JSON(ThirdpartyLibs, thirdpartyLibs_);
      DARABONBA_PTR_FROM_JSON(UseOversoldResource, useOversoldResource_);
      DARABONBA_PTR_FROM_JSON(UserCommand, userCommand_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserScript, userScript_);
      DARABONBA_PTR_FROM_JSON(UserVpc, userVpc_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
      DARABONBA_PTR_FROM_JSON(WorkingDir, workingDir_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceName, workspaceName_);
    };
    JobItem() = default ;
    JobItem(const JobItem &) = default ;
    JobItem(JobItem &&) = default ;
    JobItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~JobItem() = default ;
    JobItem& operator=(const JobItem &) = default ;
    JobItem& operator=(JobItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessibility_ == nullptr
        && return this->clusterId_ == nullptr && return this->codeSource_ == nullptr && return this->credentialConfig_ == nullptr && return this->dataSources_ == nullptr && return this->displayName_ == nullptr
        && return this->duration_ == nullptr && return this->elasticSpec_ == nullptr && return this->enablePreemptibleJob_ == nullptr && return this->enabledDebugger_ == nullptr && return this->envs_ == nullptr
        && return this->gmtCreateTime_ == nullptr && return this->gmtFailedTime_ == nullptr && return this->gmtFinishTime_ == nullptr && return this->gmtModifiedTime_ == nullptr && return this->gmtRunningTime_ == nullptr
        && return this->gmtStoppedTime_ == nullptr && return this->gmtSubmittedTime_ == nullptr && return this->gmtSuccessedTime_ == nullptr && return this->isDeleted_ == nullptr && return this->jobId_ == nullptr
        && return this->jobMaxRunningTimeMinutes_ == nullptr && return this->jobSpecs_ == nullptr && return this->jobType_ == nullptr && return this->nodeCount_ == nullptr && return this->nodeNames_ == nullptr
        && return this->pods_ == nullptr && return this->priority_ == nullptr && return this->reasonCode_ == nullptr && return this->reasonMessage_ == nullptr && return this->requestCPU_ == nullptr
        && return this->requestGPU_ == nullptr && return this->requestMemory_ == nullptr && return this->resourceId_ == nullptr && return this->resourceLevel_ == nullptr && return this->resourceName_ == nullptr
        && return this->resourceQuotaName_ == nullptr && return this->resourceType_ == nullptr && return this->restartTimes_ == nullptr && return this->settings_ == nullptr && return this->status_ == nullptr
        && return this->statusHistory_ == nullptr && return this->subStatus_ == nullptr && return this->systemEnvs_ == nullptr && return this->tenantId_ == nullptr && return this->thirdpartyLibDir_ == nullptr
        && return this->thirdpartyLibs_ == nullptr && return this->useOversoldResource_ == nullptr && return this->userCommand_ == nullptr && return this->userId_ == nullptr && return this->userScript_ == nullptr
        && return this->userVpc_ == nullptr && return this->username_ == nullptr && return this->workingDir_ == nullptr && return this->workspaceId_ == nullptr && return this->workspaceName_ == nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string accessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline JobItem& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline JobItem& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // codeSource Field Functions 
    bool hasCodeSource() const { return this->codeSource_ != nullptr;};
    void deleteCodeSource() { this->codeSource_ = nullptr;};
    inline const JobItemCodeSource & codeSource() const { DARABONBA_PTR_GET_CONST(codeSource_, JobItemCodeSource) };
    inline JobItemCodeSource codeSource() { DARABONBA_PTR_GET(codeSource_, JobItemCodeSource) };
    inline JobItem& setCodeSource(const JobItemCodeSource & codeSource) { DARABONBA_PTR_SET_VALUE(codeSource_, codeSource) };
    inline JobItem& setCodeSource(JobItemCodeSource && codeSource) { DARABONBA_PTR_SET_RVALUE(codeSource_, codeSource) };


    // credentialConfig Field Functions 
    bool hasCredentialConfig() const { return this->credentialConfig_ != nullptr;};
    void deleteCredentialConfig() { this->credentialConfig_ = nullptr;};
    inline const CredentialConfig & credentialConfig() const { DARABONBA_PTR_GET_CONST(credentialConfig_, CredentialConfig) };
    inline CredentialConfig credentialConfig() { DARABONBA_PTR_GET(credentialConfig_, CredentialConfig) };
    inline JobItem& setCredentialConfig(const CredentialConfig & credentialConfig) { DARABONBA_PTR_SET_VALUE(credentialConfig_, credentialConfig) };
    inline JobItem& setCredentialConfig(CredentialConfig && credentialConfig) { DARABONBA_PTR_SET_RVALUE(credentialConfig_, credentialConfig) };


    // dataSources Field Functions 
    bool hasDataSources() const { return this->dataSources_ != nullptr;};
    void deleteDataSources() { this->dataSources_ = nullptr;};
    inline const vector<JobItemDataSources> & dataSources() const { DARABONBA_PTR_GET_CONST(dataSources_, vector<JobItemDataSources>) };
    inline vector<JobItemDataSources> dataSources() { DARABONBA_PTR_GET(dataSources_, vector<JobItemDataSources>) };
    inline JobItem& setDataSources(const vector<JobItemDataSources> & dataSources) { DARABONBA_PTR_SET_VALUE(dataSources_, dataSources) };
    inline JobItem& setDataSources(vector<JobItemDataSources> && dataSources) { DARABONBA_PTR_SET_RVALUE(dataSources_, dataSources) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline JobItem& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline JobItem& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // elasticSpec Field Functions 
    bool hasElasticSpec() const { return this->elasticSpec_ != nullptr;};
    void deleteElasticSpec() { this->elasticSpec_ = nullptr;};
    inline const JobElasticSpec & elasticSpec() const { DARABONBA_PTR_GET_CONST(elasticSpec_, JobElasticSpec) };
    inline JobElasticSpec elasticSpec() { DARABONBA_PTR_GET(elasticSpec_, JobElasticSpec) };
    inline JobItem& setElasticSpec(const JobElasticSpec & elasticSpec) { DARABONBA_PTR_SET_VALUE(elasticSpec_, elasticSpec) };
    inline JobItem& setElasticSpec(JobElasticSpec && elasticSpec) { DARABONBA_PTR_SET_RVALUE(elasticSpec_, elasticSpec) };


    // enablePreemptibleJob Field Functions 
    bool hasEnablePreemptibleJob() const { return this->enablePreemptibleJob_ != nullptr;};
    void deleteEnablePreemptibleJob() { this->enablePreemptibleJob_ = nullptr;};
    inline bool enablePreemptibleJob() const { DARABONBA_PTR_GET_DEFAULT(enablePreemptibleJob_, false) };
    inline JobItem& setEnablePreemptibleJob(bool enablePreemptibleJob) { DARABONBA_PTR_SET_VALUE(enablePreemptibleJob_, enablePreemptibleJob) };


    // enabledDebugger Field Functions 
    bool hasEnabledDebugger() const { return this->enabledDebugger_ != nullptr;};
    void deleteEnabledDebugger() { this->enabledDebugger_ = nullptr;};
    inline bool enabledDebugger() const { DARABONBA_PTR_GET_DEFAULT(enabledDebugger_, false) };
    inline JobItem& setEnabledDebugger(bool enabledDebugger) { DARABONBA_PTR_SET_VALUE(enabledDebugger_, enabledDebugger) };


    // envs Field Functions 
    bool hasEnvs() const { return this->envs_ != nullptr;};
    void deleteEnvs() { this->envs_ = nullptr;};
    inline const map<string, string> & envs() const { DARABONBA_PTR_GET_CONST(envs_, map<string, string>) };
    inline map<string, string> envs() { DARABONBA_PTR_GET(envs_, map<string, string>) };
    inline JobItem& setEnvs(const map<string, string> & envs) { DARABONBA_PTR_SET_VALUE(envs_, envs) };
    inline JobItem& setEnvs(map<string, string> && envs) { DARABONBA_PTR_SET_RVALUE(envs_, envs) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string gmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline JobItem& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtFailedTime Field Functions 
    bool hasGmtFailedTime() const { return this->gmtFailedTime_ != nullptr;};
    void deleteGmtFailedTime() { this->gmtFailedTime_ = nullptr;};
    inline string gmtFailedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtFailedTime_, "") };
    inline JobItem& setGmtFailedTime(string gmtFailedTime) { DARABONBA_PTR_SET_VALUE(gmtFailedTime_, gmtFailedTime) };


    // gmtFinishTime Field Functions 
    bool hasGmtFinishTime() const { return this->gmtFinishTime_ != nullptr;};
    void deleteGmtFinishTime() { this->gmtFinishTime_ = nullptr;};
    inline string gmtFinishTime() const { DARABONBA_PTR_GET_DEFAULT(gmtFinishTime_, "") };
    inline JobItem& setGmtFinishTime(string gmtFinishTime) { DARABONBA_PTR_SET_VALUE(gmtFinishTime_, gmtFinishTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string gmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline JobItem& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // gmtRunningTime Field Functions 
    bool hasGmtRunningTime() const { return this->gmtRunningTime_ != nullptr;};
    void deleteGmtRunningTime() { this->gmtRunningTime_ = nullptr;};
    inline string gmtRunningTime() const { DARABONBA_PTR_GET_DEFAULT(gmtRunningTime_, "") };
    inline JobItem& setGmtRunningTime(string gmtRunningTime) { DARABONBA_PTR_SET_VALUE(gmtRunningTime_, gmtRunningTime) };


    // gmtStoppedTime Field Functions 
    bool hasGmtStoppedTime() const { return this->gmtStoppedTime_ != nullptr;};
    void deleteGmtStoppedTime() { this->gmtStoppedTime_ = nullptr;};
    inline string gmtStoppedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtStoppedTime_, "") };
    inline JobItem& setGmtStoppedTime(string gmtStoppedTime) { DARABONBA_PTR_SET_VALUE(gmtStoppedTime_, gmtStoppedTime) };


    // gmtSubmittedTime Field Functions 
    bool hasGmtSubmittedTime() const { return this->gmtSubmittedTime_ != nullptr;};
    void deleteGmtSubmittedTime() { this->gmtSubmittedTime_ = nullptr;};
    inline string gmtSubmittedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtSubmittedTime_, "") };
    inline JobItem& setGmtSubmittedTime(string gmtSubmittedTime) { DARABONBA_PTR_SET_VALUE(gmtSubmittedTime_, gmtSubmittedTime) };


    // gmtSuccessedTime Field Functions 
    bool hasGmtSuccessedTime() const { return this->gmtSuccessedTime_ != nullptr;};
    void deleteGmtSuccessedTime() { this->gmtSuccessedTime_ = nullptr;};
    inline string gmtSuccessedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtSuccessedTime_, "") };
    inline JobItem& setGmtSuccessedTime(string gmtSuccessedTime) { DARABONBA_PTR_SET_VALUE(gmtSuccessedTime_, gmtSuccessedTime) };


    // isDeleted Field Functions 
    bool hasIsDeleted() const { return this->isDeleted_ != nullptr;};
    void deleteIsDeleted() { this->isDeleted_ = nullptr;};
    inline bool isDeleted() const { DARABONBA_PTR_GET_DEFAULT(isDeleted_, false) };
    inline JobItem& setIsDeleted(bool isDeleted) { DARABONBA_PTR_SET_VALUE(isDeleted_, isDeleted) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline JobItem& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // jobMaxRunningTimeMinutes Field Functions 
    bool hasJobMaxRunningTimeMinutes() const { return this->jobMaxRunningTimeMinutes_ != nullptr;};
    void deleteJobMaxRunningTimeMinutes() { this->jobMaxRunningTimeMinutes_ = nullptr;};
    inline int64_t jobMaxRunningTimeMinutes() const { DARABONBA_PTR_GET_DEFAULT(jobMaxRunningTimeMinutes_, 0L) };
    inline JobItem& setJobMaxRunningTimeMinutes(int64_t jobMaxRunningTimeMinutes) { DARABONBA_PTR_SET_VALUE(jobMaxRunningTimeMinutes_, jobMaxRunningTimeMinutes) };


    // jobSpecs Field Functions 
    bool hasJobSpecs() const { return this->jobSpecs_ != nullptr;};
    void deleteJobSpecs() { this->jobSpecs_ = nullptr;};
    inline const vector<JobSpec> & jobSpecs() const { DARABONBA_PTR_GET_CONST(jobSpecs_, vector<JobSpec>) };
    inline vector<JobSpec> jobSpecs() { DARABONBA_PTR_GET(jobSpecs_, vector<JobSpec>) };
    inline JobItem& setJobSpecs(const vector<JobSpec> & jobSpecs) { DARABONBA_PTR_SET_VALUE(jobSpecs_, jobSpecs) };
    inline JobItem& setJobSpecs(vector<JobSpec> && jobSpecs) { DARABONBA_PTR_SET_RVALUE(jobSpecs_, jobSpecs) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string jobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline JobItem& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // nodeCount Field Functions 
    bool hasNodeCount() const { return this->nodeCount_ != nullptr;};
    void deleteNodeCount() { this->nodeCount_ = nullptr;};
    inline string nodeCount() const { DARABONBA_PTR_GET_DEFAULT(nodeCount_, "") };
    inline JobItem& setNodeCount(string nodeCount) { DARABONBA_PTR_SET_VALUE(nodeCount_, nodeCount) };


    // nodeNames Field Functions 
    bool hasNodeNames() const { return this->nodeNames_ != nullptr;};
    void deleteNodeNames() { this->nodeNames_ = nullptr;};
    inline const vector<string> & nodeNames() const { DARABONBA_PTR_GET_CONST(nodeNames_, vector<string>) };
    inline vector<string> nodeNames() { DARABONBA_PTR_GET(nodeNames_, vector<string>) };
    inline JobItem& setNodeNames(const vector<string> & nodeNames) { DARABONBA_PTR_SET_VALUE(nodeNames_, nodeNames) };
    inline JobItem& setNodeNames(vector<string> && nodeNames) { DARABONBA_PTR_SET_RVALUE(nodeNames_, nodeNames) };


    // pods Field Functions 
    bool hasPods() const { return this->pods_ != nullptr;};
    void deletePods() { this->pods_ = nullptr;};
    inline const vector<PodItem> & pods() const { DARABONBA_PTR_GET_CONST(pods_, vector<PodItem>) };
    inline vector<PodItem> pods() { DARABONBA_PTR_GET(pods_, vector<PodItem>) };
    inline JobItem& setPods(const vector<PodItem> & pods) { DARABONBA_PTR_SET_VALUE(pods_, pods) };
    inline JobItem& setPods(vector<PodItem> && pods) { DARABONBA_PTR_SET_RVALUE(pods_, pods) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline JobItem& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // reasonCode Field Functions 
    bool hasReasonCode() const { return this->reasonCode_ != nullptr;};
    void deleteReasonCode() { this->reasonCode_ = nullptr;};
    inline string reasonCode() const { DARABONBA_PTR_GET_DEFAULT(reasonCode_, "") };
    inline JobItem& setReasonCode(string reasonCode) { DARABONBA_PTR_SET_VALUE(reasonCode_, reasonCode) };


    // reasonMessage Field Functions 
    bool hasReasonMessage() const { return this->reasonMessage_ != nullptr;};
    void deleteReasonMessage() { this->reasonMessage_ = nullptr;};
    inline string reasonMessage() const { DARABONBA_PTR_GET_DEFAULT(reasonMessage_, "") };
    inline JobItem& setReasonMessage(string reasonMessage) { DARABONBA_PTR_SET_VALUE(reasonMessage_, reasonMessage) };


    // requestCPU Field Functions 
    bool hasRequestCPU() const { return this->requestCPU_ != nullptr;};
    void deleteRequestCPU() { this->requestCPU_ = nullptr;};
    inline int64_t requestCPU() const { DARABONBA_PTR_GET_DEFAULT(requestCPU_, 0L) };
    inline JobItem& setRequestCPU(int64_t requestCPU) { DARABONBA_PTR_SET_VALUE(requestCPU_, requestCPU) };


    // requestGPU Field Functions 
    bool hasRequestGPU() const { return this->requestGPU_ != nullptr;};
    void deleteRequestGPU() { this->requestGPU_ = nullptr;};
    inline string requestGPU() const { DARABONBA_PTR_GET_DEFAULT(requestGPU_, "") };
    inline JobItem& setRequestGPU(string requestGPU) { DARABONBA_PTR_SET_VALUE(requestGPU_, requestGPU) };


    // requestMemory Field Functions 
    bool hasRequestMemory() const { return this->requestMemory_ != nullptr;};
    void deleteRequestMemory() { this->requestMemory_ = nullptr;};
    inline string requestMemory() const { DARABONBA_PTR_GET_DEFAULT(requestMemory_, "") };
    inline JobItem& setRequestMemory(string requestMemory) { DARABONBA_PTR_SET_VALUE(requestMemory_, requestMemory) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline JobItem& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceLevel Field Functions 
    bool hasResourceLevel() const { return this->resourceLevel_ != nullptr;};
    void deleteResourceLevel() { this->resourceLevel_ = nullptr;};
    inline string resourceLevel() const { DARABONBA_PTR_GET_DEFAULT(resourceLevel_, "") };
    inline JobItem& setResourceLevel(string resourceLevel) { DARABONBA_PTR_SET_VALUE(resourceLevel_, resourceLevel) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string resourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline JobItem& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // resourceQuotaName Field Functions 
    bool hasResourceQuotaName() const { return this->resourceQuotaName_ != nullptr;};
    void deleteResourceQuotaName() { this->resourceQuotaName_ = nullptr;};
    inline string resourceQuotaName() const { DARABONBA_PTR_GET_DEFAULT(resourceQuotaName_, "") };
    inline JobItem& setResourceQuotaName(string resourceQuotaName) { DARABONBA_PTR_SET_VALUE(resourceQuotaName_, resourceQuotaName) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline JobItem& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // restartTimes Field Functions 
    bool hasRestartTimes() const { return this->restartTimes_ != nullptr;};
    void deleteRestartTimes() { this->restartTimes_ = nullptr;};
    inline string restartTimes() const { DARABONBA_PTR_GET_DEFAULT(restartTimes_, "") };
    inline JobItem& setRestartTimes(string restartTimes) { DARABONBA_PTR_SET_VALUE(restartTimes_, restartTimes) };


    // settings Field Functions 
    bool hasSettings() const { return this->settings_ != nullptr;};
    void deleteSettings() { this->settings_ = nullptr;};
    inline const JobSettings & settings() const { DARABONBA_PTR_GET_CONST(settings_, JobSettings) };
    inline JobSettings settings() { DARABONBA_PTR_GET(settings_, JobSettings) };
    inline JobItem& setSettings(const JobSettings & settings) { DARABONBA_PTR_SET_VALUE(settings_, settings) };
    inline JobItem& setSettings(JobSettings && settings) { DARABONBA_PTR_SET_RVALUE(settings_, settings) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline JobItem& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusHistory Field Functions 
    bool hasStatusHistory() const { return this->statusHistory_ != nullptr;};
    void deleteStatusHistory() { this->statusHistory_ = nullptr;};
    inline const vector<StatusTransitionItem> & statusHistory() const { DARABONBA_PTR_GET_CONST(statusHistory_, vector<StatusTransitionItem>) };
    inline vector<StatusTransitionItem> statusHistory() { DARABONBA_PTR_GET(statusHistory_, vector<StatusTransitionItem>) };
    inline JobItem& setStatusHistory(const vector<StatusTransitionItem> & statusHistory) { DARABONBA_PTR_SET_VALUE(statusHistory_, statusHistory) };
    inline JobItem& setStatusHistory(vector<StatusTransitionItem> && statusHistory) { DARABONBA_PTR_SET_RVALUE(statusHistory_, statusHistory) };


    // subStatus Field Functions 
    bool hasSubStatus() const { return this->subStatus_ != nullptr;};
    void deleteSubStatus() { this->subStatus_ = nullptr;};
    inline string subStatus() const { DARABONBA_PTR_GET_DEFAULT(subStatus_, "") };
    inline JobItem& setSubStatus(string subStatus) { DARABONBA_PTR_SET_VALUE(subStatus_, subStatus) };


    // systemEnvs Field Functions 
    bool hasSystemEnvs() const { return this->systemEnvs_ != nullptr;};
    void deleteSystemEnvs() { this->systemEnvs_ = nullptr;};
    inline const map<string, string> & systemEnvs() const { DARABONBA_PTR_GET_CONST(systemEnvs_, map<string, string>) };
    inline map<string, string> systemEnvs() { DARABONBA_PTR_GET(systemEnvs_, map<string, string>) };
    inline JobItem& setSystemEnvs(const map<string, string> & systemEnvs) { DARABONBA_PTR_SET_VALUE(systemEnvs_, systemEnvs) };
    inline JobItem& setSystemEnvs(map<string, string> && systemEnvs) { DARABONBA_PTR_SET_RVALUE(systemEnvs_, systemEnvs) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline JobItem& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // thirdpartyLibDir Field Functions 
    bool hasThirdpartyLibDir() const { return this->thirdpartyLibDir_ != nullptr;};
    void deleteThirdpartyLibDir() { this->thirdpartyLibDir_ = nullptr;};
    inline string thirdpartyLibDir() const { DARABONBA_PTR_GET_DEFAULT(thirdpartyLibDir_, "") };
    inline JobItem& setThirdpartyLibDir(string thirdpartyLibDir) { DARABONBA_PTR_SET_VALUE(thirdpartyLibDir_, thirdpartyLibDir) };


    // thirdpartyLibs Field Functions 
    bool hasThirdpartyLibs() const { return this->thirdpartyLibs_ != nullptr;};
    void deleteThirdpartyLibs() { this->thirdpartyLibs_ = nullptr;};
    inline const vector<string> & thirdpartyLibs() const { DARABONBA_PTR_GET_CONST(thirdpartyLibs_, vector<string>) };
    inline vector<string> thirdpartyLibs() { DARABONBA_PTR_GET(thirdpartyLibs_, vector<string>) };
    inline JobItem& setThirdpartyLibs(const vector<string> & thirdpartyLibs) { DARABONBA_PTR_SET_VALUE(thirdpartyLibs_, thirdpartyLibs) };
    inline JobItem& setThirdpartyLibs(vector<string> && thirdpartyLibs) { DARABONBA_PTR_SET_RVALUE(thirdpartyLibs_, thirdpartyLibs) };


    // useOversoldResource Field Functions 
    bool hasUseOversoldResource() const { return this->useOversoldResource_ != nullptr;};
    void deleteUseOversoldResource() { this->useOversoldResource_ = nullptr;};
    inline bool useOversoldResource() const { DARABONBA_PTR_GET_DEFAULT(useOversoldResource_, false) };
    inline JobItem& setUseOversoldResource(bool useOversoldResource) { DARABONBA_PTR_SET_VALUE(useOversoldResource_, useOversoldResource) };


    // userCommand Field Functions 
    bool hasUserCommand() const { return this->userCommand_ != nullptr;};
    void deleteUserCommand() { this->userCommand_ = nullptr;};
    inline string userCommand() const { DARABONBA_PTR_GET_DEFAULT(userCommand_, "") };
    inline JobItem& setUserCommand(string userCommand) { DARABONBA_PTR_SET_VALUE(userCommand_, userCommand) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline JobItem& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userScript Field Functions 
    bool hasUserScript() const { return this->userScript_ != nullptr;};
    void deleteUserScript() { this->userScript_ = nullptr;};
    inline string userScript() const { DARABONBA_PTR_GET_DEFAULT(userScript_, "") };
    inline JobItem& setUserScript(string userScript) { DARABONBA_PTR_SET_VALUE(userScript_, userScript) };


    // userVpc Field Functions 
    bool hasUserVpc() const { return this->userVpc_ != nullptr;};
    void deleteUserVpc() { this->userVpc_ = nullptr;};
    inline const JobItemUserVpc & userVpc() const { DARABONBA_PTR_GET_CONST(userVpc_, JobItemUserVpc) };
    inline JobItemUserVpc userVpc() { DARABONBA_PTR_GET(userVpc_, JobItemUserVpc) };
    inline JobItem& setUserVpc(const JobItemUserVpc & userVpc) { DARABONBA_PTR_SET_VALUE(userVpc_, userVpc) };
    inline JobItem& setUserVpc(JobItemUserVpc && userVpc) { DARABONBA_PTR_SET_RVALUE(userVpc_, userVpc) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline JobItem& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


    // workingDir Field Functions 
    bool hasWorkingDir() const { return this->workingDir_ != nullptr;};
    void deleteWorkingDir() { this->workingDir_ = nullptr;};
    inline string workingDir() const { DARABONBA_PTR_GET_DEFAULT(workingDir_, "") };
    inline JobItem& setWorkingDir(string workingDir) { DARABONBA_PTR_SET_VALUE(workingDir_, workingDir) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline JobItem& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // workspaceName Field Functions 
    bool hasWorkspaceName() const { return this->workspaceName_ != nullptr;};
    void deleteWorkspaceName() { this->workspaceName_ = nullptr;};
    inline string workspaceName() const { DARABONBA_PTR_GET_DEFAULT(workspaceName_, "") };
    inline JobItem& setWorkspaceName(string workspaceName) { DARABONBA_PTR_SET_VALUE(workspaceName_, workspaceName) };


  protected:
    std::shared_ptr<string> accessibility_ = nullptr;
    std::shared_ptr<string> clusterId_ = nullptr;
    std::shared_ptr<JobItemCodeSource> codeSource_ = nullptr;
    std::shared_ptr<CredentialConfig> credentialConfig_ = nullptr;
    std::shared_ptr<vector<JobItemDataSources>> dataSources_ = nullptr;
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<int64_t> duration_ = nullptr;
    std::shared_ptr<JobElasticSpec> elasticSpec_ = nullptr;
    std::shared_ptr<bool> enablePreemptibleJob_ = nullptr;
    std::shared_ptr<bool> enabledDebugger_ = nullptr;
    std::shared_ptr<map<string, string>> envs_ = nullptr;
    std::shared_ptr<string> gmtCreateTime_ = nullptr;
    std::shared_ptr<string> gmtFailedTime_ = nullptr;
    std::shared_ptr<string> gmtFinishTime_ = nullptr;
    std::shared_ptr<string> gmtModifiedTime_ = nullptr;
    std::shared_ptr<string> gmtRunningTime_ = nullptr;
    std::shared_ptr<string> gmtStoppedTime_ = nullptr;
    std::shared_ptr<string> gmtSubmittedTime_ = nullptr;
    std::shared_ptr<string> gmtSuccessedTime_ = nullptr;
    std::shared_ptr<bool> isDeleted_ = nullptr;
    std::shared_ptr<string> jobId_ = nullptr;
    std::shared_ptr<int64_t> jobMaxRunningTimeMinutes_ = nullptr;
    std::shared_ptr<vector<JobSpec>> jobSpecs_ = nullptr;
    std::shared_ptr<string> jobType_ = nullptr;
    std::shared_ptr<string> nodeCount_ = nullptr;
    std::shared_ptr<vector<string>> nodeNames_ = nullptr;
    std::shared_ptr<vector<PodItem>> pods_ = nullptr;
    std::shared_ptr<int32_t> priority_ = nullptr;
    std::shared_ptr<string> reasonCode_ = nullptr;
    std::shared_ptr<string> reasonMessage_ = nullptr;
    std::shared_ptr<int64_t> requestCPU_ = nullptr;
    std::shared_ptr<string> requestGPU_ = nullptr;
    std::shared_ptr<string> requestMemory_ = nullptr;
    std::shared_ptr<string> resourceId_ = nullptr;
    std::shared_ptr<string> resourceLevel_ = nullptr;
    std::shared_ptr<string> resourceName_ = nullptr;
    std::shared_ptr<string> resourceQuotaName_ = nullptr;
    std::shared_ptr<string> resourceType_ = nullptr;
    std::shared_ptr<string> restartTimes_ = nullptr;
    std::shared_ptr<JobSettings> settings_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<vector<StatusTransitionItem>> statusHistory_ = nullptr;
    std::shared_ptr<string> subStatus_ = nullptr;
    std::shared_ptr<map<string, string>> systemEnvs_ = nullptr;
    std::shared_ptr<string> tenantId_ = nullptr;
    std::shared_ptr<string> thirdpartyLibDir_ = nullptr;
    std::shared_ptr<vector<string>> thirdpartyLibs_ = nullptr;
    std::shared_ptr<bool> useOversoldResource_ = nullptr;
    std::shared_ptr<string> userCommand_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> userScript_ = nullptr;
    std::shared_ptr<JobItemUserVpc> userVpc_ = nullptr;
    std::shared_ptr<string> username_ = nullptr;
    std::shared_ptr<string> workingDir_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
    std::shared_ptr<string> workspaceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
