// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_XTEE20210910_HPP_
#define ALIBABACLOUD_XTEE20210910_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Xtee20210910Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <darabonba/Runtime.hpp>
#include <map>
#include <alibabacloud/Xtee20210910.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);

      Darabonba::Json _postOSSObject(const string &bucketName, const Darabonba::Json &form, const Darabonba::RuntimeOptions &runtime);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Add Sample Data via CSV
       *
       * @param request AddSampleDataByCsvRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddSampleDataByCsvResponse
       */
      Models::AddSampleDataByCsvResponse addSampleDataByCsvWithOptions(const Models::AddSampleDataByCsvRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Add Sample Data via CSV
       *
       * @param request AddSampleDataByCsvRequest
       * @return AddSampleDataByCsvResponse
       */
      Models::AddSampleDataByCsvResponse addSampleDataByCsv(const Models::AddSampleDataByCsvRequest &request);

      /**
       * @summary Add list data through a text box for samples
       *
       * @param request AddSampleDataByTextRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddSampleDataByTextResponse
       */
      Models::AddSampleDataByTextResponse addSampleDataByTextWithOptions(const Models::AddSampleDataByTextRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Add list data through a text box for samples
       *
       * @param request AddSampleDataByTextRequest
       * @return AddSampleDataByTextResponse
       */
      Models::AddSampleDataByTextResponse addSampleDataByText(const Models::AddSampleDataByTextRequest &request);

      /**
       * @summary Batch Delete Sample List Data
       *
       * @param request BatchDeleteSampleDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchDeleteSampleDataResponse
       */
      Models::BatchDeleteSampleDataResponse batchDeleteSampleDataWithOptions(const Models::BatchDeleteSampleDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Batch Delete Sample List Data
       *
       * @param request BatchDeleteSampleDataRequest
       * @return BatchDeleteSampleDataResponse
       */
      Models::BatchDeleteSampleDataResponse batchDeleteSampleData(const Models::BatchDeleteSampleDataRequest &request);

      /**
       * @summary Performs a variable binding operation.
       *
       * @param request BindVariableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindVariableResponse
       */
      Models::BindVariableResponse bindVariableWithOptions(const Models::BindVariableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a variable binding operation.
       *
       * @param request BindVariableRequest
       * @return BindVariableResponse
       */
      Models::BindVariableResponse bindVariable(const Models::BindVariableRequest &request);

      /**
       * @summary Create a task group
       *
       * @param request CancelSubTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelSubTaskResponse
       */
      Models::CancelSubTaskResponse cancelSubTaskWithOptions(const Models::CancelSubTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a task group
       *
       * @param request CancelSubTaskRequest
       * @return CancelSubTaskResponse
       */
      Models::CancelSubTaskResponse cancelSubTask(const Models::CancelSubTaskRequest &request);

      /**
       * @summary Policy Replication Lineage Check
       *
       * @param request CheckCopyRuleVariableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckCopyRuleVariableResponse
       */
      Models::CheckCopyRuleVariableResponse checkCopyRuleVariableWithOptions(const Models::CheckCopyRuleVariableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Policy Replication Lineage Check
       *
       * @param request CheckCopyRuleVariableRequest
       * @return CheckCopyRuleVariableResponse
       */
      Models::CheckCopyRuleVariableResponse checkCopyRuleVariable(const Models::CheckCopyRuleVariableRequest &request);

      /**
       * @summary Checks whether the number of cumulative variables exceeds the limit.
       *
       * @param request CheckCustVariableLimitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckCustVariableLimitResponse
       */
      Models::CheckCustVariableLimitResponse checkCustVariableLimitWithOptions(const Models::CheckCustVariableLimitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether the number of cumulative variables exceeds the limit.
       *
       * @param request CheckCustVariableLimitRequest
       * @return CheckCustVariableLimitResponse
       */
      Models::CheckCustVariableLimitResponse checkCustVariableLimit(const Models::CheckCustVariableLimitRequest &request);

      /**
       * @summary Checks whether creating a variable exceeds the upper limit.
       *
       * @param request CheckExpressionVariableLimitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckExpressionVariableLimitResponse
       */
      Models::CheckExpressionVariableLimitResponse checkExpressionVariableLimitWithOptions(const Models::CheckExpressionVariableLimitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether creating a variable exceeds the upper limit.
       *
       * @param request CheckExpressionVariableLimitRequest
       * @return CheckExpressionVariableLimitResponse
       */
      Models::CheckExpressionVariableLimitResponse checkExpressionVariableLimit(const Models::CheckExpressionVariableLimitRequest &request);

      /**
       * @summary Checks whether the number of fields exceeds the specified limit.
       *
       * @param request CheckFieldLimitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckFieldLimitResponse
       */
      Models::CheckFieldLimitResponse checkFieldLimitWithOptions(const Models::CheckFieldLimitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether the number of fields exceeds the specified limit.
       *
       * @param request CheckFieldLimitRequest
       * @return CheckFieldLimitResponse
       */
      Models::CheckFieldLimitResponse checkFieldLimit(const Models::CheckFieldLimitRequest &request);

      /**
       * @summary Validate sample name uniqueness
       *
       * @param request CheckSampleNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckSampleNameResponse
       */
      Models::CheckSampleNameResponse checkSampleNameWithOptions(const Models::CheckSampleNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Validate sample name uniqueness
       *
       * @param request CheckSampleNameRequest
       * @return CheckSampleNameResponse
       */
      Models::CheckSampleNameResponse checkSampleName(const Models::CheckSampleNameRequest &request);

      /**
       * @summary Validate the uniqueness of the task group name
       *
       * @param request CheckTaskGroupNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckTaskGroupNameResponse
       */
      Models::CheckTaskGroupNameResponse checkTaskGroupNameWithOptions(const Models::CheckTaskGroupNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Validate the uniqueness of the task group name
       *
       * @param request CheckTaskGroupNameRequest
       * @return CheckTaskGroupNameResponse
       */
      Models::CheckTaskGroupNameResponse checkTaskGroupName(const Models::CheckTaskGroupNameRequest &request);

      /**
       * @summary Checks variable references.
       *
       * @param request CheckUsageVariableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckUsageVariableResponse
       */
      Models::CheckUsageVariableResponse checkUsageVariableWithOptions(const Models::CheckUsageVariableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks variable references.
       *
       * @param request CheckUsageVariableRequest
       * @return CheckUsageVariableResponse
       */
      Models::CheckUsageVariableResponse checkUsageVariable(const Models::CheckUsageVariableRequest &request);

      /**
       * @summary Policy Comparison
       *
       * @param request CompareCopyRuleVariableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CompareCopyRuleVariableResponse
       */
      Models::CompareCopyRuleVariableResponse compareCopyRuleVariableWithOptions(const Models::CompareCopyRuleVariableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Policy Comparison
       *
       * @param request CompareCopyRuleVariableRequest
       * @return CompareCopyRuleVariableResponse
       */
      Models::CompareCopyRuleVariableResponse compareCopyRuleVariable(const Models::CompareCopyRuleVariableRequest &request);

      /**
       * @summary Policy Comparison.
       *
       * @param request CompareRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CompareRuleResponse
       */
      Models::CompareRuleResponse compareRuleWithOptions(const Models::CompareRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Policy Comparison.
       *
       * @param request CompareRuleRequest
       * @return CompareRuleResponse
       */
      Models::CompareRuleResponse compareRule(const Models::CompareRuleRequest &request);

      /**
       * @summary Creates a query condition.
       *
       * @param request CreateAnalysisConditionFavoriteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAnalysisConditionFavoriteResponse
       */
      Models::CreateAnalysisConditionFavoriteResponse createAnalysisConditionFavoriteWithOptions(const Models::CreateAnalysisConditionFavoriteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a query condition.
       *
       * @param request CreateAnalysisConditionFavoriteRequest
       * @return CreateAnalysisConditionFavoriteResponse
       */
      Models::CreateAnalysisConditionFavoriteResponse createAnalysisConditionFavorite(const Models::CreateAnalysisConditionFavoriteRequest &request);

      /**
       * @summary Creates an export task.
       *
       * @param request CreateAnalysisExportTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAnalysisExportTaskResponse
       */
      Models::CreateAnalysisExportTaskResponse createAnalysisExportTaskWithOptions(const Models::CreateAnalysisExportTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an export task.
       *
       * @param request CreateAnalysisExportTaskRequest
       * @return CreateAnalysisExportTaskResponse
       */
      Models::CreateAnalysisExportTaskResponse createAnalysisExportTask(const Models::CreateAnalysisExportTaskRequest &request);

      /**
       * @summary Create an AppKey.
       *
       * @param request CreateAppKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAppKeyResponse
       */
      Models::CreateAppKeyResponse createAppKeyWithOptions(const Models::CreateAppKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create an AppKey.
       *
       * @param request CreateAppKeyRequest
       * @return CreateAppKeyResponse
       */
      Models::CreateAppKeyResponse createAppKey(const Models::CreateAppKeyRequest &request);

      /**
       * @summary Creates a cumulative variable.
       *
       * @param request CreateCustVariableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCustVariableResponse
       */
      Models::CreateCustVariableResponse createCustVariableWithOptions(const Models::CreateCustVariableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a cumulative variable.
       *
       * @param request CreateCustVariableRequest
       * @return CreateCustVariableResponse
       */
      Models::CreateCustVariableResponse createCustVariable(const Models::CreateCustVariableRequest &request);

      /**
       * @summary Creates a data source.
       *
       * @param request CreateDataSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataSourceResponse
       */
      Models::CreateDataSourceResponse createDataSourceWithOptions(const Models::CreateDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a data source.
       *
       * @param request CreateDataSourceRequest
       * @return CreateDataSourceResponse
       */
      Models::CreateDataSourceResponse createDataSource(const Models::CreateDataSourceRequest &request);

      /**
       * @summary Creates an event.
       *
       * @param request CreateEventRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEventResponse
       */
      Models::CreateEventResponse createEventWithOptions(const Models::CreateEventRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an event.
       *
       * @param request CreateEventRequest
       * @return CreateEventResponse
       */
      Models::CreateEventResponse createEvent(const Models::CreateEventRequest &request);

      /**
       * @summary Creates a custom variable.
       *
       * @param request CreateExpressionVariableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateExpressionVariableResponse
       */
      Models::CreateExpressionVariableResponse createExpressionVariableWithOptions(const Models::CreateExpressionVariableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom variable.
       *
       * @param request CreateExpressionVariableRequest
       * @return CreateExpressionVariableResponse
       */
      Models::CreateExpressionVariableResponse createExpressionVariable(const Models::CreateExpressionVariableRequest &request);

      /**
       * @summary Creates a field.
       *
       * @param request CreateFieldRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFieldResponse
       */
      Models::CreateFieldResponse createFieldWithOptions(const Models::CreateFieldRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a field.
       *
       * @param request CreateFieldRequest
       * @return CreateFieldResponse
       */
      Models::CreateFieldResponse createField(const Models::CreateFieldRequest &request);

      /**
       * @summary Create a sample record for the customer.
       *
       * @param request CreateForeignPocSampleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateForeignPocSampleResponse
       */
      Models::CreateForeignPocSampleResponse createForeignPocSampleWithOptions(const Models::CreateForeignPocSampleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a sample record for the customer.
       *
       * @param request CreateForeignPocSampleRequest
       * @return CreateForeignPocSampleResponse
       */
      Models::CreateForeignPocSampleResponse createForeignPocSample(const Models::CreateForeignPocSampleRequest &request);

      Models::CreateForeignPocSampleResponse createForeignPocSampleAdvance(const Models::CreateForeignPocSampleAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submit Task
       *
       * @param request CreateModelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateModelResponse
       */
      Models::CreateModelResponse createModelWithOptions(const Models::CreateModelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submit Task
       *
       * @param request CreateModelRequest
       * @return CreateModelResponse
       */
      Models::CreateModelResponse createModel(const Models::CreateModelRequest &request);

      /**
       * @summary Creates a POC.
       *
       * @param request CreatePocEvRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePocEvResponse
       */
      Models::CreatePocEvResponse createPocEvWithOptions(const Models::CreatePocEvRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a POC.
       *
       * @param request CreatePocEvRequest
       * @return CreatePocEvResponse
       */
      Models::CreatePocEvResponse createPocEv(const Models::CreatePocEvRequest &request);

      /**
       * @summary Create a sample record
       *
       * @param request CreatePocSampleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePocSampleResponse
       */
      Models::CreatePocSampleResponse createPocSampleWithOptions(const Models::CreatePocSampleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a sample record
       *
       * @param request CreatePocSampleRequest
       * @return CreatePocSampleResponse
       */
      Models::CreatePocSampleResponse createPocSample(const Models::CreatePocSampleRequest &request);

      /**
       * @summary Creates a custom query variable.
       *
       * @param request CreateQueryVariableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateQueryVariableResponse
       */
      Models::CreateQueryVariableResponse createQueryVariableWithOptions(const Models::CreateQueryVariableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom query variable.
       *
       * @param request CreateQueryVariableRequest
       * @return CreateQueryVariableResponse
       */
      Models::CreateQueryVariableResponse createQueryVariable(const Models::CreateQueryVariableRequest &request);

      /**
       * @summary Creates a recommended event policy.
       *
       * @param request CreateRecommendEventRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRecommendEventRuleResponse
       */
      Models::CreateRecommendEventRuleResponse createRecommendEventRuleWithOptions(const Models::CreateRecommendEventRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a recommended event policy.
       *
       * @param request CreateRecommendEventRuleRequest
       * @return CreateRecommendEventRuleResponse
       */
      Models::CreateRecommendEventRuleResponse createRecommendEventRule(const Models::CreateRecommendEventRuleRequest &request);

      /**
       * @summary Creates a recommendation task.
       *
       * @param request CreateRecommendTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRecommendTaskResponse
       */
      Models::CreateRecommendTaskResponse createRecommendTaskWithOptions(const Models::CreateRecommendTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a recommendation task.
       *
       * @param request CreateRecommendTaskRequest
       * @return CreateRecommendTaskResponse
       */
      Models::CreateRecommendTaskResponse createRecommendTask(const Models::CreateRecommendTaskRequest &request);

      /**
       * @summary Creates a policy and version.
       *
       * @param request CreateRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRuleResponse
       */
      Models::CreateRuleResponse createRuleWithOptions(const Models::CreateRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a policy and version.
       *
       * @param request CreateRuleRequest
       * @return CreateRuleResponse
       */
      Models::CreateRuleResponse createRule(const Models::CreateRuleRequest &request);

      /**
       * @summary Adds a data sample.
       *
       * @param request CreateSampleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSampleResponse
       */
      Models::CreateSampleResponse createSampleWithOptions(const Models::CreateSampleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a data sample.
       *
       * @param request CreateSampleRequest
       * @return CreateSampleResponse
       */
      Models::CreateSampleResponse createSample(const Models::CreateSampleRequest &request);

      /**
       * @summary Creates a sample batch for a single API at the user level.
       *
       * @param request CreateSampleApiRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSampleApiResponse
       */
      Models::CreateSampleApiResponse createSampleApiWithOptions(const Models::CreateSampleApiRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a sample batch for a single API at the user level.
       *
       * @param request CreateSampleApiRequest
       * @return CreateSampleApiResponse
       */
      Models::CreateSampleApiResponse createSampleApi(const Models::CreateSampleApiRequest &request);

      /**
       * @summary Create Sample Batch
       *
       * @param request CreateSampleBatchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSampleBatchResponse
       */
      Models::CreateSampleBatchResponse createSampleBatchWithOptions(const Models::CreateSampleBatchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create Sample Batch
       *
       * @param request CreateSampleBatchRequest
       * @return CreateSampleBatchResponse
       */
      Models::CreateSampleBatchResponse createSampleBatch(const Models::CreateSampleBatchRequest &request);

      /**
       * @summary Creates sample data.
       *
       * @param request CreateSampleDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSampleDataResponse
       */
      Models::CreateSampleDataResponse createSampleDataWithOptions(const Models::CreateSampleDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates sample data.
       *
       * @param request CreateSampleDataRequest
       * @return CreateSampleDataResponse
       */
      Models::CreateSampleDataResponse createSampleData(const Models::CreateSampleDataRequest &request);

      /**
       * @summary Creates a task.
       *
       * @param request CreateSimulationTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSimulationTaskResponse
       */
      Models::CreateSimulationTaskResponse createSimulationTaskWithOptions(const Models::CreateSimulationTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a task.
       *
       * @param request CreateSimulationTaskRequest
       * @return CreateSimulationTaskResponse
       */
      Models::CreateSimulationTaskResponse createSimulationTask(const Models::CreateSimulationTaskRequest &request);

      /**
       * @summary Cancels a subtask.
       *
       * @param request CreateTaskGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTaskGroupResponse
       */
      Models::CreateTaskGroupResponse createTaskGroupWithOptions(const Models::CreateTaskGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels a subtask.
       *
       * @param request CreateTaskGroupRequest
       * @return CreateTaskGroupResponse
       */
      Models::CreateTaskGroupResponse createTaskGroup(const Models::CreateTaskGroupRequest &request);

      /**
       * @summary Policy Replication
       *
       * @param request DeepCopyRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeepCopyRuleResponse
       */
      Models::DeepCopyRuleResponse deepCopyRuleWithOptions(const Models::DeepCopyRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Policy Replication
       *
       * @param request DeepCopyRuleRequest
       * @return DeepCopyRuleResponse
       */
      Models::DeepCopyRuleResponse deepCopyRule(const Models::DeepCopyRuleRequest &request);

      /**
       * @summary Deletes a query condition.
       *
       * @param request DeleteAnalysisConditionFavoriteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAnalysisConditionFavoriteResponse
       */
      Models::DeleteAnalysisConditionFavoriteResponse deleteAnalysisConditionFavoriteWithOptions(const Models::DeleteAnalysisConditionFavoriteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a query condition.
       *
       * @param request DeleteAnalysisConditionFavoriteRequest
       * @return DeleteAnalysisConditionFavoriteResponse
       */
      Models::DeleteAnalysisConditionFavoriteResponse deleteAnalysisConditionFavorite(const Models::DeleteAnalysisConditionFavoriteRequest &request);

      /**
       * @summary Deletes a bypass event.
       *
       * @param request DeleteByPassShuntEventRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteByPassShuntEventResponse
       */
      Models::DeleteByPassShuntEventResponse deleteByPassShuntEventWithOptions(const Models::DeleteByPassShuntEventRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a bypass event.
       *
       * @param request DeleteByPassShuntEventRequest
       * @return DeleteByPassShuntEventResponse
       */
      Models::DeleteByPassShuntEventResponse deleteByPassShuntEvent(const Models::DeleteByPassShuntEventRequest &request);

      /**
       * @summary Deletes a cumulative variable.
       *
       * @param request DeleteCustVariableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCustVariableResponse
       */
      Models::DeleteCustVariableResponse deleteCustVariableWithOptions(const Models::DeleteCustVariableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a cumulative variable.
       *
       * @param request DeleteCustVariableRequest
       * @return DeleteCustVariableResponse
       */
      Models::DeleteCustVariableResponse deleteCustVariable(const Models::DeleteCustVariableRequest &request);

      /**
       * @summary Deletes a data source.
       *
       * @param request DeleteDataSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataSourceResponse
       */
      Models::DeleteDataSourceResponse deleteDataSourceWithOptions(const Models::DeleteDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a data source.
       *
       * @param request DeleteDataSourceRequest
       * @return DeleteDataSourceResponse
       */
      Models::DeleteDataSourceResponse deleteDataSource(const Models::DeleteDataSourceRequest &request);

      /**
       * @summary Delete Event Field
       *
       * @param request DeleteEventFieldRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEventFieldResponse
       */
      Models::DeleteEventFieldResponse deleteEventFieldWithOptions(const Models::DeleteEventFieldRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete Event Field
       *
       * @param request DeleteEventFieldRequest
       * @return DeleteEventFieldResponse
       */
      Models::DeleteEventFieldResponse deleteEventField(const Models::DeleteEventFieldRequest &request);

      /**
       * @summary Deletes a custom variable.
       *
       * @param request DeleteExpressionVariableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteExpressionVariableResponse
       */
      Models::DeleteExpressionVariableResponse deleteExpressionVariableWithOptions(const Models::DeleteExpressionVariableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a custom variable.
       *
       * @param request DeleteExpressionVariableRequest
       * @return DeleteExpressionVariableResponse
       */
      Models::DeleteExpressionVariableResponse deleteExpressionVariable(const Models::DeleteExpressionVariableRequest &request);

      /**
       * @summary Deletes a field.
       *
       * @param request DeleteFieldRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFieldResponse
       */
      Models::DeleteFieldResponse deleteFieldWithOptions(const Models::DeleteFieldRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a field.
       *
       * @param request DeleteFieldRequest
       * @return DeleteFieldResponse
       */
      Models::DeleteFieldResponse deleteField(const Models::DeleteFieldRequest &request);

      /**
       * @summary Deletes a list.
       *
       * @param request DeleteNameListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNameListResponse
       */
      Models::DeleteNameListResponse deleteNameListWithOptions(const Models::DeleteNameListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a list.
       *
       * @param request DeleteNameListRequest
       * @return DeleteNameListResponse
       */
      Models::DeleteNameListResponse deleteNameList(const Models::DeleteNameListRequest &request);

      /**
       * @summary Deletes list variable data.
       *
       * @param request DeleteNameListDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNameListDataResponse
       */
      Models::DeleteNameListDataResponse deleteNameListDataWithOptions(const Models::DeleteNameListDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes list variable data.
       *
       * @param request DeleteNameListDataRequest
       * @return DeleteNameListDataResponse
       */
      Models::DeleteNameListDataResponse deleteNameListData(const Models::DeleteNameListDataRequest &request);

      /**
       * @summary Deletes a custom query variable.
       *
       * @param request DeleteQueryVariableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteQueryVariableResponse
       */
      Models::DeleteQueryVariableResponse deleteQueryVariableWithOptions(const Models::DeleteQueryVariableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a custom query variable.
       *
       * @param request DeleteQueryVariableRequest
       * @return DeleteQueryVariableResponse
       */
      Models::DeleteQueryVariableResponse deleteQueryVariable(const Models::DeleteQueryVariableRequest &request);

      /**
       * @summary Deletes a policy version.
       *
       * @param request DeleteRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRuleResponse
       */
      Models::DeleteRuleResponse deleteRuleWithOptions(const Models::DeleteRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a policy version.
       *
       * @param request DeleteRuleRequest
       * @return DeleteRuleResponse
       */
      Models::DeleteRuleResponse deleteRule(const Models::DeleteRuleRequest &request);

      /**
       * @summary Delete sample
       *
       * @param request DeleteSampleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSampleResponse
       */
      Models::DeleteSampleResponse deleteSampleWithOptions(const Models::DeleteSampleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete sample
       *
       * @param request DeleteSampleRequest
       * @return DeleteSampleResponse
       */
      Models::DeleteSampleResponse deleteSample(const Models::DeleteSampleRequest &request);

      /**
       * @summary Deletes samples in batches.
       *
       * @param request DeleteSampleBatchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSampleBatchResponse
       */
      Models::DeleteSampleBatchResponse deleteSampleBatchWithOptions(const Models::DeleteSampleBatchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes samples in batches.
       *
       * @param request DeleteSampleBatchRequest
       * @return DeleteSampleBatchResponse
       */
      Models::DeleteSampleBatchResponse deleteSampleBatch(const Models::DeleteSampleBatchRequest &request);

      /**
       * @summary Sample Deletion
       *
       * @param request DeleteSampleBatchMetaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSampleBatchMetaResponse
       */
      Models::DeleteSampleBatchMetaResponse deleteSampleBatchMetaWithOptions(const Models::DeleteSampleBatchMetaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sample Deletion
       *
       * @param request DeleteSampleBatchMetaRequest
       * @return DeleteSampleBatchMetaResponse
       */
      Models::DeleteSampleBatchMetaResponse deleteSampleBatchMeta(const Models::DeleteSampleBatchMetaRequest &request);

      /**
       * @summary Deletes sample data.
       *
       * @param request DeleteSampleDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSampleDataResponse
       */
      Models::DeleteSampleDataResponse deleteSampleDataWithOptions(const Models::DeleteSampleDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes sample data.
       *
       * @param request DeleteSampleDataRequest
       * @return DeleteSampleDataResponse
       */
      Models::DeleteSampleDataResponse deleteSampleData(const Models::DeleteSampleDataRequest &request);

      /**
       * @summary Delete Custom System Variable
       *
       * @param request DeleteSelfBindVariableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSelfBindVariableResponse
       */
      Models::DeleteSelfBindVariableResponse deleteSelfBindVariableWithOptions(const Models::DeleteSelfBindVariableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete Custom System Variable
       *
       * @param request DeleteSelfBindVariableRequest
       * @return DeleteSelfBindVariableResponse
       */
      Models::DeleteSelfBindVariableResponse deleteSelfBindVariable(const Models::DeleteSelfBindVariableRequest &request);

      /**
       * @summary Retrieves left-hand variables for advanced queries.
       *
       * @param request DescribeAdvanceSearchLeftVariableListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAdvanceSearchLeftVariableListResponse
       */
      Models::DescribeAdvanceSearchLeftVariableListResponse describeAdvanceSearchLeftVariableListWithOptions(const Models::DescribeAdvanceSearchLeftVariableListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves left-hand variables for advanced queries.
       *
       * @param request DescribeAdvanceSearchLeftVariableListRequest
       * @return DescribeAdvanceSearchLeftVariableListResponse
       */
      Models::DescribeAdvanceSearchLeftVariableListResponse describeAdvanceSearchLeftVariableList(const Models::DescribeAdvanceSearchLeftVariableListRequest &request);

      /**
       * @summary Performs an advanced query for event analysis.
       *
       * @param request DescribeAdvanceSearchPageListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAdvanceSearchPageListResponse
       */
      Models::DescribeAdvanceSearchPageListResponse describeAdvanceSearchPageListWithOptions(const Models::DescribeAdvanceSearchPageListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs an advanced query for event analysis.
       *
       * @param request DescribeAdvanceSearchPageListRequest
       * @return DescribeAdvanceSearchPageListResponse
       */
      Models::DescribeAdvanceSearchPageListResponse describeAdvanceSearchPageList(const Models::DescribeAdvanceSearchPageListRequest &request);

      /**
       * @summary Lists data sources.
       *
       * @param request DescribeAllDataSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAllDataSourceResponse
       */
      Models::DescribeAllDataSourceResponse describeAllDataSourceWithOptions(const Models::DescribeAllDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists data sources.
       *
       * @param request DescribeAllDataSourceRequest
       * @return DescribeAllDataSourceResponse
       */
      Models::DescribeAllDataSourceResponse describeAllDataSource(const Models::DescribeAllDataSourceRequest &request);

      /**
       * @summary Queries the event list.
       *
       * @param request DescribeAllEventNameAndCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAllEventNameAndCodeResponse
       */
      Models::DescribeAllEventNameAndCodeResponse describeAllEventNameAndCodeWithOptions(const Models::DescribeAllEventNameAndCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the event list.
       *
       * @param request DescribeAllEventNameAndCodeRequest
       * @return DescribeAllEventNameAndCodeResponse
       */
      Models::DescribeAllEventNameAndCodeResponse describeAllEventNameAndCode(const Models::DescribeAllEventNameAndCodeRequest &request);

      /**
       * @summary Displays all root variables during custom expression testing.
       *
       * @param request DescribeAllRootVariableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAllRootVariableResponse
       */
      Models::DescribeAllRootVariableResponse describeAllRootVariableWithOptions(const Models::DescribeAllRootVariableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Displays all root variables during custom expression testing.
       *
       * @param request DescribeAllRootVariableRequest
       * @return DescribeAllRootVariableResponse
       */
      Models::DescribeAllRootVariableResponse describeAllRootVariable(const Models::DescribeAllRootVariableRequest &request);

      /**
       * @summary Displays all fields.
       *
       * @param request DescribeAnalysisColumnFieldListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAnalysisColumnFieldListResponse
       */
      Models::DescribeAnalysisColumnFieldListResponse describeAnalysisColumnFieldListWithOptions(const Models::DescribeAnalysisColumnFieldListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Displays all fields.
       *
       * @param request DescribeAnalysisColumnFieldListRequest
       * @return DescribeAnalysisColumnFieldListResponse
       */
      Models::DescribeAnalysisColumnFieldListResponse describeAnalysisColumnFieldList(const Models::DescribeAnalysisColumnFieldListRequest &request);

      /**
       * @summary Queries custom columns.
       *
       * @param request DescribeAnalysisColumnListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAnalysisColumnListResponse
       */
      Models::DescribeAnalysisColumnListResponse describeAnalysisColumnListWithOptions(const Models::DescribeAnalysisColumnListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries custom columns.
       *
       * @param request DescribeAnalysisColumnListRequest
       * @return DescribeAnalysisColumnListResponse
       */
      Models::DescribeAnalysisColumnListResponse describeAnalysisColumnList(const Models::DescribeAnalysisColumnListRequest &request);

      /**
       * @summary Queries the condition favorite list.
       *
       * @param request DescribeAnalysisConditionFavoriteListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAnalysisConditionFavoriteListResponse
       */
      Models::DescribeAnalysisConditionFavoriteListResponse describeAnalysisConditionFavoriteListWithOptions(const Models::DescribeAnalysisConditionFavoriteListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the condition favorite list.
       *
       * @param request DescribeAnalysisConditionFavoriteListRequest
       * @return DescribeAnalysisConditionFavoriteListResponse
       */
      Models::DescribeAnalysisConditionFavoriteListResponse describeAnalysisConditionFavoriteList(const Models::DescribeAnalysisConditionFavoriteListRequest &request);

      /**
       * @summary Download query results.
       *
       * @param request DescribeAnalysisExportTaskDownloadUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAnalysisExportTaskDownloadUrlResponse
       */
      Models::DescribeAnalysisExportTaskDownloadUrlResponse describeAnalysisExportTaskDownloadUrlWithOptions(const Models::DescribeAnalysisExportTaskDownloadUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Download query results.
       *
       * @param request DescribeAnalysisExportTaskDownloadUrlRequest
       * @return DescribeAnalysisExportTaskDownloadUrlResponse
       */
      Models::DescribeAnalysisExportTaskDownloadUrlResponse describeAnalysisExportTaskDownloadUrl(const Models::DescribeAnalysisExportTaskDownloadUrlRequest &request);

      /**
       * @summary Retrieves the details of an API.
       *
       * @param request DescribeApiRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApiResponse
       */
      Models::DescribeApiResponse describeApiWithOptions(const Models::DescribeApiRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of an API.
       *
       * @param request DescribeApiRequest
       * @return DescribeApiResponse
       */
      Models::DescribeApiResponse describeApi(const Models::DescribeApiRequest &request);

      /**
       * @summary Retrieves API groups, including purchased and custom groups.
       *
       * @param request DescribeApiGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApiGroupsResponse
       */
      Models::DescribeApiGroupsResponse describeApiGroupsWithOptions(const Models::DescribeApiGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves API groups, including purchased and custom groups.
       *
       * @param request DescribeApiGroupsRequest
       * @return DescribeApiGroupsResponse
       */
      Models::DescribeApiGroupsResponse describeApiGroups(const Models::DescribeApiGroupsRequest &request);

      /**
       * @summary Queries the limit information for creating API tasks.
       *
       * @param request DescribeApiLimitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApiLimitResponse
       */
      Models::DescribeApiLimitResponse describeApiLimitWithOptions(const Models::DescribeApiLimitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the limit information for creating API tasks.
       *
       * @param request DescribeApiLimitRequest
       * @return DescribeApiLimitResponse
       */
      Models::DescribeApiLimitResponse describeApiLimit(const Models::DescribeApiLimitRequest &request);

      /**
       * @summary Retrieves API service names.
       *
       * @param request DescribeApiNameListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApiNameListResponse
       */
      Models::DescribeApiNameListResponse describeApiNameListWithOptions(const Models::DescribeApiNameListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves API service names.
       *
       * @param request DescribeApiNameListRequest
       * @return DescribeApiNameListResponse
       */
      Models::DescribeApiNameListResponse describeApiNameList(const Models::DescribeApiNameListRequest &request);

      /**
       * @summary Query variable details.
       *
       * @param request DescribeApiVariableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApiVariableResponse
       */
      Models::DescribeApiVariableResponse describeApiVariableWithOptions(const Models::DescribeApiVariableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query variable details.
       *
       * @param request DescribeApiVariableRequest
       * @return DescribeApiVariableResponse
       */
      Models::DescribeApiVariableResponse describeApiVariable(const Models::DescribeApiVariableRequest &request);

      /**
       * @summary Retrieves the API list, including purchased and custom APIs.
       *
       * @param request DescribeApisRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApisResponse
       */
      Models::DescribeApisResponse describeApisWithOptions(const Models::DescribeApisRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the API list, including purchased and custom APIs.
       *
       * @param request DescribeApisRequest
       * @return DescribeApisResponse
       */
      Models::DescribeApisResponse describeApis(const Models::DescribeApisRequest &request);

      /**
       * @summary Queries the list of appKeys.
       *
       * @param request DescribeAppKeyPageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAppKeyPageResponse
       */
      Models::DescribeAppKeyPageResponse describeAppKeyPageWithOptions(const Models::DescribeAppKeyPageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of appKeys.
       *
       * @param request DescribeAppKeyPageRequest
       * @return DescribeAppKeyPageResponse
       */
      Models::DescribeAppKeyPageResponse describeAppKeyPage(const Models::DescribeAppKeyPageRequest &request);

      /**
       * @summary Configures the approval switch.
       *
       * @param request DescribeAuditConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAuditConfigResponse
       */
      Models::DescribeAuditConfigResponse describeAuditConfigWithOptions(const Models::DescribeAuditConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures the approval switch.
       *
       * @param request DescribeAuditConfigRequest
       * @return DescribeAuditConfigResponse
       */
      Models::DescribeAuditConfigResponse describeAuditConfig(const Models::DescribeAuditConfigRequest &request);

      /**
       * @summary Retrieves approval details.
       *
       * @param request DescribeAuditDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAuditDetailsResponse
       */
      Models::DescribeAuditDetailsResponse describeAuditDetailsWithOptions(const Models::DescribeAuditDetailsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves approval details.
       *
       * @param request DescribeAuditDetailsRequest
       * @return DescribeAuditDetailsResponse
       */
      Models::DescribeAuditDetailsResponse describeAuditDetails(const Models::DescribeAuditDetailsRequest &request);

      /**
       * @summary Displays and queries the audit list.
       *
       * @param request DescribeAuditPageListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAuditPageListResponse
       */
      Models::DescribeAuditPageListResponse describeAuditPageListWithOptions(const Models::DescribeAuditPageListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Displays and queries the audit list.
       *
       * @param request DescribeAuditPageListRequest
       * @return DescribeAuditPageListResponse
       */
      Models::DescribeAuditPageListResponse describeAuditPageList(const Models::DescribeAuditPageListRequest &request);

      /**
       * @summary Queries the list of event names for the current user.
       *
       * @param request DescribeAuthEventNameListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAuthEventNameListResponse
       */
      Models::DescribeAuthEventNameListResponse describeAuthEventNameListWithOptions(const Models::DescribeAuthEventNameListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of event names for the current user.
       *
       * @param request DescribeAuthEventNameListRequest
       * @return DescribeAuthEventNameListResponse
       */
      Models::DescribeAuthEventNameListResponse describeAuthEventNameList(const Models::DescribeAuthEventNameListRequest &request);

      /**
       * @summary Queries a list of policies.
       *
       * @param request DescribeAuthRulePageListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAuthRulePageListResponse
       */
      Models::DescribeAuthRulePageListResponse describeAuthRulePageListWithOptions(const Models::DescribeAuthRulePageListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of policies.
       *
       * @param request DescribeAuthRulePageListRequest
       * @return DescribeAuthRulePageListResponse
       */
      Models::DescribeAuthRulePageListResponse describeAuthRulePageList(const Models::DescribeAuthRulePageListRequest &request);

      /**
       * @summary Queries the list of scenarios.
       *
       * @param request DescribeAuthSceneListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAuthSceneListResponse
       */
      Models::DescribeAuthSceneListResponse describeAuthSceneListWithOptions(const Models::DescribeAuthSceneListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of scenarios.
       *
       * @param request DescribeAuthSceneListRequest
       * @return DescribeAuthSceneListResponse
       */
      Models::DescribeAuthSceneListResponse describeAuthSceneList(const Models::DescribeAuthSceneListRequest &request);

      /**
       * @summary Queries the list of scenarios.
       *
       * @param request DescribeAuthScenePageListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAuthScenePageListResponse
       */
      Models::DescribeAuthScenePageListResponse describeAuthScenePageListWithOptions(const Models::DescribeAuthScenePageListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of scenarios.
       *
       * @param request DescribeAuthScenePageListRequest
       * @return DescribeAuthScenePageListResponse
       */
      Models::DescribeAuthScenePageListResponse describeAuthScenePageList(const Models::DescribeAuthScenePageListRequest &request);

      /**
       * @summary Checks whether authorization is granted.
       *
       * @param request DescribeAuthStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAuthStatusResponse
       */
      Models::DescribeAuthStatusResponse describeAuthStatusWithOptions(const Models::DescribeAuthStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether authorization is granted.
       *
       * @param request DescribeAuthStatusRequest
       * @return DescribeAuthStatusResponse
       */
      Models::DescribeAuthStatusResponse describeAuthStatus(const Models::DescribeAuthStatusRequest &request);

      /**
       * @summary Average execution duration.
       *
       * @param request DescribeAvgExecuteCostReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAvgExecuteCostReportResponse
       */
      Models::DescribeAvgExecuteCostReportResponse describeAvgExecuteCostReportWithOptions(const Models::DescribeAvgExecuteCostReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Average execution duration.
       *
       * @param request DescribeAvgExecuteCostReportRequest
       * @return DescribeAvgExecuteCostReportResponse
       */
      Models::DescribeAvgExecuteCostReportResponse describeAvgExecuteCostReport(const Models::DescribeAvgExecuteCostReportRequest &request);

      /**
       * @summary Performs a basic query.
       *
       * @param request DescribeBasicSearchPageListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBasicSearchPageListResponse
       */
      Models::DescribeBasicSearchPageListResponse describeBasicSearchPageListWithOptions(const Models::DescribeBasicSearchPageListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a basic query.
       *
       * @param request DescribeBasicSearchPageListRequest
       * @return DescribeBasicSearchPageListResponse
       */
      Models::DescribeBasicSearchPageListResponse describeBasicSearchPageList(const Models::DescribeBasicSearchPageListRequest &request);

      /**
       * @summary Queries basic statistics.
       *
       * @param request DescribeBasicStartRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBasicStartResponse
       */
      Models::DescribeBasicStartResponse describeBasicStartWithOptions(const Models::DescribeBasicStartRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries basic statistics.
       *
       * @param request DescribeBasicStartRequest
       * @return DescribeBasicStartResponse
       */
      Models::DescribeBasicStartResponse describeBasicStart(const Models::DescribeBasicStartRequest &request);

      /**
       * @summary Queries a bypass event.
       *
       * @param request DescribeByPassShuntEventRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeByPassShuntEventResponse
       */
      Models::DescribeByPassShuntEventResponse describeByPassShuntEventWithOptions(const Models::DescribeByPassShuntEventRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a bypass event.
       *
       * @param request DescribeByPassShuntEventRequest
       * @return DescribeByPassShuntEventResponse
       */
      Models::DescribeByPassShuntEventResponse describeByPassShuntEvent(const Models::DescribeByPassShuntEventRequest &request);

      /**
       * @summary Queries the type configurations of custom cumulative variables.
       *
       * @param request DescribeCustVariableConfigListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCustVariableConfigListResponse
       */
      Models::DescribeCustVariableConfigListResponse describeCustVariableConfigListWithOptions(const Models::DescribeCustVariableConfigListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the type configurations of custom cumulative variables.
       *
       * @param request DescribeCustVariableConfigListRequest
       * @return DescribeCustVariableConfigListResponse
       */
      Models::DescribeCustVariableConfigListResponse describeCustVariableConfigList(const Models::DescribeCustVariableConfigListRequest &request);

      /**
       * @summary Queries the details of a cumulative variable.
       *
       * @param request DescribeCustVariableDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCustVariableDetailResponse
       */
      Models::DescribeCustVariableDetailResponse describeCustVariableDetailWithOptions(const Models::DescribeCustVariableDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a cumulative variable.
       *
       * @param request DescribeCustVariableDetailRequest
       * @return DescribeCustVariableDetailResponse
       */
      Models::DescribeCustVariableDetailResponse describeCustVariableDetail(const Models::DescribeCustVariableDetailRequest &request);

      /**
       * @summary Queries the list of custom cumulative variables.
       *
       * @description Queries the list of cumulative variables.
       *
       * @param request DescribeCustVariablePageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCustVariablePageResponse
       */
      Models::DescribeCustVariablePageResponse describeCustVariablePageWithOptions(const Models::DescribeCustVariablePageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of custom cumulative variables.
       *
       * @description Queries the list of cumulative variables.
       *
       * @param request DescribeCustVariablePageRequest
       * @return DescribeCustVariablePageResponse
       */
      Models::DescribeCustVariablePageResponse describeCustVariablePage(const Models::DescribeCustVariablePageRequest &request);

      /**
       * @summary Retrieves the download URL for data source data.
       *
       * @param request DescribeDataSourceDataDownloadUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDataSourceDataDownloadUrlResponse
       */
      Models::DescribeDataSourceDataDownloadUrlResponse describeDataSourceDataDownloadUrlWithOptions(const Models::DescribeDataSourceDataDownloadUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the download URL for data source data.
       *
       * @param request DescribeDataSourceDataDownloadUrlRequest
       * @return DescribeDataSourceDataDownloadUrlResponse
       */
      Models::DescribeDataSourceDataDownloadUrlResponse describeDataSourceDataDownloadUrl(const Models::DescribeDataSourceDataDownloadUrlRequest &request);

      /**
       * @summary Retrieves all fields of a data source.
       *
       * @param request DescribeDataSourceFieldsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDataSourceFieldsResponse
       */
      Models::DescribeDataSourceFieldsResponse describeDataSourceFieldsWithOptions(const Models::DescribeDataSourceFieldsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves all fields of a data source.
       *
       * @param request DescribeDataSourceFieldsRequest
       * @return DescribeDataSourceFieldsResponse
       */
      Models::DescribeDataSourceFieldsResponse describeDataSourceFields(const Models::DescribeDataSourceFieldsRequest &request);

      /**
       * @summary Queries a list of data sources.
       *
       * @param request DescribeDataSourcePageListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDataSourcePageListResponse
       */
      Models::DescribeDataSourcePageListResponse describeDataSourcePageListWithOptions(const Models::DescribeDataSourcePageListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of data sources.
       *
       * @param request DescribeDataSourcePageListRequest
       * @return DescribeDataSourcePageListResponse
       */
      Models::DescribeDataSourcePageListResponse describeDataSourcePageList(const Models::DescribeDataSourcePageListRequest &request);

      /**
       * @summary Detects fluctuations in decision results.
       *
       * @param request DescribeDecisionResultFluctuationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDecisionResultFluctuationResponse
       */
      Models::DescribeDecisionResultFluctuationResponse describeDecisionResultFluctuationWithOptions(const Models::DescribeDecisionResultFluctuationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detects fluctuations in decision results.
       *
       * @param request DescribeDecisionResultFluctuationRequest
       * @return DescribeDecisionResultFluctuationResponse
       */
      Models::DescribeDecisionResultFluctuationResponse describeDecisionResultFluctuation(const Models::DescribeDecisionResultFluctuationRequest &request);

      /**
       * @summary Queries the fluctuation trend of decision results.
       *
       * @param request DescribeDecisionResultTrendRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDecisionResultTrendResponse
       */
      Models::DescribeDecisionResultTrendResponse describeDecisionResultTrendWithOptions(const Models::DescribeDecisionResultTrendRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the fluctuation trend of decision results.
       *
       * @param request DescribeDecisionResultTrendRequest
       * @return DescribeDecisionResultTrendResponse
       */
      Models::DescribeDecisionResultTrendResponse describeDecisionResultTrend(const Models::DescribeDecisionResultTrendRequest &request);

      /**
       * @summary Retrieves detailed statistics.
       *
       * @param request DescribeDetailStartRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDetailStartResponse
       */
      Models::DescribeDetailStartResponse describeDetailStartWithOptions(const Models::DescribeDetailStartRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves detailed statistics.
       *
       * @param request DescribeDetailStartRequest
       * @return DescribeDetailStartResponse
       */
      Models::DescribeDetailStartResponse describeDetailStart(const Models::DescribeDetailStartRequest &request);

      /**
       * @summary Downloads a file.
       *
       * @param request DescribeDownloadUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDownloadUrlResponse
       */
      Models::DescribeDownloadUrlResponse describeDownloadUrlWithOptions(const Models::DescribeDownloadUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Downloads a file.
       *
       * @param request DescribeDownloadUrlRequest
       * @return DescribeDownloadUrlResponse
       */
      Models::DescribeDownloadUrlResponse describeDownloadUrl(const Models::DescribeDownloadUrlRequest &request);

      /**
       * @summary Queries event details.
       *
       * @param request DescribeEventBaseInfoByEventCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEventBaseInfoByEventCodeResponse
       */
      Models::DescribeEventBaseInfoByEventCodeResponse describeEventBaseInfoByEventCodeWithOptions(const Models::DescribeEventBaseInfoByEventCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries event details.
       *
       * @param request DescribeEventBaseInfoByEventCodeRequest
       * @return DescribeEventBaseInfoByEventCodeResponse
       */
      Models::DescribeEventBaseInfoByEventCodeResponse describeEventBaseInfoByEventCode(const Models::DescribeEventBaseInfoByEventCodeRequest &request);

      /**
       * @summary Queries the total number of events.
       *
       * @param request DescribeEventCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEventCountResponse
       */
      Models::DescribeEventCountResponse describeEventCountWithOptions(const Models::DescribeEventCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the total number of events.
       *
       * @param request DescribeEventCountRequest
       * @return DescribeEventCountResponse
       */
      Models::DescribeEventCountResponse describeEventCount(const Models::DescribeEventCountRequest &request);

      /**
       * @summary Queries event details by request ID.
       *
       * @param request DescribeEventDetailByRequestIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEventDetailByRequestIdResponse
       */
      Models::DescribeEventDetailByRequestIdResponse describeEventDetailByRequestIdWithOptions(const Models::DescribeEventDetailByRequestIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries event details by request ID.
       *
       * @param request DescribeEventDetailByRequestIdRequest
       * @return DescribeEventDetailByRequestIdResponse
       */
      Models::DescribeEventDetailByRequestIdResponse describeEventDetailByRequestId(const Models::DescribeEventDetailByRequestIdRequest &request);

      /**
       * @summary Queries the details of an event history.
       *
       * @param request DescribeEventLogDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEventLogDetailResponse
       */
      Models::DescribeEventLogDetailResponse describeEventLogDetailWithOptions(const Models::DescribeEventLogDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an event history.
       *
       * @param request DescribeEventLogDetailRequest
       * @return DescribeEventLogDetailResponse
       */
      Models::DescribeEventLogDetailResponse describeEventLogDetail(const Models::DescribeEventLogDetailRequest &request);

      /**
       * @summary Queries the event history list.
       *
       * @param request DescribeEventLogPageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEventLogPageResponse
       */
      Models::DescribeEventLogPageResponse describeEventLogPageWithOptions(const Models::DescribeEventLogPageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the event history list.
       *
       * @param request DescribeEventLogPageRequest
       * @return DescribeEventLogPageResponse
       */
      Models::DescribeEventLogPageResponse describeEventLogPage(const Models::DescribeEventLogPageRequest &request);

      /**
       * @summary Queries events by paging.
       *
       * @param request DescribeEventPageListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEventPageListResponse
       */
      Models::DescribeEventPageListResponse describeEventPageListWithOptions(const Models::DescribeEventPageListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries events by paging.
       *
       * @param request DescribeEventPageListRequest
       * @return DescribeEventPageListResponse
       */
      Models::DescribeEventPageListResponse describeEventPageList(const Models::DescribeEventPageListRequest &request);

      /**
       * @summary Risk Dashboard
       *
       * @param request DescribeEventResultBarChartRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEventResultBarChartResponse
       */
      Models::DescribeEventResultBarChartResponse describeEventResultBarChartWithOptions(const Models::DescribeEventResultBarChartRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Risk Dashboard
       *
       * @param request DescribeEventResultBarChartRequest
       * @return DescribeEventResultBarChartResponse
       */
      Models::DescribeEventResultBarChartResponse describeEventResultBarChart(const Models::DescribeEventResultBarChartRequest &request);

      /**
       * @summary Queries the event overview list.
       *
       * @param request DescribeEventResultListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEventResultListResponse
       */
      Models::DescribeEventResultListResponse describeEventResultListWithOptions(const Models::DescribeEventResultListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the event overview list.
       *
       * @param request DescribeEventResultListRequest
       * @return DescribeEventResultListResponse
       */
      Models::DescribeEventResultListResponse describeEventResultList(const Models::DescribeEventResultListRequest &request);

      /**
       * @summary Queries the policy download list.
       *
       * @param request DescribeEventTaskHistoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEventTaskHistoryResponse
       */
      Models::DescribeEventTaskHistoryResponse describeEventTaskHistoryWithOptions(const Models::DescribeEventTaskHistoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the policy download list.
       *
       * @param request DescribeEventTaskHistoryRequest
       * @return DescribeEventTaskHistoryResponse
       */
      Models::DescribeEventTaskHistoryResponse describeEventTaskHistory(const Models::DescribeEventTaskHistoryRequest &request);

      /**
       * @summary Call event count
       *
       * @param request DescribeEventTotalCountReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEventTotalCountReportResponse
       */
      Models::DescribeEventTotalCountReportResponse describeEventTotalCountReportWithOptions(const Models::DescribeEventTotalCountReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call event count
       *
       * @param request DescribeEventTotalCountReportRequest
       * @return DescribeEventTotalCountReportResponse
       */
      Models::DescribeEventTotalCountReportResponse describeEventTotalCountReport(const Models::DescribeEventTotalCountReportRequest &request);

      /**
       * @summary Imports policies in batches.
       *
       * @param request DescribeEventUploadPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEventUploadPolicyResponse
       */
      Models::DescribeEventUploadPolicyResponse describeEventUploadPolicyWithOptions(const Models::DescribeEventUploadPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Imports policies in batches.
       *
       * @param request DescribeEventUploadPolicyRequest
       * @return DescribeEventUploadPolicyResponse
       */
      Models::DescribeEventUploadPolicyResponse describeEventUploadPolicy(const Models::DescribeEventUploadPolicyRequest &request);

      /**
       * @summary Queries event variables.
       *
       * @description Queries the list of cumulative variables.
       *
       * @param request DescribeEventVariableListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEventVariableListResponse
       */
      Models::DescribeEventVariableListResponse describeEventVariableListWithOptions(const Models::DescribeEventVariableListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries event variables.
       *
       * @description Queries the list of cumulative variables.
       *
       * @param request DescribeEventVariableListRequest
       * @return DescribeEventVariableListResponse
       */
      Models::DescribeEventVariableListResponse describeEventVariableList(const Models::DescribeEventVariableListRequest &request);

      /**
       * @summary Queries an event pattern template.
       *
       * @param request DescribeEventVariableTemplateBindRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEventVariableTemplateBindResponse
       */
      Models::DescribeEventVariableTemplateBindResponse describeEventVariableTemplateBindWithOptions(const Models::DescribeEventVariableTemplateBindRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries an event pattern template.
       *
       * @param request DescribeEventVariableTemplateBindRequest
       * @return DescribeEventVariableTemplateBindResponse
       */
      Models::DescribeEventVariableTemplateBindResponse describeEventVariableTemplateBind(const Models::DescribeEventVariableTemplateBindRequest &request);

      /**
       * @summary Queries an event pattern template.
       *
       * @param request DescribeEventVariableTemplateListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEventVariableTemplateListResponse
       */
      Models::DescribeEventVariableTemplateListResponse describeEventVariableTemplateListWithOptions(const Models::DescribeEventVariableTemplateListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries an event pattern template.
       *
       * @param request DescribeEventVariableTemplateListRequest
       * @return DescribeEventVariableTemplateListResponse
       */
      Models::DescribeEventVariableTemplateListResponse describeEventVariableTemplateList(const Models::DescribeEventVariableTemplateListRequest &request);

      /**
       * @summary Queries event variables.
       *
       * @param request DescribeEventsVariableListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEventsVariableListResponse
       */
      Models::DescribeEventsVariableListResponse describeEventsVariableListWithOptions(const Models::DescribeEventsVariableListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries event variables.
       *
       * @param request DescribeEventsVariableListRequest
       * @return DescribeEventsVariableListResponse
       */
      Models::DescribeEventsVariableListResponse describeEventsVariableList(const Models::DescribeEventsVariableListRequest &request);

      /**
       * @summary Self-service invocation list.
       *
       * @param request DescribeExcuteNumRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeExcuteNumResponse
       */
      Models::DescribeExcuteNumResponse describeExcuteNumWithOptions(const Models::DescribeExcuteNumRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Self-service invocation list.
       *
       * @param request DescribeExcuteNumRequest
       * @return DescribeExcuteNumResponse
       */
      Models::DescribeExcuteNumResponse describeExcuteNum(const Models::DescribeExcuteNumRequest &request);

      /**
       * @summary Checks whether a field name is duplicate based on the user unit.
       *
       * @param request DescribeExistNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeExistNameResponse
       */
      Models::DescribeExistNameResponse describeExistNameWithOptions(const Models::DescribeExistNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether a field name is duplicate based on the user unit.
       *
       * @param request DescribeExistNameRequest
       * @return DescribeExistNameResponse
       */
      Models::DescribeExistNameResponse describeExistName(const Models::DescribeExistNameRequest &request);

      /**
       * @summary Checks whether a scenario exists.
       *
       * @param request DescribeExistSceneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeExistSceneResponse
       */
      Models::DescribeExistSceneResponse describeExistSceneWithOptions(const Models::DescribeExistSceneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether a scenario exists.
       *
       * @param request DescribeExistSceneRequest
       * @return DescribeExistSceneResponse
       */
      Models::DescribeExistSceneResponse describeExistScene(const Models::DescribeExistSceneRequest &request);

      /**
       * @summary Queries the details of a custom variable.
       *
       * @param request DescribeExpressionVariableDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeExpressionVariableDetailResponse
       */
      Models::DescribeExpressionVariableDetailResponse describeExpressionVariableDetailWithOptions(const Models::DescribeExpressionVariableDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a custom variable.
       *
       * @param request DescribeExpressionVariableDetailRequest
       * @return DescribeExpressionVariableDetailResponse
       */
      Models::DescribeExpressionVariableDetailResponse describeExpressionVariableDetail(const Models::DescribeExpressionVariableDetailRequest &request);

      /**
       * @summary Queries the function list.
       *
       * @param request DescribeExpressionVariableFunctionListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeExpressionVariableFunctionListResponse
       */
      Models::DescribeExpressionVariableFunctionListResponse describeExpressionVariableFunctionListWithOptions(const Models::DescribeExpressionVariableFunctionListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the function list.
       *
       * @param request DescribeExpressionVariableFunctionListRequest
       * @return DescribeExpressionVariableFunctionListResponse
       */
      Models::DescribeExpressionVariableFunctionListResponse describeExpressionVariableFunctionList(const Models::DescribeExpressionVariableFunctionListRequest &request);

      /**
       * @summary Performs a paging query of custom variables.
       *
       * @param request DescribeExpressionVariablePageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeExpressionVariablePageResponse
       */
      Models::DescribeExpressionVariablePageResponse describeExpressionVariablePageWithOptions(const Models::DescribeExpressionVariablePageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a paging query of custom variables.
       *
       * @param request DescribeExpressionVariablePageRequest
       * @return DescribeExpressionVariablePageResponse
       */
      Models::DescribeExpressionVariablePageResponse describeExpressionVariablePage(const Models::DescribeExpressionVariablePageRequest &request);

      /**
       * @summary Custom Variable Version Details.
       *
       * @param request DescribeExpressionVariableVersionDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeExpressionVariableVersionDetailResponse
       */
      Models::DescribeExpressionVariableVersionDetailResponse describeExpressionVariableVersionDetailWithOptions(const Models::DescribeExpressionVariableVersionDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Custom Variable Version Details.
       *
       * @param request DescribeExpressionVariableVersionDetailRequest
       * @return DescribeExpressionVariableVersionDetailResponse
       */
      Models::DescribeExpressionVariableVersionDetailResponse describeExpressionVariableVersionDetail(const Models::DescribeExpressionVariableVersionDetailRequest &request);

      /**
       * @summary Retrieves field details.
       *
       * @param request DescribeFieldByIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFieldByIdResponse
       */
      Models::DescribeFieldByIdResponse describeFieldByIdWithOptions(const Models::DescribeFieldByIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves field details.
       *
       * @param request DescribeFieldByIdRequest
       * @return DescribeFieldByIdResponse
       */
      Models::DescribeFieldByIdResponse describeFieldById(const Models::DescribeFieldByIdRequest &request);

      /**
       * @summary Queries the list of fields.
       *
       * @param request DescribeFieldListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFieldListResponse
       */
      Models::DescribeFieldListResponse describeFieldListWithOptions(const Models::DescribeFieldListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of fields.
       *
       * @param request DescribeFieldListRequest
       * @return DescribeFieldListResponse
       */
      Models::DescribeFieldListResponse describeFieldList(const Models::DescribeFieldListRequest &request);

      /**
       * @summary Queries a paginated list of fields.
       *
       * @param request DescribeFieldPageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFieldPageResponse
       */
      Models::DescribeFieldPageResponse describeFieldPageWithOptions(const Models::DescribeFieldPageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a paginated list of fields.
       *
       * @param request DescribeFieldPageRequest
       * @return DescribeFieldPageResponse
       */
      Models::DescribeFieldPageResponse describeFieldPage(const Models::DescribeFieldPageRequest &request);

      /**
       * @summary Queries the list of community accounts.
       *
       * @param request DescribeGroupAccountPageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGroupAccountPageResponse
       */
      Models::DescribeGroupAccountPageResponse describeGroupAccountPageWithOptions(const Models::DescribeGroupAccountPageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of community accounts.
       *
       * @param request DescribeGroupAccountPageRequest
       * @return DescribeGroupAccountPageResponse
       */
      Models::DescribeGroupAccountPageResponse describeGroupAccountPage(const Models::DescribeGroupAccountPageRequest &request);

      /**
       * @summary Queries the filter conditions for the community list.
       *
       * @param request DescribeGroupConditionListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGroupConditionListResponse
       */
      Models::DescribeGroupConditionListResponse describeGroupConditionListWithOptions(const Models::DescribeGroupConditionListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the filter conditions for the community list.
       *
       * @param request DescribeGroupConditionListRequest
       * @return DescribeGroupConditionListResponse
       */
      Models::DescribeGroupConditionListResponse describeGroupConditionList(const Models::DescribeGroupConditionListRequest &request);

      /**
       * @summary Queries the list of communities.
       *
       * @param request DescribeGroupPageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGroupPageResponse
       */
      Models::DescribeGroupPageResponse describeGroupPageWithOptions(const Models::DescribeGroupPageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of communities.
       *
       * @param request DescribeGroupPageRequest
       * @return DescribeGroupPageResponse
       */
      Models::DescribeGroupPageResponse describeGroupPage(const Models::DescribeGroupPageRequest &request);

      /**
       * @summary Queries the risk communities discovered on the current day.
       *
       * @param request DescribeGroupStatisticsByTodayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGroupStatisticsByTodayResponse
       */
      Models::DescribeGroupStatisticsByTodayResponse describeGroupStatisticsByTodayWithOptions(const Models::DescribeGroupStatisticsByTodayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the risk communities discovered on the current day.
       *
       * @param request DescribeGroupStatisticsByTodayRequest
       * @return DescribeGroupStatisticsByTodayResponse
       */
      Models::DescribeGroupStatisticsByTodayResponse describeGroupStatisticsByToday(const Models::DescribeGroupStatisticsByTodayRequest &request);

      /**
       * @summary Queries recent trends of risky communities.
       *
       * @param request DescribeGroupTrendRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGroupTrendResponse
       */
      Models::DescribeGroupTrendResponse describeGroupTrendWithOptions(const Models::DescribeGroupTrendRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries recent trends of risky communities.
       *
       * @param request DescribeGroupTrendRequest
       * @return DescribeGroupTrendResponse
       */
      Models::DescribeGroupTrendResponse describeGroupTrend(const Models::DescribeGroupTrendRequest &request);

      /**
       * @summary Queries whether a policy name exists under a specified event name.
       *
       * @param request DescribeHasRuleNameByEventCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHasRuleNameByEventCodeResponse
       */
      Models::DescribeHasRuleNameByEventCodeResponse describeHasRuleNameByEventCodeWithOptions(const Models::DescribeHasRuleNameByEventCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether a policy name exists under a specified event name.
       *
       * @param request DescribeHasRuleNameByEventCodeRequest
       * @return DescribeHasRuleNameByEventCodeResponse
       */
      Models::DescribeHasRuleNameByEventCodeResponse describeHasRuleNameByEventCode(const Models::DescribeHasRuleNameByEventCodeRequest &request);

      /**
       * @summary Retrieves the risk map overview chart (pie chart).
       *
       * @param request DescribeHighRiskPieChartRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHighRiskPieChartResponse
       */
      Models::DescribeHighRiskPieChartResponse describeHighRiskPieChartWithOptions(const Models::DescribeHighRiskPieChartRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the risk map overview chart (pie chart).
       *
       * @param request DescribeHighRiskPieChartRequest
       * @return DescribeHighRiskPieChartResponse
       */
      Models::DescribeHighRiskPieChartResponse describeHighRiskPieChart(const Models::DescribeHighRiskPieChartRequest &request);

      /**
       * @summary Detects fluctuations in policy hits.
       *
       * @param request DescribeHitRuleFluctuationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHitRuleFluctuationResponse
       */
      Models::DescribeHitRuleFluctuationResponse describeHitRuleFluctuationWithOptions(const Models::DescribeHitRuleFluctuationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detects fluctuations in policy hits.
       *
       * @param request DescribeHitRuleFluctuationRequest
       * @return DescribeHitRuleFluctuationResponse
       */
      Models::DescribeHitRuleFluctuationResponse describeHitRuleFluctuation(const Models::DescribeHitRuleFluctuationRequest &request);

      /**
       * @summary Queries the top 20 policies by hits for main events, bypass, and automatic request distribution.
       *
       * @param request DescribeHitRuleListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHitRuleListResponse
       */
      Models::DescribeHitRuleListResponse describeHitRuleListWithOptions(const Models::DescribeHitRuleListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the top 20 policies by hits for main events, bypass, and automatic request distribution.
       *
       * @param request DescribeHitRuleListRequest
       * @return DescribeHitRuleListResponse
       */
      Models::DescribeHitRuleListResponse describeHitRuleList(const Models::DescribeHitRuleListRequest &request);

      /**
       * @summary Queries the policy hit trends.
       *
       * @param request DescribeHitRuleTrendRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHitRuleTrendResponse
       */
      Models::DescribeHitRuleTrendResponse describeHitRuleTrendWithOptions(const Models::DescribeHitRuleTrendRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the policy hit trends.
       *
       * @param request DescribeHitRuleTrendRequest
       * @return DescribeHitRuleTrendResponse
       */
      Models::DescribeHitRuleTrendResponse describeHitRuleTrend(const Models::DescribeHitRuleTrendRequest &request);

      /**
       * @summary Initialization Popup Information
       *
       * @description Add prompt information in BOPS, POC new page initialization popup prompts this information
       *
       * @param request DescribeInitDigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInitDigResponse
       */
      Models::DescribeInitDigResponse describeInitDigWithOptions(const Models::DescribeInitDigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initialization Popup Information
       *
       * @description Add prompt information in BOPS, POC new page initialization popup prompts this information
       *
       * @param request DescribeInitDigRequest
       * @return DescribeInitDigResponse
       */
      Models::DescribeInitDigResponse describeInitDig(const Models::DescribeInitDigRequest &request);

      /**
       * @summary Queries the total number of events.
       *
       * @param request DescribeInputFeildCountByEventCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInputFeildCountByEventCodeResponse
       */
      Models::DescribeInputFeildCountByEventCodeResponse describeInputFeildCountByEventCodeWithOptions(const Models::DescribeInputFeildCountByEventCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the total number of events.
       *
       * @param request DescribeInputFeildCountByEventCodeRequest
       * @return DescribeInputFeildCountByEventCodeResponse
       */
      Models::DescribeInputFeildCountByEventCodeResponse describeInputFeildCountByEventCode(const Models::DescribeInputFeildCountByEventCodeRequest &request);

      /**
       * @summary Display of Model List
       *
       * @param request DescribeListModelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeListModelResponse
       */
      Models::DescribeListModelResponse describeListModelWithOptions(const Models::DescribeListModelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Display of Model List
       *
       * @param request DescribeListModelRequest
       * @return DescribeListModelResponse
       */
      Models::DescribeListModelResponse describeListModel(const Models::DescribeListModelRequest &request);

      /**
       * @summary Queries the list of tasks.
       *
       * @param request DescribeListPocRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeListPocResponse
       */
      Models::DescribeListPocResponse describeListPocWithOptions(const Models::DescribeListPocRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of tasks.
       *
       * @param request DescribeListPocRequest
       * @return DescribeListPocResponse
       */
      Models::DescribeListPocResponse describeListPoc(const Models::DescribeListPocRequest &request);

      /**
       * @summary Queries the list of monitoring objects.
       *
       * @param request DescribeLoanExecListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLoanExecListResponse
       */
      Models::DescribeLoanExecListResponse describeLoanExecListWithOptions(const Models::DescribeLoanExecListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of monitoring objects.
       *
       * @param request DescribeLoanExecListRequest
       * @return DescribeLoanExecListResponse
       */
      Models::DescribeLoanExecListResponse describeLoanExecList(const Models::DescribeLoanExecListRequest &request);

      /**
       * @summary Retrieves the list of in-loan monitoring tasks.
       *
       * @param request DescribeLoanTaskListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLoanTaskListResponse
       */
      Models::DescribeLoanTaskListResponse describeLoanTaskListWithOptions(const Models::DescribeLoanTaskListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of in-loan monitoring tasks.
       *
       * @param request DescribeLoanTaskListRequest
       * @return DescribeLoanTaskListResponse
       */
      Models::DescribeLoanTaskListResponse describeLoanTaskList(const Models::DescribeLoanTaskListRequest &request);

      /**
       * @summary Queries the tagging list.
       *
       * @param request DescribeMarkPageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMarkPageResponse
       */
      Models::DescribeMarkPageResponse describeMarkPageWithOptions(const Models::DescribeMarkPageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tagging list.
       *
       * @param request DescribeMarkPageRequest
       * @return DescribeMarkPageResponse
       */
      Models::DescribeMarkPageResponse describeMarkPage(const Models::DescribeMarkPageRequest &request);

      /**
       * @summary Queries whether the current user has the specified permission.
       *
       * @param request DescribeMenuPermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMenuPermissionResponse
       */
      Models::DescribeMenuPermissionResponse describeMenuPermissionWithOptions(const Models::DescribeMenuPermissionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether the current user has the specified permission.
       *
       * @param request DescribeMenuPermissionRequest
       * @return DescribeMenuPermissionResponse
       */
      Models::DescribeMenuPermissionResponse describeMenuPermission(const Models::DescribeMenuPermissionRequest &request);

      /**
       * @summary View Result
       *
       * @param request DescribeModelDetailsByIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeModelDetailsByIdResponse
       */
      Models::DescribeModelDetailsByIdResponse describeModelDetailsByIdWithOptions(const Models::DescribeModelDetailsByIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary View Result
       *
       * @param request DescribeModelDetailsByIdRequest
       * @return DescribeModelDetailsByIdResponse
       */
      Models::DescribeModelDetailsByIdResponse describeModelDetailsById(const Models::DescribeModelDetailsByIdRequest &request);

      /**
       * @summary Get File Upload Credentials
       *
       * @param request DescribeModelOssPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeModelOssPolicyResponse
       */
      Models::DescribeModelOssPolicyResponse describeModelOssPolicyWithOptions(const Models::DescribeModelOssPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get File Upload Credentials
       *
       * @param request DescribeModelOssPolicyRequest
       * @return DescribeModelOssPolicyResponse
       */
      Models::DescribeModelOssPolicyResponse describeModelOssPolicy(const Models::DescribeModelOssPolicyRequest &request);

      /**
       * @summary Queries the limits of tasks.
       *
       * @param request DescribeMonitorTaskLimitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMonitorTaskLimitResponse
       */
      Models::DescribeMonitorTaskLimitResponse describeMonitorTaskLimitWithOptions(const Models::DescribeMonitorTaskLimitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the limits of tasks.
       *
       * @param request DescribeMonitorTaskLimitRequest
       * @return DescribeMonitorTaskLimitResponse
       */
      Models::DescribeMonitorTaskLimitResponse describeMonitorTaskLimit(const Models::DescribeMonitorTaskLimitRequest &request);

      /**
       * @summary Queries a name list by page.
       *
       * @param request DescribeNameListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNameListResponse
       */
      Models::DescribeNameListResponse describeNameListWithOptions(const Models::DescribeNameListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a name list by page.
       *
       * @param request DescribeNameListRequest
       * @return DescribeNameListResponse
       */
      Models::DescribeNameListResponse describeNameList(const Models::DescribeNameListRequest &request);

      /**
       * @summary Downloads the content of a list.
       *
       * @param request DescribeNameListDownloadUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNameListDownloadUrlResponse
       */
      Models::DescribeNameListDownloadUrlResponse describeNameListDownloadUrlWithOptions(const Models::DescribeNameListDownloadUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Downloads the content of a list.
       *
       * @param request DescribeNameListDownloadUrlRequest
       * @return DescribeNameListDownloadUrlResponse
       */
      Models::DescribeNameListDownloadUrlResponse describeNameListDownloadUrl(const Models::DescribeNameListDownloadUrlRequest &request);

      /**
       * @summary Queries the quota limit for lists.
       *
       * @param request DescribeNameListLimitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNameListLimitResponse
       */
      Models::DescribeNameListLimitResponse describeNameListLimitWithOptions(const Models::DescribeNameListLimitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the quota limit for lists.
       *
       * @param request DescribeNameListLimitRequest
       * @return DescribeNameListLimitResponse
       */
      Models::DescribeNameListLimitResponse describeNameListLimit(const Models::DescribeNameListLimitRequest &request);

      /**
       * @summary Queries the content of a list.
       *
       * @param request DescribeNameListPageListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNameListPageListResponse
       */
      Models::DescribeNameListPageListResponse describeNameListPageListWithOptions(const Models::DescribeNameListPageListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the content of a list.
       *
       * @param request DescribeNameListPageListRequest
       * @return DescribeNameListPageListResponse
       */
      Models::DescribeNameListPageListResponse describeNameListPageList(const Models::DescribeNameListPageListRequest &request);

      /**
       * @summary Queries the list of name list types.
       *
       * @param request DescribeNameListTypeListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNameListTypeListResponse
       */
      Models::DescribeNameListTypeListResponse describeNameListTypeListWithOptions(const Models::DescribeNameListTypeListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of name list types.
       *
       * @param request DescribeNameListTypeListRequest
       * @return DescribeNameListTypeListResponse
       */
      Models::DescribeNameListTypeListResponse describeNameListTypeList(const Models::DescribeNameListTypeListRequest &request);

      /**
       * @summary Queries a list of named lists.
       *
       * @param request DescribeNameListVariablePageListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNameListVariablePageListResponse
       */
      Models::DescribeNameListVariablePageListResponse describeNameListVariablePageListWithOptions(const Models::DescribeNameListVariablePageListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of named lists.
       *
       * @param request DescribeNameListVariablePageListRequest
       * @return DescribeNameListVariablePageListResponse
       */
      Models::DescribeNameListVariablePageListResponse describeNameListVariablePageList(const Models::DescribeNameListVariablePageListRequest &request);

      /**
       * @summary Query Operation Log Monitoring Statistics
       *
       * @param request DescribeOperationLogMonitoringRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOperationLogMonitoringResponse
       */
      Models::DescribeOperationLogMonitoringResponse describeOperationLogMonitoringWithOptions(const Models::DescribeOperationLogMonitoringRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Operation Log Monitoring Statistics
       *
       * @param request DescribeOperationLogMonitoringRequest
       * @return DescribeOperationLogMonitoringResponse
       */
      Models::DescribeOperationLogMonitoringResponse describeOperationLogMonitoring(const Models::DescribeOperationLogMonitoringRequest &request);

      /**
       * @summary Queries the list of events by event name.
       *
       * @param request DescribeOperationLogPageListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOperationLogPageListResponse
       */
      Models::DescribeOperationLogPageListResponse describeOperationLogPageListWithOptions(const Models::DescribeOperationLogPageListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of events by event name.
       *
       * @param request DescribeOperationLogPageListRequest
       * @return DescribeOperationLogPageListResponse
       */
      Models::DescribeOperationLogPageListResponse describeOperationLogPageList(const Models::DescribeOperationLogPageListRequest &request);

      /**
       * @summary Queries the operator mapping list by customer ID.
       *
       * @param request DescribeOperatorListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOperatorListResponse
       */
      Models::DescribeOperatorListResponse describeOperatorListWithOptions(const Models::DescribeOperatorListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the operator mapping list by customer ID.
       *
       * @param request DescribeOperatorListRequest
       * @return DescribeOperatorListResponse
       */
      Models::DescribeOperatorListResponse describeOperatorList(const Models::DescribeOperatorListRequest &request);

      /**
       * @summary Queries the operator mapping list.
       *
       * @param request DescribeOperatorListBySceneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOperatorListBySceneResponse
       */
      Models::DescribeOperatorListBySceneResponse describeOperatorListBySceneWithOptions(const Models::DescribeOperatorListBySceneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the operator mapping list.
       *
       * @param request DescribeOperatorListBySceneRequest
       * @return DescribeOperatorListBySceneResponse
       */
      Models::DescribeOperatorListBySceneResponse describeOperatorListByScene(const Models::DescribeOperatorListBySceneRequest &request);

      /**
       * @summary Queries the list of operator mappings.
       *
       * @param request DescribeOperatorListByTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOperatorListByTypeResponse
       */
      Models::DescribeOperatorListByTypeResponse describeOperatorListByTypeWithOptions(const Models::DescribeOperatorListByTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of operator mappings.
       *
       * @param request DescribeOperatorListByTypeRequest
       * @return DescribeOperatorListByTypeResponse
       */
      Models::DescribeOperatorListByTypeResponse describeOperatorListByType(const Models::DescribeOperatorListByTypeRequest &request);

      /**
       * @summary Checks whether OSS is authorized.
       *
       * @param request DescribeOssAuthStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOssAuthStatusResponse
       */
      Models::DescribeOssAuthStatusResponse describeOssAuthStatusWithOptions(const Models::DescribeOssAuthStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether OSS is authorized.
       *
       * @param request DescribeOssAuthStatusRequest
       * @return DescribeOssAuthStatusResponse
       */
      Models::DescribeOssAuthStatusResponse describeOssAuthStatus(const Models::DescribeOssAuthStatusRequest &request);

      /**
       * @summary Retrieves the OSS policy.
       *
       * @param request DescribeOssPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOssPolicyResponse
       */
      Models::DescribeOssPolicyResponse describeOssPolicyWithOptions(const Models::DescribeOssPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the OSS policy.
       *
       * @param request DescribeOssPolicyRequest
       * @return DescribeOssPolicyResponse
       */
      Models::DescribeOssPolicyResponse describeOssPolicy(const Models::DescribeOssPolicyRequest &request);

      /**
       * @summary Retrieves the upload credential for a file.
       *
       * @param request DescribeOssTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOssTokenResponse
       */
      Models::DescribeOssTokenResponse describeOssTokenWithOptions(const Models::DescribeOssTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the upload credential for a file.
       *
       * @param request DescribeOssTokenRequest
       * @return DescribeOssTokenResponse
       */
      Models::DescribeOssTokenResponse describeOssToken(const Models::DescribeOssTokenRequest &request);

      /**
       * @summary Queries the list of event properties.
       *
       * @param request DescribeParamByEventCodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeParamByEventCodesResponse
       */
      Models::DescribeParamByEventCodesResponse describeParamByEventCodesWithOptions(const Models::DescribeParamByEventCodesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of event properties.
       *
       * @param request DescribeParamByEventCodesRequest
       * @return DescribeParamByEventCodesResponse
       */
      Models::DescribeParamByEventCodesResponse describeParamByEventCodes(const Models::DescribeParamByEventCodesRequest &request);

      /**
       * @summary Retrieves the file upload credential.
       *
       * @param request DescribePocOssTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePocOssTokenResponse
       */
      Models::DescribePocOssTokenResponse describePocOssTokenWithOptions(const Models::DescribePocOssTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the file upload credential.
       *
       * @param request DescribePocOssTokenRequest
       * @return DescribePocOssTokenResponse
       */
      Models::DescribePocOssTokenResponse describePocOssToken(const Models::DescribePocOssTokenRequest &request);

      /**
       * @summary Retrieves the list of POC tasks.
       *
       * @param request DescribePocTaskListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePocTaskListResponse
       */
      Models::DescribePocTaskListResponse describePocTaskListWithOptions(const Models::DescribePocTaskListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of POC tasks.
       *
       * @param request DescribePocTaskListRequest
       * @return DescribePocTaskListResponse
       */
      Models::DescribePocTaskListResponse describePocTaskList(const Models::DescribePocTaskListRequest &request);

      /**
       * @summary Checks whether the Stack private domain mode is enabled.
       *
       * @param request DescribePrivateStackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePrivateStackResponse
       */
      Models::DescribePrivateStackResponse describePrivateStackWithOptions(const Models::DescribePrivateStackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether the Stack private domain mode is enabled.
       *
       * @param request DescribePrivateStackRequest
       * @return DescribePrivateStackResponse
       */
      Models::DescribePrivateStackResponse describePrivateStack(const Models::DescribePrivateStackRequest &request);

      /**
       * @summary Queries the details of a custom query variable.
       *
       * @param request DescribeQueryVariableDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeQueryVariableDetailResponse
       */
      Models::DescribeQueryVariableDetailResponse describeQueryVariableDetailWithOptions(const Models::DescribeQueryVariableDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a custom query variable.
       *
       * @param request DescribeQueryVariableDetailRequest
       * @return DescribeQueryVariableDetailResponse
       */
      Models::DescribeQueryVariableDetailResponse describeQueryVariableDetail(const Models::DescribeQueryVariableDetailRequest &request);

      /**
       * @summary Queries a list of custom query variables.
       *
       * @param request DescribeQueryVariablePageListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeQueryVariablePageListResponse
       */
      Models::DescribeQueryVariablePageListResponse describeQueryVariablePageListWithOptions(const Models::DescribeQueryVariablePageListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of custom query variables.
       *
       * @param request DescribeQueryVariablePageListRequest
       * @return DescribeQueryVariablePageListResponse
       */
      Models::DescribeQueryVariablePageListResponse describeQueryVariablePageList(const Models::DescribeQueryVariablePageListRequest &request);

      /**
       * @summary Queries the list of variables under a data sample and scenario.
       *
       * @param request DescribeRecommendSceneVariablesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRecommendSceneVariablesResponse
       */
      Models::DescribeRecommendSceneVariablesResponse describeRecommendSceneVariablesWithOptions(const Models::DescribeRecommendSceneVariablesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of variables under a data sample and scenario.
       *
       * @param request DescribeRecommendSceneVariablesRequest
       * @return DescribeRecommendSceneVariablesResponse
       */
      Models::DescribeRecommendSceneVariablesResponse describeRecommendSceneVariables(const Models::DescribeRecommendSceneVariablesRequest &request);

      /**
       * @summary Queries the details of variable recommendations.
       *
       * @param request DescribeRecommendTaskDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRecommendTaskDetailResponse
       */
      Models::DescribeRecommendTaskDetailResponse describeRecommendTaskDetailWithOptions(const Models::DescribeRecommendTaskDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of variable recommendations.
       *
       * @param request DescribeRecommendTaskDetailRequest
       * @return DescribeRecommendTaskDetailResponse
       */
      Models::DescribeRecommendTaskDetailResponse describeRecommendTaskDetail(const Models::DescribeRecommendTaskDetailRequest &request);

      /**
       * @summary Queries the variable recommendation list.
       *
       * @param request DescribeRecommendTaskPageListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRecommendTaskPageListResponse
       */
      Models::DescribeRecommendTaskPageListResponse describeRecommendTaskPageListWithOptions(const Models::DescribeRecommendTaskPageListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the variable recommendation list.
       *
       * @param request DescribeRecommendTaskPageListRequest
       * @return DescribeRecommendTaskPageListResponse
       */
      Models::DescribeRecommendTaskPageListResponse describeRecommendTaskPageList(const Models::DescribeRecommendTaskPageListRequest &request);

      /**
       * @summary Queries the metric information of a variable.
       *
       * @param request DescribeRecommendVariablesVelocityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRecommendVariablesVelocityResponse
       */
      Models::DescribeRecommendVariablesVelocityResponse describeRecommendVariablesVelocityWithOptions(const Models::DescribeRecommendVariablesVelocityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the metric information of a variable.
       *
       * @param request DescribeRecommendVariablesVelocityRequest
       * @return DescribeRecommendVariablesVelocityResponse
       */
      Models::DescribeRecommendVariablesVelocityResponse describeRecommendVariablesVelocity(const Models::DescribeRecommendVariablesVelocityRequest &request);

      /**
       * @summary Queries the list of supported metrics.
       *
       * @param request DescribeRecommendVelocitiesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRecommendVelocitiesResponse
       */
      Models::DescribeRecommendVelocitiesResponse describeRecommendVelocitiesWithOptions(const Models::DescribeRecommendVelocitiesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of supported metrics.
       *
       * @param request DescribeRecommendVelocitiesRequest
       * @return DescribeRecommendVelocitiesResponse
       */
      Models::DescribeRecommendVelocitiesResponse describeRecommendVelocities(const Models::DescribeRecommendVelocitiesRequest &request);

      /**
       * @summary Queries the list of regions supported by API Gateway.
       *
       * @param request DescribeRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Models::DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of regions supported by API Gateway.
       *
       * @param request DescribeRegionsRequest
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions(const Models::DescribeRegionsRequest &request);

      /**
       * @summary Queries the hit details of a request.
       *
       * @param request DescribeRequestHitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRequestHitResponse
       */
      Models::DescribeRequestHitResponse describeRequestHitWithOptions(const Models::DescribeRequestHitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the hit details of a request.
       *
       * @param request DescribeRequestHitRequest
       * @return DescribeRequestHitResponse
       */
      Models::DescribeRequestHitResponse describeRequestHit(const Models::DescribeRequestHitRequest &request);

      /**
       * @summary Request Rate (QPS).
       *
       * @param request DescribeRequestPeakReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRequestPeakReportResponse
       */
      Models::DescribeRequestPeakReportResponse describeRequestPeakReportWithOptions(const Models::DescribeRequestPeakReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Request Rate (QPS).
       *
       * @param request DescribeRequestPeakReportRequest
       * @return DescribeRequestPeakReportResponse
       */
      Models::DescribeRequestPeakReportResponse describeRequestPeakReport(const Models::DescribeRequestPeakReportRequest &request);

      /**
       * @summary Performs drill-down analysis.
       *
       * @param request DescribeResultCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeResultCountResponse
       */
      Models::DescribeResultCountResponse describeResultCountWithOptions(const Models::DescribeResultCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs drill-down analysis.
       *
       * @param request DescribeResultCountRequest
       * @return DescribeResultCountResponse
       */
      Models::DescribeResultCountResponse describeResultCount(const Models::DescribeResultCountRequest &request);

      /**
       * @summary Risk Map Overview Chart (Line Chart)
       *
       * @param request DescribeRiskLineChartRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRiskLineChartResponse
       */
      Models::DescribeRiskLineChartResponse describeRiskLineChartWithOptions(const Models::DescribeRiskLineChartRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Risk Map Overview Chart (Line Chart)
       *
       * @param request DescribeRiskLineChartRequest
       * @return DescribeRiskLineChartResponse
       */
      Models::DescribeRiskLineChartResponse describeRiskLineChart(const Models::DescribeRiskLineChartRequest &request);

      /**
       * @summary Tag Hit Rate Tag Hit Dimension
       *
       * @param request DescribeRiskTagsLineChartRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRiskTagsLineChartResponse
       */
      Models::DescribeRiskTagsLineChartResponse describeRiskTagsLineChartWithOptions(const Models::DescribeRiskTagsLineChartRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Tag Hit Rate Tag Hit Dimension
       *
       * @param request DescribeRiskTagsLineChartRequest
       * @return DescribeRiskTagsLineChartResponse
       */
      Models::DescribeRiskTagsLineChartResponse describeRiskTagsLineChart(const Models::DescribeRiskTagsLineChartRequest &request);

      /**
       * @summary Queries the policy overview list.
       *
       * @param request DescribeRuleBarChartRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRuleBarChartResponse
       */
      Models::DescribeRuleBarChartResponse describeRuleBarChartWithOptions(const Models::DescribeRuleBarChartRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the policy overview list.
       *
       * @param request DescribeRuleBarChartRequest
       * @return DescribeRuleBarChartResponse
       */
      Models::DescribeRuleBarChartResponse describeRuleBarChart(const Models::DescribeRuleBarChartRequest &request);

      /**
       * @summary Queries the number of policies by user ID.
       *
       * @param request DescribeRuleCountByUserIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRuleCountByUserIdResponse
       */
      Models::DescribeRuleCountByUserIdResponse describeRuleCountByUserIdWithOptions(const Models::DescribeRuleCountByUserIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of policies by user ID.
       *
       * @param request DescribeRuleCountByUserIdRequest
       * @return DescribeRuleCountByUserIdResponse
       */
      Models::DescribeRuleCountByUserIdResponse describeRuleCountByUserId(const Models::DescribeRuleCountByUserIdRequest &request);

      /**
       * @summary Query policy/version details.
       *
       * @param request DescribeRuleDetailByRuleIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRuleDetailByRuleIdResponse
       */
      Models::DescribeRuleDetailByRuleIdResponse describeRuleDetailByRuleIdWithOptions(const Models::DescribeRuleDetailByRuleIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query policy/version details.
       *
       * @param request DescribeRuleDetailByRuleIdRequest
       * @return DescribeRuleDetailByRuleIdResponse
       */
      Models::DescribeRuleDetailByRuleIdResponse describeRuleDetailByRuleId(const Models::DescribeRuleDetailByRuleIdRequest &request);

      /**
       * @summary Queries the details of policy rule hits.
       *
       * @param request DescribeRuleHitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRuleHitResponse
       */
      Models::DescribeRuleHitResponse describeRuleHitWithOptions(const Models::DescribeRuleHitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of policy rule hits.
       *
       * @param request DescribeRuleHitRequest
       * @return DescribeRuleHitResponse
       */
      Models::DescribeRuleHitResponse describeRuleHit(const Models::DescribeRuleHitRequest &request);

      /**
       * @summary Queries a list of policies.
       *
       * @param request DescribeRuleListByEventCodesListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRuleListByEventCodesListResponse
       */
      Models::DescribeRuleListByEventCodesListResponse describeRuleListByEventCodesListWithOptions(const Models::DescribeRuleListByEventCodesListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of policies.
       *
       * @param request DescribeRuleListByEventCodesListRequest
       * @return DescribeRuleListByEventCodesListResponse
       */
      Models::DescribeRuleListByEventCodesListResponse describeRuleListByEventCodesList(const Models::DescribeRuleListByEventCodesListRequest &request);

      /**
       * @summary Queries a list of policies.
       *
       * @param request DescribeRulePageListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRulePageListResponse
       */
      Models::DescribeRulePageListResponse describeRulePageListWithOptions(const Models::DescribeRulePageListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of policies.
       *
       * @param request DescribeRulePageListRequest
       * @return DescribeRulePageListResponse
       */
      Models::DescribeRulePageListResponse describeRulePageList(const Models::DescribeRulePageListRequest &request);

      /**
       * @summary Query historical snapshots based on ruleId and version.
       *
       * @param request DescribeRuleSnapshotRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRuleSnapshotResponse
       */
      Models::DescribeRuleSnapshotResponse describeRuleSnapshotWithOptions(const Models::DescribeRuleSnapshotRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query historical snapshots based on ruleId and version.
       *
       * @param request DescribeRuleSnapshotRequest
       * @return DescribeRuleSnapshotResponse
       */
      Models::DescribeRuleSnapshotResponse describeRuleSnapshot(const Models::DescribeRuleSnapshotRequest &request);

      /**
       * @summary Queries the list of policy versions.
       *
       * @param request DescribeRuleVersionListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRuleVersionListResponse
       */
      Models::DescribeRuleVersionListResponse describeRuleVersionListWithOptions(const Models::DescribeRuleVersionListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of policy versions.
       *
       * @param request DescribeRuleVersionListRequest
       * @return DescribeRuleVersionListResponse
       */
      Models::DescribeRuleVersionListResponse describeRuleVersionList(const Models::DescribeRuleVersionListRequest &request);

      /**
       * @summary Queries the list of SDK downloads.
       *
       * @param request DescribeSDKDownloadListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSDKDownloadListResponse
       */
      Models::DescribeSDKDownloadListResponse describeSDKDownloadListWithOptions(const Models::DescribeSDKDownloadListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of SDK downloads.
       *
       * @param request DescribeSDKDownloadListRequest
       * @return DescribeSDKDownloadListResponse
       */
      Models::DescribeSDKDownloadListResponse describeSDKDownloadList(const Models::DescribeSDKDownloadListRequest &request);

      /**
       * @summary Queries SAF permissions.
       *
       * @param request DescribeSafConsoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSafConsoleResponse
       */
      Models::DescribeSafConsoleResponse describeSafConsoleWithOptions(const Models::DescribeSafConsoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries SAF permissions.
       *
       * @param request DescribeSafConsoleRequest
       * @return DescribeSafConsoleResponse
       */
      Models::DescribeSafConsoleResponse describeSafConsole(const Models::DescribeSafConsoleRequest &request);

      /**
       * @summary Queries saf_de orders.
       *
       * @param request DescribeSafDeOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSafDeOrderResponse
       */
      Models::DescribeSafDeOrderResponse describeSafDeOrderWithOptions(const Models::DescribeSafDeOrderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries saf_de orders.
       *
       * @param request DescribeSafDeOrderRequest
       * @return DescribeSafDeOrderResponse
       */
      Models::DescribeSafDeOrderResponse describeSafDeOrder(const Models::DescribeSafDeOrderRequest &request);

      /**
       * @summary Queries order information.
       *
       * @param request DescribeSafOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSafOrderResponse
       */
      Models::DescribeSafOrderResponse describeSafOrderWithOptions(const Models::DescribeSafOrderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries order information.
       *
       * @param request DescribeSafOrderRequest
       * @return DescribeSafOrderResponse
       */
      Models::DescribeSafOrderResponse describeSafOrder(const Models::DescribeSafOrderRequest &request);

      /**
       * @summary Queries the access configuration.
       *
       * @param request DescribeSafStartConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSafStartConfigResponse
       */
      Models::DescribeSafStartConfigResponse describeSafStartConfigWithOptions(const Models::DescribeSafStartConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the access configuration.
       *
       * @param request DescribeSafStartConfigRequest
       * @return DescribeSafStartConfigResponse
       */
      Models::DescribeSafStartConfigResponse describeSafStartConfig(const Models::DescribeSafStartConfigRequest &request);

      /**
       * @summary Queries access configurations.
       *
       * @param request DescribeSafStartStepsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSafStartStepsResponse
       */
      Models::DescribeSafStartStepsResponse describeSafStartStepsWithOptions(const Models::DescribeSafStartStepsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries access configurations.
       *
       * @param request DescribeSafStartStepsRequest
       * @return DescribeSafStartStepsResponse
       */
      Models::DescribeSafStartStepsResponse describeSafStartSteps(const Models::DescribeSafStartStepsRequest &request);

      /**
       * @summary Retrieves the list of risk labels.
       *
       * @param request DescribeSafTagListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSafTagListResponse
       */
      Models::DescribeSafTagListResponse describeSafTagListWithOptions(const Models::DescribeSafTagListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of risk labels.
       *
       * @param request DescribeSafTagListRequest
       * @return DescribeSafTagListResponse
       */
      Models::DescribeSafTagListResponse describeSafTagList(const Models::DescribeSafTagListRequest &request);

      /**
       * @summary Get File Upload Credentials
       *
       * @param request DescribeSampleBatchOssPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSampleBatchOssPolicyResponse
       */
      Models::DescribeSampleBatchOssPolicyResponse describeSampleBatchOssPolicyWithOptions(const Models::DescribeSampleBatchOssPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get File Upload Credentials
       *
       * @param request DescribeSampleBatchOssPolicyRequest
       * @return DescribeSampleBatchOssPolicyResponse
       */
      Models::DescribeSampleBatchOssPolicyResponse describeSampleBatchOssPolicy(const Models::DescribeSampleBatchOssPolicyRequest &request);

      /**
       * @summary Sample List
       *
       * @param request DescribeSampleDataByBatchUUidPageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSampleDataByBatchUUidPageResponse
       */
      Models::DescribeSampleDataByBatchUUidPageResponse describeSampleDataByBatchUUidPageWithOptions(const Models::DescribeSampleDataByBatchUUidPageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sample List
       *
       * @param request DescribeSampleDataByBatchUUidPageRequest
       * @return DescribeSampleDataByBatchUUidPageResponse
       */
      Models::DescribeSampleDataByBatchUUidPageResponse describeSampleDataByBatchUUidPage(const Models::DescribeSampleDataByBatchUUidPageRequest &request);

      /**
       * @summary Performs a paging query on the sample list.
       *
       * @param request DescribeSampleDataListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSampleDataListResponse
       */
      Models::DescribeSampleDataListResponse describeSampleDataListWithOptions(const Models::DescribeSampleDataListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a paging query on the sample list.
       *
       * @param request DescribeSampleDataListRequest
       * @return DescribeSampleDataListResponse
       */
      Models::DescribeSampleDataListResponse describeSampleDataList(const Models::DescribeSampleDataListRequest &request);

      /**
       * @summary Sample List
       *
       * @param request DescribeSampleDataPageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSampleDataPageResponse
       */
      Models::DescribeSampleDataPageResponse describeSampleDataPageWithOptions(const Models::DescribeSampleDataPageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sample List
       *
       * @param request DescribeSampleDataPageRequest
       * @return DescribeSampleDataPageResponse
       */
      Models::DescribeSampleDataPageResponse describeSampleDataPage(const Models::DescribeSampleDataPageRequest &request);

      /**
       * @summary Queries the authorization of a data sample.
       *
       * @param request DescribeSampleDemoDownloadUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSampleDemoDownloadUrlResponse
       */
      Models::DescribeSampleDemoDownloadUrlResponse describeSampleDemoDownloadUrlWithOptions(const Models::DescribeSampleDemoDownloadUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the authorization of a data sample.
       *
       * @param request DescribeSampleDemoDownloadUrlRequest
       * @return DescribeSampleDemoDownloadUrlResponse
       */
      Models::DescribeSampleDemoDownloadUrlResponse describeSampleDemoDownloadUrl(const Models::DescribeSampleDemoDownloadUrlRequest &request);

      /**
       * @summary Queries the authorization information for downloading a data sample.
       *
       * @param request DescribeSampleDownloadUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSampleDownloadUrlResponse
       */
      Models::DescribeSampleDownloadUrlResponse describeSampleDownloadUrlWithOptions(const Models::DescribeSampleDownloadUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the authorization information for downloading a data sample.
       *
       * @param request DescribeSampleDownloadUrlRequest
       * @return DescribeSampleDownloadUrlResponse
       */
      Models::DescribeSampleDownloadUrlResponse describeSampleDownloadUrl(const Models::DescribeSampleDownloadUrlRequest &request);

      /**
       * @summary Queries the details of a data sample.
       *
       * @param request DescribeSampleInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSampleInfoResponse
       */
      Models::DescribeSampleInfoResponse describeSampleInfoWithOptions(const Models::DescribeSampleInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a data sample.
       *
       * @param request DescribeSampleInfoRequest
       * @return DescribeSampleInfoResponse
       */
      Models::DescribeSampleInfoResponse describeSampleInfo(const Models::DescribeSampleInfoRequest &request);

      /**
       * @summary Queries the sample list.
       *
       * @param request DescribeSampleListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSampleListResponse
       */
      Models::DescribeSampleListResponse describeSampleListWithOptions(const Models::DescribeSampleListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the sample list.
       *
       * @param request DescribeSampleListRequest
       * @return DescribeSampleListResponse
       */
      Models::DescribeSampleListResponse describeSampleList(const Models::DescribeSampleListRequest &request);

      /**
       * @summary Queries the list of scenarios.
       *
       * @param request DescribeSampleSceneListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSampleSceneListResponse
       */
      Models::DescribeSampleSceneListResponse describeSampleSceneListWithOptions(const Models::DescribeSampleSceneListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of scenarios.
       *
       * @param request DescribeSampleSceneListRequest
       * @return DescribeSampleSceneListResponse
       */
      Models::DescribeSampleSceneListResponse describeSampleSceneList(const Models::DescribeSampleSceneListRequest &request);

      /**
       * @summary Retrieves the list of labels.
       *
       * @param request DescribeSampleTagListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSampleTagListResponse
       */
      Models::DescribeSampleTagListResponse describeSampleTagListWithOptions(const Models::DescribeSampleTagListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of labels.
       *
       * @param request DescribeSampleTagListRequest
       * @return DescribeSampleTagListResponse
       */
      Models::DescribeSampleTagListResponse describeSampleTagList(const Models::DescribeSampleTagListRequest &request);

      /**
       * @summary Queries the authorization information for sample uploads.
       *
       * @param request DescribeSampleUploadPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSampleUploadPolicyResponse
       */
      Models::DescribeSampleUploadPolicyResponse describeSampleUploadPolicyWithOptions(const Models::DescribeSampleUploadPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the authorization information for sample uploads.
       *
       * @param request DescribeSampleUploadPolicyRequest
       * @return DescribeSampleUploadPolicyResponse
       */
      Models::DescribeSampleUploadPolicyResponse describeSampleUploadPolicy(const Models::DescribeSampleUploadPolicyRequest &request);

      /**
       * @summary Sample Batch List
       *
       * @param request DescribeSamplebatchPageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSamplebatchPageResponse
       */
      Models::DescribeSamplebatchPageResponse describeSamplebatchPageWithOptions(const Models::DescribeSamplebatchPageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sample Batch List
       *
       * @param request DescribeSamplebatchPageRequest
       * @return DescribeSamplebatchPageResponse
       */
      Models::DescribeSamplebatchPageResponse describeSamplebatchPage(const Models::DescribeSamplebatchPageRequest &request);

      /**
       * @summary Queries the dropdown list of scenario-based risk control events.
       *
       * @description Queries the dropdown list of scenario-based risk control events.
       *
       * @param request DescribeSceneAllEventNameCodeListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSceneAllEventNameCodeListResponse
       */
      Models::DescribeSceneAllEventNameCodeListResponse describeSceneAllEventNameCodeListWithOptions(const Models::DescribeSceneAllEventNameCodeListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the dropdown list of scenario-based risk control events.
       *
       * @description Queries the dropdown list of scenario-based risk control events.
       *
       * @param request DescribeSceneAllEventNameCodeListRequest
       * @return DescribeSceneAllEventNameCodeListResponse
       */
      Models::DescribeSceneAllEventNameCodeListResponse describeSceneAllEventNameCodeList(const Models::DescribeSceneAllEventNameCodeListRequest &request);

      /**
       * @summary Queries the list of scenario-based risk control events.
       *
       * @param request DescribeSceneEventPageListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSceneEventPageListResponse
       */
      Models::DescribeSceneEventPageListResponse describeSceneEventPageListWithOptions(const Models::DescribeSceneEventPageListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of scenario-based risk control events.
       *
       * @param request DescribeSceneEventPageListRequest
       * @return DescribeSceneEventPageListResponse
       */
      Models::DescribeSceneEventPageListResponse describeSceneEventPageList(const Models::DescribeSceneEventPageListRequest &request);

      /**
       * @summary Queries the list of scenario-based risk control event policies.
       *
       * @description Queries the list of scenario-based risk control event policies.
       *
       * @param request DescribeSceneRulePageListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSceneRulePageListResponse
       */
      Models::DescribeSceneRulePageListResponse describeSceneRulePageListWithOptions(const Models::DescribeSceneRulePageListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of scenario-based risk control event policies.
       *
       * @description Queries the list of scenario-based risk control event policies.
       *
       * @param request DescribeSceneRulePageListRequest
       * @return DescribeSceneRulePageListResponse
       */
      Models::DescribeSceneRulePageListResponse describeSceneRulePageList(const Models::DescribeSceneRulePageListRequest &request);

      /**
       * @summary Score Distribution
       *
       * @param request DescribeScoreListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeScoreListResponse
       */
      Models::DescribeScoreListResponse describeScoreListWithOptions(const Models::DescribeScoreListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Score Distribution
       *
       * @param request DescribeScoreListRequest
       * @return DescribeScoreListResponse
       */
      Models::DescribeScoreListResponse describeScoreList(const Models::DescribeScoreListRequest &request);

      /**
       * @summary Analyzes the quantity distribution across score ranges.
       *
       * @param request DescribeScoreSectionNumLineChartRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeScoreSectionNumLineChartResponse
       */
      Models::DescribeScoreSectionNumLineChartResponse describeScoreSectionNumLineChartWithOptions(const Models::DescribeScoreSectionNumLineChartRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Analyzes the quantity distribution across score ranges.
       *
       * @param request DescribeScoreSectionNumLineChartRequest
       * @return DescribeScoreSectionNumLineChartResponse
       */
      Models::DescribeScoreSectionNumLineChartResponse describeScoreSectionNumLineChart(const Models::DescribeScoreSectionNumLineChartRequest &request);

      /**
       * @summary Queries the score range distribution of main events, bypass events, and diversion events.
       *
       * @param request DescribeScoreSectionPieChartRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeScoreSectionPieChartResponse
       */
      Models::DescribeScoreSectionPieChartResponse describeScoreSectionPieChartWithOptions(const Models::DescribeScoreSectionPieChartRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the score range distribution of main events, bypass events, and diversion events.
       *
       * @param request DescribeScoreSectionPieChartRequest
       * @return DescribeScoreSectionPieChartResponse
       */
      Models::DescribeScoreSectionPieChartResponse describeScoreSectionPieChart(const Models::DescribeScoreSectionPieChartRequest &request);

      /**
       * @summary Score Range Proportion Analysis
       *
       * @param request DescribeScoreSectionRatioLineChartRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeScoreSectionRatioLineChartResponse
       */
      Models::DescribeScoreSectionRatioLineChartResponse describeScoreSectionRatioLineChartWithOptions(const Models::DescribeScoreSectionRatioLineChartRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Score Range Proportion Analysis
       *
       * @param request DescribeScoreSectionRatioLineChartRequest
       * @return DescribeScoreSectionRatioLineChartResponse
       */
      Models::DescribeScoreSectionRatioLineChartResponse describeScoreSectionRatioLineChart(const Models::DescribeScoreSectionRatioLineChartRequest &request);

      /**
       * @summary Queries the list of task IDs.
       *
       * @param request DescribeSelectItemRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSelectItemResponse
       */
      Models::DescribeSelectItemResponse describeSelectItemWithOptions(const Models::DescribeSelectItemRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of task IDs.
       *
       * @param request DescribeSelectItemRequest
       * @return DescribeSelectItemResponse
       */
      Models::DescribeSelectItemResponse describeSelectItem(const Models::DescribeSelectItemRequest &request);

      /**
       * @summary Retrieves the dropdown values for ServiceAppkey.
       *
       * @param request DescribeServiceAppKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeServiceAppKeyResponse
       */
      Models::DescribeServiceAppKeyResponse describeServiceAppKeyWithOptions(const Models::DescribeServiceAppKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the dropdown values for ServiceAppkey.
       *
       * @param request DescribeServiceAppKeyRequest
       * @return DescribeServiceAppKeyResponse
       */
      Models::DescribeServiceAppKeyResponse describeServiceAppKey(const Models::DescribeServiceAppKeyRequest &request);

      /**
       * @summary ServiceCodeName Information
       *
       * @param request DescribeServiceCodeNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeServiceCodeNameResponse
       */
      Models::DescribeServiceCodeNameResponse describeServiceCodeNameWithOptions(const Models::DescribeServiceCodeNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ServiceCodeName Information
       *
       * @param request DescribeServiceCodeNameRequest
       * @return DescribeServiceCodeNameResponse
       */
      Models::DescribeServiceCodeNameResponse describeServiceCodeName(const Models::DescribeServiceCodeNameRequest &request);

      /**
       * @summary Retrieves the list of services.
       *
       * @param request DescribeServiceListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeServiceListResponse
       */
      Models::DescribeServiceListResponse describeServiceListWithOptions(const Models::DescribeServiceListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of services.
       *
       * @param request DescribeServiceListRequest
       * @return DescribeServiceListResponse
       */
      Models::DescribeServiceListResponse describeServiceList(const Models::DescribeServiceListRequest &request);

      /**
       * @summary Estimates call information.
       *
       * @param request DescribeSimulationPreditInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSimulationPreditInfoResponse
       */
      Models::DescribeSimulationPreditInfoResponse describeSimulationPreditInfoWithOptions(const Models::DescribeSimulationPreditInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Estimates call information.
       *
       * @param request DescribeSimulationPreditInfoRequest
       * @return DescribeSimulationPreditInfoResponse
       */
      Models::DescribeSimulationPreditInfoResponse describeSimulationPreditInfo(const Models::DescribeSimulationPreditInfoRequest &request);

      /**
       * @summary Queries the number of task records.
       *
       * @param request DescribeSimulationTaskCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSimulationTaskCountResponse
       */
      Models::DescribeSimulationTaskCountResponse describeSimulationTaskCountWithOptions(const Models::DescribeSimulationTaskCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of task records.
       *
       * @param request DescribeSimulationTaskCountRequest
       * @return DescribeSimulationTaskCountResponse
       */
      Models::DescribeSimulationTaskCountResponse describeSimulationTaskCount(const Models::DescribeSimulationTaskCountRequest &request);

      /**
       * @summary Queries the task list.
       *
       * @param request DescribeSimulationTaskListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSimulationTaskListResponse
       */
      Models::DescribeSimulationTaskListResponse describeSimulationTaskListWithOptions(const Models::DescribeSimulationTaskListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the task list.
       *
       * @param request DescribeSimulationTaskListRequest
       * @return DescribeSimulationTaskListResponse
       */
      Models::DescribeSimulationTaskListResponse describeSimulationTaskList(const Models::DescribeSimulationTaskListRequest &request);

      /**
       * @summary Retrieves the project configuration.
       *
       * @param request DescribeSlsUrlConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSlsUrlConfigResponse
       */
      Models::DescribeSlsUrlConfigResponse describeSlsUrlConfigWithOptions(const Models::DescribeSlsUrlConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the project configuration.
       *
       * @param request DescribeSlsUrlConfigRequest
       * @return DescribeSlsUrlConfigResponse
       */
      Models::DescribeSlsUrlConfigResponse describeSlsUrlConfig(const Models::DescribeSlsUrlConfigRequest &request);

      /**
       * @summary Queries the list of policies that support simulation.
       *
       * @param request DescribeSupportRuleListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSupportRuleListResponse
       */
      Models::DescribeSupportRuleListResponse describeSupportRuleListWithOptions(const Models::DescribeSupportRuleListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of policies that support simulation.
       *
       * @param request DescribeSupportRuleListRequest
       * @return DescribeSupportRuleListResponse
       */
      Models::DescribeSupportRuleListResponse describeSupportRuleList(const Models::DescribeSupportRuleListRequest &request);

      /**
       * @summary Queries the label list.
       *
       * @param request DescribeTagListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTagListResponse
       */
      Models::DescribeTagListResponse describeTagListWithOptions(const Models::DescribeTagListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the label list.
       *
       * @param request DescribeTagListRequest
       * @return DescribeTagListResponse
       */
      Models::DescribeTagListResponse describeTagList(const Models::DescribeTagListRequest &request);

      /**
       * @summary Queries the tag overview list.
       *
       * @param request DescribeTagsBarChartRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTagsBarChartResponse
       */
      Models::DescribeTagsBarChartResponse describeTagsBarChartWithOptions(const Models::DescribeTagsBarChartRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tag overview list.
       *
       * @param request DescribeTagsBarChartRequest
       * @return DescribeTagsBarChartResponse
       */
      Models::DescribeTagsBarChartResponse describeTagsBarChart(const Models::DescribeTagsBarChartRequest &request);

      /**
       * @summary Detects label fluctuations.
       *
       * @param request DescribeTagsFluctuationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTagsFluctuationResponse
       */
      Models::DescribeTagsFluctuationResponse describeTagsFluctuationWithOptions(const Models::DescribeTagsFluctuationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detects label fluctuations.
       *
       * @param request DescribeTagsFluctuationRequest
       * @return DescribeTagsFluctuationResponse
       */
      Models::DescribeTagsFluctuationResponse describeTagsFluctuation(const Models::DescribeTagsFluctuationRequest &request);

      /**
       * @summary Retrieves the list of labels.
       *
       * @param request DescribeTagsListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTagsListResponse
       */
      Models::DescribeTagsListResponse describeTagsListWithOptions(const Models::DescribeTagsListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of labels.
       *
       * @param request DescribeTagsListRequest
       * @return DescribeTagsListResponse
       */
      Models::DescribeTagsListResponse describeTagsList(const Models::DescribeTagsListRequest &request);

      /**
       * @summary Analyzes the number of label hits.
       *
       * @param request DescribeTagsNumLineChartRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTagsNumLineChartResponse
       */
      Models::DescribeTagsNumLineChartResponse describeTagsNumLineChartWithOptions(const Models::DescribeTagsNumLineChartRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Analyzes the number of label hits.
       *
       * @param request DescribeTagsNumLineChartRequest
       * @return DescribeTagsNumLineChartResponse
       */
      Models::DescribeTagsNumLineChartResponse describeTagsNumLineChart(const Models::DescribeTagsNumLineChartRequest &request);

      /**
       * @summary Analyzes the tag hit ratio distribution.
       *
       * @param request DescribeTagsRatioLineChartRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTagsRatioLineChartResponse
       */
      Models::DescribeTagsRatioLineChartResponse describeTagsRatioLineChartWithOptions(const Models::DescribeTagsRatioLineChartRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Analyzes the tag hit ratio distribution.
       *
       * @param request DescribeTagsRatioLineChartRequest
       * @return DescribeTagsRatioLineChartResponse
       */
      Models::DescribeTagsRatioLineChartResponse describeTagsRatioLineChart(const Models::DescribeTagsRatioLineChartRequest &request);

      /**
       * @summary Queries the trend of tag hits.
       *
       * @param request DescribeTagsTrendRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTagsTrendResponse
       */
      Models::DescribeTagsTrendResponse describeTagsTrendWithOptions(const Models::DescribeTagsTrendRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the trend of tag hits.
       *
       * @param request DescribeTagsTrendRequest
       * @return DescribeTagsTrendResponse
       */
      Models::DescribeTagsTrendResponse describeTagsTrend(const Models::DescribeTagsTrendRequest &request);

      /**
       * @summary Queries the task list.
       *
       * @param request DescribeTaskListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTaskListResponse
       */
      Models::DescribeTaskListResponse describeTaskListWithOptions(const Models::DescribeTaskListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the task list.
       *
       * @param request DescribeTaskListRequest
       * @return DescribeTaskListResponse
       */
      Models::DescribeTaskListResponse describeTaskList(const Models::DescribeTaskListRequest &request);

      /**
       * @summary Queries the task logs.
       *
       * @param request DescribeTaskLogListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTaskLogListResponse
       */
      Models::DescribeTaskLogListResponse describeTaskLogListWithOptions(const Models::DescribeTaskLogListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the task logs.
       *
       * @param request DescribeTaskLogListRequest
       * @return DescribeTaskLogListResponse
       */
      Models::DescribeTaskLogListResponse describeTaskLogList(const Models::DescribeTaskLogListRequest &request);

      /**
       * @summary Queries the total number of events.
       *
       * @param request DescribeTemplateCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTemplateCountResponse
       */
      Models::DescribeTemplateCountResponse describeTemplateCountWithOptions(const Models::DescribeTemplateCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the total number of events.
       *
       * @param request DescribeTemplateCountRequest
       * @return DescribeTemplateCountResponse
       */
      Models::DescribeTemplateCountResponse describeTemplateCount(const Models::DescribeTemplateCountRequest &request);

      /**
       * @summary Downloads a template.
       *
       * @param request DescribeTemplateDownloadRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTemplateDownloadResponse
       */
      Models::DescribeTemplateDownloadResponse describeTemplateDownloadWithOptions(const Models::DescribeTemplateDownloadRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Downloads a template.
       *
       * @param request DescribeTemplateDownloadRequest
       * @return DescribeTemplateDownloadResponse
       */
      Models::DescribeTemplateDownloadResponse describeTemplateDownload(const Models::DescribeTemplateDownloadRequest &request);

      /**
       * @summary Queries a list of events by event name.
       *
       * @param request DescribeTemplatePageListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTemplatePageListResponse
       */
      Models::DescribeTemplatePageListResponse describeTemplatePageListWithOptions(const Models::DescribeTemplatePageListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of events by event name.
       *
       * @param request DescribeTemplatePageListRequest
       * @return DescribeTemplatePageListResponse
       */
      Models::DescribeTemplatePageListResponse describeTemplatePageList(const Models::DescribeTemplatePageListRequest &request);

      /**
       * @summary Queries the list of services used by the user.
       *
       * @param request DescribeUsedServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUsedServiceResponse
       */
      Models::DescribeUsedServiceResponse describeUsedServiceWithOptions(const Models::DescribeUsedServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of services used by the user.
       *
       * @param request DescribeUsedServiceRequest
       * @return DescribeUsedServiceResponse
       */
      Models::DescribeUsedServiceResponse describeUsedService(const Models::DescribeUsedServiceRequest &request);

      /**
       * @summary Retrieves the information about the current logged-on user.
       *
       * @param request DescribeUserInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserInfoResponse
       */
      Models::DescribeUserInfoResponse describeUserInfoWithOptions(const Models::DescribeUserInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the information about the current logged-on user.
       *
       * @param request DescribeUserInfoRequest
       * @return DescribeUserInfoResponse
       */
      Models::DescribeUserInfoResponse describeUserInfo(const Models::DescribeUserInfoRequest &request);

      /**
       * @summary Queries variable binding information.
       *
       * @param request DescribeVariableBindDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVariableBindDetailResponse
       */
      Models::DescribeVariableBindDetailResponse describeVariableBindDetailWithOptions(const Models::DescribeVariableBindDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries variable binding information.
       *
       * @param request DescribeVariableBindDetailRequest
       * @return DescribeVariableBindDetailResponse
       */
      Models::DescribeVariableBindDetailResponse describeVariableBindDetail(const Models::DescribeVariableBindDetailRequest &request);

      /**
       * @summary Queries the details of a variable.
       *
       * @param request DescribeVariableDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVariableDetailResponse
       */
      Models::DescribeVariableDetailResponse describeVariableDetailWithOptions(const Models::DescribeVariableDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a variable.
       *
       * @param request DescribeVariableDetailRequest
       * @return DescribeVariableDetailResponse
       */
      Models::DescribeVariableDetailResponse describeVariableDetail(const Models::DescribeVariableDetailRequest &request);

      /**
       * @summary Queries the billing information of variables.
       *
       * @param request DescribeVariableFeeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVariableFeeResponse
       */
      Models::DescribeVariableFeeResponse describeVariableFeeWithOptions(const Models::DescribeVariableFeeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the billing information of variables.
       *
       * @param request DescribeVariableFeeRequest
       * @return DescribeVariableFeeResponse
       */
      Models::DescribeVariableFeeResponse describeVariableFee(const Models::DescribeVariableFeeRequest &request);

      /**
       * @summary Queries the details of variables.
       *
       * @param request DescribeVariableListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVariableListResponse
       */
      Models::DescribeVariableListResponse describeVariableListWithOptions(const Models::DescribeVariableListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of variables.
       *
       * @param request DescribeVariableListRequest
       * @return DescribeVariableListResponse
       */
      Models::DescribeVariableListResponse describeVariableList(const Models::DescribeVariableListRequest &request);

      /**
       * @summary Queries variable definitions.
       *
       * @param request DescribeVariableMarketListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVariableMarketListResponse
       */
      Models::DescribeVariableMarketListResponse describeVariableMarketListWithOptions(const Models::DescribeVariableMarketListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries variable definitions.
       *
       * @param request DescribeVariableMarketListRequest
       * @return DescribeVariableMarketListResponse
       */
      Models::DescribeVariableMarketListResponse describeVariableMarketList(const Models::DescribeVariableMarketListRequest &request);

      /**
       * @summary Queries configuration information.
       *
       * @param request DescribeVariableSceneListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVariableSceneListResponse
       */
      Models::DescribeVariableSceneListResponse describeVariableSceneListWithOptions(const Models::DescribeVariableSceneListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries configuration information.
       *
       * @param request DescribeVariableSceneListRequest
       * @return DescribeVariableSceneListResponse
       */
      Models::DescribeVariableSceneListResponse describeVariableSceneList(const Models::DescribeVariableSceneListRequest &request);

      /**
       * @summary Cumulative Variable Version Details.
       *
       * @param request DescribeVariableVersionDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVariableVersionDetailResponse
       */
      Models::DescribeVariableVersionDetailResponse describeVariableVersionDetailWithOptions(const Models::DescribeVariableVersionDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cumulative Variable Version Details.
       *
       * @param request DescribeVariableVersionDetailRequest
       * @return DescribeVariableVersionDetailResponse
       */
      Models::DescribeVariableVersionDetailResponse describeVariableVersionDetail(const Models::DescribeVariableVersionDetailRequest &request);

      /**
       * @summary Variable Version List Query
       *
       * @param request DescribeVersionPageListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVersionPageListResponse
       */
      Models::DescribeVersionPageListResponse describeVersionPageListWithOptions(const Models::DescribeVersionPageListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Variable Version List Query
       *
       * @param request DescribeVersionPageListRequest
       * @return DescribeVersionPageListResponse
       */
      Models::DescribeVersionPageListResponse describeVersionPageList(const Models::DescribeVersionPageListRequest &request);

      /**
       * @summary Download sample file
       *
       * @param request DownloadSampleFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DownloadSampleFileResponse
       */
      Models::DownloadSampleFileResponse downloadSampleFileWithOptions(const Models::DownloadSampleFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Download sample file
       *
       * @param request DownloadSampleFileRequest
       * @return DownloadSampleFileResponse
       */
      Models::DownloadSampleFileResponse downloadSampleFile(const Models::DownloadSampleFileRequest &request);

      /**
       * @summary Sample List Data Download
       *
       * @param request DownloadSmapleBatchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DownloadSmapleBatchResponse
       */
      Models::DownloadSmapleBatchResponse downloadSmapleBatchWithOptions(const Models::DownloadSmapleBatchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sample List Data Download
       *
       * @param request DownloadSmapleBatchRequest
       * @return DownloadSmapleBatchResponse
       */
      Models::DownloadSmapleBatchResponse downloadSmapleBatch(const Models::DownloadSmapleBatchRequest &request);

      /**
       * @summary Download subtask result
       *
       * @param request DownloadSubTaskResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DownloadSubTaskResultResponse
       */
      Models::DownloadSubTaskResultResponse downloadSubTaskResultWithOptions(const Models::DownloadSubTaskResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Download subtask result
       *
       * @param request DownloadSubTaskResultRequest
       * @return DownloadSubTaskResultResponse
       */
      Models::DownloadSubTaskResultResponse downloadSubTaskResult(const Models::DownloadSubTaskResultRequest &request);

      /**
       * @summary Tests a custom variable.
       *
       * @param request ExpressionTestRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExpressionTestResponse
       */
      Models::ExpressionTestResponse expressionTestWithOptions(const Models::ExpressionTestRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Tests a custom variable.
       *
       * @param request ExpressionTestRequest
       * @return ExpressionTestResponse
       */
      Models::ExpressionTestResponse expressionTest(const Models::ExpressionTestRequest &request);

      /**
       * @summary Uploads a file.
       *
       * @param request FileUploadRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FileUploadResponse
       */
      Models::FileUploadResponse fileUploadWithOptions(const Models::FileUploadRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uploads a file.
       *
       * @param request FileUploadRequest
       * @return FileUploadResponse
       */
      Models::FileUploadResponse fileUpload(const Models::FileUploadRequest &request);

      /**
       * @summary Create a sample record
       *
       * @param request GetSampleDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSampleDetailResponse
       */
      Models::GetSampleDetailResponse getSampleDetailWithOptions(const Models::GetSampleDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a sample record
       *
       * @param request GetSampleDetailRequest
       * @return GetSampleDetailResponse
       */
      Models::GetSampleDetailResponse getSampleDetail(const Models::GetSampleDetailRequest &request);

      /**
       * @summary View subtask results
       *
       * @param request GetSubTaskResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSubTaskResultResponse
       */
      Models::GetSubTaskResultResponse getSubTaskResultWithOptions(const Models::GetSubTaskResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary View subtask results
       *
       * @param request GetSubTaskResultRequest
       * @return GetSubTaskResultResponse
       */
      Models::GetSubTaskResultResponse getSubTaskResult(const Models::GetSubTaskResultRequest &request);

      /**
       * @summary Batch Import
       *
       * @param request ImportFieldRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportFieldResponse
       */
      Models::ImportFieldResponse importFieldWithOptions(const Models::ImportFieldRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Batch Import
       *
       * @param request ImportFieldRequest
       * @return ImportFieldResponse
       */
      Models::ImportFieldResponse importField(const Models::ImportFieldRequest &request);

      /**
       * @summary Creates or imports a list.
       *
       * @param request ImportNameListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportNameListResponse
       */
      Models::ImportNameListResponse importNameListWithOptions(const Models::ImportNameListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates or imports a list.
       *
       * @param request ImportNameListRequest
       * @return ImportNameListResponse
       */
      Models::ImportNameListResponse importNameList(const Models::ImportNameListRequest &request);

      /**
       * @summary Imports template events.
       *
       * @param request ImportTemplateEventRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportTemplateEventResponse
       */
      Models::ImportTemplateEventResponse importTemplateEventWithOptions(const Models::ImportTemplateEventRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Imports template events.
       *
       * @param request ImportTemplateEventRequest
       * @return ImportTemplateEventResponse
       */
      Models::ImportTemplateEventResponse importTemplateEvent(const Models::ImportTemplateEventRequest &request);

      /**
       * @summary Sample List Query
       *
       * @param request ListSampleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSampleResponse
       */
      Models::ListSampleResponse listSampleWithOptions(const Models::ListSampleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sample List Query
       *
       * @param request ListSampleRequest
       * @return ListSampleResponse
       */
      Models::ListSampleResponse listSample(const Models::ListSampleRequest &request);

      /**
       * @summary Query task group list
       *
       * @param request ListTaskGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTaskGroupResponse
       */
      Models::ListTaskGroupResponse listTaskGroupWithOptions(const Models::ListTaskGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query task group list
       *
       * @param request ListTaskGroupRequest
       * @return ListTaskGroupResponse
       */
      Models::ListTaskGroupResponse listTaskGroup(const Models::ListTaskGroupRequest &request);

      /**
       * @summary Query Variable Definition
       *
       * @param request ListVariableDefineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVariableDefineResponse
       */
      Models::ListVariableDefineResponse listVariableDefineWithOptions(const Models::ListVariableDefineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Variable Definition
       *
       * @param request ListVariableDefineRequest
       * @return ListVariableDefineResponse
       */
      Models::ListVariableDefineResponse listVariableDefine(const Models::ListVariableDefineRequest &request);

      /**
       * @summary Merge Download
       *
       * @param request MergeDownloadRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MergeDownloadResponse
       */
      Models::MergeDownloadResponse mergeDownloadWithOptions(const Models::MergeDownloadRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Merge Download
       *
       * @param request MergeDownloadRequest
       * @return MergeDownloadResponse
       */
      Models::MergeDownloadResponse mergeDownload(const Models::MergeDownloadRequest &request);

      /**
       * @summary Delete
       *
       * @param request ModelDeleteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelDeleteResponse
       */
      Models::ModelDeleteResponse modelDeleteWithOptions(const Models::ModelDeleteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete
       *
       * @param request ModelDeleteRequest
       * @return ModelDeleteResponse
       */
      Models::ModelDeleteResponse modelDelete(const Models::ModelDeleteRequest &request);

      /**
       * @summary File Upload
       *
       * @param request ModelFileUploadRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelFileUploadResponse
       */
      Models::ModelFileUploadResponse modelFileUploadWithOptions(const Models::ModelFileUploadRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary File Upload
       *
       * @param request ModelFileUploadRequest
       * @return ModelFileUploadResponse
       */
      Models::ModelFileUploadResponse modelFileUpload(const Models::ModelFileUploadRequest &request);

      /**
       * @summary Enable, Disable
       *
       * @param request ModelIsUsingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelIsUsingResponse
       */
      Models::ModelIsUsingResponse modelIsUsingWithOptions(const Models::ModelIsUsingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enable, Disable
       *
       * @param request ModelIsUsingRequest
       * @return ModelIsUsingResponse
       */
      Models::ModelIsUsingResponse modelIsUsing(const Models::ModelIsUsingRequest &request);

      /**
       * @summary Is Model Name Duplicated
       *
       * @param request ModelNameIsDuplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelNameIsDuplicationResponse
       */
      Models::ModelNameIsDuplicationResponse modelNameIsDuplicationWithOptions(const Models::ModelNameIsDuplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Is Model Name Duplicated
       *
       * @param request ModelNameIsDuplicationRequest
       * @return ModelNameIsDuplicationResponse
       */
      Models::ModelNameIsDuplicationResponse modelNameIsDuplication(const Models::ModelNameIsDuplicationRequest &request);

      /**
       * @summary Template Download
       *
       * @param request ModelSampleDownloadRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelSampleDownloadResponse
       */
      Models::ModelSampleDownloadResponse modelSampleDownloadWithOptions(const Models::ModelSampleDownloadRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Template Download
       *
       * @param request ModelSampleDownloadRequest
       * @return ModelSampleDownloadResponse
       */
      Models::ModelSampleDownloadResponse modelSampleDownload(const Models::ModelSampleDownloadRequest &request);

      /**
       * @summary Update memo.
       *
       * @param request ModifyAppKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAppKeyResponse
       */
      Models::ModifyAppKeyResponse modifyAppKeyWithOptions(const Models::ModifyAppKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update memo.
       *
       * @param request ModifyAppKeyRequest
       * @return ModifyAppKeyResponse
       */
      Models::ModifyAppKeyResponse modifyAppKey(const Models::ModifyAppKeyRequest &request);

      /**
       * @summary Edits a cumulative variable.
       *
       * @param request ModifyCustVariableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCustVariableResponse
       */
      Models::ModifyCustVariableResponse modifyCustVariableWithOptions(const Models::ModifyCustVariableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Edits a cumulative variable.
       *
       * @param request ModifyCustVariableRequest
       * @return ModifyCustVariableResponse
       */
      Models::ModifyCustVariableResponse modifyCustVariable(const Models::ModifyCustVariableRequest &request);

      /**
       * @summary Edits an event.
       *
       * @param request ModifyEventRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyEventResponse
       */
      Models::ModifyEventResponse modifyEventWithOptions(const Models::ModifyEventRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Edits an event.
       *
       * @param request ModifyEventRequest
       * @return ModifyEventResponse
       */
      Models::ModifyEventResponse modifyEvent(const Models::ModifyEventRequest &request);

      /**
       * @summary Modifies the status of an event.
       *
       * @param request ModifyEventStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyEventStatusResponse
       */
      Models::ModifyEventStatusResponse modifyEventStatusWithOptions(const Models::ModifyEventStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the status of an event.
       *
       * @param request ModifyEventStatusRequest
       * @return ModifyEventStatusResponse
       */
      Models::ModifyEventStatusResponse modifyEventStatus(const Models::ModifyEventStatusRequest &request);

      /**
       * @summary Edits a custom variable.
       *
       * @param request ModifyExpressionVariableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyExpressionVariableResponse
       */
      Models::ModifyExpressionVariableResponse modifyExpressionVariableWithOptions(const Models::ModifyExpressionVariableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Edits a custom variable.
       *
       * @param request ModifyExpressionVariableRequest
       * @return ModifyExpressionVariableResponse
       */
      Models::ModifyExpressionVariableResponse modifyExpressionVariable(const Models::ModifyExpressionVariableRequest &request);

      /**
       * @summary Modifies a field.
       *
       * @param request ModifyFieldRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyFieldResponse
       */
      Models::ModifyFieldResponse modifyFieldWithOptions(const Models::ModifyFieldRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a field.
       *
       * @param request ModifyFieldRequest
       * @return ModifyFieldResponse
       */
      Models::ModifyFieldResponse modifyField(const Models::ModifyFieldRequest &request);

      /**
       * @summary Modifies the priority of a policy.
       *
       * @param request ModifyRulePriorityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRulePriorityResponse
       */
      Models::ModifyRulePriorityResponse modifyRulePriorityWithOptions(const Models::ModifyRulePriorityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the priority of a policy.
       *
       * @param request ModifyRulePriorityRequest
       * @return ModifyRulePriorityResponse
       */
      Models::ModifyRulePriorityResponse modifyRulePriority(const Models::ModifyRulePriorityRequest &request);

      /**
       * @summary Changes the approval status of a policy version.
       *
       * @param request ModifyRuleStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRuleStatusResponse
       */
      Models::ModifyRuleStatusResponse modifyRuleStatusWithOptions(const Models::ModifyRuleStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the approval status of a policy version.
       *
       * @param request ModifyRuleStatusRequest
       * @return ModifyRuleStatusResponse
       */
      Models::ModifyRuleStatusResponse modifyRuleStatus(const Models::ModifyRuleStatusRequest &request);

      /**
       * @summary Activates a service.
       *
       * @param request OpenConsoleSlsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenConsoleSlsResponse
       */
      Models::OpenConsoleSlsResponse openConsoleSlsWithOptions(const Models::OpenConsoleSlsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Activates a service.
       *
       * @param request OpenConsoleSlsRequest
       * @return OpenConsoleSlsResponse
       */
      Models::OpenConsoleSlsResponse openConsoleSls(const Models::OpenConsoleSlsRequest &request);

      /**
       * @summary Manages favorites.
       *
       * @param request OperateFavoriteVariableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateFavoriteVariableResponse
       */
      Models::OperateFavoriteVariableResponse operateFavoriteVariableWithOptions(const Models::OperateFavoriteVariableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Manages favorites.
       *
       * @param request OperateFavoriteVariableRequest
       * @return OperateFavoriteVariableResponse
       */
      Models::OperateFavoriteVariableResponse operateFavoriteVariable(const Models::OperateFavoriteVariableRequest &request);

      /**
       * @summary Performs a precondition check.
       *
       * @param request PermissionCheckRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PermissionCheckResponse
       */
      Models::PermissionCheckResponse permissionCheckWithOptions(const Models::PermissionCheckRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a precondition check.
       *
       * @param request PermissionCheckRequest
       * @return PermissionCheckResponse
       */
      Models::PermissionCheckResponse permissionCheck(const Models::PermissionCheckRequest &request);

      /**
       * @summary createTask
       *
       * @param request PocCreateTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PocCreateTaskResponse
       */
      Models::PocCreateTaskResponse pocCreateTaskWithOptions(const Models::PocCreateTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary createTask
       *
       * @param request PocCreateTaskRequest
       * @return PocCreateTaskResponse
       */
      Models::PocCreateTaskResponse pocCreateTask(const Models::PocCreateTaskRequest &request);

      /**
       * @summary PocGetDownloadUrl
       *
       * @param request PocGetDownloadUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PocGetDownloadUrlResponse
       */
      Models::PocGetDownloadUrlResponse pocGetDownloadUrlWithOptions(const Models::PocGetDownloadUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary PocGetDownloadUrl
       *
       * @param request PocGetDownloadUrlRequest
       * @return PocGetDownloadUrlResponse
       */
      Models::PocGetDownloadUrlResponse pocGetDownloadUrl(const Models::PocGetDownloadUrlRequest &request);

      /**
       * @summary getToken
       *
       * @param request PocGetTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PocGetTokenResponse
       */
      Models::PocGetTokenResponse pocGetTokenWithOptions(const Models::PocGetTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary getToken
       *
       * @param request PocGetTokenRequest
       * @return PocGetTokenResponse
       */
      Models::PocGetTokenResponse pocGetToken(const Models::PocGetTokenRequest &request);

      /**
       * @summary sendData
       *
       * @param request PocSendDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PocSendDataResponse
       */
      Models::PocSendDataResponse pocSendDataWithOptions(const Models::PocSendDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary sendData
       *
       * @param request PocSendDataRequest
       * @return PocSendDataResponse
       */
      Models::PocSendDataResponse pocSendData(const Models::PocSendDataRequest &request);

      /**
       * @summary Queries the details of a whitebox implementation policy.
       *
       * @param request QueryAuthRuleDetailByRuleIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryAuthRuleDetailByRuleIdResponse
       */
      Models::QueryAuthRuleDetailByRuleIdResponse queryAuthRuleDetailByRuleIdWithOptions(const Models::QueryAuthRuleDetailByRuleIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a whitebox implementation policy.
       *
       * @param request QueryAuthRuleDetailByRuleIdRequest
       * @return QueryAuthRuleDetailByRuleIdResponse
       */
      Models::QueryAuthRuleDetailByRuleIdResponse queryAuthRuleDetailByRuleId(const Models::QueryAuthRuleDetailByRuleIdRequest &request);

      /**
       * @summary Withdraws a review.
       *
       * @param request RecallRuleAuditRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RecallRuleAuditResponse
       */
      Models::RecallRuleAuditResponse recallRuleAuditWithOptions(const Models::RecallRuleAuditRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Withdraws a review.
       *
       * @param request RecallRuleAuditRequest
       * @return RecallRuleAuditResponse
       */
      Models::RecallRuleAuditResponse recallRuleAudit(const Models::RecallRuleAuditRequest &request);

      /**
       * @summary Deletes an event.
       *
       * @param request RemoveEventRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveEventResponse
       */
      Models::RemoveEventResponse removeEventWithOptions(const Models::RemoveEventRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an event.
       *
       * @param request RemoveEventRequest
       * @return RemoveEventResponse
       */
      Models::RemoveEventResponse removeEvent(const Models::RemoveEventRequest &request);

      /**
       * @summary Download template.
       *
       * @param request SampleFileDownloadRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SampleFileDownloadResponse
       */
      Models::SampleFileDownloadResponse sampleFileDownloadWithOptions(const Models::SampleFileDownloadRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Download template.
       *
       * @param request SampleFileDownloadRequest
       * @return SampleFileDownloadResponse
       */
      Models::SampleFileDownloadResponse sampleFileDownload(const Models::SampleFileDownloadRequest &request);

      /**
       * @summary Saves custom columns.
       *
       * @param request SaveAnalysisColumnRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveAnalysisColumnResponse
       */
      Models::SaveAnalysisColumnResponse saveAnalysisColumnWithOptions(const Models::SaveAnalysisColumnRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Saves custom columns.
       *
       * @param request SaveAnalysisColumnRequest
       * @return SaveAnalysisColumnResponse
       */
      Models::SaveAnalysisColumnResponse saveAnalysisColumn(const Models::SaveAnalysisColumnRequest &request);

      /**
       * @summary The bypass/diversion configuration.
       *
       * @param request SaveByPassOrShuntEventRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveByPassOrShuntEventResponse
       */
      Models::SaveByPassOrShuntEventResponse saveByPassOrShuntEventWithOptions(const Models::SaveByPassOrShuntEventRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The bypass/diversion configuration.
       *
       * @param request SaveByPassOrShuntEventRequest
       * @return SaveByPassOrShuntEventResponse
       */
      Models::SaveByPassOrShuntEventResponse saveByPassOrShuntEvent(const Models::SaveByPassOrShuntEventRequest &request);

      /**
       * @summary Sample Search
       *
       * @param request SearchSampleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchSampleResponse
       */
      Models::SearchSampleResponse searchSampleWithOptions(const Models::SearchSampleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sample Search
       *
       * @param request SearchSampleRequest
       * @return SearchSampleResponse
       */
      Models::SearchSampleResponse searchSample(const Models::SearchSampleRequest &request);

      /**
       * @summary Starts or stops a bypass event.
       *
       * @param request StartOrStopByPassShuntEventRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartOrStopByPassShuntEventResponse
       */
      Models::StartOrStopByPassShuntEventResponse startOrStopByPassShuntEventWithOptions(const Models::StartOrStopByPassShuntEventRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts or stops a bypass event.
       *
       * @param request StartOrStopByPassShuntEventRequest
       * @return StartOrStopByPassShuntEventResponse
       */
      Models::StartOrStopByPassShuntEventResponse startOrStopByPassShuntEvent(const Models::StartOrStopByPassShuntEventRequest &request);

      /**
       * @summary Starts executing a task.
       *
       * @param request StartSimulationTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartSimulationTaskResponse
       */
      Models::StartSimulationTaskResponse startSimulationTaskWithOptions(const Models::StartSimulationTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts executing a task.
       *
       * @param request StartSimulationTaskRequest
       * @return StartSimulationTaskResponse
       */
      Models::StartSimulationTaskResponse startSimulationTask(const Models::StartSimulationTaskRequest &request);

      /**
       * @summary Stops a task.
       *
       * @param request StopSimulationTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopSimulationTaskResponse
       */
      Models::StopSimulationTaskResponse stopSimulationTaskWithOptions(const Models::StopSimulationTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a task.
       *
       * @param request StopSimulationTaskRequest
       * @return StopSimulationTaskResponse
       */
      Models::StopSimulationTaskResponse stopSimulationTask(const Models::StopSimulationTaskRequest &request);

      /**
       * @summary Enables or disables a custom variable.
       *
       * @param request SwitchExpressionVariableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SwitchExpressionVariableResponse
       */
      Models::SwitchExpressionVariableResponse switchExpressionVariableWithOptions(const Models::SwitchExpressionVariableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables a custom variable.
       *
       * @param request SwitchExpressionVariableRequest
       * @return SwitchExpressionVariableResponse
       */
      Models::SwitchExpressionVariableResponse switchExpressionVariable(const Models::SwitchExpressionVariableRequest &request);

      /**
       * @summary Toggles a field on or off.
       *
       * @param request SwitchFieldRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SwitchFieldResponse
       */
      Models::SwitchFieldResponse switchFieldWithOptions(const Models::SwitchFieldRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Toggles a field on or off.
       *
       * @param request SwitchFieldRequest
       * @return SwitchFieldResponse
       */
      Models::SwitchFieldResponse switchField(const Models::SwitchFieldRequest &request);

      /**
       * @summary Queries the enabling or disabling status of a variable.
       *
       * @param request SwitchQueryVariableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SwitchQueryVariableResponse
       */
      Models::SwitchQueryVariableResponse switchQueryVariableWithOptions(const Models::SwitchQueryVariableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the enabling or disabling status of a variable.
       *
       * @param request SwitchQueryVariableRequest
       * @return SwitchQueryVariableResponse
       */
      Models::SwitchQueryVariableResponse switchQueryVariable(const Models::SwitchQueryVariableRequest &request);

      /**
       * @summary Switches an event to online with one click.
       *
       * @param request SwitchToOnlineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SwitchToOnlineResponse
       */
      Models::SwitchToOnlineResponse switchToOnlineWithOptions(const Models::SwitchToOnlineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Switches an event to online with one click.
       *
       * @param request SwitchToOnlineRequest
       * @return SwitchToOnlineResponse
       */
      Models::SwitchToOnlineResponse switchToOnline(const Models::SwitchToOnlineRequest &request);

      /**
       * @summary Enables or disables a cumulative variable.
       *
       * @param request SwitchVariableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SwitchVariableResponse
       */
      Models::SwitchVariableResponse switchVariableWithOptions(const Models::SwitchVariableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables a cumulative variable.
       *
       * @param request SwitchVariableRequest
       * @return SwitchVariableResponse
       */
      Models::SwitchVariableResponse switchVariable(const Models::SwitchVariableRequest &request);

      /**
       * @summary Checks whether a task name is duplicate.
       *
       * @param request TaskNameByUserIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TaskNameByUserIdResponse
       */
      Models::TaskNameByUserIdResponse taskNameByUserIdWithOptions(const Models::TaskNameByUserIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether a task name is duplicate.
       *
       * @param request TaskNameByUserIdRequest
       * @return TaskNameByUserIdResponse
       */
      Models::TaskNameByUserIdResponse taskNameByUserId(const Models::TaskNameByUserIdRequest &request);

      /**
       * @summary Modifies a query condition.
       *
       * @param request UpdateAnalysisConditionFavoriteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAnalysisConditionFavoriteResponse
       */
      Models::UpdateAnalysisConditionFavoriteResponse updateAnalysisConditionFavoriteWithOptions(const Models::UpdateAnalysisConditionFavoriteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a query condition.
       *
       * @param request UpdateAnalysisConditionFavoriteRequest
       * @return UpdateAnalysisConditionFavoriteResponse
       */
      Models::UpdateAnalysisConditionFavoriteResponse updateAnalysisConditionFavorite(const Models::UpdateAnalysisConditionFavoriteRequest &request);

      /**
       * @summary Processes an approval request.
       *
       * @param request UpdateAuditRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAuditResponse
       */
      Models::UpdateAuditResponse updateAuditWithOptions(const Models::UpdateAuditRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Processes an approval request.
       *
       * @param request UpdateAuditRequest
       * @return UpdateAuditResponse
       */
      Models::UpdateAuditResponse updateAudit(const Models::UpdateAuditRequest &request);

      /**
       * @summary Modifies an authorization policy.
       *
       * @param request UpdateAuthRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAuthRuleResponse
       */
      Models::UpdateAuthRuleResponse updateAuthRuleWithOptions(const Models::UpdateAuthRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an authorization policy.
       *
       * @param request UpdateAuthRuleRequest
       * @return UpdateAuthRuleResponse
       */
      Models::UpdateAuthRuleResponse updateAuthRule(const Models::UpdateAuthRuleRequest &request);

      /**
       * @summary Edits a bypass event.
       *
       * @param request UpdateByPassShuntEventRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateByPassShuntEventResponse
       */
      Models::UpdateByPassShuntEventResponse updateByPassShuntEventWithOptions(const Models::UpdateByPassShuntEventRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Edits a bypass event.
       *
       * @param request UpdateByPassShuntEventRequest
       * @return UpdateByPassShuntEventResponse
       */
      Models::UpdateByPassShuntEventResponse updateByPassShuntEvent(const Models::UpdateByPassShuntEventRequest &request);

      /**
       * @summary Modifies a data source.
       *
       * @param request UpdateDataSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDataSourceResponse
       */
      Models::UpdateDataSourceResponse updateDataSourceWithOptions(const Models::UpdateDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a data source.
       *
       * @param request UpdateDataSourceRequest
       * @return UpdateDataSourceResponse
       */
      Models::UpdateDataSourceResponse updateDataSource(const Models::UpdateDataSourceRequest &request);

      /**
       * @summary Modifies a custom query variable.
       *
       * @param request UpdateQueryVariableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateQueryVariableResponse
       */
      Models::UpdateQueryVariableResponse updateQueryVariableWithOptions(const Models::UpdateQueryVariableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a custom query variable.
       *
       * @param request UpdateQueryVariableRequest
       * @return UpdateQueryVariableResponse
       */
      Models::UpdateQueryVariableResponse updateQueryVariable(const Models::UpdateQueryVariableRequest &request);

      /**
       * @summary Updates a policy.
       *
       * @param request UpdateRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRuleResponse
       */
      Models::UpdateRuleResponse updateRuleWithOptions(const Models::UpdateRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a policy.
       *
       * @param request UpdateRuleRequest
       * @return UpdateRuleResponse
       */
      Models::UpdateRuleResponse updateRule(const Models::UpdateRuleRequest &request);

      /**
       * @summary Updates the basic information of a policy.
       *
       * @param request UpdateRuleBaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRuleBaseResponse
       */
      Models::UpdateRuleBaseResponse updateRuleBaseWithOptions(const Models::UpdateRuleBaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the basic information of a policy.
       *
       * @param request UpdateRuleBaseRequest
       * @return UpdateRuleBaseResponse
       */
      Models::UpdateRuleBaseResponse updateRuleBase(const Models::UpdateRuleBaseRequest &request);

      /**
       * @summary Modifies samples in batches.
       *
       * @param request UpdateSampleBatchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSampleBatchResponse
       */
      Models::UpdateSampleBatchResponse updateSampleBatchWithOptions(const Models::UpdateSampleBatchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies samples in batches.
       *
       * @param request UpdateSampleBatchRequest
       * @return UpdateSampleBatchResponse
       */
      Models::UpdateSampleBatchResponse updateSampleBatch(const Models::UpdateSampleBatchRequest &request);

      /**
       * @summary Sample Inspection
       *
       * @param request UploadFileCheckRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadFileCheckResponse
       */
      Models::UploadFileCheckResponse uploadFileCheckWithOptions(const Models::UploadFileCheckRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sample Inspection
       *
       * @param request UploadFileCheckRequest
       * @return UploadFileCheckResponse
       */
      Models::UploadFileCheckResponse uploadFileCheck(const Models::UploadFileCheckRequest &request);

      /**
       * @summary Upload and validate the sample file for the customer.
       *
       * @param request UploadForeignSampleFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadForeignSampleFileResponse
       */
      Models::UploadForeignSampleFileResponse uploadForeignSampleFileWithOptions(const Models::UploadForeignSampleFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upload and validate the sample file for the customer.
       *
       * @param request UploadForeignSampleFileRequest
       * @return UploadForeignSampleFileResponse
       */
      Models::UploadForeignSampleFileResponse uploadForeignSampleFile(const Models::UploadForeignSampleFileRequest &request);

      Models::UploadForeignSampleFileResponse uploadForeignSampleFileAdvance(const Models::UploadForeignSampleFileAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upload and validate the sample file
       *
       * @param request UploadSampleFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadSampleFileResponse
       */
      Models::UploadSampleFileResponse uploadSampleFileWithOptions(const Models::UploadSampleFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upload and validate the sample file
       *
       * @param request UploadSampleFileRequest
       * @return UploadSampleFileResponse
       */
      Models::UploadSampleFileResponse uploadSampleFile(const Models::UploadSampleFileRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
