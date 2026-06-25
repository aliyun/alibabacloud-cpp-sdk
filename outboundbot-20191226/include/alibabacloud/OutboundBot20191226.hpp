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
       * @summary Creates outbound call jobs in batches.
       *
       * @param request AssignJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssignJobsResponse
       */
      Models::AssignJobsResponse assignJobsWithOptions(const Models::AssignJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates outbound call jobs in batches.
       *
       * @param request AssignJobsRequest
       * @return AssignJobsResponse
       */
      Models::AssignJobsResponse assignJobs(const Models::AssignJobsRequest &request);

      /**
       * @summary Asynchronously creates outbound jobs.
       *
       * @param tmpReq AssignJobsAsyncRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssignJobsAsyncResponse
       */
      Models::AssignJobsAsyncResponse assignJobsAsyncWithOptions(const Models::AssignJobsAsyncRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Asynchronously creates outbound jobs.
       *
       * @param request AssignJobsAsyncRequest
       * @return AssignJobsAsyncResponse
       */
      Models::AssignJobsAsyncResponse assignJobsAsync(const Models::AssignJobsAsyncRequest &request);

      /**
       * @summary Cancels jobs that are pending or in progress. This operation cannot cancel jobs that are already in a call.
       *
       * @param request CancelJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelJobsResponse
       */
      Models::CancelJobsResponse cancelJobsWithOptions(const Models::CancelJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels jobs that are pending or in progress. This operation cannot cancel jobs that are already in a call.
       *
       * @param request CancelJobsRequest
       * @return CancelJobsResponse
       */
      Models::CancelJobsResponse cancelJobs(const Models::CancelJobsRequest &request);

      /**
       * @summary Changes the resource group of a resource.
       *
       * @param request ChangeResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroupWithOptions(const Models::ChangeResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the resource group of a resource.
       *
       * @param request ChangeResourceGroupRequest
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroup(const Models::ChangeResourceGroupRequest &request);

      /**
       * @summary You can create an intelligent configuration.
       *
       * @param request CreateAgentProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAgentProfileResponse
       */
      Models::CreateAgentProfileResponse createAgentProfileWithOptions(const Models::CreateAgentProfileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can create an intelligent configuration.
       *
       * @param request CreateAgentProfileRequest
       * @return CreateAgentProfileResponse
       */
      Models::CreateAgentProfileResponse createAgentProfile(const Models::CreateAgentProfileRequest &request);

      /**
       * @summary Creates an annotation task.
       *
       * @param tmpReq CreateAnnotationMissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAnnotationMissionResponse
       */
      Models::CreateAnnotationMissionResponse createAnnotationMissionWithOptions(const Models::CreateAnnotationMissionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an annotation task.
       *
       * @param request CreateAnnotationMissionRequest
       * @return CreateAnnotationMissionResponse
       */
      Models::CreateAnnotationMissionResponse createAnnotationMission(const Models::CreateAnnotationMissionRequest &request);

      /**
       * @summary Deprecated. Do not use this operation to batch-create outbound calling jobs.
       *
       * @param request CreateBatchJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBatchJobsResponse
       */
      Models::CreateBatchJobsResponse createBatchJobsWithOptions(const Models::CreateBatchJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deprecated. Do not use this operation to batch-create outbound calling jobs.
       *
       * @param request CreateBatchJobsRequest
       * @return CreateBatchJobsResponse
       */
      Models::CreateBatchJobsResponse createBatchJobs(const Models::CreateBatchJobsRequest &request);

      /**
       * @summary Copy an existing task group to reinitiate an outbound task.
       *
       * @param request CreateBatchRepeatJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBatchRepeatJobResponse
       */
      Models::CreateBatchRepeatJobResponse createBatchRepeatJobWithOptions(const Models::CreateBatchRepeatJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Copy an existing task group to reinitiate an outbound task.
       *
       * @param request CreateBatchRepeatJobRequest
       * @return CreateBatchRepeatJobResponse
       */
      Models::CreateBatchRepeatJobResponse createBatchRepeatJob(const Models::CreateBatchRepeatJobRequest &request);

      /**
       * @summary Creates an intent for a small-model scenario.
       *
       * @param tmpReq CreateBeebotIntentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBeebotIntentResponse
       */
      Models::CreateBeebotIntentResponse createBeebotIntentWithOptions(const Models::CreateBeebotIntentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an intent for a small-model scenario.
       *
       * @param request CreateBeebotIntentRequest
       * @return CreateBeebotIntentResponse
       */
      Models::CreateBeebotIntentResponse createBeebotIntent(const Models::CreateBeebotIntentRequest &request);

      /**
       * @summary Creates a user utterance template for an intent in a small model scenario.
       *
       * @param tmpReq CreateBeebotIntentLgfRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBeebotIntentLgfResponse
       */
      Models::CreateBeebotIntentLgfResponse createBeebotIntentLgfWithOptions(const Models::CreateBeebotIntentLgfRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a user utterance template for an intent in a small model scenario.
       *
       * @param request CreateBeebotIntentLgfRequest
       * @return CreateBeebotIntentLgfResponse
       */
      Models::CreateBeebotIntentLgfResponse createBeebotIntentLgf(const Models::CreateBeebotIntentLgfRequest &request);

      /**
       * @summary Creates a user utterance for an intent in a small model scenario.
       *
       * @param tmpReq CreateBeebotIntentUserSayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBeebotIntentUserSayResponse
       */
      Models::CreateBeebotIntentUserSayResponse createBeebotIntentUserSayWithOptions(const Models::CreateBeebotIntentUserSayRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a user utterance for an intent in a small model scenario.
       *
       * @param request CreateBeebotIntentUserSayRequest
       * @return CreateBeebotIntentUserSayResponse
       */
      Models::CreateBeebotIntentUserSayResponse createBeebotIntentUserSay(const Models::CreateBeebotIntentUserSayRequest &request);

      /**
       * @summary This legacy canvas API creates a dialogue flow.
       *
       * @param request CreateDialogueFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDialogueFlowResponse
       */
      Models::CreateDialogueFlowResponse createDialogueFlowWithOptions(const Models::CreateDialogueFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This legacy canvas API creates a dialogue flow.
       *
       * @param request CreateDialogueFlowRequest
       * @return CreateDialogueFlowResponse
       */
      Models::CreateDialogueFlowResponse createDialogueFlow(const Models::CreateDialogueFlowRequest &request);

      /**
       * @summary Creates a URL for a Download Hub task.
       *
       * @param request CreateDownloadUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDownloadUrlResponse
       */
      Models::CreateDownloadUrlResponse createDownloadUrlWithOptions(const Models::CreateDownloadUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a URL for a Download Hub task.
       *
       * @param request CreateDownloadUrlRequest
       * @return CreateDownloadUrlResponse
       */
      Models::CreateDownloadUrlResponse createDownloadUrl(const Models::CreateDownloadUrlRequest &request);

      /**
       * @summary Creates a global question in a legacy canvas.
       *
       * @param request CreateGlobalQuestionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGlobalQuestionResponse
       */
      Models::CreateGlobalQuestionResponse createGlobalQuestionWithOptions(const Models::CreateGlobalQuestionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a global question in a legacy canvas.
       *
       * @param request CreateGlobalQuestionRequest
       * @return CreateGlobalQuestionResponse
       */
      Models::CreateGlobalQuestionResponse createGlobalQuestion(const Models::CreateGlobalQuestionRequest &request);

      /**
       * @summary Creates an outbound call instance.
       *
       * @param request CreateInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstanceWithOptions(const Models::CreateInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an outbound call instance.
       *
       * @param request CreateInstanceRequest
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstance(const Models::CreateInstanceRequest &request);

      /**
       * @summary Binds a number to a business instance.
       *
       * @param request CreateInstanceBindNumberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceBindNumberResponse
       */
      Models::CreateInstanceBindNumberResponse createInstanceBindNumberWithOptions(const Models::CreateInstanceBindNumberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Binds a number to a business instance.
       *
       * @param request CreateInstanceBindNumberRequest
       * @return CreateInstanceBindNumberResponse
       */
      Models::CreateInstanceBindNumberResponse createInstanceBindNumber(const Models::CreateInstanceBindNumberRequest &request);

      /**
       * @summary Creates an intent in a legacy canvas script.
       *
       * @param request CreateIntentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateIntentResponse
       */
      Models::CreateIntentResponse createIntentWithOptions(const Models::CreateIntentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an intent in a legacy canvas script.
       *
       * @param request CreateIntentRequest
       * @return CreateIntentResponse
       */
      Models::CreateIntentResponse createIntent(const Models::CreateIntentRequest &request);

      /**
       * @summary Creates a job data parsing task.
       *
       * @param request CreateJobDataParsingTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateJobDataParsingTaskResponse
       */
      Models::CreateJobDataParsingTaskResponse createJobDataParsingTaskWithOptions(const Models::CreateJobDataParsingTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a job data parsing task.
       *
       * @param request CreateJobDataParsingTaskRequest
       * @return CreateJobDataParsingTaskResponse
       */
      Models::CreateJobDataParsingTaskResponse createJobDataParsingTask(const Models::CreateJobDataParsingTaskRequest &request);

      /**
       * @summary Create a job group.
       *
       * @param request CreateJobGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateJobGroupResponse
       */
      Models::CreateJobGroupResponse createJobGroupWithOptions(const Models::CreateJobGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a job group.
       *
       * @param request CreateJobGroupRequest
       * @return CreateJobGroupResponse
       */
      Models::CreateJobGroupResponse createJobGroup(const Models::CreateJobGroupRequest &request);

      /**
       * @summary Creates an export task for an outbound job group.
       *
       * @param request CreateJobGroupExportTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateJobGroupExportTaskResponse
       */
      Models::CreateJobGroupExportTaskResponse createJobGroupExportTaskWithOptions(const Models::CreateJobGroupExportTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an export task for an outbound job group.
       *
       * @param request CreateJobGroupExportTaskRequest
       * @return CreateJobGroupExportTaskResponse
       */
      Models::CreateJobGroupExportTaskResponse createJobGroupExportTask(const Models::CreateJobGroupExportTaskRequest &request);

      /**
       * @summary Create a scenario.
       *
       * @param request CreateScriptRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateScriptResponse
       */
      Models::CreateScriptResponse createScriptWithOptions(const Models::CreateScriptRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a scenario.
       *
       * @param request CreateScriptRequest
       * @return CreateScriptResponse
       */
      Models::CreateScriptResponse createScript(const Models::CreateScriptRequest &request);

      /**
       * @summary Creates a recording for the broadcast script.
       *
       * @description ***
       *
       * @param request CreateScriptWaveformRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateScriptWaveformResponse
       */
      Models::CreateScriptWaveformResponse createScriptWaveformWithOptions(const Models::CreateScriptWaveformRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a recording for the broadcast script.
       *
       * @description ***
       *
       * @param request CreateScriptWaveformRequest
       * @return CreateScriptWaveformResponse
       */
      Models::CreateScriptWaveformResponse createScriptWaveform(const Models::CreateScriptWaveformRequest &request);

      /**
       * @summary Creates a tag for use in the legacy canvas.
       *
       * @param request CreateTagRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTagResponse
       */
      Models::CreateTagResponse createTagWithOptions(const Models::CreateTagRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a tag for use in the legacy canvas.
       *
       * @param request CreateTagRequest
       * @return CreateTagResponse
       */
      Models::CreateTagResponse createTag(const Models::CreateTagRequest &request);

      /**
       * @summary Create an asynchronous task to export outbound call history.
       *
       * @param request CreateTaskExportTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTaskExportTaskResponse
       */
      Models::CreateTaskExportTaskResponse createTaskExportTaskWithOptions(const Models::CreateTaskExportTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create an asynchronous task to export outbound call history.
       *
       * @param request CreateTaskExportTaskRequest
       * @return CreateTaskExportTaskResponse
       */
      Models::CreateTaskExportTaskResponse createTaskExportTask(const Models::CreateTaskExportTaskRequest &request);

      /**
       * @summary Creates a key.
       *
       * @param request CreateTenantKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTenantKeyResponse
       */
      Models::CreateTenantKeyResponse createTenantKeyWithOptions(const Models::CreateTenantKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a key.
       *
       * @param request CreateTenantKeyRequest
       * @return CreateTenantKeyResponse
       */
      Models::CreateTenantKeyResponse createTenantKey(const Models::CreateTenantKeyRequest &request);

      /**
       * @summary Deletes Large Language Model (LLM) agents.
       *
       * @param tmpReq DeleteAgentProfilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAgentProfilesResponse
       */
      Models::DeleteAgentProfilesResponse deleteAgentProfilesWithOptions(const Models::DeleteAgentProfilesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes Large Language Model (LLM) agents.
       *
       * @param request DeleteAgentProfilesRequest
       * @return DeleteAgentProfilesResponse
       */
      Models::DeleteAgentProfilesResponse deleteAgentProfiles(const Models::DeleteAgentProfilesRequest &request);

      /**
       * @summary Deletes all entries from the number district database. This operation is deprecated.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAllNumberDistrictInfoResponse
       */
      Models::DeleteAllNumberDistrictInfoResponse deleteAllNumberDistrictInfoWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes all entries from the number district database. This operation is deprecated.
       *
       * @return DeleteAllNumberDistrictInfoResponse
       */
      Models::DeleteAllNumberDistrictInfoResponse deleteAllNumberDistrictInfo();

      /**
       * @summary Delete an intent in a small-model scenario.
       *
       * @param request DeleteBeebotIntentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBeebotIntentResponse
       */
      Models::DeleteBeebotIntentResponse deleteBeebotIntentWithOptions(const Models::DeleteBeebotIntentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete an intent in a small-model scenario.
       *
       * @param request DeleteBeebotIntentRequest
       * @return DeleteBeebotIntentResponse
       */
      Models::DeleteBeebotIntentResponse deleteBeebotIntent(const Models::DeleteBeebotIntentRequest &request);

      /**
       * @summary Deletes utterance templates for intents in small model scenarios.
       *
       * @param request DeleteBeebotIntentLgfRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBeebotIntentLgfResponse
       */
      Models::DeleteBeebotIntentLgfResponse deleteBeebotIntentLgfWithOptions(const Models::DeleteBeebotIntentLgfRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes utterance templates for intents in small model scenarios.
       *
       * @param request DeleteBeebotIntentLgfRequest
       * @return DeleteBeebotIntentLgfResponse
       */
      Models::DeleteBeebotIntentLgfResponse deleteBeebotIntentLgf(const Models::DeleteBeebotIntentLgfRequest &request);

      /**
       * @summary Delete user queries for intents in the small-model scenario.
       *
       * @param request DeleteBeebotIntentUserSayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBeebotIntentUserSayResponse
       */
      Models::DeleteBeebotIntentUserSayResponse deleteBeebotIntentUserSayWithOptions(const Models::DeleteBeebotIntentUserSayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete user queries for intents in the small-model scenario.
       *
       * @param request DeleteBeebotIntentUserSayRequest
       * @return DeleteBeebotIntentUserSayResponse
       */
      Models::DeleteBeebotIntentUserSayResponse deleteBeebotIntentUserSay(const Models::DeleteBeebotIntentUserSayRequest &request);

      /**
       * @summary You can delete a do-not-call list.
       *
       * @param request DeleteContactBlockListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteContactBlockListResponse
       */
      Models::DeleteContactBlockListResponse deleteContactBlockListWithOptions(const Models::DeleteContactBlockListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can delete a do-not-call list.
       *
       * @param request DeleteContactBlockListRequest
       * @return DeleteContactBlockListResponse
       */
      Models::DeleteContactBlockListResponse deleteContactBlockList(const Models::DeleteContactBlockListRequest &request);

      /**
       * @summary Deletes the global outbound calling policy whitelist.
       *
       * @param request DeleteContactWhiteListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteContactWhiteListResponse
       */
      Models::DeleteContactWhiteListResponse deleteContactWhiteListWithOptions(const Models::DeleteContactWhiteListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the global outbound calling policy whitelist.
       *
       * @param request DeleteContactWhiteListRequest
       * @return DeleteContactWhiteListResponse
       */
      Models::DeleteContactWhiteListResponse deleteContactWhiteList(const Models::DeleteContactWhiteListRequest &request);

      /**
       * @summary Deletes a dialogue flow. This is a legacy canvas API.
       *
       * @param request DeleteDialogueFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDialogueFlowResponse
       */
      Models::DeleteDialogueFlowResponse deleteDialogueFlowWithOptions(const Models::DeleteDialogueFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a dialogue flow. This is a legacy canvas API.
       *
       * @param request DeleteDialogueFlowRequest
       * @return DeleteDialogueFlowResponse
       */
      Models::DeleteDialogueFlowResponse deleteDialogueFlow(const Models::DeleteDialogueFlowRequest &request);

      /**
       * @summary Deletes a global question from a legacy canvas script.
       *
       * @param request DeleteGlobalQuestionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGlobalQuestionResponse
       */
      Models::DeleteGlobalQuestionResponse deleteGlobalQuestionWithOptions(const Models::DeleteGlobalQuestionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a global question from a legacy canvas script.
       *
       * @param request DeleteGlobalQuestionRequest
       * @return DeleteGlobalQuestionResponse
       */
      Models::DeleteGlobalQuestionResponse deleteGlobalQuestion(const Models::DeleteGlobalQuestionRequest &request);

      /**
       * @summary Deletes an Intelligent Outbound Calling instance.
       *
       * @param request DeleteInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstanceWithOptions(const Models::DeleteInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an Intelligent Outbound Calling instance.
       *
       * @param request DeleteInstanceRequest
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstance(const Models::DeleteInstanceRequest &request);

      /**
       * @summary Deletes an intent. This is a legacy API.
       *
       * @param request DeleteIntentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteIntentResponse
       */
      Models::DeleteIntentResponse deleteIntentWithOptions(const Models::DeleteIntentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an intent. This is a legacy API.
       *
       * @param request DeleteIntentRequest
       * @return DeleteIntentResponse
       */
      Models::DeleteIntentResponse deleteIntent(const Models::DeleteIntentRequest &request);

      /**
       * @summary Deletes a job group.
       *
       * @param request DeleteJobGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteJobGroupResponse
       */
      Models::DeleteJobGroupResponse deleteJobGroupWithOptions(const Models::DeleteJobGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a job group.
       *
       * @param request DeleteJobGroupRequest
       * @return DeleteJobGroupResponse
       */
      Models::DeleteJobGroupResponse deleteJobGroup(const Models::DeleteJobGroupRequest &request);

      /**
       * @summary Deletes an outbound call number. This API is deprecated.
       *
       * @param request DeleteOutboundCallNumberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteOutboundCallNumberResponse
       */
      Models::DeleteOutboundCallNumberResponse deleteOutboundCallNumberWithOptions(const Models::DeleteOutboundCallNumberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an outbound call number. This API is deprecated.
       *
       * @param request DeleteOutboundCallNumberRequest
       * @return DeleteOutboundCallNumberResponse
       */
      Models::DeleteOutboundCallNumberResponse deleteOutboundCallNumber(const Models::DeleteOutboundCallNumberRequest &request);

      /**
       * @summary Deletes a specified script.
       *
       * @param request DeleteScriptRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteScriptResponse
       */
      Models::DeleteScriptResponse deleteScriptWithOptions(const Models::DeleteScriptRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified script.
       *
       * @param request DeleteScriptRequest
       * @return DeleteScriptResponse
       */
      Models::DeleteScriptResponse deleteScript(const Models::DeleteScriptRequest &request);

      /**
       * @summary Deletes uploaded recordings for a small-model scenario.
       *
       * @param request DeleteScriptRecordingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteScriptRecordingResponse
       */
      Models::DeleteScriptRecordingResponse deleteScriptRecordingWithOptions(const Models::DeleteScriptRecordingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes uploaded recordings for a small-model scenario.
       *
       * @param request DeleteScriptRecordingRequest
       * @return DeleteScriptRecordingResponse
       */
      Models::DeleteScriptRecordingResponse deleteScriptRecording(const Models::DeleteScriptRecordingRequest &request);

      /**
       * @summary Delete a script recording.
       *
       * @param request DeleteScriptWaveformRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteScriptWaveformResponse
       */
      Models::DeleteScriptWaveformResponse deleteScriptWaveformWithOptions(const Models::DeleteScriptWaveformRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete a script recording.
       *
       * @param request DeleteScriptWaveformRequest
       * @return DeleteScriptWaveformResponse
       */
      Models::DeleteScriptWaveformResponse deleteScriptWaveform(const Models::DeleteScriptWaveformRequest &request);

      /**
       * @summary Retrieves the intent in the small model scenario.
       *
       * @description ***
       *
       * @param request DescribeBeebotIntentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBeebotIntentResponse
       */
      Models::DescribeBeebotIntentResponse describeBeebotIntentWithOptions(const Models::DescribeBeebotIntentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the intent in the small model scenario.
       *
       * @description ***
       *
       * @param request DescribeBeebotIntentRequest
       * @return DescribeBeebotIntentResponse
       */
      Models::DescribeBeebotIntentResponse describeBeebotIntent(const Models::DescribeBeebotIntentRequest &request);

      /**
       * @summary Retrieves performance statistics for task labels.
       *
       * @param request DescribeDialogueNodeStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDialogueNodeStatisticsResponse
       */
      Models::DescribeDialogueNodeStatisticsResponse describeDialogueNodeStatisticsWithOptions(const Models::DescribeDialogueNodeStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves performance statistics for task labels.
       *
       * @param request DescribeDialogueNodeStatisticsRequest
       * @return DescribeDialogueNodeStatisticsResponse
       */
      Models::DescribeDialogueNodeStatisticsResponse describeDialogueNodeStatistics(const Models::DescribeDialogueNodeStatisticsRequest &request);

      /**
       * @summary Describes DS reports.
       *
       * @param request DescribeDsReportsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDsReportsResponse
       */
      Models::DescribeDsReportsResponse describeDsReportsWithOptions(const Models::DescribeDsReportsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Describes DS reports.
       *
       * @param request DescribeDsReportsRequest
       * @return DescribeDsReportsResponse
       */
      Models::DescribeDsReportsResponse describeDsReports(const Models::DescribeDsReportsRequest &request);

      /**
       * @summary Retrieves the details of a global question in a legacy canvas script.
       *
       * @description ***
       *
       * @param request DescribeGlobalQuestionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGlobalQuestionResponse
       */
      Models::DescribeGlobalQuestionResponse describeGlobalQuestionWithOptions(const Models::DescribeGlobalQuestionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a global question in a legacy canvas script.
       *
       * @description ***
       *
       * @param request DescribeGlobalQuestionRequest
       * @return DescribeGlobalQuestionResponse
       */
      Models::DescribeGlobalQuestionResponse describeGlobalQuestion(const Models::DescribeGlobalQuestionRequest &request);

      /**
       * @summary Returns the execution status of tasks in a task group.
       *
       * @param request DescribeGroupExecutingInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGroupExecutingInfoResponse
       */
      Models::DescribeGroupExecutingInfoResponse describeGroupExecutingInfoWithOptions(const Models::DescribeGroupExecutingInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Returns the execution status of tasks in a task group.
       *
       * @param request DescribeGroupExecutingInfoRequest
       * @return DescribeGroupExecutingInfoResponse
       */
      Models::DescribeGroupExecutingInfoResponse describeGroupExecutingInfo(const Models::DescribeGroupExecutingInfoRequest &request);

      /**
       * @summary Queries the details of an Outbound Calling instance.
       *
       * @param request DescribeInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceResponse
       */
      Models::DescribeInstanceResponse describeInstanceWithOptions(const Models::DescribeInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an Outbound Calling instance.
       *
       * @param request DescribeInstanceRequest
       * @return DescribeInstanceResponse
       */
      Models::DescribeInstanceResponse describeInstance(const Models::DescribeInstanceRequest &request);

      /**
       * @summary Retrieves the details of an intent. This is a legacy Canvas API.
       *
       * @param request DescribeIntentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeIntentResponse
       */
      Models::DescribeIntentResponse describeIntentWithOptions(const Models::DescribeIntentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of an intent. This is a legacy Canvas API.
       *
       * @param request DescribeIntentRequest
       * @return DescribeIntentResponse
       */
      Models::DescribeIntentResponse describeIntent(const Models::DescribeIntentRequest &request);

      /**
       * @summary Queries the performance statistics of intents for a task group.
       *
       * @param request DescribeIntentStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeIntentStatisticsResponse
       */
      Models::DescribeIntentStatisticsResponse describeIntentStatisticsWithOptions(const Models::DescribeIntentStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the performance statistics of intents for a task group.
       *
       * @param request DescribeIntentStatisticsRequest
       * @return DescribeIntentStatisticsResponse
       */
      Models::DescribeIntentStatisticsResponse describeIntentStatistics(const Models::DescribeIntentStatisticsRequest &request);

      /**
       * @summary Retrieves the conversation data for a specific job.
       *
       * @param request DescribeJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeJobResponse
       */
      Models::DescribeJobResponse describeJobWithOptions(const Models::DescribeJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the conversation data for a specific job.
       *
       * @param request DescribeJobRequest
       * @return DescribeJobResponse
       */
      Models::DescribeJobResponse describeJob(const Models::DescribeJobRequest &request);

      /**
       * @summary Retrieve the parsing progress of an uploaded job file.
       *
       * @param request DescribeJobDataParsingTaskProgressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeJobDataParsingTaskProgressResponse
       */
      Models::DescribeJobDataParsingTaskProgressResponse describeJobDataParsingTaskProgressWithOptions(const Models::DescribeJobDataParsingTaskProgressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve the parsing progress of an uploaded job file.
       *
       * @param request DescribeJobDataParsingTaskProgressRequest
       * @return DescribeJobDataParsingTaskProgressResponse
       */
      Models::DescribeJobDataParsingTaskProgressResponse describeJobDataParsingTaskProgress(const Models::DescribeJobDataParsingTaskProgressRequest &request);

      /**
       * @summary Retrieves data for intelligent outbound call job groups.
       *
       * @param request DescribeJobGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeJobGroupResponse
       */
      Models::DescribeJobGroupResponse describeJobGroupWithOptions(const Models::DescribeJobGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves data for intelligent outbound call job groups.
       *
       * @param request DescribeJobGroupRequest
       * @return DescribeJobGroupResponse
       */
      Models::DescribeJobGroupResponse describeJobGroup(const Models::DescribeJobGroupRequest &request);

      /**
       * @summary Retrieves the progress of a task group export task. This operation is deprecated. Use ListDownloadTasks instead.
       *
       * @param request DescribeJobGroupExportTaskProgressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeJobGroupExportTaskProgressResponse
       */
      Models::DescribeJobGroupExportTaskProgressResponse describeJobGroupExportTaskProgressWithOptions(const Models::DescribeJobGroupExportTaskProgressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the progress of a task group export task. This operation is deprecated. Use ListDownloadTasks instead.
       *
       * @param request DescribeJobGroupExportTaskProgressRequest
       * @return DescribeJobGroupExportTaskProgressResponse
       */
      Models::DescribeJobGroupExportTaskProgressResponse describeJobGroupExportTaskProgress(const Models::DescribeJobGroupExportTaskProgressRequest &request);

      /**
       * @summary Returns information about a script.
       *
       * @param request DescribeScriptRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeScriptResponse
       */
      Models::DescribeScriptResponse describeScriptWithOptions(const Models::DescribeScriptRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Returns information about a script.
       *
       * @param request DescribeScriptRequest
       * @return DescribeScriptResponse
       */
      Models::DescribeScriptResponse describeScript(const Models::DescribeScriptRequest &request);

      /**
       * @summary Describes the voice configuration of a script created in the legacy canvas.
       *
       * @param request DescribeScriptVoiceConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeScriptVoiceConfigResponse
       */
      Models::DescribeScriptVoiceConfigResponse describeScriptVoiceConfigWithOptions(const Models::DescribeScriptVoiceConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Describes the voice configuration of a script created in the legacy canvas.
       *
       * @param request DescribeScriptVoiceConfigRequest
       * @return DescribeScriptVoiceConfigResponse
       */
      Models::DescribeScriptVoiceConfigResponse describeScriptVoiceConfig(const Models::DescribeScriptVoiceConfigRequest &request);

      /**
       * @summary Query the text-to-speech (TTS) configuration information.
       *
       * @param request DescribeTTSConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTTSConfigResponse
       */
      Models::DescribeTTSConfigResponse describeTTSConfigWithOptions(const Models::DescribeTTSConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the text-to-speech (TTS) configuration information.
       *
       * @param request DescribeTTSConfigRequest
       * @return DescribeTTSConfigResponse
       */
      Models::DescribeTTSConfigResponse describeTTSConfig(const Models::DescribeTTSConfigRequest &request);

      /**
       * @summary TTS preview.
       *
       * @param request DescribeTTSDemoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTTSDemoResponse
       */
      Models::DescribeTTSDemoResponse describeTTSDemoWithOptions(const Models::DescribeTTSDemoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary TTS preview.
       *
       * @param request DescribeTTSDemoRequest
       * @return DescribeTTSDemoResponse
       */
      Models::DescribeTTSDemoResponse describeTTSDemo(const Models::DescribeTTSDemoRequest &request);

      /**
       * @summary Queries statistics about tag hits. This is a legacy canvas API.
       *
       * @param request DescribeTagHitsSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTagHitsSummaryResponse
       */
      Models::DescribeTagHitsSummaryResponse describeTagHitsSummaryWithOptions(const Models::DescribeTagHitsSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries statistics about tag hits. This is a legacy canvas API.
       *
       * @param request DescribeTagHitsSummaryRequest
       * @return DescribeTagHitsSummaryResponse
       */
      Models::DescribeTagHitsSummaryResponse describeTagHitsSummary(const Models::DescribeTagHitsSummaryRequest &request);

      /**
       * @summary Lists the instances to which a phone number is bound in a tenant.
       *
       * @param request DescribeTenantBindNumberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTenantBindNumberResponse
       */
      Models::DescribeTenantBindNumberResponse describeTenantBindNumberWithOptions(const Models::DescribeTenantBindNumberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the instances to which a phone number is bound in a tenant.
       *
       * @param request DescribeTenantBindNumberRequest
       * @return DescribeTenantBindNumberResponse
       */
      Models::DescribeTenantBindNumberResponse describeTenantBindNumber(const Models::DescribeTenantBindNumberRequest &request);

      /**
       * @summary This robot dialogue interface handles CC callback outbound calls. (Deprecated)
       *
       * @param request DialogueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DialogueResponse
       */
      Models::DialogueResponse dialogueWithOptions(const Models::DialogueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This robot dialogue interface handles CC callback outbound calls. (Deprecated)
       *
       * @param request DialogueRequest
       * @return DialogueResponse
       */
      Models::DialogueResponse dialogue(const Models::DialogueRequest &request);

      /**
       * @summary Downloads a call recording.
       *
       * @param request DownloadRecordingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DownloadRecordingResponse
       */
      Models::DownloadRecordingResponse downloadRecordingWithOptions(const Models::DownloadRecordingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Downloads a call recording.
       *
       * @param request DownloadRecordingRequest
       * @return DownloadRecordingResponse
       */
      Models::DownloadRecordingResponse downloadRecording(const Models::DownloadRecordingRequest &request);

      /**
       * @summary Download script recordings by retrieving their URLs. This operation is intended for small model scenarios.
       *
       * @param request DownloadScriptRecordingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DownloadScriptRecordingResponse
       */
      Models::DownloadScriptRecordingResponse downloadScriptRecordingWithOptions(const Models::DownloadScriptRecordingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Download script recordings by retrieving their URLs. This operation is intended for small model scenarios.
       *
       * @param request DownloadScriptRecordingRequest
       * @return DownloadScriptRecordingResponse
       */
      Models::DownloadScriptRecordingResponse downloadScriptRecording(const Models::DownloadScriptRecordingRequest &request);

      /**
       * @summary Duplicates an existing script. This operation applies only to the legacy canvas.
       *
       * @param request DuplicateScriptRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DuplicateScriptResponse
       */
      Models::DuplicateScriptResponse duplicateScriptWithOptions(const Models::DuplicateScriptRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Duplicates an existing script. This operation applies only to the legacy canvas.
       *
       * @param request DuplicateScriptRequest
       * @return DuplicateScriptResponse
       */
      Models::DuplicateScriptResponse duplicateScript(const Models::DuplicateScriptRequest &request);

      /**
       * @summary Exports a scenario.
       *
       * @param request ExportScriptRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportScriptResponse
       */
      Models::ExportScriptResponse exportScriptWithOptions(const Models::ExportScriptRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Exports a scenario.
       *
       * @param request ExportScriptRequest
       * @return ExportScriptResponse
       */
      Models::ExportScriptResponse exportScript(const Models::ExportScriptRequest &request);

      /**
       * @summary Upload a hotword list file.
       *
       * @param request GenerateUploadUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateUploadUrlResponse
       */
      Models::GenerateUploadUrlResponse generateUploadUrlWithOptions(const Models::GenerateUploadUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upload a hotword list file.
       *
       * @param request GenerateUploadUrlRequest
       * @return GenerateUploadUrlResponse
       */
      Models::GenerateUploadUrlResponse generateUploadUrl(const Models::GenerateUploadUrlRequest &request);

      /**
       * @summary Retrieve the delay before audio playback begins after a call is answered.
       *
       * @param request GetAfterAnswerDelayPlaybackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAfterAnswerDelayPlaybackResponse
       */
      Models::GetAfterAnswerDelayPlaybackResponse getAfterAnswerDelayPlaybackWithOptions(const Models::GetAfterAnswerDelayPlaybackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve the delay before audio playback begins after a call is answered.
       *
       * @param request GetAfterAnswerDelayPlaybackRequest
       * @return GetAfterAnswerDelayPlaybackResponse
       */
      Models::GetAfterAnswerDelayPlaybackResponse getAfterAnswerDelayPlayback(const Models::GetAfterAnswerDelayPlaybackRequest &request);

      /**
       * @summary Retrieves the configuration of an agent.
       *
       * @param request GetAgentProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAgentProfileResponse
       */
      Models::GetAgentProfileResponse getAgentProfileWithOptions(const Models::GetAgentProfileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the configuration of an agent.
       *
       * @param request GetAgentProfileRequest
       * @return GetAgentProfileResponse
       */
      Models::GetAgentProfileResponse getAgentProfile(const Models::GetAgentProfileRequest &request);

      /**
       * @summary Retrieves an agent profile template.
       *
       * @param request GetAgentProfileTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAgentProfileTemplateResponse
       */
      Models::GetAgentProfileTemplateResponse getAgentProfileTemplateWithOptions(const Models::GetAgentProfileTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves an agent profile template.
       *
       * @param request GetAgentProfileTemplateRequest
       * @return GetAgentProfileTemplateResponse
       */
      Models::GetAgentProfileTemplateResponse getAgentProfileTemplate(const Models::GetAgentProfileTemplateRequest &request);

      /**
       * @summary null
       *
       * @param request GetAnnotationMissionSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAnnotationMissionSummaryResponse
       */
      Models::GetAnnotationMissionSummaryResponse getAnnotationMissionSummaryWithOptions(const Models::GetAnnotationMissionSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary null
       *
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
       * @summary Retrieves information such as the Automatic Speech Recognition (ASR) model list and hotword list. This operation is deprecated.
       *
       * @param request GetAsrServerInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAsrServerInfoResponse
       */
      Models::GetAsrServerInfoResponse getAsrServerInfoWithOptions(const Models::GetAsrServerInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves information such as the Automatic Speech Recognition (ASR) model list and hotword list. This operation is deprecated.
       *
       * @param request GetAsrServerInfoRequest
       * @return GetAsrServerInfoResponse
       */
      Models::GetAsrServerInfoResponse getAsrServerInfo(const Models::GetAsrServerInfoRequest &request);

      /**
       * @summary Retrieves the result of an asynchronous outbound call task upload.
       *
       * @param request GetAssignJobsAsyncResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAssignJobsAsyncResultResponse
       */
      Models::GetAssignJobsAsyncResultResponse getAssignJobsAsyncResultWithOptions(const Models::GetAssignJobsAsyncResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the result of an asynchronous outbound call task upload.
       *
       * @param request GetAssignJobsAsyncResultRequest
       * @return GetAssignJobsAsyncResultResponse
       */
      Models::GetAssignJobsAsyncResultResponse getAssignJobsAsyncResult(const Models::GetAssignJobsAsyncResultRequest &request);

      /**
       * @summary Retrieve the global outbound time periods for the outbound calling system.
       *
       * @param request GetBaseStrategyPeriodRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBaseStrategyPeriodResponse
       */
      Models::GetBaseStrategyPeriodResponse getBaseStrategyPeriodWithOptions(const Models::GetBaseStrategyPeriodRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve the global outbound time periods for the outbound calling system.
       *
       * @param request GetBaseStrategyPeriodRequest
       * @return GetBaseStrategyPeriodResponse
       */
      Models::GetBaseStrategyPeriodResponse getBaseStrategyPeriod(const Models::GetBaseStrategyPeriodRequest &request);

      /**
       * @summary Retrieves the remaining concurrency for the caller\\"s account.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetConcurrentConversationQuotaResponse
       */
      Models::GetConcurrentConversationQuotaResponse getConcurrentConversationQuotaWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the remaining concurrency for the caller\\"s account.
       *
       * @return GetConcurrentConversationQuotaResponse
       */
      Models::GetConcurrentConversationQuotaResponse getConcurrentConversationQuota();

      /**
       * @summary Retrieves the list of contacts blocked for outbound calls.
       *
       * @param request GetContactBlockListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetContactBlockListResponse
       */
      Models::GetContactBlockListResponse getContactBlockListWithOptions(const Models::GetContactBlockListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of contacts blocked for outbound calls.
       *
       * @param request GetContactBlockListRequest
       * @return GetContactBlockListResponse
       */
      Models::GetContactBlockListResponse getContactBlockList(const Models::GetContactBlockListRequest &request);

      /**
       * @summary Retrieves the global outbound call policy whitelist.
       *
       * @param request GetContactWhiteListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetContactWhiteListResponse
       */
      Models::GetContactWhiteListResponse getContactWhiteListWithOptions(const Models::GetContactWhiteListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the global outbound call policy whitelist.
       *
       * @param request GetContactWhiteListRequest
       * @return GetContactWhiteListResponse
       */
      Models::GetContactWhiteListResponse getContactWhiteList(const Models::GetContactWhiteListRequest &request);

      /**
       * @summary Retrieves the current concurrency of an instance.
       *
       * @param request GetCurrentConcurrencyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCurrentConcurrencyResponse
       */
      Models::GetCurrentConcurrencyResponse getCurrentConcurrencyWithOptions(const Models::GetCurrentConcurrencyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the current concurrency of an instance.
       *
       * @param request GetCurrentConcurrencyRequest
       * @return GetCurrentConcurrencyResponse
       */
      Models::GetCurrentConcurrencyResponse getCurrentConcurrency(const Models::GetCurrentConcurrencyRequest &request);

      /**
       * @summary A query-based feature toggle that disables outbound calls to nonexistent numbers in the global dimension.
       *
       * @param request GetEmptyNumberNoMoreCallsInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEmptyNumberNoMoreCallsInfoResponse
       */
      Models::GetEmptyNumberNoMoreCallsInfoResponse getEmptyNumberNoMoreCallsInfoWithOptions(const Models::GetEmptyNumberNoMoreCallsInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary A query-based feature toggle that disables outbound calls to nonexistent numbers in the global dimension.
       *
       * @param request GetEmptyNumberNoMoreCallsInfoRequest
       * @return GetEmptyNumberNoMoreCallsInfoResponse
       */
      Models::GetEmptyNumberNoMoreCallsInfoResponse getEmptyNumberNoMoreCallsInfo(const Models::GetEmptyNumberNoMoreCallsInfoRequest &request);

      /**
       * @summary Retrieves the parameters for uploading job data.
       *
       * @param request GetJobDataUploadParamsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetJobDataUploadParamsResponse
       */
      Models::GetJobDataUploadParamsResponse getJobDataUploadParamsWithOptions(const Models::GetJobDataUploadParamsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the parameters for uploading job data.
       *
       * @param request GetJobDataUploadParamsRequest
       * @return GetJobDataUploadParamsResponse
       */
      Models::GetJobDataUploadParamsResponse getJobDataUploadParams(const Models::GetJobDataUploadParamsRequest &request);

      /**
       * @summary Retrieves the maximum number of daily call attempts allowed for a specified called number.
       *
       * @param request GetMaxAttemptsPerDayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMaxAttemptsPerDayResponse
       */
      Models::GetMaxAttemptsPerDayResponse getMaxAttemptsPerDayWithOptions(const Models::GetMaxAttemptsPerDayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the maximum number of daily call attempts allowed for a specified called number.
       *
       * @param request GetMaxAttemptsPerDayRequest
       * @return GetMaxAttemptsPerDayResponse
       */
      Models::GetMaxAttemptsPerDayResponse getMaxAttemptsPerDay(const Models::GetMaxAttemptsPerDayRequest &request);

      /**
       * @summary Retrieves the download URL for the number library template. This API is deprecated.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNumberDistrictInfoTemplateDownloadUrlResponse
       */
      Models::GetNumberDistrictInfoTemplateDownloadUrlResponse getNumberDistrictInfoTemplateDownloadUrlWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the download URL for the number library template. This API is deprecated.
       *
       * @return GetNumberDistrictInfoTemplateDownloadUrlResponse
       */
      Models::GetNumberDistrictInfoTemplateDownloadUrlResponse getNumberDistrictInfoTemplateDownloadUrl();

      /**
       * @summary Obtains the public key of the asymmetric encryption algorithm.
       *
       * @param request GetPublicKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPublicKeyResponse
       */
      Models::GetPublicKeyResponse getPublicKeyWithOptions(const Models::GetPublicKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the public key of the asymmetric encryption algorithm.
       *
       * @param request GetPublicKeyRequest
       * @return GetPublicKeyResponse
       */
      Models::GetPublicKeyResponse getPublicKey(const Models::GetPublicKeyRequest &request);

      /**
       * @summary Queries the current concurrency list.
       *
       * @param request GetRealtimeConcurrencyReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRealtimeConcurrencyReportResponse
       */
      Models::GetRealtimeConcurrencyReportResponse getRealtimeConcurrencyReportWithOptions(const Models::GetRealtimeConcurrencyReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the current concurrency list.
       *
       * @param request GetRealtimeConcurrencyReportRequest
       * @return GetRealtimeConcurrencyReportResponse
       */
      Models::GetRealtimeConcurrencyReportResponse getRealtimeConcurrencyReport(const Models::GetRealtimeConcurrencyReportRequest &request);

      /**
       * @summary Summary information for outbound call instances.
       *
       * @param request GetSummaryInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSummaryInfoResponse
       */
      Models::GetSummaryInfoResponse getSummaryInfoWithOptions(const Models::GetSummaryInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Summary information for outbound call instances.
       *
       * @param request GetSummaryInfoRequest
       * @return GetSummaryInfoResponse
       */
      Models::GetSummaryInfoResponse getSummaryInfo(const Models::GetSummaryInfoRequest &request);

      /**
       * @summary Retrieve a task by its UUID.
       *
       * @param request GetTaskByUuidRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTaskByUuidResponse
       */
      Models::GetTaskByUuidResponse getTaskByUuidWithOptions(const Models::GetTaskByUuidRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve a task by its UUID.
       *
       * @param request GetTaskByUuidRequest
       * @return GetTaskByUuidResponse
       */
      Models::GetTaskByUuidResponse getTaskByUuid(const Models::GetTaskByUuidRequest &request);

      /**
       * @summary Retrieve the application version information.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVersionResponse
       */
      Models::GetVersionResponse getVersionWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve the application version information.
       *
       * @return GetVersionResponse
       */
      Models::GetVersionResponse getVersion();

      /**
       * @summary Import a scenario.
       *
       * @param request ImportScriptRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportScriptResponse
       */
      Models::ImportScriptResponse importScriptWithOptions(const Models::ImportScriptRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Import a scenario.
       *
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
       * @summary Retrieves the publication history of an agent configuration in a Large Language Model (LLM) scenario.
       *
       * @param request ListAgentProfilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAgentProfilesResponse
       */
      Models::ListAgentProfilesResponse listAgentProfilesWithOptions(const Models::ListAgentProfilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the publication history of an agent configuration in a Large Language Model (LLM) scenario.
       *
       * @param request ListAgentProfilesRequest
       * @return ListAgentProfilesResponse
       */
      Models::ListAgentProfilesResponse listAgentProfiles(const Models::ListAgentProfilesRequest &request);

      /**
       * @summary Lists the phone numbers bound to the tenant.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAllTenantBindNumberBindingResponse
       */
      Models::ListAllTenantBindNumberBindingResponse listAllTenantBindNumberBindingWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the phone numbers bound to the tenant.
       *
       * @return ListAllTenantBindNumberBindingResponse
       */
      Models::ListAllTenantBindNumberBindingResponse listAllTenantBindNumberBinding();

      /**
       * @summary Lists annotation missions.
       *
       * @param request ListAnnotationMissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAnnotationMissionResponse
       */
      Models::ListAnnotationMissionResponse listAnnotationMissionWithOptions(const Models::ListAnnotationMissionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists annotation missions.
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
       * @summary Lists API plugins.
       *
       * @param request ListApiPluginsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApiPluginsResponse
       */
      Models::ListApiPluginsResponse listApiPluginsWithOptions(const Models::ListApiPluginsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists API plugins.
       *
       * @param request ListApiPluginsRequest
       * @return ListApiPluginsResponse
       */
      Models::ListApiPluginsResponse listApiPlugins(const Models::ListApiPluginsRequest &request);

      /**
       * @summary Lists intents for small-model scenarios.
       *
       * @param request ListBeebotIntentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBeebotIntentResponse
       */
      Models::ListBeebotIntentResponse listBeebotIntentWithOptions(const Models::ListBeebotIntentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists intents for small-model scenarios.
       *
       * @param request ListBeebotIntentRequest
       * @return ListBeebotIntentResponse
       */
      Models::ListBeebotIntentResponse listBeebotIntent(const Models::ListBeebotIntentRequest &request);

      /**
       * @summary Lists the utterance templates for a specified intent in a scenario.
       *
       * @param request ListBeebotIntentLgfRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBeebotIntentLgfResponse
       */
      Models::ListBeebotIntentLgfResponse listBeebotIntentLgfWithOptions(const Models::ListBeebotIntentLgfRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the utterance templates for a specified intent in a scenario.
       *
       * @param request ListBeebotIntentLgfRequest
       * @return ListBeebotIntentLgfResponse
       */
      Models::ListBeebotIntentLgfResponse listBeebotIntentLgf(const Models::ListBeebotIntentLgfRequest &request);

      /**
       * @summary Lists user utterances for intents in small model scenarios.
       *
       * @param request ListBeebotIntentUserSayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBeebotIntentUserSayResponse
       */
      Models::ListBeebotIntentUserSayResponse listBeebotIntentUserSayWithOptions(const Models::ListBeebotIntentUserSayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists user utterances for intents in small model scenarios.
       *
       * @param request ListBeebotIntentUserSayRequest
       * @return ListBeebotIntentUserSayResponse
       */
      Models::ListBeebotIntentUserSayResponse listBeebotIntentUserSay(const Models::ListBeebotIntentUserSayRequest &request);

      /**
       * @summary Lists the instances of the Yunxiao Mi chatbot service in Alibaba Cloud.
       *
       * @param request ListChatbotInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListChatbotInstancesResponse
       */
      Models::ListChatbotInstancesResponse listChatbotInstancesWithOptions(const Models::ListChatbotInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the instances of the Yunxiao Mi chatbot service in Alibaba Cloud.
       *
       * @param request ListChatbotInstancesRequest
       * @return ListChatbotInstancesResponse
       */
      Models::ListChatbotInstancesResponse listChatbotInstances(const Models::ListChatbotInstancesRequest &request);

      /**
       * @summary Queries the dialogue flows of a script in the legacy canvas.
       *
       * @param request ListDialogueFlowsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDialogueFlowsResponse
       */
      Models::ListDialogueFlowsResponse listDialogueFlowsWithOptions(const Models::ListDialogueFlowsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the dialogue flows of a script in the legacy canvas.
       *
       * @param request ListDialogueFlowsRequest
       * @return ListDialogueFlowsResponse
       */
      Models::ListDialogueFlowsResponse listDialogueFlows(const Models::ListDialogueFlowsRequest &request);

      /**
       * @summary Queries the list of download tasks in Download Hub.
       *
       * @param request ListDownloadTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDownloadTasksResponse
       */
      Models::ListDownloadTasksResponse listDownloadTasksWithOptions(const Models::ListDownloadTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of download tasks in Download Hub.
       *
       * @param request ListDownloadTasksRequest
       * @return ListDownloadTasksResponse
       */
      Models::ListDownloadTasksResponse listDownloadTasks(const Models::ListDownloadTasksRequest &request);

      /**
       * @summary You can call the ListFlashSmsTemplates operation to query flash SMS templates.
       *
       * @param request ListFlashSmsTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFlashSmsTemplatesResponse
       */
      Models::ListFlashSmsTemplatesResponse listFlashSmsTemplatesWithOptions(const Models::ListFlashSmsTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the ListFlashSmsTemplates operation to query flash SMS templates.
       *
       * @param request ListFlashSmsTemplatesRequest
       * @return ListFlashSmsTemplatesResponse
       */
      Models::ListFlashSmsTemplatesResponse listFlashSmsTemplates(const Models::ListFlashSmsTemplatesRequest &request);

      /**
       * @summary Queries the list of key questions. This is a legacy canvas interface.
       *
       * @param request ListGlobalQuestionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGlobalQuestionsResponse
       */
      Models::ListGlobalQuestionsResponse listGlobalQuestionsWithOptions(const Models::ListGlobalQuestionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of key questions. This is a legacy canvas interface.
       *
       * @param request ListGlobalQuestionsRequest
       * @return ListGlobalQuestionsResponse
       */
      Models::ListGlobalQuestionsResponse listGlobalQuestions(const Models::ListGlobalQuestionsRequest &request);

      /**
       * @summary Queries the list of Outbound Bot service instances.
       *
       * @param request ListInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstancesWithOptions(const Models::ListInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of Outbound Bot service instances.
       *
       * @param request ListInstancesRequest
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstances(const Models::ListInstancesRequest &request);

      /**
       * @summary Query intent for the Annotation Center list.
       *
       * @param request ListIntentionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIntentionsResponse
       */
      Models::ListIntentionsResponse listIntentionsWithOptions(const Models::ListIntentionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query intent for the Annotation Center list.
       *
       * @param request ListIntentionsRequest
       * @return ListIntentionsResponse
       */
      Models::ListIntentionsResponse listIntentions(const Models::ListIntentionsRequest &request);

      /**
       * @summary Retrieves intents from the legacy canvas interface.
       *
       * @param request ListIntentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIntentsResponse
       */
      Models::ListIntentsResponse listIntentsWithOptions(const Models::ListIntentsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves intents from the legacy canvas interface.
       *
       * @param request ListIntentsRequest
       * @return ListIntentsResponse
       */
      Models::ListIntentsResponse listIntents(const Models::ListIntentsRequest &request);

      /**
       * @summary Retrieves the list of outbound call task groups.
       *
       * @param request ListJobGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListJobGroupsResponse
       */
      Models::ListJobGroupsResponse listJobGroupsWithOptions(const Models::ListJobGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of outbound call task groups.
       *
       * @param request ListJobGroupsRequest
       * @return ListJobGroupsResponse
       */
      Models::ListJobGroupsResponse listJobGroups(const Models::ListJobGroupsRequest &request);

      /**
       * @summary Retrieves the list of outbound call tasks asynchronously. Call this operation to retrieve the results of a `ListJobGroup` call that included the `Async` parameter.
       *
       * @param request ListJobGroupsAsyncRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListJobGroupsAsyncResponse
       */
      Models::ListJobGroupsAsyncResponse listJobGroupsAsyncWithOptions(const Models::ListJobGroupsAsyncRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of outbound call tasks asynchronously. Call this operation to retrieve the results of a `ListJobGroup` call that included the `Async` parameter.
       *
       * @param request ListJobGroupsAsyncRequest
       * @return ListJobGroupsAsyncResponse
       */
      Models::ListJobGroupsAsyncResponse listJobGroupsAsync(const Models::ListJobGroupsAsyncRequest &request);

      /**
       * @summary Query multiple jobs.
       *
       * @param request ListJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListJobsResponse
       */
      Models::ListJobsResponse listJobsWithOptions(const Models::ListJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query multiple jobs.
       *
       * @param request ListJobsRequest
       * @return ListJobsResponse
       */
      Models::ListJobsResponse listJobs(const Models::ListJobsRequest &request);

      /**
       * @summary Lists jobs by job group.
       *
       * @param request ListJobsByGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListJobsByGroupResponse
       */
      Models::ListJobsByGroupResponse listJobsByGroupWithOptions(const Models::ListJobsByGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists jobs by job group.
       *
       * @param request ListJobsByGroupRequest
       * @return ListJobsByGroupResponse
       */
      Models::ListJobsByGroupResponse listJobsByGroup(const Models::ListJobsByGroupRequest &request);

      /**
       * @summary List outbound call numbers.
       *
       * @param request ListOutboundCallNumbersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOutboundCallNumbersResponse
       */
      Models::ListOutboundCallNumbersResponse listOutboundCallNumbersWithOptions(const Models::ListOutboundCallNumbersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary List outbound call numbers.
       *
       * @param request ListOutboundCallNumbersRequest
       * @return ListOutboundCallNumbersResponse
       */
      Models::ListOutboundCallNumbersResponse listOutboundCallNumbers(const Models::ListOutboundCallNumbersRequest &request);

      /**
       * @summary Lists tags for business resources.
       *
       * @param request ListResourceTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResourceTagsResponse
       */
      Models::ListResourceTagsResponse listResourceTagsWithOptions(const Models::ListResourceTagsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists tags for business resources.
       *
       * @param request ListResourceTagsRequest
       * @return ListResourceTagsResponse
       */
      Models::ListResourceTagsResponse listResourceTags(const Models::ListResourceTagsRequest &request);

      /**
       * @summary Retrieves the publication history of the small model for outbound calls.
       *
       * @param request ListScriptPublishHistoriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListScriptPublishHistoriesResponse
       */
      Models::ListScriptPublishHistoriesResponse listScriptPublishHistoriesWithOptions(const Models::ListScriptPublishHistoriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the publication history of the small model for outbound calls.
       *
       * @param request ListScriptPublishHistoriesRequest
       * @return ListScriptPublishHistoriesResponse
       */
      Models::ListScriptPublishHistoriesResponse listScriptPublishHistories(const Models::ListScriptPublishHistoriesRequest &request);

      /**
       * @summary Query the list of recording files. Use this operation in small model scenarios.
       *
       * @param request ListScriptRecordingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListScriptRecordingResponse
       */
      Models::ListScriptRecordingResponse listScriptRecordingWithOptions(const Models::ListScriptRecordingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the list of recording files. Use this operation in small model scenarios.
       *
       * @param request ListScriptRecordingRequest
       * @return ListScriptRecordingResponse
       */
      Models::ListScriptRecordingResponse listScriptRecording(const Models::ListScriptRecordingRequest &request);

      /**
       * @summary Queries the variables that are currently used in a scenario.
       *
       * @param request ListScriptVariablesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListScriptVariablesResponse
       */
      Models::ListScriptVariablesResponse listScriptVariablesWithOptions(const Models::ListScriptVariablesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the variables that are currently used in a scenario.
       *
       * @param request ListScriptVariablesRequest
       * @return ListScriptVariablesResponse
       */
      Models::ListScriptVariablesResponse listScriptVariables(const Models::ListScriptVariablesRequest &request);

      /**
       * @summary Lists the audio in a legacy canvas scene.
       *
       * @description ***
       *
       * @param request ListScriptVoiceConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListScriptVoiceConfigsResponse
       */
      Models::ListScriptVoiceConfigsResponse listScriptVoiceConfigsWithOptions(const Models::ListScriptVoiceConfigsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the audio in a legacy canvas scene.
       *
       * @description ***
       *
       * @param request ListScriptVoiceConfigsRequest
       * @return ListScriptVoiceConfigsResponse
       */
      Models::ListScriptVoiceConfigsResponse listScriptVoiceConfigs(const Models::ListScriptVoiceConfigsRequest &request);

      /**
       * @summary View the script list.
       *
       * @param request ListScriptsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListScriptsResponse
       */
      Models::ListScriptsResponse listScriptsWithOptions(const Models::ListScriptsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary View the script list.
       *
       * @param request ListScriptsRequest
       * @return ListScriptsResponse
       */
      Models::ListScriptsResponse listScripts(const Models::ListScriptsRequest &request);

      /**
       * @summary Query the tag relationships for resources.
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the tag relationships for resources.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Queries the tags of a script. This is a legacy canvas API.
       *
       * @param request ListTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagsResponse
       */
      Models::ListTagsResponse listTagsWithOptions(const Models::ListTagsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tags of a script. This is a legacy canvas API.
       *
       * @param request ListTagsRequest
       * @return ListTagsResponse
       */
      Models::ListTagsResponse listTags(const Models::ListTagsRequest &request);

      /**
       * @summary Modify the agent configuration.
       *
       * @param tmpReq ModifyAgentProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAgentProfileResponse
       */
      Models::ModifyAgentProfileResponse modifyAgentProfileWithOptions(const Models::ModifyAgentProfileRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify the agent configuration.
       *
       * @param request ModifyAgentProfileRequest
       * @return ModifyAgentProfileResponse
       */
      Models::ModifyAgentProfileResponse modifyAgentProfile(const Models::ModifyAgentProfileRequest &request);

      /**
       * @summary Updates the status and name of an annotation task.
       *
       * @param request ModifyAnnotationMissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAnnotationMissionResponse
       */
      Models::ModifyAnnotationMissionResponse modifyAnnotationMissionWithOptions(const Models::ModifyAnnotationMissionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the status and name of an annotation task.
       *
       * @param request ModifyAnnotationMissionRequest
       * @return ModifyAnnotationMissionResponse
       */
      Models::ModifyAnnotationMissionResponse modifyAnnotationMission(const Models::ModifyAnnotationMissionRequest &request);

      /**
       * @summary Modifies batch jobs. This operation is deprecated.
       *
       * @param request ModifyBatchJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyBatchJobsResponse
       */
      Models::ModifyBatchJobsResponse modifyBatchJobsWithOptions(const Models::ModifyBatchJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies batch jobs. This operation is deprecated.
       *
       * @param request ModifyBatchJobsRequest
       * @return ModifyBatchJobsResponse
       */
      Models::ModifyBatchJobsResponse modifyBatchJobs(const Models::ModifyBatchJobsRequest &request);

      /**
       * @summary Modify the intent for a small-model scenario.
       *
       * @param tmpReq ModifyBeebotIntentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyBeebotIntentResponse
       */
      Models::ModifyBeebotIntentResponse modifyBeebotIntentWithOptions(const Models::ModifyBeebotIntentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify the intent for a small-model scenario.
       *
       * @param request ModifyBeebotIntentRequest
       * @return ModifyBeebotIntentResponse
       */
      Models::ModifyBeebotIntentResponse modifyBeebotIntent(const Models::ModifyBeebotIntentRequest &request);

      /**
       * @summary Modifies the intent utterance template for a small model scenario.
       *
       * @param tmpReq ModifyBeebotIntentLgfRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyBeebotIntentLgfResponse
       */
      Models::ModifyBeebotIntentLgfResponse modifyBeebotIntentLgfWithOptions(const Models::ModifyBeebotIntentLgfRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the intent utterance template for a small model scenario.
       *
       * @param request ModifyBeebotIntentLgfRequest
       * @return ModifyBeebotIntentLgfResponse
       */
      Models::ModifyBeebotIntentLgfResponse modifyBeebotIntentLgf(const Models::ModifyBeebotIntentLgfRequest &request);

      /**
       * @summary Modifies a user utterance for an intent in a Beebot scenario.
       *
       * @param tmpReq ModifyBeebotIntentUserSayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyBeebotIntentUserSayResponse
       */
      Models::ModifyBeebotIntentUserSayResponse modifyBeebotIntentUserSayWithOptions(const Models::ModifyBeebotIntentUserSayRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a user utterance for an intent in a Beebot scenario.
       *
       * @param request ModifyBeebotIntentUserSayRequest
       * @return ModifyBeebotIntentUserSayResponse
       */
      Models::ModifyBeebotIntentUserSayResponse modifyBeebotIntentUserSay(const Models::ModifyBeebotIntentUserSayRequest &request);

      /**
       * @summary Modifies a dialogue flow. This is a legacy API for the canvas.
       *
       * @param request ModifyDialogueFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDialogueFlowResponse
       */
      Models::ModifyDialogueFlowResponse modifyDialogueFlowWithOptions(const Models::ModifyDialogueFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a dialogue flow. This is a legacy API for the canvas.
       *
       * @param request ModifyDialogueFlowRequest
       * @return ModifyDialogueFlowResponse
       */
      Models::ModifyDialogueFlowResponse modifyDialogueFlow(const Models::ModifyDialogueFlowRequest &request);

      /**
       * @summary Enables or disables the global no-call feature for nonexistent numbers.
       *
       * @param request ModifyEmptyNumberNoMoreCallsInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyEmptyNumberNoMoreCallsInfoResponse
       */
      Models::ModifyEmptyNumberNoMoreCallsInfoResponse modifyEmptyNumberNoMoreCallsInfoWithOptions(const Models::ModifyEmptyNumberNoMoreCallsInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables the global no-call feature for nonexistent numbers.
       *
       * @param request ModifyEmptyNumberNoMoreCallsInfoRequest
       * @return ModifyEmptyNumberNoMoreCallsInfoResponse
       */
      Models::ModifyEmptyNumberNoMoreCallsInfoResponse modifyEmptyNumberNoMoreCallsInfo(const Models::ModifyEmptyNumberNoMoreCallsInfoRequest &request);

      /**
       * @summary Modifies a global question in the legacy canvas.
       *
       * @param request ModifyGlobalQuestionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyGlobalQuestionResponse
       */
      Models::ModifyGlobalQuestionResponse modifyGlobalQuestionWithOptions(const Models::ModifyGlobalQuestionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a global question in the legacy canvas.
       *
       * @param request ModifyGlobalQuestionRequest
       * @return ModifyGlobalQuestionResponse
       */
      Models::ModifyGlobalQuestionResponse modifyGlobalQuestion(const Models::ModifyGlobalQuestionRequest &request);

      /**
       * @summary Modifies an Outbound Bot instance.
       *
       * @param request ModifyInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceResponse
       */
      Models::ModifyInstanceResponse modifyInstanceWithOptions(const Models::ModifyInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an Outbound Bot instance.
       *
       * @param request ModifyInstanceRequest
       * @return ModifyInstanceResponse
       */
      Models::ModifyInstanceResponse modifyInstance(const Models::ModifyInstanceRequest &request);

      /**
       * @summary Modifies an intent in the legacy canvas. This is a legacy API.
       *
       * @param request ModifyIntentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyIntentResponse
       */
      Models::ModifyIntentResponse modifyIntentWithOptions(const Models::ModifyIntentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an intent in the legacy canvas. This is a legacy API.
       *
       * @param request ModifyIntentRequest
       * @return ModifyIntentResponse
       */
      Models::ModifyIntentResponse modifyIntent(const Models::ModifyIntentRequest &request);

      /**
       * @summary Modify an intelligent outbound call task group.
       *
       * @param request ModifyJobGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyJobGroupResponse
       */
      Models::ModifyJobGroupResponse modifyJobGroupWithOptions(const Models::ModifyJobGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify an intelligent outbound call task group.
       *
       * @param request ModifyJobGroupRequest
       * @return ModifyJobGroupResponse
       */
      Models::ModifyJobGroupResponse modifyJobGroup(const Models::ModifyJobGroupRequest &request);

      /**
       * @summary Modifies an outbound call number. This API is deprecated.
       *
       * @param request ModifyOutboundCallNumberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyOutboundCallNumberResponse
       */
      Models::ModifyOutboundCallNumberResponse modifyOutboundCallNumberWithOptions(const Models::ModifyOutboundCallNumberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an outbound call number. This API is deprecated.
       *
       * @param request ModifyOutboundCallNumberRequest
       * @return ModifyOutboundCallNumberResponse
       */
      Models::ModifyOutboundCallNumberResponse modifyOutboundCallNumber(const Models::ModifyOutboundCallNumberRequest &request);

      /**
       * @summary Modify script information.
       *
       * @param request ModifyScriptRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyScriptResponse
       */
      Models::ModifyScriptResponse modifyScriptWithOptions(const Models::ModifyScriptRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify script information.
       *
       * @param request ModifyScriptRequest
       * @return ModifyScriptResponse
       */
      Models::ModifyScriptResponse modifyScript(const Models::ModifyScriptRequest &request);

      /**
       * @summary Modifies the voice configuration of a script in a legacy canvas.
       *
       * @description ***
       *
       * @param request ModifyScriptVoiceConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyScriptVoiceConfigResponse
       */
      Models::ModifyScriptVoiceConfigResponse modifyScriptVoiceConfigWithOptions(const Models::ModifyScriptVoiceConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the voice configuration of a script in a legacy canvas.
       *
       * @description ***
       *
       * @param request ModifyScriptVoiceConfigRequest
       * @return ModifyScriptVoiceConfigResponse
       */
      Models::ModifyScriptVoiceConfigResponse modifyScriptVoiceConfig(const Models::ModifyScriptVoiceConfigRequest &request);

      /**
       * @summary Update the text-to-speech (TTS) configuration for an existing canvas scenario.
       *
       * @param request ModifyTTSConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyTTSConfigResponse
       */
      Models::ModifyTTSConfigResponse modifyTTSConfigWithOptions(const Models::ModifyTTSConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update the text-to-speech (TTS) configuration for an existing canvas scenario.
       *
       * @param request ModifyTTSConfigRequest
       * @return ModifyTTSConfigResponse
       */
      Models::ModifyTTSConfigResponse modifyTTSConfig(const Models::ModifyTTSConfigRequest &request);

      /**
       * @summary Modifies tag groups for the legacy canvas interface.
       *
       * @param request ModifyTagGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyTagGroupsResponse
       */
      Models::ModifyTagGroupsResponse modifyTagGroupsWithOptions(const Models::ModifyTagGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies tag groups for the legacy canvas interface.
       *
       * @param request ModifyTagGroupsRequest
       * @return ModifyTagGroupsResponse
       */
      Models::ModifyTagGroupsResponse modifyTagGroups(const Models::ModifyTagGroupsRequest &request);

      /**
       * @summary Publishing a scenario
       *
       * @param request PublishScriptRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishScriptResponse
       */
      Models::PublishScriptResponse publishScriptWithOptions(const Models::PublishScriptRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Publishing a scenario
       *
       * @param request PublishScriptRequest
       * @return PublishScriptResponse
       */
      Models::PublishScriptResponse publishScript(const Models::PublishScriptRequest &request);

      /**
       * @summary Publishes the debug version of a script.
       *
       * @param request PublishScriptForDebugRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishScriptForDebugResponse
       */
      Models::PublishScriptForDebugResponse publishScriptForDebugWithOptions(const Models::PublishScriptForDebugRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Publishes the debug version of a script.
       *
       * @param request PublishScriptForDebugRequest
       * @return PublishScriptForDebugResponse
       */
      Models::PublishScriptForDebugResponse publishScriptForDebug(const Models::PublishScriptForDebugRequest &request);

      /**
       * @summary You can query the list of jobs.
       *
       * @param request QueryJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryJobsResponse
       */
      Models::QueryJobsResponse queryJobsWithOptions(const Models::QueryJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can query the list of jobs.
       *
       * @param request QueryJobsRequest
       * @return QueryJobsResponse
       */
      Models::QueryJobsResponse queryJobs(const Models::QueryJobsRequest &request);

      /**
       * @summary Find tasks by result.
       *
       * @param request QueryJobsWithResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryJobsWithResultResponse
       */
      Models::QueryJobsWithResultResponse queryJobsWithResultWithOptions(const Models::QueryJobsWithResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Find tasks by result.
       *
       * @param request QueryJobsWithResultRequest
       * @return QueryJobsWithResultResponse
       */
      Models::QueryJobsWithResultResponse queryJobsWithResult(const Models::QueryJobsWithResultRequest &request);

      /**
       * @summary This legacy canvas interface retrieves the list of recorded speech transcripts.
       *
       * @param request QueryScriptWaveformsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryScriptWaveformsResponse
       */
      Models::QueryScriptWaveformsResponse queryScriptWaveformsWithOptions(const Models::QueryScriptWaveformsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This legacy canvas interface retrieves the list of recorded speech transcripts.
       *
       * @param request QueryScriptWaveformsRequest
       * @return QueryScriptWaveformsResponse
       */
      Models::QueryScriptWaveformsResponse queryScriptWaveforms(const Models::QueryScriptWaveformsRequest &request);

      /**
       * @summary Queries scenario information by status.
       *
       * @param request QueryScriptsByStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryScriptsByStatusResponse
       */
      Models::QueryScriptsByStatusResponse queryScriptsByStatusWithOptions(const Models::QueryScriptsByStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries scenario information by status.
       *
       * @param request QueryScriptsByStatusRequest
       * @return QueryScriptsByStatusResponse
       */
      Models::QueryScriptsByStatusResponse queryScriptsByStatus(const Models::QueryScriptsByStatusRequest &request);

      /**
       * @summary CC sends the call failure reason to the outbound calling system. This operation is deprecated.
       *
       * @param request RecordFailureRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RecordFailureResponse
       */
      Models::RecordFailureResponse recordFailureWithOptions(const Models::RecordFailureRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary CC sends the call failure reason to the outbound calling system. This operation is deprecated.
       *
       * @param request RecordFailureRequest
       * @return RecordFailureResponse
       */
      Models::RecordFailureResponse recordFailure(const Models::RecordFailureRequest &request);

      /**
       * @summary Resumes paused jobs.
       *
       * @param request ResumeJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResumeJobsResponse
       */
      Models::ResumeJobsResponse resumeJobsWithOptions(const Models::ResumeJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resumes paused jobs.
       *
       * @param request ResumeJobsRequest
       * @return ResumeJobsResponse
       */
      Models::ResumeJobsResponse resumeJobs(const Models::ResumeJobsRequest &request);

      /**
       * @summary Roll back a published small model scenario.
       *
       * @param request RollbackScriptRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RollbackScriptResponse
       */
      Models::RollbackScriptResponse rollbackScriptWithOptions(const Models::RollbackScriptRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Roll back a published small model scenario.
       *
       * @param request RollbackScriptRequest
       * @return RollbackScriptResponse
       */
      Models::RollbackScriptResponse rollbackScript(const Models::RollbackScriptRequest &request);

      /**
       * @summary Sets the delay before playback starts after the call is answered.
       *
       * @param request SaveAfterAnswerDelayPlaybackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveAfterAnswerDelayPlaybackResponse
       */
      Models::SaveAfterAnswerDelayPlaybackResponse saveAfterAnswerDelayPlaybackWithOptions(const Models::SaveAfterAnswerDelayPlaybackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the delay before playback starts after the call is answered.
       *
       * @param request SaveAfterAnswerDelayPlaybackRequest
       * @return SaveAfterAnswerDelayPlaybackResponse
       */
      Models::SaveAfterAnswerDelayPlaybackResponse saveAfterAnswerDelayPlayback(const Models::SaveAfterAnswerDelayPlaybackRequest &request);

      /**
       * @summary You can save a list of annotation chat instances.
       *
       * @param request SaveAnnotationMissionSessionListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveAnnotationMissionSessionListResponse
       */
      Models::SaveAnnotationMissionSessionListResponse saveAnnotationMissionSessionListWithOptions(const Models::SaveAnnotationMissionSessionListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can save a list of annotation chat instances.
       *
       * @param request SaveAnnotationMissionSessionListRequest
       * @return SaveAnnotationMissionSessionListResponse
       */
      Models::SaveAnnotationMissionSessionListResponse saveAnnotationMissionSessionList(const Models::SaveAnnotationMissionSessionListRequest &request);

      /**
       * @summary Saves instance tags in a batch.
       *
       * @param request SaveAnnotationMissionTagInfoListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveAnnotationMissionTagInfoListResponse
       */
      Models::SaveAnnotationMissionTagInfoListResponse saveAnnotationMissionTagInfoListWithOptions(const Models::SaveAnnotationMissionTagInfoListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Saves instance tags in a batch.
       *
       * @param request SaveAnnotationMissionTagInfoListRequest
       * @return SaveAnnotationMissionTagInfoListResponse
       */
      Models::SaveAnnotationMissionTagInfoListResponse saveAnnotationMissionTagInfoList(const Models::SaveAnnotationMissionTagInfoListRequest &request);

      /**
       * @summary Modifies the global outbound call time window in system administration.
       *
       * @param request SaveBaseStrategyPeriodRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveBaseStrategyPeriodResponse
       */
      Models::SaveBaseStrategyPeriodResponse saveBaseStrategyPeriodWithOptions(const Models::SaveBaseStrategyPeriodRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the global outbound call time window in system administration.
       *
       * @param request SaveBaseStrategyPeriodRequest
       * @return SaveBaseStrategyPeriodResponse
       */
      Models::SaveBaseStrategyPeriodResponse saveBaseStrategyPeriod(const Models::SaveBaseStrategyPeriodRequest &request);

      /**
       * @summary Adds contacts to the instance\\"s blocklist.
       *
       * @param request SaveContactBlockListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveContactBlockListResponse
       */
      Models::SaveContactBlockListResponse saveContactBlockListWithOptions(const Models::SaveContactBlockListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds contacts to the instance\\"s blocklist.
       *
       * @param request SaveContactBlockListRequest
       * @return SaveContactBlockListResponse
       */
      Models::SaveContactBlockListResponse saveContactBlockList(const Models::SaveContactBlockListRequest &request);

      /**
       * @summary Saves an outbound call whitelist.
       *
       * @param request SaveContactWhiteListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveContactWhiteListResponse
       */
      Models::SaveContactWhiteListResponse saveContactWhiteListWithOptions(const Models::SaveContactWhiteListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Saves an outbound call whitelist.
       *
       * @param request SaveContactWhiteListRequest
       * @return SaveContactWhiteListResponse
       */
      Models::SaveContactWhiteListResponse saveContactWhiteList(const Models::SaveContactWhiteListRequest &request);

      /**
       * @summary Saves the validity period of a basic policy. This operation is deprecated.
       *
       * @param request SaveEffectiveDaysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveEffectiveDaysResponse
       */
      Models::SaveEffectiveDaysResponse saveEffectiveDaysWithOptions(const Models::SaveEffectiveDaysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Saves the validity period of a basic policy. This operation is deprecated.
       *
       * @param request SaveEffectiveDaysRequest
       * @return SaveEffectiveDaysResponse
       */
      Models::SaveEffectiveDaysResponse saveEffectiveDays(const Models::SaveEffectiveDaysRequest &request);

      /**
       * @summary Sets the maximum number of daily outbound call attempts to a specific number.
       *
       * @param request SaveMaxAttemptsPerDayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveMaxAttemptsPerDayResponse
       */
      Models::SaveMaxAttemptsPerDayResponse saveMaxAttemptsPerDayWithOptions(const Models::SaveMaxAttemptsPerDayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the maximum number of daily outbound call attempts to a specific number.
       *
       * @param request SaveMaxAttemptsPerDayRequest
       * @return SaveMaxAttemptsPerDayResponse
       */
      Models::SaveMaxAttemptsPerDayResponse saveMaxAttemptsPerDay(const Models::SaveMaxAttemptsPerDayRequest &request);

      /**
       * @summary Search for tasks.
       *
       * @param request SearchTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchTaskResponse
       */
      Models::SearchTaskResponse searchTaskWithOptions(const Models::SearchTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Search for tasks.
       *
       * @param request SearchTaskRequest
       * @return SearchTaskResponse
       */
      Models::SearchTaskResponse searchTask(const Models::SearchTaskRequest &request);

      /**
       * @summary This API initiates a call directly, bypassing the outbound call scheduling system. It is available only to users on the whitelist.
       *
       * @param request StartJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartJobResponse
       */
      Models::StartJobResponse startJobWithOptions(const Models::StartJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API initiates a call directly, bypassing the outbound call scheduling system. It is available only to users on the whitelist.
       *
       * @param request StartJobRequest
       * @return StartJobResponse
       */
      Models::StartJobResponse startJob(const Models::StartJobRequest &request);

      /**
       * @summary Submits a draft job group. This operation is deprecated.
       *
       * @param request SubmitBatchJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitBatchJobsResponse
       */
      Models::SubmitBatchJobsResponse submitBatchJobsWithOptions(const Models::SubmitBatchJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a draft job group. This operation is deprecated.
       *
       * @param request SubmitBatchJobsRequest
       * @return SubmitBatchJobsResponse
       */
      Models::SubmitBatchJobsResponse submitBatchJobs(const Models::SubmitBatchJobsRequest &request);

      /**
       * @summary Submits a recording of an outbound call. This operation is deprecated.
       *
       * @param request SubmitRecordingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitRecordingResponse
       */
      Models::SubmitRecordingResponse submitRecordingWithOptions(const Models::SubmitRecordingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a recording of an outbound call. This operation is deprecated.
       *
       * @param request SubmitRecordingRequest
       * @return SubmitRecordingResponse
       */
      Models::SubmitRecordingResponse submitRecording(const Models::SubmitRecordingRequest &request);

      /**
       * @summary Submit the scenario for release review.
       *
       * @param request SubmitScriptReviewRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitScriptReviewResponse
       */
      Models::SubmitScriptReviewResponse submitScriptReviewWithOptions(const Models::SubmitScriptReviewRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submit the scenario for release review.
       *
       * @param request SubmitScriptReviewRequest
       * @return SubmitScriptReviewResponse
       */
      Models::SubmitScriptReviewResponse submitScriptReview(const Models::SubmitScriptReviewRequest &request);

      /**
       * @summary Suspends outbound calls for a list of phone numbers.
       *
       * @param request SuspendCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SuspendCallResponse
       */
      Models::SuspendCallResponse suspendCallWithOptions(const Models::SuspendCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Suspends outbound calls for a list of phone numbers.
       *
       * @param request SuspendCallRequest
       * @return SuspendCallResponse
       */
      Models::SuspendCallResponse suspendCall(const Models::SuspendCallRequest &request);

      /**
       * @summary Suspends outbound calls using data from a file.
       *
       * @param request SuspendCallWithFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SuspendCallWithFileResponse
       */
      Models::SuspendCallWithFileResponse suspendCallWithFileWithOptions(const Models::SuspendCallWithFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Suspends outbound calls using data from a file.
       *
       * @param request SuspendCallWithFileRequest
       * @return SuspendCallWithFileResponse
       */
      Models::SuspendCallWithFileResponse suspendCallWithFile(const Models::SuspendCallWithFileRequest &request);

      /**
       * @summary You can pause the job.
       *
       * @param request SuspendJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SuspendJobsResponse
       */
      Models::SuspendJobsResponse suspendJobsWithOptions(const Models::SuspendJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can pause the job.
       *
       * @param request SuspendJobsRequest
       * @return SuspendJobsResponse
       */
      Models::SuspendJobsResponse suspendJobs(const Models::SuspendJobsRequest &request);

      /**
       * @summary Adds tags to instance resources.
       *
       * @description \\*\\*
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds tags to instance resources.
       *
       * @description \\*\\*
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Prepares a task for execution.
       *
       * @param request TaskPreparingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TaskPreparingResponse
       */
      Models::TaskPreparingResponse taskPreparingWithOptions(const Models::TaskPreparingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Prepares a task for execution.
       *
       * @param request TaskPreparingRequest
       * @return TaskPreparingResponse
       */
      Models::TaskPreparingResponse taskPreparing(const Models::TaskPreparingRequest &request);

      /**
       * @summary Terminates a call during an active session.
       *
       * @param request TerminateCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TerminateCallResponse
       */
      Models::TerminateCallResponse terminateCallWithOptions(const Models::TerminateCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Terminates a call during an active session.
       *
       * @param request TerminateCallRequest
       * @return TerminateCallResponse
       */
      Models::TerminateCallResponse terminateCall(const Models::TerminateCallRequest &request);

      /**
       * @summary Remove tags from resources.
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Remove tags from resources.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary Upload recording files.
       *
       * @param request UploadScriptRecordingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadScriptRecordingResponse
       */
      Models::UploadScriptRecordingResponse uploadScriptRecordingWithOptions(const Models::UploadScriptRecordingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upload recording files.
       *
       * @param request UploadScriptRecordingRequest
       * @return UploadScriptRecordingResponse
       */
      Models::UploadScriptRecordingResponse uploadScriptRecording(const Models::UploadScriptRecordingRequest &request);

      /**
       * @summary Revoke script review.
       *
       * @description ***
       *
       * @param request WithdrawScriptReviewRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return WithdrawScriptReviewResponse
       */
      Models::WithdrawScriptReviewResponse withdrawScriptReviewWithOptions(const Models::WithdrawScriptReviewRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revoke script review.
       *
       * @description ***
       *
       * @param request WithdrawScriptReviewRequest
       * @return WithdrawScriptReviewResponse
       */
      Models::WithdrawScriptReviewResponse withdrawScriptReview(const Models::WithdrawScriptReviewRequest &request);
  };
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
