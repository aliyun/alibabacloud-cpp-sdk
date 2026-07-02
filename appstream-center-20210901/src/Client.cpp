#include <darabonba/Core.hpp>
#include <alibabacloud/AppstreamCenter20210901.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::AppstreamCenter20210901::Models;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{

AlibabaCloud::AppstreamCenter20210901::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-shanghai" , "appstream-center.cn-shanghai.aliyuncs.com"},
    {"ap-southeast-1" , "appstream-center.ap-southeast-1.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("appstream-center", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
}


string Client::getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint) {
  if (!Darabonba::isNull(endpoint)) {
    return endpoint;
  }

  if (!Darabonba::isNull(endpointMap) && !Darabonba::isNull(endpointMap.at(regionId))) {
    return endpointMap.at(regionId);
  }

  return Utils::Utils::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

/**
 * @summary Sets the execution time for an over-the-air update.
 *
 * @param request ApproveOtaTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ApproveOtaTaskResponse
 */
ApproveOtaTaskResponse Client::approveOtaTaskWithOptions(const ApproveOtaTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppInstanceGroupId()) {
    body["AppInstanceGroupId"] = request.getAppInstanceGroupId();
  }

  if (!!request.hasBizRegionId()) {
    body["BizRegionId"] = request.getBizRegionId();
  }

  if (!!request.hasOtaType()) {
    body["OtaType"] = request.getOtaType();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ApproveOtaTask"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ApproveOtaTaskResponse>();
}

/**
 * @summary Sets the execution time for an over-the-air update.
 *
 * @param request ApproveOtaTaskRequest
 * @return ApproveOtaTaskResponse
 */
ApproveOtaTaskResponse Client::approveOtaTask(const ApproveOtaTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return approveOtaTaskWithOptions(request, runtime);
}

/**
 * @summary 为研发主机分配辅助私有IP
 *
 * @param request AssignWuyingServerPrivateAddressesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AssignWuyingServerPrivateAddressesResponse
 */
AssignWuyingServerPrivateAddressesResponse Client::assignWuyingServerPrivateAddressesWithOptions(const AssignWuyingServerPrivateAddressesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasSecondaryPrivateIpAddressCount()) {
    body["SecondaryPrivateIpAddressCount"] = request.getSecondaryPrivateIpAddressCount();
  }

  if (!!request.hasWuyingServerId()) {
    body["WuyingServerId"] = request.getWuyingServerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "AssignWuyingServerPrivateAddresses"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AssignWuyingServerPrivateAddressesResponse>();
}

/**
 * @summary 为研发主机分配辅助私有IP
 *
 * @param request AssignWuyingServerPrivateAddressesRequest
 * @return AssignWuyingServerPrivateAddressesResponse
 */
AssignWuyingServerPrivateAddressesResponse Client::assignWuyingServerPrivateAddresses(const AssignWuyingServerPrivateAddressesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return assignWuyingServerPrivateAddressesWithOptions(request, runtime);
}

/**
 * @summary Add or remove assigned users for a delivery group. Only users added as assigned users can access cloud applications.
 *
 * @description > After changing the assigned users, the selected users will receive corresponding notification emails. Generally, it takes about 2 minutes for the changes to take effect on the client.
 *
 * @param tmpReq AuthorizeInstanceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AuthorizeInstanceGroupResponse
 */
AuthorizeInstanceGroupResponse Client::authorizeInstanceGroupWithOptions(const AuthorizeInstanceGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AuthorizeInstanceGroupShrinkRequest request = AuthorizeInstanceGroupShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUserMeta()) {
    request.setUserMetaShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserMeta(), "UserMeta", "json"));
  }

  json body = {};
  if (!!request.hasAppInstanceGroupId()) {
    body["AppInstanceGroupId"] = request.getAppInstanceGroupId();
  }

  if (!!request.hasAppInstancePersistentId()) {
    body["AppInstancePersistentId"] = request.getAppInstancePersistentId();
  }

  json bodyFlat = {};
  if (!!request.hasAuthorizeUserGroupIds()) {
    bodyFlat["AuthorizeUserGroupIds"] = request.getAuthorizeUserGroupIds();
  }

  if (!!request.hasAuthorizeUserIds()) {
    bodyFlat["AuthorizeUserIds"] = request.getAuthorizeUserIds();
  }

  if (!!request.hasAvatarId()) {
    body["AvatarId"] = request.getAvatarId();
  }

  if (!!request.hasProductType()) {
    body["ProductType"] = request.getProductType();
  }

  if (!!request.hasUnAuthorizeUserGroupIds()) {
    bodyFlat["UnAuthorizeUserGroupIds"] = request.getUnAuthorizeUserGroupIds();
  }

  if (!!request.hasUnAuthorizeUserIds()) {
    bodyFlat["UnAuthorizeUserIds"] = request.getUnAuthorizeUserIds();
  }

  if (!!request.hasUserMetaShrink()) {
    body["UserMeta"] = request.getUserMetaShrink();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "AuthorizeInstanceGroup"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AuthorizeInstanceGroupResponse>();
}

/**
 * @summary Add or remove assigned users for a delivery group. Only users added as assigned users can access cloud applications.
 *
 * @description > After changing the assigned users, the selected users will receive corresponding notification emails. Generally, it takes about 2 minutes for the changes to take effect on the client.
 *
 * @param request AuthorizeInstanceGroupRequest
 * @return AuthorizeInstanceGroupResponse
 */
AuthorizeInstanceGroupResponse Client::authorizeInstanceGroup(const AuthorizeInstanceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return authorizeInstanceGroupWithOptions(request, runtime);
}

/**
 * @summary Creates LLM templates in batches.
 *
 * @description You can create model templates in batches under a model provider template in the Wuying Agent Management Center. You can add multiple models at a time and specify one of them as the default model. Existing models are automatically skipped and are not created again.
 * Before you call this operation, make sure that you are familiar with the operations and usage of the Wuying Agent Management Center.
 *
 * @param request BatchCreateLlmTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchCreateLlmTemplatesResponse
 */
BatchCreateLlmTemplatesResponse Client::batchCreateLlmTemplatesWithOptions(const BatchCreateLlmTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLlmTemplateItems()) {
    body["LlmTemplateItems"] = request.getLlmTemplateItems();
  }

  if (!!request.hasModelTemplateId()) {
    body["ModelTemplateId"] = request.getModelTemplateId();
  }

  if (!!request.hasProviderTemplateId()) {
    body["ProviderTemplateId"] = request.getProviderTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "BatchCreateLlmTemplates"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchCreateLlmTemplatesResponse>();
}

/**
 * @summary Creates LLM templates in batches.
 *
 * @description You can create model templates in batches under a model provider template in the Wuying Agent Management Center. You can add multiple models at a time and specify one of them as the default model. Existing models are automatically skipped and are not created again.
 * Before you call this operation, make sure that you are familiar with the operations and usage of the Wuying Agent Management Center.
 *
 * @param request BatchCreateLlmTemplatesRequest
 * @return BatchCreateLlmTemplatesResponse
 */
BatchCreateLlmTemplatesResponse Client::batchCreateLlmTemplates(const BatchCreateLlmTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchCreateLlmTemplatesWithOptions(request, runtime);
}

/**
 * @summary Configures the model group for a resource group.
 *
 * @description You can assign a model group to the resources associated with agent runtimes such as JVS Computer, OpenClaw, and Hermes Agent in the WUYING Agent Management Center. The model group serves as the inference engine for tasks executed by agents within the resource group.
 * When an agent runtime has its own model group configured and the resource group it belongs to also has a model group configured, the model group bound to the resource group takes effect. The resource group setting has a higher priority than the agent runtime setting.
 * Before calling this operation, make sure that you are familiar with the operations and usage of the WUYING Agent Management Center.
 *
 * @param request ConfigResourceGroupModelTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigResourceGroupModelTemplateResponse
 */
ConfigResourceGroupModelTemplateResponse Client::configResourceGroupModelTemplateWithOptions(const ConfigResourceGroupModelTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasModelTemplateId()) {
    body["ModelTemplateId"] = request.getModelTemplateId();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.getResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ConfigResourceGroupModelTemplate"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfigResourceGroupModelTemplateResponse>();
}

/**
 * @summary Configures the model group for a resource group.
 *
 * @description You can assign a model group to the resources associated with agent runtimes such as JVS Computer, OpenClaw, and Hermes Agent in the WUYING Agent Management Center. The model group serves as the inference engine for tasks executed by agents within the resource group.
 * When an agent runtime has its own model group configured and the resource group it belongs to also has a model group configured, the model group bound to the resource group takes effect. The resource group setting has a higher priority than the agent runtime setting.
 * Before calling this operation, make sure that you are familiar with the operations and usage of the WUYING Agent Management Center.
 *
 * @param request ConfigResourceGroupModelTemplateRequest
 * @return ConfigResourceGroupModelTemplateResponse
 */
ConfigResourceGroupModelTemplateResponse Client::configResourceGroupModelTemplate(const ConfigResourceGroupModelTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configResourceGroupModelTemplateWithOptions(request, runtime);
}

/**
 * @summary Configures a third-party channel for Agent runtime.
 *
 * @description You can configure third-party channels for Agent runtime resources such as JVS Computer, OpenClaw, and Hermes Agent in the Wuying Agent Management Center. These channels serve as extended Agent communication methods beyond the AgentIM channel.
 * Before using this operation, make sure you are familiar with the operations and usage of the Wuying Agent Management Center.
 *
 * @param request ConfigRuntimeChannelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigRuntimeChannelResponse
 */
ConfigRuntimeChannelResponse Client::configRuntimeChannelWithOptions(const ConfigRuntimeChannelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAgentPlatform()) {
    body["AgentPlatform"] = request.getAgentPlatform();
  }

  if (!!request.hasAgentProvider()) {
    body["AgentProvider"] = request.getAgentProvider();
  }

  if (!!request.hasCode()) {
    body["Code"] = request.getCode();
  }

  if (!!request.hasConfig()) {
    body["Config"] = request.getConfig();
  }

  if (!!request.hasConfigMode()) {
    body["ConfigMode"] = request.getConfigMode();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasRuntimeIds()) {
    body["RuntimeIds"] = request.getRuntimeIds();
  }

  if (!!request.hasRuntimeType()) {
    body["RuntimeType"] = request.getRuntimeType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ConfigRuntimeChannel"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfigRuntimeChannelResponse>();
}

/**
 * @summary Configures a third-party channel for Agent runtime.
 *
 * @description You can configure third-party channels for Agent runtime resources such as JVS Computer, OpenClaw, and Hermes Agent in the Wuying Agent Management Center. These channels serve as extended Agent communication methods beyond the AgentIM channel.
 * Before using this operation, make sure you are familiar with the operations and usage of the Wuying Agent Management Center.
 *
 * @param request ConfigRuntimeChannelRequest
 * @return ConfigRuntimeChannelResponse
 */
ConfigRuntimeChannelResponse Client::configRuntimeChannel(const ConfigRuntimeChannelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configRuntimeChannelWithOptions(request, runtime);
}

/**
 * @summary Configures model groups for Agent runtime resources.
 *
 * @description You can authorize model groups for Agent runtime resources such as JVS Computer, OpenClaw, and Hermes Agent in the Wuying Agent Management Center. The model groups serve as inference engines for Agent task execution.
 * Before calling this operation, make sure that you are familiar with the operations and usage of the Wuying Agent Management Center.
 *
 * @param request ConfigRuntimeModelTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigRuntimeModelTemplateResponse
 */
ConfigRuntimeModelTemplateResponse Client::configRuntimeModelTemplateWithOptions(const ConfigRuntimeModelTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasModelTemplateId()) {
    body["ModelTemplateId"] = request.getModelTemplateId();
  }

  if (!!request.hasRuntimeIds()) {
    body["RuntimeIds"] = request.getRuntimeIds();
  }

  if (!!request.hasRuntimeType()) {
    body["RuntimeType"] = request.getRuntimeType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ConfigRuntimeModelTemplate"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfigRuntimeModelTemplateResponse>();
}

/**
 * @summary Configures model groups for Agent runtime resources.
 *
 * @description You can authorize model groups for Agent runtime resources such as JVS Computer, OpenClaw, and Hermes Agent in the Wuying Agent Management Center. The model groups serve as inference engines for Agent task execution.
 * Before calling this operation, make sure that you are familiar with the operations and usage of the Wuying Agent Management Center.
 *
 * @param request ConfigRuntimeModelTemplateRequest
 * @return ConfigRuntimeModelTemplateResponse
 */
ConfigRuntimeModelTemplateResponse Client::configRuntimeModelTemplate(const ConfigRuntimeModelTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configRuntimeModelTemplateWithOptions(request, runtime);
}

/**
 * @summary Creates a delivery group.
 *
 * @description Make sure that you are familiar with the [billing and pricing](https://help.aliyun.com/document_detail/426039.html) of WUYING Cloud Application before you call this operation.
 * A delivery group is a logical grouping for delivering cloud applications to end users. It includes the underlying cloud application resources, images that contain cloud applications, resource management policies, and user assignment settings. For details, see [Publish a delivery group](https://help.aliyun.com/document_detail/426046.html).
 *
 * @param tmpReq CreateAppInstanceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAppInstanceGroupResponse
 */
