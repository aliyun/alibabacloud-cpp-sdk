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
       * @summary Retrieves the list of scenarios associated with a flow by flow ID.
       *
       * @param request ListScriptsByFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListScriptsByFlowResponse
       */
      Models::ListScriptsByFlowResponse listScriptsByFlowWithOptions(const Models::ListScriptsByFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of scenarios associated with a flow by flow ID.
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
       * @summary 更新场景配置
       *
       * @description ****
       *
       * @param tmpReq UpdateScriptVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateScriptVersionResponse
       */
      Models::UpdateScriptVersionResponse updateScriptVersionWithOptions(const Models::UpdateScriptVersionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新场景配置
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
