// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_CLOUDCALLCENTER20200701_HPP_
#define ALIBABACLOUD_CLOUDCALLCENTER20200701_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/CloudCallCenter20200701Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/CloudCallCenter20200701.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudCallCenter20200701
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary abort campaign
       *
       * @param request AbortCampaignRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AbortCampaignResponse
       */
      Models::AbortCampaignResponse abortCampaignWithOptions(const Models::AbortCampaignRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary abort campaign
       *
       * @param request AbortCampaignRequest
       * @return AbortCampaignResponse
       */
      Models::AbortCampaignResponse abortCampaign(const Models::AbortCampaignRequest &request);

      /**
       * @summary abort cases
       *
       * @param tmpReq AbortCasesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AbortCasesResponse
       */
      Models::AbortCasesResponse abortCasesWithOptions(const Models::AbortCasesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary abort cases
       *
       * @param request AbortCasesRequest
       * @return AbortCasesResponse
       */
      Models::AbortCasesResponse abortCases(const Models::AbortCasesRequest &request);

      /**
       * @param request CheckDemoInstanceExistsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckDemoInstanceExistsResponse
       */
      Models::CheckDemoInstanceExistsResponse checkDemoInstanceExistsWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @return CheckDemoInstanceExistsResponse
       */
      Models::CheckDemoInstanceExistsResponse checkDemoInstanceExists();

      /**
       * @param request CheckMQRoleAssumptionAuthorityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckMQRoleAssumptionAuthorityResponse
       */
      Models::CheckMQRoleAssumptionAuthorityResponse checkMQRoleAssumptionAuthorityWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @return CheckMQRoleAssumptionAuthorityResponse
       */
      Models::CheckMQRoleAssumptionAuthorityResponse checkMQRoleAssumptionAuthority();

      /**
       * @summary create campaign
       *
       * @param tmpReq CreateCampaignRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCampaignResponse
       */
      Models::CreateCampaignResponse createCampaignWithOptions(const Models::CreateCampaignRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary create campaign
       *
       * @param request CreateCampaignRequest
       * @return CreateCampaignResponse
       */
      Models::CreateCampaignResponse createCampaign(const Models::CreateCampaignRequest &request);

      /**
       * @param request CreateChatMediaUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateChatMediaUrlResponse
       */
      Models::CreateChatMediaUrlResponse createChatMediaUrlWithOptions(const Models::CreateChatMediaUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateChatMediaUrlRequest
       * @return CreateChatMediaUrlResponse
       */
      Models::CreateChatMediaUrlResponse createChatMediaUrl(const Models::CreateChatMediaUrlRequest &request);

      /**
       * @param request CreateCorpNumberGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCorpNumberGroupResponse
       */
      Models::CreateCorpNumberGroupResponse createCorpNumberGroupWithOptions(const Models::CreateCorpNumberGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateCorpNumberGroupRequest
       * @return CreateCorpNumberGroupResponse
       */
      Models::CreateCorpNumberGroupResponse createCorpNumberGroup(const Models::CreateCorpNumberGroupRequest &request);

      /**
       * @param request CreateDemoInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDemoInstanceResponse
       */
      Models::CreateDemoInstanceResponse createDemoInstanceWithOptions(const Models::CreateDemoInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateDemoInstanceRequest
       * @return CreateDemoInstanceResponse
       */
      Models::CreateDemoInstanceResponse createDemoInstance(const Models::CreateDemoInstanceRequest &request);

      /**
       * @summary GetAccessChannelOfStaging
       *
       * @param request GetAccessChannelOfStagingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAccessChannelOfStagingResponse
       */
      Models::GetAccessChannelOfStagingResponse getAccessChannelOfStagingWithOptions(const Models::GetAccessChannelOfStagingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary GetAccessChannelOfStaging
       *
       * @param request GetAccessChannelOfStagingRequest
       * @return GetAccessChannelOfStagingResponse
       */
      Models::GetAccessChannelOfStagingResponse getAccessChannelOfStaging(const Models::GetAccessChannelOfStagingRequest &request);

      /**
       * @summary 获取预测式外呼活动
       *
       * @param request GetCampaignRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCampaignResponse
       */
      Models::GetCampaignResponse getCampaignWithOptions(const Models::GetCampaignRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取预测式外呼活动
       *
       * @param request GetCampaignRequest
       * @return GetCampaignResponse
       */
      Models::GetCampaignResponse getCampaign(const Models::GetCampaignRequest &request);

      /**
       * @summary GetDocument
       *
       * @param request GetDocumentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDocumentResponse
       */
      Models::GetDocumentResponse getDocumentWithOptions(const Models::GetDocumentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary GetDocument
       *
       * @param request GetDocumentRequest
       * @return GetDocumentResponse
       */
      Models::GetDocumentResponse getDocument(const Models::GetDocumentRequest &request);

      /**
       * @summary 获取预测式外呼活动历史报表
       *
       * @param request GetHistoricalCampaignReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHistoricalCampaignReportResponse
       */
      Models::GetHistoricalCampaignReportResponse getHistoricalCampaignReportWithOptions(const Models::GetHistoricalCampaignReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取预测式外呼活动历史报表
       *
       * @param request GetHistoricalCampaignReportRequest
       * @return GetHistoricalCampaignReportResponse
       */
      Models::GetHistoricalCampaignReportResponse getHistoricalCampaignReport(const Models::GetHistoricalCampaignReportRequest &request);

      /**
       * @summary 根据aliyunuid获取实例
       *
       * @param request GetInstanceIdsByAliyunUidV2Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceIdsByAliyunUidV2Response
       */
      Models::GetInstanceIdsByAliyunUidV2Response getInstanceIdsByAliyunUidV2WithOptions(const Models::GetInstanceIdsByAliyunUidV2Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据aliyunuid获取实例
       *
       * @param request GetInstanceIdsByAliyunUidV2Request
       * @return GetInstanceIdsByAliyunUidV2Response
       */
      Models::GetInstanceIdsByAliyunUidV2Response getInstanceIdsByAliyunUidV2(const Models::GetInstanceIdsByAliyunUidV2Request &request);

      /**
       * @summary 获取预测式外呼实时状态
       *
       * @param request GetRealtimeCampaignStatsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRealtimeCampaignStatsResponse
       */
      Models::GetRealtimeCampaignStatsResponse getRealtimeCampaignStatsWithOptions(const Models::GetRealtimeCampaignStatsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取预测式外呼实时状态
       *
       * @param request GetRealtimeCampaignStatsRequest
       * @return GetRealtimeCampaignStatsResponse
       */
      Models::GetRealtimeCampaignStatsResponse getRealtimeCampaignStats(const Models::GetRealtimeCampaignStatsRequest &request);

      /**
       * @param request ImportAdminsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportAdminsResponse
       */
      Models::ImportAdminsResponse importAdminsWithOptions(const Models::ImportAdminsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ImportAdminsRequest
       * @return ImportAdminsResponse
       */
      Models::ImportAdminsResponse importAdmins(const Models::ImportAdminsRequest &request);

      /**
       * @param request IssueSoftphoneCommandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return IssueSoftphoneCommandResponse
       */
      Models::IssueSoftphoneCommandResponse issueSoftphoneCommandWithOptions(const Models::IssueSoftphoneCommandRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request IssueSoftphoneCommandRequest
       * @return IssueSoftphoneCommandResponse
       */
      Models::IssueSoftphoneCommandResponse issueSoftphoneCommand(const Models::IssueSoftphoneCommandRequest &request);

      /**
       * @summary 获取预测式外呼呼叫记录
       *
       * @param request ListAttemptsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAttemptsResponse
       */
      Models::ListAttemptsResponse listAttemptsWithOptions(const Models::ListAttemptsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取预测式外呼呼叫记录
       *
       * @param request ListAttemptsRequest
       * @return ListAttemptsResponse
       */
      Models::ListAttemptsResponse listAttempts(const Models::ListAttemptsRequest &request);

      /**
       * @summary 获取预测式外呼活动趋势报表
       *
       * @param request ListCampaignTrendingReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCampaignTrendingReportResponse
       */
      Models::ListCampaignTrendingReportResponse listCampaignTrendingReportWithOptions(const Models::ListCampaignTrendingReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取预测式外呼活动趋势报表
       *
       * @param request ListCampaignTrendingReportRequest
       * @return ListCampaignTrendingReportResponse
       */
      Models::ListCampaignTrendingReportResponse listCampaignTrendingReport(const Models::ListCampaignTrendingReportRequest &request);

      /**
       * @summary 查询预测式外呼列表
       *
       * @param request ListCampaignsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCampaignsResponse
       */
      Models::ListCampaignsResponse listCampaignsWithOptions(const Models::ListCampaignsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询预测式外呼列表
       *
       * @param request ListCampaignsRequest
       * @return ListCampaignsResponse
       */
      Models::ListCampaignsResponse listCampaigns(const Models::ListCampaignsRequest &request);

      /**
       * @summary list case
       *
       * @param request ListCasesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCasesResponse
       */
      Models::ListCasesResponse listCasesWithOptions(const Models::ListCasesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary list case
       *
       * @param request ListCasesRequest
       * @return ListCasesResponse
       */
      Models::ListCasesResponse listCases(const Models::ListCasesRequest &request);

      /**
       * @param tmpReq ListFlashSmsSettingsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFlashSmsSettingsResponse
       */
      Models::ListFlashSmsSettingsResponse listFlashSmsSettingsWithOptions(const Models::ListFlashSmsSettingsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListFlashSmsSettingsRequest
       * @return ListFlashSmsSettingsResponse
       */
      Models::ListFlashSmsSettingsResponse listFlashSmsSettings(const Models::ListFlashSmsSettingsRequest &request);

      /**
       * @summary 查询坐席技能组报表
       *
       * @param request ListHistoricalAgentSkillGroupReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHistoricalAgentSkillGroupReportResponse
       */
      Models::ListHistoricalAgentSkillGroupReportResponse listHistoricalAgentSkillGroupReportWithOptions(const Models::ListHistoricalAgentSkillGroupReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询坐席技能组报表
       *
       * @param request ListHistoricalAgentSkillGroupReportRequest
       * @return ListHistoricalAgentSkillGroupReportResponse
       */
      Models::ListHistoricalAgentSkillGroupReportResponse listHistoricalAgentSkillGroupReport(const Models::ListHistoricalAgentSkillGroupReportRequest &request);

      /**
       * @summary 查询坐席技能组报表
       *
       * @param request ListIntervalAgentSkillGroupReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIntervalAgentSkillGroupReportResponse
       */
      Models::ListIntervalAgentSkillGroupReportResponse listIntervalAgentSkillGroupReportWithOptions(const Models::ListIntervalAgentSkillGroupReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询坐席技能组报表
       *
       * @param request ListIntervalAgentSkillGroupReportRequest
       * @return ListIntervalAgentSkillGroupReportResponse
       */
      Models::ListIntervalAgentSkillGroupReportResponse listIntervalAgentSkillGroupReport(const Models::ListIntervalAgentSkillGroupReportRequest &request);

      /**
       * @summary 录音查询
       *
       * @param request ListMonoRecordingsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMonoRecordingsResponse
       */
      Models::ListMonoRecordingsResponse listMonoRecordingsWithOptions(const Models::ListMonoRecordingsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 录音查询
       *
       * @param request ListMonoRecordingsRequest
       * @return ListMonoRecordingsResponse
       */
      Models::ListMonoRecordingsResponse listMonoRecordings(const Models::ListMonoRecordingsRequest &request);

      /**
       * @summary 暂停预测式外呼
       *
       * @param request PauseCampaignRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PauseCampaignResponse
       */
      Models::PauseCampaignResponse pauseCampaignWithOptions(const Models::PauseCampaignRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 暂停预测式外呼
       *
       * @param request PauseCampaignRequest
       * @return PauseCampaignResponse
       */
      Models::PauseCampaignResponse pauseCampaign(const Models::PauseCampaignRequest &request);

      /**
       * @summary ProcessAliMeCallbackOfStaging
       *
       * @param request ProcessAliMeCallbackOfStagingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ProcessAliMeCallbackOfStagingResponse
       */
      Models::ProcessAliMeCallbackOfStagingResponse processAliMeCallbackOfStagingWithOptions(const Models::ProcessAliMeCallbackOfStagingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ProcessAliMeCallbackOfStaging
       *
       * @param request ProcessAliMeCallbackOfStagingRequest
       * @return ProcessAliMeCallbackOfStagingResponse
       */
      Models::ProcessAliMeCallbackOfStagingResponse processAliMeCallbackOfStaging(const Models::ProcessAliMeCallbackOfStagingRequest &request);

      /**
       * @param request ProcessCustomIMCallbackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ProcessCustomIMCallbackResponse
       */
      Models::ProcessCustomIMCallbackResponse processCustomIMCallbackWithOptions(const Models::ProcessCustomIMCallbackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ProcessCustomIMCallbackRequest
       * @return ProcessCustomIMCallbackResponse
       */
      Models::ProcessCustomIMCallbackResponse processCustomIMCallback(const Models::ProcessCustomIMCallbackRequest &request);

      /**
       * @summary ccc migration
       *
       * @param request ReplaceMigrationAvailableNumbersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReplaceMigrationAvailableNumbersResponse
       */
      Models::ReplaceMigrationAvailableNumbersResponse replaceMigrationAvailableNumbersWithOptions(const Models::ReplaceMigrationAvailableNumbersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ccc migration
       *
       * @param request ReplaceMigrationAvailableNumbersRequest
       * @return ReplaceMigrationAvailableNumbersResponse
       */
      Models::ReplaceMigrationAvailableNumbersResponse replaceMigrationAvailableNumbers(const Models::ReplaceMigrationAvailableNumbersRequest &request);

      /**
       * @summary resume campaign
       *
       * @param request ResumeCampaignRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResumeCampaignResponse
       */
      Models::ResumeCampaignResponse resumeCampaignWithOptions(const Models::ResumeCampaignRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary resume campaign
       *
       * @param request ResumeCampaignRequest
       * @return ResumeCampaignResponse
       */
      Models::ResumeCampaignResponse resumeCampaign(const Models::ResumeCampaignRequest &request);

      /**
       * @param request SaveRTCStatsV2Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveRTCStatsV2Response
       */
      Models::SaveRTCStatsV2Response saveRTCStatsV2WithOptions(const Models::SaveRTCStatsV2Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SaveRTCStatsV2Request
       * @return SaveRTCStatsV2Response
       */
      Models::SaveRTCStatsV2Response saveRTCStatsV2(const Models::SaveRTCStatsV2Request &request);

      /**
       * @summary -
       *
       * @param request SaveTerminalLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveTerminalLogResponse
       */
      Models::SaveTerminalLogResponse saveTerminalLogWithOptions(const Models::SaveTerminalLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary -
       *
       * @param request SaveTerminalLogRequest
       * @return SaveTerminalLogResponse
       */
      Models::SaveTerminalLogResponse saveTerminalLog(const Models::SaveTerminalLogRequest &request);

      /**
       * @summary -
       *
       * @param request SaveWebRtcInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveWebRtcInfoResponse
       */
      Models::SaveWebRtcInfoResponse saveWebRtcInfoWithOptions(const Models::SaveWebRtcInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary -
       *
       * @param request SaveWebRtcInfoRequest
       * @return SaveWebRtcInfoResponse
       */
      Models::SaveWebRtcInfoResponse saveWebRtcInfo(const Models::SaveWebRtcInfoRequest &request);

      /**
       * @summary 推送消息
       *
       * @param request SendNotificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendNotificationResponse
       */
      Models::SendNotificationResponse sendNotificationWithOptions(const Models::SendNotificationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 推送消息
       *
       * @param request SendNotificationRequest
       * @return SendNotificationResponse
       */
      Models::SendNotificationResponse sendNotification(const Models::SendNotificationRequest &request);

      /**
       * @summary submit campaign
       *
       * @param request SubmitCampaignRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitCampaignResponse
       */
      Models::SubmitCampaignResponse submitCampaignWithOptions(const Models::SubmitCampaignRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary submit campaign
       *
       * @param request SubmitCampaignRequest
       * @return SubmitCampaignResponse
       */
      Models::SubmitCampaignResponse submitCampaign(const Models::SubmitCampaignRequest &request);

      /**
       * @summary 删除注册设备
       *
       * @param request UnregisterDeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnregisterDeviceResponse
       */
      Models::UnregisterDeviceResponse unregisterDeviceWithOptions(const Models::UnregisterDeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除注册设备
       *
       * @param request UnregisterDeviceRequest
       * @return UnregisterDeviceResponse
       */
      Models::UnregisterDeviceResponse unregisterDevice(const Models::UnregisterDeviceRequest &request);
  };
} // namespace AlibabaCloud
} // namespace CloudCallCenter20200701
#endif