CreateAppInstanceGroupResponse Client::createAppInstanceGroupWithOptions(const CreateAppInstanceGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateAppInstanceGroupShrinkRequest request = CreateAppInstanceGroupShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasNetwork()) {
    request.setNetworkShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNetwork(), "Network", "json"));
  }

  if (!!tmpReq.hasNodePool()) {
    request.setNodePoolShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNodePool(), "NodePool", "json"));
  }

  if (!!tmpReq.hasRuntimePolicy()) {
    request.setRuntimePolicyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRuntimePolicy(), "RuntimePolicy", "json"));
  }

  if (!!tmpReq.hasSecurityPolicy()) {
    request.setSecurityPolicyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSecurityPolicy(), "SecurityPolicy", "json"));
  }

  if (!!tmpReq.hasStoragePolicy()) {
    request.setStoragePolicyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getStoragePolicy(), "StoragePolicy", "json"));
  }

  if (!!tmpReq.hasUserDefinePolicy()) {
    request.setUserDefinePolicyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserDefinePolicy(), "UserDefinePolicy", "json"));
  }

  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserInfo(), "UserInfo", "json"));
  }

  if (!!tmpReq.hasVideoPolicy()) {
    request.setVideoPolicyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getVideoPolicy(), "VideoPolicy", "json"));
  }

  json query = {};
  if (!!request.hasUserDefinePolicyShrink()) {
    query["UserDefinePolicy"] = request.getUserDefinePolicyShrink();
  }

  json body = {};
  if (!!request.hasAppCenterImageId()) {
    body["AppCenterImageId"] = request.getAppCenterImageId();
  }

  if (!!request.hasAppInstanceGroupName()) {
    body["AppInstanceGroupName"] = request.getAppInstanceGroupName();
  }

  if (!!request.hasAppPackageType()) {
    body["AppPackageType"] = request.getAppPackageType();
  }

  if (!!request.hasAppPolicyId()) {
    body["AppPolicyId"] = request.getAppPolicyId();
  }

  if (!!request.hasAuthMode()) {
    body["AuthMode"] = request.getAuthMode();
  }

  if (!!request.hasAutoPay()) {
    body["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasAutoRenew()) {
    body["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasBizRegionId()) {
    body["BizRegionId"] = request.getBizRegionId();
  }

  if (!!request.hasChargeResourceMode()) {
    body["ChargeResourceMode"] = request.getChargeResourceMode();
  }

  if (!!request.hasChargeType()) {
    body["ChargeType"] = request.getChargeType();
  }

  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasNetworkShrink()) {
    body["Network"] = request.getNetworkShrink();
  }

  if (!!request.hasNodePoolShrink()) {
    body["NodePool"] = request.getNodePoolShrink();
  }

  if (!!request.hasPeriod()) {
    body["Period"] = request.getPeriod();
  }

  if (!!request.hasPeriodUnit()) {
    body["PeriodUnit"] = request.getPeriodUnit();
  }

  if (!!request.hasPreOpenAppId()) {
    body["PreOpenAppId"] = request.getPreOpenAppId();
  }

  if (!!request.hasProductType()) {
    body["ProductType"] = request.getProductType();
  }

  if (!!request.hasPromotionId()) {
    body["PromotionId"] = request.getPromotionId();
  }

  if (!!request.hasRuntimePolicyShrink()) {
    body["RuntimePolicy"] = request.getRuntimePolicyShrink();
  }

  if (!!request.hasSecurityPolicyShrink()) {
    body["SecurityPolicy"] = request.getSecurityPolicyShrink();
  }

  if (!!request.hasSessionTimeout()) {
    body["SessionTimeout"] = request.getSessionTimeout();
  }

  if (!!request.hasStoragePolicyShrink()) {
    body["StoragePolicy"] = request.getStoragePolicyShrink();
  }

  if (!!request.hasSubPayType()) {
    body["SubPayType"] = request.getSubPayType();
  }

  if (!!request.hasUserGroupIds()) {
    body["UserGroupIds"] = request.getUserGroupIds();
  }

  if (!!request.hasUserInfoShrink()) {
    body["UserInfo"] = request.getUserInfoShrink();
  }

  if (!!request.hasUsers()) {
    body["Users"] = request.getUsers();
  }

  if (!!request.hasVideoPolicyShrink()) {
    body["VideoPolicy"] = request.getVideoPolicyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateAppInstanceGroup"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAppInstanceGroupResponse>();
}

/**
 * @summary Creates a delivery group.
 *
 * @description Make sure that you are familiar with the [billing and pricing](https://help.aliyun.com/document_detail/426039.html) of WUYING Cloud Application before you call this operation.
 * A delivery group is a logical grouping for delivering cloud applications to end users. It includes the underlying cloud application resources, images that contain cloud applications, resource management policies, and user assignment settings. For details, see [Publish a delivery group](https://help.aliyun.com/document_detail/426046.html).
 *
 * @param request CreateAppInstanceGroupRequest
 * @return CreateAppInstanceGroupResponse
 */
CreateAppInstanceGroupResponse Client::createAppInstanceGroup(const CreateAppInstanceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAppInstanceGroupWithOptions(request, runtime);
}

/**
 * @summary Creates a custom image from a deployed WUYING instance. You can use the custom image to quickly create more WUYING instances with the same configurations, without having to repeatedly configure the instance environment each time.
 *
 * @param request CreateImageByInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateImageByInstanceResponse
 */
CreateImageByInstanceResponse Client::createImageByInstanceWithOptions(const CreateImageByInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTagList()) {
    query["TagList"] = request.getTagList();
  }

  json body = {};
  if (!!request.hasAutoCleanUserdata()) {
    body["AutoCleanUserdata"] = request.getAutoCleanUserdata();
  }

  if (!!request.hasBizType()) {
    body["BizType"] = request.getBizType();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasDiskType()) {
    body["DiskType"] = request.getDiskType();
  }

  if (!!request.hasImageName()) {
    body["ImageName"] = request.getImageName();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceType()) {
    body["InstanceType"] = request.getInstanceType();
  }

  if (!!request.hasProductType()) {
    body["ProductType"] = request.getProductType();
  }

  if (!!request.hasSubInstanceId()) {
    body["SubInstanceId"] = request.getSubInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateImageByInstance"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateImageByInstanceResponse>();
}

/**
 * @summary Creates a custom image from a deployed WUYING instance. You can use the custom image to quickly create more WUYING instances with the same configurations, without having to repeatedly configure the instance environment each time.
 *
 * @param request CreateImageByInstanceRequest
 * @return CreateImageByInstanceResponse
 */
CreateImageByInstanceResponse Client::createImageByInstance(const CreateImageByInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createImageByInstanceWithOptions(request, runtime);
}

/**
 * @summary Creates a new image from a debug delivery group.
 *
 * @param request CreateImageFromAppInstanceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateImageFromAppInstanceGroupResponse
 */
CreateImageFromAppInstanceGroupResponse Client::createImageFromAppInstanceGroupWithOptions(const CreateImageFromAppInstanceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppCenterImageName()) {
    body["AppCenterImageName"] = request.getAppCenterImageName();
  }

  if (!!request.hasAppInstanceGroupId()) {
    body["AppInstanceGroupId"] = request.getAppInstanceGroupId();
  }

  if (!!request.hasProductType()) {
    body["ProductType"] = request.getProductType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateImageFromAppInstanceGroup"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateImageFromAppInstanceGroupResponse>();
}

/**
 * @summary Creates a new image from a debug delivery group.
 *
 * @param request CreateImageFromAppInstanceGroupRequest
 * @return CreateImageFromAppInstanceGroupResponse
 */
CreateImageFromAppInstanceGroupResponse Client::createImageFromAppInstanceGroup(const CreateImageFromAppInstanceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createImageFromAppInstanceGroupWithOptions(request, runtime);
}

/**
 * @summary Create Model Provider Template
 *
 * @description You can create a model provider template under a model template in the Wuying Agent Management Center. This template is used to configure the connection information and keys for model services (such as Alibaba Cloud Bailian, Token Plan, and Moonshot) that Agents can call. After creation, the model provider template is automatically associated with the specified model template.
 * Make sure you are fully familiar with the operations and usage of the Wuying Agent Management Center before calling this API.
 *
 * @param request CreateModelProviderTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateModelProviderTemplateResponse
 */
CreateModelProviderTemplateResponse Client::createModelProviderTemplateWithOptions(const CreateModelProviderTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentPlatform()) {
    query["AgentPlatform"] = request.getAgentPlatform();
  }

  if (!!request.hasAgentProvider()) {
    query["AgentProvider"] = request.getAgentProvider();
  }

  if (!!request.hasBizType()) {
    query["BizType"] = request.getBizType();
  }

  if (!!request.hasConfig()) {
    query["Config"] = request.getConfig();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasEnableWuyingProxy()) {
    query["EnableWuyingProxy"] = request.getEnableWuyingProxy();
  }

  if (!!request.hasModelTemplateId()) {
    query["ModelTemplateId"] = request.getModelTemplateId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasProviderName()) {
    query["ProviderName"] = request.getProviderName();
  }

  if (!!request.hasProviderType()) {
    query["ProviderType"] = request.getProviderType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateModelProviderTemplate"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateModelProviderTemplateResponse>();
}

/**
 * @summary Create Model Provider Template
 *
 * @description You can create a model provider template under a model template in the Wuying Agent Management Center. This template is used to configure the connection information and keys for model services (such as Alibaba Cloud Bailian, Token Plan, and Moonshot) that Agents can call. After creation, the model provider template is automatically associated with the specified model template.
 * Make sure you are fully familiar with the operations and usage of the Wuying Agent Management Center before calling this API.
 *
 * @param request CreateModelProviderTemplateRequest
 * @return CreateModelProviderTemplateResponse
 */
CreateModelProviderTemplateResponse Client::createModelProviderTemplate(const CreateModelProviderTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createModelProviderTemplateWithOptions(request, runtime);
}

/**
 * @summary Creates a model creation template.
 *
 * @description You can create a model group in the WUYING Agent Management Center to manage the model providers and model scope that an Agent can invoke. After creation, you can attach the model group to a cloud computer as the inference engine configuration for Agent task execution.
 * Make sure that you are familiar with the operations and usage of the WUYING Agent Management Center before calling this operation.
 *
 * @param request CreateModelTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateModelTemplateResponse
 */
CreateModelTemplateResponse Client::createModelTemplateWithOptions(const CreateModelTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentPlatform()) {
    query["AgentPlatform"] = request.getAgentPlatform();
  }

  if (!!request.hasAgentProvider()) {
    query["AgentProvider"] = request.getAgentProvider();
  }

  if (!!request.hasBizType()) {
    query["BizType"] = request.getBizType();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateModelTemplate"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateModelTemplateResponse>();
}

/**
 * @summary Creates a model creation template.
 *
 * @description You can create a model group in the WUYING Agent Management Center to manage the model providers and model scope that an Agent can invoke. After creation, you can attach the model group to a cloud computer as the inference engine configuration for Agent task execution.
 * Make sure that you are familiar with the operations and usage of the WUYING Agent Management Center before calling this operation.
 *
 * @param request CreateModelTemplateRequest
 * @return CreateModelTemplateResponse
 */
CreateModelTemplateResponse Client::createModelTemplate(const CreateModelTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createModelTemplateWithOptions(request, runtime);
}

/**
 * @summary Creates one or more workstations.
 *
 * @description 1. A project corresponds to the resource configuration module in the CloudFlow console.
 * 2. If the ContentId specified in the request parameters has multiple versions, this API operation <notice>uses the default version</notice> for binding.
 * 3. This operation succeeds only when the default version of the content is in an available state.
 *
 * @param request CreateWuyingServerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateWuyingServerResponse
 */
CreateWuyingServerResponse Client::createWuyingServerWithOptions(const CreateWuyingServerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAmount()) {
    body["Amount"] = request.getAmount();
  }

  if (!!request.hasAutoPay()) {
    body["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasAutoRenew()) {
    body["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasBandwidth()) {
    body["Bandwidth"] = request.getBandwidth();
  }

  if (!!request.hasBizRegionId()) {
    body["BizRegionId"] = request.getBizRegionId();
  }

  if (!!request.hasChargeType()) {
    body["ChargeType"] = request.getChargeType();
  }

  json bodyFlat = {};
  if (!!request.hasDataDisk()) {
    bodyFlat["DataDisk"] = request.getDataDisk();
  }

  if (!!request.hasHostName()) {
    body["HostName"] = request.getHostName();
  }

  if (!!request.hasIdempotenceToken()) {
    body["IdempotenceToken"] = request.getIdempotenceToken();
  }

  if (!!request.hasImageId()) {
    body["ImageId"] = request.getImageId();
  }

  if (!!request.hasMaxPrice()) {
    body["MaxPrice"] = request.getMaxPrice();
  }

  if (!!request.hasNetworkStrategyType()) {
    body["NetworkStrategyType"] = request.getNetworkStrategyType();
  }

  if (!!request.hasOfficeSiteId()) {
    body["OfficeSiteId"] = request.getOfficeSiteId();
  }

  if (!!request.hasPassword()) {
    body["Password"] = request.getPassword();
  }

  if (!!request.hasPeriod()) {
    body["Period"] = request.getPeriod();
  }

  if (!!request.hasPeriodUnit()) {
    body["PeriodUnit"] = request.getPeriodUnit();
  }

  if (!!request.hasPromotionId()) {
    body["PromotionId"] = request.getPromotionId();
  }

  if (!!request.hasSavingPlanId()) {
    body["SavingPlanId"] = request.getSavingPlanId();
  }

  if (!!request.hasServerInstanceType()) {
    body["ServerInstanceType"] = request.getServerInstanceType();
  }

  if (!!request.hasServerPortRange()) {
    body["ServerPortRange"] = request.getServerPortRange();
  }

  if (!!request.hasSubPayType()) {
    body["SubPayType"] = request.getSubPayType();
  }

  if (!!request.hasSystemDiskCategory()) {
    body["SystemDiskCategory"] = request.getSystemDiskCategory();
  }

  if (!!request.hasSystemDiskPerformanceLevel()) {
    body["SystemDiskPerformanceLevel"] = request.getSystemDiskPerformanceLevel();
  }

  if (!!request.hasSystemDiskSize()) {
    body["SystemDiskSize"] = request.getSystemDiskSize();
  }

  if (!!request.hasVSwitchIds()) {
    body["VSwitchIds"] = request.getVSwitchIds();
  }

  if (!!request.hasVirtualNodePoolId()) {
    body["VirtualNodePoolId"] = request.getVirtualNodePoolId();
  }

  if (!!request.hasWuyingServerName()) {
    body["WuyingServerName"] = request.getWuyingServerName();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateWuyingServer"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateWuyingServerResponse>();
}

/**
 * @summary Creates one or more workstations.
 *
 * @description 1. A project corresponds to the resource configuration module in the CloudFlow console.
 * 2. If the ContentId specified in the request parameters has multiple versions, this API operation <notice>uses the default version</notice> for binding.
 * 3. This operation succeeds only when the default version of the content is in an available state.
 *
 * @param request CreateWuyingServerRequest
 * @return CreateWuyingServerResponse
 */
CreateWuyingServerResponse Client::createWuyingServer(const CreateWuyingServerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createWuyingServerWithOptions(request, runtime);
}

/**
 * @summary Deletes a pay-as-you-go resource-based delivery group.
 *
 * @description > This operation does not support deleting delivery groups that use subscription resources.
 *
 * @param request DeleteAppInstanceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAppInstanceGroupResponse
 */
DeleteAppInstanceGroupResponse Client::deleteAppInstanceGroupWithOptions(const DeleteAppInstanceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppInstanceGroupId()) {
    body["AppInstanceGroupId"] = request.getAppInstanceGroupId();
  }

  if (!!request.hasProductType()) {
    body["ProductType"] = request.getProductType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteAppInstanceGroup"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAppInstanceGroupResponse>();
}

/**
 * @summary Deletes a pay-as-you-go resource-based delivery group.
 *
 * @description > This operation does not support deleting delivery groups that use subscription resources.
 *
 * @param request DeleteAppInstanceGroupRequest
 * @return DeleteAppInstanceGroupResponse
 */
DeleteAppInstanceGroupResponse Client::deleteAppInstanceGroup(const DeleteAppInstanceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAppInstanceGroupWithOptions(request, runtime);
}

/**
 * @summary Deletes a specified application instance.
 *
 * @description Only instances in the init or idle state can be deleted. This operation is available only to specific customers.
 *
 * @param request DeleteAppInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAppInstancesResponse
 */
DeleteAppInstancesResponse Client::deleteAppInstancesWithOptions(const DeleteAppInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppInstanceGroupId()) {
    body["AppInstanceGroupId"] = request.getAppInstanceGroupId();
  }

  if (!!request.hasAppInstanceIds()) {
    body["AppInstanceIds"] = request.getAppInstanceIds();
  }

  if (!!request.hasProductType()) {
    body["ProductType"] = request.getProductType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteAppInstances"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAppInstancesResponse>();
}

/**
 * @summary Deletes a specified application instance.
 *
 * @description Only instances in the init or idle state can be deleted. This operation is available only to specific customers.
 *
 * @param request DeleteAppInstancesRequest
 * @return DeleteAppInstancesResponse
 */
DeleteAppInstancesResponse Client::deleteAppInstances(const DeleteAppInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAppInstancesWithOptions(request, runtime);
}

/**
 * @summary Deletes a custom AppStream image.
 *
 * @description - You can delete only custom images that belong to you.
 * - For images associated with the AppStream Cloud Computer Pool, AppStream Cloud Application, or AppStream Workstation product lines, you must ensure that no AppStream instances are using the image before you can delete it.
 * - If an AppStream Cloud Desktop template references an image, the template is also deleted when the image is deleted.
 * - If an image is available in multiple regions, deleting the image removes it from all regions.
 *
 * @param request DeleteImageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteImageResponse
 */
DeleteImageResponse Client::deleteImageWithOptions(const DeleteImageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasImageId()) {
    body["ImageId"] = request.getImageId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteImage"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteImageResponse>();
}

/**
 * @summary Deletes a custom AppStream image.
 *
 * @description - You can delete only custom images that belong to you.
 * - For images associated with the AppStream Cloud Computer Pool, AppStream Cloud Application, or AppStream Workstation product lines, you must ensure that no AppStream instances are using the image before you can delete it.
 * - If an AppStream Cloud Desktop template references an image, the template is also deleted when the image is deleted.
 * - If an image is available in multiple regions, deleting the image removes it from all regions.
 *
 * @param request DeleteImageRequest
 * @return DeleteImageResponse
 */
DeleteImageResponse Client::deleteImage(const DeleteImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteImageWithOptions(request, runtime);
}

/**
 * @summary Deletes an LLM template.
 *
 * @description You can delete a model template that has been created under a model provider template in the Wuying Agent Management Center. Before deletion, ensure that the model is not the default model of an associated model group. Otherwise, the deletion fails. After deletion, the model configurations of associated cloud computers are automatically refreshed.
 * Before using this operation, make sure that you are familiar with the operations and usage of the Wuying Agent Management Center.
 *
 * @param request DeleteLlmTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteLlmTemplateResponse
 */
DeleteLlmTemplateResponse Client::deleteLlmTemplateWithOptions(const DeleteLlmTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLlmTemplateId()) {
    query["LlmTemplateId"] = request.getLlmTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteLlmTemplate"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteLlmTemplateResponse>();
}

/**
 * @summary Deletes an LLM template.
 *
 * @description You can delete a model template that has been created under a model provider template in the Wuying Agent Management Center. Before deletion, ensure that the model is not the default model of an associated model group. Otherwise, the deletion fails. After deletion, the model configurations of associated cloud computers are automatically refreshed.
 * Before using this operation, make sure that you are familiar with the operations and usage of the Wuying Agent Management Center.
 *
 * @param request DeleteLlmTemplateRequest
 * @return DeleteLlmTemplateResponse
 */
DeleteLlmTemplateResponse Client::deleteLlmTemplate(const DeleteLlmTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteLlmTemplateWithOptions(request, runtime);
}

/**
 * @summary Deletes a model provider template.
 *
 * @description You can delete a model provider template that has been created under model templates in the WUYING Agent Management Center. Before deletion, make sure that the model provider is not the provider of the default model and is not a system preset type provider (such as WUYING credits package). After deletion, the associated models and key configurations are also removed.
 * Before using this operation, make sure that you are familiar with the operations and usage of the WUYING Agent Management Center.
 *
 * @param request DeleteModelProviderTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteModelProviderTemplateResponse
 */
DeleteModelProviderTemplateResponse Client::deleteModelProviderTemplateWithOptions(const DeleteModelProviderTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProviderTemplateId()) {
    query["ProviderTemplateId"] = request.getProviderTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteModelProviderTemplate"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteModelProviderTemplateResponse>();
}

/**
 * @summary Deletes a model provider template.
 *
 * @description You can delete a model provider template that has been created under model templates in the WUYING Agent Management Center. Before deletion, make sure that the model provider is not the provider of the default model and is not a system preset type provider (such as WUYING credits package). After deletion, the associated models and key configurations are also removed.
 * Before using this operation, make sure that you are familiar with the operations and usage of the WUYING Agent Management Center.
 *
 * @param request DeleteModelProviderTemplateRequest
 * @return DeleteModelProviderTemplateResponse
 */
DeleteModelProviderTemplateResponse Client::deleteModelProviderTemplate(const DeleteModelProviderTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteModelProviderTemplateWithOptions(request, runtime);
}

/**
 * @summary Deletes a model template.
 *
 * @description You can delete a model group that has been created in the WUYING Agent Management Center. Before deletion, ensure that the template has not been authorized to any resource. Otherwise, the deletion fails. After deletion, the model providers and models under the model group are also removed.
 * Before using this operation, make sure that you are familiar with the operations and usage of the WUYING Agent Management Center.
 *
 * @param request DeleteModelTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteModelTemplateResponse
 */
DeleteModelTemplateResponse Client::deleteModelTemplateWithOptions(const DeleteModelTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasModelTemplateId()) {
    query["ModelTemplateId"] = request.getModelTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteModelTemplate"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteModelTemplateResponse>();
}

/**
 * @summary Deletes a model template.
 *
 * @description You can delete a model group that has been created in the WUYING Agent Management Center. Before deletion, ensure that the template has not been authorized to any resource. Otherwise, the deletion fails. After deletion, the model providers and models under the model group are also removed.
 * Before using this operation, make sure that you are familiar with the operations and usage of the WUYING Agent Management Center.
 *
 * @param request DeleteModelTemplateRequest
 * @return DeleteModelTemplateResponse
 */
DeleteModelTemplateResponse Client::deleteModelTemplate(const DeleteModelTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteModelTemplateWithOptions(request, runtime);
}

/**
 * @summary Deletes a cloud graphics workstation.
 *
 * @description Deletes a cloud graphics workstation.
 *
 * @param request DeleteWuyingServerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteWuyingServerResponse
 */
DeleteWuyingServerResponse Client::deleteWuyingServerWithOptions(const DeleteWuyingServerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasWuyingServerId()) {
    body["WuyingServerId"] = request.getWuyingServerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteWuyingServer"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteWuyingServerResponse>();
}

/**
 * @summary Deletes a cloud graphics workstation.
 *
 * @description Deletes a cloud graphics workstation.
 *
 * @param request DeleteWuyingServerRequest
 * @return DeleteWuyingServerResponse
 */
DeleteWuyingServerResponse Client::deleteWuyingServer(const DeleteWuyingServerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteWuyingServerWithOptions(request, runtime);
}

/**
 * @summary Configure LogShipper for Simple Log Service
 *
 * @param request DeliverToUserSlsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeliverToUserSlsResponse
 */
DeliverToUserSlsResponse Client::deliverToUserSlsWithOptions(const DeliverToUserSlsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  json bodyFlat = {};
  if (!!request.hasDeliveryScopes()) {
    bodyFlat["DeliveryScopes"] = request.getDeliveryScopes();
  }

  if (!!request.hasExistedProjectName()) {
    body["ExistedProjectName"] = request.getExistedProjectName();
  }

  if (!!request.hasLogStoreName()) {
    body["LogStoreName"] = request.getLogStoreName();
  }

  if (!!request.hasProjectName()) {
    body["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasSlsRegionId()) {
    body["SlsRegionId"] = request.getSlsRegionId();
  }

  if (!!request.hasTtl()) {
    body["Ttl"] = request.getTtl();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeliverToUserSls"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeliverToUserSlsResponse>();
}

/**
 * @summary Configure LogShipper for Simple Log Service
 *
 * @param request DeliverToUserSlsRequest
 * @return DeliverToUserSlsResponse
 */
DeliverToUserSlsResponse Client::deliverToUserSls(const DeliverToUserSlsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deliverToUserSlsWithOptions(request, runtime);
}

/**
 * @summary 查询研发主机详情
 *
 * @param request DescribeWuyingServerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeWuyingServerResponse
 */
DescribeWuyingServerResponse Client::describeWuyingServerWithOptions(const DescribeWuyingServerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasWuyingServerId()) {
    body["WuyingServerId"] = request.getWuyingServerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeWuyingServer"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeWuyingServerResponse>();
}

/**
 * @summary 查询研发主机详情
 *
 * @param request DescribeWuyingServerRequest
 * @return DescribeWuyingServerResponse
 */
DescribeWuyingServerResponse Client::describeWuyingServer(const DescribeWuyingServerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeWuyingServerWithOptions(request, runtime);
}

/**
 * @summary Queries the Elastic IP Address (EIP) information of a Wuying workspace.
 *
 * @param request DescribeWuyingServerEipInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeWuyingServerEipInfoResponse
 */
DescribeWuyingServerEipInfoResponse Client::describeWuyingServerEipInfoWithOptions(const DescribeWuyingServerEipInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasIsp()) {
    body["Isp"] = request.getIsp();
  }

  if (!!request.hasWuyingServerId()) {
    body["WuyingServerId"] = request.getWuyingServerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeWuyingServerEipInfo"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeWuyingServerEipInfoResponse>();
}

/**
 * @summary Queries the Elastic IP Address (EIP) information of a Wuying workspace.
 *
 * @param request DescribeWuyingServerEipInfoRequest
 * @return DescribeWuyingServerEipInfoResponse
 */
DescribeWuyingServerEipInfoResponse Client::describeWuyingServerEipInfo(const DescribeWuyingServerEipInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeWuyingServerEipInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a specified delivery group.
 *
 * @param request GetAppInstanceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAppInstanceGroupResponse
 */
GetAppInstanceGroupResponse Client::getAppInstanceGroupWithOptions(const GetAppInstanceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppInstanceGroupId()) {
    query["AppInstanceGroupId"] = request.getAppInstanceGroupId();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.getProductType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAppInstanceGroup"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAppInstanceGroupResponse>();
}

/**
 * @summary Queries the details of a specified delivery group.
 *
 * @param request GetAppInstanceGroupRequest
 * @return GetAppInstanceGroupResponse
 */
GetAppInstanceGroupResponse Client::getAppInstanceGroup(const GetAppInstanceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAppInstanceGroupWithOptions(request, runtime);
}

/**
 * @summary Retrieves connection credentials for a cloud application.
 *
 * @description This operation requires multiple invokes (at least two) to obtain the connection credentials.
 * On the first invoke, an application instance is allocated to the specified convenience account and the application is started. A startup task ID (`TaskID`) is returned.
 * On subsequent invokes, pass the `TaskID` request parameter to query whether the task is complete. When the returned task status (`TaskStatus`) is completed (`Finished`), the connection credentials (`Ticket`) are also returned.
 *
 * @param request GetConnectionTicketRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetConnectionTicketResponse
 */
GetConnectionTicketResponse Client::getConnectionTicketWithOptions(const GetConnectionTicketRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccessType()) {
    body["AccessType"] = request.getAccessType();
  }

  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasAppInstanceGroupIdList()) {
    body["AppInstanceGroupIdList"] = request.getAppInstanceGroupIdList();
  }

  if (!!request.hasAppInstanceId()) {
    body["AppInstanceId"] = request.getAppInstanceId();
  }

  if (!!request.hasAppInstancePersistentId()) {
    body["AppInstancePersistentId"] = request.getAppInstancePersistentId();
  }

  if (!!request.hasAppPolicyId()) {
    body["AppPolicyId"] = request.getAppPolicyId();
  }

  if (!!request.hasAppStartParam()) {
    body["AppStartParam"] = request.getAppStartParam();
  }

  if (!!request.hasAppVersion()) {
    body["AppVersion"] = request.getAppVersion();
  }

  if (!!request.hasBizRegionId()) {
    body["BizRegionId"] = request.getBizRegionId();
  }

  if (!!request.hasEndUserId()) {
    body["EndUserId"] = request.getEndUserId();
  }

  if (!!request.hasEnvironmentConfig()) {
    body["EnvironmentConfig"] = request.getEnvironmentConfig();
  }

  if (!!request.hasProductType()) {
    body["ProductType"] = request.getProductType();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetConnectionTicket"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetConnectionTicketResponse>();
}

/**
 * @summary Retrieves connection credentials for a cloud application.
 *
 * @description This operation requires multiple invokes (at least two) to obtain the connection credentials.
 * On the first invoke, an application instance is allocated to the specified convenience account and the application is started. A startup task ID (`TaskID`) is returned.
 * On subsequent invokes, pass the `TaskID` request parameter to query whether the task is complete. When the returned task status (`TaskStatus`) is completed (`Finished`), the connection credentials (`Ticket`) are also returned.
 *
 * @param request GetConnectionTicketRequest
 * @return GetConnectionTicketResponse
 */
GetConnectionTicketResponse Client::getConnectionTicket(const GetConnectionTicketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getConnectionTicketWithOptions(request, runtime);
}

/**
 * @summary Retrieves the information about a debug application instance.
 *
 * @param request GetDebugAppInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDebugAppInstanceResponse
 */
GetDebugAppInstanceResponse Client::getDebugAppInstanceWithOptions(const GetDebugAppInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppInstanceGroupId()) {
    body["AppInstanceGroupId"] = request.getAppInstanceGroupId();
  }

  if (!!request.hasProductType()) {
    body["ProductType"] = request.getProductType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetDebugAppInstance"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDebugAppInstanceResponse>();
}

/**
 * @summary Retrieves the information about a debug application instance.
 *
 * @param request GetDebugAppInstanceRequest
 * @return GetDebugAppInstanceResponse
 */
GetDebugAppInstanceResponse Client::getDebugAppInstance(const GetDebugAppInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDebugAppInstanceWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a model provider template.
 *
 * @description You can query the details of a specified model provider template in the WUYING Agent Management Center, including the provider name, description, and connection configuration list.
 * Before you call this operation, make sure that you are familiar with the operations and usage of the WUYING Agent Management Center.
 *
 * @param request GetModelProviderTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetModelProviderTemplateResponse
 */
GetModelProviderTemplateResponse Client::getModelProviderTemplateWithOptions(const GetModelProviderTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProviderTemplateId()) {
    query["ProviderTemplateId"] = request.getProviderTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetModelProviderTemplate"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetModelProviderTemplateResponse>();
}

/**
 * @summary Queries the details of a model provider template.
 *
 * @description You can query the details of a specified model provider template in the WUYING Agent Management Center, including the provider name, description, and connection configuration list.
 * Before you call this operation, make sure that you are familiar with the operations and usage of the WUYING Agent Management Center.
 *
 * @param request GetModelProviderTemplateRequest
 * @return GetModelProviderTemplateResponse
 */
GetModelProviderTemplateResponse Client::getModelProviderTemplate(const GetModelProviderTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getModelProviderTemplateWithOptions(request, runtime);
}

/**
 * @summary Queries the details of an over-the-air update task, including the available version and version description.
 *
 * @param request GetOtaTaskByTaskIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOtaTaskByTaskIdResponse
 */
GetOtaTaskByTaskIdResponse Client::getOtaTaskByTaskIdWithOptions(const GetOtaTaskByTaskIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetOtaTaskByTaskId"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOtaTaskByTaskIdResponse>();
}

/**
 * @summary Queries the details of an over-the-air update task, including the available version and version description.
 *
 * @param request GetOtaTaskByTaskIdRequest
 * @return GetOtaTaskByTaskIdResponse
 */
GetOtaTaskByTaskIdResponse Client::getOtaTaskByTaskId(const GetOtaTaskByTaskIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOtaTaskByTaskIdWithOptions(request, runtime);
}

/**
 * @summary Queries the price information of a resource.
 *
 * @param request GetResourcePriceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetResourcePriceResponse
 */
GetResourcePriceResponse Client::getResourcePriceWithOptions(const GetResourcePriceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAmount()) {
    query["Amount"] = request.getAmount();
  }

  if (!!request.hasAppInstanceType()) {
    query["AppInstanceType"] = request.getAppInstanceType();
  }

  if (!!request.hasBizRegionId()) {
    query["BizRegionId"] = request.getBizRegionId();
  }

  if (!!request.hasChargeType()) {
    query["ChargeType"] = request.getChargeType();
  }

  if (!!request.hasNodeInstanceType()) {
    query["NodeInstanceType"] = request.getNodeInstanceType();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasPeriodUnit()) {
    query["PeriodUnit"] = request.getPeriodUnit();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.getProductType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetResourcePrice"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetResourcePriceResponse>();
}

/**
 * @summary Queries the price information of a resource.
 *
 * @param request GetResourcePriceRequest
 * @return GetResourcePriceResponse
 */
GetResourcePriceResponse Client::getResourcePrice(const GetResourcePriceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getResourcePriceWithOptions(request, runtime);
}

/**
 * @summary Queries the renewal price of WUYING Cloud Application resources.
 *
 * @param request GetResourceRenewPriceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetResourceRenewPriceResponse
 */
GetResourceRenewPriceResponse Client::getResourceRenewPriceWithOptions(const GetResourceRenewPriceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppInstanceGroupId()) {
    query["AppInstanceGroupId"] = request.getAppInstanceGroupId();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasPeriodUnit()) {
    query["PeriodUnit"] = request.getPeriodUnit();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.getProductType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetResourceRenewPrice"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetResourceRenewPriceResponse>();
}

/**
 * @summary Queries the renewal price of WUYING Cloud Application resources.
 *
 * @param request GetResourceRenewPriceRequest
 * @return GetResourceRenewPriceResponse
 */
GetResourceRenewPriceResponse Client::getResourceRenewPrice(const GetResourceRenewPriceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getResourceRenewPriceWithOptions(request, runtime);
}

/**
 * @summary Queries the third-party channel configurations of an Agent runtime.
 *
 * @description You can query the third-party channel configuration status of Agent runtimes such as JVS Computer, OpenClaw, and Hermes Agent in the Wuying Agent Management Center.
 * Before using this operation, make sure that you are familiar with the operations and usage of the Wuying Agent Management Center.
 *
 * @param request GetRuntimeChannelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRuntimeChannelResponse
 */
GetRuntimeChannelResponse Client::getRuntimeChannelWithOptions(const GetRuntimeChannelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentPlatform()) {
    query["AgentPlatform"] = request.getAgentPlatform();
  }

  if (!!request.hasAgentProvider()) {
    query["AgentProvider"] = request.getAgentProvider();
  }

  if (!!request.hasIncludeRiskInfo()) {
    query["IncludeRiskInfo"] = request.getIncludeRiskInfo();
  }

  if (!!request.hasRuntimeId()) {
    query["RuntimeId"] = request.getRuntimeId();
  }

  if (!!request.hasRuntimeType()) {
    query["RuntimeType"] = request.getRuntimeType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRuntimeChannel"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRuntimeChannelResponse>();
}

/**
 * @summary Queries the third-party channel configurations of an Agent runtime.
 *
 * @description You can query the third-party channel configuration status of Agent runtimes such as JVS Computer, OpenClaw, and Hermes Agent in the Wuying Agent Management Center.
 * Before using this operation, make sure that you are familiar with the operations and usage of the Wuying Agent Management Center.
 *
 * @param request GetRuntimeChannelRequest
 * @return GetRuntimeChannelResponse
 */
GetRuntimeChannelResponse Client::getRuntimeChannel(const GetRuntimeChannelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRuntimeChannelWithOptions(request, runtime);
}

/**
 * @summary Queries the model configuration details of a cloud computer.
 *
 * @description You can query the model configuration details currently bound to a specified cloud computer in the Wuying Agent Management Center, including model groups, model provider lists, and associated model information. After you enable the risk information mode, you can also identify differences between the end user\\"s actual configuration and the configuration delivered by the administrator.
 *
 * @param request GetRuntimeModelConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRuntimeModelConfigResponse
 */
GetRuntimeModelConfigResponse Client::getRuntimeModelConfigWithOptions(const GetRuntimeModelConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentPlatform()) {
    query["AgentPlatform"] = request.getAgentPlatform();
  }

  if (!!request.hasAgentProvider()) {
    query["AgentProvider"] = request.getAgentProvider();
  }

  if (!!request.hasIncludeRiskInfo()) {
    query["IncludeRiskInfo"] = request.getIncludeRiskInfo();
  }

  if (!!request.hasRuntimeId()) {
    query["RuntimeId"] = request.getRuntimeId();
  }

  if (!!request.hasRuntimeType()) {
    query["RuntimeType"] = request.getRuntimeType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRuntimeModelConfig"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRuntimeModelConfigResponse>();
}

/**
 * @summary Queries the model configuration details of a cloud computer.
 *
 * @description You can query the model configuration details currently bound to a specified cloud computer in the Wuying Agent Management Center, including model groups, model provider lists, and associated model information. After you enable the risk information mode, you can also identify differences between the end user\\"s actual configuration and the configuration delivered by the administrator.
 *
 * @param request GetRuntimeModelConfigRequest
 * @return GetRuntimeModelConfigResponse
 */
GetRuntimeModelConfigResponse Client::getRuntimeModelConfig(const GetRuntimeModelConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRuntimeModelConfigWithOptions(request, runtime);
}

/**
 * @summary Queries the details of multiple delivery groups. This operation does not specify a particular delivery group but queries the details of all delivery groups that meet the specified conditions.
 *
 * @param request ListAppInstanceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAppInstanceGroupResponse
 */
ListAppInstanceGroupResponse Client::listAppInstanceGroupWithOptions(const ListAppInstanceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppCenterImageId()) {
    query["AppCenterImageId"] = request.getAppCenterImageId();
  }

  if (!!request.hasAppInstanceGroupId()) {
    query["AppInstanceGroupId"] = request.getAppInstanceGroupId();
  }

  if (!!request.hasAppInstanceGroupName()) {
    query["AppInstanceGroupName"] = request.getAppInstanceGroupName();
  }

  if (!!request.hasBizRegionId()) {
    query["BizRegionId"] = request.getBizRegionId();
  }

  if (!!request.hasNodeInstanceType()) {
    query["NodeInstanceType"] = request.getNodeInstanceType();
  }

  if (!!request.hasOfficeSiteId()) {
    query["OfficeSiteId"] = request.getOfficeSiteId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.getProductType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  json body = {};
  if (!!request.hasExcludedUserGroupIds()) {
    body["ExcludedUserGroupIds"] = request.getExcludedUserGroupIds();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.getStatus();
  }

  if (!!request.hasUserGroupIds()) {
    body["UserGroupIds"] = request.getUserGroupIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListAppInstanceGroup"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAppInstanceGroupResponse>();
}

/**
 * @summary Queries the details of multiple delivery groups. This operation does not specify a particular delivery group but queries the details of all delivery groups that meet the specified conditions.
 *
 * @param request ListAppInstanceGroupRequest
 * @return ListAppInstanceGroupResponse
 */
ListAppInstanceGroupResponse Client::listAppInstanceGroup(const ListAppInstanceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAppInstanceGroupWithOptions(request, runtime);
}

/**
 * @summary Queries the details of session instances in a delivery group, including instance ID, instance status, creation time, update time, session status, and public IP address of the primary network interface.
 *
 * @param request ListAppInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAppInstancesResponse
 */
ListAppInstancesResponse Client::listAppInstancesWithOptions(const ListAppInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppInstanceGroupId()) {
    query["AppInstanceGroupId"] = request.getAppInstanceGroupId();
  }

  if (!!request.hasAppInstanceId()) {
    query["AppInstanceId"] = request.getAppInstanceId();
  }

  if (!!request.hasIncludeDeleted()) {
    query["IncludeDeleted"] = request.getIncludeDeleted();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasUserIdList()) {
    query["UserIdList"] = request.getUserIdList();
  }

  json body = {};
  if (!!request.hasAppInstanceIdList()) {
    body["AppInstanceIdList"] = request.getAppInstanceIdList();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListAppInstances"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAppInstancesResponse>();
}

/**
 * @summary Queries the details of session instances in a delivery group, including instance ID, instance status, creation time, update time, session status, and public IP address of the primary network interface.
 *
 * @param request ListAppInstancesRequest
 * @return ListAppInstancesResponse
 */
ListAppInstancesResponse Client::listAppInstances(const ListAppInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAppInstancesWithOptions(request, runtime);
}

/**
 * @summary Queries the list of user groups authorized by a specified delivery group.
 *
 * @param request ListAuthorizedUserGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAuthorizedUserGroupsResponse
 */
ListAuthorizedUserGroupsResponse Client::listAuthorizedUserGroupsWithOptions(const ListAuthorizedUserGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppInstanceGroupId()) {
    body["AppInstanceGroupId"] = request.getAppInstanceGroupId();
  }

  if (!!request.hasGroupId()) {
    body["GroupId"] = request.getGroupId();
  }

  if (!!request.hasGroupName()) {
    body["GroupName"] = request.getGroupName();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProductType()) {
    body["ProductType"] = request.getProductType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListAuthorizedUserGroups"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAuthorizedUserGroupsResponse>();
}

/**
 * @summary Queries the list of user groups authorized by a specified delivery group.
 *
 * @param request ListAuthorizedUserGroupsRequest
 * @return ListAuthorizedUserGroupsResponse
 */
ListAuthorizedUserGroupsResponse Client::listAuthorizedUserGroups(const ListAuthorizedUserGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAuthorizedUserGroupsWithOptions(request, runtime);
}

/**
 * @summary Queries the binding information between users and resources.
 *
 * @param request ListBindInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListBindInfoResponse
 */
ListBindInfoResponse Client::listBindInfoWithOptions(const ListBindInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppIdList()) {
    body["AppIdList"] = request.getAppIdList();
  }

  if (!!request.hasAppInstanceGroupIdList()) {
    body["AppInstanceGroupIdList"] = request.getAppInstanceGroupIdList();
  }

  if (!!request.hasAppInstanceIdList()) {
    body["AppInstanceIdList"] = request.getAppInstanceIdList();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasUserIdList()) {
    body["UserIdList"] = request.getUserIdList();
  }

  if (!!request.hasWyIdList()) {
    body["WyIdList"] = request.getWyIdList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListBindInfo"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListBindInfoResponse>();
}

/**
 * @summary Queries the binding information between users and resources.
 *
 * @param request ListBindInfoRequest
 * @return ListBindInfoResponse
 */
ListBindInfoResponse Client::listBindInfo(const ListBindInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listBindInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the list of desktop agent runtimes.
 *
 * @param request ListDesktopAgentRuntimeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDesktopAgentRuntimeResponse
 */
ListDesktopAgentRuntimeResponse Client::listDesktopAgentRuntimeWithOptions(const ListDesktopAgentRuntimeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentInstanceStatuses()) {
    query["AgentInstanceStatuses"] = request.getAgentInstanceStatuses();
  }

  if (!!request.hasAgentInstanceVersions()) {
    query["AgentInstanceVersions"] = request.getAgentInstanceVersions();
  }

  if (!!request.hasAgentPlatform()) {
    query["AgentPlatform"] = request.getAgentPlatform();
  }

  if (!!request.hasAgentProvider()) {
    query["AgentProvider"] = request.getAgentProvider();
  }

  if (!!request.hasAuthUsers()) {
    query["AuthUsers"] = request.getAuthUsers();
  }

  if (!!request.hasBizType()) {
    query["BizType"] = request.getBizType();
  }

  if (!!request.hasChannelConfigure()) {
    query["ChannelConfigure"] = request.getChannelConfigure();
  }

  if (!!request.hasDeploymentSource()) {
    query["DeploymentSource"] = request.getDeploymentSource();
  }

  if (!!request.hasDesktopIds()) {
    query["DesktopIds"] = request.getDesktopIds();
  }

  if (!!request.hasDesktopNames()) {
    query["DesktopNames"] = request.getDesktopNames();
  }

  if (!!request.hasDesktopStatuses()) {
    query["DesktopStatuses"] = request.getDesktopStatuses();
  }

  if (!!request.hasHasAuthUser()) {
    query["HasAuthUser"] = request.getHasAuthUser();
  }

  if (!!request.hasHasRisk()) {
    query["HasRisk"] = request.getHasRisk();
  }

  if (!!request.hasIncludeRiskInfo()) {
    query["IncludeRiskInfo"] = request.getIncludeRiskInfo();
  }

  if (!!request.hasManagementStatus()) {
    query["ManagementStatus"] = request.getManagementStatus();
  }

  if (!!request.hasModelConfigure()) {
    query["ModelConfigure"] = request.getModelConfigure();
  }

  if (!!request.hasModelTemplateId()) {
    query["ModelTemplateId"] = request.getModelTemplateId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceIds()) {
    query["ResourceIds"] = request.getResourceIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDesktopAgentRuntime"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDesktopAgentRuntimeResponse>();
}

/**
 * @summary Queries the list of desktop agent runtimes.
 *
 * @param request ListDesktopAgentRuntimeRequest
 * @return ListDesktopAgentRuntimeResponse
 */
ListDesktopAgentRuntimeResponse Client::listDesktopAgentRuntime(const ListDesktopAgentRuntimeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDesktopAgentRuntimeWithOptions(request, runtime);
}

/**
 * @summary Queries image information.
 *
 * @param request ListImageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListImageResponse
 */
ListImageResponse Client::listImageWithOptions(const ListImageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDistro()) {
    query["Distro"] = request.getDistro();
  }

  if (!!request.hasTagList()) {
    query["TagList"] = request.getTagList();
  }

  json body = {};
  if (!!request.hasBizRegionIdList()) {
    body["BizRegionIdList"] = request.getBizRegionIdList();
  }

  if (!!request.hasBizType()) {
    body["BizType"] = request.getBizType();
  }

  if (!!request.hasBizTypeList()) {
    body["BizTypeList"] = request.getBizTypeList();
  }

  if (!!request.hasFeatureList()) {
    body["FeatureList"] = request.getFeatureList();
  }

  if (!!request.hasFotaVersion()) {
    body["FotaVersion"] = request.getFotaVersion();
  }

  if (!!request.hasImageId()) {
    body["ImageId"] = request.getImageId();
  }

  if (!!request.hasImageName()) {
    body["ImageName"] = request.getImageName();
  }

  if (!!request.hasImageType()) {
    body["ImageType"] = request.getImageType();
  }

  if (!!request.hasLanguageType()) {
    body["LanguageType"] = request.getLanguageType();
  }

  if (!!request.hasOsType()) {
    body["OsType"] = request.getOsType();
  }

  if (!!request.hasPackageType()) {
    body["PackageType"] = request.getPackageType();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPlatformName()) {
    body["PlatformName"] = request.getPlatformName();
  }

  if (!!request.hasPlatformNameList()) {
    body["PlatformNameList"] = request.getPlatformNameList();
  }

  if (!!request.hasProductType()) {
    body["ProductType"] = request.getProductType();
  }

  if (!!request.hasProductTypeList()) {
    body["ProductTypeList"] = request.getProductTypeList();
  }

  if (!!request.hasProtocolType()) {
    body["ProtocolType"] = request.getProtocolType();
  }

  if (!!request.hasResourceInstanceType()) {
    body["ResourceInstanceType"] = request.getResourceInstanceType();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListImage"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListImageResponse>();
}

/**
 * @summary Queries image information.
 *
 * @param request ListImageRequest
 * @return ListImageResponse
 */
ListImageResponse Client::listImage(const ListImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listImageWithOptions(request, runtime);
}

/**
 * @summary Queries a list of LLM templates.
 *
 * @description You can use paging to retrieve the list of model templates under a model provider template in the Wuying Agent Management Center. You can filter results by model group ID, model provider template ID, model template ID, and model encoding. When you query by model group dimension, the default model is automatically pinned to the top.
 * Before you call this operation, make sure that you are familiar with the operations and usage of the Wuying Agent Management Center.
 *
 * @param tmpReq ListLlmTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListLlmTemplatesResponse
 */
ListLlmTemplatesResponse Client::listLlmTemplatesWithOptions(const ListLlmTemplatesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListLlmTemplatesShrinkRequest request = ListLlmTemplatesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasLlmTemplateIds()) {
    request.setLlmTemplateIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getLlmTemplateIds(), "LlmTemplateIds", "json"));
  }

  json query = {};
  if (!!request.hasLlmCode()) {
    query["LlmCode"] = request.getLlmCode();
  }

  if (!!request.hasLlmTemplateIdsShrink()) {
    query["LlmTemplateIds"] = request.getLlmTemplateIdsShrink();
  }

  if (!!request.hasModelTemplateId()) {
    query["ModelTemplateId"] = request.getModelTemplateId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProviderTemplateId()) {
    query["ProviderTemplateId"] = request.getProviderTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListLlmTemplates"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListLlmTemplatesResponse>();
}

/**
 * @summary Queries a list of LLM templates.
 *
 * @description You can use paging to retrieve the list of model templates under a model provider template in the Wuying Agent Management Center. You can filter results by model group ID, model provider template ID, model template ID, and model encoding. When you query by model group dimension, the default model is automatically pinned to the top.
 * Before you call this operation, make sure that you are familiar with the operations and usage of the Wuying Agent Management Center.
 *
 * @param request ListLlmTemplatesRequest
 * @return ListLlmTemplatesResponse
 */
ListLlmTemplatesResponse Client::listLlmTemplates(const ListLlmTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listLlmTemplatesWithOptions(request, runtime);
}

/**
 * @summary 查询模型提供商 Endpoint 列表
 *
 * @param request ListModelProviderEndpointsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListModelProviderEndpointsResponse
 */
ListModelProviderEndpointsResponse Client::listModelProviderEndpointsWithOptions(const ListModelProviderEndpointsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentPlatform()) {
    query["AgentPlatform"] = request.getAgentPlatform();
  }

  if (!!request.hasAgentProvider()) {
    query["AgentProvider"] = request.getAgentProvider();
  }

  if (!!request.hasBizType()) {
    query["BizType"] = request.getBizType();
  }

  if (!!request.hasProviderName()) {
    query["ProviderName"] = request.getProviderName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListModelProviderEndpoints"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListModelProviderEndpointsResponse>();
}

/**
 * @summary 查询模型提供商 Endpoint 列表
 *
 * @param request ListModelProviderEndpointsRequest
 * @return ListModelProviderEndpointsResponse
 */
ListModelProviderEndpointsResponse Client::listModelProviderEndpoints(const ListModelProviderEndpointsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listModelProviderEndpointsWithOptions(request, runtime);
}

/**
 * @summary Queries the list of model provider templates.
 *
 * @description You can perform a paged query to retrieve the list of model provider templates under a specified model group in the WUYING Agent Management Center. You can filter results by provider name, model group ID, and provider template ID. Paging is supported.
 * Before calling this operation, make sure that you are familiar with the operations and usage of the WUYING Agent Management Center.
 *
 * @param tmpReq ListModelProviderTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListModelProviderTemplatesResponse
 */
ListModelProviderTemplatesResponse Client::listModelProviderTemplatesWithOptions(const ListModelProviderTemplatesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListModelProviderTemplatesShrinkRequest request = ListModelProviderTemplatesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasProviderTemplateIds()) {
    request.setProviderTemplateIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getProviderTemplateIds(), "ProviderTemplateIds", "json"));
  }

  json query = {};
  if (!!request.hasAgentPlatform()) {
    query["AgentPlatform"] = request.getAgentPlatform();
  }

  if (!!request.hasAgentProvider()) {
    query["AgentProvider"] = request.getAgentProvider();
  }

  if (!!request.hasBizType()) {
    query["BizType"] = request.getBizType();
  }

  if (!!request.hasModelTemplateId()) {
    query["ModelTemplateId"] = request.getModelTemplateId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProviderName()) {
    query["ProviderName"] = request.getProviderName();
  }

  if (!!request.hasProviderTemplateIdsShrink()) {
    query["ProviderTemplateIds"] = request.getProviderTemplateIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListModelProviderTemplates"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListModelProviderTemplatesResponse>();
}

/**
 * @summary Queries the list of model provider templates.
 *
 * @description You can perform a paged query to retrieve the list of model provider templates under a specified model group in the WUYING Agent Management Center. You can filter results by provider name, model group ID, and provider template ID. Paging is supported.
 * Before calling this operation, make sure that you are familiar with the operations and usage of the WUYING Agent Management Center.
 *
 * @param request ListModelProviderTemplatesRequest
 * @return ListModelProviderTemplatesResponse
 */
ListModelProviderTemplatesResponse Client::listModelProviderTemplates(const ListModelProviderTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listModelProviderTemplatesWithOptions(request, runtime);
}

/**
 * @summary Queries the list of resource groups associated with a model group.
 *
 * @description You can call this operation to query the list of resource groups authorized by a model group in the Wuying Agent Management Center.
 * Before you call this operation, make sure that you are familiar with the operations and usage of the Wuying Agent Management Center.
 *
 * @param request ListModelTemplateResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListModelTemplateResourceGroupResponse
 */
ListModelTemplateResourceGroupResponse Client::listModelTemplateResourceGroupWithOptions(const ListModelTemplateResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasModelTemplateId()) {
    query["ModelTemplateId"] = request.getModelTemplateId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceGroupIds()) {
    query["ResourceGroupIds"] = request.getResourceGroupIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListModelTemplateResourceGroup"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListModelTemplateResourceGroupResponse>();
}

/**
 * @summary Queries the list of resource groups associated with a model group.
 *
 * @description You can call this operation to query the list of resource groups authorized by a model group in the Wuying Agent Management Center.
 * Before you call this operation, make sure that you are familiar with the operations and usage of the Wuying Agent Management Center.
 *
 * @param request ListModelTemplateResourceGroupRequest
 * @return ListModelTemplateResourceGroupResponse
 */
ListModelTemplateResourceGroupResponse Client::listModelTemplateResourceGroup(const ListModelTemplateResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listModelTemplateResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Queries a list of model templates.
 *
 * @description You can use paged query to retrieve model groups that have been created in the Wuying Agent Management Center, with paging support. You can filter results by Agent provider, Agent platform, template group ID, and whether models have been configured.
 * Before calling this operation, make sure that you are familiar with the operations and usage of the Wuying Agent Management Center.
 *
 * @param tmpReq ListModelTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListModelTemplatesResponse
 */
ListModelTemplatesResponse Client::listModelTemplatesWithOptions(const ListModelTemplatesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListModelTemplatesShrinkRequest request = ListModelTemplatesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasModelTemplateIdList()) {
    request.setModelTemplateIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getModelTemplateIdList(), "ModelTemplateIdList", "json"));
  }

  json query = {};
  if (!!request.hasAgentPlatform()) {
    query["AgentPlatform"] = request.getAgentPlatform();
  }

  if (!!request.hasAgentProvider()) {
    query["AgentProvider"] = request.getAgentProvider();
  }

  if (!!request.hasBizType()) {
    query["BizType"] = request.getBizType();
  }

  if (!!request.hasHasModel()) {
    query["HasModel"] = request.getHasModel();
  }

  if (!!request.hasModelTemplateIdListShrink()) {
    query["ModelTemplateIdList"] = request.getModelTemplateIdListShrink();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListModelTemplates"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListModelTemplatesResponse>();
}

/**
 * @summary Queries a list of model templates.
 *
 * @description You can use paged query to retrieve model groups that have been created in the Wuying Agent Management Center, with paging support. You can filter results by Agent provider, Agent platform, template group ID, and whether models have been configured.
 * Before calling this operation, make sure that you are familiar with the operations and usage of the Wuying Agent Management Center.
 *
 * @param request ListModelTemplatesRequest
 * @return ListModelTemplatesResponse
 */
ListModelTemplatesResponse Client::listModelTemplates(const ListModelTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listModelTemplatesWithOptions(request, runtime);
}

/**
 * @summary Queries the resource specifications available for selection when creating a delivery group.
 *
 * @param request ListNodeInstanceTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListNodeInstanceTypeResponse
 */
ListNodeInstanceTypeResponse Client::listNodeInstanceTypeWithOptions(const ListNodeInstanceTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizRegionId()) {
    query["BizRegionId"] = request.getBizRegionId();
  }

  if (!!request.hasCpu()) {
    query["Cpu"] = request.getCpu();
  }

  if (!!request.hasGpu()) {
    query["Gpu"] = request.getGpu();
  }

  if (!!request.hasGpuMemory()) {
    query["GpuMemory"] = request.getGpuMemory();
  }

  if (!!request.hasInstanceTypeForModify()) {
    query["InstanceTypeForModify"] = request.getInstanceTypeForModify();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasMemory()) {
    query["Memory"] = request.getMemory();
  }

  if (!!request.hasNodeInstanceType()) {
    query["NodeInstanceType"] = request.getNodeInstanceType();
  }

  if (!!request.hasNodeInstanceTypeFamily()) {
    query["NodeInstanceTypeFamily"] = request.getNodeInstanceTypeFamily();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.getOrderBy();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.getOrderType();
  }

  if (!!request.hasOsType()) {
    query["OsType"] = request.getOsType();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.getProductType();
  }

  if (!!request.hasSortType()) {
    query["SortType"] = request.getSortType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListNodeInstanceType"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListNodeInstanceTypeResponse>();
}

/**
 * @summary Queries the resource specifications available for selection when creating a delivery group.
 *
 * @param request ListNodeInstanceTypeRequest
 * @return ListNodeInstanceTypeResponse
 */
ListNodeInstanceTypeResponse Client::listNodeInstanceType(const ListNodeInstanceTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNodeInstanceTypeWithOptions(request, runtime);
}

/**
 * @summary Queries the list of resource nodes.
 *
 * @param request ListNodesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListNodesResponse
 */
ListNodesResponse Client::listNodesWithOptions(const ListNodesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppInstanceGroupId()) {
    body["AppInstanceGroupId"] = request.getAppInstanceGroupId();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProductType()) {
    body["ProductType"] = request.getProductType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListNodes"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListNodesResponse>();
}

/**
 * @summary Queries the list of resource nodes.
 *
 * @param request ListNodesRequest
 * @return ListNodesResponse
 */
ListNodesResponse Client::listNodes(const ListNodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNodesWithOptions(request, runtime);
}

/**
 * @summary Queries the history of over-the-air updates.
 *
 * @param request ListOtaTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListOtaTaskResponse
 */
ListOtaTaskResponse Client::listOtaTaskWithOptions(const ListOtaTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppInstanceGroupId()) {
    body["AppInstanceGroupId"] = request.getAppInstanceGroupId();
  }

  if (!!request.hasOtaType()) {
    body["OtaType"] = request.getOtaType();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListOtaTask"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListOtaTaskResponse>();
}

/**
 * @summary Queries the history of over-the-air updates.
 *
 * @param request ListOtaTaskRequest
 * @return ListOtaTaskResponse
 */
ListOtaTaskResponse Client::listOtaTask(const ListOtaTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listOtaTaskWithOptions(request, runtime);
}

/**
 * @summary Queries the list of persistent session application instances in a delivery group.
 *
 * @param request ListPersistentAppInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPersistentAppInstancesResponse
 */
ListPersistentAppInstancesResponse Client::listPersistentAppInstancesWithOptions(const ListPersistentAppInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppInstanceGroupId()) {
    query["AppInstanceGroupId"] = request.getAppInstanceGroupId();
  }

  if (!!request.hasAppInstancePersistentIds()) {
    query["AppInstancePersistentIds"] = request.getAppInstancePersistentIds();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.getProductType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPersistentAppInstances"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPersistentAppInstancesResponse>();
}

/**
 * @summary Queries the list of persistent session application instances in a delivery group.
 *
 * @param request ListPersistentAppInstancesRequest
 * @return ListPersistentAppInstancesResponse
 */
ListPersistentAppInstancesResponse Client::listPersistentAppInstances(const ListPersistentAppInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPersistentAppInstancesWithOptions(request, runtime);
}

/**
 * @summary Queries the regions supported by WUYING Cloud Application.
 *
 * @description > The regions returned by this operation are not necessarily all available regions. For information about available regions, see [Supported regions](https://help.aliyun.com/document_detail/426036.html).
 *
 * @param request ListRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRegionsResponse
 */
ListRegionsResponse Client::listRegionsWithOptions(const ListRegionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizSource()) {
    query["BizSource"] = request.getBizSource();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.getProductType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRegions"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRegionsResponse>();
}

/**
 * @summary Queries the regions supported by WUYING Cloud Application.
 *
 * @description > The regions returned by this operation are not necessarily all available regions. For information about available regions, see [Supported regions](https://help.aliyun.com/document_detail/426036.html).
 *
 * @param request ListRegionsRequest
 * @return ListRegionsResponse
 */
ListRegionsResponse Client::listRegions(const ListRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRegionsWithOptions(request, runtime);
}

/**
 * @summary Queries the tag list of one or more specified cloud resources.
 *
 * @param request ListTagCloudResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagCloudResourcesResponse
 */
ListTagCloudResourcesResponse Client::listTagCloudResourcesWithOptions(const ListTagCloudResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasResourceIds()) {
    body["ResourceIds"] = request.getResourceIds();
  }

  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasScope()) {
    body["Scope"] = request.getScope();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListTagCloudResources"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTagCloudResourcesResponse>();
}

/**
 * @summary Queries the tag list of one or more specified cloud resources.
 *
 * @param request ListTagCloudResourcesRequest
 * @return ListTagCloudResourcesResponse
 */
ListTagCloudResourcesResponse Client::listTagCloudResources(const ListTagCloudResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagCloudResourcesWithOptions(request, runtime);
}

/**
 * @summary Queries the configuration information of an administrator account, such as whether resource expiration reminders are enabled.
 *
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTenantConfigResponse
 */
ListTenantConfigResponse Client::listTenantConfigWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "ListTenantConfig"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTenantConfigResponse>();
}

/**
 * @summary Queries the configuration information of an administrator account, such as whether resource expiration reminders are enabled.
 *
 * @return ListTenantConfigResponse
 */
ListTenantConfigResponse Client::listTenantConfig() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTenantConfigWithOptions(runtime);
}

