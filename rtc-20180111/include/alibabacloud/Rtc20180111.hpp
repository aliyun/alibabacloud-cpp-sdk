// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_RTC20180111_HPP_
#define ALIBABACLOUD_RTC20180111_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Rtc20180111Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Rtc20180111.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @param request AddRecordTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddRecordTemplateResponse
       */
      Models::AddRecordTemplateResponse addRecordTemplateWithOptions(const Models::AddRecordTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request AddRecordTemplateRequest
       * @return AddRecordTemplateResponse
       */
      Models::AddRecordTemplateResponse addRecordTemplate(const Models::AddRecordTemplateRequest &request);

      /**
       * @summary 创建应用智能体模版
       *
       * @param tmpReq CreateAppAgentTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAppAgentTemplateResponse
       */
      Models::CreateAppAgentTemplateResponse createAppAgentTemplateWithOptions(const Models::CreateAppAgentTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建应用智能体模版
       *
       * @param request CreateAppAgentTemplateRequest
       * @return CreateAppAgentTemplateResponse
       */
      Models::CreateAppAgentTemplateResponse createAppAgentTemplate(const Models::CreateAppAgentTemplateRequest &request);

      /**
       * @summary 新增app自定义布局
       *
       * @param tmpReq CreateAppLayoutRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAppLayoutResponse
       */
      Models::CreateAppLayoutResponse createAppLayoutWithOptions(const Models::CreateAppLayoutRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新增app自定义布局
       *
       * @param request CreateAppLayoutRequest
       * @return CreateAppLayoutResponse
       */
      Models::CreateAppLayoutResponse createAppLayout(const Models::CreateAppLayoutRequest &request);

      /**
       * @summary 增加应用录制模版
       *
       * @param tmpReq CreateAppRecordTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAppRecordTemplateResponse
       */
      Models::CreateAppRecordTemplateResponse createAppRecordTemplateWithOptions(const Models::CreateAppRecordTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 增加应用录制模版
       *
       * @param request CreateAppRecordTemplateRequest
       * @return CreateAppRecordTemplateResponse
       */
      Models::CreateAppRecordTemplateResponse createAppRecordTemplate(const Models::CreateAppRecordTemplateRequest &request);

      /**
       * @summary 创建应用推流模版
       *
       * @param tmpReq CreateAppStreamingOutTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAppStreamingOutTemplateResponse
       */
      Models::CreateAppStreamingOutTemplateResponse createAppStreamingOutTemplateWithOptions(const Models::CreateAppStreamingOutTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建应用推流模版
       *
       * @param request CreateAppStreamingOutTemplateRequest
       * @return CreateAppStreamingOutTemplateResponse
       */
      Models::CreateAppStreamingOutTemplateResponse createAppStreamingOutTemplate(const Models::CreateAppStreamingOutTemplateRequest &request);

      /**
       * @param request CreateAutoLiveStreamRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAutoLiveStreamRuleResponse
       */
      Models::CreateAutoLiveStreamRuleResponse createAutoLiveStreamRuleWithOptions(const Models::CreateAutoLiveStreamRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateAutoLiveStreamRuleRequest
       * @return CreateAutoLiveStreamRuleResponse
       */
      Models::CreateAutoLiveStreamRuleResponse createAutoLiveStreamRule(const Models::CreateAutoLiveStreamRuleRequest &request);

      /**
       * @summary 增加纪要热词表
       *
       * @param tmpReq CreateCloudNotePhrasesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCloudNotePhrasesResponse
       */
      Models::CreateCloudNotePhrasesResponse createCloudNotePhrasesWithOptions(const Models::CreateCloudNotePhrasesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 增加纪要热词表
       *
       * @param request CreateCloudNotePhrasesRequest
       * @return CreateCloudNotePhrasesResponse
       */
      Models::CreateCloudNotePhrasesResponse createCloudNotePhrases(const Models::CreateCloudNotePhrasesRequest &request);

      /**
       * @param request CreateEventSubscribeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEventSubscribeResponse
       */
      Models::CreateEventSubscribeResponse createEventSubscribeWithOptions(const Models::CreateEventSubscribeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateEventSubscribeRequest
       * @return CreateEventSubscribeResponse
       */
      Models::CreateEventSubscribeResponse createEventSubscribe(const Models::CreateEventSubscribeRequest &request);

      /**
       * @param request CreateMPULayoutRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMPULayoutResponse
       */
      Models::CreateMPULayoutResponse createMPULayoutWithOptions(const Models::CreateMPULayoutRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateMPULayoutRequest
       * @return CreateMPULayoutResponse
       */
      Models::CreateMPULayoutResponse createMPULayout(const Models::CreateMPULayoutRequest &request);

      /**
       * @summary 删除应用智能体模版
       *
       * @param request DeleteAppAgentTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAppAgentTemplateResponse
       */
      Models::DeleteAppAgentTemplateResponse deleteAppAgentTemplateWithOptions(const Models::DeleteAppAgentTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除应用智能体模版
       *
       * @param request DeleteAppAgentTemplateRequest
       * @return DeleteAppAgentTemplateResponse
       */
      Models::DeleteAppAgentTemplateResponse deleteAppAgentTemplate(const Models::DeleteAppAgentTemplateRequest &request);

      /**
       * @summary 删除app自定义布局
       *
       * @param tmpReq DeleteAppLayoutRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAppLayoutResponse
       */
      Models::DeleteAppLayoutResponse deleteAppLayoutWithOptions(const Models::DeleteAppLayoutRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除app自定义布局
       *
       * @param request DeleteAppLayoutRequest
       * @return DeleteAppLayoutResponse
       */
      Models::DeleteAppLayoutResponse deleteAppLayout(const Models::DeleteAppLayoutRequest &request);

      /**
       * @summary 删除应用录制模版
       *
       * @param tmpReq DeleteAppRecordTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAppRecordTemplateResponse
       */
      Models::DeleteAppRecordTemplateResponse deleteAppRecordTemplateWithOptions(const Models::DeleteAppRecordTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除应用录制模版
       *
       * @param request DeleteAppRecordTemplateRequest
       * @return DeleteAppRecordTemplateResponse
       */
      Models::DeleteAppRecordTemplateResponse deleteAppRecordTemplate(const Models::DeleteAppRecordTemplateRequest &request);

      /**
       * @summary 删除应用推流模版
       *
       * @param tmpReq DeleteAppStreamingOutTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAppStreamingOutTemplateResponse
       */
      Models::DeleteAppStreamingOutTemplateResponse deleteAppStreamingOutTemplateWithOptions(const Models::DeleteAppStreamingOutTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除应用推流模版
       *
       * @param request DeleteAppStreamingOutTemplateRequest
       * @return DeleteAppStreamingOutTemplateResponse
       */
      Models::DeleteAppStreamingOutTemplateResponse deleteAppStreamingOutTemplate(const Models::DeleteAppStreamingOutTemplateRequest &request);

      /**
       * @param request DeleteAutoLiveStreamRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAutoLiveStreamRuleResponse
       */
      Models::DeleteAutoLiveStreamRuleResponse deleteAutoLiveStreamRuleWithOptions(const Models::DeleteAutoLiveStreamRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteAutoLiveStreamRuleRequest
       * @return DeleteAutoLiveStreamRuleResponse
       */
      Models::DeleteAutoLiveStreamRuleResponse deleteAutoLiveStreamRule(const Models::DeleteAutoLiveStreamRuleRequest &request);

      /**
       * @param request DeleteChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteChannelResponse
       */
      Models::DeleteChannelResponse deleteChannelWithOptions(const Models::DeleteChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteChannelRequest
       * @return DeleteChannelResponse
       */
      Models::DeleteChannelResponse deleteChannel(const Models::DeleteChannelRequest &request);

      /**
       * @summary 删除纪要热词表
       *
       * @param tmpReq DeleteCloudNotePhrasesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCloudNotePhrasesResponse
       */
      Models::DeleteCloudNotePhrasesResponse deleteCloudNotePhrasesWithOptions(const Models::DeleteCloudNotePhrasesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除纪要热词表
       *
       * @param request DeleteCloudNotePhrasesRequest
       * @return DeleteCloudNotePhrasesResponse
       */
      Models::DeleteCloudNotePhrasesResponse deleteCloudNotePhrases(const Models::DeleteCloudNotePhrasesRequest &request);

      /**
       * @param request DeleteEventSubscribeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEventSubscribeResponse
       */
      Models::DeleteEventSubscribeResponse deleteEventSubscribeWithOptions(const Models::DeleteEventSubscribeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteEventSubscribeRequest
       * @return DeleteEventSubscribeResponse
       */
      Models::DeleteEventSubscribeResponse deleteEventSubscribe(const Models::DeleteEventSubscribeRequest &request);

      /**
       * @param request DeleteMPULayoutRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMPULayoutResponse
       */
      Models::DeleteMPULayoutResponse deleteMPULayoutWithOptions(const Models::DeleteMPULayoutRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteMPULayoutRequest
       * @return DeleteMPULayoutResponse
       */
      Models::DeleteMPULayoutResponse deleteMPULayout(const Models::DeleteMPULayoutRequest &request);

      /**
       * @param request DeleteRecordTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRecordTemplateResponse
       */
      Models::DeleteRecordTemplateResponse deleteRecordTemplateWithOptions(const Models::DeleteRecordTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteRecordTemplateRequest
       * @return DeleteRecordTemplateResponse
       */
      Models::DeleteRecordTemplateResponse deleteRecordTemplate(const Models::DeleteRecordTemplateRequest &request);

      /**
       * @summary 列出系统支持的事件回调
       *
       * @param request DescribeAllCallbackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAllCallbackResponse
       */
      Models::DescribeAllCallbackResponse describeAllCallbackWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出系统支持的事件回调
       *
       * @return DescribeAllCallbackResponse
       */
      Models::DescribeAllCallbackResponse describeAllCallback();

      /**
       * @summary 查询应用智能体开关
       *
       * @param request DescribeAppAgentFunctionStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAppAgentFunctionStatusResponse
       */
      Models::DescribeAppAgentFunctionStatusResponse describeAppAgentFunctionStatusWithOptions(const Models::DescribeAppAgentFunctionStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询应用智能体开关
       *
       * @param request DescribeAppAgentFunctionStatusRequest
       * @return DescribeAppAgentFunctionStatusResponse
       */
      Models::DescribeAppAgentFunctionStatusResponse describeAppAgentFunctionStatus(const Models::DescribeAppAgentFunctionStatusRequest &request);

      /**
       * @summary 应用智能体模版列表
       *
       * @param request DescribeAppAgentTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAppAgentTemplatesResponse
       */
      Models::DescribeAppAgentTemplatesResponse describeAppAgentTemplatesWithOptions(const Models::DescribeAppAgentTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 应用智能体模版列表
       *
       * @param request DescribeAppAgentTemplatesRequest
       * @return DescribeAppAgentTemplatesResponse
       */
      Models::DescribeAppAgentTemplatesResponse describeAppAgentTemplates(const Models::DescribeAppAgentTemplatesRequest &request);

      /**
       * @summary 查看app回调开关
       *
       * @param request DescribeAppCallStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAppCallStatusResponse
       */
      Models::DescribeAppCallStatusResponse describeAppCallStatusWithOptions(const Models::DescribeAppCallStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看app回调开关
       *
       * @param request DescribeAppCallStatusRequest
       * @return DescribeAppCallStatusResponse
       */
      Models::DescribeAppCallStatusResponse describeAppCallStatus(const Models::DescribeAppCallStatusRequest &request);

      /**
       * @summary 获取app回调密钥
       *
       * @param request DescribeAppCallbackSecretKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAppCallbackSecretKeyResponse
       */
      Models::DescribeAppCallbackSecretKeyResponse describeAppCallbackSecretKeyWithOptions(const Models::DescribeAppCallbackSecretKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取app回调密钥
       *
       * @param request DescribeAppCallbackSecretKeyRequest
       * @return DescribeAppCallbackSecretKeyResponse
       */
      Models::DescribeAppCallbackSecretKeyResponse describeAppCallbackSecretKey(const Models::DescribeAppCallbackSecretKeyRequest &request);

      /**
       * @summary 查看AppKey
       *
       * @param request DescribeAppKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAppKeyResponse
       */
      Models::DescribeAppKeyResponse describeAppKeyWithOptions(const Models::DescribeAppKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看AppKey
       *
       * @param request DescribeAppKeyRequest
       * @return DescribeAppKeyResponse
       */
      Models::DescribeAppKeyResponse describeAppKey(const Models::DescribeAppKeyRequest &request);

      /**
       * @summary 查询app自定义布局
       *
       * @param tmpReq DescribeAppLayoutsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAppLayoutsResponse
       */
      Models::DescribeAppLayoutsResponse describeAppLayoutsWithOptions(const Models::DescribeAppLayoutsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询app自定义布局
       *
       * @param request DescribeAppLayoutsRequest
       * @return DescribeAppLayoutsResponse
       */
      Models::DescribeAppLayoutsResponse describeAppLayouts(const Models::DescribeAppLayoutsRequest &request);

      /**
       * @summary 查看应用旁路开关
       *
       * @param request DescribeAppLiveStreamStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAppLiveStreamStatusResponse
       */
      Models::DescribeAppLiveStreamStatusResponse describeAppLiveStreamStatusWithOptions(const Models::DescribeAppLiveStreamStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看应用旁路开关
       *
       * @param request DescribeAppLiveStreamStatusRequest
       * @return DescribeAppLiveStreamStatusResponse
       */
      Models::DescribeAppLiveStreamStatusResponse describeAppLiveStreamStatus(const Models::DescribeAppLiveStreamStatusRequest &request);

      /**
       * @summary 查询应用录制开关
       *
       * @param request DescribeAppRecordStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAppRecordStatusResponse
       */
      Models::DescribeAppRecordStatusResponse describeAppRecordStatusWithOptions(const Models::DescribeAppRecordStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询应用录制开关
       *
       * @param request DescribeAppRecordStatusRequest
       * @return DescribeAppRecordStatusResponse
       */
      Models::DescribeAppRecordStatusResponse describeAppRecordStatus(const Models::DescribeAppRecordStatusRequest &request);

      /**
       * @summary 应用录制模版列表
       *
       * @param tmpReq DescribeAppRecordTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAppRecordTemplatesResponse
       */
      Models::DescribeAppRecordTemplatesResponse describeAppRecordTemplatesWithOptions(const Models::DescribeAppRecordTemplatesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 应用录制模版列表
       *
       * @param request DescribeAppRecordTemplatesRequest
       * @return DescribeAppRecordTemplatesResponse
       */
      Models::DescribeAppRecordTemplatesResponse describeAppRecordTemplates(const Models::DescribeAppRecordTemplatesRequest &request);

      /**
       * @summary 查询录制列表
       *
       * @param tmpReq DescribeAppRecordingFilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAppRecordingFilesResponse
       */
      Models::DescribeAppRecordingFilesResponse describeAppRecordingFilesWithOptions(const Models::DescribeAppRecordingFilesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询录制列表
       *
       * @param request DescribeAppRecordingFilesRequest
       * @return DescribeAppRecordingFilesResponse
       */
      Models::DescribeAppRecordingFilesResponse describeAppRecordingFiles(const Models::DescribeAppRecordingFilesRequest &request);

      /**
       * @summary 应用推流模版列表
       *
       * @param tmpReq DescribeAppStreamingOutTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAppStreamingOutTemplatesResponse
       */
      Models::DescribeAppStreamingOutTemplatesResponse describeAppStreamingOutTemplatesWithOptions(const Models::DescribeAppStreamingOutTemplatesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 应用推流模版列表
       *
       * @param request DescribeAppStreamingOutTemplatesRequest
       * @return DescribeAppStreamingOutTemplatesResponse
       */
      Models::DescribeAppStreamingOutTemplatesResponse describeAppStreamingOutTemplates(const Models::DescribeAppStreamingOutTemplatesRequest &request);

      /**
       * @summary App列表
       *
       * @param request DescribeAppsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAppsResponse
       */
      Models::DescribeAppsResponse describeAppsWithOptions(const Models::DescribeAppsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary App列表
       *
       * @param request DescribeAppsRequest
       * @return DescribeAppsResponse
       */
      Models::DescribeAppsResponse describeApps(const Models::DescribeAppsRequest &request);

      /**
       * @param request DescribeAutoLiveStreamRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAutoLiveStreamRuleResponse
       */
      Models::DescribeAutoLiveStreamRuleResponse describeAutoLiveStreamRuleWithOptions(const Models::DescribeAutoLiveStreamRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeAutoLiveStreamRuleRequest
       * @return DescribeAutoLiveStreamRuleResponse
       */
      Models::DescribeAutoLiveStreamRuleResponse describeAutoLiveStreamRule(const Models::DescribeAutoLiveStreamRuleRequest &request);

      /**
       * @summary 调用DescribeCall获取单次通信详情。
       *
       * @param request DescribeCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCallResponse
       */
      Models::DescribeCallResponse describeCallWithOptions(const Models::DescribeCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 调用DescribeCall获取单次通信详情。
       *
       * @param request DescribeCallRequest
       * @return DescribeCallResponse
       */
      Models::DescribeCallResponse describeCall(const Models::DescribeCallRequest &request);

      /**
       * @summary 调用DescribeCallList分页查询时间范围内创建的通信信息。
       *
       * @param request DescribeCallListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCallListResponse
       */
      Models::DescribeCallListResponse describeCallListWithOptions(const Models::DescribeCallListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 调用DescribeCallList分页查询时间范围内创建的通信信息。
       *
       * @param request DescribeCallListRequest
       * @return DescribeCallListResponse
       */
      Models::DescribeCallListResponse describeCallList(const Models::DescribeCallListRequest &request);

      /**
       * @summary app事件回调列表
       *
       * @param request DescribeCallbacksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCallbacksResponse
       */
      Models::DescribeCallbacksResponse describeCallbacksWithOptions(const Models::DescribeCallbacksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary app事件回调列表
       *
       * @param request DescribeCallbacksRequest
       * @return DescribeCallbacksResponse
       */
      Models::DescribeCallbacksResponse describeCallbacks(const Models::DescribeCallbacksRequest &request);

      /**
       * @summary DescribeChannel
       *
       * @param request DescribeChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeChannelResponse
       */
      Models::DescribeChannelResponse describeChannelWithOptions(const Models::DescribeChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary DescribeChannel
       *
       * @param request DescribeChannelRequest
       * @return DescribeChannelResponse
       */
      Models::DescribeChannelResponse describeChannel(const Models::DescribeChannelRequest &request);

      /**
       * @summary 查询频道的所有参会者
       *
       * @param request DescribeChannelAllUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeChannelAllUsersResponse
       */
      Models::DescribeChannelAllUsersResponse describeChannelAllUsersWithOptions(const Models::DescribeChannelAllUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询频道的所有参会者
       *
       * @param request DescribeChannelAllUsersRequest
       * @return DescribeChannelAllUsersResponse
       */
      Models::DescribeChannelAllUsersResponse describeChannelAllUsers(const Models::DescribeChannelAllUsersRequest &request);

      /**
       * @summary 调用DescribeChannelAreaDistributionStatData获取频道地区分布统计数据。
       *
       * @param request DescribeChannelAreaDistributionStatDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeChannelAreaDistributionStatDataResponse
       */
      Models::DescribeChannelAreaDistributionStatDataResponse describeChannelAreaDistributionStatDataWithOptions(const Models::DescribeChannelAreaDistributionStatDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 调用DescribeChannelAreaDistributionStatData获取频道地区分布统计数据。
       *
       * @param request DescribeChannelAreaDistributionStatDataRequest
       * @return DescribeChannelAreaDistributionStatDataResponse
       */
      Models::DescribeChannelAreaDistributionStatDataResponse describeChannelAreaDistributionStatData(const Models::DescribeChannelAreaDistributionStatDataRequest &request);

      /**
       * @summary 调用DescribeChannelDistributionStatData获取频道分布统计数据。
       *
       * @param request DescribeChannelDistributionStatDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeChannelDistributionStatDataResponse
       */
      Models::DescribeChannelDistributionStatDataResponse describeChannelDistributionStatDataWithOptions(const Models::DescribeChannelDistributionStatDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 调用DescribeChannelDistributionStatData获取频道分布统计数据。
       *
       * @param request DescribeChannelDistributionStatDataRequest
       * @return DescribeChannelDistributionStatDataResponse
       */
      Models::DescribeChannelDistributionStatDataResponse describeChannelDistributionStatData(const Models::DescribeChannelDistributionStatDataRequest &request);

      /**
       * @summary 调用DescribeChannelOverallData查询频道概览数据。
       *
       * @param request DescribeChannelOverallDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeChannelOverallDataResponse
       */
      Models::DescribeChannelOverallDataResponse describeChannelOverallDataWithOptions(const Models::DescribeChannelOverallDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 调用DescribeChannelOverallData查询频道概览数据。
       *
       * @param request DescribeChannelOverallDataRequest
       * @return DescribeChannelOverallDataResponse
       */
      Models::DescribeChannelOverallDataResponse describeChannelOverallData(const Models::DescribeChannelOverallDataRequest &request);

      /**
       * @param request DescribeChannelParticipantsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeChannelParticipantsResponse
       */
      Models::DescribeChannelParticipantsResponse describeChannelParticipantsWithOptions(const Models::DescribeChannelParticipantsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeChannelParticipantsRequest
       * @return DescribeChannelParticipantsResponse
       */
      Models::DescribeChannelParticipantsResponse describeChannelParticipants(const Models::DescribeChannelParticipantsRequest &request);

      /**
       * @summary 调用DescribeChannelTopPubUserList获取频道内发布端的用户列表（按用户在线时长降序）。
       *
       * @param request DescribeChannelTopPubUserListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeChannelTopPubUserListResponse
       */
      Models::DescribeChannelTopPubUserListResponse describeChannelTopPubUserListWithOptions(const Models::DescribeChannelTopPubUserListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 调用DescribeChannelTopPubUserList获取频道内发布端的用户列表（按用户在线时长降序）。
       *
       * @param request DescribeChannelTopPubUserListRequest
       * @return DescribeChannelTopPubUserListResponse
       */
      Models::DescribeChannelTopPubUserListResponse describeChannelTopPubUserList(const Models::DescribeChannelTopPubUserListRequest &request);

      /**
       * @summary DescribeChannelUser
       *
       * @param request DescribeChannelUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeChannelUserResponse
       */
      Models::DescribeChannelUserResponse describeChannelUserWithOptions(const Models::DescribeChannelUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary DescribeChannelUser
       *
       * @param request DescribeChannelUserRequest
       * @return DescribeChannelUserResponse
       */
      Models::DescribeChannelUserResponse describeChannelUser(const Models::DescribeChannelUserRequest &request);

      /**
       * @summary 调用DescribeChannelUserMetrics查询频道总览中的用户数据。
       *
       * @param request DescribeChannelUserMetricsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeChannelUserMetricsResponse
       */
      Models::DescribeChannelUserMetricsResponse describeChannelUserMetricsWithOptions(const Models::DescribeChannelUserMetricsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 调用DescribeChannelUserMetrics查询频道总览中的用户数据。
       *
       * @param request DescribeChannelUserMetricsRequest
       * @return DescribeChannelUserMetricsResponse
       */
      Models::DescribeChannelUserMetricsResponse describeChannelUserMetrics(const Models::DescribeChannelUserMetricsRequest &request);

      /**
       * @param request DescribeChannelUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeChannelUsersResponse
       */
      Models::DescribeChannelUsersResponse describeChannelUsersWithOptions(const Models::DescribeChannelUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeChannelUsersRequest
       * @return DescribeChannelUsersResponse
       */
      Models::DescribeChannelUsersResponse describeChannelUsers(const Models::DescribeChannelUsersRequest &request);

      /**
       * @summary 查询在线频道列表
       *
       * @param request DescribeChannelsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeChannelsResponse
       */
      Models::DescribeChannelsResponse describeChannelsWithOptions(const Models::DescribeChannelsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询在线频道列表
       *
       * @param request DescribeChannelsRequest
       * @return DescribeChannelsResponse
       */
      Models::DescribeChannelsResponse describeChannels(const Models::DescribeChannelsRequest &request);

      /**
       * @summary 纪要热词列表
       *
       * @param tmpReq DescribeCloudNotePhrasesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudNotePhrasesResponse
       */
      Models::DescribeCloudNotePhrasesResponse describeCloudNotePhrasesWithOptions(const Models::DescribeCloudNotePhrasesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 纪要热词列表
       *
       * @param request DescribeCloudNotePhrasesRequest
       * @return DescribeCloudNotePhrasesResponse
       */
      Models::DescribeCloudNotePhrasesResponse describeCloudNotePhrases(const Models::DescribeCloudNotePhrasesRequest &request);

      /**
       * @summary 纪要列表
       *
       * @param tmpReq DescribeCloudNotesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudNotesResponse
       */
      Models::DescribeCloudNotesResponse describeCloudNotesWithOptions(const Models::DescribeCloudNotesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 纪要列表
       *
       * @param request DescribeCloudNotesRequest
       * @return DescribeCloudNotesResponse
       */
      Models::DescribeCloudNotesResponse describeCloudNotes(const Models::DescribeCloudNotesRequest &request);

      /**
       * @summary 查询录制任务状态
       *
       * @param request DescribeCloudRecordStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudRecordStatusResponse
       */
      Models::DescribeCloudRecordStatusResponse describeCloudRecordStatusWithOptions(const Models::DescribeCloudRecordStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询录制任务状态
       *
       * @param request DescribeCloudRecordStatusRequest
       * @return DescribeCloudRecordStatusResponse
       */
      Models::DescribeCloudRecordStatusResponse describeCloudRecordStatus(const Models::DescribeCloudRecordStatusRequest &request);

      /**
       * @summary 调用DescribeEndPointEventList获取端对端用户事件列表。
       *
       * @param request DescribeEndPointEventListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEndPointEventListResponse
       */
      Models::DescribeEndPointEventListResponse describeEndPointEventListWithOptions(const Models::DescribeEndPointEventListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 调用DescribeEndPointEventList获取端对端用户事件列表。
       *
       * @param request DescribeEndPointEventListRequest
       * @return DescribeEndPointEventListResponse
       */
      Models::DescribeEndPointEventListResponse describeEndPointEventList(const Models::DescribeEndPointEventListRequest &request);

      /**
       * @summary 调用DescribeEndPointMetricData获取端对端指标数据。
       *
       * @param request DescribeEndPointMetricDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEndPointMetricDataResponse
       */
      Models::DescribeEndPointMetricDataResponse describeEndPointMetricDataWithOptions(const Models::DescribeEndPointMetricDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 调用DescribeEndPointMetricData获取端对端指标数据。
       *
       * @param request DescribeEndPointMetricDataRequest
       * @return DescribeEndPointMetricDataResponse
       */
      Models::DescribeEndPointMetricDataResponse describeEndPointMetricData(const Models::DescribeEndPointMetricDataRequest &request);

      /**
       * @summary 获取异常诊断影响因素分布
       *
       * @param request DescribeFaultDiagnosisFactorDistributionStatRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFaultDiagnosisFactorDistributionStatResponse
       */
      Models::DescribeFaultDiagnosisFactorDistributionStatResponse describeFaultDiagnosisFactorDistributionStatWithOptions(const Models::DescribeFaultDiagnosisFactorDistributionStatRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取异常诊断影响因素分布
       *
       * @param request DescribeFaultDiagnosisFactorDistributionStatRequest
       * @return DescribeFaultDiagnosisFactorDistributionStatResponse
       */
      Models::DescribeFaultDiagnosisFactorDistributionStatResponse describeFaultDiagnosisFactorDistributionStat(const Models::DescribeFaultDiagnosisFactorDistributionStatRequest &request);

      /**
       * @summary 获取异常诊断总览数据
       *
       * @param request DescribeFaultDiagnosisOverallDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFaultDiagnosisOverallDataResponse
       */
      Models::DescribeFaultDiagnosisOverallDataResponse describeFaultDiagnosisOverallDataWithOptions(const Models::DescribeFaultDiagnosisOverallDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取异常诊断总览数据
       *
       * @param request DescribeFaultDiagnosisOverallDataRequest
       * @return DescribeFaultDiagnosisOverallDataResponse
       */
      Models::DescribeFaultDiagnosisOverallDataResponse describeFaultDiagnosisOverallData(const Models::DescribeFaultDiagnosisOverallDataRequest &request);

      /**
       * @summary 获取异常诊断用户详情
       *
       * @param request DescribeFaultDiagnosisUserDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFaultDiagnosisUserDetailResponse
       */
      Models::DescribeFaultDiagnosisUserDetailResponse describeFaultDiagnosisUserDetailWithOptions(const Models::DescribeFaultDiagnosisUserDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取异常诊断用户详情
       *
       * @param request DescribeFaultDiagnosisUserDetailRequest
       * @return DescribeFaultDiagnosisUserDetailResponse
       */
      Models::DescribeFaultDiagnosisUserDetailResponse describeFaultDiagnosisUserDetail(const Models::DescribeFaultDiagnosisUserDetailRequest &request);

      /**
       * @summary 获取异常诊断用户明细列表
       *
       * @param request DescribeFaultDiagnosisUserListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFaultDiagnosisUserListResponse
       */
      Models::DescribeFaultDiagnosisUserListResponse describeFaultDiagnosisUserListWithOptions(const Models::DescribeFaultDiagnosisUserListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取异常诊断用户明细列表
       *
       * @param request DescribeFaultDiagnosisUserListRequest
       * @return DescribeFaultDiagnosisUserListResponse
       */
      Models::DescribeFaultDiagnosisUserListResponse describeFaultDiagnosisUserList(const Models::DescribeFaultDiagnosisUserListRequest &request);

      /**
       * @param request DescribeMPULayoutInfoListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMPULayoutInfoListResponse
       */
      Models::DescribeMPULayoutInfoListResponse describeMPULayoutInfoListWithOptions(const Models::DescribeMPULayoutInfoListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeMPULayoutInfoListRequest
       * @return DescribeMPULayoutInfoListResponse
       */
      Models::DescribeMPULayoutInfoListResponse describeMPULayoutInfoList(const Models::DescribeMPULayoutInfoListRequest &request);

      /**
       * @summary 调用DescribePubUserListBySubUser根据订阅端获取通信中发布端用户列表。
       *
       * @param request DescribePubUserListBySubUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePubUserListBySubUserResponse
       */
      Models::DescribePubUserListBySubUserResponse describePubUserListBySubUserWithOptions(const Models::DescribePubUserListBySubUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 调用DescribePubUserListBySubUser根据订阅端获取通信中发布端用户列表。
       *
       * @param request DescribePubUserListBySubUserRequest
       * @return DescribePubUserListBySubUserResponse
       */
      Models::DescribePubUserListBySubUserResponse describePubUserListBySubUser(const Models::DescribePubUserListBySubUserRequest &request);

      /**
       * @summary 调用DescribeQoeMetricData获取单次通信中用户的下行体验质量指标。
       *
       * @param request DescribeQoeMetricDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeQoeMetricDataResponse
       */
      Models::DescribeQoeMetricDataResponse describeQoeMetricDataWithOptions(const Models::DescribeQoeMetricDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 调用DescribeQoeMetricData获取单次通信中用户的下行体验质量指标。
       *
       * @param request DescribeQoeMetricDataRequest
       * @return DescribeQoeMetricDataResponse
       */
      Models::DescribeQoeMetricDataResponse describeQoeMetricData(const Models::DescribeQoeMetricDataRequest &request);

      /**
       * @summary 获取质量统计区域分布统计数据
       *
       * @param request DescribeQualityAreaDistributionStatDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeQualityAreaDistributionStatDataResponse
       */
      Models::DescribeQualityAreaDistributionStatDataResponse describeQualityAreaDistributionStatDataWithOptions(const Models::DescribeQualityAreaDistributionStatDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取质量统计区域分布统计数据
       *
       * @param request DescribeQualityAreaDistributionStatDataRequest
       * @return DescribeQualityAreaDistributionStatDataResponse
       */
      Models::DescribeQualityAreaDistributionStatDataResponse describeQualityAreaDistributionStatData(const Models::DescribeQualityAreaDistributionStatDataRequest &request);

      /**
       * @summary 获取质量统计分布数据
       *
       * @param request DescribeQualityDistributionStatDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeQualityDistributionStatDataResponse
       */
      Models::DescribeQualityDistributionStatDataResponse describeQualityDistributionStatDataWithOptions(const Models::DescribeQualityDistributionStatDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取质量统计分布数据
       *
       * @param request DescribeQualityDistributionStatDataRequest
       * @return DescribeQualityDistributionStatDataResponse
       */
      Models::DescribeQualityDistributionStatDataResponse describeQualityDistributionStatData(const Models::DescribeQualityDistributionStatDataRequest &request);

      /**
       * @summary 获取质量统计各操作系统下SDK版本分布数据
       *
       * @param request DescribeQualityOsSdkVersionDistributionStatDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeQualityOsSdkVersionDistributionStatDataResponse
       */
      Models::DescribeQualityOsSdkVersionDistributionStatDataResponse describeQualityOsSdkVersionDistributionStatDataWithOptions(const Models::DescribeQualityOsSdkVersionDistributionStatDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取质量统计各操作系统下SDK版本分布数据
       *
       * @param request DescribeQualityOsSdkVersionDistributionStatDataRequest
       * @return DescribeQualityOsSdkVersionDistributionStatDataResponse
       */
      Models::DescribeQualityOsSdkVersionDistributionStatDataResponse describeQualityOsSdkVersionDistributionStatData(const Models::DescribeQualityOsSdkVersionDistributionStatDataRequest &request);

      /**
       * @summary 获取质量统计概览数据
       *
       * @param request DescribeQualityOverallDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeQualityOverallDataResponse
       */
      Models::DescribeQualityOverallDataResponse describeQualityOverallDataWithOptions(const Models::DescribeQualityOverallDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取质量统计概览数据
       *
       * @param request DescribeQualityOverallDataRequest
       * @return DescribeQualityOverallDataResponse
       */
      Models::DescribeQualityOverallDataResponse describeQualityOverallData(const Models::DescribeQualityOverallDataRequest &request);

      /**
       * @param request DescribeRecordFilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRecordFilesResponse
       */
      Models::DescribeRecordFilesResponse describeRecordFilesWithOptions(const Models::DescribeRecordFilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeRecordFilesRequest
       * @return DescribeRecordFilesResponse
       */
      Models::DescribeRecordFilesResponse describeRecordFiles(const Models::DescribeRecordFilesRequest &request);

      /**
       * @param request DescribeRecordTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRecordTemplatesResponse
       */
      Models::DescribeRecordTemplatesResponse describeRecordTemplatesWithOptions(const Models::DescribeRecordTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeRecordTemplatesRequest
       * @return DescribeRecordTemplatesResponse
       */
      Models::DescribeRecordTemplatesResponse describeRecordTemplates(const Models::DescribeRecordTemplatesRequest &request);

      /**
       * @param request DescribeRtcChannelListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRtcChannelListResponse
       */
      Models::DescribeRtcChannelListResponse describeRtcChannelListWithOptions(const Models::DescribeRtcChannelListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeRtcChannelListRequest
       * @return DescribeRtcChannelListResponse
       */
      Models::DescribeRtcChannelListResponse describeRtcChannelList(const Models::DescribeRtcChannelListRequest &request);

      /**
       * @param request DescribeRtcChannelMetricRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRtcChannelMetricResponse
       */
      Models::DescribeRtcChannelMetricResponse describeRtcChannelMetricWithOptions(const Models::DescribeRtcChannelMetricRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeRtcChannelMetricRequest
       * @return DescribeRtcChannelMetricResponse
       */
      Models::DescribeRtcChannelMetricResponse describeRtcChannelMetric(const Models::DescribeRtcChannelMetricRequest &request);

      /**
       * @param request DescribeRtcDurationDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRtcDurationDataResponse
       */
      Models::DescribeRtcDurationDataResponse describeRtcDurationDataWithOptions(const Models::DescribeRtcDurationDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeRtcDurationDataRequest
       * @return DescribeRtcDurationDataResponse
       */
      Models::DescribeRtcDurationDataResponse describeRtcDurationData(const Models::DescribeRtcDurationDataRequest &request);

      /**
       * @param request DescribeRtcPeakChannelCntDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRtcPeakChannelCntDataResponse
       */
      Models::DescribeRtcPeakChannelCntDataResponse describeRtcPeakChannelCntDataWithOptions(const Models::DescribeRtcPeakChannelCntDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeRtcPeakChannelCntDataRequest
       * @return DescribeRtcPeakChannelCntDataResponse
       */
      Models::DescribeRtcPeakChannelCntDataResponse describeRtcPeakChannelCntData(const Models::DescribeRtcPeakChannelCntDataRequest &request);

      /**
       * @param request DescribeRtcUserCntDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRtcUserCntDataResponse
       */
      Models::DescribeRtcUserCntDataResponse describeRtcUserCntDataWithOptions(const Models::DescribeRtcUserCntDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeRtcUserCntDataRequest
       * @return DescribeRtcUserCntDataResponse
       */
      Models::DescribeRtcUserCntDataResponse describeRtcUserCntData(const Models::DescribeRtcUserCntDataRequest &request);

      /**
       * @summary 查询旁路推流状态
       *
       * @param request DescribeStreamingOutStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeStreamingOutStatusResponse
       */
      Models::DescribeStreamingOutStatusResponse describeStreamingOutStatusWithOptions(const Models::DescribeStreamingOutStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询旁路推流状态
       *
       * @param request DescribeStreamingOutStatusRequest
       * @return DescribeStreamingOutStatusResponse
       */
      Models::DescribeStreamingOutStatusResponse describeStreamingOutStatus(const Models::DescribeStreamingOutStatusRequest &request);

      /**
       * @summary 系统内置布局
       *
       * @param request DescribeSystemLayoutListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSystemLayoutListResponse
       */
      Models::DescribeSystemLayoutListResponse describeSystemLayoutListWithOptions(const Models::DescribeSystemLayoutListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 系统内置布局
       *
       * @param request DescribeSystemLayoutListRequest
       * @return DescribeSystemLayoutListResponse
       */
      Models::DescribeSystemLayoutListResponse describeSystemLayoutList(const Models::DescribeSystemLayoutListRequest &request);

      /**
       * @summary 获取用量统计地域分布数据
       *
       * @param request DescribeUsageAreaDistributionStatDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUsageAreaDistributionStatDataResponse
       */
      Models::DescribeUsageAreaDistributionStatDataResponse describeUsageAreaDistributionStatDataWithOptions(const Models::DescribeUsageAreaDistributionStatDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取用量统计地域分布数据
       *
       * @param request DescribeUsageAreaDistributionStatDataRequest
       * @return DescribeUsageAreaDistributionStatDataResponse
       */
      Models::DescribeUsageAreaDistributionStatDataResponse describeUsageAreaDistributionStatData(const Models::DescribeUsageAreaDistributionStatDataRequest &request);

      /**
       * @summary 获取用量统计分布数据
       *
       * @param request DescribeUsageDistributionStatDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUsageDistributionStatDataResponse
       */
      Models::DescribeUsageDistributionStatDataResponse describeUsageDistributionStatDataWithOptions(const Models::DescribeUsageDistributionStatDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取用量统计分布数据
       *
       * @param request DescribeUsageDistributionStatDataRequest
       * @return DescribeUsageDistributionStatDataResponse
       */
      Models::DescribeUsageDistributionStatDataResponse describeUsageDistributionStatData(const Models::DescribeUsageDistributionStatDataRequest &request);

      /**
       * @summary 获取用量统计各操作系统下SDK版本分布数据
       *
       * @param request DescribeUsageOsSdkVersionDistributionStatDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUsageOsSdkVersionDistributionStatDataResponse
       */
      Models::DescribeUsageOsSdkVersionDistributionStatDataResponse describeUsageOsSdkVersionDistributionStatDataWithOptions(const Models::DescribeUsageOsSdkVersionDistributionStatDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取用量统计各操作系统下SDK版本分布数据
       *
       * @param request DescribeUsageOsSdkVersionDistributionStatDataRequest
       * @return DescribeUsageOsSdkVersionDistributionStatDataResponse
       */
      Models::DescribeUsageOsSdkVersionDistributionStatDataResponse describeUsageOsSdkVersionDistributionStatData(const Models::DescribeUsageOsSdkVersionDistributionStatDataRequest &request);

      /**
       * @summary 获取用量统计概览数据
       *
       * @param request DescribeUsageOverallDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUsageOverallDataResponse
       */
      Models::DescribeUsageOverallDataResponse describeUsageOverallDataWithOptions(const Models::DescribeUsageOverallDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取用量统计概览数据
       *
       * @param request DescribeUsageOverallDataRequest
       * @return DescribeUsageOverallDataResponse
       */
      Models::DescribeUsageOverallDataResponse describeUsageOverallData(const Models::DescribeUsageOverallDataRequest &request);

      /**
       * @param request DescribeUserInfoInChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserInfoInChannelResponse
       */
      Models::DescribeUserInfoInChannelResponse describeUserInfoInChannelWithOptions(const Models::DescribeUserInfoInChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeUserInfoInChannelRequest
       * @return DescribeUserInfoInChannelResponse
       */
      Models::DescribeUserInfoInChannelResponse describeUserInfoInChannel(const Models::DescribeUserInfoInChannelRequest &request);

      /**
       * @param request DisableAutoLiveStreamRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableAutoLiveStreamRuleResponse
       */
      Models::DisableAutoLiveStreamRuleResponse disableAutoLiveStreamRuleWithOptions(const Models::DisableAutoLiveStreamRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DisableAutoLiveStreamRuleRequest
       * @return DisableAutoLiveStreamRuleResponse
       */
      Models::DisableAutoLiveStreamRuleResponse disableAutoLiveStreamRule(const Models::DisableAutoLiveStreamRuleRequest &request);

      /**
       * @param request EnableAutoLiveStreamRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableAutoLiveStreamRuleResponse
       */
      Models::EnableAutoLiveStreamRuleResponse enableAutoLiveStreamRuleWithOptions(const Models::EnableAutoLiveStreamRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request EnableAutoLiveStreamRuleRequest
       * @return EnableAutoLiveStreamRuleResponse
       */
      Models::EnableAutoLiveStreamRuleResponse enableAutoLiveStreamRule(const Models::EnableAutoLiveStreamRuleRequest &request);

      /**
       * @summary GetAgent。
       *
       * @param request GetAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAgentResponse
       */
      Models::GetAgentResponse getAgentWithOptions(const Models::GetAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary GetAgent。
       *
       * @param request GetAgentRequest
       * @return GetAgentResponse
       */
      Models::GetAgentResponse getAgent(const Models::GetAgentRequest &request);

      /**
       * @param request GetMPUTaskStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMPUTaskStatusResponse
       */
      Models::GetMPUTaskStatusResponse getMPUTaskStatusWithOptions(const Models::GetMPUTaskStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetMPUTaskStatusRequest
       * @return GetMPUTaskStatusResponse
       */
      Models::GetMPUTaskStatusResponse getMPUTaskStatus(const Models::GetMPUTaskStatusRequest &request);

      /**
       * @summary 修改App信息
       *
       * @param request ModifyAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAppResponse
       */
      Models::ModifyAppResponse modifyAppWithOptions(const Models::ModifyAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改App信息
       *
       * @param request ModifyAppRequest
       * @return ModifyAppResponse
       */
      Models::ModifyAppResponse modifyApp(const Models::ModifyAppRequest &request);

      /**
       * @summary 修改应用智能体开关
       *
       * @param request ModifyAppAgentFunctionStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAppAgentFunctionStatusResponse
       */
      Models::ModifyAppAgentFunctionStatusResponse modifyAppAgentFunctionStatusWithOptions(const Models::ModifyAppAgentFunctionStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改应用智能体开关
       *
       * @param request ModifyAppAgentFunctionStatusRequest
       * @return ModifyAppAgentFunctionStatusResponse
       */
      Models::ModifyAppAgentFunctionStatusResponse modifyAppAgentFunctionStatus(const Models::ModifyAppAgentFunctionStatusRequest &request);

      /**
       * @summary 更新应用智能体模版
       *
       * @param tmpReq ModifyAppAgentTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAppAgentTemplateResponse
       */
      Models::ModifyAppAgentTemplateResponse modifyAppAgentTemplateWithOptions(const Models::ModifyAppAgentTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新应用智能体模版
       *
       * @param request ModifyAppAgentTemplateRequest
       * @return ModifyAppAgentTemplateResponse
       */
      Models::ModifyAppAgentTemplateResponse modifyAppAgentTemplate(const Models::ModifyAppAgentTemplateRequest &request);

      /**
       * @summary 更新app回调事件开关
       *
       * @param request ModifyAppCallbackStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAppCallbackStatusResponse
       */
      Models::ModifyAppCallbackStatusResponse modifyAppCallbackStatusWithOptions(const Models::ModifyAppCallbackStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新app回调事件开关
       *
       * @param request ModifyAppCallbackStatusRequest
       * @return ModifyAppCallbackStatusResponse
       */
      Models::ModifyAppCallbackStatusResponse modifyAppCallbackStatus(const Models::ModifyAppCallbackStatusRequest &request);

      /**
       * @summary 修改app自定义布局
       *
       * @param tmpReq ModifyAppLayoutRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAppLayoutResponse
       */
      Models::ModifyAppLayoutResponse modifyAppLayoutWithOptions(const Models::ModifyAppLayoutRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改app自定义布局
       *
       * @param request ModifyAppLayoutRequest
       * @return ModifyAppLayoutResponse
       */
      Models::ModifyAppLayoutResponse modifyAppLayout(const Models::ModifyAppLayoutRequest &request);

      /**
       * @summary 修改应用旁路开关
       *
       * @param request ModifyAppLiveStreamStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAppLiveStreamStatusResponse
       */
      Models::ModifyAppLiveStreamStatusResponse modifyAppLiveStreamStatusWithOptions(const Models::ModifyAppLiveStreamStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改应用旁路开关
       *
       * @param request ModifyAppLiveStreamStatusRequest
       * @return ModifyAppLiveStreamStatusResponse
       */
      Models::ModifyAppLiveStreamStatusResponse modifyAppLiveStreamStatus(const Models::ModifyAppLiveStreamStatusRequest &request);

      /**
       * @summary 修改应用录制开关
       *
       * @param request ModifyAppRecordStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAppRecordStatusResponse
       */
      Models::ModifyAppRecordStatusResponse modifyAppRecordStatusWithOptions(const Models::ModifyAppRecordStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改应用录制开关
       *
       * @param request ModifyAppRecordStatusRequest
       * @return ModifyAppRecordStatusResponse
       */
      Models::ModifyAppRecordStatusResponse modifyAppRecordStatus(const Models::ModifyAppRecordStatusRequest &request);

      /**
       * @summary 修改应用录制模版
       *
       * @param tmpReq ModifyAppRecordTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAppRecordTemplateResponse
       */
      Models::ModifyAppRecordTemplateResponse modifyAppRecordTemplateWithOptions(const Models::ModifyAppRecordTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改应用录制模版
       *
       * @param request ModifyAppRecordTemplateRequest
       * @return ModifyAppRecordTemplateResponse
       */
      Models::ModifyAppRecordTemplateResponse modifyAppRecordTemplate(const Models::ModifyAppRecordTemplateRequest &request);

      /**
       * @summary 更新应用推流模版
       *
       * @param tmpReq ModifyAppStreamingOutTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAppStreamingOutTemplateResponse
       */
      Models::ModifyAppStreamingOutTemplateResponse modifyAppStreamingOutTemplateWithOptions(const Models::ModifyAppStreamingOutTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新应用推流模版
       *
       * @param request ModifyAppStreamingOutTemplateRequest
       * @return ModifyAppStreamingOutTemplateResponse
       */
      Models::ModifyAppStreamingOutTemplateResponse modifyAppStreamingOutTemplate(const Models::ModifyAppStreamingOutTemplateRequest &request);

      /**
       * @summary 更新app回调
       *
       * @param tmpReq ModifyCallbackMetaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCallbackMetaResponse
       */
      Models::ModifyCallbackMetaResponse modifyCallbackMetaWithOptions(const Models::ModifyCallbackMetaRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新app回调
       *
       * @param request ModifyCallbackMetaRequest
       * @return ModifyCallbackMetaResponse
       */
      Models::ModifyCallbackMetaResponse modifyCallbackMeta(const Models::ModifyCallbackMetaRequest &request);

      /**
       * @summary 更新纪要热词表
       *
       * @param tmpReq ModifyCloudNotePhrasesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCloudNotePhrasesResponse
       */
      Models::ModifyCloudNotePhrasesResponse modifyCloudNotePhrasesWithOptions(const Models::ModifyCloudNotePhrasesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新纪要热词表
       *
       * @param request ModifyCloudNotePhrasesRequest
       * @return ModifyCloudNotePhrasesResponse
       */
      Models::ModifyCloudNotePhrasesResponse modifyCloudNotePhrases(const Models::ModifyCloudNotePhrasesRequest &request);

      /**
       * @param request ModifyMPULayoutRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyMPULayoutResponse
       */
      Models::ModifyMPULayoutResponse modifyMPULayoutWithOptions(const Models::ModifyMPULayoutRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ModifyMPULayoutRequest
       * @return ModifyMPULayoutResponse
       */
      Models::ModifyMPULayoutResponse modifyMPULayout(const Models::ModifyMPULayoutRequest &request);

      /**
       * @summary NotifyAgent
       *
       * @param request NotifyAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return NotifyAgentResponse
       */
      Models::NotifyAgentResponse notifyAgentWithOptions(const Models::NotifyAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary NotifyAgent
       *
       * @param request NotifyAgentRequest
       * @return NotifyAgentResponse
       */
      Models::NotifyAgentResponse notifyAgent(const Models::NotifyAgentRequest &request);

      /**
       * @param request RemoveTerminalsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveTerminalsResponse
       */
      Models::RemoveTerminalsResponse removeTerminalsWithOptions(const Models::RemoveTerminalsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RemoveTerminalsRequest
       * @return RemoveTerminalsResponse
       */
      Models::RemoveTerminalsResponse removeTerminals(const Models::RemoveTerminalsRequest &request);

      /**
       * @summary RemoveUsers
       *
       * @param request RemoveUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveUsersResponse
       */
      Models::RemoveUsersResponse removeUsersWithOptions(const Models::RemoveUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary RemoveUsers
       *
       * @param request RemoveUsersRequest
       * @return RemoveUsersResponse
       */
      Models::RemoveUsersResponse removeUsers(const Models::RemoveUsersRequest &request);

      /**
       * @summary 启动AI Agent
       *
       * @param tmpReq StartAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartAgentResponse
       */
      Models::StartAgentResponse startAgentWithOptions(const Models::StartAgentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 启动AI Agent
       *
       * @param request StartAgentRequest
       * @return StartAgentResponse
       */
      Models::StartAgentResponse startAgent(const Models::StartAgentRequest &request);

      /**
       * @summary 开启某个事件回调
       *
       * @param tmpReq StartCategoryCallbackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartCategoryCallbackResponse
       */
      Models::StartCategoryCallbackResponse startCategoryCallbackWithOptions(const Models::StartCategoryCallbackRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 开启某个事件回调
       *
       * @param request StartCategoryCallbackRequest
       * @return StartCategoryCallbackResponse
       */
      Models::StartCategoryCallbackResponse startCategoryCallback(const Models::StartCategoryCallbackRequest &request);

      /**
       * @summary 开启智能纪要
       *
       * @param tmpReq StartCloudNoteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartCloudNoteResponse
       */
      Models::StartCloudNoteResponse startCloudNoteWithOptions(const Models::StartCloudNoteRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 开启智能纪要
       *
       * @param request StartCloudNoteRequest
       * @return StartCloudNoteResponse
       */
      Models::StartCloudNoteResponse startCloudNote(const Models::StartCloudNoteRequest &request);

      /**
       * @summary StartCloudRecord
       *
       * @param tmpReq StartCloudRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartCloudRecordResponse
       */
      Models::StartCloudRecordResponse startCloudRecordWithOptions(const Models::StartCloudRecordRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary StartCloudRecord
       *
       * @param request StartCloudRecordRequest
       * @return StartCloudRecordResponse
       */
      Models::StartCloudRecordResponse startCloudRecord(const Models::StartCloudRecordRequest &request);

      /**
       * @param request StartMPUTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartMPUTaskResponse
       */
      Models::StartMPUTaskResponse startMPUTaskWithOptions(const Models::StartMPUTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request StartMPUTaskRequest
       * @return StartMPUTaskResponse
       */
      Models::StartMPUTaskResponse startMPUTask(const Models::StartMPUTaskRequest &request);

      /**
       * @param request StartRecordTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartRecordTaskResponse
       */
      Models::StartRecordTaskResponse startRecordTaskWithOptions(const Models::StartRecordTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request StartRecordTaskRequest
       * @return StartRecordTaskResponse
       */
      Models::StartRecordTaskResponse startRecordTask(const Models::StartRecordTaskRequest &request);

      /**
       * @summary StartStreamingOut
       *
       * @param tmpReq StartStreamingOutRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartStreamingOutResponse
       */
      Models::StartStreamingOutResponse startStreamingOutWithOptions(const Models::StartStreamingOutRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary StartStreamingOut
       *
       * @param request StartStreamingOutRequest
       * @return StartStreamingOutResponse
       */
      Models::StartStreamingOutResponse startStreamingOut(const Models::StartStreamingOutRequest &request);

      /**
       * @summary 停止AI Agent
       *
       * @param request StopAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopAgentResponse
       */
      Models::StopAgentResponse stopAgentWithOptions(const Models::StopAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 停止AI Agent
       *
       * @param request StopAgentRequest
       * @return StopAgentResponse
       */
      Models::StopAgentResponse stopAgent(const Models::StopAgentRequest &request);

      /**
       * @summary 关闭某个事件回调
       *
       * @param tmpReq StopCategoryCallbackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopCategoryCallbackResponse
       */
      Models::StopCategoryCallbackResponse stopCategoryCallbackWithOptions(const Models::StopCategoryCallbackRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 关闭某个事件回调
       *
       * @param request StopCategoryCallbackRequest
       * @return StopCategoryCallbackResponse
       */
      Models::StopCategoryCallbackResponse stopCategoryCallback(const Models::StopCategoryCallbackRequest &request);

      /**
       * @summary 删除频道
       *
       * @param request StopChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopChannelResponse
       */
      Models::StopChannelResponse stopChannelWithOptions(const Models::StopChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除频道
       *
       * @param request StopChannelRequest
       * @return StopChannelResponse
       */
      Models::StopChannelResponse stopChannel(const Models::StopChannelRequest &request);

      /**
       * @summary 停止智能纪要
       *
       * @param request StopCloudNoteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopCloudNoteResponse
       */
      Models::StopCloudNoteResponse stopCloudNoteWithOptions(const Models::StopCloudNoteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 停止智能纪要
       *
       * @param request StopCloudNoteRequest
       * @return StopCloudNoteResponse
       */
      Models::StopCloudNoteResponse stopCloudNote(const Models::StopCloudNoteRequest &request);

      /**
       * @summary StopCloudRecord
       *
       * @param request StopCloudRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopCloudRecordResponse
       */
      Models::StopCloudRecordResponse stopCloudRecordWithOptions(const Models::StopCloudRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary StopCloudRecord
       *
       * @param request StopCloudRecordRequest
       * @return StopCloudRecordResponse
       */
      Models::StopCloudRecordResponse stopCloudRecord(const Models::StopCloudRecordRequest &request);

      /**
       * @param request StopMPUTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopMPUTaskResponse
       */
      Models::StopMPUTaskResponse stopMPUTaskWithOptions(const Models::StopMPUTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request StopMPUTaskRequest
       * @return StopMPUTaskResponse
       */
      Models::StopMPUTaskResponse stopMPUTask(const Models::StopMPUTaskRequest &request);

      /**
       * @param request StopRecordTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopRecordTaskResponse
       */
      Models::StopRecordTaskResponse stopRecordTaskWithOptions(const Models::StopRecordTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request StopRecordTaskRequest
       * @return StopRecordTaskResponse
       */
      Models::StopRecordTaskResponse stopRecordTask(const Models::StopRecordTaskRequest &request);

      /**
       * @summary StopStreamingOut
       *
       * @param request StopStreamingOutRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopStreamingOutResponse
       */
      Models::StopStreamingOutResponse stopStreamingOutWithOptions(const Models::StopStreamingOutRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary StopStreamingOut
       *
       * @param request StopStreamingOutRequest
       * @return StopStreamingOutResponse
       */
      Models::StopStreamingOutResponse stopStreamingOut(const Models::StopStreamingOutRequest &request);

      /**
       * @summary 更新AI Agent
       *
       * @param tmpReq UpdateAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAgentResponse
       */
      Models::UpdateAgentResponse updateAgentWithOptions(const Models::UpdateAgentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新AI Agent
       *
       * @param request UpdateAgentRequest
       * @return UpdateAgentResponse
       */
      Models::UpdateAgentResponse updateAgent(const Models::UpdateAgentRequest &request);

      /**
       * @param request UpdateAutoLiveStreamRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAutoLiveStreamRuleResponse
       */
      Models::UpdateAutoLiveStreamRuleResponse updateAutoLiveStreamRuleWithOptions(const Models::UpdateAutoLiveStreamRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateAutoLiveStreamRuleRequest
       * @return UpdateAutoLiveStreamRuleResponse
       */
      Models::UpdateAutoLiveStreamRuleResponse updateAutoLiveStreamRule(const Models::UpdateAutoLiveStreamRuleRequest &request);

      /**
       * @summary 更新云端录制任务
       *
       * @param tmpReq UpdateCloudRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCloudRecordResponse
       */
      Models::UpdateCloudRecordResponse updateCloudRecordWithOptions(const Models::UpdateCloudRecordRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新云端录制任务
       *
       * @param request UpdateCloudRecordRequest
       * @return UpdateCloudRecordResponse
       */
      Models::UpdateCloudRecordResponse updateCloudRecord(const Models::UpdateCloudRecordRequest &request);

      /**
       * @param request UpdateMPUTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMPUTaskResponse
       */
      Models::UpdateMPUTaskResponse updateMPUTaskWithOptions(const Models::UpdateMPUTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateMPUTaskRequest
       * @return UpdateMPUTaskResponse
       */
      Models::UpdateMPUTaskResponse updateMPUTask(const Models::UpdateMPUTaskRequest &request);

      /**
       * @param request UpdateRecordTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRecordTaskResponse
       */
      Models::UpdateRecordTaskResponse updateRecordTaskWithOptions(const Models::UpdateRecordTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateRecordTaskRequest
       * @return UpdateRecordTaskResponse
       */
      Models::UpdateRecordTaskResponse updateRecordTask(const Models::UpdateRecordTaskRequest &request);

      /**
       * @param request UpdateRecordTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRecordTemplateResponse
       */
      Models::UpdateRecordTemplateResponse updateRecordTemplateWithOptions(const Models::UpdateRecordTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateRecordTemplateRequest
       * @return UpdateRecordTemplateResponse
       */
      Models::UpdateRecordTemplateResponse updateRecordTemplate(const Models::UpdateRecordTemplateRequest &request);

      /**
       * @summary 更新旁路推流任务
       *
       * @param tmpReq UpdateStreamingOutRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateStreamingOutResponse
       */
      Models::UpdateStreamingOutResponse updateStreamingOutWithOptions(const Models::UpdateStreamingOutRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新旁路推流任务
       *
       * @param request UpdateStreamingOutRequest
       * @return UpdateStreamingOutResponse
       */
      Models::UpdateStreamingOutResponse updateStreamingOut(const Models::UpdateStreamingOutRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
