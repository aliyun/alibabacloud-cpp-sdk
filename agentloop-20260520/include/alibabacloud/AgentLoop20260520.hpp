// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_AGENTLOOP20260520_HPP_
#define ALIBABACLOUD_AGENTLOOP20260520_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/AgentLoop20260520Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/AgentLoop20260520.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Appends structured data rows to a specified dataset without requiring the client to construct SQL statements.
       *
       * @param request AddDatasetDataRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddDatasetDataResponse
       */
      Models::AddDatasetDataResponse addDatasetDataWithOptions(const string &agentSpace, const string &datasetName, const Models::AddDatasetDataRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Appends structured data rows to a specified dataset without requiring the client to construct SQL statements.
       *
       * @param request AddDatasetDataRequest
       * @return AddDatasetDataResponse
       */
      Models::AddDatasetDataResponse addDatasetData(const string &agentSpace, const string &datasetName, const Models::AddDatasetDataRequest &request);

      /**
       * @summary Cancels a pipeline run.
       *
       * @param request CancelPipelineRunRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelPipelineRunResponse
       */
      Models::CancelPipelineRunResponse cancelPipelineRunWithOptions(const string &agentSpace, const string &pipelineName, const string &runId, const Models::CancelPipelineRunRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels a pipeline run.
       *
       * @param request CancelPipelineRunRequest
       * @return CancelPipelineRunResponse
       */
      Models::CancelPipelineRunResponse cancelPipelineRun(const string &agentSpace, const string &pipelineName, const string &runId, const Models::CancelPipelineRunRequest &request);

      /**
       * @summary Creates an AgentSpace.
       *
       * @param request CreateAgentSpaceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAgentSpaceResponse
       */
      Models::CreateAgentSpaceResponse createAgentSpaceWithOptions(const Models::CreateAgentSpaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an AgentSpace.
       *
       * @param request CreateAgentSpaceRequest
       * @return CreateAgentSpaceResponse
       */
      Models::CreateAgentSpaceResponse createAgentSpace(const Models::CreateAgentSpaceRequest &request);

      /**
       * @summary Creates a context store.
       *
       * @param request CreateContextStoreRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateContextStoreResponse
       */
      Models::CreateContextStoreResponse createContextStoreWithOptions(const string &agentSpace, const Models::CreateContextStoreRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a context store.
       *
       * @param request CreateContextStoreRequest
       * @return CreateContextStoreResponse
       */
      Models::CreateContextStoreResponse createContextStore(const string &agentSpace, const Models::CreateContextStoreRequest &request);

      /**
       * @summary Creates an API key.
       *
       * @param request CreateContextStoreAPIKeyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateContextStoreAPIKeyResponse
       */
      Models::CreateContextStoreAPIKeyResponse createContextStoreAPIKeyWithOptions(const string &agentSpace, const string &contextStoreName, const Models::CreateContextStoreAPIKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an API key.
       *
       * @param request CreateContextStoreAPIKeyRequest
       * @return CreateContextStoreAPIKeyResponse
       */
      Models::CreateContextStoreAPIKeyResponse createContextStoreAPIKey(const string &agentSpace, const string &contextStoreName, const Models::CreateContextStoreAPIKeyRequest &request);

      /**
       * @summary Creates a dataset.
       *
       * @param request CreateDatasetRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDatasetResponse
       */
      Models::CreateDatasetResponse createDatasetWithOptions(const string &agentSpace, const Models::CreateDatasetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a dataset.
       *
       * @param request CreateDatasetRequest
       * @return CreateDatasetResponse
       */
      Models::CreateDatasetResponse createDataset(const string &agentSpace, const Models::CreateDatasetRequest &request);

      /**
       * @summary Creates an evaluation task.
       *
       * @description Calls the CreateEvaluationTask operation to create an evaluation task in a specified AgentSpace. The server verifies AgentSpace permissions, initializes evaluation result storage, checks the uniqueness of the task name, and asynchronously creates and executes an EvaluationRun based on `taskMode` and `runStrategies`.
       * This operation is applicable to running built-in or custom evaluators on Trace, Dataset, or SLS Log data. It supports two execution strategies: historical backfill and continuous evaluation.
       *
       * @param request CreateEvaluationTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEvaluationTaskResponse
       */
      Models::CreateEvaluationTaskResponse createEvaluationTaskWithOptions(const string &agentSpace, const Models::CreateEvaluationTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an evaluation task.
       *
       * @description Calls the CreateEvaluationTask operation to create an evaluation task in a specified AgentSpace. The server verifies AgentSpace permissions, initializes evaluation result storage, checks the uniqueness of the task name, and asynchronously creates and executes an EvaluationRun based on `taskMode` and `runStrategies`.
       * This operation is applicable to running built-in or custom evaluators on Trace, Dataset, or SLS Log data. It supports two execution strategies: historical backfill and continuous evaluation.
       *
       * @param request CreateEvaluationTaskRequest
       * @return CreateEvaluationTaskResponse
       */
      Models::CreateEvaluationTaskResponse createEvaluationTask(const string &agentSpace, const Models::CreateEvaluationTaskRequest &request);

      /**
       * @summary Creates an evaluator.
       *
       * @param request CreateEvaluatorRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEvaluatorResponse
       */
      Models::CreateEvaluatorResponse createEvaluatorWithOptions(const string &agentSpace, const Models::CreateEvaluatorRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an evaluator.
       *
       * @param request CreateEvaluatorRequest
       * @return CreateEvaluatorResponse
       */
      Models::CreateEvaluatorResponse createEvaluator(const string &agentSpace, const Models::CreateEvaluatorRequest &request);

      /**
       * @summary Creates an evaluator skill.
       *
       * @param request CreateEvaluatorSkillRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEvaluatorSkillResponse
       */
      Models::CreateEvaluatorSkillResponse createEvaluatorSkillWithOptions(const string &name, const Models::CreateEvaluatorSkillRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an evaluator skill.
       *
       * @param request CreateEvaluatorSkillRequest
       * @return CreateEvaluatorSkillResponse
       */
      Models::CreateEvaluatorSkillResponse createEvaluatorSkill(const string &name, const Models::CreateEvaluatorSkillRequest &request);

      /**
       * @summary Creates an experiment plan.
       *
       * @description Calls CreateExperimentPlan to create an experiment plan under a specified AgentSpace. Use this operation to define the configuration of an offline or online experiment, including the data source, optional evaluators, and experiment groups required for online experiments. After the plan is created, call CreateExperimentRun to start execution.
       *
       * @param request CreateExperimentPlanRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateExperimentPlanResponse
       */
      Models::CreateExperimentPlanResponse createExperimentPlanWithOptions(const string &agentSpace, const Models::CreateExperimentPlanRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an experiment plan.
       *
       * @description Calls CreateExperimentPlan to create an experiment plan under a specified AgentSpace. Use this operation to define the configuration of an offline or online experiment, including the data source, optional evaluators, and experiment groups required for online experiments. After the plan is created, call CreateExperimentRun to start execution.
       *
       * @param request CreateExperimentPlanRequest
       * @return CreateExperimentPlanResponse
       */
      Models::CreateExperimentPlanResponse createExperimentPlan(const string &agentSpace, const Models::CreateExperimentPlanRequest &request);

      /**
       * @summary Executes an experiment.
       *
       * @description Calls CreateExperimentRun to initiate an experiment execution based on an existing experiment plan. For online experiments, you typically only need to pass `experimentPlanId`. For offline experiments, you need to pass `offlineExperiments` (1 to 5 items).
       *
       * @param request CreateExperimentRunRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateExperimentRunResponse
       */
      Models::CreateExperimentRunResponse createExperimentRunWithOptions(const string &agentSpace, const Models::CreateExperimentRunRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Executes an experiment.
       *
       * @description Calls CreateExperimentRun to initiate an experiment execution based on an existing experiment plan. For online experiments, you typically only need to pass `experimentPlanId`. For offline experiments, you need to pass `offlineExperiments` (1 to 5 items).
       *
       * @param request CreateExperimentRunRequest
       * @return CreateExperimentRunResponse
       */
      Models::CreateExperimentRunResponse createExperimentRun(const string &agentSpace, const Models::CreateExperimentRunRequest &request);

      /**
       * @summary Creates a pipeline.
       *
       * @param request CreatePipelineRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePipelineResponse
       */
      Models::CreatePipelineResponse createPipelineWithOptions(const string &agentSpace, const Models::CreatePipelineRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a pipeline.
       *
       * @param request CreatePipelineRequest
       * @return CreatePipelineResponse
       */
      Models::CreatePipelineResponse createPipeline(const string &agentSpace, const Models::CreatePipelineRequest &request);

      /**
       * @summary Deletes an AgentSpace.
       *
       * @param request DeleteAgentSpaceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAgentSpaceResponse
       */
      Models::DeleteAgentSpaceResponse deleteAgentSpaceWithOptions(const string &agentSpace, const Models::DeleteAgentSpaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an AgentSpace.
       *
       * @param request DeleteAgentSpaceRequest
       * @return DeleteAgentSpaceResponse
       */
      Models::DeleteAgentSpaceResponse deleteAgentSpace(const string &agentSpace, const Models::DeleteAgentSpaceRequest &request);

      /**
       * @summary Deletes a context store.
       *
       * @param request DeleteContextStoreRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteContextStoreResponse
       */
      Models::DeleteContextStoreResponse deleteContextStoreWithOptions(const string &agentSpace, const string &contextStoreName, const Models::DeleteContextStoreRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a context store.
       *
       * @param request DeleteContextStoreRequest
       * @return DeleteContextStoreResponse
       */
      Models::DeleteContextStoreResponse deleteContextStore(const string &agentSpace, const string &contextStoreName, const Models::DeleteContextStoreRequest &request);

      /**
       * @summary Deletes an API key.
       *
       * @param request DeleteContextStoreAPIKeyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteContextStoreAPIKeyResponse
       */
      Models::DeleteContextStoreAPIKeyResponse deleteContextStoreAPIKeyWithOptions(const string &agentSpace, const string &contextStoreName, const string &name, const Models::DeleteContextStoreAPIKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an API key.
       *
       * @param request DeleteContextStoreAPIKeyRequest
       * @return DeleteContextStoreAPIKeyResponse
       */
      Models::DeleteContextStoreAPIKeyResponse deleteContextStoreAPIKey(const string &agentSpace, const string &contextStoreName, const string &name, const Models::DeleteContextStoreAPIKeyRequest &request);

      /**
       * @summary Deletes a dataset.
       *
       * @param request DeleteDatasetRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDatasetResponse
       */
      Models::DeleteDatasetResponse deleteDatasetWithOptions(const string &agentSpace, const string &datasetName, const Models::DeleteDatasetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a dataset.
       *
       * @param request DeleteDatasetRequest
       * @return DeleteDatasetResponse
       */
      Models::DeleteDatasetResponse deleteDataset(const string &agentSpace, const string &datasetName, const Models::DeleteDatasetRequest &request);

      /**
       * @summary Deletes an evaluation run.
       *
       * @param request DeleteEvaluationRunRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEvaluationRunResponse
       */
      Models::DeleteEvaluationRunResponse deleteEvaluationRunWithOptions(const string &agentSpace, const string &taskId, const string &runId, const Models::DeleteEvaluationRunRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an evaluation run.
       *
       * @param request DeleteEvaluationRunRequest
       * @return DeleteEvaluationRunResponse
       */
      Models::DeleteEvaluationRunResponse deleteEvaluationRun(const string &agentSpace, const string &taskId, const string &runId, const Models::DeleteEvaluationRunRequest &request);

      /**
       * @summary Deletes an evaluation task.
       *
       * @param request DeleteEvaluationTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEvaluationTaskResponse
       */
      Models::DeleteEvaluationTaskResponse deleteEvaluationTaskWithOptions(const string &agentSpace, const string &taskId, const Models::DeleteEvaluationTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an evaluation task.
       *
       * @param request DeleteEvaluationTaskRequest
       * @return DeleteEvaluationTaskResponse
       */
      Models::DeleteEvaluationTaskResponse deleteEvaluationTask(const string &agentSpace, const string &taskId, const Models::DeleteEvaluationTaskRequest &request);

      /**
       * @summary Deletes an evaluator.
       *
       * @param request DeleteEvaluatorRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEvaluatorResponse
       */
      Models::DeleteEvaluatorResponse deleteEvaluatorWithOptions(const string &agentSpace, const string &name, const Models::DeleteEvaluatorRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an evaluator.
       *
       * @param request DeleteEvaluatorRequest
       * @return DeleteEvaluatorResponse
       */
      Models::DeleteEvaluatorResponse deleteEvaluator(const string &agentSpace, const string &name, const Models::DeleteEvaluatorRequest &request);

      /**
       * @summary Deletes an evaluator skill.
       *
       * @param request DeleteEvaluatorSkillRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEvaluatorSkillResponse
       */
      Models::DeleteEvaluatorSkillResponse deleteEvaluatorSkillWithOptions(const string &name, const string &skillName, const Models::DeleteEvaluatorSkillRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an evaluator skill.
       *
       * @param request DeleteEvaluatorSkillRequest
       * @return DeleteEvaluatorSkillResponse
       */
      Models::DeleteEvaluatorSkillResponse deleteEvaluatorSkill(const string &name, const string &skillName, const Models::DeleteEvaluatorSkillRequest &request);

      /**
       * @summary Deletes an experiment plan.
       *
       * @description Calls DeleteExperimentPlan to delete a specified experiment plan. After deletion, no new executions can be initiated based on this plan. Existing experiment records can still be queried.
       *
       * @param request DeleteExperimentPlanRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteExperimentPlanResponse
       */
      Models::DeleteExperimentPlanResponse deleteExperimentPlanWithOptions(const string &agentSpace, const string &planId, const Models::DeleteExperimentPlanRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an experiment plan.
       *
       * @description Calls DeleteExperimentPlan to delete a specified experiment plan. After deletion, no new executions can be initiated based on this plan. Existing experiment records can still be queried.
       *
       * @param request DeleteExperimentPlanRequest
       * @return DeleteExperimentPlanResponse
       */
      Models::DeleteExperimentPlanResponse deleteExperimentPlan(const string &agentSpace, const string &planId, const Models::DeleteExperimentPlanRequest &request);

      /**
       * @summary Deletes an experiment record.
       *
       * @description Calls DeleteExperimentRun to delete a specified experiment run record. Deleting the record does not delete the experiment plan to which it belongs.
       *
       * @param request DeleteExperimentRunRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteExperimentRunResponse
       */
      Models::DeleteExperimentRunResponse deleteExperimentRunWithOptions(const string &agentSpace, const string &recordId, const Models::DeleteExperimentRunRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an experiment record.
       *
       * @description Calls DeleteExperimentRun to delete a specified experiment run record. Deleting the record does not delete the experiment plan to which it belongs.
       *
       * @param request DeleteExperimentRunRequest
       * @return DeleteExperimentRunResponse
       */
      Models::DeleteExperimentRunResponse deleteExperimentRun(const string &agentSpace, const string &recordId, const Models::DeleteExperimentRunRequest &request);

      /**
       * @summary Deletes a pipeline.
       *
       * @param request DeletePipelineRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePipelineResponse
       */
      Models::DeletePipelineResponse deletePipelineWithOptions(const string &agentSpace, const string &pipelineName, const Models::DeletePipelineRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a pipeline.
       *
       * @param request DeletePipelineRequest
       * @return DeletePipelineResponse
       */
      Models::DeletePipelineResponse deletePipeline(const string &agentSpace, const string &pipelineName, const Models::DeletePipelineRequest &request);

      /**
       * @summary Queries regions.
       *
       * @param request DescribeRegionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Models::DescribeRegionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries regions.
       *
       * @param request DescribeRegionsRequest
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions(const Models::DescribeRegionsRequest &request);

      /**
       * @summary Executes a query statement.
       *
       * @param request ExecuteQueryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteQueryResponse
       */
      Models::ExecuteQueryResponse executeQueryWithOptions(const string &agentSpace, const string &datasetName, const Models::ExecuteQueryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Executes a query statement.
       *
       * @param request ExecuteQueryRequest
       * @return ExecuteQueryResponse
       */
      Models::ExecuteQueryResponse executeQuery(const string &agentSpace, const string &datasetName, const Models::ExecuteQueryRequest &request);

      /**
       * @summary Queries an AgentSpace.
       *
       * @param request GetAgentSpaceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAgentSpaceResponse
       */
      Models::GetAgentSpaceResponse getAgentSpaceWithOptions(const string &agentSpace, const Models::GetAgentSpaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries an AgentSpace.
       *
       * @param request GetAgentSpaceRequest
       * @return GetAgentSpaceResponse
       */
      Models::GetAgentSpaceResponse getAgentSpace(const string &agentSpace, const Models::GetAgentSpaceRequest &request);

      /**
       * @summary Queries a context store.
       *
       * @param request GetContextStoreRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetContextStoreResponse
       */
      Models::GetContextStoreResponse getContextStoreWithOptions(const string &agentSpace, const string &contextStoreName, const Models::GetContextStoreRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a context store.
       *
       * @param request GetContextStoreRequest
       * @return GetContextStoreResponse
       */
      Models::GetContextStoreResponse getContextStore(const string &agentSpace, const string &contextStoreName, const Models::GetContextStoreRequest &request);

      /**
       * @summary Retrieves an API key.
       *
       * @param request GetContextStoreAPIKeyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetContextStoreAPIKeyResponse
       */
      Models::GetContextStoreAPIKeyResponse getContextStoreAPIKeyWithOptions(const string &agentSpace, const string &contextStoreName, const string &name, const Models::GetContextStoreAPIKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves an API key.
       *
       * @param request GetContextStoreAPIKeyRequest
       * @return GetContextStoreAPIKeyResponse
       */
      Models::GetContextStoreAPIKeyResponse getContextStoreAPIKey(const string &agentSpace, const string &contextStoreName, const string &name, const Models::GetContextStoreAPIKeyRequest &request);

      /**
       * @summary Queries a dataset.
       *
       * @param request GetDatasetRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDatasetResponse
       */
      Models::GetDatasetResponse getDatasetWithOptions(const string &agentSpace, const string &datasetName, const Models::GetDatasetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a dataset.
       *
       * @param request GetDatasetRequest
       * @return GetDatasetResponse
       */
      Models::GetDatasetResponse getDataset(const string &agentSpace, const string &datasetName, const Models::GetDatasetRequest &request);

      /**
       * @summary Retrieves the details of an evaluation run.
       *
       * @param request GetEvaluationRunRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEvaluationRunResponse
       */
      Models::GetEvaluationRunResponse getEvaluationRunWithOptions(const string &agentSpace, const string &taskId, const string &runId, const Models::GetEvaluationRunRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of an evaluation run.
       *
       * @param request GetEvaluationRunRequest
       * @return GetEvaluationRunResponse
       */
      Models::GetEvaluationRunResponse getEvaluationRun(const string &agentSpace, const string &taskId, const string &runId, const Models::GetEvaluationRunRequest &request);

      /**
       * @summary Retrieves the details of an evaluation task.
       *
       * @param request GetEvaluationTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEvaluationTaskResponse
       */
      Models::GetEvaluationTaskResponse getEvaluationTaskWithOptions(const string &agentSpace, const string &taskId, const Models::GetEvaluationTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of an evaluation task.
       *
       * @param request GetEvaluationTaskRequest
       * @return GetEvaluationTaskResponse
       */
      Models::GetEvaluationTaskResponse getEvaluationTask(const string &agentSpace, const string &taskId, const Models::GetEvaluationTaskRequest &request);

      /**
       * @summary Retrieves the details of an evaluator.
       *
       * @param request GetEvaluatorRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEvaluatorResponse
       */
      Models::GetEvaluatorResponse getEvaluatorWithOptions(const string &agentSpace, const string &name, const Models::GetEvaluatorRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of an evaluator.
       *
       * @param request GetEvaluatorRequest
       * @return GetEvaluatorResponse
       */
      Models::GetEvaluatorResponse getEvaluator(const string &agentSpace, const string &name, const Models::GetEvaluatorRequest &request);

      /**
       * @summary Retrieves the details of an evaluator skill.
       *
       * @param request GetEvaluatorSkillRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEvaluatorSkillResponse
       */
      Models::GetEvaluatorSkillResponse getEvaluatorSkillWithOptions(const string &name, const string &skillName, const Models::GetEvaluatorSkillRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of an evaluator skill.
       *
       * @param request GetEvaluatorSkillRequest
       * @return GetEvaluatorSkillResponse
       */
      Models::GetEvaluatorSkillResponse getEvaluatorSkill(const string &name, const string &skillName, const Models::GetEvaluatorSkillRequest &request);

      /**
       * @summary Query an experiment plan
       *
       * @description Calls the GetExperimentPlan operation to query the complete configuration of a specified experiment plan, including experiment groups, data sources, evaluators, and timestamps.
       *
       * @param request GetExperimentPlanRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetExperimentPlanResponse
       */
      Models::GetExperimentPlanResponse getExperimentPlanWithOptions(const string &agentSpace, const string &planId, const Models::GetExperimentPlanRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query an experiment plan
       *
       * @description Calls the GetExperimentPlan operation to query the complete configuration of a specified experiment plan, including experiment groups, data sources, evaluators, and timestamps.
       *
       * @param request GetExperimentPlanRequest
       * @return GetExperimentPlanResponse
       */
      Models::GetExperimentPlanResponse getExperimentPlan(const string &agentSpace, const string &planId, const Models::GetExperimentPlanRequest &request);

      /**
       * @summary Queries the details of an experiment run record.
       *
       * @description Calls GetExperimentRun to query the details of a specific experiment run record, including the status, progress, configuration snapshot, and associated evaluation task ID.
       *
       * @param request GetExperimentRunRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetExperimentRunResponse
       */
      Models::GetExperimentRunResponse getExperimentRunWithOptions(const string &agentSpace, const string &recordId, const Models::GetExperimentRunRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an experiment run record.
       *
       * @description Calls GetExperimentRun to query the details of a specific experiment run record, including the status, progress, configuration snapshot, and associated evaluation task ID.
       *
       * @param request GetExperimentRunRequest
       * @return GetExperimentRunResponse
       */
      Models::GetExperimentRunResponse getExperimentRun(const string &agentSpace, const string &recordId, const Models::GetExperimentRunRequest &request);

      /**
       * @summary Queries a CI/CD pipeline.
       *
       * @param request GetPipelineRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPipelineResponse
       */
      Models::GetPipelineResponse getPipelineWithOptions(const string &agentSpace, const string &pipelineName, const Models::GetPipelineRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a CI/CD pipeline.
       *
       * @param request GetPipelineRequest
       * @return GetPipelineResponse
       */
      Models::GetPipelineResponse getPipeline(const string &agentSpace, const string &pipelineName, const Models::GetPipelineRequest &request);

      /**
       * @summary Queries the details of a single pipeline run.
       *
       * @param request GetPipelineRunRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPipelineRunResponse
       */
      Models::GetPipelineRunResponse getPipelineRunWithOptions(const string &agentSpace, const string &pipelineName, const string &runId, const Models::GetPipelineRunRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a single pipeline run.
       *
       * @param request GetPipelineRunRequest
       * @return GetPipelineRunResponse
       */
      Models::GetPipelineRunResponse getPipelineRun(const string &agentSpace, const string &pipelineName, const string &runId, const Models::GetPipelineRunRequest &request);

      /**
       * @summary Queries pipeline run statistics.
       *
       * @param request GetPipelineStatsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPipelineStatsResponse
       */
      Models::GetPipelineStatsResponse getPipelineStatsWithOptions(const string &agentSpace, const string &pipelineName, const Models::GetPipelineStatsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries pipeline run statistics.
       *
       * @param request GetPipelineStatsRequest
       * @return GetPipelineStatsResponse
       */
      Models::GetPipelineStatsResponse getPipelineStats(const string &agentSpace, const string &pipelineName, const Models::GetPipelineStatsRequest &request);

      /**
       * @summary Queries a list of AgentSpaces.
       *
       * @param request ListAgentSpacesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAgentSpacesResponse
       */
      Models::ListAgentSpacesResponse listAgentSpacesWithOptions(const Models::ListAgentSpacesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of AgentSpaces.
       *
       * @param request ListAgentSpacesRequest
       * @return ListAgentSpacesResponse
       */
      Models::ListAgentSpacesResponse listAgentSpaces(const Models::ListAgentSpacesRequest &request);

      /**
       * @summary Retrieves a list of API keys.
       *
       * @param request ListContextStoreAPIKeysRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListContextStoreAPIKeysResponse
       */
      Models::ListContextStoreAPIKeysResponse listContextStoreAPIKeysWithOptions(const string &agentSpace, const string &contextStoreName, const Models::ListContextStoreAPIKeysRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of API keys.
       *
       * @param request ListContextStoreAPIKeysRequest
       * @return ListContextStoreAPIKeysResponse
       */
      Models::ListContextStoreAPIKeysResponse listContextStoreAPIKeys(const string &agentSpace, const string &contextStoreName, const Models::ListContextStoreAPIKeysRequest &request);

      /**
       * @summary Queries a list of context stores.
       *
       * @param request ListContextStoresRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListContextStoresResponse
       */
      Models::ListContextStoresResponse listContextStoresWithOptions(const string &agentSpace, const Models::ListContextStoresRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of context stores.
       *
       * @param request ListContextStoresRequest
       * @return ListContextStoresResponse
       */
      Models::ListContextStoresResponse listContextStores(const string &agentSpace, const Models::ListContextStoresRequest &request);

      /**
       * @summary Queries a list of datasets.
       *
       * @param request ListDatasetsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDatasetsResponse
       */
      Models::ListDatasetsResponse listDatasetsWithOptions(const string &agentSpace, const Models::ListDatasetsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of datasets.
       *
       * @param request ListDatasetsRequest
       * @return ListDatasetsResponse
       */
      Models::ListDatasetsResponse listDatasets(const string &agentSpace, const Models::ListDatasetsRequest &request);

      /**
       * @summary Queries the list of evaluation runs.
       *
       * @param request ListEvaluationRunsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEvaluationRunsResponse
       */
      Models::ListEvaluationRunsResponse listEvaluationRunsWithOptions(const string &agentSpace, const string &taskId, const Models::ListEvaluationRunsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of evaluation runs.
       *
       * @param request ListEvaluationRunsRequest
       * @return ListEvaluationRunsResponse
       */
      Models::ListEvaluationRunsResponse listEvaluationRuns(const string &agentSpace, const string &taskId, const Models::ListEvaluationRunsRequest &request);

      /**
       * @summary Queries a list of evaluation tasks.
       *
       * @param request ListEvaluationTasksRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEvaluationTasksResponse
       */
      Models::ListEvaluationTasksResponse listEvaluationTasksWithOptions(const Models::ListEvaluationTasksRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of evaluation tasks.
       *
       * @param request ListEvaluationTasksRequest
       * @return ListEvaluationTasksResponse
       */
      Models::ListEvaluationTasksResponse listEvaluationTasks(const Models::ListEvaluationTasksRequest &request);

      /**
       * @summary Queries the skill list of an evaluator.
       *
       * @param request ListEvaluatorSkillsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEvaluatorSkillsResponse
       */
      Models::ListEvaluatorSkillsResponse listEvaluatorSkillsWithOptions(const string &name, const Models::ListEvaluatorSkillsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the skill list of an evaluator.
       *
       * @param request ListEvaluatorSkillsRequest
       * @return ListEvaluatorSkillsResponse
       */
      Models::ListEvaluatorSkillsResponse listEvaluatorSkills(const string &name, const Models::ListEvaluatorSkillsRequest &request);

      /**
       * @summary Queries a list of evaluators.
       *
       * @param request ListEvaluatorsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEvaluatorsResponse
       */
      Models::ListEvaluatorsResponse listEvaluatorsWithOptions(const Models::ListEvaluatorsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of evaluators.
       *
       * @param request ListEvaluatorsRequest
       * @return ListEvaluatorsResponse
       */
      Models::ListEvaluatorsResponse listEvaluators(const Models::ListEvaluatorsRequest &request);

      /**
       * @summary Queries the list of experiment plans.
       *
       * @description Calls ListExperimentPlans to query the list of experiment plans under a specified AgentSpace for the current account. Supports fuzzy match by plan name, filtering by status, and pagination using `offset`/`limit`.
       *
       * @param request ListExperimentPlansRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListExperimentPlansResponse
       */
      Models::ListExperimentPlansResponse listExperimentPlansWithOptions(const string &agentSpace, const Models::ListExperimentPlansRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of experiment plans.
       *
       * @description Calls ListExperimentPlans to query the list of experiment plans under a specified AgentSpace for the current account. Supports fuzzy match by plan name, filtering by status, and pagination using `offset`/`limit`.
       *
       * @param request ListExperimentPlansRequest
       * @return ListExperimentPlansResponse
       */
      Models::ListExperimentPlansResponse listExperimentPlans(const string &agentSpace, const Models::ListExperimentPlansRequest &request);

      /**
       * @summary Queries the list of experiment run records.
       *
       * @description Calls ListExperimentRuns to query experiment run records under a specified AgentSpace for the current account. You can filter results by status, dataset, plan name, or experiment name, and use `page`/`pageSize` for pagination.
       *
       * @param request ListExperimentRunsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListExperimentRunsResponse
       */
      Models::ListExperimentRunsResponse listExperimentRunsWithOptions(const string &agentSpace, const Models::ListExperimentRunsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of experiment run records.
       *
       * @description Calls ListExperimentRuns to query experiment run records under a specified AgentSpace for the current account. You can filter results by status, dataset, plan name, or experiment name, and use `page`/`pageSize` for pagination.
       *
       * @param request ListExperimentRunsRequest
       * @return ListExperimentRunsResponse
       */
      Models::ListExperimentRunsResponse listExperimentRuns(const string &agentSpace, const Models::ListExperimentRunsRequest &request);

      /**
       * @summary Queries the execution history list of a pipeline.
       *
       * @param request ListPipelineRunsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPipelineRunsResponse
       */
      Models::ListPipelineRunsResponse listPipelineRunsWithOptions(const string &agentSpace, const string &pipelineName, const Models::ListPipelineRunsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the execution history list of a pipeline.
       *
       * @param request ListPipelineRunsRequest
       * @return ListPipelineRunsResponse
       */
      Models::ListPipelineRunsResponse listPipelineRuns(const string &agentSpace, const string &pipelineName, const Models::ListPipelineRunsRequest &request);

      /**
       * @summary Lists CI/CD pipelines.
       *
       * @param request ListPipelinesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPipelinesResponse
       */
      Models::ListPipelinesResponse listPipelinesWithOptions(const string &agentSpace, const Models::ListPipelinesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists CI/CD pipelines.
       *
       * @param request ListPipelinesRequest
       * @return ListPipelinesResponse
       */
      Models::ListPipelinesResponse listPipelines(const string &agentSpace, const Models::ListPipelinesRequest &request);

      /**
       * @summary Pauses a pipeline.
       *
       * @param request PausePipelineRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PausePipelineResponse
       */
      Models::PausePipelineResponse pausePipelineWithOptions(const string &agentSpace, const string &pipelineName, const Models::PausePipelineRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Pauses a pipeline.
       *
       * @param request PausePipelineRequest
       * @return PausePipelineResponse
       */
      Models::PausePipelineResponse pausePipeline(const string &agentSpace, const string &pipelineName, const Models::PausePipelineRequest &request);

      /**
       * @summary Previews a pipeline. Without creating pipeline resources, performs a trial query based on the specified data source, node orchestration, and time range, and returns a small number of sample data records for authenticating parameter settings and previewing processing results.
       *
       * @description ## Request description
       * - **agentSpace** must be an AgentSpace instance that has been created under the current account.
       * - **source.type** currently supports only the `logstore` type. The `logstore.project` and `logstore.logstore` must be authorized within the AgentSpace and located in the same region.
       * - **pipeline.nodes** must contain at least one node of the `Source` type and cannot be empty.
       * - **fromTime** and **toTime** are UNIX timestamps in seconds. **fromTime** must be less than **toTime**.
       * - A maximum of 5 records are returned, and internal system fields of the data source are automatically filtered out.
       *
       * @param request PreviewPipelineRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PreviewPipelineResponse
       */
      Models::PreviewPipelineResponse previewPipelineWithOptions(const string &agentSpace, const Models::PreviewPipelineRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Previews a pipeline. Without creating pipeline resources, performs a trial query based on the specified data source, node orchestration, and time range, and returns a small number of sample data records for authenticating parameter settings and previewing processing results.
       *
       * @description ## Request description
       * - **agentSpace** must be an AgentSpace instance that has been created under the current account.
       * - **source.type** currently supports only the `logstore` type. The `logstore.project` and `logstore.logstore` must be authorized within the AgentSpace and located in the same region.
       * - **pipeline.nodes** must contain at least one node of the `Source` type and cannot be empty.
       * - **fromTime** and **toTime** are UNIX timestamps in seconds. **fromTime** must be less than **toTime**.
       * - A maximum of 5 records are returned, and internal system fields of the data source are automatically filtered out.
       *
       * @param request PreviewPipelineRequest
       * @return PreviewPipelineResponse
       */
      Models::PreviewPipelineResponse previewPipeline(const string &agentSpace, const Models::PreviewPipelineRequest &request);

      /**
       * @summary Resumes a pipeline.
       *
       * @param request ResumePipelineRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResumePipelineResponse
       */
      Models::ResumePipelineResponse resumePipelineWithOptions(const string &agentSpace, const string &pipelineName, const Models::ResumePipelineRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resumes a pipeline.
       *
       * @param request ResumePipelineRequest
       * @return ResumePipelineResponse
       */
      Models::ResumePipelineResponse resumePipeline(const string &agentSpace, const string &pipelineName, const Models::ResumePipelineRequest &request);

      /**
       * @summary Manually triggers a pipeline execution.
       *
       * @param request RunPipelineRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunPipelineResponse
       */
      Models::RunPipelineResponse runPipelineWithOptions(const string &agentSpace, const string &pipelineName, const Models::RunPipelineRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Manually triggers a pipeline execution.
       *
       * @param request RunPipelineRequest
       * @return RunPipelineResponse
       */
      Models::RunPipelineResponse runPipeline(const string &agentSpace, const string &pipelineName, const Models::RunPipelineRequest &request);

      /**
       * @summary Searches contexts.
       *
       * @param request SearchContextRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchContextResponse
       */
      Models::SearchContextResponse searchContextWithOptions(const string &agentSpace, const string &contextStoreName, const Models::SearchContextRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Searches contexts.
       *
       * @param request SearchContextRequest
       * @return SearchContextResponse
       */
      Models::SearchContextResponse searchContext(const string &agentSpace, const string &contextStoreName, const Models::SearchContextRequest &request);

      /**
       * @summary Stops a pipeline.
       *
       * @param request TerminatePipelineRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return TerminatePipelineResponse
       */
      Models::TerminatePipelineResponse terminatePipelineWithOptions(const string &agentSpace, const string &pipelineName, const Models::TerminatePipelineRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a pipeline.
       *
       * @param request TerminatePipelineRequest
       * @return TerminatePipelineResponse
       */
      Models::TerminatePipelineResponse terminatePipeline(const string &agentSpace, const string &pipelineName, const Models::TerminatePipelineRequest &request);

      /**
       * @summary Updates an AgentSpace.
       *
       * @param request UpdateAgentSpaceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAgentSpaceResponse
       */
      Models::UpdateAgentSpaceResponse updateAgentSpaceWithOptions(const string &agentSpace, const Models::UpdateAgentSpaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an AgentSpace.
       *
       * @param request UpdateAgentSpaceRequest
       * @return UpdateAgentSpaceResponse
       */
      Models::UpdateAgentSpaceResponse updateAgentSpace(const string &agentSpace, const Models::UpdateAgentSpaceRequest &request);

      /**
       * @summary Modifies the configuration of a context store.
       *
       * @param request UpdateContextStoreRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateContextStoreResponse
       */
      Models::UpdateContextStoreResponse updateContextStoreWithOptions(const string &agentSpace, const string &contextStoreName, const Models::UpdateContextStoreRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of a context store.
       *
       * @param request UpdateContextStoreRequest
       * @return UpdateContextStoreResponse
       */
      Models::UpdateContextStoreResponse updateContextStore(const string &agentSpace, const string &contextStoreName, const Models::UpdateContextStoreRequest &request);

      /**
       * @summary Updates a dataset.
       *
       * @param request UpdateDatasetRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDatasetResponse
       */
      Models::UpdateDatasetResponse updateDatasetWithOptions(const string &agentSpace, const string &datasetName, const Models::UpdateDatasetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a dataset.
       *
       * @param request UpdateDatasetRequest
       * @return UpdateDatasetResponse
       */
      Models::UpdateDatasetResponse updateDataset(const string &agentSpace, const string &datasetName, const Models::UpdateDatasetRequest &request);

      /**
       * @summary Updates an evaluation run.
       *
       * @param request UpdateEvaluationRunRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateEvaluationRunResponse
       */
      Models::UpdateEvaluationRunResponse updateEvaluationRunWithOptions(const string &agentSpace, const string &taskId, const string &runId, const Models::UpdateEvaluationRunRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an evaluation run.
       *
       * @param request UpdateEvaluationRunRequest
       * @return UpdateEvaluationRunResponse
       */
      Models::UpdateEvaluationRunResponse updateEvaluationRun(const string &agentSpace, const string &taskId, const string &runId, const Models::UpdateEvaluationRunRequest &request);

      /**
       * @summary Updates an evaluation task.
       *
       * @param request UpdateEvaluationTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateEvaluationTaskResponse
       */
      Models::UpdateEvaluationTaskResponse updateEvaluationTaskWithOptions(const string &agentSpace, const string &taskId, const Models::UpdateEvaluationTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an evaluation task.
       *
       * @param request UpdateEvaluationTaskRequest
       * @return UpdateEvaluationTaskResponse
       */
      Models::UpdateEvaluationTaskResponse updateEvaluationTask(const string &agentSpace, const string &taskId, const Models::UpdateEvaluationTaskRequest &request);

      /**
       * @summary Updates an evaluator.
       *
       * @param request UpdateEvaluatorRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateEvaluatorResponse
       */
      Models::UpdateEvaluatorResponse updateEvaluatorWithOptions(const string &agentSpace, const string &name, const Models::UpdateEvaluatorRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an evaluator.
       *
       * @param request UpdateEvaluatorRequest
       * @return UpdateEvaluatorResponse
       */
      Models::UpdateEvaluatorResponse updateEvaluator(const string &agentSpace, const string &name, const Models::UpdateEvaluatorRequest &request);

      /**
       * @summary Updates an evaluator skill.
       *
       * @param request UpdateEvaluatorSkillRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateEvaluatorSkillResponse
       */
      Models::UpdateEvaluatorSkillResponse updateEvaluatorSkillWithOptions(const string &name, const string &skillName, const Models::UpdateEvaluatorSkillRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an evaluator skill.
       *
       * @param request UpdateEvaluatorSkillRequest
       * @return UpdateEvaluatorSkillResponse
       */
      Models::UpdateEvaluatorSkillResponse updateEvaluatorSkill(const string &name, const string &skillName, const Models::UpdateEvaluatorSkillRequest &request);

      /**
       * @summary Updates an experiment plan.
       *
       * @description Calls UpdateExperimentPlan to update a specified experiment plan. Fields that are not passed remain unchanged. Only plans created by the current account can be updated.
       *
       * @param request UpdateExperimentPlanRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateExperimentPlanResponse
       */
      Models::UpdateExperimentPlanResponse updateExperimentPlanWithOptions(const string &agentSpace, const string &planId, const Models::UpdateExperimentPlanRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an experiment plan.
       *
       * @description Calls UpdateExperimentPlan to update a specified experiment plan. Fields that are not passed remain unchanged. Only plans created by the current account can be updated.
       *
       * @param request UpdateExperimentPlanRequest
       * @return UpdateExperimentPlanResponse
       */
      Models::UpdateExperimentPlanResponse updateExperimentPlan(const string &agentSpace, const string &planId, const Models::UpdateExperimentPlanRequest &request);

      /**
       * @summary Updates an experiment run.
       *
       * @description Calls UpdateExperimentRun to update the name, status, and task counts of an experiment record. Fields that are not specified remain unchanged. Typical sequence for offline experiments: running → progress writeback → completed.
       *
       * @param request UpdateExperimentRunRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateExperimentRunResponse
       */
      Models::UpdateExperimentRunResponse updateExperimentRunWithOptions(const string &agentSpace, const string &recordId, const Models::UpdateExperimentRunRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an experiment run.
       *
       * @description Calls UpdateExperimentRun to update the name, status, and task counts of an experiment record. Fields that are not specified remain unchanged. Typical sequence for offline experiments: running → progress writeback → completed.
       *
       * @param request UpdateExperimentRunRequest
       * @return UpdateExperimentRunResponse
       */
      Models::UpdateExperimentRunResponse updateExperimentRun(const string &agentSpace, const string &recordId, const Models::UpdateExperimentRunRequest &request);

      /**
       * @summary Updates a pipeline.
       *
       * @param request UpdatePipelineRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePipelineResponse
       */
      Models::UpdatePipelineResponse updatePipelineWithOptions(const string &agentSpace, const string &pipelineName, const Models::UpdatePipelineRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a pipeline.
       *
       * @param request UpdatePipelineRequest
       * @return UpdatePipelineResponse
       */
      Models::UpdatePipelineResponse updatePipeline(const string &agentSpace, const string &pipelineName, const Models::UpdatePipelineRequest &request);
  };
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