/**
 * @summary Queries the list of workstations.
 *
 * @param request ListWuyingServerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWuyingServerResponse
 */
ListWuyingServerResponse Client::listWuyingServerWithOptions(const ListWuyingServerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  json bodyFlat = {};
  if (!!request.hasAddVirtualNodePoolStatusList()) {
    bodyFlat["AddVirtualNodePoolStatusList"] = request.getAddVirtualNodePoolStatusList();
  }

  if (!!request.hasBizRegionId()) {
    body["BizRegionId"] = request.getBizRegionId();
  }

  if (!!request.hasBizType()) {
    body["BizType"] = request.getBizType();
  }

  if (!!request.hasChargeType()) {
    body["ChargeType"] = request.getChargeType();
  }

  if (!!request.hasImageId()) {
    body["ImageId"] = request.getImageId();
  }

  if (!!request.hasOfficeSiteId()) {
    body["OfficeSiteId"] = request.getOfficeSiteId();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProductType()) {
    body["ProductType"] = request.getProductType();
  }

  if (!!request.hasServerInstanceType()) {
    body["ServerInstanceType"] = request.getServerInstanceType();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.getStatus();
  }

  if (!!request.hasUsers()) {
    bodyFlat["Users"] = request.getUsers();
  }

  if (!!request.hasVirtualNodePoolId()) {
    body["VirtualNodePoolId"] = request.getVirtualNodePoolId();
  }

  if (!!request.hasWuyingServerIdList()) {
    bodyFlat["WuyingServerIdList"] = request.getWuyingServerIdList();
  }

  if (!!request.hasWuyingServerNameOrId()) {
    body["WuyingServerNameOrId"] = request.getWuyingServerNameOrId();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListWuyingServer"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWuyingServerResponse>();
}

/**
 * @summary Queries the list of workstations.
 *
 * @param request ListWuyingServerRequest
 * @return ListWuyingServerResponse
 */
ListWuyingServerResponse Client::listWuyingServer(const ListWuyingServerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listWuyingServerWithOptions(request, runtime);
}

/**
 * @summary Logs off all sessions in a pay-as-you-go delivery group that has scheduled auto scaling policies enabled.
 *
 * @description > This operation is applicable only to pay-as-you-go resource delivery groups that have scheduled auto scaling policies enabled, and can be called successfully only outside the scaling time periods configured in the scheduled auto scaling policies.
 *
 * @param request LogOffAllSessionsInAppInstanceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return LogOffAllSessionsInAppInstanceGroupResponse
 */
LogOffAllSessionsInAppInstanceGroupResponse Client::logOffAllSessionsInAppInstanceGroupWithOptions(const LogOffAllSessionsInAppInstanceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppInstanceGroupId()) {
    body["AppInstanceGroupId"] = request.getAppInstanceGroupId();
  }

  if (!!request.hasProductType()) {
    body["ProductType"] = request.getProductType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "LogOffAllSessionsInAppInstanceGroup"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<LogOffAllSessionsInAppInstanceGroupResponse>();
}

/**
 * @summary Logs off all sessions in a pay-as-you-go delivery group that has scheduled auto scaling policies enabled.
 *
 * @description > This operation is applicable only to pay-as-you-go resource delivery groups that have scheduled auto scaling policies enabled, and can be called successfully only outside the scaling time periods configured in the scheduled auto scaling policies.
 *
 * @param request LogOffAllSessionsInAppInstanceGroupRequest
 * @return LogOffAllSessionsInAppInstanceGroupResponse
 */
LogOffAllSessionsInAppInstanceGroupResponse Client::logOffAllSessionsInAppInstanceGroup(const LogOffAllSessionsInAppInstanceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return logOffAllSessionsInAppInstanceGroupWithOptions(request, runtime);
}

/**
 * @summary Modifies the General Policy of a delivery group, including the number of concurrent sessions and the session retention duration after disconnection.
 *
 * @param tmpReq ModifyAppInstanceGroupAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAppInstanceGroupAttributeResponse
 */
ModifyAppInstanceGroupAttributeResponse Client::modifyAppInstanceGroupAttributeWithOptions(const ModifyAppInstanceGroupAttributeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyAppInstanceGroupAttributeShrinkRequest request = ModifyAppInstanceGroupAttributeShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasNetwork()) {
    request.setNetworkShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNetwork(), "Network", "json"));
  }

  if (!!tmpReq.hasNodePool()) {
    request.setNodePoolShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNodePool(), "NodePool", "json"));
  }

  if (!!tmpReq.hasSecurityPolicy()) {
    request.setSecurityPolicyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSecurityPolicy(), "SecurityPolicy", "json"));
  }

  if (!!tmpReq.hasStoragePolicy()) {
    request.setStoragePolicyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getStoragePolicy(), "StoragePolicy", "json"));
  }

  json query = {};
  if (!!request.hasAppInstanceGroupId()) {
    query["AppInstanceGroupId"] = request.getAppInstanceGroupId();
  }

  if (!!request.hasAppInstanceGroupName()) {
    query["AppInstanceGroupName"] = request.getAppInstanceGroupName();
  }

  if (!!request.hasNodePoolShrink()) {
    query["NodePool"] = request.getNodePoolShrink();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.getProductType();
  }

  if (!!request.hasSessionTimeout()) {
    query["SessionTimeout"] = request.getSessionTimeout();
  }

  json body = {};
  if (!!request.hasNetworkShrink()) {
    body["Network"] = request.getNetworkShrink();
  }

  if (!!request.hasPerSessionPerApp()) {
    body["PerSessionPerApp"] = request.getPerSessionPerApp();
  }

  if (!!request.hasPreOpenAppId()) {
    body["PreOpenAppId"] = request.getPreOpenAppId();
  }

  if (!!request.hasPreOpenMode()) {
    body["PreOpenMode"] = request.getPreOpenMode();
  }

  if (!!request.hasSecurityPolicyShrink()) {
    body["SecurityPolicy"] = request.getSecurityPolicyShrink();
  }

  if (!!request.hasStoragePolicyShrink()) {
    body["StoragePolicy"] = request.getStoragePolicyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModifyAppInstanceGroupAttribute"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAppInstanceGroupAttributeResponse>();
}

