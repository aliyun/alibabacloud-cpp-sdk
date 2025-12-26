// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLOWRUN_HPP_
#define ALIBABACLOUD_MODELS_FLOWRUN_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FlowRunChildRuns.hpp>
#include <alibabacloud/models/FlowRunCredentialConfig.hpp>
#include <map>
#include <alibabacloud/models/FlowRunDataSources.hpp>
#include <alibabacloud/models/FlowRunEcsSpec.hpp>
#include <alibabacloud/models/FlowRunEnvs.hpp>
#include <alibabacloud/models/FlowRunEvaluationConfigs.hpp>
#include <alibabacloud/models/FlowRunLabels.hpp>
#include <alibabacloud/models/FlowRunNodeRunInfos.hpp>
#include <alibabacloud/models/FlowRunUserVpc.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class FlowRun : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlowRun& obj) { 
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(ChildRuns, childRuns_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(CredentialConfig, credentialConfig_);
      DARABONBA_PTR_TO_JSON(DataColumnMapping, dataColumnMapping_);
      DARABONBA_PTR_TO_JSON(DataSources, dataSources_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(EcsSpec, ecsSpec_);
      DARABONBA_PTR_TO_JSON(Envs, envs_);
      DARABONBA_PTR_TO_JSON(EvaluationConfigs, evaluationConfigs_);
      DARABONBA_PTR_TO_JSON(EvaluationWorkerCount, evaluationWorkerCount_);
      DARABONBA_PTR_TO_JSON(Exception, exception_);
      DARABONBA_PTR_TO_JSON(FlowId, flowId_);
      DARABONBA_PTR_TO_JSON(FlowName, flowName_);
      DARABONBA_PTR_TO_JSON(FlowRunId, flowRunId_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtFinishTime, gmtFinishTime_);
      DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_TO_JSON(GmtStartTime, gmtStartTime_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(NodeRunInfos, nodeRunInfos_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(RunMode, runMode_);
      DARABONBA_PTR_TO_JSON(RunName, runName_);
      DARABONBA_PTR_TO_JSON(RunResult, runResult_);
      DARABONBA_PTR_TO_JSON(RunStatus, runStatus_);
      DARABONBA_PTR_TO_JSON(RunTimeout, runTimeout_);
      DARABONBA_PTR_TO_JSON(UserVpc, userVpc_);
      DARABONBA_PTR_TO_JSON(Variant, variant_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, FlowRun& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(ChildRuns, childRuns_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(CredentialConfig, credentialConfig_);
      DARABONBA_PTR_FROM_JSON(DataColumnMapping, dataColumnMapping_);
      DARABONBA_PTR_FROM_JSON(DataSources, dataSources_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(EcsSpec, ecsSpec_);
      DARABONBA_PTR_FROM_JSON(Envs, envs_);
      DARABONBA_PTR_FROM_JSON(EvaluationConfigs, evaluationConfigs_);
      DARABONBA_PTR_FROM_JSON(EvaluationWorkerCount, evaluationWorkerCount_);
      DARABONBA_PTR_FROM_JSON(Exception, exception_);
      DARABONBA_PTR_FROM_JSON(FlowId, flowId_);
      DARABONBA_PTR_FROM_JSON(FlowName, flowName_);
      DARABONBA_PTR_FROM_JSON(FlowRunId, flowRunId_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtFinishTime, gmtFinishTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_FROM_JSON(GmtStartTime, gmtStartTime_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(NodeRunInfos, nodeRunInfos_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(RunMode, runMode_);
      DARABONBA_PTR_FROM_JSON(RunName, runName_);
      DARABONBA_PTR_FROM_JSON(RunResult, runResult_);
      DARABONBA_PTR_FROM_JSON(RunStatus, runStatus_);
      DARABONBA_PTR_FROM_JSON(RunTimeout, runTimeout_);
      DARABONBA_PTR_FROM_JSON(UserVpc, userVpc_);
      DARABONBA_PTR_FROM_JSON(Variant, variant_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    FlowRun() = default ;
    FlowRun(const FlowRun &) = default ;
    FlowRun(FlowRun &&) = default ;
    FlowRun(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlowRun() = default ;
    FlowRun& operator=(const FlowRun &) = default ;
    FlowRun& operator=(FlowRun &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessibility_ == nullptr
        && return this->childRuns_ == nullptr && return this->creator_ == nullptr && return this->credentialConfig_ == nullptr && return this->dataColumnMapping_ == nullptr && return this->dataSources_ == nullptr
        && return this->duration_ == nullptr && return this->ecsSpec_ == nullptr && return this->envs_ == nullptr && return this->evaluationConfigs_ == nullptr && return this->evaluationWorkerCount_ == nullptr
        && return this->exception_ == nullptr && return this->flowId_ == nullptr && return this->flowName_ == nullptr && return this->flowRunId_ == nullptr && return this->gmtCreateTime_ == nullptr
        && return this->gmtFinishTime_ == nullptr && return this->gmtModifiedTime_ == nullptr && return this->gmtStartTime_ == nullptr && return this->labels_ == nullptr && return this->nodeName_ == nullptr
        && return this->nodeRunInfos_ == nullptr && return this->resourceId_ == nullptr && return this->runMode_ == nullptr && return this->runName_ == nullptr && return this->runResult_ == nullptr
        && return this->runStatus_ == nullptr && return this->runTimeout_ == nullptr && return this->userVpc_ == nullptr && return this->variant_ == nullptr && return this->workspaceId_ == nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string accessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline FlowRun& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // childRuns Field Functions 
    bool hasChildRuns() const { return this->childRuns_ != nullptr;};
    void deleteChildRuns() { this->childRuns_ = nullptr;};
    inline const vector<FlowRunChildRuns> & childRuns() const { DARABONBA_PTR_GET_CONST(childRuns_, vector<FlowRunChildRuns>) };
    inline vector<FlowRunChildRuns> childRuns() { DARABONBA_PTR_GET(childRuns_, vector<FlowRunChildRuns>) };
    inline FlowRun& setChildRuns(const vector<FlowRunChildRuns> & childRuns) { DARABONBA_PTR_SET_VALUE(childRuns_, childRuns) };
    inline FlowRun& setChildRuns(vector<FlowRunChildRuns> && childRuns) { DARABONBA_PTR_SET_RVALUE(childRuns_, childRuns) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline FlowRun& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // credentialConfig Field Functions 
    bool hasCredentialConfig() const { return this->credentialConfig_ != nullptr;};
    void deleteCredentialConfig() { this->credentialConfig_ = nullptr;};
    inline const FlowRunCredentialConfig & credentialConfig() const { DARABONBA_PTR_GET_CONST(credentialConfig_, FlowRunCredentialConfig) };
    inline FlowRunCredentialConfig credentialConfig() { DARABONBA_PTR_GET(credentialConfig_, FlowRunCredentialConfig) };
    inline FlowRun& setCredentialConfig(const FlowRunCredentialConfig & credentialConfig) { DARABONBA_PTR_SET_VALUE(credentialConfig_, credentialConfig) };
    inline FlowRun& setCredentialConfig(FlowRunCredentialConfig && credentialConfig) { DARABONBA_PTR_SET_RVALUE(credentialConfig_, credentialConfig) };


    // dataColumnMapping Field Functions 
    bool hasDataColumnMapping() const { return this->dataColumnMapping_ != nullptr;};
    void deleteDataColumnMapping() { this->dataColumnMapping_ = nullptr;};
    inline const map<string, string> & dataColumnMapping() const { DARABONBA_PTR_GET_CONST(dataColumnMapping_, map<string, string>) };
    inline map<string, string> dataColumnMapping() { DARABONBA_PTR_GET(dataColumnMapping_, map<string, string>) };
    inline FlowRun& setDataColumnMapping(const map<string, string> & dataColumnMapping) { DARABONBA_PTR_SET_VALUE(dataColumnMapping_, dataColumnMapping) };
    inline FlowRun& setDataColumnMapping(map<string, string> && dataColumnMapping) { DARABONBA_PTR_SET_RVALUE(dataColumnMapping_, dataColumnMapping) };


    // dataSources Field Functions 
    bool hasDataSources() const { return this->dataSources_ != nullptr;};
    void deleteDataSources() { this->dataSources_ = nullptr;};
    inline const vector<FlowRunDataSources> & dataSources() const { DARABONBA_PTR_GET_CONST(dataSources_, vector<FlowRunDataSources>) };
    inline vector<FlowRunDataSources> dataSources() { DARABONBA_PTR_GET(dataSources_, vector<FlowRunDataSources>) };
    inline FlowRun& setDataSources(const vector<FlowRunDataSources> & dataSources) { DARABONBA_PTR_SET_VALUE(dataSources_, dataSources) };
    inline FlowRun& setDataSources(vector<FlowRunDataSources> && dataSources) { DARABONBA_PTR_SET_RVALUE(dataSources_, dataSources) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline FlowRun& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // ecsSpec Field Functions 
    bool hasEcsSpec() const { return this->ecsSpec_ != nullptr;};
    void deleteEcsSpec() { this->ecsSpec_ = nullptr;};
    inline const FlowRunEcsSpec & ecsSpec() const { DARABONBA_PTR_GET_CONST(ecsSpec_, FlowRunEcsSpec) };
    inline FlowRunEcsSpec ecsSpec() { DARABONBA_PTR_GET(ecsSpec_, FlowRunEcsSpec) };
    inline FlowRun& setEcsSpec(const FlowRunEcsSpec & ecsSpec) { DARABONBA_PTR_SET_VALUE(ecsSpec_, ecsSpec) };
    inline FlowRun& setEcsSpec(FlowRunEcsSpec && ecsSpec) { DARABONBA_PTR_SET_RVALUE(ecsSpec_, ecsSpec) };


    // envs Field Functions 
    bool hasEnvs() const { return this->envs_ != nullptr;};
    void deleteEnvs() { this->envs_ = nullptr;};
    inline const vector<FlowRunEnvs> & envs() const { DARABONBA_PTR_GET_CONST(envs_, vector<FlowRunEnvs>) };
    inline vector<FlowRunEnvs> envs() { DARABONBA_PTR_GET(envs_, vector<FlowRunEnvs>) };
    inline FlowRun& setEnvs(const vector<FlowRunEnvs> & envs) { DARABONBA_PTR_SET_VALUE(envs_, envs) };
    inline FlowRun& setEnvs(vector<FlowRunEnvs> && envs) { DARABONBA_PTR_SET_RVALUE(envs_, envs) };


    // evaluationConfigs Field Functions 
    bool hasEvaluationConfigs() const { return this->evaluationConfigs_ != nullptr;};
    void deleteEvaluationConfigs() { this->evaluationConfigs_ = nullptr;};
    inline const vector<FlowRunEvaluationConfigs> & evaluationConfigs() const { DARABONBA_PTR_GET_CONST(evaluationConfigs_, vector<FlowRunEvaluationConfigs>) };
    inline vector<FlowRunEvaluationConfigs> evaluationConfigs() { DARABONBA_PTR_GET(evaluationConfigs_, vector<FlowRunEvaluationConfigs>) };
    inline FlowRun& setEvaluationConfigs(const vector<FlowRunEvaluationConfigs> & evaluationConfigs) { DARABONBA_PTR_SET_VALUE(evaluationConfigs_, evaluationConfigs) };
    inline FlowRun& setEvaluationConfigs(vector<FlowRunEvaluationConfigs> && evaluationConfigs) { DARABONBA_PTR_SET_RVALUE(evaluationConfigs_, evaluationConfigs) };


    // evaluationWorkerCount Field Functions 
    bool hasEvaluationWorkerCount() const { return this->evaluationWorkerCount_ != nullptr;};
    void deleteEvaluationWorkerCount() { this->evaluationWorkerCount_ = nullptr;};
    inline int32_t evaluationWorkerCount() const { DARABONBA_PTR_GET_DEFAULT(evaluationWorkerCount_, 0) };
    inline FlowRun& setEvaluationWorkerCount(int32_t evaluationWorkerCount) { DARABONBA_PTR_SET_VALUE(evaluationWorkerCount_, evaluationWorkerCount) };


    // exception Field Functions 
    bool hasException() const { return this->exception_ != nullptr;};
    void deleteException() { this->exception_ = nullptr;};
    inline string exception() const { DARABONBA_PTR_GET_DEFAULT(exception_, "") };
    inline FlowRun& setException(string exception) { DARABONBA_PTR_SET_VALUE(exception_, exception) };


    // flowId Field Functions 
    bool hasFlowId() const { return this->flowId_ != nullptr;};
    void deleteFlowId() { this->flowId_ = nullptr;};
    inline string flowId() const { DARABONBA_PTR_GET_DEFAULT(flowId_, "") };
    inline FlowRun& setFlowId(string flowId) { DARABONBA_PTR_SET_VALUE(flowId_, flowId) };


    // flowName Field Functions 
    bool hasFlowName() const { return this->flowName_ != nullptr;};
    void deleteFlowName() { this->flowName_ = nullptr;};
    inline string flowName() const { DARABONBA_PTR_GET_DEFAULT(flowName_, "") };
    inline FlowRun& setFlowName(string flowName) { DARABONBA_PTR_SET_VALUE(flowName_, flowName) };


    // flowRunId Field Functions 
    bool hasFlowRunId() const { return this->flowRunId_ != nullptr;};
    void deleteFlowRunId() { this->flowRunId_ = nullptr;};
    inline string flowRunId() const { DARABONBA_PTR_GET_DEFAULT(flowRunId_, "") };
    inline FlowRun& setFlowRunId(string flowRunId) { DARABONBA_PTR_SET_VALUE(flowRunId_, flowRunId) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string gmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline FlowRun& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtFinishTime Field Functions 
    bool hasGmtFinishTime() const { return this->gmtFinishTime_ != nullptr;};
    void deleteGmtFinishTime() { this->gmtFinishTime_ = nullptr;};
    inline string gmtFinishTime() const { DARABONBA_PTR_GET_DEFAULT(gmtFinishTime_, "") };
    inline FlowRun& setGmtFinishTime(string gmtFinishTime) { DARABONBA_PTR_SET_VALUE(gmtFinishTime_, gmtFinishTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string gmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline FlowRun& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // gmtStartTime Field Functions 
    bool hasGmtStartTime() const { return this->gmtStartTime_ != nullptr;};
    void deleteGmtStartTime() { this->gmtStartTime_ = nullptr;};
    inline string gmtStartTime() const { DARABONBA_PTR_GET_DEFAULT(gmtStartTime_, "") };
    inline FlowRun& setGmtStartTime(string gmtStartTime) { DARABONBA_PTR_SET_VALUE(gmtStartTime_, gmtStartTime) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<FlowRunLabels> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<FlowRunLabels>) };
    inline vector<FlowRunLabels> labels() { DARABONBA_PTR_GET(labels_, vector<FlowRunLabels>) };
    inline FlowRun& setLabels(const vector<FlowRunLabels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline FlowRun& setLabels(vector<FlowRunLabels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline FlowRun& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // nodeRunInfos Field Functions 
    bool hasNodeRunInfos() const { return this->nodeRunInfos_ != nullptr;};
    void deleteNodeRunInfos() { this->nodeRunInfos_ = nullptr;};
    inline const vector<FlowRunNodeRunInfos> & nodeRunInfos() const { DARABONBA_PTR_GET_CONST(nodeRunInfos_, vector<FlowRunNodeRunInfos>) };
    inline vector<FlowRunNodeRunInfos> nodeRunInfos() { DARABONBA_PTR_GET(nodeRunInfos_, vector<FlowRunNodeRunInfos>) };
    inline FlowRun& setNodeRunInfos(const vector<FlowRunNodeRunInfos> & nodeRunInfos) { DARABONBA_PTR_SET_VALUE(nodeRunInfos_, nodeRunInfos) };
    inline FlowRun& setNodeRunInfos(vector<FlowRunNodeRunInfos> && nodeRunInfos) { DARABONBA_PTR_SET_RVALUE(nodeRunInfos_, nodeRunInfos) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline FlowRun& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // runMode Field Functions 
    bool hasRunMode() const { return this->runMode_ != nullptr;};
    void deleteRunMode() { this->runMode_ = nullptr;};
    inline string runMode() const { DARABONBA_PTR_GET_DEFAULT(runMode_, "") };
    inline FlowRun& setRunMode(string runMode) { DARABONBA_PTR_SET_VALUE(runMode_, runMode) };


    // runName Field Functions 
    bool hasRunName() const { return this->runName_ != nullptr;};
    void deleteRunName() { this->runName_ = nullptr;};
    inline string runName() const { DARABONBA_PTR_GET_DEFAULT(runName_, "") };
    inline FlowRun& setRunName(string runName) { DARABONBA_PTR_SET_VALUE(runName_, runName) };


    // runResult Field Functions 
    bool hasRunResult() const { return this->runResult_ != nullptr;};
    void deleteRunResult() { this->runResult_ = nullptr;};
    inline string runResult() const { DARABONBA_PTR_GET_DEFAULT(runResult_, "") };
    inline FlowRun& setRunResult(string runResult) { DARABONBA_PTR_SET_VALUE(runResult_, runResult) };


    // runStatus Field Functions 
    bool hasRunStatus() const { return this->runStatus_ != nullptr;};
    void deleteRunStatus() { this->runStatus_ = nullptr;};
    inline string runStatus() const { DARABONBA_PTR_GET_DEFAULT(runStatus_, "") };
    inline FlowRun& setRunStatus(string runStatus) { DARABONBA_PTR_SET_VALUE(runStatus_, runStatus) };


    // runTimeout Field Functions 
    bool hasRunTimeout() const { return this->runTimeout_ != nullptr;};
    void deleteRunTimeout() { this->runTimeout_ = nullptr;};
    inline int32_t runTimeout() const { DARABONBA_PTR_GET_DEFAULT(runTimeout_, 0) };
    inline FlowRun& setRunTimeout(int32_t runTimeout) { DARABONBA_PTR_SET_VALUE(runTimeout_, runTimeout) };


    // userVpc Field Functions 
    bool hasUserVpc() const { return this->userVpc_ != nullptr;};
    void deleteUserVpc() { this->userVpc_ = nullptr;};
    inline const FlowRunUserVpc & userVpc() const { DARABONBA_PTR_GET_CONST(userVpc_, FlowRunUserVpc) };
    inline FlowRunUserVpc userVpc() { DARABONBA_PTR_GET(userVpc_, FlowRunUserVpc) };
    inline FlowRun& setUserVpc(const FlowRunUserVpc & userVpc) { DARABONBA_PTR_SET_VALUE(userVpc_, userVpc) };
    inline FlowRun& setUserVpc(FlowRunUserVpc && userVpc) { DARABONBA_PTR_SET_RVALUE(userVpc_, userVpc) };


    // variant Field Functions 
    bool hasVariant() const { return this->variant_ != nullptr;};
    void deleteVariant() { this->variant_ = nullptr;};
    inline string variant() const { DARABONBA_PTR_GET_DEFAULT(variant_, "") };
    inline FlowRun& setVariant(string variant) { DARABONBA_PTR_SET_VALUE(variant_, variant) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline FlowRun& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> accessibility_ = nullptr;
    std::shared_ptr<vector<FlowRunChildRuns>> childRuns_ = nullptr;
    std::shared_ptr<string> creator_ = nullptr;
    std::shared_ptr<FlowRunCredentialConfig> credentialConfig_ = nullptr;
    std::shared_ptr<map<string, string>> dataColumnMapping_ = nullptr;
    std::shared_ptr<vector<FlowRunDataSources>> dataSources_ = nullptr;
    std::shared_ptr<int32_t> duration_ = nullptr;
    std::shared_ptr<FlowRunEcsSpec> ecsSpec_ = nullptr;
    std::shared_ptr<vector<FlowRunEnvs>> envs_ = nullptr;
    std::shared_ptr<vector<FlowRunEvaluationConfigs>> evaluationConfigs_ = nullptr;
    std::shared_ptr<int32_t> evaluationWorkerCount_ = nullptr;
    std::shared_ptr<string> exception_ = nullptr;
    std::shared_ptr<string> flowId_ = nullptr;
    std::shared_ptr<string> flowName_ = nullptr;
    std::shared_ptr<string> flowRunId_ = nullptr;
    std::shared_ptr<string> gmtCreateTime_ = nullptr;
    std::shared_ptr<string> gmtFinishTime_ = nullptr;
    std::shared_ptr<string> gmtModifiedTime_ = nullptr;
    std::shared_ptr<string> gmtStartTime_ = nullptr;
    std::shared_ptr<vector<FlowRunLabels>> labels_ = nullptr;
    std::shared_ptr<string> nodeName_ = nullptr;
    std::shared_ptr<vector<FlowRunNodeRunInfos>> nodeRunInfos_ = nullptr;
    std::shared_ptr<string> resourceId_ = nullptr;
    std::shared_ptr<string> runMode_ = nullptr;
    std::shared_ptr<string> runName_ = nullptr;
    std::shared_ptr<string> runResult_ = nullptr;
    std::shared_ptr<string> runStatus_ = nullptr;
    std::shared_ptr<int32_t> runTimeout_ = nullptr;
    std::shared_ptr<FlowRunUserVpc> userVpc_ = nullptr;
    std::shared_ptr<string> variant_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
