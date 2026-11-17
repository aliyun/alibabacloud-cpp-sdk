// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_OUTBOUNDBOT20251111_HPP_
#define ALIBABACLOUD_OUTBOUNDBOT20251111_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/OutboundBot20251111Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/OutboundBot20251111.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20251111
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Stops an outbound campaign.
       *
       * @description ****
       *
       * @param request AbortCampaignRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AbortCampaignResponse
       */
      Models::AbortCampaignResponse abortCampaignWithOptions(const Models::AbortCampaignRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops an outbound campaign.
       *
       * @description ****
       *
       * @param request AbortCampaignRequest
       * @return AbortCampaignResponse
       */
      Models::AbortCampaignResponse abortCampaign(const Models::AbortCampaignRequest &request);

      /**
       * @summary Terminates outbound call cases.
       *
       * @description ****
       *
       * @param tmpReq AbortCasesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AbortCasesResponse
       */
      Models::AbortCasesResponse abortCasesWithOptions(const Models::AbortCasesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Terminates outbound call cases.
       *
       * @description ****
       *
       * @param request AbortCasesRequest
       * @return AbortCasesResponse
       */
      Models::AbortCasesResponse abortCases(const Models::AbortCasesRequest &request);

      /**
       * @summary Appends outbound call cases.
       *
       * @description ****
       *
       * @param tmpReq AppendCasesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AppendCasesResponse
       */
      Models::AppendCasesResponse appendCasesWithOptions(const Models::AppendCasesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Appends outbound call cases.
       *
       * @description ****
       *
       * @param request AppendCasesRequest
       * @return AppendCasesResponse
       */
      Models::AppendCasesResponse appendCases(const Models::AppendCasesRequest &request);

      /**
       * @summary Creates a text conversation session for a specified instance and scenario, and streams the initial reply from the robot.
       *
       * @description Creates a text conversation session for a specified instance and scenario, and streams the initial reply from the robot. An available scenario version must exist before you call this operation. Use DraftVersion to select the draft or published version, and use VendorParams to pass the accompanying variables required by the scenario. The response uses Server-Sent Events (SSE), and each data event carries a business response object. Save the returned SessionId for subsequent Dialogue and EndSession calls. A StreamEnd value of true indicates that the current response stream has ended, but the session remains active. The resource identifiers, phone numbers, and authentication credentials in the examples are masked or placeholder values. Use actual resources and service return values in production calls.
       *
       * @param request BeginSessionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BeginSessionResponse
       */
      FutureGenerator<Models::BeginSessionResponse> beginSessionWithSSE(const Models::BeginSessionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a text conversation session for a specified instance and scenario, and streams the initial reply from the robot.
       *
       * @description Creates a text conversation session for a specified instance and scenario, and streams the initial reply from the robot. An available scenario version must exist before you call this operation. Use DraftVersion to select the draft or published version, and use VendorParams to pass the accompanying variables required by the scenario. The response uses Server-Sent Events (SSE), and each data event carries a business response object. Save the returned SessionId for subsequent Dialogue and EndSession calls. A StreamEnd value of true indicates that the current response stream has ended, but the session remains active. The resource identifiers, phone numbers, and authentication credentials in the examples are masked or placeholder values. Use actual resources and service return values in production calls.
       *
       * @param request BeginSessionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BeginSessionResponse
       */
      Models::BeginSessionResponse beginSessionWithOptions(const Models::BeginSessionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a text conversation session for a specified instance and scenario, and streams the initial reply from the robot.
       *
       * @description Creates a text conversation session for a specified instance and scenario, and streams the initial reply from the robot. An available scenario version must exist before you call this operation. Use DraftVersion to select the draft or published version, and use VendorParams to pass the accompanying variables required by the scenario. The response uses Server-Sent Events (SSE), and each data event carries a business response object. Save the returned SessionId for subsequent Dialogue and EndSession calls. A StreamEnd value of true indicates that the current response stream has ended, but the session remains active. The resource identifiers, phone numbers, and authentication credentials in the examples are masked or placeholder values. Use actual resources and service return values in production calls.
       *
       * @param request BeginSessionRequest
       * @return BeginSessionResponse
       */
      Models::BeginSessionResponse beginSession(const Models::BeginSessionRequest &request);

      /**
       * @summary Initiates a trial session.
       *
       * @description Creates a trial text session in a specified instance and scenario by using the VisitorToken from a trial link, and returns the first-round reply in Server-Sent Events (SSE) format. The service verifies the channel and expiration time corresponding to the token, and then starts the session based on the tenant to which the channel belongs. The token does not replace the business parameters of the scenario and instance. Save the returned SessionId for subsequent calls to TrialDialogue to send user input, and call EndTrialSession to end the session. StreamEnd=true only indicates that the streaming response for the current round has ended. The resource identifiers, numbers, and authentication credentials in the examples are desensitized or placeholder values. Use actual resources and service return values for actual calls.
       *
       * @param request BeginTrialSessionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BeginTrialSessionResponse
       */
      FutureGenerator<Models::BeginTrialSessionResponse> beginTrialSessionWithSSE(const Models::BeginTrialSessionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initiates a trial session.
       *
       * @description Creates a trial text session in a specified instance and scenario by using the VisitorToken from a trial link, and returns the first-round reply in Server-Sent Events (SSE) format. The service verifies the channel and expiration time corresponding to the token, and then starts the session based on the tenant to which the channel belongs. The token does not replace the business parameters of the scenario and instance. Save the returned SessionId for subsequent calls to TrialDialogue to send user input, and call EndTrialSession to end the session. StreamEnd=true only indicates that the streaming response for the current round has ended. The resource identifiers, numbers, and authentication credentials in the examples are desensitized or placeholder values. Use actual resources and service return values for actual calls.
       *
       * @param request BeginTrialSessionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BeginTrialSessionResponse
       */
      Models::BeginTrialSessionResponse beginTrialSessionWithOptions(const Models::BeginTrialSessionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initiates a trial session.
       *
       * @description Creates a trial text session in a specified instance and scenario by using the VisitorToken from a trial link, and returns the first-round reply in Server-Sent Events (SSE) format. The service verifies the channel and expiration time corresponding to the token, and then starts the session based on the tenant to which the channel belongs. The token does not replace the business parameters of the scenario and instance. Save the returned SessionId for subsequent calls to TrialDialogue to send user input, and call EndTrialSession to end the session. StreamEnd=true only indicates that the streaming response for the current round has ended. The resource identifiers, numbers, and authentication credentials in the examples are desensitized or placeholder values. Use actual resources and service return values for actual calls.
       *
       * @param request BeginTrialSessionRequest
       * @return BeginTrialSessionResponse
       */
      Models::BeginTrialSessionResponse beginTrialSession(const Models::BeginTrialSessionRequest &request);

      /**
       * @summary Initiates a trial call.
       *
       * @description Initiates a trial web voice call for a specified scenario by using the VisitorToken of a trial link. The service verifies the token, the associated channel, and the validity period, and then delegates the web call service to bridge the web voice channel and the robot channel. The DeviceId must be consistent with the data channel device identifier of the trial client. After the call is initiated, use the returned ChannelId, ServerUrl, and Token to connect to the voice channel. If the data event channel of the trial client is required, you can call GetTrialDataChannelCredential with the same DeviceId. The web voice connection token and the data channel username and password are not the same set of credentials. The resource identifiers, numbers, and authentication credentials in the examples are desensitized or placeholder values. Use actual resources and service return values for actual calls.
       *
       * @param request BridgeTrialWebCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BridgeTrialWebCallResponse
       */
      Models::BridgeTrialWebCallResponse bridgeTrialWebCallWithOptions(const Models::BridgeTrialWebCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initiates a trial call.
       *
       * @description Initiates a trial web voice call for a specified scenario by using the VisitorToken of a trial link. The service verifies the token, the associated channel, and the validity period, and then delegates the web call service to bridge the web voice channel and the robot channel. The DeviceId must be consistent with the data channel device identifier of the trial client. After the call is initiated, use the returned ChannelId, ServerUrl, and Token to connect to the voice channel. If the data event channel of the trial client is required, you can call GetTrialDataChannelCredential with the same DeviceId. The web voice connection token and the data channel username and password are not the same set of credentials. The resource identifiers, numbers, and authentication credentials in the examples are desensitized or placeholder values. Use actual resources and service return values for actual calls.
       *
       * @param request BridgeTrialWebCallRequest
       * @return BridgeTrialWebCallResponse
       */
      Models::BridgeTrialWebCallResponse bridgeTrialWebCall(const Models::BridgeTrialWebCallRequest &request);

      /**
       * @summary Initiates a call.
       *
       * @description Initiates a web voice call for a specified instance and scenario by bridging the web voice channel and the robot SIP channel through an RTC gateway. Pass information such as DeviceId, audio sampling rate, and scenario version in the request. TimeoutSeconds specifies the timeout for unanswered calls, defaults to 60 seconds, and does not indicate the maximum duration of an answered call. Upon success, returns the connection context such as SessionId, ChannelId, ServerUrl, and Token. The client must use the returned address and valid credentials to establish the web voice connection. This operation initiates a web interactive voice response instead of dialing a real phone number specified by Number. Resource identity, numbers, and authentication credentials in the examples are masked or placeholder values. Use actual resources and service return values when you invoke the operation.
       *
       * @param request BridgeWebCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BridgeWebCallResponse
       */
      Models::BridgeWebCallResponse bridgeWebCallWithOptions(const Models::BridgeWebCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initiates a call.
       *
       * @description Initiates a web voice call for a specified instance and scenario by bridging the web voice channel and the robot SIP channel through an RTC gateway. Pass information such as DeviceId, audio sampling rate, and scenario version in the request. TimeoutSeconds specifies the timeout for unanswered calls, defaults to 60 seconds, and does not indicate the maximum duration of an answered call. Upon success, returns the connection context such as SessionId, ChannelId, ServerUrl, and Token. The client must use the returned address and valid credentials to establish the web voice connection. This operation initiates a web interactive voice response instead of dialing a real phone number specified by Number. Resource identity, numbers, and authentication credentials in the examples are masked or placeholder values. Use actual resources and service return values when you invoke the operation.
       *
       * @param request BridgeWebCallRequest
       * @return BridgeWebCallResponse
       */
      Models::BridgeWebCallResponse bridgeWebCall(const Models::BridgeWebCallRequest &request);

      /**
       * @summary Creates an outbound campaign.
       *
       * @description ****
       *
       * @param tmpReq CreateCampaignRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCampaignResponse
       */
      Models::CreateCampaignResponse createCampaignWithOptions(const Models::CreateCampaignRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an outbound campaign.
       *
       * @description ****
       *
       * @param request CreateCampaignRequest
       * @return CreateCampaignResponse
       */
      Models::CreateCampaignResponse createCampaign(const Models::CreateCampaignRequest &request);

      /**
       * @summary Creates an instance.
       *
       * @param request CreateCloneVoiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCloneVoiceResponse
       */
      Models::CreateCloneVoiceResponse createCloneVoiceWithOptions(const Models::CreateCloneVoiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an instance.
       *
       * @param request CreateCloneVoiceRequest
       * @return CreateCloneVoiceResponse
       */
      Models::CreateCloneVoiceResponse createCloneVoice(const Models::CreateCloneVoiceRequest &request);

      /**
       * @summary Creates a flash message configuration.
       *
       * @param tmpReq CreateFlashSmsAccessProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFlashSmsAccessProfileResponse
       */
      Models::CreateFlashSmsAccessProfileResponse createFlashSmsAccessProfileWithOptions(const Models::CreateFlashSmsAccessProfileRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a flash message configuration.
       *
       * @param request CreateFlashSmsAccessProfileRequest
       * @return CreateFlashSmsAccessProfileResponse
       */
      Models::CreateFlashSmsAccessProfileResponse createFlashSmsAccessProfile(const Models::CreateFlashSmsAccessProfileRequest &request);

      /**
       * @summary Creates an instance.
       *
       * @param request CreateInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstanceWithOptions(const Models::CreateInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an instance.
       *
       * @param request CreateInstanceRequest
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstance(const Models::CreateInstanceRequest &request);

      /**
       * @summary Creates a language model access configuration.
       *
       * @description Creates a language model access configuration for a specified instance.
       *
       * @param tmpReq CreateLlmAccessProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLlmAccessProfileResponse
       */
      Models::CreateLlmAccessProfileResponse createLlmAccessProfileWithOptions(const Models::CreateLlmAccessProfileRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a language model access configuration.
       *
       * @description Creates a language model access configuration for a specified instance.
       *
       * @param request CreateLlmAccessProfileRequest
       * @return CreateLlmAccessProfileResponse
       */
      Models::CreateLlmAccessProfileResponse createLlmAccessProfile(const Models::CreateLlmAccessProfileRequest &request);

      /**
       * @summary Creates an instance.
       *
       * @param tmpReq CreateOutboundCallRestrictionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOutboundCallRestrictionResponse
       */
      Models::CreateOutboundCallRestrictionResponse createOutboundCallRestrictionWithOptions(const Models::CreateOutboundCallRestrictionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an instance.
       *
       * @param request CreateOutboundCallRestrictionRequest
       * @return CreateOutboundCallRestrictionResponse
       */
      Models::CreateOutboundCallRestrictionResponse createOutboundCallRestriction(const Models::CreateOutboundCallRestrictionRequest &request);

      /**
       * @summary Creates an instance.
       *
       * @param request CreateScriptRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateScriptResponse
       */
      Models::CreateScriptResponse createScriptWithOptions(const Models::CreateScriptRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an instance.
       *
       * @param request CreateScriptRequest
       * @return CreateScriptResponse
       */
      Models::CreateScriptResponse createScript(const Models::CreateScriptRequest &request);

      /**
       * @summary Creates a script configuration.
       *
       * @param tmpReq CreateScriptVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateScriptVersionResponse
       */
      Models::CreateScriptVersionResponse createScriptVersionWithOptions(const Models::CreateScriptVersionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a script configuration.
       *
       * @param request CreateScriptVersionRequest
       * @return CreateScriptVersionResponse
       */
      Models::CreateScriptVersionResponse createScriptVersion(const Models::CreateScriptVersionRequest &request);

      /**
       * @summary Creates an instance.
       *
       * @param tmpReq CreateVoiceAccessProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVoiceAccessProfileResponse
       */
      Models::CreateVoiceAccessProfileResponse createVoiceAccessProfileWithOptions(const Models::CreateVoiceAccessProfileRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an instance.
       *
       * @param request CreateVoiceAccessProfileRequest
       * @return CreateVoiceAccessProfileResponse
       */
      Models::CreateVoiceAccessProfileResponse createVoiceAccessProfile(const Models::CreateVoiceAccessProfileRequest &request);

      /**
       * @summary Deletes a scene.
       *
       * @param request DeleteCloneVoiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCloneVoiceResponse
       */
      Models::DeleteCloneVoiceResponse deleteCloneVoiceWithOptions(const Models::DeleteCloneVoiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a scene.
       *
       * @param request DeleteCloneVoiceRequest
       * @return DeleteCloneVoiceResponse
       */
      Models::DeleteCloneVoiceResponse deleteCloneVoice(const Models::DeleteCloneVoiceRequest &request);

      /**
       * @summary Deletes a tenant number.
       *
       * @description Deletes a tenant number.
       *
       * @param request DeleteCorpNumberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCorpNumberResponse
       */
      Models::DeleteCorpNumberResponse deleteCorpNumberWithOptions(const Models::DeleteCorpNumberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a tenant number.
       *
       * @description Deletes a tenant number.
       *
       * @param request DeleteCorpNumberRequest
       * @return DeleteCorpNumberResponse
       */
      Models::DeleteCorpNumberResponse deleteCorpNumber(const Models::DeleteCorpNumberRequest &request);

      /**
       * @summary Deletes a flash message configuration.
       *
       * @param request DeleteFlashSmsAccessProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFlashSmsAccessProfileResponse
       */
      Models::DeleteFlashSmsAccessProfileResponse deleteFlashSmsAccessProfileWithOptions(const Models::DeleteFlashSmsAccessProfileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a flash message configuration.
       *
       * @param request DeleteFlashSmsAccessProfileRequest
       * @return DeleteFlashSmsAccessProfileResponse
       */
      Models::DeleteFlashSmsAccessProfileResponse deleteFlashSmsAccessProfile(const Models::DeleteFlashSmsAccessProfileRequest &request);

      /**
       * @summary Retrieves instance details.
       *
       * @param request DeleteInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstanceWithOptions(const Models::DeleteInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves instance details.
       *
       * @param request DeleteInstanceRequest
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstance(const Models::DeleteInstanceRequest &request);

      /**
       * @summary Deletes the language model access configuration.
       *
       * @description Deletes the language model access configuration for a specified instance.
       *
       * @param request DeleteLlmAccessProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLlmAccessProfileResponse
       */
      Models::DeleteLlmAccessProfileResponse deleteLlmAccessProfileWithOptions(const Models::DeleteLlmAccessProfileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the language model access configuration.
       *
       * @description Deletes the language model access configuration for a specified instance.
       *
       * @param request DeleteLlmAccessProfileRequest
       * @return DeleteLlmAccessProfileResponse
       */
      Models::DeleteLlmAccessProfileResponse deleteLlmAccessProfile(const Models::DeleteLlmAccessProfileRequest &request);

      /**
       * @summary Deletes the numbers of an instance.
       *
       * @description Deletes the numbers of a specified instance.
       *
       * @param tmpReq DeleteNumbersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNumbersResponse
       */
      Models::DeleteNumbersResponse deleteNumbersWithOptions(const Models::DeleteNumbersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the numbers of an instance.
       *
       * @description Deletes the numbers of a specified instance.
       *
       * @param request DeleteNumbersRequest
       * @return DeleteNumbersResponse
       */
      Models::DeleteNumbersResponse deleteNumbers(const Models::DeleteNumbersRequest &request);

      /**
       * @summary Deletes blacklists and whitelists.
       *
       * @param tmpReq DeleteOutboundCallRestrictionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteOutboundCallRestrictionResponse
       */
      Models::DeleteOutboundCallRestrictionResponse deleteOutboundCallRestrictionWithOptions(const Models::DeleteOutboundCallRestrictionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes blacklists and whitelists.
       *
       * @param request DeleteOutboundCallRestrictionRequest
       * @return DeleteOutboundCallRestrictionResponse
       */
      Models::DeleteOutboundCallRestrictionResponse deleteOutboundCallRestriction(const Models::DeleteOutboundCallRestrictionRequest &request);

      /**
       * @summary Deletes a scenario.
       *
       * @param request DeleteScriptRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteScriptResponse
       */
      Models::DeleteScriptResponse deleteScriptWithOptions(const Models::DeleteScriptRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a scenario.
       *
       * @param request DeleteScriptRequest
       * @return DeleteScriptResponse
       */
      Models::DeleteScriptResponse deleteScript(const Models::DeleteScriptRequest &request);

      /**
       * @summary Deletes a third-party voice configuration.
       *
       * @param request DeleteVoiceAccessProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVoiceAccessProfileResponse
       */
      Models::DeleteVoiceAccessProfileResponse deleteVoiceAccessProfileWithOptions(const Models::DeleteVoiceAccessProfileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a third-party voice configuration.
       *
       * @param request DeleteVoiceAccessProfileRequest
       * @return DeleteVoiceAccessProfileResponse
       */
      Models::DeleteVoiceAccessProfileResponse deleteVoiceAccessProfile(const Models::DeleteVoiceAccessProfileRequest &request);

      /**
       * @summary Initiates a session.
       *
       * @description Sends a round of user input to a text session created by BeginSession and returns the robot reply and control instructions in Server-Sent Events (SSE) format. The InstanceId, ScriptId, and SessionId must be consistent with those used when the session was initiated. The SessionId must use the value returned by the session initiation operation. The conversation cannot continue if the session context does not exist. Utterance is used for plain text input, and Extras is used to pass structured events such as key presses and silence. You can call this operation multiple times in succession. StreamId identifies the reply round, and StreamEnd=true indicates that the output of the current round has ended. Call EndSession after the entire interaction is completed. The resource identifiers, numbers, and authentication credentials in the examples are desensitized or placeholder values. Use actual resources and service return values for actual calls.
       *
       * @param request DialogueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DialogueResponse
       */
      FutureGenerator<Models::DialogueResponse> dialogueWithSSE(const Models::DialogueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initiates a session.
       *
       * @description Sends a round of user input to a text session created by BeginSession and returns the robot reply and control instructions in Server-Sent Events (SSE) format. The InstanceId, ScriptId, and SessionId must be consistent with those used when the session was initiated. The SessionId must use the value returned by the session initiation operation. The conversation cannot continue if the session context does not exist. Utterance is used for plain text input, and Extras is used to pass structured events such as key presses and silence. You can call this operation multiple times in succession. StreamId identifies the reply round, and StreamEnd=true indicates that the output of the current round has ended. Call EndSession after the entire interaction is completed. The resource identifiers, numbers, and authentication credentials in the examples are desensitized or placeholder values. Use actual resources and service return values for actual calls.
       *
       * @param request DialogueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DialogueResponse
       */
      Models::DialogueResponse dialogueWithOptions(const Models::DialogueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initiates a session.
       *
       * @description Sends a round of user input to a text session created by BeginSession and returns the robot reply and control instructions in Server-Sent Events (SSE) format. The InstanceId, ScriptId, and SessionId must be consistent with those used when the session was initiated. The SessionId must use the value returned by the session initiation operation. The conversation cannot continue if the session context does not exist. Utterance is used for plain text input, and Extras is used to pass structured events such as key presses and silence. You can call this operation multiple times in succession. StreamId identifies the reply round, and StreamEnd=true indicates that the output of the current round has ended. Call EndSession after the entire interaction is completed. The resource identifiers, numbers, and authentication credentials in the examples are desensitized or placeholder values. Use actual resources and service return values for actual calls.
       *
       * @param request DialogueRequest
       * @return DialogueResponse
       */
      Models::DialogueResponse dialogue(const Models::DialogueRequest &request);

      /**
       * @summary Disables message subscription.
       *
       * @param request DisableSubscriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableSubscriptionResponse
       */
      Models::DisableSubscriptionResponse disableSubscriptionWithOptions(const Models::DisableSubscriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables message subscription.
       *
       * @param request DisableSubscriptionRequest
       * @return DisableSubscriptionResponse
       */
      Models::DisableSubscriptionResponse disableSubscription(const Models::DisableSubscriptionRequest &request);

      /**
       * @summary Ends a session.
       *
       * @description Ends a text session created by BeginSession, notifies the dialog engine to end the interaction, and clears the text session state. The InstanceId, ScriptId, and SessionId must match those used when the session was started. The Data field in the response returns the SessionId of the ended session. If the text session no longer exists due to prolonged inactivity or cache expiration, the current implementation still returns the SessionId without reporting a session not found error. This operation is used to conclude a text session and is not intended for hanging up web voice or actual phone calls. The resource identifiers, phone numbers, and authentication credentials in the examples are masked or placeholder values. Use actual resources and service return values for real calls.
       *
       * @param request EndSessionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EndSessionResponse
       */
      Models::EndSessionResponse endSessionWithOptions(const Models::EndSessionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Ends a session.
       *
       * @description Ends a text session created by BeginSession, notifies the dialog engine to end the interaction, and clears the text session state. The InstanceId, ScriptId, and SessionId must match those used when the session was started. The Data field in the response returns the SessionId of the ended session. If the text session no longer exists due to prolonged inactivity or cache expiration, the current implementation still returns the SessionId without reporting a session not found error. This operation is used to conclude a text session and is not intended for hanging up web voice or actual phone calls. The resource identifiers, phone numbers, and authentication credentials in the examples are masked or placeholder values. Use actual resources and service return values for real calls.
       *
       * @param request EndSessionRequest
       * @return EndSessionResponse
       */
      Models::EndSessionResponse endSession(const Models::EndSessionRequest &request);

      /**
       * @summary Ends a trial session.
       *
       * @description Ends a trial text session created by BeginTrialSession by using a valid VisitorToken from a trial link. The service first validates the token and then delegates the request to the text session termination service. The InstanceId, ScriptId, and SessionId must maintain session persistence consistent with those of the trial session. The returned Data is the SessionId of the ended session. If the text session context has expired, the termination service can still return the SessionId, but the validation will be marked as failed if the trial token itself is invalid or expired. This operation is not used to hang up web voice calls. The resource identity, numbers, and authentication credentials in the examples are desensitized or placeholder values. Use actual resources and service return values when you invoke the operation.
       *
       * @param request EndTrialSessionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EndTrialSessionResponse
       */
      Models::EndTrialSessionResponse endTrialSessionWithOptions(const Models::EndTrialSessionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Ends a trial session.
       *
       * @description Ends a trial text session created by BeginTrialSession by using a valid VisitorToken from a trial link. The service first validates the token and then delegates the request to the text session termination service. The InstanceId, ScriptId, and SessionId must maintain session persistence consistent with those of the trial session. The returned Data is the SessionId of the ended session. If the text session context has expired, the termination service can still return the SessionId, but the validation will be marked as failed if the trial token itself is invalid or expired. This operation is not used to hang up web voice calls. The resource identity, numbers, and authentication credentials in the examples are desensitized or placeholder values. Use actual resources and service return values when you invoke the operation.
       *
       * @param request EndTrialSessionRequest
       * @return EndTrialSessionResponse
       */
      Models::EndTrialSessionResponse endTrialSession(const Models::EndTrialSessionRequest &request);

      /**
       * @summary Retrieves the call details.
       *
       * @description ****
       *
       * @param request GetCallDetailRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCallDetailRecordResponse
       */
      Models::GetCallDetailRecordResponse getCallDetailRecordWithOptions(const Models::GetCallDetailRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the call details.
       *
       * @description ****
       *
       * @param request GetCallDetailRecordRequest
       * @return GetCallDetailRecordResponse
       */
      Models::GetCallDetailRecordResponse getCallDetailRecord(const Models::GetCallDetailRecordRequest &request);

      /**
       * @summary Retrieves the details of an outbound campaign.
       *
       * @param request GetCampaignRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCampaignResponse
       */
      Models::GetCampaignResponse getCampaignWithOptions(const Models::GetCampaignRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of an outbound campaign.
       *
       * @param request GetCampaignRequest
       * @return GetCampaignResponse
       */
      Models::GetCampaignResponse getCampaign(const Models::GetCampaignRequest &request);

      /**
       * @summary Retrieves the details of a case.
       *
       * @description ****
       *
       * @param request GetCaseDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCaseDetailResponse
       */
      Models::GetCaseDetailResponse getCaseDetailWithOptions(const Models::GetCaseDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a case.
       *
       * @description ****
       *
       * @param request GetCaseDetailRequest
       * @return GetCaseDetailResponse
       */
      Models::GetCaseDetailResponse getCaseDetail(const Models::GetCaseDetailRequest &request);

      /**
       * @summary Retrieves voice conversation parameters.
       *
       * @description Retrieves temporary connection credentials for the client data channel of a specified InstanceId and DeviceId. Requests are verified based on the current POP authentication and instance permission configurations. DeviceId cannot be empty. Unlike GetTrialDataChannelCredential, this operation does not use the VisitorToken for trial links. The client must use the actual Topic, ClientId, Endpoint, UserName, and Password returned to connect to and subscribe to the data channel, and must not infer the address, topic, or authentication information. The same client must keep the DeviceId consistent when initiating BridgeWebCall or MakePilotCall. This operation only retrieves data channel credentials and does not create text sessions, initiate phone calls, or establish web voice channels. The username and password for the data channel are not the same set of credentials as the token returned for web calls. The protocol, the unit of ExpirationTime, and field mappings are subject to the actual RTC gateway deployment version and return conventions. The resource identifiers, numbers, and authentication credentials in the examples are desensitized or placeholder values. Use actual resources and service return values for actual calls.
       *
       * @param request GetDataChannelCredentialRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataChannelCredentialResponse
       */
      Models::GetDataChannelCredentialResponse getDataChannelCredentialWithOptions(const Models::GetDataChannelCredentialRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves voice conversation parameters.
       *
       * @description Retrieves temporary connection credentials for the client data channel of a specified InstanceId and DeviceId. Requests are verified based on the current POP authentication and instance permission configurations. DeviceId cannot be empty. Unlike GetTrialDataChannelCredential, this operation does not use the VisitorToken for trial links. The client must use the actual Topic, ClientId, Endpoint, UserName, and Password returned to connect to and subscribe to the data channel, and must not infer the address, topic, or authentication information. The same client must keep the DeviceId consistent when initiating BridgeWebCall or MakePilotCall. This operation only retrieves data channel credentials and does not create text sessions, initiate phone calls, or establish web voice channels. The username and password for the data channel are not the same set of credentials as the token returned for web calls. The protocol, the unit of ExpirationTime, and field mappings are subject to the actual RTC gateway deployment version and return conventions. The resource identifiers, numbers, and authentication credentials in the examples are desensitized or placeholder values. Use actual resources and service return values for actual calls.
       *
       * @param request GetDataChannelCredentialRequest
       * @return GetDataChannelCredentialResponse
       */
      Models::GetDataChannelCredentialResponse getDataChannelCredential(const Models::GetDataChannelCredentialRequest &request);

      /**
       * @summary Retrieves the details of an instance.
       *
       * @param request GetInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceResponse
       */
      Models::GetInstanceResponse getInstanceWithOptions(const Models::GetInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of an instance.
       *
       * @param request GetInstanceRequest
       * @return GetInstanceResponse
       */
      Models::GetInstanceResponse getInstance(const Models::GetInstanceRequest &request);

      /**
       * @summary Retrieves a call recording.
       *
       * @param request GetRecordingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRecordingResponse
       */
      Models::GetRecordingResponse getRecordingWithOptions(const Models::GetRecordingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a call recording.
       *
       * @param request GetRecordingRequest
       * @return GetRecordingResponse
       */
      Models::GetRecordingResponse getRecording(const Models::GetRecordingRequest &request);

      /**
       * @summary Retrieves a prompt scenario template.
       *
       * @param request GetScriptProfileTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetScriptProfileTemplateResponse
       */
      Models::GetScriptProfileTemplateResponse getScriptProfileTemplateWithOptions(const Models::GetScriptProfileTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a prompt scenario template.
       *
       * @param request GetScriptProfileTemplateRequest
       * @return GetScriptProfileTemplateResponse
       */
      Models::GetScriptProfileTemplateResponse getScriptProfileTemplate(const Models::GetScriptProfileTemplateRequest &request);

      /**
       * @summary Retrieves the MQ configuration.
       *
       * @param request GetSubscriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSubscriptionResponse
       */
      Models::GetSubscriptionResponse getSubscriptionWithOptions(const Models::GetSubscriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the MQ configuration.
       *
       * @param request GetSubscriptionRequest
       * @return GetSubscriptionResponse
       */
      Models::GetSubscriptionResponse getSubscription(const Models::GetSubscriptionRequest &request);

      /**
       * @summary Retrieves the trial channel.
       *
       * @description Retrieves the corresponding trial access channel and the list of available trial scenarios based on the VisitorToken in a trial link. The service verifies whether the token exists, whether it can locate the channel, and whether it has expired. Upon success, it returns information such as the instance to which the channel belongs, the channel type, display configurations, validity period, and scenario configurations. This operation can be used as an initialization step for the trial page: first read the returned instance and scenarios, and then call the corresponding trial text or web voice operation. This operation does not create a text session or initiate a voice call. The resource identifiers, numbers, and authentication credentials in the examples are desensitized or placeholder values. Use actual resources and service return values for actual calls.
       *
       * @param request GetTrialAccessChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTrialAccessChannelResponse
       */
      Models::GetTrialAccessChannelResponse getTrialAccessChannelWithOptions(const Models::GetTrialAccessChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the trial channel.
       *
       * @description Retrieves the corresponding trial access channel and the list of available trial scenarios based on the VisitorToken in a trial link. The service verifies whether the token exists, whether it can locate the channel, and whether it has expired. Upon success, it returns information such as the instance to which the channel belongs, the channel type, display configurations, validity period, and scenario configurations. This operation can be used as an initialization step for the trial page: first read the returned instance and scenarios, and then call the corresponding trial text or web voice operation. This operation does not create a text session or initiate a voice call. The resource identifiers, numbers, and authentication credentials in the examples are desensitized or placeholder values. Use actual resources and service return values for actual calls.
       *
       * @param request GetTrialAccessChannelRequest
       * @return GetTrialAccessChannelResponse
       */
      Models::GetTrialAccessChannelResponse getTrialAccessChannel(const Models::GetTrialAccessChannelRequest &request);

      /**
       * @summary Retrieves the parameters for a trial voice conversation.
       *
       * @description Retrieves temporary connection credentials for the client data channel for a specified InstanceId and DeviceId by using a valid VisitorToken from a trial link. The response includes information such as Topic, ClientId, Endpoint, UserName, Password, and expiration time. The client must use the actual values returned by the service to connect to and subscribe to the data channel, and must not concatenate addresses, topics, or authentication information. The DeviceId must be consistent with the BridgeTrialWebCall request from the same client. This operation only retrieves data channel credentials and does not initiate text sessions or establish web voice calls. The credential protocol and expiration time unit are subject to the conventions returned by the actual RTC gateway. The resource identifiers, numbers, and authentication credentials in the examples are desensitized or placeholder values. Use actual resources and service return values for actual calls.
       *
       * @param request GetTrialDataChannelCredentialRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTrialDataChannelCredentialResponse
       */
      Models::GetTrialDataChannelCredentialResponse getTrialDataChannelCredentialWithOptions(const Models::GetTrialDataChannelCredentialRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the parameters for a trial voice conversation.
       *
       * @description Retrieves temporary connection credentials for the client data channel for a specified InstanceId and DeviceId by using a valid VisitorToken from a trial link. The response includes information such as Topic, ClientId, Endpoint, UserName, Password, and expiration time. The client must use the actual values returned by the service to connect to and subscribe to the data channel, and must not concatenate addresses, topics, or authentication information. The DeviceId must be consistent with the BridgeTrialWebCall request from the same client. This operation only retrieves data channel credentials and does not initiate text sessions or establish web voice calls. The credential protocol and expiration time unit are subject to the conventions returned by the actual RTC gateway. The resource identifiers, numbers, and authentication credentials in the examples are desensitized or placeholder values. Use actual resources and service return values for actual calls.
       *
       * @param request GetTrialDataChannelCredentialRequest
       * @return GetTrialDataChannelCredentialResponse
       */
      Models::GetTrialDataChannelCredentialResponse getTrialDataChannelCredential(const Models::GetTrialDataChannelCredentialRequest &request);

      /**
       * @summary Retrieves the list of ASR models.
       *
       * @param request ListAsrModelsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAsrModelsResponse
       */
      Models::ListAsrModelsResponse listAsrModelsWithOptions(const Models::ListAsrModelsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of ASR models.
       *
       * @param request ListAsrModelsRequest
       * @return ListAsrModelsResponse
       */
      Models::ListAsrModelsResponse listAsrModels(const Models::ListAsrModelsRequest &request);

      /**
       * @summary Queries a list of outbound campaigns.
       *
       * @description ****
       *
       * @param request ListCampaignsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCampaignsResponse
       */
      Models::ListCampaignsResponse listCampaignsWithOptions(const Models::ListCampaignsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of outbound campaigns.
       *
       * @description ****
       *
       * @param request ListCampaignsRequest
       * @return ListCampaignsResponse
       */
      Models::ListCampaignsResponse listCampaigns(const Models::ListCampaignsRequest &request);

      /**
       * @summary Retrieves a list of cases.
       *
       * @description ****
       *
       * @param tmpReq ListCasesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCasesResponse
       */
      Models::ListCasesResponse listCasesWithOptions(const Models::ListCasesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of cases.
       *
       * @description ****
       *
       * @param request ListCasesRequest
       * @return ListCasesResponse
       */
      Models::ListCasesResponse listCases(const Models::ListCasesRequest &request);

      /**
       * @summary Retrieves the list of available models for voice cloning.
       *
       * @param request ListCloneVoiceModelsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCloneVoiceModelsResponse
       */
      Models::ListCloneVoiceModelsResponse listCloneVoiceModelsWithOptions(const Models::ListCloneVoiceModelsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of available models for voice cloning.
       *
       * @param request ListCloneVoiceModelsRequest
       * @return ListCloneVoiceModelsResponse
       */
      Models::ListCloneVoiceModelsResponse listCloneVoiceModels(const Models::ListCloneVoiceModelsRequest &request);

      /**
       * @summary Retrieves the list of cloned voices.
       *
       * @param request ListCloneVoicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCloneVoicesResponse
       */
      Models::ListCloneVoicesResponse listCloneVoicesWithOptions(const Models::ListCloneVoicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of cloned voices.
       *
       * @param request ListCloneVoicesRequest
       * @return ListCloneVoicesResponse
       */
      Models::ListCloneVoicesResponse listCloneVoices(const Models::ListCloneVoicesRequest &request);

      /**
       * @summary Queries the list of tenant numbers.
       *
       * @description Queries the list of tenant numbers.
       *
       * @param request ListCorpNumbersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCorpNumbersResponse
       */
      Models::ListCorpNumbersResponse listCorpNumbersWithOptions(const Models::ListCorpNumbersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of tenant numbers.
       *
       * @description Queries the list of tenant numbers.
       *
       * @param request ListCorpNumbersRequest
       * @return ListCorpNumbersResponse
       */
      Models::ListCorpNumbersResponse listCorpNumbers(const Models::ListCorpNumbersRequest &request);

      /**
       * @summary Retrieves the list of flash SMS configurations.
       *
       * @param request ListFlashSmsAccessProfilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFlashSmsAccessProfilesResponse
       */
      Models::ListFlashSmsAccessProfilesResponse listFlashSmsAccessProfilesWithOptions(const Models::ListFlashSmsAccessProfilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of flash SMS configurations.
       *
       * @param request ListFlashSmsAccessProfilesRequest
       * @return ListFlashSmsAccessProfilesResponse
       */
      Models::ListFlashSmsAccessProfilesResponse listFlashSmsAccessProfiles(const Models::ListFlashSmsAccessProfilesRequest &request);

      /**
       * @summary Retrieves the list of flash message providers.
       *
       * @param request ListFlashSmsProvidersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFlashSmsProvidersResponse
       */
      Models::ListFlashSmsProvidersResponse listFlashSmsProvidersWithOptions(const Models::ListFlashSmsProvidersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of flash message providers.
       *
       * @param request ListFlashSmsProvidersRequest
       * @return ListFlashSmsProvidersResponse
       */
      Models::ListFlashSmsProvidersResponse listFlashSmsProviders(const Models::ListFlashSmsProvidersRequest &request);

      /**
       * @summary Retrieves flash SMS templates.
       *
       * @param request ListFlashSmsTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFlashSmsTemplatesResponse
       */
      Models::ListFlashSmsTemplatesResponse listFlashSmsTemplatesWithOptions(const Models::ListFlashSmsTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves flash SMS templates.
       *
       * @param request ListFlashSmsTemplatesRequest
       * @return ListFlashSmsTemplatesResponse
       */
      Models::ListFlashSmsTemplatesResponse listFlashSmsTemplates(const Models::ListFlashSmsTemplatesRequest &request);

      /**
       * @summary Queries the instances bound to a number.
       *
       * @description Queries the binding information between a number and instances.
       *
       * @param request ListInstanceBindingsOfNumberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstanceBindingsOfNumberResponse
       */
      Models::ListInstanceBindingsOfNumberResponse listInstanceBindingsOfNumberWithOptions(const Models::ListInstanceBindingsOfNumberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the instances bound to a number.
       *
       * @description Queries the binding information between a number and instances.
       *
       * @param request ListInstanceBindingsOfNumberRequest
       * @return ListInstanceBindingsOfNumberResponse
       */
      Models::ListInstanceBindingsOfNumberResponse listInstanceBindingsOfNumber(const Models::ListInstanceBindingsOfNumberRequest &request);

      /**
       * @summary Retrieves instance details.
       *
       * @param request ListInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstancesWithOptions(const Models::ListInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves instance details.
       *
       * @param request ListInstancesRequest
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstances(const Models::ListInstancesRequest &request);

      /**
       * @summary Queries the language model access configurations.
       *
       * @description Queries the list of language model access configurations of a specified instance by paging.
       *
       * @param request ListLlmAccessProfilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLlmAccessProfilesResponse
       */
      Models::ListLlmAccessProfilesResponse listLlmAccessProfilesWithOptions(const Models::ListLlmAccessProfilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the language model access configurations.
       *
       * @description Queries the list of language model access configurations of a specified instance by paging.
       *
       * @param request ListLlmAccessProfilesRequest
       * @return ListLlmAccessProfilesResponse
       */
      Models::ListLlmAccessProfilesResponse listLlmAccessProfiles(const Models::ListLlmAccessProfilesRequest &request);

      /**
       * @summary Queries the list of numbers bound to an instance.
       *
       * @description Queries the binding information between an instance and numbers.
       *
       * @param request ListNumberBindingsOfInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNumberBindingsOfInstanceResponse
       */
      Models::ListNumberBindingsOfInstanceResponse listNumberBindingsOfInstanceWithOptions(const Models::ListNumberBindingsOfInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of numbers bound to an instance.
       *
       * @description Queries the binding information between an instance and numbers.
       *
       * @param request ListNumberBindingsOfInstanceRequest
       * @return ListNumberBindingsOfInstanceResponse
       */
      Models::ListNumberBindingsOfInstanceResponse listNumberBindingsOfInstance(const Models::ListNumberBindingsOfInstanceRequest &request);

      /**
       * @summary Queries the phone numbers of an instance.
       *
       * @description Queries the phone numbers of a specified instance.
       *
       * @param request ListNumbersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNumbersResponse
       */
      Models::ListNumbersResponse listNumbersWithOptions(const Models::ListNumbersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the phone numbers of an instance.
       *
       * @description Queries the phone numbers of a specified instance.
       *
       * @param request ListNumbersRequest
       * @return ListNumbersResponse
       */
      Models::ListNumbersResponse listNumbers(const Models::ListNumbersRequest &request);

      /**
       * @summary Retrieves the blacklists and whitelists.
       *
       * @param request ListOutboundCallRestrictionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOutboundCallRestrictionsResponse
       */
      Models::ListOutboundCallRestrictionsResponse listOutboundCallRestrictionsWithOptions(const Models::ListOutboundCallRestrictionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the blacklists and whitelists.
       *
       * @param request ListOutboundCallRestrictionsRequest
       * @return ListOutboundCallRestrictionsResponse
       */
      Models::ListOutboundCallRestrictionsResponse listOutboundCallRestrictions(const Models::ListOutboundCallRestrictionsRequest &request);

      /**
       * @summary Retrieves the list of scenario configuration templates.
       *
       * @param request ListScriptProfileTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListScriptProfileTemplatesResponse
       */
      Models::ListScriptProfileTemplatesResponse listScriptProfileTemplatesWithOptions(const Models::ListScriptProfileTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of scenario configuration templates.
       *
       * @param request ListScriptProfileTemplatesRequest
       * @return ListScriptProfileTemplatesResponse
       */
      Models::ListScriptProfileTemplatesResponse listScriptProfileTemplates(const Models::ListScriptProfileTemplatesRequest &request);

      /**
       * @summary Retrieves the details of an instance.
       *
       * @param tmpReq ListScriptsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListScriptsResponse
       */
      Models::ListScriptsResponse listScriptsWithOptions(const Models::ListScriptsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of an instance.
       *
       * @param request ListScriptsRequest
       * @return ListScriptsResponse
       */
      Models::ListScriptsResponse listScripts(const Models::ListScriptsRequest &request);

      /**
       * @summary Retrieves a list of scenarios based on the flow ID.
       *
       * @param request ListScriptsByFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListScriptsByFlowResponse
       */
      Models::ListScriptsByFlowResponse listScriptsByFlowWithOptions(const Models::ListScriptsByFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of scenarios based on the flow ID.
       *
       * @param request ListScriptsByFlowRequest
       * @return ListScriptsByFlowResponse
       */
      Models::ListScriptsByFlowResponse listScriptsByFlow(const Models::ListScriptsByFlowRequest &request);

      /**
       * @summary Retrieves the list of system configurations.
       *
       * @param request ListSystemConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSystemConfigsResponse
       */
      Models::ListSystemConfigsResponse listSystemConfigsWithOptions(const Models::ListSystemConfigsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of system configurations.
       *
       * @param request ListSystemConfigsRequest
       * @return ListSystemConfigsResponse
       */
      Models::ListSystemConfigsResponse listSystemConfigs(const Models::ListSystemConfigsRequest &request);

      /**
       * @summary Retrieves the list of voice access configurations.
       *
       * @param request ListVoiceAccessProfilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVoiceAccessProfilesResponse
       */
      Models::ListVoiceAccessProfilesResponse listVoiceAccessProfilesWithOptions(const Models::ListVoiceAccessProfilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of voice access configurations.
       *
       * @param request ListVoiceAccessProfilesRequest
       * @return ListVoiceAccessProfilesResponse
       */
      Models::ListVoiceAccessProfilesResponse listVoiceAccessProfiles(const Models::ListVoiceAccessProfilesRequest &request);

      /**
       * @summary Initiates an outbound call.
       *
       * @description Initiates an outbound call test to the real phone number corresponding to Number by using the specified instance and scenario. Before calling this operation, you must obtain an SMS verification code for the OutboundCallTest scenario for the called number and pass it in VerificationCode. The service verifies the code and initiates the call by using the outbound caller ID configured on the platform. DeviceId is used to bind the client data stream to the current call. CallVariables passes call variables in JSON object format, and Tags passes attached data. Upon success, a SessionId with the test- prefix is returned to associate with the current call. A successful API response does not indicate that the called party has answered or that the conversation has ended. Test only authorized numbers. The resource identifiers, numbers, and authentication credentials in the examples are desensitized or placeholder values. Use real resources and service return values for actual calls.
       *
       * @param request MakePilotCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MakePilotCallResponse
       */
      Models::MakePilotCallResponse makePilotCallWithOptions(const Models::MakePilotCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initiates an outbound call.
       *
       * @description Initiates an outbound call test to the real phone number corresponding to Number by using the specified instance and scenario. Before calling this operation, you must obtain an SMS verification code for the OutboundCallTest scenario for the called number and pass it in VerificationCode. The service verifies the code and initiates the call by using the outbound caller ID configured on the platform. DeviceId is used to bind the client data stream to the current call. CallVariables passes call variables in JSON object format, and Tags passes attached data. Upon success, a SessionId with the test- prefix is returned to associate with the current call. A successful API response does not indicate that the called party has answered or that the conversation has ended. Test only authorized numbers. The resource identifiers, numbers, and authentication credentials in the examples are desensitized or placeholder values. Use real resources and service return values for actual calls.
       *
       * @param request MakePilotCallRequest
       * @return MakePilotCallResponse
       */
      Models::MakePilotCallResponse makePilotCall(const Models::MakePilotCallRequest &request);

      /**
       * @summary Pauses an outbound campaign.
       *
       * @param request PauseCampaignRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PauseCampaignResponse
       */
      Models::PauseCampaignResponse pauseCampaignWithOptions(const Models::PauseCampaignRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Pauses an outbound campaign.
       *
       * @param request PauseCampaignRequest
       * @return PauseCampaignResponse
       */
      Models::PauseCampaignResponse pauseCampaign(const Models::PauseCampaignRequest &request);

      /**
       * @summary Updates an instance.
       *
       * @param request PublishScriptRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishScriptResponse
       */
      Models::PublishScriptResponse publishScriptWithOptions(const Models::PublishScriptRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an instance.
       *
       * @param request PublishScriptRequest
       * @return PublishScriptResponse
       */
      Models::PublishScriptResponse publishScript(const Models::PublishScriptRequest &request);

      /**
       * @summary Resumes an outbound campaign.
       *
       * @description ****
       *
       * @param request ResumeCampaignRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResumeCampaignResponse
       */
      Models::ResumeCampaignResponse resumeCampaignWithOptions(const Models::ResumeCampaignRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resumes an outbound campaign.
       *
       * @description ****
       *
       * @param request ResumeCampaignRequest
       * @return ResumeCampaignResponse
       */
      Models::ResumeCampaignResponse resumeCampaign(const Models::ResumeCampaignRequest &request);

      /**
       * @summary Submits an outbound campaign.
       *
       * @description ****
       *
       * @param request SubmitCampaignRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitCampaignResponse
       */
      Models::SubmitCampaignResponse submitCampaignWithOptions(const Models::SubmitCampaignRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits an outbound campaign.
       *
       * @description ****
       *
       * @param request SubmitCampaignRequest
       * @return SubmitCampaignResponse
       */
      Models::SubmitCampaignResponse submitCampaign(const Models::SubmitCampaignRequest &request);

      /**
       * @summary Sends a user input to a trial text conversation.
       *
       * @description Sends a round of user input to a trial text conversation created by BeginTrialSession and returns the robot reply in Server-Sent Events (SSE) format. Use the same InstanceId, ScriptId, SessionId, and experience link VisitorToken as those used to start the trial conversation. The service validates the token and its expiration time on each call. Utterance is plain text input, and Extras is a JSON array string of structured events such as key presses and silence. StreamEnd=true only ends the response stream for the current turn. Call EndTrialSession when the entire experience ends. The resource identifiers, numbers, and authentication credentials in the examples are desensitized or placeholder values. Use actual resources and service return values for actual calls.
       *
       * @param request TrialDialogueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TrialDialogueResponse
       */
      FutureGenerator<Models::TrialDialogueResponse> trialDialogueWithSSE(const Models::TrialDialogueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends a user input to a trial text conversation.
       *
       * @description Sends a round of user input to a trial text conversation created by BeginTrialSession and returns the robot reply in Server-Sent Events (SSE) format. Use the same InstanceId, ScriptId, SessionId, and experience link VisitorToken as those used to start the trial conversation. The service validates the token and its expiration time on each call. Utterance is plain text input, and Extras is a JSON array string of structured events such as key presses and silence. StreamEnd=true only ends the response stream for the current turn. Call EndTrialSession when the entire experience ends. The resource identifiers, numbers, and authentication credentials in the examples are desensitized or placeholder values. Use actual resources and service return values for actual calls.
       *
       * @param request TrialDialogueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TrialDialogueResponse
       */
      Models::TrialDialogueResponse trialDialogueWithOptions(const Models::TrialDialogueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends a user input to a trial text conversation.
       *
       * @description Sends a round of user input to a trial text conversation created by BeginTrialSession and returns the robot reply in Server-Sent Events (SSE) format. Use the same InstanceId, ScriptId, SessionId, and experience link VisitorToken as those used to start the trial conversation. The service validates the token and its expiration time on each call. Utterance is plain text input, and Extras is a JSON array string of structured events such as key presses and silence. StreamEnd=true only ends the response stream for the current turn. Call EndTrialSession when the entire experience ends. The resource identifiers, numbers, and authentication credentials in the examples are desensitized or placeholder values. Use actual resources and service return values for actual calls.
       *
       * @param request TrialDialogueRequest
       * @return TrialDialogueResponse
       */
      Models::TrialDialogueResponse trialDialogue(const Models::TrialDialogueRequest &request);

      /**
       * @summary Updates an instance.
       *
       * @param request UpdateCloneVoiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCloneVoiceResponse
       */
      Models::UpdateCloneVoiceResponse updateCloneVoiceWithOptions(const Models::UpdateCloneVoiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an instance.
       *
       * @param request UpdateCloneVoiceRequest
       * @return UpdateCloneVoiceResponse
       */
      Models::UpdateCloneVoiceResponse updateCloneVoice(const Models::UpdateCloneVoiceRequest &request);

      /**
       * @summary Updates the flash message configuration.
       *
       * @param tmpReq UpdateFlashSmsAccessProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFlashSmsAccessProfileResponse
       */
      Models::UpdateFlashSmsAccessProfileResponse updateFlashSmsAccessProfileWithOptions(const Models::UpdateFlashSmsAccessProfileRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the flash message configuration.
       *
       * @param request UpdateFlashSmsAccessProfileRequest
       * @return UpdateFlashSmsAccessProfileResponse
       */
      Models::UpdateFlashSmsAccessProfileResponse updateFlashSmsAccessProfile(const Models::UpdateFlashSmsAccessProfileRequest &request);

      /**
       * @summary Updates an instance.
       *
       * @param request UpdateInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInstanceResponse
       */
      Models::UpdateInstanceResponse updateInstanceWithOptions(const Models::UpdateInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an instance.
       *
       * @param request UpdateInstanceRequest
       * @return UpdateInstanceResponse
       */
      Models::UpdateInstanceResponse updateInstance(const Models::UpdateInstanceRequest &request);

      /**
       * @summary Updates the instances bound to a number.
       *
       * @description Updates the binding between a number and instances.
       *
       * @param tmpReq UpdateInstanceBindingsOfNumberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInstanceBindingsOfNumberResponse
       */
      Models::UpdateInstanceBindingsOfNumberResponse updateInstanceBindingsOfNumberWithOptions(const Models::UpdateInstanceBindingsOfNumberRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the instances bound to a number.
       *
       * @description Updates the binding between a number and instances.
       *
       * @param request UpdateInstanceBindingsOfNumberRequest
       * @return UpdateInstanceBindingsOfNumberResponse
       */
      Models::UpdateInstanceBindingsOfNumberResponse updateInstanceBindingsOfNumber(const Models::UpdateInstanceBindingsOfNumberRequest &request);

      /**
       * @summary Updates the language model access configuration.
       *
       * @description Updates the language model access configuration for a specified instance.
       *
       * @param tmpReq UpdateLlmAccessProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLlmAccessProfileResponse
       */
      Models::UpdateLlmAccessProfileResponse updateLlmAccessProfileWithOptions(const Models::UpdateLlmAccessProfileRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the language model access configuration.
       *
       * @description Updates the language model access configuration for a specified instance.
       *
       * @param request UpdateLlmAccessProfileRequest
       * @return UpdateLlmAccessProfileResponse
       */
      Models::UpdateLlmAccessProfileResponse updateLlmAccessProfile(const Models::UpdateLlmAccessProfileRequest &request);

      /**
       * @summary Updates the phone numbers bound to an instance.
       *
       * @description Updates the binding relationship between an instance and phone numbers.
       *
       * @param tmpReq UpdateNumberBindingsOfInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateNumberBindingsOfInstanceResponse
       */
      Models::UpdateNumberBindingsOfInstanceResponse updateNumberBindingsOfInstanceWithOptions(const Models::UpdateNumberBindingsOfInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the phone numbers bound to an instance.
       *
       * @description Updates the binding relationship between an instance and phone numbers.
       *
       * @param request UpdateNumberBindingsOfInstanceRequest
       * @return UpdateNumberBindingsOfInstanceResponse
       */
      Models::UpdateNumberBindingsOfInstanceResponse updateNumberBindingsOfInstance(const Models::UpdateNumberBindingsOfInstanceRequest &request);

      /**
       * @summary Updates an instance.
       *
       * @param request UpdateScriptRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateScriptResponse
       */
      Models::UpdateScriptResponse updateScriptWithOptions(const Models::UpdateScriptRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an instance.
       *
       * @param request UpdateScriptRequest
       * @return UpdateScriptResponse
       */
      Models::UpdateScriptResponse updateScript(const Models::UpdateScriptRequest &request);

      /**
       * @summary Updates the scenario configuration.
       *
       * @description ****
       *
       * @param tmpReq UpdateScriptVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateScriptVersionResponse
       */
      Models::UpdateScriptVersionResponse updateScriptVersionWithOptions(const Models::UpdateScriptVersionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the scenario configuration.
       *
       * @description ****
       *
       * @param request UpdateScriptVersionRequest
       * @return UpdateScriptVersionResponse
       */
      Models::UpdateScriptVersionResponse updateScriptVersion(const Models::UpdateScriptVersionRequest &request);

      /**
       * @summary Creates or updates a message queue (MQ) configuration.
       *
       * @param tmpReq UpdateSubscriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSubscriptionResponse
       */
      Models::UpdateSubscriptionResponse updateSubscriptionWithOptions(const Models::UpdateSubscriptionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates or updates a message queue (MQ) configuration.
       *
       * @param request UpdateSubscriptionRequest
       * @return UpdateSubscriptionResponse
       */
      Models::UpdateSubscriptionResponse updateSubscription(const Models::UpdateSubscriptionRequest &request);

      /**
       * @summary Updates system configurations.
       *
       * @param tmpReq UpdateSystemConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSystemConfigsResponse
       */
      Models::UpdateSystemConfigsResponse updateSystemConfigsWithOptions(const Models::UpdateSystemConfigsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates system configurations.
       *
       * @param request UpdateSystemConfigsRequest
       * @return UpdateSystemConfigsResponse
       */
      Models::UpdateSystemConfigsResponse updateSystemConfigs(const Models::UpdateSystemConfigsRequest &request);

      /**
       * @summary Updates an instance.
       *
       * @param tmpReq UpdateVoiceAccessProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateVoiceAccessProfileResponse
       */
      Models::UpdateVoiceAccessProfileResponse updateVoiceAccessProfileWithOptions(const Models::UpdateVoiceAccessProfileRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an instance.
       *
       * @param request UpdateVoiceAccessProfileRequest
       * @return UpdateVoiceAccessProfileResponse
       */
      Models::UpdateVoiceAccessProfileResponse updateVoiceAccessProfile(const Models::UpdateVoiceAccessProfileRequest &request);
  };
} // namespace AlibabaCloud
} // namespace OutboundBot20251111
#endif