/**
 * @summary Modifies the General Policy of a delivery group, including the number of concurrent sessions and the session retention duration after disconnection.
 *
 * @param request ModifyAppInstanceGroupAttributeRequest
 * @return ModifyAppInstanceGroupAttributeResponse
 */
ModifyAppInstanceGroupAttributeResponse Client::modifyAppInstanceGroupAttribute(const ModifyAppInstanceGroupAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAppInstanceGroupAttributeWithOptions(request, runtime);
}

/**
 * @summary Modifies the display policy of a delivery group, including settings such as frame rate, resolution, and protocol type.
 *
 * @param tmpReq ModifyAppPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAppPolicyResponse
 */
ModifyAppPolicyResponse Client::modifyAppPolicyWithOptions(const ModifyAppPolicyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyAppPolicyShrinkRequest request = ModifyAppPolicyShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasVideoPolicy()) {
    request.setVideoPolicyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getVideoPolicy(), "VideoPolicy", "json"));
  }

  json query = {};
  if (!!request.hasAppPolicyId()) {
    query["AppPolicyId"] = request.getAppPolicyId();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.getProductType();
  }

  if (!!request.hasVideoPolicyShrink()) {
    query["VideoPolicy"] = request.getVideoPolicyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyAppPolicy"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAppPolicyResponse>();
}

