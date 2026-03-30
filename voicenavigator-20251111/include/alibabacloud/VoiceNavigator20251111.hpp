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
