// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateJobRequestCodeSource.hpp>
#include <alibabacloud/models/CredentialConfig.hpp>
#include <vector>
#include <alibabacloud/models/CreateJobRequestDataSources.hpp>
#include <alibabacloud/models/JobElasticSpec.hpp>
#include <map>
#include <alibabacloud/models/JobSpec.hpp>
#include <alibabacloud/models/JobSettings.hpp>
#include <alibabacloud/models/CreateJobRequestUserVpc.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class CreateJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(CodeSource, codeSource_);
      DARABONBA_PTR_TO_JSON(CredentialConfig, credentialConfig_);
      DARABONBA_PTR_TO_JSON(DataSources, dataSources_);
      DARABONBA_PTR_TO_JSON(DebuggerConfigContent, debuggerConfigContent_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(ElasticSpec, elasticSpec_);
      DARABONBA_PTR_TO_JSON(Envs, envs_);
      DARABONBA_PTR_TO_JSON(JobMaxRunningTimeMinutes, jobMaxRunningTimeMinutes_);
      DARABONBA_PTR_TO_JSON(JobSpecs, jobSpecs_);
      DARABONBA_PTR_TO_JSON(JobType, jobType_);
      DARABONBA_PTR_TO_JSON(Options, options_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(Settings, settings_);
      DARABONBA_PTR_TO_JSON(SuccessPolicy, successPolicy_);
      DARABONBA_PTR_TO_JSON(ThirdpartyLibDir, thirdpartyLibDir_);
      DARABONBA_PTR_TO_JSON(ThirdpartyLibs, thirdpartyLibs_);
      DARABONBA_PTR_TO_JSON(UserCommand, userCommand_);
      DARABONBA_PTR_TO_JSON(UserVpc, userVpc_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(CodeSource, codeSource_);
      DARABONBA_PTR_FROM_JSON(CredentialConfig, credentialConfig_);
      DARABONBA_PTR_FROM_JSON(DataSources, dataSources_);
      DARABONBA_PTR_FROM_JSON(DebuggerConfigContent, debuggerConfigContent_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(ElasticSpec, elasticSpec_);
      DARABONBA_PTR_FROM_JSON(Envs, envs_);
      DARABONBA_PTR_FROM_JSON(JobMaxRunningTimeMinutes, jobMaxRunningTimeMinutes_);
      DARABONBA_PTR_FROM_JSON(JobSpecs, jobSpecs_);
      DARABONBA_PTR_FROM_JSON(JobType, jobType_);
      DARABONBA_PTR_FROM_JSON(Options, options_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(Settings, settings_);
      DARABONBA_PTR_FROM_JSON(SuccessPolicy, successPolicy_);
      DARABONBA_PTR_FROM_JSON(ThirdpartyLibDir, thirdpartyLibDir_);
      DARABONBA_PTR_FROM_JSON(ThirdpartyLibs, thirdpartyLibs_);
      DARABONBA_PTR_FROM_JSON(UserCommand, userCommand_);
      DARABONBA_PTR_FROM_JSON(UserVpc, userVpc_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateJobRequest() = default ;
    CreateJobRequest(const CreateJobRequest &) = default ;
    CreateJobRequest(CreateJobRequest &&) = default ;
    CreateJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateJobRequest() = default ;
    CreateJobRequest& operator=(const CreateJobRequest &) = default ;
    CreateJobRequest& operator=(CreateJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessibility_ == nullptr
        && return this->codeSource_ == nullptr && return this->credentialConfig_ == nullptr && return this->dataSources_ == nullptr && return this->debuggerConfigContent_ == nullptr && return this->displayName_ == nullptr
        && return this->elasticSpec_ == nullptr && return this->envs_ == nullptr && return this->jobMaxRunningTimeMinutes_ == nullptr && return this->jobSpecs_ == nullptr && return this->jobType_ == nullptr
        && return this->options_ == nullptr && return this->priority_ == nullptr && return this->resourceId_ == nullptr && return this->settings_ == nullptr && return this->successPolicy_ == nullptr
        && return this->thirdpartyLibDir_ == nullptr && return this->thirdpartyLibs_ == nullptr && return this->userCommand_ == nullptr && return this->userVpc_ == nullptr && return this->workspaceId_ == nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string accessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline CreateJobRequest& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // codeSource Field Functions 
    bool hasCodeSource() const { return this->codeSource_ != nullptr;};
    void deleteCodeSource() { this->codeSource_ = nullptr;};
    inline const CreateJobRequestCodeSource & codeSource() const { DARABONBA_PTR_GET_CONST(codeSource_, CreateJobRequestCodeSource) };
    inline CreateJobRequestCodeSource codeSource() { DARABONBA_PTR_GET(codeSource_, CreateJobRequestCodeSource) };
    inline CreateJobRequest& setCodeSource(const CreateJobRequestCodeSource & codeSource) { DARABONBA_PTR_SET_VALUE(codeSource_, codeSource) };
    inline CreateJobRequest& setCodeSource(CreateJobRequestCodeSource && codeSource) { DARABONBA_PTR_SET_RVALUE(codeSource_, codeSource) };


    // credentialConfig Field Functions 
    bool hasCredentialConfig() const { return this->credentialConfig_ != nullptr;};
    void deleteCredentialConfig() { this->credentialConfig_ = nullptr;};
    inline const CredentialConfig & credentialConfig() const { DARABONBA_PTR_GET_CONST(credentialConfig_, CredentialConfig) };
    inline CredentialConfig credentialConfig() { DARABONBA_PTR_GET(credentialConfig_, CredentialConfig) };
    inline CreateJobRequest& setCredentialConfig(const CredentialConfig & credentialConfig) { DARABONBA_PTR_SET_VALUE(credentialConfig_, credentialConfig) };
    inline CreateJobRequest& setCredentialConfig(CredentialConfig && credentialConfig) { DARABONBA_PTR_SET_RVALUE(credentialConfig_, credentialConfig) };


    // dataSources Field Functions 
    bool hasDataSources() const { return this->dataSources_ != nullptr;};
    void deleteDataSources() { this->dataSources_ = nullptr;};
    inline const vector<CreateJobRequestDataSources> & dataSources() const { DARABONBA_PTR_GET_CONST(dataSources_, vector<CreateJobRequestDataSources>) };
    inline vector<CreateJobRequestDataSources> dataSources() { DARABONBA_PTR_GET(dataSources_, vector<CreateJobRequestDataSources>) };
    inline CreateJobRequest& setDataSources(const vector<CreateJobRequestDataSources> & dataSources) { DARABONBA_PTR_SET_VALUE(dataSources_, dataSources) };
    inline CreateJobRequest& setDataSources(vector<CreateJobRequestDataSources> && dataSources) { DARABONBA_PTR_SET_RVALUE(dataSources_, dataSources) };


    // debuggerConfigContent Field Functions 
    bool hasDebuggerConfigContent() const { return this->debuggerConfigContent_ != nullptr;};
    void deleteDebuggerConfigContent() { this->debuggerConfigContent_ = nullptr;};
    inline string debuggerConfigContent() const { DARABONBA_PTR_GET_DEFAULT(debuggerConfigContent_, "") };
    inline CreateJobRequest& setDebuggerConfigContent(string debuggerConfigContent) { DARABONBA_PTR_SET_VALUE(debuggerConfigContent_, debuggerConfigContent) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline CreateJobRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // elasticSpec Field Functions 
    bool hasElasticSpec() const { return this->elasticSpec_ != nullptr;};
    void deleteElasticSpec() { this->elasticSpec_ = nullptr;};
    inline const JobElasticSpec & elasticSpec() const { DARABONBA_PTR_GET_CONST(elasticSpec_, JobElasticSpec) };
    inline JobElasticSpec elasticSpec() { DARABONBA_PTR_GET(elasticSpec_, JobElasticSpec) };
    inline CreateJobRequest& setElasticSpec(const JobElasticSpec & elasticSpec) { DARABONBA_PTR_SET_VALUE(elasticSpec_, elasticSpec) };
    inline CreateJobRequest& setElasticSpec(JobElasticSpec && elasticSpec) { DARABONBA_PTR_SET_RVALUE(elasticSpec_, elasticSpec) };


    // envs Field Functions 
    bool hasEnvs() const { return this->envs_ != nullptr;};
    void deleteEnvs() { this->envs_ = nullptr;};
    inline const map<string, string> & envs() const { DARABONBA_PTR_GET_CONST(envs_, map<string, string>) };
    inline map<string, string> envs() { DARABONBA_PTR_GET(envs_, map<string, string>) };
    inline CreateJobRequest& setEnvs(const map<string, string> & envs) { DARABONBA_PTR_SET_VALUE(envs_, envs) };
    inline CreateJobRequest& setEnvs(map<string, string> && envs) { DARABONBA_PTR_SET_RVALUE(envs_, envs) };


    // jobMaxRunningTimeMinutes Field Functions 
    bool hasJobMaxRunningTimeMinutes() const { return this->jobMaxRunningTimeMinutes_ != nullptr;};
    void deleteJobMaxRunningTimeMinutes() { this->jobMaxRunningTimeMinutes_ = nullptr;};
    inline int64_t jobMaxRunningTimeMinutes() const { DARABONBA_PTR_GET_DEFAULT(jobMaxRunningTimeMinutes_, 0L) };
    inline CreateJobRequest& setJobMaxRunningTimeMinutes(int64_t jobMaxRunningTimeMinutes) { DARABONBA_PTR_SET_VALUE(jobMaxRunningTimeMinutes_, jobMaxRunningTimeMinutes) };


    // jobSpecs Field Functions 
    bool hasJobSpecs() const { return this->jobSpecs_ != nullptr;};
    void deleteJobSpecs() { this->jobSpecs_ = nullptr;};
    inline const vector<JobSpec> & jobSpecs() const { DARABONBA_PTR_GET_CONST(jobSpecs_, vector<JobSpec>) };
    inline vector<JobSpec> jobSpecs() { DARABONBA_PTR_GET(jobSpecs_, vector<JobSpec>) };
    inline CreateJobRequest& setJobSpecs(const vector<JobSpec> & jobSpecs) { DARABONBA_PTR_SET_VALUE(jobSpecs_, jobSpecs) };
    inline CreateJobRequest& setJobSpecs(vector<JobSpec> && jobSpecs) { DARABONBA_PTR_SET_RVALUE(jobSpecs_, jobSpecs) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string jobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline CreateJobRequest& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline string options() const { DARABONBA_PTR_GET_DEFAULT(options_, "") };
    inline CreateJobRequest& setOptions(string options) { DARABONBA_PTR_SET_VALUE(options_, options) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline CreateJobRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline CreateJobRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // settings Field Functions 
    bool hasSettings() const { return this->settings_ != nullptr;};
    void deleteSettings() { this->settings_ = nullptr;};
    inline const JobSettings & settings() const { DARABONBA_PTR_GET_CONST(settings_, JobSettings) };
    inline JobSettings settings() { DARABONBA_PTR_GET(settings_, JobSettings) };
    inline CreateJobRequest& setSettings(const JobSettings & settings) { DARABONBA_PTR_SET_VALUE(settings_, settings) };
    inline CreateJobRequest& setSettings(JobSettings && settings) { DARABONBA_PTR_SET_RVALUE(settings_, settings) };


    // successPolicy Field Functions 
    bool hasSuccessPolicy() const { return this->successPolicy_ != nullptr;};
    void deleteSuccessPolicy() { this->successPolicy_ = nullptr;};
    inline string successPolicy() const { DARABONBA_PTR_GET_DEFAULT(successPolicy_, "") };
    inline CreateJobRequest& setSuccessPolicy(string successPolicy) { DARABONBA_PTR_SET_VALUE(successPolicy_, successPolicy) };


    // thirdpartyLibDir Field Functions 
    bool hasThirdpartyLibDir() const { return this->thirdpartyLibDir_ != nullptr;};
    void deleteThirdpartyLibDir() { this->thirdpartyLibDir_ = nullptr;};
    inline string thirdpartyLibDir() const { DARABONBA_PTR_GET_DEFAULT(thirdpartyLibDir_, "") };
    inline CreateJobRequest& setThirdpartyLibDir(string thirdpartyLibDir) { DARABONBA_PTR_SET_VALUE(thirdpartyLibDir_, thirdpartyLibDir) };


    // thirdpartyLibs Field Functions 
    bool hasThirdpartyLibs() const { return this->thirdpartyLibs_ != nullptr;};
    void deleteThirdpartyLibs() { this->thirdpartyLibs_ = nullptr;};
    inline const vector<string> & thirdpartyLibs() const { DARABONBA_PTR_GET_CONST(thirdpartyLibs_, vector<string>) };
    inline vector<string> thirdpartyLibs() { DARABONBA_PTR_GET(thirdpartyLibs_, vector<string>) };
    inline CreateJobRequest& setThirdpartyLibs(const vector<string> & thirdpartyLibs) { DARABONBA_PTR_SET_VALUE(thirdpartyLibs_, thirdpartyLibs) };
    inline CreateJobRequest& setThirdpartyLibs(vector<string> && thirdpartyLibs) { DARABONBA_PTR_SET_RVALUE(thirdpartyLibs_, thirdpartyLibs) };


    // userCommand Field Functions 
    bool hasUserCommand() const { return this->userCommand_ != nullptr;};
    void deleteUserCommand() { this->userCommand_ = nullptr;};
    inline string userCommand() const { DARABONBA_PTR_GET_DEFAULT(userCommand_, "") };
    inline CreateJobRequest& setUserCommand(string userCommand) { DARABONBA_PTR_SET_VALUE(userCommand_, userCommand) };


    // userVpc Field Functions 
    bool hasUserVpc() const { return this->userVpc_ != nullptr;};
    void deleteUserVpc() { this->userVpc_ = nullptr;};
    inline const CreateJobRequestUserVpc & userVpc() const { DARABONBA_PTR_GET_CONST(userVpc_, CreateJobRequestUserVpc) };
    inline CreateJobRequestUserVpc userVpc() { DARABONBA_PTR_GET(userVpc_, CreateJobRequestUserVpc) };
    inline CreateJobRequest& setUserVpc(const CreateJobRequestUserVpc & userVpc) { DARABONBA_PTR_SET_VALUE(userVpc_, userVpc) };
    inline CreateJobRequest& setUserVpc(CreateJobRequestUserVpc && userVpc) { DARABONBA_PTR_SET_RVALUE(userVpc_, userVpc) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateJobRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The job visibility. Valid values:
    // 
    // *   PUBLIC: The job is visible to all members in the workspace.
    // *   PRIVATE: The job is visible only to you and the administrator of the workspace.
    std::shared_ptr<string> accessibility_ = nullptr;
    // The code source of the job. Before the node of the job runs, DLC automatically downloads the configured code from the code source and mounts the code to the local path of the container.
    std::shared_ptr<CreateJobRequestCodeSource> codeSource_ = nullptr;
    // The access credential configuration.
    std::shared_ptr<CredentialConfig> credentialConfig_ = nullptr;
    // The data sources for job running.
    std::shared_ptr<vector<CreateJobRequestDataSources>> dataSources_ = nullptr;
    // This parameter is not supported.
    std::shared_ptr<string> debuggerConfigContent_ = nullptr;
    // The job name. The name must be in the following format:
    // 
    // *   The name must be 1 to 256 characters in length.
    // *   The name can contain digits, letters, underscores (_), periods (.), and hyphens (-).
    // 
    // This parameter is required.
    std::shared_ptr<string> displayName_ = nullptr;
    // This parameter is not supported.
    std::shared_ptr<JobElasticSpec> elasticSpec_ = nullptr;
    // The environment variables.
    std::shared_ptr<map<string, string>> envs_ = nullptr;
    // The maximum running duration of the job. Unit: minutes.
    std::shared_ptr<int64_t> jobMaxRunningTimeMinutes_ = nullptr;
    // **JobSpecs** describes the configurations for job running, such as the image address, startup command, node resource declaration, and number of replicas.
    // 
    // A DLC job consists of different types of nodes. If nodes of the same type have exactly the same configuration, the configuration is called JobSpec. **JobSpecs** specifies the configurations of all types of nodes. The value is of the array type.
    // 
    // This parameter is required.
    std::shared_ptr<vector<JobSpec>> jobSpecs_ = nullptr;
    // The job type. The value is case-sensitive. The following job types are supported:
    // 
    // *   TFJob
    // *   PyTorchJob
    // *   MPIJob
    // *   XGBoostJob
    // *   OneFlowJob
    // *   ElasticBatchJob
    // *   SlurmJob
    // *   RayJob
    // 
    // Valid values and corresponding frameworks:
    // 
    // *   OneFlowJob: OneFlow.
    // *   PyTorchJob: PyTorch.
    // *   SlurmJob: Slurm.
    // *   XGBoostJob: XGBoost.
    // *   ElasticBatchJob: ElasticBatch.
    // *   MPIJob: MPIJob.
    // *   TFJob: Tensorflow.
    // *   RayJob: Ray.
    // 
    // This parameter is required.
    std::shared_ptr<string> jobType_ = nullptr;
    // The additional configuration of the job. You can use this parameter to adjust the behavior of the attached data source. For example, if the attached data source of the job is of the OSS type, you can use this parameter to add the following configurations to override the default parameters of JindoFS: `fs.oss.download.thread.concurrency=4,fs.oss.download.queue.size=16`.
    std::shared_ptr<string> options_ = nullptr;
    // The priority of the job. Default value: 1. Valid values: 1 to 9.
    // 
    // *   1 is the lowest priority.
    // *   9: the highest priority.
    std::shared_ptr<int32_t> priority_ = nullptr;
    // The ID of the resource group. This parameter is optional.
    // 
    // *   If you leave this parameter empty, the job is submitted to a public resource group.
    // *   If a resource quota is bound to the current workspace, you can specify the resource quota ID. For more information about how to query the resource quota ID, see [Manage resource quotas](https://help.aliyun.com/document_detail/2651299.html).
    std::shared_ptr<string> resourceId_ = nullptr;
    // The additional parameter configurations of the job.
    std::shared_ptr<JobSettings> settings_ = nullptr;
    // The policy that is used to check whether a distributed multi-node job is successful. Only TensorFlow distributed multi-node jobs are supported.
    // 
    // *   ChiefWorker: If you use this policy, the job is considered successful when the pod on the chief node completes operations.
    // *   AllWorkers (default): If you use this policy, the job is considered successful when all worker nodes complete operations.
    std::shared_ptr<string> successPolicy_ = nullptr;
    // The folder in which the third-party Python library file requirements.txt is stored. Before the startup command specified by the UserCommand parameter is run on each node, DLC fetches the requirements.txt file from the folder and runs `pip install -r` to install the required package and library.
    std::shared_ptr<string> thirdpartyLibDir_ = nullptr;
    // The third-party Python libraries to be installed.
    std::shared_ptr<vector<string>> thirdpartyLibs_ = nullptr;
    // The startup command for all nodes of the job.
    // 
    // This parameter is required.
    std::shared_ptr<string> userCommand_ = nullptr;
    // The VPC settings.
    std::shared_ptr<CreateJobRequestUserVpc> userVpc_ = nullptr;
    // The workspace ID.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