/**
 * @summary Modifies the display policy of a delivery group, including settings such as frame rate, resolution, and protocol type.
 *
 * @param request ModifyAppPolicyRequest
 * @return ModifyAppPolicyResponse
 */
ModifyAppPolicyResponse Client::modifyAppPolicy(const ModifyAppPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAppPolicyWithOptions(request, runtime);
}

/**
 * @summary Modifies the attributes of a Wuying Cloud Browser.
 *
 * @description Modifies the attributes of a Wuying Cloud Browser.
 *
 * @param tmpReq ModifyBrowserInstanceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyBrowserInstanceGroupResponse
 */
ModifyBrowserInstanceGroupResponse Client::modifyBrowserInstanceGroupWithOptions(const ModifyBrowserInstanceGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyBrowserInstanceGroupShrinkRequest request = ModifyBrowserInstanceGroupShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBrowserConfig()) {
    request.setBrowserConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBrowserConfig(), "BrowserConfig", "json"));
  }

  if (!!tmpReq.hasNetwork()) {
    request.setNetworkShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNetwork(), "Network", "json"));
  }

  if (!!tmpReq.hasPolicy()) {
    request.setPolicyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPolicy(), "Policy", "json"));
  }

  if (!!tmpReq.hasStoragePolicy()) {
    request.setStoragePolicyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getStoragePolicy(), "StoragePolicy", "json"));
  }

  if (!!tmpReq.hasTimers()) {
    request.setTimersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTimers(), "Timers", "json"));
  }

  json query = {};
  if (!!request.hasBrowserConfigShrink()) {
    query["BrowserConfig"] = request.getBrowserConfigShrink();
  }

  if (!!request.hasBrowserInstanceGroupId()) {
    query["BrowserInstanceGroupId"] = request.getBrowserInstanceGroupId();
  }

  if (!!request.hasPolicyShrink()) {
    query["Policy"] = request.getPolicyShrink();
  }

  if (!!request.hasTimersShrink()) {
    query["Timers"] = request.getTimersShrink();
  }

  json body = {};
  if (!!request.hasCloudBrowserName()) {
    body["CloudBrowserName"] = request.getCloudBrowserName();
  }

  if (!!request.hasMaxAmount()) {
    body["MaxAmount"] = request.getMaxAmount();
  }

  if (!!request.hasNetworkShrink()) {
    body["Network"] = request.getNetworkShrink();
  }

  if (!!request.hasStoragePolicyShrink()) {
    body["StoragePolicy"] = request.getStoragePolicyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModifyBrowserInstanceGroup"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyBrowserInstanceGroupResponse>();
}

