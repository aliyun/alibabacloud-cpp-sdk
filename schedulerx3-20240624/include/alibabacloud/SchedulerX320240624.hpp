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
       * @summary Creates an application.
       *
       * @param request CreateAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAppResponse
       */
      Models::CreateAppResponse createAppWithOptions(const Models::CreateAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an application.
       *
       * @param request CreateAppRequest
       * @return CreateAppResponse
       */
      Models::CreateAppResponse createApp(const Models::CreateAppRequest &request);

      /**
       * @summary Creates a custom calendar.
       *
       * @description Creates a custom calendar.
       *
       * @param request CreateCalendarRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCalendarResponse
       */
      Models::CreateCalendarResponse createCalendarWithOptions(const Models::CreateCalendarRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom calendar.
       *
       * @description Creates a custom calendar.
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
       * @summary Creates a notification contact.
       *
       * @description Creates a custom contact.
       *
       * @param request CreateContactRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateContactResponse
       */
      Models::CreateContactResponse createContactWithOptions(const Models::CreateContactRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a notification contact.
       *
       * @description Creates a custom contact.
       *
       * @param request CreateContactRequest
       * @return CreateContactResponse
       */
      Models::CreateContactResponse createContact(const Models::CreateContactRequest &request);

      /**
       * @summary Creates a data source.
       *
       * @param request CreateDatasourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDatasourceResponse
       */
      Models::CreateDatasourceResponse createDatasourceWithOptions(const Models::CreateDatasourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a data source.
       *
       * @param request CreateDatasourceRequest
       * @return CreateDatasourceResponse
       */
      Models::CreateDatasourceResponse createDatasource(const Models::CreateDatasourceRequest &request);

      /**
       * @summary Adds an executor group.
       *
       * @description Manually imports executors.
       *
       * @param request CreateExecutorGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateExecutorGroupResponse
       */
      Models::CreateExecutorGroupResponse createExecutorGroupWithOptions(const Models::CreateExecutorGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds an executor group.
       *
       * @description Manually imports executors.
       *
       * @param request CreateExecutorGroupRequest
       * @return CreateExecutorGroupResponse
       */
      Models::CreateExecutorGroupResponse createExecutorGroup(const Models::CreateExecutorGroupRequest &request);

      /**
       * @summary Manually imports executors.
       *
       * @description Manually imports executors.
       *
       * @param request CreateExecutorsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateExecutorsResponse
       */
      Models::CreateExecutorsResponse createExecutorsWithOptions(const Models::CreateExecutorsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Manually imports executors.
       *
       * @description Manually imports executors.
       *
       * @param request CreateExecutorsRequest
       * @return CreateExecutorsResponse
       */
      Models::CreateExecutorsResponse createExecutors(const Models::CreateExecutorsRequest &request);

      /**
       * @summary Creates a job.
       *
       * @param tmpReq CreateJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateJobResponse
       */
      Models::CreateJobResponse createJobWithOptions(const Models::CreateJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a job.
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
       * @summary Deletes an application group.
       *
       * @param request DeleteAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAppResponse
       */
      Models::DeleteAppResponse deleteAppWithOptions(const Models::DeleteAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an application group.
       *
       * @param request DeleteAppRequest
       * @return DeleteAppResponse
       */
      Models::DeleteAppResponse deleteApp(const Models::DeleteAppRequest &request);

      /**
       * @summary Deletes a specified calendar.
       *
       * @param request DeleteCalendarRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCalendarResponse
       */
      Models::DeleteCalendarResponse deleteCalendarWithOptions(const Models::DeleteCalendarRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified calendar.
       *
       * @param request DeleteCalendarRequest
       * @return DeleteCalendarResponse
       */
      Models::DeleteCalendarResponse deleteCalendar(const Models::DeleteCalendarRequest &request);

      /**
       * @summary Releases and deletes a cluster.
       *
       * @param request DeleteClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteClusterResponse
       */
      Models::DeleteClusterResponse deleteClusterWithOptions(const Models::DeleteClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases and deletes a cluster.
       *
       * @param request DeleteClusterRequest
       * @return DeleteClusterResponse
       */
      Models::DeleteClusterResponse deleteCluster(const Models::DeleteClusterRequest &request);

      /**
       * @summary Deletes a notification contact.
       *
       * @description Deletes a custom contact.
       *
       * @param request DeleteContactRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteContactResponse
       */
      Models::DeleteContactResponse deleteContactWithOptions(const Models::DeleteContactRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a notification contact.
       *
       * @description Deletes a custom contact.
       *
       * @param request DeleteContactRequest
       * @return DeleteContactResponse
       */
      Models::DeleteContactResponse deleteContact(const Models::DeleteContactRequest &request);

      /**
       * @summary Deletes a data source.
       *
       * @param request DeleteDatasourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDatasourceResponse
       */
      Models::DeleteDatasourceResponse deleteDatasourceWithOptions(const Models::DeleteDatasourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a data source.
       *
       * @param request DeleteDatasourceRequest
       * @return DeleteDatasourceResponse
       */
      Models::DeleteDatasourceResponse deleteDatasource(const Models::DeleteDatasourceRequest &request);

      /**
       * @summary Adds an executor group.
       *
       * @param request DeleteExecutorGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteExecutorGroupResponse
       */
      Models::DeleteExecutorGroupResponse deleteExecutorGroupWithOptions(const Models::DeleteExecutorGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds an executor group.
       *
       * @param request DeleteExecutorGroupRequest
       * @return DeleteExecutorGroupResponse
       */
      Models::DeleteExecutorGroupResponse deleteExecutorGroup(const Models::DeleteExecutorGroupRequest &request);

      /**
       * @summary Deletes tasks in batches.
       *
       * @param tmpReq DeleteJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteJobsResponse
       */
      Models::DeleteJobsResponse deleteJobsWithOptions(const Models::DeleteJobsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes tasks in batches.
       *
       * @param request DeleteJobsRequest
       * @return DeleteJobsResponse
       */
      Models::DeleteJobsResponse deleteJobs(const Models::DeleteJobsRequest &request);

      /**
       * @summary Deletes a workflow.
       *
       * @param request DeleteWorkflowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWorkflowResponse
       */
      Models::DeleteWorkflowResponse deleteWorkflowWithOptions(const Models::DeleteWorkflowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a workflow.
       *
       * @param request DeleteWorkflowRequest
       * @return DeleteWorkflowResponse
       */
      Models::DeleteWorkflowResponse deleteWorkflow(const Models::DeleteWorkflowRequest &request);

      /**
       * @summary Deletes multiple workflows.
       *
       * @param tmpReq DeleteWorkflowsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWorkflowsResponse
       */
      Models::DeleteWorkflowsResponse deleteWorkflowsWithOptions(const Models::DeleteWorkflowsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes multiple workflows.
       *
       * @param request DeleteWorkflowsRequest
       * @return DeleteWorkflowsResponse
       */
      Models::DeleteWorkflowsResponse deleteWorkflows(const Models::DeleteWorkflowsRequest &request);

      /**
       * @summary Exports export task information in batches.
       *
       * @param tmpReq ExportJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportJobsResponse
       */
      Models::ExportJobsResponse exportJobsWithOptions(const Models::ExportJobsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Exports export task information in batches.
       *
       * @param request ExportJobsRequest
       * @return ExportJobsResponse
       */
      Models::ExportJobsResponse exportJobs(const Models::ExportJobsRequest &request);

      /**
       * @summary Exports a workflow in JSON format, including the basic information of the workflow, information about all nodes in the workflow, and the DAG dependencies of the workflow.
       *
       * @param tmpReq ExportWorkflowsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportWorkflowsResponse
       */
      Models::ExportWorkflowsResponse exportWorkflowsWithOptions(const Models::ExportWorkflowsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Exports a workflow in JSON format, including the basic information of the workflow, information about all nodes in the workflow, and the DAG dependencies of the workflow.
       *
       * @param request ExportWorkflowsRequest
       * @return ExportWorkflowsResponse
       */
      Models::ExportWorkflowsResponse exportWorkflows(const Models::ExportWorkflowsRequest &request);

      /**
       * @summary Retrieves a specified application.
       *
       * @param request GetAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAppResponse
       */
      Models::GetAppResponse getAppWithOptions(const Models::GetAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a specified application.
       *
       * @param request GetAppRequest
       * @return GetAppResponse
       */
      Models::GetAppResponse getApp(const Models::GetAppRequest &request);

      /**
       * @summary Retrieves the calendar.
       *
       * @param request GetCalendarRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCalendarResponse
       */
      Models::GetCalendarResponse getCalendarWithOptions(const Models::GetCalendarRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the calendar.
       *
       * @param request GetCalendarRequest
       * @return GetCalendarResponse
       */
      Models::GetCalendarResponse getCalendar(const Models::GetCalendarRequest &request);

      /**
       * @summary Retrieves the details of a cluster.
       *
       * @param request GetClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetClusterResponse
       */
      Models::GetClusterResponse getClusterWithOptions(const Models::GetClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a cluster.
       *
       * @param request GetClusterRequest
       * @return GetClusterResponse
       */
      Models::GetClusterResponse getCluster(const Models::GetClusterRequest &request);

      /**
       * @summary Retrieves the information of a specified machine.
       *
       * @param request GetDesigateInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDesigateInfoResponse
       */
      Models::GetDesigateInfoResponse getDesigateInfoWithOptions(const Models::GetDesigateInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the information of a specified machine.
       *
       * @param request GetDesigateInfoRequest
       * @return GetDesigateInfoResponse
       */
      Models::GetDesigateInfoResponse getDesigateInfo(const Models::GetDesigateInfoRequest &request);

      /**
       * @summary Retrieves the configuration information of a specified executor.
       *
       * @description # Add the enhancement plugin
       * Add the enhancement plugin to the `pom.xml` file to enhance the capabilities of the executor.
       * **Note**: Make sure that the plugin is placed **above** the `xxl-job-core` dependency in the pom file.
       * **For more information**, refer to [Plugin version description](https://www.alibabacloud.com/help/en/schedulerx/schedulerx-xxljob/product-overview/plugin-version-description).
       *
       * @param request GetExecutorConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetExecutorConfigResponse
       */
      Models::GetExecutorConfigResponse getExecutorConfigWithOptions(const Models::GetExecutorConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the configuration information of a specified executor.
       *
       * @description # Add the enhancement plugin
       * Add the enhancement plugin to the `pom.xml` file to enhance the capabilities of the executor.
       * **Note**: Make sure that the plugin is placed **above** the `xxl-job-core` dependency in the pom file.
       * **For more information**, refer to [Plugin version description](https://www.alibabacloud.com/help/en/schedulerx/schedulerx-xxljob/product-overview/plugin-version-description).
       *
       * @param request GetExecutorConfigRequest
       * @return GetExecutorConfigResponse
       */
      Models::GetExecutorConfigResponse getExecutorConfig(const Models::GetExecutorConfigRequest &request);

      /**
       * @summary Retrieves the details of a task execution.
       *
       * @param request GetJobExecutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetJobExecutionResponse
       */
      Models::GetJobExecutionResponse getJobExecutionWithOptions(const Models::GetJobExecutionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a task execution.
       *
       * @param request GetJobExecutionRequest
       * @return GetJobExecutionResponse
       */
      Models::GetJobExecutionResponse getJobExecution(const Models::GetJobExecutionRequest &request);

      /**
       * @summary Retrieves the details of a sharding task execution.
       *
       * @description # Import the enhancement plugin
       * Add the enhancement plugin to the `pom.xml` file to improve the capabilities of the Executor.
       * **Note**: Make sure that the plugin is placed **above** the `xxl-job-core` dependency in the pom file.
       * **For more information, see**: [Plugin version description](https://www.alibabacloud.com/help/en/schedulerx/schedulerx-xxljob/product-overview/plugin-version-description)
       *
       * @param request GetJobExecutionProgressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetJobExecutionProgressResponse
       */
      Models::GetJobExecutionProgressResponse getJobExecutionProgressWithOptions(const Models::GetJobExecutionProgressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a sharding task execution.
       *
       * @description # Import the enhancement plugin
       * Add the enhancement plugin to the `pom.xml` file to improve the capabilities of the Executor.
       * **Note**: Make sure that the plugin is placed **above** the `xxl-job-core` dependency in the pom file.
       * **For more information, see**: [Plugin version description](https://www.alibabacloud.com/help/en/schedulerx/schedulerx-xxljob/product-overview/plugin-version-description)
       *
       * @param request GetJobExecutionProgressRequest
       * @return GetJobExecutionProgressResponse
       */
      Models::GetJobExecutionProgressResponse getJobExecutionProgress(const Models::GetJobExecutionProgressRequest &request);

      /**
       * @summary Queries the task execution stack.
       *
       * @description # Import the enhancement plug-in
       * Add the enhancement plug-in to the `pom.xml` file to enhance the capabilities of the executor.
       * **Note**: Make sure that the plug-in is placed **above** the `xxl-job-core` dependency in the POM file.
       * **For more information, see**: [Plug-in version description](https://www.alibabacloud.com/help/en/schedulerx/schedulerx-xxljob/product-overview/plugin-version-description)
       *
       * @param request GetJobExecutionThreadDumpRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetJobExecutionThreadDumpResponse
       */
      Models::GetJobExecutionThreadDumpResponse getJobExecutionThreadDumpWithOptions(const Models::GetJobExecutionThreadDumpRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the task execution stack.
       *
       * @description # Import the enhancement plug-in
       * Add the enhancement plug-in to the `pom.xml` file to enhance the capabilities of the executor.
       * **Note**: Make sure that the plug-in is placed **above** the `xxl-job-core` dependency in the POM file.
       * **For more information, see**: [Plug-in version description](https://www.alibabacloud.com/help/en/schedulerx/schedulerx-xxljob/product-overview/plugin-version-description)
       *
       * @param request GetJobExecutionThreadDumpRequest
       * @return GetJobExecutionThreadDumpResponse
       */
      Models::GetJobExecutionThreadDumpResponse getJobExecutionThreadDump(const Models::GetJobExecutionThreadDumpRequest &request);

      /**
       * @summary Queries logs.
       *
       * @param request GetLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLogResponse
       */
      Models::GetLogResponse getLogWithOptions(const Models::GetLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries logs.
       *
       * @param request GetLogRequest
       * @return GetLogResponse
       */
      Models::GetLogResponse getLog(const Models::GetLogRequest &request);

      /**
       * @summary Queries events.
       *
       * @param request GetLogEventRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLogEventResponse
       */
      Models::GetLogEventResponse getLogEventWithOptions(const Models::GetLogEventRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries events.
       *
       * @param request GetLogEventRequest
       * @return GetLogEventResponse
       */
      Models::GetLogEventResponse getLogEvent(const Models::GetLogEventRequest &request);

      /**
       * @summary Retrieves paginated logs.
       *
       * @description # Add the enhancement plugin
       * Add the enhancement plugin to the pom.xml file to enhance the capabilities of the executor.
       * **Note**: Make sure that this plugin is placed **above** the xxl-job-core dependency in the pom file.
       * **For more information, see**: [Plugin version description](https://www.alibabacloud.com/help/en/schedulerx/schedulerx-xxljob/product-overview/plugin-version-description)
       *
       * @param request GetPageLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPageLogResponse
       */
      Models::GetPageLogResponse getPageLogWithOptions(const Models::GetPageLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves paginated logs.
       *
       * @description # Add the enhancement plugin
       * Add the enhancement plugin to the pom.xml file to enhance the capabilities of the executor.
       * **Note**: Make sure that this plugin is placed **above** the xxl-job-core dependency in the pom file.
       * **For more information, see**: [Plugin version description](https://www.alibabacloud.com/help/en/schedulerx/schedulerx-xxljob/product-overview/plugin-version-description)
       *
       * @param request GetPageLogRequest
       * @return GetPageLogResponse
       */
      Models::GetPageLogResponse getPageLog(const Models::GetPageLogRequest &request);

      /**
       * @summary Retrieves the basic information of a workflow.
       *
       * @param request GetWorkflowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWorkflowResponse
       */
      Models::GetWorkflowResponse getWorkflowWithOptions(const Models::GetWorkflowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the basic information of a workflow.
       *
       * @param request GetWorkflowRequest
       * @return GetWorkflowResponse
       */
      Models::GetWorkflowResponse getWorkflow(const Models::GetWorkflowRequest &request);

      /**
       * @summary Retrieves the DAG information of a workflow.
       *
       * @param request GetWorkflowDAGRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWorkflowDAGResponse
       */
      Models::GetWorkflowDAGResponse getWorkflowDAGWithOptions(const Models::GetWorkflowDAGRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the DAG information of a workflow.
       *
       * @param request GetWorkflowDAGRequest
       * @return GetWorkflowDAGResponse
       */
      Models::GetWorkflowDAGResponse getWorkflowDAG(const Models::GetWorkflowDAGRequest &request);

      /**
       * @summary Retrieves the DAG of a historical workflow version.
       *
       * @param request GetWorkflowDAGPreviewRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWorkflowDAGPreviewResponse
       */
      Models::GetWorkflowDAGPreviewResponse getWorkflowDAGPreviewWithOptions(const Models::GetWorkflowDAGPreviewRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the DAG of a historical workflow version.
       *
       * @param request GetWorkflowDAGPreviewRequest
       * @return GetWorkflowDAGPreviewResponse
       */
      Models::GetWorkflowDAGPreviewResponse getWorkflowDAGPreview(const Models::GetWorkflowDAGPreviewRequest &request);

      /**
       * @summary Retrieves the DAG information of a workflow instance.
       *
       * @param request GetWorkflowExecutionDAGRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWorkflowExecutionDAGResponse
       */
      Models::GetWorkflowExecutionDAGResponse getWorkflowExecutionDAGWithOptions(const Models::GetWorkflowExecutionDAGRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the DAG information of a workflow instance.
       *
       * @param request GetWorkflowExecutionDAGRequest
       * @return GetWorkflowExecutionDAGResponse
       */
      Models::GetWorkflowExecutionDAGResponse getWorkflowExecutionDAG(const Models::GetWorkflowExecutionDAGRequest &request);

      /**
       * @summary Imports scheduled tasks from an agent to the scheduler platform (SSE). You cannot call this API operation by using the cluster ID of an XXL-JOB cluster, and XXL-JOB clusters are not supported. This API operation is exclusively available for AI task scheduling clusters.
       *
       * @description Imports scheduled tasks from an agent to the scheduler platform (SSE). You cannot call this API operation by using the cluster ID of an XXL-JOB cluster, and XXL-JOB clusters are not supported. This API operation is exclusively available for AI task scheduling clusters.
       *
       * @param request ImportAgentJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportAgentJobsResponse
       */
      FutureGenerator<Models::ImportAgentJobsResponse> importAgentJobsWithSSE(const Models::ImportAgentJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Imports scheduled tasks from an agent to the scheduler platform (SSE). You cannot call this API operation by using the cluster ID of an XXL-JOB cluster, and XXL-JOB clusters are not supported. This API operation is exclusively available for AI task scheduling clusters.
       *
       * @description Imports scheduled tasks from an agent to the scheduler platform (SSE). You cannot call this API operation by using the cluster ID of an XXL-JOB cluster, and XXL-JOB clusters are not supported. This API operation is exclusively available for AI task scheduling clusters.
       *
       * @param request ImportAgentJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportAgentJobsResponse
       */
      Models::ImportAgentJobsResponse importAgentJobsWithOptions(const Models::ImportAgentJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Imports scheduled tasks from an agent to the scheduler platform (SSE). You cannot call this API operation by using the cluster ID of an XXL-JOB cluster, and XXL-JOB clusters are not supported. This API operation is exclusively available for AI task scheduling clusters.
       *
       * @description Imports scheduled tasks from an agent to the scheduler platform (SSE). You cannot call this API operation by using the cluster ID of an XXL-JOB cluster, and XXL-JOB clusters are not supported. This API operation is exclusively available for AI task scheduling clusters.
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
       * @summary Imports tasks in batches.
       *
       * @param request ImportJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportJobsResponse
       */
      Models::ImportJobsResponse importJobsWithOptions(const Models::ImportJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Imports tasks in batches.
       *
       * @param request ImportJobsRequest
       * @return ImportJobsResponse
       */
      Models::ImportJobsResponse importJobs(const Models::ImportJobsRequest &request);

      /**
       * @summary Imports a workflow.
       *
       * @param request ImportWorkflowsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportWorkflowsResponse
       */
      Models::ImportWorkflowsResponse importWorkflowsWithOptions(const Models::ImportWorkflowsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Imports a workflow.
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
       * @summary Retrieves the list of application names.
       *
       * @param request ListAppNamesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAppNamesResponse
       */
      Models::ListAppNamesResponse listAppNamesWithOptions(const Models::ListAppNamesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of application names.
       *
       * @param request ListAppNamesRequest
       * @return ListAppNamesResponse
       */
      Models::ListAppNamesResponse listAppNames(const Models::ListAppNamesRequest &request);

      /**
       * @summary Retrieves a list of applications.
       *
       * @param request ListAppsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAppsResponse
       */
      Models::ListAppsResponse listAppsWithOptions(const Models::ListAppsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of applications.
       *
       * @param request ListAppsRequest
       * @return ListAppsResponse
       */
      Models::ListAppsResponse listApps(const Models::ListAppsRequest &request);

      /**
       * @summary Retrieves a list of calendar names.
       *
       * @param request ListCalendarNamesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCalendarNamesResponse
       */
      Models::ListCalendarNamesResponse listCalendarNamesWithOptions(const Models::ListCalendarNamesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of calendar names.
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
       * @summary Queries the list of notification contacts.
       *
       * @description Views the contacts.
       *
       * @param request ListContactsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListContactsResponse
       */
      Models::ListContactsResponse listContactsWithOptions(const Models::ListContactsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of notification contacts.
       *
       * @description Views the contacts.
       *
       * @param request ListContactsRequest
       * @return ListContactsResponse
       */
      Models::ListContactsResponse listContacts(const Models::ListContactsRequest &request);

      /**
       * @summary Retrieves a list of data sources.
       *
       * @param request ListDatasourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDatasourcesResponse
       */
      Models::ListDatasourcesResponse listDatasourcesWithOptions(const Models::ListDatasourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of data sources.
       *
       * @param request ListDatasourcesRequest
       * @return ListDatasourcesResponse
       */
      Models::ListDatasourcesResponse listDatasources(const Models::ListDatasourcesRequest &request);

      /**
       * @summary Queries the list of executor groups.
       *
       * @description # Import the enhancement plugin
       * Add the enhancement plugin to the `pom.xml` file to enhance the capabilities of the executor.
       * **Note**: Make sure that this plugin is placed **above** the `xxl-job-core` dependency in the pom file.
       * **For more information, see**: [Plugin version description](https://www.alibabacloud.com/help/en/schedulerx/schedulerx-xxljob/product-overview/plugin-version-description)
       *
       * @param request ListExecutorGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListExecutorGroupResponse
       */
      Models::ListExecutorGroupResponse listExecutorGroupWithOptions(const Models::ListExecutorGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of executor groups.
       *
       * @description # Import the enhancement plugin
       * Add the enhancement plugin to the `pom.xml` file to enhance the capabilities of the executor.
       * **Note**: Make sure that this plugin is placed **above** the `xxl-job-core` dependency in the pom file.
       * **For more information, see**: [Plugin version description](https://www.alibabacloud.com/help/en/schedulerx/schedulerx-xxljob/product-overview/plugin-version-description)
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
       * @summary Retrieves the task script history list.
       *
       * @param request ListJobScriptHistoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListJobScriptHistoryResponse
       */
      Models::ListJobScriptHistoryResponse listJobScriptHistoryWithOptions(const Models::ListJobScriptHistoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the task script history list.
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
       * @summary Retrieves Kubernetes resources.
       *
       * @description # Add the enhancement plug-in
       * Add the enhancement plug-in to the `pom.xml` file to enhance the capabilities of the executor.
       * **Note**: Make sure that this plug-in is placed **above** the `xxl-job-core` dependency in the POM file.
       * **For more information, see**: [Plug-in version descriptions](https://www.alibabacloud.com/help/en/schedulerx/schedulerx-xxljob/product-overview/plugin-version-description)
       *
       * @param request ListK8sResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListK8sResourceResponse
       */
      Models::ListK8sResourceResponse listK8sResourceWithOptions(const Models::ListK8sResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves Kubernetes resources.
       *
       * @description # Add the enhancement plug-in
       * Add the enhancement plug-in to the `pom.xml` file to enhance the capabilities of the executor.
       * **Note**: Make sure that this plug-in is placed **above** the `xxl-job-core` dependency in the POM file.
       * **For more information, see**: [Plug-in version descriptions](https://www.alibabacloud.com/help/en/schedulerx/schedulerx-xxljob/product-overview/plugin-version-description)
       *
       * @param request ListK8sResourceRequest
       * @return ListK8sResourceResponse
       */
      Models::ListK8sResourceResponse listK8sResource(const Models::ListK8sResourceRequest &request);

      /**
       * @summary Retrieves the list of labels for an executor.
       *
       * @param request ListLablesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLablesResponse
       */
      Models::ListLablesResponse listLablesWithOptions(const Models::ListLablesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of labels for an executor.
       *
       * @param request ListLablesRequest
       * @return ListLablesResponse
       */
      Models::ListLablesResponse listLables(const Models::ListLablesRequest &request);

      /**
       * @summary Queries the list of zones.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRegionZoneResponse
       */
      Models::ListRegionZoneResponse listRegionZoneWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of zones.
       *
       * @return ListRegionZoneResponse
       */
      Models::ListRegionZoneResponse listRegionZone();

      /**
       * @summary Retrieves a list of all regions.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRegionsResponse
       */
      Models::ListRegionsResponse listRegionsWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of all regions.
       *
       * @return ListRegionsResponse
       */
      Models::ListRegionsResponse listRegions();

      /**
       * @summary Queries scheduling events.
       *
       * @param request ListScheduleEventRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListScheduleEventResponse
       */
      Models::ListScheduleEventResponse listScheduleEventWithOptions(const Models::ListScheduleEventRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries scheduling events.
       *
       * @param request ListScheduleEventRequest
       * @return ListScheduleEventResponse
       */
      Models::ListScheduleEventResponse listScheduleEvent(const Models::ListScheduleEventRequest &request);

      /**
       * @summary Retrieves the next five scheduling times for a specified time type and expression.
       *
       * @param request ListScheduleTimesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListScheduleTimesResponse
       */
      Models::ListScheduleTimesResponse listScheduleTimesWithOptions(const Models::ListScheduleTimesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the next five scheduling times for a specified time type and expression.
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
       * @summary Retrieves a list of workflow versions.
       *
       * @param request ListWorkflowVersionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWorkflowVersionsResponse
       */
      Models::ListWorkflowVersionsResponse listWorkflowVersionsWithOptions(const Models::ListWorkflowVersionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of workflow versions.
       *
       * @param request ListWorkflowVersionsRequest
       * @return ListWorkflowVersionsResponse
       */
      Models::ListWorkflowVersionsResponse listWorkflowVersions(const Models::ListWorkflowVersionsRequest &request);

      /**
       * @summary Retrieves a list of workflows.
       *
       * @param request ListWorkflowsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWorkflowsResponse
       */
      Models::ListWorkflowsResponse listWorkflowsWithOptions(const Models::ListWorkflowsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of workflows.
       *
       * @param request ListWorkflowsRequest
       * @return ListWorkflowsResponse
       */
      Models::ListWorkflowsResponse listWorkflows(const Models::ListWorkflowsRequest &request);

      /**
       * @summary Backfills the historical data of a workflow.
       *
       * @param request OperateBackfillWorkflowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateBackfillWorkflowResponse
       */
      Models::OperateBackfillWorkflowResponse operateBackfillWorkflowWithOptions(const Models::OperateBackfillWorkflowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Backfills the historical data of a workflow.
       *
       * @param request OperateBackfillWorkflowRequest
       * @return OperateBackfillWorkflowResponse
       */
      Models::OperateBackfillWorkflowResponse operateBackfillWorkflow(const Models::OperateBackfillWorkflowRequest &request);

      /**
       * @summary Tests the connection to a data source.
       *
       * @param request OperateConnectDatasourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateConnectDatasourceResponse
       */
      Models::OperateConnectDatasourceResponse operateConnectDatasourceWithOptions(const Models::OperateConnectDatasourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Tests the connection to a data source.
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
       * @summary Disables tasks in batches.
       *
       * @param tmpReq OperateDisableJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateDisableJobsResponse
       */
      Models::OperateDisableJobsResponse operateDisableJobsWithOptions(const Models::OperateDisableJobsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables tasks in batches.
       *
       * @param request OperateDisableJobsRequest
       * @return OperateDisableJobsResponse
       */
      Models::OperateDisableJobsResponse operateDisableJobs(const Models::OperateDisableJobsRequest &request);

      /**
       * @summary Disables a workflow.
       *
       * @description Manually imports an executor.
       *
       * @param tmpReq OperateDisableWorkflowsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateDisableWorkflowsResponse
       */
      Models::OperateDisableWorkflowsResponse operateDisableWorkflowsWithOptions(const Models::OperateDisableWorkflowsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables a workflow.
       *
       * @description Manually imports an executor.
       *
       * @param request OperateDisableWorkflowsRequest
       * @return OperateDisableWorkflowsResponse
       */
      Models::OperateDisableWorkflowsResponse operateDisableWorkflows(const Models::OperateDisableWorkflowsRequest &request);

      /**
       * @summary Enables multiple tasks.
       *
       * @param tmpReq OperateEnableJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateEnableJobsResponse
       */
      Models::OperateEnableJobsResponse operateEnableJobsWithOptions(const Models::OperateEnableJobsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables multiple tasks.
       *
       * @param request OperateEnableJobsRequest
       * @return OperateEnableJobsResponse
       */
      Models::OperateEnableJobsResponse operateEnableJobs(const Models::OperateEnableJobsRequest &request);

      /**
       * @summary Enables a workflow.
       *
       * @param tmpReq OperateEnableWorkflowsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateEnableWorkflowsResponse
       */
      Models::OperateEnableWorkflowsResponse operateEnableWorkflowsWithOptions(const Models::OperateEnableWorkflowsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables a workflow.
       *
       * @param request OperateEnableWorkflowsRequest
       * @return OperateEnableWorkflowsResponse
       */
      Models::OperateEnableWorkflowsResponse operateEnableWorkflows(const Models::OperateEnableWorkflowsRequest &request);

      /**
       * @summary Runs a task once.
       *
       * @param request OperateExecuteJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateExecuteJobResponse
       */
      Models::OperateExecuteJobResponse operateExecuteJobWithOptions(const Models::OperateExecuteJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Runs a task once.
       *
       * @param request OperateExecuteJobRequest
       * @return OperateExecuteJobResponse
       */
      Models::OperateExecuteJobResponse operateExecuteJob(const Models::OperateExecuteJobRequest &request);

      /**
       * @summary Runs a workflow.
       *
       * @description Manually imports an executor.
       *
       * @param request OperateExecuteWorkflowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateExecuteWorkflowResponse
       */
      Models::OperateExecuteWorkflowResponse operateExecuteWorkflowWithOptions(const Models::OperateExecuteWorkflowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Runs a workflow.
       *
       * @description Manually imports an executor.
       *
       * @param request OperateExecuteWorkflowRequest
       * @return OperateExecuteWorkflowResponse
       */
      Models::OperateExecuteWorkflowResponse operateExecuteWorkflow(const Models::OperateExecuteWorkflowRequest &request);

      /**
       * @summary Suspends task instances that have not yet been executed.
       *
       * @param request OperateHoldJobExecutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateHoldJobExecutionResponse
       */
      Models::OperateHoldJobExecutionResponse operateHoldJobExecutionWithOptions(const Models::OperateHoldJobExecutionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Suspends task instances that have not yet been executed.
       *
       * @param request OperateHoldJobExecutionRequest
       * @return OperateHoldJobExecutionResponse
       */
      Models::OperateHoldJobExecutionResponse operateHoldJobExecution(const Models::OperateHoldJobExecutionRequest &request);

      /**
       * @summary Suspends a workflow instance, which suspends the unexecuted nodes in the workflow.
       *
       * @param request OperateHoldWorkflowExecutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateHoldWorkflowExecutionResponse
       */
      Models::OperateHoldWorkflowExecutionResponse operateHoldWorkflowExecutionWithOptions(const Models::OperateHoldWorkflowExecutionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Suspends a workflow instance, which suspends the unexecuted nodes in the workflow.
       *
       * @param request OperateHoldWorkflowExecutionRequest
       * @return OperateHoldWorkflowExecutionResponse
       */
      Models::OperateHoldWorkflowExecutionResponse operateHoldWorkflowExecution(const Models::OperateHoldWorkflowExecutionRequest &request);

      /**
       * @summary Marks a job instance as successful.
       *
       * @param request OperateMarkSuccessJobExecutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateMarkSuccessJobExecutionResponse
       */
      Models::OperateMarkSuccessJobExecutionResponse operateMarkSuccessJobExecutionWithOptions(const Models::OperateMarkSuccessJobExecutionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Marks a job instance as successful.
       *
       * @param request OperateMarkSuccessJobExecutionRequest
       * @return OperateMarkSuccessJobExecutionResponse
       */
      Models::OperateMarkSuccessJobExecutionResponse operateMarkSuccessJobExecution(const Models::OperateMarkSuccessJobExecutionRequest &request);

      /**
       * @summary Marks a workflow instance as successful.
       *
       * @param request OperateMarkSuccessWorkflowExecutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateMarkSuccessWorkflowExecutionResponse
       */
      Models::OperateMarkSuccessWorkflowExecutionResponse operateMarkSuccessWorkflowExecutionWithOptions(const Models::OperateMarkSuccessWorkflowExecutionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Marks a workflow instance as successful.
       *
       * @param request OperateMarkSuccessWorkflowExecutionRequest
       * @return OperateMarkSuccessWorkflowExecutionResponse
       */
      Models::OperateMarkSuccessWorkflowExecutionResponse operateMarkSuccessWorkflowExecution(const Models::OperateMarkSuccessWorkflowExecutionRequest &request);

      /**
       * @summary Reruns historical data for a task.
       *
       * @param request OperateRerunJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateRerunJobResponse
       */
      Models::OperateRerunJobResponse operateRerunJobWithOptions(const Models::OperateRerunJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Reruns historical data for a task.
       *
       * @param request OperateRerunJobRequest
       * @return OperateRerunJobResponse
       */
      Models::OperateRerunJobResponse operateRerunJob(const Models::OperateRerunJobRequest &request);

      /**
       * @summary Reruns failed task instances.
       *
       * @param tmpReq OperateRetryJobExecutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateRetryJobExecutionResponse
       */
      Models::OperateRetryJobExecutionResponse operateRetryJobExecutionWithOptions(const Models::OperateRetryJobExecutionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Reruns failed task instances.
       *
       * @param request OperateRetryJobExecutionRequest
       * @return OperateRetryJobExecutionResponse
       */
      Models::OperateRetryJobExecutionResponse operateRetryJobExecution(const Models::OperateRetryJobExecutionRequest &request);

      /**
       * @summary Reruns a workflow instance.
       *
       * @param request OperateRetryWorkflowExecutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateRetryWorkflowExecutionResponse
       */
      Models::OperateRetryWorkflowExecutionResponse operateRetryWorkflowExecutionWithOptions(const Models::OperateRetryWorkflowExecutionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Reruns a workflow instance.
       *
       * @param request OperateRetryWorkflowExecutionRequest
       * @return OperateRetryWorkflowExecutionResponse
       */
      Models::OperateRetryWorkflowExecutionResponse operateRetryWorkflowExecution(const Models::OperateRetryWorkflowExecutionRequest &request);

      /**
       * @summary Skips a task instance.
       *
       * @param request OperateSkipJobExecutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateSkipJobExecutionResponse
       */
      Models::OperateSkipJobExecutionResponse operateSkipJobExecutionWithOptions(const Models::OperateSkipJobExecutionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Skips a task instance.
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
       * @summary Stops a running workflow instance.
       *
       * @param request OperateStopWorkflowExecutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateStopWorkflowExecutionResponse
       */
      Models::OperateStopWorkflowExecutionResponse operateStopWorkflowExecutionWithOptions(const Models::OperateStopWorkflowExecutionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a running workflow instance.
       *
       * @param request OperateStopWorkflowExecutionRequest
       * @return OperateStopWorkflowExecutionResponse
       */
      Models::OperateStopWorkflowExecutionResponse operateStopWorkflowExecution(const Models::OperateStopWorkflowExecutionRequest &request);

      /**
       * @summary Resumes a suspended task instance.
       *
       * @param request OperateUnholdJobExecutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateUnholdJobExecutionResponse
       */
      Models::OperateUnholdJobExecutionResponse operateUnholdJobExecutionWithOptions(const Models::OperateUnholdJobExecutionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resumes a suspended task instance.
       *
       * @param request OperateUnholdJobExecutionRequest
       * @return OperateUnholdJobExecutionResponse
       */
      Models::OperateUnholdJobExecutionResponse operateUnholdJobExecution(const Models::OperateUnholdJobExecutionRequest &request);

      /**
       * @summary Resumes the execution of a suspended workflow instance.
       *
       * @param request OperateUnholdWorkflowExecutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateUnholdWorkflowExecutionResponse
       */
      Models::OperateUnholdWorkflowExecutionResponse operateUnholdWorkflowExecutionWithOptions(const Models::OperateUnholdWorkflowExecutionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resumes the execution of a suspended workflow instance.
       *
       * @param request OperateUnholdWorkflowExecutionRequest
       * @return OperateUnholdWorkflowExecutionResponse
       */
      Models::OperateUnholdWorkflowExecutionResponse operateUnholdWorkflowExecution(const Models::OperateUnholdWorkflowExecutionRequest &request);

      /**
       * @summary Resumes a skipped task instance.
       *
       * @param request OperateUnskipJobExecutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateUnskipJobExecutionResponse
       */
      Models::OperateUnskipJobExecutionResponse operateUnskipJobExecutionWithOptions(const Models::OperateUnskipJobExecutionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resumes a skipped task instance.
       *
       * @param request OperateUnskipJobExecutionRequest
       * @return OperateUnskipJobExecutionResponse
       */
      Models::OperateUnskipJobExecutionResponse operateUnskipJobExecution(const Models::OperateUnskipJobExecutionRequest &request);

      /**
       * @summary Synchronizes nodes.
       *
       * @param tmpReq SyncJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SyncJobsResponse
       */
      Models::SyncJobsResponse syncJobsWithOptions(const Models::SyncJobsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Synchronizes nodes.
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
       * @summary Updates a notification contact.
       *
       * @description Updates a notification contact.
       *
       * @param request UpdateContactRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateContactResponse
       */
      Models::UpdateContactResponse updateContactWithOptions(const Models::UpdateContactRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a notification contact.
       *
       * @description Updates a notification contact.
       *
       * @param request UpdateContactRequest
       * @return UpdateContactResponse
       */
      Models::UpdateContactResponse updateContact(const Models::UpdateContactRequest &request);

      /**
       * @summary Updates a datasource.
       *
       * @param request UpdateDatasourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDatasourceResponse
       */
      Models::UpdateDatasourceResponse updateDatasourceWithOptions(const Models::UpdateDatasourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a datasource.
       *
       * @param request UpdateDatasourceRequest
       * @return UpdateDatasourceResponse
       */
      Models::UpdateDatasourceResponse updateDatasource(const Models::UpdateDatasourceRequest &request);

      /**
       * @summary Updates an executor group.
       *
       * @description # Import the enhancement plugin
       * Add the enhancement plugin to the `pom.xml` file to improve the capabilities of the executor.
       * **Note**: Make sure that the plugin is placed **above** the `xxl-job-core` dependency in the POM file.
       * **For more information, see**: [Plugin version description](https://www.alibabacloud.com/help/en/schedulerx/schedulerx-xxljob/product-overview/plugin-version-description)
       *
       * @param request UpdateExecutorGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateExecutorGroupResponse
       */
      Models::UpdateExecutorGroupResponse updateExecutorGroupWithOptions(const Models::UpdateExecutorGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an executor group.
       *
       * @description # Import the enhancement plugin
       * Add the enhancement plugin to the `pom.xml` file to improve the capabilities of the executor.
       * **Note**: Make sure that the plugin is placed **above** the `xxl-job-core` dependency in the POM file.
       * **For more information, see**: [Plugin version description](https://www.alibabacloud.com/help/en/schedulerx/schedulerx-xxljob/product-overview/plugin-version-description)
       *
       * @param request UpdateExecutorGroupRequest
       * @return UpdateExecutorGroupResponse
       */
      Models::UpdateExecutorGroupResponse updateExecutorGroup(const Models::UpdateExecutorGroupRequest &request);

      /**
       * @summary Updates an executor.
       *
       * @description # Import the enhancement plug-in
       * Add the enhancement plug-in to the `pom.xml` file to enhance the capabilities of the executor.
       * **Note**: Make sure that the plug-in is placed **above** the `xxl-job-core` dependency in the POM file.
       * **For more information**, see [Plug-in version description](https://www.alibabacloud.com/help/en/schedulerx/schedulerx-xxljob/product-overview/plugin-version-description).
       *
       * @param request UpdateExecutorsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateExecutorsResponse
       */
      Models::UpdateExecutorsResponse updateExecutorsWithOptions(const Models::UpdateExecutorsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an executor.
       *
       * @description # Import the enhancement plug-in
       * Add the enhancement plug-in to the `pom.xml` file to enhance the capabilities of the executor.
       * **Note**: Make sure that the plug-in is placed **above** the `xxl-job-core` dependency in the POM file.
       * **For more information**, see [Plug-in version description](https://www.alibabacloud.com/help/en/schedulerx/schedulerx-xxljob/product-overview/plugin-version-description).
       *
       * @param request UpdateExecutorsRequest
       * @return UpdateExecutorsResponse
       */
      Models::UpdateExecutorsResponse updateExecutors(const Models::UpdateExecutorsRequest &request);

      /**
       * @summary Updates the job information.
       *
       * @param tmpReq UpdateJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateJobResponse
       */
      Models::UpdateJobResponse updateJobWithOptions(const Models::UpdateJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the job information.
       *
       * @param request UpdateJobRequest
       * @return UpdateJobResponse
       */
      Models::UpdateJobResponse updateJob(const Models::UpdateJobRequest &request);

      /**
       * @summary Updates a job instance.
       *
       * @param request UpdateJobExecutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateJobExecutionResponse
       */
      Models::UpdateJobExecutionResponse updateJobExecutionWithOptions(const Models::UpdateJobExecutionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a job instance.
       *
       * @param request UpdateJobExecutionRequest
       * @return UpdateJobExecutionResponse
       */
      Models::UpdateJobExecutionResponse updateJobExecution(const Models::UpdateJobExecutionRequest &request);

      /**
       * @summary Updates the task execution script.
       *
       * @param request UpdateJobScriptRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateJobScriptResponse
       */
      Models::UpdateJobScriptResponse updateJobScriptWithOptions(const Models::UpdateJobScriptRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the task execution script.
       *
       * @param request UpdateJobScriptRequest
       * @return UpdateJobScriptResponse
       */
      Models::UpdateJobScriptResponse updateJobScript(const Models::UpdateJobScriptRequest &request);

      /**
       * @summary Updates a workflow.
       *
       * @param request UpdateWorkflowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWorkflowResponse
       */
      Models::UpdateWorkflowResponse updateWorkflowWithOptions(const Models::UpdateWorkflowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a workflow.
       *
       * @param request UpdateWorkflowRequest
       * @return UpdateWorkflowResponse
       */
      Models::UpdateWorkflowResponse updateWorkflow(const Models::UpdateWorkflowRequest &request);

      /**
       * @summary Updates the directed acyclic graph (DAG) information of a workflow, including node coordinates and edges.
       *
       * @param tmpReq UpdateWorkflowDAGRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWorkflowDAGResponse
       */
      Models::UpdateWorkflowDAGResponse updateWorkflowDAGWithOptions(const Models::UpdateWorkflowDAGRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the directed acyclic graph (DAG) information of a workflow, including node coordinates and edges.
       *
       * @param request UpdateWorkflowDAGRequest
       * @return UpdateWorkflowDAGResponse
       */
      Models::UpdateWorkflowDAGResponse updateWorkflowDAG(const Models::UpdateWorkflowDAGRequest &request);

      /**
       * @summary Switches the workflow DAG version.
       *
       * @param request UpdateWorkflowDAGVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWorkflowDAGVersionResponse
       */
      Models::UpdateWorkflowDAGVersionResponse updateWorkflowDAGVersionWithOptions(const Models::UpdateWorkflowDAGVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Switches the workflow DAG version.
       *
       * @param request UpdateWorkflowDAGVersionRequest
       * @return UpdateWorkflowDAGVersionResponse
       */
      Models::UpdateWorkflowDAGVersionResponse updateWorkflowDAGVersion(const Models::UpdateWorkflowDAGVersionRequest &request);
  };
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
