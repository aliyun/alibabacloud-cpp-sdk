// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_JOBITEM_HPP_
#define ALIBABACLOUD_MODELS_JOBITEM_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CredentialConfig.hpp>
#include <alibabacloud/models/JobElasticSpec.hpp>
#include <map>
#include <alibabacloud/models/JobReplicaStatus.hpp>
#include <alibabacloud/models/JobSpec.hpp>
#include <alibabacloud/models/PodItem.hpp>
#include <alibabacloud/models/JobSettings.hpp>
#include <alibabacloud/models/StatusTransitionItem.hpp>
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
      DARABONBA_PTR_TO_JSON(JobReplicaStatuses, jobReplicaStatuses_);
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
      DARABONBA_PTR_FROM_JSON(JobReplicaStatuses, jobReplicaStatuses_);
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
    class UserVpc : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserVpc& obj) { 
        DARABONBA_PTR_TO_JSON(DefaultRoute, defaultRoute_);
        DARABONBA_PTR_TO_JSON(ExtendedCidrs, extendedCidrs_);
        DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_TO_JSON(SwitchId, switchId_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, UserVpc& obj) { 
        DARABONBA_PTR_FROM_JSON(DefaultRoute, defaultRoute_);
        DARABONBA_PTR_FROM_JSON(ExtendedCidrs, extendedCidrs_);
        DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_FROM_JSON(SwitchId, switchId_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      };
      UserVpc() = default ;
      UserVpc(const UserVpc &) = default ;
      UserVpc(UserVpc &&) = default ;
      UserVpc(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserVpc() = default ;
      UserVpc& operator=(const UserVpc &) = default ;
      UserVpc& operator=(UserVpc &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->defaultRoute_ == nullptr
        && this->extendedCidrs_ == nullptr && this->securityGroupId_ == nullptr && this->switchId_ == nullptr && this->vpcId_ == nullptr; };
      // defaultRoute Field Functions 
      bool hasDefaultRoute() const { return this->defaultRoute_ != nullptr;};
      void deleteDefaultRoute() { this->defaultRoute_ = nullptr;};
      inline string getDefaultRoute() const { DARABONBA_PTR_GET_DEFAULT(defaultRoute_, "") };
      inline UserVpc& setDefaultRoute(string defaultRoute) { DARABONBA_PTR_SET_VALUE(defaultRoute_, defaultRoute) };


      // extendedCidrs Field Functions 
      bool hasExtendedCidrs() const { return this->extendedCidrs_ != nullptr;};
      void deleteExtendedCidrs() { this->extendedCidrs_ = nullptr;};
      inline const vector<string> & getExtendedCidrs() const { DARABONBA_PTR_GET_CONST(extendedCidrs_, vector<string>) };
      inline vector<string> getExtendedCidrs() { DARABONBA_PTR_GET(extendedCidrs_, vector<string>) };
      inline UserVpc& setExtendedCidrs(const vector<string> & extendedCidrs) { DARABONBA_PTR_SET_VALUE(extendedCidrs_, extendedCidrs) };
      inline UserVpc& setExtendedCidrs(vector<string> && extendedCidrs) { DARABONBA_PTR_SET_RVALUE(extendedCidrs_, extendedCidrs) };


      // securityGroupId Field Functions 
      bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
      void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
      inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
      inline UserVpc& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


      // switchId Field Functions 
      bool hasSwitchId() const { return this->switchId_ != nullptr;};
      void deleteSwitchId() { this->switchId_ = nullptr;};
      inline string getSwitchId() const { DARABONBA_PTR_GET_DEFAULT(switchId_, "") };
      inline UserVpc& setSwitchId(string switchId) { DARABONBA_PTR_SET_VALUE(switchId_, switchId) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline UserVpc& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      // The default route. Default value: false. Valid values:
      // 
      // *   eth0: The default network interface is used to access the Internet through the public gateway.
      // *   eth1: The user\\"s Elastic Network Interface is used to access the Internet through the private gateway.
      shared_ptr<string> defaultRoute_ {};
      // The extended CIDR blocks that need to be connected.
      shared_ptr<vector<string>> extendedCidrs_ {};
      // The security group ID.
      shared_ptr<string> securityGroupId_ {};
      // The vSwitch ID.
      shared_ptr<string> switchId_ {};
      // VPC ID
      shared_ptr<string> vpcId_ {};
    };

    class DataSources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataSources& obj) { 
        DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
        DARABONBA_PTR_TO_JSON(MountPath, mountPath_);
      };
      friend void from_json(const Darabonba::Json& j, DataSources& obj) { 
        DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
        DARABONBA_PTR_FROM_JSON(MountPath, mountPath_);
      };
      DataSources() = default ;
      DataSources(const DataSources &) = default ;
      DataSources(DataSources &&) = default ;
      DataSources(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataSources() = default ;
      DataSources& operator=(const DataSources &) = default ;
      DataSources& operator=(DataSources &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dataSourceId_ == nullptr
        && this->mountPath_ == nullptr; };
      // dataSourceId Field Functions 
      bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
      void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
      inline string getDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, "") };
      inline DataSources& setDataSourceId(string dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


      // mountPath Field Functions 
      bool hasMountPath() const { return this->mountPath_ != nullptr;};
      void deleteMountPath() { this->mountPath_ = nullptr;};
      inline string getMountPath() const { DARABONBA_PTR_GET_DEFAULT(mountPath_, "") };
      inline DataSources& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


    protected:
      // The data source ID.
      shared_ptr<string> dataSourceId_ {};
      // The local mount path of the data source.
      shared_ptr<string> mountPath_ {};
    };

    class CodeSource : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CodeSource& obj) { 
        DARABONBA_PTR_TO_JSON(Branch, branch_);
        DARABONBA_PTR_TO_JSON(CodeSourceId, codeSourceId_);
        DARABONBA_PTR_TO_JSON(Commit, commit_);
        DARABONBA_PTR_TO_JSON(MountPath, mountPath_);
      };
      friend void from_json(const Darabonba::Json& j, CodeSource& obj) { 
        DARABONBA_PTR_FROM_JSON(Branch, branch_);
        DARABONBA_PTR_FROM_JSON(CodeSourceId, codeSourceId_);
        DARABONBA_PTR_FROM_JSON(Commit, commit_);
        DARABONBA_PTR_FROM_JSON(MountPath, mountPath_);
      };
      CodeSource() = default ;
      CodeSource(const CodeSource &) = default ;
      CodeSource(CodeSource &&) = default ;
      CodeSource(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CodeSource() = default ;
      CodeSource& operator=(const CodeSource &) = default ;
      CodeSource& operator=(CodeSource &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->branch_ == nullptr
        && this->codeSourceId_ == nullptr && this->commit_ == nullptr && this->mountPath_ == nullptr; };
      // branch Field Functions 
      bool hasBranch() const { return this->branch_ != nullptr;};
      void deleteBranch() { this->branch_ = nullptr;};
      inline string getBranch() const { DARABONBA_PTR_GET_DEFAULT(branch_, "") };
      inline CodeSource& setBranch(string branch) { DARABONBA_PTR_SET_VALUE(branch_, branch) };


      // codeSourceId Field Functions 
      bool hasCodeSourceId() const { return this->codeSourceId_ != nullptr;};
      void deleteCodeSourceId() { this->codeSourceId_ = nullptr;};
      inline string getCodeSourceId() const { DARABONBA_PTR_GET_DEFAULT(codeSourceId_, "") };
      inline CodeSource& setCodeSourceId(string codeSourceId) { DARABONBA_PTR_SET_VALUE(codeSourceId_, codeSourceId) };


      // commit Field Functions 
      bool hasCommit() const { return this->commit_ != nullptr;};
      void deleteCommit() { this->commit_ = nullptr;};
      inline string getCommit() const { DARABONBA_PTR_GET_DEFAULT(commit_, "") };
      inline CodeSource& setCommit(string commit) { DARABONBA_PTR_SET_VALUE(commit_, commit) };


      // mountPath Field Functions 
      bool hasMountPath() const { return this->mountPath_ != nullptr;};
      void deleteMountPath() { this->mountPath_ = nullptr;};
      inline string getMountPath() const { DARABONBA_PTR_GET_DEFAULT(mountPath_, "") };
      inline CodeSource& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


    protected:
      // The code repository branch.
      shared_ptr<string> branch_ {};
      // The code source ID.
      shared_ptr<string> codeSourceId_ {};
      // The CommitID of the code repository used by the job.
      shared_ptr<string> commit_ {};
      // The local mount path of the code.
      shared_ptr<string> mountPath_ {};
    };

    virtual bool empty() const override { return this->accessibility_ == nullptr
        && this->clusterId_ == nullptr && this->codeSource_ == nullptr && this->credentialConfig_ == nullptr && this->dataSources_ == nullptr && this->displayName_ == nullptr
        && this->duration_ == nullptr && this->elasticSpec_ == nullptr && this->enablePreemptibleJob_ == nullptr && this->enabledDebugger_ == nullptr && this->envs_ == nullptr
        && this->gmtCreateTime_ == nullptr && this->gmtFailedTime_ == nullptr && this->gmtFinishTime_ == nullptr && this->gmtModifiedTime_ == nullptr && this->gmtRunningTime_ == nullptr
        && this->gmtStoppedTime_ == nullptr && this->gmtSubmittedTime_ == nullptr && this->gmtSuccessedTime_ == nullptr && this->isDeleted_ == nullptr && this->jobId_ == nullptr
        && this->jobMaxRunningTimeMinutes_ == nullptr && this->jobReplicaStatuses_ == nullptr && this->jobSpecs_ == nullptr && this->jobType_ == nullptr && this->nodeCount_ == nullptr
        && this->nodeNames_ == nullptr && this->pods_ == nullptr && this->priority_ == nullptr && this->reasonCode_ == nullptr && this->reasonMessage_ == nullptr
        && this->requestCPU_ == nullptr && this->requestGPU_ == nullptr && this->requestMemory_ == nullptr && this->resourceId_ == nullptr && this->resourceLevel_ == nullptr
        && this->resourceName_ == nullptr && this->resourceQuotaName_ == nullptr && this->resourceType_ == nullptr && this->restartTimes_ == nullptr && this->settings_ == nullptr
        && this->status_ == nullptr && this->statusHistory_ == nullptr && this->subStatus_ == nullptr && this->systemEnvs_ == nullptr && this->tenantId_ == nullptr
        && this->thirdpartyLibDir_ == nullptr && this->thirdpartyLibs_ == nullptr && this->useOversoldResource_ == nullptr && this->userCommand_ == nullptr && this->userId_ == nullptr
        && this->userScript_ == nullptr && this->userVpc_ == nullptr && this->username_ == nullptr && this->workingDir_ == nullptr && this->workspaceId_ == nullptr
        && this->workspaceName_ == nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string getAccessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline JobItem& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline JobItem& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // codeSource Field Functions 
    bool hasCodeSource() const { return this->codeSource_ != nullptr;};
    void deleteCodeSource() { this->codeSource_ = nullptr;};
    inline const JobItem::CodeSource & getCodeSource() const { DARABONBA_PTR_GET_CONST(codeSource_, JobItem::CodeSource) };
    inline JobItem::CodeSource getCodeSource() { DARABONBA_PTR_GET(codeSource_, JobItem::CodeSource) };
    inline JobItem& setCodeSource(const JobItem::CodeSource & codeSource) { DARABONBA_PTR_SET_VALUE(codeSource_, codeSource) };
    inline JobItem& setCodeSource(JobItem::CodeSource && codeSource) { DARABONBA_PTR_SET_RVALUE(codeSource_, codeSource) };


    // credentialConfig Field Functions 
    bool hasCredentialConfig() const { return this->credentialConfig_ != nullptr;};
    void deleteCredentialConfig() { this->credentialConfig_ = nullptr;};
    inline const CredentialConfig & getCredentialConfig() const { DARABONBA_PTR_GET_CONST(credentialConfig_, CredentialConfig) };
    inline CredentialConfig getCredentialConfig() { DARABONBA_PTR_GET(credentialConfig_, CredentialConfig) };
    inline JobItem& setCredentialConfig(const CredentialConfig & credentialConfig) { DARABONBA_PTR_SET_VALUE(credentialConfig_, credentialConfig) };
    inline JobItem& setCredentialConfig(CredentialConfig && credentialConfig) { DARABONBA_PTR_SET_RVALUE(credentialConfig_, credentialConfig) };


    // dataSources Field Functions 
    bool hasDataSources() const { return this->dataSources_ != nullptr;};
    void deleteDataSources() { this->dataSources_ = nullptr;};
    inline const vector<JobItem::DataSources> & getDataSources() const { DARABONBA_PTR_GET_CONST(dataSources_, vector<JobItem::DataSources>) };
    inline vector<JobItem::DataSources> getDataSources() { DARABONBA_PTR_GET(dataSources_, vector<JobItem::DataSources>) };
    inline JobItem& setDataSources(const vector<JobItem::DataSources> & dataSources) { DARABONBA_PTR_SET_VALUE(dataSources_, dataSources) };
    inline JobItem& setDataSources(vector<JobItem::DataSources> && dataSources) { DARABONBA_PTR_SET_RVALUE(dataSources_, dataSources) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline JobItem& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline JobItem& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // elasticSpec Field Functions 
    bool hasElasticSpec() const { return this->elasticSpec_ != nullptr;};
    void deleteElasticSpec() { this->elasticSpec_ = nullptr;};
    inline const JobElasticSpec & getElasticSpec() const { DARABONBA_PTR_GET_CONST(elasticSpec_, JobElasticSpec) };
    inline JobElasticSpec getElasticSpec() { DARABONBA_PTR_GET(elasticSpec_, JobElasticSpec) };
    inline JobItem& setElasticSpec(const JobElasticSpec & elasticSpec) { DARABONBA_PTR_SET_VALUE(elasticSpec_, elasticSpec) };
    inline JobItem& setElasticSpec(JobElasticSpec && elasticSpec) { DARABONBA_PTR_SET_RVALUE(elasticSpec_, elasticSpec) };


    // enablePreemptibleJob Field Functions 
    bool hasEnablePreemptibleJob() const { return this->enablePreemptibleJob_ != nullptr;};
    void deleteEnablePreemptibleJob() { this->enablePreemptibleJob_ = nullptr;};
    inline bool getEnablePreemptibleJob() const { DARABONBA_PTR_GET_DEFAULT(enablePreemptibleJob_, false) };
    inline JobItem& setEnablePreemptibleJob(bool enablePreemptibleJob) { DARABONBA_PTR_SET_VALUE(enablePreemptibleJob_, enablePreemptibleJob) };


    // enabledDebugger Field Functions 
    bool hasEnabledDebugger() const { return this->enabledDebugger_ != nullptr;};
    void deleteEnabledDebugger() { this->enabledDebugger_ = nullptr;};
    inline bool getEnabledDebugger() const { DARABONBA_PTR_GET_DEFAULT(enabledDebugger_, false) };
    inline JobItem& setEnabledDebugger(bool enabledDebugger) { DARABONBA_PTR_SET_VALUE(enabledDebugger_, enabledDebugger) };


    // envs Field Functions 
    bool hasEnvs() const { return this->envs_ != nullptr;};
    void deleteEnvs() { this->envs_ = nullptr;};
    inline const map<string, string> & getEnvs() const { DARABONBA_PTR_GET_CONST(envs_, map<string, string>) };
    inline map<string, string> getEnvs() { DARABONBA_PTR_GET(envs_, map<string, string>) };
    inline JobItem& setEnvs(const map<string, string> & envs) { DARABONBA_PTR_SET_VALUE(envs_, envs) };
    inline JobItem& setEnvs(map<string, string> && envs) { DARABONBA_PTR_SET_RVALUE(envs_, envs) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline JobItem& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtFailedTime Field Functions 
    bool hasGmtFailedTime() const { return this->gmtFailedTime_ != nullptr;};
    void deleteGmtFailedTime() { this->gmtFailedTime_ = nullptr;};
    inline string getGmtFailedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtFailedTime_, "") };
    inline JobItem& setGmtFailedTime(string gmtFailedTime) { DARABONBA_PTR_SET_VALUE(gmtFailedTime_, gmtFailedTime) };


    // gmtFinishTime Field Functions 
    bool hasGmtFinishTime() const { return this->gmtFinishTime_ != nullptr;};
    void deleteGmtFinishTime() { this->gmtFinishTime_ = nullptr;};
    inline string getGmtFinishTime() const { DARABONBA_PTR_GET_DEFAULT(gmtFinishTime_, "") };
    inline JobItem& setGmtFinishTime(string gmtFinishTime) { DARABONBA_PTR_SET_VALUE(gmtFinishTime_, gmtFinishTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string getGmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline JobItem& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // gmtRunningTime Field Functions 
    bool hasGmtRunningTime() const { return this->gmtRunningTime_ != nullptr;};
    void deleteGmtRunningTime() { this->gmtRunningTime_ = nullptr;};
    inline string getGmtRunningTime() const { DARABONBA_PTR_GET_DEFAULT(gmtRunningTime_, "") };
    inline JobItem& setGmtRunningTime(string gmtRunningTime) { DARABONBA_PTR_SET_VALUE(gmtRunningTime_, gmtRunningTime) };


    // gmtStoppedTime Field Functions 
    bool hasGmtStoppedTime() const { return this->gmtStoppedTime_ != nullptr;};
    void deleteGmtStoppedTime() { this->gmtStoppedTime_ = nullptr;};
    inline string getGmtStoppedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtStoppedTime_, "") };
    inline JobItem& setGmtStoppedTime(string gmtStoppedTime) { DARABONBA_PTR_SET_VALUE(gmtStoppedTime_, gmtStoppedTime) };


    // gmtSubmittedTime Field Functions 
    bool hasGmtSubmittedTime() const { return this->gmtSubmittedTime_ != nullptr;};
    void deleteGmtSubmittedTime() { this->gmtSubmittedTime_ = nullptr;};
    inline string getGmtSubmittedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtSubmittedTime_, "") };
    inline JobItem& setGmtSubmittedTime(string gmtSubmittedTime) { DARABONBA_PTR_SET_VALUE(gmtSubmittedTime_, gmtSubmittedTime) };


    // gmtSuccessedTime Field Functions 
    bool hasGmtSuccessedTime() const { return this->gmtSuccessedTime_ != nullptr;};
    void deleteGmtSuccessedTime() { this->gmtSuccessedTime_ = nullptr;};
    inline string getGmtSuccessedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtSuccessedTime_, "") };
    inline JobItem& setGmtSuccessedTime(string gmtSuccessedTime) { DARABONBA_PTR_SET_VALUE(gmtSuccessedTime_, gmtSuccessedTime) };


    // isDeleted Field Functions 
    bool hasIsDeleted() const { return this->isDeleted_ != nullptr;};
    void deleteIsDeleted() { this->isDeleted_ = nullptr;};
    inline bool getIsDeleted() const { DARABONBA_PTR_GET_DEFAULT(isDeleted_, false) };
    inline JobItem& setIsDeleted(bool isDeleted) { DARABONBA_PTR_SET_VALUE(isDeleted_, isDeleted) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline JobItem& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // jobMaxRunningTimeMinutes Field Functions 
    bool hasJobMaxRunningTimeMinutes() const { return this->jobMaxRunningTimeMinutes_ != nullptr;};
    void deleteJobMaxRunningTimeMinutes() { this->jobMaxRunningTimeMinutes_ = nullptr;};
    inline int64_t getJobMaxRunningTimeMinutes() const { DARABONBA_PTR_GET_DEFAULT(jobMaxRunningTimeMinutes_, 0L) };
    inline JobItem& setJobMaxRunningTimeMinutes(int64_t jobMaxRunningTimeMinutes) { DARABONBA_PTR_SET_VALUE(jobMaxRunningTimeMinutes_, jobMaxRunningTimeMinutes) };


    // jobReplicaStatuses Field Functions 
    bool hasJobReplicaStatuses() const { return this->jobReplicaStatuses_ != nullptr;};
    void deleteJobReplicaStatuses() { this->jobReplicaStatuses_ = nullptr;};
    inline const vector<JobReplicaStatus> & getJobReplicaStatuses() const { DARABONBA_PTR_GET_CONST(jobReplicaStatuses_, vector<JobReplicaStatus>) };
    inline vector<JobReplicaStatus> getJobReplicaStatuses() { DARABONBA_PTR_GET(jobReplicaStatuses_, vector<JobReplicaStatus>) };
    inline JobItem& setJobReplicaStatuses(const vector<JobReplicaStatus> & jobReplicaStatuses) { DARABONBA_PTR_SET_VALUE(jobReplicaStatuses_, jobReplicaStatuses) };
    inline JobItem& setJobReplicaStatuses(vector<JobReplicaStatus> && jobReplicaStatuses) { DARABONBA_PTR_SET_RVALUE(jobReplicaStatuses_, jobReplicaStatuses) };


    // jobSpecs Field Functions 
    bool hasJobSpecs() const { return this->jobSpecs_ != nullptr;};
    void deleteJobSpecs() { this->jobSpecs_ = nullptr;};
    inline const vector<JobSpec> & getJobSpecs() const { DARABONBA_PTR_GET_CONST(jobSpecs_, vector<JobSpec>) };
    inline vector<JobSpec> getJobSpecs() { DARABONBA_PTR_GET(jobSpecs_, vector<JobSpec>) };
    inline JobItem& setJobSpecs(const vector<JobSpec> & jobSpecs) { DARABONBA_PTR_SET_VALUE(jobSpecs_, jobSpecs) };
    inline JobItem& setJobSpecs(vector<JobSpec> && jobSpecs) { DARABONBA_PTR_SET_RVALUE(jobSpecs_, jobSpecs) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string getJobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline JobItem& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // nodeCount Field Functions 
    bool hasNodeCount() const { return this->nodeCount_ != nullptr;};
    void deleteNodeCount() { this->nodeCount_ = nullptr;};
    inline string getNodeCount() const { DARABONBA_PTR_GET_DEFAULT(nodeCount_, "") };
    inline JobItem& setNodeCount(string nodeCount) { DARABONBA_PTR_SET_VALUE(nodeCount_, nodeCount) };


    // nodeNames Field Functions 
    bool hasNodeNames() const { return this->nodeNames_ != nullptr;};
    void deleteNodeNames() { this->nodeNames_ = nullptr;};
    inline const vector<string> & getNodeNames() const { DARABONBA_PTR_GET_CONST(nodeNames_, vector<string>) };
    inline vector<string> getNodeNames() { DARABONBA_PTR_GET(nodeNames_, vector<string>) };
    inline JobItem& setNodeNames(const vector<string> & nodeNames) { DARABONBA_PTR_SET_VALUE(nodeNames_, nodeNames) };
    inline JobItem& setNodeNames(vector<string> && nodeNames) { DARABONBA_PTR_SET_RVALUE(nodeNames_, nodeNames) };


    // pods Field Functions 
    bool hasPods() const { return this->pods_ != nullptr;};
    void deletePods() { this->pods_ = nullptr;};
    inline const vector<PodItem> & getPods() const { DARABONBA_PTR_GET_CONST(pods_, vector<PodItem>) };
    inline vector<PodItem> getPods() { DARABONBA_PTR_GET(pods_, vector<PodItem>) };
    inline JobItem& setPods(const vector<PodItem> & pods) { DARABONBA_PTR_SET_VALUE(pods_, pods) };
    inline JobItem& setPods(vector<PodItem> && pods) { DARABONBA_PTR_SET_RVALUE(pods_, pods) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline JobItem& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // reasonCode Field Functions 
    bool hasReasonCode() const { return this->reasonCode_ != nullptr;};
    void deleteReasonCode() { this->reasonCode_ = nullptr;};
    inline string getReasonCode() const { DARABONBA_PTR_GET_DEFAULT(reasonCode_, "") };
    inline JobItem& setReasonCode(string reasonCode) { DARABONBA_PTR_SET_VALUE(reasonCode_, reasonCode) };


    // reasonMessage Field Functions 
    bool hasReasonMessage() const { return this->reasonMessage_ != nullptr;};
    void deleteReasonMessage() { this->reasonMessage_ = nullptr;};
    inline string getReasonMessage() const { DARABONBA_PTR_GET_DEFAULT(reasonMessage_, "") };
    inline JobItem& setReasonMessage(string reasonMessage) { DARABONBA_PTR_SET_VALUE(reasonMessage_, reasonMessage) };


    // requestCPU Field Functions 
    bool hasRequestCPU() const { return this->requestCPU_ != nullptr;};
    void deleteRequestCPU() { this->requestCPU_ = nullptr;};
    inline int64_t getRequestCPU() const { DARABONBA_PTR_GET_DEFAULT(requestCPU_, 0L) };
    inline JobItem& setRequestCPU(int64_t requestCPU) { DARABONBA_PTR_SET_VALUE(requestCPU_, requestCPU) };


    // requestGPU Field Functions 
    bool hasRequestGPU() const { return this->requestGPU_ != nullptr;};
    void deleteRequestGPU() { this->requestGPU_ = nullptr;};
    inline string getRequestGPU() const { DARABONBA_PTR_GET_DEFAULT(requestGPU_, "") };
    inline JobItem& setRequestGPU(string requestGPU) { DARABONBA_PTR_SET_VALUE(requestGPU_, requestGPU) };


    // requestMemory Field Functions 
    bool hasRequestMemory() const { return this->requestMemory_ != nullptr;};
    void deleteRequestMemory() { this->requestMemory_ = nullptr;};
    inline string getRequestMemory() const { DARABONBA_PTR_GET_DEFAULT(requestMemory_, "") };
    inline JobItem& setRequestMemory(string requestMemory) { DARABONBA_PTR_SET_VALUE(requestMemory_, requestMemory) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline JobItem& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceLevel Field Functions 
    bool hasResourceLevel() const { return this->resourceLevel_ != nullptr;};
    void deleteResourceLevel() { this->resourceLevel_ = nullptr;};
    inline string getResourceLevel() const { DARABONBA_PTR_GET_DEFAULT(resourceLevel_, "") };
    inline JobItem& setResourceLevel(string resourceLevel) { DARABONBA_PTR_SET_VALUE(resourceLevel_, resourceLevel) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string getResourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline JobItem& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // resourceQuotaName Field Functions 
    bool hasResourceQuotaName() const { return this->resourceQuotaName_ != nullptr;};
    void deleteResourceQuotaName() { this->resourceQuotaName_ = nullptr;};
    inline string getResourceQuotaName() const { DARABONBA_PTR_GET_DEFAULT(resourceQuotaName_, "") };
    inline JobItem& setResourceQuotaName(string resourceQuotaName) { DARABONBA_PTR_SET_VALUE(resourceQuotaName_, resourceQuotaName) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline JobItem& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // restartTimes Field Functions 
    bool hasRestartTimes() const { return this->restartTimes_ != nullptr;};
    void deleteRestartTimes() { this->restartTimes_ = nullptr;};
    inline string getRestartTimes() const { DARABONBA_PTR_GET_DEFAULT(restartTimes_, "") };
    inline JobItem& setRestartTimes(string restartTimes) { DARABONBA_PTR_SET_VALUE(restartTimes_, restartTimes) };


    // settings Field Functions 
    bool hasSettings() const { return this->settings_ != nullptr;};
    void deleteSettings() { this->settings_ = nullptr;};
    inline const JobSettings & getSettings() const { DARABONBA_PTR_GET_CONST(settings_, JobSettings) };
    inline JobSettings getSettings() { DARABONBA_PTR_GET(settings_, JobSettings) };
    inline JobItem& setSettings(const JobSettings & settings) { DARABONBA_PTR_SET_VALUE(settings_, settings) };
    inline JobItem& setSettings(JobSettings && settings) { DARABONBA_PTR_SET_RVALUE(settings_, settings) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline JobItem& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusHistory Field Functions 
    bool hasStatusHistory() const { return this->statusHistory_ != nullptr;};
    void deleteStatusHistory() { this->statusHistory_ = nullptr;};
    inline const vector<StatusTransitionItem> & getStatusHistory() const { DARABONBA_PTR_GET_CONST(statusHistory_, vector<StatusTransitionItem>) };
    inline vector<StatusTransitionItem> getStatusHistory() { DARABONBA_PTR_GET(statusHistory_, vector<StatusTransitionItem>) };
    inline JobItem& setStatusHistory(const vector<StatusTransitionItem> & statusHistory) { DARABONBA_PTR_SET_VALUE(statusHistory_, statusHistory) };
    inline JobItem& setStatusHistory(vector<StatusTransitionItem> && statusHistory) { DARABONBA_PTR_SET_RVALUE(statusHistory_, statusHistory) };


    // subStatus Field Functions 
    bool hasSubStatus() const { return this->subStatus_ != nullptr;};
    void deleteSubStatus() { this->subStatus_ = nullptr;};
    inline string getSubStatus() const { DARABONBA_PTR_GET_DEFAULT(subStatus_, "") };
    inline JobItem& setSubStatus(string subStatus) { DARABONBA_PTR_SET_VALUE(subStatus_, subStatus) };


    // systemEnvs Field Functions 
    bool hasSystemEnvs() const { return this->systemEnvs_ != nullptr;};
    void deleteSystemEnvs() { this->systemEnvs_ = nullptr;};
    inline const map<string, string> & getSystemEnvs() const { DARABONBA_PTR_GET_CONST(systemEnvs_, map<string, string>) };
    inline map<string, string> getSystemEnvs() { DARABONBA_PTR_GET(systemEnvs_, map<string, string>) };
    inline JobItem& setSystemEnvs(const map<string, string> & systemEnvs) { DARABONBA_PTR_SET_VALUE(systemEnvs_, systemEnvs) };
    inline JobItem& setSystemEnvs(map<string, string> && systemEnvs) { DARABONBA_PTR_SET_RVALUE(systemEnvs_, systemEnvs) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline JobItem& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // thirdpartyLibDir Field Functions 
    bool hasThirdpartyLibDir() const { return this->thirdpartyLibDir_ != nullptr;};
    void deleteThirdpartyLibDir() { this->thirdpartyLibDir_ = nullptr;};
    inline string getThirdpartyLibDir() const { DARABONBA_PTR_GET_DEFAULT(thirdpartyLibDir_, "") };
    inline JobItem& setThirdpartyLibDir(string thirdpartyLibDir) { DARABONBA_PTR_SET_VALUE(thirdpartyLibDir_, thirdpartyLibDir) };


    // thirdpartyLibs Field Functions 
    bool hasThirdpartyLibs() const { return this->thirdpartyLibs_ != nullptr;};
    void deleteThirdpartyLibs() { this->thirdpartyLibs_ = nullptr;};
    inline const vector<string> & getThirdpartyLibs() const { DARABONBA_PTR_GET_CONST(thirdpartyLibs_, vector<string>) };
    inline vector<string> getThirdpartyLibs() { DARABONBA_PTR_GET(thirdpartyLibs_, vector<string>) };
    inline JobItem& setThirdpartyLibs(const vector<string> & thirdpartyLibs) { DARABONBA_PTR_SET_VALUE(thirdpartyLibs_, thirdpartyLibs) };
    inline JobItem& setThirdpartyLibs(vector<string> && thirdpartyLibs) { DARABONBA_PTR_SET_RVALUE(thirdpartyLibs_, thirdpartyLibs) };


    // useOversoldResource Field Functions 
    bool hasUseOversoldResource() const { return this->useOversoldResource_ != nullptr;};
    void deleteUseOversoldResource() { this->useOversoldResource_ = nullptr;};
    inline bool getUseOversoldResource() const { DARABONBA_PTR_GET_DEFAULT(useOversoldResource_, false) };
    inline JobItem& setUseOversoldResource(bool useOversoldResource) { DARABONBA_PTR_SET_VALUE(useOversoldResource_, useOversoldResource) };


    // userCommand Field Functions 
    bool hasUserCommand() const { return this->userCommand_ != nullptr;};
    void deleteUserCommand() { this->userCommand_ = nullptr;};
    inline string getUserCommand() const { DARABONBA_PTR_GET_DEFAULT(userCommand_, "") };
    inline JobItem& setUserCommand(string userCommand) { DARABONBA_PTR_SET_VALUE(userCommand_, userCommand) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline JobItem& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userScript Field Functions 
    bool hasUserScript() const { return this->userScript_ != nullptr;};
    void deleteUserScript() { this->userScript_ = nullptr;};
    inline string getUserScript() const { DARABONBA_PTR_GET_DEFAULT(userScript_, "") };
    inline JobItem& setUserScript(string userScript) { DARABONBA_PTR_SET_VALUE(userScript_, userScript) };


    // userVpc Field Functions 
    bool hasUserVpc() const { return this->userVpc_ != nullptr;};
    void deleteUserVpc() { this->userVpc_ = nullptr;};
    inline const JobItem::UserVpc & getUserVpc() const { DARABONBA_PTR_GET_CONST(userVpc_, JobItem::UserVpc) };
    inline JobItem::UserVpc getUserVpc() { DARABONBA_PTR_GET(userVpc_, JobItem::UserVpc) };
    inline JobItem& setUserVpc(const JobItem::UserVpc & userVpc) { DARABONBA_PTR_SET_VALUE(userVpc_, userVpc) };
    inline JobItem& setUserVpc(JobItem::UserVpc && userVpc) { DARABONBA_PTR_SET_RVALUE(userVpc_, userVpc) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline JobItem& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


    // workingDir Field Functions 
    bool hasWorkingDir() const { return this->workingDir_ != nullptr;};
    void deleteWorkingDir() { this->workingDir_ = nullptr;};
    inline string getWorkingDir() const { DARABONBA_PTR_GET_DEFAULT(workingDir_, "") };
    inline JobItem& setWorkingDir(string workingDir) { DARABONBA_PTR_SET_VALUE(workingDir_, workingDir) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline JobItem& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // workspaceName Field Functions 
    bool hasWorkspaceName() const { return this->workspaceName_ != nullptr;};
    void deleteWorkspaceName() { this->workspaceName_ = nullptr;};
    inline string getWorkspaceName() const { DARABONBA_PTR_GET_DEFAULT(workspaceName_, "") };
    inline JobItem& setWorkspaceName(string workspaceName) { DARABONBA_PTR_SET_VALUE(workspaceName_, workspaceName) };


  protected:
    // The visibility of the job.
    shared_ptr<string> accessibility_ {};
    // The cluster ID.
    shared_ptr<string> clusterId_ {};
    // The code source used by the job.
    shared_ptr<JobItem::CodeSource> codeSource_ {};
    // The credential configurations associated with the job.
    shared_ptr<CredentialConfig> credentialConfig_ {};
    // A list of all data sources used by the job.
    shared_ptr<vector<JobItem::DataSources>> dataSources_ {};
    // The job name.
    shared_ptr<string> displayName_ {};
    // The duration of the job. Unit: seconds.
    shared_ptr<int64_t> duration_ {};
    // The elastic parameters of the job.
    shared_ptr<JobElasticSpec> elasticSpec_ {};
    // Indicates whether PreemptibleJob is enabled.
    shared_ptr<bool> enablePreemptibleJob_ {};
    // Indicates whether DeBugger is enabled.
    shared_ptr<bool> enabledDebugger_ {};
    // The environment variables that are injected into the job run time.
    shared_ptr<map<string, string>> envs_ {};
    // The time when the job was created (UTC).
    shared_ptr<string> gmtCreateTime_ {};
    // The time when the job failed (UTC).
    shared_ptr<string> gmtFailedTime_ {};
    // The time when the job ended (UTC).
    shared_ptr<string> gmtFinishTime_ {};
    // The time when the job was modified (UTC).
    shared_ptr<string> gmtModifiedTime_ {};
    // The time when the job started (UTC).
    shared_ptr<string> gmtRunningTime_ {};
    // The time when the job stopped (UTC).
    shared_ptr<string> gmtStoppedTime_ {};
    // The time when the job was submitted (UTC).
    shared_ptr<string> gmtSubmittedTime_ {};
    // The time when the job succeeded (UTC).
    shared_ptr<string> gmtSuccessedTime_ {};
    // Indicates whether the job is deleted.
    shared_ptr<bool> isDeleted_ {};
    // The ID of the job.
    shared_ptr<string> jobId_ {};
    // The maximum running duration of the job.
    shared_ptr<int64_t> jobMaxRunningTimeMinutes_ {};
    shared_ptr<vector<JobReplicaStatus>> jobReplicaStatuses_ {};
    // The node configurations of the job run time.
    shared_ptr<vector<JobSpec>> jobSpecs_ {};
    // The job type. Valid values:
    // 
    // *   TFJob
    // *   PyTorchJob
    // *   MPIJob
    // *   XGBoostJob
    // *   OneFlowJob
    // *   ElasticBatchJob
    // *   RayJob
    // *   SlurmJob
    shared_ptr<string> jobType_ {};
    // The number of nodes.
    shared_ptr<string> nodeCount_ {};
    // The node names.
    shared_ptr<vector<string>> nodeNames_ {};
    // The pods.
    shared_ptr<vector<PodItem>> pods_ {};
    // The priority of the job.
    shared_ptr<int32_t> priority_ {};
    // The reason code for the job to enter the current status. Valid values:
    // 
    // *   InvalidParameter
    // *   JobSucceeded
    // *   JobStoppedByUser
    shared_ptr<string> reasonCode_ {};
    // The detailed reason for the job to enter the current status.
    shared_ptr<string> reasonMessage_ {};
    // The requested CPU cores.
    shared_ptr<int64_t> requestCPU_ {};
    // The requested GPU cores.
    shared_ptr<string> requestGPU_ {};
    // The requested memory.
    shared_ptr<string> requestMemory_ {};
    // The ID of the resource group to which the resource belongs.
    shared_ptr<string> resourceId_ {};
    // The resource level of the job run time.
    shared_ptr<string> resourceLevel_ {};
    // The name of the resource on which the job runs.
    shared_ptr<string> resourceName_ {};
    // The name of the resource quota.
    shared_ptr<string> resourceQuotaName_ {};
    // The resource type. Valid values: ECS, Lingjun, and ACS.
    shared_ptr<string> resourceType_ {};
    // The number of job restarts.
    shared_ptr<string> restartTimes_ {};
    // The extra parameters of the job.
    shared_ptr<JobSettings> settings_ {};
    // The job status. Valid values:
    // 
    // *   Succeeded
    // *   Failed
    shared_ptr<string> status_ {};
    // The status history of the job.
    shared_ptr<vector<StatusTransitionItem>> statusHistory_ {};
    // The sub-status of the job, such as the preemption and retry status.
    shared_ptr<string> subStatus_ {};
    // The system environment variables configured.
    shared_ptr<map<string, string>> systemEnvs_ {};
    // The tenant ID.
    shared_ptr<string> tenantId_ {};
    // The name of the folder in which the requirements.txt file resides.
    shared_ptr<string> thirdpartyLibDir_ {};
    // The third-party Python libraries required for the job.
    shared_ptr<vector<string>> thirdpartyLibs_ {};
    // Indicates whether the job uses idle resources.
    shared_ptr<bool> useOversoldResource_ {};
    // The start command for each node of the job.
    shared_ptr<string> userCommand_ {};
    // The UID of the user to which the job belongs.
    shared_ptr<string> userId_ {};
    // The user script.
    shared_ptr<string> userScript_ {};
    // The user VPC.
    shared_ptr<JobItem::UserVpc> userVpc_ {};
    // The username that is used to submit the job.
    shared_ptr<string> username_ {};
    // The working path.
    shared_ptr<string> workingDir_ {};
    // The ID of the workspace to which the job belongs.
    shared_ptr<string> workspaceId_ {};
    // The name of the workspace to which the job belongs.
    shared_ptr<string> workspaceName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