/**
 * @summary Modifies the attributes of a Wuying Cloud Browser.
 *
 * @description Modifies the attributes of a Wuying Cloud Browser.
 *
 * @param request ModifyBrowserInstanceGroupRequest
 * @return ModifyBrowserInstanceGroupResponse
 */
ModifyBrowserInstanceGroupResponse Client::modifyBrowserInstanceGroup(const ModifyBrowserInstanceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyBrowserInstanceGroupWithOptions(request, runtime);
}

/**
 * @summary Upgrades the number of nodes in a subscription delivery group.
 *
 * @param tmpReq ModifyNodePoolAmountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyNodePoolAmountResponse
 */
ModifyNodePoolAmountResponse Client::modifyNodePoolAmountWithOptions(const ModifyNodePoolAmountRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyNodePoolAmountShrinkRequest request = ModifyNodePoolAmountShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasNodePool()) {
    request.setNodePoolShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNodePool(), "NodePool", "json"));
  }

  json body = {};
  if (!!request.hasAppInstanceGroupId()) {
    body["AppInstanceGroupId"] = request.getAppInstanceGroupId();
  }

  if (!!request.hasNodePoolShrink()) {
    body["NodePool"] = request.getNodePoolShrink();
  }

  if (!!request.hasProductType()) {
    body["ProductType"] = request.getProductType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ModifyNodePoolAmount"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyNodePoolAmountResponse>();
}

