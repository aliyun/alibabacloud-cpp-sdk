// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_PAIRECSERVICE20221213_HPP_
#define ALIBABACLOUD_PAIRECSERVICE20221213_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/PaiRecService20221213Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/PaiRecService20221213.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Applies an engine configuration.
       *
       * @param request ApplyEngineConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApplyEngineConfigResponse
       */
      Models::ApplyEngineConfigResponse applyEngineConfigWithOptions(const string &EngineConfigId, const Models::ApplyEngineConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Applies an engine configuration.
       *
       * @param request ApplyEngineConfigRequest
       * @return ApplyEngineConfigResponse
       */
      Models::ApplyEngineConfigResponse applyEngineConfig(const string &EngineConfigId, const Models::ApplyEngineConfigRequest &request);

      /**
       * @summary Performs data backflow for the latest job of a specified feature consistency check job configuration.
       *
       * @param request BackflowFeatureConsistencyCheckJobDataRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return BackflowFeatureConsistencyCheckJobDataResponse
       */
      Models::BackflowFeatureConsistencyCheckJobDataResponse backflowFeatureConsistencyCheckJobDataWithOptions(const Models::BackflowFeatureConsistencyCheckJobDataRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs data backflow for the latest job of a specified feature consistency check job configuration.
       *
       * @param request BackflowFeatureConsistencyCheckJobDataRequest
       * @return BackflowFeatureConsistencyCheckJobDataResponse
       */
      Models::BackflowFeatureConsistencyCheckJobDataResponse backflowFeatureConsistencyCheckJobData(const Models::BackflowFeatureConsistencyCheckJobDataRequest &request);

      /**
       * @summary This API changes the version of a recall management service.
       *
       * @description ## Request
       * Use this API to change the version of a recall management service. Ensure that the provided `RecallManagementServiceId`, `InstanceId`, and target `RecallManagementServiceVersionId` are valid, and that you have the required permissions for these resources.
       * - **RecallManagementServiceId**: The unique identifier of the recall management service.
       * - **InstanceId**: The instance ID associated with the recall management service.
       * - **RecallManagementServiceVersionId**: The target version ID to switch to.
       * Note: Before changing the version, confirm that the new version is fully tested and ready for production.
       *
       * @param request ChangeRecallManagementServiceVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeRecallManagementServiceVersionResponse
       */
      Models::ChangeRecallManagementServiceVersionResponse changeRecallManagementServiceVersionWithOptions(const string &RecallManagementServiceId, const Models::ChangeRecallManagementServiceVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API changes the version of a recall management service.
       *
       * @description ## Request
       * Use this API to change the version of a recall management service. Ensure that the provided `RecallManagementServiceId`, `InstanceId`, and target `RecallManagementServiceVersionId` are valid, and that you have the required permissions for these resources.
       * - **RecallManagementServiceId**: The unique identifier of the recall management service.
       * - **InstanceId**: The instance ID associated with the recall management service.
       * - **RecallManagementServiceVersionId**: The target version ID to switch to.
       * Note: Before changing the version, confirm that the new version is fully tested and ready for production.
       *
       * @param request ChangeRecallManagementServiceVersionRequest
       * @return ChangeRecallManagementServiceVersionResponse
       */
      Models::ChangeRecallManagementServiceVersionResponse changeRecallManagementServiceVersion(const string &RecallManagementServiceId, const Models::ChangeRecallManagementServiceVersionRequest &request);

      /**
       * @summary Sends a conversation message to an agent. Supports Server-Sent Events (SSE). Creates a new session or continues a conversation in an existing session.
       *
       * @description ## Operation description
       * - Call this API operation to send a conversation message to an agent. Server-Sent Events (SSE) is supported.
       * - If the `ConversationId` parameter is specified, the conversation continues in the context of the specified existing session. If this parameter is not specified, automatic creation of a new session is performed.
       * - The `Config` field allows you to pass additional information input. The value must be in JSON format.
       * - If the request succeeds, the response includes the message ID, reply content, and other information for this conversation. If a fault occurs, the corresponding error code and error message are returned.
       *
       * @param request ChatConversationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatConversationResponse
       */
      FutureGenerator<Models::ChatConversationResponse> chatConversationWithSSE(const Models::ChatConversationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends a conversation message to an agent. Supports Server-Sent Events (SSE). Creates a new session or continues a conversation in an existing session.
       *
       * @description ## Operation description
       * - Call this API operation to send a conversation message to an agent. Server-Sent Events (SSE) is supported.
       * - If the `ConversationId` parameter is specified, the conversation continues in the context of the specified existing session. If this parameter is not specified, automatic creation of a new session is performed.
       * - The `Config` field allows you to pass additional information input. The value must be in JSON format.
       * - If the request succeeds, the response includes the message ID, reply content, and other information for this conversation. If a fault occurs, the corresponding error code and error message are returned.
       *
       * @param request ChatConversationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatConversationResponse
       */
      Models::ChatConversationResponse chatConversationWithOptions(const Models::ChatConversationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends a conversation message to an agent. Supports Server-Sent Events (SSE). Creates a new session or continues a conversation in an existing session.
       *
       * @description ## Operation description
       * - Call this API operation to send a conversation message to an agent. Server-Sent Events (SSE) is supported.
       * - If the `ConversationId` parameter is specified, the conversation continues in the context of the specified existing session. If this parameter is not specified, automatic creation of a new session is performed.
       * - The `Config` field allows you to pass additional information input. The value must be in JSON format.
       * - If the request succeeds, the response includes the message ID, reply content, and other information for this conversation. If a fault occurs, the corresponding error code and error message are returned.
       *
       * @param request ChatConversationRequest
       * @return ChatConversationResponse
       */
      Models::ChatConversationResponse chatConversation(const Models::ChatConversationRequest &request);

      /**
       * @summary Verifies access to resources configured for an instance.
       *
       * @param request CheckInstanceResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckInstanceResourcesResponse
       */
      Models::CheckInstanceResourcesResponse checkInstanceResourcesWithOptions(const string &InstanceId, const Models::CheckInstanceResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies access to resources configured for an instance.
       *
       * @param request CheckInstanceResourcesRequest
       * @return CheckInstanceResourcesResponse
       */
      Models::CheckInstanceResourcesResponse checkInstanceResources(const string &InstanceId, const Models::CheckInstanceResourcesRequest &request);

      /**
       * @summary Validates a traffic control task expression.
       *
       * @description ## Description
       * This operation validates a traffic control task expression for a specific instance and table. Provide the correct `InstanceId`, `TableMetaId`, and `Expression` parameters.
       *
       * @param request CheckTrafficControlTaskExpressionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckTrafficControlTaskExpressionResponse
       */
      Models::CheckTrafficControlTaskExpressionResponse checkTrafficControlTaskExpressionWithOptions(const Models::CheckTrafficControlTaskExpressionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Validates a traffic control task expression.
       *
       * @description ## Description
       * This operation validates a traffic control task expression for a specific instance and table. Provide the correct `InstanceId`, `TableMetaId`, and `Expression` parameters.
       *
       * @param request CheckTrafficControlTaskExpressionRequest
       * @return CheckTrafficControlTaskExpressionResponse
       */
      Models::CheckTrafficControlTaskExpressionResponse checkTrafficControlTaskExpression(const Models::CheckTrafficControlTaskExpressionRequest &request);

      /**
       * @summary Clones an engine configuration.
       *
       * @param request CloneEngineConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloneEngineConfigResponse
       */
      Models::CloneEngineConfigResponse cloneEngineConfigWithOptions(const string &EngineConfigId, const Models::CloneEngineConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Clones an engine configuration.
       *
       * @param request CloneEngineConfigRequest
       * @return CloneEngineConfigResponse
       */
      Models::CloneEngineConfigResponse cloneEngineConfig(const string &EngineConfigId, const Models::CloneEngineConfigRequest &request);

      /**
       * @summary Clones a specified experiment.
       *
       * @param request CloneExperimentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloneExperimentResponse
       */
      Models::CloneExperimentResponse cloneExperimentWithOptions(const string &ExperimentId, const Models::CloneExperimentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Clones a specified experiment.
       *
       * @param request CloneExperimentRequest
       * @return CloneExperimentResponse
       */
      Models::CloneExperimentResponse cloneExperiment(const string &ExperimentId, const Models::CloneExperimentRequest &request);

      /**
       * @summary Clones an experiment group to a specified environment.
       *
       * @param request CloneExperimentGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloneExperimentGroupResponse
       */
      Models::CloneExperimentGroupResponse cloneExperimentGroupWithOptions(const string &ExperimentGroupId, const Models::CloneExperimentGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Clones an experiment group to a specified environment.
       *
       * @param request CloneExperimentGroupRequest
       * @return CloneExperimentGroupResponse
       */
      Models::CloneExperimentGroupResponse cloneExperimentGroup(const string &ExperimentGroupId, const Models::CloneExperimentGroupRequest &request);

      /**
       * @summary Clones a feature consistency check job configuration.
       *
       * @param request CloneFeatureConsistencyCheckJobConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloneFeatureConsistencyCheckJobConfigResponse
       */
      Models::CloneFeatureConsistencyCheckJobConfigResponse cloneFeatureConsistencyCheckJobConfigWithOptions(const string &SourceFeatureConsistencyCheckJobConfigId, const Models::CloneFeatureConsistencyCheckJobConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Clones a feature consistency check job configuration.
       *
       * @param request CloneFeatureConsistencyCheckJobConfigRequest
       * @return CloneFeatureConsistencyCheckJobConfigResponse
       */
      Models::CloneFeatureConsistencyCheckJobConfigResponse cloneFeatureConsistencyCheckJobConfig(const string &SourceFeatureConsistencyCheckJobConfigId, const Models::CloneFeatureConsistencyCheckJobConfigRequest &request);

      /**
       * @summary Clones a specified laboratory to a designated environment. You can specify whether to clone the experiment groups within the laboratory.
       *
       * @param request CloneLaboratoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloneLaboratoryResponse
       */
      Models::CloneLaboratoryResponse cloneLaboratoryWithOptions(const string &LaboratoryId, const Models::CloneLaboratoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Clones a specified laboratory to a designated environment. You can specify whether to clone the experiment groups within the laboratory.
       *
       * @param request CloneLaboratoryRequest
       * @return CloneLaboratoryResponse
       */
      Models::CloneLaboratoryResponse cloneLaboratory(const string &LaboratoryId, const Models::CloneLaboratoryRequest &request);

      /**
       * @summary Clones a specified traffic control task to a new instance.
       *
       * @description ## Request description
       * This API clones an existing traffic control task to another specified instance. Ensure that the `InstanceId` you provide is valid and that you have the required permissions for the target instance.
       * Note: The cloning process does not affect the status or configuration of the original task.
       *
       * @param request CloneTrafficControlTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloneTrafficControlTaskResponse
       */
      Models::CloneTrafficControlTaskResponse cloneTrafficControlTaskWithOptions(const string &TrafficControlTaskId, const Models::CloneTrafficControlTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Clones a specified traffic control task to a new instance.
       *
       * @description ## Request description
       * This API clones an existing traffic control task to another specified instance. Ensure that the `InstanceId` you provide is valid and that you have the required permissions for the target instance.
       * Note: The cloning process does not affect the status or configuration of the original task.
       *
       * @param request CloneTrafficControlTaskRequest
       * @return CloneTrafficControlTaskResponse
       */
      Models::CloneTrafficControlTaskResponse cloneTrafficControlTask(const string &TrafficControlTaskId, const Models::CloneTrafficControlTaskRequest &request);

      /**
       * @summary 对比样本一致性任务
       *
       * @param request CompareSampleConsistencyJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CompareSampleConsistencyJobResponse
       */
      Models::CompareSampleConsistencyJobResponse compareSampleConsistencyJobWithOptions(const string &SampleConsistencyJobId, const Models::CompareSampleConsistencyJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 对比样本一致性任务
       *
       * @param request CompareSampleConsistencyJobRequest
       * @return CompareSampleConsistencyJobResponse
       */
      Models::CompareSampleConsistencyJobResponse compareSampleConsistencyJob(const string &SampleConsistencyJobId, const Models::CompareSampleConsistencyJobRequest &request);

      /**
       * @summary Creates an AB metric.
       *
       * @param request CreateABMetricRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateABMetricResponse
       */
      Models::CreateABMetricResponse createABMetricWithOptions(const Models::CreateABMetricRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an AB metric.
       *
       * @param request CreateABMetricRequest
       * @return CreateABMetricResponse
       */
      Models::CreateABMetricResponse createABMetric(const Models::CreateABMetricRequest &request);

      /**
       * @summary Creates an A/B metric group.
       *
       * @param request CreateABMetricGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateABMetricGroupResponse
       */
      Models::CreateABMetricGroupResponse createABMetricGroupWithOptions(const Models::CreateABMetricGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an A/B metric group.
       *
       * @param request CreateABMetricGroupRequest
       * @return CreateABMetricGroupResponse
       */
      Models::CreateABMetricGroupResponse createABMetricGroup(const Models::CreateABMetricGroupRequest &request);

      /**
       * @summary Creates multiple calculation jobs.
       *
       * @param request CreateCalculationJobsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCalculationJobsResponse
       */
      Models::CreateCalculationJobsResponse createCalculationJobsWithOptions(const Models::CreateCalculationJobsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates multiple calculation jobs.
       *
       * @param request CreateCalculationJobsRequest
       * @return CreateCalculationJobsResponse
       */
      Models::CreateCalculationJobsResponse createCalculationJobs(const Models::CreateCalculationJobsRequest &request);

      /**
       * @summary Creates a crowd that represents a group of users.
       *
       * @param request CreateCrowdRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCrowdResponse
       */
      Models::CreateCrowdResponse createCrowdWithOptions(const Models::CreateCrowdRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a crowd that represents a group of users.
       *
       * @param request CreateCrowdRequest
       * @return CreateCrowdResponse
       */
      Models::CreateCrowdResponse createCrowd(const Models::CreateCrowdRequest &request);

      /**
       * @summary Creates a data diagnosis task. This API supports various analysis types.
       *
       * @description ## Description
       * - This API creates a data diagnosis task. It supports various analysis types, including item or user change rate analysis, user preference statistics cycle analysis, two-table join analysis, basic statistical analysis, and abnormal behavior analysis.
       * - The content of the `Config` parameter depends on the value of the `Type` parameter. For more information, see the example configurations in this topic.
       * - To run the task on a schedule, specify the `CycleTime` parameter. If this parameter is omitted, the task runs only once.
       * - The optional `TopNQuantity` parameter specifies the number of top results to return.
       *
       * @param request CreateDataDiagnosisRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataDiagnosisResponse
       */
      Models::CreateDataDiagnosisResponse createDataDiagnosisWithOptions(const Models::CreateDataDiagnosisRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a data diagnosis task. This API supports various analysis types.
       *
       * @description ## Description
       * - This API creates a data diagnosis task. It supports various analysis types, including item or user change rate analysis, user preference statistics cycle analysis, two-table join analysis, basic statistical analysis, and abnormal behavior analysis.
       * - The content of the `Config` parameter depends on the value of the `Type` parameter. For more information, see the example configurations in this topic.
       * - To run the task on a schedule, specify the `CycleTime` parameter. If this parameter is omitted, the task runs only once.
       * - The optional `TopNQuantity` parameter specifies the number of top results to return.
       *
       * @param request CreateDataDiagnosisRequest
       * @return CreateDataDiagnosisResponse
       */
      Models::CreateDataDiagnosisResponse createDataDiagnosis(const Models::CreateDataDiagnosisRequest &request);

      /**
       * @summary Creates a data diagnosis (rerun) job for a specified time period.
       *
       * @description ## Description
       * This operation creates a data diagnosis (rerun) job for a specific instance within a specified time frame. To ensure the job runs correctly, provide accurate values for the `DataDiagnosisId`, `InstanceId`, `StartDate`, and `EndDate` parameters.
       *
       * @param request CreateDataDiagnosisJobsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataDiagnosisJobsResponse
       */
      Models::CreateDataDiagnosisJobsResponse createDataDiagnosisJobsWithOptions(const Models::CreateDataDiagnosisJobsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a data diagnosis (rerun) job for a specified time period.
       *
       * @description ## Description
       * This operation creates a data diagnosis (rerun) job for a specific instance within a specified time frame. To ensure the job runs correctly, provide accurate values for the `DataDiagnosisId`, `InstanceId`, `StartDate`, and `EndDate` parameters.
       *
       * @param request CreateDataDiagnosisJobsRequest
       * @return CreateDataDiagnosisJobsResponse
       */
      Models::CreateDataDiagnosisJobsResponse createDataDiagnosisJobs(const Models::CreateDataDiagnosisJobsRequest &request);

      /**
       * @summary Creates an engine config.
       *
       * @param request CreateEngineConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEngineConfigResponse
       */
      Models::CreateEngineConfigResponse createEngineConfigWithOptions(const Models::CreateEngineConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an engine config.
       *
       * @param request CreateEngineConfigRequest
       * @return CreateEngineConfigResponse
       */
      Models::CreateEngineConfigResponse createEngineConfig(const Models::CreateEngineConfigRequest &request);

      /**
       * @summary Creates an experiment in a specified experiment group.
       *
       * @param request CreateExperimentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateExperimentResponse
       */
      Models::CreateExperimentResponse createExperimentWithOptions(const Models::CreateExperimentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an experiment in a specified experiment group.
       *
       * @param request CreateExperimentRequest
       * @return CreateExperimentResponse
       */
      Models::CreateExperimentResponse createExperiment(const Models::CreateExperimentRequest &request);

      /**
       * @summary Creates an experiment group in a specified layer. You can use experiment groups to categorize experiments and observe their overall performance.
       *
       * @param request CreateExperimentGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateExperimentGroupResponse
       */
      Models::CreateExperimentGroupResponse createExperimentGroupWithOptions(const Models::CreateExperimentGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an experiment group in a specified layer. You can use experiment groups to categorize experiments and observe their overall performance.
       *
       * @param request CreateExperimentGroupRequest
       * @return CreateExperimentGroupResponse
       */
      Models::CreateExperimentGroupResponse createExperimentGroup(const Models::CreateExperimentGroupRequest &request);

      /**
       * @summary Creates a feature consistency check job.
       *
       * @param request CreateFeatureConsistencyCheckJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFeatureConsistencyCheckJobResponse
       */
      Models::CreateFeatureConsistencyCheckJobResponse createFeatureConsistencyCheckJobWithOptions(const Models::CreateFeatureConsistencyCheckJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a feature consistency check job.
       *
       * @param request CreateFeatureConsistencyCheckJobRequest
       * @return CreateFeatureConsistencyCheckJobResponse
       */
      Models::CreateFeatureConsistencyCheckJobResponse createFeatureConsistencyCheckJob(const Models::CreateFeatureConsistencyCheckJobRequest &request);

      /**
       * @summary Configure a feature consistency check task.
       *
       * @param request CreateFeatureConsistencyCheckJobConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFeatureConsistencyCheckJobConfigResponse
       */
      Models::CreateFeatureConsistencyCheckJobConfigResponse createFeatureConsistencyCheckJobConfigWithOptions(const Models::CreateFeatureConsistencyCheckJobConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configure a feature consistency check task.
       *
       * @param request CreateFeatureConsistencyCheckJobConfigRequest
       * @return CreateFeatureConsistencyCheckJobConfigResponse
       */
      Models::CreateFeatureConsistencyCheckJobConfigResponse createFeatureConsistencyCheckJobConfig(const Models::CreateFeatureConsistencyCheckJobConfigRequest &request);

      /**
       * @summary Creates a configuration resource for a specified instance.
       *
       * @param request CreateInstanceResourceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceResourceResponse
       */
      Models::CreateInstanceResourceResponse createInstanceResourceWithOptions(const string &InstanceId, const Models::CreateInstanceResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a configuration resource for a specified instance.
       *
       * @param request CreateInstanceResourceRequest
       * @return CreateInstanceResourceResponse
       */
      Models::CreateInstanceResourceResponse createInstanceResource(const string &InstanceId, const Models::CreateInstanceResourceRequest &request);

      /**
       * @summary Creates a laboratory. A laboratory isolates a segment of traffic for running experiments.
       *
       * @param request CreateLaboratoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLaboratoryResponse
       */
      Models::CreateLaboratoryResponse createLaboratoryWithOptions(const Models::CreateLaboratoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a laboratory. A laboratory isolates a segment of traffic for running experiments.
       *
       * @param request CreateLaboratoryRequest
       * @return CreateLaboratoryResponse
       */
      Models::CreateLaboratoryResponse createLaboratory(const Models::CreateLaboratoryRequest &request);

      /**
       * @summary Creates a layer in a specified laboratory for layered experiments. Layers are orthogonal to each other, allowing experiments to run independently and preventing traffic starvation.
       *
       * @param request CreateLayerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLayerResponse
       */
      Models::CreateLayerResponse createLayerWithOptions(const Models::CreateLayerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a layer in a specified laboratory for layered experiments. Layers are orthogonal to each other, allowing experiments to run independently and preventing traffic starvation.
       *
       * @param request CreateLayerRequest
       * @return CreateLayerResponse
       */
      Models::CreateLayerResponse createLayer(const Models::CreateLayerRequest &request);

      /**
       * @summary Creates an ABTest parameter for a specific scene in a specified environment.
       *
       * @description ## Operation description.
       *
       * @param request CreateParamRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateParamResponse
       */
      Models::CreateParamResponse createParamWithOptions(const Models::CreateParamRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an ABTest parameter for a specific scene in a specified environment.
       *
       * @description ## Operation description.
       *
       * @param request CreateParamRequest
       * @return CreateParamResponse
       */
      Models::CreateParamResponse createParam(const Models::CreateParamRequest &request);

      /**
       * @summary Initializes a Recall Management configuration, including the instance ID, user information, and network configurations.
       *
       * @description ## Request
       *
       * @param request CreateRecallManagementConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRecallManagementConfigResponse
       */
      Models::CreateRecallManagementConfigResponse createRecallManagementConfigWithOptions(const Models::CreateRecallManagementConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initializes a Recall Management configuration, including the instance ID, user information, and network configurations.
       *
       * @description ## Request
       *
       * @param request CreateRecallManagementConfigRequest
       * @return CreateRecallManagementConfigResponse
       */
      Models::CreateRecallManagementConfigResponse createRecallManagementConfig(const Models::CreateRecallManagementConfigRequest &request);

      /**
       * @summary Creates a new recall management service.
       *
       * @description ## Description
       * To create a recall management service, call this API with a specified instance ID, service name, and service description. Ensure that the `InstanceId` parameter is valid.
       *
       * @param request CreateRecallManagementServiceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRecallManagementServiceResponse
       */
      Models::CreateRecallManagementServiceResponse createRecallManagementServiceWithOptions(const Models::CreateRecallManagementServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a new recall management service.
       *
       * @description ## Description
       * To create a recall management service, call this API with a specified instance ID, service name, and service description. Ensure that the `InstanceId` parameter is valid.
       *
       * @param request CreateRecallManagementServiceRequest
       * @return CreateRecallManagementServiceResponse
       */
      Models::CreateRecallManagementServiceResponse createRecallManagementService(const Models::CreateRecallManagementServiceRequest &request);

      /**
       * @summary Creates a new recall management service version that supports configuring multiple recall strategies.
       *
       * @description ## Request
       * - Use this API to create a new version of a recall management service.
       * - To create a new version from an existing one, specify the source recall management service version ID.
       * - You can configure detailed recall rules, such as the recall name, description, priority, and recall type.
       * - Configure operators such as filter, trigger, feature extraction, and join.
       * - The merge configuration specifies how to merge multiple recall results and supports two merge methods: weight-based and alternating.
       * - All configuration items are optional.
       *
       * @param request CreateRecallManagementServiceVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRecallManagementServiceVersionResponse
       */
      Models::CreateRecallManagementServiceVersionResponse createRecallManagementServiceVersionWithOptions(const string &RecallManagementServiceId, const Models::CreateRecallManagementServiceVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a new recall management service version that supports configuring multiple recall strategies.
       *
       * @description ## Request
       * - Use this API to create a new version of a recall management service.
       * - To create a new version from an existing one, specify the source recall management service version ID.
       * - You can configure detailed recall rules, such as the recall name, description, priority, and recall type.
       * - Configure operators such as filter, trigger, feature extraction, and join.
       * - The merge configuration specifies how to merge multiple recall results and supports two merge methods: weight-based and alternating.
       * - All configuration items are optional.
       *
       * @param request CreateRecallManagementServiceVersionRequest
       * @return CreateRecallManagementServiceVersionResponse
       */
      Models::CreateRecallManagementServiceVersionResponse createRecallManagementServiceVersion(const string &RecallManagementServiceId, const Models::CreateRecallManagementServiceVersionRequest &request);

      /**
       * @summary Creates a configuration for a specified version of the Recall Manager service, including its recall and merge settings.
       *
       * @description ## Request
       * - This API creates a configuration for a specific version of the Recall Management Service.
       * - The `ConfigType` parameter specifies the configuration type, which can be either recall or merge.
       * - Use the `RecallConfig` and `MergeConfig` parameters to provide the recall and merge configurations, respectively.
       * - Required parameters must be provided in the specified data formats.
       * - Optional parameter values must be consistent with your business logic.
       *
       * @param request CreateRecallManagementServiceVersionConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRecallManagementServiceVersionConfigResponse
       */
      Models::CreateRecallManagementServiceVersionConfigResponse createRecallManagementServiceVersionConfigWithOptions(const string &RecallManagementServiceId, const string &RecallManagementServiceVersionId, const Models::CreateRecallManagementServiceVersionConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a configuration for a specified version of the Recall Manager service, including its recall and merge settings.
       *
       * @description ## Request
       * - This API creates a configuration for a specific version of the Recall Management Service.
       * - The `ConfigType` parameter specifies the configuration type, which can be either recall or merge.
       * - Use the `RecallConfig` and `MergeConfig` parameters to provide the recall and merge configurations, respectively.
       * - Required parameters must be provided in the specified data formats.
       * - Optional parameter values must be consistent with your business logic.
       *
       * @param request CreateRecallManagementServiceVersionConfigRequest
       * @return CreateRecallManagementServiceVersionConfigResponse
       */
      Models::CreateRecallManagementServiceVersionConfigResponse createRecallManagementServiceVersionConfig(const string &RecallManagementServiceId, const string &RecallManagementServiceVersionId, const Models::CreateRecallManagementServiceVersionConfigRequest &request);

      /**
       * @summary Creates a recall management table that supports multiple data sources and configuration options.
       *
       * @description ## Request
       * - The **InstanceId**, **Name**, **Description**, **Type**, and **DataSource** parameters are required.
       * - The **RecallType** parameter is optional. If provided, it must be a valid enum value.
       * - For each field in the **Fields** parameter, you must define its name, type, and attributes. You must mark at least one field as Primary.
       * - If you use MaxCompute as the data source, you must specify the **MaxcomputeProjectName** and **MaxcomputeTableName** parameters. The **MaxcomputeSchema** parameter is optional.
       * - For vector fields, the values of the **VectorDimension** and **VectorMetricType** parameters must match the actual data.
       * - Use the **Config** field to provide additional configuration as a JSON string.
       * - Use fluctuation threshold parameters, such as **EnableRowCountFluctuationThreshold**, to monitor changes in row count or table size. Enable these parameters and set appropriate thresholds as needed.
       *
       * @param request CreateRecallManagementTableRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRecallManagementTableResponse
       */
      Models::CreateRecallManagementTableResponse createRecallManagementTableWithOptions(const Models::CreateRecallManagementTableRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a recall management table that supports multiple data sources and configuration options.
       *
       * @description ## Request
       * - The **InstanceId**, **Name**, **Description**, **Type**, and **DataSource** parameters are required.
       * - The **RecallType** parameter is optional. If provided, it must be a valid enum value.
       * - For each field in the **Fields** parameter, you must define its name, type, and attributes. You must mark at least one field as Primary.
       * - If you use MaxCompute as the data source, you must specify the **MaxcomputeProjectName** and **MaxcomputeTableName** parameters. The **MaxcomputeSchema** parameter is optional.
       * - For vector fields, the values of the **VectorDimension** and **VectorMetricType** parameters must match the actual data.
       * - Use the **Config** field to provide additional configuration as a JSON string.
       * - Use fluctuation threshold parameters, such as **EnableRowCountFluctuationThreshold**, to monitor changes in row count or table size. Enable these parameters and set appropriate thresholds as needed.
       *
       * @param request CreateRecallManagementTableRequest
       * @return CreateRecallManagementTableResponse
       */
      Models::CreateRecallManagementTableResponse createRecallManagementTable(const Models::CreateRecallManagementTableRequest &request);

      /**
       * @summary 创建资源规则
       *
       * @param request CreateResourceRuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateResourceRuleResponse
       */
      Models::CreateResourceRuleResponse createResourceRuleWithOptions(const Models::CreateResourceRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建资源规则
       *
       * @param request CreateResourceRuleRequest
       * @return CreateResourceRuleResponse
       */
      Models::CreateResourceRuleResponse createResourceRule(const Models::CreateResourceRuleRequest &request);

      /**
       * @summary 创建资源规则条目
       *
       * @param request CreateResourceRuleItemRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateResourceRuleItemResponse
       */
      Models::CreateResourceRuleItemResponse createResourceRuleItemWithOptions(const string &ResourceRuleId, const Models::CreateResourceRuleItemRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建资源规则条目
       *
       * @param request CreateResourceRuleItemRequest
       * @return CreateResourceRuleItemResponse
       */
      Models::CreateResourceRuleItemResponse createResourceRuleItem(const string &ResourceRuleId, const Models::CreateResourceRuleItemRequest &request);

      /**
       * @summary 创建样本一致性任务
       *
       * @param request CreateSampleConsistencyJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSampleConsistencyJobResponse
       */
      Models::CreateSampleConsistencyJobResponse createSampleConsistencyJobWithOptions(const Models::CreateSampleConsistencyJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建样本一致性任务
       *
       * @param request CreateSampleConsistencyJobRequest
       * @return CreateSampleConsistencyJobResponse
       */
      Models::CreateSampleConsistencyJobResponse createSampleConsistencyJob(const Models::CreateSampleConsistencyJobRequest &request);

      /**
       * @summary Creates a scene for metric and experiment analysis.
       *
       * @param request CreateSceneRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSceneResponse
       */
      Models::CreateSceneResponse createSceneWithOptions(const Models::CreateSceneRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a scene for metric and experiment analysis.
       *
       * @param request CreateSceneRequest
       * @return CreateSceneResponse
       */
      Models::CreateSceneResponse createScene(const Models::CreateSceneRequest &request);

      /**
       * @summary Creates a sub-crowd for a specified crowd.
       *
       * @param request CreateSubCrowdRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSubCrowdResponse
       */
      Models::CreateSubCrowdResponse createSubCrowdWithOptions(const string &CrowdId, const Models::CreateSubCrowdRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a sub-crowd for a specified crowd.
       *
       * @param request CreateSubCrowdRequest
       * @return CreateSubCrowdResponse
       */
      Models::CreateSubCrowdResponse createSubCrowd(const string &CrowdId, const Models::CreateSubCrowdRequest &request);

      /**
       * @summary Creates a data table.
       *
       * @param request CreateTableMetaRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTableMetaResponse
       */
      Models::CreateTableMetaResponse createTableMetaWithOptions(const Models::CreateTableMetaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a data table.
       *
       * @param request CreateTableMetaRequest
       * @return CreateTableMetaResponse
       */
      Models::CreateTableMetaResponse createTableMeta(const Models::CreateTableMetaRequest &request);

      /**
       * @summary Creates a new traffic control target and sets its parameters, such as the item condition, event, and value.
       *
       * @description ## Usage notes
       * - The `ItemConditionType` parameter supports two formats: array format (Array) and expression format (Expression). Based on the format you select, you must provide either `ItemConditionArray` or `ItemConditionExpress`.
       * - The `StatisPeriod` parameter defaults to daily. For hourly statistics, you must set this parameter explicitly.
       * - The `ToleranceValue` and `NewProductRegulation` parameters are optional.
       * - The `Status` parameter controls whether a new traffic control target takes effect immediately. By default, new targets are inactive.
       *
       * @param request CreateTrafficControlTargetRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTrafficControlTargetResponse
       */
      Models::CreateTrafficControlTargetResponse createTrafficControlTargetWithOptions(const Models::CreateTrafficControlTargetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a new traffic control target and sets its parameters, such as the item condition, event, and value.
       *
       * @description ## Usage notes
       * - The `ItemConditionType` parameter supports two formats: array format (Array) and expression format (Expression). Based on the format you select, you must provide either `ItemConditionArray` or `ItemConditionExpress`.
       * - The `StatisPeriod` parameter defaults to daily. For hourly statistics, you must set this parameter explicitly.
       * - The `ToleranceValue` and `NewProductRegulation` parameters are optional.
       * - The `Status` parameter controls whether a new traffic control target takes effect immediately. By default, new targets are inactive.
       *
       * @param request CreateTrafficControlTargetRequest
       * @return CreateTrafficControlTargetResponse
       */
      Models::CreateTrafficControlTargetResponse createTrafficControlTarget(const Models::CreateTrafficControlTargetRequest &request);

      /**
       * @summary Creates a new traffic control task with multiple conditions and target configurations.
       *
       * @description ## Request
       * - Use this API to create a new traffic control task. You can define a traffic control policy for different scenarios, time ranges, and conditions for users or items.
       * - The `ExecutionTime` parameter specifies the execution time mode for the task. If you select the `TimeRange` mode, you must provide both the `StartTime` and `EndTime` parameters.
       * - The `TrafficControlTargets` parameter is required. For each traffic control target, you must specify its name, time range, event type, and expected value.
       * - You can use the `UserConditionType` and `ItemConditionType` parameters to define conditions for the target user group and items.
       * - Set the `ControlLogic` parameter to `Guaranteed` for guaranteed control or to `Approach` for approach control.
       * - To configure new product regulation, use the `NewProductRegulation` field.
       *
       * @param request CreateTrafficControlTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTrafficControlTaskResponse
       */
      Models::CreateTrafficControlTaskResponse createTrafficControlTaskWithOptions(const Models::CreateTrafficControlTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a new traffic control task with multiple conditions and target configurations.
       *
       * @description ## Request
       * - Use this API to create a new traffic control task. You can define a traffic control policy for different scenarios, time ranges, and conditions for users or items.
       * - The `ExecutionTime` parameter specifies the execution time mode for the task. If you select the `TimeRange` mode, you must provide both the `StartTime` and `EndTime` parameters.
       * - The `TrafficControlTargets` parameter is required. For each traffic control target, you must specify its name, time range, event type, and expected value.
       * - You can use the `UserConditionType` and `ItemConditionType` parameters to define conditions for the target user group and items.
       * - Set the `ControlLogic` parameter to `Guaranteed` for guaranteed control or to `Approach` for approach control.
       * - To configure new product regulation, use the `NewProductRegulation` field.
       *
       * @param request CreateTrafficControlTaskRequest
       * @return CreateTrafficControlTaskResponse
       */
      Models::CreateTrafficControlTaskResponse createTrafficControlTask(const Models::CreateTrafficControlTaskRequest &request);

      /**
       * @summary 对指定资源规则中的计算公式进行调试
       *
       * @param tmpReq DebugResourceRuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DebugResourceRuleResponse
       */
      Models::DebugResourceRuleResponse debugResourceRuleWithOptions(const string &ResourceRuleId, const Models::DebugResourceRuleRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 对指定资源规则中的计算公式进行调试
       *
       * @param request DebugResourceRuleRequest
       * @return DebugResourceRuleResponse
       */
      Models::DebugResourceRuleResponse debugResourceRule(const string &ResourceRuleId, const Models::DebugResourceRuleRequest &request);

      /**
       * @summary Deletes the specified A/B test metric.
       *
       * @param request DeleteABMetricRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteABMetricResponse
       */
      Models::DeleteABMetricResponse deleteABMetricWithOptions(const string &ABMetricId, const Models::DeleteABMetricRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the specified A/B test metric.
       *
       * @param request DeleteABMetricRequest
       * @return DeleteABMetricResponse
       */
      Models::DeleteABMetricResponse deleteABMetric(const string &ABMetricId, const Models::DeleteABMetricRequest &request);

      /**
       * @summary Deletes an A/B test metric group.
       *
       * @param request DeleteABMetricGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteABMetricGroupResponse
       */
      Models::DeleteABMetricGroupResponse deleteABMetricGroupWithOptions(const string &ABMetricGroupId, const Models::DeleteABMetricGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an A/B test metric group.
       *
       * @param request DeleteABMetricGroupRequest
       * @return DeleteABMetricGroupResponse
       */
      Models::DeleteABMetricGroupResponse deleteABMetricGroup(const string &ABMetricGroupId, const Models::DeleteABMetricGroupRequest &request);

      /**
       * @summary Delete the specified audience.
       *
       * @param request DeleteCrowdRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCrowdResponse
       */
      Models::DeleteCrowdResponse deleteCrowdWithOptions(const string &CrowdId, const Models::DeleteCrowdRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete the specified audience.
       *
       * @param request DeleteCrowdRequest
       * @return DeleteCrowdResponse
       */
      Models::DeleteCrowdResponse deleteCrowd(const string &CrowdId, const Models::DeleteCrowdRequest &request);

      /**
       * @summary Deletes a data diagnosis configuration using the specified DataDiagnosisId and InstanceId.
       *
       * @description ## Description
       * Ensure you provide the correct `DataDiagnosisId` and `InstanceId` to avoid accidental deletion.
       *
       * @param request DeleteDataDiagnosisRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataDiagnosisResponse
       */
      Models::DeleteDataDiagnosisResponse deleteDataDiagnosisWithOptions(const string &DataDiagnosisId, const Models::DeleteDataDiagnosisRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a data diagnosis configuration using the specified DataDiagnosisId and InstanceId.
       *
       * @description ## Description
       * Ensure you provide the correct `DataDiagnosisId` and `InstanceId` to avoid accidental deletion.
       *
       * @param request DeleteDataDiagnosisRequest
       * @return DeleteDataDiagnosisResponse
       */
      Models::DeleteDataDiagnosisResponse deleteDataDiagnosis(const string &DataDiagnosisId, const Models::DeleteDataDiagnosisRequest &request);

      /**
       * @summary Deletes a specified engine configuration.
       *
       * @description Deletes a specified engine configuration.
       *
       * @param request DeleteEngineConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEngineConfigResponse
       */
      Models::DeleteEngineConfigResponse deleteEngineConfigWithOptions(const string &EngineConfigId, const Models::DeleteEngineConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified engine configuration.
       *
       * @description Deletes a specified engine configuration.
       *
       * @param request DeleteEngineConfigRequest
       * @return DeleteEngineConfigResponse
       */
      Models::DeleteEngineConfigResponse deleteEngineConfig(const string &EngineConfigId, const Models::DeleteEngineConfigRequest &request);

      /**
       * @summary Delete the specified experiment.
       *
       * @param request DeleteExperimentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteExperimentResponse
       */
      Models::DeleteExperimentResponse deleteExperimentWithOptions(const string &ExperimentId, const Models::DeleteExperimentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete the specified experiment.
       *
       * @param request DeleteExperimentRequest
       * @return DeleteExperimentResponse
       */
      Models::DeleteExperimentResponse deleteExperiment(const string &ExperimentId, const Models::DeleteExperimentRequest &request);

      /**
       * @summary Delete the specified experiment group.
       *
       * @param request DeleteExperimentGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteExperimentGroupResponse
       */
      Models::DeleteExperimentGroupResponse deleteExperimentGroupWithOptions(const string &ExperimentGroupId, const Models::DeleteExperimentGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete the specified experiment group.
       *
       * @param request DeleteExperimentGroupRequest
       * @return DeleteExperimentGroupResponse
       */
      Models::DeleteExperimentGroupResponse deleteExperimentGroup(const string &ExperimentGroupId, const Models::DeleteExperimentGroupRequest &request);

      /**
       * @summary Deletes a configuration resource from an instance.
       *
       * @param request DeleteInstanceResourceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteInstanceResourceResponse
       */
      Models::DeleteInstanceResourceResponse deleteInstanceResourceWithOptions(const string &InstanceId, const string &ResourceId, const Models::DeleteInstanceResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a configuration resource from an instance.
       *
       * @param request DeleteInstanceResourceRequest
       * @return DeleteInstanceResourceResponse
       */
      Models::DeleteInstanceResourceResponse deleteInstanceResource(const string &InstanceId, const string &ResourceId, const Models::DeleteInstanceResourceRequest &request);

      /**
       * @summary Delete the specified Lab.
       *
       * @param request DeleteLaboratoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLaboratoryResponse
       */
      Models::DeleteLaboratoryResponse deleteLaboratoryWithOptions(const string &LaboratoryId, const Models::DeleteLaboratoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete the specified Lab.
       *
       * @param request DeleteLaboratoryRequest
       * @return DeleteLaboratoryResponse
       */
      Models::DeleteLaboratoryResponse deleteLaboratory(const string &LaboratoryId, const Models::DeleteLaboratoryRequest &request);

      /**
       * @summary Delete the specified layer.
       *
       * @param request DeleteLayerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLayerResponse
       */
      Models::DeleteLayerResponse deleteLayerWithOptions(const string &LayerId, const Models::DeleteLayerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete the specified layer.
       *
       * @param request DeleteLayerRequest
       * @return DeleteLayerResponse
       */
      Models::DeleteLayerResponse deleteLayer(const string &LayerId, const Models::DeleteLayerRequest &request);

      /**
       * @summary Delete the specified parameter.
       *
       * @param request DeleteParamRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteParamResponse
       */
      Models::DeleteParamResponse deleteParamWithOptions(const string &ParamId, const Models::DeleteParamRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete the specified parameter.
       *
       * @param request DeleteParamRequest
       * @return DeleteParamResponse
       */
      Models::DeleteParamResponse deleteParam(const string &ParamId, const Models::DeleteParamRequest &request);

      /**
       * @summary Deletes a recall management service.
       *
       * @description ## Request description
       * This operation deletes a recall management service based on the RecallManagementServiceId and InstanceId. Before you call this API, ensure you have the correct information for the service to be deleted.
       *
       * @param request DeleteRecallManagementServiceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRecallManagementServiceResponse
       */
      Models::DeleteRecallManagementServiceResponse deleteRecallManagementServiceWithOptions(const string &RecallManagementServiceId, const Models::DeleteRecallManagementServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a recall management service.
       *
       * @description ## Request description
       * This operation deletes a recall management service based on the RecallManagementServiceId and InstanceId. Before you call this API, ensure you have the correct information for the service to be deleted.
       *
       * @param request DeleteRecallManagementServiceRequest
       * @return DeleteRecallManagementServiceResponse
       */
      Models::DeleteRecallManagementServiceResponse deleteRecallManagementService(const string &RecallManagementServiceId, const Models::DeleteRecallManagementServiceRequest &request);

      /**
       * @summary Deletes a specified version of a recall management service.
       *
       * @description ## Request
       * This operation deletes a specific version of a recall management service. You must provide the recall management service ID, the recall management service version ID, and the instance ID. This operation is irreversible, so back up all critical data before proceeding.
       *
       * @param request DeleteRecallManagementServiceVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRecallManagementServiceVersionResponse
       */
      Models::DeleteRecallManagementServiceVersionResponse deleteRecallManagementServiceVersionWithOptions(const string &RecallManagementServiceId, const string &RecallManagementServiceVersionId, const Models::DeleteRecallManagementServiceVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified version of a recall management service.
       *
       * @description ## Request
       * This operation deletes a specific version of a recall management service. You must provide the recall management service ID, the recall management service version ID, and the instance ID. This operation is irreversible, so back up all critical data before proceeding.
       *
       * @param request DeleteRecallManagementServiceVersionRequest
       * @return DeleteRecallManagementServiceVersionResponse
       */
      Models::DeleteRecallManagementServiceVersionResponse deleteRecallManagementServiceVersion(const string &RecallManagementServiceId, const string &RecallManagementServiceVersionId, const Models::DeleteRecallManagementServiceVersionRequest &request);

      /**
       * @summary Deletes the specified recall management service version configuration.
       *
       * @description ## Usage notes
       * - Specify the recall management service ID, recall management version ID, and recall management configuration ID.
       * - `InstanceId` is a required query parameter.
       * - The request fails if any of the specified IDs are invalid.
       *
       * @param request DeleteRecallManagementServiceVersionConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRecallManagementServiceVersionConfigResponse
       */
      Models::DeleteRecallManagementServiceVersionConfigResponse deleteRecallManagementServiceVersionConfigWithOptions(const string &RecallManagementServiceId, const string &RecallManagementServiceVersionId, const string &RecallManagementServiceVersionConfigId, const Models::DeleteRecallManagementServiceVersionConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the specified recall management service version configuration.
       *
       * @description ## Usage notes
       * - Specify the recall management service ID, recall management version ID, and recall management configuration ID.
       * - `InstanceId` is a required query parameter.
       * - The request fails if any of the specified IDs are invalid.
       *
       * @param request DeleteRecallManagementServiceVersionConfigRequest
       * @return DeleteRecallManagementServiceVersionConfigResponse
       */
      Models::DeleteRecallManagementServiceVersionConfigResponse deleteRecallManagementServiceVersionConfig(const string &RecallManagementServiceId, const string &RecallManagementServiceVersionId, const string &RecallManagementServiceVersionConfigId, const Models::DeleteRecallManagementServiceVersionConfigRequest &request);

      /**
       * @summary This API deletes a recall management table using the specified recall management table ID and instance ID.
       *
       * @description ## Request
       * - The required **path parameter** `RecallManagementTableId` specifies the ID of the recall management table to delete.
       * - The required **query parameter** `InstanceId` specifies the ID of the instance.
       * - A successful operation returns a `RequestId` in the response body for request tracking.
       *
       * @param request DeleteRecallManagementTableRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRecallManagementTableResponse
       */
      Models::DeleteRecallManagementTableResponse deleteRecallManagementTableWithOptions(const string &RecallManagementTableId, const Models::DeleteRecallManagementTableRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API deletes a recall management table using the specified recall management table ID and instance ID.
       *
       * @description ## Request
       * - The required **path parameter** `RecallManagementTableId` specifies the ID of the recall management table to delete.
       * - The required **query parameter** `InstanceId` specifies the ID of the instance.
       * - A successful operation returns a `RequestId` in the response body for request tracking.
       *
       * @param request DeleteRecallManagementTableRequest
       * @return DeleteRecallManagementTableResponse
       */
      Models::DeleteRecallManagementTableResponse deleteRecallManagementTable(const string &RecallManagementTableId, const Models::DeleteRecallManagementTableRequest &request);

      /**
       * @summary 删除资源规则
       *
       * @param request DeleteResourceRuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteResourceRuleResponse
       */
      Models::DeleteResourceRuleResponse deleteResourceRuleWithOptions(const string &ResourceRuleId, const Models::DeleteResourceRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除资源规则
       *
       * @param request DeleteResourceRuleRequest
       * @return DeleteResourceRuleResponse
       */
      Models::DeleteResourceRuleResponse deleteResourceRule(const string &ResourceRuleId, const Models::DeleteResourceRuleRequest &request);

      /**
       * @summary 删除资源规则条目
       *
       * @param request DeleteResourceRuleItemRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteResourceRuleItemResponse
       */
      Models::DeleteResourceRuleItemResponse deleteResourceRuleItemWithOptions(const string &ResourceRuleId, const string &ResourceRuleItemId, const Models::DeleteResourceRuleItemRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除资源规则条目
       *
       * @param request DeleteResourceRuleItemRequest
       * @return DeleteResourceRuleItemResponse
       */
      Models::DeleteResourceRuleItemResponse deleteResourceRuleItem(const string &ResourceRuleId, const string &ResourceRuleItemId, const Models::DeleteResourceRuleItemRequest &request);

      /**
       * @summary 删除指定的样本一致性任务
       *
       * @param request DeleteSampleConsistencyJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSampleConsistencyJobResponse
       */
      Models::DeleteSampleConsistencyJobResponse deleteSampleConsistencyJobWithOptions(const string &SampleConsistencyJobId, const Models::DeleteSampleConsistencyJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除指定的样本一致性任务
       *
       * @param request DeleteSampleConsistencyJobRequest
       * @return DeleteSampleConsistencyJobResponse
       */
      Models::DeleteSampleConsistencyJobResponse deleteSampleConsistencyJob(const string &SampleConsistencyJobId, const Models::DeleteSampleConsistencyJobRequest &request);

      /**
       * @summary Delete the specified scenario.
       *
       * @param request DeleteSceneRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSceneResponse
       */
      Models::DeleteSceneResponse deleteSceneWithOptions(const string &SceneId, const Models::DeleteSceneRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete the specified scenario.
       *
       * @param request DeleteSceneRequest
       * @return DeleteSceneResponse
       */
      Models::DeleteSceneResponse deleteScene(const string &SceneId, const Models::DeleteSceneRequest &request);

      /**
       * @summary Deletes the specified subcrowd.
       *
       * @param request DeleteSubCrowdRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSubCrowdResponse
       */
      Models::DeleteSubCrowdResponse deleteSubCrowdWithOptions(const string &CrowdId, const string &SubCrowdId, const Models::DeleteSubCrowdRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the specified subcrowd.
       *
       * @param request DeleteSubCrowdRequest
       * @return DeleteSubCrowdResponse
       */
      Models::DeleteSubCrowdResponse deleteSubCrowd(const string &CrowdId, const string &SubCrowdId, const Models::DeleteSubCrowdRequest &request);

      /**
       * @summary Deletes a data table.
       *
       * @param request DeleteTableMetaRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTableMetaResponse
       */
      Models::DeleteTableMetaResponse deleteTableMetaWithOptions(const string &TableMetaId, const Models::DeleteTableMetaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a data table.
       *
       * @param request DeleteTableMetaRequest
       * @return DeleteTableMetaResponse
       */
      Models::DeleteTableMetaResponse deleteTableMeta(const string &TableMetaId, const Models::DeleteTableMetaRequest &request);

      /**
       * @summary Deletes the specified traffic control target.
       *
       * @description ## Request
       * - **TrafficControlTargetId** is a required path parameter that specifies the traffic control target to delete.
       * - **InstanceId** is a required query parameter that specifies the instance ID for this operation.
       * - A successful response includes a `RequestId` field to track the request.
       *
       * @param request DeleteTrafficControlTargetRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTrafficControlTargetResponse
       */
      Models::DeleteTrafficControlTargetResponse deleteTrafficControlTargetWithOptions(const string &TrafficControlTargetId, const Models::DeleteTrafficControlTargetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the specified traffic control target.
       *
       * @description ## Request
       * - **TrafficControlTargetId** is a required path parameter that specifies the traffic control target to delete.
       * - **InstanceId** is a required query parameter that specifies the instance ID for this operation.
       * - A successful response includes a `RequestId` field to track the request.
       *
       * @param request DeleteTrafficControlTargetRequest
       * @return DeleteTrafficControlTargetResponse
       */
      Models::DeleteTrafficControlTargetResponse deleteTrafficControlTarget(const string &TrafficControlTargetId, const Models::DeleteTrafficControlTargetRequest &request);

      /**
       * @summary Deletes a specified traffic control task.
       *
       * @description ## Description
       * - This API uses `TrafficControlTaskId` and `InstanceId` to delete a traffic control task.
       * - Ensure the `TrafficControlTaskId` and `InstanceId` are correct, or the operation may fail.
       * - This operation is irreversible. Proceed with caution.
       *
       * @param request DeleteTrafficControlTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTrafficControlTaskResponse
       */
      Models::DeleteTrafficControlTaskResponse deleteTrafficControlTaskWithOptions(const string &TrafficControlTaskId, const Models::DeleteTrafficControlTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified traffic control task.
       *
       * @description ## Description
       * - This API uses `TrafficControlTaskId` and `InstanceId` to delete a traffic control task.
       * - Ensure the `TrafficControlTaskId` and `InstanceId` are correct, or the operation may fail.
       * - This operation is irreversible. Proceed with caution.
       *
       * @param request DeleteTrafficControlTaskRequest
       * @return DeleteTrafficControlTaskResponse
       */
      Models::DeleteTrafficControlTaskResponse deleteTrafficControlTask(const string &TrafficControlTaskId, const Models::DeleteTrafficControlTaskRequest &request);

      /**
       * @summary Deploys Flink code for a traffic control task in a specified environment.
       *
       * @description ## Overview
       * - This API deploys Flink code for a specific traffic control task.
       * - `TrafficControlTaskId` is a path parameter and requires a valid task ID.
       * - `InstanceId` and `Environment` are required request body parameters that specify the instance ID and the target deployment environment.
       * - The optional `RetryDeploy` parameter specifies whether to automatically retry the deployment on failure. The default value is `false`.
       * - The value for `Environment` must be one of the following: Daily, Pre, or Prod.
       *
       * @param request DeployTrafficControlTaskCodeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeployTrafficControlTaskCodeResponse
       */
      Models::DeployTrafficControlTaskCodeResponse deployTrafficControlTaskCodeWithOptions(const string &TrafficControlTaskId, const Models::DeployTrafficControlTaskCodeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deploys Flink code for a traffic control task in a specified environment.
       *
       * @description ## Overview
       * - This API deploys Flink code for a specific traffic control task.
       * - `TrafficControlTaskId` is a path parameter and requires a valid task ID.
       * - `InstanceId` and `Environment` are required request body parameters that specify the instance ID and the target deployment environment.
       * - The optional `RetryDeploy` parameter specifies whether to automatically retry the deployment on failure. The default value is `false`.
       * - The value for `Environment` must be one of the following: Daily, Pre, or Prod.
       *
       * @param request DeployTrafficControlTaskCodeRequest
       * @return DeployTrafficControlTaskCodeResponse
       */
      Models::DeployTrafficControlTaskCodeResponse deployTrafficControlTaskCode(const string &TrafficControlTaskId, const Models::DeployTrafficControlTaskCodeRequest &request);

      /**
       * @summary Exports a specified table from the recall engine to a MaxCompute project.
       *
       * @description ## Description
       * Use this API to export a specific table from the recall engine to Alibaba Cloud MaxCompute for further data processing or analysis. Ensure the provided MaxCompute project name, schema, and table name are valid and that you have the required permissions.
       * ### Usage notes
       * - The `Partitions` field must be a JSON object that specifies the table partitions to export.
       * - The request may fail if any required parameters are missing or incorrect.
       * - The export process is asynchronous and may take some time. You can use the returned job ID to track the status of the job.
       *
       * @param request ExportRecallManagementTableRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportRecallManagementTableResponse
       */
      Models::ExportRecallManagementTableResponse exportRecallManagementTableWithOptions(const string &RecallManagementTableId, const Models::ExportRecallManagementTableRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Exports a specified table from the recall engine to a MaxCompute project.
       *
       * @description ## Description
       * Use this API to export a specific table from the recall engine to Alibaba Cloud MaxCompute for further data processing or analysis. Ensure the provided MaxCompute project name, schema, and table name are valid and that you have the required permissions.
       * ### Usage notes
       * - The `Partitions` field must be a JSON object that specifies the table partitions to export.
       * - The request may fail if any required parameters are missing or incorrect.
       * - The export process is asynchronous and may take some time. You can use the returned job ID to track the status of the job.
       *
       * @param request ExportRecallManagementTableRequest
       * @return ExportRecallManagementTableResponse
       */
      Models::ExportRecallManagementTableResponse exportRecallManagementTable(const string &RecallManagementTableId, const Models::ExportRecallManagementTableRequest &request);

      /**
       * @summary Generates an algorithm customization script.
       *
       * @param request GenerateAlgorithmCustomizationScriptRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateAlgorithmCustomizationScriptResponse
       */
      Models::GenerateAlgorithmCustomizationScriptResponse generateAlgorithmCustomizationScriptWithOptions(const string &AlgorithmCustomizationId, const Models::GenerateAlgorithmCustomizationScriptRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates an algorithm customization script.
       *
       * @param request GenerateAlgorithmCustomizationScriptRequest
       * @return GenerateAlgorithmCustomizationScriptResponse
       */
      Models::GenerateAlgorithmCustomizationScriptResponse generateAlgorithmCustomizationScript(const string &AlgorithmCustomizationId, const Models::GenerateAlgorithmCustomizationScriptRequest &request);

      /**
       * @summary Generates Flink code for a specified traffic control task ID and instance information.
       *
       * @description ## Description
       * - This API generates Flink code for a specified traffic control task ID, instance ID, and environment type.
       * - The `Environment` parameter accepts three values: `Daily` for the daily environment, `Pre` for the pre-release environment, and `Prod` for the production environment.
       * - Check the `PreNeedConfig` field in the response. A `true` value indicates that necessary configuration information might be missing in the pre-release environment. If this occurs, add or adjust the required settings.
       *
       * @param request GenerateTrafficControlTaskCodeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateTrafficControlTaskCodeResponse
       */
      Models::GenerateTrafficControlTaskCodeResponse generateTrafficControlTaskCodeWithOptions(const string &TrafficControlTaskId, const Models::GenerateTrafficControlTaskCodeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates Flink code for a specified traffic control task ID and instance information.
       *
       * @description ## Description
       * - This API generates Flink code for a specified traffic control task ID, instance ID, and environment type.
       * - The `Environment` parameter accepts three values: `Daily` for the daily environment, `Pre` for the pre-release environment, and `Prod` for the production environment.
       * - Check the `PreNeedConfig` field in the response. A `true` value indicates that necessary configuration information might be missing in the pre-release environment. If this occurs, add or adjust the required settings.
       *
       * @param request GenerateTrafficControlTaskCodeRequest
       * @return GenerateTrafficControlTaskCodeResponse
       */
      Models::GenerateTrafficControlTaskCodeResponse generateTrafficControlTaskCode(const string &TrafficControlTaskId, const Models::GenerateTrafficControlTaskCodeRequest &request);

      /**
       * @summary 产生流量调控的相关召回配置
       *
       * @param request GenerateTrafficControlTaskConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateTrafficControlTaskConfigResponse
       */
      Models::GenerateTrafficControlTaskConfigResponse generateTrafficControlTaskConfigWithOptions(const string &TrafficControlTaskId, const Models::GenerateTrafficControlTaskConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 产生流量调控的相关召回配置
       *
       * @param request GenerateTrafficControlTaskConfigRequest
       * @return GenerateTrafficControlTaskConfigResponse
       */
      Models::GenerateTrafficControlTaskConfigResponse generateTrafficControlTaskConfig(const string &TrafficControlTaskId, const Models::GenerateTrafficControlTaskConfigRequest &request);

      /**
       * @summary Gets the details of an A/B metric.
       *
       * @param request GetABMetricRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetABMetricResponse
       */
      Models::GetABMetricResponse getABMetricWithOptions(const string &ABMetricId, const Models::GetABMetricRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets the details of an A/B metric.
       *
       * @param request GetABMetricRequest
       * @return GetABMetricResponse
       */
      Models::GetABMetricResponse getABMetric(const string &ABMetricId, const Models::GetABMetricRequest &request);

      /**
       * @summary Retrieves the details of an A/B testing metric group.
       *
       * @param request GetABMetricGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetABMetricGroupResponse
       */
      Models::GetABMetricGroupResponse getABMetricGroupWithOptions(const string &ABMetricGroupId, const Models::GetABMetricGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of an A/B testing metric group.
       *
       * @param request GetABMetricGroupRequest
       * @return GetABMetricGroupResponse
       */
      Models::GetABMetricGroupResponse getABMetricGroup(const string &ABMetricGroupId, const Models::GetABMetricGroupRequest &request);

      /**
       * @summary Gets the details of a specified calculation job.
       *
       * @param request GetCalculationJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCalculationJobResponse
       */
      Models::GetCalculationJobResponse getCalculationJobWithOptions(const string &CalculationJobId, const Models::GetCalculationJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets the details of a specified calculation job.
       *
       * @param request GetCalculationJobRequest
       * @return GetCalculationJobResponse
       */
      Models::GetCalculationJobResponse getCalculationJob(const string &CalculationJobId, const Models::GetCalculationJobRequest &request);

      /**
       * @summary Retrieves details of a data diagnosis task using its data diagnosis task ID and instance ID.
       *
       * @description ## Request
       * - This API retrieves the details of a specific data diagnosis task using the provided `DataDiagnosisId` (data diagnosis task configuration ID) and `InstanceId` (instance ID).
       * - The `CycleTime` field specifies the time for periodic execution. If this field is empty, the task does not execute periodically.
       * - The value of `Type` determines the content of the `Config` field. For details about the required configuration for each type, see the relevant documentation.
       * - `GmtCreateTime` and `GmtModifiedTime` are timestamps for the record\\"s creation and modification times, respectively.
       *
       * @param request GetDataDiagnosisRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataDiagnosisResponse
       */
      Models::GetDataDiagnosisResponse getDataDiagnosisWithOptions(const string &DataDiagnosisId, const Models::GetDataDiagnosisRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves details of a data diagnosis task using its data diagnosis task ID and instance ID.
       *
       * @description ## Request
       * - This API retrieves the details of a specific data diagnosis task using the provided `DataDiagnosisId` (data diagnosis task configuration ID) and `InstanceId` (instance ID).
       * - The `CycleTime` field specifies the time for periodic execution. If this field is empty, the task does not execute periodically.
       * - The value of `Type` determines the content of the `Config` field. For details about the required configuration for each type, see the relevant documentation.
       * - `GmtCreateTime` and `GmtModifiedTime` are timestamps for the record\\"s creation and modification times, respectively.
       *
       * @param request GetDataDiagnosisRequest
       * @return GetDataDiagnosisResponse
       */
      Models::GetDataDiagnosisResponse getDataDiagnosis(const string &DataDiagnosisId, const Models::GetDataDiagnosisRequest &request);

      /**
       * @summary Gets the details of an engine configuration.
       *
       * @param request GetEngineConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEngineConfigResponse
       */
      Models::GetEngineConfigResponse getEngineConfigWithOptions(const string &EngineConfigId, const Models::GetEngineConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets the details of an engine configuration.
       *
       * @param request GetEngineConfigRequest
       * @return GetEngineConfigResponse
       */
      Models::GetEngineConfigResponse getEngineConfig(const string &EngineConfigId, const Models::GetEngineConfigRequest &request);

      /**
       * @summary Retrieves the details of a specified experiment.
       *
       * @param request GetExperimentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetExperimentResponse
       */
      Models::GetExperimentResponse getExperimentWithOptions(const string &ExperimentId, const Models::GetExperimentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a specified experiment.
       *
       * @param request GetExperimentRequest
       * @return GetExperimentResponse
       */
      Models::GetExperimentResponse getExperiment(const string &ExperimentId, const Models::GetExperimentRequest &request);

      /**
       * @summary Retrieves details for a specified experiment group.
       *
       * @param request GetExperimentGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetExperimentGroupResponse
       */
      Models::GetExperimentGroupResponse getExperimentGroupWithOptions(const string &ExperimentGroupId, const Models::GetExperimentGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves details for a specified experiment group.
       *
       * @param request GetExperimentGroupRequest
       * @return GetExperimentGroupResponse
       */
      Models::GetExperimentGroupResponse getExperimentGroup(const string &ExperimentGroupId, const Models::GetExperimentGroupRequest &request);

      /**
       * @summary Gets the details of a feature consistency check job.
       *
       * @param request GetFeatureConsistencyCheckJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFeatureConsistencyCheckJobResponse
       */
      Models::GetFeatureConsistencyCheckJobResponse getFeatureConsistencyCheckJobWithOptions(const string &FeatureConsistencyCheckJobId, const Models::GetFeatureConsistencyCheckJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets the details of a feature consistency check job.
       *
       * @param request GetFeatureConsistencyCheckJobRequest
       * @return GetFeatureConsistencyCheckJobResponse
       */
      Models::GetFeatureConsistencyCheckJobResponse getFeatureConsistencyCheckJob(const string &FeatureConsistencyCheckJobId, const Models::GetFeatureConsistencyCheckJobRequest &request);

      /**
       * @summary Retrieves the configuration details of a feature consistency check task.
       *
       * @param request GetFeatureConsistencyCheckJobConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFeatureConsistencyCheckJobConfigResponse
       */
      Models::GetFeatureConsistencyCheckJobConfigResponse getFeatureConsistencyCheckJobConfigWithOptions(const string &FeatureConsistencyCheckJobConfigId, const Models::GetFeatureConsistencyCheckJobConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the configuration details of a feature consistency check task.
       *
       * @param request GetFeatureConsistencyCheckJobConfigRequest
       * @return GetFeatureConsistencyCheckJobConfigResponse
       */
      Models::GetFeatureConsistencyCheckJobConfigResponse getFeatureConsistencyCheckJobConfig(const string &FeatureConsistencyCheckJobConfigId, const Models::GetFeatureConsistencyCheckJobConfigRequest &request);

      /**
       * @summary Gets the details of a specified PAI-REC instance.
       *
       * @param request GetInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceResponse
       */
      Models::GetInstanceResponse getInstanceWithOptions(const string &InstanceId, const Models::GetInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets the details of a specified PAI-REC instance.
       *
       * @param request GetInstanceRequest
       * @return GetInstanceResponse
       */
      Models::GetInstanceResponse getInstance(const string &InstanceId, const Models::GetInstanceRequest &request);

      /**
       * @summary Retrieves the details of a specific resource in a specified instance.
       *
       * @param request GetInstanceResourceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceResourceResponse
       */
      Models::GetInstanceResourceResponse getInstanceResourceWithOptions(const string &InstanceId, const string &ResourceId, const Models::GetInstanceResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a specific resource in a specified instance.
       *
       * @param request GetInstanceResourceRequest
       * @return GetInstanceResourceResponse
       */
      Models::GetInstanceResourceResponse getInstanceResource(const string &InstanceId, const string &ResourceId, const Models::GetInstanceResourceRequest &request);

      /**
       * @summary Retrieves the schema of a specified data table within a resource.
       *
       * @param request GetInstanceResourceTableRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceResourceTableResponse
       */
      Models::GetInstanceResourceTableResponse getInstanceResourceTableWithOptions(const string &InstanceId, const string &ResourceId, const string &TableName, const Models::GetInstanceResourceTableRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the schema of a specified data table within a resource.
       *
       * @param request GetInstanceResourceTableRequest
       * @return GetInstanceResourceTableResponse
       */
      Models::GetInstanceResourceTableResponse getInstanceResourceTable(const string &InstanceId, const string &ResourceId, const string &TableName, const Models::GetInstanceResourceTableRequest &request);

      /**
       * @summary Retrieves the details of a specified laboratory.
       *
       * @param request GetLaboratoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLaboratoryResponse
       */
      Models::GetLaboratoryResponse getLaboratoryWithOptions(const string &LaboratoryId, const Models::GetLaboratoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a specified laboratory.
       *
       * @param request GetLaboratoryRequest
       * @return GetLaboratoryResponse
       */
      Models::GetLaboratoryResponse getLaboratory(const string &LaboratoryId, const Models::GetLaboratoryRequest &request);

      /**
       * @summary Retrieves the details of a specified layer.
       *
       * @param request GetLayerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLayerResponse
       */
      Models::GetLayerResponse getLayerWithOptions(const string &LayerId, const Models::GetLayerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a specified layer.
       *
       * @param request GetLayerRequest
       * @return GetLayerResponse
       */
      Models::GetLayerResponse getLayer(const string &LayerId, const Models::GetLayerRequest &request);

      /**
       * @summary Retrieves the recall management configuration.
       *
       * @param request GetRecallManagementConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRecallManagementConfigResponse
       */
      Models::GetRecallManagementConfigResponse getRecallManagementConfigWithOptions(const Models::GetRecallManagementConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the recall management configuration.
       *
       * @param request GetRecallManagementConfigRequest
       * @return GetRecallManagementConfigResponse
       */
      Models::GetRecallManagementConfigResponse getRecallManagementConfig(const Models::GetRecallManagementConfigRequest &request);

      /**
       * @summary Retrieves the details of a specific recall management job, including its status and log.
       *
       * @description ## Description
       * Retrieves the details of a specific recall management job using its `RecallManagementJobId` and `InstanceId`. The response includes the job\\"s status (such as Init, Running, Success, or Failed), start and end times, related table information, and operation log. To make a request, specify the `RecallManagementJobId` as a path parameter and the `InstanceId` as a query parameter.
       *
       * @param request GetRecallManagementJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRecallManagementJobResponse
       */
      Models::GetRecallManagementJobResponse getRecallManagementJobWithOptions(const string &RecallManagementJobId, const Models::GetRecallManagementJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a specific recall management job, including its status and log.
       *
       * @description ## Description
       * Retrieves the details of a specific recall management job using its `RecallManagementJobId` and `InstanceId`. The response includes the job\\"s status (such as Init, Running, Success, or Failed), start and end times, related table information, and operation log. To make a request, specify the `RecallManagementJobId` as a path parameter and the `InstanceId` as a query parameter.
       *
       * @param request GetRecallManagementJobRequest
       * @return GetRecallManagementJobResponse
       */
      Models::GetRecallManagementJobResponse getRecallManagementJob(const string &RecallManagementJobId, const Models::GetRecallManagementJobRequest &request);

      /**
       * @summary Retrieves the details of a specified recall management service, including its status and version.
       *
       * @description ## Request
       *
       * @param request GetRecallManagementServiceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRecallManagementServiceResponse
       */
      Models::GetRecallManagementServiceResponse getRecallManagementServiceWithOptions(const string &RecallManagementServiceId, const Models::GetRecallManagementServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a specified recall management service, including its status and version.
       *
       * @description ## Request
       *
       * @param request GetRecallManagementServiceRequest
       * @return GetRecallManagementServiceResponse
       */
      Models::GetRecallManagementServiceResponse getRecallManagementService(const string &RecallManagementServiceId, const Models::GetRecallManagementServiceRequest &request);

      /**
       * @summary Retrieves the version details of the recall management service.
       *
       * @param request GetRecallManagementServiceVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRecallManagementServiceVersionResponse
       */
      Models::GetRecallManagementServiceVersionResponse getRecallManagementServiceVersionWithOptions(const string &RecallManagementServiceId, const string &RecallManagementServiceVersionId, const Models::GetRecallManagementServiceVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the version details of the recall management service.
       *
       * @param request GetRecallManagementServiceVersionRequest
       * @return GetRecallManagementServiceVersionResponse
       */
      Models::GetRecallManagementServiceVersionResponse getRecallManagementServiceVersion(const string &RecallManagementServiceId, const string &RecallManagementServiceVersionId, const Models::GetRecallManagementServiceVersionRequest &request);

      /**
       * @summary This API retrieves the configuration details of a specific recall management service version.
       *
       * @description ## Request
       * Retrieves the configuration details for a specific version of a Recall Management Service by specifying its service, version, and configuration IDs. Ensure the parameter values are correct. The `InstanceId` is crucial for locating the correct instance.
       * - **Note**: All path parameters (`RecallManagementServiceId`, `RecallManagementServiceVersionId`, and `RecallManagementServiceVersionConfigId`) are required and must reference an existing resource.
       * - **Extended configuration**: The response includes the `ExtendedConfig` field, which is used for future extensions and custom settings. Parse this field as needed.
       *
       * @param request GetRecallManagementServiceVersionConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRecallManagementServiceVersionConfigResponse
       */
      Models::GetRecallManagementServiceVersionConfigResponse getRecallManagementServiceVersionConfigWithOptions(const string &RecallManagementServiceId, const string &RecallManagementServiceVersionId, const string &RecallManagementServiceVersionConfigId, const Models::GetRecallManagementServiceVersionConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API retrieves the configuration details of a specific recall management service version.
       *
       * @description ## Request
       * Retrieves the configuration details for a specific version of a Recall Management Service by specifying its service, version, and configuration IDs. Ensure the parameter values are correct. The `InstanceId` is crucial for locating the correct instance.
       * - **Note**: All path parameters (`RecallManagementServiceId`, `RecallManagementServiceVersionId`, and `RecallManagementServiceVersionConfigId`) are required and must reference an existing resource.
       * - **Extended configuration**: The response includes the `ExtendedConfig` field, which is used for future extensions and custom settings. Parse this field as needed.
       *
       * @param request GetRecallManagementServiceVersionConfigRequest
       * @return GetRecallManagementServiceVersionConfigResponse
       */
      Models::GetRecallManagementServiceVersionConfigResponse getRecallManagementServiceVersionConfig(const string &RecallManagementServiceId, const string &RecallManagementServiceVersionId, const string &RecallManagementServiceVersionConfigId, const Models::GetRecallManagementServiceVersionConfigRequest &request);

      /**
       * @summary Retrieves the details of a specified recall management table, including its table structure and configuration.
       *
       * @description ## Request
       * This API retrieves details of a specific recall management table using the provided `RecallManagementTableId` and `InstanceId`. Ensure you provide the correct values for these parameters.
       * - **Note**: The `CanDelete` field indicates whether the data table supports delete operations. Use this value to control delete functionality in your application.
       * - The `Fields` list contains the definitions for each field in the data table, including their name, type, and properties.
       * - To monitor data changes, you can configure or query the fluctuation thresholds for row count and size using the corresponding fields.
       *
       * @param request GetRecallManagementTableRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRecallManagementTableResponse
       */
      Models::GetRecallManagementTableResponse getRecallManagementTableWithOptions(const string &RecallManagementTableId, const Models::GetRecallManagementTableRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a specified recall management table, including its table structure and configuration.
       *
       * @description ## Request
       * This API retrieves details of a specific recall management table using the provided `RecallManagementTableId` and `InstanceId`. Ensure you provide the correct values for these parameters.
       * - **Note**: The `CanDelete` field indicates whether the data table supports delete operations. Use this value to control delete functionality in your application.
       * - The `Fields` list contains the definitions for each field in the data table, including their name, type, and properties.
       * - To monitor data changes, you can configure or query the fluctuation thresholds for row count and size using the corresponding fields.
       *
       * @param request GetRecallManagementTableRequest
       * @return GetRecallManagementTableResponse
       */
      Models::GetRecallManagementTableResponse getRecallManagementTable(const string &RecallManagementTableId, const Models::GetRecallManagementTableRequest &request);

      /**
       * @summary 获取资源规则详细信息
       *
       * @param request GetResourceRuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceRuleResponse
       */
      Models::GetResourceRuleResponse getResourceRuleWithOptions(const string &ResourceRuleId, const Models::GetResourceRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取资源规则详细信息
       *
       * @param request GetResourceRuleRequest
       * @return GetResourceRuleResponse
       */
      Models::GetResourceRuleResponse getResourceRule(const string &ResourceRuleId, const Models::GetResourceRuleRequest &request);

      /**
       * @summary 获取样本一致性任务详细信息
       *
       * @param request GetSampleConsistencyJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSampleConsistencyJobResponse
       */
      Models::GetSampleConsistencyJobResponse getSampleConsistencyJobWithOptions(const string &SampleConsistencyJobId, const Models::GetSampleConsistencyJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取样本一致性任务详细信息
       *
       * @param request GetSampleConsistencyJobRequest
       * @return GetSampleConsistencyJobResponse
       */
      Models::GetSampleConsistencyJobResponse getSampleConsistencyJob(const string &SampleConsistencyJobId, const Models::GetSampleConsistencyJobRequest &request);

      /**
       * @summary Retrieves the details of a specified scene.
       *
       * @param request GetSceneRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSceneResponse
       */
      Models::GetSceneResponse getSceneWithOptions(const string &SceneId, const Models::GetSceneRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a specified scene.
       *
       * @param request GetSceneRequest
       * @return GetSceneResponse
       */
      Models::GetSceneResponse getScene(const string &SceneId, const Models::GetSceneRequest &request);

      /**
       * @summary Retrieves the details of a service.
       *
       * @param request GetServiceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServiceResponse
       */
      Models::GetServiceResponse getServiceWithOptions(const string &ServiceId, const Models::GetServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a service.
       *
       * @param request GetServiceRequest
       * @return GetServiceResponse
       */
      Models::GetServiceResponse getService(const string &ServiceId, const Models::GetServiceRequest &request);

      /**
       * @summary Retrieves the details of a sub-crowd.
       *
       * @param request GetSubCrowdRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSubCrowdResponse
       */
      Models::GetSubCrowdResponse getSubCrowdWithOptions(const string &CrowdId, const string &SubCrowdId, const Models::GetSubCrowdRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a sub-crowd.
       *
       * @param request GetSubCrowdRequest
       * @return GetSubCrowdResponse
       */
      Models::GetSubCrowdResponse getSubCrowd(const string &CrowdId, const string &SubCrowdId, const Models::GetSubCrowdRequest &request);

      /**
       * @summary Returns the details of a table.
       *
       * @param request GetTableMetaRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTableMetaResponse
       */
      Models::GetTableMetaResponse getTableMetaWithOptions(const string &TableMetaId, const Models::GetTableMetaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Returns the details of a table.
       *
       * @param request GetTableMetaRequest
       * @return GetTableMetaResponse
       */
      Models::GetTableMetaResponse getTableMeta(const string &TableMetaId, const Models::GetTableMetaRequest &request);

      /**
       * @summary Gets the details of a traffic throttling objective by its ID.
       *
       * @description ## Request
       * Retrieves the detailed configuration of a traffic control target. The configuration includes the target name, time range, and condition settings. This operation requires the `TrafficControlTargetId` and `InstanceId` parameters.
       *
       * @param request GetTrafficControlTargetRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTrafficControlTargetResponse
       */
      Models::GetTrafficControlTargetResponse getTrafficControlTargetWithOptions(const string &TrafficControlTargetId, const Models::GetTrafficControlTargetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets the details of a traffic throttling objective by its ID.
       *
       * @description ## Request
       * Retrieves the detailed configuration of a traffic control target. The configuration includes the target name, time range, and condition settings. This operation requires the `TrafficControlTargetId` and `InstanceId` parameters.
       *
       * @param request GetTrafficControlTargetRequest
       * @return GetTrafficControlTargetResponse
       */
      Models::GetTrafficControlTargetResponse getTrafficControlTarget(const string &TrafficControlTargetId, const Models::GetTrafficControlTargetRequest &request);

      /**
       * @summary Queries the details of a traffic control task with a specified ID.
       *
       * @description ## Description
       * - This operation retrieves the details of a specific traffic control task, including but not limited to the task name, description, and status.
       * - TrafficControlTaskId and InstanceId are required parameters that specify the task ID and instance ID to query.
       * - Optional parameters such as Environment, Version, and ControlTargetFilter help refine the request to retrieve more specific task data or version information.
       * - Check the returned data structure, especially the TrafficControlTargets section, which contains multiple control targets and their related properties.
       *
       * @param request GetTrafficControlTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTrafficControlTaskResponse
       */
      Models::GetTrafficControlTaskResponse getTrafficControlTaskWithOptions(const string &TrafficControlTaskId, const Models::GetTrafficControlTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a traffic control task with a specified ID.
       *
       * @description ## Description
       * - This operation retrieves the details of a specific traffic control task, including but not limited to the task name, description, and status.
       * - TrafficControlTaskId and InstanceId are required parameters that specify the task ID and instance ID to query.
       * - Optional parameters such as Environment, Version, and ControlTargetFilter help refine the request to retrieve more specific task data or version information.
       * - Check the returned data structure, especially the TrafficControlTargets section, which contains multiple control targets and their related properties.
       *
       * @param request GetTrafficControlTaskRequest
       * @return GetTrafficControlTaskResponse
       */
      Models::GetTrafficControlTaskResponse getTrafficControlTask(const string &TrafficControlTaskId, const Models::GetTrafficControlTaskRequest &request);

      /**
       * @summary Retrieves traffic allocation details for a specific traffic control task.
       *
       * @description ## Description
       * This API retrieves the traffic details for a specific traffic control task. The request must include the `TrafficControlTaskId`, `InstanceId`, and `Environment`.
       * - `TrafficControlTaskId`: The unique identifier for the traffic control task.
       * - `InstanceId`: The instance ID.
       * - `Environment`: The environment type, such as the production environment (Prod).
       * The response includes the traffic allocation for each experiment and traffic control target. This data allows you to analyze and manage your traffic control strategies.
       *
       * @param request GetTrafficControlTaskTrafficRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTrafficControlTaskTrafficResponse
       */
      Models::GetTrafficControlTaskTrafficResponse getTrafficControlTaskTrafficWithOptions(const string &TrafficControlTaskId, const Models::GetTrafficControlTaskTrafficRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves traffic allocation details for a specific traffic control task.
       *
       * @description ## Description
       * This API retrieves the traffic details for a specific traffic control task. The request must include the `TrafficControlTaskId`, `InstanceId`, and `Environment`.
       * - `TrafficControlTaskId`: The unique identifier for the traffic control task.
       * - `InstanceId`: The instance ID.
       * - `Environment`: The environment type, such as the production environment (Prod).
       * The response includes the traffic allocation for each experiment and traffic control target. This data allows you to analyze and manage your traffic control strategies.
       *
       * @param request GetTrafficControlTaskTrafficRequest
       * @return GetTrafficControlTaskTrafficResponse
       */
      Models::GetTrafficControlTaskTrafficResponse getTrafficControlTaskTraffic(const string &TrafficControlTaskId, const Models::GetTrafficControlTaskTrafficRequest &request);

      /**
       * @summary Retrieves a list of A/B metric groups.
       *
       * @param request ListABMetricGroupsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListABMetricGroupsResponse
       */
      Models::ListABMetricGroupsResponse listABMetricGroupsWithOptions(const Models::ListABMetricGroupsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of A/B metric groups.
       *
       * @param request ListABMetricGroupsRequest
       * @return ListABMetricGroupsResponse
       */
      Models::ListABMetricGroupsResponse listABMetricGroups(const Models::ListABMetricGroupsRequest &request);

      /**
       * @summary Lists A/B testing metrics.
       *
       * @param request ListABMetricsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListABMetricsResponse
       */
      Models::ListABMetricsResponse listABMetricsWithOptions(const Models::ListABMetricsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists A/B testing metrics.
       *
       * @param request ListABMetricsRequest
       * @return ListABMetricsResponse
       */
      Models::ListABMetricsResponse listABMetrics(const Models::ListABMetricsRequest &request);

      /**
       * @summary Lists calculation jobs.
       *
       * @param request ListCalculationJobsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCalculationJobsResponse
       */
      Models::ListCalculationJobsResponse listCalculationJobsWithOptions(const Models::ListCalculationJobsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists calculation jobs.
       *
       * @param request ListCalculationJobsRequest
       * @return ListCalculationJobsResponse
       */
      Models::ListCalculationJobsResponse listCalculationJobs(const Models::ListCalculationJobsRequest &request);

      /**
       * @summary Retrieves all users within a specified crowd, including those in its sub-crowds.
       *
       * @param request ListCrowdUsersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCrowdUsersResponse
       */
      Models::ListCrowdUsersResponse listCrowdUsersWithOptions(const string &CrowdId, const Models::ListCrowdUsersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves all users within a specified crowd, including those in its sub-crowds.
       *
       * @param request ListCrowdUsersRequest
       * @return ListCrowdUsersResponse
       */
      Models::ListCrowdUsersResponse listCrowdUsers(const string &CrowdId, const Models::ListCrowdUsersRequest &request);

      /**
       * @summary Lists the Crowds in a specified instance.
       *
       * @param request ListCrowdsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCrowdsResponse
       */
      Models::ListCrowdsResponse listCrowdsWithOptions(const Models::ListCrowdsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the Crowds in a specified instance.
       *
       * @param request ListCrowdsRequest
       * @return ListCrowdsResponse
       */
      Models::ListCrowdsResponse listCrowds(const Models::ListCrowdsRequest &request);

      /**
       * @summary Lists the data diagnostic tasks for the specified instance.
       *
       * @description ## Request
       * This API retrieves a list of data diagnosis tasks. It requires the `InstanceId` parameter and accepts optional parameters—such as data diagnosis type, page number, and page size—for filtering and pagination.
       * - The **Types** parameter accepts multiple data diagnosis types, allowing you to view reports for all selected types at once.
       * - To paginate results, use the `PageNumber` and `PageSize` parameters.
       *
       * @param tmpReq ListDataDiagnosesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataDiagnosesResponse
       */
      Models::ListDataDiagnosesResponse listDataDiagnosesWithOptions(const Models::ListDataDiagnosesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the data diagnostic tasks for the specified instance.
       *
       * @description ## Request
       * This API retrieves a list of data diagnosis tasks. It requires the `InstanceId` parameter and accepts optional parameters—such as data diagnosis type, page number, and page size—for filtering and pagination.
       * - The **Types** parameter accepts multiple data diagnosis types, allowing you to view reports for all selected types at once.
       * - To paginate results, use the `PageNumber` and `PageSize` parameters.
       *
       * @param request ListDataDiagnosesRequest
       * @return ListDataDiagnosesResponse
       */
      Models::ListDataDiagnosesResponse listDataDiagnoses(const Models::ListDataDiagnosesRequest &request);

      /**
       * @summary Queries data diagnosis jobs for a specified instance.
       *
       * @description ## Description
       * This API retrieves data diagnosis jobs for a specific instance. You can filter the jobs by parameters such as `InstanceId` and `Status`, and use the `PageNumber` and `PageSize` parameters to control pagination.
       * - The **InstanceId** parameter is required and specifies the instance to query.
       * - Optional parameters include **Status**, **Types**, **PageNumber**, and **PageSize**.
       * - Note: If you omit filter conditions, the operation returns all matching data diagnosis jobs.
       *
       * @param tmpReq ListDataDiagnosisJobsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataDiagnosisJobsResponse
       */
      Models::ListDataDiagnosisJobsResponse listDataDiagnosisJobsWithOptions(const Models::ListDataDiagnosisJobsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries data diagnosis jobs for a specified instance.
       *
       * @description ## Description
       * This API retrieves data diagnosis jobs for a specific instance. You can filter the jobs by parameters such as `InstanceId` and `Status`, and use the `PageNumber` and `PageSize` parameters to control pagination.
       * - The **InstanceId** parameter is required and specifies the instance to query.
       * - Optional parameters include **Status**, **Types**, **PageNumber**, and **PageSize**.
       * - Note: If you omit filter conditions, the operation returns all matching data diagnosis jobs.
       *
       * @param request ListDataDiagnosisJobsRequest
       * @return ListDataDiagnosisJobsResponse
       */
      Models::ListDataDiagnosisJobsResponse listDataDiagnosisJobs(const Models::ListDataDiagnosisJobsRequest &request);

      /**
       * @summary Specify parameters to retrieve data diagnosis reports for a specific time range.
       *
       * @description ## Request
       * - This API retrieves data diagnosis reports based on parameters such as the data diagnosis ID, instance ID, and a date range.
       * - The `FeatureName` parameter filters reports by a specific feature, and the `TopN` parameter limits the number of results.
       * - The `RemainRateType` parameter specifies the type of retention rate report, such as a periodic report.
       * - Report content includes item and user change rate analysis, periodic user preference analysis, correlation analysis, basic statistical analysis, and anomaly detection.
       * - Important: All date values must use the `YYYY-MM-DD` format.
       *
       * @param request ListDataDiagnosisReportsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataDiagnosisReportsResponse
       */
      Models::ListDataDiagnosisReportsResponse listDataDiagnosisReportsWithOptions(const string &DataDiagnosisId, const Models::ListDataDiagnosisReportsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Specify parameters to retrieve data diagnosis reports for a specific time range.
       *
       * @description ## Request
       * - This API retrieves data diagnosis reports based on parameters such as the data diagnosis ID, instance ID, and a date range.
       * - The `FeatureName` parameter filters reports by a specific feature, and the `TopN` parameter limits the number of results.
       * - The `RemainRateType` parameter specifies the type of retention rate report, such as a periodic report.
       * - Report content includes item and user change rate analysis, periodic user preference analysis, correlation analysis, basic statistical analysis, and anomaly detection.
       * - Important: All date values must use the `YYYY-MM-DD` format.
       *
       * @param request ListDataDiagnosisReportsRequest
       * @return ListDataDiagnosisReportsResponse
       */
      Models::ListDataDiagnosisReportsResponse listDataDiagnosisReports(const string &DataDiagnosisId, const Models::ListDataDiagnosisReportsRequest &request);

      /**
       * @summary Retrieves a list of engine configurations.
       *
       * @param request ListEngineConfigsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEngineConfigsResponse
       */
      Models::ListEngineConfigsResponse listEngineConfigsWithOptions(const Models::ListEngineConfigsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of engine configurations.
       *
       * @param request ListEngineConfigsRequest
       * @return ListEngineConfigsResponse
       */
      Models::ListEngineConfigsResponse listEngineConfigs(const Models::ListEngineConfigsRequest &request);

      /**
       * @summary Returns a list of experiment groups.
       *
       * @param request ListExperimentGroupsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListExperimentGroupsResponse
       */
      Models::ListExperimentGroupsResponse listExperimentGroupsWithOptions(const Models::ListExperimentGroupsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Returns a list of experiment groups.
       *
       * @param request ListExperimentGroupsRequest
       * @return ListExperimentGroupsResponse
       */
      Models::ListExperimentGroupsResponse listExperimentGroups(const Models::ListExperimentGroupsRequest &request);

      /**
       * @summary Lists the experiments in the specified experiment group.
       *
       * @param request ListExperimentsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListExperimentsResponse
       */
      Models::ListExperimentsResponse listExperimentsWithOptions(const Models::ListExperimentsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the experiments in the specified experiment group.
       *
       * @param request ListExperimentsRequest
       * @return ListExperimentsResponse
       */
      Models::ListExperimentsResponse listExperiments(const Models::ListExperimentsRequest &request);

      /**
       * @summary Retrieves a list of feature consistency check task configurations.
       *
       * @param request ListFeatureConsistencyCheckJobConfigsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFeatureConsistencyCheckJobConfigsResponse
       */
      Models::ListFeatureConsistencyCheckJobConfigsResponse listFeatureConsistencyCheckJobConfigsWithOptions(const Models::ListFeatureConsistencyCheckJobConfigsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of feature consistency check task configurations.
       *
       * @param request ListFeatureConsistencyCheckJobConfigsRequest
       * @return ListFeatureConsistencyCheckJobConfigsResponse
       */
      Models::ListFeatureConsistencyCheckJobConfigsResponse listFeatureConsistencyCheckJobConfigs(const Models::ListFeatureConsistencyCheckJobConfigsRequest &request);

      /**
       * @summary Lists feature reports for a feature consistency check job.
       *
       * @param request ListFeatureConsistencyCheckJobFeatureReportsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFeatureConsistencyCheckJobFeatureReportsResponse
       */
      Models::ListFeatureConsistencyCheckJobFeatureReportsResponse listFeatureConsistencyCheckJobFeatureReportsWithOptions(const string &FeatureConsistencyCheckJobId, const Models::ListFeatureConsistencyCheckJobFeatureReportsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists feature reports for a feature consistency check job.
       *
       * @param request ListFeatureConsistencyCheckJobFeatureReportsRequest
       * @return ListFeatureConsistencyCheckJobFeatureReportsResponse
       */
      Models::ListFeatureConsistencyCheckJobFeatureReportsResponse listFeatureConsistencyCheckJobFeatureReports(const string &FeatureConsistencyCheckJobId, const Models::ListFeatureConsistencyCheckJobFeatureReportsRequest &request);

      /**
       * @summary Retrieves the score difference reports for a feature consistency check job.
       *
       * @param tmpReq ListFeatureConsistencyCheckJobScoreReportsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFeatureConsistencyCheckJobScoreReportsResponse
       */
      Models::ListFeatureConsistencyCheckJobScoreReportsResponse listFeatureConsistencyCheckJobScoreReportsWithOptions(const string &FeatureConsistencyCheckJobId, const Models::ListFeatureConsistencyCheckJobScoreReportsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the score difference reports for a feature consistency check job.
       *
       * @param request ListFeatureConsistencyCheckJobScoreReportsRequest
       * @return ListFeatureConsistencyCheckJobScoreReportsResponse
       */
      Models::ListFeatureConsistencyCheckJobScoreReportsResponse listFeatureConsistencyCheckJobScoreReports(const string &FeatureConsistencyCheckJobId, const Models::ListFeatureConsistencyCheckJobScoreReportsRequest &request);

      /**
       * @summary Retrieves a list of feature consistency check jobs.
       *
       * @param request ListFeatureConsistencyCheckJobsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFeatureConsistencyCheckJobsResponse
       */
      Models::ListFeatureConsistencyCheckJobsResponse listFeatureConsistencyCheckJobsWithOptions(const Models::ListFeatureConsistencyCheckJobsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of feature consistency check jobs.
       *
       * @param request ListFeatureConsistencyCheckJobsRequest
       * @return ListFeatureConsistencyCheckJobsResponse
       */
      Models::ListFeatureConsistencyCheckJobsResponse listFeatureConsistencyCheckJobs(const Models::ListFeatureConsistencyCheckJobsRequest &request);

      /**
       * @summary Lists all schemas for a specified resource in an instance.
       *
       * @description ## Description
       * To retrieve a list of all schemas for a specified resource, provide the instance ID (InstanceId) and resource ID (ResourceId). Use the optional SchemaName parameter to filter the schemas by a name prefix.
       *
       * @param request ListInstanceResourceSchemasRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstanceResourceSchemasResponse
       */
      Models::ListInstanceResourceSchemasResponse listInstanceResourceSchemasWithOptions(const string &InstanceId, const string &ResourceId, const Models::ListInstanceResourceSchemasRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists all schemas for a specified resource in an instance.
       *
       * @description ## Description
       * To retrieve a list of all schemas for a specified resource, provide the instance ID (InstanceId) and resource ID (ResourceId). Use the optional SchemaName parameter to filter the schemas by a name prefix.
       *
       * @param request ListInstanceResourceSchemasRequest
       * @return ListInstanceResourceSchemasResponse
       */
      Models::ListInstanceResourceSchemasResponse listInstanceResourceSchemas(const string &InstanceId, const string &ResourceId, const Models::ListInstanceResourceSchemasRequest &request);

      /**
       * @summary Retrieves a list of data tables for a specified instance and data source.
       *
       * @description ## Description
       * Provide the instance ID (InstanceId) and data source ID (ResourceId) to retrieve a list of data tables from the specified data source. Use the optional `MaxcomputeSchema` parameter to filter the results by a MaxCompute schema.
       *
       * @param request ListInstanceResourceTablesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstanceResourceTablesResponse
       */
      Models::ListInstanceResourceTablesResponse listInstanceResourceTablesWithOptions(const string &InstanceId, const string &ResourceId, const Models::ListInstanceResourceTablesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of data tables for a specified instance and data source.
       *
       * @description ## Description
       * Provide the instance ID (InstanceId) and data source ID (ResourceId) to retrieve a list of data tables from the specified data source. Use the optional `MaxcomputeSchema` parameter to filter the results by a MaxCompute schema.
       *
       * @param request ListInstanceResourceTablesRequest
       * @return ListInstanceResourceTablesResponse
       */
      Models::ListInstanceResourceTablesResponse listInstanceResourceTables(const string &InstanceId, const string &ResourceId, const Models::ListInstanceResourceTablesRequest &request);

      /**
       * @summary Lists the resources configured for an instance.
       *
       * @param request ListInstanceResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstanceResourcesResponse
       */
      Models::ListInstanceResourcesResponse listInstanceResourcesWithOptions(const string &InstanceId, const Models::ListInstanceResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the resources configured for an instance.
       *
       * @param request ListInstanceResourcesRequest
       * @return ListInstanceResourcesResponse
       */
      Models::ListInstanceResourcesResponse listInstanceResources(const string &InstanceId, const Models::ListInstanceResourcesRequest &request);

      /**
       * @summary Gets a list of PAIRec instances.
       *
       * @param request ListInstancesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstancesWithOptions(const Models::ListInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets a list of PAIRec instances.
       *
       * @param request ListInstancesRequest
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstances(const Models::ListInstancesRequest &request);

      /**
       * @summary Retrieves the laboratories in a specified scene.
       *
       * @param request ListLaboratoriesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLaboratoriesResponse
       */
      Models::ListLaboratoriesResponse listLaboratoriesWithOptions(const Models::ListLaboratoriesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the laboratories in a specified scene.
       *
       * @param request ListLaboratoriesRequest
       * @return ListLaboratoriesResponse
       */
      Models::ListLaboratoriesResponse listLaboratories(const Models::ListLaboratoriesRequest &request);

      /**
       * @summary Retrieves a list of layers in a specified laboratory.
       *
       * @param request ListLayersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLayersResponse
       */
      Models::ListLayersResponse listLayersWithOptions(const Models::ListLayersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of layers in a specified laboratory.
       *
       * @param request ListLayersRequest
       * @return ListLayersResponse
       */
      Models::ListLayersResponse listLayers(const Models::ListLayersRequest &request);

      /**
       * @summary Lists parameters.
       *
       * @param request ListParamsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListParamsResponse
       */
      Models::ListParamsResponse listParamsWithOptions(const Models::ListParamsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists parameters.
       *
       * @param request ListParamsRequest
       * @return ListParamsResponse
       */
      Models::ListParamsResponse listParams(const Models::ListParamsRequest &request);

      /**
       * @summary Retrieves a list of recall management tasks that match specified conditions.
       *
       * @description ## Request
       * - Use this API operation to retrieve a list of recall management tasks.
       * - The `InstanceId` and `Type` parameters are required. All other parameters are optional.
       * - Use the `Condition` parameter to set filter conditions on specific table types, such as filtering by `RecallManagementTableId`.
       * - Use the `SortBy` and `Order` parameters to control the sort order of the results. The default sort order is ascending by creation time.
       * - Use the `PageNumber` and `PageSize` parameters for pagination. The `PageNumber` parameter defaults to 1, and the `PageSize` parameter defaults to 10.
       * - The response includes details about each recall management task, such as its basic information and status.
       *
       * @param request ListRecallManagementJobsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRecallManagementJobsResponse
       */
      Models::ListRecallManagementJobsResponse listRecallManagementJobsWithOptions(const Models::ListRecallManagementJobsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of recall management tasks that match specified conditions.
       *
       * @description ## Request
       * - Use this API operation to retrieve a list of recall management tasks.
       * - The `InstanceId` and `Type` parameters are required. All other parameters are optional.
       * - Use the `Condition` parameter to set filter conditions on specific table types, such as filtering by `RecallManagementTableId`.
       * - Use the `SortBy` and `Order` parameters to control the sort order of the results. The default sort order is ascending by creation time.
       * - Use the `PageNumber` and `PageSize` parameters for pagination. The `PageNumber` parameter defaults to 1, and the `PageSize` parameter defaults to 10.
       * - The response includes details about each recall management task, such as its basic information and status.
       *
       * @param request ListRecallManagementJobsRequest
       * @return ListRecallManagementJobsResponse
       */
      Models::ListRecallManagementJobsResponse listRecallManagementJobs(const Models::ListRecallManagementJobsRequest &request);

      /**
       * @summary Retrieves a list of all versions for a specified Recall Management Service.
       *
       * @description ## Description
       * This operation queries the details of all versions for a specific Recall Management Service, including the version ID, name, effective status, creation time, and modification time. For accurate results, provide the correct `RecallManagementServiceId` and `InstanceId`.
       * - Use the `PageNumber` and `PageSize` parameters for pagination. By default, the query starts from the first page and returns 50 entries per page.
       * - Use the `SortBy` parameter to sort the results by creation time or modification time. By default, the results are sorted by creation time in ascending order.
       * - The `Order` parameter specifies the sort order. Valid values are `ASC` for ascending order and `DESC` for descending order.
       *
       * @param request ListRecallManagementServiceVersionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRecallManagementServiceVersionsResponse
       */
      Models::ListRecallManagementServiceVersionsResponse listRecallManagementServiceVersionsWithOptions(const string &RecallManagementServiceId, const Models::ListRecallManagementServiceVersionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of all versions for a specified Recall Management Service.
       *
       * @description ## Description
       * This operation queries the details of all versions for a specific Recall Management Service, including the version ID, name, effective status, creation time, and modification time. For accurate results, provide the correct `RecallManagementServiceId` and `InstanceId`.
       * - Use the `PageNumber` and `PageSize` parameters for pagination. By default, the query starts from the first page and returns 50 entries per page.
       * - Use the `SortBy` parameter to sort the results by creation time or modification time. By default, the results are sorted by creation time in ascending order.
       * - The `Order` parameter specifies the sort order. Valid values are `ASC` for ascending order and `DESC` for descending order.
       *
       * @param request ListRecallManagementServiceVersionsRequest
       * @return ListRecallManagementServiceVersionsResponse
       */
      Models::ListRecallManagementServiceVersionsResponse listRecallManagementServiceVersions(const string &RecallManagementServiceId, const Models::ListRecallManagementServiceVersionsRequest &request);

      /**
       * @summary This API returns a list of recall management services for a specified instance.
       *
       * @description ## Description
       * Call `ListRecallManagementServices` to retrieve a list of recall management services for a specified instance based on parameters such as `InstanceId`, `PageNumber`, and `PageSize`. You can sort the results by creation time or modification time in ascending or descending order.
       * - **InstanceId** is required. It specifies the target instance.
       * - The pagination parameters **PageNumber** and **PageSize** control the number of returned items and the page from which to start. This operation returns the first page of results by default.
       * - Use the **SortBy** and **Order** parameters to customize the sort order of the list.
       *
       * @param request ListRecallManagementServicesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRecallManagementServicesResponse
       */
      Models::ListRecallManagementServicesResponse listRecallManagementServicesWithOptions(const Models::ListRecallManagementServicesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API returns a list of recall management services for a specified instance.
       *
       * @description ## Description
       * Call `ListRecallManagementServices` to retrieve a list of recall management services for a specified instance based on parameters such as `InstanceId`, `PageNumber`, and `PageSize`. You can sort the results by creation time or modification time in ascending or descending order.
       * - **InstanceId** is required. It specifies the target instance.
       * - The pagination parameters **PageNumber** and **PageSize** control the number of returned items and the page from which to start. This operation returns the first page of results by default.
       * - Use the **SortBy** and **Order** parameters to customize the sort order of the list.
       *
       * @param request ListRecallManagementServicesRequest
       * @return ListRecallManagementServicesResponse
       */
      Models::ListRecallManagementServicesResponse listRecallManagementServices(const Models::ListRecallManagementServicesRequest &request);

      /**
       * @summary Lists all versions of a specified RecallManagementTable.
       *
       * @description ## Usage
       * - To retrieve the version history of a specific RecallManagementTable, provide the `RecallManagementTableId` and `InstanceId`.
       * - Use the `SortBy` parameter to sort the results by creation time or update time. By default, the results are sorted by creation time in ascending order.
       * - The `PageNumber` and `PageSize` parameters enable pagination, which allows you to control the number of items to return and the page to display.
       * - If the `Order` parameter is not specified, the results are sorted in ascending order by default.
       *
       * @param request ListRecallManagementTableVersionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRecallManagementTableVersionsResponse
       */
      Models::ListRecallManagementTableVersionsResponse listRecallManagementTableVersionsWithOptions(const string &RecallManagementTableId, const Models::ListRecallManagementTableVersionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists all versions of a specified RecallManagementTable.
       *
       * @description ## Usage
       * - To retrieve the version history of a specific RecallManagementTable, provide the `RecallManagementTableId` and `InstanceId`.
       * - Use the `SortBy` parameter to sort the results by creation time or update time. By default, the results are sorted by creation time in ascending order.
       * - The `PageNumber` and `PageSize` parameters enable pagination, which allows you to control the number of items to return and the page to display.
       * - If the `Order` parameter is not specified, the results are sorted in ascending order by default.
       *
       * @param request ListRecallManagementTableVersionsRequest
       * @return ListRecallManagementTableVersionsResponse
       */
      Models::ListRecallManagementTableVersionsResponse listRecallManagementTableVersions(const string &RecallManagementTableId, const Models::ListRecallManagementTableVersionsRequest &request);

      /**
       * @summary Retrieves the recall management tables for a specified instance. Pagination and sorting are supported.
       *
       * @description ## Request
       * - **InstanceId** is a required parameter specifying the instance to query.
       * - The **Name** and **Type** parameters filter recall management tables by name or type.
       * - The **PageNumber** and **PageSize** parameters control pagination. By default, the query returns the first 50 records.
       * - You can sort results by creation time (GmtCreateTime) or modification time (GmtModifiedTime) in ascending (ASC) or descending (DESC) order.
       *
       * @param request ListRecallManagementTablesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRecallManagementTablesResponse
       */
      Models::ListRecallManagementTablesResponse listRecallManagementTablesWithOptions(const Models::ListRecallManagementTablesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the recall management tables for a specified instance. Pagination and sorting are supported.
       *
       * @description ## Request
       * - **InstanceId** is a required parameter specifying the instance to query.
       * - The **Name** and **Type** parameters filter recall management tables by name or type.
       * - The **PageNumber** and **PageSize** parameters control pagination. By default, the query returns the first 50 records.
       * - You can sort results by creation time (GmtCreateTime) or modification time (GmtModifiedTime) in ascending (ASC) or descending (DESC) order.
       *
       * @param request ListRecallManagementTablesRequest
       * @return ListRecallManagementTablesResponse
       */
      Models::ListRecallManagementTablesResponse listRecallManagementTables(const Models::ListRecallManagementTablesRequest &request);

      /**
       * @summary 获取资源规则列表
       *
       * @param request ListResourceRulesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResourceRulesResponse
       */
      Models::ListResourceRulesResponse listResourceRulesWithOptions(const Models::ListResourceRulesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取资源规则列表
       *
       * @param request ListResourceRulesRequest
       * @return ListResourceRulesResponse
       */
      Models::ListResourceRulesResponse listResourceRules(const Models::ListResourceRulesRequest &request);

      /**
       * @summary 获取样本一致性任务列表
       *
       * @param request ListSampleConsistencyJobsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSampleConsistencyJobsResponse
       */
      Models::ListSampleConsistencyJobsResponse listSampleConsistencyJobsWithOptions(const Models::ListSampleConsistencyJobsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取样本一致性任务列表
       *
       * @param request ListSampleConsistencyJobsRequest
       * @return ListSampleConsistencyJobsResponse
       */
      Models::ListSampleConsistencyJobsResponse listSampleConsistencyJobs(const Models::ListSampleConsistencyJobsRequest &request);

      /**
       * @summary Retrieves a list of scenes.
       *
       * @param request ListScenesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListScenesResponse
       */
      Models::ListScenesResponse listScenesWithOptions(const Models::ListScenesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of scenes.
       *
       * @param request ListScenesRequest
       * @return ListScenesResponse
       */
      Models::ListScenesResponse listScenes(const Models::ListScenesRequest &request);

      /**
       * @summary Lists the subcrowds for a specified crowd.
       *
       * @param request ListSubCrowdsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSubCrowdsResponse
       */
      Models::ListSubCrowdsResponse listSubCrowdsWithOptions(const string &CrowdId, const Models::ListSubCrowdsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the subcrowds for a specified crowd.
       *
       * @param request ListSubCrowdsRequest
       * @return ListSubCrowdsResponse
       */
      Models::ListSubCrowdsResponse listSubCrowds(const string &CrowdId, const Models::ListSubCrowdsRequest &request);

      /**
       * @summary Retrieves a list of data tables.
       *
       * @param request ListTableMetasRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTableMetasResponse
       */
      Models::ListTableMetasResponse listTableMetasWithOptions(const Models::ListTableMetasRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of data tables.
       *
       * @param request ListTableMetasRequest
       * @return ListTableMetasResponse
       */
      Models::ListTableMetasResponse listTableMetas(const Models::ListTableMetasRequest &request);

      /**
       * @summary Retrieves the historical traffic records for a specific traffic control target.
       *
       * @description ## Usage notes
       * - The `TrafficControlTargetId`, `InstanceId`, and `Environment` parameters are required.
       * - You can use `StartTime` and `EndTime` to specify the time range.
       * - The `Threshold` parameter is optional.
       * - Use `ExperimentId` and `ExperimentGroupId` to filter data for a specific experiment or experiment group.
       * - Use `ItemId` to filter traffic data for a specific item.
       * - The supported environments are the Daily environment, pre-production environment (Pre), and production environment (Prod).
       *
       * @param request ListTrafficControlTargetTrafficHistoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTrafficControlTargetTrafficHistoryResponse
       */
      Models::ListTrafficControlTargetTrafficHistoryResponse listTrafficControlTargetTrafficHistoryWithOptions(const string &TrafficControlTargetId, const Models::ListTrafficControlTargetTrafficHistoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the historical traffic records for a specific traffic control target.
       *
       * @description ## Usage notes
       * - The `TrafficControlTargetId`, `InstanceId`, and `Environment` parameters are required.
       * - You can use `StartTime` and `EndTime` to specify the time range.
       * - The `Threshold` parameter is optional.
       * - Use `ExperimentId` and `ExperimentGroupId` to filter data for a specific experiment or experiment group.
       * - Use `ItemId` to filter traffic data for a specific item.
       * - The supported environments are the Daily environment, pre-production environment (Pre), and production environment (Prod).
       *
       * @param request ListTrafficControlTargetTrafficHistoryRequest
       * @return ListTrafficControlTargetTrafficHistoryResponse
       */
      Models::ListTrafficControlTargetTrafficHistoryResponse listTrafficControlTargetTrafficHistory(const string &TrafficControlTargetId, const Models::ListTrafficControlTargetTrafficHistoryRequest &request);

      /**
       * @summary Lists traffic control tasks that meet specified conditions.
       *
       * @description ## Request
       * - This API retrieves a list of traffic control tasks.
       * - Use query parameters to filter and sort the results.
       * - This operation supports pagination. You can also retrieve all results in a single response.
       * - Note: The `InstanceId` is a required parameter. All other parameters are optional.
       *
       * @param request ListTrafficControlTasksRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTrafficControlTasksResponse
       */
      Models::ListTrafficControlTasksResponse listTrafficControlTasksWithOptions(const Models::ListTrafficControlTasksRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists traffic control tasks that meet specified conditions.
       *
       * @description ## Request
       * - This API retrieves a list of traffic control tasks.
       * - Use query parameters to filter and sort the results.
       * - This operation supports pagination. You can also retrieve all results in a single response.
       * - Note: The `InstanceId` is a required parameter. All other parameters are optional.
       *
       * @param request ListTrafficControlTasksRequest
       * @return ListTrafficControlTasksResponse
       */
      Models::ListTrafficControlTasksResponse listTrafficControlTasks(const Models::ListTrafficControlTasksRequest &request);

      /**
       * @summary Takes an experiment offline.
       *
       * @param request OfflineExperimentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return OfflineExperimentResponse
       */
      Models::OfflineExperimentResponse offlineExperimentWithOptions(const string &ExperimentId, const Models::OfflineExperimentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Takes an experiment offline.
       *
       * @param request OfflineExperimentRequest
       * @return OfflineExperimentResponse
       */
      Models::OfflineExperimentResponse offlineExperiment(const string &ExperimentId, const Models::OfflineExperimentRequest &request);

      /**
       * @summary Takes a specified experiment group offline.
       *
       * @param request OfflineExperimentGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return OfflineExperimentGroupResponse
       */
      Models::OfflineExperimentGroupResponse offlineExperimentGroupWithOptions(const string &ExperimentGroupId, const Models::OfflineExperimentGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Takes a specified experiment group offline.
       *
       * @param request OfflineExperimentGroupRequest
       * @return OfflineExperimentGroupResponse
       */
      Models::OfflineExperimentGroupResponse offlineExperimentGroup(const string &ExperimentGroupId, const Models::OfflineExperimentGroupRequest &request);

      /**
       * @summary Takes the specified laboratory offline.
       *
       * @param request OfflineLaboratoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return OfflineLaboratoryResponse
       */
      Models::OfflineLaboratoryResponse offlineLaboratoryWithOptions(const string &LaboratoryId, const Models::OfflineLaboratoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Takes the specified laboratory offline.
       *
       * @param request OfflineLaboratoryRequest
       * @return OfflineLaboratoryResponse
       */
      Models::OfflineLaboratoryResponse offlineLaboratory(const string &LaboratoryId, const Models::OfflineLaboratoryRequest &request);

      /**
       * @summary Takes a specified recall management service offline.
       *
       * @description ## Description
       * Use this API to take a specific recall management service offline. Ensure that the provided `RecallManagementServiceId` and `InstanceId` are accurate to prevent unintended operations.
       * - **Important**: Once a recall management service is taken offline, it stops processing new requests until you reactivate it.
       * - Back up any required data or configurations before you perform this operation in case you need to restore the current state.
       *
       * @param request OfflineRecallManagementServiceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return OfflineRecallManagementServiceResponse
       */
      Models::OfflineRecallManagementServiceResponse offlineRecallManagementServiceWithOptions(const string &RecallManagementServiceId, const Models::OfflineRecallManagementServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Takes a specified recall management service offline.
       *
       * @description ## Description
       * Use this API to take a specific recall management service offline. Ensure that the provided `RecallManagementServiceId` and `InstanceId` are accurate to prevent unintended operations.
       * - **Important**: Once a recall management service is taken offline, it stops processing new requests until you reactivate it.
       * - Back up any required data or configurations before you perform this operation in case you need to restore the current state.
       *
       * @param request OfflineRecallManagementServiceRequest
       * @return OfflineRecallManagementServiceResponse
       */
      Models::OfflineRecallManagementServiceResponse offlineRecallManagementService(const string &RecallManagementServiceId, const Models::OfflineRecallManagementServiceRequest &request);

      /**
       * @summary Brings a specified experiment online.
       *
       * @param request OnlineExperimentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return OnlineExperimentResponse
       */
      Models::OnlineExperimentResponse onlineExperimentWithOptions(const string &ExperimentId, const Models::OnlineExperimentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Brings a specified experiment online.
       *
       * @param request OnlineExperimentRequest
       * @return OnlineExperimentResponse
       */
      Models::OnlineExperimentResponse onlineExperiment(const string &ExperimentId, const Models::OnlineExperimentRequest &request);

      /**
       * @summary Brings a specified experiment group online.
       *
       * @param request OnlineExperimentGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return OnlineExperimentGroupResponse
       */
      Models::OnlineExperimentGroupResponse onlineExperimentGroupWithOptions(const string &ExperimentGroupId, const Models::OnlineExperimentGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Brings a specified experiment group online.
       *
       * @param request OnlineExperimentGroupRequest
       * @return OnlineExperimentGroupResponse
       */
      Models::OnlineExperimentGroupResponse onlineExperimentGroup(const string &ExperimentGroupId, const Models::OnlineExperimentGroupRequest &request);

      /**
       * @summary Publishes a specified laboratory for experimental analysis.
       *
       * @param request OnlineLaboratoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return OnlineLaboratoryResponse
       */
      Models::OnlineLaboratoryResponse onlineLaboratoryWithOptions(const string &LaboratoryId, const Models::OnlineLaboratoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Publishes a specified laboratory for experimental analysis.
       *
       * @param request OnlineLaboratoryRequest
       * @return OnlineLaboratoryResponse
       */
      Models::OnlineLaboratoryResponse onlineLaboratory(const string &LaboratoryId, const Models::OnlineLaboratoryRequest &request);

      /**
       * @summary This operation brings a specified Recall Management Service online.
       *
       * @description ## Request
       * You can use this operation to bring a Recall Management Service online by specifying the Recall Management Service ID and the instance ID. Ensure that the `RecallManagementServiceId` and `InstanceId` are correct and that you have the required permissions.
       *
       * @param request OnlineRecallManagementServiceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return OnlineRecallManagementServiceResponse
       */
      Models::OnlineRecallManagementServiceResponse onlineRecallManagementServiceWithOptions(const string &RecallManagementServiceId, const Models::OnlineRecallManagementServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation brings a specified Recall Management Service online.
       *
       * @description ## Request
       * You can use this operation to bring a Recall Management Service online by specifying the Recall Management Service ID and the instance ID. Ensure that the `RecallManagementServiceId` and `InstanceId` are correct and that you have the required permissions.
       *
       * @param request OnlineRecallManagementServiceRequest
       * @return OnlineRecallManagementServiceResponse
       */
      Models::OnlineRecallManagementServiceResponse onlineRecallManagementService(const string &RecallManagementServiceId, const Models::OnlineRecallManagementServiceRequest &request);

      /**
       * @summary Synchronizes a MaxCompute table with the recall engine. This operation allows you to publish specific partitions and select a synchronization mode.
       *
       * @description ## Request details
       * This API synchronizes a specified MaxCompute table with the recall engine. You must provide the correct `RecallManagementTableId` in the path parameter and the instance ID in the request body. You can also specify the table partitions to publish, whether to skip the threshold check, and the synchronization mode. To publish specific partitions, provide them as key-value pairs in the `Partitions` field.
       *
       * @param request PublishRecallManagementTableRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishRecallManagementTableResponse
       */
      Models::PublishRecallManagementTableResponse publishRecallManagementTableWithOptions(const string &RecallManagementTableId, const Models::PublishRecallManagementTableRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Synchronizes a MaxCompute table with the recall engine. This operation allows you to publish specific partitions and select a synchronization mode.
       *
       * @description ## Request details
       * This API synchronizes a specified MaxCompute table with the recall engine. You must provide the correct `RecallManagementTableId` in the path parameter and the instance ID in the request body. You can also specify the table partitions to publish, whether to skip the threshold check, and the synchronization mode. To publish specific partitions, provide them as key-value pairs in the `Partitions` field.
       *
       * @param request PublishRecallManagementTableRequest
       * @return PublishRecallManagementTableResponse
       */
      Models::PublishRecallManagementTableResponse publishRecallManagementTable(const string &RecallManagementTableId, const Models::PublishRecallManagementTableRequest &request);

      /**
       * @summary If an experiment is stable and performs well, you can push all traffic to it. This action retires the original experiment group and creates a new one that contains only this experiment. The new group receives 100% of the traffic.
       *
       * @param request PushAllExperimentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PushAllExperimentResponse
       */
      Models::PushAllExperimentResponse pushAllExperimentWithOptions(const string &ExperimentId, const Models::PushAllExperimentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary If an experiment is stable and performs well, you can push all traffic to it. This action retires the original experiment group and creates a new one that contains only this experiment. The new group receives 100% of the traffic.
       *
       * @param request PushAllExperimentRequest
       * @return PushAllExperimentResponse
       */
      Models::PushAllExperimentResponse pushAllExperiment(const string &ExperimentId, const Models::PushAllExperimentRequest &request);

      /**
       * @summary 推送指标到指定资源规则
       *
       * @param tmpReq PushResourceRuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PushResourceRuleResponse
       */
      Models::PushResourceRuleResponse pushResourceRuleWithOptions(const string &ResourceRuleId, const Models::PushResourceRuleRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 推送指标到指定资源规则
       *
       * @param request PushResourceRuleRequest
       * @return PushResourceRuleResponse
       */
      Models::PushResourceRuleResponse pushResourceRule(const string &ResourceRuleId, const Models::PushResourceRuleRequest &request);

      /**
       * @summary Retrieves statistics for a specified data diagnosis task within a time range.
       *
       * @description ## Request description
       * - The `DataDiagnosisId` parameter is required and specifies the data diagnosis task.
       * - The `InstanceId` parameter is also required and specifies the instance.
       * - The `StartDate` and `EndDate` parameters specify the start and end dates of the time range. The format is YYYY-MM-DD.
       * - The `RemainRateType` parameter is optional. It specifies the retention rate report type. The default value is \\"Period\\", which indicates a periodic report.
       * - The response includes the request ID (`RequestId`) and a `Statistics` object. This object contains the dates of task failures (`FailedDates`) and dates with missing task data (`NoDataDates`).
       *
       * @param request QueryDataDiagnosisStatisticsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDataDiagnosisStatisticsResponse
       */
      Models::QueryDataDiagnosisStatisticsResponse queryDataDiagnosisStatisticsWithOptions(const string &DataDiagnosisId, const Models::QueryDataDiagnosisStatisticsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves statistics for a specified data diagnosis task within a time range.
       *
       * @description ## Request description
       * - The `DataDiagnosisId` parameter is required and specifies the data diagnosis task.
       * - The `InstanceId` parameter is also required and specifies the instance.
       * - The `StartDate` and `EndDate` parameters specify the start and end dates of the time range. The format is YYYY-MM-DD.
       * - The `RemainRateType` parameter is optional. It specifies the retention rate report type. The default value is \\"Period\\", which indicates a periodic report.
       * - The response includes the request ID (`RequestId`) and a `Statistics` object. This object contains the dates of task failures (`FailedDates`) and dates with missing task data (`NoDataDates`).
       *
       * @param request QueryDataDiagnosisStatisticsRequest
       * @return QueryDataDiagnosisStatisticsResponse
       */
      Models::QueryDataDiagnosisStatisticsResponse queryDataDiagnosisStatistics(const string &DataDiagnosisId, const Models::QueryDataDiagnosisStatisticsRequest &request);

      /**
       * @summary Retrieves records from a specified recall management table.
       *
       * @description ## Request
       * This API retrieves records from a specific recall management table using the provided primary keys. You must provide a valid `InstanceId` and `RecallManagementTableId`, and a non-empty `PrimaryKeys` list. If you specify `RecallManagementTableVersionId`, the API returns records from that version; otherwise, it uses the currently published version.
       *
       * @param request QueryRecallManagementTableRecordsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryRecallManagementTableRecordsResponse
       */
      Models::QueryRecallManagementTableRecordsResponse queryRecallManagementTableRecordsWithOptions(const string &RecallManagementTableId, const Models::QueryRecallManagementTableRecordsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves records from a specified recall management table.
       *
       * @description ## Request
       * This API retrieves records from a specific recall management table using the provided primary keys. You must provide a valid `InstanceId` and `RecallManagementTableId`, and a non-empty `PrimaryKeys` list. If you specify `RecallManagementTableVersionId`, the API returns records from that version; otherwise, it uses the currently published version.
       *
       * @param request QueryRecallManagementTableRecordsRequest
       * @return QueryRecallManagementTableRecordsResponse
       */
      Models::QueryRecallManagementTableRecordsResponse queryRecallManagementTableRecords(const string &RecallManagementTableId, const Models::QueryRecallManagementTableRecordsRequest &request);

      /**
       * @summary 查看样本一致性任务差异的详情
       *
       * @param request QuerySampleConsistencyJobDifferenceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySampleConsistencyJobDifferenceResponse
       */
      Models::QuerySampleConsistencyJobDifferenceResponse querySampleConsistencyJobDifferenceWithOptions(const string &SampleConsistencyJobId, const Models::QuerySampleConsistencyJobDifferenceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看样本一致性任务差异的详情
       *
       * @param request QuerySampleConsistencyJobDifferenceRequest
       * @return QuerySampleConsistencyJobDifferenceResponse
       */
      Models::QuerySampleConsistencyJobDifferenceResponse querySampleConsistencyJobDifference(const string &SampleConsistencyJobId, const Models::QuerySampleConsistencyJobDifferenceRequest &request);

      /**
       * @summary Retrieves the traffic control details of a target item for a given environment and date range.
       *
       * @description ## Request
       * Use this API to query the details of single-item control for a given traffic control target on a specified date and for a specific instance ID and environment. The details include traffic data and feature information for the top 100 items before and after the control is applied. Ensure that the `TrafficControlTargetId`, `InstanceId`, and `Environment` parameters are accurate, and that the `Date` is in YYYY-MM-DD format. Although the `Date` parameter is optional, we recommend specifying a date for meaningful results.
       *
       * @param request QueryTrafficControlTargetItemReportDetailRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryTrafficControlTargetItemReportDetailResponse
       */
      Models::QueryTrafficControlTargetItemReportDetailResponse queryTrafficControlTargetItemReportDetailWithOptions(const string &TrafficControlTargetId, const Models::QueryTrafficControlTargetItemReportDetailRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the traffic control details of a target item for a given environment and date range.
       *
       * @description ## Request
       * Use this API to query the details of single-item control for a given traffic control target on a specified date and for a specific instance ID and environment. The details include traffic data and feature information for the top 100 items before and after the control is applied. Ensure that the `TrafficControlTargetId`, `InstanceId`, and `Environment` parameters are accurate, and that the `Date` is in YYYY-MM-DD format. Although the `Date` parameter is optional, we recommend specifying a date for meaningful results.
       *
       * @param request QueryTrafficControlTargetItemReportDetailRequest
       * @return QueryTrafficControlTargetItemReportDetailResponse
       */
      Models::QueryTrafficControlTargetItemReportDetailResponse queryTrafficControlTargetItemReportDetail(const string &TrafficControlTargetId, const Models::QueryTrafficControlTargetItemReportDetailRequest &request);

      /**
       * @summary Retrieves the deployment status and related information of a specified traffic control task in a specific environment.
       *
       * @description ## Operation description
       * You can call this operation to query the deployment result of a traffic control task specified by TrafficControlTaskId for a given instance ID and environment. Make sure that the specified InstanceId is associated with your account and that the Environment parameter value is valid (Daily for daily environment, Pre for staging environment, Prod for production environment). All request parameters are required.
       *
       * @param request QueryTrafficControlTaskDeployResultRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryTrafficControlTaskDeployResultResponse
       */
      Models::QueryTrafficControlTaskDeployResultResponse queryTrafficControlTaskDeployResultWithOptions(const string &TrafficControlTaskId, const Models::QueryTrafficControlTaskDeployResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the deployment status and related information of a specified traffic control task in a specific environment.
       *
       * @description ## Operation description
       * You can call this operation to query the deployment result of a traffic control task specified by TrafficControlTaskId for a given instance ID and environment. Make sure that the specified InstanceId is associated with your account and that the Environment parameter value is valid (Daily for daily environment, Pre for staging environment, Prod for production environment). All request parameters are required.
       *
       * @param request QueryTrafficControlTaskDeployResultRequest
       * @return QueryTrafficControlTaskDeployResultResponse
       */
      Models::QueryTrafficControlTaskDeployResultResponse queryTrafficControlTaskDeployResult(const string &TrafficControlTaskId, const Models::QueryTrafficControlTaskDeployResultRequest &request);

      /**
       * @summary Retrieves a detailed report on item control for a specified traffic control task.
       *
       * @description ## Description
       * - This API retrieves the item control results for a specific traffic control task within a given time range.
       * - `TrafficControlTaskId` is the unique identifier for a traffic control task.
       * - `InstanceId` specifies the instance that runs the task.
       * - The `Environment` parameter specifies the task\\"s execution environment. Valid values are Daily (development environment), Pre (staging environment), and Prod (production environment).
       * - `StartTime` and `EndTime` specify the start and end of the time range for the report, respectively. The format is "YYYY-MM-DD HH:MM:SS".
       * - The specified start and end times must be valid and span no more than two consecutive calendar days.
       *
       * @param request QueryTrafficControlTaskItemReportRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryTrafficControlTaskItemReportResponse
       */
      Models::QueryTrafficControlTaskItemReportResponse queryTrafficControlTaskItemReportWithOptions(const string &TrafficControlTaskId, const Models::QueryTrafficControlTaskItemReportRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a detailed report on item control for a specified traffic control task.
       *
       * @description ## Description
       * - This API retrieves the item control results for a specific traffic control task within a given time range.
       * - `TrafficControlTaskId` is the unique identifier for a traffic control task.
       * - `InstanceId` specifies the instance that runs the task.
       * - The `Environment` parameter specifies the task\\"s execution environment. Valid values are Daily (development environment), Pre (staging environment), and Prod (production environment).
       * - `StartTime` and `EndTime` specify the start and end of the time range for the report, respectively. The format is "YYYY-MM-DD HH:MM:SS".
       * - The specified start and end times must be valid and span no more than two consecutive calendar days.
       *
       * @param request QueryTrafficControlTaskItemReportRequest
       * @return QueryTrafficControlTaskItemReportResponse
       */
      Models::QueryTrafficControlTaskItemReportResponse queryTrafficControlTaskItemReport(const string &TrafficControlTaskId, const Models::QueryTrafficControlTaskItemReportRequest &request);

      /**
       * @summary Releases a traffic control task for the specified instance and environment.
       *
       * @description ## Request
       * Use this API to release a traffic control task for a specific instance and environment (Daily, Pre, or Prod). Your request must include the `TrafficControlTaskId`, `InstanceId`, and `Environment` parameters.
       * - `TrafficControlTaskId`: The unique ID of the traffic control task.
       * - `InstanceId`: The ID of the target instance.
       * - `Environment`: The execution environment for the traffic control task. Valid values: `Daily`, `Pre`, and `Prod`.
       * The request succeeds only if all required parameters are provided correctly. A successful response includes a `RequestId`.
       *
       * @param request ReleaseTrafficControlTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseTrafficControlTaskResponse
       */
      Models::ReleaseTrafficControlTaskResponse releaseTrafficControlTaskWithOptions(const string &TrafficControlTaskId, const Models::ReleaseTrafficControlTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases a traffic control task for the specified instance and environment.
       *
       * @description ## Request
       * Use this API to release a traffic control task for a specific instance and environment (Daily, Pre, or Prod). Your request must include the `TrafficControlTaskId`, `InstanceId`, and `Environment` parameters.
       * - `TrafficControlTaskId`: The unique ID of the traffic control task.
       * - `InstanceId`: The ID of the target instance.
       * - `Environment`: The execution environment for the traffic control task. Valid values: `Daily`, `Pre`, and `Prod`.
       * The request succeeds only if all required parameters are provided correctly. A successful response includes a `RequestId`.
       *
       * @param request ReleaseTrafficControlTaskRequest
       * @return ReleaseTrafficControlTaskResponse
       */
      Models::ReleaseTrafficControlTaskResponse releaseTrafficControlTask(const string &TrafficControlTaskId, const Models::ReleaseTrafficControlTaskRequest &request);

      /**
       * @summary Retrieve a metric group\\"s report.
       *
       * @param request ReportABMetricGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReportABMetricGroupResponse
       */
      Models::ReportABMetricGroupResponse reportABMetricGroupWithOptions(const string &ABMetricGroupId, const Models::ReportABMetricGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve a metric group\\"s report.
       *
       * @param request ReportABMetricGroupRequest
       * @return ReportABMetricGroupResponse
       */
      Models::ReportABMetricGroupResponse reportABMetricGroup(const string &ABMetricGroupId, const Models::ReportABMetricGroupRequest &request);

      /**
       * @summary 样本一致性任务报表
       *
       * @param request ReportSampleConsistencyJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReportSampleConsistencyJobResponse
       */
      Models::ReportSampleConsistencyJobResponse reportSampleConsistencyJobWithOptions(const string &SampleConsistencyJobId, const Models::ReportSampleConsistencyJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 样本一致性任务报表
       *
       * @param request ReportSampleConsistencyJobRequest
       * @return ReportSampleConsistencyJobResponse
       */
      Models::ReportSampleConsistencyJobResponse reportSampleConsistencyJob(const string &SampleConsistencyJobId, const Models::ReportSampleConsistencyJobRequest &request);

      /**
       * @summary Conducts conversations with users through an AI shopping guide to provide product recommendation services.
       *
       * @description ## Operation description
       * - This API is used to send conversation messages to the AI shopping guide and supports Server-Sent Events (SSE).
       * - `InstanceId`, `SessionId`, `SceneId`, `ServiceId`, `Environment`, `Uid`, and `Language` are required parameters. Ensure the accuracy of these values to obtain optimal responses.
       * - The `InputMessage` must contain at least one text-type message that describes the user\\"s request or question.
       * - Based on the provided input, the system returns corresponding recommendation results or other relevant information.
       * - Check the returned `StopReason` field to understand whether the session has ended and the reason.
       *
       * @param request ShoppingAssistantRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ShoppingAssistantResponse
       */
      FutureGenerator<Models::ShoppingAssistantResponse> shoppingAssistantWithSSE(const Models::ShoppingAssistantRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Conducts conversations with users through an AI shopping guide to provide product recommendation services.
       *
       * @description ## Operation description
       * - This API is used to send conversation messages to the AI shopping guide and supports Server-Sent Events (SSE).
       * - `InstanceId`, `SessionId`, `SceneId`, `ServiceId`, `Environment`, `Uid`, and `Language` are required parameters. Ensure the accuracy of these values to obtain optimal responses.
       * - The `InputMessage` must contain at least one text-type message that describes the user\\"s request or question.
       * - Based on the provided input, the system returns corresponding recommendation results or other relevant information.
       * - Check the returned `StopReason` field to understand whether the session has ended and the reason.
       *
       * @param request ShoppingAssistantRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ShoppingAssistantResponse
       */
      Models::ShoppingAssistantResponse shoppingAssistantWithOptions(const Models::ShoppingAssistantRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Conducts conversations with users through an AI shopping guide to provide product recommendation services.
       *
       * @description ## Operation description
       * - This API is used to send conversation messages to the AI shopping guide and supports Server-Sent Events (SSE).
       * - `InstanceId`, `SessionId`, `SceneId`, `ServiceId`, `Environment`, `Uid`, and `Language` are required parameters. Ensure the accuracy of these values to obtain optimal responses.
       * - The `InputMessage` must contain at least one text-type message that describes the user\\"s request or question.
       * - Based on the provided input, the system returns corresponding recommendation results or other relevant information.
       * - Check the returned `StopReason` field to understand whether the session has ended and the reason.
       *
       * @param request ShoppingAssistantRequest
       * @return ShoppingAssistantResponse
       */
      Models::ShoppingAssistantResponse shoppingAssistant(const Models::ShoppingAssistantRequest &request);

      /**
       * @summary Splits the target values for a traffic control target into time intervals.
       *
       * @description Splits the target values for a traffic control target into time intervals.
       *
       * @param request SplitTrafficControlTargetRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SplitTrafficControlTargetResponse
       */
      Models::SplitTrafficControlTargetResponse splitTrafficControlTargetWithOptions(const string &TrafficControlTargetId, const Models::SplitTrafficControlTargetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Splits the target values for a traffic control target into time intervals.
       *
       * @description Splits the target values for a traffic control target into time intervals.
       *
       * @param request SplitTrafficControlTargetRequest
       * @return SplitTrafficControlTargetResponse
       */
      Models::SplitTrafficControlTargetResponse splitTrafficControlTarget(const string &TrafficControlTargetId, const Models::SplitTrafficControlTargetRequest &request);

      /**
       * @summary Starts a traffic control task for a specific traffic control target.
       *
       * @description ## Request
       * Call this operation to start a traffic control task by providing the `TrafficControlTargetId` and `InstanceId`.
       *
       * @param request StartTrafficControlTargetRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartTrafficControlTargetResponse
       */
      Models::StartTrafficControlTargetResponse startTrafficControlTargetWithOptions(const string &TrafficControlTargetId, const Models::StartTrafficControlTargetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a traffic control task for a specific traffic control target.
       *
       * @description ## Request
       * Call this operation to start a traffic control task by providing the `TrafficControlTargetId` and `InstanceId`.
       *
       * @param request StartTrafficControlTargetRequest
       * @return StartTrafficControlTargetResponse
       */
      Models::StartTrafficControlTargetResponse startTrafficControlTarget(const string &TrafficControlTargetId, const Models::StartTrafficControlTargetRequest &request);

      /**
       * @summary Starts a traffic control task with a specified ID for instances in different environments.
       *
       * @description ## Request details
       * - This operation starts the traffic control task identified by `TrafficControlTaskId`.
       * - `InstanceId` specifies the target instance.
       * - `Environment` specifies the target environment. Valid values: Daily, Pre, and Prod.
       * - Ensure that all required parameters are set correctly before you call this operation. The specified `TrafficControlTaskId` must exist in the system.
       *
       * @param request StartTrafficControlTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartTrafficControlTaskResponse
       */
      Models::StartTrafficControlTaskResponse startTrafficControlTaskWithOptions(const string &TrafficControlTaskId, const Models::StartTrafficControlTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a traffic control task with a specified ID for instances in different environments.
       *
       * @description ## Request details
       * - This operation starts the traffic control task identified by `TrafficControlTaskId`.
       * - `InstanceId` specifies the target instance.
       * - `Environment` specifies the target environment. Valid values: Daily, Pre, and Prod.
       * - Ensure that all required parameters are set correctly before you call this operation. The specified `TrafficControlTaskId` must exist in the system.
       *
       * @param request StartTrafficControlTaskRequest
       * @return StartTrafficControlTaskResponse
       */
      Models::StartTrafficControlTaskResponse startTrafficControlTask(const string &TrafficControlTaskId, const Models::StartTrafficControlTaskRequest &request);

      /**
       * @summary 停止样本一致性任务
       *
       * @param request StopSampleConsistencyJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopSampleConsistencyJobResponse
       */
      Models::StopSampleConsistencyJobResponse stopSampleConsistencyJobWithOptions(const string &SampleConsistencyJobId, const Models::StopSampleConsistencyJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 停止样本一致性任务
       *
       * @param request StopSampleConsistencyJobRequest
       * @return StopSampleConsistencyJobResponse
       */
      Models::StopSampleConsistencyJobResponse stopSampleConsistencyJob(const string &SampleConsistencyJobId, const Models::StopSampleConsistencyJobRequest &request);

      /**
       * @summary Stops a traffic control Flink task with the specified ID.
       *
       * @description ## Request description
       * You can call this operation to stop a specific traffic control Flink task based on the specified TrafficControlTaskId. Make sure that you have prepared the correct InstanceId and the environment to which the instance belongs (Daily for daily environment, Pre for staging environment, Prod for production environment). Include this information in the request body to ensure that the operation is correctly performed.
       *
       * @param request StopTrafficControlFlinkTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopTrafficControlFlinkTaskResponse
       */
      Models::StopTrafficControlFlinkTaskResponse stopTrafficControlFlinkTaskWithOptions(const string &TrafficControlTaskId, const Models::StopTrafficControlFlinkTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a traffic control Flink task with the specified ID.
       *
       * @description ## Request description
       * You can call this operation to stop a specific traffic control Flink task based on the specified TrafficControlTaskId. Make sure that you have prepared the correct InstanceId and the environment to which the instance belongs (Daily for daily environment, Pre for staging environment, Prod for production environment). Include this information in the request body to ensure that the operation is correctly performed.
       *
       * @param request StopTrafficControlFlinkTaskRequest
       * @return StopTrafficControlFlinkTaskResponse
       */
      Models::StopTrafficControlFlinkTaskResponse stopTrafficControlFlinkTask(const string &TrafficControlTaskId, const Models::StopTrafficControlFlinkTaskRequest &request);

      /**
       * @summary Stops a specific traffic control target.
       *
       * @description ## Request
       * This operation stops a traffic control task using the provided `TrafficControlTargetId` and `InstanceId`. Ensure that the parameter values are accurate to avoid stopping the wrong target or instance.
       *
       * @param request StopTrafficControlTargetRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopTrafficControlTargetResponse
       */
      Models::StopTrafficControlTargetResponse stopTrafficControlTargetWithOptions(const string &TrafficControlTargetId, const Models::StopTrafficControlTargetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a specific traffic control target.
       *
       * @description ## Request
       * This operation stops a traffic control task using the provided `TrafficControlTargetId` and `InstanceId`. Ensure that the parameter values are accurate to avoid stopping the wrong target or instance.
       *
       * @param request StopTrafficControlTargetRequest
       * @return StopTrafficControlTargetResponse
       */
      Models::StopTrafficControlTargetResponse stopTrafficControlTarget(const string &TrafficControlTargetId, const Models::StopTrafficControlTargetRequest &request);

      /**
       * @summary Stops a traffic control task for a specific instance and environment.
       *
       * @description ## Usage notes
       * - This API stops a traffic control task identified by a specific `TrafficControlTaskId`.
       * - The `InstanceId` and `Environment` parameters are required to identify the target instance and its environment.
       * - Ensure that you provide the correct `TrafficControlTaskId` to prevent the request from failing.
       *
       * @param request StopTrafficControlTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopTrafficControlTaskResponse
       */
      Models::StopTrafficControlTaskResponse stopTrafficControlTaskWithOptions(const string &TrafficControlTaskId, const Models::StopTrafficControlTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a traffic control task for a specific instance and environment.
       *
       * @description ## Usage notes
       * - This API stops a traffic control task identified by a specific `TrafficControlTaskId`.
       * - The `InstanceId` and `Environment` parameters are required to identify the target instance and its environment.
       * - Ensure that you provide the correct `TrafficControlTaskId` to prevent the request from failing.
       *
       * @param request StopTrafficControlTaskRequest
       * @return StopTrafficControlTaskResponse
       */
      Models::StopTrafficControlTaskResponse stopTrafficControlTask(const string &TrafficControlTaskId, const Models::StopTrafficControlTaskRequest &request);

      /**
       * @summary Syncs the replay log for a feature consistency check job.
       *
       * @param request SyncFeatureConsistencyCheckJobReplayLogRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SyncFeatureConsistencyCheckJobReplayLogResponse
       */
      Models::SyncFeatureConsistencyCheckJobReplayLogResponse syncFeatureConsistencyCheckJobReplayLogWithOptions(const Models::SyncFeatureConsistencyCheckJobReplayLogRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Syncs the replay log for a feature consistency check job.
       *
       * @param request SyncFeatureConsistencyCheckJobReplayLogRequest
       * @return SyncFeatureConsistencyCheckJobReplayLogResponse
       */
      Models::SyncFeatureConsistencyCheckJobReplayLogResponse syncFeatureConsistencyCheckJobReplayLog(const Models::SyncFeatureConsistencyCheckJobReplayLogRequest &request);

      /**
       * @summary Terminates a feature consistency check job.
       *
       * @param request TerminateFeatureConsistencyCheckJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return TerminateFeatureConsistencyCheckJobResponse
       */
      Models::TerminateFeatureConsistencyCheckJobResponse terminateFeatureConsistencyCheckJobWithOptions(const string &FeatureConsistencyCheckJobId, const Models::TerminateFeatureConsistencyCheckJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Terminates a feature consistency check job.
       *
       * @param request TerminateFeatureConsistencyCheckJobRequest
       * @return TerminateFeatureConsistencyCheckJobResponse
       */
      Models::TerminateFeatureConsistencyCheckJobResponse terminateFeatureConsistencyCheckJob(const string &FeatureConsistencyCheckJobId, const Models::TerminateFeatureConsistencyCheckJobRequest &request);

      /**
       * @summary Modifies the metric configuration of an existing ABTest experiment.
       *
       * @description ## Operation description
       * This API operation allows you to update the attributes of a specified ABTest metric, including whether to calculate significance and the aggregation method. Make sure that you have obtained the correct `ABMetricId` before calling this operation.
       * - `NeedSignificance`: Specifies whether to perform significance analysis on the current metric. Default value: `false`.
       * - `AggregationByUser`: When significance calculation is enabled, specifies whether to aggregate data by user or by sample. Default value: `false` (by sample).
       * - `Numerator` and `Denominator`: The specific definitions of the numerator and denominator used in significance calculation.
       * - `IsBinomialDistribution`: Valid only for derived metrics. Specifies whether the metric follows a binomial distribution, which affects subsequent data processing logic.
       * Note: You do not need to provide all fields at the same time. Include only the parameters whose values you want to change in the request body.
       *
       * @param request UpdateABMetricRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateABMetricResponse
       */
      Models::UpdateABMetricResponse updateABMetricWithOptions(const string &ABMetricId, const Models::UpdateABMetricRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the metric configuration of an existing ABTest experiment.
       *
       * @description ## Operation description
       * This API operation allows you to update the attributes of a specified ABTest metric, including whether to calculate significance and the aggregation method. Make sure that you have obtained the correct `ABMetricId` before calling this operation.
       * - `NeedSignificance`: Specifies whether to perform significance analysis on the current metric. Default value: `false`.
       * - `AggregationByUser`: When significance calculation is enabled, specifies whether to aggregate data by user or by sample. Default value: `false` (by sample).
       * - `Numerator` and `Denominator`: The specific definitions of the numerator and denominator used in significance calculation.
       * - `IsBinomialDistribution`: Valid only for derived metrics. Specifies whether the metric follows a binomial distribution, which affects subsequent data processing logic.
       * Note: You do not need to provide all fields at the same time. Include only the parameters whose values you want to change in the request body.
       *
       * @param request UpdateABMetricRequest
       * @return UpdateABMetricResponse
       */
      Models::UpdateABMetricResponse updateABMetric(const string &ABMetricId, const Models::UpdateABMetricRequest &request);

      /**
       * @summary Updates an A/B test metric group.
       *
       * @param request UpdateABMetricGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateABMetricGroupResponse
       */
      Models::UpdateABMetricGroupResponse updateABMetricGroupWithOptions(const string &ABMetricGroupId, const Models::UpdateABMetricGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an A/B test metric group.
       *
       * @param request UpdateABMetricGroupRequest
       * @return UpdateABMetricGroupResponse
       */
      Models::UpdateABMetricGroupResponse updateABMetricGroup(const string &ABMetricGroupId, const Models::UpdateABMetricGroupRequest &request);

      /**
       * @summary Updates a crowd\\"s information, such as its name and description.
       *
       * @param request UpdateCrowdRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCrowdResponse
       */
      Models::UpdateCrowdResponse updateCrowdWithOptions(const string &CrowdId, const Models::UpdateCrowdRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a crowd\\"s information, such as its name and description.
       *
       * @param request UpdateCrowdRequest
       * @return UpdateCrowdResponse
       */
      Models::UpdateCrowdResponse updateCrowd(const string &CrowdId, const Models::UpdateCrowdRequest &request);

      /**
       * @summary Updates the configuration of a specified data diagnosis task.
       *
       * @description ## Request
       * This API updates the configuration of an existing data diagnosis task, including the instance ID, task name, task type, and specific configuration content. Provide the `DataDiagnosisId` in the request path to identify the task to update. You must also specify the `Config` parameter based on the task `Type`. For periodic runs, set the execution time in the `CycleTime` field. If a periodic run is not required, omit this field.
       * ## Usage notes
       * - `DataDiagnosisId` is a required path parameter that uniquely identifies a data diagnosis task.
       * - The structure of the `Config` field varies depending on the value of `Type`. Refer to the examples in this document for configuration details.
       * - To disable periodic runs, omit the `CycleTime` field.
       * - When updating a task for two-table join analysis (`JoinTables`), provide the information for the left and right tables, including `LeftTableMetaId` and `RightTableMetaId`.
       * - The `InstanceId`, `Name`, and `Type` parameters are required for all types of data diagnosis tasks.
       *
       * @param request UpdateDataDiagnosisRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDataDiagnosisResponse
       */
      Models::UpdateDataDiagnosisResponse updateDataDiagnosisWithOptions(const string &DataDiagnosisId, const Models::UpdateDataDiagnosisRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configuration of a specified data diagnosis task.
       *
       * @description ## Request
       * This API updates the configuration of an existing data diagnosis task, including the instance ID, task name, task type, and specific configuration content. Provide the `DataDiagnosisId` in the request path to identify the task to update. You must also specify the `Config` parameter based on the task `Type`. For periodic runs, set the execution time in the `CycleTime` field. If a periodic run is not required, omit this field.
       * ## Usage notes
       * - `DataDiagnosisId` is a required path parameter that uniquely identifies a data diagnosis task.
       * - The structure of the `Config` field varies depending on the value of `Type`. Refer to the examples in this document for configuration details.
       * - To disable periodic runs, omit the `CycleTime` field.
       * - When updating a task for two-table join analysis (`JoinTables`), provide the information for the left and right tables, including `LeftTableMetaId` and `RightTableMetaId`.
       * - The `InstanceId`, `Name`, and `Type` parameters are required for all types of data diagnosis tasks.
       *
       * @param request UpdateDataDiagnosisRequest
       * @return UpdateDataDiagnosisResponse
       */
      Models::UpdateDataDiagnosisResponse updateDataDiagnosis(const string &DataDiagnosisId, const Models::UpdateDataDiagnosisRequest &request);

      /**
       * @summary Updates an engine configuration.
       *
       * @param request UpdateEngineConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateEngineConfigResponse
       */
      Models::UpdateEngineConfigResponse updateEngineConfigWithOptions(const string &EngineConfigId, const Models::UpdateEngineConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an engine configuration.
       *
       * @param request UpdateEngineConfigRequest
       * @return UpdateEngineConfigResponse
       */
      Models::UpdateEngineConfigResponse updateEngineConfig(const string &EngineConfigId, const Models::UpdateEngineConfigRequest &request);

      /**
       * @summary Updates the properties of a specified experiment, such as its name.
       *
       * @param request UpdateExperimentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateExperimentResponse
       */
      Models::UpdateExperimentResponse updateExperimentWithOptions(const string &ExperimentId, const Models::UpdateExperimentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the properties of a specified experiment, such as its name.
       *
       * @param request UpdateExperimentRequest
       * @return UpdateExperimentResponse
       */
      Models::UpdateExperimentResponse updateExperiment(const string &ExperimentId, const Models::UpdateExperimentRequest &request);

      /**
       * @summary Updates information for a specified experiment group, such as its name and description.
       *
       * @param request UpdateExperimentGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateExperimentGroupResponse
       */
      Models::UpdateExperimentGroupResponse updateExperimentGroupWithOptions(const string &ExperimentGroupId, const Models::UpdateExperimentGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates information for a specified experiment group, such as its name and description.
       *
       * @param request UpdateExperimentGroupRequest
       * @return UpdateExperimentGroupResponse
       */
      Models::UpdateExperimentGroupResponse updateExperimentGroup(const string &ExperimentGroupId, const Models::UpdateExperimentGroupRequest &request);

      /**
       * @summary Updates the configuration details of a feature consistency check task, such as the name.
       *
       * @description ## Operation description
       * This API operation allows you to update the configuration of an existing feature consistency check task. By providing new configuration parameters, you can modify multiple properties including the instance ID, name, and scene ID. Ensure that all required parameters are included in the request, and provide optional parameters as needed.
       * - **FeatureConsistencyCheckJobConfigId** is a path parameter that specifies the feature consistency check task to update.
       * - All other parameters are in the request body. Some are required (such as InstanceId and Name), and the rest are optional.
       * - The SampleRate value must be a floating-point number between 0 and 1, which indicates the sampling ratio.
       * - If you use FeatureStore-related features, make sure that you correctly set the IsUseFeatureStore flag and the related FeatureStore* fields.
       * - For network configuration parameters (such as VpcId and SwitchId), make sure that the values match your Alibaba Cloud environment.
       *
       * @param request UpdateFeatureConsistencyCheckJobConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFeatureConsistencyCheckJobConfigResponse
       */
      Models::UpdateFeatureConsistencyCheckJobConfigResponse updateFeatureConsistencyCheckJobConfigWithOptions(const string &FeatureConsistencyCheckJobConfigId, const Models::UpdateFeatureConsistencyCheckJobConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configuration details of a feature consistency check task, such as the name.
       *
       * @description ## Operation description
       * This API operation allows you to update the configuration of an existing feature consistency check task. By providing new configuration parameters, you can modify multiple properties including the instance ID, name, and scene ID. Ensure that all required parameters are included in the request, and provide optional parameters as needed.
       * - **FeatureConsistencyCheckJobConfigId** is a path parameter that specifies the feature consistency check task to update.
       * - All other parameters are in the request body. Some are required (such as InstanceId and Name), and the rest are optional.
       * - The SampleRate value must be a floating-point number between 0 and 1, which indicates the sampling ratio.
       * - If you use FeatureStore-related features, make sure that you correctly set the IsUseFeatureStore flag and the related FeatureStore* fields.
       * - For network configuration parameters (such as VpcId and SwitchId), make sure that the values match your Alibaba Cloud environment.
       *
       * @param request UpdateFeatureConsistencyCheckJobConfigRequest
       * @return UpdateFeatureConsistencyCheckJobConfigResponse
       */
      Models::UpdateFeatureConsistencyCheckJobConfigResponse updateFeatureConsistencyCheckJobConfig(const string &FeatureConsistencyCheckJobConfigId, const Models::UpdateFeatureConsistencyCheckJobConfigRequest &request);

      /**
       * @summary Updates a specified resource for a specified instance.
       *
       * @param request UpdateInstanceResourceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInstanceResourceResponse
       */
      Models::UpdateInstanceResourceResponse updateInstanceResourceWithOptions(const string &InstanceId, const string &ResourceId, const Models::UpdateInstanceResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a specified resource for a specified instance.
       *
       * @param request UpdateInstanceResourceRequest
       * @return UpdateInstanceResourceResponse
       */
      Models::UpdateInstanceResourceResponse updateInstanceResource(const string &InstanceId, const string &ResourceId, const Models::UpdateInstanceResourceRequest &request);

      /**
       * @summary Updates a laboratory\\"s information, such as its name.
       *
       * @param request UpdateLaboratoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLaboratoryResponse
       */
      Models::UpdateLaboratoryResponse updateLaboratoryWithOptions(const string &LaboratoryId, const Models::UpdateLaboratoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a laboratory\\"s information, such as its name.
       *
       * @param request UpdateLaboratoryRequest
       * @return UpdateLaboratoryResponse
       */
      Models::UpdateLaboratoryResponse updateLaboratory(const string &LaboratoryId, const Models::UpdateLaboratoryRequest &request);

      /**
       * @summary Updates the name and description of a specified layer.
       *
       * @param request UpdateLayerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLayerResponse
       */
      Models::UpdateLayerResponse updateLayerWithOptions(const string &LayerId, const Models::UpdateLayerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the name and description of a specified layer.
       *
       * @param request UpdateLayerRequest
       * @return UpdateLayerResponse
       */
      Models::UpdateLayerResponse updateLayer(const string &LayerId, const Models::UpdateLayerRequest &request);

      /**
       * @summary Updates information for a specified parameter, such as its value.
       *
       * @param request UpdateParamRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateParamResponse
       */
      Models::UpdateParamResponse updateParamWithOptions(const string &ParamId, const Models::UpdateParamRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates information for a specified parameter, such as its value.
       *
       * @param request UpdateParamRequest
       * @return UpdateParamResponse
       */
      Models::UpdateParamResponse updateParam(const string &ParamId, const Models::UpdateParamRequest &request);

      /**
       * @summary Updates the recall management configuration, including the instance ID, password, and network configuration.
       *
       * @description ## Request
       * - `InstanceId` is required. It specifies the instance to update.
       * - `Password` and `NetworkConfigs` are optional.
       * - Use `NetworkConfigs` to define the network by specifying the Virtual Private Cloud (VPC) ID (`VpcId`) and mapping availability zones to VSwitch IDs (`VswitchIds`).
       * - Note: Ensure that sensitive information, such as the password, is transmitted securely.
       *
       * @param request UpdateRecallManagementConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRecallManagementConfigResponse
       */
      Models::UpdateRecallManagementConfigResponse updateRecallManagementConfigWithOptions(const Models::UpdateRecallManagementConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the recall management configuration, including the instance ID, password, and network configuration.
       *
       * @description ## Request
       * - `InstanceId` is required. It specifies the instance to update.
       * - `Password` and `NetworkConfigs` are optional.
       * - Use `NetworkConfigs` to define the network by specifying the Virtual Private Cloud (VPC) ID (`VpcId`) and mapping availability zones to VSwitch IDs (`VswitchIds`).
       * - Note: Ensure that sensitive information, such as the password, is transmitted securely.
       *
       * @param request UpdateRecallManagementConfigRequest
       * @return UpdateRecallManagementConfigResponse
       */
      Models::UpdateRecallManagementConfigResponse updateRecallManagementConfig(const Models::UpdateRecallManagementConfigRequest &request);

      /**
       * @summary Updates the instance ID and description of a specified recall management service.
       *
       * @description ## Request description
       * This operation updates the instance ID and description of a specific recall management service. Make sure to specify the `InstanceId` and `Description` fields in the request body.
       * - **RecallManagementServiceId**: The unique identifier of the recall management service.
       * - **InstanceId**: The instance ID to associate with this recall management service.
       * - **Description**: A new description for the recall management service.
       * Note: You must provide all required parameters, or the update may fail.
       *
       * @param request UpdateRecallManagementServiceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRecallManagementServiceResponse
       */
      Models::UpdateRecallManagementServiceResponse updateRecallManagementServiceWithOptions(const string &RecallManagementServiceId, const Models::UpdateRecallManagementServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the instance ID and description of a specified recall management service.
       *
       * @description ## Request description
       * This operation updates the instance ID and description of a specific recall management service. Make sure to specify the `InstanceId` and `Description` fields in the request body.
       * - **RecallManagementServiceId**: The unique identifier of the recall management service.
       * - **InstanceId**: The instance ID to associate with this recall management service.
       * - **Description**: A new description for the recall management service.
       * Note: You must provide all required parameters, or the update may fail.
       *
       * @param request UpdateRecallManagementServiceRequest
       * @return UpdateRecallManagementServiceResponse
       */
      Models::UpdateRecallManagementServiceResponse updateRecallManagementService(const string &RecallManagementServiceId, const Models::UpdateRecallManagementServiceRequest &request);

      /**
       * @summary Updates the configuration of a specific Recall Management Service version.
       *
       * @description ## Request
       * This API updates the recall and merge configurations for a specific recall management service version. Your request must include the correct `InstanceId` and the configurations to update. Refer to the parameter descriptions for details on required parameters.
       *
       * @param request UpdateRecallManagementServiceVersionConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRecallManagementServiceVersionConfigResponse
       */
      Models::UpdateRecallManagementServiceVersionConfigResponse updateRecallManagementServiceVersionConfigWithOptions(const string &RecallManagementServiceId, const string &RecallManagementServiceVersionId, const string &RecallManagementServiceVersionConfigId, const Models::UpdateRecallManagementServiceVersionConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configuration of a specific Recall Management Service version.
       *
       * @description ## Request
       * This API updates the recall and merge configurations for a specific recall management service version. Your request must include the correct `InstanceId` and the configurations to update. Refer to the parameter descriptions for details on required parameters.
       *
       * @param request UpdateRecallManagementServiceVersionConfigRequest
       * @return UpdateRecallManagementServiceVersionConfigResponse
       */
      Models::UpdateRecallManagementServiceVersionConfigResponse updateRecallManagementServiceVersionConfig(const string &RecallManagementServiceId, const string &RecallManagementServiceVersionId, const string &RecallManagementServiceVersionConfigId, const Models::UpdateRecallManagementServiceVersionConfigRequest &request);

      /**
       * @summary Updates the configuration of a recall management table specified by its ID.
       *
       * @description ## Request details
       * - Updates the recall management table specified by `RecallManagementTableId`.
       * - You can enable fluctuation thresholds for the row count or data size and define the specific ranges for these thresholds.
       * - You can add or modify fields in the table, including their names, types, and attributes.
       * - The `InstanceId` parameter is required and identifies the specific instance.
       * - For vector-related fields, you can also specify the vector dimension and metric type.
       * - Note: Optional parameters in the request body selectively update the target table.
       *
       * @param request UpdateRecallManagementTableRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRecallManagementTableResponse
       */
      Models::UpdateRecallManagementTableResponse updateRecallManagementTableWithOptions(const string &RecallManagementTableId, const Models::UpdateRecallManagementTableRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configuration of a recall management table specified by its ID.
       *
       * @description ## Request details
       * - Updates the recall management table specified by `RecallManagementTableId`.
       * - You can enable fluctuation thresholds for the row count or data size and define the specific ranges for these thresholds.
       * - You can add or modify fields in the table, including their names, types, and attributes.
       * - The `InstanceId` parameter is required and identifies the specific instance.
       * - For vector-related fields, you can also specify the vector dimension and metric type.
       * - Note: Optional parameters in the request body selectively update the target table.
       *
       * @param request UpdateRecallManagementTableRequest
       * @return UpdateRecallManagementTableResponse
       */
      Models::UpdateRecallManagementTableResponse updateRecallManagementTable(const string &RecallManagementTableId, const Models::UpdateRecallManagementTableRequest &request);

      /**
       * @summary 获取资源规则列表
       *
       * @param request UpdateResourceRuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateResourceRuleResponse
       */
      Models::UpdateResourceRuleResponse updateResourceRuleWithOptions(const string &ResourceRuleId, const Models::UpdateResourceRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取资源规则列表
       *
       * @param request UpdateResourceRuleRequest
       * @return UpdateResourceRuleResponse
       */
      Models::UpdateResourceRuleResponse updateResourceRule(const string &ResourceRuleId, const Models::UpdateResourceRuleRequest &request);

      /**
       * @summary 更新资源规则条目
       *
       * @param request UpdateResourceRuleItemRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateResourceRuleItemResponse
       */
      Models::UpdateResourceRuleItemResponse updateResourceRuleItemWithOptions(const string &ResourceRuleId, const string &ResourceRuleItemId, const Models::UpdateResourceRuleItemRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新资源规则条目
       *
       * @param request UpdateResourceRuleItemRequest
       * @return UpdateResourceRuleItemResponse
       */
      Models::UpdateResourceRuleItemResponse updateResourceRuleItem(const string &ResourceRuleId, const string &ResourceRuleItemId, const Models::UpdateResourceRuleItemRequest &request);

      /**
       * @summary Updates information for a scene, such as its name and description.
       *
       * @param request UpdateSceneRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSceneResponse
       */
      Models::UpdateSceneResponse updateSceneWithOptions(const string &SceneId, const Models::UpdateSceneRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates information for a scene, such as its name and description.
       *
       * @param request UpdateSceneRequest
       * @return UpdateSceneResponse
       */
      Models::UpdateSceneResponse updateScene(const string &SceneId, const Models::UpdateSceneRequest &request);

      /**
       * @summary Updates a data table.
       *
       * @param request UpdateTableMetaRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTableMetaResponse
       */
      Models::UpdateTableMetaResponse updateTableMetaWithOptions(const string &TableMetaId, const Models::UpdateTableMetaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a data table.
       *
       * @param request UpdateTableMetaRequest
       * @return UpdateTableMetaResponse
       */
      Models::UpdateTableMetaResponse updateTableMeta(const string &TableMetaId, const Models::UpdateTableMetaRequest &request);

      /**
       * @summary Updates the configuration of a traffic control target, including its control period, conditions, and value.
       *
       * @description ## Description
       * - Updates a traffic control target specified by its ID.
       * - `TrafficControlTargetId` is a path parameter that specifies the ID of the traffic control target to update.
       * - The `ItemConditionType` parameter specifies the format of the item condition, which can be either `Array` or `Expression`. Based on your selection, you must provide a value for either the `ItemConditionArray` or `ItemConditionExpress` parameter.
       * - If `NewProductRegulation` is set to `true`, the control rule applies to a new product.
       * - The `StatisPeriod` parameter specifies the statistics period. Valid values are `Daily` and `hourly`.
       * - Ensure that the time interval between `StartTime` and `EndTime` is reasonable and meets your business requirements.
       *
       * @param request UpdateTrafficControlTargetRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTrafficControlTargetResponse
       */
      Models::UpdateTrafficControlTargetResponse updateTrafficControlTargetWithOptions(const string &TrafficControlTargetId, const Models::UpdateTrafficControlTargetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configuration of a traffic control target, including its control period, conditions, and value.
       *
       * @description ## Description
       * - Updates a traffic control target specified by its ID.
       * - `TrafficControlTargetId` is a path parameter that specifies the ID of the traffic control target to update.
       * - The `ItemConditionType` parameter specifies the format of the item condition, which can be either `Array` or `Expression`. Based on your selection, you must provide a value for either the `ItemConditionArray` or `ItemConditionExpress` parameter.
       * - If `NewProductRegulation` is set to `true`, the control rule applies to a new product.
       * - The `StatisPeriod` parameter specifies the statistics period. Valid values are `Daily` and `hourly`.
       * - Ensure that the time interval between `StartTime` and `EndTime` is reasonable and meets your business requirements.
       *
       * @param request UpdateTrafficControlTargetRequest
       * @return UpdateTrafficControlTargetResponse
       */
      Models::UpdateTrafficControlTargetResponse updateTrafficControlTarget(const string &TrafficControlTargetId, const Models::UpdateTrafficControlTargetRequest &request);

      /**
       * @summary Updates the configuration and target of a specified traffic control task.
       *
       * @description ## Usage notes
       * - Use this API to update an existing traffic control task.
       * - When `ExecutionTime` is set to `TimeRange`, you must also provide `StartTime` and `EndTime`.
       * - Each element in the `TrafficControlTargets` array is a traffic control target. Ensure each target\\"s time range, condition type, and other information are complete and valid.
       * - If you set `UserConditionType` or `ItemConditionType` to `Expression`, you must specify the corresponding expression field (for example, `UserConditionExpress`).
       * - `ServiceIds` and `EffectiveSceneIds` are optional parameters. If you include them, ensure the ID lists are correctly formatted.
       * - Ensure you complete all required fields to avoid a failed request.
       *
       * @param request UpdateTrafficControlTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTrafficControlTaskResponse
       */
      Models::UpdateTrafficControlTaskResponse updateTrafficControlTaskWithOptions(const string &TrafficControlTaskId, const Models::UpdateTrafficControlTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configuration and target of a specified traffic control task.
       *
       * @description ## Usage notes
       * - Use this API to update an existing traffic control task.
       * - When `ExecutionTime` is set to `TimeRange`, you must also provide `StartTime` and `EndTime`.
       * - Each element in the `TrafficControlTargets` array is a traffic control target. Ensure each target\\"s time range, condition type, and other information are complete and valid.
       * - If you set `UserConditionType` or `ItemConditionType` to `Expression`, you must specify the corresponding expression field (for example, `UserConditionExpress`).
       * - `ServiceIds` and `EffectiveSceneIds` are optional parameters. If you include them, ensure the ID lists are correctly formatted.
       * - Ensure you complete all required fields to avoid a failed request.
       *
       * @param request UpdateTrafficControlTaskRequest
       * @return UpdateTrafficControlTaskResponse
       */
      Models::UpdateTrafficControlTaskResponse updateTrafficControlTask(const string &TrafficControlTaskId, const Models::UpdateTrafficControlTaskRequest &request);

      /**
       * @summary Updates the traffic parameters for a specified traffic control task, including target traffic and actual traffic.
       *
       * @description ## Request
       * This API updates the traffic configuration for a specific traffic control task. The configuration includes the traffic control target ID, record time, target traffic, and overall traffic. Ensure that the provided`TrafficControlTaskId` is valid and within your permission scope. Additionally, each object in the`Traffics` array must contain the required fields.
       *
       * @param request UpdateTrafficControlTaskTrafficRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTrafficControlTaskTrafficResponse
       */
      Models::UpdateTrafficControlTaskTrafficResponse updateTrafficControlTaskTrafficWithOptions(const string &TrafficControlTaskId, const Models::UpdateTrafficControlTaskTrafficRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the traffic parameters for a specified traffic control task, including target traffic and actual traffic.
       *
       * @description ## Request
       * This API updates the traffic configuration for a specific traffic control task. The configuration includes the traffic control target ID, record time, target traffic, and overall traffic. Ensure that the provided`TrafficControlTaskId` is valid and within your permission scope. Additionally, each object in the`Traffics` array must contain the required fields.
       *
       * @param request UpdateTrafficControlTaskTrafficRequest
       * @return UpdateTrafficControlTaskTrafficResponse
       */
      Models::UpdateTrafficControlTaskTrafficResponse updateTrafficControlTaskTraffic(const string &TrafficControlTaskId, const Models::UpdateTrafficControlTaskTrafficRequest &request);

      /**
       * @summary 上传数据
       *
       * @param request UploadRecommendationDataRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadRecommendationDataResponse
       */
      Models::UploadRecommendationDataResponse uploadRecommendationDataWithOptions(const Models::UploadRecommendationDataRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 上传数据
       *
       * @param request UploadRecommendationDataRequest
       * @return UploadRecommendationDataResponse
       */
      Models::UploadRecommendationDataResponse uploadRecommendationData(const Models::UploadRecommendationDataRequest &request);
  };
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
