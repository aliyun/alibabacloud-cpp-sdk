// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRAININGJOBSRESPONSEBODYTRAININGJOBS_HPP_
#define ALIBABACLOUD_MODELS_LISTTRAININGJOBSRESPONSEBODYTRAININGJOBS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListTrainingJobsResponseBodyTrainingJobsComputeResource.hpp>
#include <map>
#include <alibabacloud/models/ListTrainingJobsResponseBodyTrainingJobsExperimentConfig.hpp>
#include <vector>
#include <alibabacloud/models/ListTrainingJobsResponseBodyTrainingJobsHyperParameters.hpp>
#include <alibabacloud/models/ListTrainingJobsResponseBodyTrainingJobsInputChannels.hpp>
#include <alibabacloud/models/ListTrainingJobsResponseBodyTrainingJobsLabels.hpp>
#include <alibabacloud/models/ListTrainingJobsResponseBodyTrainingJobsOutputChannels.hpp>
#include <alibabacloud/models/ListTrainingJobsResponseBodyTrainingJobsScheduler.hpp>
#include <alibabacloud/models/ListTrainingJobsResponseBodyTrainingJobsStatusTransitions.hpp>
#include <alibabacloud/models/ListTrainingJobsResponseBodyTrainingJobsUserVpc.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class ListTrainingJobsResponseBodyTrainingJobs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTrainingJobsResponseBodyTrainingJobs& obj) { 
      DARABONBA_PTR_TO_JSON(AlgorithmName, algorithmName_);
      DARABONBA_PTR_TO_JSON(AlgorithmProvider, algorithmProvider_);
      DARABONBA_PTR_TO_JSON(AlgorithmVersion, algorithmVersion_);
      DARABONBA_PTR_TO_JSON(ComputeResource, computeResource_);
      DARABONBA_PTR_TO_JSON(DlcJobId, dlcJobId_);
      DARABONBA_PTR_TO_JSON(Environments, environments_);
      DARABONBA_PTR_TO_JSON(ExperimentConfig, experimentConfig_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_TO_JSON(HyperParameters, hyperParameters_);
      DARABONBA_PTR_TO_JSON(InputChannels, inputChannels_);
      DARABONBA_PTR_TO_JSON(IsTempAlgo, isTempAlgo_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(OutputChannels, outputChannels_);
      DARABONBA_PTR_TO_JSON(PythonRequirements, pythonRequirements_);
      DARABONBA_PTR_TO_JSON(ReasonCode, reasonCode_);
      DARABONBA_PTR_TO_JSON(ReasonMessage, reasonMessage_);
      DARABONBA_PTR_TO_JSON(RoleArn, roleArn_);
      DARABONBA_PTR_TO_JSON(Scheduler, scheduler_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusTransitions, statusTransitions_);
      DARABONBA_PTR_TO_JSON(TrainingJobDescription, trainingJobDescription_);
      DARABONBA_PTR_TO_JSON(TrainingJobId, trainingJobId_);
      DARABONBA_PTR_TO_JSON(TrainingJobName, trainingJobName_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserVpc, userVpc_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTrainingJobsResponseBodyTrainingJobs& obj) { 
      DARABONBA_PTR_FROM_JSON(AlgorithmName, algorithmName_);
      DARABONBA_PTR_FROM_JSON(AlgorithmProvider, algorithmProvider_);
      DARABONBA_PTR_FROM_JSON(AlgorithmVersion, algorithmVersion_);
      DARABONBA_PTR_FROM_JSON(ComputeResource, computeResource_);
      DARABONBA_PTR_FROM_JSON(DlcJobId, dlcJobId_);
      DARABONBA_PTR_FROM_JSON(Environments, environments_);
      DARABONBA_PTR_FROM_JSON(ExperimentConfig, experimentConfig_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_FROM_JSON(HyperParameters, hyperParameters_);
      DARABONBA_PTR_FROM_JSON(InputChannels, inputChannels_);
      DARABONBA_PTR_FROM_JSON(IsTempAlgo, isTempAlgo_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(OutputChannels, outputChannels_);
      DARABONBA_PTR_FROM_JSON(PythonRequirements, pythonRequirements_);
      DARABONBA_PTR_FROM_JSON(ReasonCode, reasonCode_);
      DARABONBA_PTR_FROM_JSON(ReasonMessage, reasonMessage_);
      DARABONBA_PTR_FROM_JSON(RoleArn, roleArn_);
      DARABONBA_PTR_FROM_JSON(Scheduler, scheduler_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusTransitions, statusTransitions_);
      DARABONBA_PTR_FROM_JSON(TrainingJobDescription, trainingJobDescription_);
      DARABONBA_PTR_FROM_JSON(TrainingJobId, trainingJobId_);
      DARABONBA_PTR_FROM_JSON(TrainingJobName, trainingJobName_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserVpc, userVpc_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ListTrainingJobsResponseBodyTrainingJobs() = default ;
    ListTrainingJobsResponseBodyTrainingJobs(const ListTrainingJobsResponseBodyTrainingJobs &) = default ;
    ListTrainingJobsResponseBodyTrainingJobs(ListTrainingJobsResponseBodyTrainingJobs &&) = default ;
    ListTrainingJobsResponseBodyTrainingJobs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTrainingJobsResponseBodyTrainingJobs() = default ;
    ListTrainingJobsResponseBodyTrainingJobs& operator=(const ListTrainingJobsResponseBodyTrainingJobs &) = default ;
    ListTrainingJobsResponseBodyTrainingJobs& operator=(ListTrainingJobsResponseBodyTrainingJobs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->algorithmName_ == nullptr
        && return this->algorithmProvider_ == nullptr && return this->algorithmVersion_ == nullptr && return this->computeResource_ == nullptr && return this->dlcJobId_ == nullptr && return this->environments_ == nullptr
        && return this->experimentConfig_ == nullptr && return this->gmtCreateTime_ == nullptr && return this->gmtModifiedTime_ == nullptr && return this->hyperParameters_ == nullptr && return this->inputChannels_ == nullptr
        && return this->isTempAlgo_ == nullptr && return this->labels_ == nullptr && return this->outputChannels_ == nullptr && return this->pythonRequirements_ == nullptr && return this->reasonCode_ == nullptr
        && return this->reasonMessage_ == nullptr && return this->roleArn_ == nullptr && return this->scheduler_ == nullptr && return this->status_ == nullptr && return this->statusTransitions_ == nullptr
        && return this->trainingJobDescription_ == nullptr && return this->trainingJobId_ == nullptr && return this->trainingJobName_ == nullptr && return this->userId_ == nullptr && return this->userVpc_ == nullptr
        && return this->workspaceId_ == nullptr; };
    // algorithmName Field Functions 
    bool hasAlgorithmName() const { return this->algorithmName_ != nullptr;};
    void deleteAlgorithmName() { this->algorithmName_ = nullptr;};
    inline string algorithmName() const { DARABONBA_PTR_GET_DEFAULT(algorithmName_, "") };
    inline ListTrainingJobsResponseBodyTrainingJobs& setAlgorithmName(string algorithmName) { DARABONBA_PTR_SET_VALUE(algorithmName_, algorithmName) };


    // algorithmProvider Field Functions 
    bool hasAlgorithmProvider() const { return this->algorithmProvider_ != nullptr;};
    void deleteAlgorithmProvider() { this->algorithmProvider_ = nullptr;};
    inline string algorithmProvider() const { DARABONBA_PTR_GET_DEFAULT(algorithmProvider_, "") };
    inline ListTrainingJobsResponseBodyTrainingJobs& setAlgorithmProvider(string algorithmProvider) { DARABONBA_PTR_SET_VALUE(algorithmProvider_, algorithmProvider) };


    // algorithmVersion Field Functions 
    bool hasAlgorithmVersion() const { return this->algorithmVersion_ != nullptr;};
    void deleteAlgorithmVersion() { this->algorithmVersion_ = nullptr;};
    inline string algorithmVersion() const { DARABONBA_PTR_GET_DEFAULT(algorithmVersion_, "") };
    inline ListTrainingJobsResponseBodyTrainingJobs& setAlgorithmVersion(string algorithmVersion) { DARABONBA_PTR_SET_VALUE(algorithmVersion_, algorithmVersion) };


    // computeResource Field Functions 
    bool hasComputeResource() const { return this->computeResource_ != nullptr;};
    void deleteComputeResource() { this->computeResource_ = nullptr;};
    inline const Models::ListTrainingJobsResponseBodyTrainingJobsComputeResource & computeResource() const { DARABONBA_PTR_GET_CONST(computeResource_, Models::ListTrainingJobsResponseBodyTrainingJobsComputeResource) };
    inline Models::ListTrainingJobsResponseBodyTrainingJobsComputeResource computeResource() { DARABONBA_PTR_GET(computeResource_, Models::ListTrainingJobsResponseBodyTrainingJobsComputeResource) };
    inline ListTrainingJobsResponseBodyTrainingJobs& setComputeResource(const Models::ListTrainingJobsResponseBodyTrainingJobsComputeResource & computeResource) { DARABONBA_PTR_SET_VALUE(computeResource_, computeResource) };
    inline ListTrainingJobsResponseBodyTrainingJobs& setComputeResource(Models::ListTrainingJobsResponseBodyTrainingJobsComputeResource && computeResource) { DARABONBA_PTR_SET_RVALUE(computeResource_, computeResource) };


    // dlcJobId Field Functions 
    bool hasDlcJobId() const { return this->dlcJobId_ != nullptr;};
    void deleteDlcJobId() { this->dlcJobId_ = nullptr;};
    inline string dlcJobId() const { DARABONBA_PTR_GET_DEFAULT(dlcJobId_, "") };
    inline ListTrainingJobsResponseBodyTrainingJobs& setDlcJobId(string dlcJobId) { DARABONBA_PTR_SET_VALUE(dlcJobId_, dlcJobId) };


    // environments Field Functions 
    bool hasEnvironments() const { return this->environments_ != nullptr;};
    void deleteEnvironments() { this->environments_ = nullptr;};
    inline const map<string, string> & environments() const { DARABONBA_PTR_GET_CONST(environments_, map<string, string>) };
    inline map<string, string> environments() { DARABONBA_PTR_GET(environments_, map<string, string>) };
    inline ListTrainingJobsResponseBodyTrainingJobs& setEnvironments(const map<string, string> & environments) { DARABONBA_PTR_SET_VALUE(environments_, environments) };
    inline ListTrainingJobsResponseBodyTrainingJobs& setEnvironments(map<string, string> && environments) { DARABONBA_PTR_SET_RVALUE(environments_, environments) };


    // experimentConfig Field Functions 
    bool hasExperimentConfig() const { return this->experimentConfig_ != nullptr;};
    void deleteExperimentConfig() { this->experimentConfig_ = nullptr;};
    inline const Models::ListTrainingJobsResponseBodyTrainingJobsExperimentConfig & experimentConfig() const { DARABONBA_PTR_GET_CONST(experimentConfig_, Models::ListTrainingJobsResponseBodyTrainingJobsExperimentConfig) };
    inline Models::ListTrainingJobsResponseBodyTrainingJobsExperimentConfig experimentConfig() { DARABONBA_PTR_GET(experimentConfig_, Models::ListTrainingJobsResponseBodyTrainingJobsExperimentConfig) };
    inline ListTrainingJobsResponseBodyTrainingJobs& setExperimentConfig(const Models::ListTrainingJobsResponseBodyTrainingJobsExperimentConfig & experimentConfig) { DARABONBA_PTR_SET_VALUE(experimentConfig_, experimentConfig) };
    inline ListTrainingJobsResponseBodyTrainingJobs& setExperimentConfig(Models::ListTrainingJobsResponseBodyTrainingJobsExperimentConfig && experimentConfig) { DARABONBA_PTR_SET_RVALUE(experimentConfig_, experimentConfig) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string gmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline ListTrainingJobsResponseBodyTrainingJobs& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string gmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline ListTrainingJobsResponseBodyTrainingJobs& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // hyperParameters Field Functions 
    bool hasHyperParameters() const { return this->hyperParameters_ != nullptr;};
    void deleteHyperParameters() { this->hyperParameters_ = nullptr;};
    inline const vector<Models::ListTrainingJobsResponseBodyTrainingJobsHyperParameters> & hyperParameters() const { DARABONBA_PTR_GET_CONST(hyperParameters_, vector<Models::ListTrainingJobsResponseBodyTrainingJobsHyperParameters>) };
    inline vector<Models::ListTrainingJobsResponseBodyTrainingJobsHyperParameters> hyperParameters() { DARABONBA_PTR_GET(hyperParameters_, vector<Models::ListTrainingJobsResponseBodyTrainingJobsHyperParameters>) };
    inline ListTrainingJobsResponseBodyTrainingJobs& setHyperParameters(const vector<Models::ListTrainingJobsResponseBodyTrainingJobsHyperParameters> & hyperParameters) { DARABONBA_PTR_SET_VALUE(hyperParameters_, hyperParameters) };
    inline ListTrainingJobsResponseBodyTrainingJobs& setHyperParameters(vector<Models::ListTrainingJobsResponseBodyTrainingJobsHyperParameters> && hyperParameters) { DARABONBA_PTR_SET_RVALUE(hyperParameters_, hyperParameters) };


    // inputChannels Field Functions 
    bool hasInputChannels() const { return this->inputChannels_ != nullptr;};
    void deleteInputChannels() { this->inputChannels_ = nullptr;};
    inline const vector<Models::ListTrainingJobsResponseBodyTrainingJobsInputChannels> & inputChannels() const { DARABONBA_PTR_GET_CONST(inputChannels_, vector<Models::ListTrainingJobsResponseBodyTrainingJobsInputChannels>) };
    inline vector<Models::ListTrainingJobsResponseBodyTrainingJobsInputChannels> inputChannels() { DARABONBA_PTR_GET(inputChannels_, vector<Models::ListTrainingJobsResponseBodyTrainingJobsInputChannels>) };
    inline ListTrainingJobsResponseBodyTrainingJobs& setInputChannels(const vector<Models::ListTrainingJobsResponseBodyTrainingJobsInputChannels> & inputChannels) { DARABONBA_PTR_SET_VALUE(inputChannels_, inputChannels) };
    inline ListTrainingJobsResponseBodyTrainingJobs& setInputChannels(vector<Models::ListTrainingJobsResponseBodyTrainingJobsInputChannels> && inputChannels) { DARABONBA_PTR_SET_RVALUE(inputChannels_, inputChannels) };


    // isTempAlgo Field Functions 
    bool hasIsTempAlgo() const { return this->isTempAlgo_ != nullptr;};
    void deleteIsTempAlgo() { this->isTempAlgo_ = nullptr;};
    inline bool isTempAlgo() const { DARABONBA_PTR_GET_DEFAULT(isTempAlgo_, false) };
    inline ListTrainingJobsResponseBodyTrainingJobs& setIsTempAlgo(bool isTempAlgo) { DARABONBA_PTR_SET_VALUE(isTempAlgo_, isTempAlgo) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<Models::ListTrainingJobsResponseBodyTrainingJobsLabels> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<Models::ListTrainingJobsResponseBodyTrainingJobsLabels>) };
    inline vector<Models::ListTrainingJobsResponseBodyTrainingJobsLabels> labels() { DARABONBA_PTR_GET(labels_, vector<Models::ListTrainingJobsResponseBodyTrainingJobsLabels>) };
    inline ListTrainingJobsResponseBodyTrainingJobs& setLabels(const vector<Models::ListTrainingJobsResponseBodyTrainingJobsLabels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline ListTrainingJobsResponseBodyTrainingJobs& setLabels(vector<Models::ListTrainingJobsResponseBodyTrainingJobsLabels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // outputChannels Field Functions 
    bool hasOutputChannels() const { return this->outputChannels_ != nullptr;};
    void deleteOutputChannels() { this->outputChannels_ = nullptr;};
    inline const vector<Models::ListTrainingJobsResponseBodyTrainingJobsOutputChannels> & outputChannels() const { DARABONBA_PTR_GET_CONST(outputChannels_, vector<Models::ListTrainingJobsResponseBodyTrainingJobsOutputChannels>) };
    inline vector<Models::ListTrainingJobsResponseBodyTrainingJobsOutputChannels> outputChannels() { DARABONBA_PTR_GET(outputChannels_, vector<Models::ListTrainingJobsResponseBodyTrainingJobsOutputChannels>) };
    inline ListTrainingJobsResponseBodyTrainingJobs& setOutputChannels(const vector<Models::ListTrainingJobsResponseBodyTrainingJobsOutputChannels> & outputChannels) { DARABONBA_PTR_SET_VALUE(outputChannels_, outputChannels) };
    inline ListTrainingJobsResponseBodyTrainingJobs& setOutputChannels(vector<Models::ListTrainingJobsResponseBodyTrainingJobsOutputChannels> && outputChannels) { DARABONBA_PTR_SET_RVALUE(outputChannels_, outputChannels) };


    // pythonRequirements Field Functions 
    bool hasPythonRequirements() const { return this->pythonRequirements_ != nullptr;};
    void deletePythonRequirements() { this->pythonRequirements_ = nullptr;};
    inline const vector<string> & pythonRequirements() const { DARABONBA_PTR_GET_CONST(pythonRequirements_, vector<string>) };
    inline vector<string> pythonRequirements() { DARABONBA_PTR_GET(pythonRequirements_, vector<string>) };
    inline ListTrainingJobsResponseBodyTrainingJobs& setPythonRequirements(const vector<string> & pythonRequirements) { DARABONBA_PTR_SET_VALUE(pythonRequirements_, pythonRequirements) };
    inline ListTrainingJobsResponseBodyTrainingJobs& setPythonRequirements(vector<string> && pythonRequirements) { DARABONBA_PTR_SET_RVALUE(pythonRequirements_, pythonRequirements) };


    // reasonCode Field Functions 
    bool hasReasonCode() const { return this->reasonCode_ != nullptr;};
    void deleteReasonCode() { this->reasonCode_ = nullptr;};
    inline string reasonCode() const { DARABONBA_PTR_GET_DEFAULT(reasonCode_, "") };
    inline ListTrainingJobsResponseBodyTrainingJobs& setReasonCode(string reasonCode) { DARABONBA_PTR_SET_VALUE(reasonCode_, reasonCode) };


    // reasonMessage Field Functions 
    bool hasReasonMessage() const { return this->reasonMessage_ != nullptr;};
    void deleteReasonMessage() { this->reasonMessage_ = nullptr;};
    inline string reasonMessage() const { DARABONBA_PTR_GET_DEFAULT(reasonMessage_, "") };
    inline ListTrainingJobsResponseBodyTrainingJobs& setReasonMessage(string reasonMessage) { DARABONBA_PTR_SET_VALUE(reasonMessage_, reasonMessage) };


    // roleArn Field Functions 
    bool hasRoleArn() const { return this->roleArn_ != nullptr;};
    void deleteRoleArn() { this->roleArn_ = nullptr;};
    inline string roleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
    inline ListTrainingJobsResponseBodyTrainingJobs& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


    // scheduler Field Functions 
    bool hasScheduler() const { return this->scheduler_ != nullptr;};
    void deleteScheduler() { this->scheduler_ = nullptr;};
    inline const Models::ListTrainingJobsResponseBodyTrainingJobsScheduler & scheduler() const { DARABONBA_PTR_GET_CONST(scheduler_, Models::ListTrainingJobsResponseBodyTrainingJobsScheduler) };
    inline Models::ListTrainingJobsResponseBodyTrainingJobsScheduler scheduler() { DARABONBA_PTR_GET(scheduler_, Models::ListTrainingJobsResponseBodyTrainingJobsScheduler) };
    inline ListTrainingJobsResponseBodyTrainingJobs& setScheduler(const Models::ListTrainingJobsResponseBodyTrainingJobsScheduler & scheduler) { DARABONBA_PTR_SET_VALUE(scheduler_, scheduler) };
    inline ListTrainingJobsResponseBodyTrainingJobs& setScheduler(Models::ListTrainingJobsResponseBodyTrainingJobsScheduler && scheduler) { DARABONBA_PTR_SET_RVALUE(scheduler_, scheduler) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListTrainingJobsResponseBodyTrainingJobs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusTransitions Field Functions 
    bool hasStatusTransitions() const { return this->statusTransitions_ != nullptr;};
    void deleteStatusTransitions() { this->statusTransitions_ = nullptr;};
    inline const vector<Models::ListTrainingJobsResponseBodyTrainingJobsStatusTransitions> & statusTransitions() const { DARABONBA_PTR_GET_CONST(statusTransitions_, vector<Models::ListTrainingJobsResponseBodyTrainingJobsStatusTransitions>) };
    inline vector<Models::ListTrainingJobsResponseBodyTrainingJobsStatusTransitions> statusTransitions() { DARABONBA_PTR_GET(statusTransitions_, vector<Models::ListTrainingJobsResponseBodyTrainingJobsStatusTransitions>) };
    inline ListTrainingJobsResponseBodyTrainingJobs& setStatusTransitions(const vector<Models::ListTrainingJobsResponseBodyTrainingJobsStatusTransitions> & statusTransitions) { DARABONBA_PTR_SET_VALUE(statusTransitions_, statusTransitions) };
    inline ListTrainingJobsResponseBodyTrainingJobs& setStatusTransitions(vector<Models::ListTrainingJobsResponseBodyTrainingJobsStatusTransitions> && statusTransitions) { DARABONBA_PTR_SET_RVALUE(statusTransitions_, statusTransitions) };


    // trainingJobDescription Field Functions 
    bool hasTrainingJobDescription() const { return this->trainingJobDescription_ != nullptr;};
    void deleteTrainingJobDescription() { this->trainingJobDescription_ = nullptr;};
    inline string trainingJobDescription() const { DARABONBA_PTR_GET_DEFAULT(trainingJobDescription_, "") };
    inline ListTrainingJobsResponseBodyTrainingJobs& setTrainingJobDescription(string trainingJobDescription) { DARABONBA_PTR_SET_VALUE(trainingJobDescription_, trainingJobDescription) };


    // trainingJobId Field Functions 
    bool hasTrainingJobId() const { return this->trainingJobId_ != nullptr;};
    void deleteTrainingJobId() { this->trainingJobId_ = nullptr;};
    inline string trainingJobId() const { DARABONBA_PTR_GET_DEFAULT(trainingJobId_, "") };
    inline ListTrainingJobsResponseBodyTrainingJobs& setTrainingJobId(string trainingJobId) { DARABONBA_PTR_SET_VALUE(trainingJobId_, trainingJobId) };


    // trainingJobName Field Functions 
    bool hasTrainingJobName() const { return this->trainingJobName_ != nullptr;};
    void deleteTrainingJobName() { this->trainingJobName_ = nullptr;};
    inline string trainingJobName() const { DARABONBA_PTR_GET_DEFAULT(trainingJobName_, "") };
    inline ListTrainingJobsResponseBodyTrainingJobs& setTrainingJobName(string trainingJobName) { DARABONBA_PTR_SET_VALUE(trainingJobName_, trainingJobName) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListTrainingJobsResponseBodyTrainingJobs& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userVpc Field Functions 
    bool hasUserVpc() const { return this->userVpc_ != nullptr;};
    void deleteUserVpc() { this->userVpc_ = nullptr;};
    inline const Models::ListTrainingJobsResponseBodyTrainingJobsUserVpc & userVpc() const { DARABONBA_PTR_GET_CONST(userVpc_, Models::ListTrainingJobsResponseBodyTrainingJobsUserVpc) };
    inline Models::ListTrainingJobsResponseBodyTrainingJobsUserVpc userVpc() { DARABONBA_PTR_GET(userVpc_, Models::ListTrainingJobsResponseBodyTrainingJobsUserVpc) };
    inline ListTrainingJobsResponseBodyTrainingJobs& setUserVpc(const Models::ListTrainingJobsResponseBodyTrainingJobsUserVpc & userVpc) { DARABONBA_PTR_SET_VALUE(userVpc_, userVpc) };
    inline ListTrainingJobsResponseBodyTrainingJobs& setUserVpc(Models::ListTrainingJobsResponseBodyTrainingJobsUserVpc && userVpc) { DARABONBA_PTR_SET_RVALUE(userVpc_, userVpc) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListTrainingJobsResponseBodyTrainingJobs& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> algorithmName_ = nullptr;
    std::shared_ptr<string> algorithmProvider_ = nullptr;
    std::shared_ptr<string> algorithmVersion_ = nullptr;
    std::shared_ptr<Models::ListTrainingJobsResponseBodyTrainingJobsComputeResource> computeResource_ = nullptr;
    std::shared_ptr<string> dlcJobId_ = nullptr;
    std::shared_ptr<map<string, string>> environments_ = nullptr;
    std::shared_ptr<Models::ListTrainingJobsResponseBodyTrainingJobsExperimentConfig> experimentConfig_ = nullptr;
    std::shared_ptr<string> gmtCreateTime_ = nullptr;
    std::shared_ptr<string> gmtModifiedTime_ = nullptr;
    std::shared_ptr<vector<Models::ListTrainingJobsResponseBodyTrainingJobsHyperParameters>> hyperParameters_ = nullptr;
    std::shared_ptr<vector<Models::ListTrainingJobsResponseBodyTrainingJobsInputChannels>> inputChannels_ = nullptr;
    std::shared_ptr<bool> isTempAlgo_ = nullptr;
    std::shared_ptr<vector<Models::ListTrainingJobsResponseBodyTrainingJobsLabels>> labels_ = nullptr;
    std::shared_ptr<vector<Models::ListTrainingJobsResponseBodyTrainingJobsOutputChannels>> outputChannels_ = nullptr;
    std::shared_ptr<vector<string>> pythonRequirements_ = nullptr;
    std::shared_ptr<string> reasonCode_ = nullptr;
    std::shared_ptr<string> reasonMessage_ = nullptr;
    std::shared_ptr<string> roleArn_ = nullptr;
    std::shared_ptr<Models::ListTrainingJobsResponseBodyTrainingJobsScheduler> scheduler_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<vector<Models::ListTrainingJobsResponseBodyTrainingJobsStatusTransitions>> statusTransitions_ = nullptr;
    std::shared_ptr<string> trainingJobDescription_ = nullptr;
    std::shared_ptr<string> trainingJobId_ = nullptr;
    std::shared_ptr<string> trainingJobName_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<Models::ListTrainingJobsResponseBodyTrainingJobsUserVpc> userVpc_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