/**
 * @summary Upgrades the number of nodes in a subscription delivery group.
 *
 * @param request ModifyNodePoolAmountRequest
 * @return ModifyNodePoolAmountResponse
 */
ModifyNodePoolAmountResponse Client::modifyNodePoolAmount(const ModifyNodePoolAmountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyNodePoolAmountWithOptions(request, runtime);
}

/**
 * @summary Modifies the scaling mode of a delivery group, including fixed quantity (no elastic scaling), scheduled scaling, and automatic scaling.
 *
 * @description You can configure the scaling pattern for WUYING Cloud Application resources in Settings:
 * - Fixed quantity: Elastic scaling is not used.
 * - Automatic scaling: Automatically scales resources based on the number of connected sessions and the idle duration without session connections.
 * - Scheduled scaling: Executes resource scaling during specified time periods on specified dates.
 * Before using this operation, make sure that you fully understand the [billing method and pricing](https://help.aliyun.com/document_detail/426039.html) of WUYING Cloud Application.
 *
 * @param tmpReq ModifyNodePoolAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyNodePoolAttributeResponse
 */
ModifyNodePoolAttributeResponse Client::modifyNodePoolAttributeWithOptions(const ModifyNodePoolAttributeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyNodePoolAttributeShrinkRequest request = ModifyNodePoolAttributeShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasNodePoolStrategy()) {
    request.setNodePoolStrategyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNodePoolStrategy(), "NodePoolStrategy", "json"));
  }

  json body = {};
  if (!!request.hasBizRegionId()) {
    body["BizRegionId"] = request.getBizRegionId();
  }

  if (!!request.hasNodeCapacity()) {
    body["NodeCapacity"] = request.getNodeCapacity();
  }

  if (!!request.hasNodePoolStrategyShrink()) {
    body["NodePoolStrategy"] = request.getNodePoolStrategyShrink();
  }

  if (!!request.hasPoolId()) {
    body["PoolId"] = request.getPoolId();
  }

  if (!!request.hasProductType()) {
    body["ProductType"] = request.getProductType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ModifyNodePoolAttribute"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyNodePoolAttributeResponse>();
}

/**
 * @summary Modifies the scaling mode of a delivery group, including fixed quantity (no elastic scaling), scheduled scaling, and automatic scaling.
 *
 * @description You can configure the scaling pattern for WUYING Cloud Application resources in Settings:
 * - Fixed quantity: Elastic scaling is not used.
 * - Automatic scaling: Automatically scales resources based on the number of connected sessions and the idle duration without session connections.
 * - Scheduled scaling: Executes resource scaling during specified time periods on specified dates.
 * Before using this operation, make sure that you fully understand the [billing method and pricing](https://help.aliyun.com/document_detail/426039.html) of WUYING Cloud Application.
 *
 * @param request ModifyNodePoolAttributeRequest
 * @return ModifyNodePoolAttributeResponse
 */
ModifyNodePoolAttributeResponse Client::modifyNodePoolAttribute(const ModifyNodePoolAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyNodePoolAttributeWithOptions(request, runtime);
}

/**
 * @summary Modifies the configuration of an administrator account, such as whether to enable resource expiration reminders.
 *
 * @param request ModifyTenantConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyTenantConfigResponse
 */
ModifyTenantConfigResponse Client::modifyTenantConfigWithOptions(const ModifyTenantConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppInstanceGroupExpireRemind()) {
    body["AppInstanceGroupExpireRemind"] = request.getAppInstanceGroupExpireRemind();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ModifyTenantConfig"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyTenantConfigResponse>();
}

/**
 * @summary Modifies the configuration of an administrator account, such as whether to enable resource expiration reminders.
 *
 * @param request ModifyTenantConfigRequest
 * @return ModifyTenantConfigResponse
 */
ModifyTenantConfigResponse Client::modifyTenantConfig(const ModifyTenantConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyTenantConfigWithOptions(request, runtime);
}

/**
 * @summary Modifies the properties of a cloud graphics workstation.
 *
 * @param request ModifyWuyingServerAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyWuyingServerAttributeResponse
 */
ModifyWuyingServerAttributeResponse Client::modifyWuyingServerAttributeWithOptions(const ModifyWuyingServerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasPassword()) {
    body["Password"] = request.getPassword();
  }

  if (!!request.hasProductType()) {
    body["ProductType"] = request.getProductType();
  }

  if (!!request.hasWuyingServerId()) {
    body["WuyingServerId"] = request.getWuyingServerId();
  }

  if (!!request.hasWuyingServerName()) {
    body["WuyingServerName"] = request.getWuyingServerName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ModifyWuyingServerAttribute"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyWuyingServerAttributeResponse>();
}

/**
 * @summary Modifies the properties of a cloud graphics workstation.
 *
 * @param request ModifyWuyingServerAttributeRequest
 * @return ModifyWuyingServerAttributeResponse
 */
ModifyWuyingServerAttributeResponse Client::modifyWuyingServerAttribute(const ModifyWuyingServerAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyWuyingServerAttributeWithOptions(request, runtime);
}

/**
 * @summary Performs a paged query on allocated users added to a delivery group.
 *
 * @param request PageListAppInstanceGroupUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PageListAppInstanceGroupUserResponse
 */
PageListAppInstanceGroupUserResponse Client::pageListAppInstanceGroupUserWithOptions(const PageListAppInstanceGroupUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppInstanceGroupId()) {
    body["AppInstanceGroupId"] = request.getAppInstanceGroupId();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProductType()) {
    body["ProductType"] = request.getProductType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "PageListAppInstanceGroupUser"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PageListAppInstanceGroupUserResponse>();
}

/**
 * @summary Performs a paged query on allocated users added to a delivery group.
 *
 * @param request PageListAppInstanceGroupUserRequest
 * @return PageListAppInstanceGroupUserResponse
 */
PageListAppInstanceGroupUserResponse Client::pageListAppInstanceGroupUser(const PageListAppInstanceGroupUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pageListAppInstanceGroupUserWithOptions(request, runtime);
}

/**
 * @summary Removes model groups from a resource group.
 *
 * @description You can authorize model groups for resources that belong to Agent runtimes such as JVS Computer, OpenClaw, and Hermes Agent in the WUYING Agent Management Center. The model groups serve as inference engines for Agents to execute tasks within the resource group.
 * When an Agent runtime has its own model group configured and the resource group it belongs to also has a model group configured, the model group bound to the resource group takes effect. The resource group setting takes priority over the Agent runtime setting.
 * When you remove the model group from the resource group to which an Agent runtime belongs, the model group configured on the Agent runtime itself automatically takes effect.
 * Before calling this operation, make sure that you are familiar with the operations and usage of the WUYING Agent Management Center.
 *
 * @param request RemoveResourceGroupModelTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveResourceGroupModelTemplateResponse
 */
RemoveResourceGroupModelTemplateResponse Client::removeResourceGroupModelTemplateWithOptions(const RemoveResourceGroupModelTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasModelTemplateId()) {
    body["ModelTemplateId"] = request.getModelTemplateId();
  }

  if (!!request.hasResourceGroupIds()) {
    body["ResourceGroupIds"] = request.getResourceGroupIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RemoveResourceGroupModelTemplate"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveResourceGroupModelTemplateResponse>();
}

/**
 * @summary Removes model groups from a resource group.
 *
 * @description You can authorize model groups for resources that belong to Agent runtimes such as JVS Computer, OpenClaw, and Hermes Agent in the WUYING Agent Management Center. The model groups serve as inference engines for Agents to execute tasks within the resource group.
 * When an Agent runtime has its own model group configured and the resource group it belongs to also has a model group configured, the model group bound to the resource group takes effect. The resource group setting takes priority over the Agent runtime setting.
 * When you remove the model group from the resource group to which an Agent runtime belongs, the model group configured on the Agent runtime itself automatically takes effect.
 * Before calling this operation, make sure that you are familiar with the operations and usage of the WUYING Agent Management Center.
 *
 * @param request RemoveResourceGroupModelTemplateRequest
 * @return RemoveResourceGroupModelTemplateResponse
 */
RemoveResourceGroupModelTemplateResponse Client::removeResourceGroupModelTemplate(const RemoveResourceGroupModelTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeResourceGroupModelTemplateWithOptions(request, runtime);
}

/**
 * @summary Removes a third-party channel configuration from an agent runtime.
 *
 * @description You can call this operation to remove a specific third-party channel configuration from an agent runtime such as JVS Computer, OpenClaw, or Hermes Agent in the Wuying Agent Management Center. After the configuration is removed, the agent can no longer use the third-party channel for conversations.
 * Before calling this operation, make sure that you are familiar with the operations and usage of the Wuying Agent Management Center.
 *
 * @param request RemoveRuntimeChannelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveRuntimeChannelResponse
 */
RemoveRuntimeChannelResponse Client::removeRuntimeChannelWithOptions(const RemoveRuntimeChannelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAgentPlatform()) {
    body["AgentPlatform"] = request.getAgentPlatform();
  }

  if (!!request.hasAgentProvider()) {
    body["AgentProvider"] = request.getAgentProvider();
  }

  if (!!request.hasCode()) {
    body["Code"] = request.getCode();
  }

  if (!!request.hasRuntimeIds()) {
    body["RuntimeIds"] = request.getRuntimeIds();
  }

  if (!!request.hasRuntimeType()) {
    body["RuntimeType"] = request.getRuntimeType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RemoveRuntimeChannel"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveRuntimeChannelResponse>();
}

/**
 * @summary Removes a third-party channel configuration from an agent runtime.
 *
 * @description You can call this operation to remove a specific third-party channel configuration from an agent runtime such as JVS Computer, OpenClaw, or Hermes Agent in the Wuying Agent Management Center. After the configuration is removed, the agent can no longer use the third-party channel for conversations.
 * Before calling this operation, make sure that you are familiar with the operations and usage of the Wuying Agent Management Center.
 *
 * @param request RemoveRuntimeChannelRequest
 * @return RemoveRuntimeChannelResponse
 */
RemoveRuntimeChannelResponse Client::removeRuntimeChannel(const RemoveRuntimeChannelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeRuntimeChannelWithOptions(request, runtime);
}

/**
 * @summary Removes model groups from Agent runtime resources.
 *
 * @description You can remove model groups from Agent runtime resources such as JVS Computer, OpenClaw, and Hermes Agent in the Wuying Agent Management Center. When an Agent runtime resource needs to switch to a different model group, call this operation first to remove the authorization relationship between the Agent runtime resource and the existing model group.
 * Make sure that you are familiar with the operations and usage of the Wuying Agent Management Center before calling this operation.
 *
 * @param request RemoveRuntimeModelTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveRuntimeModelTemplateResponse
 */
RemoveRuntimeModelTemplateResponse Client::removeRuntimeModelTemplateWithOptions(const RemoveRuntimeModelTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasModelTemplateId()) {
    body["ModelTemplateId"] = request.getModelTemplateId();
  }

  if (!!request.hasRuntimeIds()) {
    body["RuntimeIds"] = request.getRuntimeIds();
  }

  if (!!request.hasRuntimeType()) {
    body["RuntimeType"] = request.getRuntimeType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RemoveRuntimeModelTemplate"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveRuntimeModelTemplateResponse>();
}

/**
 * @summary Removes model groups from Agent runtime resources.
 *
 * @description You can remove model groups from Agent runtime resources such as JVS Computer, OpenClaw, and Hermes Agent in the Wuying Agent Management Center. When an Agent runtime resource needs to switch to a different model group, call this operation first to remove the authorization relationship between the Agent runtime resource and the existing model group.
 * Make sure that you are familiar with the operations and usage of the Wuying Agent Management Center before calling this operation.
 *
 * @param request RemoveRuntimeModelTemplateRequest
 * @return RemoveRuntimeModelTemplateResponse
 */
RemoveRuntimeModelTemplateResponse Client::removeRuntimeModelTemplate(const RemoveRuntimeModelTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeRuntimeModelTemplateWithOptions(request, runtime);
}

/**
 * @summary Renews a delivery group.
 *
 * @description Before you call this operation, make sure that you are familiar with the [Billable methods and pricing](https://help.aliyun.com/document_detail/426039.html) of WUYING Workspace.
 *
 * @param tmpReq RenewAppInstanceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RenewAppInstanceGroupResponse
 */
RenewAppInstanceGroupResponse Client::renewAppInstanceGroupWithOptions(const RenewAppInstanceGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RenewAppInstanceGroupShrinkRequest request = RenewAppInstanceGroupShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRenewNodes()) {
    request.setRenewNodesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRenewNodes(), "RenewNodes", "json"));
  }

  json query = {};
  if (!!request.hasAppInstanceGroupId()) {
    query["AppInstanceGroupId"] = request.getAppInstanceGroupId();
  }

  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasPeriodUnit()) {
    query["PeriodUnit"] = request.getPeriodUnit();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.getProductType();
  }

  if (!!request.hasPromotionId()) {
    query["PromotionId"] = request.getPromotionId();
  }

  if (!!request.hasRenewAmount()) {
    query["RenewAmount"] = request.getRenewAmount();
  }

  if (!!request.hasRenewMode()) {
    query["RenewMode"] = request.getRenewMode();
  }

  if (!!request.hasRenewNodesShrink()) {
    query["RenewNodes"] = request.getRenewNodesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RenewAppInstanceGroup"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RenewAppInstanceGroupResponse>();
}

