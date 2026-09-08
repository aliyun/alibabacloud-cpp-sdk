// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_CCC20200701_HPP_
#define ALIBABACLOUD_CCC20200701_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/CCC20200701Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/CCC20200701.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Invoke AbortCampaign to stop the predictive outbound calling Activity corresponding to the specified Activity ID under the specified instance.
       *
       * @param request AbortCampaignRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AbortCampaignResponse
       */
      Models::AbortCampaignResponse abortCampaignWithOptions(const Models::AbortCampaignRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke AbortCampaign to stop the predictive outbound calling Activity corresponding to the specified Activity ID under the specified instance.
       *
       * @param request AbortCampaignRequest
       * @return AbortCampaignResponse
       */
      Models::AbortCampaignResponse abortCampaign(const Models::AbortCampaignRequest &request);

      /**
       * @summary Call this operation to accept a chat.
       *
       * @param request AcceptChatRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AcceptChatResponse
       */
      Models::AcceptChatResponse acceptChatWithOptions(const Models::AcceptChatRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call this operation to accept a chat.
       *
       * @param request AcceptChatRequest
       * @return AcceptChatResponse
       */
      Models::AcceptChatResponse acceptChat(const Models::AcceptChatRequest &request);

      /**
       * @summary Adds a blacklist tag to a specified phone number. You can use this feature with your Interactive Voice Response (IVR) settings to block frequent harassing calls.
       *
       * @param request AddBlacklistCallTaggingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddBlacklistCallTaggingResponse
       */
      Models::AddBlacklistCallTaggingResponse addBlacklistCallTaggingWithOptions(const Models::AddBlacklistCallTaggingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a blacklist tag to a specified phone number. You can use this feature with your Interactive Voice Response (IVR) settings to block frequent harassing calls.
       *
       * @param request AddBlacklistCallTaggingRequest
       * @return AddBlacklistCallTaggingResponse
       */
      Models::AddBlacklistCallTaggingResponse addBlacklistCallTagging(const Models::AddBlacklistCallTaggingRequest &request);

      /**
       * @summary Invoke AddCases to add an outbound call list to a predictive dialing activity identified by a specified ID under a specified instance.
       *
       * @param tmpReq AddCasesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddCasesResponse
       */
      Models::AddCasesResponse addCasesWithOptions(const Models::AddCasesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke AddCases to add an outbound call list to a predictive dialing activity identified by a specified ID under a specified instance.
       *
       * @param request AddCasesRequest
       * @return AddCasesResponse
       */
      Models::AddCasesResponse addCases(const Models::AddCasesRequest &request);

      /**
       * @summary You can use the AddFeedback API to evaluate and rate AI features.
       *
       * @param request AddFeedbackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddFeedbackResponse
       */
      Models::AddFeedbackResponse addFeedbackWithOptions(const Models::AddFeedbackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can use the AddFeedback API to evaluate and rate AI features.
       *
       * @param request AddFeedbackRequest
       * @return AddFeedbackResponse
       */
      Models::AddFeedbackResponse addFeedback(const Models::AddFeedbackRequest &request);

      /**
       * @summary Adds one or more phone numbers to a skill group by calling AddNumbersToSkillGroup.
       *
       * @param request AddNumbersToSkillGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddNumbersToSkillGroupResponse
       */
      Models::AddNumbersToSkillGroupResponse addNumbersToSkillGroupWithOptions(const Models::AddNumbersToSkillGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds one or more phone numbers to a skill group by calling AddNumbersToSkillGroup.
       *
       * @param request AddNumbersToSkillGroupRequest
       * @return AddNumbersToSkillGroupResponse
       */
      Models::AddNumbersToSkillGroupResponse addNumbersToSkillGroup(const Models::AddNumbersToSkillGroupRequest &request);

      /**
       * @summary You can invoke AddPersonalNumbersToUser to add one or more personal outbound numbers to a specified agent under a specified instance.
       *
       * @param request AddPersonalNumbersToUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddPersonalNumbersToUserResponse
       */
      Models::AddPersonalNumbersToUserResponse addPersonalNumbersToUserWithOptions(const Models::AddPersonalNumbersToUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke AddPersonalNumbersToUser to add one or more personal outbound numbers to a specified agent under a specified instance.
       *
       * @param request AddPersonalNumbersToUserRequest
       * @return AddPersonalNumbersToUserResponse
       */
      Models::AddPersonalNumbersToUserResponse addPersonalNumbersToUser(const Models::AddPersonalNumbersToUserRequest &request);

      /**
       * @summary You can invoke AddPhoneNumberToSkillGroups to associate a phone number with one or more skill groups under a specified instance.
       *
       * @param request AddPhoneNumberToSkillGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddPhoneNumberToSkillGroupsResponse
       */
      Models::AddPhoneNumberToSkillGroupsResponse addPhoneNumberToSkillGroupsWithOptions(const Models::AddPhoneNumberToSkillGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke AddPhoneNumberToSkillGroups to associate a phone number with one or more skill groups under a specified instance.
       *
       * @param request AddPhoneNumberToSkillGroupsRequest
       * @return AddPhoneNumberToSkillGroupsResponse
       */
      Models::AddPhoneNumberToSkillGroupsResponse addPhoneNumberToSkillGroups(const Models::AddPhoneNumberToSkillGroupsRequest &request);

      /**
       * @summary You can invoke AddPhoneNumbers to add one or more phone numbers to a specified instance.
       *
       * @param request AddPhoneNumbersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddPhoneNumbersResponse
       */
      Models::AddPhoneNumbersResponse addPhoneNumbersWithOptions(const Models::AddPhoneNumbersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke AddPhoneNumbers to add one or more phone numbers to a specified instance.
       *
       * @param request AddPhoneNumbersRequest
       * @return AddPhoneNumbersResponse
       */
      Models::AddPhoneNumbersResponse addPhoneNumbers(const Models::AddPhoneNumbersRequest &request);

      /**
       * @param tmpReq AddSchemaPropertyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddSchemaPropertyResponse
       */
      Models::AddSchemaPropertyResponse addSchemaPropertyWithOptions(const Models::AddSchemaPropertyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request AddSchemaPropertyRequest
       * @return AddSchemaPropertyResponse
       */
      Models::AddSchemaPropertyResponse addSchemaProperty(const Models::AddSchemaPropertyRequest &request);

      /**
       * @summary You can invoke AddSkillGroupsToUser to add one or more skill groups to a specified agent under a specified instance.
       *
       * @param request AddSkillGroupsToUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddSkillGroupsToUserResponse
       */
      Models::AddSkillGroupsToUserResponse addSkillGroupsToUserWithOptions(const Models::AddSkillGroupsToUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke AddSkillGroupsToUser to add one or more skill groups to a specified agent under a specified instance.
       *
       * @param request AddSkillGroupsToUserRequest
       * @return AddSkillGroupsToUserResponse
       */
      Models::AddSkillGroupsToUserResponse addSkillGroupsToUser(const Models::AddSkillGroupsToUserRequest &request);

      /**
       * @summary Use AddTicketTask to add a signature and assign an assignee.
       *
       * @param request AddTicketTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddTicketTaskResponse
       */
      Models::AddTicketTaskResponse addTicketTaskWithOptions(const Models::AddTicketTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Use AddTicketTask to add a signature and assign an assignee.
       *
       * @param request AddTicketTaskRequest
       * @return AddTicketTaskResponse
       */
      Models::AddTicketTaskResponse addTicketTask(const Models::AddTicketTaskRequest &request);

      /**
       * @summary You can invoke AddUsersToSkillGroup to add one or more agents to the same skill group.
       *
       * @param request AddUsersToSkillGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddUsersToSkillGroupResponse
       */
      Models::AddUsersToSkillGroupResponse addUsersToSkillGroupWithOptions(const Models::AddUsersToSkillGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke AddUsersToSkillGroup to add one or more agents to the same skill group.
       *
       * @param request AddUsersToSkillGroupRequest
       * @return AddUsersToSkillGroupResponse
       */
      Models::AddUsersToSkillGroupResponse addUsersToSkillGroup(const Models::AddUsersToSkillGroupRequest &request);

      /**
       * @summary Analyze the specified text-based conversation content and extract summary-related information, such as the title, keywords, summary, and other specified details.
       *
       * @description This API can be used for both online chat sessions and voice sessions. When used for voice sessions, the real-time speech-to-text transcription feature must be enabled.
       *
       * @param request AnalyzeConversationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AnalyzeConversationResponse
       */
      Models::AnalyzeConversationResponse analyzeConversationWithOptions(const Models::AnalyzeConversationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Analyze the specified text-based conversation content and extract summary-related information, such as the title, keywords, summary, and other specified details.
       *
       * @description This API can be used for both online chat sessions and voice sessions. When used for voice sessions, the real-time speech-to-text transcription feature must be enabled.
       *
       * @param request AnalyzeConversationRequest
       * @return AnalyzeConversationResponse
       */
      Models::AnalyzeConversationResponse analyzeConversation(const Models::AnalyzeConversationRequest &request);

      /**
       * @summary You can invoke AnswerCall to answer the call associated with a specified call ID under a specified instance.
       *
       * @param request AnswerCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AnswerCallResponse
       */
      Models::AnswerCallResponse answerCallWithOptions(const Models::AnswerCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke AnswerCall to answer the call associated with a specified call ID under a specified instance.
       *
       * @param request AnswerCallRequest
       * @return AnswerCallResponse
       */
      Models::AnswerCallResponse answerCall(const Models::AnswerCallRequest &request);

      /**
       * @summary Adds cases to a predictive campaign in a specified instance.
       *
       * @param tmpReq AppendCasesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AppendCasesResponse
       */
      Models::AppendCasesResponse appendCasesWithOptions(const Models::AppendCasesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds cases to a predictive campaign in a specified instance.
       *
       * @param request AppendCasesRequest
       * @return AppendCasesResponse
       */
      Models::AppendCasesResponse appendCases(const Models::AppendCasesRequest &request);

      /**
       * @deprecated OpenAPI AssignUsers is deprecated, please use CCC::2020-07-01::ImportRamUsers instead.
       *
       * @summary Call AssignUsers to import one or more RAM users into a specified instance. After the import, the RAM users become agents in the instance.
       *
       * @description Accounts with RAM permissions can view all RAM users under an Alibaba Cloud account in the RAM console. You can access the RAM console at https\\://ram.console.aliyun.com/users.
       *
       * @param request AssignUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssignUsersResponse
       */
      Models::AssignUsersResponse assignUsersWithOptions(const Models::AssignUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI AssignUsers is deprecated, please use CCC::2020-07-01::ImportRamUsers instead.
       *
       * @summary Call AssignUsers to import one or more RAM users into a specified instance. After the import, the RAM users become agents in the instance.
       *
       * @description Accounts with RAM permissions can view all RAM users under an Alibaba Cloud account in the RAM console. You can access the RAM console at https\\://ram.console.aliyun.com/users.
       *
       * @param request AssignUsersRequest
       * @return AssignUsersResponse
       */
      Models::AssignUsersResponse assignUsers(const Models::AssignUsersRequest &request);

      /**
       * @summary You can invoke BargeInCall to forcibly insert into an ongoing call associated with a specified call ID under a specified instance. After the forced insertion succeeds, the original two-party call becomes a three-party conference call.
       *
       * @param request BargeInCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BargeInCallResponse
       */
      Models::BargeInCallResponse bargeInCallWithOptions(const Models::BargeInCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke BargeInCall to forcibly insert into an ongoing call associated with a specified call ID under a specified instance. After the forced insertion succeeds, the original two-party call becomes a three-party conference call.
       *
       * @param request BargeInCallRequest
       * @return BargeInCallResponse
       */
      Models::BargeInCallResponse bargeInCall(const Models::BargeInCallRequest &request);

      /**
       * @summary Directly transfer a call to another agent, a skill group queue, or an external number. Direct transfer is also known as blind transfer or single-step transfer.
       *
       * @param request BlindTransferRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BlindTransferResponse
       */
      Models::BlindTransferResponse blindTransferWithOptions(const Models::BlindTransferRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Directly transfer a call to another agent, a skill group queue, or an external number. Direct transfer is also known as blind transfer or single-step transfer.
       *
       * @param request BlindTransferRequest
       * @return BlindTransferResponse
       */
      Models::BlindTransferResponse blindTransfer(const Models::BlindTransferRequest &request);

      /**
       * @summary BridgeRtcCall
       *
       * @param request BridgeRtcCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BridgeRtcCallResponse
       */
      Models::BridgeRtcCallResponse bridgeRtcCallWithOptions(const Models::BridgeRtcCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary BridgeRtcCall
       *
       * @param request BridgeRtcCallRequest
       * @return BridgeRtcCallResponse
       */
      Models::BridgeRtcCallResponse bridgeRtcCall(const Models::BridgeRtcCallRequest &request);

      /**
       * @summary You can invoke the CancelAttendedTransfer API to cancel an attended transfer. You can call this API at any time after initiating the attended transfer and before completing it, even if the transferee has already answered the call.
       *
       * @param request CancelAttendedTransferRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelAttendedTransferResponse
       */
      Models::CancelAttendedTransferResponse cancelAttendedTransferWithOptions(const Models::CancelAttendedTransferRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke the CancelAttendedTransfer API to cancel an attended transfer. You can call this API at any time after initiating the attended transfer and before completing it, even if the transferee has already answered the call.
       *
       * @param request CancelAttendedTransferRequest
       * @return CancelAttendedTransferResponse
       */
      Models::CancelAttendedTransferResponse cancelAttendedTransfer(const Models::CancelAttendedTransferRequest &request);

      /**
       * @summary Changes an agent\\"s status to invisible. This is equivalent to the outbound-only mode.
       *
       * @param request ChangeVisibilityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeVisibilityResponse
       */
      Models::ChangeVisibilityResponse changeVisibilityWithOptions(const Models::ChangeVisibilityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes an agent\\"s status to invisible. This is equivalent to the outbound-only mode.
       *
       * @param request ChangeVisibilityRequest
       * @return ChangeVisibilityResponse
       */
      Models::ChangeVisibilityResponse changeVisibility(const Models::ChangeVisibilityRequest &request);

      /**
       * @summary You can invoke ChangeWorkMode to change the agent\\"s work mode.
       *
       * @param request ChangeWorkModeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeWorkModeResponse
       */
      Models::ChangeWorkModeResponse changeWorkModeWithOptions(const Models::ChangeWorkModeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke ChangeWorkMode to change the agent\\"s work mode.
       *
       * @param request ChangeWorkModeRequest
       * @return ChangeWorkModeResponse
       */
      Models::ChangeWorkModeResponse changeWorkMode(const Models::ChangeWorkModeRequest &request);

      /**
       * @summary Call the `ClaimCall` API to assign a call to an agent.
       *
       * @param request ClaimCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ClaimCallResponse
       */
      Models::ClaimCallResponse claimCallWithOptions(const Models::ClaimCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call the `ClaimCall` API to assign a call to an agent.
       *
       * @param request ClaimCallRequest
       * @return ClaimCallResponse
       */
      Models::ClaimCallResponse claimCall(const Models::ClaimCallRequest &request);

      /**
       * @summary You can call ClaimChat to claim the chat for a specified Job ID in a specified instance.
       *
       * @param request ClaimChatRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ClaimChatResponse
       */
      Models::ClaimChatResponse claimChatWithOptions(const Models::ClaimChatRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call ClaimChat to claim the chat for a specified Job ID in a specified instance.
       *
       * @param request ClaimChatRequest
       * @return ClaimChatResponse
       */
      Models::ClaimChatResponse claimChat(const Models::ClaimChatRequest &request);

      /**
       * @summary You can invoke CoachCall to coach a specified agent in a specified call (identified by a call ID) under a specified instance. During the coaching session, the coached agent can hear the coach\\"s voice, but the customer cannot hear the coach\\"s voice.
       *
       * @param request CoachCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CoachCallResponse
       */
      Models::CoachCallResponse coachCallWithOptions(const Models::CoachCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke CoachCall to coach a specified agent in a specified call (identified by a call ID) under a specified instance. During the coaching session, the coached agent can hear the coach\\"s voice, but the customer cannot hear the coach\\"s voice.
       *
       * @param request CoachCallRequest
       * @return CoachCallResponse
       */
      Models::CoachCallResponse coachCall(const Models::CoachCallRequest &request);

      /**
       * @summary Commits a contact flow.
       *
       * @param request CommitContactFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CommitContactFlowResponse
       */
      Models::CommitContactFlowResponse commitContactFlowWithOptions(const Models::CommitContactFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Commits a contact flow.
       *
       * @param request CommitContactFlowRequest
       * @return CommitContactFlowResponse
       */
      Models::CommitContactFlowResponse commitContactFlow(const Models::CommitContactFlowRequest &request);

      /**
       * @summary You can invoke CompleteAttendedTransfer to complete a consultative transfer.
       *
       * @param request CompleteAttendedTransferRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CompleteAttendedTransferResponse
       */
      Models::CompleteAttendedTransferResponse completeAttendedTransferWithOptions(const Models::CompleteAttendedTransferRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke CompleteAttendedTransfer to complete a consultative transfer.
       *
       * @param request CompleteAttendedTransferRequest
       * @return CompleteAttendedTransferResponse
       */
      Models::CompleteAttendedTransferResponse completeAttendedTransfer(const Models::CompleteAttendedTransferRequest &request);

      /**
       * @summary You can invoke CreateAudioFile to create an audio resource under a specified instance. The created audio resource can be used in the instance, such as selecting the audio file for playback during IVR.
       *
       * @param request CreateAudioFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAudioFileResponse
       */
      Models::CreateAudioFileResponse createAudioFileWithOptions(const Models::CreateAudioFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke CreateAudioFile to create an audio resource under a specified instance. The created audio resource can be used in the instance, such as selecting the audio file for playback during IVR.
       *
       * @param request CreateAudioFileRequest
       * @return CreateAudioFileResponse
       */
      Models::CreateAudioFileResponse createAudioFile(const Models::CreateAudioFileRequest &request);

      /**
       * @summary Use the CreateCallSummary operation to create a call summary.
       *
       * @param request CreateCallSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCallSummaryResponse
       */
      Models::CreateCallSummaryResponse createCallSummaryWithOptions(const Models::CreateCallSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Use the CreateCallSummary operation to create a call summary.
       *
       * @param request CreateCallSummaryRequest
       * @return CreateCallSummaryResponse
       */
      Models::CreateCallSummaryResponse createCallSummary(const Models::CreateCallSummaryRequest &request);

      /**
       * @summary You can invoke CreateCallTags to create multiple call tags under a specified instance.
       *
       * @param request CreateCallTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCallTagsResponse
       */
      Models::CreateCallTagsResponse createCallTagsWithOptions(const Models::CreateCallTagsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke CreateCallTags to create multiple call tags under a specified instance.
       *
       * @param request CreateCallTagsRequest
       * @return CreateCallTagsResponse
       */
      Models::CreateCallTagsResponse createCallTags(const Models::CreateCallTagsRequest &request);

      /**
       * @summary You can invoke CreateCampaign to create a predictive outbound calling activity under a specified instance.
       *
       * @param tmpReq CreateCampaignRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCampaignResponse
       */
      Models::CreateCampaignResponse createCampaignWithOptions(const Models::CreateCampaignRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke CreateCampaign to create a predictive outbound calling activity under a specified instance.
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
       * @summary Creates an IVR flow.
       *
       * @param request CreateContactFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateContactFlowResponse
       */
      Models::CreateContactFlowResponse createContactFlowWithOptions(const Models::CreateContactFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an IVR flow.
       *
       * @param request CreateContactFlowRequest
       * @return CreateContactFlowResponse
       */
      Models::CreateContactFlowResponse createContactFlow(const Models::CreateContactFlowRequest &request);

      /**
       * @deprecated OpenAPI CreateCustomCallTagging is deprecated, please use CCC::2020-07-01::CreateCustomCallTaggings instead.
       *
       * @summary You can invoke CreateCustomCallTagging to create one or more inbound number tags under a specified instance.
       *
       * @param request CreateCustomCallTaggingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCustomCallTaggingResponse
       */
      Models::CreateCustomCallTaggingResponse createCustomCallTaggingWithOptions(const Models::CreateCustomCallTaggingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI CreateCustomCallTagging is deprecated, please use CCC::2020-07-01::CreateCustomCallTaggings instead.
       *
       * @summary You can invoke CreateCustomCallTagging to create one or more inbound number tags under a specified instance.
       *
       * @param request CreateCustomCallTaggingRequest
       * @return CreateCustomCallTaggingResponse
       */
      Models::CreateCustomCallTaggingResponse createCustomCallTagging(const Models::CreateCustomCallTaggingRequest &request);

      /**
       * @summary Invoke CreateInstance to create a Cloud Contact Center instance.
       *
       * @param request CreateInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstanceWithOptions(const Models::CreateInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke CreateInstance to create a Cloud Contact Center instance.
       *
       * @param request CreateInstanceRequest
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstance(const Models::CreateInstanceRequest &request);

      /**
       * @param tmpReq CreateSchemaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSchemaResponse
       */
      Models::CreateSchemaResponse createSchemaWithOptions(const Models::CreateSchemaRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateSchemaRequest
       * @return CreateSchemaResponse
       */
      Models::CreateSchemaResponse createSchema(const Models::CreateSchemaRequest &request);

      /**
       * @summary You can call CreateSkillGroup to create a skill group under a specified instance.
       *
       * @param request CreateSkillGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSkillGroupResponse
       */
      Models::CreateSkillGroupResponse createSkillGroupWithOptions(const Models::CreateSkillGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call CreateSkillGroup to create a skill group under a specified instance.
       *
       * @param request CreateSkillGroupRequest
       * @return CreateSkillGroupResponse
       */
      Models::CreateSkillGroupResponse createSkillGroup(const Models::CreateSkillGroupRequest &request);

      /**
       * @summary Use CreateTicket to create a ticket.
       *
       * @param request CreateTicketRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTicketResponse
       */
      Models::CreateTicketResponse createTicketWithOptions(const Models::CreateTicketRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Use CreateTicket to create a ticket.
       *
       * @param request CreateTicketRequest
       * @return CreateTicketResponse
       */
      Models::CreateTicketResponse createTicket(const Models::CreateTicketRequest &request);

      /**
       * @summary Call the CreateUser operation to create a new agent in a specified instance.
       *
       * @description Creating an agent is equivalent to creating a Resource Access Management (RAM) sub-account. Agents in Cloud Contact Center are mapped to RAM sub-accounts. Therefore, the parameters for creating an agent are similar to those for creating a RAM account. For example, LoginName is the logon name for the RAM account. Email is the email address associated with the RAM account. This email address receives an email containing the initial logon password for the RAM account.
       *
       * @param request CreateUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUserResponse
       */
      Models::CreateUserResponse createUserWithOptions(const Models::CreateUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call the CreateUser operation to create a new agent in a specified instance.
       *
       * @description Creating an agent is equivalent to creating a Resource Access Management (RAM) sub-account. Agents in Cloud Contact Center are mapped to RAM sub-accounts. Therefore, the parameters for creating an agent are similar to those for creating a RAM account. For example, LoginName is the logon name for the RAM account. Email is the email address associated with the RAM account. This email address receives an email containing the initial logon password for the RAM account.
       *
       * @param request CreateUserRequest
       * @return CreateUserResponse
       */
      Models::CreateUserResponse createUser(const Models::CreateUserRequest &request);

      /**
       * @summary You can invoke DeleteAudioFile to delete the audio file associated with a specified audio resource ID under a specified instance.
       *
       * @param request DeleteAudioFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAudioFileResponse
       */
      Models::DeleteAudioFileResponse deleteAudioFileWithOptions(const Models::DeleteAudioFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke DeleteAudioFile to delete the audio file associated with a specified audio resource ID under a specified instance.
       *
       * @param request DeleteAudioFileRequest
       * @return DeleteAudioFileResponse
       */
      Models::DeleteAudioFileResponse deleteAudioFile(const Models::DeleteAudioFileRequest &request);

      /**
       * @summary You can invoke DeleteCallTag to delete a phone number tag under a specified instance.
       *
       * @param request DeleteCallTagRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCallTagResponse
       */
      Models::DeleteCallTagResponse deleteCallTagWithOptions(const Models::DeleteCallTagRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke DeleteCallTag to delete a phone number tag under a specified instance.
       *
       * @param request DeleteCallTagRequest
       * @return DeleteCallTagResponse
       */
      Models::DeleteCallTagResponse deleteCallTag(const Models::DeleteCallTagRequest &request);

      /**
       * @summary Deletes the specified contact flow.
       *
       * @param request DeleteContactFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteContactFlowResponse
       */
      Models::DeleteContactFlowResponse deleteContactFlowWithOptions(const Models::DeleteContactFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the specified contact flow.
       *
       * @param request DeleteContactFlowRequest
       * @return DeleteContactFlowResponse
       */
      Models::DeleteContactFlowResponse deleteContactFlow(const Models::DeleteContactFlowRequest &request);

      /**
       * @summary You can invoke DeleteCustomCallTagging to delete the inbound number tag associated with a specified number under a specified instance.
       *
       * @param request DeleteCustomCallTaggingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCustomCallTaggingResponse
       */
      Models::DeleteCustomCallTaggingResponse deleteCustomCallTaggingWithOptions(const Models::DeleteCustomCallTaggingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke DeleteCustomCallTagging to delete the inbound number tag associated with a specified number under a specified instance.
       *
       * @param request DeleteCustomCallTaggingRequest
       * @return DeleteCustomCallTaggingResponse
       */
      Models::DeleteCustomCallTaggingResponse deleteCustomCallTagging(const Models::DeleteCustomCallTaggingRequest &request);

      /**
       * @param request DeleteDocumentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDocumentResponse
       */
      Models::DeleteDocumentResponse deleteDocumentWithOptions(const Models::DeleteDocumentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteDocumentRequest
       * @return DeleteDocumentResponse
       */
      Models::DeleteDocumentResponse deleteDocument(const Models::DeleteDocumentRequest &request);

      /**
       * @param tmpReq DeleteDocumentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDocumentsResponse
       */
      Models::DeleteDocumentsResponse deleteDocumentsWithOptions(const Models::DeleteDocumentsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteDocumentsRequest
       * @return DeleteDocumentsResponse
       */
      Models::DeleteDocumentsResponse deleteDocuments(const Models::DeleteDocumentsRequest &request);

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
       * @param request DeleteSchemaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSchemaResponse
       */
      Models::DeleteSchemaResponse deleteSchemaWithOptions(const Models::DeleteSchemaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteSchemaRequest
       * @return DeleteSchemaResponse
       */
      Models::DeleteSchemaResponse deleteSchema(const Models::DeleteSchemaRequest &request);

      /**
       * @param request DeleteSchemaPropertyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSchemaPropertyResponse
       */
      Models::DeleteSchemaPropertyResponse deleteSchemaPropertyWithOptions(const Models::DeleteSchemaPropertyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteSchemaPropertyRequest
       * @return DeleteSchemaPropertyResponse
       */
      Models::DeleteSchemaPropertyResponse deleteSchemaProperty(const Models::DeleteSchemaPropertyRequest &request);

      /**
       * @summary Invoke DeleteSkillGroup to delete the skill group associated with the specified skill group ID under the specified instance.
       *
       * @param request DeleteSkillGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSkillGroupResponse
       */
      Models::DeleteSkillGroupResponse deleteSkillGroupWithOptions(const Models::DeleteSkillGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke DeleteSkillGroup to delete the skill group associated with the specified skill group ID under the specified instance.
       *
       * @param request DeleteSkillGroupRequest
       * @return DeleteSkillGroupResponse
       */
      Models::DeleteSkillGroupResponse deleteSkillGroup(const Models::DeleteSkillGroupRequest &request);

      /**
       * @summary Deletes a specified ticket.
       *
       * @param request DeleteTicketRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTicketResponse
       */
      Models::DeleteTicketResponse deleteTicketWithOptions(const Models::DeleteTicketRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified ticket.
       *
       * @param request DeleteTicketRequest
       * @return DeleteTicketResponse
       */
      Models::DeleteTicketResponse deleteTicket(const Models::DeleteTicketRequest &request);

      /**
       * @summary Deletes a specified ticket template.
       *
       * @param request DeleteTicketTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTicketTemplateResponse
       */
      Models::DeleteTicketTemplateResponse deleteTicketTemplateWithOptions(const Models::DeleteTicketTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified ticket template.
       *
       * @param request DeleteTicketTemplateRequest
       * @return DeleteTicketTemplateResponse
       */
      Models::DeleteTicketTemplateResponse deleteTicketTemplate(const Models::DeleteTicketTemplateRequest &request);

      /**
       * @param request DisableSchemaPropertyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableSchemaPropertyResponse
       */
      Models::DisableSchemaPropertyResponse disableSchemaPropertyWithOptions(const Models::DisableSchemaPropertyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DisableSchemaPropertyRequest
       * @return DisableSchemaPropertyResponse
       */
      Models::DisableSchemaPropertyResponse disableSchemaProperty(const Models::DisableSchemaPropertyRequest &request);

      /**
       * @summary Use the DisableTicketTemplate operation to disable a ticket template. A disabled template cannot be selected when you create a new ticket.
       *
       * @param request DisableTicketTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableTicketTemplateResponse
       */
      Models::DisableTicketTemplateResponse disableTicketTemplateWithOptions(const Models::DisableTicketTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Use the DisableTicketTemplate operation to disable a ticket template. A disabled template cannot be selected when you create a new ticket.
       *
       * @param request DisableTicketTemplateRequest
       * @return DisableTicketTemplateResponse
       */
      Models::DisableTicketTemplateResponse disableTicketTemplate(const Models::DisableTicketTemplateRequest &request);

      /**
       * @summary Revoke contact flow editing and discard the associated draft.
       *
       * @param request DiscardEditingContactFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DiscardEditingContactFlowResponse
       */
      Models::DiscardEditingContactFlowResponse discardEditingContactFlowWithOptions(const Models::DiscardEditingContactFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revoke contact flow editing and discard the associated draft.
       *
       * @param request DiscardEditingContactFlowRequest
       * @return DiscardEditingContactFlowResponse
       */
      Models::DiscardEditingContactFlowResponse discardEditingContactFlow(const Models::DiscardEditingContactFlowRequest &request);

      /**
       * @param request EnableSchemaPropertyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableSchemaPropertyResponse
       */
      Models::EnableSchemaPropertyResponse enableSchemaPropertyWithOptions(const Models::EnableSchemaPropertyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request EnableSchemaPropertyRequest
       * @return EnableSchemaPropertyResponse
       */
      Models::EnableSchemaPropertyResponse enableSchemaProperty(const Models::EnableSchemaPropertyRequest &request);

      /**
       * @summary The EnableTicketTemplate operation publishes a ticket template. Published ticket templates can be used to create tickets.
       *
       * @param request EnableTicketTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableTicketTemplateResponse
       */
      Models::EnableTicketTemplateResponse enableTicketTemplateWithOptions(const Models::EnableTicketTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The EnableTicketTemplate operation publishes a ticket template. Published ticket templates can be used to create tickets.
       *
       * @param request EnableTicketTemplateRequest
       * @return EnableTicketTemplateResponse
       */
      Models::EnableTicketTemplateResponse enableTicketTemplate(const Models::EnableTicketTemplateRequest &request);

      /**
       * @summary You can invoke EndConference to make the specified agent exit the call associated with the specified call ID under the specified instance. The call must be in a conference state.
       *
       * @param request EndConferenceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EndConferenceResponse
       */
      Models::EndConferenceResponse endConferenceWithOptions(const Models::EndConferenceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke EndConference to make the specified agent exit the call associated with the specified call ID under the specified instance. The call must be in a conference state.
       *
       * @param request EndConferenceRequest
       * @return EndConferenceResponse
       */
      Models::EndConferenceResponse endConference(const Models::EndConferenceRequest &request);

      /**
       * @param request ExportContactFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportContactFlowResponse
       */
      Models::ExportContactFlowResponse exportContactFlowWithOptions(const Models::ExportContactFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ExportContactFlowRequest
       * @return ExportContactFlowResponse
       */
      Models::ExportContactFlowResponse exportContactFlow(const Models::ExportContactFlowRequest &request);

      /**
       * @deprecated OpenAPI ExportCustomCallTagging is deprecated, please use CCC::2020-07-01::ExportCustomCallTaggings instead.
       *
       * @summary You can invoke ExportCustomCallTagging to export all inbound number tags under a specified instance.
       *
       * @param request ExportCustomCallTaggingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportCustomCallTaggingResponse
       */
      Models::ExportCustomCallTaggingResponse exportCustomCallTaggingWithOptions(const Models::ExportCustomCallTaggingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ExportCustomCallTagging is deprecated, please use CCC::2020-07-01::ExportCustomCallTaggings instead.
       *
       * @summary You can invoke ExportCustomCallTagging to export all inbound number tags under a specified instance.
       *
       * @param request ExportCustomCallTaggingRequest
       * @return ExportCustomCallTaggingResponse
       */
      Models::ExportCustomCallTaggingResponse exportCustomCallTagging(const Models::ExportCustomCallTaggingRequest &request);

      /**
       * @summary The ExportDoNotCallNumbers operation exports a filtered list of do-not-call numbers from a specified instance.
       *
       * @param request ExportDoNotCallNumbersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportDoNotCallNumbersResponse
       */
      Models::ExportDoNotCallNumbersResponse exportDoNotCallNumbersWithOptions(const Models::ExportDoNotCallNumbersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The ExportDoNotCallNumbers operation exports a filtered list of do-not-call numbers from a specified instance.
       *
       * @param request ExportDoNotCallNumbersRequest
       * @return ExportDoNotCallNumbersResponse
       */
      Models::ExportDoNotCallNumbersResponse exportDoNotCallNumbers(const Models::ExportDoNotCallNumbersRequest &request);

      /**
       * @summary Use the FinishTicketTask operation to process tickets.
       *
       * @param request FinishTicketTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FinishTicketTaskResponse
       */
      Models::FinishTicketTaskResponse finishTicketTaskWithOptions(const Models::FinishTicketTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Use the FinishTicketTask operation to process tickets.
       *
       * @param request FinishTicketTaskRequest
       * @return FinishTicketTaskResponse
       */
      Models::FinishTicketTaskResponse finishTicketTask(const Models::FinishTicketTaskRequest &request);

      /**
       * @summary 获取指定Chat渠道配置
       *
       * @param request GetAccessChannelOfStagingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAccessChannelOfStagingResponse
       */
      Models::GetAccessChannelOfStagingResponse getAccessChannelOfStagingWithOptions(const Models::GetAccessChannelOfStagingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取指定Chat渠道配置
       *
       * @param request GetAccessChannelOfStagingRequest
       * @return GetAccessChannelOfStagingResponse
       */
      Models::GetAccessChannelOfStagingResponse getAccessChannelOfStaging(const Models::GetAccessChannelOfStagingRequest &request);

      /**
       * @summary Invoke GetAudioFile to obtain the audio file information corresponding to a specified audio resource ID under a specified instance.
       *
       * @param request GetAudioFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAudioFileResponse
       */
      Models::GetAudioFileResponse getAudioFileWithOptions(const Models::GetAudioFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke GetAudioFile to obtain the audio file information corresponding to a specified audio resource ID under a specified instance.
       *
       * @param request GetAudioFileRequest
       * @return GetAudioFileResponse
       */
      Models::GetAudioFileResponse getAudioFile(const Models::GetAudioFileRequest &request);

      /**
       * @summary Invoke GetAudioFileDownloadUrl to obtain the OSS download link for a specified audio resource under a specified instance.
       *
       * @param request GetAudioFileDownloadUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAudioFileDownloadUrlResponse
       */
      Models::GetAudioFileDownloadUrlResponse getAudioFileDownloadUrlWithOptions(const Models::GetAudioFileDownloadUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke GetAudioFileDownloadUrl to obtain the OSS download link for a specified audio resource under a specified instance.
       *
       * @param request GetAudioFileDownloadUrlRequest
       * @return GetAudioFileDownloadUrlResponse
       */
      Models::GetAudioFileDownloadUrlResponse getAudioFileDownloadUrl(const Models::GetAudioFileDownloadUrlRequest &request);

      /**
       * @summary Invoke the GetAudioFileUploadParameters API to obtain audio file upload parameters. Before creating an audio file, you must first call this API to retrieve the upload parameters and then call CreateAudioFile to create the audio file. This API is typically invoked by the default public cloud CRM system provided by Cloud Contact Center. It is not recommended for integration customers to call this API directly, because file upload must be performed through a Page operation first; only after the upload is complete can the GetAudioFileUploadParameters API be called.
       *
       * @param request GetAudioFileUploadParametersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAudioFileUploadParametersResponse
       */
      Models::GetAudioFileUploadParametersResponse getAudioFileUploadParametersWithOptions(const Models::GetAudioFileUploadParametersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the GetAudioFileUploadParameters API to obtain audio file upload parameters. Before creating an audio file, you must first call this API to retrieve the upload parameters and then call CreateAudioFile to create the audio file. This API is typically invoked by the default public cloud CRM system provided by Cloud Contact Center. It is not recommended for integration customers to call this API directly, because file upload must be performed through a Page operation first; only after the upload is complete can the GetAudioFileUploadParameters API be called.
       *
       * @param request GetAudioFileUploadParametersRequest
       * @return GetAudioFileUploadParametersResponse
       */
      Models::GetAudioFileUploadParametersResponse getAudioFileUploadParameters(const Models::GetAudioFileUploadParametersRequest &request);

      /**
       * @summary You can invoke the GetCallDetailRecord operation to retrieve call details for a specific call ID within a specific instance.
       *
       * @param request GetCallDetailRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCallDetailRecordResponse
       */
      Models::GetCallDetailRecordResponse getCallDetailRecordWithOptions(const Models::GetCallDetailRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke the GetCallDetailRecord operation to retrieve call details for a specific call ID within a specific instance.
       *
       * @param request GetCallDetailRecordRequest
       * @return GetCallDetailRecordResponse
       */
      Models::GetCallDetailRecordResponse getCallDetailRecord(const Models::GetCallDetailRecordRequest &request);

      /**
       * @summary Gets a predictive outbound campaign by its ID from a specified instance.
       *
       * @param request GetCampaignRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCampaignResponse
       */
      Models::GetCampaignResponse getCampaignWithOptions(const Models::GetCampaignRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets a predictive outbound campaign by its ID from a specified instance.
       *
       * @param request GetCampaignRequest
       * @return GetCampaignResponse
       */
      Models::GetCampaignResponse getCampaign(const Models::GetCampaignRequest &request);

      /**
       * @summary Invoke GetCaseFileUploadUrl to obtain the OSS upload parameters for a predictive outbound calling list file under a specified instance. When creating a predictive outbound calling Activity by importing a file, you must first invoke this API to retrieve the file upload parameters and then invoke the CreateCampaign API.
       *
       * @param request GetCaseFileUploadUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCaseFileUploadUrlResponse
       */
      Models::GetCaseFileUploadUrlResponse getCaseFileUploadUrlWithOptions(const Models::GetCaseFileUploadUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke GetCaseFileUploadUrl to obtain the OSS upload parameters for a predictive outbound calling list file under a specified instance. When creating a predictive outbound calling Activity by importing a file, you must first invoke this API to retrieve the file upload parameters and then invoke the CreateCampaign API.
       *
       * @param request GetCaseFileUploadUrlRequest
       * @return GetCaseFileUploadUrlResponse
       */
      Models::GetCaseFileUploadUrlResponse getCaseFileUploadUrl(const Models::GetCaseFileUploadUrlRequest &request);

      /**
       * @param request GetChatMediaUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetChatMediaUrlResponse
       */
      Models::GetChatMediaUrlResponse getChatMediaUrlWithOptions(const Models::GetChatMediaUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetChatMediaUrlRequest
       * @return GetChatMediaUrlResponse
       */
      Models::GetChatMediaUrlResponse getChatMediaUrl(const Models::GetChatMediaUrlRequest &request);

      /**
       * @summary Use GetChatRoutingProfile to retrieve the chat routing configuration.
       *
       * @param request GetChatRoutingProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetChatRoutingProfileResponse
       */
      Models::GetChatRoutingProfileResponse getChatRoutingProfileWithOptions(const Models::GetChatRoutingProfileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Use GetChatRoutingProfile to retrieve the chat routing configuration.
       *
       * @param request GetChatRoutingProfileRequest
       * @return GetChatRoutingProfileResponse
       */
      Models::GetChatRoutingProfileResponse getChatRoutingProfile(const Models::GetChatRoutingProfileRequest &request);

      /**
       * @summary Retrieve a specified contact flow.
       *
       * @param request GetContactFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetContactFlowResponse
       */
      Models::GetContactFlowResponse getContactFlowWithOptions(const Models::GetContactFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve a specified contact flow.
       *
       * @param request GetContactFlowRequest
       * @return GetContactFlowResponse
       */
      Models::GetContactFlowResponse getContactFlow(const Models::GetContactFlowRequest &request);

      /**
       * @summary Call GetConversationDetail to obtain the conversation details for the call corresponding to the specified contact ID within the specified instance. The instance and skill group must have quality inspection push enabled to obtain these details.
       *
       * @param request GetConversationDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetConversationDetailResponse
       */
      Models::GetConversationDetailResponse getConversationDetailWithOptions(const Models::GetConversationDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call GetConversationDetail to obtain the conversation details for the call corresponding to the specified contact ID within the specified instance. The instance and skill group must have quality inspection push enabled to obtain these details.
       *
       * @param request GetConversationDetailRequest
       * @return GetConversationDetailResponse
       */
      Models::GetConversationDetailResponse getConversationDetail(const Models::GetConversationDetailRequest &request);

      /**
       * @summary 获取DataChannel通道的Token信息
       *
       * @param request GetDataChannelCredentialsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataChannelCredentialsResponse
       */
      Models::GetDataChannelCredentialsResponse getDataChannelCredentialsWithOptions(const Models::GetDataChannelCredentialsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取DataChannel通道的Token信息
       *
       * @param request GetDataChannelCredentialsRequest
       * @return GetDataChannelCredentialsResponse
       */
      Models::GetDataChannelCredentialsResponse getDataChannelCredentials(const Models::GetDataChannelCredentialsRequest &request);

      /**
       * @summary Invoke GetDoNotCallFileUploadParameters to obtain the upload parameters for a do-not-call file. When importing prohibited outbound call numbers through a file, you must first invoke this API to upload the do-not-call number file to the public OSS space of Cloud Contact Center, and then invoke ImportDoNotCallNumbers to execute the import.
       *
       * @param request GetDoNotCallFileUploadParametersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDoNotCallFileUploadParametersResponse
       */
      Models::GetDoNotCallFileUploadParametersResponse getDoNotCallFileUploadParametersWithOptions(const Models::GetDoNotCallFileUploadParametersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke GetDoNotCallFileUploadParameters to obtain the upload parameters for a do-not-call file. When importing prohibited outbound call numbers through a file, you must first invoke this API to upload the do-not-call number file to the public OSS space of Cloud Contact Center, and then invoke ImportDoNotCallNumbers to execute the import.
       *
       * @param request GetDoNotCallFileUploadParametersRequest
       * @return GetDoNotCallFileUploadParametersResponse
       */
      Models::GetDoNotCallFileUploadParametersResponse getDoNotCallFileUploadParameters(const Models::GetDoNotCallFileUploadParametersRequest &request);

      /**
       * @param request GetDocumentUploadParametersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDocumentUploadParametersResponse
       */
      Models::GetDocumentUploadParametersResponse getDocumentUploadParametersWithOptions(const Models::GetDocumentUploadParametersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetDocumentUploadParametersRequest
       * @return GetDocumentUploadParametersResponse
       */
      Models::GetDocumentUploadParametersResponse getDocumentUploadParameters(const Models::GetDocumentUploadParametersRequest &request);

      /**
       * @summary Retrieve early-media audio recordings for a call in a specified Cloud Contact Center instance.
       *
       * @param request GetEarlyMediaRecordingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEarlyMediaRecordingResponse
       */
      Models::GetEarlyMediaRecordingResponse getEarlyMediaRecordingWithOptions(const Models::GetEarlyMediaRecordingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve early-media audio recordings for a call in a specified Cloud Contact Center instance.
       *
       * @param request GetEarlyMediaRecordingRequest
       * @return GetEarlyMediaRecordingResponse
       */
      Models::GetEarlyMediaRecordingResponse getEarlyMediaRecording(const Models::GetEarlyMediaRecordingRequest &request);

      /**
       * @summary Invoke GetHistoricalCallerReport to retrieve the historical inbound call report for a specified calling number under a specified instance.
       *
       * @param request GetHistoricalCallerReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHistoricalCallerReportResponse
       */
      Models::GetHistoricalCallerReportResponse getHistoricalCallerReportWithOptions(const Models::GetHistoricalCallerReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke GetHistoricalCallerReport to retrieve the historical inbound call report for a specified calling number under a specified instance.
       *
       * @param request GetHistoricalCallerReportRequest
       * @return GetHistoricalCallerReportResponse
       */
      Models::GetHistoricalCallerReportResponse getHistoricalCallerReport(const Models::GetHistoricalCallerReportRequest &request);

      /**
       * @summary You can invoke the GetHistoricalCampaignReport API to retrieve the historical data report of a predictive outbound calling activity corresponding to a specified ID under a specified instance.
       *
       * @param request GetHistoricalCampaignReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHistoricalCampaignReportResponse
       */
      Models::GetHistoricalCampaignReportResponse getHistoricalCampaignReportWithOptions(const Models::GetHistoricalCampaignReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke the GetHistoricalCampaignReport API to retrieve the historical data report of a predictive outbound calling activity corresponding to a specified ID under a specified instance.
       *
       * @param request GetHistoricalCampaignReportRequest
       * @return GetHistoricalCampaignReportResponse
       */
      Models::GetHistoricalCampaignReportResponse getHistoricalCampaignReport(const Models::GetHistoricalCampaignReportRequest &request);

      /**
       * @summary You can invoke GetHistoricalInstanceReport to obtain the historical data report for a specified instance.
       *
       * @param request GetHistoricalInstanceReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHistoricalInstanceReportResponse
       */
      Models::GetHistoricalInstanceReportResponse getHistoricalInstanceReportWithOptions(const Models::GetHistoricalInstanceReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke GetHistoricalInstanceReport to obtain the historical data report for a specified instance.
       *
       * @param request GetHistoricalInstanceReportRequest
       * @return GetHistoricalInstanceReportResponse
       */
      Models::GetHistoricalInstanceReportResponse getHistoricalInstanceReport(const Models::GetHistoricalInstanceReportRequest &request);

      /**
       * @summary Retrieves the details of a Cloud Contact Center instance.
       *
       * @param request GetInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceResponse
       */
      Models::GetInstanceResponse getInstanceWithOptions(const Models::GetInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a Cloud Contact Center instance.
       *
       * @param request GetInstanceRequest
       * @return GetInstanceResponse
       */
      Models::GetInstanceResponse getInstance(const Models::GetInstanceRequest &request);

      /**
       * @summary You can call GetInstanceTrendingReport to retrieve the trend report for a specified instance.
       *
       * @param request GetInstanceTrendingReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceTrendingReportResponse
       */
      Models::GetInstanceTrendingReportResponse getInstanceTrendingReportWithOptions(const Models::GetInstanceTrendingReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call GetInstanceTrendingReport to retrieve the trend report for a specified instance.
       *
       * @param request GetInstanceTrendingReportRequest
       * @return GetInstanceTrendingReportResponse
       */
      Models::GetInstanceTrendingReportResponse getInstanceTrendingReport(const Models::GetInstanceTrendingReportRequest &request);

      /**
       * @summary Retrieve the IVR tracking summary.
       *
       * @param request GetIvrTrackingSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIvrTrackingSummaryResponse
       */
      Models::GetIvrTrackingSummaryResponse getIvrTrackingSummaryWithOptions(const Models::GetIvrTrackingSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve the IVR tracking summary.
       *
       * @param request GetIvrTrackingSummaryRequest
       * @return GetIvrTrackingSummaryResponse
       */
      Models::GetIvrTrackingSummaryResponse getIvrTrackingSummary(const Models::GetIvrTrackingSummaryRequest &request);

      /**
       * @summary Invoke GetLoginDetails to obtain the agent\\"s logon information, including basic agent information, server address information, authentication information, and more. This API can only be invoked by the agent themselves; administrators are not permitted to invoke it on behalf of others.
       *
       * @param request GetLoginDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLoginDetailsResponse
       */
      Models::GetLoginDetailsResponse getLoginDetailsWithOptions(const Models::GetLoginDetailsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke GetLoginDetails to obtain the agent\\"s logon information, including basic agent information, server address information, authentication information, and more. This API can only be invoked by the agent themselves; administrators are not permitted to invoke it on behalf of others.
       *
       * @param request GetLoginDetailsRequest
       * @return GetLoginDetailsResponse
       */
      Models::GetLoginDetailsResponse getLoginDetails(const Models::GetLoginDetailsRequest &request);

      /**
       * @summary You can invoke GetMonoRecording to obtain the single-track recording of a specified call under a specified instance. A single-track recording contains only one audio track, with both the agent-side and customer-side recordings merged into the same track in WAV format.
       *
       * @param request GetMonoRecordingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMonoRecordingResponse
       */
      Models::GetMonoRecordingResponse getMonoRecordingWithOptions(const Models::GetMonoRecordingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke GetMonoRecording to obtain the single-track recording of a specified call under a specified instance. A single-track recording contains only one audio track, with both the agent-side and customer-side recordings merged into the same track in WAV format.
       *
       * @param request GetMonoRecordingRequest
       * @return GetMonoRecordingResponse
       */
      Models::GetMonoRecordingResponse getMonoRecording(const Models::GetMonoRecordingRequest &request);

      /**
       * @summary You can invoke GetMultiChannelRecording to obtain the multi-track recording of a specified call under a specified instance. In the multi-track recording, the agent\\"s and customer\\"s audio are distributed across different sound channels. During each playback, only one sound channel can be played, meaning you can hear only one party\\"s voice. The format is MKV.
       *
       * @param request GetMultiChannelRecordingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMultiChannelRecordingResponse
       */
      Models::GetMultiChannelRecordingResponse getMultiChannelRecordingWithOptions(const Models::GetMultiChannelRecordingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke GetMultiChannelRecording to obtain the multi-track recording of a specified call under a specified instance. In the multi-track recording, the agent\\"s and customer\\"s audio are distributed across different sound channels. During each playback, only one sound channel can be played, meaning you can hear only one party\\"s voice. The format is MKV.
       *
       * @param request GetMultiChannelRecordingRequest
       * @return GetMultiChannelRecordingResponse
       */
      Models::GetMultiChannelRecordingResponse getMultiChannelRecording(const Models::GetMultiChannelRecordingRequest &request);

      /**
       * @summary Invoke the GetNumberLocation API to obtain number location information.
       *
       * @param request GetNumberLocationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNumberLocationResponse
       */
      Models::GetNumberLocationResponse getNumberLocationWithOptions(const Models::GetNumberLocationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the GetNumberLocation API to obtain number location information.
       *
       * @param request GetNumberLocationRequest
       * @return GetNumberLocationResponse
       */
      Models::GetNumberLocationResponse getNumberLocation(const Models::GetNumberLocationRequest &request);

      /**
       * @summary You can invoke GetRealtimeCampaignStats to retrieve real-time agent status data for a predictive outbound calling Activity with a specified ID under a specified instance.
       *
       * @param request GetRealtimeCampaignStatsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRealtimeCampaignStatsResponse
       */
      Models::GetRealtimeCampaignStatsResponse getRealtimeCampaignStatsWithOptions(const Models::GetRealtimeCampaignStatsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke GetRealtimeCampaignStats to retrieve real-time agent status data for a predictive outbound calling Activity with a specified ID under a specified instance.
       *
       * @param request GetRealtimeCampaignStatsRequest
       * @return GetRealtimeCampaignStatsResponse
       */
      Models::GetRealtimeCampaignStatsResponse getRealtimeCampaignStats(const Models::GetRealtimeCampaignStatsRequest &request);

      /**
       * @summary You can invoke GetRealtimeInstanceStates to obtain the real-time status of a specified instance.
       *
       * @param request GetRealtimeInstanceStatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRealtimeInstanceStatesResponse
       */
      Models::GetRealtimeInstanceStatesResponse getRealtimeInstanceStatesWithOptions(const Models::GetRealtimeInstanceStatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke GetRealtimeInstanceStates to obtain the real-time status of a specified instance.
       *
       * @param request GetRealtimeInstanceStatesRequest
       * @return GetRealtimeInstanceStatesResponse
       */
      Models::GetRealtimeInstanceStatesResponse getRealtimeInstanceStates(const Models::GetRealtimeInstanceStatesRequest &request);

      /**
       * @param request GetSchemaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSchemaResponse
       */
      Models::GetSchemaResponse getSchemaWithOptions(const Models::GetSchemaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetSchemaRequest
       * @return GetSchemaResponse
       */
      Models::GetSchemaResponse getSchema(const Models::GetSchemaRequest &request);

      /**
       * @summary You can invoke GetSkillGroup to obtain information about the skill group corresponding to a specified skill group ID under a specified instance.
       *
       * @param request GetSkillGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSkillGroupResponse
       */
      Models::GetSkillGroupResponse getSkillGroupWithOptions(const Models::GetSkillGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke GetSkillGroup to obtain information about the skill group corresponding to a specified skill group ID under a specified instance.
       *
       * @param request GetSkillGroupRequest
       * @return GetSkillGroupResponse
       */
      Models::GetSkillGroupResponse getSkillGroup(const Models::GetSkillGroupRequest &request);

      /**
       * @summary Retrieves the content of a session summary template.
       *
       * @param request GetSummaryTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSummaryTemplateResponse
       */
      Models::GetSummaryTemplateResponse getSummaryTemplateWithOptions(const Models::GetSummaryTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the content of a session summary template.
       *
       * @param request GetSummaryTemplateRequest
       * @return GetSummaryTemplateResponse
       */
      Models::GetSummaryTemplateResponse getSummaryTemplate(const Models::GetSummaryTemplateRequest &request);

      /**
       * @summary Retrieves information about a specific ticket.
       *
       * @param request GetTicketRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTicketResponse
       */
      Models::GetTicketResponse getTicketWithOptions(const Models::GetTicketRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves information about a specific ticket.
       *
       * @param request GetTicketRequest
       * @return GetTicketResponse
       */
      Models::GetTicketResponse getTicket(const Models::GetTicketRequest &request);

      /**
       * @summary You can call GetTicketSummaryReport to retrieve a summary of ticket statuses.
       *
       * @param request GetTicketSummaryReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTicketSummaryReportResponse
       */
      Models::GetTicketSummaryReportResponse getTicketSummaryReportWithOptions(const Models::GetTicketSummaryReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call GetTicketSummaryReport to retrieve a summary of ticket statuses.
       *
       * @param request GetTicketSummaryReportRequest
       * @return GetTicketSummaryReportResponse
       */
      Models::GetTicketSummaryReportResponse getTicketSummaryReport(const Models::GetTicketSummaryReportRequest &request);

      /**
       * @summary Call GetTicketTemplate to retrieve ticket template definitions.
       *
       * @param request GetTicketTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTicketTemplateResponse
       */
      Models::GetTicketTemplateResponse getTicketTemplateWithOptions(const Models::GetTicketTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call GetTicketTemplate to retrieve ticket template definitions.
       *
       * @param request GetTicketTemplateRequest
       * @return GetTicketTemplateResponse
       */
      Models::GetTicketTemplateResponse getTicketTemplate(const Models::GetTicketTemplateRequest &request);

      /**
       * @summary Call GetTurnCredentials to get the connection credentials for a Cloud Contact Center Point of Presence (PoP). These credentials include a username and password for authentication. Connecting to Cloud Contact Center through a PoP improves network quality and stability.
       *
       * @param request GetTurnCredentialsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTurnCredentialsResponse
       */
      Models::GetTurnCredentialsResponse getTurnCredentialsWithOptions(const Models::GetTurnCredentialsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call GetTurnCredentials to get the connection credentials for a Cloud Contact Center Point of Presence (PoP). These credentials include a username and password for authentication. Connecting to Cloud Contact Center through a PoP improves network quality and stability.
       *
       * @param request GetTurnCredentialsRequest
       * @return GetTurnCredentialsResponse
       */
      Models::GetTurnCredentialsResponse getTurnCredentials(const Models::GetTurnCredentialsRequest &request);

      /**
       * @summary Call GetTurnServerList to get a list of front-end access points for Alibaba Cloud Contact Center. Connecting through these access points improves network quality and stability.
       *
       * @param request GetTurnServerListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTurnServerListResponse
       */
      Models::GetTurnServerListResponse getTurnServerListWithOptions(const Models::GetTurnServerListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call GetTurnServerList to get a list of front-end access points for Alibaba Cloud Contact Center. Connecting through these access points improves network quality and stability.
       *
       * @param request GetTurnServerListRequest
       * @return GetTurnServerListResponse
       */
      Models::GetTurnServerListResponse getTurnServerList(const Models::GetTurnServerListRequest &request);

      /**
       * @summary Obtain the parameters related to offline quality inspection audio files. Normally, if the Customer has configured the quality inspection feature in Cloud Contact Center, the audio files requiring offline quality inspection and their corresponding parameters are automatically passed to Intelligent Quality Inspection. You only need to invoke this API to obtain the parameters for pushing quality inspection recordings when the Customer has not configured the quality inspection feature in Cloud Contact Center and wishes to manually push Cloud Contact Center call recordings to the quality inspection system.
       *
       * @param request GetUploadAudioDataParamsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUploadAudioDataParamsResponse
       */
      Models::GetUploadAudioDataParamsResponse getUploadAudioDataParamsWithOptions(const Models::GetUploadAudioDataParamsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the parameters related to offline quality inspection audio files. Normally, if the Customer has configured the quality inspection feature in Cloud Contact Center, the audio files requiring offline quality inspection and their corresponding parameters are automatically passed to Intelligent Quality Inspection. You only need to invoke this API to obtain the parameters for pushing quality inspection recordings when the Customer has not configured the quality inspection feature in Cloud Contact Center and wishes to manually push Cloud Contact Center call recordings to the quality inspection system.
       *
       * @param request GetUploadAudioDataParamsRequest
       * @return GetUploadAudioDataParamsResponse
       */
      Models::GetUploadAudioDataParamsResponse getUploadAudioDataParams(const Models::GetUploadAudioDataParamsRequest &request);

      /**
       * @summary You can invoke GetUser to obtain the agent information corresponding to a specified agent ID under a specified instance.
       *
       * @param request GetUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserResponse
       */
      Models::GetUserResponse getUserWithOptions(const Models::GetUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke GetUser to obtain the agent information corresponding to a specified agent ID under a specified instance.
       *
       * @param request GetUserRequest
       * @return GetUserResponse
       */
      Models::GetUserResponse getUser(const Models::GetUserRequest &request);

      /**
       * @summary 获取视频
       *
       * @param request GetVideoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVideoResponse
       */
      Models::GetVideoResponse getVideoWithOptions(const Models::GetVideoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取视频
       *
       * @param request GetVideoRequest
       * @return GetVideoResponse
       */
      Models::GetVideoResponse getVideo(const Models::GetVideoRequest &request);

      /**
       * @summary Call GetVisitorLoginDetails to retrieve login, server address, and authentication information for network service visitors.
       *
       * @param request GetVisitorLoginDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVisitorLoginDetailsResponse
       */
      Models::GetVisitorLoginDetailsResponse getVisitorLoginDetailsWithOptions(const Models::GetVisitorLoginDetailsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call GetVisitorLoginDetails to retrieve login, server address, and authentication information for network service visitors.
       *
       * @param request GetVisitorLoginDetailsRequest
       * @return GetVisitorLoginDetailsResponse
       */
      Models::GetVisitorLoginDetailsResponse getVisitorLoginDetails(const Models::GetVisitorLoginDetailsRequest &request);

      /**
       * @summary You can invoke GetVoicemailRecording to obtain the voicemail recording of a specified call under a specified instance. The recording is single-track and in WAV format.
       *
       * @param request GetVoicemailRecordingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVoicemailRecordingResponse
       */
      Models::GetVoicemailRecordingResponse getVoicemailRecordingWithOptions(const Models::GetVoicemailRecordingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke GetVoicemailRecording to obtain the voicemail recording of a specified call under a specified instance. The recording is single-track and in WAV format.
       *
       * @param request GetVoicemailRecordingRequest
       * @return GetVoicemailRecordingResponse
       */
      Models::GetVoicemailRecordingResponse getVoicemailRecording(const Models::GetVoicemailRecordingRequest &request);

      /**
       * @summary You can invoke HoldCall to hold the call associated with a specified call ID under a specified instance. After the call is held, it will be temporarily suspended, and the held party will hear hold music.
       *
       * @param request HoldCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return HoldCallResponse
       */
      Models::HoldCallResponse holdCallWithOptions(const Models::HoldCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke HoldCall to hold the call associated with a specified call ID under a specified instance. After the call is held, it will be temporarily suspended, and the held party will hear hold music.
       *
       * @param request HoldCallRequest
       * @return HoldCallResponse
       */
      Models::HoldCallResponse holdCall(const Models::HoldCallRequest &request);

      /**
       * @summary Imports one or more admins to a specified instance. The caller must have the `AliyunCCCFullAccess` permission, which you can grant in the RAM console.
       *
       * @param request ImportAdminsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportAdminsResponse
       */
      Models::ImportAdminsResponse importAdminsWithOptions(const Models::ImportAdminsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Imports one or more admins to a specified instance. The caller must have the `AliyunCCCFullAccess` permission, which you can grant in the RAM console.
       *
       * @param request ImportAdminsRequest
       * @return ImportAdminsResponse
       */
      Models::ImportAdminsResponse importAdmins(const Models::ImportAdminsRequest &request);

      /**
       * @param request ImportContactFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportContactFlowResponse
       */
      Models::ImportContactFlowResponse importContactFlowWithOptions(const Models::ImportContactFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ImportContactFlowRequest
       * @return ImportContactFlowResponse
       */
      Models::ImportContactFlowResponse importContactFlow(const Models::ImportContactFlowRequest &request);

      /**
       * @summary Imports your organization’s telephone line numbers. Before performing the first import, contact Cloud Contact Center technical support to add the numbers to the allowlist.
       *
       * @param request ImportCorpNumbersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportCorpNumbersResponse
       */
      Models::ImportCorpNumbersResponse importCorpNumbersWithOptions(const Models::ImportCorpNumbersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Imports your organization’s telephone line numbers. Before performing the first import, contact Cloud Contact Center technical support to add the numbers to the allowlist.
       *
       * @param request ImportCorpNumbersRequest
       * @return ImportCorpNumbersResponse
       */
      Models::ImportCorpNumbersResponse importCorpNumbers(const Models::ImportCorpNumbersRequest &request);

      /**
       * @deprecated OpenAPI ImportCustomCallTagging is deprecated, please use CCC::2020-07-01::ImportCustomCallTaggings instead.
       *
       * @summary You can invoke ImportCustomCallTagging to import multiple inbound number tags into a specified instance.
       *
       * @param request ImportCustomCallTaggingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportCustomCallTaggingResponse
       */
      Models::ImportCustomCallTaggingResponse importCustomCallTaggingWithOptions(const Models::ImportCustomCallTaggingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ImportCustomCallTagging is deprecated, please use CCC::2020-07-01::ImportCustomCallTaggings instead.
       *
       * @summary You can invoke ImportCustomCallTagging to import multiple inbound number tags into a specified instance.
       *
       * @param request ImportCustomCallTaggingRequest
       * @return ImportCustomCallTaggingResponse
       */
      Models::ImportCustomCallTaggingResponse importCustomCallTagging(const Models::ImportCustomCallTaggingRequest &request);

      /**
       * @summary Imports one or more do-not-call numbers to a specified instance. You can import numbers by manual entry or file upload.
       *
       * @param request ImportDoNotCallNumbersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportDoNotCallNumbersResponse
       */
      Models::ImportDoNotCallNumbersResponse importDoNotCallNumbersWithOptions(const Models::ImportDoNotCallNumbersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Imports one or more do-not-call numbers to a specified instance. You can import numbers by manual entry or file upload.
       *
       * @param request ImportDoNotCallNumbersRequest
       * @return ImportDoNotCallNumbersResponse
       */
      Models::ImportDoNotCallNumbersResponse importDoNotCallNumbers(const Models::ImportDoNotCallNumbersRequest &request);

      /**
       * @param request ImportDocumentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportDocumentsResponse
       */
      Models::ImportDocumentsResponse importDocumentsWithOptions(const Models::ImportDocumentsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ImportDocumentsRequest
       * @return ImportDocumentsResponse
       */
      Models::ImportDocumentsResponse importDocuments(const Models::ImportDocumentsRequest &request);

      /**
       * @summary Import existing RAM users as contact center agents.
       *
       * @param request ImportRamUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportRamUsersResponse
       */
      Models::ImportRamUsersResponse importRamUsersWithOptions(const Models::ImportRamUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Import existing RAM users as contact center agents.
       *
       * @param request ImportRamUsersRequest
       * @return ImportRamUsersResponse
       */
      Models::ImportRamUsersResponse importRamUsers(const Models::ImportRamUsersRequest &request);

      /**
       * @summary Consultation transfer refers to transferring a call to another agent, a skill group queue, or an external number. It is also known as follow transfer or two-step transfer.
       *
       * @param request InitiateAttendedTransferRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InitiateAttendedTransferResponse
       */
      Models::InitiateAttendedTransferResponse initiateAttendedTransferWithOptions(const Models::InitiateAttendedTransferRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Consultation transfer refers to transferring a call to another agent, a skill group queue, or an external number. It is also known as follow transfer or two-step transfer.
       *
       * @param request InitiateAttendedTransferRequest
       * @return InitiateAttendedTransferResponse
       */
      Models::InitiateAttendedTransferResponse initiateAttendedTransfer(const Models::InitiateAttendedTransferRequest &request);

      /**
       * @summary You can invoke InterceptCall to forcibly disconnect the call associated with a specified call ID under a given instance. The call must be in the listener state, and the forced disconnection must be initiated by the listener. After the forced disconnection succeeds, the agent who was originally talking with the customer will be disconnected, and the agent who initiated the forced disconnection will replace the original agent and continue the conversation with the customer.
       *
       * @param request InterceptCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InterceptCallResponse
       */
      Models::InterceptCallResponse interceptCallWithOptions(const Models::InterceptCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke InterceptCall to forcibly disconnect the call associated with a specified call ID under a given instance. The call must be in the listener state, and the forced disconnection must be initiated by the listener. After the forced disconnection succeeds, the agent who was originally talking with the customer will be disconnected, and the agent who initiated the forced disconnection will replace the original agent and continue the conversation with the customer.
       *
       * @param request InterceptCallRequest
       * @return InterceptCallResponse
       */
      Models::InterceptCallResponse interceptCall(const Models::InterceptCallRequest &request);

      /**
       * @summary You can invoke LaunchAuthentication to temporarily transfer a call into a specified IVR flow. After invoking this API, the call enters an IVR interaction phase, which is commonly used for identity verification operations.
       *
       * @param request LaunchAuthenticationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LaunchAuthenticationResponse
       */
      Models::LaunchAuthenticationResponse launchAuthenticationWithOptions(const Models::LaunchAuthenticationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke LaunchAuthentication to temporarily transfer a call into a specified IVR flow. After invoking this API, the call enters an IVR interaction phase, which is commonly used for identity verification operations.
       *
       * @param request LaunchAuthenticationRequest
       * @return LaunchAuthenticationResponse
       */
      Models::LaunchAuthenticationResponse launchAuthentication(const Models::LaunchAuthenticationRequest &request);

      /**
       * @summary Invoke LaunchSurvey to send a satisfaction survey. This operation causes the agent to hang up. If it is a voice-based satisfaction survey, the customer enters the IVR satisfaction survey flow after the agent hangs up and completes the satisfaction collection within the IVR flow. If it is an SMS-based satisfaction survey, the call ends and the customer receives a satisfaction survey text message.
       *
       * @param request LaunchSurveyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LaunchSurveyResponse
       */
      Models::LaunchSurveyResponse launchSurveyWithOptions(const Models::LaunchSurveyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke LaunchSurvey to send a satisfaction survey. This operation causes the agent to hang up. If it is a voice-based satisfaction survey, the customer enters the IVR satisfaction survey flow after the agent hangs up and completes the satisfaction collection within the IVR flow. If it is an SMS-based satisfaction survey, the call ends and the customer receives a satisfaction survey text message.
       *
       * @param request LaunchSurveyRequest
       * @return LaunchSurveyResponse
       */
      Models::LaunchSurveyResponse launchSurvey(const Models::LaunchSurveyRequest &request);

      /**
       * @summary Invoke ListAgentStateLogs to obtain the status log list of a specified agent under a specified instance. Note that this API will soon expire. Use the override API ListRealtimeAgentStates instead.
       *
       * @param request ListAgentStateLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAgentStateLogsResponse
       */
      Models::ListAgentStateLogsResponse listAgentStateLogsWithOptions(const Models::ListAgentStateLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke ListAgentStateLogs to obtain the status log list of a specified agent under a specified instance. Note that this API will soon expire. Use the override API ListRealtimeAgentStates instead.
       *
       * @param request ListAgentStateLogsRequest
       * @return ListAgentStateLogsResponse
       */
      Models::ListAgentStateLogsResponse listAgentStateLogs(const Models::ListAgentStateLogsRequest &request);

      /**
       * @deprecated OpenAPI ListAgentStates is deprecated, please use CCC::2020-07-01::ListRealtimeAgentStates instead.
       *
       * @summary You can invoke the ListAgentStates API to retrieve a list of agent statuses under a specified instance, filtered by specified conditions. This API is available only to specific Users. Other Customers are not recommended to invoke it.
       *
       * @param request ListAgentStatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAgentStatesResponse
       */
      Models::ListAgentStatesResponse listAgentStatesWithOptions(const Models::ListAgentStatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ListAgentStates is deprecated, please use CCC::2020-07-01::ListRealtimeAgentStates instead.
       *
       * @summary You can invoke the ListAgentStates API to retrieve a list of agent statuses under a specified instance, filtered by specified conditions. This API is available only to specific Users. Other Customers are not recommended to invoke it.
       *
       * @param request ListAgentStatesRequest
       * @return ListAgentStatesResponse
       */
      Models::ListAgentStatesResponse listAgentStates(const Models::ListAgentStatesRequest &request);

      /**
       * @deprecated OpenAPI ListAgentSummaryReportsSinceMidnight is deprecated, please use CCC::2020-07-01::ListHistoricalAgentReport instead.
       *
       * @summary You can invoke the ListAgentSummaryReportsSinceMidnight API to retrieve agent historical data reports under a specified instance, filtered by given conditions. The statistics cover data from 00:00 of the current day up to the current time. This API is available only to specific users; other customers are not recommended to invoke it.
       *
       * @param request ListAgentSummaryReportsSinceMidnightRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAgentSummaryReportsSinceMidnightResponse
       */
      Models::ListAgentSummaryReportsSinceMidnightResponse listAgentSummaryReportsSinceMidnightWithOptions(const Models::ListAgentSummaryReportsSinceMidnightRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ListAgentSummaryReportsSinceMidnight is deprecated, please use CCC::2020-07-01::ListHistoricalAgentReport instead.
       *
       * @summary You can invoke the ListAgentSummaryReportsSinceMidnight API to retrieve agent historical data reports under a specified instance, filtered by given conditions. The statistics cover data from 00:00 of the current day up to the current time. This API is available only to specific users; other customers are not recommended to invoke it.
       *
       * @param request ListAgentSummaryReportsSinceMidnightRequest
       * @return ListAgentSummaryReportsSinceMidnightResponse
       */
      Models::ListAgentSummaryReportsSinceMidnightResponse listAgentSummaryReportsSinceMidnight(const Models::ListAgentSummaryReportsSinceMidnightRequest &request);

      /**
       * @summary You can invoke ListAttempts to obtain the list of contact dialing records for a specified predictive outbound calling Activity under a specified instance.
       *
       * @param request ListAttemptsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAttemptsResponse
       */
      Models::ListAttemptsResponse listAttemptsWithOptions(const Models::ListAttemptsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke ListAttempts to obtain the list of contact dialing records for a specified predictive outbound calling Activity under a specified instance.
       *
       * @param request ListAttemptsRequest
       * @return ListAttemptsResponse
       */
      Models::ListAttemptsResponse listAttempts(const Models::ListAttemptsRequest &request);

      /**
       * @summary Invoke ListAudioFiles to obtain the list of audio files under a specified instance.
       *
       * @param request ListAudioFilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAudioFilesResponse
       */
      Models::ListAudioFilesResponse listAudioFilesWithOptions(const Models::ListAudioFilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke ListAudioFiles to obtain the list of audio files under a specified instance.
       *
       * @param request ListAudioFilesRequest
       * @return ListAudioFilesResponse
       */
      Models::ListAudioFilesResponse listAudioFiles(const Models::ListAudioFilesRequest &request);

      /**
       * @summary Queries the blacklist tag status of specified numbers in a batch.
       *
       * @param request ListBlacklistCallTaggingsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBlacklistCallTaggingsResponse
       */
      Models::ListBlacklistCallTaggingsResponse listBlacklistCallTaggingsWithOptions(const Models::ListBlacklistCallTaggingsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the blacklist tag status of specified numbers in a batch.
       *
       * @param request ListBlacklistCallTaggingsRequest
       * @return ListBlacklistCallTaggingsResponse
       */
      Models::ListBlacklistCallTaggingsResponse listBlacklistCallTaggings(const Models::ListBlacklistCallTaggingsRequest &request);

      /**
       * @summary You can invoke ListBriefSkillGroups to obtain the list of skill group summary information under a specified instance.
       *
       * @param request ListBriefSkillGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBriefSkillGroupsResponse
       */
      Models::ListBriefSkillGroupsResponse listBriefSkillGroupsWithOptions(const Models::ListBriefSkillGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke ListBriefSkillGroups to obtain the list of skill group summary information under a specified instance.
       *
       * @param request ListBriefSkillGroupsRequest
       * @return ListBriefSkillGroupsResponse
       */
      Models::ListBriefSkillGroupsResponse listBriefSkillGroups(const Models::ListBriefSkillGroupsRequest &request);

      /**
       * @summary You can invoke ListCallDetailRecords to obtain a list of call details filtered by specified search conditions under a specified instance. This API is no longer iteratively updated. We recommend that you use the ListCallDetailRecordsV2 API instead.
       *
       * @description To ensure query efficiency, the TotalCount field in the response data is populated only when the first page is queried. For other pages, this field returns 0.
       *
       * @param request ListCallDetailRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCallDetailRecordsResponse
       */
      Models::ListCallDetailRecordsResponse listCallDetailRecordsWithOptions(const Models::ListCallDetailRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke ListCallDetailRecords to obtain a list of call details filtered by specified search conditions under a specified instance. This API is no longer iteratively updated. We recommend that you use the ListCallDetailRecordsV2 API instead.
       *
       * @description To ensure query efficiency, the TotalCount field in the response data is populated only when the first page is queried. For other pages, this field returns 0.
       *
       * @param request ListCallDetailRecordsRequest
       * @return ListCallDetailRecordsResponse
       */
      Models::ListCallDetailRecordsResponse listCallDetailRecords(const Models::ListCallDetailRecordsRequest &request);

      /**
       * @summary Retrieves a list of call detail records that match the specified filter criteria for a specified instance.
       *
       * @description ListCallDetailRecordsV2 is used to override the ListCallDetailRecords operation. New fields and query conditions will undergo continuous optimization in ListCallDetailRecordsV2. To ensure query efficiency, the TotalCount field in the response is populated only when you query the first page. For other pages, the value 0 is returned.
       *
       * @param request ListCallDetailRecordsV2Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCallDetailRecordsV2Response
       */
      Models::ListCallDetailRecordsV2Response listCallDetailRecordsV2WithOptions(const Models::ListCallDetailRecordsV2Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of call detail records that match the specified filter criteria for a specified instance.
       *
       * @description ListCallDetailRecordsV2 is used to override the ListCallDetailRecords operation. New fields and query conditions will undergo continuous optimization in ListCallDetailRecordsV2. To ensure query efficiency, the TotalCount field in the response is populated only when you query the first page. For other pages, the value 0 is returned.
       *
       * @param request ListCallDetailRecordsV2Request
       * @return ListCallDetailRecordsV2Response
       */
      Models::ListCallDetailRecordsV2Response listCallDetailRecordsV2(const Models::ListCallDetailRecordsV2Request &request);

      /**
       * @summary Use the ListCallSummaries operation to retrieve call summaries.
       *
       * @param tmpReq ListCallSummariesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCallSummariesResponse
       */
      Models::ListCallSummariesResponse listCallSummariesWithOptions(const Models::ListCallSummariesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Use the ListCallSummaries operation to retrieve call summaries.
       *
       * @param request ListCallSummariesRequest
       * @return ListCallSummariesResponse
       */
      Models::ListCallSummariesResponse listCallSummaries(const Models::ListCallSummariesRequest &request);

      /**
       * @summary You can invoke ListCallTags to obtain all number tags under a specified instance.
       *
       * @param request ListCallTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCallTagsResponse
       */
      Models::ListCallTagsResponse listCallTagsWithOptions(const Models::ListCallTagsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke ListCallTags to obtain all number tags under a specified instance.
       *
       * @param request ListCallTagsRequest
       * @return ListCallTagsResponse
       */
      Models::ListCallTagsResponse listCallTags(const Models::ListCallTagsRequest &request);

      /**
       * @summary Obtain the trend report of the predictive outbound calling activity with the specified ID under the specified instance.
       *
       * @param request ListCampaignTrendingReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCampaignTrendingReportResponse
       */
      Models::ListCampaignTrendingReportResponse listCampaignTrendingReportWithOptions(const Models::ListCampaignTrendingReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the trend report of the predictive outbound calling activity with the specified ID under the specified instance.
       *
       * @param request ListCampaignTrendingReportRequest
       * @return ListCampaignTrendingReportResponse
       */
      Models::ListCampaignTrendingReportResponse listCampaignTrendingReport(const Models::ListCampaignTrendingReportRequest &request);

      /**
       * @summary Calls ListCampaigns to obtain the list of predictive dialing campaigns under a specified instance.
       *
       * @param request ListCampaignsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCampaignsResponse
       */
      Models::ListCampaignsResponse listCampaignsWithOptions(const Models::ListCampaignsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls ListCampaigns to obtain the list of predictive dialing campaigns under a specified instance.
       *
       * @param request ListCampaignsRequest
       * @return ListCampaignsResponse
       */
      Models::ListCampaignsResponse listCampaigns(const Models::ListCampaignsRequest &request);

      /**
       * @summary Invoke ListCases to obtain the execution details list of the outbound contact list for the predictive dialing Activity corresponding to the specified ID under the specified instance.
       *
       * @param request ListCasesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCasesResponse
       */
      Models::ListCasesResponse listCasesWithOptions(const Models::ListCasesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke ListCases to obtain the execution details list of the outbound contact list for the predictive dialing Activity corresponding to the specified ID under the specified instance.
       *
       * @param request ListCasesRequest
       * @return ListCasesResponse
       */
      Models::ListCasesResponse listCases(const Models::ListCasesRequest &request);

      /**
       * @summary You can use ListCategories to retrieve category information.
       *
       * @param request ListCategoriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCategoriesResponse
       */
      Models::ListCategoriesResponse listCategoriesWithOptions(const Models::ListCategoriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can use ListCategories to retrieve category information.
       *
       * @param request ListCategoriesRequest
       * @return ListCategoriesResponse
       */
      Models::ListCategoriesResponse listCategories(const Models::ListCategoriesRequest &request);

      /**
       * @summary Retrieves the ticket field types that are defined for an instance.
       *
       * @param request ListCommonTicketFieldsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCommonTicketFieldsResponse
       */
      Models::ListCommonTicketFieldsResponse listCommonTicketFieldsWithOptions(const Models::ListCommonTicketFieldsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the ticket field types that are defined for an instance.
       *
       * @param request ListCommonTicketFieldsRequest
       * @return ListCommonTicketFieldsResponse
       */
      Models::ListCommonTicketFieldsResponse listCommonTicketFields(const Models::ListCommonTicketFieldsRequest &request);

      /**
       * @summary Retrieves the config items for a specified instance.
       *
       * @param request ListConfigItemsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListConfigItemsResponse
       */
      Models::ListConfigItemsResponse listConfigItemsWithOptions(const Models::ListConfigItemsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the config items for a specified instance.
       *
       * @param request ListConfigItemsRequest
       * @return ListConfigItemsResponse
       */
      Models::ListConfigItemsResponse listConfigItems(const Models::ListConfigItemsRequest &request);

      /**
       * @summary Call ListContactFlows to retrieve the IVR contact flows for a specified instance.
       *
       * @param request ListContactFlowsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListContactFlowsResponse
       */
      Models::ListContactFlowsResponse listContactFlowsWithOptions(const Models::ListContactFlowsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call ListContactFlows to retrieve the IVR contact flows for a specified instance.
       *
       * @param request ListContactFlowsRequest
       * @return ListContactFlowsResponse
       */
      Models::ListContactFlowsResponse listContactFlows(const Models::ListContactFlowsRequest &request);

      /**
       * @deprecated OpenAPI ListCustomCallTagging is deprecated, please use CCC::2020-07-01::ListCustomCallTaggings instead.
       *
       * @summary You can invoke ListCustomCallTagging to obtain the list of inbound number marks under a specified instance.
       *
       * @param request ListCustomCallTaggingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCustomCallTaggingResponse
       */
      Models::ListCustomCallTaggingResponse listCustomCallTaggingWithOptions(const Models::ListCustomCallTaggingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ListCustomCallTagging is deprecated, please use CCC::2020-07-01::ListCustomCallTaggings instead.
       *
       * @summary You can invoke ListCustomCallTagging to obtain the list of inbound number marks under a specified instance.
       *
       * @param request ListCustomCallTaggingRequest
       * @return ListCustomCallTaggingResponse
       */
      Models::ListCustomCallTaggingResponse listCustomCallTagging(const Models::ListCustomCallTaggingRequest &request);

      /**
       * @summary Obtain the device list of a specified agent under a specified instance.
       *
       * @param request ListDevicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDevicesResponse
       */
      Models::ListDevicesResponse listDevicesWithOptions(const Models::ListDevicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the device list of a specified agent under a specified instance.
       *
       * @param request ListDevicesRequest
       * @return ListDevicesResponse
       */
      Models::ListDevicesResponse listDevices(const Models::ListDevicesRequest &request);

      /**
       * @summary Retrieves the list of prohibited outbound call numbers under a specified instance, filtered by specified search conditions.
       *
       * @param request ListDoNotCallNumbersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDoNotCallNumbersResponse
       */
      Models::ListDoNotCallNumbersResponse listDoNotCallNumbersWithOptions(const Models::ListDoNotCallNumbersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of prohibited outbound call numbers under a specified instance, filtered by specified search conditions.
       *
       * @param request ListDoNotCallNumbersRequest
       * @return ListDoNotCallNumbersResponse
       */
      Models::ListDoNotCallNumbersResponse listDoNotCallNumbers(const Models::ListDoNotCallNumbersRequest &request);

      /**
       * @param tmpReq ListDocumentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDocumentsResponse
       */
      Models::ListDocumentsResponse listDocumentsWithOptions(const Models::ListDocumentsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListDocumentsRequest
       * @return ListDocumentsResponse
       */
      Models::ListDocumentsResponse listDocuments(const Models::ListDocumentsRequest &request);

      /**
       * @summary Queries feedback records.
       *
       * @param request ListFeedbacksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFeedbacksResponse
       */
      Models::ListFeedbacksResponse listFeedbacksWithOptions(const Models::ListFeedbacksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries feedback records.
       *
       * @param request ListFeedbacksRequest
       * @return ListFeedbacksResponse
       */
      Models::ListFeedbacksResponse listFeedbacks(const Models::ListFeedbacksRequest &request);

      /**
       * @summary You can use ListFlashSmsApplication to obtain third-party flash SMS configuration information.
       *
       * @param request ListFlashSmsApplicationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFlashSmsApplicationsResponse
       */
      Models::ListFlashSmsApplicationsResponse listFlashSmsApplicationsWithOptions(const Models::ListFlashSmsApplicationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can use ListFlashSmsApplication to obtain third-party flash SMS configuration information.
       *
       * @param request ListFlashSmsApplicationsRequest
       * @return ListFlashSmsApplicationsResponse
       */
      Models::ListFlashSmsApplicationsResponse listFlashSmsApplications(const Models::ListFlashSmsApplicationsRequest &request);

      /**
       * @summary Call the ListFlashSmsSettings operation to retrieve the flash SMS configurations for a specified skill group.
       *
       * @param tmpReq ListFlashSmsSettingsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFlashSmsSettingsResponse
       */
      Models::ListFlashSmsSettingsResponse listFlashSmsSettingsWithOptions(const Models::ListFlashSmsSettingsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call the ListFlashSmsSettings operation to retrieve the flash SMS configurations for a specified skill group.
       *
       * @param request ListFlashSmsSettingsRequest
       * @return ListFlashSmsSettingsResponse
       */
      Models::ListFlashSmsSettingsResponse listFlashSmsSettings(const Models::ListFlashSmsSettingsRequest &request);

      /**
       * @summary Use ListFlashSmsTemplates to retrieve flash SMS template information.
       *
       * @param request ListFlashSmsTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFlashSmsTemplatesResponse
       */
      Models::ListFlashSmsTemplatesResponse listFlashSmsTemplatesWithOptions(const Models::ListFlashSmsTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Use ListFlashSmsTemplates to retrieve flash SMS template information.
       *
       * @param request ListFlashSmsTemplatesRequest
       * @return ListFlashSmsTemplatesResponse
       */
      Models::ListFlashSmsTemplatesResponse listFlashSmsTemplates(const Models::ListFlashSmsTemplatesRequest &request);

      /**
       * @summary Retrieves the records of group chat messages.
       *
       * @param request ListGroupChatMessagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGroupChatMessagesResponse
       */
      Models::ListGroupChatMessagesResponse listGroupChatMessagesWithOptions(const Models::ListGroupChatMessagesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the records of group chat messages.
       *
       * @param request ListGroupChatMessagesRequest
       * @return ListGroupChatMessagesResponse
       */
      Models::ListGroupChatMessagesResponse listGroupChatMessages(const Models::ListGroupChatMessagesRequest &request);

      /**
       * @summary Retrieves historical data reports for one or more agents in a specified instance.
       *
       * @param request ListHistoricalAgentReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHistoricalAgentReportResponse
       */
      Models::ListHistoricalAgentReportResponse listHistoricalAgentReportWithOptions(const Models::ListHistoricalAgentReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves historical data reports for one or more agents in a specified instance.
       *
       * @param request ListHistoricalAgentReportRequest
       * @return ListHistoricalAgentReportResponse
       */
      Models::ListHistoricalAgentReportResponse listHistoricalAgentReport(const Models::ListHistoricalAgentReportRequest &request);

      /**
       * @summary You can call ListHistoricalAgentSkillGroupReport to retrieve historical skill group reports for one or more agents in a specified instance.
       *
       * @param request ListHistoricalAgentSkillGroupReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHistoricalAgentSkillGroupReportResponse
       */
      Models::ListHistoricalAgentSkillGroupReportResponse listHistoricalAgentSkillGroupReportWithOptions(const Models::ListHistoricalAgentSkillGroupReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call ListHistoricalAgentSkillGroupReport to retrieve historical skill group reports for one or more agents in a specified instance.
       *
       * @param request ListHistoricalAgentSkillGroupReportRequest
       * @return ListHistoricalAgentSkillGroupReportResponse
       */
      Models::ListHistoricalAgentSkillGroupReportResponse listHistoricalAgentSkillGroupReport(const Models::ListHistoricalAgentSkillGroupReportRequest &request);

      /**
       * @summary You can invoke ListHistoricalSkillGroupReport to obtain historical data reports for one or more skill groups under a specified instance.
       *
       * @param request ListHistoricalSkillGroupReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHistoricalSkillGroupReportResponse
       */
      Models::ListHistoricalSkillGroupReportResponse listHistoricalSkillGroupReportWithOptions(const Models::ListHistoricalSkillGroupReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke ListHistoricalSkillGroupReport to obtain historical data reports for one or more skill groups under a specified instance.
       *
       * @param request ListHistoricalSkillGroupReportRequest
       * @return ListHistoricalSkillGroupReportResponse
       */
      Models::ListHistoricalSkillGroupReportResponse listHistoricalSkillGroupReport(const Models::ListHistoricalSkillGroupReportRequest &request);

      /**
       * @summary Invoke the ListInstances API to obtain the list of Cloud Contact Center instances under the current Alibaba Cloud account.
       *
       * @description If a RAM user needs to invoke this API, the RAM user must have the "Manage Cloud Call Center (CCC)" permission (AliyunCCCFullAccess).
       *
       * @param request ListInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstancesWithOptions(const Models::ListInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the ListInstances API to obtain the list of Cloud Contact Center instances under the current Alibaba Cloud account.
       *
       * @description If a RAM user needs to invoke this API, the RAM user must have the "Manage Cloud Call Center (CCC)" permission (AliyunCCCFullAccess).
       *
       * @param request ListInstancesRequest
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstances(const Models::ListInstancesRequest &request);

      /**
       * @summary You can invoke ListInstancesOfUser to obtain the list of Cloud Contact Center instances to which the User belongs.
       *
       * @param request ListInstancesOfUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstancesOfUserResponse
       */
      Models::ListInstancesOfUserResponse listInstancesOfUserWithOptions(const Models::ListInstancesOfUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke ListInstancesOfUser to obtain the list of Cloud Contact Center instances to which the User belongs.
       *
       * @param request ListInstancesOfUserRequest
       * @return ListInstancesOfUserResponse
       */
      Models::ListInstancesOfUserResponse listInstancesOfUser(const Models::ListInstancesOfUserRequest &request);

      /**
       * @summary You can invoke ListIntervalAgentReport to obtain the segment statistical report of a specified agent under a specified instance.
       *
       * @param request ListIntervalAgentReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIntervalAgentReportResponse
       */
      Models::ListIntervalAgentReportResponse listIntervalAgentReportWithOptions(const Models::ListIntervalAgentReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke ListIntervalAgentReport to obtain the segment statistical report of a specified agent under a specified instance.
       *
       * @param request ListIntervalAgentReportRequest
       * @return ListIntervalAgentReportResponse
       */
      Models::ListIntervalAgentReportResponse listIntervalAgentReport(const Models::ListIntervalAgentReportRequest &request);

      /**
       * @summary Retrieves the interval-based statistical report for a specified agent in a specified instance.
       *
       * @param request ListIntervalAgentSkillGroupReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIntervalAgentSkillGroupReportResponse
       */
      Models::ListIntervalAgentSkillGroupReportResponse listIntervalAgentSkillGroupReportWithOptions(const Models::ListIntervalAgentSkillGroupReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the interval-based statistical report for a specified agent in a specified instance.
       *
       * @param request ListIntervalAgentSkillGroupReportRequest
       * @return ListIntervalAgentSkillGroupReportResponse
       */
      Models::ListIntervalAgentSkillGroupReportResponse listIntervalAgentSkillGroupReport(const Models::ListIntervalAgentSkillGroupReportRequest &request);

      /**
       * @summary You can invoke ListIntervalInstanceReport to obtain the segment statistical report for a specified instance.
       *
       * @param request ListIntervalInstanceReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIntervalInstanceReportResponse
       */
      Models::ListIntervalInstanceReportResponse listIntervalInstanceReportWithOptions(const Models::ListIntervalInstanceReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke ListIntervalInstanceReport to obtain the segment statistical report for a specified instance.
       *
       * @param request ListIntervalInstanceReportRequest
       * @return ListIntervalInstanceReportResponse
       */
      Models::ListIntervalInstanceReportResponse listIntervalInstanceReport(const Models::ListIntervalInstanceReportRequest &request);

      /**
       * @summary You can invoke ListIntervalSkillGroupReport to obtain the segment-based statistical report of a specified skill group under a specified instance.
       *
       * @param request ListIntervalSkillGroupReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIntervalSkillGroupReportResponse
       */
      Models::ListIntervalSkillGroupReportResponse listIntervalSkillGroupReportWithOptions(const Models::ListIntervalSkillGroupReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke ListIntervalSkillGroupReport to obtain the segment-based statistical report of a specified skill group under a specified instance.
       *
       * @param request ListIntervalSkillGroupReportRequest
       * @return ListIntervalSkillGroupReportResponse
       */
      Models::ListIntervalSkillGroupReportResponse listIntervalSkillGroupReport(const Models::ListIntervalSkillGroupReportRequest &request);

      /**
       * @summary Invoke ListIvrTrackingDetails to obtain the IVR tracking details of a specified call under a specified instance.
       *
       * @param request ListIvrTrackingDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIvrTrackingDetailsResponse
       */
      Models::ListIvrTrackingDetailsResponse listIvrTrackingDetailsWithOptions(const Models::ListIvrTrackingDetailsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke ListIvrTrackingDetails to obtain the IVR tracking details of a specified call under a specified instance.
       *
       * @param request ListIvrTrackingDetailsRequest
       * @return ListIvrTrackingDetailsResponse
       */
      Models::ListIvrTrackingDetailsResponse listIvrTrackingDetails(const Models::ListIvrTrackingDetailsRequest &request);

      /**
       * @deprecated OpenAPI ListLegacyAgentEventLogs is deprecated, please use CCC::2020-07-01::ListAgentStateLogs instead.
       *
       * @summary You can invoke ListLegacyAgentEventLogs to obtain the list of 1.0 legacy agent event logs. This API is available only to specific Users, and other Customers are not recommended to invoke it.
       *
       * @param request ListLegacyAgentEventLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLegacyAgentEventLogsResponse
       */
      Models::ListLegacyAgentEventLogsResponse listLegacyAgentEventLogsWithOptions(const Models::ListLegacyAgentEventLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ListLegacyAgentEventLogs is deprecated, please use CCC::2020-07-01::ListAgentStateLogs instead.
       *
       * @summary You can invoke ListLegacyAgentEventLogs to obtain the list of 1.0 legacy agent event logs. This API is available only to specific Users, and other Customers are not recommended to invoke it.
       *
       * @param request ListLegacyAgentEventLogsRequest
       * @return ListLegacyAgentEventLogsResponse
       */
      Models::ListLegacyAgentEventLogsResponse listLegacyAgentEventLogs(const Models::ListLegacyAgentEventLogsRequest &request);

      /**
       * @deprecated OpenAPI ListLegacyAgentStatusLogs is deprecated, please use CCC::2020-07-01::ListAgentStateLogs instead.
       *
       * @summary You can invoke ListLegacyAgentStatusLogs to obtain the list of legacy agent status logs for version 1.0. This API is available only to specific Users, and other Customers are not recommended to invoke it.
       *
       * @param request ListLegacyAgentStatusLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLegacyAgentStatusLogsResponse
       */
      Models::ListLegacyAgentStatusLogsResponse listLegacyAgentStatusLogsWithOptions(const Models::ListLegacyAgentStatusLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ListLegacyAgentStatusLogs is deprecated, please use CCC::2020-07-01::ListAgentStateLogs instead.
       *
       * @summary You can invoke ListLegacyAgentStatusLogs to obtain the list of legacy agent status logs for version 1.0. This API is available only to specific Users, and other Customers are not recommended to invoke it.
       *
       * @param request ListLegacyAgentStatusLogsRequest
       * @return ListLegacyAgentStatusLogsResponse
       */
      Models::ListLegacyAgentStatusLogsResponse listLegacyAgentStatusLogs(const Models::ListLegacyAgentStatusLogsRequest &request);

      /**
       * @summary ListLegacyAppraiseLogs
       *
       * @param request ListLegacyAppraiseLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLegacyAppraiseLogsResponse
       */
      Models::ListLegacyAppraiseLogsResponse listLegacyAppraiseLogsWithOptions(const Models::ListLegacyAppraiseLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ListLegacyAppraiseLogs
       *
       * @param request ListLegacyAppraiseLogsRequest
       * @return ListLegacyAppraiseLogsResponse
       */
      Models::ListLegacyAppraiseLogsResponse listLegacyAppraiseLogs(const Models::ListLegacyAppraiseLogsRequest &request);

      /**
       * @summary You can invoke ListLegacyQueueEventLogs to obtain the list of 1.0 legacy queue event logs. This API is available only to specific Users, and other Customers are not recommended to invoke it.
       *
       * @param request ListLegacyQueueEventLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLegacyQueueEventLogsResponse
       */
      Models::ListLegacyQueueEventLogsResponse listLegacyQueueEventLogsWithOptions(const Models::ListLegacyQueueEventLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke ListLegacyQueueEventLogs to obtain the list of 1.0 legacy queue event logs. This API is available only to specific Users, and other Customers are not recommended to invoke it.
       *
       * @param request ListLegacyQueueEventLogsRequest
       * @return ListLegacyQueueEventLogsResponse
       */
      Models::ListLegacyQueueEventLogsResponse listLegacyQueueEventLogs(const Models::ListLegacyQueueEventLogsRequest &request);

      /**
       * @summary Call ListMonoRecordings to retrieve single-track recordings for each party in a specified call under a specified instance. During a call, each party has a channel, and each channel generates a combined track recording in WAV format.
       *
       * @param request ListMonoRecordingsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMonoRecordingsResponse
       */
      Models::ListMonoRecordingsResponse listMonoRecordingsWithOptions(const Models::ListMonoRecordingsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call ListMonoRecordings to retrieve single-track recordings for each party in a specified call under a specified instance. During a call, each party has a channel, and each channel generates a combined track recording in WAV format.
       *
       * @param request ListMonoRecordingsRequest
       * @return ListMonoRecordingsResponse
       */
      Models::ListMonoRecordingsResponse listMonoRecordings(const Models::ListMonoRecordingsRequest &request);

      /**
       * @summary Call ListMultiChannelRecordings to retrieve the multi-channel recordings for each party in a specified call and instance. Each party has a call channel that corresponds to a multi-channel recording in MKV format.
       *
       * @param request ListMultiChannelRecordingsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMultiChannelRecordingsResponse
       */
      Models::ListMultiChannelRecordingsResponse listMultiChannelRecordingsWithOptions(const Models::ListMultiChannelRecordingsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call ListMultiChannelRecordings to retrieve the multi-channel recordings for each party in a specified call and instance. Each party has a call channel that corresponds to a multi-channel recording in MKV format.
       *
       * @param request ListMultiChannelRecordingsRequest
       * @return ListMultiChannelRecordingsResponse
       */
      Models::ListMultiChannelRecordingsResponse listMultiChannelRecordings(const Models::ListMultiChannelRecordingsRequest &request);

      /**
       * @summary Query notification records that were not sent using Message Queue (MQ).
       *
       * @param request ListNotificationRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNotificationRecordsResponse
       */
      Models::ListNotificationRecordsResponse listNotificationRecordsWithOptions(const Models::ListNotificationRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query notification records that were not sent using Message Queue (MQ).
       *
       * @param request ListNotificationRecordsRequest
       * @return ListNotificationRecordsResponse
       */
      Models::ListNotificationRecordsResponse listNotificationRecords(const Models::ListNotificationRecordsRequest &request);

      /**
       * @summary `ListOutboundNumbersOfUser` retrieves the outbound numbers for a specified agent in a specified instance.
       *
       * @param request ListOutboundNumbersOfUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOutboundNumbersOfUserResponse
       */
      Models::ListOutboundNumbersOfUserResponse listOutboundNumbersOfUserWithOptions(const Models::ListOutboundNumbersOfUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary `ListOutboundNumbersOfUser` retrieves the outbound numbers for a specified agent in a specified instance.
       *
       * @param request ListOutboundNumbersOfUserRequest
       * @return ListOutboundNumbersOfUserResponse
       */
      Models::ListOutboundNumbersOfUserResponse listOutboundNumbersOfUser(const Models::ListOutboundNumbersOfUserRequest &request);

      /**
       * @summary You can invoke ListPersonalNumbersOfUser to obtain the list of personal outbound numbers for a specified agent under a specified instance. You can also use this API to retrieve the list of numbers that can be added as personal outbound numbers for an agent.
       *
       * @description Note: If a number is already attached to a skill group, it will not appear in the list of numbers available as personal outbound numbers.
       *
       * @param request ListPersonalNumbersOfUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPersonalNumbersOfUserResponse
       */
      Models::ListPersonalNumbersOfUserResponse listPersonalNumbersOfUserWithOptions(const Models::ListPersonalNumbersOfUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke ListPersonalNumbersOfUser to obtain the list of personal outbound numbers for a specified agent under a specified instance. You can also use this API to retrieve the list of numbers that can be added as personal outbound numbers for an agent.
       *
       * @description Note: If a number is already attached to a skill group, it will not appear in the list of numbers available as personal outbound numbers.
       *
       * @param request ListPersonalNumbersOfUserRequest
       * @return ListPersonalNumbersOfUserResponse
       */
      Models::ListPersonalNumbersOfUserResponse listPersonalNumbersOfUser(const Models::ListPersonalNumbersOfUserRequest &request);

      /**
       * @summary You can invoke ListPhoneNumbers to obtain the phone number list under a specified instance.
       *
       * @param request ListPhoneNumbersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPhoneNumbersResponse
       */
      Models::ListPhoneNumbersResponse listPhoneNumbersWithOptions(const Models::ListPhoneNumbersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke ListPhoneNumbers to obtain the phone number list under a specified instance.
       *
       * @param request ListPhoneNumbersRequest
       * @return ListPhoneNumbersResponse
       */
      Models::ListPhoneNumbersResponse listPhoneNumbers(const Models::ListPhoneNumbersRequest &request);

      /**
       * @summary You can invoke the ListPhoneNumbersOfSkillGroup API to obtain the list of phone numbers associated with a specified skill group under a specified instance. You can also use this API to query phone numbers that are not currently associated with the skill group but can be associated with it.
       *
       * @description Note: If a phone number is already used as a personal outbound number, it will not appear in the list of numbers available for association with a skill group.
       *
       * @param request ListPhoneNumbersOfSkillGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPhoneNumbersOfSkillGroupResponse
       */
      Models::ListPhoneNumbersOfSkillGroupResponse listPhoneNumbersOfSkillGroupWithOptions(const Models::ListPhoneNumbersOfSkillGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke the ListPhoneNumbersOfSkillGroup API to obtain the list of phone numbers associated with a specified skill group under a specified instance. You can also use this API to query phone numbers that are not currently associated with the skill group but can be associated with it.
       *
       * @description Note: If a phone number is already used as a personal outbound number, it will not appear in the list of numbers available for association with a skill group.
       *
       * @param request ListPhoneNumbersOfSkillGroupRequest
       * @return ListPhoneNumbersOfSkillGroupResponse
       */
      Models::ListPhoneNumbersOfSkillGroupResponse listPhoneNumbersOfSkillGroup(const Models::ListPhoneNumbersOfSkillGroupRequest &request);

      /**
       * @summary Invoke ListPrivilegesOfUser to obtain the permissions owned by the current User.
       *
       * @param request ListPrivilegesOfUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPrivilegesOfUserResponse
       */
      Models::ListPrivilegesOfUserResponse listPrivilegesOfUserWithOptions(const Models::ListPrivilegesOfUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke ListPrivilegesOfUser to obtain the permissions owned by the current User.
       *
       * @param request ListPrivilegesOfUserRequest
       * @return ListPrivilegesOfUserResponse
       */
      Models::ListPrivilegesOfUserResponse listPrivilegesOfUser(const Models::ListPrivilegesOfUserRequest &request);

      /**
       * @summary Lists RAM users that have not been imported into a specified instance.
       *
       * @description A Resource Access Management (RAM) user can be imported as an agent into multiple Cloud Contact Center (CCC) instances. However, an agent can be associated with only one RAM account. When you create an agent in a CCC instance, a corresponding RAM account is also created. To avoid creating redundant RAM accounts when you set up a new instance, you can call the ListRamUsers operation to list RAM users that have not been imported into the instance. You can then call the operation that imports RAM users to add them to the new instance. This prevents creating unnecessary RAM accounts and conserves resources.
       *
       * @param request ListRamUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRamUsersResponse
       */
      Models::ListRamUsersResponse listRamUsersWithOptions(const Models::ListRamUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists RAM users that have not been imported into a specified instance.
       *
       * @description A Resource Access Management (RAM) user can be imported as an agent into multiple Cloud Contact Center (CCC) instances. However, an agent can be associated with only one RAM account. When you create an agent in a CCC instance, a corresponding RAM account is also created. To avoid creating redundant RAM accounts when you set up a new instance, you can call the ListRamUsers operation to list RAM users that have not been imported into the instance. You can then call the operation that imports RAM users to add them to the new instance. This prevents creating unnecessary RAM accounts and conserves resources.
       *
       * @param request ListRamUsersRequest
       * @return ListRamUsersResponse
       */
      Models::ListRamUsersResponse listRamUsers(const Models::ListRamUsersRequest &request);

      /**
       * @summary You can invoke ListRealtimeAgentStates to obtain a real-time status data report for one or more specified agents in a specified instance.
       *
       * @param request ListRealtimeAgentStatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRealtimeAgentStatesResponse
       */
      Models::ListRealtimeAgentStatesResponse listRealtimeAgentStatesWithOptions(const Models::ListRealtimeAgentStatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke ListRealtimeAgentStates to obtain a real-time status data report for one or more specified agents in a specified instance.
       *
       * @param request ListRealtimeAgentStatesRequest
       * @return ListRealtimeAgentStatesResponse
       */
      Models::ListRealtimeAgentStatesResponse listRealtimeAgentStates(const Models::ListRealtimeAgentStatesRequest &request);

      /**
       * @summary You can invoke ListRealtimeSkillGroupStates to obtain the real-time skill group status report for a specified instance.
       *
       * @param request ListRealtimeSkillGroupStatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRealtimeSkillGroupStatesResponse
       */
      Models::ListRealtimeSkillGroupStatesResponse listRealtimeSkillGroupStatesWithOptions(const Models::ListRealtimeSkillGroupStatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke ListRealtimeSkillGroupStates to obtain the real-time skill group status report for a specified instance.
       *
       * @param request ListRealtimeSkillGroupStatesRequest
       * @return ListRealtimeSkillGroupStatesResponse
       */
      Models::ListRealtimeSkillGroupStatesResponse listRealtimeSkillGroupStates(const Models::ListRealtimeSkillGroupStatesRequest &request);

      /**
       * @summary You can invoke ListRecentCallDetailRecords to obtain the list of recent call detail records for agents mapped to the current Resource Access Management (RAM) user under the specified instance.
       *
       * @param request ListRecentCallDetailRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRecentCallDetailRecordsResponse
       */
      Models::ListRecentCallDetailRecordsResponse listRecentCallDetailRecordsWithOptions(const Models::ListRecentCallDetailRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke ListRecentCallDetailRecords to obtain the list of recent call detail records for agents mapped to the current Resource Access Management (RAM) user under the specified instance.
       *
       * @param request ListRecentCallDetailRecordsRequest
       * @return ListRecentCallDetailRecordsResponse
       */
      Models::ListRecentCallDetailRecordsResponse listRecentCallDetailRecords(const Models::ListRecentCallDetailRecordsRequest &request);

      /**
       * @summary You can invoke ListRoles to obtain all roles under a specified instance.
       *
       * @param request ListRolesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRolesResponse
       */
      Models::ListRolesResponse listRolesWithOptions(const Models::ListRolesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke ListRoles to obtain all roles under a specified instance.
       *
       * @param request ListRolesRequest
       * @return ListRolesResponse
       */
      Models::ListRolesResponse listRoles(const Models::ListRolesRequest &request);

      /**
       * @deprecated OpenAPI ListSkillGroupStates is deprecated, please use CCC::2020-07-01::ListRealtimeSkillGroupStates instead.
       *
       * @summary You can invoke the ListSkillgroupStates API to obtain the status list of specified skill groups under a specified instance. This API is only available to specific Users, and other Customers are not recommended to invoke it.
       *
       * @param request ListSkillGroupStatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSkillGroupStatesResponse
       */
      Models::ListSkillGroupStatesResponse listSkillGroupStatesWithOptions(const Models::ListSkillGroupStatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ListSkillGroupStates is deprecated, please use CCC::2020-07-01::ListRealtimeSkillGroupStates instead.
       *
       * @summary You can invoke the ListSkillgroupStates API to obtain the status list of specified skill groups under a specified instance. This API is only available to specific Users, and other Customers are not recommended to invoke it.
       *
       * @param request ListSkillGroupStatesRequest
       * @return ListSkillGroupStatesResponse
       */
      Models::ListSkillGroupStatesResponse listSkillGroupStates(const Models::ListSkillGroupStatesRequest &request);

      /**
       * @deprecated OpenAPI ListSkillGroupSummaryReportsSinceMidnight is deprecated, please use CCC::2020-07-01::ListHistoricalSkillGroupReport instead.
       *
       * @summary The `ListSkillgroupSummaryReportsSinceMidnight` operation retrieves historical summary reports, filtered by specified conditions, for skill groups in a specified instance. The report contains data from 00:00 (midnight) today to the time of the request. This operation is available to specific users only.
       *
       * @param request ListSkillGroupSummaryReportsSinceMidnightRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSkillGroupSummaryReportsSinceMidnightResponse
       */
      Models::ListSkillGroupSummaryReportsSinceMidnightResponse listSkillGroupSummaryReportsSinceMidnightWithOptions(const Models::ListSkillGroupSummaryReportsSinceMidnightRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ListSkillGroupSummaryReportsSinceMidnight is deprecated, please use CCC::2020-07-01::ListHistoricalSkillGroupReport instead.
       *
       * @summary The `ListSkillgroupSummaryReportsSinceMidnight` operation retrieves historical summary reports, filtered by specified conditions, for skill groups in a specified instance. The report contains data from 00:00 (midnight) today to the time of the request. This operation is available to specific users only.
       *
       * @param request ListSkillGroupSummaryReportsSinceMidnightRequest
       * @return ListSkillGroupSummaryReportsSinceMidnightResponse
       */
      Models::ListSkillGroupSummaryReportsSinceMidnightResponse listSkillGroupSummaryReportsSinceMidnight(const Models::ListSkillGroupSummaryReportsSinceMidnightRequest &request);

      /**
       * @summary You can invoke ListSkillGroups to obtain the list of skill groups under a specified instance.
       *
       * @param request ListSkillGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSkillGroupsResponse
       */
      Models::ListSkillGroupsResponse listSkillGroupsWithOptions(const Models::ListSkillGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke ListSkillGroups to obtain the list of skill groups under a specified instance.
       *
       * @param request ListSkillGroupsRequest
       * @return ListSkillGroupsResponse
       */
      Models::ListSkillGroupsResponse listSkillGroups(const Models::ListSkillGroupsRequest &request);

      /**
       * @summary You can use this API to retrieve the list of skill levels for skill groups associated with a specified agent under a specified instance. You can also use this API to query the list of skill groups that the agent can be associated with but is not currently associated with.
       *
       * @param request ListSkillLevelsOfUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSkillLevelsOfUserResponse
       */
      Models::ListSkillLevelsOfUserResponse listSkillLevelsOfUserWithOptions(const Models::ListSkillLevelsOfUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can use this API to retrieve the list of skill levels for skill groups associated with a specified agent under a specified instance. You can also use this API to query the list of skill groups that the agent can be associated with but is not currently associated with.
       *
       * @param request ListSkillLevelsOfUserRequest
       * @return ListSkillLevelsOfUserResponse
       */
      Models::ListSkillLevelsOfUserResponse listSkillLevelsOfUser(const Models::ListSkillLevelsOfUserRequest &request);

      /**
       * @summary Queries the details of SMS configurations.
       *
       * @param request ListSmsMetadataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSmsMetadataResponse
       */
      Models::ListSmsMetadataResponse listSmsMetadataWithOptions(const Models::ListSmsMetadataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of SMS configurations.
       *
       * @param request ListSmsMetadataRequest
       * @return ListSmsMetadataResponse
       */
      Models::ListSmsMetadataResponse listSmsMetadata(const Models::ListSmsMetadataRequest &request);

      /**
       * @param request ListTicketTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTicketTasksResponse
       */
      Models::ListTicketTasksResponse listTicketTasksWithOptions(const Models::ListTicketTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListTicketTasksRequest
       * @return ListTicketTasksResponse
       */
      Models::ListTicketTasksResponse listTicketTasks(const Models::ListTicketTasksRequest &request);

      /**
       * @summary Retrieves a list of ticket templates.
       *
       * @param request ListTicketTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTicketTemplatesResponse
       */
      Models::ListTicketTemplatesResponse listTicketTemplatesWithOptions(const Models::ListTicketTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of ticket templates.
       *
       * @param request ListTicketTemplatesRequest
       * @return ListTicketTemplatesResponse
       */
      Models::ListTicketTemplatesResponse listTicketTemplates(const Models::ListTicketTemplatesRequest &request);

      /**
       * @summary Retrieves a list of tickets for an instance.
       *
       * @param request ListTicketsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTicketsResponse
       */
      Models::ListTicketsResponse listTicketsWithOptions(const Models::ListTicketsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of tickets for an instance.
       *
       * @param request ListTicketsRequest
       * @return ListTicketsResponse
       */
      Models::ListTicketsResponse listTickets(const Models::ListTicketsRequest &request);

      /**
       * @summary You can invoke ListUnassignedNumbers to obtain the list of numbers under your Alibaba Cloud account that have not been assigned to an instance.
       *
       * @param request ListUnassignedNumbersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUnassignedNumbersResponse
       */
      Models::ListUnassignedNumbersResponse listUnassignedNumbersWithOptions(const Models::ListUnassignedNumbersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke ListUnassignedNumbers to obtain the list of numbers under your Alibaba Cloud account that have not been assigned to an instance.
       *
       * @param request ListUnassignedNumbersRequest
       * @return ListUnassignedNumbersResponse
       */
      Models::ListUnassignedNumbersResponse listUnassignedNumbers(const Models::ListUnassignedNumbersRequest &request);

      /**
       * @summary You can invoke the ListUserLevelsOfSkillGroup API to retrieve the list of agent skill levels under a specified skill group in a given instance. You can also use this API to retrieve the list of agents who can be associated with but are not currently associated with the specified skill group.
       *
       * @param request ListUserLevelsOfSkillGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserLevelsOfSkillGroupResponse
       */
      Models::ListUserLevelsOfSkillGroupResponse listUserLevelsOfSkillGroupWithOptions(const Models::ListUserLevelsOfSkillGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke the ListUserLevelsOfSkillGroup API to retrieve the list of agent skill levels under a specified skill group in a given instance. You can also use this API to retrieve the list of agents who can be associated with but are not currently associated with the specified skill group.
       *
       * @param request ListUserLevelsOfSkillGroupRequest
       * @return ListUserLevelsOfSkillGroupResponse
       */
      Models::ListUserLevelsOfSkillGroupResponse listUserLevelsOfSkillGroup(const Models::ListUserLevelsOfSkillGroupRequest &request);

      /**
       * @summary Invoke ListUsers to obtain the agent list under a specified instance.
       *
       * @param request ListUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUsersResponse
       */
      Models::ListUsersResponse listUsersWithOptions(const Models::ListUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke ListUsers to obtain the agent list under a specified instance.
       *
       * @param request ListUsersRequest
       * @return ListUsersResponse
       */
      Models::ListUsersResponse listUsers(const Models::ListUsersRequest &request);

      /**
       * @summary You can use ListVisitorChatMessages to retrieve visitor chat records.
       *
       * @param request ListVisitorChatMessagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVisitorChatMessagesResponse
       */
      Models::ListVisitorChatMessagesResponse listVisitorChatMessagesWithOptions(const Models::ListVisitorChatMessagesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can use ListVisitorChatMessages to retrieve visitor chat records.
       *
       * @param request ListVisitorChatMessagesRequest
       * @return ListVisitorChatMessagesResponse
       */
      Models::ListVisitorChatMessagesResponse listVisitorChatMessages(const Models::ListVisitorChatMessagesRequest &request);

      /**
       * @summary You can call the ListVoicemails operation to retrieve a list of voicemails for a specified instance.
       *
       * @param request ListVoicemailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVoicemailsResponse
       */
      Models::ListVoicemailsResponse listVoicemailsWithOptions(const Models::ListVoicemailsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the ListVoicemails operation to retrieve a list of voicemails for a specified instance.
       *
       * @param request ListVoicemailsRequest
       * @return ListVoicemailsResponse
       */
      Models::ListVoicemailsResponse listVoicemails(const Models::ListVoicemailsRequest &request);

      /**
       * @summary The ListWaitingChats operation allows agents to retrieve chats that are waiting in a queue to be assigned or claimed.
       *
       * @param request ListWaitingChatsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWaitingChatsResponse
       */
      Models::ListWaitingChatsResponse listWaitingChatsWithOptions(const Models::ListWaitingChatsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The ListWaitingChats operation allows agents to retrieve chats that are waiting in a queue to be assigned or claimed.
       *
       * @param request ListWaitingChatsRequest
       * @return ListWaitingChatsResponse
       */
      Models::ListWaitingChatsResponse listWaitingChats(const Models::ListWaitingChatsRequest &request);

      /**
       * @summary You can invoke MakeCall to initiate a call. The callee can be an internal agent or an external customer.
       *
       * @param request MakeCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MakeCallResponse
       */
      Models::MakeCallResponse makeCallWithOptions(const Models::MakeCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke MakeCall to initiate a call. The callee can be an internal agent or an external customer.
       *
       * @param request MakeCallRequest
       * @return MakeCallResponse
       */
      Models::MakeCallResponse makeCall(const Models::MakeCallRequest &request);

      /**
       * @summary You can invoke ModifyAudioFile to modify the audio file associated with a specified audio resource ID under a given instance. You can update the audio file name, display name, and the OSS key of the audio file.
       *
       * @param request ModifyAudioFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAudioFileResponse
       */
      Models::ModifyAudioFileResponse modifyAudioFileWithOptions(const Models::ModifyAudioFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke ModifyAudioFile to modify the audio file associated with a specified audio resource ID under a given instance. You can update the audio file name, display name, and the OSS key of the audio file.
       *
       * @param request ModifyAudioFileRequest
       * @return ModifyAudioFileResponse
       */
      Models::ModifyAudioFileResponse modifyAudioFile(const Models::ModifyAudioFileRequest &request);

      /**
       * @summary Modifies the calling numbers for a batch prediction outbound campaign.
       *
       * @param tmpReq ModifyCampaignNumbersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCampaignNumbersResponse
       */
      Models::ModifyCampaignNumbersResponse modifyCampaignNumbersWithOptions(const Models::ModifyCampaignNumbersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the calling numbers for a batch prediction outbound campaign.
       *
       * @param request ModifyCampaignNumbersRequest
       * @return ModifyCampaignNumbersResponse
       */
      Models::ModifyCampaignNumbersResponse modifyCampaignNumbers(const Models::ModifyCampaignNumbersRequest &request);

      /**
       * @summary You can invoke ModifyCustomCallTagging to modify the description and attached number tags of an inbound number mark for a specified number under a specified instance.
       *
       * @param request ModifyCustomCallTaggingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCustomCallTaggingResponse
       */
      Models::ModifyCustomCallTaggingResponse modifyCustomCallTaggingWithOptions(const Models::ModifyCustomCallTaggingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke ModifyCustomCallTagging to modify the description and attached number tags of an inbound number mark for a specified number under a specified instance.
       *
       * @param request ModifyCustomCallTaggingRequest
       * @return ModifyCustomCallTaggingResponse
       */
      Models::ModifyCustomCallTaggingResponse modifyCustomCallTagging(const Models::ModifyCustomCallTaggingRequest &request);

      /**
       * @summary You can invoke ModifyInstance to modify a Cloud Contact Center instance.
       *
       * @param request ModifyInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceResponse
       */
      Models::ModifyInstanceResponse modifyInstanceWithOptions(const Models::ModifyInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke ModifyInstance to modify a Cloud Contact Center instance.
       *
       * @param request ModifyInstanceRequest
       * @return ModifyInstanceResponse
       */
      Models::ModifyInstanceResponse modifyInstance(const Models::ModifyInstanceRequest &request);

      /**
       * @summary You can invoke ModifyPhoneNumber to modify the information of a specified phone number under a specified instance, primarily to update the number\\"s usage and the attached contact flow ID.
       *
       * @param request ModifyPhoneNumberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyPhoneNumberResponse
       */
      Models::ModifyPhoneNumberResponse modifyPhoneNumberWithOptions(const Models::ModifyPhoneNumberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke ModifyPhoneNumber to modify the information of a specified phone number under a specified instance, primarily to update the number\\"s usage and the attached contact flow ID.
       *
       * @param request ModifyPhoneNumberRequest
       * @return ModifyPhoneNumberResponse
       */
      Models::ModifyPhoneNumberResponse modifyPhoneNumber(const Models::ModifyPhoneNumberRequest &request);

      /**
       * @summary You can invoke ModifySkillGroup to modify the information of a skill group associated with a specified skill group ID under a specified instance, primarily updating the skill group\\"s display name and description.
       *
       * @param request ModifySkillGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySkillGroupResponse
       */
      Models::ModifySkillGroupResponse modifySkillGroupWithOptions(const Models::ModifySkillGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke ModifySkillGroup to modify the information of a skill group associated with a specified skill group ID under a specified instance, primarily updating the skill group\\"s display name and description.
       *
       * @param request ModifySkillGroupRequest
       * @return ModifySkillGroupResponse
       */
      Models::ModifySkillGroupResponse modifySkillGroup(const Models::ModifySkillGroupRequest &request);

      /**
       * @summary Modify the skill level of a specified agent in one or more skill groups under a specified instance.
       *
       * @param request ModifySkillLevelsOfUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySkillLevelsOfUserResponse
       */
      Models::ModifySkillLevelsOfUserResponse modifySkillLevelsOfUserWithOptions(const Models::ModifySkillLevelsOfUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify the skill level of a specified agent in one or more skill groups under a specified instance.
       *
       * @param request ModifySkillLevelsOfUserRequest
       * @return ModifySkillLevelsOfUserResponse
       */
      Models::ModifySkillLevelsOfUserResponse modifySkillLevelsOfUser(const Models::ModifySkillLevelsOfUserRequest &request);

      /**
       * @summary You can invoke ModifyUser to modify the information of a specified agent under a specified instance. You can modify the phone number, work mode, role, and agent ID.
       *
       * @param request ModifyUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyUserResponse
       */
      Models::ModifyUserResponse modifyUserWithOptions(const Models::ModifyUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke ModifyUser to modify the information of a specified agent under a specified instance. You can modify the phone number, work mode, role, and agent ID.
       *
       * @param request ModifyUserRequest
       * @return ModifyUserResponse
       */
      Models::ModifyUserResponse modifyUser(const Models::ModifyUserRequest &request);

      /**
       * @summary You can invoke ModifyUserLevelsOfSkillGroup to modify the skill levels of one or more agents under a specified skill group in a specified instance.
       *
       * @param request ModifyUserLevelsOfSkillGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyUserLevelsOfSkillGroupResponse
       */
      Models::ModifyUserLevelsOfSkillGroupResponse modifyUserLevelsOfSkillGroupWithOptions(const Models::ModifyUserLevelsOfSkillGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke ModifyUserLevelsOfSkillGroup to modify the skill levels of one or more agents under a specified skill group in a specified instance.
       *
       * @param request ModifyUserLevelsOfSkillGroupRequest
       * @return ModifyUserLevelsOfSkillGroupResponse
       */
      Models::ModifyUserLevelsOfSkillGroupResponse modifyUserLevelsOfSkillGroup(const Models::ModifyUserLevelsOfSkillGroupRequest &request);

      /**
       * @summary You can invoke MonitorCall to listen to a call associated with a specified call ID under a specified instance. The call must be in a state where both the agent and the customer are normally connected, and the agent initiating the listening must have permission to monitor the target agent.
       *
       * @param request MonitorCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MonitorCallResponse
       */
      Models::MonitorCallResponse monitorCallWithOptions(const Models::MonitorCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke MonitorCall to listen to a call associated with a specified call ID under a specified instance. The call must be in a state where both the agent and the customer are normally connected, and the agent initiating the listening must have permission to monitor the target agent.
       *
       * @param request MonitorCallRequest
       * @return MonitorCallResponse
       */
      Models::MonitorCallResponse monitorCall(const Models::MonitorCallRequest &request);

      /**
       * @summary You can invoke MuteCall to mute the call associated with a specified call ID under a specified instance. This operation can only be invoked by an agent who is in a talking state, and the agent can only mute themselves. After the agent mutes themselves, the customer will no longer hear the agent\\"s voice.
       *
       * @param request MuteCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MuteCallResponse
       */
      Models::MuteCallResponse muteCallWithOptions(const Models::MuteCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke MuteCall to mute the call associated with a specified call ID under a specified instance. This operation can only be invoked by an agent who is in a talking state, and the agent can only mute themselves. After the agent mutes themselves, the customer will no longer hear the agent\\"s voice.
       *
       * @param request MuteCallRequest
       * @return MuteCallResponse
       */
      Models::MuteCallResponse muteCall(const Models::MuteCallRequest &request);

      /**
       * @summary Invoke PauseCampaign to pause the predictive outbound calling Activity corresponding to the specified ID under the specified instance.
       *
       * @param request PauseCampaignRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PauseCampaignResponse
       */
      Models::PauseCampaignResponse pauseCampaignWithOptions(const Models::PauseCampaignRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke PauseCampaign to pause the predictive outbound calling Activity corresponding to the specified ID under the specified instance.
       *
       * @param request PauseCampaignRequest
       * @return PauseCampaignResponse
       */
      Models::PauseCampaignResponse pauseCampaign(const Models::PauseCampaignRequest &request);

      /**
       * @summary You can invoke PickOutboundNumbers to select an appropriate caller number based on the provided callee number. The number selection logic is controlled by an Intelligent algorithm.
       *
       * @param request PickOutboundNumbersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PickOutboundNumbersResponse
       */
      Models::PickOutboundNumbersResponse pickOutboundNumbersWithOptions(const Models::PickOutboundNumbersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke PickOutboundNumbers to select an appropriate caller number based on the provided callee number. The number selection logic is controlled by an Intelligent algorithm.
       *
       * @param request PickOutboundNumbersRequest
       * @return PickOutboundNumbersResponse
       */
      Models::PickOutboundNumbersResponse pickOutboundNumbers(const Models::PickOutboundNumbersRequest &request);

      /**
       * @summary Polls the agent status of a specified agent under a specified instance. This operation is typically invoked by the frontend agent Workbench to synchronize agent status.
       *
       * @param request PollUserStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PollUserStatusResponse
       */
      Models::PollUserStatusResponse pollUserStatusWithOptions(const Models::PollUserStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Polls the agent status of a specified agent under a specified instance. This operation is typically invoked by the frontend agent Workbench to synchronize agent status.
       *
       * @param request PollUserStatusRequest
       * @return PollUserStatusResponse
       */
      Models::PollUserStatusResponse pollUserStatus(const Models::PollUserStatusRequest &request);

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
       * @summary Publishes a contact flow.
       *
       * @param request PublishContactFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishContactFlowResponse
       */
      Models::PublishContactFlowResponse publishContactFlowWithOptions(const Models::PublishContactFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Publishes a contact flow.
       *
       * @param request PublishContactFlowRequest
       * @return PublishContactFlowResponse
       */
      Models::PublishContactFlowResponse publishContactFlow(const Models::PublishContactFlowRequest &request);

      /**
       * @summary You can invoke ReadyForService to make a specified agent under a specified instance ready. After becoming ready, the agent enters the idle status.
       *
       * @param request ReadyForServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReadyForServiceResponse
       */
      Models::ReadyForServiceResponse readyForServiceWithOptions(const Models::ReadyForServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke ReadyForService to make a specified agent under a specified instance ready. After becoming ready, the agent enters the idle status.
       *
       * @param request ReadyForServiceRequest
       * @return ReadyForServiceResponse
       */
      Models::ReadyForServiceResponse readyForService(const Models::ReadyForServiceRequest &request);

      /**
       * @summary Redial the number in the desensitized call record
       *
       * @param request RedialCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RedialCallResponse
       */
      Models::RedialCallResponse redialCallWithOptions(const Models::RedialCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Redial the number in the desensitized call record
       *
       * @param request RedialCallRequest
       * @return RedialCallResponse
       */
      Models::RedialCallResponse redialCall(const Models::RedialCallRequest &request);

      /**
       * @summary Registers a Session Initiation Protocol (SIP) device with a specified agent in an instance. A SIP device can be a physical SIP phone or a softphone.
       *
       * @param request RegisterDeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RegisterDeviceResponse
       */
      Models::RegisterDeviceResponse registerDeviceWithOptions(const Models::RegisterDeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Registers a Session Initiation Protocol (SIP) device with a specified agent in an instance. A SIP device can be a physical SIP phone or a softphone.
       *
       * @param request RegisterDeviceRequest
       * @return RegisterDeviceResponse
       */
      Models::RegisterDeviceResponse registerDevice(const Models::RegisterDeviceRequest &request);

      /**
       * @summary Registers one or more SIP devices to specified agents in an instance. A SIP device can be a SIP phone or a SIP softphone.
       *
       * @param request RegisterDevicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RegisterDevicesResponse
       */
      Models::RegisterDevicesResponse registerDevicesWithOptions(const Models::RegisterDevicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Registers one or more SIP devices to specified agents in an instance. A SIP device can be a SIP phone or a SIP softphone.
       *
       * @param request RegisterDevicesRequest
       * @return RegisterDevicesResponse
       */
      Models::RegisterDevicesResponse registerDevices(const Models::RegisterDevicesRequest &request);

      /**
       * @summary Rejects a chat assigned to an agent.
       *
       * @param request RejectChatRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RejectChatResponse
       */
      Models::RejectChatResponse rejectChatWithOptions(const Models::RejectChatRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Rejects a chat assigned to an agent.
       *
       * @param request RejectChatRequest
       * @return RejectChatResponse
       */
      Models::RejectChatResponse rejectChat(const Models::RejectChatRequest &request);

      /**
       * @summary Use the RejectTicket operation to reject a ticket. The ticket creator can add information to a rejected ticket and then resubmit it.
       *
       * @param request RejectTicketRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RejectTicketResponse
       */
      Models::RejectTicketResponse rejectTicketWithOptions(const Models::RejectTicketRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Use the RejectTicket operation to reject a ticket. The ticket creator can add information to a rejected ticket and then resubmit it.
       *
       * @param request RejectTicketRequest
       * @return RejectTicketResponse
       */
      Models::RejectTicketResponse rejectTicket(const Models::RejectTicketRequest &request);

      /**
       * @summary You can invoke ReleaseCall to hang up the call associated with a specified call ID under a specified instance. The invoker must be an agent and currently in a call.
       *
       * @param request ReleaseCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseCallResponse
       */
      Models::ReleaseCallResponse releaseCallWithOptions(const Models::ReleaseCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke ReleaseCall to hang up the call associated with a specified call ID under a specified instance. The invoker must be an agent and currently in a call.
       *
       * @param request ReleaseCallRequest
       * @return ReleaseCallResponse
       */
      Models::ReleaseCallResponse releaseCall(const Models::ReleaseCallRequest &request);

      /**
       * @summary The ReleaseChat operation ends the current chat.
       *
       * @param request ReleaseChatRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseChatResponse
       */
      Models::ReleaseChatResponse releaseChatWithOptions(const Models::ReleaseChatRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The ReleaseChat operation ends the current chat.
       *
       * @param request ReleaseChatRequest
       * @return ReleaseChatResponse
       */
      Models::ReleaseChatResponse releaseChat(const Models::ReleaseChatRequest &request);

      /**
       * @summary Removes the blacklist tag from a specified phone number.
       *
       * @param request RemoveBlacklistCallTaggingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveBlacklistCallTaggingResponse
       */
      Models::RemoveBlacklistCallTaggingResponse removeBlacklistCallTaggingWithOptions(const Models::RemoveBlacklistCallTaggingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes the blacklist tag from a specified phone number.
       *
       * @param request RemoveBlacklistCallTaggingRequest
       * @return RemoveBlacklistCallTaggingResponse
       */
      Models::RemoveBlacklistCallTaggingResponse removeBlacklistCallTagging(const Models::RemoveBlacklistCallTaggingRequest &request);

      /**
       * @summary You can invoke RemoveDoNotCallNumbers to delete one or more Do Not Call number configuration items under a specified instance.
       *
       * @param request RemoveDoNotCallNumbersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveDoNotCallNumbersResponse
       */
      Models::RemoveDoNotCallNumbersResponse removeDoNotCallNumbersWithOptions(const Models::RemoveDoNotCallNumbersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke RemoveDoNotCallNumbers to delete one or more Do Not Call number configuration items under a specified instance.
       *
       * @param request RemoveDoNotCallNumbersRequest
       * @return RemoveDoNotCallNumbersResponse
       */
      Models::RemoveDoNotCallNumbersResponse removeDoNotCallNumbers(const Models::RemoveDoNotCallNumbersRequest &request);

      /**
       * @summary You can invoke RemovePersonalNumbersFromUser to delete one or more personal outbound numbers associated with a specified agent under a specified instance.
       *
       * @param request RemovePersonalNumbersFromUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemovePersonalNumbersFromUserResponse
       */
      Models::RemovePersonalNumbersFromUserResponse removePersonalNumbersFromUserWithOptions(const Models::RemovePersonalNumbersFromUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke RemovePersonalNumbersFromUser to delete one or more personal outbound numbers associated with a specified agent under a specified instance.
       *
       * @param request RemovePersonalNumbersFromUserRequest
       * @return RemovePersonalNumbersFromUserResponse
       */
      Models::RemovePersonalNumbersFromUserResponse removePersonalNumbersFromUser(const Models::RemovePersonalNumbersFromUserRequest &request);

      /**
       * @summary You can invoke RemovePhoneNumberFromSkillGroups to delete the binding relationship between a specified phone number and one or more skill groups under a given instance. This operation removes only the association between the phone number and the skill groups, not the actual phone number itself.
       *
       * @param request RemovePhoneNumberFromSkillGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemovePhoneNumberFromSkillGroupsResponse
       */
      Models::RemovePhoneNumberFromSkillGroupsResponse removePhoneNumberFromSkillGroupsWithOptions(const Models::RemovePhoneNumberFromSkillGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke RemovePhoneNumberFromSkillGroups to delete the binding relationship between a specified phone number and one or more skill groups under a given instance. This operation removes only the association between the phone number and the skill groups, not the actual phone number itself.
       *
       * @param request RemovePhoneNumberFromSkillGroupsRequest
       * @return RemovePhoneNumberFromSkillGroupsResponse
       */
      Models::RemovePhoneNumberFromSkillGroupsResponse removePhoneNumberFromSkillGroups(const Models::RemovePhoneNumberFromSkillGroupsRequest &request);

      /**
       * @summary Removes one or more numbers from an instance. This action disassociates the numbers from the instance but does not permanently delete them. It also disassociates all associated resources, such as skill groups, contact flows, and agents.
       *
       * @param request RemovePhoneNumbersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemovePhoneNumbersResponse
       */
      Models::RemovePhoneNumbersResponse removePhoneNumbersWithOptions(const Models::RemovePhoneNumbersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes one or more numbers from an instance. This action disassociates the numbers from the instance but does not permanently delete them. It also disassociates all associated resources, such as skill groups, contact flows, and agents.
       *
       * @param request RemovePhoneNumbersRequest
       * @return RemovePhoneNumbersResponse
       */
      Models::RemovePhoneNumbersResponse removePhoneNumbers(const Models::RemovePhoneNumbersRequest &request);

      /**
       * @summary You can invoke RemovePhoneNumbersFromSkillGroup to delete the association between one or more phone numbers and a specified skill group under a given instance.
       *
       * @param request RemovePhoneNumbersFromSkillGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemovePhoneNumbersFromSkillGroupResponse
       */
      Models::RemovePhoneNumbersFromSkillGroupResponse removePhoneNumbersFromSkillGroupWithOptions(const Models::RemovePhoneNumbersFromSkillGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke RemovePhoneNumbersFromSkillGroup to delete the association between one or more phone numbers and a specified skill group under a given instance.
       *
       * @param request RemovePhoneNumbersFromSkillGroupRequest
       * @return RemovePhoneNumbersFromSkillGroupResponse
       */
      Models::RemovePhoneNumbersFromSkillGroupResponse removePhoneNumbersFromSkillGroup(const Models::RemovePhoneNumbersFromSkillGroupRequest &request);

      /**
       * @summary You can invoke RemoveSkillGroupsFromUser to delete the association between one or more skill groups and a specified agent under a specified instance.
       *
       * @param request RemoveSkillGroupsFromUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveSkillGroupsFromUserResponse
       */
      Models::RemoveSkillGroupsFromUserResponse removeSkillGroupsFromUserWithOptions(const Models::RemoveSkillGroupsFromUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke RemoveSkillGroupsFromUser to delete the association between one or more skill groups and a specified agent under a specified instance.
       *
       * @param request RemoveSkillGroupsFromUserRequest
       * @return RemoveSkillGroupsFromUserResponse
       */
      Models::RemoveSkillGroupsFromUserResponse removeSkillGroupsFromUser(const Models::RemoveSkillGroupsFromUserRequest &request);

      /**
       * @summary You can invoke RemoveUsers to delete one or more agents from a specified instance. This operation only detaches the RAM accounts from the instance and removes the agents mapped to those RAM accounts from the instance. It does not delete the RAM accounts themselves.
       *
       * @param request RemoveUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveUsersResponse
       */
      Models::RemoveUsersResponse removeUsersWithOptions(const Models::RemoveUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke RemoveUsers to delete one or more agents from a specified instance. This operation only detaches the RAM accounts from the instance and removes the agents mapped to those RAM accounts from the instance. It does not delete the RAM accounts themselves.
       *
       * @param request RemoveUsersRequest
       * @return RemoveUsersResponse
       */
      Models::RemoveUsersResponse removeUsers(const Models::RemoveUsersRequest &request);

      /**
       * @summary You can invoke RemoveUsersFromSkillGroup to delete the association between one or more agents and a specified skill group under a specified instance. This operation only removes the association between the skill group and the agents and does not delete the agents themselves.
       *
       * @param request RemoveUsersFromSkillGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveUsersFromSkillGroupResponse
       */
      Models::RemoveUsersFromSkillGroupResponse removeUsersFromSkillGroupWithOptions(const Models::RemoveUsersFromSkillGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke RemoveUsersFromSkillGroup to delete the association between one or more agents and a specified skill group under a specified instance. This operation only removes the association between the skill group and the agents and does not delete the agents themselves.
       *
       * @param request RemoveUsersFromSkillGroupRequest
       * @return RemoveUsersFromSkillGroupResponse
       */
      Models::RemoveUsersFromSkillGroupResponse removeUsersFromSkillGroup(const Models::RemoveUsersFromSkillGroupRequest &request);

      /**
       * @summary Resets the state of a specific agent in a specific instance.
       *
       * @param request ResetAgentStateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetAgentStateResponse
       */
      Models::ResetAgentStateResponse resetAgentStateWithOptions(const Models::ResetAgentStateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets the state of a specific agent in a specific instance.
       *
       * @param request ResetAgentStateRequest
       * @return ResetAgentStateResponse
       */
      Models::ResetAgentStateResponse resetAgentState(const Models::ResetAgentStateRequest &request);

      /**
       * @summary Invoke ResetUserPassword to reset the logon password of a specified agent under a specified instance. In practice, agents do not have logon passwords; this operation actually modifies the logon password of the RAM account associated with the agent. This is typically used in scenarios where a customer service representative forgets the logon password of their RAM account.
       *
       * @param request ResetUserPasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetUserPasswordResponse
       */
      Models::ResetUserPasswordResponse resetUserPasswordWithOptions(const Models::ResetUserPasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke ResetUserPassword to reset the logon password of a specified agent under a specified instance. In practice, agents do not have logon passwords; this operation actually modifies the logon password of the RAM account associated with the agent. This is typically used in scenarios where a customer service representative forgets the logon password of their RAM account.
       *
       * @param request ResetUserPasswordRequest
       * @return ResetUserPasswordResponse
       */
      Models::ResetUserPasswordResponse resetUserPassword(const Models::ResetUserPasswordRequest &request);

      /**
       * @summary Restores call recordings for the specified instance.
       *
       * @param request RestoreArchivedRecordingsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestoreArchivedRecordingsResponse
       */
      Models::RestoreArchivedRecordingsResponse restoreArchivedRecordingsWithOptions(const Models::RestoreArchivedRecordingsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restores call recordings for the specified instance.
       *
       * @param request RestoreArchivedRecordingsRequest
       * @return RestoreArchivedRecordingsResponse
       */
      Models::RestoreArchivedRecordingsResponse restoreArchivedRecordings(const Models::RestoreArchivedRecordingsRequest &request);

      /**
       * @summary You can use the ResubmitTicket API to resubmit a rejected or returned ticket.
       *
       * @param request ResubmitTicketRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResubmitTicketResponse
       */
      Models::ResubmitTicketResponse resubmitTicketWithOptions(const Models::ResubmitTicketRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can use the ResubmitTicket API to resubmit a rejected or returned ticket.
       *
       * @param request ResubmitTicketRequest
       * @return ResubmitTicketResponse
       */
      Models::ResubmitTicketResponse resubmitTicket(const Models::ResubmitTicketRequest &request);

      /**
       * @summary Invoke ResumeCampaign to recover the predictive outbound calling Activity corresponding to the specified ID under the specified instance.
       *
       * @param request ResumeCampaignRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResumeCampaignResponse
       */
      Models::ResumeCampaignResponse resumeCampaignWithOptions(const Models::ResumeCampaignRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke ResumeCampaign to recover the predictive outbound calling Activity corresponding to the specified ID under the specified instance.
       *
       * @param request ResumeCampaignRequest
       * @return ResumeCampaignResponse
       */
      Models::ResumeCampaignResponse resumeCampaign(const Models::ResumeCampaignRequest &request);

      /**
       * @summary You can invoke RetrieveCall to retrieve a call associated with a specified call ID under a specified instance. The call must be on hold for the retrieve operation to be performed.
       *
       * @param request RetrieveCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RetrieveCallResponse
       */
      Models::RetrieveCallResponse retrieveCallWithOptions(const Models::RetrieveCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke RetrieveCall to retrieve a call associated with a specified call ID under a specified instance. The call must be on hold for the retrieve operation to be performed.
       *
       * @param request RetrieveCallRequest
       * @return RetrieveCallResponse
       */
      Models::RetrieveCallResponse retrieveCall(const Models::RetrieveCallRequest &request);

      /**
       * @param request SaveDocumentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveDocumentResponse
       */
      Models::SaveDocumentResponse saveDocumentWithOptions(const Models::SaveDocumentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SaveDocumentRequest
       * @return SaveDocumentResponse
       */
      Models::SaveDocumentResponse saveDocument(const Models::SaveDocumentRequest &request);

      /**
       * @summary Invoke SaveRTCStatsV2 to report Web Real-Time Communication (WebRTC) voice transmission statistics information from the agent side. This API is not relevant for regular customers.
       *
       * @param request SaveRTCStatsV2Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveRTCStatsV2Response
       */
      Models::SaveRTCStatsV2Response saveRTCStatsV2WithOptions(const Models::SaveRTCStatsV2Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke SaveRTCStatsV2 to report Web Real-Time Communication (WebRTC) voice transmission statistics information from the agent side. This API is not relevant for regular customers.
       *
       * @param request SaveRTCStatsV2Request
       * @return SaveRTCStatsV2Response
       */
      Models::SaveRTCStatsV2Response saveRTCStatsV2(const Models::SaveRTCStatsV2Request &request);

      /**
       * @summary Invoke the SaveTerminalLog API to report agent-side log information. Regular customers do not need to be concerned with this API.
       *
       * @param request SaveTerminalLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveTerminalLogResponse
       */
      Models::SaveTerminalLogResponse saveTerminalLogWithOptions(const Models::SaveTerminalLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the SaveTerminalLog API to report agent-side log information. Regular customers do not need to be concerned with this API.
       *
       * @param request SaveTerminalLogRequest
       * @return SaveTerminalLogResponse
       */
      Models::SaveTerminalLogResponse saveTerminalLog(const Models::SaveTerminalLogRequest &request);

      /**
       * @summary Invoke the SaveWebRTCStats API to report Web Real-Time Communication (WebRTC) voice transmission statistics information from the agent side. Regular customers do not need to concern themselves with this API.
       *
       * @param request SaveWebRTCStatsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveWebRTCStatsResponse
       */
      Models::SaveWebRTCStatsResponse saveWebRTCStatsWithOptions(const Models::SaveWebRTCStatsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the SaveWebRTCStats API to report Web Real-Time Communication (WebRTC) voice transmission statistics information from the agent side. Regular customers do not need to concern themselves with this API.
       *
       * @param request SaveWebRTCStatsRequest
       * @return SaveWebRTCStatsResponse
       */
      Models::SaveWebRTCStatsResponse saveWebRTCStats(const Models::SaveWebRTCStatsRequest &request);

      /**
       * @summary Invoke the SaveWebRtcInfo API to report WebRTC call status information from the agent side, including call quality monitoring data, for backend statistics and monitoring. Customers do not need to concern themselves with this API.
       *
       * @param request SaveWebRtcInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveWebRtcInfoResponse
       */
      Models::SaveWebRtcInfoResponse saveWebRtcInfoWithOptions(const Models::SaveWebRtcInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the SaveWebRtcInfo API to report WebRTC call status information from the agent side, including call quality monitoring data, for backend statistics and monitoring. Customers do not need to concern themselves with this API.
       *
       * @param request SaveWebRtcInfoRequest
       * @return SaveWebRtcInfoResponse
       */
      Models::SaveWebRtcInfoResponse saveWebRtcInfo(const Models::SaveWebRtcInfoRequest &request);

      /**
       * @summary You can invoke SendDtmfSignaling to send DTMF keypress information during a call.
       *
       * @param request SendDtmfSignalingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendDtmfSignalingResponse
       */
      Models::SendDtmfSignalingResponse sendDtmfSignalingWithOptions(const Models::SendDtmfSignalingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke SendDtmfSignaling to send DTMF keypress information during a call.
       *
       * @param request SendDtmfSignalingRequest
       * @return SendDtmfSignalingResponse
       */
      Models::SendDtmfSignalingResponse sendDtmfSignaling(const Models::SendDtmfSignalingRequest &request);

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
       * @summary You can invoke SignInGroup to sign an agent into a specified skill group under a specified instance, which is the operation for publishing the agent online.
       *
       * @param request SignInGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SignInGroupResponse
       */
      Models::SignInGroupResponse signInGroupWithOptions(const Models::SignInGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke SignInGroup to sign an agent into a specified skill group under a specified instance, which is the operation for publishing the agent online.
       *
       * @param request SignInGroupRequest
       * @return SignInGroupResponse
       */
      Models::SignInGroupResponse signInGroup(const Models::SignInGroupRequest &request);

      /**
       * @summary You can call SignOutGroup to check out an agent from the skill group they are currently signed into, which is equivalent to performing an unpublish operation for the agent.
       *
       * @param request SignOutGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SignOutGroupResponse
       */
      Models::SignOutGroupResponse signOutGroupWithOptions(const Models::SignOutGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call SignOutGroup to check out an agent from the skill group they are currently signed into, which is equivalent to performing an unpublish operation for the agent.
       *
       * @param request SignOutGroupRequest
       * @return SignOutGroupResponse
       */
      Models::SignOutGroupResponse signOutGroup(const Models::SignOutGroupRequest &request);

      /**
       * @summary You can invoke StartBack2BackCall to initiate a back-to-back call.
       *
       * @description A back-to-back call differs from a traditional two-party call in that the caller does not directly call the callee. Instead, a Back-to-Back Agent is used. The Back-to-Back Agent first calls the caller, and after the connection is established, it calls the callee and then joins both parties into a single conference. In this mode, because all message streams of each call pass through the Back-to-Back Agent, the service provider (SP) can offer value-added services such as call timing, call recording, and number masking.
       *
       * @param request StartBack2BackCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartBack2BackCallResponse
       */
      Models::StartBack2BackCallResponse startBack2BackCallWithOptions(const Models::StartBack2BackCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke StartBack2BackCall to initiate a back-to-back call.
       *
       * @description A back-to-back call differs from a traditional two-party call in that the caller does not directly call the callee. Instead, a Back-to-Back Agent is used. The Back-to-Back Agent first calls the caller, and after the connection is established, it calls the callee and then joins both parties into a single conference. In this mode, because all message streams of each call pass through the Back-to-Back Agent, the service provider (SP) can offer value-added services such as call timing, call recording, and number masking.
       *
       * @param request StartBack2BackCallRequest
       * @return StartBack2BackCallResponse
       */
      Models::StartBack2BackCallResponse startBack2BackCall(const Models::StartBack2BackCallRequest &request);

      /**
       * @summary Starts a chat session.
       *
       * @param tmpReq StartChatRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartChatResponse
       */
      Models::StartChatResponse startChatWithOptions(const Models::StartChatRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a chat session.
       *
       * @param request StartChatRequest
       * @return StartChatResponse
       */
      Models::StartChatResponse startChat(const Models::StartChatRequest &request);

      /**
       * @summary You can invoke StartConference to initiate a conference.
       *
       * @param request StartConferenceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartConferenceResponse
       */
      Models::StartConferenceResponse startConferenceWithOptions(const Models::StartConferenceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke StartConference to initiate a conference.
       *
       * @param request StartConferenceRequest
       * @return StartConferenceResponse
       */
      Models::StartConferenceResponse startConference(const Models::StartConferenceRequest &request);

      /**
       * @summary Start editing a contact flow and generate a draft version.
       *
       * @param request StartEditContactFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartEditContactFlowResponse
       */
      Models::StartEditContactFlowResponse startEditContactFlowWithOptions(const Models::StartEditContactFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Start editing a contact flow and generate a draft version.
       *
       * @param request StartEditContactFlowRequest
       * @return StartEditContactFlowResponse
       */
      Models::StartEditContactFlowResponse startEditContactFlow(const Models::StartEditContactFlowRequest &request);

      /**
       * @summary Invoke StartPredictiveCall to initiate predictive outbound calling.
       *
       * @description In addition to supporting agents initiating outbound calls from the agent Workbench, Cloud Call Center also enables your Operational System backend to initiate outbound calls and transfer the call to an agent after it is answered. This allows you to seamlessly embed Cloud Call Center features into your Business Process.
       * For example, your Customer can enter their phone number on your WeChat Official Account and click a button to inquire about a product. Your backend system then invokes this API to call the Customer’s Phone. After the call is connected, the system plays back the message: “We have received your inquiry about our product via the Official Account. We are now connecting you to an advisor. Please wait.” The call is then transferred to an appropriate agent.
       * Compared with the DialEX API in version 1.0, this API offers greater flexibility in configuration. In addition to customizing the IVR for transfer-in, you can also pass custom parameters, which can be played back by voice within the IVR to support notification scenarios.
       *
       * @param request StartPredictiveCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartPredictiveCallResponse
       */
      Models::StartPredictiveCallResponse startPredictiveCallWithOptions(const Models::StartPredictiveCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke StartPredictiveCall to initiate predictive outbound calling.
       *
       * @description In addition to supporting agents initiating outbound calls from the agent Workbench, Cloud Call Center also enables your Operational System backend to initiate outbound calls and transfer the call to an agent after it is answered. This allows you to seamlessly embed Cloud Call Center features into your Business Process.
       * For example, your Customer can enter their phone number on your WeChat Official Account and click a button to inquire about a product. Your backend system then invokes this API to call the Customer’s Phone. After the call is connected, the system plays back the message: “We have received your inquiry about our product via the Official Account. We are now connecting you to an advisor. Please wait.” The call is then transferred to an appropriate agent.
       * Compared with the DialEX API in version 1.0, this API offers greater flexibility in configuration. In addition to customizing the IVR for transfer-in, you can also pass custom parameters, which can be played back by voice within the IVR to support notification scenarios.
       *
       * @param request StartPredictiveCallRequest
       * @return StartPredictiveCallResponse
       */
      Models::StartPredictiveCallResponse startPredictiveCall(const Models::StartPredictiveCallRequest &request);

      /**
       * @summary Starts a privacy call.
       *
       * @param request StartPrivacyCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartPrivacyCallResponse
       */
      Models::StartPrivacyCallResponse startPrivacyCallWithOptions(const Models::StartPrivacyCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a privacy call.
       *
       * @param request StartPrivacyCallRequest
       * @return StartPrivacyCallResponse
       */
      Models::StartPrivacyCallResponse startPrivacyCall(const Models::StartPrivacyCallRequest &request);

      /**
       * @summary Invoke SubmitCampaign to start the predictive outbound calling activity corresponding to the specified ID under the specified instance.
       *
       * @param request SubmitCampaignRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitCampaignResponse
       */
      Models::SubmitCampaignResponse submitCampaignWithOptions(const Models::SubmitCampaignRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke SubmitCampaign to start the predictive outbound calling activity corresponding to the specified ID under the specified instance.
       *
       * @param request SubmitCampaignRequest
       * @return SubmitCampaignResponse
       */
      Models::SubmitCampaignResponse submitCampaign(const Models::SubmitCampaignRequest &request);

      /**
       * @summary You can invoke SwitchToConference to switch the status of a specified call under a specified instance to a three-party conference. This is typically used in scenarios where a consultation is converted into a conference.
       *
       * @param request SwitchToConferenceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SwitchToConferenceResponse
       */
      Models::SwitchToConferenceResponse switchToConferenceWithOptions(const Models::SwitchToConferenceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke SwitchToConference to switch the status of a specified call under a specified instance to a three-party conference. This is typically used in scenarios where a consultation is converted into a conference.
       *
       * @param request SwitchToConferenceRequest
       * @return SwitchToConferenceResponse
       */
      Models::SwitchToConferenceResponse switchToConference(const Models::SwitchToConferenceRequest &request);

      /**
       * @summary You can invoke TakeBreak to set a specified agent in a specified instance to the break state.
       *
       * @param request TakeBreakRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TakeBreakResponse
       */
      Models::TakeBreakResponse takeBreakWithOptions(const Models::TakeBreakRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke TakeBreak to set a specified agent in a specified instance to the break state.
       *
       * @param request TakeBreakRequest
       * @return TakeBreakResponse
       */
      Models::TakeBreakResponse takeBreak(const Models::TakeBreakRequest &request);

      /**
       * @summary Closes a ticket.
       *
       * @param request TerminateTicketRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TerminateTicketResponse
       */
      Models::TerminateTicketResponse terminateTicketWithOptions(const Models::TerminateTicketRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Closes a ticket.
       *
       * @param request TerminateTicketRequest
       * @return TerminateTicketResponse
       */
      Models::TerminateTicketResponse terminateTicket(const Models::TerminateTicketRequest &request);

      /**
       * @summary You can call TransferTicketTask to transfer a ticket to another user.
       *
       * @param request TransferTicketTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TransferTicketTaskResponse
       */
      Models::TransferTicketTaskResponse transferTicketTaskWithOptions(const Models::TransferTicketTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call TransferTicketTask to transfer a ticket to another user.
       *
       * @param request TransferTicketTaskRequest
       * @return TransferTicketTaskResponse
       */
      Models::TransferTicketTaskResponse transferTicketTask(const Models::TransferTicketTaskRequest &request);

      /**
       * @summary [responses_200_schema_properties_Data_properties_UserContext_properties_UserState_type]string
       *
       * @param request UnmuteCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnmuteCallResponse
       */
      Models::UnmuteCallResponse unmuteCallWithOptions(const Models::UnmuteCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary [responses_200_schema_properties_Data_properties_UserContext_properties_UserState_type]string
       *
       * @param request UnmuteCallRequest
       * @return UnmuteCallResponse
       */
      Models::UnmuteCallResponse unmuteCall(const Models::UnmuteCallRequest &request);

      /**
       * @summary You can invoke UnregisterDevice to delete the device registration record of a specified agent under a specified instance. After deletion, the SIP phone or SIP softphone associated with the agent becomes inactive.
       *
       * @param request UnregisterDeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnregisterDeviceResponse
       */
      Models::UnregisterDeviceResponse unregisterDeviceWithOptions(const Models::UnregisterDeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke UnregisterDevice to delete the device registration record of a specified agent under a specified instance. After deletion, the SIP phone or SIP softphone associated with the agent becomes inactive.
       *
       * @param request UnregisterDeviceRequest
       * @return UnregisterDeviceResponse
       */
      Models::UnregisterDeviceResponse unregisterDevice(const Models::UnregisterDeviceRequest &request);

      /**
       * @summary Updates a call summary.
       *
       * @param request UpdateCallSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCallSummaryResponse
       */
      Models::UpdateCallSummaryResponse updateCallSummaryWithOptions(const Models::UpdateCallSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a call summary.
       *
       * @param request UpdateCallSummaryRequest
       * @return UpdateCallSummaryResponse
       */
      Models::UpdateCallSummaryResponse updateCallSummary(const Models::UpdateCallSummaryRequest &request);

      /**
       * @summary Updates outbound campaign parameters.
       *
       * @param request UpdateCampaignRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCampaignResponse
       */
      Models::UpdateCampaignResponse updateCampaignWithOptions(const Models::UpdateCampaignRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates outbound campaign parameters.
       *
       * @param request UpdateCampaignRequest
       * @return UpdateCampaignResponse
       */
      Models::UpdateCampaignResponse updateCampaign(const Models::UpdateCampaignRequest &request);

      /**
       * @summary You can use UpdateChatRoutingProfile to configure session transfers.
       *
       * @param request UpdateChatRoutingProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateChatRoutingProfileResponse
       */
      Models::UpdateChatRoutingProfileResponse updateChatRoutingProfileWithOptions(const Models::UpdateChatRoutingProfileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can use UpdateChatRoutingProfile to configure session transfers.
       *
       * @param request UpdateChatRoutingProfileRequest
       * @return UpdateChatRoutingProfileResponse
       */
      Models::UpdateChatRoutingProfileResponse updateChatRoutingProfile(const Models::UpdateChatRoutingProfileRequest &request);

      /**
       * @summary Use the UpdateConfigItems operation to add or modify configuration items for an instance, such as hiding the caller ID for inbound calls or allowing agents to hang up.
       *
       * @param request UpdateConfigItemsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateConfigItemsResponse
       */
      Models::UpdateConfigItemsResponse updateConfigItemsWithOptions(const Models::UpdateConfigItemsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Use the UpdateConfigItems operation to add or modify configuration items for an instance, such as hiding the caller ID for inbound calls or allowing agents to hang up.
       *
       * @param request UpdateConfigItemsRequest
       * @return UpdateConfigItemsResponse
       */
      Models::UpdateConfigItemsResponse updateConfigItems(const Models::UpdateConfigItemsRequest &request);

      /**
       * @param tmpReq UpdateSchemaPropertyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSchemaPropertyResponse
       */
      Models::UpdateSchemaPropertyResponse updateSchemaPropertyWithOptions(const Models::UpdateSchemaPropertyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateSchemaPropertyRequest
       * @return UpdateSchemaPropertyResponse
       */
      Models::UpdateSchemaPropertyResponse updateSchemaProperty(const Models::UpdateSchemaPropertyRequest &request);

      /**
       * @summary Use the UpdateSubscription operation to configure message subscriptions.
       *
       * @param request UpdateSubscriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSubscriptionResponse
       */
      Models::UpdateSubscriptionResponse updateSubscriptionWithOptions(const Models::UpdateSubscriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Use the UpdateSubscription operation to configure message subscriptions.
       *
       * @param request UpdateSubscriptionRequest
       * @return UpdateSubscriptionResponse
       */
      Models::UpdateSubscriptionResponse updateSubscription(const Models::UpdateSubscriptionRequest &request);

      /**
       * @summary UpdateTicket updates the content of a ticket.
       *
       * @param request UpdateTicketRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTicketResponse
       */
      Models::UpdateTicketResponse updateTicketWithOptions(const Models::UpdateTicketRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary UpdateTicket updates the content of a ticket.
       *
       * @param request UpdateTicketRequest
       * @return UpdateTicketResponse
       */
      Models::UpdateTicketResponse updateTicket(const Models::UpdateTicketRequest &request);

      /**
       * @summary You can use WithdrawTicket to withdraw a ticket.
       *
       * @param request WithdrawTicketRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return WithdrawTicketResponse
       */
      Models::WithdrawTicketResponse withdrawTicketWithOptions(const Models::WithdrawTicketRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can use WithdrawTicket to withdraw a ticket.
       *
       * @param request WithdrawTicketRequest
       * @return WithdrawTicketResponse
       */
      Models::WithdrawTicketResponse withdrawTicket(const Models::WithdrawTicketRequest &request);
  };
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
