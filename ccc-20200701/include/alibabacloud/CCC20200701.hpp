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
       * @summary 废弃预测式外呼活动
       *
       * @param request AbortCampaignRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AbortCampaignResponse
       */
      Models::AbortCampaignResponse abortCampaignWithOptions(const Models::AbortCampaignRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 废弃预测式外呼活动
       *
       * @param request AbortCampaignRequest
       * @return AbortCampaignResponse
       */
      Models::AbortCampaignResponse abortCampaign(const Models::AbortCampaignRequest &request);

      /**
       * @param request AcceptChatRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AcceptChatResponse
       */
      Models::AcceptChatResponse acceptChatWithOptions(const Models::AcceptChatRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request AcceptChatRequest
       * @return AcceptChatResponse
       */
      Models::AcceptChatResponse acceptChat(const Models::AcceptChatRequest &request);

      /**
       * @summary 编辑呼入控制号码
       *
       * @param request AddBlacklistCallTaggingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddBlacklistCallTaggingResponse
       */
      Models::AddBlacklistCallTaggingResponse addBlacklistCallTaggingWithOptions(const Models::AddBlacklistCallTaggingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 编辑呼入控制号码
       *
       * @param request AddBlacklistCallTaggingRequest
       * @return AddBlacklistCallTaggingResponse
       */
      Models::AddBlacklistCallTaggingResponse addBlacklistCallTagging(const Models::AddBlacklistCallTaggingRequest &request);

      /**
       * @summary 追加联系人
       *
       * @param tmpReq AddCasesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddCasesResponse
       */
      Models::AddCasesResponse addCasesWithOptions(const Models::AddCasesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 追加联系人
       *
       * @param request AddCasesRequest
       * @return AddCasesResponse
       */
      Models::AddCasesResponse addCases(const Models::AddCasesRequest &request);

      /**
       * @param request AddFeedbackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddFeedbackResponse
       */
      Models::AddFeedbackResponse addFeedbackWithOptions(const Models::AddFeedbackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request AddFeedbackRequest
       * @return AddFeedbackResponse
       */
      Models::AddFeedbackResponse addFeedback(const Models::AddFeedbackRequest &request);

      /**
       * @param request AddNumbersToSkillGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddNumbersToSkillGroupResponse
       */
      Models::AddNumbersToSkillGroupResponse addNumbersToSkillGroupWithOptions(const Models::AddNumbersToSkillGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request AddNumbersToSkillGroupRequest
       * @return AddNumbersToSkillGroupResponse
       */
      Models::AddNumbersToSkillGroupResponse addNumbersToSkillGroup(const Models::AddNumbersToSkillGroupRequest &request);

      /**
       * @param request AddPersonalNumbersToUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddPersonalNumbersToUserResponse
       */
      Models::AddPersonalNumbersToUserResponse addPersonalNumbersToUserWithOptions(const Models::AddPersonalNumbersToUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request AddPersonalNumbersToUserRequest
       * @return AddPersonalNumbersToUserResponse
       */
      Models::AddPersonalNumbersToUserResponse addPersonalNumbersToUser(const Models::AddPersonalNumbersToUserRequest &request);

      /**
       * @param request AddPhoneNumberToSkillGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddPhoneNumberToSkillGroupsResponse
       */
      Models::AddPhoneNumberToSkillGroupsResponse addPhoneNumberToSkillGroupsWithOptions(const Models::AddPhoneNumberToSkillGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request AddPhoneNumberToSkillGroupsRequest
       * @return AddPhoneNumberToSkillGroupsResponse
       */
      Models::AddPhoneNumberToSkillGroupsResponse addPhoneNumberToSkillGroups(const Models::AddPhoneNumberToSkillGroupsRequest &request);

      /**
       * @param request AddPhoneNumbersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddPhoneNumbersResponse
       */
      Models::AddPhoneNumbersResponse addPhoneNumbersWithOptions(const Models::AddPhoneNumbersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
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
       * @param request AddSkillGroupsToUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddSkillGroupsToUserResponse
       */
      Models::AddSkillGroupsToUserResponse addSkillGroupsToUserWithOptions(const Models::AddSkillGroupsToUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request AddSkillGroupsToUserRequest
       * @return AddSkillGroupsToUserResponse
       */
      Models::AddSkillGroupsToUserResponse addSkillGroupsToUser(const Models::AddSkillGroupsToUserRequest &request);

      /**
       * @param request AddTicketTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddTicketTaskResponse
       */
      Models::AddTicketTaskResponse addTicketTaskWithOptions(const Models::AddTicketTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request AddTicketTaskRequest
       * @return AddTicketTaskResponse
       */
      Models::AddTicketTaskResponse addTicketTask(const Models::AddTicketTaskRequest &request);

      /**
       * @param request AddUsersToSkillGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddUsersToSkillGroupResponse
       */
      Models::AddUsersToSkillGroupResponse addUsersToSkillGroupWithOptions(const Models::AddUsersToSkillGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request AddUsersToSkillGroupRequest
       * @return AddUsersToSkillGroupResponse
       */
      Models::AddUsersToSkillGroupResponse addUsersToSkillGroup(const Models::AddUsersToSkillGroupRequest &request);

      /**
       * @param request AnalyzeConversationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AnalyzeConversationResponse
       */
      Models::AnalyzeConversationResponse analyzeConversationWithOptions(const Models::AnalyzeConversationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request AnalyzeConversationRequest
       * @return AnalyzeConversationResponse
       */
      Models::AnalyzeConversationResponse analyzeConversation(const Models::AnalyzeConversationRequest &request);

      /**
       * @param request AnswerCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AnswerCallResponse
       */
      Models::AnswerCallResponse answerCallWithOptions(const Models::AnswerCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request AnswerCallRequest
       * @return AnswerCallResponse
       */
      Models::AnswerCallResponse answerCall(const Models::AnswerCallRequest &request);

      /**
       * @summary 追加联系人
       *
       * @param tmpReq AppendCasesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AppendCasesResponse
       */
      Models::AppendCasesResponse appendCasesWithOptions(const Models::AppendCasesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 追加联系人
       *
       * @param request AppendCasesRequest
       * @return AppendCasesResponse
       */
      Models::AppendCasesResponse appendCases(const Models::AppendCasesRequest &request);

      /**
       * @deprecated OpenAPI AssignUsers is deprecated, please use CCC::2020-07-01::ImportRamUsers instead.
       *
       * @param request AssignUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssignUsersResponse
       */
      Models::AssignUsersResponse assignUsersWithOptions(const Models::AssignUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI AssignUsers is deprecated, please use CCC::2020-07-01::ImportRamUsers instead.
       *
       * @param request AssignUsersRequest
       * @return AssignUsersResponse
       */
      Models::AssignUsersResponse assignUsers(const Models::AssignUsersRequest &request);

      /**
       * @param request BargeInCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BargeInCallResponse
       */
      Models::BargeInCallResponse bargeInCallWithOptions(const Models::BargeInCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request BargeInCallRequest
       * @return BargeInCallResponse
       */
      Models::BargeInCallResponse bargeInCall(const Models::BargeInCallRequest &request);

      /**
       * @param request BlindTransferRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BlindTransferResponse
       */
      Models::BlindTransferResponse blindTransferWithOptions(const Models::BlindTransferRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request BlindTransferRequest
       * @return BlindTransferResponse
       */
      Models::BlindTransferResponse blindTransfer(const Models::BlindTransferRequest &request);

      /**
       * @param request BridgeRtcCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BridgeRtcCallResponse
       */
      Models::BridgeRtcCallResponse bridgeRtcCallWithOptions(const Models::BridgeRtcCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request BridgeRtcCallRequest
       * @return BridgeRtcCallResponse
       */
      Models::BridgeRtcCallResponse bridgeRtcCall(const Models::BridgeRtcCallRequest &request);

      /**
       * @param request CancelAttendedTransferRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelAttendedTransferResponse
       */
      Models::CancelAttendedTransferResponse cancelAttendedTransferWithOptions(const Models::CancelAttendedTransferRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CancelAttendedTransferRequest
       * @return CancelAttendedTransferResponse
       */
      Models::CancelAttendedTransferResponse cancelAttendedTransfer(const Models::CancelAttendedTransferRequest &request);

      /**
       * @param request ChangeVisibilityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeVisibilityResponse
       */
      Models::ChangeVisibilityResponse changeVisibilityWithOptions(const Models::ChangeVisibilityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ChangeVisibilityRequest
       * @return ChangeVisibilityResponse
       */
      Models::ChangeVisibilityResponse changeVisibility(const Models::ChangeVisibilityRequest &request);

      /**
       * @param request ChangeWorkModeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeWorkModeResponse
       */
      Models::ChangeWorkModeResponse changeWorkModeWithOptions(const Models::ChangeWorkModeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ChangeWorkModeRequest
       * @return ChangeWorkModeResponse
       */
      Models::ChangeWorkModeResponse changeWorkMode(const Models::ChangeWorkModeRequest &request);

      /**
       * @param request ClaimChatRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ClaimChatResponse
       */
      Models::ClaimChatResponse claimChatWithOptions(const Models::ClaimChatRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ClaimChatRequest
       * @return ClaimChatResponse
       */
      Models::ClaimChatResponse claimChat(const Models::ClaimChatRequest &request);

      /**
       * @param request CoachCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CoachCallResponse
       */
      Models::CoachCallResponse coachCallWithOptions(const Models::CoachCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CoachCallRequest
       * @return CoachCallResponse
       */
      Models::CoachCallResponse coachCall(const Models::CoachCallRequest &request);

      /**
       * @param request CommitContactFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CommitContactFlowResponse
       */
      Models::CommitContactFlowResponse commitContactFlowWithOptions(const Models::CommitContactFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CommitContactFlowRequest
       * @return CommitContactFlowResponse
       */
      Models::CommitContactFlowResponse commitContactFlow(const Models::CommitContactFlowRequest &request);

      /**
       * @param request CompleteAttendedTransferRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CompleteAttendedTransferResponse
       */
      Models::CompleteAttendedTransferResponse completeAttendedTransferWithOptions(const Models::CompleteAttendedTransferRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CompleteAttendedTransferRequest
       * @return CompleteAttendedTransferResponse
       */
      Models::CompleteAttendedTransferResponse completeAttendedTransfer(const Models::CompleteAttendedTransferRequest &request);

      /**
       * @param request CreateAudioFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAudioFileResponse
       */
      Models::CreateAudioFileResponse createAudioFileWithOptions(const Models::CreateAudioFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateAudioFileRequest
       * @return CreateAudioFileResponse
       */
      Models::CreateAudioFileResponse createAudioFile(const Models::CreateAudioFileRequest &request);

      /**
       * @param request CreateCallSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCallSummaryResponse
       */
      Models::CreateCallSummaryResponse createCallSummaryWithOptions(const Models::CreateCallSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateCallSummaryRequest
       * @return CreateCallSummaryResponse
       */
      Models::CreateCallSummaryResponse createCallSummary(const Models::CreateCallSummaryRequest &request);

      /**
       * @summary 批量创建号码标签
       *
       * @param request CreateCallTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCallTagsResponse
       */
      Models::CreateCallTagsResponse createCallTagsWithOptions(const Models::CreateCallTagsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量创建号码标签
       *
       * @param request CreateCallTagsRequest
       * @return CreateCallTagsResponse
       */
      Models::CreateCallTagsResponse createCallTags(const Models::CreateCallTagsRequest &request);

      /**
       * @summary 创建预测式外呼活动
       *
       * @param tmpReq CreateCampaignRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCampaignResponse
       */
      Models::CreateCampaignResponse createCampaignWithOptions(const Models::CreateCampaignRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建预测式外呼活动
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
       * @param request CreateContactFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateContactFlowResponse
       */
      Models::CreateContactFlowResponse createContactFlowWithOptions(const Models::CreateContactFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateContactFlowRequest
       * @return CreateContactFlowResponse
       */
      Models::CreateContactFlowResponse createContactFlow(const Models::CreateContactFlowRequest &request);

      /**
       * @deprecated OpenAPI CreateCustomCallTagging is deprecated, please use CCC::2020-07-01::CreateCustomCallTaggings instead.
       *
       * @summary 创建呼入控制号码
       *
       * @param request CreateCustomCallTaggingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCustomCallTaggingResponse
       */
      Models::CreateCustomCallTaggingResponse createCustomCallTaggingWithOptions(const Models::CreateCustomCallTaggingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI CreateCustomCallTagging is deprecated, please use CCC::2020-07-01::CreateCustomCallTaggings instead.
       *
       * @summary 创建呼入控制号码
       *
       * @param request CreateCustomCallTaggingRequest
       * @return CreateCustomCallTaggingResponse
       */
      Models::CreateCustomCallTaggingResponse createCustomCallTagging(const Models::CreateCustomCallTaggingRequest &request);

      /**
       * @summary 创建实例
       *
       * @param request CreateInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstanceWithOptions(const Models::CreateInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建实例
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
       * @param request CreateSkillGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSkillGroupResponse
       */
      Models::CreateSkillGroupResponse createSkillGroupWithOptions(const Models::CreateSkillGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateSkillGroupRequest
       * @return CreateSkillGroupResponse
       */
      Models::CreateSkillGroupResponse createSkillGroup(const Models::CreateSkillGroupRequest &request);

      /**
       * @param request CreateTicketRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTicketResponse
       */
      Models::CreateTicketResponse createTicketWithOptions(const Models::CreateTicketRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateTicketRequest
       * @return CreateTicketResponse
       */
      Models::CreateTicketResponse createTicket(const Models::CreateTicketRequest &request);

      /**
       * @param request CreateUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUserResponse
       */
      Models::CreateUserResponse createUserWithOptions(const Models::CreateUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateUserRequest
       * @return CreateUserResponse
       */
      Models::CreateUserResponse createUser(const Models::CreateUserRequest &request);

      /**
       * @param request DeleteAudioFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAudioFileResponse
       */
      Models::DeleteAudioFileResponse deleteAudioFileWithOptions(const Models::DeleteAudioFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteAudioFileRequest
       * @return DeleteAudioFileResponse
       */
      Models::DeleteAudioFileResponse deleteAudioFile(const Models::DeleteAudioFileRequest &request);

      /**
       * @summary 删除号码标签
       *
       * @param request DeleteCallTagRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCallTagResponse
       */
      Models::DeleteCallTagResponse deleteCallTagWithOptions(const Models::DeleteCallTagRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除号码标签
       *
       * @param request DeleteCallTagRequest
       * @return DeleteCallTagResponse
       */
      Models::DeleteCallTagResponse deleteCallTag(const Models::DeleteCallTagRequest &request);

      /**
       * @summary -
       *
       * @param request DeleteContactFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteContactFlowResponse
       */
      Models::DeleteContactFlowResponse deleteContactFlowWithOptions(const Models::DeleteContactFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary -
       *
       * @param request DeleteContactFlowRequest
       * @return DeleteContactFlowResponse
       */
      Models::DeleteContactFlowResponse deleteContactFlow(const Models::DeleteContactFlowRequest &request);

      /**
       * @summary 删除呼入控制号码
       *
       * @param request DeleteCustomCallTaggingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCustomCallTaggingResponse
       */
      Models::DeleteCustomCallTaggingResponse deleteCustomCallTaggingWithOptions(const Models::DeleteCustomCallTaggingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除呼入控制号码
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
       * @param request DeleteSkillGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSkillGroupResponse
       */
      Models::DeleteSkillGroupResponse deleteSkillGroupWithOptions(const Models::DeleteSkillGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteSkillGroupRequest
       * @return DeleteSkillGroupResponse
       */
      Models::DeleteSkillGroupResponse deleteSkillGroup(const Models::DeleteSkillGroupRequest &request);

      /**
       * @param request DeleteTicketRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTicketResponse
       */
      Models::DeleteTicketResponse deleteTicketWithOptions(const Models::DeleteTicketRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteTicketRequest
       * @return DeleteTicketResponse
       */
      Models::DeleteTicketResponse deleteTicket(const Models::DeleteTicketRequest &request);

      /**
       * @param request DeleteTicketTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTicketTemplateResponse
       */
      Models::DeleteTicketTemplateResponse deleteTicketTemplateWithOptions(const Models::DeleteTicketTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
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
       * @param request DisableTicketTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableTicketTemplateResponse
       */
      Models::DisableTicketTemplateResponse disableTicketTemplateWithOptions(const Models::DisableTicketTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DisableTicketTemplateRequest
       * @return DisableTicketTemplateResponse
       */
      Models::DisableTicketTemplateResponse disableTicketTemplate(const Models::DisableTicketTemplateRequest &request);

      /**
       * @param request DiscardEditingContactFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DiscardEditingContactFlowResponse
       */
      Models::DiscardEditingContactFlowResponse discardEditingContactFlowWithOptions(const Models::DiscardEditingContactFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
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
       * @param request EnableTicketTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableTicketTemplateResponse
       */
      Models::EnableTicketTemplateResponse enableTicketTemplateWithOptions(const Models::EnableTicketTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request EnableTicketTemplateRequest
       * @return EnableTicketTemplateResponse
       */
      Models::EnableTicketTemplateResponse enableTicketTemplate(const Models::EnableTicketTemplateRequest &request);

      /**
       * @param request EndConferenceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EndConferenceResponse
       */
      Models::EndConferenceResponse endConferenceWithOptions(const Models::EndConferenceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
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
       * @summary 导出全部呼入号码标签
       *
       * @param request ExportCustomCallTaggingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportCustomCallTaggingResponse
       */
      Models::ExportCustomCallTaggingResponse exportCustomCallTaggingWithOptions(const Models::ExportCustomCallTaggingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ExportCustomCallTagging is deprecated, please use CCC::2020-07-01::ExportCustomCallTaggings instead.
       *
       * @summary 导出全部呼入号码标签
       *
       * @param request ExportCustomCallTaggingRequest
       * @return ExportCustomCallTaggingResponse
       */
      Models::ExportCustomCallTaggingResponse exportCustomCallTagging(const Models::ExportCustomCallTaggingRequest &request);

      /**
       * @summary 导出黑名单号码
       *
       * @param request ExportDoNotCallNumbersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportDoNotCallNumbersResponse
       */
      Models::ExportDoNotCallNumbersResponse exportDoNotCallNumbersWithOptions(const Models::ExportDoNotCallNumbersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 导出黑名单号码
       *
       * @param request ExportDoNotCallNumbersRequest
       * @return ExportDoNotCallNumbersResponse
       */
      Models::ExportDoNotCallNumbersResponse exportDoNotCallNumbers(const Models::ExportDoNotCallNumbersRequest &request);

      /**
       * @param request FinishTicketTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FinishTicketTaskResponse
       */
      Models::FinishTicketTaskResponse finishTicketTaskWithOptions(const Models::FinishTicketTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request FinishTicketTaskRequest
       * @return FinishTicketTaskResponse
       */
      Models::FinishTicketTaskResponse finishTicketTask(const Models::FinishTicketTaskRequest &request);

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
       * @summary 获取音频文件
       *
       * @param request GetAudioFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAudioFileResponse
       */
      Models::GetAudioFileResponse getAudioFileWithOptions(const Models::GetAudioFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取音频文件
       *
       * @param request GetAudioFileRequest
       * @return GetAudioFileResponse
       */
      Models::GetAudioFileResponse getAudioFile(const Models::GetAudioFileRequest &request);

      /**
       * @param request GetAudioFileDownloadUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAudioFileDownloadUrlResponse
       */
      Models::GetAudioFileDownloadUrlResponse getAudioFileDownloadUrlWithOptions(const Models::GetAudioFileDownloadUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetAudioFileDownloadUrlRequest
       * @return GetAudioFileDownloadUrlResponse
       */
      Models::GetAudioFileDownloadUrlResponse getAudioFileDownloadUrl(const Models::GetAudioFileDownloadUrlRequest &request);

      /**
       * @param request GetAudioFileUploadParametersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAudioFileUploadParametersResponse
       */
      Models::GetAudioFileUploadParametersResponse getAudioFileUploadParametersWithOptions(const Models::GetAudioFileUploadParametersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetAudioFileUploadParametersRequest
       * @return GetAudioFileUploadParametersResponse
       */
      Models::GetAudioFileUploadParametersResponse getAudioFileUploadParameters(const Models::GetAudioFileUploadParametersRequest &request);

      /**
       * @summary 通话记录详情
       *
       * @param request GetCallDetailRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCallDetailRecordResponse
       */
      Models::GetCallDetailRecordResponse getCallDetailRecordWithOptions(const Models::GetCallDetailRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通话记录详情
       *
       * @param request GetCallDetailRecordRequest
       * @return GetCallDetailRecordResponse
       */
      Models::GetCallDetailRecordResponse getCallDetailRecord(const Models::GetCallDetailRecordRequest &request);

      /**
       * @summary 获取预测式外呼活动信息
       *
       * @param request GetCampaignRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCampaignResponse
       */
      Models::GetCampaignResponse getCampaignWithOptions(const Models::GetCampaignRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取预测式外呼活动信息
       *
       * @param request GetCampaignRequest
       * @return GetCampaignResponse
       */
      Models::GetCampaignResponse getCampaign(const Models::GetCampaignRequest &request);

      /**
       * @param request GetCaseFileUploadUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCaseFileUploadUrlResponse
       */
      Models::GetCaseFileUploadUrlResponse getCaseFileUploadUrlWithOptions(const Models::GetCaseFileUploadUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
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
       * @param request GetChatRoutingProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetChatRoutingProfileResponse
       */
      Models::GetChatRoutingProfileResponse getChatRoutingProfileWithOptions(const Models::GetChatRoutingProfileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetChatRoutingProfileRequest
       * @return GetChatRoutingProfileResponse
       */
      Models::GetChatRoutingProfileResponse getChatRoutingProfile(const Models::GetChatRoutingProfileRequest &request);

      /**
       * @param request GetContactFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetContactFlowResponse
       */
      Models::GetContactFlowResponse getContactFlowWithOptions(const Models::GetContactFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetContactFlowRequest
       * @return GetContactFlowResponse
       */
      Models::GetContactFlowResponse getContactFlow(const Models::GetContactFlowRequest &request);

      /**
       * @summary 获取通话文本信息
       *
       * @param request GetConversationDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetConversationDetailResponse
       */
      Models::GetConversationDetailResponse getConversationDetailWithOptions(const Models::GetConversationDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取通话文本信息
       *
       * @param request GetConversationDetailRequest
       * @return GetConversationDetailResponse
       */
      Models::GetConversationDetailResponse getConversationDetail(const Models::GetConversationDetailRequest &request);

      /**
       * @param request GetDataChannelCredentialsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataChannelCredentialsResponse
       */
      Models::GetDataChannelCredentialsResponse getDataChannelCredentialsWithOptions(const Models::GetDataChannelCredentialsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetDataChannelCredentialsRequest
       * @return GetDataChannelCredentialsResponse
       */
      Models::GetDataChannelCredentialsResponse getDataChannelCredentials(const Models::GetDataChannelCredentialsRequest &request);

      /**
       * @summary 获取黑名单文件上传地址
       *
       * @param request GetDoNotCallFileUploadParametersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDoNotCallFileUploadParametersResponse
       */
      Models::GetDoNotCallFileUploadParametersResponse getDoNotCallFileUploadParametersWithOptions(const Models::GetDoNotCallFileUploadParametersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取黑名单文件上传地址
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
       * @summary 获取早媒体音频
       *
       * @param request GetEarlyMediaRecordingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEarlyMediaRecordingResponse
       */
      Models::GetEarlyMediaRecordingResponse getEarlyMediaRecordingWithOptions(const Models::GetEarlyMediaRecordingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取早媒体音频
       *
       * @param request GetEarlyMediaRecordingRequest
       * @return GetEarlyMediaRecordingResponse
       */
      Models::GetEarlyMediaRecordingResponse getEarlyMediaRecording(const Models::GetEarlyMediaRecordingRequest &request);

      /**
       * @param request GetHistoricalCallerReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHistoricalCallerReportResponse
       */
      Models::GetHistoricalCallerReportResponse getHistoricalCallerReportWithOptions(const Models::GetHistoricalCallerReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetHistoricalCallerReportRequest
       * @return GetHistoricalCallerReportResponse
       */
      Models::GetHistoricalCallerReportResponse getHistoricalCallerReport(const Models::GetHistoricalCallerReportRequest &request);

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
       * @param request GetHistoricalInstanceReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHistoricalInstanceReportResponse
       */
      Models::GetHistoricalInstanceReportResponse getHistoricalInstanceReportWithOptions(const Models::GetHistoricalInstanceReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetHistoricalInstanceReportRequest
       * @return GetHistoricalInstanceReportResponse
       */
      Models::GetHistoricalInstanceReportResponse getHistoricalInstanceReport(const Models::GetHistoricalInstanceReportRequest &request);

      /**
       * @summary 获取实例信息
       *
       * @param request GetInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceResponse
       */
      Models::GetInstanceResponse getInstanceWithOptions(const Models::GetInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取实例信息
       *
       * @param request GetInstanceRequest
       * @return GetInstanceResponse
       */
      Models::GetInstanceResponse getInstance(const Models::GetInstanceRequest &request);

      /**
       * @param request GetInstanceTrendingReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceTrendingReportResponse
       */
      Models::GetInstanceTrendingReportResponse getInstanceTrendingReportWithOptions(const Models::GetInstanceTrendingReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetInstanceTrendingReportRequest
       * @return GetInstanceTrendingReportResponse
       */
      Models::GetInstanceTrendingReportResponse getInstanceTrendingReport(const Models::GetInstanceTrendingReportRequest &request);

      /**
       * @summary 获取IVR轨迹小结
       *
       * @param request GetIvrTrackingSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIvrTrackingSummaryResponse
       */
      Models::GetIvrTrackingSummaryResponse getIvrTrackingSummaryWithOptions(const Models::GetIvrTrackingSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取IVR轨迹小结
       *
       * @param request GetIvrTrackingSummaryRequest
       * @return GetIvrTrackingSummaryResponse
       */
      Models::GetIvrTrackingSummaryResponse getIvrTrackingSummary(const Models::GetIvrTrackingSummaryRequest &request);

      /**
       * @param request GetLoginDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLoginDetailsResponse
       */
      Models::GetLoginDetailsResponse getLoginDetailsWithOptions(const Models::GetLoginDetailsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetLoginDetailsRequest
       * @return GetLoginDetailsResponse
       */
      Models::GetLoginDetailsResponse getLoginDetails(const Models::GetLoginDetailsRequest &request);

      /**
       * @param request GetMonoRecordingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMonoRecordingResponse
       */
      Models::GetMonoRecordingResponse getMonoRecordingWithOptions(const Models::GetMonoRecordingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetMonoRecordingRequest
       * @return GetMonoRecordingResponse
       */
      Models::GetMonoRecordingResponse getMonoRecording(const Models::GetMonoRecordingRequest &request);

      /**
       * @param request GetMultiChannelRecordingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMultiChannelRecordingResponse
       */
      Models::GetMultiChannelRecordingResponse getMultiChannelRecordingWithOptions(const Models::GetMultiChannelRecordingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetMultiChannelRecordingRequest
       * @return GetMultiChannelRecordingResponse
       */
      Models::GetMultiChannelRecordingResponse getMultiChannelRecording(const Models::GetMultiChannelRecordingRequest &request);

      /**
       * @param request GetNumberLocationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNumberLocationResponse
       */
      Models::GetNumberLocationResponse getNumberLocationWithOptions(const Models::GetNumberLocationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetNumberLocationRequest
       * @return GetNumberLocationResponse
       */
      Models::GetNumberLocationResponse getNumberLocation(const Models::GetNumberLocationRequest &request);

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
       * @param request GetRealtimeInstanceStatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRealtimeInstanceStatesResponse
       */
      Models::GetRealtimeInstanceStatesResponse getRealtimeInstanceStatesWithOptions(const Models::GetRealtimeInstanceStatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
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
       * @summary 查询技能组
       *
       * @param request GetSkillGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSkillGroupResponse
       */
      Models::GetSkillGroupResponse getSkillGroupWithOptions(const Models::GetSkillGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询技能组
       *
       * @param request GetSkillGroupRequest
       * @return GetSkillGroupResponse
       */
      Models::GetSkillGroupResponse getSkillGroup(const Models::GetSkillGroupRequest &request);

      /**
       * @param request GetSummaryTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSummaryTemplateResponse
       */
      Models::GetSummaryTemplateResponse getSummaryTemplateWithOptions(const Models::GetSummaryTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetSummaryTemplateRequest
       * @return GetSummaryTemplateResponse
       */
      Models::GetSummaryTemplateResponse getSummaryTemplate(const Models::GetSummaryTemplateRequest &request);

      /**
       * @param request GetTicketRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTicketResponse
       */
      Models::GetTicketResponse getTicketWithOptions(const Models::GetTicketRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetTicketRequest
       * @return GetTicketResponse
       */
      Models::GetTicketResponse getTicket(const Models::GetTicketRequest &request);

      /**
       * @param request GetTicketSummaryReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTicketSummaryReportResponse
       */
      Models::GetTicketSummaryReportResponse getTicketSummaryReportWithOptions(const Models::GetTicketSummaryReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetTicketSummaryReportRequest
       * @return GetTicketSummaryReportResponse
       */
      Models::GetTicketSummaryReportResponse getTicketSummaryReport(const Models::GetTicketSummaryReportRequest &request);

      /**
       * @param request GetTicketTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTicketTemplateResponse
       */
      Models::GetTicketTemplateResponse getTicketTemplateWithOptions(const Models::GetTicketTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetTicketTemplateRequest
       * @return GetTicketTemplateResponse
       */
      Models::GetTicketTemplateResponse getTicketTemplate(const Models::GetTicketTemplateRequest &request);

      /**
       * @param request GetTurnCredentialsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTurnCredentialsResponse
       */
      Models::GetTurnCredentialsResponse getTurnCredentialsWithOptions(const Models::GetTurnCredentialsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetTurnCredentialsRequest
       * @return GetTurnCredentialsResponse
       */
      Models::GetTurnCredentialsResponse getTurnCredentials(const Models::GetTurnCredentialsRequest &request);

      /**
       * @param request GetTurnServerListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTurnServerListResponse
       */
      Models::GetTurnServerListResponse getTurnServerListWithOptions(const Models::GetTurnServerListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetTurnServerListRequest
       * @return GetTurnServerListResponse
       */
      Models::GetTurnServerListResponse getTurnServerList(const Models::GetTurnServerListRequest &request);

      /**
       * @summary 获取质检参数
       *
       * @param request GetUploadAudioDataParamsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUploadAudioDataParamsResponse
       */
      Models::GetUploadAudioDataParamsResponse getUploadAudioDataParamsWithOptions(const Models::GetUploadAudioDataParamsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取质检参数
       *
       * @param request GetUploadAudioDataParamsRequest
       * @return GetUploadAudioDataParamsResponse
       */
      Models::GetUploadAudioDataParamsResponse getUploadAudioDataParams(const Models::GetUploadAudioDataParamsRequest &request);

      /**
       * @param request GetUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserResponse
       */
      Models::GetUserResponse getUserWithOptions(const Models::GetUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
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
       * @param request GetVisitorLoginDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVisitorLoginDetailsResponse
       */
      Models::GetVisitorLoginDetailsResponse getVisitorLoginDetailsWithOptions(const Models::GetVisitorLoginDetailsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetVisitorLoginDetailsRequest
       * @return GetVisitorLoginDetailsResponse
       */
      Models::GetVisitorLoginDetailsResponse getVisitorLoginDetails(const Models::GetVisitorLoginDetailsRequest &request);

      /**
       * @param request GetVoicemailRecordingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVoicemailRecordingResponse
       */
      Models::GetVoicemailRecordingResponse getVoicemailRecordingWithOptions(const Models::GetVoicemailRecordingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetVoicemailRecordingRequest
       * @return GetVoicemailRecordingResponse
       */
      Models::GetVoicemailRecordingResponse getVoicemailRecording(const Models::GetVoicemailRecordingRequest &request);

      /**
       * @param request HoldCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return HoldCallResponse
       */
      Models::HoldCallResponse holdCallWithOptions(const Models::HoldCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request HoldCallRequest
       * @return HoldCallResponse
       */
      Models::HoldCallResponse holdCall(const Models::HoldCallRequest &request);

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
       * @param request ImportCorpNumbersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportCorpNumbersResponse
       */
      Models::ImportCorpNumbersResponse importCorpNumbersWithOptions(const Models::ImportCorpNumbersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ImportCorpNumbersRequest
       * @return ImportCorpNumbersResponse
       */
      Models::ImportCorpNumbersResponse importCorpNumbers(const Models::ImportCorpNumbersRequest &request);

      /**
       * @deprecated OpenAPI ImportCustomCallTagging is deprecated, please use CCC::2020-07-01::ImportCustomCallTaggings instead.
       *
       * @summary 文件导入呼入控制号码
       *
       * @param request ImportCustomCallTaggingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportCustomCallTaggingResponse
       */
      Models::ImportCustomCallTaggingResponse importCustomCallTaggingWithOptions(const Models::ImportCustomCallTaggingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ImportCustomCallTagging is deprecated, please use CCC::2020-07-01::ImportCustomCallTaggings instead.
       *
       * @summary 文件导入呼入控制号码
       *
       * @param request ImportCustomCallTaggingRequest
       * @return ImportCustomCallTaggingResponse
       */
      Models::ImportCustomCallTaggingResponse importCustomCallTagging(const Models::ImportCustomCallTaggingRequest &request);

      /**
       * @summary 添加黑名单号码
       *
       * @param request ImportDoNotCallNumbersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportDoNotCallNumbersResponse
       */
      Models::ImportDoNotCallNumbersResponse importDoNotCallNumbersWithOptions(const Models::ImportDoNotCallNumbersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 添加黑名单号码
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
       * @param request ImportRamUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportRamUsersResponse
       */
      Models::ImportRamUsersResponse importRamUsersWithOptions(const Models::ImportRamUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ImportRamUsersRequest
       * @return ImportRamUsersResponse
       */
      Models::ImportRamUsersResponse importRamUsers(const Models::ImportRamUsersRequest &request);

      /**
       * @param request InitiateAttendedTransferRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InitiateAttendedTransferResponse
       */
      Models::InitiateAttendedTransferResponse initiateAttendedTransferWithOptions(const Models::InitiateAttendedTransferRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request InitiateAttendedTransferRequest
       * @return InitiateAttendedTransferResponse
       */
      Models::InitiateAttendedTransferResponse initiateAttendedTransfer(const Models::InitiateAttendedTransferRequest &request);

      /**
       * @param request InterceptCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InterceptCallResponse
       */
      Models::InterceptCallResponse interceptCallWithOptions(const Models::InterceptCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request InterceptCallRequest
       * @return InterceptCallResponse
       */
      Models::InterceptCallResponse interceptCall(const Models::InterceptCallRequest &request);

      /**
       * @param request LaunchAuthenticationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LaunchAuthenticationResponse
       */
      Models::LaunchAuthenticationResponse launchAuthenticationWithOptions(const Models::LaunchAuthenticationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request LaunchAuthenticationRequest
       * @return LaunchAuthenticationResponse
       */
      Models::LaunchAuthenticationResponse launchAuthentication(const Models::LaunchAuthenticationRequest &request);

      /**
       * @param request LaunchSurveyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LaunchSurveyResponse
       */
      Models::LaunchSurveyResponse launchSurveyWithOptions(const Models::LaunchSurveyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request LaunchSurveyRequest
       * @return LaunchSurveyResponse
       */
      Models::LaunchSurveyResponse launchSurvey(const Models::LaunchSurveyRequest &request);

      /**
       * @param request ListAgentStateLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAgentStateLogsResponse
       */
      Models::ListAgentStateLogsResponse listAgentStateLogsWithOptions(const Models::ListAgentStateLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListAgentStateLogsRequest
       * @return ListAgentStateLogsResponse
       */
      Models::ListAgentStateLogsResponse listAgentStateLogs(const Models::ListAgentStateLogsRequest &request);

      /**
       * @deprecated OpenAPI ListAgentStates is deprecated, please use CCC::2020-07-01::ListRealtimeAgentStates instead.
       *
       * @summary ListAgentStates for ACC
       *
       * @param request ListAgentStatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAgentStatesResponse
       */
      Models::ListAgentStatesResponse listAgentStatesWithOptions(const Models::ListAgentStatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ListAgentStates is deprecated, please use CCC::2020-07-01::ListRealtimeAgentStates instead.
       *
       * @summary ListAgentStates for ACC
       *
       * @param request ListAgentStatesRequest
       * @return ListAgentStatesResponse
       */
      Models::ListAgentStatesResponse listAgentStates(const Models::ListAgentStatesRequest &request);

      /**
       * @deprecated OpenAPI ListAgentSummaryReportsSinceMidnight is deprecated, please use CCC::2020-07-01::ListHistoricalAgentReport instead.
       *
       * @summary ListAgentSummaryReportsSinceMidnight for acc
       *
       * @param request ListAgentSummaryReportsSinceMidnightRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAgentSummaryReportsSinceMidnightResponse
       */
      Models::ListAgentSummaryReportsSinceMidnightResponse listAgentSummaryReportsSinceMidnightWithOptions(const Models::ListAgentSummaryReportsSinceMidnightRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ListAgentSummaryReportsSinceMidnight is deprecated, please use CCC::2020-07-01::ListHistoricalAgentReport instead.
       *
       * @summary ListAgentSummaryReportsSinceMidnight for acc
       *
       * @param request ListAgentSummaryReportsSinceMidnightRequest
       * @return ListAgentSummaryReportsSinceMidnightResponse
       */
      Models::ListAgentSummaryReportsSinceMidnightResponse listAgentSummaryReportsSinceMidnight(const Models::ListAgentSummaryReportsSinceMidnightRequest &request);

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
       * @summary 获取音频文件列表
       *
       * @param request ListAudioFilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAudioFilesResponse
       */
      Models::ListAudioFilesResponse listAudioFilesWithOptions(const Models::ListAudioFilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取音频文件列表
       *
       * @param request ListAudioFilesRequest
       * @return ListAudioFilesResponse
       */
      Models::ListAudioFilesResponse listAudioFiles(const Models::ListAudioFilesRequest &request);

      /**
       * @summary 编辑呼入控制号码
       *
       * @param request ListBlacklistCallTaggingsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBlacklistCallTaggingsResponse
       */
      Models::ListBlacklistCallTaggingsResponse listBlacklistCallTaggingsWithOptions(const Models::ListBlacklistCallTaggingsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 编辑呼入控制号码
       *
       * @param request ListBlacklistCallTaggingsRequest
       * @return ListBlacklistCallTaggingsResponse
       */
      Models::ListBlacklistCallTaggingsResponse listBlacklistCallTaggings(const Models::ListBlacklistCallTaggingsRequest &request);

      /**
       * @param request ListBriefSkillGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBriefSkillGroupsResponse
       */
      Models::ListBriefSkillGroupsResponse listBriefSkillGroupsWithOptions(const Models::ListBriefSkillGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListBriefSkillGroupsRequest
       * @return ListBriefSkillGroupsResponse
       */
      Models::ListBriefSkillGroupsResponse listBriefSkillGroups(const Models::ListBriefSkillGroupsRequest &request);

      /**
       * @param request ListCallDetailRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCallDetailRecordsResponse
       */
      Models::ListCallDetailRecordsResponse listCallDetailRecordsWithOptions(const Models::ListCallDetailRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListCallDetailRecordsRequest
       * @return ListCallDetailRecordsResponse
       */
      Models::ListCallDetailRecordsResponse listCallDetailRecords(const Models::ListCallDetailRecordsRequest &request);

      /**
       * @summary 通话记录列表
       *
       * @param request ListCallDetailRecordsV2Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCallDetailRecordsV2Response
       */
      Models::ListCallDetailRecordsV2Response listCallDetailRecordsV2WithOptions(const Models::ListCallDetailRecordsV2Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通话记录列表
       *
       * @param request ListCallDetailRecordsV2Request
       * @return ListCallDetailRecordsV2Response
       */
      Models::ListCallDetailRecordsV2Response listCallDetailRecordsV2(const Models::ListCallDetailRecordsV2Request &request);

      /**
       * @param tmpReq ListCallSummariesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCallSummariesResponse
       */
      Models::ListCallSummariesResponse listCallSummariesWithOptions(const Models::ListCallSummariesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListCallSummariesRequest
       * @return ListCallSummariesResponse
       */
      Models::ListCallSummariesResponse listCallSummaries(const Models::ListCallSummariesRequest &request);

      /**
       * @summary 列出号码标签
       *
       * @param request ListCallTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCallTagsResponse
       */
      Models::ListCallTagsResponse listCallTagsWithOptions(const Models::ListCallTagsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出号码标签
       *
       * @param request ListCallTagsRequest
       * @return ListCallTagsResponse
       */
      Models::ListCallTagsResponse listCallTags(const Models::ListCallTagsRequest &request);

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
       * @summary 获取预测式外呼活动列表
       *
       * @param request ListCampaignsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCampaignsResponse
       */
      Models::ListCampaignsResponse listCampaignsWithOptions(const Models::ListCampaignsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取预测式外呼活动列表
       *
       * @param request ListCampaignsRequest
       * @return ListCampaignsResponse
       */
      Models::ListCampaignsResponse listCampaigns(const Models::ListCampaignsRequest &request);

      /**
       * @summary 获取预测式外呼活动的联系人呼叫详情
       *
       * @param request ListCasesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCasesResponse
       */
      Models::ListCasesResponse listCasesWithOptions(const Models::ListCasesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取预测式外呼活动的联系人呼叫详情
       *
       * @param request ListCasesRequest
       * @return ListCasesResponse
       */
      Models::ListCasesResponse listCases(const Models::ListCasesRequest &request);

      /**
       * @param request ListCategoriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCategoriesResponse
       */
      Models::ListCategoriesResponse listCategoriesWithOptions(const Models::ListCategoriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListCategoriesRequest
       * @return ListCategoriesResponse
       */
      Models::ListCategoriesResponse listCategories(const Models::ListCategoriesRequest &request);

      /**
       * @param request ListCommonTicketFieldsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCommonTicketFieldsResponse
       */
      Models::ListCommonTicketFieldsResponse listCommonTicketFieldsWithOptions(const Models::ListCommonTicketFieldsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListCommonTicketFieldsRequest
       * @return ListCommonTicketFieldsResponse
       */
      Models::ListCommonTicketFieldsResponse listCommonTicketFields(const Models::ListCommonTicketFieldsRequest &request);

      /**
       * @param request ListConfigItemsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListConfigItemsResponse
       */
      Models::ListConfigItemsResponse listConfigItemsWithOptions(const Models::ListConfigItemsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListConfigItemsRequest
       * @return ListConfigItemsResponse
       */
      Models::ListConfigItemsResponse listConfigItems(const Models::ListConfigItemsRequest &request);

      /**
       * @summary -
       *
       * @param request ListContactFlowsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListContactFlowsResponse
       */
      Models::ListContactFlowsResponse listContactFlowsWithOptions(const Models::ListContactFlowsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary -
       *
       * @param request ListContactFlowsRequest
       * @return ListContactFlowsResponse
       */
      Models::ListContactFlowsResponse listContactFlows(const Models::ListContactFlowsRequest &request);

      /**
       * @deprecated OpenAPI ListCustomCallTagging is deprecated, please use CCC::2020-07-01::ListCustomCallTaggings instead.
       *
       * @summary 列出呼入控制号码
       *
       * @param request ListCustomCallTaggingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCustomCallTaggingResponse
       */
      Models::ListCustomCallTaggingResponse listCustomCallTaggingWithOptions(const Models::ListCustomCallTaggingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ListCustomCallTagging is deprecated, please use CCC::2020-07-01::ListCustomCallTaggings instead.
       *
       * @summary 列出呼入控制号码
       *
       * @param request ListCustomCallTaggingRequest
       * @return ListCustomCallTaggingResponse
       */
      Models::ListCustomCallTaggingResponse listCustomCallTagging(const Models::ListCustomCallTaggingRequest &request);

      /**
       * @param request ListDevicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDevicesResponse
       */
      Models::ListDevicesResponse listDevicesWithOptions(const Models::ListDevicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListDevicesRequest
       * @return ListDevicesResponse
       */
      Models::ListDevicesResponse listDevices(const Models::ListDevicesRequest &request);

      /**
       * @summary 查询黑名单号码
       *
       * @param request ListDoNotCallNumbersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDoNotCallNumbersResponse
       */
      Models::ListDoNotCallNumbersResponse listDoNotCallNumbersWithOptions(const Models::ListDoNotCallNumbersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询黑名单号码
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
       * @param request ListFlashSmsApplicationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFlashSmsApplicationsResponse
       */
      Models::ListFlashSmsApplicationsResponse listFlashSmsApplicationsWithOptions(const Models::ListFlashSmsApplicationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListFlashSmsApplicationsRequest
       * @return ListFlashSmsApplicationsResponse
       */
      Models::ListFlashSmsApplicationsResponse listFlashSmsApplications(const Models::ListFlashSmsApplicationsRequest &request);

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
       * @summary 获取闪信模板列表
       *
       * @param request ListFlashSmsTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFlashSmsTemplatesResponse
       */
      Models::ListFlashSmsTemplatesResponse listFlashSmsTemplatesWithOptions(const Models::ListFlashSmsTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取闪信模板列表
       *
       * @param request ListFlashSmsTemplatesRequest
       * @return ListFlashSmsTemplatesResponse
       */
      Models::ListFlashSmsTemplatesResponse listFlashSmsTemplates(const Models::ListFlashSmsTemplatesRequest &request);

      /**
       * @summary ListGroupChatMessages
       *
       * @param request ListGroupChatMessagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGroupChatMessagesResponse
       */
      Models::ListGroupChatMessagesResponse listGroupChatMessagesWithOptions(const Models::ListGroupChatMessagesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ListGroupChatMessages
       *
       * @param request ListGroupChatMessagesRequest
       * @return ListGroupChatMessagesResponse
       */
      Models::ListGroupChatMessagesResponse listGroupChatMessages(const Models::ListGroupChatMessagesRequest &request);

      /**
       * @param request ListHistoricalAgentReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHistoricalAgentReportResponse
       */
      Models::ListHistoricalAgentReportResponse listHistoricalAgentReportWithOptions(const Models::ListHistoricalAgentReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListHistoricalAgentReportRequest
       * @return ListHistoricalAgentReportResponse
       */
      Models::ListHistoricalAgentReportResponse listHistoricalAgentReport(const Models::ListHistoricalAgentReportRequest &request);

      /**
       * @summary ListHistoricalAgentSkillGroupReport
       *
       * @param request ListHistoricalAgentSkillGroupReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHistoricalAgentSkillGroupReportResponse
       */
      Models::ListHistoricalAgentSkillGroupReportResponse listHistoricalAgentSkillGroupReportWithOptions(const Models::ListHistoricalAgentSkillGroupReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ListHistoricalAgentSkillGroupReport
       *
       * @param request ListHistoricalAgentSkillGroupReportRequest
       * @return ListHistoricalAgentSkillGroupReportResponse
       */
      Models::ListHistoricalAgentSkillGroupReportResponse listHistoricalAgentSkillGroupReport(const Models::ListHistoricalAgentSkillGroupReportRequest &request);

      /**
       * @summary 技能组汇总报表
       *
       * @param request ListHistoricalSkillGroupReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHistoricalSkillGroupReportResponse
       */
      Models::ListHistoricalSkillGroupReportResponse listHistoricalSkillGroupReportWithOptions(const Models::ListHistoricalSkillGroupReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 技能组汇总报表
       *
       * @param request ListHistoricalSkillGroupReportRequest
       * @return ListHistoricalSkillGroupReportResponse
       */
      Models::ListHistoricalSkillGroupReportResponse listHistoricalSkillGroupReport(const Models::ListHistoricalSkillGroupReportRequest &request);

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
       * @param request ListInstancesOfUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstancesOfUserResponse
       */
      Models::ListInstancesOfUserResponse listInstancesOfUserWithOptions(const Models::ListInstancesOfUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListInstancesOfUserRequest
       * @return ListInstancesOfUserResponse
       */
      Models::ListInstancesOfUserResponse listInstancesOfUser(const Models::ListInstancesOfUserRequest &request);

      /**
       * @param request ListIntervalAgentReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIntervalAgentReportResponse
       */
      Models::ListIntervalAgentReportResponse listIntervalAgentReportWithOptions(const Models::ListIntervalAgentReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListIntervalAgentReportRequest
       * @return ListIntervalAgentReportResponse
       */
      Models::ListIntervalAgentReportResponse listIntervalAgentReport(const Models::ListIntervalAgentReportRequest &request);

      /**
       * @summary ListIntervalAgentSkillGroupReport
       *
       * @param request ListIntervalAgentSkillGroupReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIntervalAgentSkillGroupReportResponse
       */
      Models::ListIntervalAgentSkillGroupReportResponse listIntervalAgentSkillGroupReportWithOptions(const Models::ListIntervalAgentSkillGroupReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ListIntervalAgentSkillGroupReport
       *
       * @param request ListIntervalAgentSkillGroupReportRequest
       * @return ListIntervalAgentSkillGroupReportResponse
       */
      Models::ListIntervalAgentSkillGroupReportResponse listIntervalAgentSkillGroupReport(const Models::ListIntervalAgentSkillGroupReportRequest &request);

      /**
       * @param request ListIntervalInstanceReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIntervalInstanceReportResponse
       */
      Models::ListIntervalInstanceReportResponse listIntervalInstanceReportWithOptions(const Models::ListIntervalInstanceReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListIntervalInstanceReportRequest
       * @return ListIntervalInstanceReportResponse
       */
      Models::ListIntervalInstanceReportResponse listIntervalInstanceReport(const Models::ListIntervalInstanceReportRequest &request);

      /**
       * @param request ListIntervalSkillGroupReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIntervalSkillGroupReportResponse
       */
      Models::ListIntervalSkillGroupReportResponse listIntervalSkillGroupReportWithOptions(const Models::ListIntervalSkillGroupReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListIntervalSkillGroupReportRequest
       * @return ListIntervalSkillGroupReportResponse
       */
      Models::ListIntervalSkillGroupReportResponse listIntervalSkillGroupReport(const Models::ListIntervalSkillGroupReportRequest &request);

      /**
       * @param request ListIvrTrackingDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIvrTrackingDetailsResponse
       */
      Models::ListIvrTrackingDetailsResponse listIvrTrackingDetailsWithOptions(const Models::ListIvrTrackingDetailsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListIvrTrackingDetailsRequest
       * @return ListIvrTrackingDetailsResponse
       */
      Models::ListIvrTrackingDetailsResponse listIvrTrackingDetails(const Models::ListIvrTrackingDetailsRequest &request);

      /**
       * @deprecated OpenAPI ListLegacyAgentEventLogs is deprecated, please use CCC::2020-07-01::ListAgentStateLogs instead.
       *
       * @summary ListLegacyAgentEventLogs
       *
       * @param request ListLegacyAgentEventLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLegacyAgentEventLogsResponse
       */
      Models::ListLegacyAgentEventLogsResponse listLegacyAgentEventLogsWithOptions(const Models::ListLegacyAgentEventLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ListLegacyAgentEventLogs is deprecated, please use CCC::2020-07-01::ListAgentStateLogs instead.
       *
       * @summary ListLegacyAgentEventLogs
       *
       * @param request ListLegacyAgentEventLogsRequest
       * @return ListLegacyAgentEventLogsResponse
       */
      Models::ListLegacyAgentEventLogsResponse listLegacyAgentEventLogs(const Models::ListLegacyAgentEventLogsRequest &request);

      /**
       * @deprecated OpenAPI ListLegacyAgentStatusLogs is deprecated, please use CCC::2020-07-01::ListAgentStateLogs instead.
       *
       * @summary ListLegacyAgentStatusLogs
       *
       * @param request ListLegacyAgentStatusLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLegacyAgentStatusLogsResponse
       */
      Models::ListLegacyAgentStatusLogsResponse listLegacyAgentStatusLogsWithOptions(const Models::ListLegacyAgentStatusLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ListLegacyAgentStatusLogs is deprecated, please use CCC::2020-07-01::ListAgentStateLogs instead.
       *
       * @summary ListLegacyAgentStatusLogs
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
       * @summary ListLegacyQueueEventLogs
       *
       * @param request ListLegacyQueueEventLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLegacyQueueEventLogsResponse
       */
      Models::ListLegacyQueueEventLogsResponse listLegacyQueueEventLogsWithOptions(const Models::ListLegacyQueueEventLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ListLegacyQueueEventLogs
       *
       * @param request ListLegacyQueueEventLogsRequest
       * @return ListLegacyQueueEventLogsResponse
       */
      Models::ListLegacyQueueEventLogsResponse listLegacyQueueEventLogs(const Models::ListLegacyQueueEventLogsRequest &request);

      /**
       * @param request ListMonoRecordingsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMonoRecordingsResponse
       */
      Models::ListMonoRecordingsResponse listMonoRecordingsWithOptions(const Models::ListMonoRecordingsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListMonoRecordingsRequest
       * @return ListMonoRecordingsResponse
       */
      Models::ListMonoRecordingsResponse listMonoRecordings(const Models::ListMonoRecordingsRequest &request);

      /**
       * @param request ListMultiChannelRecordingsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMultiChannelRecordingsResponse
       */
      Models::ListMultiChannelRecordingsResponse listMultiChannelRecordingsWithOptions(const Models::ListMultiChannelRecordingsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListMultiChannelRecordingsRequest
       * @return ListMultiChannelRecordingsResponse
       */
      Models::ListMultiChannelRecordingsResponse listMultiChannelRecordings(const Models::ListMultiChannelRecordingsRequest &request);

      /**
       * @summary 该坐席可用的外呼号码列表
       *
       * @param request ListOutboundNumbersOfUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOutboundNumbersOfUserResponse
       */
      Models::ListOutboundNumbersOfUserResponse listOutboundNumbersOfUserWithOptions(const Models::ListOutboundNumbersOfUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 该坐席可用的外呼号码列表
       *
       * @param request ListOutboundNumbersOfUserRequest
       * @return ListOutboundNumbersOfUserResponse
       */
      Models::ListOutboundNumbersOfUserResponse listOutboundNumbersOfUser(const Models::ListOutboundNumbersOfUserRequest &request);

      /**
       * @param request ListPersonalNumbersOfUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPersonalNumbersOfUserResponse
       */
      Models::ListPersonalNumbersOfUserResponse listPersonalNumbersOfUserWithOptions(const Models::ListPersonalNumbersOfUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListPersonalNumbersOfUserRequest
       * @return ListPersonalNumbersOfUserResponse
       */
      Models::ListPersonalNumbersOfUserResponse listPersonalNumbersOfUser(const Models::ListPersonalNumbersOfUserRequest &request);

      /**
       * @summary 获取号码列表
       *
       * @param request ListPhoneNumbersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPhoneNumbersResponse
       */
      Models::ListPhoneNumbersResponse listPhoneNumbersWithOptions(const Models::ListPhoneNumbersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取号码列表
       *
       * @param request ListPhoneNumbersRequest
       * @return ListPhoneNumbersResponse
       */
      Models::ListPhoneNumbersResponse listPhoneNumbers(const Models::ListPhoneNumbersRequest &request);

      /**
       * @param request ListPhoneNumbersOfSkillGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPhoneNumbersOfSkillGroupResponse
       */
      Models::ListPhoneNumbersOfSkillGroupResponse listPhoneNumbersOfSkillGroupWithOptions(const Models::ListPhoneNumbersOfSkillGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListPhoneNumbersOfSkillGroupRequest
       * @return ListPhoneNumbersOfSkillGroupResponse
       */
      Models::ListPhoneNumbersOfSkillGroupResponse listPhoneNumbersOfSkillGroup(const Models::ListPhoneNumbersOfSkillGroupRequest &request);

      /**
       * @param request ListPrivilegesOfUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPrivilegesOfUserResponse
       */
      Models::ListPrivilegesOfUserResponse listPrivilegesOfUserWithOptions(const Models::ListPrivilegesOfUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListPrivilegesOfUserRequest
       * @return ListPrivilegesOfUserResponse
       */
      Models::ListPrivilegesOfUserResponse listPrivilegesOfUser(const Models::ListPrivilegesOfUserRequest &request);

      /**
       * @param request ListRamUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRamUsersResponse
       */
      Models::ListRamUsersResponse listRamUsersWithOptions(const Models::ListRamUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListRamUsersRequest
       * @return ListRamUsersResponse
       */
      Models::ListRamUsersResponse listRamUsers(const Models::ListRamUsersRequest &request);

      /**
       * @param request ListRealtimeAgentStatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRealtimeAgentStatesResponse
       */
      Models::ListRealtimeAgentStatesResponse listRealtimeAgentStatesWithOptions(const Models::ListRealtimeAgentStatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListRealtimeAgentStatesRequest
       * @return ListRealtimeAgentStatesResponse
       */
      Models::ListRealtimeAgentStatesResponse listRealtimeAgentStates(const Models::ListRealtimeAgentStatesRequest &request);

      /**
       * @param request ListRealtimeSkillGroupStatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRealtimeSkillGroupStatesResponse
       */
      Models::ListRealtimeSkillGroupStatesResponse listRealtimeSkillGroupStatesWithOptions(const Models::ListRealtimeSkillGroupStatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListRealtimeSkillGroupStatesRequest
       * @return ListRealtimeSkillGroupStatesResponse
       */
      Models::ListRealtimeSkillGroupStatesResponse listRealtimeSkillGroupStates(const Models::ListRealtimeSkillGroupStatesRequest &request);

      /**
       * @param request ListRecentCallDetailRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRecentCallDetailRecordsResponse
       */
      Models::ListRecentCallDetailRecordsResponse listRecentCallDetailRecordsWithOptions(const Models::ListRecentCallDetailRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListRecentCallDetailRecordsRequest
       * @return ListRecentCallDetailRecordsResponse
       */
      Models::ListRecentCallDetailRecordsResponse listRecentCallDetailRecords(const Models::ListRecentCallDetailRecordsRequest &request);

      /**
       * @param request ListRolesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRolesResponse
       */
      Models::ListRolesResponse listRolesWithOptions(const Models::ListRolesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListRolesRequest
       * @return ListRolesResponse
       */
      Models::ListRolesResponse listRoles(const Models::ListRolesRequest &request);

      /**
       * @deprecated OpenAPI ListSkillGroupStates is deprecated, please use CCC::2020-07-01::ListRealtimeSkillGroupStates instead.
       *
       * @summary ListSkillGroupStates for acc
       *
       * @param request ListSkillGroupStatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSkillGroupStatesResponse
       */
      Models::ListSkillGroupStatesResponse listSkillGroupStatesWithOptions(const Models::ListSkillGroupStatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ListSkillGroupStates is deprecated, please use CCC::2020-07-01::ListRealtimeSkillGroupStates instead.
       *
       * @summary ListSkillGroupStates for acc
       *
       * @param request ListSkillGroupStatesRequest
       * @return ListSkillGroupStatesResponse
       */
      Models::ListSkillGroupStatesResponse listSkillGroupStates(const Models::ListSkillGroupStatesRequest &request);

      /**
       * @deprecated OpenAPI ListSkillGroupSummaryReportsSinceMidnight is deprecated, please use CCC::2020-07-01::ListHistoricalSkillGroupReport instead.
       *
       * @summary ListSkillGroupSummaryReportsSinceMidnight for acc
       *
       * @param request ListSkillGroupSummaryReportsSinceMidnightRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSkillGroupSummaryReportsSinceMidnightResponse
       */
      Models::ListSkillGroupSummaryReportsSinceMidnightResponse listSkillGroupSummaryReportsSinceMidnightWithOptions(const Models::ListSkillGroupSummaryReportsSinceMidnightRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ListSkillGroupSummaryReportsSinceMidnight is deprecated, please use CCC::2020-07-01::ListHistoricalSkillGroupReport instead.
       *
       * @summary ListSkillGroupSummaryReportsSinceMidnight for acc
       *
       * @param request ListSkillGroupSummaryReportsSinceMidnightRequest
       * @return ListSkillGroupSummaryReportsSinceMidnightResponse
       */
      Models::ListSkillGroupSummaryReportsSinceMidnightResponse listSkillGroupSummaryReportsSinceMidnight(const Models::ListSkillGroupSummaryReportsSinceMidnightRequest &request);

      /**
       * @param request ListSkillGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSkillGroupsResponse
       */
      Models::ListSkillGroupsResponse listSkillGroupsWithOptions(const Models::ListSkillGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListSkillGroupsRequest
       * @return ListSkillGroupsResponse
       */
      Models::ListSkillGroupsResponse listSkillGroups(const Models::ListSkillGroupsRequest &request);

      /**
       * @param request ListSkillLevelsOfUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSkillLevelsOfUserResponse
       */
      Models::ListSkillLevelsOfUserResponse listSkillLevelsOfUserWithOptions(const Models::ListSkillLevelsOfUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListSkillLevelsOfUserRequest
       * @return ListSkillLevelsOfUserResponse
       */
      Models::ListSkillLevelsOfUserResponse listSkillLevelsOfUser(const Models::ListSkillLevelsOfUserRequest &request);

      /**
       * @param request ListSmsMetadataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSmsMetadataResponse
       */
      Models::ListSmsMetadataResponse listSmsMetadataWithOptions(const Models::ListSmsMetadataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
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
       * @param request ListTicketTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTicketTemplatesResponse
       */
      Models::ListTicketTemplatesResponse listTicketTemplatesWithOptions(const Models::ListTicketTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListTicketTemplatesRequest
       * @return ListTicketTemplatesResponse
       */
      Models::ListTicketTemplatesResponse listTicketTemplates(const Models::ListTicketTemplatesRequest &request);

      /**
       * @param request ListTicketsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTicketsResponse
       */
      Models::ListTicketsResponse listTicketsWithOptions(const Models::ListTicketsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListTicketsRequest
       * @return ListTicketsResponse
       */
      Models::ListTicketsResponse listTickets(const Models::ListTicketsRequest &request);

      /**
       * @summary 获取未分配号码列表
       *
       * @param request ListUnassignedNumbersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUnassignedNumbersResponse
       */
      Models::ListUnassignedNumbersResponse listUnassignedNumbersWithOptions(const Models::ListUnassignedNumbersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取未分配号码列表
       *
       * @param request ListUnassignedNumbersRequest
       * @return ListUnassignedNumbersResponse
       */
      Models::ListUnassignedNumbersResponse listUnassignedNumbers(const Models::ListUnassignedNumbersRequest &request);

      /**
       * @param request ListUserLevelsOfSkillGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserLevelsOfSkillGroupResponse
       */
      Models::ListUserLevelsOfSkillGroupResponse listUserLevelsOfSkillGroupWithOptions(const Models::ListUserLevelsOfSkillGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListUserLevelsOfSkillGroupRequest
       * @return ListUserLevelsOfSkillGroupResponse
       */
      Models::ListUserLevelsOfSkillGroupResponse listUserLevelsOfSkillGroup(const Models::ListUserLevelsOfSkillGroupRequest &request);

      /**
       * @param request ListUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUsersResponse
       */
      Models::ListUsersResponse listUsersWithOptions(const Models::ListUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListUsersRequest
       * @return ListUsersResponse
       */
      Models::ListUsersResponse listUsers(const Models::ListUsersRequest &request);

      /**
       * @summary ListVisitorChatMessages
       *
       * @param request ListVisitorChatMessagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVisitorChatMessagesResponse
       */
      Models::ListVisitorChatMessagesResponse listVisitorChatMessagesWithOptions(const Models::ListVisitorChatMessagesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ListVisitorChatMessages
       *
       * @param request ListVisitorChatMessagesRequest
       * @return ListVisitorChatMessagesResponse
       */
      Models::ListVisitorChatMessagesResponse listVisitorChatMessages(const Models::ListVisitorChatMessagesRequest &request);

      /**
       * @param request ListVoicemailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVoicemailsResponse
       */
      Models::ListVoicemailsResponse listVoicemailsWithOptions(const Models::ListVoicemailsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListVoicemailsRequest
       * @return ListVoicemailsResponse
       */
      Models::ListVoicemailsResponse listVoicemails(const Models::ListVoicemailsRequest &request);

      /**
       * @param request ListWaitingChatsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWaitingChatsResponse
       */
      Models::ListWaitingChatsResponse listWaitingChatsWithOptions(const Models::ListWaitingChatsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListWaitingChatsRequest
       * @return ListWaitingChatsResponse
       */
      Models::ListWaitingChatsResponse listWaitingChats(const Models::ListWaitingChatsRequest &request);

      /**
       * @param request MakeCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MakeCallResponse
       */
      Models::MakeCallResponse makeCallWithOptions(const Models::MakeCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request MakeCallRequest
       * @return MakeCallResponse
       */
      Models::MakeCallResponse makeCall(const Models::MakeCallRequest &request);

      /**
       * @param request ModifyAudioFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAudioFileResponse
       */
      Models::ModifyAudioFileResponse modifyAudioFileWithOptions(const Models::ModifyAudioFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ModifyAudioFileRequest
       * @return ModifyAudioFileResponse
       */
      Models::ModifyAudioFileResponse modifyAudioFile(const Models::ModifyAudioFileRequest &request);

      /**
       * @summary 修改活动外呼号码
       *
       * @param tmpReq ModifyCampaignNumbersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCampaignNumbersResponse
       */
      Models::ModifyCampaignNumbersResponse modifyCampaignNumbersWithOptions(const Models::ModifyCampaignNumbersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改活动外呼号码
       *
       * @param request ModifyCampaignNumbersRequest
       * @return ModifyCampaignNumbersResponse
       */
      Models::ModifyCampaignNumbersResponse modifyCampaignNumbers(const Models::ModifyCampaignNumbersRequest &request);

      /**
       * @summary 编辑呼入控制号码
       *
       * @param request ModifyCustomCallTaggingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCustomCallTaggingResponse
       */
      Models::ModifyCustomCallTaggingResponse modifyCustomCallTaggingWithOptions(const Models::ModifyCustomCallTaggingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 编辑呼入控制号码
       *
       * @param request ModifyCustomCallTaggingRequest
       * @return ModifyCustomCallTaggingResponse
       */
      Models::ModifyCustomCallTaggingResponse modifyCustomCallTagging(const Models::ModifyCustomCallTaggingRequest &request);

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
       * @param request ModifyPhoneNumberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyPhoneNumberResponse
       */
      Models::ModifyPhoneNumberResponse modifyPhoneNumberWithOptions(const Models::ModifyPhoneNumberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ModifyPhoneNumberRequest
       * @return ModifyPhoneNumberResponse
       */
      Models::ModifyPhoneNumberResponse modifyPhoneNumber(const Models::ModifyPhoneNumberRequest &request);

      /**
       * @param request ModifySkillGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySkillGroupResponse
       */
      Models::ModifySkillGroupResponse modifySkillGroupWithOptions(const Models::ModifySkillGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ModifySkillGroupRequest
       * @return ModifySkillGroupResponse
       */
      Models::ModifySkillGroupResponse modifySkillGroup(const Models::ModifySkillGroupRequest &request);

      /**
       * @param request ModifySkillLevelsOfUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySkillLevelsOfUserResponse
       */
      Models::ModifySkillLevelsOfUserResponse modifySkillLevelsOfUserWithOptions(const Models::ModifySkillLevelsOfUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ModifySkillLevelsOfUserRequest
       * @return ModifySkillLevelsOfUserResponse
       */
      Models::ModifySkillLevelsOfUserResponse modifySkillLevelsOfUser(const Models::ModifySkillLevelsOfUserRequest &request);

      /**
       * @param request ModifyUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyUserResponse
       */
      Models::ModifyUserResponse modifyUserWithOptions(const Models::ModifyUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ModifyUserRequest
       * @return ModifyUserResponse
       */
      Models::ModifyUserResponse modifyUser(const Models::ModifyUserRequest &request);

      /**
       * @param request ModifyUserLevelsOfSkillGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyUserLevelsOfSkillGroupResponse
       */
      Models::ModifyUserLevelsOfSkillGroupResponse modifyUserLevelsOfSkillGroupWithOptions(const Models::ModifyUserLevelsOfSkillGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ModifyUserLevelsOfSkillGroupRequest
       * @return ModifyUserLevelsOfSkillGroupResponse
       */
      Models::ModifyUserLevelsOfSkillGroupResponse modifyUserLevelsOfSkillGroup(const Models::ModifyUserLevelsOfSkillGroupRequest &request);

      /**
       * @param request MonitorCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MonitorCallResponse
       */
      Models::MonitorCallResponse monitorCallWithOptions(const Models::MonitorCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request MonitorCallRequest
       * @return MonitorCallResponse
       */
      Models::MonitorCallResponse monitorCall(const Models::MonitorCallRequest &request);

      /**
       * @param request MuteCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MuteCallResponse
       */
      Models::MuteCallResponse muteCallWithOptions(const Models::MuteCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request MuteCallRequest
       * @return MuteCallResponse
       */
      Models::MuteCallResponse muteCall(const Models::MuteCallRequest &request);

      /**
       * @summary 暂停预测式外呼活动
       *
       * @param request PauseCampaignRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PauseCampaignResponse
       */
      Models::PauseCampaignResponse pauseCampaignWithOptions(const Models::PauseCampaignRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 暂停预测式外呼活动
       *
       * @param request PauseCampaignRequest
       * @return PauseCampaignResponse
       */
      Models::PauseCampaignResponse pauseCampaign(const Models::PauseCampaignRequest &request);

      /**
       * @param request PickOutboundNumbersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PickOutboundNumbersResponse
       */
      Models::PickOutboundNumbersResponse pickOutboundNumbersWithOptions(const Models::PickOutboundNumbersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request PickOutboundNumbersRequest
       * @return PickOutboundNumbersResponse
       */
      Models::PickOutboundNumbersResponse pickOutboundNumbers(const Models::PickOutboundNumbersRequest &request);

      /**
       * @param request PollUserStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PollUserStatusResponse
       */
      Models::PollUserStatusResponse pollUserStatusWithOptions(const Models::PollUserStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
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
       * @param request PublishContactFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishContactFlowResponse
       */
      Models::PublishContactFlowResponse publishContactFlowWithOptions(const Models::PublishContactFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request PublishContactFlowRequest
       * @return PublishContactFlowResponse
       */
      Models::PublishContactFlowResponse publishContactFlow(const Models::PublishContactFlowRequest &request);

      /**
       * @param request ReadyForServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReadyForServiceResponse
       */
      Models::ReadyForServiceResponse readyForServiceWithOptions(const Models::ReadyForServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ReadyForServiceRequest
       * @return ReadyForServiceResponse
       */
      Models::ReadyForServiceResponse readyForService(const Models::ReadyForServiceRequest &request);

      /**
       * @param request RedialCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RedialCallResponse
       */
      Models::RedialCallResponse redialCallWithOptions(const Models::RedialCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RedialCallRequest
       * @return RedialCallResponse
       */
      Models::RedialCallResponse redialCall(const Models::RedialCallRequest &request);

      /**
       * @param request RegisterDeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RegisterDeviceResponse
       */
      Models::RegisterDeviceResponse registerDeviceWithOptions(const Models::RegisterDeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RegisterDeviceRequest
       * @return RegisterDeviceResponse
       */
      Models::RegisterDeviceResponse registerDevice(const Models::RegisterDeviceRequest &request);

      /**
       * @param request RegisterDevicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RegisterDevicesResponse
       */
      Models::RegisterDevicesResponse registerDevicesWithOptions(const Models::RegisterDevicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RegisterDevicesRequest
       * @return RegisterDevicesResponse
       */
      Models::RegisterDevicesResponse registerDevices(const Models::RegisterDevicesRequest &request);

      /**
       * @param request RejectChatRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RejectChatResponse
       */
      Models::RejectChatResponse rejectChatWithOptions(const Models::RejectChatRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RejectChatRequest
       * @return RejectChatResponse
       */
      Models::RejectChatResponse rejectChat(const Models::RejectChatRequest &request);

      /**
       * @param request RejectTicketRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RejectTicketResponse
       */
      Models::RejectTicketResponse rejectTicketWithOptions(const Models::RejectTicketRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RejectTicketRequest
       * @return RejectTicketResponse
       */
      Models::RejectTicketResponse rejectTicket(const Models::RejectTicketRequest &request);

      /**
       * @param request ReleaseCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseCallResponse
       */
      Models::ReleaseCallResponse releaseCallWithOptions(const Models::ReleaseCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ReleaseCallRequest
       * @return ReleaseCallResponse
       */
      Models::ReleaseCallResponse releaseCall(const Models::ReleaseCallRequest &request);

      /**
       * @param request ReleaseChatRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseChatResponse
       */
      Models::ReleaseChatResponse releaseChatWithOptions(const Models::ReleaseChatRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ReleaseChatRequest
       * @return ReleaseChatResponse
       */
      Models::ReleaseChatResponse releaseChat(const Models::ReleaseChatRequest &request);

      /**
       * @summary 编辑呼入控制号码
       *
       * @param request RemoveBlacklistCallTaggingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveBlacklistCallTaggingResponse
       */
      Models::RemoveBlacklistCallTaggingResponse removeBlacklistCallTaggingWithOptions(const Models::RemoveBlacklistCallTaggingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 编辑呼入控制号码
       *
       * @param request RemoveBlacklistCallTaggingRequest
       * @return RemoveBlacklistCallTaggingResponse
       */
      Models::RemoveBlacklistCallTaggingResponse removeBlacklistCallTagging(const Models::RemoveBlacklistCallTaggingRequest &request);

      /**
       * @summary 删除黑名单号码
       *
       * @param request RemoveDoNotCallNumbersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveDoNotCallNumbersResponse
       */
      Models::RemoveDoNotCallNumbersResponse removeDoNotCallNumbersWithOptions(const Models::RemoveDoNotCallNumbersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除黑名单号码
       *
       * @param request RemoveDoNotCallNumbersRequest
       * @return RemoveDoNotCallNumbersResponse
       */
      Models::RemoveDoNotCallNumbersResponse removeDoNotCallNumbers(const Models::RemoveDoNotCallNumbersRequest &request);

      /**
       * @param request RemovePersonalNumbersFromUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemovePersonalNumbersFromUserResponse
       */
      Models::RemovePersonalNumbersFromUserResponse removePersonalNumbersFromUserWithOptions(const Models::RemovePersonalNumbersFromUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RemovePersonalNumbersFromUserRequest
       * @return RemovePersonalNumbersFromUserResponse
       */
      Models::RemovePersonalNumbersFromUserResponse removePersonalNumbersFromUser(const Models::RemovePersonalNumbersFromUserRequest &request);

      /**
       * @param request RemovePhoneNumberFromSkillGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemovePhoneNumberFromSkillGroupsResponse
       */
      Models::RemovePhoneNumberFromSkillGroupsResponse removePhoneNumberFromSkillGroupsWithOptions(const Models::RemovePhoneNumberFromSkillGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RemovePhoneNumberFromSkillGroupsRequest
       * @return RemovePhoneNumberFromSkillGroupsResponse
       */
      Models::RemovePhoneNumberFromSkillGroupsResponse removePhoneNumberFromSkillGroups(const Models::RemovePhoneNumberFromSkillGroupsRequest &request);

      /**
       * @param request RemovePhoneNumbersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemovePhoneNumbersResponse
       */
      Models::RemovePhoneNumbersResponse removePhoneNumbersWithOptions(const Models::RemovePhoneNumbersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RemovePhoneNumbersRequest
       * @return RemovePhoneNumbersResponse
       */
      Models::RemovePhoneNumbersResponse removePhoneNumbers(const Models::RemovePhoneNumbersRequest &request);

      /**
       * @param request RemovePhoneNumbersFromSkillGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemovePhoneNumbersFromSkillGroupResponse
       */
      Models::RemovePhoneNumbersFromSkillGroupResponse removePhoneNumbersFromSkillGroupWithOptions(const Models::RemovePhoneNumbersFromSkillGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RemovePhoneNumbersFromSkillGroupRequest
       * @return RemovePhoneNumbersFromSkillGroupResponse
       */
      Models::RemovePhoneNumbersFromSkillGroupResponse removePhoneNumbersFromSkillGroup(const Models::RemovePhoneNumbersFromSkillGroupRequest &request);

      /**
       * @param request RemoveSkillGroupsFromUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveSkillGroupsFromUserResponse
       */
      Models::RemoveSkillGroupsFromUserResponse removeSkillGroupsFromUserWithOptions(const Models::RemoveSkillGroupsFromUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RemoveSkillGroupsFromUserRequest
       * @return RemoveSkillGroupsFromUserResponse
       */
      Models::RemoveSkillGroupsFromUserResponse removeSkillGroupsFromUser(const Models::RemoveSkillGroupsFromUserRequest &request);

      /**
       * @param request RemoveUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveUsersResponse
       */
      Models::RemoveUsersResponse removeUsersWithOptions(const Models::RemoveUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RemoveUsersRequest
       * @return RemoveUsersResponse
       */
      Models::RemoveUsersResponse removeUsers(const Models::RemoveUsersRequest &request);

      /**
       * @param request RemoveUsersFromSkillGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveUsersFromSkillGroupResponse
       */
      Models::RemoveUsersFromSkillGroupResponse removeUsersFromSkillGroupWithOptions(const Models::RemoveUsersFromSkillGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RemoveUsersFromSkillGroupRequest
       * @return RemoveUsersFromSkillGroupResponse
       */
      Models::RemoveUsersFromSkillGroupResponse removeUsersFromSkillGroup(const Models::RemoveUsersFromSkillGroupRequest &request);

      /**
       * @param request ResetAgentStateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetAgentStateResponse
       */
      Models::ResetAgentStateResponse resetAgentStateWithOptions(const Models::ResetAgentStateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ResetAgentStateRequest
       * @return ResetAgentStateResponse
       */
      Models::ResetAgentStateResponse resetAgentState(const Models::ResetAgentStateRequest &request);

      /**
       * @param request ResetUserPasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetUserPasswordResponse
       */
      Models::ResetUserPasswordResponse resetUserPasswordWithOptions(const Models::ResetUserPasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ResetUserPasswordRequest
       * @return ResetUserPasswordResponse
       */
      Models::ResetUserPasswordResponse resetUserPassword(const Models::ResetUserPasswordRequest &request);

      /**
       * @summary 录音解冻
       *
       * @param request RestoreArchivedRecordingsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestoreArchivedRecordingsResponse
       */
      Models::RestoreArchivedRecordingsResponse restoreArchivedRecordingsWithOptions(const Models::RestoreArchivedRecordingsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 录音解冻
       *
       * @param request RestoreArchivedRecordingsRequest
       * @return RestoreArchivedRecordingsResponse
       */
      Models::RestoreArchivedRecordingsResponse restoreArchivedRecordings(const Models::RestoreArchivedRecordingsRequest &request);

      /**
       * @param request ResubmitTicketRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResubmitTicketResponse
       */
      Models::ResubmitTicketResponse resubmitTicketWithOptions(const Models::ResubmitTicketRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ResubmitTicketRequest
       * @return ResubmitTicketResponse
       */
      Models::ResubmitTicketResponse resubmitTicket(const Models::ResubmitTicketRequest &request);

      /**
       * @summary 恢复预测式外呼活动
       *
       * @param request ResumeCampaignRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResumeCampaignResponse
       */
      Models::ResumeCampaignResponse resumeCampaignWithOptions(const Models::ResumeCampaignRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 恢复预测式外呼活动
       *
       * @param request ResumeCampaignRequest
       * @return ResumeCampaignResponse
       */
      Models::ResumeCampaignResponse resumeCampaign(const Models::ResumeCampaignRequest &request);

      /**
       * @param request RetrieveCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RetrieveCallResponse
       */
      Models::RetrieveCallResponse retrieveCallWithOptions(const Models::RetrieveCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
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
       * @param request SaveTerminalLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveTerminalLogResponse
       */
      Models::SaveTerminalLogResponse saveTerminalLogWithOptions(const Models::SaveTerminalLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SaveTerminalLogRequest
       * @return SaveTerminalLogResponse
       */
      Models::SaveTerminalLogResponse saveTerminalLog(const Models::SaveTerminalLogRequest &request);

      /**
       * @param request SaveWebRTCStatsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveWebRTCStatsResponse
       */
      Models::SaveWebRTCStatsResponse saveWebRTCStatsWithOptions(const Models::SaveWebRTCStatsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SaveWebRTCStatsRequest
       * @return SaveWebRTCStatsResponse
       */
      Models::SaveWebRTCStatsResponse saveWebRTCStats(const Models::SaveWebRTCStatsRequest &request);

      /**
       * @param request SaveWebRtcInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveWebRtcInfoResponse
       */
      Models::SaveWebRtcInfoResponse saveWebRtcInfoWithOptions(const Models::SaveWebRtcInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SaveWebRtcInfoRequest
       * @return SaveWebRtcInfoResponse
       */
      Models::SaveWebRtcInfoResponse saveWebRtcInfo(const Models::SaveWebRtcInfoRequest &request);

      /**
       * @param request SendDtmfSignalingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendDtmfSignalingResponse
       */
      Models::SendDtmfSignalingResponse sendDtmfSignalingWithOptions(const Models::SendDtmfSignalingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SendDtmfSignalingRequest
       * @return SendDtmfSignalingResponse
       */
      Models::SendDtmfSignalingResponse sendDtmfSignaling(const Models::SendDtmfSignalingRequest &request);

      /**
       * @param request SignInGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SignInGroupResponse
       */
      Models::SignInGroupResponse signInGroupWithOptions(const Models::SignInGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SignInGroupRequest
       * @return SignInGroupResponse
       */
      Models::SignInGroupResponse signInGroup(const Models::SignInGroupRequest &request);

      /**
       * @param request SignOutGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SignOutGroupResponse
       */
      Models::SignOutGroupResponse signOutGroupWithOptions(const Models::SignOutGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SignOutGroupRequest
       * @return SignOutGroupResponse
       */
      Models::SignOutGroupResponse signOutGroup(const Models::SignOutGroupRequest &request);

      /**
       * @param request StartBack2BackCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartBack2BackCallResponse
       */
      Models::StartBack2BackCallResponse startBack2BackCallWithOptions(const Models::StartBack2BackCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request StartBack2BackCallRequest
       * @return StartBack2BackCallResponse
       */
      Models::StartBack2BackCallResponse startBack2BackCall(const Models::StartBack2BackCallRequest &request);

      /**
       * @param tmpReq StartChatRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartChatResponse
       */
      Models::StartChatResponse startChatWithOptions(const Models::StartChatRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request StartChatRequest
       * @return StartChatResponse
       */
      Models::StartChatResponse startChat(const Models::StartChatRequest &request);

      /**
       * @param request StartConferenceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartConferenceResponse
       */
      Models::StartConferenceResponse startConferenceWithOptions(const Models::StartConferenceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request StartConferenceRequest
       * @return StartConferenceResponse
       */
      Models::StartConferenceResponse startConference(const Models::StartConferenceRequest &request);

      /**
       * @param request StartEditContactFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartEditContactFlowResponse
       */
      Models::StartEditContactFlowResponse startEditContactFlowWithOptions(const Models::StartEditContactFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request StartEditContactFlowRequest
       * @return StartEditContactFlowResponse
       */
      Models::StartEditContactFlowResponse startEditContactFlow(const Models::StartEditContactFlowRequest &request);

      /**
       * @param request StartPredictiveCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartPredictiveCallResponse
       */
      Models::StartPredictiveCallResponse startPredictiveCallWithOptions(const Models::StartPredictiveCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request StartPredictiveCallRequest
       * @return StartPredictiveCallResponse
       */
      Models::StartPredictiveCallResponse startPredictiveCall(const Models::StartPredictiveCallRequest &request);

      /**
       * @summary 发起隐私呼叫
       *
       * @param request StartPrivacyCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartPrivacyCallResponse
       */
      Models::StartPrivacyCallResponse startPrivacyCallWithOptions(const Models::StartPrivacyCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 发起隐私呼叫
       *
       * @param request StartPrivacyCallRequest
       * @return StartPrivacyCallResponse
       */
      Models::StartPrivacyCallResponse startPrivacyCall(const Models::StartPrivacyCallRequest &request);

      /**
       * @summary 提交预测式外呼活动
       *
       * @param request SubmitCampaignRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitCampaignResponse
       */
      Models::SubmitCampaignResponse submitCampaignWithOptions(const Models::SubmitCampaignRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交预测式外呼活动
       *
       * @param request SubmitCampaignRequest
       * @return SubmitCampaignResponse
       */
      Models::SubmitCampaignResponse submitCampaign(const Models::SubmitCampaignRequest &request);

      /**
       * @param request SwitchToConferenceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SwitchToConferenceResponse
       */
      Models::SwitchToConferenceResponse switchToConferenceWithOptions(const Models::SwitchToConferenceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SwitchToConferenceRequest
       * @return SwitchToConferenceResponse
       */
      Models::SwitchToConferenceResponse switchToConference(const Models::SwitchToConferenceRequest &request);

      /**
       * @param request TakeBreakRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TakeBreakResponse
       */
      Models::TakeBreakResponse takeBreakWithOptions(const Models::TakeBreakRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request TakeBreakRequest
       * @return TakeBreakResponse
       */
      Models::TakeBreakResponse takeBreak(const Models::TakeBreakRequest &request);

      /**
       * @param request TerminateTicketRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TerminateTicketResponse
       */
      Models::TerminateTicketResponse terminateTicketWithOptions(const Models::TerminateTicketRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request TerminateTicketRequest
       * @return TerminateTicketResponse
       */
      Models::TerminateTicketResponse terminateTicket(const Models::TerminateTicketRequest &request);

      /**
       * @param request TransferTicketTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TransferTicketTaskResponse
       */
      Models::TransferTicketTaskResponse transferTicketTaskWithOptions(const Models::TransferTicketTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request TransferTicketTaskRequest
       * @return TransferTicketTaskResponse
       */
      Models::TransferTicketTaskResponse transferTicketTask(const Models::TransferTicketTaskRequest &request);

      /**
       * @param request UnmuteCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnmuteCallResponse
       */
      Models::UnmuteCallResponse unmuteCallWithOptions(const Models::UnmuteCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UnmuteCallRequest
       * @return UnmuteCallResponse
       */
      Models::UnmuteCallResponse unmuteCall(const Models::UnmuteCallRequest &request);

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

      /**
       * @param request UpdateCallSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCallSummaryResponse
       */
      Models::UpdateCallSummaryResponse updateCallSummaryWithOptions(const Models::UpdateCallSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateCallSummaryRequest
       * @return UpdateCallSummaryResponse
       */
      Models::UpdateCallSummaryResponse updateCallSummary(const Models::UpdateCallSummaryRequest &request);

      /**
       * @summary Update campaign
       *
       * @param request UpdateCampaignRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCampaignResponse
       */
      Models::UpdateCampaignResponse updateCampaignWithOptions(const Models::UpdateCampaignRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update campaign
       *
       * @param request UpdateCampaignRequest
       * @return UpdateCampaignResponse
       */
      Models::UpdateCampaignResponse updateCampaign(const Models::UpdateCampaignRequest &request);

      /**
       * @param request UpdateChatRoutingProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateChatRoutingProfileResponse
       */
      Models::UpdateChatRoutingProfileResponse updateChatRoutingProfileWithOptions(const Models::UpdateChatRoutingProfileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateChatRoutingProfileRequest
       * @return UpdateChatRoutingProfileResponse
       */
      Models::UpdateChatRoutingProfileResponse updateChatRoutingProfile(const Models::UpdateChatRoutingProfileRequest &request);

      /**
       * @param request UpdateConfigItemsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateConfigItemsResponse
       */
      Models::UpdateConfigItemsResponse updateConfigItemsWithOptions(const Models::UpdateConfigItemsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
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
       * @param request UpdateTicketRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTicketResponse
       */
      Models::UpdateTicketResponse updateTicketWithOptions(const Models::UpdateTicketRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateTicketRequest
       * @return UpdateTicketResponse
       */
      Models::UpdateTicketResponse updateTicket(const Models::UpdateTicketRequest &request);

      /**
       * @param request WithdrawTicketRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return WithdrawTicketResponse
       */
      Models::WithdrawTicketResponse withdrawTicketWithOptions(const Models::WithdrawTicketRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request WithdrawTicketRequest
       * @return WithdrawTicketResponse
       */
      Models::WithdrawTicketResponse withdrawTicket(const Models::WithdrawTicketRequest &request);
  };
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
