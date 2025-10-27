// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_FNF20190315_HPP_
#define ALIBABACLOUD_FNF20190315_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Fnf20190315Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Fnf20190315.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Fnf20190315
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Creates a flow.
       *
       * @description ## [](#)Usage notes
       * *   The number of flows that each user can create is restricted by resources. For more information, see [Limits](https://help.aliyun.com/document_detail/122093.html). If you want to create more flows, submit a ticket.
       * *   At the user level, flows are distinguished by name. The name of a flow within one account must be unique.
       *
       * @param tmpReq CreateFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFlowResponse
       */
      Models::CreateFlowResponse createFlowWithOptions(const Models::CreateFlowRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a flow.
       *
       * @description ## [](#)Usage notes
       * *   The number of flows that each user can create is restricted by resources. For more information, see [Limits](https://help.aliyun.com/document_detail/122093.html). If you want to create more flows, submit a ticket.
       * *   At the user level, flows are distinguished by name. The name of a flow within one account must be unique.
       *
       * @param request CreateFlowRequest
       * @return CreateFlowResponse
       */
      Models::CreateFlowResponse createFlow(const Models::CreateFlowRequest &request);

      /**
       * @summary 创建流程版本别名
       *
       * @param tmpReq CreateFlowAliasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFlowAliasResponse
       */
      Models::CreateFlowAliasResponse createFlowAliasWithOptions(const Models::CreateFlowAliasRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建流程版本别名
       *
       * @param request CreateFlowAliasRequest
       * @return CreateFlowAliasResponse
       */
      Models::CreateFlowAliasResponse createFlowAlias(const Models::CreateFlowAliasRequest &request);

      /**
       * @summary Creates a time-based schedule.
       *
       * @param request CreateScheduleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateScheduleResponse
       */
      Models::CreateScheduleResponse createScheduleWithOptions(const Models::CreateScheduleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a time-based schedule.
       *
       * @param request CreateScheduleRequest
       * @return CreateScheduleResponse
       */
      Models::CreateScheduleResponse createSchedule(const Models::CreateScheduleRequest &request);

      /**
       * @summary Deletes an existing flow.
       *
       * @description ## [](#)Usage notes
       * A delete operation is asynchronous. If this operation is successful, the system returns a successful response. If an existing flow is pending to be deleted, a new flow of the same name will not be affected by the existing one. After you delete a flow, you cannot query its historical executions. All executions in progress will stop after their most recent steps are complete.
       *
       * @param request DeleteFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFlowResponse
       */
      Models::DeleteFlowResponse deleteFlowWithOptions(const Models::DeleteFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an existing flow.
       *
       * @description ## [](#)Usage notes
       * A delete operation is asynchronous. If this operation is successful, the system returns a successful response. If an existing flow is pending to be deleted, a new flow of the same name will not be affected by the existing one. After you delete a flow, you cannot query its historical executions. All executions in progress will stop after their most recent steps are complete.
       *
       * @param request DeleteFlowRequest
       * @return DeleteFlowResponse
       */
      Models::DeleteFlowResponse deleteFlow(const Models::DeleteFlowRequest &request);

      /**
       * @summary 删除流程别名
       *
       * @param request DeleteFlowAliasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFlowAliasResponse
       */
      Models::DeleteFlowAliasResponse deleteFlowAliasWithOptions(const Models::DeleteFlowAliasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除流程别名
       *
       * @param request DeleteFlowAliasRequest
       * @return DeleteFlowAliasResponse
       */
      Models::DeleteFlowAliasResponse deleteFlowAlias(const Models::DeleteFlowAliasRequest &request);

      /**
       * @summary 删除流程版本
       *
       * @param request DeleteFlowVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFlowVersionResponse
       */
      Models::DeleteFlowVersionResponse deleteFlowVersionWithOptions(const Models::DeleteFlowVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除流程版本
       *
       * @param request DeleteFlowVersionRequest
       * @return DeleteFlowVersionResponse
       */
      Models::DeleteFlowVersionResponse deleteFlowVersion(const Models::DeleteFlowVersionRequest &request);

      /**
       * @summary Deletes a time-based scheduling task.
       *
       * @param request DeleteScheduleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteScheduleResponse
       */
      Models::DeleteScheduleResponse deleteScheduleWithOptions(const Models::DeleteScheduleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a time-based scheduling task.
       *
       * @param request DeleteScheduleRequest
       * @return DeleteScheduleResponse
       */
      Models::DeleteScheduleResponse deleteSchedule(const Models::DeleteScheduleRequest &request);

      /**
       * @summary Queries an execution in a flow. The long polling mode is supported. The maximum waiting period for long polling depends on the value of the WaitTimeSeconds parameter.
       *
       * @param request DescribeExecutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeExecutionResponse
       */
      Models::DescribeExecutionResponse describeExecutionWithOptions(const Models::DescribeExecutionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries an execution in a flow. The long polling mode is supported. The maximum waiting period for long polling depends on the value of the WaitTimeSeconds parameter.
       *
       * @param request DescribeExecutionRequest
       * @return DescribeExecutionResponse
       */
      Models::DescribeExecutionResponse describeExecution(const Models::DescribeExecutionRequest &request);

      /**
       * @summary Queries the information about a flow.
       *
       * @param request DescribeFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFlowResponse
       */
      Models::DescribeFlowResponse describeFlowWithOptions(const Models::DescribeFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a flow.
       *
       * @param request DescribeFlowRequest
       * @return DescribeFlowResponse
       */
      Models::DescribeFlowResponse describeFlow(const Models::DescribeFlowRequest &request);

      /**
       * @summary 查询流程版本别名详情
       *
       * @param request DescribeFlowAliasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFlowAliasResponse
       */
      Models::DescribeFlowAliasResponse describeFlowAliasWithOptions(const Models::DescribeFlowAliasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询流程版本别名详情
       *
       * @param request DescribeFlowAliasRequest
       * @return DescribeFlowAliasResponse
       */
      Models::DescribeFlowAliasResponse describeFlowAlias(const Models::DescribeFlowAliasRequest &request);

      /**
       * @summary 查询 MapRun 详情
       *
       * @param request DescribeMapRunRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMapRunResponse
       */
      Models::DescribeMapRunResponse describeMapRunWithOptions(const Models::DescribeMapRunRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询 MapRun 详情
       *
       * @param request DescribeMapRunRequest
       * @return DescribeMapRunResponse
       */
      Models::DescribeMapRunResponse describeMapRun(const Models::DescribeMapRunRequest &request);

      /**
       * @summary 查询地域信息列表
       *
       * @param request DescribeRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Models::DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询地域信息列表
       *
       * @param request DescribeRegionsRequest
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions(const Models::DescribeRegionsRequest &request);

      /**
       * @summary Queries the detailed information about a time-based schedule.
       *
       * @param request DescribeScheduleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeScheduleResponse
       */
      Models::DescribeScheduleResponse describeScheduleWithOptions(const Models::DescribeScheduleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the detailed information about a time-based schedule.
       *
       * @param request DescribeScheduleRequest
       * @return DescribeScheduleResponse
       */
      Models::DescribeScheduleResponse describeSchedule(const Models::DescribeScheduleRequest &request);

      /**
       * @summary Queries the details about each step in an execution process.
       *
       * @param request GetExecutionHistoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetExecutionHistoryResponse
       */
      Models::GetExecutionHistoryResponse getExecutionHistoryWithOptions(const Models::GetExecutionHistoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details about each step in an execution process.
       *
       * @param request GetExecutionHistoryRequest
       * @return GetExecutionHistoryResponse
       */
      Models::GetExecutionHistoryResponse getExecutionHistory(const Models::GetExecutionHistoryRequest &request);

      /**
       * @summary Queries all historical executions of a flow.
       *
       * @description ## [](#)Usage notes
       * After you delete a flow, you cannot query its historical executions, even if you create a flow of the same name.
       *
       * @param request ListExecutionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListExecutionsResponse
       */
      Models::ListExecutionsResponse listExecutionsWithOptions(const Models::ListExecutionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all historical executions of a flow.
       *
       * @description ## [](#)Usage notes
       * After you delete a flow, you cannot query its historical executions, even if you create a flow of the same name.
       *
       * @param request ListExecutionsRequest
       * @return ListExecutionsResponse
       */
      Models::ListExecutionsResponse listExecutions(const Models::ListExecutionsRequest &request);

      /**
       * @summary 查询流程版本别名列表
       *
       * @param request ListFlowAliasesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFlowAliasesResponse
       */
      Models::ListFlowAliasesResponse listFlowAliasesWithOptions(const Models::ListFlowAliasesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询流程版本别名列表
       *
       * @param request ListFlowAliasesRequest
       * @return ListFlowAliasesResponse
       */
      Models::ListFlowAliasesResponse listFlowAliases(const Models::ListFlowAliasesRequest &request);

      /**
       * @summary 查询流程版本列表
       *
       * @param request ListFlowVersionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFlowVersionsResponse
       */
      Models::ListFlowVersionsResponse listFlowVersionsWithOptions(const Models::ListFlowVersionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询流程版本列表
       *
       * @param request ListFlowVersionsRequest
       * @return ListFlowVersionsResponse
       */
      Models::ListFlowVersionsResponse listFlowVersions(const Models::ListFlowVersionsRequest &request);

      /**
       * @summary Queries a list of flows.
       *
       * @param request ListFlowsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFlowsResponse
       */
      Models::ListFlowsResponse listFlowsWithOptions(const Models::ListFlowsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of flows.
       *
       * @param request ListFlowsRequest
       * @return ListFlowsResponse
       */
      Models::ListFlowsResponse listFlows(const Models::ListFlowsRequest &request);

      /**
       * @summary Queries time-based schedules in a flow.
       *
       * @param request ListSchedulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSchedulesResponse
       */
      Models::ListSchedulesResponse listSchedulesWithOptions(const Models::ListSchedulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries time-based schedules in a flow.
       *
       * @param request ListSchedulesRequest
       * @return ListSchedulesResponse
       */
      Models::ListSchedulesResponse listSchedules(const Models::ListSchedulesRequest &request);

      /**
       * @summary 发布流程版本
       *
       * @param request PublishFlowVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishFlowVersionResponse
       */
      Models::PublishFlowVersionResponse publishFlowVersionWithOptions(const Models::PublishFlowVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 发布流程版本
       *
       * @param request PublishFlowVersionRequest
       * @return PublishFlowVersionResponse
       */
      Models::PublishFlowVersionResponse publishFlowVersion(const Models::PublishFlowVersionRequest &request);

      /**
       * @summary Reports a failed task.
       *
       * @description ## [](#)Usage notes
       * In the previous service (Serverless Workflow), the task step that ReportTaskFailed is used to call back `pattern: waitForCallback` indicates that the current task fails to be executed.
       * In the new service (CloudFlow), the task step that ReportTaskFailed is used to call back `TaskMode: WaitForCustomCallback` indicates that the current task fails to be executed.
       *
       * @param request ReportTaskFailedRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReportTaskFailedResponse
       */
      Models::ReportTaskFailedResponse reportTaskFailedWithOptions(const Models::ReportTaskFailedRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Reports a failed task.
       *
       * @description ## [](#)Usage notes
       * In the previous service (Serverless Workflow), the task step that ReportTaskFailed is used to call back `pattern: waitForCallback` indicates that the current task fails to be executed.
       * In the new service (CloudFlow), the task step that ReportTaskFailed is used to call back `TaskMode: WaitForCustomCallback` indicates that the current task fails to be executed.
       *
       * @param request ReportTaskFailedRequest
       * @return ReportTaskFailedResponse
       */
      Models::ReportTaskFailedResponse reportTaskFailed(const Models::ReportTaskFailedRequest &request);

      /**
       * @summary Reports a successful task.
       *
       * @description ## [](#)Usage notes
       * In the previous service (Serverless Workflow), the task step that ReportTaskSucceeded is used to call back pattern: waitForCallback indicates that the current task is successfully executed.
       * In the new service (CloudFlow), the task step that ReportTaskSucceeded is used to call back TaskMode: WaitForCustomCallback indicates that the current task is successfully executed.
       *
       * @param request ReportTaskSucceededRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReportTaskSucceededResponse
       */
      Models::ReportTaskSucceededResponse reportTaskSucceededWithOptions(const Models::ReportTaskSucceededRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Reports a successful task.
       *
       * @description ## [](#)Usage notes
       * In the previous service (Serverless Workflow), the task step that ReportTaskSucceeded is used to call back pattern: waitForCallback indicates that the current task is successfully executed.
       * In the new service (CloudFlow), the task step that ReportTaskSucceeded is used to call back TaskMode: WaitForCustomCallback indicates that the current task is successfully executed.
       *
       * @param request ReportTaskSucceededRequest
       * @return ReportTaskSucceededResponse
       */
      Models::ReportTaskSucceededResponse reportTaskSucceeded(const Models::ReportTaskSucceededRequest &request);

      /**
       * @summary Starts the execution of a workflow.
       *
       * @description ## [](#)Usage notes
       * *   The flow is created. A flow only in standard mode is supported.
       * *   If you do not specify an execution, the system automatically generates an execution and starts the execution.
       * *   If an ongoing execution has the same name as that of the execution to be started, the system directly returns the ongoing execution.
       * *   If the ongoing execution with the same name has ended (succeeded or failed), `ExecutionAlreadyExists` is returned.
       * *   If no execution with the same name exists, the system starts a new execution.
       *
       * @param request StartExecutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartExecutionResponse
       */
      Models::StartExecutionResponse startExecutionWithOptions(const Models::StartExecutionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts the execution of a workflow.
       *
       * @description ## [](#)Usage notes
       * *   The flow is created. A flow only in standard mode is supported.
       * *   If you do not specify an execution, the system automatically generates an execution and starts the execution.
       * *   If an ongoing execution has the same name as that of the execution to be started, the system directly returns the ongoing execution.
       * *   If the ongoing execution with the same name has ended (succeeded or failed), `ExecutionAlreadyExists` is returned.
       * *   If no execution with the same name exists, the system starts a new execution.
       *
       * @param request StartExecutionRequest
       * @return StartExecutionResponse
       */
      Models::StartExecutionResponse startExecution(const Models::StartExecutionRequest &request);

      /**
       * @summary Synchronously starts an execution in a flow.
       *
       * @description *   Only flows of the express execution mode are supported.
       *
       * @param request StartSyncExecutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartSyncExecutionResponse
       */
      Models::StartSyncExecutionResponse startSyncExecutionWithOptions(const Models::StartSyncExecutionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Synchronously starts an execution in a flow.
       *
       * @description *   Only flows of the express execution mode are supported.
       *
       * @param request StartSyncExecutionRequest
       * @return StartSyncExecutionResponse
       */
      Models::StartSyncExecutionResponse startSyncExecution(const Models::StartSyncExecutionRequest &request);

      /**
       * @summary Stops an execution that is in progress in a flow.
       *
       * @description ## [](#)Usage notes
       * The flow must be in progress.
       *
       * @param request StopExecutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopExecutionResponse
       */
      Models::StopExecutionResponse stopExecutionWithOptions(const Models::StopExecutionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops an execution that is in progress in a flow.
       *
       * @description ## [](#)Usage notes
       * The flow must be in progress.
       *
       * @param request StopExecutionRequest
       * @return StopExecutionResponse
       */
      Models::StopExecutionResponse stopExecution(const Models::StopExecutionRequest &request);

      /**
       * @summary Updates a flow.
       *
       * @param tmpReq UpdateFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFlowResponse
       */
      Models::UpdateFlowResponse updateFlowWithOptions(const Models::UpdateFlowRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a flow.
       *
       * @param request UpdateFlowRequest
       * @return UpdateFlowResponse
       */
      Models::UpdateFlowResponse updateFlow(const Models::UpdateFlowRequest &request);

      /**
       * @summary 更新流程版本别名配置
       *
       * @param tmpReq UpdateFlowAliasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFlowAliasResponse
       */
      Models::UpdateFlowAliasResponse updateFlowAliasWithOptions(const Models::UpdateFlowAliasRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新流程版本别名配置
       *
       * @param request UpdateFlowAliasRequest
       * @return UpdateFlowAliasResponse
       */
      Models::UpdateFlowAliasResponse updateFlowAlias(const Models::UpdateFlowAliasRequest &request);

      /**
       * @summary 更新 MapRun 配置
       *
       * @param request UpdateMapRunRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMapRunResponse
       */
      Models::UpdateMapRunResponse updateMapRunWithOptions(const Models::UpdateMapRunRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新 MapRun 配置
       *
       * @param request UpdateMapRunRequest
       * @return UpdateMapRunResponse
       */
      Models::UpdateMapRunResponse updateMapRun(const Models::UpdateMapRunRequest &request);

      /**
       * @summary Updates a time-based schedule.
       *
       * @param request UpdateScheduleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateScheduleResponse
       */
      Models::UpdateScheduleResponse updateScheduleWithOptions(const Models::UpdateScheduleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a time-based schedule.
       *
       * @param request UpdateScheduleRequest
       * @return UpdateScheduleResponse
       */
      Models::UpdateScheduleResponse updateSchedule(const Models::UpdateScheduleRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Fnf20190315
#endif
