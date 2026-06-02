// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_VOICENAVIGATOR20180612_HPP_
#define ALIBABACLOUD_VOICENAVIGATOR20180612_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/VoiceNavigator20180612Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/VoiceNavigator20180612.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20180612
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @param request AssociateChatbotInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateChatbotInstanceResponse
       */
      Models::AssociateChatbotInstanceResponse associateChatbotInstanceWithOptions(const Models::AssociateChatbotInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request AssociateChatbotInstanceRequest
       * @return AssociateChatbotInstanceResponse
       */
      Models::AssociateChatbotInstanceResponse associateChatbotInstance(const Models::AssociateChatbotInstanceRequest &request);

      /**
       * @summary AuditTTSVoice
       *
       * @param request AuditTTSVoiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AuditTTSVoiceResponse
       */
      Models::AuditTTSVoiceResponse auditTTSVoiceWithOptions(const Models::AuditTTSVoiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary AuditTTSVoice
       *
       * @param request AuditTTSVoiceRequest
       * @return AuditTTSVoiceResponse
       */
      Models::AuditTTSVoiceResponse auditTTSVoice(const Models::AuditTTSVoiceRequest &request);

      /**
       * @summary 开启会话
       *
       * @param request BeginDialogueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BeginDialogueResponse
       */
      Models::BeginDialogueResponse beginDialogueWithOptions(const Models::BeginDialogueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 开启会话
       *
       * @param request BeginDialogueRequest
       * @return BeginDialogueResponse
       */
      Models::BeginDialogueResponse beginDialogue(const Models::BeginDialogueRequest &request);

      /**
       * @param request CollectedNumberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CollectedNumberResponse
       */
      Models::CollectedNumberResponse collectedNumberWithOptions(const Models::CollectedNumberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CollectedNumberRequest
       * @return CollectedNumberResponse
       */
      Models::CollectedNumberResponse collectedNumber(const Models::CollectedNumberRequest &request);

      /**
       * @summary CreateDownloadUrl
       *
       * @param request CreateDownloadUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDownloadUrlResponse
       */
      Models::CreateDownloadUrlResponse createDownloadUrlWithOptions(const Models::CreateDownloadUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary CreateDownloadUrl
       *
       * @param request CreateDownloadUrlRequest
       * @return CreateDownloadUrlResponse
       */
      Models::CreateDownloadUrlResponse createDownloadUrl(const Models::CreateDownloadUrlRequest &request);

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
       * @summary 测试窗开启文本对话
       *
       * @param request DebugBeginDialogueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DebugBeginDialogueResponse
       */
      Models::DebugBeginDialogueResponse debugBeginDialogueWithOptions(const Models::DebugBeginDialogueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 测试窗开启文本对话
       *
       * @param request DebugBeginDialogueRequest
       * @return DebugBeginDialogueResponse
       */
      Models::DebugBeginDialogueResponse debugBeginDialogue(const Models::DebugBeginDialogueRequest &request);

      /**
       * @summary DebugCollectedNumber
       *
       * @param request DebugCollectedNumberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DebugCollectedNumberResponse
       */
      Models::DebugCollectedNumberResponse debugCollectedNumberWithOptions(const Models::DebugCollectedNumberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary DebugCollectedNumber
       *
       * @param request DebugCollectedNumberRequest
       * @return DebugCollectedNumberResponse
       */
      Models::DebugCollectedNumberResponse debugCollectedNumber(const Models::DebugCollectedNumberRequest &request);

      /**
       * @param request DebugDialogueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DebugDialogueResponse
       */
      Models::DebugDialogueResponse debugDialogueWithOptions(const Models::DebugDialogueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DebugDialogueRequest
       * @return DebugDialogueResponse
       */
      Models::DebugDialogueResponse debugDialogue(const Models::DebugDialogueRequest &request);

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
       * @param request DescribeConversationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeConversationResponse
       */
      Models::DescribeConversationResponse describeConversationWithOptions(const Models::DescribeConversationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeConversationRequest
       * @return DescribeConversationResponse
       */
      Models::DescribeConversationResponse describeConversation(const Models::DescribeConversationRequest &request);

      /**
       * @summary DescribeConversationContext
       *
       * @param request DescribeConversationContextRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeConversationContextResponse
       */
      Models::DescribeConversationContextResponse describeConversationContextWithOptions(const Models::DescribeConversationContextRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary DescribeConversationContext
       *
       * @param request DescribeConversationContextRequest
       * @return DescribeConversationContextResponse
       */
      Models::DescribeConversationContextResponse describeConversationContext(const Models::DescribeConversationContextRequest &request);

      /**
       * @summary DescribeExportProgress
       *
       * @param request DescribeExportProgressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeExportProgressResponse
       */
      Models::DescribeExportProgressResponse describeExportProgressWithOptions(const Models::DescribeExportProgressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary DescribeExportProgress
       *
       * @param request DescribeExportProgressRequest
       * @return DescribeExportProgressResponse
       */
      Models::DescribeExportProgressResponse describeExportProgress(const Models::DescribeExportProgressRequest &request);

      /**
       * @param request DescribeInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceResponse
       */
      Models::DescribeInstanceResponse describeInstanceWithOptions(const Models::DescribeInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeInstanceRequest
       * @return DescribeInstanceResponse
       */
      Models::DescribeInstanceResponse describeInstance(const Models::DescribeInstanceRequest &request);

      /**
       * @param request DescribeNavigationConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNavigationConfigResponse
       */
      Models::DescribeNavigationConfigResponse describeNavigationConfigWithOptions(const Models::DescribeNavigationConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeNavigationConfigRequest
       * @return DescribeNavigationConfigResponse
       */
      Models::DescribeNavigationConfigResponse describeNavigationConfig(const Models::DescribeNavigationConfigRequest &request);

      /**
       * @param request DescribeRecordingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRecordingResponse
       */
      Models::DescribeRecordingResponse describeRecordingWithOptions(const Models::DescribeRecordingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeRecordingRequest
       * @return DescribeRecordingResponse
       */
      Models::DescribeRecordingResponse describeRecording(const Models::DescribeRecordingRequest &request);

      /**
       * @param request DescribeStatisticalDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeStatisticalDataResponse
       */
      Models::DescribeStatisticalDataResponse describeStatisticalDataWithOptions(const Models::DescribeStatisticalDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeStatisticalDataRequest
       * @return DescribeStatisticalDataResponse
       */
      Models::DescribeStatisticalDataResponse describeStatisticalData(const Models::DescribeStatisticalDataRequest &request);

      /**
       * @summary 获取TTS配置
       *
       * @param request DescribeTTSConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTTSConfigResponse
       */
      Models::DescribeTTSConfigResponse describeTTSConfigWithOptions(const Models::DescribeTTSConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取TTS配置
       *
       * @param request DescribeTTSConfigRequest
       * @return DescribeTTSConfigResponse
       */
      Models::DescribeTTSConfigResponse describeTTSConfig(const Models::DescribeTTSConfigRequest &request);

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
       * @param request DisableInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableInstanceResponse
       */
      Models::DisableInstanceResponse disableInstanceWithOptions(const Models::DisableInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DisableInstanceRequest
       * @return DisableInstanceResponse
       */
      Models::DisableInstanceResponse disableInstance(const Models::DisableInstanceRequest &request);

      /**
       * @param request EnableInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableInstanceResponse
       */
      Models::EnableInstanceResponse enableInstanceWithOptions(const Models::EnableInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request EnableInstanceRequest
       * @return EnableInstanceResponse
       */
      Models::EnableInstanceResponse enableInstance(const Models::EnableInstanceRequest &request);

      /**
       * @param request EndDialogueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EndDialogueResponse
       */
      Models::EndDialogueResponse endDialogueWithOptions(const Models::EndDialogueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request EndDialogueRequest
       * @return EndDialogueResponse
       */
      Models::EndDialogueResponse endDialogue(const Models::EndDialogueRequest &request);

      /**
       * @summary ExportConversationDetails
       *
       * @param request ExportConversationDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportConversationDetailsResponse
       */
      Models::ExportConversationDetailsResponse exportConversationDetailsWithOptions(const Models::ExportConversationDetailsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ExportConversationDetails
       *
       * @param request ExportConversationDetailsRequest
       * @return ExportConversationDetailsResponse
       */
      Models::ExportConversationDetailsResponse exportConversationDetails(const Models::ExportConversationDetailsRequest &request);

      /**
       * @param request ExportStatisticalDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportStatisticalDataResponse
       */
      Models::ExportStatisticalDataResponse exportStatisticalDataWithOptions(const Models::ExportStatisticalDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ExportStatisticalDataRequest
       * @return ExportStatisticalDataResponse
       */
      Models::ExportStatisticalDataResponse exportStatisticalData(const Models::ExportStatisticalDataRequest &request);

      /**
       * @summary 获取Asr配置
       *
       * @param request GetAsrConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAsrConfigResponse
       */
      Models::GetAsrConfigResponse getAsrConfigWithOptions(const Models::GetAsrConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取Asr配置
       *
       * @param request GetAsrConfigRequest
       * @return GetAsrConfigResponse
       */
      Models::GetAsrConfigResponse getAsrConfig(const Models::GetAsrConfigRequest &request);

      /**
       * @summary GetRealTimeConcurrency
       *
       * @param request GetRealTimeConcurrencyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRealTimeConcurrencyResponse
       */
      Models::GetRealTimeConcurrencyResponse getRealTimeConcurrencyWithOptions(const Models::GetRealTimeConcurrencyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary GetRealTimeConcurrency
       *
       * @param request GetRealTimeConcurrencyRequest
       * @return GetRealTimeConcurrencyResponse
       */
      Models::GetRealTimeConcurrencyResponse getRealTimeConcurrency(const Models::GetRealTimeConcurrencyRequest &request);

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
       * @param request ListConversationDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListConversationDetailsResponse
       */
      Models::ListConversationDetailsResponse listConversationDetailsWithOptions(const Models::ListConversationDetailsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListConversationDetailsRequest
       * @return ListConversationDetailsResponse
       */
      Models::ListConversationDetailsResponse listConversationDetails(const Models::ListConversationDetailsRequest &request);

      /**
       * @summary 查询会话列表
       *
       * @param request ListConversationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListConversationsResponse
       */
      Models::ListConversationsResponse listConversationsWithOptions(const Models::ListConversationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询会话列表
       *
       * @param request ListConversationsRequest
       * @return ListConversationsResponse
       */
      Models::ListConversationsResponse listConversations(const Models::ListConversationsRequest &request);

      /**
       * @summary 下载列表
       *
       * @param request ListDownloadTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDownloadTasksResponse
       */
      Models::ListDownloadTasksResponse listDownloadTasksWithOptions(const Models::ListDownloadTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 下载列表
       *
       * @param request ListDownloadTasksRequest
       * @return ListDownloadTasksResponse
       */
      Models::ListDownloadTasksResponse listDownloadTasks(const Models::ListDownloadTasksRequest &request);

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
       * @summary 修改Asr配置
       *
       * @param request ModifyAsrConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAsrConfigResponse
       */
      Models::ModifyAsrConfigResponse modifyAsrConfigWithOptions(const Models::ModifyAsrConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改Asr配置
       *
       * @param request ModifyAsrConfigRequest
       * @return ModifyAsrConfigResponse
       */
      Models::ModifyAsrConfigResponse modifyAsrConfig(const Models::ModifyAsrConfigRequest &request);

      /**
       * @param request ModifyGreetingConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyGreetingConfigResponse
       */
      Models::ModifyGreetingConfigResponse modifyGreetingConfigWithOptions(const Models::ModifyGreetingConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ModifyGreetingConfigRequest
       * @return ModifyGreetingConfigResponse
       */
      Models::ModifyGreetingConfigResponse modifyGreetingConfig(const Models::ModifyGreetingConfigRequest &request);

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
       * @param request ModifySilenceTimeoutConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySilenceTimeoutConfigResponse
       */
      Models::ModifySilenceTimeoutConfigResponse modifySilenceTimeoutConfigWithOptions(const Models::ModifySilenceTimeoutConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ModifySilenceTimeoutConfigRequest
       * @return ModifySilenceTimeoutConfigResponse
       */
      Models::ModifySilenceTimeoutConfigResponse modifySilenceTimeoutConfig(const Models::ModifySilenceTimeoutConfigRequest &request);

      /**
       * @summary 修改TTS配置
       *
       * @param request ModifyTTSConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyTTSConfigResponse
       */
      Models::ModifyTTSConfigResponse modifyTTSConfigWithOptions(const Models::ModifyTTSConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改TTS配置
       *
       * @param request ModifyTTSConfigRequest
       * @return ModifyTTSConfigResponse
       */
      Models::ModifyTTSConfigResponse modifyTTSConfig(const Models::ModifyTTSConfigRequest &request);

      /**
       * @param request ModifyUnrecognizingConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyUnrecognizingConfigResponse
       */
      Models::ModifyUnrecognizingConfigResponse modifyUnrecognizingConfigWithOptions(const Models::ModifyUnrecognizingConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ModifyUnrecognizingConfigRequest
       * @return ModifyUnrecognizingConfigResponse
       */
      Models::ModifyUnrecognizingConfigResponse modifyUnrecognizingConfig(const Models::ModifyUnrecognizingConfigRequest &request);

      /**
       * @param request QueryConversationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryConversationsResponse
       */
      Models::QueryConversationsResponse queryConversationsWithOptions(const Models::QueryConversationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryConversationsRequest
       * @return QueryConversationsResponse
       */
      Models::QueryConversationsResponse queryConversations(const Models::QueryConversationsRequest &request);

      /**
       * @param request SaveRecordingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveRecordingResponse
       */
      Models::SaveRecordingResponse saveRecordingWithOptions(const Models::SaveRecordingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SaveRecordingRequest
       * @return SaveRecordingResponse
       */
      Models::SaveRecordingResponse saveRecording(const Models::SaveRecordingRequest &request);

      /**
       * @param request SilenceTimeoutRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SilenceTimeoutResponse
       */
      Models::SilenceTimeoutResponse silenceTimeoutWithOptions(const Models::SilenceTimeoutRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SilenceTimeoutRequest
       * @return SilenceTimeoutResponse
       */
      Models::SilenceTimeoutResponse silenceTimeout(const Models::SilenceTimeoutRequest &request);
  };
} // namespace AlibabaCloud
} // namespace VoiceNavigator20180612
#endif
