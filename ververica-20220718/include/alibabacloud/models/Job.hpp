// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_JOB_HPP_
#define ALIBABACLOUD_MODELS_JOB_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Artifact.hpp>
#include <alibabacloud/models/BatchResourceSetting.hpp>
#include <vector>
#include <alibabacloud/models/LocalVariable.hpp>
#include <alibabacloud/models/Logging.hpp>
#include <alibabacloud/models/JobMetric.hpp>
#include <alibabacloud/models/DeploymentRestoreStrategy.hpp>
#include <alibabacloud/models/JobStatus.hpp>
#include <alibabacloud/models/StreamingResourceSetting.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class Job : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Job& obj) { 
      DARABONBA_PTR_TO_JSON(artifact, artifact_);
      DARABONBA_PTR_TO_JSON(batchResourceSetting, batchResourceSetting_);
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(creator, creator_);
      DARABONBA_PTR_TO_JSON(creatorName, creatorName_);
      DARABONBA_PTR_TO_JSON(deploymentId, deploymentId_);
      DARABONBA_PTR_TO_JSON(deploymentName, deploymentName_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(engineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(executionMode, executionMode_);
      DARABONBA_ANY_TO_JSON(flinkConf, flinkConf_);
      DARABONBA_PTR_TO_JSON(jobId, jobId_);
      DARABONBA_PTR_TO_JSON(localVariables, localVariables_);
      DARABONBA_PTR_TO_JSON(logging, logging_);
      DARABONBA_PTR_TO_JSON(metric, metric_);
      DARABONBA_PTR_TO_JSON(modifiedAt, modifiedAt_);
      DARABONBA_PTR_TO_JSON(modifier, modifier_);
      DARABONBA_PTR_TO_JSON(modifierName, modifierName_);
      DARABONBA_PTR_TO_JSON(namespace, namespace_);
      DARABONBA_PTR_TO_JSON(restoreStrategy, restoreStrategy_);
      DARABONBA_PTR_TO_JSON(sessionClusterName, sessionClusterName_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(streamingResourceSetting, streamingResourceSetting_);
      DARABONBA_ANY_TO_JSON(userFlinkConf, userFlinkConf_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, Job& obj) { 
      DARABONBA_PTR_FROM_JSON(artifact, artifact_);
      DARABONBA_PTR_FROM_JSON(batchResourceSetting, batchResourceSetting_);
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(creator, creator_);
      DARABONBA_PTR_FROM_JSON(creatorName, creatorName_);
      DARABONBA_PTR_FROM_JSON(deploymentId, deploymentId_);
      DARABONBA_PTR_FROM_JSON(deploymentName, deploymentName_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(engineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(executionMode, executionMode_);
      DARABONBA_ANY_FROM_JSON(flinkConf, flinkConf_);
      DARABONBA_PTR_FROM_JSON(jobId, jobId_);
      DARABONBA_PTR_FROM_JSON(localVariables, localVariables_);
      DARABONBA_PTR_FROM_JSON(logging, logging_);
      DARABONBA_PTR_FROM_JSON(metric, metric_);
      DARABONBA_PTR_FROM_JSON(modifiedAt, modifiedAt_);
      DARABONBA_PTR_FROM_JSON(modifier, modifier_);
      DARABONBA_PTR_FROM_JSON(modifierName, modifierName_);
      DARABONBA_PTR_FROM_JSON(namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(restoreStrategy, restoreStrategy_);
      DARABONBA_PTR_FROM_JSON(sessionClusterName, sessionClusterName_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(streamingResourceSetting, streamingResourceSetting_);
      DARABONBA_ANY_FROM_JSON(userFlinkConf, userFlinkConf_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    Job() = default ;
    Job(const Job &) = default ;
    Job(Job &&) = default ;
    Job(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Job() = default ;
    Job& operator=(const Job &) = default ;
    Job& operator=(Job &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->artifact_ == nullptr
        && this->batchResourceSetting_ == nullptr && this->createdAt_ == nullptr && this->creator_ == nullptr && this->creatorName_ == nullptr && this->deploymentId_ == nullptr
        && this->deploymentName_ == nullptr && this->endTime_ == nullptr && this->engineVersion_ == nullptr && this->executionMode_ == nullptr && this->flinkConf_ == nullptr
        && this->jobId_ == nullptr && this->localVariables_ == nullptr && this->logging_ == nullptr && this->metric_ == nullptr && this->modifiedAt_ == nullptr
        && this->modifier_ == nullptr && this->modifierName_ == nullptr && this->namespace_ == nullptr && this->restoreStrategy_ == nullptr && this->sessionClusterName_ == nullptr
        && this->startTime_ == nullptr && this->status_ == nullptr && this->streamingResourceSetting_ == nullptr && this->userFlinkConf_ == nullptr && this->workspace_ == nullptr; };
    // artifact Field Functions 
    bool hasArtifact() const { return this->artifact_ != nullptr;};
    void deleteArtifact() { this->artifact_ = nullptr;};
    inline const Artifact & getArtifact() const { DARABONBA_PTR_GET_CONST(artifact_, Artifact) };
    inline Artifact getArtifact() { DARABONBA_PTR_GET(artifact_, Artifact) };
    inline Job& setArtifact(const Artifact & artifact) { DARABONBA_PTR_SET_VALUE(artifact_, artifact) };
    inline Job& setArtifact(Artifact && artifact) { DARABONBA_PTR_SET_RVALUE(artifact_, artifact) };


    // batchResourceSetting Field Functions 
    bool hasBatchResourceSetting() const { return this->batchResourceSetting_ != nullptr;};
    void deleteBatchResourceSetting() { this->batchResourceSetting_ = nullptr;};
    inline const BatchResourceSetting & getBatchResourceSetting() const { DARABONBA_PTR_GET_CONST(batchResourceSetting_, BatchResourceSetting) };
    inline BatchResourceSetting getBatchResourceSetting() { DARABONBA_PTR_GET(batchResourceSetting_, BatchResourceSetting) };
    inline Job& setBatchResourceSetting(const BatchResourceSetting & batchResourceSetting) { DARABONBA_PTR_SET_VALUE(batchResourceSetting_, batchResourceSetting) };
    inline Job& setBatchResourceSetting(BatchResourceSetting && batchResourceSetting) { DARABONBA_PTR_SET_RVALUE(batchResourceSetting_, batchResourceSetting) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline Job& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline Job& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // creatorName Field Functions 
    bool hasCreatorName() const { return this->creatorName_ != nullptr;};
    void deleteCreatorName() { this->creatorName_ = nullptr;};
    inline string getCreatorName() const { DARABONBA_PTR_GET_DEFAULT(creatorName_, "") };
    inline Job& setCreatorName(string creatorName) { DARABONBA_PTR_SET_VALUE(creatorName_, creatorName) };


    // deploymentId Field Functions 
    bool hasDeploymentId() const { return this->deploymentId_ != nullptr;};
    void deleteDeploymentId() { this->deploymentId_ = nullptr;};
    inline string getDeploymentId() const { DARABONBA_PTR_GET_DEFAULT(deploymentId_, "") };
    inline Job& setDeploymentId(string deploymentId) { DARABONBA_PTR_SET_VALUE(deploymentId_, deploymentId) };


    // deploymentName Field Functions 
    bool hasDeploymentName() const { return this->deploymentName_ != nullptr;};
    void deleteDeploymentName() { this->deploymentName_ = nullptr;};
    inline string getDeploymentName() const { DARABONBA_PTR_GET_DEFAULT(deploymentName_, "") };
    inline Job& setDeploymentName(string deploymentName) { DARABONBA_PTR_SET_VALUE(deploymentName_, deploymentName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline Job& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline Job& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // executionMode Field Functions 
    bool hasExecutionMode() const { return this->executionMode_ != nullptr;};
    void deleteExecutionMode() { this->executionMode_ = nullptr;};
    inline string getExecutionMode() const { DARABONBA_PTR_GET_DEFAULT(executionMode_, "") };
    inline Job& setExecutionMode(string executionMode) { DARABONBA_PTR_SET_VALUE(executionMode_, executionMode) };


    // flinkConf Field Functions 
    bool hasFlinkConf() const { return this->flinkConf_ != nullptr;};
    void deleteFlinkConf() { this->flinkConf_ = nullptr;};
    inline     const Darabonba::Json & getFlinkConf() const { DARABONBA_GET(flinkConf_) };
    Darabonba::Json & getFlinkConf() { DARABONBA_GET(flinkConf_) };
    inline Job& setFlinkConf(const Darabonba::Json & flinkConf) { DARABONBA_SET_VALUE(flinkConf_, flinkConf) };
    inline Job& setFlinkConf(Darabonba::Json && flinkConf) { DARABONBA_SET_RVALUE(flinkConf_, flinkConf) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline Job& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // localVariables Field Functions 
    bool hasLocalVariables() const { return this->localVariables_ != nullptr;};
    void deleteLocalVariables() { this->localVariables_ = nullptr;};
    inline const vector<LocalVariable> & getLocalVariables() const { DARABONBA_PTR_GET_CONST(localVariables_, vector<LocalVariable>) };
    inline vector<LocalVariable> getLocalVariables() { DARABONBA_PTR_GET(localVariables_, vector<LocalVariable>) };
    inline Job& setLocalVariables(const vector<LocalVariable> & localVariables) { DARABONBA_PTR_SET_VALUE(localVariables_, localVariables) };
    inline Job& setLocalVariables(vector<LocalVariable> && localVariables) { DARABONBA_PTR_SET_RVALUE(localVariables_, localVariables) };


    // logging Field Functions 
    bool hasLogging() const { return this->logging_ != nullptr;};
    void deleteLogging() { this->logging_ = nullptr;};
    inline const Logging & getLogging() const { DARABONBA_PTR_GET_CONST(logging_, Logging) };
    inline Logging getLogging() { DARABONBA_PTR_GET(logging_, Logging) };
    inline Job& setLogging(const Logging & logging) { DARABONBA_PTR_SET_VALUE(logging_, logging) };
    inline Job& setLogging(Logging && logging) { DARABONBA_PTR_SET_RVALUE(logging_, logging) };


    // metric Field Functions 
    bool hasMetric() const { return this->metric_ != nullptr;};
    void deleteMetric() { this->metric_ = nullptr;};
    inline const JobMetric & getMetric() const { DARABONBA_PTR_GET_CONST(metric_, JobMetric) };
    inline JobMetric getMetric() { DARABONBA_PTR_GET(metric_, JobMetric) };
    inline Job& setMetric(const JobMetric & metric) { DARABONBA_PTR_SET_VALUE(metric_, metric) };
    inline Job& setMetric(JobMetric && metric) { DARABONBA_PTR_SET_RVALUE(metric_, metric) };


    // modifiedAt Field Functions 
    bool hasModifiedAt() const { return this->modifiedAt_ != nullptr;};
    void deleteModifiedAt() { this->modifiedAt_ = nullptr;};
    inline string getModifiedAt() const { DARABONBA_PTR_GET_DEFAULT(modifiedAt_, "") };
    inline Job& setModifiedAt(string modifiedAt) { DARABONBA_PTR_SET_VALUE(modifiedAt_, modifiedAt) };


    // modifier Field Functions 
    bool hasModifier() const { return this->modifier_ != nullptr;};
    void deleteModifier() { this->modifier_ = nullptr;};
    inline string getModifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
    inline Job& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


    // modifierName Field Functions 
    bool hasModifierName() const { return this->modifierName_ != nullptr;};
    void deleteModifierName() { this->modifierName_ = nullptr;};
    inline string getModifierName() const { DARABONBA_PTR_GET_DEFAULT(modifierName_, "") };
    inline Job& setModifierName(string modifierName) { DARABONBA_PTR_SET_VALUE(modifierName_, modifierName) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline Job& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // restoreStrategy Field Functions 
    bool hasRestoreStrategy() const { return this->restoreStrategy_ != nullptr;};
    void deleteRestoreStrategy() { this->restoreStrategy_ = nullptr;};
    inline const DeploymentRestoreStrategy & getRestoreStrategy() const { DARABONBA_PTR_GET_CONST(restoreStrategy_, DeploymentRestoreStrategy) };
    inline DeploymentRestoreStrategy getRestoreStrategy() { DARABONBA_PTR_GET(restoreStrategy_, DeploymentRestoreStrategy) };
    inline Job& setRestoreStrategy(const DeploymentRestoreStrategy & restoreStrategy) { DARABONBA_PTR_SET_VALUE(restoreStrategy_, restoreStrategy) };
    inline Job& setRestoreStrategy(DeploymentRestoreStrategy && restoreStrategy) { DARABONBA_PTR_SET_RVALUE(restoreStrategy_, restoreStrategy) };


    // sessionClusterName Field Functions 
    bool hasSessionClusterName() const { return this->sessionClusterName_ != nullptr;};
    void deleteSessionClusterName() { this->sessionClusterName_ = nullptr;};
    inline string getSessionClusterName() const { DARABONBA_PTR_GET_DEFAULT(sessionClusterName_, "") };
    inline Job& setSessionClusterName(string sessionClusterName) { DARABONBA_PTR_SET_VALUE(sessionClusterName_, sessionClusterName) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline Job& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline const JobStatus & getStatus() const { DARABONBA_PTR_GET_CONST(status_, JobStatus) };
    inline JobStatus getStatus() { DARABONBA_PTR_GET(status_, JobStatus) };
    inline Job& setStatus(const JobStatus & status) { DARABONBA_PTR_SET_VALUE(status_, status) };
    inline Job& setStatus(JobStatus && status) { DARABONBA_PTR_SET_RVALUE(status_, status) };


    // streamingResourceSetting Field Functions 
    bool hasStreamingResourceSetting() const { return this->streamingResourceSetting_ != nullptr;};
    void deleteStreamingResourceSetting() { this->streamingResourceSetting_ = nullptr;};
    inline const StreamingResourceSetting & getStreamingResourceSetting() const { DARABONBA_PTR_GET_CONST(streamingResourceSetting_, StreamingResourceSetting) };
    inline StreamingResourceSetting getStreamingResourceSetting() { DARABONBA_PTR_GET(streamingResourceSetting_, StreamingResourceSetting) };
    inline Job& setStreamingResourceSetting(const StreamingResourceSetting & streamingResourceSetting) { DARABONBA_PTR_SET_VALUE(streamingResourceSetting_, streamingResourceSetting) };
    inline Job& setStreamingResourceSetting(StreamingResourceSetting && streamingResourceSetting) { DARABONBA_PTR_SET_RVALUE(streamingResourceSetting_, streamingResourceSetting) };


    // userFlinkConf Field Functions 
    bool hasUserFlinkConf() const { return this->userFlinkConf_ != nullptr;};
    void deleteUserFlinkConf() { this->userFlinkConf_ = nullptr;};
    inline     const Darabonba::Json & getUserFlinkConf() const { DARABONBA_GET(userFlinkConf_) };
    Darabonba::Json & getUserFlinkConf() { DARABONBA_GET(userFlinkConf_) };
    inline Job& setUserFlinkConf(const Darabonba::Json & userFlinkConf) { DARABONBA_SET_VALUE(userFlinkConf_, userFlinkConf) };
    inline Job& setUserFlinkConf(Darabonba::Json && userFlinkConf) { DARABONBA_SET_RVALUE(userFlinkConf_, userFlinkConf) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline Job& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    // Job instance content template.
    shared_ptr<Artifact> artifact_ {};
    // Batch mode resource settings.
    shared_ptr<BatchResourceSetting> batchResourceSetting_ {};
    // Creation time.
    shared_ptr<string> createdAt_ {};
    // Creator.
    shared_ptr<string> creator_ {};
    // Creator name.
    shared_ptr<string> creatorName_ {};
    // Deployment ID.
    shared_ptr<string> deploymentId_ {};
    // Deployment name.
    shared_ptr<string> deploymentName_ {};
    // Job instance end time.
    shared_ptr<int64_t> endTime_ {};
    // Job engine version.
    shared_ptr<string> engineVersion_ {};
    // Job instance execution mode.
    // 
    // - STREAM: Stream mode.
    // 
    // - BATCH: Batch mode.
    shared_ptr<string> executionMode_ {};
    // Full parameter settings for the job instance.
    Darabonba::Json flinkConf_ {};
    // Job instance ID.
    shared_ptr<string> jobId_ {};
    // Job variables.
    shared_ptr<vector<LocalVariable>> localVariables_ {};
    // Job instance log configuration.
    shared_ptr<Logging> logging_ {};
    // Job instance resource information.
    shared_ptr<JobMetric> metric_ {};
    // Modification time.
    shared_ptr<string> modifiedAt_ {};
    // Modifier.
    shared_ptr<string> modifier_ {};
    // Modifier name.
    shared_ptr<string> modifierName_ {};
    // The name of the namespace.
    shared_ptr<string> namespace_ {};
    // Job instance startup policy.
    shared_ptr<DeploymentRestoreStrategy> restoreStrategy_ {};
    // If the job instance runs on a Session cluster, this shows the Session cluster name; otherwise, it is null.
    shared_ptr<string> sessionClusterName_ {};
    // Job instance start time.
    shared_ptr<int64_t> startTime_ {};
    // Job instance status.
    shared_ptr<JobStatus> status_ {};
    // Stream mode resource settings.
    shared_ptr<StreamingResourceSetting> streamingResourceSetting_ {};
    // User job parameter settings.
    Darabonba::Json userFlinkConf_ {};
    // Workspace.
    shared_ptr<string> workspace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
