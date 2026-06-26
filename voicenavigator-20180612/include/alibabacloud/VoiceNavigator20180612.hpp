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
       * @summary Associates a chatbot with a navigation instance.
       *
       * @param request AssociateChatbotInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateChatbotInstanceResponse
       */
      Models::AssociateChatbotInstanceResponse associateChatbotInstanceWithOptions(const Models::AssociateChatbotInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates a chatbot with a navigation instance.
       *
       * @param request AssociateChatbotInstanceRequest
       * @return AssociateChatbotInstanceResponse
       */
      Models::AssociateChatbotInstanceResponse associateChatbotInstance(const Models::AssociateChatbotInstanceRequest &request);

      /**
       * @summary Previews a text-to-speech (TTS) voice.
       *
       * @param request AuditTTSVoiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AuditTTSVoiceResponse
       */
      Models::AuditTTSVoiceResponse auditTTSVoiceWithOptions(const Models::AuditTTSVoiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Previews a text-to-speech (TTS) voice.
       *
       * @param request AuditTTSVoiceRequest
       * @return AuditTTSVoiceResponse
       */
      Models::AuditTTSVoiceResponse auditTTSVoice(const Models::AuditTTSVoiceRequest &request);

      /**
       * @summary Starts a conversation.
       *
       * @param request BeginDialogueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BeginDialogueResponse
       */
      Models::BeginDialogueResponse beginDialogueWithOptions(const Models::BeginDialogueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a conversation.
       *
       * @param request BeginDialogueRequest
       * @return BeginDialogueResponse
       */
      Models::BeginDialogueResponse beginDialogue(const Models::BeginDialogueRequest &request);

      /**
       * @summary Collects a number entered by a user during a call.
       *
       * @param request CollectedNumberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CollectedNumberResponse
       */
      Models::CollectedNumberResponse collectedNumberWithOptions(const Models::CollectedNumberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Collects a number entered by a user during a call.
       *
       * @param request CollectedNumberRequest
       * @return CollectedNumberResponse
       */
      Models::CollectedNumberResponse collectedNumber(const Models::CollectedNumberRequest &request);

      /**
       * @summary Generates a temporary URL to download a file.
       *
       * @param request CreateDownloadUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDownloadUrlResponse
       */
      Models::CreateDownloadUrlResponse createDownloadUrlWithOptions(const Models::CreateDownloadUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates a temporary URL to download a file.
       *
       * @param request CreateDownloadUrlRequest
       * @return CreateDownloadUrlResponse
       */
      Models::CreateDownloadUrlResponse createDownloadUrl(const Models::CreateDownloadUrlRequest &request);

      /**
       * @summary Creates a Voice Navigator instance.
       *
       * @param request CreateInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstanceWithOptions(const Models::CreateInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Voice Navigator instance.
       *
       * @param request CreateInstanceRequest
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstance(const Models::CreateInstanceRequest &request);

      /**
       * @summary Starts a conversation in a debugging environment.
       *
       * @param request DebugBeginDialogueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DebugBeginDialogueResponse
       */
      Models::DebugBeginDialogueResponse debugBeginDialogueWithOptions(const Models::DebugBeginDialogueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a conversation in a debugging environment.
       *
       * @param request DebugBeginDialogueRequest
       * @return DebugBeginDialogueResponse
       */
      Models::DebugBeginDialogueResponse debugBeginDialogue(const Models::DebugBeginDialogueRequest &request);

      /**
       * @summary Debugs the number collection process.
       *
       * @param request DebugCollectedNumberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DebugCollectedNumberResponse
       */
      Models::DebugCollectedNumberResponse debugCollectedNumberWithOptions(const Models::DebugCollectedNumberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Debugs the number collection process.
       *
       * @param request DebugCollectedNumberRequest
       * @return DebugCollectedNumberResponse
       */
      Models::DebugCollectedNumberResponse debugCollectedNumber(const Models::DebugCollectedNumberRequest &request);

      /**
       * @summary Sends a user utterance to the dialogue engine to debug a conversation flow.
       *
       * @param request DebugDialogueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DebugDialogueResponse
       */
      Models::DebugDialogueResponse debugDialogueWithOptions(const Models::DebugDialogueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends a user utterance to the dialogue engine to debug a conversation flow.
       *
       * @param request DebugDialogueRequest
       * @return DebugDialogueResponse
       */
      Models::DebugDialogueResponse debugDialogue(const Models::DebugDialogueRequest &request);

      /**
       * @summary Deletes a navigation instance.
       *
       * @param request DeleteInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstanceWithOptions(const Models::DeleteInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a navigation instance.
       *
       * @param request DeleteInstanceRequest
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstance(const Models::DeleteInstanceRequest &request);

      /**
       * @summary Retrieves information about a conversation.
       *
       * @param request DescribeConversationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeConversationResponse
       */
      Models::DescribeConversationResponse describeConversationWithOptions(const Models::DescribeConversationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves information about a conversation.
       *
       * @param request DescribeConversationRequest
       * @return DescribeConversationResponse
       */
      Models::DescribeConversationResponse describeConversation(const Models::DescribeConversationRequest &request);

      /**
       * @summary Queries the context of a specified conversation.
       *
       * @param request DescribeConversationContextRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeConversationContextResponse
       */
      Models::DescribeConversationContextResponse describeConversationContextWithOptions(const Models::DescribeConversationContextRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the context of a specified conversation.
       *
       * @param request DescribeConversationContextRequest
       * @return DescribeConversationContextResponse
       */
      Models::DescribeConversationContextResponse describeConversationContext(const Models::DescribeConversationContextRequest &request);

      /**
       * @summary Queries the status of an export task.
       *
       * @param request DescribeExportProgressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeExportProgressResponse
       */
      Models::DescribeExportProgressResponse describeExportProgressWithOptions(const Models::DescribeExportProgressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of an export task.
       *
       * @param request DescribeExportProgressRequest
       * @return DescribeExportProgressResponse
       */
      Models::DescribeExportProgressResponse describeExportProgress(const Models::DescribeExportProgressRequest &request);

      /**
       * @summary Retrieves details for a specified instance.
       *
       * @param request DescribeInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceResponse
       */
      Models::DescribeInstanceResponse describeInstanceWithOptions(const Models::DescribeInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves details for a specified instance.
       *
       * @param request DescribeInstanceRequest
       * @return DescribeInstanceResponse
       */
      Models::DescribeInstanceResponse describeInstance(const Models::DescribeInstanceRequest &request);

      /**
       * @summary View the instance IVR configuration.
       *
       * @param request DescribeNavigationConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNavigationConfigResponse
       */
      Models::DescribeNavigationConfigResponse describeNavigationConfigWithOptions(const Models::DescribeNavigationConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary View the instance IVR configuration.
       *
       * @param request DescribeNavigationConfigRequest
       * @return DescribeNavigationConfigResponse
       */
      Models::DescribeNavigationConfigResponse describeNavigationConfig(const Models::DescribeNavigationConfigRequest &request);

      /**
       * @summary Retrieves a conversation recording.
       *
       * @param request DescribeRecordingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRecordingResponse
       */
      Models::DescribeRecordingResponse describeRecordingWithOptions(const Models::DescribeRecordingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a conversation recording.
       *
       * @param request DescribeRecordingRequest
       * @return DescribeRecordingResponse
       */
      Models::DescribeRecordingResponse describeRecording(const Models::DescribeRecordingRequest &request);

      /**
       * @summary View the current instance\\"s statistics.
       *
       * @param request DescribeStatisticalDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeStatisticalDataResponse
       */
      Models::DescribeStatisticalDataResponse describeStatisticalDataWithOptions(const Models::DescribeStatisticalDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary View the current instance\\"s statistics.
       *
       * @param request DescribeStatisticalDataRequest
       * @return DescribeStatisticalDataResponse
       */
      Models::DescribeStatisticalDataResponse describeStatisticalData(const Models::DescribeStatisticalDataRequest &request);

      /**
       * @summary Queries the TTS configuration.
       *
       * @param request DescribeTTSConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTTSConfigResponse
       */
      Models::DescribeTTSConfigResponse describeTTSConfigWithOptions(const Models::DescribeTTSConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the TTS configuration.
       *
       * @param request DescribeTTSConfigRequest
       * @return DescribeTTSConfigResponse
       */
      Models::DescribeTTSConfigResponse describeTTSConfig(const Models::DescribeTTSConfigRequest &request);

      /**
       * @summary Use this API to continue a conversation with an intelligent assistant by processing a user\\"s utterance.
       *
       * @param request DialogueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DialogueResponse
       */
      Models::DialogueResponse dialogueWithOptions(const Models::DialogueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Use this API to continue a conversation with an intelligent assistant by processing a user\\"s utterance.
       *
       * @param request DialogueRequest
       * @return DialogueResponse
       */
      Models::DialogueResponse dialogue(const Models::DialogueRequest &request);

      /**
       * @summary Disables a Voice Navigator instance.
       *
       * @param request DisableInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableInstanceResponse
       */
      Models::DisableInstanceResponse disableInstanceWithOptions(const Models::DisableInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables a Voice Navigator instance.
       *
       * @param request DisableInstanceRequest
       * @return DisableInstanceResponse
       */
      Models::DisableInstanceResponse disableInstance(const Models::DisableInstanceRequest &request);

      /**
       * @summary Enables a Voice Navigator instance.
       *
       * @param request EnableInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableInstanceResponse
       */
      Models::EnableInstanceResponse enableInstanceWithOptions(const Models::EnableInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables a Voice Navigator instance.
       *
       * @param request EnableInstanceRequest
       * @return EnableInstanceResponse
       */
      Models::EnableInstanceResponse enableInstance(const Models::EnableInstanceRequest &request);

      /**
       * @summary Ends an ongoing dialogue.
       *
       * @param request EndDialogueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EndDialogueResponse
       */
      Models::EndDialogueResponse endDialogueWithOptions(const Models::EndDialogueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Ends an ongoing dialogue.
       *
       * @param request EndDialogueRequest
       * @return EndDialogueResponse
       */
      Models::EndDialogueResponse endDialogue(const Models::EndDialogueRequest &request);

      /**
       * @summary Exports conversation details.
       *
       * @param request ExportConversationDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportConversationDetailsResponse
       */
      Models::ExportConversationDetailsResponse exportConversationDetailsWithOptions(const Models::ExportConversationDetailsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Exports conversation details.
       *
       * @param request ExportConversationDetailsRequest
       * @return ExportConversationDetailsResponse
       */
      Models::ExportConversationDetailsResponse exportConversationDetails(const Models::ExportConversationDetailsRequest &request);

      /**
       * @summary Exports statistical data.
       *
       * @param request ExportStatisticalDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportStatisticalDataResponse
       */
      Models::ExportStatisticalDataResponse exportStatisticalDataWithOptions(const Models::ExportStatisticalDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Exports statistical data.
       *
       * @param request ExportStatisticalDataRequest
       * @return ExportStatisticalDataResponse
       */
      Models::ExportStatisticalDataResponse exportStatisticalData(const Models::ExportStatisticalDataRequest &request);

      /**
       * @summary Retrieves the ASR configuration.
       *
       * @param request GetAsrConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAsrConfigResponse
       */
      Models::GetAsrConfigResponse getAsrConfigWithOptions(const Models::GetAsrConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the ASR configuration.
       *
       * @param request GetAsrConfigRequest
       * @return GetAsrConfigResponse
       */
      Models::GetAsrConfigResponse getAsrConfig(const Models::GetAsrConfigRequest &request);

      /**
       * @summary Retrieves the real-time concurrency of an instance.
       *
       * @param request GetRealTimeConcurrencyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRealTimeConcurrencyResponse
       */
      Models::GetRealTimeConcurrencyResponse getRealTimeConcurrencyWithOptions(const Models::GetRealTimeConcurrencyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the real-time concurrency of an instance.
       *
       * @param request GetRealTimeConcurrencyRequest
       * @return GetRealTimeConcurrencyResponse
       */
      Models::GetRealTimeConcurrencyResponse getRealTimeConcurrency(const Models::GetRealTimeConcurrencyRequest &request);

      /**
       * @summary Retrieves a paginated list of chatbot instances.
       *
       * @param request ListChatbotInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListChatbotInstancesResponse
       */
      Models::ListChatbotInstancesResponse listChatbotInstancesWithOptions(const Models::ListChatbotInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a paginated list of chatbot instances.
       *
       * @param request ListChatbotInstancesRequest
       * @return ListChatbotInstancesResponse
       */
      Models::ListChatbotInstancesResponse listChatbotInstances(const Models::ListChatbotInstancesRequest &request);

      /**
       * @summary Retrieves the conversation details for a specific conversation.
       *
       * @param request ListConversationDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListConversationDetailsResponse
       */
      Models::ListConversationDetailsResponse listConversationDetailsWithOptions(const Models::ListConversationDetailsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the conversation details for a specific conversation.
       *
       * @param request ListConversationDetailsRequest
       * @return ListConversationDetailsResponse
       */
      Models::ListConversationDetailsResponse listConversationDetails(const Models::ListConversationDetailsRequest &request);

      /**
       * @summary Returns the session list.
       *
       * @param request ListConversationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListConversationsResponse
       */
      Models::ListConversationsResponse listConversationsWithOptions(const Models::ListConversationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Returns the session list.
       *
       * @param request ListConversationsRequest
       * @return ListConversationsResponse
       */
      Models::ListConversationsResponse listConversations(const Models::ListConversationsRequest &request);

      /**
       * @summary Download list
       *
       * @param request ListDownloadTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDownloadTasksResponse
       */
      Models::ListDownloadTasksResponse listDownloadTasksWithOptions(const Models::ListDownloadTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Download list
       *
       * @param request ListDownloadTasksRequest
       * @return ListDownloadTasksResponse
       */
      Models::ListDownloadTasksResponse listDownloadTasks(const Models::ListDownloadTasksRequest &request);

      /**
       * @summary Retrieves a paginated list of intelligent navigation instances for the current tenant.
       *
       * @param request ListInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstancesWithOptions(const Models::ListInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a paginated list of intelligent navigation instances for the current tenant.
       *
       * @param request ListInstancesRequest
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstances(const Models::ListInstancesRequest &request);

      /**
       * @summary Modifies an ASR configuration.
       *
       * @param request ModifyAsrConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAsrConfigResponse
       */
      Models::ModifyAsrConfigResponse modifyAsrConfigWithOptions(const Models::ModifyAsrConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an ASR configuration.
       *
       * @param request ModifyAsrConfigRequest
       * @return ModifyAsrConfigResponse
       */
      Models::ModifyAsrConfigResponse modifyAsrConfig(const Models::ModifyAsrConfigRequest &request);

      /**
       * @summary Modifies the greeting configuration.
       *
       * @param request ModifyGreetingConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyGreetingConfigResponse
       */
      Models::ModifyGreetingConfigResponse modifyGreetingConfigWithOptions(const Models::ModifyGreetingConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the greeting configuration.
       *
       * @param request ModifyGreetingConfigRequest
       * @return ModifyGreetingConfigResponse
       */
      Models::ModifyGreetingConfigResponse modifyGreetingConfig(const Models::ModifyGreetingConfigRequest &request);

      /**
       * @summary Modify an instance.
       *
       * @param request ModifyInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceResponse
       */
      Models::ModifyInstanceResponse modifyInstanceWithOptions(const Models::ModifyInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify an instance.
       *
       * @param request ModifyInstanceRequest
       * @return ModifyInstanceResponse
       */
      Models::ModifyInstanceResponse modifyInstance(const Models::ModifyInstanceRequest &request);

      /**
       * @summary Modifies the silence timeout configuration for a voice bot instance.
       *
       * @param request ModifySilenceTimeoutConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySilenceTimeoutConfigResponse
       */
      Models::ModifySilenceTimeoutConfigResponse modifySilenceTimeoutConfigWithOptions(const Models::ModifySilenceTimeoutConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the silence timeout configuration for a voice bot instance.
       *
       * @param request ModifySilenceTimeoutConfigRequest
       * @return ModifySilenceTimeoutConfigResponse
       */
      Models::ModifySilenceTimeoutConfigResponse modifySilenceTimeoutConfig(const Models::ModifySilenceTimeoutConfigRequest &request);

      /**
       * @summary Modifies the TTS configuration.
       *
       * @param request ModifyTTSConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyTTSConfigResponse
       */
      Models::ModifyTTSConfigResponse modifyTTSConfigWithOptions(const Models::ModifyTTSConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the TTS configuration.
       *
       * @param request ModifyTTSConfigRequest
       * @return ModifyTTSConfigResponse
       */
      Models::ModifyTTSConfigResponse modifyTTSConfig(const Models::ModifyTTSConfigRequest &request);

      /**
       * @summary Modifies the rejection configuration.
       *
       * @param request ModifyUnrecognizingConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyUnrecognizingConfigResponse
       */
      Models::ModifyUnrecognizingConfigResponse modifyUnrecognizingConfigWithOptions(const Models::ModifyUnrecognizingConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the rejection configuration.
       *
       * @param request ModifyUnrecognizingConfigRequest
       * @return ModifyUnrecognizingConfigResponse
       */
      Models::ModifyUnrecognizingConfigResponse modifyUnrecognizingConfig(const Models::ModifyUnrecognizingConfigRequest &request);

      /**
       * @summary Retrieves a list of conversation records.
       *
       * @param request QueryConversationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryConversationsResponse
       */
      Models::QueryConversationsResponse queryConversationsWithOptions(const Models::QueryConversationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of conversation records.
       *
       * @param request QueryConversationsRequest
       * @return QueryConversationsResponse
       */
      Models::QueryConversationsResponse queryConversations(const Models::QueryConversationsRequest &request);

      /**
       * @summary Saves a recording.
       *
       * @param request SaveRecordingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveRecordingResponse
       */
      Models::SaveRecordingResponse saveRecordingWithOptions(const Models::SaveRecordingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Saves a recording.
       *
       * @param request SaveRecordingRequest
       * @return SaveRecordingResponse
       */
      Models::SaveRecordingResponse saveRecording(const Models::SaveRecordingRequest &request);

      /**
       * @summary Handles the silence timeout event in a conversation.
       *
       * @param request SilenceTimeoutRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SilenceTimeoutResponse
       */
      Models::SilenceTimeoutResponse silenceTimeoutWithOptions(const Models::SilenceTimeoutRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Handles the silence timeout event in a conversation.
       *
       * @param request SilenceTimeoutRequest
       * @return SilenceTimeoutResponse
       */
      Models::SilenceTimeoutResponse silenceTimeout(const Models::SilenceTimeoutRequest &request);
  };
} // namespace AlibabaCloud
} // namespace VoiceNavigator20180612
#endif
