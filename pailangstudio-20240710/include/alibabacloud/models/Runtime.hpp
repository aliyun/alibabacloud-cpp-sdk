// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNTIME_HPP_
#define ALIBABACLOUD_MODELS_RUNTIME_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RuntimeCredentialConfig.hpp>
#include <vector>
#include <alibabacloud/models/RuntimeDataSources.hpp>
#include <alibabacloud/models/RuntimeEcsSpec.hpp>
#include <alibabacloud/models/RuntimeEnvs.hpp>
#include <alibabacloud/models/RuntimeFlows.hpp>
#include <alibabacloud/models/RuntimeLabels.hpp>
#include <alibabacloud/models/RuntimeUserVpc.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class Runtime : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Runtime& obj) { 
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(CredentialConfig, credentialConfig_);
      DARABONBA_PTR_TO_JSON(DataSources, dataSources_);
      DARABONBA_PTR_TO_JSON(EcsSpec, ecsSpec_);
      DARABONBA_PTR_TO_JSON(Envs, envs_);
      DARABONBA_PTR_TO_JSON(FlowId, flowId_);
      DARABONBA_PTR_TO_JSON(Flows, flows_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_TO_JSON(IdleTimeout, idleTimeout_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(LatestVersion, latestVersion_);
      DARABONBA_PTR_TO_JSON(MCPConfig, MCPConfig_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(RunTimeout, runTimeout_);
      DARABONBA_PTR_TO_JSON(RuntimeId, runtimeId_);
      DARABONBA_PTR_TO_JSON(RuntimeLog, runtimeLog_);
      DARABONBA_PTR_TO_JSON(RuntimeName, runtimeName_);
      DARABONBA_PTR_TO_JSON(RuntimeStatus, runtimeStatus_);
      DARABONBA_PTR_TO_JSON(RuntimeType, runtimeType_);
      DARABONBA_PTR_TO_JSON(SupportSSEStream, supportSSEStream_);
      DARABONBA_PTR_TO_JSON(UserVpc, userVpc_);
      DARABONBA_PTR_TO_JSON(Version, version_);
      DARABONBA_PTR_TO_JSON(WorkDir, workDir_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, Runtime& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(CredentialConfig, credentialConfig_);
      DARABONBA_PTR_FROM_JSON(DataSources, dataSources_);
      DARABONBA_PTR_FROM_JSON(EcsSpec, ecsSpec_);
      DARABONBA_PTR_FROM_JSON(Envs, envs_);
      DARABONBA_PTR_FROM_JSON(FlowId, flowId_);
      DARABONBA_PTR_FROM_JSON(Flows, flows_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_FROM_JSON(IdleTimeout, idleTimeout_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(LatestVersion, latestVersion_);
      DARABONBA_PTR_FROM_JSON(MCPConfig, MCPConfig_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(RunTimeout, runTimeout_);
      DARABONBA_PTR_FROM_JSON(RuntimeId, runtimeId_);
      DARABONBA_PTR_FROM_JSON(RuntimeLog, runtimeLog_);
      DARABONBA_PTR_FROM_JSON(RuntimeName, runtimeName_);
      DARABONBA_PTR_FROM_JSON(RuntimeStatus, runtimeStatus_);
      DARABONBA_PTR_FROM_JSON(RuntimeType, runtimeType_);
      DARABONBA_PTR_FROM_JSON(SupportSSEStream, supportSSEStream_);
      DARABONBA_PTR_FROM_JSON(UserVpc, userVpc_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
      DARABONBA_PTR_FROM_JSON(WorkDir, workDir_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    Runtime() = default ;
    Runtime(const Runtime &) = default ;
    Runtime(Runtime &&) = default ;
    Runtime(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Runtime() = default ;
    Runtime& operator=(const Runtime &) = default ;
    Runtime& operator=(Runtime &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessibility_ == nullptr
        && return this->creator_ == nullptr && return this->credentialConfig_ == nullptr && return this->dataSources_ == nullptr && return this->ecsSpec_ == nullptr && return this->envs_ == nullptr
        && return this->flowId_ == nullptr && return this->flows_ == nullptr && return this->gmtCreateTime_ == nullptr && return this->gmtModifiedTime_ == nullptr && return this->idleTimeout_ == nullptr
        && return this->labels_ == nullptr && return this->latestVersion_ == nullptr && return this->MCPConfig_ == nullptr && return this->resourceId_ == nullptr && return this->runTimeout_ == nullptr
        && return this->runtimeId_ == nullptr && return this->runtimeLog_ == nullptr && return this->runtimeName_ == nullptr && return this->runtimeStatus_ == nullptr && return this->runtimeType_ == nullptr
        && return this->supportSSEStream_ == nullptr && return this->userVpc_ == nullptr && return this->version_ == nullptr && return this->workDir_ == nullptr && return this->workspaceId_ == nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string accessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline Runtime& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline Runtime& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // credentialConfig Field Functions 
    bool hasCredentialConfig() const { return this->credentialConfig_ != nullptr;};
    void deleteCredentialConfig() { this->credentialConfig_ = nullptr;};
    inline const RuntimeCredentialConfig & credentialConfig() const { DARABONBA_PTR_GET_CONST(credentialConfig_, RuntimeCredentialConfig) };
    inline RuntimeCredentialConfig credentialConfig() { DARABONBA_PTR_GET(credentialConfig_, RuntimeCredentialConfig) };
    inline Runtime& setCredentialConfig(const RuntimeCredentialConfig & credentialConfig) { DARABONBA_PTR_SET_VALUE(credentialConfig_, credentialConfig) };
    inline Runtime& setCredentialConfig(RuntimeCredentialConfig && credentialConfig) { DARABONBA_PTR_SET_RVALUE(credentialConfig_, credentialConfig) };


    // dataSources Field Functions 
    bool hasDataSources() const { return this->dataSources_ != nullptr;};
    void deleteDataSources() { this->dataSources_ = nullptr;};
    inline const vector<RuntimeDataSources> & dataSources() const { DARABONBA_PTR_GET_CONST(dataSources_, vector<RuntimeDataSources>) };
    inline vector<RuntimeDataSources> dataSources() { DARABONBA_PTR_GET(dataSources_, vector<RuntimeDataSources>) };
    inline Runtime& setDataSources(const vector<RuntimeDataSources> & dataSources) { DARABONBA_PTR_SET_VALUE(dataSources_, dataSources) };
    inline Runtime& setDataSources(vector<RuntimeDataSources> && dataSources) { DARABONBA_PTR_SET_RVALUE(dataSources_, dataSources) };


    // ecsSpec Field Functions 
    bool hasEcsSpec() const { return this->ecsSpec_ != nullptr;};
    void deleteEcsSpec() { this->ecsSpec_ = nullptr;};
    inline const RuntimeEcsSpec & ecsSpec() const { DARABONBA_PTR_GET_CONST(ecsSpec_, RuntimeEcsSpec) };
    inline RuntimeEcsSpec ecsSpec() { DARABONBA_PTR_GET(ecsSpec_, RuntimeEcsSpec) };
    inline Runtime& setEcsSpec(const RuntimeEcsSpec & ecsSpec) { DARABONBA_PTR_SET_VALUE(ecsSpec_, ecsSpec) };
    inline Runtime& setEcsSpec(RuntimeEcsSpec && ecsSpec) { DARABONBA_PTR_SET_RVALUE(ecsSpec_, ecsSpec) };


    // envs Field Functions 
    bool hasEnvs() const { return this->envs_ != nullptr;};
    void deleteEnvs() { this->envs_ = nullptr;};
    inline const vector<RuntimeEnvs> & envs() const { DARABONBA_PTR_GET_CONST(envs_, vector<RuntimeEnvs>) };
    inline vector<RuntimeEnvs> envs() { DARABONBA_PTR_GET(envs_, vector<RuntimeEnvs>) };
    inline Runtime& setEnvs(const vector<RuntimeEnvs> & envs) { DARABONBA_PTR_SET_VALUE(envs_, envs) };
    inline Runtime& setEnvs(vector<RuntimeEnvs> && envs) { DARABONBA_PTR_SET_RVALUE(envs_, envs) };


    // flowId Field Functions 
    bool hasFlowId() const { return this->flowId_ != nullptr;};
    void deleteFlowId() { this->flowId_ = nullptr;};
    inline string flowId() const { DARABONBA_PTR_GET_DEFAULT(flowId_, "") };
    inline Runtime& setFlowId(string flowId) { DARABONBA_PTR_SET_VALUE(flowId_, flowId) };


    // flows Field Functions 
    bool hasFlows() const { return this->flows_ != nullptr;};
    void deleteFlows() { this->flows_ = nullptr;};
    inline const vector<RuntimeFlows> & flows() const { DARABONBA_PTR_GET_CONST(flows_, vector<RuntimeFlows>) };
    inline vector<RuntimeFlows> flows() { DARABONBA_PTR_GET(flows_, vector<RuntimeFlows>) };
    inline Runtime& setFlows(const vector<RuntimeFlows> & flows) { DARABONBA_PTR_SET_VALUE(flows_, flows) };
    inline Runtime& setFlows(vector<RuntimeFlows> && flows) { DARABONBA_PTR_SET_RVALUE(flows_, flows) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string gmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline Runtime& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string gmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline Runtime& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // idleTimeout Field Functions 
    bool hasIdleTimeout() const { return this->idleTimeout_ != nullptr;};
    void deleteIdleTimeout() { this->idleTimeout_ = nullptr;};
    inline int32_t idleTimeout() const { DARABONBA_PTR_GET_DEFAULT(idleTimeout_, 0) };
    inline Runtime& setIdleTimeout(int32_t idleTimeout) { DARABONBA_PTR_SET_VALUE(idleTimeout_, idleTimeout) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<RuntimeLabels> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<RuntimeLabels>) };
    inline vector<RuntimeLabels> labels() { DARABONBA_PTR_GET(labels_, vector<RuntimeLabels>) };
    inline Runtime& setLabels(const vector<RuntimeLabels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline Runtime& setLabels(vector<RuntimeLabels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // latestVersion Field Functions 
    bool hasLatestVersion() const { return this->latestVersion_ != nullptr;};
    void deleteLatestVersion() { this->latestVersion_ = nullptr;};
    inline string latestVersion() const { DARABONBA_PTR_GET_DEFAULT(latestVersion_, "") };
    inline Runtime& setLatestVersion(string latestVersion) { DARABONBA_PTR_SET_VALUE(latestVersion_, latestVersion) };


    // MCPConfig Field Functions 
    bool hasMCPConfig() const { return this->MCPConfig_ != nullptr;};
    void deleteMCPConfig() { this->MCPConfig_ = nullptr;};
    inline string MCPConfig() const { DARABONBA_PTR_GET_DEFAULT(MCPConfig_, "") };
    inline Runtime& setMCPConfig(string MCPConfig) { DARABONBA_PTR_SET_VALUE(MCPConfig_, MCPConfig) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline Runtime& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // runTimeout Field Functions 
    bool hasRunTimeout() const { return this->runTimeout_ != nullptr;};
    void deleteRunTimeout() { this->runTimeout_ = nullptr;};
    inline int32_t runTimeout() const { DARABONBA_PTR_GET_DEFAULT(runTimeout_, 0) };
    inline Runtime& setRunTimeout(int32_t runTimeout) { DARABONBA_PTR_SET_VALUE(runTimeout_, runTimeout) };


    // runtimeId Field Functions 
    bool hasRuntimeId() const { return this->runtimeId_ != nullptr;};
    void deleteRuntimeId() { this->runtimeId_ = nullptr;};
    inline string runtimeId() const { DARABONBA_PTR_GET_DEFAULT(runtimeId_, "") };
    inline Runtime& setRuntimeId(string runtimeId) { DARABONBA_PTR_SET_VALUE(runtimeId_, runtimeId) };


    // runtimeLog Field Functions 
    bool hasRuntimeLog() const { return this->runtimeLog_ != nullptr;};
    void deleteRuntimeLog() { this->runtimeLog_ = nullptr;};
    inline string runtimeLog() const { DARABONBA_PTR_GET_DEFAULT(runtimeLog_, "") };
    inline Runtime& setRuntimeLog(string runtimeLog) { DARABONBA_PTR_SET_VALUE(runtimeLog_, runtimeLog) };


    // runtimeName Field Functions 
    bool hasRuntimeName() const { return this->runtimeName_ != nullptr;};
    void deleteRuntimeName() { this->runtimeName_ = nullptr;};
    inline string runtimeName() const { DARABONBA_PTR_GET_DEFAULT(runtimeName_, "") };
    inline Runtime& setRuntimeName(string runtimeName) { DARABONBA_PTR_SET_VALUE(runtimeName_, runtimeName) };


    // runtimeStatus Field Functions 
    bool hasRuntimeStatus() const { return this->runtimeStatus_ != nullptr;};
    void deleteRuntimeStatus() { this->runtimeStatus_ = nullptr;};
    inline string runtimeStatus() const { DARABONBA_PTR_GET_DEFAULT(runtimeStatus_, "") };
    inline Runtime& setRuntimeStatus(string runtimeStatus) { DARABONBA_PTR_SET_VALUE(runtimeStatus_, runtimeStatus) };


    // runtimeType Field Functions 
    bool hasRuntimeType() const { return this->runtimeType_ != nullptr;};
    void deleteRuntimeType() { this->runtimeType_ = nullptr;};
    inline string runtimeType() const { DARABONBA_PTR_GET_DEFAULT(runtimeType_, "") };
    inline Runtime& setRuntimeType(string runtimeType) { DARABONBA_PTR_SET_VALUE(runtimeType_, runtimeType) };


    // supportSSEStream Field Functions 
    bool hasSupportSSEStream() const { return this->supportSSEStream_ != nullptr;};
    void deleteSupportSSEStream() { this->supportSSEStream_ = nullptr;};
    inline bool supportSSEStream() const { DARABONBA_PTR_GET_DEFAULT(supportSSEStream_, false) };
    inline Runtime& setSupportSSEStream(bool supportSSEStream) { DARABONBA_PTR_SET_VALUE(supportSSEStream_, supportSSEStream) };


    // userVpc Field Functions 
    bool hasUserVpc() const { return this->userVpc_ != nullptr;};
    void deleteUserVpc() { this->userVpc_ = nullptr;};
    inline const RuntimeUserVpc & userVpc() const { DARABONBA_PTR_GET_CONST(userVpc_, RuntimeUserVpc) };
    inline RuntimeUserVpc userVpc() { DARABONBA_PTR_GET(userVpc_, RuntimeUserVpc) };
    inline Runtime& setUserVpc(const RuntimeUserVpc & userVpc) { DARABONBA_PTR_SET_VALUE(userVpc_, userVpc) };
    inline Runtime& setUserVpc(RuntimeUserVpc && userVpc) { DARABONBA_PTR_SET_RVALUE(userVpc_, userVpc) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline Runtime& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // workDir Field Functions 
    bool hasWorkDir() const { return this->workDir_ != nullptr;};
    void deleteWorkDir() { this->workDir_ = nullptr;};
    inline string workDir() const { DARABONBA_PTR_GET_DEFAULT(workDir_, "") };
    inline Runtime& setWorkDir(string workDir) { DARABONBA_PTR_SET_VALUE(workDir_, workDir) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline Runtime& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> accessibility_ = nullptr;
    std::shared_ptr<string> creator_ = nullptr;
    std::shared_ptr<RuntimeCredentialConfig> credentialConfig_ = nullptr;
    std::shared_ptr<vector<RuntimeDataSources>> dataSources_ = nullptr;
    std::shared_ptr<RuntimeEcsSpec> ecsSpec_ = nullptr;
    std::shared_ptr<vector<RuntimeEnvs>> envs_ = nullptr;
    std::shared_ptr<string> flowId_ = nullptr;
    std::shared_ptr<vector<RuntimeFlows>> flows_ = nullptr;
    std::shared_ptr<string> gmtCreateTime_ = nullptr;
    std::shared_ptr<string> gmtModifiedTime_ = nullptr;
    std::shared_ptr<int32_t> idleTimeout_ = nullptr;
    std::shared_ptr<vector<RuntimeLabels>> labels_ = nullptr;
    std::shared_ptr<string> latestVersion_ = nullptr;
    std::shared_ptr<string> MCPConfig_ = nullptr;
    std::shared_ptr<string> resourceId_ = nullptr;
    std::shared_ptr<int32_t> runTimeout_ = nullptr;
    std::shared_ptr<string> runtimeId_ = nullptr;
    std::shared_ptr<string> runtimeLog_ = nullptr;
    std::shared_ptr<string> runtimeName_ = nullptr;
    std::shared_ptr<string> runtimeStatus_ = nullptr;
    std::shared_ptr<string> runtimeType_ = nullptr;
    std::shared_ptr<bool> supportSSEStream_ = nullptr;
    std::shared_ptr<RuntimeUserVpc> userVpc_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
    std::shared_ptr<string> workDir_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
