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
       * @summary 创建应用
       *
       * @param request CreateAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAppResponse
       */
      Models::CreateAppResponse createAppWithOptions(const Models::CreateAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建应用
       *
       * @param request CreateAppRequest
       * @return CreateAppResponse
       */
      Models::CreateAppResponse createApp(const Models::CreateAppRequest &request);

      /**
       * @summary 创建集群
       *
       * @param tmpReq CreateClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateClusterResponse
       */
      Models::CreateClusterResponse createClusterWithOptions(const Models::CreateClusterRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建集群
       *
       * @param request CreateClusterRequest
       * @return CreateClusterResponse
       */
      Models::CreateClusterResponse createCluster(const Models::CreateClusterRequest &request);

      /**
       * @summary 添加执行器
       *
       * @param request CreateExecutorsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateExecutorsResponse
       */
      Models::CreateExecutorsResponse createExecutorsWithOptions(const Models::CreateExecutorsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 添加执行器
       *
       * @param request CreateExecutorsRequest
       * @return CreateExecutorsResponse
       */
      Models::CreateExecutorsResponse createExecutors(const Models::CreateExecutorsRequest &request);

      /**
       * @summary 创建任务
       *
       * @param tmpReq CreateJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateJobResponse
       */
      Models::CreateJobResponse createJobWithOptions(const Models::CreateJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建任务
       *
       * @param request CreateJobRequest
       * @return CreateJobResponse
       */
      Models::CreateJobResponse createJob(const Models::CreateJobRequest &request);

      /**
       * @summary 删除应用分组
       *
       * @param request DeleteAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAppResponse
       */
      Models::DeleteAppResponse deleteAppWithOptions(const Models::DeleteAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除应用分组
       *
       * @param request DeleteAppRequest
       * @return DeleteAppResponse
       */
      Models::DeleteAppResponse deleteApp(const Models::DeleteAppRequest &request);

      /**
       * @summary 释放删除集群
       *
       * @param request DeleteClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteClusterResponse
       */
      Models::DeleteClusterResponse deleteClusterWithOptions(const Models::DeleteClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 释放删除集群
       *
       * @param request DeleteClusterRequest
       * @return DeleteClusterResponse
       */
      Models::DeleteClusterResponse deleteCluster(const Models::DeleteClusterRequest &request);

      /**
       * @summary 批量删除任务
       *
       * @param tmpReq DeleteJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteJobsResponse
       */
      Models::DeleteJobsResponse deleteJobsWithOptions(const Models::DeleteJobsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量删除任务
       *
       * @param request DeleteJobsRequest
       * @return DeleteJobsResponse
       */
      Models::DeleteJobsResponse deleteJobs(const Models::DeleteJobsRequest &request);

      /**
       * @summary 批量导出任务信息
       *
       * @param tmpReq ExportJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportJobsResponse
       */
      Models::ExportJobsResponse exportJobsWithOptions(const Models::ExportJobsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量导出任务信息
       *
       * @param request ExportJobsRequest
       * @return ExportJobsResponse
       */
      Models::ExportJobsResponse exportJobs(const Models::ExportJobsRequest &request);

      /**
       * @summary 获取指定应用
       *
       * @param request GetAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAppResponse
       */
      Models::GetAppResponse getAppWithOptions(const Models::GetAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取指定应用
       *
       * @param request GetAppRequest
       * @return GetAppResponse
       */
      Models::GetAppResponse getApp(const Models::GetAppRequest &request);

      /**
       * @summary 获取集群详细信息
       *
       * @param request GetClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetClusterResponse
       */
      Models::GetClusterResponse getClusterWithOptions(const Models::GetClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取集群详细信息
       *
       * @param request GetClusterRequest
       * @return GetClusterResponse
       */
      Models::GetClusterResponse getCluster(const Models::GetClusterRequest &request);

      /**
       * @summary 获取指定机器信息
       *
       * @param request GetDesigateInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDesigateInfoResponse
       */
      Models::GetDesigateInfoResponse getDesigateInfoWithOptions(const Models::GetDesigateInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取指定机器信息
       *
       * @param request GetDesigateInfoRequest
       * @return GetDesigateInfoResponse
       */
      Models::GetDesigateInfoResponse getDesigateInfo(const Models::GetDesigateInfoRequest &request);

      /**
       * @summary 查询执行器配置信息
       *
       * @param request GetExecutorConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetExecutorConfigResponse
       */
      Models::GetExecutorConfigResponse getExecutorConfigWithOptions(const Models::GetExecutorConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询执行器配置信息
       *
       * @param request GetExecutorConfigRequest
       * @return GetExecutorConfigResponse
       */
      Models::GetExecutorConfigResponse getExecutorConfig(const Models::GetExecutorConfigRequest &request);

      /**
       * @summary 获取任务执行的详细信息
       *
       * @param request GetJobExecutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetJobExecutionResponse
       */
      Models::GetJobExecutionResponse getJobExecutionWithOptions(const Models::GetJobExecutionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取任务执行的详细信息
       *
       * @param request GetJobExecutionRequest
       * @return GetJobExecutionResponse
       */
      Models::GetJobExecutionResponse getJobExecution(const Models::GetJobExecutionRequest &request);

      /**
       * @summary 获取任务执行的详情
       *
       * @param request GetJobExecutionProgressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetJobExecutionProgressResponse
       */
      Models::GetJobExecutionProgressResponse getJobExecutionProgressWithOptions(const Models::GetJobExecutionProgressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取任务执行的详情
       *
       * @param request GetJobExecutionProgressRequest
       * @return GetJobExecutionProgressResponse
       */
      Models::GetJobExecutionProgressResponse getJobExecutionProgress(const Models::GetJobExecutionProgressRequest &request);

      /**
       * @summary 查询任务的线程堆栈
       *
       * @param request GetJobExecutionThreadDumpRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetJobExecutionThreadDumpResponse
       */
      Models::GetJobExecutionThreadDumpResponse getJobExecutionThreadDumpWithOptions(const Models::GetJobExecutionThreadDumpRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询任务的线程堆栈
       *
       * @param request GetJobExecutionThreadDumpRequest
       * @return GetJobExecutionThreadDumpResponse
       */
      Models::GetJobExecutionThreadDumpResponse getJobExecutionThreadDump(const Models::GetJobExecutionThreadDumpRequest &request);

      /**
       * @summary 查询日志
       *
       * @param request GetLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLogResponse
       */
      Models::GetLogResponse getLogWithOptions(const Models::GetLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询日志
       *
       * @param request GetLogRequest
       * @return GetLogResponse
       */
      Models::GetLogResponse getLog(const Models::GetLogRequest &request);

      /**
       * @summary 查询事件
       *
       * @param request GetLogEventRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLogEventResponse
       */
      Models::GetLogEventResponse getLogEventWithOptions(const Models::GetLogEventRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询事件
       *
       * @param request GetLogEventRequest
       * @return GetLogEventResponse
       */
      Models::GetLogEventResponse getLogEvent(const Models::GetLogEventRequest &request);

      /**
       * @summary 导入日历
       *
       * @param request ImportCalendarRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportCalendarResponse
       */
      Models::ImportCalendarResponse importCalendarWithOptions(const Models::ImportCalendarRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 导入日历
       *
       * @param request ImportCalendarRequest
       * @return ImportCalendarResponse
       */
      Models::ImportCalendarResponse importCalendar(const Models::ImportCalendarRequest &request);

      /**
       * @summary 批量导入任务
       *
       * @param request ImportJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportJobsResponse
       */
      Models::ImportJobsResponse importJobsWithOptions(const Models::ImportJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量导入任务
       *
       * @param request ImportJobsRequest
       * @return ImportJobsResponse
       */
      Models::ImportJobsResponse importJobs(const Models::ImportJobsRequest &request);

      /**
       * @summary 获取报警事件
       *
       * @param request ListAlarmEventRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAlarmEventResponse
       */
      Models::ListAlarmEventResponse listAlarmEventWithOptions(const Models::ListAlarmEventRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取报警事件
       *
       * @param request ListAlarmEventRequest
       * @return ListAlarmEventResponse
       */
      Models::ListAlarmEventResponse listAlarmEvent(const Models::ListAlarmEventRequest &request);

      /**
       * @summary 获取应用名字列表
       *
       * @param request ListAppNamesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAppNamesResponse
       */
      Models::ListAppNamesResponse listAppNamesWithOptions(const Models::ListAppNamesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取应用名字列表
       *
       * @param request ListAppNamesRequest
       * @return ListAppNamesResponse
       */
      Models::ListAppNamesResponse listAppNames(const Models::ListAppNamesRequest &request);

      /**
       * @summary 获取应用列表
       *
       * @param request ListAppsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAppsResponse
       */
      Models::ListAppsResponse listAppsWithOptions(const Models::ListAppsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取应用列表
       *
       * @param request ListAppsRequest
       * @return ListAppsResponse
       */
      Models::ListAppsResponse listApps(const Models::ListAppsRequest &request);

      /**
       * @summary 获取日历名字列表
       *
       * @param request ListCalendarNamesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCalendarNamesResponse
       */
      Models::ListCalendarNamesResponse listCalendarNamesWithOptions(const Models::ListCalendarNamesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取日历名字列表
       *
       * @param request ListCalendarNamesRequest
       * @return ListCalendarNamesResponse
       */
      Models::ListCalendarNamesResponse listCalendarNames(const Models::ListCalendarNamesRequest &request);

      /**
       * @summary 查询实例列表
       *
       * @param request ListClustersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListClustersResponse
       */
      Models::ListClustersResponse listClustersWithOptions(const Models::ListClustersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询实例列表
       *
       * @param request ListClustersRequest
       * @return ListClustersResponse
       */
      Models::ListClustersResponse listClusters(const Models::ListClustersRequest &request);

      /**
       * @summary 查询Executor列表
       *
       * @param request ListExecutorsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListExecutorsResponse
       */
      Models::ListExecutorsResponse listExecutorsWithOptions(const Models::ListExecutorsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询Executor列表
       *
       * @param request ListExecutorsRequest
       * @return ListExecutorsResponse
       */
      Models::ListExecutorsResponse listExecutors(const Models::ListExecutorsRequest &request);

      /**
       * @summary 获取任务实例列表
       *
       * @param request ListJobExecutionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListJobExecutionsResponse
       */
      Models::ListJobExecutionsResponse listJobExecutionsWithOptions(const Models::ListJobExecutionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取任务实例列表
       *
       * @param request ListJobExecutionsRequest
       * @return ListJobExecutionsResponse
       */
      Models::ListJobExecutionsResponse listJobExecutions(const Models::ListJobExecutionsRequest &request);

      /**
       * @summary 获取任务脚本历史列表
       *
       * @param request ListJobScriptHistoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListJobScriptHistoryResponse
       */
      Models::ListJobScriptHistoryResponse listJobScriptHistoryWithOptions(const Models::ListJobScriptHistoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取任务脚本历史列表
       *
       * @param request ListJobScriptHistoryRequest
       * @return ListJobScriptHistoryResponse
       */
      Models::ListJobScriptHistoryResponse listJobScriptHistory(const Models::ListJobScriptHistoryRequest &request);

      /**
       * @summary 获取任务列表
       *
       * @param request ListJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListJobsResponse
       */
      Models::ListJobsResponse listJobsWithOptions(const Models::ListJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取任务列表
       *
       * @param request ListJobsRequest
       * @return ListJobsResponse
       */
      Models::ListJobsResponse listJobs(const Models::ListJobsRequest &request);

      /**
       * @summary 获取k8s资源列表
       *
       * @param request ListK8sResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListK8sResourceResponse
       */
      Models::ListK8sResourceResponse listK8sResourceWithOptions(const Models::ListK8sResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取k8s资源列表
       *
       * @param request ListK8sResourceRequest
       * @return ListK8sResourceResponse
       */
      Models::ListK8sResourceResponse listK8sResource(const Models::ListK8sResourceRequest &request);

      /**
       * @summary 获取executor的label列表
       *
       * @param request ListLablesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLablesResponse
       */
      Models::ListLablesResponse listLablesWithOptions(const Models::ListLablesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取executor的label列表
       *
       * @param request ListLablesRequest
       * @return ListLablesResponse
       */
      Models::ListLablesResponse listLables(const Models::ListLablesRequest &request);

      /**
       * @summary 获取可用区列表
       *
       * @param request ListRegionZoneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRegionZoneResponse
       */
      Models::ListRegionZoneResponse listRegionZoneWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取可用区列表
       *
       * @return ListRegionZoneResponse
       */
      Models::ListRegionZoneResponse listRegionZone();

      /**
       * @summary 获取所有region列表
       *
       * @param request ListRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRegionsResponse
       */
      Models::ListRegionsResponse listRegionsWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取所有region列表
       *
       * @return ListRegionsResponse
       */
      Models::ListRegionsResponse listRegions();

      /**
       * @summary 查询调度事件
       *
       * @param request ListScheduleEventRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListScheduleEventResponse
       */
      Models::ListScheduleEventResponse listScheduleEventWithOptions(const Models::ListScheduleEventRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询调度事件
       *
       * @param request ListScheduleEventRequest
       * @return ListScheduleEventResponse
       */
      Models::ListScheduleEventResponse listScheduleEvent(const Models::ListScheduleEventRequest &request);

      /**
       * @summary 获取指定时间类型和表达式未来5次调度时间
       *
       * @param request ListScheduleTimesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListScheduleTimesResponse
       */
      Models::ListScheduleTimesResponse listScheduleTimesWithOptions(const Models::ListScheduleTimesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取指定时间类型和表达式未来5次调度时间
       *
       * @param request ListScheduleTimesRequest
       * @return ListScheduleTimesResponse
       */
      Models::ListScheduleTimesResponse listScheduleTimes(const Models::ListScheduleTimesRequest &request);

      /**
       * @summary 指定执行器
       *
       * @param tmpReq OperateDesignateExecutorsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateDesignateExecutorsResponse
       */
      Models::OperateDesignateExecutorsResponse operateDesignateExecutorsWithOptions(const Models::OperateDesignateExecutorsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 指定执行器
       *
       * @param request OperateDesignateExecutorsRequest
       * @return OperateDesignateExecutorsResponse
       */
      Models::OperateDesignateExecutorsResponse operateDesignateExecutors(const Models::OperateDesignateExecutorsRequest &request);

      /**
       * @summary 批量禁用任务
       *
       * @param tmpReq OperateDisableJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateDisableJobsResponse
       */
      Models::OperateDisableJobsResponse operateDisableJobsWithOptions(const Models::OperateDisableJobsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量禁用任务
       *
       * @param request OperateDisableJobsRequest
       * @return OperateDisableJobsResponse
       */
      Models::OperateDisableJobsResponse operateDisableJobs(const Models::OperateDisableJobsRequest &request);

      /**
       * @summary 批量启用任务
       *
       * @param tmpReq OperateEnableJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateEnableJobsResponse
       */
      Models::OperateEnableJobsResponse operateEnableJobsWithOptions(const Models::OperateEnableJobsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量启用任务
       *
       * @param request OperateEnableJobsRequest
       * @return OperateEnableJobsResponse
       */
      Models::OperateEnableJobsResponse operateEnableJobs(const Models::OperateEnableJobsRequest &request);

      /**
       * @summary 运行一次任务
       *
       * @param request OperateExecuteJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateExecuteJobResponse
       */
      Models::OperateExecuteJobResponse operateExecuteJobWithOptions(const Models::OperateExecuteJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 运行一次任务
       *
       * @param request OperateExecuteJobRequest
       * @return OperateExecuteJobResponse
       */
      Models::OperateExecuteJobResponse operateExecuteJob(const Models::OperateExecuteJobRequest &request);

      /**
       * @summary 重刷任务历史数据
       *
       * @param request OperateRerunJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateRerunJobResponse
       */
      Models::OperateRerunJobResponse operateRerunJobWithOptions(const Models::OperateRerunJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 重刷任务历史数据
       *
       * @param request OperateRerunJobRequest
       * @return OperateRerunJobResponse
       */
      Models::OperateRerunJobResponse operateRerunJob(const Models::OperateRerunJobRequest &request);

      /**
       * @summary 重跑失败的任务实例
       *
       * @param tmpReq OperateRetryJobExecutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateRetryJobExecutionResponse
       */
      Models::OperateRetryJobExecutionResponse operateRetryJobExecutionWithOptions(const Models::OperateRetryJobExecutionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 重跑失败的任务实例
       *
       * @param request OperateRetryJobExecutionRequest
       * @return OperateRetryJobExecutionResponse
       */
      Models::OperateRetryJobExecutionResponse operateRetryJobExecution(const Models::OperateRetryJobExecutionRequest &request);

      /**
       * @summary 停止运行中的任务实例
       *
       * @param tmpReq OperateStopJobExecutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateStopJobExecutionResponse
       */
      Models::OperateStopJobExecutionResponse operateStopJobExecutionWithOptions(const Models::OperateStopJobExecutionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 停止运行中的任务实例
       *
       * @param request OperateStopJobExecutionRequest
       * @return OperateStopJobExecutionResponse
       */
      Models::OperateStopJobExecutionResponse operateStopJobExecution(const Models::OperateStopJobExecutionRequest &request);

      /**
       * @summary 同步任务
       *
       * @param tmpReq SyncJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SyncJobsResponse
       */
      Models::SyncJobsResponse syncJobsWithOptions(const Models::SyncJobsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 同步任务
       *
       * @param request SyncJobsRequest
       * @return SyncJobsResponse
       */
      Models::SyncJobsResponse syncJobs(const Models::SyncJobsRequest &request);

      /**
       * @summary 更新应用分组
       *
       * @param request UpdateAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAppResponse
       */
      Models::UpdateAppResponse updateAppWithOptions(const Models::UpdateAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新应用分组
       *
       * @param request UpdateAppRequest
       * @return UpdateAppResponse
       */
      Models::UpdateAppResponse updateApp(const Models::UpdateAppRequest &request);

      /**
       * @summary 更新集群
       *
       * @param request UpdateClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateClusterResponse
       */
      Models::UpdateClusterResponse updateClusterWithOptions(const Models::UpdateClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新集群
       *
       * @param request UpdateClusterRequest
       * @return UpdateClusterResponse
       */
      Models::UpdateClusterResponse updateCluster(const Models::UpdateClusterRequest &request);

      /**
       * @summary 更新执行器
       *
       * @param request UpdateExecutorsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateExecutorsResponse
       */
      Models::UpdateExecutorsResponse updateExecutorsWithOptions(const Models::UpdateExecutorsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新执行器
       *
       * @param request UpdateExecutorsRequest
       * @return UpdateExecutorsResponse
       */
      Models::UpdateExecutorsResponse updateExecutors(const Models::UpdateExecutorsRequest &request);

      /**
       * @summary 更新任务信息
       *
       * @param tmpReq UpdateJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateJobResponse
       */
      Models::UpdateJobResponse updateJobWithOptions(const Models::UpdateJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新任务信息
       *
       * @param request UpdateJobRequest
       * @return UpdateJobResponse
       */
      Models::UpdateJobResponse updateJob(const Models::UpdateJobRequest &request);

      /**
       * @summary 更新任务脚本内容
       *
       * @param request UpdateJobScriptRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateJobScriptResponse
       */
      Models::UpdateJobScriptResponse updateJobScriptWithOptions(const Models::UpdateJobScriptRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新任务脚本内容
       *
       * @param request UpdateJobScriptRequest
       * @return UpdateJobScriptResponse
       */
      Models::UpdateJobScriptResponse updateJobScript(const Models::UpdateJobScriptRequest &request);
  };
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
