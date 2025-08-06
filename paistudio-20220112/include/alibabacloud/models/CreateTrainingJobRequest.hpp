// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRAININGJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETRAININGJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateTrainingJobRequestComputeResource.hpp>
#include <map>
#include <alibabacloud/models/CreateTrainingJobRequestExperimentConfig.hpp>
#include <vector>
#include <alibabacloud/models/CreateTrainingJobRequestHyperParameters.hpp>
#include <alibabacloud/models/CreateTrainingJobRequestInputChannels.hpp>
#include <alibabacloud/models/CreateTrainingJobRequestLabels.hpp>
#include <alibabacloud/models/CreateTrainingJobRequestOutputChannels.hpp>
#include <alibabacloud/models/CreateTrainingJobRequestScheduler.hpp>
#include <alibabacloud/models/CreateTrainingJobRequestUserVpc.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class CreateTrainingJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTrainingJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlgorithmName, algorithmName_);
      DARABONBA_PTR_TO_JSON(AlgorithmProvider, algorithmProvider_);
      DARABONBA_PTR_TO_JSON(AlgorithmSpec, algorithmSpec_);
      DARABONBA_PTR_TO_JSON(AlgorithmVersion, algorithmVersion_);
      DARABONBA_PTR_TO_JSON(CodeDir, codeDir_);
      DARABONBA_PTR_TO_JSON(ComputeResource, computeResource_);
      DARABONBA_PTR_TO_JSON(Environments, environments_);
      DARABONBA_PTR_TO_JSON(ExperimentConfig, experimentConfig_);
      DARABONBA_PTR_TO_JSON(HyperParameters, hyperParameters_);
      DARABONBA_PTR_TO_JSON(InputChannels, inputChannels_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(OutputChannels, outputChannels_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(PythonRequirements, pythonRequirements_);
      DARABONBA_PTR_TO_JSON(RoleArn, roleArn_);
      DARABONBA_PTR_TO_JSON(Scheduler, scheduler_);
      DARABONBA_PTR_TO_JSON(Settings, settings_);
      DARABONBA_PTR_TO_JSON(TrainingJobDescription, trainingJobDescription_);
      DARABONBA_PTR_TO_JSON(TrainingJobName, trainingJobName_);
      DARABONBA_PTR_TO_JSON(UserVpc, userVpc_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTrainingJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlgorithmName, algorithmName_);
      DARABONBA_PTR_FROM_JSON(AlgorithmProvider, algorithmProvider_);
      DARABONBA_PTR_FROM_JSON(AlgorithmSpec, algorithmSpec_);
      DARABONBA_PTR_FROM_JSON(AlgorithmVersion, algorithmVersion_);
      DARABONBA_PTR_FROM_JSON(CodeDir, codeDir_);
      DARABONBA_PTR_FROM_JSON(ComputeResource, computeResource_);
      DARABONBA_PTR_FROM_JSON(Environments, environments_);
      DARABONBA_PTR_FROM_JSON(ExperimentConfig, experimentConfig_);
      DARABONBA_PTR_FROM_JSON(HyperParameters, hyperParameters_);
      DARABONBA_PTR_FROM_JSON(InputChannels, inputChannels_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(OutputChannels, outputChannels_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(PythonRequirements, pythonRequirements_);
      DARABONBA_PTR_FROM_JSON(RoleArn, roleArn_);
      DARABONBA_PTR_FROM_JSON(Scheduler, scheduler_);
      DARABONBA_PTR_FROM_JSON(Settings, settings_);
      DARABONBA_PTR_FROM_JSON(TrainingJobDescription, trainingJobDescription_);
      DARABONBA_PTR_FROM_JSON(TrainingJobName, trainingJobName_);
      DARABONBA_PTR_FROM_JSON(UserVpc, userVpc_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateTrainingJobRequest() = default ;
    CreateTrainingJobRequest(const CreateTrainingJobRequest &) = default ;
    CreateTrainingJobRequest(CreateTrainingJobRequest &&) = default ;
    CreateTrainingJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTrainingJobRequest() = default ;
    CreateTrainingJobRequest& operator=(const CreateTrainingJobRequest &) = default ;
    CreateTrainingJobRequest& operator=(CreateTrainingJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->algorithmName_ != nullptr
        && this->algorithmProvider_ != nullptr && this->algorithmSpec_ != nullptr && this->algorithmVersion_ != nullptr && this->codeDir_ != nullptr && this->computeResource_ != nullptr
        && this->environments_ != nullptr && this->experimentConfig_ != nullptr && this->hyperParameters_ != nullptr && this->inputChannels_ != nullptr && this->labels_ != nullptr
        && this->outputChannels_ != nullptr && this->priority_ != nullptr && this->pythonRequirements_ != nullptr && this->roleArn_ != nullptr && this->scheduler_ != nullptr
        && this->settings_ != nullptr && this->trainingJobDescription_ != nullptr && this->trainingJobName_ != nullptr && this->userVpc_ != nullptr && this->workspaceId_ != nullptr; };
    // algorithmName Field Functions 
    bool hasAlgorithmName() const { return this->algorithmName_ != nullptr;};
    void deleteAlgorithmName() { this->algorithmName_ = nullptr;};
    inline string algorithmName() const { DARABONBA_PTR_GET_DEFAULT(algorithmName_, "") };
    inline CreateTrainingJobRequest& setAlgorithmName(string algorithmName) { DARABONBA_PTR_SET_VALUE(algorithmName_, algorithmName) };


    // algorithmProvider Field Functions 
    bool hasAlgorithmProvider() const { return this->algorithmProvider_ != nullptr;};
    void deleteAlgorithmProvider() { this->algorithmProvider_ = nullptr;};
    inline string algorithmProvider() const { DARABONBA_PTR_GET_DEFAULT(algorithmProvider_, "") };
    inline CreateTrainingJobRequest& setAlgorithmProvider(string algorithmProvider) { DARABONBA_PTR_SET_VALUE(algorithmProvider_, algorithmProvider) };


    // algorithmSpec Field Functions 
    bool hasAlgorithmSpec() const { return this->algorithmSpec_ != nullptr;};
    void deleteAlgorithmSpec() { this->algorithmSpec_ = nullptr;};
    inline const AlgorithmSpec & algorithmSpec() const { DARABONBA_PTR_GET_CONST(algorithmSpec_, AlgorithmSpec) };
    inline AlgorithmSpec algorithmSpec() { DARABONBA_PTR_GET(algorithmSpec_, AlgorithmSpec) };
    inline CreateTrainingJobRequest& setAlgorithmSpec(const AlgorithmSpec & algorithmSpec) { DARABONBA_PTR_SET_VALUE(algorithmSpec_, algorithmSpec) };
    inline CreateTrainingJobRequest& setAlgorithmSpec(AlgorithmSpec && algorithmSpec) { DARABONBA_PTR_SET_RVALUE(algorithmSpec_, algorithmSpec) };


    // algorithmVersion Field Functions 
    bool hasAlgorithmVersion() const { return this->algorithmVersion_ != nullptr;};
    void deleteAlgorithmVersion() { this->algorithmVersion_ = nullptr;};
    inline string algorithmVersion() const { DARABONBA_PTR_GET_DEFAULT(algorithmVersion_, "") };
    inline CreateTrainingJobRequest& setAlgorithmVersion(string algorithmVersion) { DARABONBA_PTR_SET_VALUE(algorithmVersion_, algorithmVersion) };


    // codeDir Field Functions 
    bool hasCodeDir() const { return this->codeDir_ != nullptr;};
    void deleteCodeDir() { this->codeDir_ = nullptr;};
    inline const Location & codeDir() const { DARABONBA_PTR_GET_CONST(codeDir_, Location) };
    inline Location codeDir() { DARABONBA_PTR_GET(codeDir_, Location) };
    inline CreateTrainingJobRequest& setCodeDir(const Location & codeDir) { DARABONBA_PTR_SET_VALUE(codeDir_, codeDir) };
    inline CreateTrainingJobRequest& setCodeDir(Location && codeDir) { DARABONBA_PTR_SET_RVALUE(codeDir_, codeDir) };


    // computeResource Field Functions 
    bool hasComputeResource() const { return this->computeResource_ != nullptr;};
    void deleteComputeResource() { this->computeResource_ = nullptr;};
    inline const CreateTrainingJobRequestComputeResource & computeResource() const { DARABONBA_PTR_GET_CONST(computeResource_, CreateTrainingJobRequestComputeResource) };
    inline CreateTrainingJobRequestComputeResource computeResource() { DARABONBA_PTR_GET(computeResource_, CreateTrainingJobRequestComputeResource) };
    inline CreateTrainingJobRequest& setComputeResource(const CreateTrainingJobRequestComputeResource & computeResource) { DARABONBA_PTR_SET_VALUE(computeResource_, computeResource) };
    inline CreateTrainingJobRequest& setComputeResource(CreateTrainingJobRequestComputeResource && computeResource) { DARABONBA_PTR_SET_RVALUE(computeResource_, computeResource) };


    // environments Field Functions 
    bool hasEnvironments() const { return this->environments_ != nullptr;};
    void deleteEnvironments() { this->environments_ = nullptr;};
    inline const map<string, string> & environments() const { DARABONBA_PTR_GET_CONST(environments_, map<string, string>) };
    inline map<string, string> environments() { DARABONBA_PTR_GET(environments_, map<string, string>) };
    inline CreateTrainingJobRequest& setEnvironments(const map<string, string> & environments) { DARABONBA_PTR_SET_VALUE(environments_, environments) };
    inline CreateTrainingJobRequest& setEnvironments(map<string, string> && environments) { DARABONBA_PTR_SET_RVALUE(environments_, environments) };


    // experimentConfig Field Functions 
    bool hasExperimentConfig() const { return this->experimentConfig_ != nullptr;};
    void deleteExperimentConfig() { this->experimentConfig_ = nullptr;};
    inline const CreateTrainingJobRequestExperimentConfig & experimentConfig() const { DARABONBA_PTR_GET_CONST(experimentConfig_, CreateTrainingJobRequestExperimentConfig) };
    inline CreateTrainingJobRequestExperimentConfig experimentConfig() { DARABONBA_PTR_GET(experimentConfig_, CreateTrainingJobRequestExperimentConfig) };
    inline CreateTrainingJobRequest& setExperimentConfig(const CreateTrainingJobRequestExperimentConfig & experimentConfig) { DARABONBA_PTR_SET_VALUE(experimentConfig_, experimentConfig) };
    inline CreateTrainingJobRequest& setExperimentConfig(CreateTrainingJobRequestExperimentConfig && experimentConfig) { DARABONBA_PTR_SET_RVALUE(experimentConfig_, experimentConfig) };


    // hyperParameters Field Functions 
    bool hasHyperParameters() const { return this->hyperParameters_ != nullptr;};
    void deleteHyperParameters() { this->hyperParameters_ = nullptr;};
    inline const vector<CreateTrainingJobRequestHyperParameters> & hyperParameters() const { DARABONBA_PTR_GET_CONST(hyperParameters_, vector<CreateTrainingJobRequestHyperParameters>) };
    inline vector<CreateTrainingJobRequestHyperParameters> hyperParameters() { DARABONBA_PTR_GET(hyperParameters_, vector<CreateTrainingJobRequestHyperParameters>) };
    inline CreateTrainingJobRequest& setHyperParameters(const vector<CreateTrainingJobRequestHyperParameters> & hyperParameters) { DARABONBA_PTR_SET_VALUE(hyperParameters_, hyperParameters) };
    inline CreateTrainingJobRequest& setHyperParameters(vector<CreateTrainingJobRequestHyperParameters> && hyperParameters) { DARABONBA_PTR_SET_RVALUE(hyperParameters_, hyperParameters) };


    // inputChannels Field Functions 
    bool hasInputChannels() const { return this->inputChannels_ != nullptr;};
    void deleteInputChannels() { this->inputChannels_ = nullptr;};
    inline const vector<CreateTrainingJobRequestInputChannels> & inputChannels() const { DARABONBA_PTR_GET_CONST(inputChannels_, vector<CreateTrainingJobRequestInputChannels>) };
    inline vector<CreateTrainingJobRequestInputChannels> inputChannels() { DARABONBA_PTR_GET(inputChannels_, vector<CreateTrainingJobRequestInputChannels>) };
    inline CreateTrainingJobRequest& setInputChannels(const vector<CreateTrainingJobRequestInputChannels> & inputChannels) { DARABONBA_PTR_SET_VALUE(inputChannels_, inputChannels) };
    inline CreateTrainingJobRequest& setInputChannels(vector<CreateTrainingJobRequestInputChannels> && inputChannels) { DARABONBA_PTR_SET_RVALUE(inputChannels_, inputChannels) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<CreateTrainingJobRequestLabels> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<CreateTrainingJobRequestLabels>) };
    inline vector<CreateTrainingJobRequestLabels> labels() { DARABONBA_PTR_GET(labels_, vector<CreateTrainingJobRequestLabels>) };
    inline CreateTrainingJobRequest& setLabels(const vector<CreateTrainingJobRequestLabels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline CreateTrainingJobRequest& setLabels(vector<CreateTrainingJobRequestLabels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // outputChannels Field Functions 
    bool hasOutputChannels() const { return this->outputChannels_ != nullptr;};
    void deleteOutputChannels() { this->outputChannels_ = nullptr;};
    inline const vector<CreateTrainingJobRequestOutputChannels> & outputChannels() const { DARABONBA_PTR_GET_CONST(outputChannels_, vector<CreateTrainingJobRequestOutputChannels>) };
    inline vector<CreateTrainingJobRequestOutputChannels> outputChannels() { DARABONBA_PTR_GET(outputChannels_, vector<CreateTrainingJobRequestOutputChannels>) };
    inline CreateTrainingJobRequest& setOutputChannels(const vector<CreateTrainingJobRequestOutputChannels> & outputChannels) { DARABONBA_PTR_SET_VALUE(outputChannels_, outputChannels) };
    inline CreateTrainingJobRequest& setOutputChannels(vector<CreateTrainingJobRequestOutputChannels> && outputChannels) { DARABONBA_PTR_SET_RVALUE(outputChannels_, outputChannels) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline CreateTrainingJobRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // pythonRequirements Field Functions 
    bool hasPythonRequirements() const { return this->pythonRequirements_ != nullptr;};
    void deletePythonRequirements() { this->pythonRequirements_ = nullptr;};
    inline const vector<string> & pythonRequirements() const { DARABONBA_PTR_GET_CONST(pythonRequirements_, vector<string>) };
    inline vector<string> pythonRequirements() { DARABONBA_PTR_GET(pythonRequirements_, vector<string>) };
    inline CreateTrainingJobRequest& setPythonRequirements(const vector<string> & pythonRequirements) { DARABONBA_PTR_SET_VALUE(pythonRequirements_, pythonRequirements) };
    inline CreateTrainingJobRequest& setPythonRequirements(vector<string> && pythonRequirements) { DARABONBA_PTR_SET_RVALUE(pythonRequirements_, pythonRequirements) };


    // roleArn Field Functions 
    bool hasRoleArn() const { return this->roleArn_ != nullptr;};
    void deleteRoleArn() { this->roleArn_ = nullptr;};
    inline string roleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
    inline CreateTrainingJobRequest& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


    // scheduler Field Functions 
    bool hasScheduler() const { return this->scheduler_ != nullptr;};
    void deleteScheduler() { this->scheduler_ = nullptr;};
    inline const CreateTrainingJobRequestScheduler & scheduler() const { DARABONBA_PTR_GET_CONST(scheduler_, CreateTrainingJobRequestScheduler) };
    inline CreateTrainingJobRequestScheduler scheduler() { DARABONBA_PTR_GET(scheduler_, CreateTrainingJobRequestScheduler) };
    inline CreateTrainingJobRequest& setScheduler(const CreateTrainingJobRequestScheduler & scheduler) { DARABONBA_PTR_SET_VALUE(scheduler_, scheduler) };
    inline CreateTrainingJobRequest& setScheduler(CreateTrainingJobRequestScheduler && scheduler) { DARABONBA_PTR_SET_RVALUE(scheduler_, scheduler) };


    // settings Field Functions 
    bool hasSettings() const { return this->settings_ != nullptr;};
    void deleteSettings() { this->settings_ = nullptr;};
    inline const JobSettings & settings() const { DARABONBA_PTR_GET_CONST(settings_, JobSettings) };
    inline JobSettings settings() { DARABONBA_PTR_GET(settings_, JobSettings) };
    inline CreateTrainingJobRequest& setSettings(const JobSettings & settings) { DARABONBA_PTR_SET_VALUE(settings_, settings) };
    inline CreateTrainingJobRequest& setSettings(JobSettings && settings) { DARABONBA_PTR_SET_RVALUE(settings_, settings) };


    // trainingJobDescription Field Functions 
    bool hasTrainingJobDescription() const { return this->trainingJobDescription_ != nullptr;};
    void deleteTrainingJobDescription() { this->trainingJobDescription_ = nullptr;};
    inline string trainingJobDescription() const { DARABONBA_PTR_GET_DEFAULT(trainingJobDescription_, "") };
    inline CreateTrainingJobRequest& setTrainingJobDescription(string trainingJobDescription) { DARABONBA_PTR_SET_VALUE(trainingJobDescription_, trainingJobDescription) };


    // trainingJobName Field Functions 
    bool hasTrainingJobName() const { return this->trainingJobName_ != nullptr;};
    void deleteTrainingJobName() { this->trainingJobName_ = nullptr;};
    inline string trainingJobName() const { DARABONBA_PTR_GET_DEFAULT(trainingJobName_, "") };
    inline CreateTrainingJobRequest& setTrainingJobName(string trainingJobName) { DARABONBA_PTR_SET_VALUE(trainingJobName_, trainingJobName) };


    // userVpc Field Functions 
    bool hasUserVpc() const { return this->userVpc_ != nullptr;};
    void deleteUserVpc() { this->userVpc_ = nullptr;};
    inline const CreateTrainingJobRequestUserVpc & userVpc() const { DARABONBA_PTR_GET_CONST(userVpc_, CreateTrainingJobRequestUserVpc) };
    inline CreateTrainingJobRequestUserVpc userVpc() { DARABONBA_PTR_GET(userVpc_, CreateTrainingJobRequestUserVpc) };
    inline CreateTrainingJobRequest& setUserVpc(const CreateTrainingJobRequestUserVpc & userVpc) { DARABONBA_PTR_SET_VALUE(userVpc_, userVpc) };
    inline CreateTrainingJobRequest& setUserVpc(CreateTrainingJobRequestUserVpc && userVpc) { DARABONBA_PTR_SET_RVALUE(userVpc_, userVpc) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateTrainingJobRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> algorithmName_ = nullptr;
    std::shared_ptr<string> algorithmProvider_ = nullptr;
    std::shared_ptr<AlgorithmSpec> algorithmSpec_ = nullptr;
    std::shared_ptr<string> algorithmVersion_ = nullptr;
    std::shared_ptr<Location> codeDir_ = nullptr;
    std::shared_ptr<CreateTrainingJobRequestComputeResource> computeResource_ = nullptr;
    std::shared_ptr<map<string, string>> environments_ = nullptr;
    std::shared_ptr<CreateTrainingJobRequestExperimentConfig> experimentConfig_ = nullptr;
    std::shared_ptr<vector<CreateTrainingJobRequestHyperParameters>> hyperParameters_ = nullptr;
    std::shared_ptr<vector<CreateTrainingJobRequestInputChannels>> inputChannels_ = nullptr;
    std::shared_ptr<vector<CreateTrainingJobRequestLabels>> labels_ = nullptr;
    std::shared_ptr<vector<CreateTrainingJobRequestOutputChannels>> outputChannels_ = nullptr;
    std::shared_ptr<int32_t> priority_ = nullptr;
    std::shared_ptr<vector<string>> pythonRequirements_ = nullptr;
    std::shared_ptr<string> roleArn_ = nullptr;
    std::shared_ptr<CreateTrainingJobRequestScheduler> scheduler_ = nullptr;
    std::shared_ptr<JobSettings> settings_ = nullptr;
    std::shared_ptr<string> trainingJobDescription_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> trainingJobName_ = nullptr;
    std::shared_ptr<CreateTrainingJobRequestUserVpc> userVpc_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
