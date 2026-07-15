// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_SCHEDULERX220190430_HPP_
#define ALIBABACLOUD_SCHEDULERX220190430_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Schedulerx220190430Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Schedulerx220190430.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Deletes multiple Jobs.
       *
       * @description Before you call this API, add the following dependency to your POM file:
       * ```xml
       * <dependency>
       *     <groupId>com.aliyun</groupId>
       *     <artifactId>aliyun-java-sdk-schedulerx2</artifactId>
       *     <version>1.0.4</version>
       * </dependency>
       * ```
       *
       * @param request BatchDeleteJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchDeleteJobsResponse
       */
      Models::BatchDeleteJobsResponse batchDeleteJobsWithOptions(const Models::BatchDeleteJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes multiple Jobs.
       *
       * @description Before you call this API, add the following dependency to your POM file:
       * ```xml
       * <dependency>
       *     <groupId>com.aliyun</groupId>
       *     <artifactId>aliyun-java-sdk-schedulerx2</artifactId>
       *     <version>1.0.4</version>
       * </dependency>
       * ```
       *
       * @param request BatchDeleteJobsRequest
       * @return BatchDeleteJobsResponse
       */
      Models::BatchDeleteJobsResponse batchDeleteJobs(const Models::BatchDeleteJobsRequest &request);

      /**
       * @summary Deletes multiple Route Strategies in a batch.
       *
       * @param request BatchDeleteRouteStrategyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchDeleteRouteStrategyResponse
       */
      Models::BatchDeleteRouteStrategyResponse batchDeleteRouteStrategyWithOptions(const Models::BatchDeleteRouteStrategyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes multiple Route Strategies in a batch.
       *
       * @param request BatchDeleteRouteStrategyRequest
       * @return BatchDeleteRouteStrategyResponse
       */
      Models::BatchDeleteRouteStrategyResponse batchDeleteRouteStrategy(const Models::BatchDeleteRouteStrategyRequest &request);

      /**
       * @summary Disables multiple jobs in a batch.
       *
       * @description To call this API, add the following dependency to your POM File:
       * ```xml
       * <dependency>
       *     <groupId>com.aliyun</groupId>
       *     <artifactId>aliyun-java-sdk-schedulerx2</artifactId>
       *     <version>1.0.4</version>
       * </dependency>
       * ```
       *
       * @param request BatchDisableJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchDisableJobsResponse
       */
      Models::BatchDisableJobsResponse batchDisableJobsWithOptions(const Models::BatchDisableJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables multiple jobs in a batch.
       *
       * @description To call this API, add the following dependency to your POM File:
       * ```xml
       * <dependency>
       *     <groupId>com.aliyun</groupId>
       *     <artifactId>aliyun-java-sdk-schedulerx2</artifactId>
       *     <version>1.0.4</version>
       * </dependency>
       * ```
       *
       * @param request BatchDisableJobsRequest
       * @return BatchDisableJobsResponse
       */
      Models::BatchDisableJobsResponse batchDisableJobs(const Models::BatchDisableJobsRequest &request);

      /**
       * @summary Enables multiple jobs at a time.
       *
       * @description Before you call this operation, you must add the following dependency to the pom.xml file:
       * ```xml
       * <dependency>
       *     <groupId>com.aliyun</groupId>
       *     <artifactId>aliyun-java-sdk-schedulerx2</artifactId>
       *     <version>1.0.4</version>
       * </dependency>
       * ```
       *
       * @param request BatchEnableJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchEnableJobsResponse
       */
      Models::BatchEnableJobsResponse batchEnableJobsWithOptions(const Models::BatchEnableJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables multiple jobs at a time.
       *
       * @description Before you call this operation, you must add the following dependency to the pom.xml file:
       * ```xml
       * <dependency>
       *     <groupId>com.aliyun</groupId>
       *     <artifactId>aliyun-java-sdk-schedulerx2</artifactId>
       *     <version>1.0.4</version>
       * </dependency>
       * ```
       *
       * @param request BatchEnableJobsRequest
       * @return BatchEnableJobsResponse
       */
      Models::BatchEnableJobsResponse batchEnableJobs(const Models::BatchEnableJobsRequest &request);

      /**
       * @summary Creates an app group and returns an AppKey.
       *
       * @param request CreateAppGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAppGroupResponse
       */
      Models::CreateAppGroupResponse createAppGroupWithOptions(const Models::CreateAppGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an app group and returns an AppKey.
       *
       * @param request CreateAppGroupRequest
       * @return CreateAppGroupResponse
       */
      Models::CreateAppGroupResponse createAppGroup(const Models::CreateAppGroupRequest &request);

      /**
       * @summary Creates a node and returns the node ID.
       *
       * @param request CreateJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateJobResponse
       */
      Models::CreateJobResponse createJobWithOptions(const Models::CreateJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a node and returns the node ID.
       *
       * @param request CreateJobRequest
       * @return CreateJobResponse
       */
      Models::CreateJobResponse createJob(const Models::CreateJobRequest &request);

      /**
       * @summary Creates a namespace.
       *
       * @param request CreateNamespaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNamespaceResponse
       */
      Models::CreateNamespaceResponse createNamespaceWithOptions(const Models::CreateNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a namespace.
       *
       * @param request CreateNamespaceRequest
       * @return CreateNamespaceResponse
       */
      Models::CreateNamespaceResponse createNamespace(const Models::CreateNamespaceRequest &request);

      /**
       * @summary Creates a routing policy.
       *
       * @param request CreateRouteStrategyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRouteStrategyResponse
       */
      Models::CreateRouteStrategyResponse createRouteStrategyWithOptions(const Models::CreateRouteStrategyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a routing policy.
       *
       * @param request CreateRouteStrategyRequest
       * @return CreateRouteStrategyResponse
       */
      Models::CreateRouteStrategyResponse createRouteStrategy(const Models::CreateRouteStrategyRequest &request);

      /**
       * @summary Creates a calendar.
       *
       * @param request CreateSchedulerxCalendarRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSchedulerxCalendarResponse
       */
      Models::CreateSchedulerxCalendarResponse createSchedulerxCalendarWithOptions(const Models::CreateSchedulerxCalendarRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a calendar.
       *
       * @param request CreateSchedulerxCalendarRequest
       * @return CreateSchedulerxCalendarResponse
       */
      Models::CreateSchedulerxCalendarResponse createSchedulerxCalendar(const Models::CreateSchedulerxCalendarRequest &request);

      /**
       * @summary Creates a notification policy.
       *
       * @param request CreateSchedulerxNotificationPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSchedulerxNotificationPolicyResponse
       */
      Models::CreateSchedulerxNotificationPolicyResponse createSchedulerxNotificationPolicyWithOptions(const Models::CreateSchedulerxNotificationPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a notification policy.
       *
       * @param request CreateSchedulerxNotificationPolicyRequest
       * @return CreateSchedulerxNotificationPolicyResponse
       */
      Models::CreateSchedulerxNotificationPolicyResponse createSchedulerxNotificationPolicy(const Models::CreateSchedulerxNotificationPolicyRequest &request);

      /**
       * @summary Creates a workflow. By default, the created workflow is disabled. After you update the directed acyclic graph (DAG) of the workflow, you must manually or call the corresponding operation to enable the workflow. You can call this operation only in the professional edition.
       *
       * @param request CreateWorkflowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWorkflowResponse
       */
      Models::CreateWorkflowResponse createWorkflowWithOptions(const Models::CreateWorkflowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a workflow. By default, the created workflow is disabled. After you update the directed acyclic graph (DAG) of the workflow, you must manually or call the corresponding operation to enable the workflow. You can call this operation only in the professional edition.
       *
       * @param request CreateWorkflowRequest
       * @return CreateWorkflowResponse
       */
      Models::CreateWorkflowResponse createWorkflow(const Models::CreateWorkflowRequest &request);

      /**
       * @summary Deletes an application group.
       *
       * @param request DeleteAppGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAppGroupResponse
       */
      Models::DeleteAppGroupResponse deleteAppGroupWithOptions(const Models::DeleteAppGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an application group.
       *
       * @param request DeleteAppGroupRequest
       * @return DeleteAppGroupResponse
       */
      Models::DeleteAppGroupResponse deleteAppGroup(const Models::DeleteAppGroupRequest &request);

      /**
       * @summary Deletes a specified job.
       *
       * @param request DeleteJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteJobResponse
       */
      Models::DeleteJobResponse deleteJobWithOptions(const Models::DeleteJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified job.
       *
       * @param request DeleteJobRequest
       * @return DeleteJobResponse
       */
      Models::DeleteJobResponse deleteJob(const Models::DeleteJobRequest &request);

      /**
       * @summary Deletes a namespace.
       *
       * @param request DeleteNamespaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNamespaceResponse
       */
      Models::DeleteNamespaceResponse deleteNamespaceWithOptions(const Models::DeleteNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a namespace.
       *
       * @param request DeleteNamespaceRequest
       * @return DeleteNamespaceResponse
       */
      Models::DeleteNamespaceResponse deleteNamespace(const Models::DeleteNamespaceRequest &request);

      /**
       * @summary Deletes a routing policy.
       *
       * @param request DeleteRouteStrategyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRouteStrategyResponse
       */
      Models::DeleteRouteStrategyResponse deleteRouteStrategyWithOptions(const Models::DeleteRouteStrategyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a routing policy.
       *
       * @param request DeleteRouteStrategyRequest
       * @return DeleteRouteStrategyResponse
       */
      Models::DeleteRouteStrategyResponse deleteRouteStrategy(const Models::DeleteRouteStrategyRequest &request);

      /**
       * @summary Deletes a calendar.
       *
       * @param request DeleteSchedulerxCalendarRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSchedulerxCalendarResponse
       */
      Models::DeleteSchedulerxCalendarResponse deleteSchedulerxCalendarWithOptions(const Models::DeleteSchedulerxCalendarRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a calendar.
       *
       * @param request DeleteSchedulerxCalendarRequest
       * @return DeleteSchedulerxCalendarResponse
       */
      Models::DeleteSchedulerxCalendarResponse deleteSchedulerxCalendar(const Models::DeleteSchedulerxCalendarRequest &request);

      /**
       * @summary Deletes a notification policy.
       *
       * @param request DeleteSchedulerxNotificationPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSchedulerxNotificationPolicyResponse
       */
      Models::DeleteSchedulerxNotificationPolicyResponse deleteSchedulerxNotificationPolicyWithOptions(const Models::DeleteSchedulerxNotificationPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a notification policy.
       *
       * @param request DeleteSchedulerxNotificationPolicyRequest
       * @return DeleteSchedulerxNotificationPolicyResponse
       */
      Models::DeleteSchedulerxNotificationPolicyResponse deleteSchedulerxNotificationPolicy(const Models::DeleteSchedulerxNotificationPolicyRequest &request);

      /**
       * @summary Deletes the specified workflow.
       *
       * @param request DeleteWorkflowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWorkflowResponse
       */
      Models::DeleteWorkflowResponse deleteWorkflowWithOptions(const Models::DeleteWorkflowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the specified workflow.
       *
       * @param request DeleteWorkflowRequest
       * @return DeleteWorkflowResponse
       */
      Models::DeleteWorkflowResponse deleteWorkflow(const Models::DeleteWorkflowRequest &request);

      /**
       * @summary Returns a list of available regions.
       *
       * @param request DescribeRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Models::DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Returns a list of available regions.
       *
       * @param request DescribeRegionsRequest
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions(const Models::DescribeRegionsRequest &request);

      /**
       * @summary Designates machines.
       *
       * @param request DesignateWorkersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DesignateWorkersResponse
       */
      Models::DesignateWorkersResponse designateWorkersWithOptions(const Models::DesignateWorkersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Designates machines.
       *
       * @param request DesignateWorkersRequest
       * @return DesignateWorkersResponse
       */
      Models::DesignateWorkersResponse designateWorkers(const Models::DesignateWorkersRequest &request);

      /**
       * @summary Disables a job.
       *
       * @param request DisableJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableJobResponse
       */
      Models::DisableJobResponse disableJobWithOptions(const Models::DisableJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables a job.
       *
       * @param request DisableJobRequest
       * @return DisableJobResponse
       */
      Models::DisableJobResponse disableJob(const Models::DisableJobRequest &request);

      /**
       * @summary Disables a specified workflow.
       *
       * @param request DisableWorkflowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableWorkflowResponse
       */
      Models::DisableWorkflowResponse disableWorkflowWithOptions(const Models::DisableWorkflowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables a specified workflow.
       *
       * @param request DisableWorkflowRequest
       * @return DisableWorkflowResponse
       */
      Models::DisableWorkflowResponse disableWorkflow(const Models::DisableWorkflowRequest &request);

      /**
       * @summary Enables a job.
       *
       * @description 任务创建完成以后默认启用，所以该功能是在停用任务后使用。
       *
       * @param request EnableJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableJobResponse
       */
      Models::EnableJobResponse enableJobWithOptions(const Models::EnableJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables a job.
       *
       * @description 任务创建完成以后默认启用，所以该功能是在停用任务后使用。
       *
       * @param request EnableJobRequest
       * @return EnableJobResponse
       */
      Models::EnableJobResponse enableJob(const Models::EnableJobRequest &request);

      /**
       * @summary Enables a workflow.
       *
       * @param request EnableWorkflowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableWorkflowResponse
       */
      Models::EnableWorkflowResponse enableWorkflowWithOptions(const Models::EnableWorkflowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables a workflow.
       *
       * @param request EnableWorkflowRequest
       * @return EnableWorkflowResponse
       */
      Models::EnableWorkflowResponse enableWorkflow(const Models::EnableWorkflowRequest &request);

      /**
       * @summary Triggers a job to immediately run once.
       *
       * @description > The combination of the `JobID` and `ScheduleTime` parameters serves as a unique index. Therefore, after the ExecuteJob operation is called to run a job once, a sleep for one second is required before the ExecuteJob operation is called to run the job again. Otherwise, the job may fail.
       *
       * @param request ExecuteJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteJobResponse
       */
      Models::ExecuteJobResponse executeJobWithOptions(const Models::ExecuteJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Triggers a job to immediately run once.
       *
       * @description > The combination of the `JobID` and `ScheduleTime` parameters serves as a unique index. Therefore, after the ExecuteJob operation is called to run a job once, a sleep for one second is required before the ExecuteJob operation is called to run the job again. Otherwise, the job may fail.
       *
       * @param request ExecuteJobRequest
       * @return ExecuteJobResponse
       */
      Models::ExecuteJobResponse executeJob(const Models::ExecuteJobRequest &request);

      /**
       * @summary Executes a workflow immediately.
       *
       * @param request ExecuteWorkflowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteWorkflowResponse
       */
      Models::ExecuteWorkflowResponse executeWorkflowWithOptions(const Models::ExecuteWorkflowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Executes a workflow immediately.
       *
       * @param request ExecuteWorkflowRequest
       * @return ExecuteWorkflowResponse
       */
      Models::ExecuteWorkflowResponse executeWorkflow(const Models::ExecuteWorkflowRequest &request);

      /**
       * @summary Retrieves the details of an App Group.
       *
       * @param request GetAppGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAppGroupResponse
       */
      Models::GetAppGroupResponse getAppGroupWithOptions(const Models::GetAppGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of an App Group.
       *
       * @param request GetAppGroupRequest
       * @return GetAppGroupResponse
       */
      Models::GetAppGroupResponse getAppGroup(const Models::GetAppGroupRequest &request);

      /**
       * @summary Queries the details of a job based on the job ID. In most cases, the obtained information is used to update jobs.
       *
       * @param request GetJobInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetJobInfoResponse
       */
      Models::GetJobInfoResponse getJobInfoWithOptions(const Models::GetJobInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a job based on the job ID. In most cases, the obtained information is used to update jobs.
       *
       * @param request GetJobInfoRequest
       * @return GetJobInfoResponse
       */
      Models::GetJobInfoResponse getJobInfo(const Models::GetJobInfoRequest &request);

      /**
       * @summary Returns the information of a job instance, allowing you to view its status and progress.
       *
       * @param request GetJobInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetJobInstanceResponse
       */
      Models::GetJobInstanceResponse getJobInstanceWithOptions(const Models::GetJobInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Returns the information of a job instance, allowing you to view its status and progress.
       *
       * @param request GetJobInstanceRequest
       * @return GetJobInstanceResponse
       */
      Models::GetJobInstanceResponse getJobInstance(const Models::GetJobInstanceRequest &request);

      /**
       * @summary Queries the most recent 10 execution instances of a job.
       *
       * @param request GetJobInstanceListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetJobInstanceListResponse
       */
      Models::GetJobInstanceListResponse getJobInstanceListWithOptions(const Models::GetJobInstanceListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the most recent 10 execution instances of a job.
       *
       * @param request GetJobInstanceListRequest
       * @return GetJobInstanceListResponse
       */
      Models::GetJobInstanceListResponse getJobInstanceList(const Models::GetJobInstanceListRequest &request);

      /**
       * @summary Queries the operational logs of a job. You can call this operation only in the professional edition.
       *
       * @param request GetLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLogResponse
       */
      Models::GetLogResponse getLogWithOptions(const Models::GetLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the operational logs of a job. You can call this operation only in the professional edition.
       *
       * @param request GetLogRequest
       * @return GetLogResponse
       */
      Models::GetLogResponse getLog(const Models::GetLogRequest &request);

      /**
       * @summary Retrieves the overview data of task scheduling for a professional edition application.
       *
       * @param request GetOverviewRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOverviewResponse
       */
      Models::GetOverviewResponse getOverviewWithOptions(const Models::GetOverviewRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the overview data of task scheduling for a professional edition application.
       *
       * @param request GetOverviewRequest
       * @return GetOverviewResponse
       */
      Models::GetOverviewResponse getOverview(const Models::GetOverviewRequest &request);

      /**
       * @summary Retrieves workflow information.
       *
       * @param request GetWorkFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWorkFlowResponse
       */
      Models::GetWorkFlowResponse getWorkFlowWithOptions(const Models::GetWorkFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves workflow information.
       *
       * @param request GetWorkFlowRequest
       * @return GetWorkFlowResponse
       */
      Models::GetWorkFlowResponse getWorkFlow(const Models::GetWorkFlowRequest &request);

      /**
       * @summary Obtains the list of workers that are connected to an application.
       *
       * @param request GetWorkerListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWorkerListResponse
       */
      Models::GetWorkerListResponse getWorkerListWithOptions(const Models::GetWorkerListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the list of workers that are connected to an application.
       *
       * @param request GetWorkerListRequest
       * @return GetWorkerListResponse
       */
      Models::GetWorkerListResponse getWorkerList(const Models::GetWorkerListRequest &request);

      /**
       * @summary Queries the details of a specified workflow instance, including the state of the workflow instance, the state of each job instance, and the dependencies between job instances. You can call this operation only in the professional edition.
       *
       * @param request GetWorkflowInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWorkflowInstanceResponse
       */
      Models::GetWorkflowInstanceResponse getWorkflowInstanceWithOptions(const Models::GetWorkflowInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specified workflow instance, including the state of the workflow instance, the state of each job instance, and the dependencies between job instances. You can call this operation only in the professional edition.
       *
       * @param request GetWorkflowInstanceRequest
       * @return GetWorkflowInstanceResponse
       */
      Models::GetWorkflowInstanceResponse getWorkflowInstance(const Models::GetWorkflowInstanceRequest &request);

      /**
       * @summary Grants permissions to an application group.
       *
       * @param request GrantPermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GrantPermissionResponse
       */
      Models::GrantPermissionResponse grantPermissionWithOptions(const Models::GrantPermissionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Grants permissions to an application group.
       *
       * @param request GrantPermissionRequest
       * @return GrantPermissionResponse
       */
      Models::GrantPermissionResponse grantPermission(const Models::GrantPermissionRequest &request);

      /**
       * @summary Gets the list of applications.
       *
       * @description Before you call this operation, add the following dependency to your POM file:
       * ```xml
       * <dependency>
       *     <groupId>com.aliyun</groupId>
       *     <artifactId>aliyun-java-sdk-schedulerx2</artifactId>
       *     <version>1.0.5</version>
       * </dependency>
       * ```
       *
       * @param request ListGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGroupsResponse
       */
      Models::ListGroupsResponse listGroupsWithOptions(const Models::ListGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets the list of applications.
       *
       * @description Before you call this operation, add the following dependency to your POM file:
       * ```xml
       * <dependency>
       *     <groupId>com.aliyun</groupId>
       *     <artifactId>aliyun-java-sdk-schedulerx2</artifactId>
       *     <version>1.0.5</version>
       * </dependency>
       * ```
       *
       * @param request ListGroupsRequest
       * @return ListGroupsResponse
       */
      Models::ListGroupsResponse listGroups(const Models::ListGroupsRequest &request);

      /**
       * @summary Queries historical scripts of a job.
       *
       * @param request ListJobScriptHistoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListJobScriptHistoryResponse
       */
      Models::ListJobScriptHistoryResponse listJobScriptHistoryWithOptions(const Models::ListJobScriptHistoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries historical scripts of a job.
       *
       * @param request ListJobScriptHistoryRequest
       * @return ListJobScriptHistoryResponse
       */
      Models::ListJobScriptHistoryResponse listJobScriptHistory(const Models::ListJobScriptHistoryRequest &request);

      /**
       * @summary Retrieves a list of nodes.
       *
       * @description Before calling this operation, add the following dependency to the POM file:
       * ```
       * <dependency>
       *       <groupId>com.aliyun</groupId>
       *       <artifactId>aliyun-java-sdk-schedulerx2</artifactId>
       *       <version>1.0.5</version>
       * </dependency>
       * ```
       *
       * @param request ListJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListJobsResponse
       */
      Models::ListJobsResponse listJobsWithOptions(const Models::ListJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of nodes.
       *
       * @description Before calling this operation, add the following dependency to the POM file:
       * ```
       * <dependency>
       *       <groupId>com.aliyun</groupId>
       *       <artifactId>aliyun-java-sdk-schedulerx2</artifactId>
       *       <version>1.0.5</version>
       * </dependency>
       * ```
       *
       * @param request ListJobsRequest
       * @return ListJobsResponse
       */
      Models::ListJobsResponse listJobs(const Models::ListJobsRequest &request);

      /**
       * @summary Queries namespaces.
       *
       * @description Before you call this operation, you must add the following dependency to the pom.xml file:
       *     <dependency>
       *         <groupId>com.aliyun</groupId>
       *         <artifactId>aliyun-java-sdk-schedulerx2</artifactId>
       *         <version>1.0.5</version>
       *     </dependency>
       *
       * @param request ListNamespacesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNamespacesResponse
       */
      Models::ListNamespacesResponse listNamespacesWithOptions(const Models::ListNamespacesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries namespaces.
       *
       * @description Before you call this operation, you must add the following dependency to the pom.xml file:
       *     <dependency>
       *         <groupId>com.aliyun</groupId>
       *         <artifactId>aliyun-java-sdk-schedulerx2</artifactId>
       *         <version>1.0.5</version>
       *     </dependency>
       *
       * @param request ListNamespacesRequest
       * @return ListNamespacesResponse
       */
      Models::ListNamespacesResponse listNamespaces(const Models::ListNamespacesRequest &request);

      /**
       * @summary Queries the information of a workflow.
       *
       * @param request ListWorkFlowsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWorkFlowsResponse
       */
      Models::ListWorkFlowsResponse listWorkFlowsWithOptions(const Models::ListWorkFlowsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information of a workflow.
       *
       * @param request ListWorkFlowsRequest
       * @return ListWorkFlowsResponse
       */
      Models::ListWorkFlowsResponse listWorkFlows(const Models::ListWorkFlowsRequest &request);

      /**
       * @summary Queries the execution history of a workflow. You can call this operation only in the professional edition.
       *
       * @param request ListWorkflowInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWorkflowInstanceResponse
       */
      Models::ListWorkflowInstanceResponse listWorkflowInstanceWithOptions(const Models::ListWorkflowInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the execution history of a workflow. You can call this operation only in the professional edition.
       *
       * @param request ListWorkflowInstanceRequest
       * @return ListWorkflowInstanceResponse
       */
      Models::ListWorkflowInstanceResponse listWorkflowInstance(const Models::ListWorkflowInstanceRequest &request);

      /**
       * @summary Updates a calendar.
       *
       * @param request ManageSchedulerxCalendarRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ManageSchedulerxCalendarResponse
       */
      Models::ManageSchedulerxCalendarResponse manageSchedulerxCalendarWithOptions(const Models::ManageSchedulerxCalendarRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a calendar.
       *
       * @param request ManageSchedulerxCalendarRequest
       * @return ManageSchedulerxCalendarResponse
       */
      Models::ManageSchedulerxCalendarResponse manageSchedulerxCalendar(const Models::ManageSchedulerxCalendarRequest &request);

      /**
       * @summary Synchronizes tasks across namespaces.
       *
       * @param tmpReq ManageSchedulerxJobSyncRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ManageSchedulerxJobSyncResponse
       */
      Models::ManageSchedulerxJobSyncResponse manageSchedulerxJobSyncWithOptions(const Models::ManageSchedulerxJobSyncRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Synchronizes tasks across namespaces.
       *
       * @param request ManageSchedulerxJobSyncRequest
       * @return ManageSchedulerxJobSyncResponse
       */
      Models::ManageSchedulerxJobSyncResponse manageSchedulerxJobSync(const Models::ManageSchedulerxJobSyncRequest &request);

      /**
       * @summary Updates a notification policy.
       *
       * @param request ManageSchedulerxNotificationPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ManageSchedulerxNotificationPolicyResponse
       */
      Models::ManageSchedulerxNotificationPolicyResponse manageSchedulerxNotificationPolicyWithOptions(const Models::ManageSchedulerxNotificationPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a notification policy.
       *
       * @param request ManageSchedulerxNotificationPolicyRequest
       * @return ManageSchedulerxNotificationPolicyResponse
       */
      Models::ManageSchedulerxNotificationPolicyResponse manageSchedulerxNotificationPolicy(const Models::ManageSchedulerxNotificationPolicyRequest &request);

      /**
       * @summary Retrieves the information of a calendar.
       *
       * @param request ReadSchedulerxCalendarRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReadSchedulerxCalendarResponse
       */
      Models::ReadSchedulerxCalendarResponse readSchedulerxCalendarWithOptions(const Models::ReadSchedulerxCalendarRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the information of a calendar.
       *
       * @param request ReadSchedulerxCalendarRequest
       * @return ReadSchedulerxCalendarResponse
       */
      Models::ReadSchedulerxCalendarResponse readSchedulerxCalendar(const Models::ReadSchedulerxCalendarRequest &request);

      /**
       * @summary Queries detailed information of the workers specified by a job.
       *
       * @param request ReadSchedulerxDesignateDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReadSchedulerxDesignateDetailResponse
       */
      Models::ReadSchedulerxDesignateDetailResponse readSchedulerxDesignateDetailWithOptions(const Models::ReadSchedulerxDesignateDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries detailed information of the workers specified by a job.
       *
       * @param request ReadSchedulerxDesignateDetailRequest
       * @return ReadSchedulerxDesignateDetailResponse
       */
      Models::ReadSchedulerxDesignateDetailResponse readSchedulerxDesignateDetail(const Models::ReadSchedulerxDesignateDetailRequest &request);

      /**
       * @summary Retrieves basic information for the specified instance.
       *
       * @param request ReadSchedulerxDesignateInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReadSchedulerxDesignateInfoResponse
       */
      Models::ReadSchedulerxDesignateInfoResponse readSchedulerxDesignateInfoWithOptions(const Models::ReadSchedulerxDesignateInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves basic information for the specified instance.
       *
       * @param request ReadSchedulerxDesignateInfoRequest
       * @return ReadSchedulerxDesignateInfoResponse
       */
      Models::ReadSchedulerxDesignateInfoResponse readSchedulerxDesignateInfo(const Models::ReadSchedulerxDesignateInfoRequest &request);

      /**
       * @summary Queries notification policies.
       *
       * @param request ReadSchedulerxNotificationPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReadSchedulerxNotificationPolicyResponse
       */
      Models::ReadSchedulerxNotificationPolicyResponse readSchedulerxNotificationPolicyWithOptions(const Models::ReadSchedulerxNotificationPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries notification policies.
       *
       * @param request ReadSchedulerxNotificationPolicyRequest
       * @return ReadSchedulerxNotificationPolicyResponse
       */
      Models::ReadSchedulerxNotificationPolicyResponse readSchedulerxNotificationPolicy(const Models::ReadSchedulerxNotificationPolicyRequest &request);

      /**
       * @summary Reruns a job to obtain the historical data of the job. You can call this operation only in the professional edition.
       *
       * @param request RerunJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RerunJobResponse
       */
      Models::RerunJobResponse rerunJobWithOptions(const Models::RerunJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Reruns a job to obtain the historical data of the job. You can call this operation only in the professional edition.
       *
       * @param request RerunJobRequest
       * @return RerunJobResponse
       */
      Models::RerunJobResponse rerunJob(const Models::RerunJobRequest &request);

      /**
       * @summary Reruns a node instance in the failed or successful state. Only the professional edition supports this operation.
       *
       * @param request RetryJobInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RetryJobInstanceResponse
       */
      Models::RetryJobInstanceResponse retryJobInstanceWithOptions(const Models::RetryJobInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Reruns a node instance in the failed or successful state. Only the professional edition supports this operation.
       *
       * @param request RetryJobInstanceRequest
       * @return RetryJobInstanceResponse
       */
      Models::RetryJobInstanceResponse retryJobInstance(const Models::RetryJobInstanceRequest &request);

      /**
       * @summary Revokes the permissions that are granted to an Alibaba Cloud Resource Access Management (RAM) user.
       *
       * @param request RevokePermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokePermissionResponse
       */
      Models::RevokePermissionResponse revokePermissionWithOptions(const Models::RevokePermissionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes the permissions that are granted to an Alibaba Cloud Resource Access Management (RAM) user.
       *
       * @param request RevokePermissionRequest
       * @return RevokePermissionResponse
       */
      Models::RevokePermissionResponse revokePermission(const Models::RevokePermissionRequest &request);

      /**
       * @summary Forcibly sets the instance status of a node to successful. Only the professional edition supports this operation.
       *
       * @param request SetJobInstanceSuccessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetJobInstanceSuccessResponse
       */
      Models::SetJobInstanceSuccessResponse setJobInstanceSuccessWithOptions(const Models::SetJobInstanceSuccessRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Forcibly sets the instance status of a node to successful. Only the professional edition supports this operation.
       *
       * @param request SetJobInstanceSuccessRequest
       * @return SetJobInstanceSuccessResponse
       */
      Models::SetJobInstanceSuccessResponse setJobInstanceSuccess(const Models::SetJobInstanceSuccessRequest &request);

      /**
       * @summary Forcibly sets the state of a workflow instance to successful. You can call this operation only in the professional edition.
       *
       * @param request SetWfInstanceSuccessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetWfInstanceSuccessResponse
       */
      Models::SetWfInstanceSuccessResponse setWfInstanceSuccessWithOptions(const Models::SetWfInstanceSuccessRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Forcibly sets the state of a workflow instance to successful. You can call this operation only in the professional edition.
       *
       * @param request SetWfInstanceSuccessRequest
       * @return SetWfInstanceSuccessResponse
       */
      Models::SetWfInstanceSuccessResponse setWfInstanceSuccess(const Models::SetWfInstanceSuccessRequest &request);

      /**
       * @summary Stops a job instance in the running state.
       *
       * @param request StopInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopInstanceResponse
       */
      Models::StopInstanceResponse stopInstanceWithOptions(const Models::StopInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a job instance in the running state.
       *
       * @param request StopInstanceRequest
       * @return StopInstanceResponse
       */
      Models::StopInstanceResponse stopInstance(const Models::StopInstanceRequest &request);

      /**
       * @summary Update the application group.
       *
       * @param request UpdateAppGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAppGroupResponse
       */
      Models::UpdateAppGroupResponse updateAppGroupWithOptions(const Models::UpdateAppGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update the application group.
       *
       * @param request UpdateAppGroupRequest
       * @return UpdateAppGroupResponse
       */
      Models::UpdateAppGroupResponse updateAppGroup(const Models::UpdateAppGroupRequest &request);

      /**
       * @summary Updates the configuration of a node. By default, call the get node operation first to find the corresponding fields to modify.
       *
       * @param request UpdateJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateJobResponse
       */
      Models::UpdateJobResponse updateJobWithOptions(const Models::UpdateJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configuration of a node. By default, call the get node operation first to find the corresponding fields to modify.
       *
       * @param request UpdateJobRequest
       * @return UpdateJobResponse
       */
      Models::UpdateJobResponse updateJob(const Models::UpdateJobRequest &request);

      /**
       * @summary Updates the execution script of a job.
       *
       * @param request UpdateJobScriptRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateJobScriptResponse
       */
      Models::UpdateJobScriptResponse updateJobScriptWithOptions(const Models::UpdateJobScriptRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the execution script of a job.
       *
       * @param request UpdateJobScriptRequest
       * @return UpdateJobScriptResponse
       */
      Models::UpdateJobScriptResponse updateJobScript(const Models::UpdateJobScriptRequest &request);

      /**
       * @summary Updates a namespace.
       *
       * @param request UpdateNamespaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateNamespaceResponse
       */
      Models::UpdateNamespaceResponse updateNamespaceWithOptions(const Models::UpdateNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a namespace.
       *
       * @param request UpdateNamespaceRequest
       * @return UpdateNamespaceResponse
       */
      Models::UpdateNamespaceResponse updateNamespace(const Models::UpdateNamespaceRequest &request);

      /**
       * @summary Updates the basic information about a workflow. You can call this operation only in the professional edition.
       *
       * @param request UpdateWorkflowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWorkflowResponse
       */
      Models::UpdateWorkflowResponse updateWorkflowWithOptions(const Models::UpdateWorkflowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the basic information about a workflow. You can call this operation only in the professional edition.
       *
       * @param request UpdateWorkflowRequest
       * @return UpdateWorkflowResponse
       */
      Models::UpdateWorkflowResponse updateWorkflow(const Models::UpdateWorkflowRequest &request);

      /**
       * @summary Updates the nodes and dependencies of a workflow. This operation is available only in the Enterprise Edition.
       *
       * @param request UpdateWorkflowDagRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWorkflowDagResponse
       */
      Models::UpdateWorkflowDagResponse updateWorkflowDagWithOptions(const Models::UpdateWorkflowDagRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the nodes and dependencies of a workflow. This operation is available only in the Enterprise Edition.
       *
       * @param request UpdateWorkflowDagRequest
       * @return UpdateWorkflowDagResponse
       */
      Models::UpdateWorkflowDagResponse updateWorkflowDag(const Models::UpdateWorkflowDagRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif
