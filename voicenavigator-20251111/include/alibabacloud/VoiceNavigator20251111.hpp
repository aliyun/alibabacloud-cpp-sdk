// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_VOICENAVIGATOR20251111_HPP_
#define ALIBABACLOUD_VOICENAVIGATOR20251111_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/VoiceNavigator20251111Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/VoiceNavigator20251111.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20251111
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Initiates a session.
       *
       * @param request BeginSessionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BeginSessionResponse
       */
      FutureGenerator<Models::BeginSessionResponse> beginSessionWithSSE(const Models::BeginSessionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initiates a session.
       *
       * @param request BeginSessionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BeginSessionResponse
       */
      Models::BeginSessionResponse beginSessionWithOptions(const Models::BeginSessionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initiates a session.
       *
       * @param request BeginSessionRequest
       * @return BeginSessionResponse
       */
      Models::BeginSessionResponse beginSession(const Models::BeginSessionRequest &request);

      /**
       * @summary Initiates a web call.
       *
       * @param request BridgeWebCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BridgeWebCallResponse
       */
      Models::BridgeWebCallResponse bridgeWebCallWithOptions(const Models::BridgeWebCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initiates a web call.
       *
       * @param request BridgeWebCallRequest
       * @return BridgeWebCallResponse
       */
      Models::BridgeWebCallResponse bridgeWebCall(const Models::BridgeWebCallRequest &request);

      /**
       * @summary Creates a human agent service provider.
       *
       * @param request CreateCallCenterProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCallCenterProviderResponse
       */
      Models::CreateCallCenterProviderResponse createCallCenterProviderWithOptions(const Models::CreateCallCenterProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a human agent service provider.
       *
       * @param request CreateCallCenterProviderRequest
       * @return CreateCallCenterProviderResponse
       */
      Models::CreateCallCenterProviderResponse createCallCenterProvider(const Models::CreateCallCenterProviderRequest &request);

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
       * @summary Adds an instruction to the global configuration of a digital employee.
       *
       * @param request CreateInstructionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstructionResponse
       */
      Models::CreateInstructionResponse createInstructionWithOptions(const Models::CreateInstructionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds an instruction to the global configuration of a digital employee.
       *
       * @param request CreateInstructionRequest
       * @return CreateInstructionResponse
       */
      Models::CreateInstructionResponse createInstruction(const Models::CreateInstructionRequest &request);

      /**
       * @summary Creates the configuration information for a language model.
       *
       * @param tmpReq CreateLlmAccessProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLlmAccessProfileResponse
       */
      Models::CreateLlmAccessProfileResponse createLlmAccessProfileWithOptions(const Models::CreateLlmAccessProfileRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates the configuration information for a language model.
       *
       * @param request CreateLlmAccessProfileRequest
       * @return CreateLlmAccessProfileResponse
       */
      Models::CreateLlmAccessProfileResponse createLlmAccessProfile(const Models::CreateLlmAccessProfileRequest &request);

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
       * @summary Creates a scenario configuration.
       *
       * @param tmpReq CreateScriptVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateScriptVersionResponse
       */
      Models::CreateScriptVersionResponse createScriptVersionWithOptions(const Models::CreateScriptVersionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a scenario configuration.
       *
       * @param request CreateScriptVersionRequest
       * @return CreateScriptVersionResponse
       */
      Models::CreateScriptVersionResponse createScriptVersion(const Models::CreateScriptVersionRequest &request);

      /**
       * @summary Creates a variable.
       *
       * @param request CreateVariableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVariableResponse
       */
      Models::CreateVariableResponse createVariableWithOptions(const Models::CreateVariableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a variable.
       *
       * @param request CreateVariableRequest
       * @return CreateVariableResponse
       */
      Models::CreateVariableResponse createVariable(const Models::CreateVariableRequest &request);

      /**
       * @summary Creates an instance.
       *
       * @param tmpReq CreateVocabularyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVocabularyResponse
       */
      Models::CreateVocabularyResponse createVocabularyWithOptions(const Models::CreateVocabularyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an instance.
       *
       * @param request CreateVocabularyRequest
       * @return CreateVocabularyResponse
       */
      Models::CreateVocabularyResponse createVocabulary(const Models::CreateVocabularyRequest &request);

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
       * @summary Deletes a human service provider in system administration.
       *
       * @param request DeleteCallCenterProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCallCenterProviderResponse
       */
      Models::DeleteCallCenterProviderResponse deleteCallCenterProviderWithOptions(const Models::DeleteCallCenterProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a human service provider in system administration.
       *
       * @param request DeleteCallCenterProviderRequest
       * @return DeleteCallCenterProviderResponse
       */
      Models::DeleteCallCenterProviderResponse deleteCallCenterProvider(const Models::DeleteCallCenterProviderRequest &request);

      /**
       * @summary Deletes a scenario.
       *
       * @param request DeleteCloneVoiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCloneVoiceResponse
       */
      Models::DeleteCloneVoiceResponse deleteCloneVoiceWithOptions(const Models::DeleteCloneVoiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a scenario.
       *
       * @param request DeleteCloneVoiceRequest
       * @return DeleteCloneVoiceResponse
       */
      Models::DeleteCloneVoiceResponse deleteCloneVoice(const Models::DeleteCloneVoiceRequest &request);

      /**
       * @summary Deletes an instruction from the global configuration of a digital employee.
       *
       * @param request DeleteInstructionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteInstructionResponse
       */
      Models::DeleteInstructionResponse deleteInstructionWithOptions(const Models::DeleteInstructionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an instruction from the global configuration of a digital employee.
       *
       * @param request DeleteInstructionRequest
       * @return DeleteInstructionResponse
       */
      Models::DeleteInstructionResponse deleteInstruction(const Models::DeleteInstructionRequest &request);

      /**
       * @summary Deletes the language model configuration.
       *
       * @param request DeleteLlmAccessProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLlmAccessProfileResponse
       */
      Models::DeleteLlmAccessProfileResponse deleteLlmAccessProfileWithOptions(const Models::DeleteLlmAccessProfileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the language model configuration.
       *
       * @param request DeleteLlmAccessProfileRequest
       * @return DeleteLlmAccessProfileResponse
       */
      Models::DeleteLlmAccessProfileResponse deleteLlmAccessProfile(const Models::DeleteLlmAccessProfileRequest &request);

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
       * @summary Deletes a variable.
       *
       * @param request DeleteVariableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVariableResponse
       */
      Models::DeleteVariableResponse deleteVariableWithOptions(const Models::DeleteVariableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a variable.
       *
       * @param request DeleteVariableRequest
       * @return DeleteVariableResponse
       */
      Models::DeleteVariableResponse deleteVariable(const Models::DeleteVariableRequest &request);

      /**
       * @summary Deletes a vocabulary from a Voice Navigator instance.
       *
       * @param request DeleteVocabularyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVocabularyResponse
       */
      Models::DeleteVocabularyResponse deleteVocabularyWithOptions(const Models::DeleteVocabularyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a vocabulary from a Voice Navigator instance.
       *
       * @param request DeleteVocabularyRequest
       * @return DeleteVocabularyResponse
       */
      Models::DeleteVocabularyResponse deleteVocabulary(const Models::DeleteVocabularyRequest &request);

      /**
       * @summary Deletes a Voice Access Profile.
       *
       * @param request DeleteVoiceAccessProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVoiceAccessProfileResponse
       */
      Models::DeleteVoiceAccessProfileResponse deleteVoiceAccessProfileWithOptions(const Models::DeleteVoiceAccessProfileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a Voice Access Profile.
       *
       * @param request DeleteVoiceAccessProfileRequest
       * @return DeleteVoiceAccessProfileResponse
       */
      Models::DeleteVoiceAccessProfileResponse deleteVoiceAccessProfile(const Models::DeleteVoiceAccessProfileRequest &request);

      /**
       * @summary Process a single conversational turn.
       *
       * @param request DialogueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DialogueResponse
       */
      FutureGenerator<Models::DialogueResponse> dialogueWithSSE(const Models::DialogueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Process a single conversational turn.
       *
       * @param request DialogueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DialogueResponse
       */
      Models::DialogueResponse dialogueWithOptions(const Models::DialogueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Process a single conversational turn.
       *
       * @param request DialogueRequest
       * @return DialogueResponse
       */
      Models::DialogueResponse dialogue(const Models::DialogueRequest &request);

      /**
       * @summary Disables the subscription for a Voice Navigator instance.
       *
       * @param request DisableSubscriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableSubscriptionResponse
       */
      Models::DisableSubscriptionResponse disableSubscriptionWithOptions(const Models::DisableSubscriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables the subscription for a Voice Navigator instance.
       *
       * @param request DisableSubscriptionRequest
       * @return DisableSubscriptionResponse
       */
      Models::DisableSubscriptionResponse disableSubscription(const Models::DisableSubscriptionRequest &request);

      /**
       * @summary Ends a session.
       *
       * @param request EndSessionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EndSessionResponse
       */
      Models::EndSessionResponse endSessionWithOptions(const Models::EndSessionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Ends a session.
       *
       * @param request EndSessionRequest
       * @return EndSessionResponse
       */
      Models::EndSessionResponse endSession(const Models::EndSessionRequest &request);

      /**
       * @summary Exports a specified script.
       *
       * @param request ExportScriptRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportScriptResponse
       */
      Models::ExportScriptResponse exportScriptWithOptions(const Models::ExportScriptRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Exports a specified script.
       *
       * @param request ExportScriptRequest
       * @return ExportScriptResponse
       */
      Models::ExportScriptResponse exportScript(const Models::ExportScriptRequest &request);

      /**
       * @summary Exports vocabularies.
       *
       * @param tmpReq ExportVocabularyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportVocabularyResponse
       */
      Models::ExportVocabularyResponse exportVocabularyWithOptions(const Models::ExportVocabularyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Exports vocabularies.
       *
       * @param request ExportVocabularyRequest
       * @return ExportVocabularyResponse
       */
      Models::ExportVocabularyResponse exportVocabulary(const Models::ExportVocabularyRequest &request);

      /**
       * @summary Generates temporary credentials and parameters to upload a file to Object Storage Service (OSS).
       *
       * @param request GenerateFileUploadParamsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateFileUploadParamsResponse
       */
      Models::GenerateFileUploadParamsResponse generateFileUploadParamsWithOptions(const Models::GenerateFileUploadParamsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates temporary credentials and parameters to upload a file to Object Storage Service (OSS).
       *
       * @param request GenerateFileUploadParamsRequest
       * @return GenerateFileUploadParamsResponse
       */
      Models::GenerateFileUploadParamsResponse generateFileUploadParams(const Models::GenerateFileUploadParamsRequest &request);

      /**
       * @summary Get call details.
       *
       * @param request GetCallDetailRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCallDetailRecordResponse
       */
      Models::GetCallDetailRecordResponse getCallDetailRecordWithOptions(const Models::GetCallDetailRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get call details.
       *
       * @param request GetCallDetailRecordRequest
       * @return GetCallDetailRecordResponse
       */
      Models::GetCallDetailRecordResponse getCallDetailRecord(const Models::GetCallDetailRecordRequest &request);

      /**
       * @summary Retrieves a data channel credential.
       *
       * @param request GetDataChannelCredentialRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataChannelCredentialResponse
       */
      Models::GetDataChannelCredentialResponse getDataChannelCredentialWithOptions(const Models::GetDataChannelCredentialRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a data channel credential.
       *
       * @param request GetDataChannelCredentialRequest
       * @return GetDataChannelCredentialResponse
       */
      Models::GetDataChannelCredentialResponse getDataChannelCredential(const Models::GetDataChannelCredentialRequest &request);

      /**
       * @summary Retrieves the metric trends chart for an instance.
       *
       * @description ## Operation description
       * - This API operation is used to query the script configuration details for a specific scenario, including settings for ASR, TTS, and dialog capabilities.
       * - No additional parameters are required in the request. The response contains configuration data for both the draft version and the published version.
       * - Check the `Data` field in the response to obtain detailed configuration information.
       *
       * @param request GetInstanceTrendingReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceTrendingReportResponse
       */
      Models::GetInstanceTrendingReportResponse getInstanceTrendingReportWithOptions(const Models::GetInstanceTrendingReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the metric trends chart for an instance.
       *
       * @description ## Operation description
       * - This API operation is used to query the script configuration details for a specific scenario, including settings for ASR, TTS, and dialog capabilities.
       * - No additional parameters are required in the request. The response contains configuration data for both the draft version and the published version.
       * - Check the `Data` field in the response to obtain detailed configuration information.
       *
       * @param request GetInstanceTrendingReportRequest
       * @return GetInstanceTrendingReportResponse
       */
      Models::GetInstanceTrendingReportResponse getInstanceTrendingReport(const Models::GetInstanceTrendingReportRequest &request);

      /**
       * @summary Retrieves real-time stats for an instance.
       *
       * @param request GetRealtimeInstanceStatsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRealtimeInstanceStatsResponse
       */
      Models::GetRealtimeInstanceStatsResponse getRealtimeInstanceStatsWithOptions(const Models::GetRealtimeInstanceStatsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves real-time stats for an instance.
       *
       * @param request GetRealtimeInstanceStatsRequest
       * @return GetRealtimeInstanceStatsResponse
       */
      Models::GetRealtimeInstanceStatsResponse getRealtimeInstanceStats(const Models::GetRealtimeInstanceStatsRequest &request);

      /**
       * @summary Queries the real-time statistics for a specified script.
       *
       * @param request GetRealtimeScriptStatsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRealtimeScriptStatsResponse
       */
      Models::GetRealtimeScriptStatsResponse getRealtimeScriptStatsWithOptions(const Models::GetRealtimeScriptStatsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the real-time statistics for a specified script.
       *
       * @param request GetRealtimeScriptStatsRequest
       * @return GetRealtimeScriptStatsResponse
       */
      Models::GetRealtimeScriptStatsResponse getRealtimeScriptStats(const Models::GetRealtimeScriptStatsRequest &request);

      /**
       * @summary Retrieves the download URL for a call recording.
       *
       * @param request GetRecordingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRecordingResponse
       */
      Models::GetRecordingResponse getRecordingWithOptions(const Models::GetRecordingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the download URL for a call recording.
       *
       * @param request GetRecordingRequest
       * @return GetRecordingResponse
       */
      Models::GetRecordingResponse getRecording(const Models::GetRecordingRequest &request);

      /**
       * @summary Retrieves the detailed configuration information for the draft and published versions of a specified scenario.
       *
       * @description ## Request description
       * - This operation queries the detailed script configuration for a specific scenario. The configuration includes settings for Automatic Speech Recognition (ASR), Text-to-Speech (TTS), and dialogue capabilities.
       * - No additional parameters are required for the request. The response contains the configuration data for both the draft and published versions.
       * - The detailed configuration information is returned in the `Data` field of the response.
       *
       * @param request GetScriptRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetScriptResponse
       */
      Models::GetScriptResponse getScriptWithOptions(const Models::GetScriptRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the detailed configuration information for the draft and published versions of a specified scenario.
       *
       * @description ## Request description
       * - This operation queries the detailed script configuration for a specific scenario. The configuration includes settings for Automatic Speech Recognition (ASR), Text-to-Speech (TTS), and dialogue capabilities.
       * - No additional parameters are required for the request. The response contains the configuration data for both the draft and published versions.
       * - The detailed configuration information is returned in the `Data` field of the response.
       *
       * @param request GetScriptRequest
       * @return GetScriptResponse
       */
      Models::GetScriptResponse getScript(const Models::GetScriptRequest &request);

      /**
       * @summary View the scenario metric trend chart
       *
       * @description ## Request
       * - This API returns the script configuration for a specific scenario, including settings for ASR, TTS, and conversational capability.
       * - This request requires no parameters. The response includes configuration data for both the draft and published versions.
       * - Check the `Data` field for configuration details.
       *
       * @param request GetScriptTrendingReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetScriptTrendingReportResponse
       */
      Models::GetScriptTrendingReportResponse getScriptTrendingReportWithOptions(const Models::GetScriptTrendingReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary View the scenario metric trend chart
       *
       * @description ## Request
       * - This API returns the script configuration for a specific scenario, including settings for ASR, TTS, and conversational capability.
       * - This request requires no parameters. The response includes configuration data for both the draft and published versions.
       * - Check the `Data` field for configuration details.
       *
       * @param request GetScriptTrendingReportRequest
       * @return GetScriptTrendingReportResponse
       */
      Models::GetScriptTrendingReportResponse getScriptTrendingReport(const Models::GetScriptTrendingReportRequest &request);

      /**
       * @summary Retrieves the details of a message queue (MQ) subscription.
       *
       * @param request GetSubscriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSubscriptionResponse
       */
      Models::GetSubscriptionResponse getSubscriptionWithOptions(const Models::GetSubscriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a message queue (MQ) subscription.
       *
       * @param request GetSubscriptionRequest
       * @return GetSubscriptionResponse
       */
      Models::GetSubscriptionResponse getSubscription(const Models::GetSubscriptionRequest &request);

      /**
       * @summary Gets the details of a specified vocabulary.
       *
       * @param request GetVocabularyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVocabularyResponse
       */
      Models::GetVocabularyResponse getVocabularyWithOptions(const Models::GetVocabularyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets the details of a specified vocabulary.
       *
       * @param request GetVocabularyRequest
       * @return GetVocabularyResponse
       */
      Models::GetVocabularyResponse getVocabulary(const Models::GetVocabularyRequest &request);

      /**
       * @summary Imports a custom vocabulary.
       *
       * @param request ImportVocabularyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportVocabularyResponse
       */
      Models::ImportVocabularyResponse importVocabularyWithOptions(const Models::ImportVocabularyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Imports a custom vocabulary.
       *
       * @param request ImportVocabularyRequest
       * @return ImportVocabularyResponse
       */
      Models::ImportVocabularyResponse importVocabulary(const Models::ImportVocabularyRequest &request);

      /**
       * @summary Retrieves a list of background music tracks.
       *
       * @param request ListBackgroundMusicsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBackgroundMusicsResponse
       */
      Models::ListBackgroundMusicsResponse listBackgroundMusicsWithOptions(const Models::ListBackgroundMusicsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of background music tracks.
       *
       * @param request ListBackgroundMusicsRequest
       * @return ListBackgroundMusicsResponse
       */
      Models::ListBackgroundMusicsResponse listBackgroundMusics(const Models::ListBackgroundMusicsRequest &request);

      /**
       * @summary System Management > Manual Service Provider Management > Query
       *
       * @param request ListCallCenterProvidersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCallCenterProvidersResponse
       */
      Models::ListCallCenterProvidersResponse listCallCenterProvidersWithOptions(const Models::ListCallCenterProvidersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary System Management > Manual Service Provider Management > Query
       *
       * @param request ListCallCenterProvidersRequest
       * @return ListCallCenterProvidersResponse
       */
      Models::ListCallCenterProvidersResponse listCallCenterProviders(const Models::ListCallCenterProvidersRequest &request);

      /**
       * @summary Gets the call list.
       *
       * @param tmpReq ListCallDetailRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCallDetailRecordsResponse
       */
      Models::ListCallDetailRecordsResponse listCallDetailRecordsWithOptions(const Models::ListCallDetailRecordsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets the call list.
       *
       * @param request ListCallDetailRecordsRequest
       * @return ListCallDetailRecordsResponse
       */
      Models::ListCallDetailRecordsResponse listCallDetailRecords(const Models::ListCallDetailRecordsRequest &request);

      /**
       * @summary Lists the cloned voices in an instance.
       *
       * @param request ListCloneVoiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCloneVoiceResponse
       */
      Models::ListCloneVoiceResponse listCloneVoiceWithOptions(const Models::ListCloneVoiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the cloned voices in an instance.
       *
       * @param request ListCloneVoiceRequest
       * @return ListCloneVoiceResponse
       */
      Models::ListCloneVoiceResponse listCloneVoice(const Models::ListCloneVoiceRequest &request);

      /**
       * @summary Lists the available clone voice models.
       *
       * @param request ListCloneVoiceModelsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCloneVoiceModelsResponse
       */
      Models::ListCloneVoiceModelsResponse listCloneVoiceModelsWithOptions(const Models::ListCloneVoiceModelsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the available clone voice models.
       *
       * @param request ListCloneVoiceModelsRequest
       * @return ListCloneVoiceModelsResponse
       */
      Models::ListCloneVoiceModelsResponse listCloneVoiceModels(const Models::ListCloneVoiceModelsRequest &request);

      /**
       * @summary Retrieve aggregated instance metrics
       *
       * @description ## Request
       * - This API retrieves the script configuration for a specific scenario, including settings for ASR, TTS, and dialogue capability.
       * - This request requires no parameters. The response includes the configuration data for both the draft and published versions.
       * - The configuration data is returned in the `Data` field of the response.
       *
       * @param tmpReq ListHistoricalInstanceReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHistoricalInstanceReportResponse
       */
      Models::ListHistoricalInstanceReportResponse listHistoricalInstanceReportWithOptions(const Models::ListHistoricalInstanceReportRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve aggregated instance metrics
       *
       * @description ## Request
       * - This API retrieves the script configuration for a specific scenario, including settings for ASR, TTS, and dialogue capability.
       * - This request requires no parameters. The response includes the configuration data for both the draft and published versions.
       * - The configuration data is returned in the `Data` field of the response.
       *
       * @param request ListHistoricalInstanceReportRequest
       * @return ListHistoricalInstanceReportResponse
       */
      Models::ListHistoricalInstanceReportResponse listHistoricalInstanceReport(const Models::ListHistoricalInstanceReportRequest &request);

      /**
       * @summary Get scene metric summary data
       *
       * @param tmpReq ListHistoricalScriptReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHistoricalScriptReportResponse
       */
      Models::ListHistoricalScriptReportResponse listHistoricalScriptReportWithOptions(const Models::ListHistoricalScriptReportRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get scene metric summary data
       *
       * @param request ListHistoricalScriptReportRequest
       * @return ListHistoricalScriptReportResponse
       */
      Models::ListHistoricalScriptReportResponse listHistoricalScriptReport(const Models::ListHistoricalScriptReportRequest &request);

      /**
       * @summary Lists the instructions that are configured for a Digital Employee.
       *
       * @param request ListInstructionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstructionsResponse
       */
      Models::ListInstructionsResponse listInstructionsWithOptions(const Models::ListInstructionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the instructions that are configured for a Digital Employee.
       *
       * @param request ListInstructionsRequest
       * @return ListInstructionsResponse
       */
      Models::ListInstructionsResponse listInstructions(const Models::ListInstructionsRequest &request);

      /**
       * @summary Get the language model configuration.
       *
       * @param request ListLlmAccessProfilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLlmAccessProfilesResponse
       */
      Models::ListLlmAccessProfilesResponse listLlmAccessProfilesWithOptions(const Models::ListLlmAccessProfilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get the language model configuration.
       *
       * @param request ListLlmAccessProfilesRequest
       * @return ListLlmAccessProfilesResponse
       */
      Models::ListLlmAccessProfilesResponse listLlmAccessProfiles(const Models::ListLlmAccessProfilesRequest &request);

      /**
       * @summary Lists the available NLU models.
       *
       * @param request ListNluModelsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNluModelsResponse
       */
      Models::ListNluModelsResponse listNluModelsWithOptions(const Models::ListNluModelsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the available NLU models.
       *
       * @param request ListNluModelsRequest
       * @return ListNluModelsResponse
       */
      Models::ListNluModelsResponse listNluModels(const Models::ListNluModelsRequest &request);

      /**
       * @summary Retrieves real-time statistics for instances.
       *
       * @param tmpReq ListRealtimeInstanceStatsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRealtimeInstanceStatsResponse
       */
      Models::ListRealtimeInstanceStatsResponse listRealtimeInstanceStatsWithOptions(const Models::ListRealtimeInstanceStatsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves real-time statistics for instances.
       *
       * @param request ListRealtimeInstanceStatsRequest
       * @return ListRealtimeInstanceStatsResponse
       */
      Models::ListRealtimeInstanceStatsResponse listRealtimeInstanceStats(const Models::ListRealtimeInstanceStatsRequest &request);

      /**
       * @summary Retrieves a list of scenario configuration templates.
       *
       * @param request ListScriptProfileTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListScriptProfileTemplatesResponse
       */
      Models::ListScriptProfileTemplatesResponse listScriptProfileTemplatesWithOptions(const Models::ListScriptProfileTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of scenario configuration templates.
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
       * @summary Retrieves a list of variables.
       *
       * @param request ListVariableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVariableResponse
       */
      Models::ListVariableResponse listVariableWithOptions(const Models::ListVariableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of variables.
       *
       * @param request ListVariableRequest
       * @return ListVariableResponse
       */
      Models::ListVariableResponse listVariable(const Models::ListVariableRequest &request);

      /**
       * @summary Retrieves a list of vocabularies for a specified instance.
       *
       * @param request ListVocabularyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVocabularyResponse
       */
      Models::ListVocabularyResponse listVocabularyWithOptions(const Models::ListVocabularyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of vocabularies for a specified instance.
       *
       * @param request ListVocabularyRequest
       * @return ListVocabularyResponse
       */
      Models::ListVocabularyResponse listVocabulary(const Models::ListVocabularyRequest &request);

      /**
       * @summary Retrieves the details of an instance.
       *
       * @param request ListVoiceAccessProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVoiceAccessProfileResponse
       */
      Models::ListVoiceAccessProfileResponse listVoiceAccessProfileWithOptions(const Models::ListVoiceAccessProfileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of an instance.
       *
       * @param request ListVoiceAccessProfileRequest
       * @return ListVoiceAccessProfileResponse
       */
      Models::ListVoiceAccessProfileResponse listVoiceAccessProfile(const Models::ListVoiceAccessProfileRequest &request);

      /**
       * @summary Retrieves a list of engines.
       *
       * @param request ListVoiceEnginesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVoiceEnginesResponse
       */
      Models::ListVoiceEnginesResponse listVoiceEnginesWithOptions(const Models::ListVoiceEnginesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of engines.
       *
       * @param request ListVoiceEnginesRequest
       * @return ListVoiceEnginesResponse
       */
      Models::ListVoiceEnginesResponse listVoiceEngines(const Models::ListVoiceEnginesRequest &request);

      /**
       * @summary Retrieves a list of available voices.
       *
       * @param request ListVoicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVoicesResponse
       */
      Models::ListVoicesResponse listVoicesWithOptions(const Models::ListVoicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of available voices.
       *
       * @param request ListVoicesRequest
       * @return ListVoicesResponse
       */
      Models::ListVoicesResponse listVoices(const Models::ListVoicesRequest &request);

      /**
       * @summary Creates an instance.
       *
       * @param tmpReq PreviewVoiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PreviewVoiceResponse
       */
      Models::PreviewVoiceResponse previewVoiceWithOptions(const Models::PreviewVoiceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an instance.
       *
       * @param request PreviewVoiceRequest
       * @return PreviewVoiceResponse
       */
      Models::PreviewVoiceResponse previewVoice(const Models::PreviewVoiceRequest &request);

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
       * @summary Updates an agent service provider in system administration.
       *
       * @param request UpdateCallCenterProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCallCenterProviderResponse
       */
      Models::UpdateCallCenterProviderResponse updateCallCenterProviderWithOptions(const Models::UpdateCallCenterProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an agent service provider in system administration.
       *
       * @param request UpdateCallCenterProviderRequest
       * @return UpdateCallCenterProviderResponse
       */
      Models::UpdateCallCenterProviderResponse updateCallCenterProvider(const Models::UpdateCallCenterProviderRequest &request);

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
       * @summary Updates the global configuration of a specific instruction for a Digital Employee.
       *
       * @param request UpdateInstructionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInstructionResponse
       */
      Models::UpdateInstructionResponse updateInstructionWithOptions(const Models::UpdateInstructionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the global configuration of a specific instruction for a Digital Employee.
       *
       * @param request UpdateInstructionRequest
       * @return UpdateInstructionResponse
       */
      Models::UpdateInstructionResponse updateInstruction(const Models::UpdateInstructionRequest &request);

      /**
       * @summary Updates the language model configuration.
       *
       * @param tmpReq UpdateLlmAccessProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLlmAccessProfileResponse
       */
      Models::UpdateLlmAccessProfileResponse updateLlmAccessProfileWithOptions(const Models::UpdateLlmAccessProfileRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the language model configuration.
       *
       * @param request UpdateLlmAccessProfileRequest
       * @return UpdateLlmAccessProfileResponse
       */
      Models::UpdateLlmAccessProfileResponse updateLlmAccessProfile(const Models::UpdateLlmAccessProfileRequest &request);

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
       * @summary Creates or updates the Message Queue (MQ) configuration.
       *
       * @param tmpReq UpdateSubscriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSubscriptionResponse
       */
      Models::UpdateSubscriptionResponse updateSubscriptionWithOptions(const Models::UpdateSubscriptionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates or updates the Message Queue (MQ) configuration.
       *
       * @param request UpdateSubscriptionRequest
       * @return UpdateSubscriptionResponse
       */
      Models::UpdateSubscriptionResponse updateSubscription(const Models::UpdateSubscriptionRequest &request);

      /**
       * @summary Updates a variable.
       *
       * @param request UpdateVariableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateVariableResponse
       */
      Models::UpdateVariableResponse updateVariableWithOptions(const Models::UpdateVariableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a variable.
       *
       * @param request UpdateVariableRequest
       * @return UpdateVariableResponse
       */
      Models::UpdateVariableResponse updateVariable(const Models::UpdateVariableRequest &request);

      /**
       * @summary Updates an instance.
       *
       * @param tmpReq UpdateVocabularyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateVocabularyResponse
       */
      Models::UpdateVocabularyResponse updateVocabularyWithOptions(const Models::UpdateVocabularyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an instance.
       *
       * @param request UpdateVocabularyRequest
       * @return UpdateVocabularyResponse
       */
      Models::UpdateVocabularyResponse updateVocabulary(const Models::UpdateVocabularyRequest &request);

      /**
       * @summary Updates a voice access profile.
       *
       * @param tmpReq UpdateVoiceAccessProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateVoiceAccessProfileResponse
       */
      Models::UpdateVoiceAccessProfileResponse updateVoiceAccessProfileWithOptions(const Models::UpdateVoiceAccessProfileRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a voice access profile.
       *
       * @param request UpdateVoiceAccessProfileRequest
       * @return UpdateVoiceAccessProfileResponse
       */
      Models::UpdateVoiceAccessProfileResponse updateVoiceAccessProfile(const Models::UpdateVoiceAccessProfileRequest &request);
  };
} // namespace AlibabaCloud
} // namespace VoiceNavigator20251111
#endif
