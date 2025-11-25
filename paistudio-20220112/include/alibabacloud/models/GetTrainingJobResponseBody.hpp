// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRAININGJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTRAININGJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AlgorithmSpec.hpp>
#include <alibabacloud/models/AssignNodeSpec.hpp>
#include <alibabacloud/models/GetTrainingJobResponseBodyComputeResource.hpp>
#include <map>
#include <alibabacloud/models/GetTrainingJobResponseBodyExperimentConfig.hpp>
#include <vector>
#include <alibabacloud/models/GetTrainingJobResponseBodyHyperParameters.hpp>
#include <alibabacloud/models/GetTrainingJobResponseBodyInputChannels.hpp>
#include <alibabacloud/models/GetTrainingJobResponseBodyInstances.hpp>
#include <alibabacloud/models/GetTrainingJobResponseBodyLabels.hpp>
#include <alibabacloud/models/GetTrainingJobResponseBodyLatestMetrics.hpp>
#include <alibabacloud/models/GetTrainingJobResponseBodyLatestProgress.hpp>
#include <alibabacloud/models/GetTrainingJobResponseBodyOutputChannels.hpp>
#include <alibabacloud/models/GetTrainingJobResponseBodyOutputModel.hpp>
#include <alibabacloud/models/GetTrainingJobResponseBodyScheduler.hpp>
#include <alibabacloud/models/JobSettings.hpp>
#include <alibabacloud/models/GetTrainingJobResponseBodyStatusTransitions.hpp>
#include <alibabacloud/models/GetTrainingJobResponseBodyUserVpc.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class GetTrainingJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTrainingJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AlgorithmId, algorithmId_);
      DARABONBA_PTR_TO_JSON(AlgorithmName, algorithmName_);
      DARABONBA_PTR_TO_JSON(AlgorithmProvider, algorithmProvider_);
      DARABONBA_PTR_TO_JSON(AlgorithmSpec, algorithmSpec_);
      DARABONBA_PTR_TO_JSON(AlgorithmVersion, algorithmVersion_);
      DARABONBA_PTR_TO_JSON(AssignNodeSpec, assignNodeSpec_);
      DARABONBA_PTR_TO_JSON(ComputeResource, computeResource_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(Environments, environments_);
      DARABONBA_PTR_TO_JSON(ExperimentConfig, experimentConfig_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_TO_JSON(HyperParameters, hyperParameters_);
      DARABONBA_PTR_TO_JSON(InputChannels, inputChannels_);
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(IsTempAlgo, isTempAlgo_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(LatestMetrics, latestMetrics_);
      DARABONBA_PTR_TO_JSON(LatestProgress, latestProgress_);
      DARABONBA_PTR_TO_JSON(OutputChannels, outputChannels_);
      DARABONBA_PTR_TO_JSON(OutputModel, outputModel_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(PythonRequirements, pythonRequirements_);
      DARABONBA_PTR_TO_JSON(ReasonCode, reasonCode_);
      DARABONBA_PTR_TO_JSON(ReasonMessage, reasonMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RoleArn, roleArn_);
      DARABONBA_PTR_TO_JSON(Scheduler, scheduler_);
      DARABONBA_PTR_TO_JSON(Settings, settings_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusTransitions, statusTransitions_);
      DARABONBA_PTR_TO_JSON(TrainingJobDescription, trainingJobDescription_);
      DARABONBA_PTR_TO_JSON(TrainingJobId, trainingJobId_);
      DARABONBA_PTR_TO_JSON(TrainingJobName, trainingJobName_);
      DARABONBA_PTR_TO_JSON(TrainingJobUrl, trainingJobUrl_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserVpc, userVpc_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTrainingJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AlgorithmId, algorithmId_);
      DARABONBA_PTR_FROM_JSON(AlgorithmName, algorithmName_);
      DARABONBA_PTR_FROM_JSON(AlgorithmProvider, algorithmProvider_);
      DARABONBA_PTR_FROM_JSON(AlgorithmSpec, algorithmSpec_);
      DARABONBA_PTR_FROM_JSON(AlgorithmVersion, algorithmVersion_);
      DARABONBA_PTR_FROM_JSON(AssignNodeSpec, assignNodeSpec_);
      DARABONBA_PTR_FROM_JSON(ComputeResource, computeResource_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(Environments, environments_);
      DARABONBA_PTR_FROM_JSON(ExperimentConfig, experimentConfig_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_FROM_JSON(HyperParameters, hyperParameters_);
      DARABONBA_PTR_FROM_JSON(InputChannels, inputChannels_);
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(IsTempAlgo, isTempAlgo_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(LatestMetrics, latestMetrics_);
      DARABONBA_PTR_FROM_JSON(LatestProgress, latestProgress_);
      DARABONBA_PTR_FROM_JSON(OutputChannels, outputChannels_);
      DARABONBA_PTR_FROM_JSON(OutputModel, outputModel_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(PythonRequirements, pythonRequirements_);
      DARABONBA_PTR_FROM_JSON(ReasonCode, reasonCode_);
      DARABONBA_PTR_FROM_JSON(ReasonMessage, reasonMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RoleArn, roleArn_);
      DARABONBA_PTR_FROM_JSON(Scheduler, scheduler_);
      DARABONBA_PTR_FROM_JSON(Settings, settings_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusTransitions, statusTransitions_);
      DARABONBA_PTR_FROM_JSON(TrainingJobDescription, trainingJobDescription_);
      DARABONBA_PTR_FROM_JSON(TrainingJobId, trainingJobId_);
      DARABONBA_PTR_FROM_JSON(TrainingJobName, trainingJobName_);
      DARABONBA_PTR_FROM_JSON(TrainingJobUrl, trainingJobUrl_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserVpc, userVpc_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    GetTrainingJobResponseBody() = default ;
    GetTrainingJobResponseBody(const GetTrainingJobResponseBody &) = default ;
    GetTrainingJobResponseBody(GetTrainingJobResponseBody &&) = default ;
    GetTrainingJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTrainingJobResponseBody() = default ;
    GetTrainingJobResponseBody& operator=(const GetTrainingJobResponseBody &) = default ;
    GetTrainingJobResponseBody& operator=(GetTrainingJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->algorithmId_ == nullptr
        && return this->algorithmName_ == nullptr && return this->algorithmProvider_ == nullptr && return this->algorithmSpec_ == nullptr && return this->algorithmVersion_ == nullptr && return this->assignNodeSpec_ == nullptr
        && return this->computeResource_ == nullptr && return this->duration_ == nullptr && return this->environments_ == nullptr && return this->experimentConfig_ == nullptr && return this->gmtCreateTime_ == nullptr
        && return this->gmtModifiedTime_ == nullptr && return this->hyperParameters_ == nullptr && return this->inputChannels_ == nullptr && return this->instances_ == nullptr && return this->isTempAlgo_ == nullptr
        && return this->labels_ == nullptr && return this->latestMetrics_ == nullptr && return this->latestProgress_ == nullptr && return this->outputChannels_ == nullptr && return this->outputModel_ == nullptr
        && return this->priority_ == nullptr && return this->pythonRequirements_ == nullptr && return this->reasonCode_ == nullptr && return this->reasonMessage_ == nullptr && return this->requestId_ == nullptr
        && return this->roleArn_ == nullptr && return this->scheduler_ == nullptr && return this->settings_ == nullptr && return this->status_ == nullptr && return this->statusTransitions_ == nullptr
        && return this->trainingJobDescription_ == nullptr && return this->trainingJobId_ == nullptr && return this->trainingJobName_ == nullptr && return this->trainingJobUrl_ == nullptr && return this->userId_ == nullptr
        && return this->userVpc_ == nullptr && return this->workspaceId_ == nullptr; };
    // algorithmId Field Functions 
    bool hasAlgorithmId() const { return this->algorithmId_ != nullptr;};
    void deleteAlgorithmId() { this->algorithmId_ = nullptr;};
    inline string algorithmId() const { DARABONBA_PTR_GET_DEFAULT(algorithmId_, "") };
    inline GetTrainingJobResponseBody& setAlgorithmId(string algorithmId) { DARABONBA_PTR_SET_VALUE(algorithmId_, algorithmId) };


    // algorithmName Field Functions 
    bool hasAlgorithmName() const { return this->algorithmName_ != nullptr;};
    void deleteAlgorithmName() { this->algorithmName_ = nullptr;};
    inline string algorithmName() const { DARABONBA_PTR_GET_DEFAULT(algorithmName_, "") };
    inline GetTrainingJobResponseBody& setAlgorithmName(string algorithmName) { DARABONBA_PTR_SET_VALUE(algorithmName_, algorithmName) };


    // algorithmProvider Field Functions 
    bool hasAlgorithmProvider() const { return this->algorithmProvider_ != nullptr;};
    void deleteAlgorithmProvider() { this->algorithmProvider_ = nullptr;};
    inline string algorithmProvider() const { DARABONBA_PTR_GET_DEFAULT(algorithmProvider_, "") };
    inline GetTrainingJobResponseBody& setAlgorithmProvider(string algorithmProvider) { DARABONBA_PTR_SET_VALUE(algorithmProvider_, algorithmProvider) };


    // algorithmSpec Field Functions 
    bool hasAlgorithmSpec() const { return this->algorithmSpec_ != nullptr;};
    void deleteAlgorithmSpec() { this->algorithmSpec_ = nullptr;};
    inline const AlgorithmSpec & algorithmSpec() const { DARABONBA_PTR_GET_CONST(algorithmSpec_, AlgorithmSpec) };
    inline AlgorithmSpec algorithmSpec() { DARABONBA_PTR_GET(algorithmSpec_, AlgorithmSpec) };
    inline GetTrainingJobResponseBody& setAlgorithmSpec(const AlgorithmSpec & algorithmSpec) { DARABONBA_PTR_SET_VALUE(algorithmSpec_, algorithmSpec) };
    inline GetTrainingJobResponseBody& setAlgorithmSpec(AlgorithmSpec && algorithmSpec) { DARABONBA_PTR_SET_RVALUE(algorithmSpec_, algorithmSpec) };


    // algorithmVersion Field Functions 
    bool hasAlgorithmVersion() const { return this->algorithmVersion_ != nullptr;};
    void deleteAlgorithmVersion() { this->algorithmVersion_ = nullptr;};
    inline string algorithmVersion() const { DARABONBA_PTR_GET_DEFAULT(algorithmVersion_, "") };
    inline GetTrainingJobResponseBody& setAlgorithmVersion(string algorithmVersion) { DARABONBA_PTR_SET_VALUE(algorithmVersion_, algorithmVersion) };


    // assignNodeSpec Field Functions 
    bool hasAssignNodeSpec() const { return this->assignNodeSpec_ != nullptr;};
    void deleteAssignNodeSpec() { this->assignNodeSpec_ = nullptr;};
    inline const AssignNodeSpec & assignNodeSpec() const { DARABONBA_PTR_GET_CONST(assignNodeSpec_, AssignNodeSpec) };
    inline AssignNodeSpec assignNodeSpec() { DARABONBA_PTR_GET(assignNodeSpec_, AssignNodeSpec) };
    inline GetTrainingJobResponseBody& setAssignNodeSpec(const AssignNodeSpec & assignNodeSpec) { DARABONBA_PTR_SET_VALUE(assignNodeSpec_, assignNodeSpec) };
    inline GetTrainingJobResponseBody& setAssignNodeSpec(AssignNodeSpec && assignNodeSpec) { DARABONBA_PTR_SET_RVALUE(assignNodeSpec_, assignNodeSpec) };


    // computeResource Field Functions 
    bool hasComputeResource() const { return this->computeResource_ != nullptr;};
    void deleteComputeResource() { this->computeResource_ = nullptr;};
    inline const GetTrainingJobResponseBodyComputeResource & computeResource() const { DARABONBA_PTR_GET_CONST(computeResource_, GetTrainingJobResponseBodyComputeResource) };
    inline GetTrainingJobResponseBodyComputeResource computeResource() { DARABONBA_PTR_GET(computeResource_, GetTrainingJobResponseBodyComputeResource) };
    inline GetTrainingJobResponseBody& setComputeResource(const GetTrainingJobResponseBodyComputeResource & computeResource) { DARABONBA_PTR_SET_VALUE(computeResource_, computeResource) };
    inline GetTrainingJobResponseBody& setComputeResource(GetTrainingJobResponseBodyComputeResource && computeResource) { DARABONBA_PTR_SET_RVALUE(computeResource_, computeResource) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline GetTrainingJobResponseBody& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // environments Field Functions 
    bool hasEnvironments() const { return this->environments_ != nullptr;};
    void deleteEnvironments() { this->environments_ = nullptr;};
    inline const map<string, string> & environments() const { DARABONBA_PTR_GET_CONST(environments_, map<string, string>) };
    inline map<string, string> environments() { DARABONBA_PTR_GET(environments_, map<string, string>) };
    inline GetTrainingJobResponseBody& setEnvironments(const map<string, string> & environments) { DARABONBA_PTR_SET_VALUE(environments_, environments) };
    inline GetTrainingJobResponseBody& setEnvironments(map<string, string> && environments) { DARABONBA_PTR_SET_RVALUE(environments_, environments) };


    // experimentConfig Field Functions 
    bool hasExperimentConfig() const { return this->experimentConfig_ != nullptr;};
    void deleteExperimentConfig() { this->experimentConfig_ = nullptr;};
    inline const GetTrainingJobResponseBodyExperimentConfig & experimentConfig() const { DARABONBA_PTR_GET_CONST(experimentConfig_, GetTrainingJobResponseBodyExperimentConfig) };
    inline GetTrainingJobResponseBodyExperimentConfig experimentConfig() { DARABONBA_PTR_GET(experimentConfig_, GetTrainingJobResponseBodyExperimentConfig) };
    inline GetTrainingJobResponseBody& setExperimentConfig(const GetTrainingJobResponseBodyExperimentConfig & experimentConfig) { DARABONBA_PTR_SET_VALUE(experimentConfig_, experimentConfig) };
    inline GetTrainingJobResponseBody& setExperimentConfig(GetTrainingJobResponseBodyExperimentConfig && experimentConfig) { DARABONBA_PTR_SET_RVALUE(experimentConfig_, experimentConfig) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string gmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline GetTrainingJobResponseBody& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string gmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline GetTrainingJobResponseBody& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // hyperParameters Field Functions 
    bool hasHyperParameters() const { return this->hyperParameters_ != nullptr;};
    void deleteHyperParameters() { this->hyperParameters_ = nullptr;};
    inline const vector<GetTrainingJobResponseBodyHyperParameters> & hyperParameters() const { DARABONBA_PTR_GET_CONST(hyperParameters_, vector<GetTrainingJobResponseBodyHyperParameters>) };
    inline vector<GetTrainingJobResponseBodyHyperParameters> hyperParameters() { DARABONBA_PTR_GET(hyperParameters_, vector<GetTrainingJobResponseBodyHyperParameters>) };
    inline GetTrainingJobResponseBody& setHyperParameters(const vector<GetTrainingJobResponseBodyHyperParameters> & hyperParameters) { DARABONBA_PTR_SET_VALUE(hyperParameters_, hyperParameters) };
    inline GetTrainingJobResponseBody& setHyperParameters(vector<GetTrainingJobResponseBodyHyperParameters> && hyperParameters) { DARABONBA_PTR_SET_RVALUE(hyperParameters_, hyperParameters) };


    // inputChannels Field Functions 
    bool hasInputChannels() const { return this->inputChannels_ != nullptr;};
    void deleteInputChannels() { this->inputChannels_ = nullptr;};
    inline const vector<GetTrainingJobResponseBodyInputChannels> & inputChannels() const { DARABONBA_PTR_GET_CONST(inputChannels_, vector<GetTrainingJobResponseBodyInputChannels>) };
    inline vector<GetTrainingJobResponseBodyInputChannels> inputChannels() { DARABONBA_PTR_GET(inputChannels_, vector<GetTrainingJobResponseBodyInputChannels>) };
    inline GetTrainingJobResponseBody& setInputChannels(const vector<GetTrainingJobResponseBodyInputChannels> & inputChannels) { DARABONBA_PTR_SET_VALUE(inputChannels_, inputChannels) };
    inline GetTrainingJobResponseBody& setInputChannels(vector<GetTrainingJobResponseBodyInputChannels> && inputChannels) { DARABONBA_PTR_SET_RVALUE(inputChannels_, inputChannels) };


    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<GetTrainingJobResponseBodyInstances> & instances() const { DARABONBA_PTR_GET_CONST(instances_, vector<GetTrainingJobResponseBodyInstances>) };
    inline vector<GetTrainingJobResponseBodyInstances> instances() { DARABONBA_PTR_GET(instances_, vector<GetTrainingJobResponseBodyInstances>) };
    inline GetTrainingJobResponseBody& setInstances(const vector<GetTrainingJobResponseBodyInstances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline GetTrainingJobResponseBody& setInstances(vector<GetTrainingJobResponseBodyInstances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // isTempAlgo Field Functions 
    bool hasIsTempAlgo() const { return this->isTempAlgo_ != nullptr;};
    void deleteIsTempAlgo() { this->isTempAlgo_ = nullptr;};
    inline bool isTempAlgo() const { DARABONBA_PTR_GET_DEFAULT(isTempAlgo_, false) };
    inline GetTrainingJobResponseBody& setIsTempAlgo(bool isTempAlgo) { DARABONBA_PTR_SET_VALUE(isTempAlgo_, isTempAlgo) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<GetTrainingJobResponseBodyLabels> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<GetTrainingJobResponseBodyLabels>) };
    inline vector<GetTrainingJobResponseBodyLabels> labels() { DARABONBA_PTR_GET(labels_, vector<GetTrainingJobResponseBodyLabels>) };
    inline GetTrainingJobResponseBody& setLabels(const vector<GetTrainingJobResponseBodyLabels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline GetTrainingJobResponseBody& setLabels(vector<GetTrainingJobResponseBodyLabels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // latestMetrics Field Functions 
    bool hasLatestMetrics() const { return this->latestMetrics_ != nullptr;};
    void deleteLatestMetrics() { this->latestMetrics_ = nullptr;};
    inline const vector<GetTrainingJobResponseBodyLatestMetrics> & latestMetrics() const { DARABONBA_PTR_GET_CONST(latestMetrics_, vector<GetTrainingJobResponseBodyLatestMetrics>) };
    inline vector<GetTrainingJobResponseBodyLatestMetrics> latestMetrics() { DARABONBA_PTR_GET(latestMetrics_, vector<GetTrainingJobResponseBodyLatestMetrics>) };
    inline GetTrainingJobResponseBody& setLatestMetrics(const vector<GetTrainingJobResponseBodyLatestMetrics> & latestMetrics) { DARABONBA_PTR_SET_VALUE(latestMetrics_, latestMetrics) };
    inline GetTrainingJobResponseBody& setLatestMetrics(vector<GetTrainingJobResponseBodyLatestMetrics> && latestMetrics) { DARABONBA_PTR_SET_RVALUE(latestMetrics_, latestMetrics) };


    // latestProgress Field Functions 
    bool hasLatestProgress() const { return this->latestProgress_ != nullptr;};
    void deleteLatestProgress() { this->latestProgress_ = nullptr;};
    inline const GetTrainingJobResponseBodyLatestProgress & latestProgress() const { DARABONBA_PTR_GET_CONST(latestProgress_, GetTrainingJobResponseBodyLatestProgress) };
    inline GetTrainingJobResponseBodyLatestProgress latestProgress() { DARABONBA_PTR_GET(latestProgress_, GetTrainingJobResponseBodyLatestProgress) };
    inline GetTrainingJobResponseBody& setLatestProgress(const GetTrainingJobResponseBodyLatestProgress & latestProgress) { DARABONBA_PTR_SET_VALUE(latestProgress_, latestProgress) };
    inline GetTrainingJobResponseBody& setLatestProgress(GetTrainingJobResponseBodyLatestProgress && latestProgress) { DARABONBA_PTR_SET_RVALUE(latestProgress_, latestProgress) };


    // outputChannels Field Functions 
    bool hasOutputChannels() const { return this->outputChannels_ != nullptr;};
    void deleteOutputChannels() { this->outputChannels_ = nullptr;};
    inline const vector<GetTrainingJobResponseBodyOutputChannels> & outputChannels() const { DARABONBA_PTR_GET_CONST(outputChannels_, vector<GetTrainingJobResponseBodyOutputChannels>) };
    inline vector<GetTrainingJobResponseBodyOutputChannels> outputChannels() { DARABONBA_PTR_GET(outputChannels_, vector<GetTrainingJobResponseBodyOutputChannels>) };
    inline GetTrainingJobResponseBody& setOutputChannels(const vector<GetTrainingJobResponseBodyOutputChannels> & outputChannels) { DARABONBA_PTR_SET_VALUE(outputChannels_, outputChannels) };
    inline GetTrainingJobResponseBody& setOutputChannels(vector<GetTrainingJobResponseBodyOutputChannels> && outputChannels) { DARABONBA_PTR_SET_RVALUE(outputChannels_, outputChannels) };


    // outputModel Field Functions 
    bool hasOutputModel() const { return this->outputModel_ != nullptr;};
    void deleteOutputModel() { this->outputModel_ = nullptr;};
    inline const GetTrainingJobResponseBodyOutputModel & outputModel() const { DARABONBA_PTR_GET_CONST(outputModel_, GetTrainingJobResponseBodyOutputModel) };
    inline GetTrainingJobResponseBodyOutputModel outputModel() { DARABONBA_PTR_GET(outputModel_, GetTrainingJobResponseBodyOutputModel) };
    inline GetTrainingJobResponseBody& setOutputModel(const GetTrainingJobResponseBodyOutputModel & outputModel) { DARABONBA_PTR_SET_VALUE(outputModel_, outputModel) };
    inline GetTrainingJobResponseBody& setOutputModel(GetTrainingJobResponseBodyOutputModel && outputModel) { DARABONBA_PTR_SET_RVALUE(outputModel_, outputModel) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline GetTrainingJobResponseBody& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // pythonRequirements Field Functions 
    bool hasPythonRequirements() const { return this->pythonRequirements_ != nullptr;};
    void deletePythonRequirements() { this->pythonRequirements_ = nullptr;};
    inline const vector<string> & pythonRequirements() const { DARABONBA_PTR_GET_CONST(pythonRequirements_, vector<string>) };
    inline vector<string> pythonRequirements() { DARABONBA_PTR_GET(pythonRequirements_, vector<string>) };
    inline GetTrainingJobResponseBody& setPythonRequirements(const vector<string> & pythonRequirements) { DARABONBA_PTR_SET_VALUE(pythonRequirements_, pythonRequirements) };
    inline GetTrainingJobResponseBody& setPythonRequirements(vector<string> && pythonRequirements) { DARABONBA_PTR_SET_RVALUE(pythonRequirements_, pythonRequirements) };


    // reasonCode Field Functions 
    bool hasReasonCode() const { return this->reasonCode_ != nullptr;};
    void deleteReasonCode() { this->reasonCode_ = nullptr;};
    inline string reasonCode() const { DARABONBA_PTR_GET_DEFAULT(reasonCode_, "") };
    inline GetTrainingJobResponseBody& setReasonCode(string reasonCode) { DARABONBA_PTR_SET_VALUE(reasonCode_, reasonCode) };


    // reasonMessage Field Functions 
    bool hasReasonMessage() const { return this->reasonMessage_ != nullptr;};
    void deleteReasonMessage() { this->reasonMessage_ = nullptr;};
    inline string reasonMessage() const { DARABONBA_PTR_GET_DEFAULT(reasonMessage_, "") };
    inline GetTrainingJobResponseBody& setReasonMessage(string reasonMessage) { DARABONBA_PTR_SET_VALUE(reasonMessage_, reasonMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTrainingJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // roleArn Field Functions 
    bool hasRoleArn() const { return this->roleArn_ != nullptr;};
    void deleteRoleArn() { this->roleArn_ = nullptr;};
    inline string roleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
    inline GetTrainingJobResponseBody& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


    // scheduler Field Functions 
    bool hasScheduler() const { return this->scheduler_ != nullptr;};
    void deleteScheduler() { this->scheduler_ = nullptr;};
    inline const GetTrainingJobResponseBodyScheduler & scheduler() const { DARABONBA_PTR_GET_CONST(scheduler_, GetTrainingJobResponseBodyScheduler) };
    inline GetTrainingJobResponseBodyScheduler scheduler() { DARABONBA_PTR_GET(scheduler_, GetTrainingJobResponseBodyScheduler) };
    inline GetTrainingJobResponseBody& setScheduler(const GetTrainingJobResponseBodyScheduler & scheduler) { DARABONBA_PTR_SET_VALUE(scheduler_, scheduler) };
    inline GetTrainingJobResponseBody& setScheduler(GetTrainingJobResponseBodyScheduler && scheduler) { DARABONBA_PTR_SET_RVALUE(scheduler_, scheduler) };


    // settings Field Functions 
    bool hasSettings() const { return this->settings_ != nullptr;};
    void deleteSettings() { this->settings_ = nullptr;};
    inline const JobSettings & settings() const { DARABONBA_PTR_GET_CONST(settings_, JobSettings) };
    inline JobSettings settings() { DARABONBA_PTR_GET(settings_, JobSettings) };
    inline GetTrainingJobResponseBody& setSettings(const JobSettings & settings) { DARABONBA_PTR_SET_VALUE(settings_, settings) };
    inline GetTrainingJobResponseBody& setSettings(JobSettings && settings) { DARABONBA_PTR_SET_RVALUE(settings_, settings) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetTrainingJobResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusTransitions Field Functions 
    bool hasStatusTransitions() const { return this->statusTransitions_ != nullptr;};
    void deleteStatusTransitions() { this->statusTransitions_ = nullptr;};
    inline const vector<GetTrainingJobResponseBodyStatusTransitions> & statusTransitions() const { DARABONBA_PTR_GET_CONST(statusTransitions_, vector<GetTrainingJobResponseBodyStatusTransitions>) };
    inline vector<GetTrainingJobResponseBodyStatusTransitions> statusTransitions() { DARABONBA_PTR_GET(statusTransitions_, vector<GetTrainingJobResponseBodyStatusTransitions>) };
    inline GetTrainingJobResponseBody& setStatusTransitions(const vector<GetTrainingJobResponseBodyStatusTransitions> & statusTransitions) { DARABONBA_PTR_SET_VALUE(statusTransitions_, statusTransitions) };
    inline GetTrainingJobResponseBody& setStatusTransitions(vector<GetTrainingJobResponseBodyStatusTransitions> && statusTransitions) { DARABONBA_PTR_SET_RVALUE(statusTransitions_, statusTransitions) };


    // trainingJobDescription Field Functions 
    bool hasTrainingJobDescription() const { return this->trainingJobDescription_ != nullptr;};
    void deleteTrainingJobDescription() { this->trainingJobDescription_ = nullptr;};
    inline string trainingJobDescription() const { DARABONBA_PTR_GET_DEFAULT(trainingJobDescription_, "") };
    inline GetTrainingJobResponseBody& setTrainingJobDescription(string trainingJobDescription) { DARABONBA_PTR_SET_VALUE(trainingJobDescription_, trainingJobDescription) };


    // trainingJobId Field Functions 
    bool hasTrainingJobId() const { return this->trainingJobId_ != nullptr;};
    void deleteTrainingJobId() { this->trainingJobId_ = nullptr;};
    inline string trainingJobId() const { DARABONBA_PTR_GET_DEFAULT(trainingJobId_, "") };
    inline GetTrainingJobResponseBody& setTrainingJobId(string trainingJobId) { DARABONBA_PTR_SET_VALUE(trainingJobId_, trainingJobId) };


    // trainingJobName Field Functions 
    bool hasTrainingJobName() const { return this->trainingJobName_ != nullptr;};
    void deleteTrainingJobName() { this->trainingJobName_ = nullptr;};
    inline string trainingJobName() const { DARABONBA_PTR_GET_DEFAULT(trainingJobName_, "") };
    inline GetTrainingJobResponseBody& setTrainingJobName(string trainingJobName) { DARABONBA_PTR_SET_VALUE(trainingJobName_, trainingJobName) };


    // trainingJobUrl Field Functions 
    bool hasTrainingJobUrl() const { return this->trainingJobUrl_ != nullptr;};
    void deleteTrainingJobUrl() { this->trainingJobUrl_ = nullptr;};
    inline string trainingJobUrl() const { DARABONBA_PTR_GET_DEFAULT(trainingJobUrl_, "") };
    inline GetTrainingJobResponseBody& setTrainingJobUrl(string trainingJobUrl) { DARABONBA_PTR_SET_VALUE(trainingJobUrl_, trainingJobUrl) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetTrainingJobResponseBody& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userVpc Field Functions 
    bool hasUserVpc() const { return this->userVpc_ != nullptr;};
    void deleteUserVpc() { this->userVpc_ = nullptr;};
    inline const GetTrainingJobResponseBodyUserVpc & userVpc() const { DARABONBA_PTR_GET_CONST(userVpc_, GetTrainingJobResponseBodyUserVpc) };
    inline GetTrainingJobResponseBodyUserVpc userVpc() { DARABONBA_PTR_GET(userVpc_, GetTrainingJobResponseBodyUserVpc) };
    inline GetTrainingJobResponseBody& setUserVpc(const GetTrainingJobResponseBodyUserVpc & userVpc) { DARABONBA_PTR_SET_VALUE(userVpc_, userVpc) };
    inline GetTrainingJobResponseBody& setUserVpc(GetTrainingJobResponseBodyUserVpc && userVpc) { DARABONBA_PTR_SET_RVALUE(userVpc_, userVpc) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetTrainingJobResponseBody& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> algorithmId_ = nullptr;
    std::shared_ptr<string> algorithmName_ = nullptr;
    std::shared_ptr<string> algorithmProvider_ = nullptr;
    std::shared_ptr<AlgorithmSpec> algorithmSpec_ = nullptr;
    std::shared_ptr<string> algorithmVersion_ = nullptr;
    std::shared_ptr<AssignNodeSpec> assignNodeSpec_ = nullptr;
    std::shared_ptr<GetTrainingJobResponseBodyComputeResource> computeResource_ = nullptr;
    std::shared_ptr<int64_t> duration_ = nullptr;
    std::shared_ptr<map<string, string>> environments_ = nullptr;
    std::shared_ptr<GetTrainingJobResponseBodyExperimentConfig> experimentConfig_ = nullptr;
    std::shared_ptr<string> gmtCreateTime_ = nullptr;
    std::shared_ptr<string> gmtModifiedTime_ = nullptr;
    std::shared_ptr<vector<GetTrainingJobResponseBodyHyperParameters>> hyperParameters_ = nullptr;
    std::shared_ptr<vector<GetTrainingJobResponseBodyInputChannels>> inputChannels_ = nullptr;
    std::shared_ptr<vector<GetTrainingJobResponseBodyInstances>> instances_ = nullptr;
    std::shared_ptr<bool> isTempAlgo_ = nullptr;
    std::shared_ptr<vector<GetTrainingJobResponseBodyLabels>> labels_ = nullptr;
    std::shared_ptr<vector<GetTrainingJobResponseBodyLatestMetrics>> latestMetrics_ = nullptr;
    std::shared_ptr<GetTrainingJobResponseBodyLatestProgress> latestProgress_ = nullptr;
    std::shared_ptr<vector<GetTrainingJobResponseBodyOutputChannels>> outputChannels_ = nullptr;
    std::shared_ptr<GetTrainingJobResponseBodyOutputModel> outputModel_ = nullptr;
    std::shared_ptr<int32_t> priority_ = nullptr;
    std::shared_ptr<vector<string>> pythonRequirements_ = nullptr;
    std::shared_ptr<string> reasonCode_ = nullptr;
    std::shared_ptr<string> reasonMessage_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> roleArn_ = nullptr;
    std::shared_ptr<GetTrainingJobResponseBodyScheduler> scheduler_ = nullptr;
    std::shared_ptr<JobSettings> settings_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<vector<GetTrainingJobResponseBodyStatusTransitions>> statusTransitions_ = nullptr;
    std::shared_ptr<string> trainingJobDescription_ = nullptr;
    std::shared_ptr<string> trainingJobId_ = nullptr;
    std::shared_ptr<string> trainingJobName_ = nullptr;
    std::shared_ptr<string> trainingJobUrl_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<GetTrainingJobResponseBodyUserVpc> userVpc_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