/**
 * @summary Renews a delivery group.
 *
 * @description Before you call this operation, make sure that you are familiar with the [Billable methods and pricing](https://help.aliyun.com/document_detail/426039.html) of WUYING Workspace.
 *
 * @param request RenewAppInstanceGroupRequest
 * @return RenewAppInstanceGroupResponse
 */
RenewAppInstanceGroupResponse Client::renewAppInstanceGroup(const RenewAppInstanceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return renewAppInstanceGroupWithOptions(request, runtime);
}

/**
 * @summary Renews a workstation.
 *
 * @param request RenewWuyingServerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RenewWuyingServerResponse
 */
RenewWuyingServerResponse Client::renewWuyingServerWithOptions(const RenewWuyingServerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAutoPay()) {
    body["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasPeriod()) {
    body["Period"] = request.getPeriod();
  }

  if (!!request.hasPeriodUnit()) {
    body["PeriodUnit"] = request.getPeriodUnit();
  }

  if (!!request.hasPromotionId()) {
    body["PromotionId"] = request.getPromotionId();
  }

  if (!!request.hasWuyingServerId()) {
    body["WuyingServerId"] = request.getWuyingServerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RenewWuyingServer"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RenewWuyingServerResponse>();
}

/**
 * @summary Renews a workstation.
 *
 * @param request RenewWuyingServerRequest
 * @return RenewWuyingServerResponse
 */
RenewWuyingServerResponse Client::renewWuyingServer(const RenewWuyingServerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return renewWuyingServerWithOptions(request, runtime);
}

/**
 * @summary Restarts a workstation.
 *
 * @param request RestartWuyingServerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RestartWuyingServerResponse
 */
RestartWuyingServerResponse Client::restartWuyingServerWithOptions(const RestartWuyingServerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasProductType()) {
    body["ProductType"] = request.getProductType();
  }

  json bodyFlat = {};
  if (!!request.hasWuyingServerIdList()) {
    bodyFlat["WuyingServerIdList"] = request.getWuyingServerIdList();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RestartWuyingServer"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RestartWuyingServerResponse>();
}

/**
 * @summary Restarts a workstation.
 *
 * @param request RestartWuyingServerRequest
 * @return RestartWuyingServerResponse
 */
RestartWuyingServerResponse Client::restartWuyingServer(const RestartWuyingServerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return restartWuyingServerWithOptions(request, runtime);
}

/**
 * @summary Initiates a task to copy an image to other regions.
 *
 * @param request StartTaskForDistributeImageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartTaskForDistributeImageResponse
 */
StartTaskForDistributeImageResponse Client::startTaskForDistributeImageWithOptions(const StartTaskForDistributeImageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDestinationRegionList()) {
    body["DestinationRegionList"] = request.getDestinationRegionList();
  }

  if (!!request.hasImageId()) {
    body["ImageId"] = request.getImageId();
  }

  if (!!request.hasProductType()) {
    body["ProductType"] = request.getProductType();
  }

  if (!!request.hasRetryType()) {
    body["RetryType"] = request.getRetryType();
  }

  if (!!request.hasSourceRegion()) {
    body["SourceRegion"] = request.getSourceRegion();
  }

  if (!!request.hasVersionId()) {
    body["VersionId"] = request.getVersionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "StartTaskForDistributeImage"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartTaskForDistributeImageResponse>();
}

/**
 * @summary Initiates a task to copy an image to other regions.
 *
 * @param request StartTaskForDistributeImageRequest
 * @return StartTaskForDistributeImageResponse
 */
StartTaskForDistributeImageResponse Client::startTaskForDistributeImage(const StartTaskForDistributeImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startTaskForDistributeImageWithOptions(request, runtime);
}

/**
 * @summary Starts a workstation.
 *
 * @param request StartWuyingServerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartWuyingServerResponse
 */
StartWuyingServerResponse Client::startWuyingServerWithOptions(const StartWuyingServerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasProductType()) {
    body["ProductType"] = request.getProductType();
  }

  json bodyFlat = {};
  if (!!request.hasWuyingServerIdList()) {
    bodyFlat["WuyingServerIdList"] = request.getWuyingServerIdList();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "StartWuyingServer"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartWuyingServerResponse>();
}

/**
 * @summary Starts a workstation.
 *
 * @param request StartWuyingServerRequest
 * @return StartWuyingServerResponse
 */
StartWuyingServerResponse Client::startWuyingServer(const StartWuyingServerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startWuyingServerWithOptions(request, runtime);
}

/**
 * @summary Stops a workstation.
 *
 * @param request StopWuyingServerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopWuyingServerResponse
 */
StopWuyingServerResponse Client::stopWuyingServerWithOptions(const StopWuyingServerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasForce()) {
    body["Force"] = request.getForce();
  }

  if (!!request.hasProductType()) {
    body["ProductType"] = request.getProductType();
  }

  json bodyFlat = {};
  if (!!request.hasWuyingServerIdList()) {
    bodyFlat["WuyingServerIdList"] = request.getWuyingServerIdList();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "StopWuyingServer"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopWuyingServerResponse>();
}

/**
 * @summary Stops a workstation.
 *
 * @param request StopWuyingServerRequest
 * @return StopWuyingServerResponse
 */
StopWuyingServerResponse Client::stopWuyingServer(const StopWuyingServerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopWuyingServerWithOptions(request, runtime);
}

/**
 * @summary Creates and attaches tags to cloud resources. If a tag already exists on a resource, the tag value is updated.
 *
 * @param request TagCloudResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagCloudResourcesResponse
 */
TagCloudResourcesResponse Client::tagCloudResourcesWithOptions(const TagCloudResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasResourceIds()) {
    body["ResourceIds"] = request.getResourceIds();
  }

  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTags()) {
    body["Tags"] = request.getTags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "TagCloudResources"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TagCloudResourcesResponse>();
}

/**
 * @summary Creates and attaches tags to cloud resources. If a tag already exists on a resource, the tag value is updated.
 *
 * @param request TagCloudResourcesRequest
 * @return TagCloudResourcesResponse
 */
TagCloudResourcesResponse Client::tagCloudResources(const TagCloudResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagCloudResourcesWithOptions(request, runtime);
}

/**
 * @summary 解绑研发主机的辅助私有IP
 *
 * @param request UnassignWuyingServerPrivateAddressesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnassignWuyingServerPrivateAddressesResponse
 */
UnassignWuyingServerPrivateAddressesResponse Client::unassignWuyingServerPrivateAddressesWithOptions(const UnassignWuyingServerPrivateAddressesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasPrivateIpAddresses()) {
    body["PrivateIpAddresses"] = request.getPrivateIpAddresses();
  }

  if (!!request.hasWuyingServerId()) {
    body["WuyingServerId"] = request.getWuyingServerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UnassignWuyingServerPrivateAddresses"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnassignWuyingServerPrivateAddressesResponse>();
}

/**
 * @summary 解绑研发主机的辅助私有IP
 *
 * @param request UnassignWuyingServerPrivateAddressesRequest
 * @return UnassignWuyingServerPrivateAddressesResponse
 */
UnassignWuyingServerPrivateAddressesResponse Client::unassignWuyingServerPrivateAddresses(const UnassignWuyingServerPrivateAddressesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unassignWuyingServerPrivateAddressesWithOptions(request, runtime);
}

/**
 * @summary Unbinds a user from a session.
 *
 * @param request UnbindRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnbindResponse
 */
UnbindResponse Client::unbindWithOptions(const UnbindRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppInstanceGroupId()) {
    body["AppInstanceGroupId"] = request.getAppInstanceGroupId();
  }

  if (!!request.hasAppInstanceId()) {
    body["AppInstanceId"] = request.getAppInstanceId();
  }

  if (!!request.hasAppInstancePersistentId()) {
    body["AppInstancePersistentId"] = request.getAppInstancePersistentId();
  }

  if (!!request.hasEndUserId()) {
    body["EndUserId"] = request.getEndUserId();
  }

  if (!!request.hasProductType()) {
    body["ProductType"] = request.getProductType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "Unbind"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnbindResponse>();
}

/**
 * @summary Unbinds a user from a session.
 *
 * @param request UnbindRequest
 * @return UnbindResponse
 */
UnbindResponse Client::unbind(const UnbindRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unbindWithOptions(request, runtime);
}

/**
 * @summary Unbinds tags from cloud resources in a unified manner.
 *
 * @param request UntagCloudResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UntagCloudResourcesResponse
 */
UntagCloudResourcesResponse Client::untagCloudResourcesWithOptions(const UntagCloudResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasResourceIds()) {
    body["ResourceIds"] = request.getResourceIds();
  }

  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTagKeys()) {
    body["TagKeys"] = request.getTagKeys();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UntagCloudResources"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UntagCloudResourcesResponse>();
}

/**
 * @summary Unbinds tags from cloud resources in a unified manner.
 *
 * @param request UntagCloudResourcesRequest
 * @return UntagCloudResourcesResponse
 */
UntagCloudResourcesResponse Client::untagCloudResources(const UntagCloudResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagCloudResourcesWithOptions(request, runtime);
}

/**
 * @summary Updates the image of a delivery group.
 *
 * @description >Warning: After the image update starts, sessions of end users who are accessing cloud applications will be disconnected. Proceed with caution to avoid data loss for end users.
 * > After the update is published, changes typically take about 2 minutes to take effect on the end user side.
 *
 * @param request UpdateAppInstanceGroupImageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAppInstanceGroupImageResponse
 */
UpdateAppInstanceGroupImageResponse Client::updateAppInstanceGroupImageWithOptions(const UpdateAppInstanceGroupImageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppCenterImageId()) {
    query["AppCenterImageId"] = request.getAppCenterImageId();
  }

  if (!!request.hasAppInstanceGroupId()) {
    query["AppInstanceGroupId"] = request.getAppInstanceGroupId();
  }

  if (!!request.hasBizRegionId()) {
    query["BizRegionId"] = request.getBizRegionId();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.getProductType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAppInstanceGroupImage"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAppInstanceGroupImageResponse>();
}

/**
 * @summary Updates the image of a delivery group.
 *
 * @description >Warning: After the image update starts, sessions of end users who are accessing cloud applications will be disconnected. Proceed with caution to avoid data loss for end users.
 * > After the update is published, changes typically take about 2 minutes to take effect on the end user side.
 *
 * @param request UpdateAppInstanceGroupImageRequest
 * @return UpdateAppInstanceGroupImageResponse
 */
UpdateAppInstanceGroupImageResponse Client::updateAppInstanceGroupImage(const UpdateAppInstanceGroupImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAppInstanceGroupImageWithOptions(request, runtime);
}

/**
 * @summary Updates a model provider template.
 *
 * @description You can update a model provider template that has been created in the Wuying Agent Management Center, including the template name, description, model service connection configuration, and Wuying security proxy switch. Partial field updates are supported. You only need to pass in the fields that you want to modify.
 * Before you call this operation, make sure that you are familiar with the operations and usage of the Wuying Agent Management Center.
 *
 * @param tmpReq UpdateModelProviderTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateModelProviderTemplateResponse
 */
UpdateModelProviderTemplateResponse Client::updateModelProviderTemplateWithOptions(const UpdateModelProviderTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateModelProviderTemplateShrinkRequest request = UpdateModelProviderTemplateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasConfig()) {
    request.setConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getConfig(), "Config", "json"));
  }

  json query = {};
  if (!!request.hasConfigShrink()) {
    query["Config"] = request.getConfigShrink();
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasEnableWuyingProxy()) {
    body["EnableWuyingProxy"] = request.getEnableWuyingProxy();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasProviderTemplateId()) {
    body["ProviderTemplateId"] = request.getProviderTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateModelProviderTemplate"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateModelProviderTemplateResponse>();
}

/**
 * @summary Updates a model provider template.
 *
 * @description You can update a model provider template that has been created in the Wuying Agent Management Center, including the template name, description, model service connection configuration, and Wuying security proxy switch. Partial field updates are supported. You only need to pass in the fields that you want to modify.
 * Before you call this operation, make sure that you are familiar with the operations and usage of the Wuying Agent Management Center.
 *
 * @param request UpdateModelProviderTemplateRequest
 * @return UpdateModelProviderTemplateResponse
 */
UpdateModelProviderTemplateResponse Client::updateModelProviderTemplate(const UpdateModelProviderTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateModelProviderTemplateWithOptions(request, runtime);
}

/**
 * @summary Updates a model template.
 *
 * @description You can update a model group that has been created in the Wuying Agent Management Center, including the group name, description, and model configuration information. The updated configuration automatically takes effect on associated cloud desktops.
 * Before using this operation, make sure that you are familiar with the operations and usage of the Wuying Agent Management Center.
 *
 * @param request UpdateModelTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateModelTemplateResponse
 */
UpdateModelTemplateResponse Client::updateModelTemplateWithOptions(const UpdateModelTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfig()) {
    query["Config"] = request.getConfig();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasModelTemplateId()) {
    query["ModelTemplateId"] = request.getModelTemplateId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateModelTemplate"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateModelTemplateResponse>();
}

/**
 * @summary Updates a model template.
 *
 * @description You can update a model group that has been created in the Wuying Agent Management Center, including the group name, description, and model configuration information. The updated configuration automatically takes effect on associated cloud desktops.
 * Before using this operation, make sure that you are familiar with the operations and usage of the Wuying Agent Management Center.
 *
 * @param request UpdateModelTemplateRequest
 * @return UpdateModelTemplateResponse
 */
UpdateModelTemplateResponse Client::updateModelTemplate(const UpdateModelTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateModelTemplateWithOptions(request, runtime);
}

/**
 * @summary Updates a workstation image.
 *
 * @param request UpdateWuyingServerImageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateWuyingServerImageResponse
 */
UpdateWuyingServerImageResponse Client::updateWuyingServerImageWithOptions(const UpdateWuyingServerImageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasImageId()) {
    body["ImageId"] = request.getImageId();
  }

  if (!!request.hasProductType()) {
    body["ProductType"] = request.getProductType();
  }

  if (!!request.hasWuyingServerId()) {
    body["WuyingServerId"] = request.getWuyingServerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateWuyingServerImage"},
    {"version" , "2021-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateWuyingServerImageResponse>();
}

/**
 * @summary Updates a workstation image.
 *
 * @param request UpdateWuyingServerImageRequest
 * @return UpdateWuyingServerImageResponse
 */
UpdateWuyingServerImageResponse Client::updateWuyingServerImage(const UpdateWuyingServerImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateWuyingServerImageWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901