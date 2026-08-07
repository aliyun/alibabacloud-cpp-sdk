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
       * @summary 创建克隆音色
       *
       * @param request CreateCloneVoiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCloneVoiceResponse
       */
      Models::CreateCloneVoiceResponse createCloneVoiceWithOptions(const Models::CreateCloneVoiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建克隆音色
       *
       * @param request CreateCloneVoiceRequest
       * @return CreateCloneVoiceResponse
       */
      Models::CreateCloneVoiceResponse createCloneVoice(const Models::CreateCloneVoiceRequest &request);

      /**
       * @summary Creates an instance.
       *
       * @param tmpReq CreateFlashSmsAccessProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFlashSmsAccessProfileResponse
       */
      Models::CreateFlashSmsAccessProfileResponse createFlashSmsAccessProfileWithOptions(const Models::CreateFlashSmsAccessProfileRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an instance.
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
       * @summary 创建场景
       *
       * @param request CreateScriptRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateScriptResponse
       */
      Models::CreateScriptResponse createScriptWithOptions(const Models::CreateScriptRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建场景
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
       * @summary 创建语音接入配置
       *
       * @param tmpReq CreateVoiceAccessProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVoiceAccessProfileResponse
       */
      Models::CreateVoiceAccessProfileResponse createVoiceAccessProfileWithOptions(const Models::CreateVoiceAccessProfileRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建语音接入配置
       *
       * @param request CreateVoiceAccessProfileRequest
       * @return CreateVoiceAccessProfileResponse
       */
      Models::CreateVoiceAccessProfileResponse createVoiceAccessProfile(const Models::CreateVoiceAccessProfileRequest &request);

      /**
       * @summary 删除克隆音色
       *
       * @param request DeleteCloneVoiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCloneVoiceResponse
       */
      Models::DeleteCloneVoiceResponse deleteCloneVoiceWithOptions(const Models::DeleteCloneVoiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除克隆音色
       *
       * @param request DeleteCloneVoiceRequest
       * @return DeleteCloneVoiceResponse
       */
      Models::DeleteCloneVoiceResponse deleteCloneVoice(const Models::DeleteCloneVoiceRequest &request);

      /**
       * @summary 删除闪信配置
       *
       * @param request DeleteFlashSmsAccessProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFlashSmsAccessProfileResponse
       */
      Models::DeleteFlashSmsAccessProfileResponse deleteFlashSmsAccessProfileWithOptions(const Models::DeleteFlashSmsAccessProfileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除闪信配置
       *
       * @param request DeleteFlashSmsAccessProfileRequest
       * @return DeleteFlashSmsAccessProfileResponse
       */
      Models::DeleteFlashSmsAccessProfileResponse deleteFlashSmsAccessProfile(const Models::DeleteFlashSmsAccessProfileRequest &request);

      /**
       * @summary Retrieves the details of an instance.
       *
       * @param request DeleteInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstanceWithOptions(const Models::DeleteInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of an instance.
       *
       * @param request DeleteInstanceRequest
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstance(const Models::DeleteInstanceRequest &request);

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
       * @summary 删除三方语音配置
       *
       * @param request DeleteVoiceAccessProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVoiceAccessProfileResponse
       */
      Models::DeleteVoiceAccessProfileResponse deleteVoiceAccessProfileWithOptions(const Models::DeleteVoiceAccessProfileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除三方语音配置
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
       * @summary 获取prompt场景模版
       *
       * @param request GetScriptProfileTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetScriptProfileTemplateResponse
       */
      Models::GetScriptProfileTemplateResponse getScriptProfileTemplateWithOptions(const Models::GetScriptProfileTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取prompt场景模版
       *
       * @param request GetScriptProfileTemplateRequest
       * @return GetScriptProfileTemplateResponse
       */
      Models::GetScriptProfileTemplateResponse getScriptProfileTemplate(const Models::GetScriptProfileTemplateRequest &request);

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
       * @summary 获取克隆音色列表
       *
       * @param request ListCloneVoicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCloneVoicesResponse
       */
      Models::ListCloneVoicesResponse listCloneVoicesWithOptions(const Models::ListCloneVoicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取克隆音色列表
       *
       * @param request ListCloneVoicesRequest
       * @return ListCloneVoicesResponse
       */
      Models::ListCloneVoicesResponse listCloneVoices(const Models::ListCloneVoicesRequest &request);

      /**
       * @summary 获取闪信配置列表
       *
       * @param request ListFlashSmsAccessProfilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFlashSmsAccessProfilesResponse
       */
      Models::ListFlashSmsAccessProfilesResponse listFlashSmsAccessProfilesWithOptions(const Models::ListFlashSmsAccessProfilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取闪信配置列表
       *
       * @param request ListFlashSmsAccessProfilesRequest
       * @return ListFlashSmsAccessProfilesResponse
       */
      Models::ListFlashSmsAccessProfilesResponse listFlashSmsAccessProfiles(const Models::ListFlashSmsAccessProfilesRequest &request);

      /**
       * @summary 获取闪信厂商列表
       *
       * @param request ListFlashSmsProvidersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFlashSmsProvidersResponse
       */
      Models::ListFlashSmsProvidersResponse listFlashSmsProvidersWithOptions(const Models::ListFlashSmsProvidersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取闪信厂商列表
       *
       * @param request ListFlashSmsProvidersRequest
       * @return ListFlashSmsProvidersResponse
       */
      Models::ListFlashSmsProvidersResponse listFlashSmsProviders(const Models::ListFlashSmsProvidersRequest &request);

      /**
       * @summary 获取闪信模版列表
       *
       * @param request ListFlashSmsTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFlashSmsTemplatesResponse
       */
      Models::ListFlashSmsTemplatesResponse listFlashSmsTemplatesWithOptions(const Models::ListFlashSmsTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取闪信模版列表
       *
       * @param request ListFlashSmsTemplatesRequest
       * @return ListFlashSmsTemplatesResponse
       */
      Models::ListFlashSmsTemplatesResponse listFlashSmsTemplates(const Models::ListFlashSmsTemplatesRequest &request);

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
       * @summary Retrieves the blacklists and whitelists of an outbound robot.
       *
       * @param request ListOutboundCallRestrictionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOutboundCallRestrictionsResponse
       */
      Models::ListOutboundCallRestrictionsResponse listOutboundCallRestrictionsWithOptions(const Models::ListOutboundCallRestrictionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the blacklists and whitelists of an outbound robot.
       *
       * @param request ListOutboundCallRestrictionsRequest
       * @return ListOutboundCallRestrictionsResponse
       */
      Models::ListOutboundCallRestrictionsResponse listOutboundCallRestrictions(const Models::ListOutboundCallRestrictionsRequest &request);

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
       * @summary 获取场景列表
       *
       * @param tmpReq ListScriptsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListScriptsResponse
       */
      Models::ListScriptsResponse listScriptsWithOptions(const Models::ListScriptsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取场景列表
       *
       * @param request ListScriptsRequest
       * @return ListScriptsResponse
       */
      Models::ListScriptsResponse listScripts(const Models::ListScriptsRequest &request);

      /**
       * @summary 根据流程ID获取场景列表
       *
       * @param request ListScriptsByFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListScriptsByFlowResponse
       */
      Models::ListScriptsByFlowResponse listScriptsByFlowWithOptions(const Models::ListScriptsByFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据流程ID获取场景列表
       *
       * @param request ListScriptsByFlowRequest
       * @return ListScriptsByFlowResponse
       */
      Models::ListScriptsByFlowResponse listScriptsByFlow(const Models::ListScriptsByFlowRequest &request);

      /**
       * @summary 获取系统配置列表
       *
       * @param request ListSystemConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSystemConfigsResponse
       */
      Models::ListSystemConfigsResponse listSystemConfigsWithOptions(const Models::ListSystemConfigsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取系统配置列表
       *
       * @param request ListSystemConfigsRequest
       * @return ListSystemConfigsResponse
       */
      Models::ListSystemConfigsResponse listSystemConfigs(const Models::ListSystemConfigsRequest &request);

      /**
       * @summary 获取语音接入配置列表
       *
       * @param request ListVoiceAccessProfilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVoiceAccessProfilesResponse
       */
      Models::ListVoiceAccessProfilesResponse listVoiceAccessProfilesWithOptions(const Models::ListVoiceAccessProfilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取语音接入配置列表
       *
       * @param request ListVoiceAccessProfilesRequest
       * @return ListVoiceAccessProfilesResponse
       */
      Models::ListVoiceAccessProfilesResponse listVoiceAccessProfiles(const Models::ListVoiceAccessProfilesRequest &request);

      /**
       * @summary 发布场景
       *
       * @param request PublishScriptRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishScriptResponse
       */
      Models::PublishScriptResponse publishScriptWithOptions(const Models::PublishScriptRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 发布场景
       *
       * @param request PublishScriptRequest
       * @return PublishScriptResponse
       */
      Models::PublishScriptResponse publishScript(const Models::PublishScriptRequest &request);

      /**
       * @summary 更新克隆音色
       *
       * @param request UpdateCloneVoiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCloneVoiceResponse
       */
      Models::UpdateCloneVoiceResponse updateCloneVoiceWithOptions(const Models::UpdateCloneVoiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新克隆音色
       *
       * @param request UpdateCloneVoiceRequest
       * @return UpdateCloneVoiceResponse
       */
      Models::UpdateCloneVoiceResponse updateCloneVoice(const Models::UpdateCloneVoiceRequest &request);

      /**
       * @summary 更新闪信配置
       *
       * @param tmpReq UpdateFlashSmsAccessProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFlashSmsAccessProfileResponse
       */
      Models::UpdateFlashSmsAccessProfileResponse updateFlashSmsAccessProfileWithOptions(const Models::UpdateFlashSmsAccessProfileRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新闪信配置
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
       * @summary 更新场景
       *
       * @param request UpdateScriptRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateScriptResponse
       */
      Models::UpdateScriptResponse updateScriptWithOptions(const Models::UpdateScriptRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新场景
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
       * @summary 更新系统配置
       *
       * @param tmpReq UpdateSystemConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSystemConfigsResponse
       */
      Models::UpdateSystemConfigsResponse updateSystemConfigsWithOptions(const Models::UpdateSystemConfigsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新系统配置
       *
       * @param request UpdateSystemConfigsRequest
       * @return UpdateSystemConfigsResponse
       */
      Models::UpdateSystemConfigsResponse updateSystemConfigs(const Models::UpdateSystemConfigsRequest &request);

      /**
       * @summary 更新语音接入配置
       *
       * @param tmpReq UpdateVoiceAccessProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateVoiceAccessProfileResponse
       */
      Models::UpdateVoiceAccessProfileResponse updateVoiceAccessProfileWithOptions(const Models::UpdateVoiceAccessProfileRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新语音接入配置
       *
       * @param request UpdateVoiceAccessProfileRequest
       * @return UpdateVoiceAccessProfileResponse
       */
      Models::UpdateVoiceAccessProfileResponse updateVoiceAccessProfile(const Models::UpdateVoiceAccessProfileRequest &request);
  };
} // namespace AlibabaCloud
} // namespace OutboundBot20251111
#endif
