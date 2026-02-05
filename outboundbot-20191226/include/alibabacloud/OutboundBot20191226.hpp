// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_OUTBOUNDBOT20191226_HPP_
#define ALIBABACLOUD_OUTBOUNDBOT20191226_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/OutboundBot20191226Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/OutboundBot20191226.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 创建外呼任务
       *
       * @param request AssignJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssignJobsResponse
       */
      Models::AssignJobsResponse assignJobsWithOptions(const Models::AssignJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建外呼任务
       *
       * @param request AssignJobsRequest
       * @return AssignJobsResponse
       */
      Models::AssignJobsResponse assignJobs(const Models::AssignJobsRequest &request);

      /**
       * @summary 异步创建外呼任务
       *
       * @param tmpReq AssignJobsAsyncRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssignJobsAsyncResponse
       */
      Models::AssignJobsAsyncResponse assignJobsAsyncWithOptions(const Models::AssignJobsAsyncRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 异步创建外呼任务
       *
       * @param request AssignJobsAsyncRequest
       * @return AssignJobsAsyncResponse
       */
      Models::AssignJobsAsyncResponse assignJobsAsync(const Models::AssignJobsAsyncRequest &request);

      /**
       * @param request CancelJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelJobsResponse
       */
      Models::CancelJobsResponse cancelJobsWithOptions(const Models::CancelJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CancelJobsRequest
       * @return CancelJobsResponse
       */
      Models::CancelJobsResponse cancelJobs(const Models::CancelJobsRequest &request);

      /**
       * @param request ChangeResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroupWithOptions(const Models::ChangeResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ChangeResourceGroupRequest
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroup(const Models::ChangeResourceGroupRequest &request);

      /**
       * @param request CreateAgentProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAgentProfileResponse
       */
      Models::CreateAgentProfileResponse createAgentProfileWithOptions(const Models::CreateAgentProfileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateAgentProfileRequest
       * @return CreateAgentProfileResponse
       */
      Models::CreateAgentProfileResponse createAgentProfile(const Models::CreateAgentProfileRequest &request);

      /**
       * @summary 创建标注任务
       *
       * @param tmpReq CreateAnnotationMissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAnnotationMissionResponse
       */
      Models::CreateAnnotationMissionResponse createAnnotationMissionWithOptions(const Models::CreateAnnotationMissionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建标注任务
       *
       * @param request CreateAnnotationMissionRequest
       * @return CreateAnnotationMissionResponse
       */
      Models::CreateAnnotationMissionResponse createAnnotationMission(const Models::CreateAnnotationMissionRequest &request);

      /**
       * @summary 创建任务
       *
       * @param request CreateBatchJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBatchJobsResponse
       */
      Models::CreateBatchJobsResponse createBatchJobsWithOptions(const Models::CreateBatchJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建任务
       *
       * @param request CreateBatchJobsRequest
       * @return CreateBatchJobsResponse
       */
      Models::CreateBatchJobsResponse createBatchJobs(const Models::CreateBatchJobsRequest &request);

      /**
       * @summary CreateBatchRepeatJob
       *
       * @param request CreateBatchRepeatJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBatchRepeatJobResponse
       */
      Models::CreateBatchRepeatJobResponse createBatchRepeatJobWithOptions(const Models::CreateBatchRepeatJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary CreateBatchRepeatJob
       *
       * @param request CreateBatchRepeatJobRequest
       * @return CreateBatchRepeatJobResponse
       */
      Models::CreateBatchRepeatJobResponse createBatchRepeatJob(const Models::CreateBatchRepeatJobRequest &request);

      /**
       * @summary CreateBeebotIntent
       *
       * @param tmpReq CreateBeebotIntentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBeebotIntentResponse
       */
      Models::CreateBeebotIntentResponse createBeebotIntentWithOptions(const Models::CreateBeebotIntentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary CreateBeebotIntent
       *
       * @param request CreateBeebotIntentRequest
       * @return CreateBeebotIntentResponse
       */
      Models::CreateBeebotIntentResponse createBeebotIntent(const Models::CreateBeebotIntentRequest &request);

      /**
       * @summary CreateBeebotIntentLgf
       *
       * @param tmpReq CreateBeebotIntentLgfRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBeebotIntentLgfResponse
       */
      Models::CreateBeebotIntentLgfResponse createBeebotIntentLgfWithOptions(const Models::CreateBeebotIntentLgfRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary CreateBeebotIntentLgf
       *
       * @param request CreateBeebotIntentLgfRequest
       * @return CreateBeebotIntentLgfResponse
       */
      Models::CreateBeebotIntentLgfResponse createBeebotIntentLgf(const Models::CreateBeebotIntentLgfRequest &request);

      /**
       * @summary CreateBeebotIntentUserSay
       *
       * @param tmpReq CreateBeebotIntentUserSayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBeebotIntentUserSayResponse
       */
      Models::CreateBeebotIntentUserSayResponse createBeebotIntentUserSayWithOptions(const Models::CreateBeebotIntentUserSayRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary CreateBeebotIntentUserSay
       *
       * @param request CreateBeebotIntentUserSayRequest
       * @return CreateBeebotIntentUserSayResponse
       */
      Models::CreateBeebotIntentUserSayResponse createBeebotIntentUserSay(const Models::CreateBeebotIntentUserSayRequest &request);

      /**
       * @param request CreateDialogueFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDialogueFlowResponse
       */
      Models::CreateDialogueFlowResponse createDialogueFlowWithOptions(const Models::CreateDialogueFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateDialogueFlowRequest
       * @return CreateDialogueFlowResponse
       */
      Models::CreateDialogueFlowResponse createDialogueFlow(const Models::CreateDialogueFlowRequest &request);

      /**
       * @param request CreateDownloadUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDownloadUrlResponse
       */
      Models::CreateDownloadUrlResponse createDownloadUrlWithOptions(const Models::CreateDownloadUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateDownloadUrlRequest
       * @return CreateDownloadUrlResponse
       */
      Models::CreateDownloadUrlResponse createDownloadUrl(const Models::CreateDownloadUrlRequest &request);

      /**
       * @param request CreateGlobalQuestionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGlobalQuestionResponse
       */
      Models::CreateGlobalQuestionResponse createGlobalQuestionWithOptions(const Models::CreateGlobalQuestionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateGlobalQuestionRequest
       * @return CreateGlobalQuestionResponse
       */
      Models::CreateGlobalQuestionResponse createGlobalQuestion(const Models::CreateGlobalQuestionRequest &request);

      /**
       * @param request CreateInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstanceWithOptions(const Models::CreateInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateInstanceRequest
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstance(const Models::CreateInstanceRequest &request);

      /**
       * @summary 创建实例绑定号码
       *
       * @param request CreateInstanceBindNumberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceBindNumberResponse
       */
      Models::CreateInstanceBindNumberResponse createInstanceBindNumberWithOptions(const Models::CreateInstanceBindNumberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建实例绑定号码
       *
       * @param request CreateInstanceBindNumberRequest
       * @return CreateInstanceBindNumberResponse
       */
      Models::CreateInstanceBindNumberResponse createInstanceBindNumber(const Models::CreateInstanceBindNumberRequest &request);

      /**
       * @param request CreateIntentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateIntentResponse
       */
      Models::CreateIntentResponse createIntentWithOptions(const Models::CreateIntentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateIntentRequest
       * @return CreateIntentResponse
       */
      Models::CreateIntentResponse createIntent(const Models::CreateIntentRequest &request);

      /**
       * @param request CreateJobDataParsingTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateJobDataParsingTaskResponse
       */
      Models::CreateJobDataParsingTaskResponse createJobDataParsingTaskWithOptions(const Models::CreateJobDataParsingTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateJobDataParsingTaskRequest
       * @return CreateJobDataParsingTaskResponse
       */
      Models::CreateJobDataParsingTaskResponse createJobDataParsingTask(const Models::CreateJobDataParsingTaskRequest &request);

      /**
       * @summary 创建任务组
       *
       * @param request CreateJobGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateJobGroupResponse
       */
      Models::CreateJobGroupResponse createJobGroupWithOptions(const Models::CreateJobGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建任务组
       *
       * @param request CreateJobGroupRequest
       * @return CreateJobGroupResponse
       */
      Models::CreateJobGroupResponse createJobGroup(const Models::CreateJobGroupRequest &request);

      /**
       * @summary 创建任务组到处任务
       *
       * @param request CreateJobGroupExportTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateJobGroupExportTaskResponse
       */
      Models::CreateJobGroupExportTaskResponse createJobGroupExportTaskWithOptions(const Models::CreateJobGroupExportTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建任务组到处任务
       *
       * @param request CreateJobGroupExportTaskRequest
       * @return CreateJobGroupExportTaskResponse
       */
      Models::CreateJobGroupExportTaskResponse createJobGroupExportTask(const Models::CreateJobGroupExportTaskRequest &request);

      /**
       * @summary 新建场景
       *
       * @param request CreateScriptRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateScriptResponse
       */
      Models::CreateScriptResponse createScriptWithOptions(const Models::CreateScriptRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新建场景
       *
       * @param request CreateScriptRequest
       * @return CreateScriptResponse
       */
      Models::CreateScriptResponse createScript(const Models::CreateScriptRequest &request);

      /**
       * @param request CreateScriptWaveformRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateScriptWaveformResponse
       */
      Models::CreateScriptWaveformResponse createScriptWaveformWithOptions(const Models::CreateScriptWaveformRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateScriptWaveformRequest
       * @return CreateScriptWaveformResponse
       */
      Models::CreateScriptWaveformResponse createScriptWaveform(const Models::CreateScriptWaveformRequest &request);

      /**
       * @param request CreateTagRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTagResponse
       */
      Models::CreateTagResponse createTagWithOptions(const Models::CreateTagRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateTagRequest
       * @return CreateTagResponse
       */
      Models::CreateTagResponse createTag(const Models::CreateTagRequest &request);

      /**
       * @summary 外呼历史导出
       *
       * @param request CreateTaskExportTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTaskExportTaskResponse
       */
      Models::CreateTaskExportTaskResponse createTaskExportTaskWithOptions(const Models::CreateTaskExportTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 外呼历史导出
       *
       * @param request CreateTaskExportTaskRequest
       * @return CreateTaskExportTaskResponse
       */
      Models::CreateTaskExportTaskResponse createTaskExportTask(const Models::CreateTaskExportTaskRequest &request);

      /**
       * @param tmpReq DeleteAgentProfilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAgentProfilesResponse
       */
      Models::DeleteAgentProfilesResponse deleteAgentProfilesWithOptions(const Models::DeleteAgentProfilesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteAgentProfilesRequest
       * @return DeleteAgentProfilesResponse
       */
      Models::DeleteAgentProfilesResponse deleteAgentProfiles(const Models::DeleteAgentProfilesRequest &request);

      /**
       * @summary 清空归属地号码库
       *
       * @param request DeleteAllNumberDistrictInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAllNumberDistrictInfoResponse
       */
      Models::DeleteAllNumberDistrictInfoResponse deleteAllNumberDistrictInfoWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 清空归属地号码库
       *
       * @return DeleteAllNumberDistrictInfoResponse
       */
      Models::DeleteAllNumberDistrictInfoResponse deleteAllNumberDistrictInfo();

      /**
       * @summary DeleteBeebotIntent
       *
       * @param request DeleteBeebotIntentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBeebotIntentResponse
       */
      Models::DeleteBeebotIntentResponse deleteBeebotIntentWithOptions(const Models::DeleteBeebotIntentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary DeleteBeebotIntent
       *
       * @param request DeleteBeebotIntentRequest
       * @return DeleteBeebotIntentResponse
       */
      Models::DeleteBeebotIntentResponse deleteBeebotIntent(const Models::DeleteBeebotIntentRequest &request);

      /**
       * @summary DeleteBeebotIntentLgf
       *
       * @param request DeleteBeebotIntentLgfRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBeebotIntentLgfResponse
       */
      Models::DeleteBeebotIntentLgfResponse deleteBeebotIntentLgfWithOptions(const Models::DeleteBeebotIntentLgfRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary DeleteBeebotIntentLgf
       *
       * @param request DeleteBeebotIntentLgfRequest
       * @return DeleteBeebotIntentLgfResponse
       */
      Models::DeleteBeebotIntentLgfResponse deleteBeebotIntentLgf(const Models::DeleteBeebotIntentLgfRequest &request);

      /**
       * @summary DeleteBeebotIntentUserSay
       *
       * @param request DeleteBeebotIntentUserSayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBeebotIntentUserSayResponse
       */
      Models::DeleteBeebotIntentUserSayResponse deleteBeebotIntentUserSayWithOptions(const Models::DeleteBeebotIntentUserSayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary DeleteBeebotIntentUserSay
       *
       * @param request DeleteBeebotIntentUserSayRequest
       * @return DeleteBeebotIntentUserSayResponse
       */
      Models::DeleteBeebotIntentUserSayResponse deleteBeebotIntentUserSay(const Models::DeleteBeebotIntentUserSayRequest &request);

      /**
       * @param request DeleteContactBlockListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteContactBlockListResponse
       */
      Models::DeleteContactBlockListResponse deleteContactBlockListWithOptions(const Models::DeleteContactBlockListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteContactBlockListRequest
       * @return DeleteContactBlockListResponse
       */
      Models::DeleteContactBlockListResponse deleteContactBlockList(const Models::DeleteContactBlockListRequest &request);

      /**
       * @param request DeleteContactWhiteListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteContactWhiteListResponse
       */
      Models::DeleteContactWhiteListResponse deleteContactWhiteListWithOptions(const Models::DeleteContactWhiteListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteContactWhiteListRequest
       * @return DeleteContactWhiteListResponse
       */
      Models::DeleteContactWhiteListResponse deleteContactWhiteList(const Models::DeleteContactWhiteListRequest &request);

      /**
       * @param request DeleteDialogueFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDialogueFlowResponse
       */
      Models::DeleteDialogueFlowResponse deleteDialogueFlowWithOptions(const Models::DeleteDialogueFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteDialogueFlowRequest
       * @return DeleteDialogueFlowResponse
       */
      Models::DeleteDialogueFlowResponse deleteDialogueFlow(const Models::DeleteDialogueFlowRequest &request);

      /**
       * @param request DeleteGlobalQuestionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGlobalQuestionResponse
       */
      Models::DeleteGlobalQuestionResponse deleteGlobalQuestionWithOptions(const Models::DeleteGlobalQuestionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteGlobalQuestionRequest
       * @return DeleteGlobalQuestionResponse
       */
      Models::DeleteGlobalQuestionResponse deleteGlobalQuestion(const Models::DeleteGlobalQuestionRequest &request);

      /**
       * @param request DeleteInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstanceWithOptions(const Models::DeleteInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteInstanceRequest
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstance(const Models::DeleteInstanceRequest &request);

      /**
       * @param request DeleteIntentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteIntentResponse
       */
      Models::DeleteIntentResponse deleteIntentWithOptions(const Models::DeleteIntentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteIntentRequest
       * @return DeleteIntentResponse
       */
      Models::DeleteIntentResponse deleteIntent(const Models::DeleteIntentRequest &request);

      /**
       * @param request DeleteJobGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteJobGroupResponse
       */
      Models::DeleteJobGroupResponse deleteJobGroupWithOptions(const Models::DeleteJobGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteJobGroupRequest
       * @return DeleteJobGroupResponse
       */
      Models::DeleteJobGroupResponse deleteJobGroup(const Models::DeleteJobGroupRequest &request);

      /**
       * @param request DeleteOutboundCallNumberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteOutboundCallNumberResponse
       */
      Models::DeleteOutboundCallNumberResponse deleteOutboundCallNumberWithOptions(const Models::DeleteOutboundCallNumberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteOutboundCallNumberRequest
       * @return DeleteOutboundCallNumberResponse
       */
      Models::DeleteOutboundCallNumberResponse deleteOutboundCallNumber(const Models::DeleteOutboundCallNumberRequest &request);

      /**
       * @param request DeleteScriptRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteScriptResponse
       */
      Models::DeleteScriptResponse deleteScriptWithOptions(const Models::DeleteScriptRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteScriptRequest
       * @return DeleteScriptResponse
       */
      Models::DeleteScriptResponse deleteScript(const Models::DeleteScriptRequest &request);

      /**
       * @param request DeleteScriptRecordingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteScriptRecordingResponse
       */
      Models::DeleteScriptRecordingResponse deleteScriptRecordingWithOptions(const Models::DeleteScriptRecordingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteScriptRecordingRequest
       * @return DeleteScriptRecordingResponse
       */
      Models::DeleteScriptRecordingResponse deleteScriptRecording(const Models::DeleteScriptRecordingRequest &request);

      /**
       * @param request DeleteScriptWaveformRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteScriptWaveformResponse
       */
      Models::DeleteScriptWaveformResponse deleteScriptWaveformWithOptions(const Models::DeleteScriptWaveformRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteScriptWaveformRequest
       * @return DeleteScriptWaveformResponse
       */
      Models::DeleteScriptWaveformResponse deleteScriptWaveform(const Models::DeleteScriptWaveformRequest &request);

      /**
       * @summary DescribeBeebotIntent
       *
       * @description ****
       *
       * @param request DescribeBeebotIntentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBeebotIntentResponse
       */
      Models::DescribeBeebotIntentResponse describeBeebotIntentWithOptions(const Models::DescribeBeebotIntentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary DescribeBeebotIntent
       *
       * @description ****
       *
       * @param request DescribeBeebotIntentRequest
       * @return DescribeBeebotIntentResponse
       */
      Models::DescribeBeebotIntentResponse describeBeebotIntent(const Models::DescribeBeebotIntentRequest &request);

      /**
       * @param request DescribeDialogueNodeStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDialogueNodeStatisticsResponse
       */
      Models::DescribeDialogueNodeStatisticsResponse describeDialogueNodeStatisticsWithOptions(const Models::DescribeDialogueNodeStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeDialogueNodeStatisticsRequest
       * @return DescribeDialogueNodeStatisticsResponse
       */
      Models::DescribeDialogueNodeStatisticsResponse describeDialogueNodeStatistics(const Models::DescribeDialogueNodeStatisticsRequest &request);

      /**
       * @summary DescribeDsReports
       *
       * @param request DescribeDsReportsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDsReportsResponse
       */
      Models::DescribeDsReportsResponse describeDsReportsWithOptions(const Models::DescribeDsReportsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary DescribeDsReports
       *
       * @param request DescribeDsReportsRequest
       * @return DescribeDsReportsResponse
       */
      Models::DescribeDsReportsResponse describeDsReports(const Models::DescribeDsReportsRequest &request);

      /**
       * @param request DescribeGlobalQuestionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGlobalQuestionResponse
       */
      Models::DescribeGlobalQuestionResponse describeGlobalQuestionWithOptions(const Models::DescribeGlobalQuestionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeGlobalQuestionRequest
       * @return DescribeGlobalQuestionResponse
       */
      Models::DescribeGlobalQuestionResponse describeGlobalQuestion(const Models::DescribeGlobalQuestionRequest &request);

      /**
       * @summary 任务组数据统计
       *
       * @param request DescribeGroupExecutingInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGroupExecutingInfoResponse
       */
      Models::DescribeGroupExecutingInfoResponse describeGroupExecutingInfoWithOptions(const Models::DescribeGroupExecutingInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 任务组数据统计
       *
       * @param request DescribeGroupExecutingInfoRequest
       * @return DescribeGroupExecutingInfoResponse
       */
      Models::DescribeGroupExecutingInfoResponse describeGroupExecutingInfo(const Models::DescribeGroupExecutingInfoRequest &request);

      /**
       * @summary DescribeInstance
       *
       * @param request DescribeInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceResponse
       */
      Models::DescribeInstanceResponse describeInstanceWithOptions(const Models::DescribeInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary DescribeInstance
       *
       * @param request DescribeInstanceRequest
       * @return DescribeInstanceResponse
       */
      Models::DescribeInstanceResponse describeInstance(const Models::DescribeInstanceRequest &request);

      /**
       * @param request DescribeIntentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeIntentResponse
       */
      Models::DescribeIntentResponse describeIntentWithOptions(const Models::DescribeIntentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeIntentRequest
       * @return DescribeIntentResponse
       */
      Models::DescribeIntentResponse describeIntent(const Models::DescribeIntentRequest &request);

      /**
       * @summary DescribeIntentStatistics
       *
       * @param request DescribeIntentStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeIntentStatisticsResponse
       */
      Models::DescribeIntentStatisticsResponse describeIntentStatisticsWithOptions(const Models::DescribeIntentStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary DescribeIntentStatistics
       *
       * @param request DescribeIntentStatisticsRequest
       * @return DescribeIntentStatisticsResponse
       */
      Models::DescribeIntentStatisticsResponse describeIntentStatistics(const Models::DescribeIntentStatisticsRequest &request);

      /**
       * @summary 获取job信息
       *
       * @param request DescribeJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeJobResponse
       */
      Models::DescribeJobResponse describeJobWithOptions(const Models::DescribeJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取job信息
       *
       * @param request DescribeJobRequest
       * @return DescribeJobResponse
       */
      Models::DescribeJobResponse describeJob(const Models::DescribeJobRequest &request);

      /**
       * @param request DescribeJobDataParsingTaskProgressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeJobDataParsingTaskProgressResponse
       */
      Models::DescribeJobDataParsingTaskProgressResponse describeJobDataParsingTaskProgressWithOptions(const Models::DescribeJobDataParsingTaskProgressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeJobDataParsingTaskProgressRequest
       * @return DescribeJobDataParsingTaskProgressResponse
       */
      Models::DescribeJobDataParsingTaskProgressResponse describeJobDataParsingTaskProgress(const Models::DescribeJobDataParsingTaskProgressRequest &request);

      /**
       * @summary DescribeJobGroup
       *
       * @param request DescribeJobGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeJobGroupResponse
       */
      Models::DescribeJobGroupResponse describeJobGroupWithOptions(const Models::DescribeJobGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary DescribeJobGroup
       *
       * @param request DescribeJobGroupRequest
       * @return DescribeJobGroupResponse
       */
      Models::DescribeJobGroupResponse describeJobGroup(const Models::DescribeJobGroupRequest &request);

      /**
       * @param request DescribeJobGroupExportTaskProgressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeJobGroupExportTaskProgressResponse
       */
      Models::DescribeJobGroupExportTaskProgressResponse describeJobGroupExportTaskProgressWithOptions(const Models::DescribeJobGroupExportTaskProgressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeJobGroupExportTaskProgressRequest
       * @return DescribeJobGroupExportTaskProgressResponse
       */
      Models::DescribeJobGroupExportTaskProgressResponse describeJobGroupExportTaskProgress(const Models::DescribeJobGroupExportTaskProgressRequest &request);

      /**
       * @summary 获取场景信息
       *
       * @param request DescribeScriptRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeScriptResponse
       */
      Models::DescribeScriptResponse describeScriptWithOptions(const Models::DescribeScriptRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取场景信息
       *
       * @param request DescribeScriptRequest
       * @return DescribeScriptResponse
       */
      Models::DescribeScriptResponse describeScript(const Models::DescribeScriptRequest &request);

      /**
       * @param request DescribeScriptVoiceConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeScriptVoiceConfigResponse
       */
      Models::DescribeScriptVoiceConfigResponse describeScriptVoiceConfigWithOptions(const Models::DescribeScriptVoiceConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeScriptVoiceConfigRequest
       * @return DescribeScriptVoiceConfigResponse
       */
      Models::DescribeScriptVoiceConfigResponse describeScriptVoiceConfig(const Models::DescribeScriptVoiceConfigRequest &request);

      /**
       * @param request DescribeTTSConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTTSConfigResponse
       */
      Models::DescribeTTSConfigResponse describeTTSConfigWithOptions(const Models::DescribeTTSConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeTTSConfigRequest
       * @return DescribeTTSConfigResponse
       */
      Models::DescribeTTSConfigResponse describeTTSConfig(const Models::DescribeTTSConfigRequest &request);

      /**
       * @param request DescribeTTSDemoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTTSDemoResponse
       */
      Models::DescribeTTSDemoResponse describeTTSDemoWithOptions(const Models::DescribeTTSDemoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeTTSDemoRequest
       * @return DescribeTTSDemoResponse
       */
      Models::DescribeTTSDemoResponse describeTTSDemo(const Models::DescribeTTSDemoRequest &request);

      /**
       * @param request DescribeTagHitsSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTagHitsSummaryResponse
       */
      Models::DescribeTagHitsSummaryResponse describeTagHitsSummaryWithOptions(const Models::DescribeTagHitsSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeTagHitsSummaryRequest
       * @return DescribeTagHitsSummaryResponse
       */
      Models::DescribeTagHitsSummaryResponse describeTagHitsSummary(const Models::DescribeTagHitsSummaryRequest &request);

      /**
       * @summary 号码绑定实例列表
       *
       * @param request DescribeTenantBindNumberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTenantBindNumberResponse
       */
      Models::DescribeTenantBindNumberResponse describeTenantBindNumberWithOptions(const Models::DescribeTenantBindNumberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 号码绑定实例列表
       *
       * @param request DescribeTenantBindNumberRequest
       * @return DescribeTenantBindNumberResponse
       */
      Models::DescribeTenantBindNumberResponse describeTenantBindNumber(const Models::DescribeTenantBindNumberRequest &request);

      /**
       * @param request DialogueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DialogueResponse
       */
      Models::DialogueResponse dialogueWithOptions(const Models::DialogueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DialogueRequest
       * @return DialogueResponse
       */
      Models::DialogueResponse dialogue(const Models::DialogueRequest &request);

      /**
       * @summary DownloadRecording
       *
       * @param request DownloadRecordingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DownloadRecordingResponse
       */
      Models::DownloadRecordingResponse downloadRecordingWithOptions(const Models::DownloadRecordingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary DownloadRecording
       *
       * @param request DownloadRecordingRequest
       * @return DownloadRecordingResponse
       */
      Models::DownloadRecordingResponse downloadRecording(const Models::DownloadRecordingRequest &request);

      /**
       * @param request DownloadScriptRecordingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DownloadScriptRecordingResponse
       */
      Models::DownloadScriptRecordingResponse downloadScriptRecordingWithOptions(const Models::DownloadScriptRecordingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DownloadScriptRecordingRequest
       * @return DownloadScriptRecordingResponse
       */
      Models::DownloadScriptRecordingResponse downloadScriptRecording(const Models::DownloadScriptRecordingRequest &request);

      /**
       * @param request DuplicateScriptRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DuplicateScriptResponse
       */
      Models::DuplicateScriptResponse duplicateScriptWithOptions(const Models::DuplicateScriptRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DuplicateScriptRequest
       * @return DuplicateScriptResponse
       */
      Models::DuplicateScriptResponse duplicateScript(const Models::DuplicateScriptRequest &request);

      /**
       * @param request ExportScriptRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportScriptResponse
       */
      Models::ExportScriptResponse exportScriptWithOptions(const Models::ExportScriptRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ExportScriptRequest
       * @return ExportScriptResponse
       */
      Models::ExportScriptResponse exportScript(const Models::ExportScriptRequest &request);

      /**
       * @param request GenerateUploadUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateUploadUrlResponse
       */
      Models::GenerateUploadUrlResponse generateUploadUrlWithOptions(const Models::GenerateUploadUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GenerateUploadUrlRequest
       * @return GenerateUploadUrlResponse
       */
      Models::GenerateUploadUrlResponse generateUploadUrl(const Models::GenerateUploadUrlRequest &request);

      /**
       * @param request GetAfterAnswerDelayPlaybackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAfterAnswerDelayPlaybackResponse
       */
      Models::GetAfterAnswerDelayPlaybackResponse getAfterAnswerDelayPlaybackWithOptions(const Models::GetAfterAnswerDelayPlaybackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetAfterAnswerDelayPlaybackRequest
       * @return GetAfterAnswerDelayPlaybackResponse
       */
      Models::GetAfterAnswerDelayPlaybackResponse getAfterAnswerDelayPlayback(const Models::GetAfterAnswerDelayPlaybackRequest &request);

      /**
       * @param request GetAgentProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAgentProfileResponse
       */
      Models::GetAgentProfileResponse getAgentProfileWithOptions(const Models::GetAgentProfileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetAgentProfileRequest
       * @return GetAgentProfileResponse
       */
      Models::GetAgentProfileResponse getAgentProfile(const Models::GetAgentProfileRequest &request);

      /**
       * @param request GetAgentProfileTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAgentProfileTemplateResponse
       */
      Models::GetAgentProfileTemplateResponse getAgentProfileTemplateWithOptions(const Models::GetAgentProfileTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetAgentProfileTemplateRequest
       * @return GetAgentProfileTemplateResponse
       */
      Models::GetAgentProfileTemplateResponse getAgentProfileTemplate(const Models::GetAgentProfileTemplateRequest &request);

      /**
       * @param request GetAnnotationMissionSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAnnotationMissionSummaryResponse
       */
      Models::GetAnnotationMissionSummaryResponse getAnnotationMissionSummaryWithOptions(const Models::GetAnnotationMissionSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetAnnotationMissionSummaryRequest
       * @return GetAnnotationMissionSummaryResponse
       */
      Models::GetAnnotationMissionSummaryResponse getAnnotationMissionSummary(const Models::GetAnnotationMissionSummaryRequest &request);

      /**
       * @param request GetAnnotationMissionTagInfoListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAnnotationMissionTagInfoListResponse
       */
      Models::GetAnnotationMissionTagInfoListResponse getAnnotationMissionTagInfoListWithOptions(const Models::GetAnnotationMissionTagInfoListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetAnnotationMissionTagInfoListRequest
       * @return GetAnnotationMissionTagInfoListResponse
       */
      Models::GetAnnotationMissionTagInfoListResponse getAnnotationMissionTagInfoList(const Models::GetAnnotationMissionTagInfoListRequest &request);

      /**
       * @param request GetAsrServerInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAsrServerInfoResponse
       */
      Models::GetAsrServerInfoResponse getAsrServerInfoWithOptions(const Models::GetAsrServerInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetAsrServerInfoRequest
       * @return GetAsrServerInfoResponse
       */
      Models::GetAsrServerInfoResponse getAsrServerInfo(const Models::GetAsrServerInfoRequest &request);

      /**
       * @summary 获取异步外呼任务上传结果
       *
       * @param request GetAssignJobsAsyncResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAssignJobsAsyncResultResponse
       */
      Models::GetAssignJobsAsyncResultResponse getAssignJobsAsyncResultWithOptions(const Models::GetAssignJobsAsyncResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取异步外呼任务上传结果
       *
       * @param request GetAssignJobsAsyncResultRequest
       * @return GetAssignJobsAsyncResultResponse
       */
      Models::GetAssignJobsAsyncResultResponse getAssignJobsAsyncResult(const Models::GetAssignJobsAsyncResultRequest &request);

      /**
       * @summary 获取系统策略配置
       *
       * @param request GetBaseStrategyPeriodRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBaseStrategyPeriodResponse
       */
      Models::GetBaseStrategyPeriodResponse getBaseStrategyPeriodWithOptions(const Models::GetBaseStrategyPeriodRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取系统策略配置
       *
       * @param request GetBaseStrategyPeriodRequest
       * @return GetBaseStrategyPeriodResponse
       */
      Models::GetBaseStrategyPeriodResponse getBaseStrategyPeriod(const Models::GetBaseStrategyPeriodRequest &request);

      /**
       * @param request GetConcurrentConversationQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetConcurrentConversationQuotaResponse
       */
      Models::GetConcurrentConversationQuotaResponse getConcurrentConversationQuotaWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @return GetConcurrentConversationQuotaResponse
       */
      Models::GetConcurrentConversationQuotaResponse getConcurrentConversationQuota();

      /**
       * @summary GetContactBlockList
       *
       * @param request GetContactBlockListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetContactBlockListResponse
       */
      Models::GetContactBlockListResponse getContactBlockListWithOptions(const Models::GetContactBlockListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary GetContactBlockList
       *
       * @param request GetContactBlockListRequest
       * @return GetContactBlockListResponse
       */
      Models::GetContactBlockListResponse getContactBlockList(const Models::GetContactBlockListRequest &request);

      /**
       * @summary GetContactWhiteList
       *
       * @param request GetContactWhiteListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetContactWhiteListResponse
       */
      Models::GetContactWhiteListResponse getContactWhiteListWithOptions(const Models::GetContactWhiteListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary GetContactWhiteList
       *
       * @param request GetContactWhiteListRequest
       * @return GetContactWhiteListResponse
       */
      Models::GetContactWhiteListResponse getContactWhiteList(const Models::GetContactWhiteListRequest &request);

      /**
       * @param request GetCurrentConcurrencyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCurrentConcurrencyResponse
       */
      Models::GetCurrentConcurrencyResponse getCurrentConcurrencyWithOptions(const Models::GetCurrentConcurrencyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetCurrentConcurrencyRequest
       * @return GetCurrentConcurrencyResponse
       */
      Models::GetCurrentConcurrencyResponse getCurrentConcurrency(const Models::GetCurrentConcurrencyRequest &request);

      /**
       * @summary GetEmptyNumberNoMoreCallsInfo
       *
       * @param request GetEmptyNumberNoMoreCallsInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEmptyNumberNoMoreCallsInfoResponse
       */
      Models::GetEmptyNumberNoMoreCallsInfoResponse getEmptyNumberNoMoreCallsInfoWithOptions(const Models::GetEmptyNumberNoMoreCallsInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary GetEmptyNumberNoMoreCallsInfo
       *
       * @param request GetEmptyNumberNoMoreCallsInfoRequest
       * @return GetEmptyNumberNoMoreCallsInfoResponse
       */
      Models::GetEmptyNumberNoMoreCallsInfoResponse getEmptyNumberNoMoreCallsInfo(const Models::GetEmptyNumberNoMoreCallsInfoRequest &request);

      /**
       * @summary 获取上传信息
       *
       * @param request GetJobDataUploadParamsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetJobDataUploadParamsResponse
       */
      Models::GetJobDataUploadParamsResponse getJobDataUploadParamsWithOptions(const Models::GetJobDataUploadParamsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取上传信息
       *
       * @param request GetJobDataUploadParamsRequest
       * @return GetJobDataUploadParamsResponse
       */
      Models::GetJobDataUploadParamsResponse getJobDataUploadParams(const Models::GetJobDataUploadParamsRequest &request);

      /**
       * @summary GetMaxAttemptsPerDay
       *
       * @param request GetMaxAttemptsPerDayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMaxAttemptsPerDayResponse
       */
      Models::GetMaxAttemptsPerDayResponse getMaxAttemptsPerDayWithOptions(const Models::GetMaxAttemptsPerDayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary GetMaxAttemptsPerDay
       *
       * @param request GetMaxAttemptsPerDayRequest
       * @return GetMaxAttemptsPerDayResponse
       */
      Models::GetMaxAttemptsPerDayResponse getMaxAttemptsPerDay(const Models::GetMaxAttemptsPerDayRequest &request);

      /**
       * @summary 获取号码库模板下载链接
       *
       * @param request GetNumberDistrictInfoTemplateDownloadUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNumberDistrictInfoTemplateDownloadUrlResponse
       */
      Models::GetNumberDistrictInfoTemplateDownloadUrlResponse getNumberDistrictInfoTemplateDownloadUrlWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取号码库模板下载链接
       *
       * @return GetNumberDistrictInfoTemplateDownloadUrlResponse
       */
      Models::GetNumberDistrictInfoTemplateDownloadUrlResponse getNumberDistrictInfoTemplateDownloadUrl();

      /**
       * @summary GetRealtimeConcurrencyReport
       *
       * @param request GetRealtimeConcurrencyReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRealtimeConcurrencyReportResponse
       */
      Models::GetRealtimeConcurrencyReportResponse getRealtimeConcurrencyReportWithOptions(const Models::GetRealtimeConcurrencyReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary GetRealtimeConcurrencyReport
       *
       * @param request GetRealtimeConcurrencyReportRequest
       * @return GetRealtimeConcurrencyReportResponse
       */
      Models::GetRealtimeConcurrencyReportResponse getRealtimeConcurrencyReport(const Models::GetRealtimeConcurrencyReportRequest &request);

      /**
       * @summary GetSummaryInfo
       *
       * @param request GetSummaryInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSummaryInfoResponse
       */
      Models::GetSummaryInfoResponse getSummaryInfoWithOptions(const Models::GetSummaryInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary GetSummaryInfo
       *
       * @param request GetSummaryInfoRequest
       * @return GetSummaryInfoResponse
       */
      Models::GetSummaryInfoResponse getSummaryInfo(const Models::GetSummaryInfoRequest &request);

      /**
       * @summary 根据TaskId获取Task信息
       *
       * @param request GetTaskByUuidRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTaskByUuidResponse
       */
      Models::GetTaskByUuidResponse getTaskByUuidWithOptions(const Models::GetTaskByUuidRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据TaskId获取Task信息
       *
       * @param request GetTaskByUuidRequest
       * @return GetTaskByUuidResponse
       */
      Models::GetTaskByUuidResponse getTaskByUuid(const Models::GetTaskByUuidRequest &request);

      /**
       * @summary GetVersion
       *
       * @param request GetVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVersionResponse
       */
      Models::GetVersionResponse getVersionWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary GetVersion
       *
       * @return GetVersionResponse
       */
      Models::GetVersionResponse getVersion();

      /**
       * @param request ImportScriptRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportScriptResponse
       */
      Models::ImportScriptResponse importScriptWithOptions(const Models::ImportScriptRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ImportScriptRequest
       * @return ImportScriptResponse
       */
      Models::ImportScriptResponse importScript(const Models::ImportScriptRequest &request);

      /**
       * @summary InflightTaskTimeout
       *
       * @param request InflightTaskTimeoutRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InflightTaskTimeoutResponse
       */
      Models::InflightTaskTimeoutResponse inflightTaskTimeoutWithOptions(const Models::InflightTaskTimeoutRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary InflightTaskTimeout
       *
       * @param request InflightTaskTimeoutRequest
       * @return InflightTaskTimeoutResponse
       */
      Models::InflightTaskTimeoutResponse inflightTaskTimeout(const Models::InflightTaskTimeoutRequest &request);

      /**
       * @param request ListAgentProfilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAgentProfilesResponse
       */
      Models::ListAgentProfilesResponse listAgentProfilesWithOptions(const Models::ListAgentProfilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListAgentProfilesRequest
       * @return ListAgentProfilesResponse
       */
      Models::ListAgentProfilesResponse listAgentProfiles(const Models::ListAgentProfilesRequest &request);

      /**
       * @summary 租户绑定号码列表
       *
       * @param request ListAllTenantBindNumberBindingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAllTenantBindNumberBindingResponse
       */
      Models::ListAllTenantBindNumberBindingResponse listAllTenantBindNumberBindingWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 租户绑定号码列表
       *
       * @return ListAllTenantBindNumberBindingResponse
       */
      Models::ListAllTenantBindNumberBindingResponse listAllTenantBindNumberBinding();

      /**
       * @summary 标注中心
       *
       * @param request ListAnnotationMissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAnnotationMissionResponse
       */
      Models::ListAnnotationMissionResponse listAnnotationMissionWithOptions(const Models::ListAnnotationMissionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 标注中心
       *
       * @param request ListAnnotationMissionRequest
       * @return ListAnnotationMissionResponse
       */
      Models::ListAnnotationMissionResponse listAnnotationMission(const Models::ListAnnotationMissionRequest &request);

      /**
       * @summary ListAnnotationMissionSession
       *
       * @param request ListAnnotationMissionSessionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAnnotationMissionSessionResponse
       */
      Models::ListAnnotationMissionSessionResponse listAnnotationMissionSessionWithOptions(const Models::ListAnnotationMissionSessionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ListAnnotationMissionSession
       *
       * @param request ListAnnotationMissionSessionRequest
       * @return ListAnnotationMissionSessionResponse
       */
      Models::ListAnnotationMissionSessionResponse listAnnotationMissionSession(const Models::ListAnnotationMissionSessionRequest &request);

      /**
       * @param request ListApiPluginsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApiPluginsResponse
       */
      Models::ListApiPluginsResponse listApiPluginsWithOptions(const Models::ListApiPluginsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListApiPluginsRequest
       * @return ListApiPluginsResponse
       */
      Models::ListApiPluginsResponse listApiPlugins(const Models::ListApiPluginsRequest &request);

      /**
       * @summary ListBeebotIntent
       *
       * @param request ListBeebotIntentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBeebotIntentResponse
       */
      Models::ListBeebotIntentResponse listBeebotIntentWithOptions(const Models::ListBeebotIntentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ListBeebotIntent
       *
       * @param request ListBeebotIntentRequest
       * @return ListBeebotIntentResponse
       */
      Models::ListBeebotIntentResponse listBeebotIntent(const Models::ListBeebotIntentRequest &request);

      /**
       * @summary ListBeebotIntentLgf
       *
       * @param request ListBeebotIntentLgfRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBeebotIntentLgfResponse
       */
      Models::ListBeebotIntentLgfResponse listBeebotIntentLgfWithOptions(const Models::ListBeebotIntentLgfRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ListBeebotIntentLgf
       *
       * @param request ListBeebotIntentLgfRequest
       * @return ListBeebotIntentLgfResponse
       */
      Models::ListBeebotIntentLgfResponse listBeebotIntentLgf(const Models::ListBeebotIntentLgfRequest &request);

      /**
       * @summary ListBeebotIntentUserSay
       *
       * @param request ListBeebotIntentUserSayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBeebotIntentUserSayResponse
       */
      Models::ListBeebotIntentUserSayResponse listBeebotIntentUserSayWithOptions(const Models::ListBeebotIntentUserSayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ListBeebotIntentUserSay
       *
       * @param request ListBeebotIntentUserSayRequest
       * @return ListBeebotIntentUserSayResponse
       */
      Models::ListBeebotIntentUserSayResponse listBeebotIntentUserSay(const Models::ListBeebotIntentUserSayRequest &request);

      /**
       * @param request ListChatbotInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListChatbotInstancesResponse
       */
      Models::ListChatbotInstancesResponse listChatbotInstancesWithOptions(const Models::ListChatbotInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListChatbotInstancesRequest
       * @return ListChatbotInstancesResponse
       */
      Models::ListChatbotInstancesResponse listChatbotInstances(const Models::ListChatbotInstancesRequest &request);

      /**
       * @param request ListDialogueFlowsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDialogueFlowsResponse
       */
      Models::ListDialogueFlowsResponse listDialogueFlowsWithOptions(const Models::ListDialogueFlowsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListDialogueFlowsRequest
       * @return ListDialogueFlowsResponse
       */
      Models::ListDialogueFlowsResponse listDialogueFlows(const Models::ListDialogueFlowsRequest &request);

      /**
       * @param request ListDownloadTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDownloadTasksResponse
       */
      Models::ListDownloadTasksResponse listDownloadTasksWithOptions(const Models::ListDownloadTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListDownloadTasksRequest
       * @return ListDownloadTasksResponse
       */
      Models::ListDownloadTasksResponse listDownloadTasks(const Models::ListDownloadTasksRequest &request);

      /**
       * @param request ListFlashSmsTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFlashSmsTemplatesResponse
       */
      Models::ListFlashSmsTemplatesResponse listFlashSmsTemplatesWithOptions(const Models::ListFlashSmsTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListFlashSmsTemplatesRequest
       * @return ListFlashSmsTemplatesResponse
       */
      Models::ListFlashSmsTemplatesResponse listFlashSmsTemplates(const Models::ListFlashSmsTemplatesRequest &request);

      /**
       * @param request ListGlobalQuestionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGlobalQuestionsResponse
       */
      Models::ListGlobalQuestionsResponse listGlobalQuestionsWithOptions(const Models::ListGlobalQuestionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListGlobalQuestionsRequest
       * @return ListGlobalQuestionsResponse
       */
      Models::ListGlobalQuestionsResponse listGlobalQuestions(const Models::ListGlobalQuestionsRequest &request);

      /**
       * @param request ListInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstancesWithOptions(const Models::ListInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListInstancesRequest
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstances(const Models::ListInstancesRequest &request);

      /**
       * @summary 意图列表
       *
       * @param request ListIntentionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIntentionsResponse
       */
      Models::ListIntentionsResponse listIntentionsWithOptions(const Models::ListIntentionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 意图列表
       *
       * @param request ListIntentionsRequest
       * @return ListIntentionsResponse
       */
      Models::ListIntentionsResponse listIntentions(const Models::ListIntentionsRequest &request);

      /**
       * @param request ListIntentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIntentsResponse
       */
      Models::ListIntentsResponse listIntentsWithOptions(const Models::ListIntentsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListIntentsRequest
       * @return ListIntentsResponse
       */
      Models::ListIntentsResponse listIntents(const Models::ListIntentsRequest &request);

      /**
       * @param request ListJobGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListJobGroupsResponse
       */
      Models::ListJobGroupsResponse listJobGroupsWithOptions(const Models::ListJobGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListJobGroupsRequest
       * @return ListJobGroupsResponse
       */
      Models::ListJobGroupsResponse listJobGroups(const Models::ListJobGroupsRequest &request);

      /**
       * @param request ListJobGroupsAsyncRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListJobGroupsAsyncResponse
       */
      Models::ListJobGroupsAsyncResponse listJobGroupsAsyncWithOptions(const Models::ListJobGroupsAsyncRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListJobGroupsAsyncRequest
       * @return ListJobGroupsAsyncResponse
       */
      Models::ListJobGroupsAsyncResponse listJobGroupsAsync(const Models::ListJobGroupsAsyncRequest &request);

      /**
       * @summary ListJobs
       *
       * @param request ListJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListJobsResponse
       */
      Models::ListJobsResponse listJobsWithOptions(const Models::ListJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ListJobs
       *
       * @param request ListJobsRequest
       * @return ListJobsResponse
       */
      Models::ListJobsResponse listJobs(const Models::ListJobsRequest &request);

      /**
       * @param request ListJobsByGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListJobsByGroupResponse
       */
      Models::ListJobsByGroupResponse listJobsByGroupWithOptions(const Models::ListJobsByGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListJobsByGroupRequest
       * @return ListJobsByGroupResponse
       */
      Models::ListJobsByGroupResponse listJobsByGroup(const Models::ListJobsByGroupRequest &request);

      /**
       * @param request ListOutboundCallNumbersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOutboundCallNumbersResponse
       */
      Models::ListOutboundCallNumbersResponse listOutboundCallNumbersWithOptions(const Models::ListOutboundCallNumbersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListOutboundCallNumbersRequest
       * @return ListOutboundCallNumbersResponse
       */
      Models::ListOutboundCallNumbersResponse listOutboundCallNumbers(const Models::ListOutboundCallNumbersRequest &request);

      /**
       * @param request ListResourceTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResourceTagsResponse
       */
      Models::ListResourceTagsResponse listResourceTagsWithOptions(const Models::ListResourceTagsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListResourceTagsRequest
       * @return ListResourceTagsResponse
       */
      Models::ListResourceTagsResponse listResourceTags(const Models::ListResourceTagsRequest &request);

      /**
       * @param request ListScriptPublishHistoriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListScriptPublishHistoriesResponse
       */
      Models::ListScriptPublishHistoriesResponse listScriptPublishHistoriesWithOptions(const Models::ListScriptPublishHistoriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListScriptPublishHistoriesRequest
       * @return ListScriptPublishHistoriesResponse
       */
      Models::ListScriptPublishHistoriesResponse listScriptPublishHistories(const Models::ListScriptPublishHistoriesRequest &request);

      /**
       * @param request ListScriptRecordingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListScriptRecordingResponse
       */
      Models::ListScriptRecordingResponse listScriptRecordingWithOptions(const Models::ListScriptRecordingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListScriptRecordingRequest
       * @return ListScriptRecordingResponse
       */
      Models::ListScriptRecordingResponse listScriptRecording(const Models::ListScriptRecordingRequest &request);

      /**
       * @param request ListScriptVoiceConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListScriptVoiceConfigsResponse
       */
      Models::ListScriptVoiceConfigsResponse listScriptVoiceConfigsWithOptions(const Models::ListScriptVoiceConfigsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListScriptVoiceConfigsRequest
       * @return ListScriptVoiceConfigsResponse
       */
      Models::ListScriptVoiceConfigsResponse listScriptVoiceConfigs(const Models::ListScriptVoiceConfigsRequest &request);

      /**
       * @summary -
       *
       * @param request ListScriptsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListScriptsResponse
       */
      Models::ListScriptsResponse listScriptsWithOptions(const Models::ListScriptsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary -
       *
       * @param request ListScriptsRequest
       * @return ListScriptsResponse
       */
      Models::ListScriptsResponse listScripts(const Models::ListScriptsRequest &request);

      /**
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @param request ListTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagsResponse
       */
      Models::ListTagsResponse listTagsWithOptions(const Models::ListTagsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListTagsRequest
       * @return ListTagsResponse
       */
      Models::ListTagsResponse listTags(const Models::ListTagsRequest &request);

      /**
       * @param tmpReq ModifyAgentProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAgentProfileResponse
       */
      Models::ModifyAgentProfileResponse modifyAgentProfileWithOptions(const Models::ModifyAgentProfileRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ModifyAgentProfileRequest
       * @return ModifyAgentProfileResponse
       */
      Models::ModifyAgentProfileResponse modifyAgentProfile(const Models::ModifyAgentProfileRequest &request);

      /**
       * @param request ModifyAnnotationMissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAnnotationMissionResponse
       */
      Models::ModifyAnnotationMissionResponse modifyAnnotationMissionWithOptions(const Models::ModifyAnnotationMissionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ModifyAnnotationMissionRequest
       * @return ModifyAnnotationMissionResponse
       */
      Models::ModifyAnnotationMissionResponse modifyAnnotationMission(const Models::ModifyAnnotationMissionRequest &request);

      /**
       * @param request ModifyBatchJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyBatchJobsResponse
       */
      Models::ModifyBatchJobsResponse modifyBatchJobsWithOptions(const Models::ModifyBatchJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ModifyBatchJobsRequest
       * @return ModifyBatchJobsResponse
       */
      Models::ModifyBatchJobsResponse modifyBatchJobs(const Models::ModifyBatchJobsRequest &request);

      /**
       * @summary ModifyBeebotIntent
       *
       * @param tmpReq ModifyBeebotIntentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyBeebotIntentResponse
       */
      Models::ModifyBeebotIntentResponse modifyBeebotIntentWithOptions(const Models::ModifyBeebotIntentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ModifyBeebotIntent
       *
       * @param request ModifyBeebotIntentRequest
       * @return ModifyBeebotIntentResponse
       */
      Models::ModifyBeebotIntentResponse modifyBeebotIntent(const Models::ModifyBeebotIntentRequest &request);

      /**
       * @summary ModifyBeebotIntentLgf
       *
       * @param tmpReq ModifyBeebotIntentLgfRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyBeebotIntentLgfResponse
       */
      Models::ModifyBeebotIntentLgfResponse modifyBeebotIntentLgfWithOptions(const Models::ModifyBeebotIntentLgfRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ModifyBeebotIntentLgf
       *
       * @param request ModifyBeebotIntentLgfRequest
       * @return ModifyBeebotIntentLgfResponse
       */
      Models::ModifyBeebotIntentLgfResponse modifyBeebotIntentLgf(const Models::ModifyBeebotIntentLgfRequest &request);

      /**
       * @summary ModifyBeebotIntentUserSay
       *
       * @param tmpReq ModifyBeebotIntentUserSayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyBeebotIntentUserSayResponse
       */
      Models::ModifyBeebotIntentUserSayResponse modifyBeebotIntentUserSayWithOptions(const Models::ModifyBeebotIntentUserSayRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ModifyBeebotIntentUserSay
       *
       * @param request ModifyBeebotIntentUserSayRequest
       * @return ModifyBeebotIntentUserSayResponse
       */
      Models::ModifyBeebotIntentUserSayResponse modifyBeebotIntentUserSay(const Models::ModifyBeebotIntentUserSayRequest &request);

      /**
       * @param request ModifyDialogueFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDialogueFlowResponse
       */
      Models::ModifyDialogueFlowResponse modifyDialogueFlowWithOptions(const Models::ModifyDialogueFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ModifyDialogueFlowRequest
       * @return ModifyDialogueFlowResponse
       */
      Models::ModifyDialogueFlowResponse modifyDialogueFlow(const Models::ModifyDialogueFlowRequest &request);

      /**
       * @param request ModifyEmptyNumberNoMoreCallsInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyEmptyNumberNoMoreCallsInfoResponse
       */
      Models::ModifyEmptyNumberNoMoreCallsInfoResponse modifyEmptyNumberNoMoreCallsInfoWithOptions(const Models::ModifyEmptyNumberNoMoreCallsInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ModifyEmptyNumberNoMoreCallsInfoRequest
       * @return ModifyEmptyNumberNoMoreCallsInfoResponse
       */
      Models::ModifyEmptyNumberNoMoreCallsInfoResponse modifyEmptyNumberNoMoreCallsInfo(const Models::ModifyEmptyNumberNoMoreCallsInfoRequest &request);

      /**
       * @param request ModifyGlobalQuestionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyGlobalQuestionResponse
       */
      Models::ModifyGlobalQuestionResponse modifyGlobalQuestionWithOptions(const Models::ModifyGlobalQuestionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ModifyGlobalQuestionRequest
       * @return ModifyGlobalQuestionResponse
       */
      Models::ModifyGlobalQuestionResponse modifyGlobalQuestion(const Models::ModifyGlobalQuestionRequest &request);

      /**
       * @param request ModifyInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceResponse
       */
      Models::ModifyInstanceResponse modifyInstanceWithOptions(const Models::ModifyInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ModifyInstanceRequest
       * @return ModifyInstanceResponse
       */
      Models::ModifyInstanceResponse modifyInstance(const Models::ModifyInstanceRequest &request);

      /**
       * @param request ModifyIntentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyIntentResponse
       */
      Models::ModifyIntentResponse modifyIntentWithOptions(const Models::ModifyIntentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ModifyIntentRequest
       * @return ModifyIntentResponse
       */
      Models::ModifyIntentResponse modifyIntent(const Models::ModifyIntentRequest &request);

      /**
       * @summary 修改任务组
       *
       * @param request ModifyJobGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyJobGroupResponse
       */
      Models::ModifyJobGroupResponse modifyJobGroupWithOptions(const Models::ModifyJobGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改任务组
       *
       * @param request ModifyJobGroupRequest
       * @return ModifyJobGroupResponse
       */
      Models::ModifyJobGroupResponse modifyJobGroup(const Models::ModifyJobGroupRequest &request);

      /**
       * @summary ModifyOutboundCallNumber
       *
       * @param request ModifyOutboundCallNumberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyOutboundCallNumberResponse
       */
      Models::ModifyOutboundCallNumberResponse modifyOutboundCallNumberWithOptions(const Models::ModifyOutboundCallNumberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ModifyOutboundCallNumber
       *
       * @param request ModifyOutboundCallNumberRequest
       * @return ModifyOutboundCallNumberResponse
       */
      Models::ModifyOutboundCallNumberResponse modifyOutboundCallNumber(const Models::ModifyOutboundCallNumberRequest &request);

      /**
       * @summary 修改场景
       *
       * @param request ModifyScriptRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyScriptResponse
       */
      Models::ModifyScriptResponse modifyScriptWithOptions(const Models::ModifyScriptRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改场景
       *
       * @param request ModifyScriptRequest
       * @return ModifyScriptResponse
       */
      Models::ModifyScriptResponse modifyScript(const Models::ModifyScriptRequest &request);

      /**
       * @param request ModifyScriptVoiceConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyScriptVoiceConfigResponse
       */
      Models::ModifyScriptVoiceConfigResponse modifyScriptVoiceConfigWithOptions(const Models::ModifyScriptVoiceConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ModifyScriptVoiceConfigRequest
       * @return ModifyScriptVoiceConfigResponse
       */
      Models::ModifyScriptVoiceConfigResponse modifyScriptVoiceConfig(const Models::ModifyScriptVoiceConfigRequest &request);

      /**
       * @param request ModifyTTSConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyTTSConfigResponse
       */
      Models::ModifyTTSConfigResponse modifyTTSConfigWithOptions(const Models::ModifyTTSConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ModifyTTSConfigRequest
       * @return ModifyTTSConfigResponse
       */
      Models::ModifyTTSConfigResponse modifyTTSConfig(const Models::ModifyTTSConfigRequest &request);

      /**
       * @param request ModifyTagGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyTagGroupsResponse
       */
      Models::ModifyTagGroupsResponse modifyTagGroupsWithOptions(const Models::ModifyTagGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ModifyTagGroupsRequest
       * @return ModifyTagGroupsResponse
       */
      Models::ModifyTagGroupsResponse modifyTagGroups(const Models::ModifyTagGroupsRequest &request);

      /**
       * @param request PublishScriptRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishScriptResponse
       */
      Models::PublishScriptResponse publishScriptWithOptions(const Models::PublishScriptRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request PublishScriptRequest
       * @return PublishScriptResponse
       */
      Models::PublishScriptResponse publishScript(const Models::PublishScriptRequest &request);

      /**
       * @param request PublishScriptForDebugRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishScriptForDebugResponse
       */
      Models::PublishScriptForDebugResponse publishScriptForDebugWithOptions(const Models::PublishScriptForDebugRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request PublishScriptForDebugRequest
       * @return PublishScriptForDebugResponse
       */
      Models::PublishScriptForDebugResponse publishScriptForDebug(const Models::PublishScriptForDebugRequest &request);

      /**
       * @summary QueryJobs
       *
       * @param request QueryJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryJobsResponse
       */
      Models::QueryJobsResponse queryJobsWithOptions(const Models::QueryJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary QueryJobs
       *
       * @param request QueryJobsRequest
       * @return QueryJobsResponse
       */
      Models::QueryJobsResponse queryJobs(const Models::QueryJobsRequest &request);

      /**
       * @summary 获取外呼任务结果信息
       *
       * @param request QueryJobsWithResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryJobsWithResultResponse
       */
      Models::QueryJobsWithResultResponse queryJobsWithResultWithOptions(const Models::QueryJobsWithResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取外呼任务结果信息
       *
       * @param request QueryJobsWithResultRequest
       * @return QueryJobsWithResultResponse
       */
      Models::QueryJobsWithResultResponse queryJobsWithResult(const Models::QueryJobsWithResultRequest &request);

      /**
       * @param request QueryScriptWaveformsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryScriptWaveformsResponse
       */
      Models::QueryScriptWaveformsResponse queryScriptWaveformsWithOptions(const Models::QueryScriptWaveformsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryScriptWaveformsRequest
       * @return QueryScriptWaveformsResponse
       */
      Models::QueryScriptWaveformsResponse queryScriptWaveforms(const Models::QueryScriptWaveformsRequest &request);

      /**
       * @param request QueryScriptsByStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryScriptsByStatusResponse
       */
      Models::QueryScriptsByStatusResponse queryScriptsByStatusWithOptions(const Models::QueryScriptsByStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryScriptsByStatusRequest
       * @return QueryScriptsByStatusResponse
       */
      Models::QueryScriptsByStatusResponse queryScriptsByStatus(const Models::QueryScriptsByStatusRequest &request);

      /**
       * @param request RecordFailureRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RecordFailureResponse
       */
      Models::RecordFailureResponse recordFailureWithOptions(const Models::RecordFailureRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RecordFailureRequest
       * @return RecordFailureResponse
       */
      Models::RecordFailureResponse recordFailure(const Models::RecordFailureRequest &request);

      /**
       * @param request ResumeJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResumeJobsResponse
       */
      Models::ResumeJobsResponse resumeJobsWithOptions(const Models::ResumeJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ResumeJobsRequest
       * @return ResumeJobsResponse
       */
      Models::ResumeJobsResponse resumeJobs(const Models::ResumeJobsRequest &request);

      /**
       * @param request RollbackScriptRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RollbackScriptResponse
       */
      Models::RollbackScriptResponse rollbackScriptWithOptions(const Models::RollbackScriptRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RollbackScriptRequest
       * @return RollbackScriptResponse
       */
      Models::RollbackScriptResponse rollbackScript(const Models::RollbackScriptRequest &request);

      /**
       * @summary 保存接听后延迟播报时间
       *
       * @param request SaveAfterAnswerDelayPlaybackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveAfterAnswerDelayPlaybackResponse
       */
      Models::SaveAfterAnswerDelayPlaybackResponse saveAfterAnswerDelayPlaybackWithOptions(const Models::SaveAfterAnswerDelayPlaybackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 保存接听后延迟播报时间
       *
       * @param request SaveAfterAnswerDelayPlaybackRequest
       * @return SaveAfterAnswerDelayPlaybackResponse
       */
      Models::SaveAfterAnswerDelayPlaybackResponse saveAfterAnswerDelayPlayback(const Models::SaveAfterAnswerDelayPlaybackRequest &request);

      /**
       * @param request SaveAnnotationMissionSessionListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveAnnotationMissionSessionListResponse
       */
      Models::SaveAnnotationMissionSessionListResponse saveAnnotationMissionSessionListWithOptions(const Models::SaveAnnotationMissionSessionListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SaveAnnotationMissionSessionListRequest
       * @return SaveAnnotationMissionSessionListResponse
       */
      Models::SaveAnnotationMissionSessionListResponse saveAnnotationMissionSessionList(const Models::SaveAnnotationMissionSessionListRequest &request);

      /**
       * @param request SaveAnnotationMissionTagInfoListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveAnnotationMissionTagInfoListResponse
       */
      Models::SaveAnnotationMissionTagInfoListResponse saveAnnotationMissionTagInfoListWithOptions(const Models::SaveAnnotationMissionTagInfoListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SaveAnnotationMissionTagInfoListRequest
       * @return SaveAnnotationMissionTagInfoListResponse
       */
      Models::SaveAnnotationMissionTagInfoListResponse saveAnnotationMissionTagInfoList(const Models::SaveAnnotationMissionTagInfoListRequest &request);

      /**
       * @summary 编辑基础策略有效时间窗口
       *
       * @param request SaveBaseStrategyPeriodRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveBaseStrategyPeriodResponse
       */
      Models::SaveBaseStrategyPeriodResponse saveBaseStrategyPeriodWithOptions(const Models::SaveBaseStrategyPeriodRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 编辑基础策略有效时间窗口
       *
       * @param request SaveBaseStrategyPeriodRequest
       * @return SaveBaseStrategyPeriodResponse
       */
      Models::SaveBaseStrategyPeriodResponse saveBaseStrategyPeriod(const Models::SaveBaseStrategyPeriodRequest &request);

      /**
       * @summary 保存外呼黑名单列表
       *
       * @param request SaveContactBlockListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveContactBlockListResponse
       */
      Models::SaveContactBlockListResponse saveContactBlockListWithOptions(const Models::SaveContactBlockListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 保存外呼黑名单列表
       *
       * @param request SaveContactBlockListRequest
       * @return SaveContactBlockListResponse
       */
      Models::SaveContactBlockListResponse saveContactBlockList(const Models::SaveContactBlockListRequest &request);

      /**
       * @summary 保存外呼白名单
       *
       * @param request SaveContactWhiteListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveContactWhiteListResponse
       */
      Models::SaveContactWhiteListResponse saveContactWhiteListWithOptions(const Models::SaveContactWhiteListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 保存外呼白名单
       *
       * @param request SaveContactWhiteListRequest
       * @return SaveContactWhiteListResponse
       */
      Models::SaveContactWhiteListResponse saveContactWhiteList(const Models::SaveContactWhiteListRequest &request);

      /**
       * @param request SaveEffectiveDaysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveEffectiveDaysResponse
       */
      Models::SaveEffectiveDaysResponse saveEffectiveDaysWithOptions(const Models::SaveEffectiveDaysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SaveEffectiveDaysRequest
       * @return SaveEffectiveDaysResponse
       */
      Models::SaveEffectiveDaysResponse saveEffectiveDays(const Models::SaveEffectiveDaysRequest &request);

      /**
       * @summary 保存每日最大外呼量
       *
       * @param request SaveMaxAttemptsPerDayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveMaxAttemptsPerDayResponse
       */
      Models::SaveMaxAttemptsPerDayResponse saveMaxAttemptsPerDayWithOptions(const Models::SaveMaxAttemptsPerDayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 保存每日最大外呼量
       *
       * @param request SaveMaxAttemptsPerDayRequest
       * @return SaveMaxAttemptsPerDayResponse
       */
      Models::SaveMaxAttemptsPerDayResponse saveMaxAttemptsPerDay(const Models::SaveMaxAttemptsPerDayRequest &request);

      /**
       * @summary 外呼历史查询
       *
       * @param request SearchTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchTaskResponse
       */
      Models::SearchTaskResponse searchTaskWithOptions(const Models::SearchTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 外呼历史查询
       *
       * @param request SearchTaskRequest
       * @return SearchTaskResponse
       */
      Models::SearchTaskResponse searchTask(const Models::SearchTaskRequest &request);

      /**
       * @summary 开启一个任务
       *
       * @param request StartJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartJobResponse
       */
      Models::StartJobResponse startJobWithOptions(const Models::StartJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 开启一个任务
       *
       * @param request StartJobRequest
       * @return StartJobResponse
       */
      Models::StartJobResponse startJob(const Models::StartJobRequest &request);

      /**
       * @param request SubmitBatchJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitBatchJobsResponse
       */
      Models::SubmitBatchJobsResponse submitBatchJobsWithOptions(const Models::SubmitBatchJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SubmitBatchJobsRequest
       * @return SubmitBatchJobsResponse
       */
      Models::SubmitBatchJobsResponse submitBatchJobs(const Models::SubmitBatchJobsRequest &request);

      /**
       * @param request SubmitRecordingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitRecordingResponse
       */
      Models::SubmitRecordingResponse submitRecordingWithOptions(const Models::SubmitRecordingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SubmitRecordingRequest
       * @return SubmitRecordingResponse
       */
      Models::SubmitRecordingResponse submitRecording(const Models::SubmitRecordingRequest &request);

      /**
       * @param request SubmitScriptReviewRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitScriptReviewResponse
       */
      Models::SubmitScriptReviewResponse submitScriptReviewWithOptions(const Models::SubmitScriptReviewRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SubmitScriptReviewRequest
       * @return SubmitScriptReviewResponse
       */
      Models::SubmitScriptReviewResponse submitScriptReview(const Models::SubmitScriptReviewRequest &request);

      /**
       * @summary 止呼
       *
       * @param request SuspendCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SuspendCallResponse
       */
      Models::SuspendCallResponse suspendCallWithOptions(const Models::SuspendCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 止呼
       *
       * @param request SuspendCallRequest
       * @return SuspendCallResponse
       */
      Models::SuspendCallResponse suspendCall(const Models::SuspendCallRequest &request);

      /**
       * @summary SuspendCallWithFile
       *
       * @param request SuspendCallWithFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SuspendCallWithFileResponse
       */
      Models::SuspendCallWithFileResponse suspendCallWithFileWithOptions(const Models::SuspendCallWithFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary SuspendCallWithFile
       *
       * @param request SuspendCallWithFileRequest
       * @return SuspendCallWithFileResponse
       */
      Models::SuspendCallWithFileResponse suspendCallWithFile(const Models::SuspendCallWithFileRequest &request);

      /**
       * @param request SuspendJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SuspendJobsResponse
       */
      Models::SuspendJobsResponse suspendJobsWithOptions(const Models::SuspendJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SuspendJobsRequest
       * @return SuspendJobsResponse
       */
      Models::SuspendJobsResponse suspendJobs(const Models::SuspendJobsRequest &request);

      /**
       * @description **
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @description **
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary TaskPreparing
       *
       * @param request TaskPreparingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TaskPreparingResponse
       */
      Models::TaskPreparingResponse taskPreparingWithOptions(const Models::TaskPreparingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary TaskPreparing
       *
       * @param request TaskPreparingRequest
       * @return TaskPreparingResponse
       */
      Models::TaskPreparingResponse taskPreparing(const Models::TaskPreparingRequest &request);

      /**
       * @param request TerminateCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TerminateCallResponse
       */
      Models::TerminateCallResponse terminateCallWithOptions(const Models::TerminateCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request TerminateCallRequest
       * @return TerminateCallResponse
       */
      Models::TerminateCallResponse terminateCall(const Models::TerminateCallRequest &request);

      /**
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @param request UploadScriptRecordingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadScriptRecordingResponse
       */
      Models::UploadScriptRecordingResponse uploadScriptRecordingWithOptions(const Models::UploadScriptRecordingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UploadScriptRecordingRequest
       * @return UploadScriptRecordingResponse
       */
      Models::UploadScriptRecordingResponse uploadScriptRecording(const Models::UploadScriptRecordingRequest &request);

      /**
       * @summary WithdrawScriptReview
       *
       * @description ****
       *
       * @param request WithdrawScriptReviewRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return WithdrawScriptReviewResponse
       */
      Models::WithdrawScriptReviewResponse withdrawScriptReviewWithOptions(const Models::WithdrawScriptReviewRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary WithdrawScriptReview
       *
       * @description ****
       *
       * @param request WithdrawScriptReviewRequest
       * @return WithdrawScriptReviewResponse
       */
      Models::WithdrawScriptReviewResponse withdrawScriptReview(const Models::WithdrawScriptReviewRequest &request);
  };
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
