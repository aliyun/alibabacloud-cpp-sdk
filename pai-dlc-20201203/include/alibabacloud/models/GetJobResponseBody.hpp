// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetJobResponseBodyCodeSource.hpp>
#include <alibabacloud/models/CredentialConfig.hpp>
#include <vector>
#include <alibabacloud/models/GetJobResponseBodyDataSources.hpp>
#include <alibabacloud/models/JobElasticSpec.hpp>
#include <map>
#include <alibabacloud/models/JobReplicaStatus.hpp>
#include <alibabacloud/models/JobSpec.hpp>
#include <alibabacloud/models/GetJobResponseBodyPods.hpp>
#include <alibabacloud/models/GetJobResponseBodyRestartRecord.hpp>
#include <alibabacloud/models/JobSettings.hpp>
#include <alibabacloud/models/StatusTransitionItem.hpp>
#include <alibabacloud/models/GetJobResponseBodyUserVpc.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class GetJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(CodeSource, codeSource_);
      DARABONBA_PTR_TO_JSON(CredentialConfig, credentialConfig_);
      DARABONBA_PTR_TO_JSON(DataSources, dataSources_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(ElasticSpec, elasticSpec_);
      DARABONBA_PTR_TO_JSON(EnabledDebugger, enabledDebugger_);
      DARABONBA_PTR_TO_JSON(Envs, envs_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtFailedTime, gmtFailedTime_);
      DARABONBA_PTR_TO_JSON(GmtFinishTime, gmtFinishTime_);
      DARABONBA_PTR_TO_JSON(GmtRunningTime, gmtRunningTime_);
      DARABONBA_PTR_TO_JSON(GmtStoppedTime, gmtStoppedTime_);
      DARABONBA_PTR_TO_JSON(GmtSubmittedTime, gmtSubmittedTime_);
      DARABONBA_PTR_TO_JSON(GmtSuccessedTime, gmtSuccessedTime_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(JobReplicaStatuses, jobReplicaStatuses_);
      DARABONBA_PTR_TO_JSON(JobSpecs, jobSpecs_);
      DARABONBA_PTR_TO_JSON(JobType, jobType_);
      DARABONBA_PTR_TO_JSON(Pods, pods_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(ReasonCode, reasonCode_);
      DARABONBA_PTR_TO_JSON(ReasonMessage, reasonMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceLevel, resourceLevel_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(RestartRecord, restartRecord_);
      DARABONBA_PTR_TO_JSON(RestartTimes, restartTimes_);
      DARABONBA_PTR_TO_JSON(Settings, settings_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusHistory, statusHistory_);
      DARABONBA_PTR_TO_JSON(SubStatus, subStatus_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(ThirdpartyLibDir, thirdpartyLibDir_);
      DARABONBA_PTR_TO_JSON(ThirdpartyLibs, thirdpartyLibs_);
      DARABONBA_PTR_TO_JSON(UserCommand, userCommand_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserVpc, userVpc_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_TO_JSON(WorkspaceName, workspaceName_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(CodeSource, codeSource_);
      DARABONBA_PTR_FROM_JSON(CredentialConfig, credentialConfig_);
      DARABONBA_PTR_FROM_JSON(DataSources, dataSources_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(ElasticSpec, elasticSpec_);
      DARABONBA_PTR_FROM_JSON(EnabledDebugger, enabledDebugger_);
      DARABONBA_PTR_FROM_JSON(Envs, envs_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtFailedTime, gmtFailedTime_);
      DARABONBA_PTR_FROM_JSON(GmtFinishTime, gmtFinishTime_);
      DARABONBA_PTR_FROM_JSON(GmtRunningTime, gmtRunningTime_);
      DARABONBA_PTR_FROM_JSON(GmtStoppedTime, gmtStoppedTime_);
      DARABONBA_PTR_FROM_JSON(GmtSubmittedTime, gmtSubmittedTime_);
      DARABONBA_PTR_FROM_JSON(GmtSuccessedTime, gmtSuccessedTime_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(JobReplicaStatuses, jobReplicaStatuses_);
      DARABONBA_PTR_FROM_JSON(JobSpecs, jobSpecs_);
      DARABONBA_PTR_FROM_JSON(JobType, jobType_);
      DARABONBA_PTR_FROM_JSON(Pods, pods_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(ReasonCode, reasonCode_);
      DARABONBA_PTR_FROM_JSON(ReasonMessage, reasonMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceLevel, resourceLevel_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(RestartRecord, restartRecord_);
      DARABONBA_PTR_FROM_JSON(RestartTimes, restartTimes_);
      DARABONBA_PTR_FROM_JSON(Settings, settings_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusHistory, statusHistory_);
      DARABONBA_PTR_FROM_JSON(SubStatus, subStatus_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(ThirdpartyLibDir, thirdpartyLibDir_);
      DARABONBA_PTR_FROM_JSON(ThirdpartyLibs, thirdpartyLibs_);
      DARABONBA_PTR_FROM_JSON(UserCommand, userCommand_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserVpc, userVpc_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceName, workspaceName_);
    };
    GetJobResponseBody() = default ;
    GetJobResponseBody(const GetJobResponseBody &) = default ;
    GetJobResponseBody(GetJobResponseBody &&) = default ;
    GetJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobResponseBody() = default ;
    GetJobResponseBody& operator=(const GetJobResponseBody &) = default ;
    GetJobResponseBody& operator=(GetJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessibility_ == nullptr
        && return this->clusterId_ == nullptr && return this->codeSource_ == nullptr && return this->credentialConfig_ == nullptr && return this->dataSources_ == nullptr && return this->displayName_ == nullptr
        && return this->duration_ == nullptr && return this->elasticSpec_ == nullptr && return this->enabledDebugger_ == nullptr && return this->envs_ == nullptr && return this->gmtCreateTime_ == nullptr
        && return this->gmtFailedTime_ == nullptr && return this->gmtFinishTime_ == nullptr && return this->gmtRunningTime_ == nullptr && return this->gmtStoppedTime_ == nullptr && return this->gmtSubmittedTime_ == nullptr
        && return this->gmtSuccessedTime_ == nullptr && return this->jobId_ == nullptr && return this->jobReplicaStatuses_ == nullptr && return this->jobSpecs_ == nullptr && return this->jobType_ == nullptr
        && return this->pods_ == nullptr && return this->priority_ == nullptr && return this->reasonCode_ == nullptr && return this->reasonMessage_ == nullptr && return this->requestId_ == nullptr
        && return this->resourceId_ == nullptr && return this->resourceLevel_ == nullptr && return this->resourceType_ == nullptr && return this->restartRecord_ == nullptr && return this->restartTimes_ == nullptr
        && return this->settings_ == nullptr && return this->status_ == nullptr && return this->statusHistory_ == nullptr && return this->subStatus_ == nullptr && return this->tenantId_ == nullptr
        && return this->thirdpartyLibDir_ == nullptr && return this->thirdpartyLibs_ == nullptr && return this->userCommand_ == nullptr && return this->userId_ == nullptr && return this->userVpc_ == nullptr
        && return this->workspaceId_ == nullptr && return this->workspaceName_ == nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string accessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline GetJobResponseBody& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline GetJobResponseBody& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // codeSource Field Functions 
    bool hasCodeSource() const { return this->codeSource_ != nullptr;};
    void deleteCodeSource() { this->codeSource_ = nullptr;};
    inline const GetJobResponseBodyCodeSource & codeSource() const { DARABONBA_PTR_GET_CONST(codeSource_, GetJobResponseBodyCodeSource) };
    inline GetJobResponseBodyCodeSource codeSource() { DARABONBA_PTR_GET(codeSource_, GetJobResponseBodyCodeSource) };
    inline GetJobResponseBody& setCodeSource(const GetJobResponseBodyCodeSource & codeSource) { DARABONBA_PTR_SET_VALUE(codeSource_, codeSource) };
    inline GetJobResponseBody& setCodeSource(GetJobResponseBodyCodeSource && codeSource) { DARABONBA_PTR_SET_RVALUE(codeSource_, codeSource) };


    // credentialConfig Field Functions 
    bool hasCredentialConfig() const { return this->credentialConfig_ != nullptr;};
    void deleteCredentialConfig() { this->credentialConfig_ = nullptr;};
    inline const CredentialConfig & credentialConfig() const { DARABONBA_PTR_GET_CONST(credentialConfig_, CredentialConfig) };
    inline CredentialConfig credentialConfig() { DARABONBA_PTR_GET(credentialConfig_, CredentialConfig) };
    inline GetJobResponseBody& setCredentialConfig(const CredentialConfig & credentialConfig) { DARABONBA_PTR_SET_VALUE(credentialConfig_, credentialConfig) };
    inline GetJobResponseBody& setCredentialConfig(CredentialConfig && credentialConfig) { DARABONBA_PTR_SET_RVALUE(credentialConfig_, credentialConfig) };


    // dataSources Field Functions 
    bool hasDataSources() const { return this->dataSources_ != nullptr;};
    void deleteDataSources() { this->dataSources_ = nullptr;};
    inline const vector<GetJobResponseBodyDataSources> & dataSources() const { DARABONBA_PTR_GET_CONST(dataSources_, vector<GetJobResponseBodyDataSources>) };
    inline vector<GetJobResponseBodyDataSources> dataSources() { DARABONBA_PTR_GET(dataSources_, vector<GetJobResponseBodyDataSources>) };
    inline GetJobResponseBody& setDataSources(const vector<GetJobResponseBodyDataSources> & dataSources) { DARABONBA_PTR_SET_VALUE(dataSources_, dataSources) };
    inline GetJobResponseBody& setDataSources(vector<GetJobResponseBodyDataSources> && dataSources) { DARABONBA_PTR_SET_RVALUE(dataSources_, dataSources) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline GetJobResponseBody& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline GetJobResponseBody& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // elasticSpec Field Functions 
    bool hasElasticSpec() const { return this->elasticSpec_ != nullptr;};
    void deleteElasticSpec() { this->elasticSpec_ = nullptr;};
    inline const JobElasticSpec & elasticSpec() const { DARABONBA_PTR_GET_CONST(elasticSpec_, JobElasticSpec) };
    inline JobElasticSpec elasticSpec() { DARABONBA_PTR_GET(elasticSpec_, JobElasticSpec) };
    inline GetJobResponseBody& setElasticSpec(const JobElasticSpec & elasticSpec) { DARABONBA_PTR_SET_VALUE(elasticSpec_, elasticSpec) };
    inline GetJobResponseBody& setElasticSpec(JobElasticSpec && elasticSpec) { DARABONBA_PTR_SET_RVALUE(elasticSpec_, elasticSpec) };


    // enabledDebugger Field Functions 
    bool hasEnabledDebugger() const { return this->enabledDebugger_ != nullptr;};
    void deleteEnabledDebugger() { this->enabledDebugger_ = nullptr;};
    inline bool enabledDebugger() const { DARABONBA_PTR_GET_DEFAULT(enabledDebugger_, false) };
    inline GetJobResponseBody& setEnabledDebugger(bool enabledDebugger) { DARABONBA_PTR_SET_VALUE(enabledDebugger_, enabledDebugger) };


    // envs Field Functions 
    bool hasEnvs() const { return this->envs_ != nullptr;};
    void deleteEnvs() { this->envs_ = nullptr;};
    inline const map<string, string> & envs() const { DARABONBA_PTR_GET_CONST(envs_, map<string, string>) };
    inline map<string, string> envs() { DARABONBA_PTR_GET(envs_, map<string, string>) };
    inline GetJobResponseBody& setEnvs(const map<string, string> & envs) { DARABONBA_PTR_SET_VALUE(envs_, envs) };
    inline GetJobResponseBody& setEnvs(map<string, string> && envs) { DARABONBA_PTR_SET_RVALUE(envs_, envs) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string gmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline GetJobResponseBody& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtFailedTime Field Functions 
    bool hasGmtFailedTime() const { return this->gmtFailedTime_ != nullptr;};
    void deleteGmtFailedTime() { this->gmtFailedTime_ = nullptr;};
    inline string gmtFailedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtFailedTime_, "") };
    inline GetJobResponseBody& setGmtFailedTime(string gmtFailedTime) { DARABONBA_PTR_SET_VALUE(gmtFailedTime_, gmtFailedTime) };


    // gmtFinishTime Field Functions 
    bool hasGmtFinishTime() const { return this->gmtFinishTime_ != nullptr;};
    void deleteGmtFinishTime() { this->gmtFinishTime_ = nullptr;};
    inline string gmtFinishTime() const { DARABONBA_PTR_GET_DEFAULT(gmtFinishTime_, "") };
    inline GetJobResponseBody& setGmtFinishTime(string gmtFinishTime) { DARABONBA_PTR_SET_VALUE(gmtFinishTime_, gmtFinishTime) };


    // gmtRunningTime Field Functions 
    bool hasGmtRunningTime() const { return this->gmtRunningTime_ != nullptr;};
    void deleteGmtRunningTime() { this->gmtRunningTime_ = nullptr;};
    inline string gmtRunningTime() const { DARABONBA_PTR_GET_DEFAULT(gmtRunningTime_, "") };
    inline GetJobResponseBody& setGmtRunningTime(string gmtRunningTime) { DARABONBA_PTR_SET_VALUE(gmtRunningTime_, gmtRunningTime) };


    // gmtStoppedTime Field Functions 
    bool hasGmtStoppedTime() const { return this->gmtStoppedTime_ != nullptr;};
    void deleteGmtStoppedTime() { this->gmtStoppedTime_ = nullptr;};
    inline string gmtStoppedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtStoppedTime_, "") };
    inline GetJobResponseBody& setGmtStoppedTime(string gmtStoppedTime) { DARABONBA_PTR_SET_VALUE(gmtStoppedTime_, gmtStoppedTime) };


    // gmtSubmittedTime Field Functions 
    bool hasGmtSubmittedTime() const { return this->gmtSubmittedTime_ != nullptr;};
    void deleteGmtSubmittedTime() { this->gmtSubmittedTime_ = nullptr;};
    inline string gmtSubmittedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtSubmittedTime_, "") };
    inline GetJobResponseBody& setGmtSubmittedTime(string gmtSubmittedTime) { DARABONBA_PTR_SET_VALUE(gmtSubmittedTime_, gmtSubmittedTime) };


    // gmtSuccessedTime Field Functions 
    bool hasGmtSuccessedTime() const { return this->gmtSuccessedTime_ != nullptr;};
    void deleteGmtSuccessedTime() { this->gmtSuccessedTime_ = nullptr;};
    inline string gmtSuccessedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtSuccessedTime_, "") };
    inline GetJobResponseBody& setGmtSuccessedTime(string gmtSuccessedTime) { DARABONBA_PTR_SET_VALUE(gmtSuccessedTime_, gmtSuccessedTime) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline GetJobResponseBody& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // jobReplicaStatuses Field Functions 
    bool hasJobReplicaStatuses() const { return this->jobReplicaStatuses_ != nullptr;};
    void deleteJobReplicaStatuses() { this->jobReplicaStatuses_ = nullptr;};
    inline const vector<JobReplicaStatus> & jobReplicaStatuses() const { DARABONBA_PTR_GET_CONST(jobReplicaStatuses_, vector<JobReplicaStatus>) };
    inline vector<JobReplicaStatus> jobReplicaStatuses() { DARABONBA_PTR_GET(jobReplicaStatuses_, vector<JobReplicaStatus>) };
    inline GetJobResponseBody& setJobReplicaStatuses(const vector<JobReplicaStatus> & jobReplicaStatuses) { DARABONBA_PTR_SET_VALUE(jobReplicaStatuses_, jobReplicaStatuses) };
    inline GetJobResponseBody& setJobReplicaStatuses(vector<JobReplicaStatus> && jobReplicaStatuses) { DARABONBA_PTR_SET_RVALUE(jobReplicaStatuses_, jobReplicaStatuses) };


    // jobSpecs Field Functions 
    bool hasJobSpecs() const { return this->jobSpecs_ != nullptr;};
    void deleteJobSpecs() { this->jobSpecs_ = nullptr;};
    inline const vector<JobSpec> & jobSpecs() const { DARABONBA_PTR_GET_CONST(jobSpecs_, vector<JobSpec>) };
    inline vector<JobSpec> jobSpecs() { DARABONBA_PTR_GET(jobSpecs_, vector<JobSpec>) };
    inline GetJobResponseBody& setJobSpecs(const vector<JobSpec> & jobSpecs) { DARABONBA_PTR_SET_VALUE(jobSpecs_, jobSpecs) };
    inline GetJobResponseBody& setJobSpecs(vector<JobSpec> && jobSpecs) { DARABONBA_PTR_SET_RVALUE(jobSpecs_, jobSpecs) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string jobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline GetJobResponseBody& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // pods Field Functions 
    bool hasPods() const { return this->pods_ != nullptr;};
    void deletePods() { this->pods_ = nullptr;};
    inline const vector<GetJobResponseBodyPods> & pods() const { DARABONBA_PTR_GET_CONST(pods_, vector<GetJobResponseBodyPods>) };
    inline vector<GetJobResponseBodyPods> pods() { DARABONBA_PTR_GET(pods_, vector<GetJobResponseBodyPods>) };
    inline GetJobResponseBody& setPods(const vector<GetJobResponseBodyPods> & pods) { DARABONBA_PTR_SET_VALUE(pods_, pods) };
    inline GetJobResponseBody& setPods(vector<GetJobResponseBodyPods> && pods) { DARABONBA_PTR_SET_RVALUE(pods_, pods) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline GetJobResponseBody& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // reasonCode Field Functions 
    bool hasReasonCode() const { return this->reasonCode_ != nullptr;};
    void deleteReasonCode() { this->reasonCode_ = nullptr;};
    inline string reasonCode() const { DARABONBA_PTR_GET_DEFAULT(reasonCode_, "") };
    inline GetJobResponseBody& setReasonCode(string reasonCode) { DARABONBA_PTR_SET_VALUE(reasonCode_, reasonCode) };


    // reasonMessage Field Functions 
    bool hasReasonMessage() const { return this->reasonMessage_ != nullptr;};
    void deleteReasonMessage() { this->reasonMessage_ = nullptr;};
    inline string reasonMessage() const { DARABONBA_PTR_GET_DEFAULT(reasonMessage_, "") };
    inline GetJobResponseBody& setReasonMessage(string reasonMessage) { DARABONBA_PTR_SET_VALUE(reasonMessage_, reasonMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline GetJobResponseBody& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceLevel Field Functions 
    bool hasResourceLevel() const { return this->resourceLevel_ != nullptr;};
    void deleteResourceLevel() { this->resourceLevel_ = nullptr;};
    inline string resourceLevel() const { DARABONBA_PTR_GET_DEFAULT(resourceLevel_, "") };
    inline GetJobResponseBody& setResourceLevel(string resourceLevel) { DARABONBA_PTR_SET_VALUE(resourceLevel_, resourceLevel) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetJobResponseBody& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // restartRecord Field Functions 
    bool hasRestartRecord() const { return this->restartRecord_ != nullptr;};
    void deleteRestartRecord() { this->restartRecord_ = nullptr;};
    inline const vector<GetJobResponseBodyRestartRecord> & restartRecord() const { DARABONBA_PTR_GET_CONST(restartRecord_, vector<GetJobResponseBodyRestartRecord>) };
    inline vector<GetJobResponseBodyRestartRecord> restartRecord() { DARABONBA_PTR_GET(restartRecord_, vector<GetJobResponseBodyRestartRecord>) };
    inline GetJobResponseBody& setRestartRecord(const vector<GetJobResponseBodyRestartRecord> & restartRecord) { DARABONBA_PTR_SET_VALUE(restartRecord_, restartRecord) };
    inline GetJobResponseBody& setRestartRecord(vector<GetJobResponseBodyRestartRecord> && restartRecord) { DARABONBA_PTR_SET_RVALUE(restartRecord_, restartRecord) };


    // restartTimes Field Functions 
    bool hasRestartTimes() const { return this->restartTimes_ != nullptr;};
    void deleteRestartTimes() { this->restartTimes_ = nullptr;};
    inline string restartTimes() const { DARABONBA_PTR_GET_DEFAULT(restartTimes_, "") };
    inline GetJobResponseBody& setRestartTimes(string restartTimes) { DARABONBA_PTR_SET_VALUE(restartTimes_, restartTimes) };


    // settings Field Functions 
    bool hasSettings() const { return this->settings_ != nullptr;};
    void deleteSettings() { this->settings_ = nullptr;};
    inline const JobSettings & settings() const { DARABONBA_PTR_GET_CONST(settings_, JobSettings) };
    inline JobSettings settings() { DARABONBA_PTR_GET(settings_, JobSettings) };
    inline GetJobResponseBody& setSettings(const JobSettings & settings) { DARABONBA_PTR_SET_VALUE(settings_, settings) };
    inline GetJobResponseBody& setSettings(JobSettings && settings) { DARABONBA_PTR_SET_RVALUE(settings_, settings) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetJobResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusHistory Field Functions 
    bool hasStatusHistory() const { return this->statusHistory_ != nullptr;};
    void deleteStatusHistory() { this->statusHistory_ = nullptr;};
    inline const vector<StatusTransitionItem> & statusHistory() const { DARABONBA_PTR_GET_CONST(statusHistory_, vector<StatusTransitionItem>) };
    inline vector<StatusTransitionItem> statusHistory() { DARABONBA_PTR_GET(statusHistory_, vector<StatusTransitionItem>) };
    inline GetJobResponseBody& setStatusHistory(const vector<StatusTransitionItem> & statusHistory) { DARABONBA_PTR_SET_VALUE(statusHistory_, statusHistory) };
    inline GetJobResponseBody& setStatusHistory(vector<StatusTransitionItem> && statusHistory) { DARABONBA_PTR_SET_RVALUE(statusHistory_, statusHistory) };


    // subStatus Field Functions 
    bool hasSubStatus() const { return this->subStatus_ != nullptr;};
    void deleteSubStatus() { this->subStatus_ = nullptr;};
    inline string subStatus() const { DARABONBA_PTR_GET_DEFAULT(subStatus_, "") };
    inline GetJobResponseBody& setSubStatus(string subStatus) { DARABONBA_PTR_SET_VALUE(subStatus_, subStatus) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline GetJobResponseBody& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // thirdpartyLibDir Field Functions 
    bool hasThirdpartyLibDir() const { return this->thirdpartyLibDir_ != nullptr;};
    void deleteThirdpartyLibDir() { this->thirdpartyLibDir_ = nullptr;};
    inline string thirdpartyLibDir() const { DARABONBA_PTR_GET_DEFAULT(thirdpartyLibDir_, "") };
    inline GetJobResponseBody& setThirdpartyLibDir(string thirdpartyLibDir) { DARABONBA_PTR_SET_VALUE(thirdpartyLibDir_, thirdpartyLibDir) };


    // thirdpartyLibs Field Functions 
    bool hasThirdpartyLibs() const { return this->thirdpartyLibs_ != nullptr;};
    void deleteThirdpartyLibs() { this->thirdpartyLibs_ = nullptr;};
    inline const vector<string> & thirdpartyLibs() const { DARABONBA_PTR_GET_CONST(thirdpartyLibs_, vector<string>) };
    inline vector<string> thirdpartyLibs() { DARABONBA_PTR_GET(thirdpartyLibs_, vector<string>) };
    inline GetJobResponseBody& setThirdpartyLibs(const vector<string> & thirdpartyLibs) { DARABONBA_PTR_SET_VALUE(thirdpartyLibs_, thirdpartyLibs) };
    inline GetJobResponseBody& setThirdpartyLibs(vector<string> && thirdpartyLibs) { DARABONBA_PTR_SET_RVALUE(thirdpartyLibs_, thirdpartyLibs) };


    // userCommand Field Functions 
    bool hasUserCommand() const { return this->userCommand_ != nullptr;};
    void deleteUserCommand() { this->userCommand_ = nullptr;};
    inline string userCommand() const { DARABONBA_PTR_GET_DEFAULT(userCommand_, "") };
    inline GetJobResponseBody& setUserCommand(string userCommand) { DARABONBA_PTR_SET_VALUE(userCommand_, userCommand) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetJobResponseBody& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userVpc Field Functions 
    bool hasUserVpc() const { return this->userVpc_ != nullptr;};
    void deleteUserVpc() { this->userVpc_ = nullptr;};
    inline const GetJobResponseBodyUserVpc & userVpc() const { DARABONBA_PTR_GET_CONST(userVpc_, GetJobResponseBodyUserVpc) };
    inline GetJobResponseBodyUserVpc userVpc() { DARABONBA_PTR_GET(userVpc_, GetJobResponseBodyUserVpc) };
    inline GetJobResponseBody& setUserVpc(const GetJobResponseBodyUserVpc & userVpc) { DARABONBA_PTR_SET_VALUE(userVpc_, userVpc) };
    inline GetJobResponseBody& setUserVpc(GetJobResponseBodyUserVpc && userVpc) { DARABONBA_PTR_SET_RVALUE(userVpc_, userVpc) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetJobResponseBody& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // workspaceName Field Functions 
    bool hasWorkspaceName() const { return this->workspaceName_ != nullptr;};
    void deleteWorkspaceName() { this->workspaceName_ = nullptr;};
    inline string workspaceName() const { DARABONBA_PTR_GET_DEFAULT(workspaceName_, "") };
    inline GetJobResponseBody& setWorkspaceName(string workspaceName) { DARABONBA_PTR_SET_VALUE(workspaceName_, workspaceName) };


  protected:
    // The visibility of the job. Valid values:
    // 
    // *   PUBLIC: The code is public in the workspace.
    // *   PRIVATE: The workspace is visible only to you and the administrator of the workspace. This is the default value.
    std::shared_ptr<string> accessibility_ = nullptr;
    // The cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The code source.
    std::shared_ptr<GetJobResponseBodyCodeSource> codeSource_ = nullptr;
    // The access credential configurations.
    std::shared_ptr<CredentialConfig> credentialConfig_ = nullptr;
    // The data sources.
    std::shared_ptr<vector<GetJobResponseBodyDataSources>> dataSources_ = nullptr;
    // The job name.
    std::shared_ptr<string> displayName_ = nullptr;
    // The duration of the job (seconds).
    std::shared_ptr<int64_t> duration_ = nullptr;
    // The elastic job parameters.
    std::shared_ptr<JobElasticSpec> elasticSpec_ = nullptr;
    // Specifies whether to enable the debugger job.
    std::shared_ptr<bool> enabledDebugger_ = nullptr;
    // The configurations of environment variables.
    std::shared_ptr<map<string, string>> envs_ = nullptr;
    // The time when the job was created (UTC).
    std::shared_ptr<string> gmtCreateTime_ = nullptr;
    // The time of the job failed (UTC).
    std::shared_ptr<string> gmtFailedTime_ = nullptr;
    // The time when the job ended (UTC).
    std::shared_ptr<string> gmtFinishTime_ = nullptr;
    // The start time of the job (UTC).
    std::shared_ptr<string> gmtRunningTime_ = nullptr;
    // The time when the job stopped (UTC).
    std::shared_ptr<string> gmtStoppedTime_ = nullptr;
    // The time when the job was submitted to the cluster (UTC).
    std::shared_ptr<string> gmtSubmittedTime_ = nullptr;
    // The time when the job succeeded (UTC).
    std::shared_ptr<string> gmtSuccessedTime_ = nullptr;
    // The job ID.
    std::shared_ptr<string> jobId_ = nullptr;
    std::shared_ptr<vector<JobReplicaStatus>> jobReplicaStatuses_ = nullptr;
    // The node configuration of the job, which is **JobSpecs** in the CreateJob operation.
    std::shared_ptr<vector<JobSpec>> jobSpecs_ = nullptr;
    // The job type. Specified by the JobType parameter of the [CreateJob](https://help.aliyun.com/document_detail/459672.html) operation.
    std::shared_ptr<string> jobType_ = nullptr;
    // All running nodes of the job.
    std::shared_ptr<vector<GetJobResponseBodyPods>> pods_ = nullptr;
    // The priority of the job. Valid values: 1 to 9.
    std::shared_ptr<int32_t> priority_ = nullptr;
    // The status detail code, which is a sub-status under the current status.
    std::shared_ptr<string> reasonCode_ = nullptr;
    // The description of the status detail code.
    std::shared_ptr<string> reasonMessage_ = nullptr;
    // The request ID, which can be used for troubleshooting.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the resource group to which the job belongs.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The resource level that the job uses.
    std::shared_ptr<string> resourceLevel_ = nullptr;
    // The resource type. Valid values: ECS, Lingjun, and ACS.
    std::shared_ptr<string> resourceType_ = nullptr;
    std::shared_ptr<vector<GetJobResponseBodyRestartRecord>> restartRecord_ = nullptr;
    // The number of retries and the maximum number of retries used by the job.
    std::shared_ptr<string> restartTimes_ = nullptr;
    // The additional parameter configurations of the job.
    std::shared_ptr<JobSettings> settings_ = nullptr;
    // The status of the job. Valid values:
    // 
    // *   Creating
    // *   Queuing
    // *   Bidding (Only for Lingjun preemptible jobs)
    // *   EnvPreparing
    // *   SanityChecking
    // *   Running
    // *   Restarting
    // *   Stopping
    // *   SucceededReserving
    // *   FailedReserving
    // *   Succeeded
    // *   Failed
    // *   Stopped
    std::shared_ptr<string> status_ = nullptr;
    // The status history.
    std::shared_ptr<vector<StatusTransitionItem>> statusHistory_ = nullptr;
    // The sub-status of the job, such as its preemption status.
    std::shared_ptr<string> subStatus_ = nullptr;
    // The tenant ID.
    std::shared_ptr<string> tenantId_ = nullptr;
    // The directory that contains requirements.txt.
    std::shared_ptr<string> thirdpartyLibDir_ = nullptr;
    // The third-party Python libraries to be installed.
    std::shared_ptr<vector<string>> thirdpartyLibs_ = nullptr;
    // The command that is run to start each node.
    std::shared_ptr<string> userCommand_ = nullptr;
    // The UID of the Alibaba Cloud account who submitted the job.
    std::shared_ptr<string> userId_ = nullptr;
    // The VPC of the user.
    std::shared_ptr<GetJobResponseBodyUserVpc> userVpc_ = nullptr;
    // The ID of the workspace to which the job belongs.
    std::shared_ptr<string> workspaceId_ = nullptr;
    // The name of the workspace to which the job belongs.
    std::shared_ptr<string> workspaceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
