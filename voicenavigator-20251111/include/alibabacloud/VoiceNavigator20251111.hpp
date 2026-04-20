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
       * @summary 开启会话
       *
       * @param request BeginSessionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BeginSessionResponse
       */
      FutureGenerator<Models::BeginSessionResponse> beginSessionWithSSE(const Models::BeginSessionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 开启会话
       *
       * @param request BeginSessionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BeginSessionResponse
       */
      Models::BeginSessionResponse beginSessionWithOptions(const Models::BeginSessionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 开启会话
       *
       * @param request BeginSessionRequest
       * @return BeginSessionResponse
       */
      Models::BeginSessionResponse beginSession(const Models::BeginSessionRequest &request);

      /**
       * @summary 发起呼叫
       *
       * @param request BridgeWebCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BridgeWebCallResponse
       */
      Models::BridgeWebCallResponse bridgeWebCallWithOptions(const Models::BridgeWebCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 发起呼叫
       *
       * @param request BridgeWebCallRequest
       * @return BridgeWebCallResponse
       */
      Models::BridgeWebCallResponse bridgeWebCall(const Models::BridgeWebCallRequest &request);

      /**
       * @summary 创建服务提供商
       *
       * @param request CreateCallCenterProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCallCenterProviderResponse
       */
      Models::CreateCallCenterProviderResponse createCallCenterProviderWithOptions(const Models::CreateCallCenterProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建服务提供商
       *
       * @param request CreateCallCenterProviderRequest
       * @return CreateCallCenterProviderResponse
       */
      Models::CreateCallCenterProviderResponse createCallCenterProvider(const Models::CreateCallCenterProviderRequest &request);

      /**
       * @summary 创建实例
       *
       * @param request CreateCloneVoiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCloneVoiceResponse
       */
      Models::CreateCloneVoiceResponse createCloneVoiceWithOptions(const Models::CreateCloneVoiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建实例
       *
       * @param request CreateCloneVoiceRequest
       * @return CreateCloneVoiceResponse
       */
      Models::CreateCloneVoiceResponse createCloneVoice(const Models::CreateCloneVoiceRequest &request);

      /**
       * @summary 创建指令
       *
       * @param request CreateInstructionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstructionResponse
       */
      Models::CreateInstructionResponse createInstructionWithOptions(const Models::CreateInstructionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建指令
       *
       * @param request CreateInstructionRequest
       * @return CreateInstructionResponse
       */
      Models::CreateInstructionResponse createInstruction(const Models::CreateInstructionRequest &request);

      /**
       * @summary 创建语言模型配置信息
       *
       * @param tmpReq CreateLlmAccessProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLlmAccessProfileResponse
       */
      Models::CreateLlmAccessProfileResponse createLlmAccessProfileWithOptions(const Models::CreateLlmAccessProfileRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建语言模型配置信息
       *
       * @param request CreateLlmAccessProfileRequest
       * @return CreateLlmAccessProfileResponse
       */
      Models::CreateLlmAccessProfileResponse createLlmAccessProfile(const Models::CreateLlmAccessProfileRequest &request);

      /**
       * @summary 创建实例
       *
       * @param request CreateScriptRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateScriptResponse
       */
      Models::CreateScriptResponse createScriptWithOptions(const Models::CreateScriptRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建实例
       *
       * @param request CreateScriptRequest
       * @return CreateScriptResponse
       */
      Models::CreateScriptResponse createScript(const Models::CreateScriptRequest &request);

      /**
       * @summary 创建场景配置
       *
       * @param tmpReq CreateScriptVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateScriptVersionResponse
       */
      Models::CreateScriptVersionResponse createScriptVersionWithOptions(const Models::CreateScriptVersionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建场景配置
       *
       * @param request CreateScriptVersionRequest
       * @return CreateScriptVersionResponse
       */
      Models::CreateScriptVersionResponse createScriptVersion(const Models::CreateScriptVersionRequest &request);

      /**
       * @summary 创建变量
       *
       * @param request CreateVariableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVariableResponse
       */
      Models::CreateVariableResponse createVariableWithOptions(const Models::CreateVariableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建变量
       *
       * @param request CreateVariableRequest
       * @return CreateVariableResponse
       */
      Models::CreateVariableResponse createVariable(const Models::CreateVariableRequest &request);

      /**
       * @summary 创建实例
       *
       * @param tmpReq CreateVocabularyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVocabularyResponse
       */
      Models::CreateVocabularyResponse createVocabularyWithOptions(const Models::CreateVocabularyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建实例
       *
       * @param request CreateVocabularyRequest
       * @return CreateVocabularyResponse
       */
      Models::CreateVocabularyResponse createVocabulary(const Models::CreateVocabularyRequest &request);

      /**
       * @summary 创建实例
       *
       * @param tmpReq CreateVoiceAccessProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVoiceAccessProfileResponse
       */
      Models::CreateVoiceAccessProfileResponse createVoiceAccessProfileWithOptions(const Models::CreateVoiceAccessProfileRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建实例
       *
       * @param request CreateVoiceAccessProfileRequest
       * @return CreateVoiceAccessProfileResponse
       */
      Models::CreateVoiceAccessProfileResponse createVoiceAccessProfile(const Models::CreateVoiceAccessProfileRequest &request);

      /**
       * @summary 删除服务提供商
       *
       * @param request DeleteCallCenterProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCallCenterProviderResponse
       */
      Models::DeleteCallCenterProviderResponse deleteCallCenterProviderWithOptions(const Models::DeleteCallCenterProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除服务提供商
       *
       * @param request DeleteCallCenterProviderRequest
       * @return DeleteCallCenterProviderResponse
       */
      Models::DeleteCallCenterProviderResponse deleteCallCenterProvider(const Models::DeleteCallCenterProviderRequest &request);

      /**
       * @summary 删除场景
       *
       * @param request DeleteCloneVoiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCloneVoiceResponse
       */
      Models::DeleteCloneVoiceResponse deleteCloneVoiceWithOptions(const Models::DeleteCloneVoiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除场景
       *
       * @param request DeleteCloneVoiceRequest
       * @return DeleteCloneVoiceResponse
       */
      Models::DeleteCloneVoiceResponse deleteCloneVoice(const Models::DeleteCloneVoiceRequest &request);

      /**
       * @summary 删除指令
       *
       * @param request DeleteInstructionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteInstructionResponse
       */
      Models::DeleteInstructionResponse deleteInstructionWithOptions(const Models::DeleteInstructionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除指令
       *
       * @param request DeleteInstructionRequest
       * @return DeleteInstructionResponse
       */
      Models::DeleteInstructionResponse deleteInstruction(const Models::DeleteInstructionRequest &request);

      /**
       * @summary 删除语言模型配置信息
       *
       * @param request DeleteLlmAccessProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLlmAccessProfileResponse
       */
      Models::DeleteLlmAccessProfileResponse deleteLlmAccessProfileWithOptions(const Models::DeleteLlmAccessProfileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除语言模型配置信息
       *
       * @param request DeleteLlmAccessProfileRequest
       * @return DeleteLlmAccessProfileResponse
       */
      Models::DeleteLlmAccessProfileResponse deleteLlmAccessProfile(const Models::DeleteLlmAccessProfileRequest &request);

      /**
       * @summary 删除场景
       *
       * @param request DeleteScriptRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteScriptResponse
       */
      Models::DeleteScriptResponse deleteScriptWithOptions(const Models::DeleteScriptRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除场景
       *
       * @param request DeleteScriptRequest
       * @return DeleteScriptResponse
       */
      Models::DeleteScriptResponse deleteScript(const Models::DeleteScriptRequest &request);

      /**
       * @summary 删除变量
       *
       * @param request DeleteVariableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVariableResponse
       */
      Models::DeleteVariableResponse deleteVariableWithOptions(const Models::DeleteVariableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除变量
       *
       * @param request DeleteVariableRequest
       * @return DeleteVariableResponse
       */
      Models::DeleteVariableResponse deleteVariable(const Models::DeleteVariableRequest &request);

      /**
       * @summary 删除场景
       *
       * @param request DeleteVocabularyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVocabularyResponse
       */
      Models::DeleteVocabularyResponse deleteVocabularyWithOptions(const Models::DeleteVocabularyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除场景
       *
       * @param request DeleteVocabularyRequest
       * @return DeleteVocabularyResponse
       */
      Models::DeleteVocabularyResponse deleteVocabulary(const Models::DeleteVocabularyRequest &request);

      /**
       * @summary 删除场景
       *
       * @param request DeleteVoiceAccessProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVoiceAccessProfileResponse
       */
      Models::DeleteVoiceAccessProfileResponse deleteVoiceAccessProfileWithOptions(const Models::DeleteVoiceAccessProfileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除场景
       *
       * @param request DeleteVoiceAccessProfileRequest
       * @return DeleteVoiceAccessProfileResponse
       */
      Models::DeleteVoiceAccessProfileResponse deleteVoiceAccessProfile(const Models::DeleteVoiceAccessProfileRequest &request);

      /**
       * @summary 开启会话
       *
       * @param request DialogueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DialogueResponse
       */
      FutureGenerator<Models::DialogueResponse> dialogueWithSSE(const Models::DialogueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 开启会话
       *
       * @param request DialogueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DialogueResponse
       */
      Models::DialogueResponse dialogueWithOptions(const Models::DialogueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 开启会话
       *
       * @param request DialogueRequest
       * @return DialogueResponse
       */
      Models::DialogueResponse dialogue(const Models::DialogueRequest &request);

      /**
       * @summary 禁用消息订阅
       *
       * @param request DisableSubscriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableSubscriptionResponse
       */
      Models::DisableSubscriptionResponse disableSubscriptionWithOptions(const Models::DisableSubscriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 禁用消息订阅
       *
       * @param request DisableSubscriptionRequest
       * @return DisableSubscriptionResponse
       */
      Models::DisableSubscriptionResponse disableSubscription(const Models::DisableSubscriptionRequest &request);

      /**
       * @summary 结束会话
       *
       * @param request EndSessionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EndSessionResponse
       */
      Models::EndSessionResponse endSessionWithOptions(const Models::EndSessionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 结束会话
       *
       * @param request EndSessionRequest
       * @return EndSessionResponse
       */
      Models::EndSessionResponse endSession(const Models::EndSessionRequest &request);

      /**
       * @summary 获取实例详情
       *
       * @param request ExportScriptRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportScriptResponse
       */
      Models::ExportScriptResponse exportScriptWithOptions(const Models::ExportScriptRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取实例详情
       *
       * @param request ExportScriptRequest
       * @return ExportScriptResponse
       */
      Models::ExportScriptResponse exportScript(const Models::ExportScriptRequest &request);

      /**
       * @summary 导出热词
       *
       * @param tmpReq ExportVocabularyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportVocabularyResponse
       */
      Models::ExportVocabularyResponse exportVocabularyWithOptions(const Models::ExportVocabularyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 导出热词
       *
       * @param request ExportVocabularyRequest
       * @return ExportVocabularyResponse
       */
      Models::ExportVocabularyResponse exportVocabulary(const Models::ExportVocabularyRequest &request);

      /**
       * @summary 获取实例详情
       *
       * @param request GenerateFileUploadParamsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateFileUploadParamsResponse
       */
      Models::GenerateFileUploadParamsResponse generateFileUploadParamsWithOptions(const Models::GenerateFileUploadParamsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取实例详情
       *
       * @param request GenerateFileUploadParamsRequest
       * @return GenerateFileUploadParamsResponse
       */
      Models::GenerateFileUploadParamsResponse generateFileUploadParams(const Models::GenerateFileUploadParamsRequest &request);

      /**
       * @summary 获取通话详情
       *
       * @param request GetCallDetailRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCallDetailRecordResponse
       */
      Models::GetCallDetailRecordResponse getCallDetailRecordWithOptions(const Models::GetCallDetailRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取通话详情
       *
       * @param request GetCallDetailRecordRequest
       * @return GetCallDetailRecordResponse
       */
      Models::GetCallDetailRecordResponse getCallDetailRecord(const Models::GetCallDetailRecordRequest &request);

      /**
       * @summary 获取语音对话参数
       *
       * @param request GetDataChannelCredentialRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataChannelCredentialResponse
       */
      Models::GetDataChannelCredentialResponse getDataChannelCredentialWithOptions(const Models::GetDataChannelCredentialRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取语音对话参数
       *
       * @param request GetDataChannelCredentialRequest
       * @return GetDataChannelCredentialResponse
       */
      Models::GetDataChannelCredentialResponse getDataChannelCredential(const Models::GetDataChannelCredentialRequest &request);

      /**
       * @summary 获取实例实时指标
       *
       * @param request GetRealtimeInstanceStatsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRealtimeInstanceStatsResponse
       */
      Models::GetRealtimeInstanceStatsResponse getRealtimeInstanceStatsWithOptions(const Models::GetRealtimeInstanceStatsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取实例实时指标
       *
       * @param request GetRealtimeInstanceStatsRequest
       * @return GetRealtimeInstanceStatsResponse
       */
      Models::GetRealtimeInstanceStatsResponse getRealtimeInstanceStats(const Models::GetRealtimeInstanceStatsRequest &request);

      /**
       * @summary 获取录音
       *
       * @param request GetRecordingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRecordingResponse
       */
      Models::GetRecordingResponse getRecordingWithOptions(const Models::GetRecordingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取录音
       *
       * @param request GetRecordingRequest
       * @return GetRecordingResponse
       */
      Models::GetRecordingResponse getRecording(const Models::GetRecordingRequest &request);

      /**
       * @summary 获取实例详情
       *
       * @param request GetScriptRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetScriptResponse
       */
      Models::GetScriptResponse getScriptWithOptions(const Models::GetScriptRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取实例详情
       *
       * @param request GetScriptRequest
       * @return GetScriptResponse
       */
      Models::GetScriptResponse getScript(const Models::GetScriptRequest &request);

      /**
       * @summary 获取MQ配置
       *
       * @param request GetSubscriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSubscriptionResponse
       */
      Models::GetSubscriptionResponse getSubscriptionWithOptions(const Models::GetSubscriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取MQ配置
       *
       * @param request GetSubscriptionRequest
       * @return GetSubscriptionResponse
       */
      Models::GetSubscriptionResponse getSubscription(const Models::GetSubscriptionRequest &request);

      /**
       * @summary 获取实例详情
       *
       * @param request GetVocabularyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVocabularyResponse
       */
      Models::GetVocabularyResponse getVocabularyWithOptions(const Models::GetVocabularyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取实例详情
       *
       * @param request GetVocabularyRequest
       * @return GetVocabularyResponse
       */
      Models::GetVocabularyResponse getVocabulary(const Models::GetVocabularyRequest &request);

      /**
       * @summary 导入热词
       *
       * @param request ImportVocabularyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportVocabularyResponse
       */
      Models::ImportVocabularyResponse importVocabularyWithOptions(const Models::ImportVocabularyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 导入热词
       *
       * @param request ImportVocabularyRequest
       * @return ImportVocabularyResponse
       */
      Models::ImportVocabularyResponse importVocabulary(const Models::ImportVocabularyRequest &request);

      /**
       * @summary 获取背景音列表
       *
       * @param request ListBackgroundMusicsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBackgroundMusicsResponse
       */
      Models::ListBackgroundMusicsResponse listBackgroundMusicsWithOptions(const Models::ListBackgroundMusicsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取背景音列表
       *
       * @param request ListBackgroundMusicsRequest
       * @return ListBackgroundMusicsResponse
       */
      Models::ListBackgroundMusicsResponse listBackgroundMusics(const Models::ListBackgroundMusicsRequest &request);

      /**
       * @summary 查询服务提供商
       *
       * @param request ListCallCenterProvidersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCallCenterProvidersResponse
       */
      Models::ListCallCenterProvidersResponse listCallCenterProvidersWithOptions(const Models::ListCallCenterProvidersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询服务提供商
       *
       * @param request ListCallCenterProvidersRequest
       * @return ListCallCenterProvidersResponse
       */
      Models::ListCallCenterProvidersResponse listCallCenterProviders(const Models::ListCallCenterProvidersRequest &request);

      /**
       * @summary 获取实例详情
       *
       * @param tmpReq ListCallDetailRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCallDetailRecordsResponse
       */
      Models::ListCallDetailRecordsResponse listCallDetailRecordsWithOptions(const Models::ListCallDetailRecordsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取实例详情
       *
       * @param request ListCallDetailRecordsRequest
       * @return ListCallDetailRecordsResponse
       */
      Models::ListCallDetailRecordsResponse listCallDetailRecords(const Models::ListCallDetailRecordsRequest &request);

      /**
       * @summary 获取实例详情
       *
       * @param request ListCloneVoiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCloneVoiceResponse
       */
      Models::ListCloneVoiceResponse listCloneVoiceWithOptions(const Models::ListCloneVoiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取实例详情
       *
       * @param request ListCloneVoiceRequest
       * @return ListCloneVoiceResponse
       */
      Models::ListCloneVoiceResponse listCloneVoice(const Models::ListCloneVoiceRequest &request);

      /**
       * @summary 获取克隆音色可用模型列表
       *
       * @param request ListCloneVoiceModelsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCloneVoiceModelsResponse
       */
      Models::ListCloneVoiceModelsResponse listCloneVoiceModelsWithOptions(const Models::ListCloneVoiceModelsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取克隆音色可用模型列表
       *
       * @param request ListCloneVoiceModelsRequest
       * @return ListCloneVoiceModelsResponse
       */
      Models::ListCloneVoiceModelsResponse listCloneVoiceModels(const Models::ListCloneVoiceModelsRequest &request);

      /**
       * @summary 查询指令
       *
       * @param request ListInstructionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstructionsResponse
       */
      Models::ListInstructionsResponse listInstructionsWithOptions(const Models::ListInstructionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询指令
       *
       * @param request ListInstructionsRequest
       * @return ListInstructionsResponse
       */
      Models::ListInstructionsResponse listInstructions(const Models::ListInstructionsRequest &request);

      /**
       * @summary 获取语言模型配置信息
       *
       * @param request ListLlmAccessProfilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLlmAccessProfilesResponse
       */
      Models::ListLlmAccessProfilesResponse listLlmAccessProfilesWithOptions(const Models::ListLlmAccessProfilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取语言模型配置信息
       *
       * @param request ListLlmAccessProfilesRequest
       * @return ListLlmAccessProfilesResponse
       */
      Models::ListLlmAccessProfilesResponse listLlmAccessProfiles(const Models::ListLlmAccessProfilesRequest &request);

      /**
       * @summary 获取对话模型列表
       *
       * @param request ListNluModelsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNluModelsResponse
       */
      Models::ListNluModelsResponse listNluModelsWithOptions(const Models::ListNluModelsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取对话模型列表
       *
       * @param request ListNluModelsRequest
       * @return ListNluModelsResponse
       */
      Models::ListNluModelsResponse listNluModels(const Models::ListNluModelsRequest &request);

      /**
       * @summary 获取场景配置模板列表
       *
       * @param request ListScriptProfileTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListScriptProfileTemplatesResponse
       */
      Models::ListScriptProfileTemplatesResponse listScriptProfileTemplatesWithOptions(const Models::ListScriptProfileTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取场景配置模板列表
       *
       * @param request ListScriptProfileTemplatesRequest
       * @return ListScriptProfileTemplatesResponse
       */
      Models::ListScriptProfileTemplatesResponse listScriptProfileTemplates(const Models::ListScriptProfileTemplatesRequest &request);

      /**
       * @summary 获取实例详情
       *
       * @param tmpReq ListScriptsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListScriptsResponse
       */
      Models::ListScriptsResponse listScriptsWithOptions(const Models::ListScriptsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取实例详情
       *
       * @param request ListScriptsRequest
       * @return ListScriptsResponse
       */
      Models::ListScriptsResponse listScripts(const Models::ListScriptsRequest &request);

      /**
       * @summary 获取变量列表
       *
       * @param request ListVariableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVariableResponse
       */
      Models::ListVariableResponse listVariableWithOptions(const Models::ListVariableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取变量列表
       *
       * @param request ListVariableRequest
       * @return ListVariableResponse
       */
      Models::ListVariableResponse listVariable(const Models::ListVariableRequest &request);

      /**
       * @summary 获取实例详情
       *
       * @param request ListVocabularyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVocabularyResponse
       */
      Models::ListVocabularyResponse listVocabularyWithOptions(const Models::ListVocabularyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取实例详情
       *
       * @param request ListVocabularyRequest
       * @return ListVocabularyResponse
       */
      Models::ListVocabularyResponse listVocabulary(const Models::ListVocabularyRequest &request);

      /**
       * @summary 获取实例详情
       *
       * @param request ListVoiceAccessProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVoiceAccessProfileResponse
       */
      Models::ListVoiceAccessProfileResponse listVoiceAccessProfileWithOptions(const Models::ListVoiceAccessProfileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取实例详情
       *
       * @param request ListVoiceAccessProfileRequest
       * @return ListVoiceAccessProfileResponse
       */
      Models::ListVoiceAccessProfileResponse listVoiceAccessProfile(const Models::ListVoiceAccessProfileRequest &request);

      /**
       * @summary 获取引擎列表
       *
       * @param request ListVoiceEnginesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVoiceEnginesResponse
       */
      Models::ListVoiceEnginesResponse listVoiceEnginesWithOptions(const Models::ListVoiceEnginesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取引擎列表
       *
       * @param request ListVoiceEnginesRequest
       * @return ListVoiceEnginesResponse
       */
      Models::ListVoiceEnginesResponse listVoiceEngines(const Models::ListVoiceEnginesRequest &request);

      /**
       * @summary 获取实例详情
       *
       * @param request ListVoicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVoicesResponse
       */
      Models::ListVoicesResponse listVoicesWithOptions(const Models::ListVoicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取实例详情
       *
       * @param request ListVoicesRequest
       * @return ListVoicesResponse
       */
      Models::ListVoicesResponse listVoices(const Models::ListVoicesRequest &request);

      /**
       * @summary 试听
       *
       * @param tmpReq PreviewVoiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PreviewVoiceResponse
       */
      Models::PreviewVoiceResponse previewVoiceWithOptions(const Models::PreviewVoiceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 试听
       *
       * @param request PreviewVoiceRequest
       * @return PreviewVoiceResponse
       */
      Models::PreviewVoiceResponse previewVoice(const Models::PreviewVoiceRequest &request);

      /**
       * @summary 更新实例
       *
       * @param request PublishScriptRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishScriptResponse
       */
      Models::PublishScriptResponse publishScriptWithOptions(const Models::PublishScriptRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新实例
       *
       * @param request PublishScriptRequest
       * @return PublishScriptResponse
       */
      Models::PublishScriptResponse publishScript(const Models::PublishScriptRequest &request);

      /**
       * @summary 修改服务提供商
       *
       * @param request UpdateCallCenterProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCallCenterProviderResponse
       */
      Models::UpdateCallCenterProviderResponse updateCallCenterProviderWithOptions(const Models::UpdateCallCenterProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改服务提供商
       *
       * @param request UpdateCallCenterProviderRequest
       * @return UpdateCallCenterProviderResponse
       */
      Models::UpdateCallCenterProviderResponse updateCallCenterProvider(const Models::UpdateCallCenterProviderRequest &request);

      /**
       * @summary 更新实例
       *
       * @param request UpdateCloneVoiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCloneVoiceResponse
       */
      Models::UpdateCloneVoiceResponse updateCloneVoiceWithOptions(const Models::UpdateCloneVoiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新实例
       *
       * @param request UpdateCloneVoiceRequest
       * @return UpdateCloneVoiceResponse
       */
      Models::UpdateCloneVoiceResponse updateCloneVoice(const Models::UpdateCloneVoiceRequest &request);

      /**
       * @summary 修改指令
       *
       * @param request UpdateInstructionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInstructionResponse
       */
      Models::UpdateInstructionResponse updateInstructionWithOptions(const Models::UpdateInstructionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改指令
       *
       * @param request UpdateInstructionRequest
       * @return UpdateInstructionResponse
       */
      Models::UpdateInstructionResponse updateInstruction(const Models::UpdateInstructionRequest &request);

      /**
       * @summary 更新语言模型配置信息
       *
       * @param tmpReq UpdateLlmAccessProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLlmAccessProfileResponse
       */
      Models::UpdateLlmAccessProfileResponse updateLlmAccessProfileWithOptions(const Models::UpdateLlmAccessProfileRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新语言模型配置信息
       *
       * @param request UpdateLlmAccessProfileRequest
       * @return UpdateLlmAccessProfileResponse
       */
      Models::UpdateLlmAccessProfileResponse updateLlmAccessProfile(const Models::UpdateLlmAccessProfileRequest &request);

      /**
       * @summary 更新实例
       *
       * @param request UpdateScriptRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateScriptResponse
       */
      Models::UpdateScriptResponse updateScriptWithOptions(const Models::UpdateScriptRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新实例
       *
       * @param request UpdateScriptRequest
       * @return UpdateScriptResponse
       */
      Models::UpdateScriptResponse updateScript(const Models::UpdateScriptRequest &request);

      /**
       * @summary 创建或更新MQ配置
       *
       * @param tmpReq UpdateSubscriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSubscriptionResponse
       */
      Models::UpdateSubscriptionResponse updateSubscriptionWithOptions(const Models::UpdateSubscriptionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建或更新MQ配置
       *
       * @param request UpdateSubscriptionRequest
       * @return UpdateSubscriptionResponse
       */
      Models::UpdateSubscriptionResponse updateSubscription(const Models::UpdateSubscriptionRequest &request);

      /**
       * @summary 更新变量
       *
       * @param request UpdateVariableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateVariableResponse
       */
      Models::UpdateVariableResponse updateVariableWithOptions(const Models::UpdateVariableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新变量
       *
       * @param request UpdateVariableRequest
       * @return UpdateVariableResponse
       */
      Models::UpdateVariableResponse updateVariable(const Models::UpdateVariableRequest &request);

      /**
       * @summary 更新实例
       *
       * @param tmpReq UpdateVocabularyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateVocabularyResponse
       */
      Models::UpdateVocabularyResponse updateVocabularyWithOptions(const Models::UpdateVocabularyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新实例
       *
       * @param request UpdateVocabularyRequest
       * @return UpdateVocabularyResponse
       */
      Models::UpdateVocabularyResponse updateVocabulary(const Models::UpdateVocabularyRequest &request);

      /**
       * @summary 更新实例
       *
       * @param tmpReq UpdateVoiceAccessProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateVoiceAccessProfileResponse
       */
      Models::UpdateVoiceAccessProfileResponse updateVoiceAccessProfileWithOptions(const Models::UpdateVoiceAccessProfileRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新实例
       *
       * @param request UpdateVoiceAccessProfileRequest
       * @return UpdateVoiceAccessProfileResponse
       */
      Models::UpdateVoiceAccessProfileResponse updateVoiceAccessProfile(const Models::UpdateVoiceAccessProfileRequest &request);
  };
} // namespace AlibabaCloud
} // namespace VoiceNavigator20251111
#endif
