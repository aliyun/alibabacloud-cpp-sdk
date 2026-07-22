// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_SCHEDULERX320240624_HPP_
#define ALIBABACLOUD_SCHEDULERX320240624_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/SchedulerX320240624Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/SchedulerX320240624.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Creates an app.
       *
       * @param request CreateAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAppResponse
       */
      Models::CreateAppResponse createAppWithOptions(const Models::CreateAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an app.
       *
       * @param request CreateAppRequest
       * @return CreateAppResponse
       */
      Models::CreateAppResponse createApp(const Models::CreateAppRequest &request);

      /**
       * @summary Creates a custom calendar.
       *
       * @description Creates a custom calendar for SchedulerX.
       *
       * @param request CreateCalendarRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCalendarResponse
       */
      Models::CreateCalendarResponse createCalendarWithOptions(const Models::CreateCalendarRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom calendar.
       *
       * @description Creates a custom calendar for SchedulerX.
       *
       * @param request CreateCalendarRequest
       * @return CreateCalendarResponse
       */
      Models::CreateCalendarResponse createCalendar(const Models::CreateCalendarRequest &request);

      /**
       * @summary Creates a cluster.
       *
       * @param tmpReq CreateClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateClusterResponse
       */
      Models::CreateClusterResponse createClusterWithOptions(const Models::CreateClusterRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a cluster.
       *
       * @param request CreateClusterRequest
       * @return CreateClusterResponse
       */
      Models::CreateClusterResponse createCluster(const Models::CreateClusterRequest &request);

      /**
       * @summary 创建通知联系人
       *
       * @description 创建自定义联系人
       *
       * @param request CreateContactRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateContactResponse
       */
      Models::CreateContactResponse createContactWithOptions(const Models::CreateContactRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建通知联系人
       *
       * @description 创建自定义联系人
       *
       * @param request CreateContactRequest
       * @return CreateContactResponse
       */
      Models::CreateContactResponse createContact(const Models::CreateContactRequest &request);

      /**
       * @summary Create a data source
       *
       * @param request CreateDatasourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDatasourceResponse
       */
      Models::CreateDatasourceResponse createDatasourceWithOptions(const Models::CreateDatasourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a data source
       *
       * @param request CreateDatasourceRequest
       * @return CreateDatasourceResponse
       */
      Models::CreateDatasourceResponse createDatasource(const Models::CreateDatasourceRequest &request);

      /**
       * @summary 添加执行器组
       *
       * @description 手动导入执行器
       *
       * @param request CreateExecutorGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateExecutorGroupResponse
       */
      Models::CreateExecutorGroupResponse createExecutorGroupWithOptions(const Models::CreateExecutorGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 添加执行器组
       *
       * @description 手动导入执行器
       *
       * @param request CreateExecutorGroupRequest
       * @return CreateExecutorGroupResponse
       */
      Models::CreateExecutorGroupResponse createExecutorGroup(const Models::CreateExecutorGroupRequest &request);

      /**
       * @summary Imports one or more executors.
       *
       * @description Imports one or more executors.
       *
       * @param request CreateExecutorsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateExecutorsResponse
       */
      Models::CreateExecutorsResponse createExecutorsWithOptions(const Models::CreateExecutorsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Imports one or more executors.
       *
       * @description Imports one or more executors.
       *
       * @param request CreateExecutorsRequest
       * @return CreateExecutorsResponse
       */
      Models::CreateExecutorsResponse createExecutors(const Models::CreateExecutorsRequest &request);

      /**
       * @summary Creates a node.
       *
       * @param tmpReq CreateJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateJobResponse
       */
      Models::CreateJobResponse createJobWithOptions(const Models::CreateJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a node.
       *
       * @param request CreateJobRequest
       * @return CreateJobResponse
       */
      Models::CreateJobResponse createJob(const Models::CreateJobRequest &request);

      /**
       * @summary Creates a workflow.
       *
       * @param request CreateWorkflowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWorkflowResponse
       */
      Models::CreateWorkflowResponse createWorkflowWithOptions(const Models::CreateWorkflowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a workflow.
       *
       * @param request CreateWorkflowRequest
       * @return CreateWorkflowResponse
       */
      Models::CreateWorkflowResponse createWorkflow(const Models::CreateWorkflowRequest &request);

      /**
       * @summary Deletes an App Group.
       *
       * @param request DeleteAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAppResponse
       */
      Models::DeleteAppResponse deleteAppWithOptions(const Models::DeleteAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an App Group.
       *
       * @param request DeleteAppRequest
       * @return DeleteAppResponse
       */
      Models::DeleteAppResponse deleteApp(const Models::DeleteAppRequest &request);

      /**
       * @summary Deletes the specified calendar.
       *
       * @param request DeleteCalendarRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCalendarResponse
       */
      Models::DeleteCalendarResponse deleteCalendarWithOptions(const Models::DeleteCalendarRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the specified calendar.
       *
       * @param request DeleteCalendarRequest
       * @return DeleteCalendarResponse
       */
      Models::DeleteCalendarResponse deleteCalendar(const Models::DeleteCalendarRequest &request);

      /**
       * @summary Deletes a cluster.
       *
       * @param request DeleteClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteClusterResponse
       */
      Models::DeleteClusterResponse deleteClusterWithOptions(const Models::DeleteClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a cluster.
       *
       * @param request DeleteClusterRequest
       * @return DeleteClusterResponse
       */
      Models::DeleteClusterResponse deleteCluster(const Models::DeleteClusterRequest &request);

      /**
       * @summary 删除通知联系人
       *
       * @description 删除自定义联系人
       *
       * @param request DeleteContactRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteContactResponse
       */
      Models::DeleteContactResponse deleteContactWithOptions(const Models::DeleteContactRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除通知联系人
       *
       * @description 删除自定义联系人
       *
       * @param request DeleteContactRequest
       * @return DeleteContactResponse
       */
      Models::DeleteContactResponse deleteContact(const Models::DeleteContactRequest &request);

      /**
       * @summary Delete data source
       *
       * @param request DeleteDatasourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDatasourceResponse
       */
      Models::DeleteDatasourceResponse deleteDatasourceWithOptions(const Models::DeleteDatasourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete data source
       *
       * @param request DeleteDatasourceRequest
       * @return DeleteDatasourceResponse
       */
      Models::DeleteDatasourceResponse deleteDatasource(const Models::DeleteDatasourceRequest &request);

      /**
       * @summary 添加执行器组
       *
       * @param request DeleteExecutorGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteExecutorGroupResponse
       */
      Models::DeleteExecutorGroupResponse deleteExecutorGroupWithOptions(const Models::DeleteExecutorGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 添加执行器组
       *
       * @param request DeleteExecutorGroupRequest
       * @return DeleteExecutorGroupResponse
       */
      Models::DeleteExecutorGroupResponse deleteExecutorGroup(const Models::DeleteExecutorGroupRequest &request);

      /**
       * @summary Deletes nodes in batches.
       *
       * @param tmpReq DeleteJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteJobsResponse
       */
      Models::DeleteJobsResponse deleteJobsWithOptions(const Models::DeleteJobsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes nodes in batches.
       *
       * @param request DeleteJobsRequest
       * @return DeleteJobsResponse
       */
      Models::DeleteJobsResponse deleteJobs(const Models::DeleteJobsRequest &request);

      /**
       * @summary Deletes a Workflow.
       *
       * @param request DeleteWorkflowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWorkflowResponse
       */
      Models::DeleteWorkflowResponse deleteWorkflowWithOptions(const Models::DeleteWorkflowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a Workflow.
       *
       * @param request DeleteWorkflowRequest
       * @return DeleteWorkflowResponse
       */
      Models::DeleteWorkflowResponse deleteWorkflow(const Models::DeleteWorkflowRequest &request);

      /**
       * @summary Deletes one or more workflows.
       *
       * @param tmpReq DeleteWorkflowsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWorkflowsResponse
       */
      Models::DeleteWorkflowsResponse deleteWorkflowsWithOptions(const Models::DeleteWorkflowsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes one or more workflows.
       *
       * @param request DeleteWorkflowsRequest
       * @return DeleteWorkflowsResponse
       */
      Models::DeleteWorkflowsResponse deleteWorkflows(const Models::DeleteWorkflowsRequest &request);

      /**
       * @summary Exports job information in bulk.
       *
       * @param tmpReq ExportJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportJobsResponse
       */
      Models::ExportJobsResponse exportJobsWithOptions(const Models::ExportJobsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Exports job information in bulk.
       *
       * @param request ExportJobsRequest
       * @return ExportJobsResponse
       */
      Models::ExportJobsResponse exportJobs(const Models::ExportJobsRequest &request);

      /**
       * @summary Exports the definitions of one or more Workflows in JSON format. The exported data includes the basic information, all Nodes, and the Directed Acyclic Graph (DAG) dependencies for each Workflow.
       *
       * @param tmpReq ExportWorkflowsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportWorkflowsResponse
       */
      Models::ExportWorkflowsResponse exportWorkflowsWithOptions(const Models::ExportWorkflowsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Exports the definitions of one or more Workflows in JSON format. The exported data includes the basic information, all Nodes, and the Directed Acyclic Graph (DAG) dependencies for each Workflow.
       *
       * @param request ExportWorkflowsRequest
       * @return ExportWorkflowsResponse
       */
      Models::ExportWorkflowsResponse exportWorkflows(const Models::ExportWorkflowsRequest &request);

      /**
       * @summary Retrieves the details of a specified application.
       *
       * @param request GetAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAppResponse
       */
      Models::GetAppResponse getAppWithOptions(const Models::GetAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a specified application.
       *
       * @param request GetAppRequest
       * @return GetAppResponse
       */
      Models::GetAppResponse getApp(const Models::GetAppRequest &request);

      /**
       * @summary Retrieves the details of a specified calendar.
       *
       * @param request GetCalendarRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCalendarResponse
       */
      Models::GetCalendarResponse getCalendarWithOptions(const Models::GetCalendarRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a specified calendar.
       *
       * @param request GetCalendarRequest
       * @return GetCalendarResponse
       */
      Models::GetCalendarResponse getCalendar(const Models::GetCalendarRequest &request);

      /**
       * @summary Obtains the details of a cluster.
       *
       * @param request GetClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetClusterResponse
       */
      Models::GetClusterResponse getClusterWithOptions(const Models::GetClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the details of a cluster.
       *
       * @param request GetClusterRequest
       * @return GetClusterResponse
       */
      Models::GetClusterResponse getCluster(const Models::GetClusterRequest &request);

      /**
       * @summary Retrieves the information about a specified machine.
       *
       * @param request GetDesigateInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDesigateInfoResponse
       */
      Models::GetDesigateInfoResponse getDesigateInfoWithOptions(const Models::GetDesigateInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the information about a specified machine.
       *
       * @param request GetDesigateInfoRequest
       * @return GetDesigateInfoResponse
       */
      Models::GetDesigateInfoResponse getDesigateInfo(const Models::GetDesigateInfoRequest &request);

      /**
       * @summary Retrieves the configuration for a specified Executor.
       *
       * @description # Add the enhancement plugin
       * Add the Enhancement Plugin to your `pom.xml` file to extend the Executor\\"s capabilities.
       * **Note**: Place this plugin **before** the `xxl-job-core` dependency in the `pom.xml` file.
       * **For more information, see**: [Plugin Version Documentation](https://help.aliyun.com/zh/schedulerx/schedulerx-xxljob/product-overview/plugin-version-description)
       *
       * @param request GetExecutorConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetExecutorConfigResponse
       */
      Models::GetExecutorConfigResponse getExecutorConfigWithOptions(const Models::GetExecutorConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the configuration for a specified Executor.
       *
       * @description # Add the enhancement plugin
       * Add the Enhancement Plugin to your `pom.xml` file to extend the Executor\\"s capabilities.
       * **Note**: Place this plugin **before** the `xxl-job-core` dependency in the `pom.xml` file.
       * **For more information, see**: [Plugin Version Documentation](https://help.aliyun.com/zh/schedulerx/schedulerx-xxljob/product-overview/plugin-version-description)
       *
       * @param request GetExecutorConfigRequest
       * @return GetExecutorConfigResponse
       */
      Models::GetExecutorConfigResponse getExecutorConfig(const Models::GetExecutorConfigRequest &request);

      /**
       * @summary Returns the details of a Task Execution.
       *
       * @param request GetJobExecutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetJobExecutionResponse
       */
      Models::GetJobExecutionResponse getJobExecutionWithOptions(const Models::GetJobExecutionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Returns the details of a Task Execution.
       *
       * @param request GetJobExecutionRequest
       * @return GetJobExecutionResponse
       */
      Models::GetJobExecutionResponse getJobExecution(const Models::GetJobExecutionRequest &request);

      /**
       * @summary Retrieves the execution details of a sharding task.
       *
       * @description # Import the enhanced plugin
       * Add the enhanced plugin to the `pom.xml` file to improve the capabilities of the Executor.
       * **Note**: Make sure this plugin is placed **above** the `xxl-job-core` dependency in the pom file.
       * **For more information, refer to**: [Plugin version description](https://www.alibabacloud.com/help/en/schedulerx/schedulerx-xxljob/product-overview/plugin-version-description)
       *
       * @param request GetJobExecutionProgressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetJobExecutionProgressResponse
       */
      Models::GetJobExecutionProgressResponse getJobExecutionProgressWithOptions(const Models::GetJobExecutionProgressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the execution details of a sharding task.
       *
       * @description # Import the enhanced plugin
       * Add the enhanced plugin to the `pom.xml` file to improve the capabilities of the Executor.
       * **Note**: Make sure this plugin is placed **above** the `xxl-job-core` dependency in the pom file.
       * **For more information, refer to**: [Plugin version description](https://www.alibabacloud.com/help/en/schedulerx/schedulerx-xxljob/product-overview/plugin-version-description)
       *
       * @param request GetJobExecutionProgressRequest
       * @return GetJobExecutionProgressResponse
       */
      Models::GetJobExecutionProgressResponse getJobExecutionProgress(const Models::GetJobExecutionProgressRequest &request);

      /**
       * @summary Retrieves the thread dump for a specific job execution.
       *
       * @description # Add the enhancement plugin
       * Add the Enhancement Plugin to your `pom.xml` file to extend the executor\\"s capabilities.
       * **Note**: Place this plugin **above** the `xxl-job-core` dependency.
       * **For more information, see**: [Plugin versioning documentation](https://help.aliyun.com/zh/schedulerx/schedulerx-xxljob/product-overview/plugin-version-description)
       *
       * @param request GetJobExecutionThreadDumpRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetJobExecutionThreadDumpResponse
       */
      Models::GetJobExecutionThreadDumpResponse getJobExecutionThreadDumpWithOptions(const Models::GetJobExecutionThreadDumpRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the thread dump for a specific job execution.
       *
       * @description # Add the enhancement plugin
       * Add the Enhancement Plugin to your `pom.xml` file to extend the executor\\"s capabilities.
       * **Note**: Place this plugin **above** the `xxl-job-core` dependency.
       * **For more information, see**: [Plugin versioning documentation](https://help.aliyun.com/zh/schedulerx/schedulerx-xxljob/product-overview/plugin-version-description)
       *
       * @param request GetJobExecutionThreadDumpRequest
       * @return GetJobExecutionThreadDumpResponse
       */
      Models::GetJobExecutionThreadDumpResponse getJobExecutionThreadDump(const Models::GetJobExecutionThreadDumpRequest &request);

      /**
       * @summary Retrieves log entries.
       *
       * @param request GetLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLogResponse
       */
      Models::GetLogResponse getLogWithOptions(const Models::GetLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves log entries.
       *
       * @param request GetLogRequest
       * @return GetLogResponse
       */
      Models::GetLogResponse getLog(const Models::GetLogRequest &request);

      /**
       * @summary Query Events.
       *
       * @param request GetLogEventRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLogEventResponse
       */
      Models::GetLogEventResponse getLogEventWithOptions(const Models::GetLogEventRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Events.
       *
       * @param request GetLogEventRequest
       * @return GetLogEventResponse
       */
      Models::GetLogEventResponse getLogEvent(const Models::GetLogEventRequest &request);

      /**
       * @summary 获取分页日志
       *
       * @description # 引入增强插件
       * 在`pom.xml`文件中添加增强插件以提升Executor的能力。
       * **注意**：请确保该插件在pom中放置在`xxl-job-core` 依赖的**上方**。
       * **详细信息请参考**：[插件版本说明文档](https://help.aliyun.com/zh/schedulerx/schedulerx-xxljob/product-overview/plugin-version-description)
       *
       * @param request GetPageLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPageLogResponse
       */
      Models::GetPageLogResponse getPageLogWithOptions(const Models::GetPageLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取分页日志
       *
       * @description # 引入增强插件
       * 在`pom.xml`文件中添加增强插件以提升Executor的能力。
       * **注意**：请确保该插件在pom中放置在`xxl-job-core` 依赖的**上方**。
       * **详细信息请参考**：[插件版本说明文档](https://help.aliyun.com/zh/schedulerx/schedulerx-xxljob/product-overview/plugin-version-description)
       *
       * @param request GetPageLogRequest
       * @return GetPageLogResponse
       */
      Models::GetPageLogResponse getPageLog(const Models::GetPageLogRequest &request);

      /**
       * @summary Retrieves the basic information for a specified workflow.
       *
       * @param request GetWorkflowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWorkflowResponse
       */
      Models::GetWorkflowResponse getWorkflowWithOptions(const Models::GetWorkflowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the basic information for a specified workflow.
       *
       * @param request GetWorkflowRequest
       * @return GetWorkflowResponse
       */
      Models::GetWorkflowResponse getWorkflow(const Models::GetWorkflowRequest &request);

      /**
       * @summary Gets the Directed Acyclic Graph (DAG) of a workflow.
       *
       * @param request GetWorkflowDAGRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWorkflowDAGResponse
       */
      Models::GetWorkflowDAGResponse getWorkflowDAGWithOptions(const Models::GetWorkflowDAGRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets the Directed Acyclic Graph (DAG) of a workflow.
       *
       * @param request GetWorkflowDAGRequest
       * @return GetWorkflowDAGResponse
       */
      Models::GetWorkflowDAGResponse getWorkflowDAG(const Models::GetWorkflowDAGRequest &request);

      /**
       * @summary Gets the DAG for a previous workflow version.
       *
       * @param request GetWorkflowDAGPreviewRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWorkflowDAGPreviewResponse
       */
      Models::GetWorkflowDAGPreviewResponse getWorkflowDAGPreviewWithOptions(const Models::GetWorkflowDAGPreviewRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets the DAG for a previous workflow version.
       *
       * @param request GetWorkflowDAGPreviewRequest
       * @return GetWorkflowDAGPreviewResponse
       */
      Models::GetWorkflowDAGPreviewResponse getWorkflowDAGPreview(const Models::GetWorkflowDAGPreviewRequest &request);

      /**
       * @summary Retrieve the DAG information for a workflow instance.
       *
       * @param request GetWorkflowExecutionDAGRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWorkflowExecutionDAGResponse
       */
      Models::GetWorkflowExecutionDAGResponse getWorkflowExecutionDAGWithOptions(const Models::GetWorkflowExecutionDAGRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve the DAG information for a workflow instance.
       *
       * @param request GetWorkflowExecutionDAGRequest
       * @return GetWorkflowExecutionDAGResponse
       */
      Models::GetWorkflowExecutionDAGResponse getWorkflowExecutionDAG(const Models::GetWorkflowExecutionDAGRequest &request);

      /**
       * @summary 导入agent中的定时任务到scheduler平台（SSE），该接口禁止使用xxljob的clusterid调用，不支持XXLJOB相关集群，这个接口仅限AI任务调度集群使用。
       *
       * @description 导入agent中的定时任务到scheduler平台（SSE），该接口禁止使用xxljob的clusterid调用，不支持XXLJOB相关集群，这个接口仅限AI任务调度集群使用。
       *
       * @param request ImportAgentJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportAgentJobsResponse
       */
      FutureGenerator<Models::ImportAgentJobsResponse> importAgentJobsWithSSE(const Models::ImportAgentJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 导入agent中的定时任务到scheduler平台（SSE），该接口禁止使用xxljob的clusterid调用，不支持XXLJOB相关集群，这个接口仅限AI任务调度集群使用。
       *
       * @description 导入agent中的定时任务到scheduler平台（SSE），该接口禁止使用xxljob的clusterid调用，不支持XXLJOB相关集群，这个接口仅限AI任务调度集群使用。
       *
       * @param request ImportAgentJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportAgentJobsResponse
       */
      Models::ImportAgentJobsResponse importAgentJobsWithOptions(const Models::ImportAgentJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 导入agent中的定时任务到scheduler平台（SSE），该接口禁止使用xxljob的clusterid调用，不支持XXLJOB相关集群，这个接口仅限AI任务调度集群使用。
       *
       * @description 导入agent中的定时任务到scheduler平台（SSE），该接口禁止使用xxljob的clusterid调用，不支持XXLJOB相关集群，这个接口仅限AI任务调度集群使用。
       *
       * @param request ImportAgentJobsRequest
       * @return ImportAgentJobsResponse
       */
      Models::ImportAgentJobsResponse importAgentJobs(const Models::ImportAgentJobsRequest &request);

      /**
       * @summary Imports a calendar.
       *
       * @param request ImportCalendarRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportCalendarResponse
       */
      Models::ImportCalendarResponse importCalendarWithOptions(const Models::ImportCalendarRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Imports a calendar.
       *
       * @param request ImportCalendarRequest
       * @return ImportCalendarResponse
       */
      Models::ImportCalendarResponse importCalendar(const Models::ImportCalendarRequest &request);

      /**
       * @summary Imports jobs in bulk.
       *
       * @param request ImportJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportJobsResponse
       */
      Models::ImportJobsResponse importJobsWithOptions(const Models::ImportJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Imports jobs in bulk.
       *
       * @param request ImportJobsRequest
       * @return ImportJobsResponse
       */
      Models::ImportJobsResponse importJobs(const Models::ImportJobsRequest &request);

      /**
       * @summary Imports one or more workflows.
       *
       * @param request ImportWorkflowsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportWorkflowsResponse
       */
      Models::ImportWorkflowsResponse importWorkflowsWithOptions(const Models::ImportWorkflowsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Imports one or more workflows.
       *
       * @param request ImportWorkflowsRequest
       * @return ImportWorkflowsResponse
       */
      Models::ImportWorkflowsResponse importWorkflows(const Models::ImportWorkflowsRequest &request);

      /**
       * @summary Retrieves alert events.
       *
       * @param request ListAlarmEventRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAlarmEventResponse
       */
      Models::ListAlarmEventResponse listAlarmEventWithOptions(const Models::ListAlarmEventRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves alert events.
       *
       * @param request ListAlarmEventRequest
       * @return ListAlarmEventResponse
       */
      Models::ListAlarmEventResponse listAlarmEvent(const Models::ListAlarmEventRequest &request);

      /**
       * @summary Returns a list of application names.
       *
       * @param request ListAppNamesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAppNamesResponse
       */
      Models::ListAppNamesResponse listAppNamesWithOptions(const Models::ListAppNamesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Returns a list of application names.
       *
       * @param request ListAppNamesRequest
       * @return ListAppNamesResponse
       */
      Models::ListAppNamesResponse listAppNames(const Models::ListAppNamesRequest &request);

      /**
       * @summary Get the list of applications.
       *
       * @param request ListAppsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAppsResponse
       */
      Models::ListAppsResponse listAppsWithOptions(const Models::ListAppsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get the list of applications.
       *
       * @param request ListAppsRequest
       * @return ListAppsResponse
       */
      Models::ListAppsResponse listApps(const Models::ListAppsRequest &request);

      /**
       * @summary Lists all Calendar names.
       *
       * @param request ListCalendarNamesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCalendarNamesResponse
       */
      Models::ListCalendarNamesResponse listCalendarNamesWithOptions(const Models::ListCalendarNamesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists all Calendar names.
       *
       * @param request ListCalendarNamesRequest
       * @return ListCalendarNamesResponse
       */
      Models::ListCalendarNamesResponse listCalendarNames(const Models::ListCalendarNamesRequest &request);

      /**
       * @summary Retrieves a list of calendars.
       *
       * @param request ListCalendarsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCalendarsResponse
       */
      Models::ListCalendarsResponse listCalendarsWithOptions(const Models::ListCalendarsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of calendars.
       *
       * @param request ListCalendarsRequest
       * @return ListCalendarsResponse
       */
      Models::ListCalendarsResponse listCalendars(const Models::ListCalendarsRequest &request);

      /**
       * @summary Queries a list of instances.
       *
       * @param request ListClustersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListClustersResponse
       */
      Models::ListClustersResponse listClustersWithOptions(const Models::ListClustersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of instances.
       *
       * @param request ListClustersRequest
       * @return ListClustersResponse
       */
      Models::ListClustersResponse listClusters(const Models::ListClustersRequest &request);

      /**
       * @summary 查询通知联系人列表
       *
       * @description 查看联系人
       *
       * @param request ListContactsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListContactsResponse
       */
      Models::ListContactsResponse listContactsWithOptions(const Models::ListContactsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询通知联系人列表
       *
       * @description 查看联系人
       *
       * @param request ListContactsRequest
       * @return ListContactsResponse
       */
      Models::ListContactsResponse listContacts(const Models::ListContactsRequest &request);

      /**
       * @summary Retrieve the data source list
       *
       * @param request ListDatasourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDatasourcesResponse
       */
      Models::ListDatasourcesResponse listDatasourcesWithOptions(const Models::ListDatasourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve the data source list
       *
       * @param request ListDatasourcesRequest
       * @return ListDatasourcesResponse
       */
      Models::ListDatasourcesResponse listDatasources(const Models::ListDatasourcesRequest &request);

      /**
       * @summary 获取执行器组列表
       *
       * @description # 引入增强插件
       * 在`pom.xml`文件中添加增强插件以提升Executor的能力。
       * **注意**：请确保该插件在pom中放置在`xxl-job-core` 依赖的**上方**。
       * **详细信息请参考**：[插件版本说明文档](https://help.aliyun.com/zh/schedulerx/schedulerx-xxljob/product-overview/plugin-version-description)
       *
       * @param request ListExecutorGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListExecutorGroupResponse
       */
      Models::ListExecutorGroupResponse listExecutorGroupWithOptions(const Models::ListExecutorGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取执行器组列表
       *
       * @description # 引入增强插件
       * 在`pom.xml`文件中添加增强插件以提升Executor的能力。
       * **注意**：请确保该插件在pom中放置在`xxl-job-core` 依赖的**上方**。
       * **详细信息请参考**：[插件版本说明文档](https://help.aliyun.com/zh/schedulerx/schedulerx-xxljob/product-overview/plugin-version-description)
       *
       * @param request ListExecutorGroupRequest
       * @return ListExecutorGroupResponse
       */
      Models::ListExecutorGroupResponse listExecutorGroup(const Models::ListExecutorGroupRequest &request);

      /**
       * @summary Queries the list of executors.
       *
       * @param request ListExecutorsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListExecutorsResponse
       */
      Models::ListExecutorsResponse listExecutorsWithOptions(const Models::ListExecutorsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of executors.
       *
       * @param request ListExecutorsRequest
       * @return ListExecutorsResponse
       */
      Models::ListExecutorsResponse listExecutors(const Models::ListExecutorsRequest &request);

      /**
       * @summary Retrieves a list of job instances.
       *
       * @param request ListJobExecutionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListJobExecutionsResponse
       */
      Models::ListJobExecutionsResponse listJobExecutionsWithOptions(const Models::ListJobExecutionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of job instances.
       *
       * @param request ListJobExecutionsRequest
       * @return ListJobExecutionsResponse
       */
      Models::ListJobExecutionsResponse listJobExecutions(const Models::ListJobExecutionsRequest &request);

      /**
       * @summary Lists the script history for a job.
       *
       * @param request ListJobScriptHistoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListJobScriptHistoryResponse
       */
      Models::ListJobScriptHistoryResponse listJobScriptHistoryWithOptions(const Models::ListJobScriptHistoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the script history for a job.
       *
       * @param request ListJobScriptHistoryRequest
       * @return ListJobScriptHistoryResponse
       */
      Models::ListJobScriptHistoryResponse listJobScriptHistory(const Models::ListJobScriptHistoryRequest &request);

      /**
       * @summary Retrieves a list of jobs.
       *
       * @param request ListJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListJobsResponse
       */
      Models::ListJobsResponse listJobsWithOptions(const Models::ListJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of jobs.
       *
       * @param request ListJobsRequest
       * @return ListJobsResponse
       */
      Models::ListJobsResponse listJobs(const Models::ListJobsRequest &request);

      /**
       * @summary Lists k8s resources.
       *
       * @description # Add the enhancement plugin
       * Add the enhancement plugin to your `pom.xml` file to extend the Executor\\"s capabilities.
       * **Note**: Place this plugin **above** the `xxl-job-core` dependency in your pom.xml file.
       * **For more information:** [Plugin version release notes](https://help.aliyun.com/zh/schedulerx/schedulerx-xxljob/product-overview/plugin-version-description)
       *
       * @param request ListK8sResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListK8sResourceResponse
       */
      Models::ListK8sResourceResponse listK8sResourceWithOptions(const Models::ListK8sResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists k8s resources.
       *
       * @description # Add the enhancement plugin
       * Add the enhancement plugin to your `pom.xml` file to extend the Executor\\"s capabilities.
       * **Note**: Place this plugin **above** the `xxl-job-core` dependency in your pom.xml file.
       * **For more information:** [Plugin version release notes](https://help.aliyun.com/zh/schedulerx/schedulerx-xxljob/product-overview/plugin-version-description)
       *
       * @param request ListK8sResourceRequest
       * @return ListK8sResourceResponse
       */
      Models::ListK8sResourceResponse listK8sResource(const Models::ListK8sResourceRequest &request);

      /**
       * @summary Retrieves a list of labels for an Executor.
       *
       * @param request ListLablesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLablesResponse
       */
      Models::ListLablesResponse listLablesWithOptions(const Models::ListLablesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of labels for an Executor.
       *
       * @param request ListLablesRequest
       * @return ListLablesResponse
       */
      Models::ListLablesResponse listLables(const Models::ListLablesRequest &request);

      /**
       * @summary Obtain the zone list.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRegionZoneResponse
       */
      Models::ListRegionZoneResponse listRegionZoneWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the zone list.
       *
       * @return ListRegionZoneResponse
       */
      Models::ListRegionZoneResponse listRegionZone();

      /**
       * @summary Obtain the List of all Regions.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRegionsResponse
       */
      Models::ListRegionsResponse listRegionsWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the List of all Regions.
       *
       * @return ListRegionsResponse
       */
      Models::ListRegionsResponse listRegions();

      /**
       * @summary Lists scheduled events.
       *
       * @param request ListScheduleEventRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListScheduleEventResponse
       */
      Models::ListScheduleEventResponse listScheduleEventWithOptions(const Models::ListScheduleEventRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists scheduled events.
       *
       * @param request ListScheduleEventRequest
       * @return ListScheduleEventResponse
       */
      Models::ListScheduleEventResponse listScheduleEvent(const Models::ListScheduleEventRequest &request);

      /**
       * @summary Retrieves the next five scheduled times based on the specified time type and time expression.
       *
       * @param request ListScheduleTimesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListScheduleTimesResponse
       */
      Models::ListScheduleTimesResponse listScheduleTimesWithOptions(const Models::ListScheduleTimesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the next five scheduled times based on the specified time type and time expression.
       *
       * @param request ListScheduleTimesRequest
       * @return ListScheduleTimesResponse
       */
      Models::ListScheduleTimesResponse listScheduleTimes(const Models::ListScheduleTimesRequest &request);

      /**
       * @summary Retrieves a list of workflow instances.
       *
       * @param request ListWorkflowExecutionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWorkflowExecutionsResponse
       */
      Models::ListWorkflowExecutionsResponse listWorkflowExecutionsWithOptions(const Models::ListWorkflowExecutionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of workflow instances.
       *
       * @param request ListWorkflowExecutionsRequest
       * @return ListWorkflowExecutionsResponse
       */
      Models::ListWorkflowExecutionsResponse listWorkflowExecutions(const Models::ListWorkflowExecutionsRequest &request);

      /**
       * @summary Lists the versions for a specified workflow.
       *
       * @param request ListWorkflowVersionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWorkflowVersionsResponse
       */
      Models::ListWorkflowVersionsResponse listWorkflowVersionsWithOptions(const Models::ListWorkflowVersionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the versions for a specified workflow.
       *
       * @param request ListWorkflowVersionsRequest
       * @return ListWorkflowVersionsResponse
       */
      Models::ListWorkflowVersionsResponse listWorkflowVersions(const Models::ListWorkflowVersionsRequest &request);

      /**
       * @summary Lists your workflows.
       *
       * @param request ListWorkflowsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWorkflowsResponse
       */
      Models::ListWorkflowsResponse listWorkflowsWithOptions(const Models::ListWorkflowsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists your workflows.
       *
       * @param request ListWorkflowsRequest
       * @return ListWorkflowsResponse
       */
      Models::ListWorkflowsResponse listWorkflows(const Models::ListWorkflowsRequest &request);

      /**
       * @summary Backfills historical data for a specified workflow.
       *
       * @param request OperateBackfillWorkflowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateBackfillWorkflowResponse
       */
      Models::OperateBackfillWorkflowResponse operateBackfillWorkflowWithOptions(const Models::OperateBackfillWorkflowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Backfills historical data for a specified workflow.
       *
       * @param request OperateBackfillWorkflowRequest
       * @return OperateBackfillWorkflowResponse
       */
      Models::OperateBackfillWorkflowResponse operateBackfillWorkflow(const Models::OperateBackfillWorkflowRequest &request);

      /**
       * @summary Connect to a data source
       *
       * @param request OperateConnectDatasourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateConnectDatasourceResponse
       */
      Models::OperateConnectDatasourceResponse operateConnectDatasourceWithOptions(const Models::OperateConnectDatasourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Connect to a data source
       *
       * @param request OperateConnectDatasourceRequest
       * @return OperateConnectDatasourceResponse
       */
      Models::OperateConnectDatasourceResponse operateConnectDatasource(const Models::OperateConnectDatasourceRequest &request);

      /**
       * @summary Specifies the executor.
       *
       * @param tmpReq OperateDesignateExecutorsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateDesignateExecutorsResponse
       */
      Models::OperateDesignateExecutorsResponse operateDesignateExecutorsWithOptions(const Models::OperateDesignateExecutorsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Specifies the executor.
       *
       * @param request OperateDesignateExecutorsRequest
       * @return OperateDesignateExecutorsResponse
       */
      Models::OperateDesignateExecutorsResponse operateDesignateExecutors(const Models::OperateDesignateExecutorsRequest &request);

      /**
       * @summary Disables nodes in batches.
       *
       * @param tmpReq OperateDisableJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateDisableJobsResponse
       */
      Models::OperateDisableJobsResponse operateDisableJobsWithOptions(const Models::OperateDisableJobsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables nodes in batches.
       *
       * @param request OperateDisableJobsRequest
       * @return OperateDisableJobsResponse
       */
      Models::OperateDisableJobsResponse operateDisableJobs(const Models::OperateDisableJobsRequest &request);

      /**
       * @summary Disables one or more workflows.
       *
       * @description Disables one or more specified workflows.
       *
       * @param tmpReq OperateDisableWorkflowsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateDisableWorkflowsResponse
       */
      Models::OperateDisableWorkflowsResponse operateDisableWorkflowsWithOptions(const Models::OperateDisableWorkflowsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables one or more workflows.
       *
       * @description Disables one or more specified workflows.
       *
       * @param request OperateDisableWorkflowsRequest
       * @return OperateDisableWorkflowsResponse
       */
      Models::OperateDisableWorkflowsResponse operateDisableWorkflows(const Models::OperateDisableWorkflowsRequest &request);

      /**
       * @summary Starts nodes in batches.
       *
       * @param tmpReq OperateEnableJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateEnableJobsResponse
       */
      Models::OperateEnableJobsResponse operateEnableJobsWithOptions(const Models::OperateEnableJobsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts nodes in batches.
       *
       * @param request OperateEnableJobsRequest
       * @return OperateEnableJobsResponse
       */
      Models::OperateEnableJobsResponse operateEnableJobs(const Models::OperateEnableJobsRequest &request);

      /**
       * @summary Enables one or more workflows.
       *
       * @param tmpReq OperateEnableWorkflowsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateEnableWorkflowsResponse
       */
      Models::OperateEnableWorkflowsResponse operateEnableWorkflowsWithOptions(const Models::OperateEnableWorkflowsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables one or more workflows.
       *
       * @param request OperateEnableWorkflowsRequest
       * @return OperateEnableWorkflowsResponse
       */
      Models::OperateEnableWorkflowsResponse operateEnableWorkflows(const Models::OperateEnableWorkflowsRequest &request);

      /**
       * @summary Runs a node once.
       *
       * @param request OperateExecuteJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateExecuteJobResponse
       */
      Models::OperateExecuteJobResponse operateExecuteJobWithOptions(const Models::OperateExecuteJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Runs a node once.
       *
       * @param request OperateExecuteJobRequest
       * @return OperateExecuteJobResponse
       */
      Models::OperateExecuteJobResponse operateExecuteJob(const Models::OperateExecuteJobRequest &request);

      /**
       * @summary Executes a workflow.
       *
       * @description This operation starts a new workflow instance.
       *
       * @param request OperateExecuteWorkflowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateExecuteWorkflowResponse
       */
      Models::OperateExecuteWorkflowResponse operateExecuteWorkflowWithOptions(const Models::OperateExecuteWorkflowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Executes a workflow.
       *
       * @description This operation starts a new workflow instance.
       *
       * @param request OperateExecuteWorkflowRequest
       * @return OperateExecuteWorkflowResponse
       */
      Models::OperateExecuteWorkflowResponse operateExecuteWorkflow(const Models::OperateExecuteWorkflowRequest &request);

      /**
       * @summary Holds a pending job execution.
       *
       * @param request OperateHoldJobExecutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateHoldJobExecutionResponse
       */
      Models::OperateHoldJobExecutionResponse operateHoldJobExecutionWithOptions(const Models::OperateHoldJobExecutionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Holds a pending job execution.
       *
       * @param request OperateHoldJobExecutionRequest
       * @return OperateHoldJobExecutionResponse
       */
      Models::OperateHoldJobExecutionResponse operateHoldJobExecution(const Models::OperateHoldJobExecutionRequest &request);

      /**
       * @summary Puts a Workflow Execution on hold, suspending all its unexecuted nodes.
       *
       * @param request OperateHoldWorkflowExecutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateHoldWorkflowExecutionResponse
       */
      Models::OperateHoldWorkflowExecutionResponse operateHoldWorkflowExecutionWithOptions(const Models::OperateHoldWorkflowExecutionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Puts a Workflow Execution on hold, suspending all its unexecuted nodes.
       *
       * @param request OperateHoldWorkflowExecutionRequest
       * @return OperateHoldWorkflowExecutionResponse
       */
      Models::OperateHoldWorkflowExecutionResponse operateHoldWorkflowExecution(const Models::OperateHoldWorkflowExecutionRequest &request);

      /**
       * @summary Marks a job execution as successful.
       *
       * @param request OperateMarkSuccessJobExecutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateMarkSuccessJobExecutionResponse
       */
      Models::OperateMarkSuccessJobExecutionResponse operateMarkSuccessJobExecutionWithOptions(const Models::OperateMarkSuccessJobExecutionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Marks a job execution as successful.
       *
       * @param request OperateMarkSuccessJobExecutionRequest
       * @return OperateMarkSuccessJobExecutionResponse
       */
      Models::OperateMarkSuccessJobExecutionResponse operateMarkSuccessJobExecution(const Models::OperateMarkSuccessJobExecutionRequest &request);

      /**
       * @summary Marks a workflow execution as successful.
       *
       * @param request OperateMarkSuccessWorkflowExecutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateMarkSuccessWorkflowExecutionResponse
       */
      Models::OperateMarkSuccessWorkflowExecutionResponse operateMarkSuccessWorkflowExecutionWithOptions(const Models::OperateMarkSuccessWorkflowExecutionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Marks a workflow execution as successful.
       *
       * @param request OperateMarkSuccessWorkflowExecutionRequest
       * @return OperateMarkSuccessWorkflowExecutionResponse
       */
      Models::OperateMarkSuccessWorkflowExecutionResponse operateMarkSuccessWorkflowExecution(const Models::OperateMarkSuccessWorkflowExecutionRequest &request);

      /**
       * @summary Reruns historical data for a node.
       *
       * @param request OperateRerunJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateRerunJobResponse
       */
      Models::OperateRerunJobResponse operateRerunJobWithOptions(const Models::OperateRerunJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Reruns historical data for a node.
       *
       * @param request OperateRerunJobRequest
       * @return OperateRerunJobResponse
       */
      Models::OperateRerunJobResponse operateRerunJob(const Models::OperateRerunJobRequest &request);

      /**
       * @summary Reruns a failed job instance.
       *
       * @param tmpReq OperateRetryJobExecutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateRetryJobExecutionResponse
       */
      Models::OperateRetryJobExecutionResponse operateRetryJobExecutionWithOptions(const Models::OperateRetryJobExecutionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Reruns a failed job instance.
       *
       * @param request OperateRetryJobExecutionRequest
       * @return OperateRetryJobExecutionResponse
       */
      Models::OperateRetryJobExecutionResponse operateRetryJobExecution(const Models::OperateRetryJobExecutionRequest &request);

      /**
       * @summary Retries a workflow execution.
       *
       * @param request OperateRetryWorkflowExecutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateRetryWorkflowExecutionResponse
       */
      Models::OperateRetryWorkflowExecutionResponse operateRetryWorkflowExecutionWithOptions(const Models::OperateRetryWorkflowExecutionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retries a workflow execution.
       *
       * @param request OperateRetryWorkflowExecutionRequest
       * @return OperateRetryWorkflowExecutionResponse
       */
      Models::OperateRetryWorkflowExecutionResponse operateRetryWorkflowExecution(const Models::OperateRetryWorkflowExecutionRequest &request);

      /**
       * @summary Skips a job execution.
       *
       * @param request OperateSkipJobExecutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateSkipJobExecutionResponse
       */
      Models::OperateSkipJobExecutionResponse operateSkipJobExecutionWithOptions(const Models::OperateSkipJobExecutionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Skips a job execution.
       *
       * @param request OperateSkipJobExecutionRequest
       * @return OperateSkipJobExecutionResponse
       */
      Models::OperateSkipJobExecutionResponse operateSkipJobExecution(const Models::OperateSkipJobExecutionRequest &request);

      /**
       * @summary Stops a running task instance.
       *
       * @param tmpReq OperateStopJobExecutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateStopJobExecutionResponse
       */
      Models::OperateStopJobExecutionResponse operateStopJobExecutionWithOptions(const Models::OperateStopJobExecutionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a running task instance.
       *
       * @param request OperateStopJobExecutionRequest
       * @return OperateStopJobExecutionResponse
       */
      Models::OperateStopJobExecutionResponse operateStopJobExecution(const Models::OperateStopJobExecutionRequest &request);

      /**
       * @summary Stops a running workflow execution.
       *
       * @param request OperateStopWorkflowExecutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateStopWorkflowExecutionResponse
       */
      Models::OperateStopWorkflowExecutionResponse operateStopWorkflowExecutionWithOptions(const Models::OperateStopWorkflowExecutionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a running workflow execution.
       *
       * @param request OperateStopWorkflowExecutionRequest
       * @return OperateStopWorkflowExecutionResponse
       */
      Models::OperateStopWorkflowExecutionResponse operateStopWorkflowExecution(const Models::OperateStopWorkflowExecutionRequest &request);

      /**
       * @summary Resumes a Job Execution that is in the Hold state.
       *
       * @param request OperateUnholdJobExecutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateUnholdJobExecutionResponse
       */
      Models::OperateUnholdJobExecutionResponse operateUnholdJobExecutionWithOptions(const Models::OperateUnholdJobExecutionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resumes a Job Execution that is in the Hold state.
       *
       * @param request OperateUnholdJobExecutionRequest
       * @return OperateUnholdJobExecutionResponse
       */
      Models::OperateUnholdJobExecutionResponse operateUnholdJobExecution(const Models::OperateUnholdJobExecutionRequest &request);

      /**
       * @summary Resumes a workflow execution that is on hold.
       *
       * @param request OperateUnholdWorkflowExecutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateUnholdWorkflowExecutionResponse
       */
      Models::OperateUnholdWorkflowExecutionResponse operateUnholdWorkflowExecutionWithOptions(const Models::OperateUnholdWorkflowExecutionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resumes a workflow execution that is on hold.
       *
       * @param request OperateUnholdWorkflowExecutionRequest
       * @return OperateUnholdWorkflowExecutionResponse
       */
      Models::OperateUnholdWorkflowExecutionResponse operateUnholdWorkflowExecution(const Models::OperateUnholdWorkflowExecutionRequest &request);

      /**
       * @summary Resumes a skipped job execution.
       *
       * @param request OperateUnskipJobExecutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateUnskipJobExecutionResponse
       */
      Models::OperateUnskipJobExecutionResponse operateUnskipJobExecutionWithOptions(const Models::OperateUnskipJobExecutionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resumes a skipped job execution.
       *
       * @param request OperateUnskipJobExecutionRequest
       * @return OperateUnskipJobExecutionResponse
       */
      Models::OperateUnskipJobExecutionResponse operateUnskipJobExecution(const Models::OperateUnskipJobExecutionRequest &request);

      /**
       * @summary Synchronizes jobs.
       *
       * @param tmpReq SyncJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SyncJobsResponse
       */
      Models::SyncJobsResponse syncJobsWithOptions(const Models::SyncJobsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Synchronizes jobs.
       *
       * @param request SyncJobsRequest
       * @return SyncJobsResponse
       */
      Models::SyncJobsResponse syncJobs(const Models::SyncJobsRequest &request);

      /**
       * @summary Updates an application group.
       *
       * @param request UpdateAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAppResponse
       */
      Models::UpdateAppResponse updateAppWithOptions(const Models::UpdateAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an application group.
       *
       * @param request UpdateAppRequest
       * @return UpdateAppResponse
       */
      Models::UpdateAppResponse updateApp(const Models::UpdateAppRequest &request);

      /**
       * @summary Updates a calendar.
       *
       * @param request UpdateCalendarRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCalendarResponse
       */
      Models::UpdateCalendarResponse updateCalendarWithOptions(const Models::UpdateCalendarRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a calendar.
       *
       * @param request UpdateCalendarRequest
       * @return UpdateCalendarResponse
       */
      Models::UpdateCalendarResponse updateCalendar(const Models::UpdateCalendarRequest &request);

      /**
       * @summary Updates a cluster.
       *
       * @param request UpdateClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateClusterResponse
       */
      Models::UpdateClusterResponse updateClusterWithOptions(const Models::UpdateClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a cluster.
       *
       * @param request UpdateClusterRequest
       * @return UpdateClusterResponse
       */
      Models::UpdateClusterResponse updateCluster(const Models::UpdateClusterRequest &request);

      /**
       * @summary 更新通知联系人
       *
       * @description 更新通知联系人
       *
       * @param request UpdateContactRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateContactResponse
       */
      Models::UpdateContactResponse updateContactWithOptions(const Models::UpdateContactRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新通知联系人
       *
       * @description 更新通知联系人
       *
       * @param request UpdateContactRequest
       * @return UpdateContactResponse
       */
      Models::UpdateContactResponse updateContact(const Models::UpdateContactRequest &request);

      /**
       * @summary Update data source
       *
       * @param request UpdateDatasourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDatasourceResponse
       */
      Models::UpdateDatasourceResponse updateDatasourceWithOptions(const Models::UpdateDatasourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update data source
       *
       * @param request UpdateDatasourceRequest
       * @return UpdateDatasourceResponse
       */
      Models::UpdateDatasourceResponse updateDatasource(const Models::UpdateDatasourceRequest &request);

      /**
       * @summary 更新执行器组
       *
       * @description # 引入增强插件
       * 在`pom.xml`文件中添加增强插件以提升Executor的能力。
       * **注意**：请确保该插件在pom中放置在`xxl-job-core` 依赖的**上方**。
       * **详细信息请参考**：[插件版本说明文档](https://help.aliyun.com/zh/schedulerx/schedulerx-xxljob/product-overview/plugin-version-description)
       *
       * @param request UpdateExecutorGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateExecutorGroupResponse
       */
      Models::UpdateExecutorGroupResponse updateExecutorGroupWithOptions(const Models::UpdateExecutorGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新执行器组
       *
       * @description # 引入增强插件
       * 在`pom.xml`文件中添加增强插件以提升Executor的能力。
       * **注意**：请确保该插件在pom中放置在`xxl-job-core` 依赖的**上方**。
       * **详细信息请参考**：[插件版本说明文档](https://help.aliyun.com/zh/schedulerx/schedulerx-xxljob/product-overview/plugin-version-description)
       *
       * @param request UpdateExecutorGroupRequest
       * @return UpdateExecutorGroupResponse
       */
      Models::UpdateExecutorGroupResponse updateExecutorGroup(const Models::UpdateExecutorGroupRequest &request);

      /**
       * @summary Updates the configuration of one or more Executors.
       *
       * @description # Add the enhancement plugin
       * Add the enhancement plugin to the `pom.xml` file to extend the capabilities of the Executor.
       * **Note**: Place this plugin **above** the `xxl-job-core` dependency in the pom.xml file.
       * **For more information, see the** [Plugin Version Description Document](https://help.aliyun.com/zh/schedulerx/schedulerx-xxljob/product-overview/plugin-version-description).
       *
       * @param request UpdateExecutorsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateExecutorsResponse
       */
      Models::UpdateExecutorsResponse updateExecutorsWithOptions(const Models::UpdateExecutorsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configuration of one or more Executors.
       *
       * @description # Add the enhancement plugin
       * Add the enhancement plugin to the `pom.xml` file to extend the capabilities of the Executor.
       * **Note**: Place this plugin **above** the `xxl-job-core` dependency in the pom.xml file.
       * **For more information, see the** [Plugin Version Description Document](https://help.aliyun.com/zh/schedulerx/schedulerx-xxljob/product-overview/plugin-version-description).
       *
       * @param request UpdateExecutorsRequest
       * @return UpdateExecutorsResponse
       */
      Models::UpdateExecutorsResponse updateExecutors(const Models::UpdateExecutorsRequest &request);

      /**
       * @summary Updates node information.
       *
       * @param tmpReq UpdateJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateJobResponse
       */
      Models::UpdateJobResponse updateJobWithOptions(const Models::UpdateJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates node information.
       *
       * @param request UpdateJobRequest
       * @return UpdateJobResponse
       */
      Models::UpdateJobResponse updateJob(const Models::UpdateJobRequest &request);

      /**
       * @summary Update task instance
       *
       * @param request UpdateJobExecutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateJobExecutionResponse
       */
      Models::UpdateJobExecutionResponse updateJobExecutionWithOptions(const Models::UpdateJobExecutionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update task instance
       *
       * @param request UpdateJobExecutionRequest
       * @return UpdateJobExecutionResponse
       */
      Models::UpdateJobExecutionResponse updateJobExecution(const Models::UpdateJobExecutionRequest &request);

      /**
       * @summary Updates a job script.
       *
       * @param request UpdateJobScriptRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateJobScriptResponse
       */
      Models::UpdateJobScriptResponse updateJobScriptWithOptions(const Models::UpdateJobScriptRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a job script.
       *
       * @param request UpdateJobScriptRequest
       * @return UpdateJobScriptResponse
       */
      Models::UpdateJobScriptResponse updateJobScript(const Models::UpdateJobScriptRequest &request);

      /**
       * @summary Updates an existing workflow.
       *
       * @param request UpdateWorkflowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWorkflowResponse
       */
      Models::UpdateWorkflowResponse updateWorkflowWithOptions(const Models::UpdateWorkflowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an existing workflow.
       *
       * @param request UpdateWorkflowRequest
       * @return UpdateWorkflowResponse
       */
      Models::UpdateWorkflowResponse updateWorkflow(const Models::UpdateWorkflowRequest &request);

      /**
       * @summary Updates a workflow\\"s Directed Acyclic Graph (DAG), including node coordinates and edges.
       *
       * @param tmpReq UpdateWorkflowDAGRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWorkflowDAGResponse
       */
      Models::UpdateWorkflowDAGResponse updateWorkflowDAGWithOptions(const Models::UpdateWorkflowDAGRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a workflow\\"s Directed Acyclic Graph (DAG), including node coordinates and edges.
       *
       * @param request UpdateWorkflowDAGRequest
       * @return UpdateWorkflowDAGResponse
       */
      Models::UpdateWorkflowDAGResponse updateWorkflowDAG(const Models::UpdateWorkflowDAGRequest &request);

      /**
       * @summary Updates the Directed Acyclic Graph (DAG) version for a Workflow.
       *
       * @param request UpdateWorkflowDAGVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWorkflowDAGVersionResponse
       */
      Models::UpdateWorkflowDAGVersionResponse updateWorkflowDAGVersionWithOptions(const Models::UpdateWorkflowDAGVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the Directed Acyclic Graph (DAG) version for a Workflow.
       *
       * @param request UpdateWorkflowDAGVersionRequest
       * @return UpdateWorkflowDAGVersionResponse
       */
      Models::UpdateWorkflowDAGVersionResponse updateWorkflowDAGVersion(const Models::UpdateWorkflowDAGVersionRequest &request);
  };
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
