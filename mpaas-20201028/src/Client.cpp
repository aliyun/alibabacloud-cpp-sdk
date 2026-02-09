#include <darabonba/Core.hpp>
#include <alibabacloud/MPaaS20201028.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::MPaaS20201028::Models;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace MPaaS20201028
{

AlibabaCloud::MPaaS20201028::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-hangzhou" , "mpaas.aliyuncs.com"},
    {"ap-northeast-1" , "mpaas.aliyuncs.com"},
    {"ap-northeast-2-pop" , "mpaas.aliyuncs.com"},
    {"ap-south-1" , "mpaas.aliyuncs.com"},
    {"ap-southeast-1" , "mpaas.aliyuncs.com"},
    {"ap-southeast-2" , "mpaas.aliyuncs.com"},
    {"ap-southeast-3" , "mpaas.aliyuncs.com"},
    {"ap-southeast-5" , "mpaas.aliyuncs.com"},
    {"cn-beijing" , "mpaas.aliyuncs.com"},
    {"cn-beijing-finance-1" , "mpaas.aliyuncs.com"},
    {"cn-beijing-finance-pop" , "mpaas.aliyuncs.com"},
    {"cn-beijing-gov-1" , "mpaas.aliyuncs.com"},
    {"cn-beijing-nu16-b01" , "mpaas.aliyuncs.com"},
    {"cn-chengdu" , "mpaas.aliyuncs.com"},
    {"cn-edge-1" , "mpaas.aliyuncs.com"},
    {"cn-fujian" , "mpaas.aliyuncs.com"},
    {"cn-haidian-cm12-c01" , "mpaas.aliyuncs.com"},
    {"cn-hangzhou-bj-b01" , "mpaas.aliyuncs.com"},
    {"cn-hangzhou-finance" , "mpaas.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1" , "mpaas.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1" , "mpaas.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2" , "mpaas.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3" , "mpaas.aliyuncs.com"},
    {"cn-hangzhou-test-306" , "mpaas.aliyuncs.com"},
    {"cn-hongkong" , "mpaas.aliyuncs.com"},
    {"cn-hongkong-finance-pop" , "mpaas.aliyuncs.com"},
    {"cn-huhehaote" , "mpaas.aliyuncs.com"},
    {"cn-north-2-gov-1" , "mpaas.aliyuncs.com"},
    {"cn-qingdao" , "mpaas.aliyuncs.com"},
    {"cn-qingdao-nebula" , "mpaas.aliyuncs.com"},
    {"cn-shanghai" , "mpaas.aliyuncs.com"},
    {"cn-shanghai-et15-b01" , "mpaas.aliyuncs.com"},
    {"cn-shanghai-et2-b01" , "mpaas.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "mpaas.aliyuncs.com"},
    {"cn-shanghai-inner" , "mpaas.aliyuncs.com"},
    {"cn-shanghai-internal-test-1" , "mpaas.aliyuncs.com"},
    {"cn-shenzhen" , "mpaas.aliyuncs.com"},
    {"cn-shenzhen-finance-1" , "mpaas.aliyuncs.com"},
    {"cn-shenzhen-inner" , "mpaas.aliyuncs.com"},
    {"cn-shenzhen-st4-d01" , "mpaas.aliyuncs.com"},
    {"cn-shenzhen-su18-b01" , "mpaas.aliyuncs.com"},
    {"cn-wuhan" , "mpaas.aliyuncs.com"},
    {"cn-yushanfang" , "mpaas.aliyuncs.com"},
    {"cn-zhangbei-na61-b01" , "mpaas.aliyuncs.com"},
    {"cn-zhangjiakou" , "mpaas.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01" , "mpaas.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1" , "mpaas.aliyuncs.com"},
    {"eu-central-1" , "mpaas.aliyuncs.com"},
    {"eu-west-1" , "mpaas.aliyuncs.com"},
    {"eu-west-1-oxs" , "mpaas.aliyuncs.com"},
    {"me-east-1" , "mpaas.aliyuncs.com"},
    {"rus-west-1-pop" , "mpaas.aliyuncs.com"},
    {"us-east-1" , "mpaas.aliyuncs.com"},
    {"us-west-1" , "mpaas.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("mpaas", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @param request AddMdsMiniConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddMdsMiniConfigResponse
 */
AddMdsMiniConfigResponse Client::addMdsMiniConfigWithOptions(const AddMdsMiniConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasMpaasMappcenterMiniConfigAddJsonStr()) {
    body["MpaasMappcenterMiniConfigAddJsonStr"] = request.getMpaasMappcenterMiniConfigAddJsonStr();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "AddMdsMiniConfig"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddMdsMiniConfigResponse>();
}

/**
 * @param request AddMdsMiniConfigRequest
 * @return AddMdsMiniConfigResponse
 */
AddMdsMiniConfigResponse Client::addMdsMiniConfig(const AddMdsMiniConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addMdsMiniConfigWithOptions(request, runtime);
}

/**
 * @param request CancelPushSchedulerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelPushSchedulerResponse
 */
CancelPushSchedulerResponse Client::cancelPushSchedulerWithOptions(const CancelPushSchedulerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
  }

  if (!!request.hasUniqueIds()) {
    body["UniqueIds"] = request.getUniqueIds();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CancelPushScheduler"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelPushSchedulerResponse>();
}

/**
 * @param request CancelPushSchedulerRequest
 * @return CancelPushSchedulerResponse
 */
CancelPushSchedulerResponse Client::cancelPushScheduler(const CancelPushSchedulerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelPushSchedulerWithOptions(request, runtime);
}

/**
 * @param request ChangeMcubeMiniTaskStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeMcubeMiniTaskStatusResponse
 */
ChangeMcubeMiniTaskStatusResponse Client::changeMcubeMiniTaskStatusWithOptions(const ChangeMcubeMiniTaskStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasBizType()) {
    body["BizType"] = request.getBizType();
  }

  if (!!request.hasPackageId()) {
    body["PackageId"] = request.getPackageId();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTaskStatus()) {
    body["TaskStatus"] = request.getTaskStatus();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ChangeMcubeMiniTaskStatus"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChangeMcubeMiniTaskStatusResponse>();
}

/**
 * @param request ChangeMcubeMiniTaskStatusRequest
 * @return ChangeMcubeMiniTaskStatusResponse
 */
ChangeMcubeMiniTaskStatusResponse Client::changeMcubeMiniTaskStatus(const ChangeMcubeMiniTaskStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeMcubeMiniTaskStatusWithOptions(request, runtime);
}

/**
 * @param request ChangeMcubeNebulaTaskStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeMcubeNebulaTaskStatusResponse
 */
ChangeMcubeNebulaTaskStatusResponse Client::changeMcubeNebulaTaskStatusWithOptions(const ChangeMcubeNebulaTaskStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasBizType()) {
    body["BizType"] = request.getBizType();
  }

  if (!!request.hasPackageId()) {
    body["PackageId"] = request.getPackageId();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTaskStatus()) {
    body["TaskStatus"] = request.getTaskStatus();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ChangeMcubeNebulaTaskStatus"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChangeMcubeNebulaTaskStatusResponse>();
}

/**
 * @param request ChangeMcubeNebulaTaskStatusRequest
 * @return ChangeMcubeNebulaTaskStatusResponse
 */
ChangeMcubeNebulaTaskStatusResponse Client::changeMcubeNebulaTaskStatus(const ChangeMcubeNebulaTaskStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeMcubeNebulaTaskStatusWithOptions(request, runtime);
}

/**
 * @param request ChangeMcubePublicTaskStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeMcubePublicTaskStatusResponse
 */
ChangeMcubePublicTaskStatusResponse Client::changeMcubePublicTaskStatusWithOptions(const ChangeMcubePublicTaskStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTaskStatus()) {
    body["TaskStatus"] = request.getTaskStatus();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ChangeMcubePublicTaskStatus"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChangeMcubePublicTaskStatusResponse>();
}

/**
 * @param request ChangeMcubePublicTaskStatusRequest
 * @return ChangeMcubePublicTaskStatusResponse
 */
ChangeMcubePublicTaskStatusResponse Client::changeMcubePublicTaskStatus(const ChangeMcubePublicTaskStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeMcubePublicTaskStatusWithOptions(request, runtime);
}

/**
 * @param request ChangeMdsCubeTaskStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeMdsCubeTaskStatusResponse
 */
ChangeMdsCubeTaskStatusResponse Client::changeMdsCubeTaskStatusWithOptions(const ChangeMdsCubeTaskStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasTaskStatus()) {
    body["TaskStatus"] = request.getTaskStatus();
  }

  if (!!request.hasTemplateResourceId()) {
    body["TemplateResourceId"] = request.getTemplateResourceId();
  }

  if (!!request.hasTemplateTaskId()) {
    body["TemplateTaskId"] = request.getTemplateTaskId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ChangeMdsCubeTaskStatus"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChangeMdsCubeTaskStatusResponse>();
}

/**
 * @param request ChangeMdsCubeTaskStatusRequest
 * @return ChangeMdsCubeTaskStatusResponse
 */
ChangeMdsCubeTaskStatusResponse Client::changeMdsCubeTaskStatus(const ChangeMdsCubeTaskStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeMdsCubeTaskStatusWithOptions(request, runtime);
}

/**
 * @param request CopyMcdpGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CopyMcdpGroupResponse
 */
CopyMcdpGroupResponse Client::copyMcdpGroupWithOptions(const CopyMcdpGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasMpaasMappcenterMcdpGroupCopyJsonStr()) {
    body["MpaasMappcenterMcdpGroupCopyJsonStr"] = request.getMpaasMappcenterMcdpGroupCopyJsonStr();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CopyMcdpGroup"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CopyMcdpGroupResponse>();
}

/**
 * @param request CopyMcdpGroupRequest
 * @return CopyMcdpGroupResponse
 */
CopyMcdpGroupResponse Client::copyMcdpGroup(const CopyMcdpGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return copyMcdpGroupWithOptions(request, runtime);
}

/**
 * @summary 创建短链
 *
 * @param request CreateLinkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLinkResponse
 */
CreateLinkResponse Client::createLinkWithOptions(const CreateLinkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasCors()) {
    body["Cors"] = request.getCors();
  }

  if (!!request.hasDomain()) {
    body["Domain"] = request.getDomain();
  }

  if (!!request.hasDynamicfield()) {
    body["Dynamicfield"] = request.getDynamicfield();
  }

  if (!!request.hasTargetUrl()) {
    body["TargetUrl"] = request.getTargetUrl();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateLink"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLinkResponse>();
}

/**
 * @summary 创建短链
 *
 * @param request CreateLinkRequest
 * @return CreateLinkResponse
 */
CreateLinkResponse Client::createLink(const CreateLinkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createLinkWithOptions(request, runtime);
}

/**
 * @param request CreateMcdpGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMcdpGroupResponse
 */
CreateMcdpGroupResponse Client::createMcdpGroupWithOptions(const CreateMcdpGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasMpaasMappcenterMcdpGroupCreateJsonStr()) {
    body["MpaasMappcenterMcdpGroupCreateJsonStr"] = request.getMpaasMappcenterMcdpGroupCreateJsonStr();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateMcdpGroup"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMcdpGroupResponse>();
}

/**
 * @param request CreateMcdpGroupRequest
 * @return CreateMcdpGroupResponse
 */
CreateMcdpGroupResponse Client::createMcdpGroup(const CreateMcdpGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMcdpGroupWithOptions(request, runtime);
}

/**
 * @param request CreateMcdpMaterialRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMcdpMaterialResponse
 */
CreateMcdpMaterialResponse Client::createMcdpMaterialWithOptions(const CreateMcdpMaterialRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasMpaasMappcenterMcdpMaterialCreateJsonStr()) {
    body["MpaasMappcenterMcdpMaterialCreateJsonStr"] = request.getMpaasMappcenterMcdpMaterialCreateJsonStr();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateMcdpMaterial"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMcdpMaterialResponse>();
}

/**
 * @param request CreateMcdpMaterialRequest
 * @return CreateMcdpMaterialResponse
 */
CreateMcdpMaterialResponse Client::createMcdpMaterial(const CreateMcdpMaterialRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMcdpMaterialWithOptions(request, runtime);
}

/**
 * @param request CreateMcdpZoneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMcdpZoneResponse
 */
CreateMcdpZoneResponse Client::createMcdpZoneWithOptions(const CreateMcdpZoneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasMpaasMappcenterMcdpZoneCreateJsonStr()) {
    body["MpaasMappcenterMcdpZoneCreateJsonStr"] = request.getMpaasMappcenterMcdpZoneCreateJsonStr();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateMcdpZone"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMcdpZoneResponse>();
}

/**
 * @param request CreateMcdpZoneRequest
 * @return CreateMcdpZoneResponse
 */
CreateMcdpZoneResponse Client::createMcdpZone(const CreateMcdpZoneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMcdpZoneWithOptions(request, runtime);
}

/**
 * @summary 创建热修复资源
 *
 * @param request CreateMcubeHotpatchResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMcubeHotpatchResourceResponse
 */
CreateMcubeHotpatchResourceResponse Client::createMcubeHotpatchResourceWithOptions(const CreateMcubeHotpatchResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasFileUrl()) {
    body["FileUrl"] = request.getFileUrl();
  }

  if (!!request.hasFixDesc()) {
    body["FixDesc"] = request.getFixDesc();
  }

  if (!!request.hasOnexFlag()) {
    body["OnexFlag"] = request.getOnexFlag();
  }

  if (!!request.hasPlatform()) {
    body["Platform"] = request.getPlatform();
  }

  if (!!request.hasProductVersion()) {
    body["ProductVersion"] = request.getProductVersion();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateMcubeHotpatchResource"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMcubeHotpatchResourceResponse>();
}

/**
 * @summary 创建热修复资源
 *
 * @param request CreateMcubeHotpatchResourceRequest
 * @return CreateMcubeHotpatchResourceResponse
 */
CreateMcubeHotpatchResourceResponse Client::createMcubeHotpatchResource(const CreateMcubeHotpatchResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMcubeHotpatchResourceWithOptions(request, runtime);
}

/**
 * @summary 创建热修复回滚任务
 *
 * @param request CreateMcubeHotpatchRollbackTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMcubeHotpatchRollbackTaskResponse
 */
CreateMcubeHotpatchRollbackTaskResponse Client::createMcubeHotpatchRollbackTaskWithOptions(const CreateMcubeHotpatchRollbackTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasProductId()) {
    body["ProductId"] = request.getProductId();
  }

  if (!!request.hasProductVersion()) {
    body["ProductVersion"] = request.getProductVersion();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateMcubeHotpatchRollbackTask"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMcubeHotpatchRollbackTaskResponse>();
}

/**
 * @summary 创建热修复回滚任务
 *
 * @param request CreateMcubeHotpatchRollbackTaskRequest
 * @return CreateMcubeHotpatchRollbackTaskResponse
 */
CreateMcubeHotpatchRollbackTaskResponse Client::createMcubeHotpatchRollbackTask(const CreateMcubeHotpatchRollbackTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMcubeHotpatchRollbackTaskWithOptions(request, runtime);
}

/**
 * @summary 创建热修复发布任务
 *
 * @param request CreateMcubeHotpatchTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMcubeHotpatchTaskResponse
 */
CreateMcubeHotpatchTaskResponse Client::createMcubeHotpatchTaskWithOptions(const CreateMcubeHotpatchTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasGreyConfigInfo()) {
    body["GreyConfigInfo"] = request.getGreyConfigInfo();
  }

  if (!!request.hasGreyEndtimeData()) {
    body["GreyEndtimeData"] = request.getGreyEndtimeData();
  }

  if (!!request.hasGreyNum()) {
    body["GreyNum"] = request.getGreyNum();
  }

  if (!!request.hasMemo()) {
    body["Memo"] = request.getMemo();
  }

  if (!!request.hasPackageId()) {
    body["PackageId"] = request.getPackageId();
  }

  if (!!request.hasPlatform()) {
    body["Platform"] = request.getPlatform();
  }

  if (!!request.hasPublishMode()) {
    body["PublishMode"] = request.getPublishMode();
  }

  if (!!request.hasPublishType()) {
    body["PublishType"] = request.getPublishType();
  }

  if (!!request.hasSyncMode()) {
    body["SyncMode"] = request.getSyncMode();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWhitelistIds()) {
    body["WhitelistIds"] = request.getWhitelistIds();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateMcubeHotpatchTask"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMcubeHotpatchTaskResponse>();
}

/**
 * @summary 创建热修复发布任务
 *
 * @param request CreateMcubeHotpatchTaskRequest
 * @return CreateMcubeHotpatchTaskResponse
 */
CreateMcubeHotpatchTaskResponse Client::createMcubeHotpatchTask(const CreateMcubeHotpatchTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMcubeHotpatchTaskWithOptions(request, runtime);
}

/**
 * @param request CreateMcubeMiniAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMcubeMiniAppResponse
 */
CreateMcubeMiniAppResponse Client::createMcubeMiniAppWithOptions(const CreateMcubeMiniAppRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasH5Id()) {
    body["H5Id"] = request.getH5Id();
  }

  if (!!request.hasH5Name()) {
    body["H5Name"] = request.getH5Name();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateMcubeMiniApp"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMcubeMiniAppResponse>();
}

/**
 * @param request CreateMcubeMiniAppRequest
 * @return CreateMcubeMiniAppResponse
 */
CreateMcubeMiniAppResponse Client::createMcubeMiniApp(const CreateMcubeMiniAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMcubeMiniAppWithOptions(request, runtime);
}

/**
 * @param request CreateMcubeMiniTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMcubeMiniTaskResponse
 */
CreateMcubeMiniTaskResponse Client::createMcubeMiniTaskWithOptions(const CreateMcubeMiniTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasGreyConfigInfo()) {
    body["GreyConfigInfo"] = request.getGreyConfigInfo();
  }

  if (!!request.hasGreyEndtimeData()) {
    body["GreyEndtimeData"] = request.getGreyEndtimeData();
  }

  if (!!request.hasGreyNum()) {
    body["GreyNum"] = request.getGreyNum();
  }

  if (!!request.hasMemo()) {
    body["Memo"] = request.getMemo();
  }

  if (!!request.hasPackageId()) {
    body["PackageId"] = request.getPackageId();
  }

  if (!!request.hasPublishMode()) {
    body["PublishMode"] = request.getPublishMode();
  }

  if (!!request.hasPublishType()) {
    body["PublishType"] = request.getPublishType();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWhitelistIds()) {
    body["WhitelistIds"] = request.getWhitelistIds();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateMcubeMiniTask"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMcubeMiniTaskResponse>();
}

/**
 * @param request CreateMcubeMiniTaskRequest
 * @return CreateMcubeMiniTaskResponse
 */
CreateMcubeMiniTaskResponse Client::createMcubeMiniTask(const CreateMcubeMiniTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMcubeMiniTaskWithOptions(request, runtime);
}

/**
 * @param request CreateMcubeNebulaAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMcubeNebulaAppResponse
 */
CreateMcubeNebulaAppResponse Client::createMcubeNebulaAppWithOptions(const CreateMcubeNebulaAppRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasH5Id()) {
    body["H5Id"] = request.getH5Id();
  }

  if (!!request.hasH5Name()) {
    body["H5Name"] = request.getH5Name();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateMcubeNebulaApp"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMcubeNebulaAppResponse>();
}

/**
 * @param request CreateMcubeNebulaAppRequest
 * @return CreateMcubeNebulaAppResponse
 */
CreateMcubeNebulaAppResponse Client::createMcubeNebulaApp(const CreateMcubeNebulaAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMcubeNebulaAppWithOptions(request, runtime);
}

/**
 * @param request CreateMcubeNebulaResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMcubeNebulaResourceResponse
 */
CreateMcubeNebulaResourceResponse Client::createMcubeNebulaResourceWithOptions(const CreateMcubeNebulaResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasAutoInstall()) {
    body["AutoInstall"] = request.getAutoInstall();
  }

  if (!!request.hasClientVersionMax()) {
    body["ClientVersionMax"] = request.getClientVersionMax();
  }

  if (!!request.hasClientVersionMin()) {
    body["ClientVersionMin"] = request.getClientVersionMin();
  }

  if (!!request.hasCustomDomainName()) {
    body["CustomDomainName"] = request.getCustomDomainName();
  }

  if (!!request.hasExtendInfo()) {
    body["ExtendInfo"] = request.getExtendInfo();
  }

  if (!!request.hasFileUrl()) {
    body["FileUrl"] = request.getFileUrl();
  }

  if (!!request.hasH5Id()) {
    body["H5Id"] = request.getH5Id();
  }

  if (!!request.hasH5Name()) {
    body["H5Name"] = request.getH5Name();
  }

  if (!!request.hasH5Version()) {
    body["H5Version"] = request.getH5Version();
  }

  if (!!request.hasInstallType()) {
    body["InstallType"] = request.getInstallType();
  }

  if (!!request.hasMainUrl()) {
    body["MainUrl"] = request.getMainUrl();
  }

  if (!!request.hasOnexFlag()) {
    body["OnexFlag"] = request.getOnexFlag();
  }

  if (!!request.hasPlatform()) {
    body["Platform"] = request.getPlatform();
  }

  if (!!request.hasRepeatNebula()) {
    body["RepeatNebula"] = request.getRepeatNebula();
  }

  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasSubUrl()) {
    body["SubUrl"] = request.getSubUrl();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasVhost()) {
    body["Vhost"] = request.getVhost();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateMcubeNebulaResource"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMcubeNebulaResourceResponse>();
}

/**
 * @param request CreateMcubeNebulaResourceRequest
 * @return CreateMcubeNebulaResourceResponse
 */
CreateMcubeNebulaResourceResponse Client::createMcubeNebulaResource(const CreateMcubeNebulaResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMcubeNebulaResourceWithOptions(request, runtime);
}

/**
 * @param request CreateMcubeNebulaTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMcubeNebulaTaskResponse
 */
CreateMcubeNebulaTaskResponse Client::createMcubeNebulaTaskWithOptions(const CreateMcubeNebulaTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppCode()) {
    body["AppCode"] = request.getAppCode();
  }

  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasBizType()) {
    body["BizType"] = request.getBizType();
  }

  if (!!request.hasCreator()) {
    body["Creator"] = request.getCreator();
  }

  if (!!request.hasGmtCreate()) {
    body["GmtCreate"] = request.getGmtCreate();
  }

  if (!!request.hasGmtModified()) {
    body["GmtModified"] = request.getGmtModified();
  }

  if (!!request.hasGmtModifiedStr()) {
    body["GmtModifiedStr"] = request.getGmtModifiedStr();
  }

  if (!!request.hasGreyConfigInfo()) {
    body["GreyConfigInfo"] = request.getGreyConfigInfo();
  }

  if (!!request.hasGreyEndtime()) {
    body["GreyEndtime"] = request.getGreyEndtime();
  }

  if (!!request.hasGreyEndtimeData()) {
    body["GreyEndtimeData"] = request.getGreyEndtimeData();
  }

  if (!!request.hasGreyEndtimeStr()) {
    body["GreyEndtimeStr"] = request.getGreyEndtimeStr();
  }

  if (!!request.hasGreyNum()) {
    body["GreyNum"] = request.getGreyNum();
  }

  if (!!request.hasGreyUrl()) {
    body["GreyUrl"] = request.getGreyUrl();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasMemo()) {
    body["Memo"] = request.getMemo();
  }

  if (!!request.hasModifier()) {
    body["Modifier"] = request.getModifier();
  }

  if (!!request.hasPackageId()) {
    body["PackageId"] = request.getPackageId();
  }

  if (!!request.hasPercent()) {
    body["Percent"] = request.getPercent();
  }

  if (!!request.hasPlatform()) {
    body["Platform"] = request.getPlatform();
  }

  if (!!request.hasProductId()) {
    body["ProductId"] = request.getProductId();
  }

  if (!!request.hasProductVersion()) {
    body["ProductVersion"] = request.getProductVersion();
  }

  if (!!request.hasPublishMode()) {
    body["PublishMode"] = request.getPublishMode();
  }

  if (!!request.hasPublishType()) {
    body["PublishType"] = request.getPublishType();
  }

  if (!!request.hasReleaseVersion()) {
    body["ReleaseVersion"] = request.getReleaseVersion();
  }

  if (!!request.hasResIds()) {
    body["ResIds"] = request.getResIds();
  }

  if (!!request.hasSerialVersionUID()) {
    body["SerialVersionUID"] = request.getSerialVersionUID();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.getStatus();
  }

  if (!!request.hasSyncMode()) {
    body["SyncMode"] = request.getSyncMode();
  }

  if (!!request.hasSyncResult()) {
    body["SyncResult"] = request.getSyncResult();
  }

  if (!!request.hasTaskName()) {
    body["TaskName"] = request.getTaskName();
  }

  if (!!request.hasTaskStatus()) {
    body["TaskStatus"] = request.getTaskStatus();
  }

  if (!!request.hasTaskType()) {
    body["TaskType"] = request.getTaskType();
  }

  if (!!request.hasTaskVersion()) {
    body["TaskVersion"] = request.getTaskVersion();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasUpgradeNoticeNum()) {
    body["UpgradeNoticeNum"] = request.getUpgradeNoticeNum();
  }

  if (!!request.hasUpgradeProgress()) {
    body["UpgradeProgress"] = request.getUpgradeProgress();
  }

  if (!!request.hasWhitelistIds()) {
    body["WhitelistIds"] = request.getWhitelistIds();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateMcubeNebulaTask"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMcubeNebulaTaskResponse>();
}

/**
 * @param request CreateMcubeNebulaTaskRequest
 * @return CreateMcubeNebulaTaskResponse
 */
CreateMcubeNebulaTaskResponse Client::createMcubeNebulaTask(const CreateMcubeNebulaTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMcubeNebulaTaskWithOptions(request, runtime);
}

/**
 * @param request CreateMcubeUpgradePackageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMcubeUpgradePackageResponse
 */
CreateMcubeUpgradePackageResponse Client::createMcubeUpgradePackageWithOptions(const CreateMcubeUpgradePackageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasAppVersion()) {
    body["AppVersion"] = request.getAppVersion();
  }

  if (!!request.hasAppstoreUrl()) {
    body["AppstoreUrl"] = request.getAppstoreUrl();
  }

  if (!!request.hasBundleId()) {
    body["BundleId"] = request.getBundleId();
  }

  if (!!request.hasCustomDomainName()) {
    body["CustomDomainName"] = request.getCustomDomainName();
  }

  if (!!request.hasDesc()) {
    body["Desc"] = request.getDesc();
  }

  if (!!request.hasDownloadUrl()) {
    body["DownloadUrl"] = request.getDownloadUrl();
  }

  if (!!request.hasFileUrl()) {
    body["FileUrl"] = request.getFileUrl();
  }

  if (!!request.hasHarmonyLabel()) {
    body["HarmonyLabel"] = request.getHarmonyLabel();
  }

  if (!!request.hasIconFileUrl()) {
    body["IconFileUrl"] = request.getIconFileUrl();
  }

  if (!!request.hasInstallAmount()) {
    body["InstallAmount"] = request.getInstallAmount();
  }

  if (!!request.hasIosSymbolfileUrl()) {
    body["IosSymbolfileUrl"] = request.getIosSymbolfileUrl();
  }

  if (!!request.hasIsEnterprise()) {
    body["IsEnterprise"] = request.getIsEnterprise();
  }

  if (!!request.hasLargeIconUrl()) {
    body["LargeIconUrl"] = request.getLargeIconUrl();
  }

  if (!!request.hasNeedCheck()) {
    body["NeedCheck"] = request.getNeedCheck();
  }

  if (!!request.hasOnexFlag()) {
    body["OnexFlag"] = request.getOnexFlag();
  }

  if (!!request.hasPlatform()) {
    body["Platform"] = request.getPlatform();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasValidDays()) {
    body["ValidDays"] = request.getValidDays();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateMcubeUpgradePackage"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMcubeUpgradePackageResponse>();
}

/**
 * @param request CreateMcubeUpgradePackageRequest
 * @return CreateMcubeUpgradePackageResponse
 */
CreateMcubeUpgradePackageResponse Client::createMcubeUpgradePackage(const CreateMcubeUpgradePackageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMcubeUpgradePackageWithOptions(request, runtime);
}

/**
 * @param request CreateMcubeUpgradeTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMcubeUpgradeTaskResponse
 */
CreateMcubeUpgradeTaskResponse Client::createMcubeUpgradeTaskWithOptions(const CreateMcubeUpgradeTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasGreyConfigInfo()) {
    body["GreyConfigInfo"] = request.getGreyConfigInfo();
  }

  if (!!request.hasGreyEndtimeData()) {
    body["GreyEndtimeData"] = request.getGreyEndtimeData();
  }

  if (!!request.hasGreyNum()) {
    body["GreyNum"] = request.getGreyNum();
  }

  if (!!request.hasHistoryForce()) {
    body["HistoryForce"] = request.getHistoryForce();
  }

  if (!!request.hasMemo()) {
    body["Memo"] = request.getMemo();
  }

  if (!!request.hasPackageInfoId()) {
    body["PackageInfoId"] = request.getPackageInfoId();
  }

  if (!!request.hasPublishMode()) {
    body["PublishMode"] = request.getPublishMode();
  }

  if (!!request.hasPublishType()) {
    body["PublishType"] = request.getPublishType();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasUpgradeContent()) {
    body["UpgradeContent"] = request.getUpgradeContent();
  }

  if (!!request.hasUpgradeType()) {
    body["UpgradeType"] = request.getUpgradeType();
  }

  if (!!request.hasWhitelistIds()) {
    body["WhitelistIds"] = request.getWhitelistIds();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateMcubeUpgradeTask"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMcubeUpgradeTaskResponse>();
}

/**
 * @param request CreateMcubeUpgradeTaskRequest
 * @return CreateMcubeUpgradeTaskResponse
 */
CreateMcubeUpgradeTaskResponse Client::createMcubeUpgradeTask(const CreateMcubeUpgradeTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMcubeUpgradeTaskWithOptions(request, runtime);
}

/**
 * @param request CreateMcubeVhostRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMcubeVhostResponse
 */
CreateMcubeVhostResponse Client::createMcubeVhostWithOptions(const CreateMcubeVhostRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasVhost()) {
    body["Vhost"] = request.getVhost();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateMcubeVhost"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMcubeVhostResponse>();
}

/**
 * @param request CreateMcubeVhostRequest
 * @return CreateMcubeVhostResponse
 */
CreateMcubeVhostResponse Client::createMcubeVhost(const CreateMcubeVhostRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMcubeVhostWithOptions(request, runtime);
}

/**
 * @param request CreateMcubeWhitelistRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMcubeWhitelistResponse
 */
CreateMcubeWhitelistResponse Client::createMcubeWhitelistWithOptions(const CreateMcubeWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWhiteListName()) {
    body["WhiteListName"] = request.getWhiteListName();
  }

  if (!!request.hasWhitelistType()) {
    body["WhitelistType"] = request.getWhitelistType();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateMcubeWhitelist"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMcubeWhitelistResponse>();
}

/**
 * @param request CreateMcubeWhitelistRequest
 * @return CreateMcubeWhitelistResponse
 */
CreateMcubeWhitelistResponse Client::createMcubeWhitelist(const CreateMcubeWhitelistRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMcubeWhitelistWithOptions(request, runtime);
}

/**
 * @param request CreateMcubeWhitelistForIdeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMcubeWhitelistForIdeResponse
 */
CreateMcubeWhitelistForIdeResponse Client::createMcubeWhitelistForIdeWithOptions(const CreateMcubeWhitelistForIdeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasUserId()) {
    body["UserId"] = request.getUserId();
  }

  if (!!request.hasWhitelistValue()) {
    body["WhitelistValue"] = request.getWhitelistValue();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateMcubeWhitelistForIde"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMcubeWhitelistForIdeResponse>();
}

/**
 * @param request CreateMcubeWhitelistForIdeRequest
 * @return CreateMcubeWhitelistForIdeResponse
 */
CreateMcubeWhitelistForIdeResponse Client::createMcubeWhitelistForIde(const CreateMcubeWhitelistForIdeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMcubeWhitelistForIdeWithOptions(request, runtime);
}

/**
 * @param request CreateMdsCubeResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMdsCubeResourceResponse
 */
CreateMdsCubeResourceResponse Client::createMdsCubeResourceWithOptions(const CreateMdsCubeResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAndroidMaxVersion()) {
    body["AndroidMaxVersion"] = request.getAndroidMaxVersion();
  }

  if (!!request.hasAndroidMinVersion()) {
    body["AndroidMinVersion"] = request.getAndroidMinVersion();
  }

  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasExtendInfo()) {
    body["ExtendInfo"] = request.getExtendInfo();
  }

  if (!!request.hasFileUrl()) {
    body["FileUrl"] = request.getFileUrl();
  }

  if (!!request.hasIosMaxVersion()) {
    body["IosMaxVersion"] = request.getIosMaxVersion();
  }

  if (!!request.hasIosMinVersion()) {
    body["IosMinVersion"] = request.getIosMinVersion();
  }

  if (!!request.hasMockDataUrl()) {
    body["MockDataUrl"] = request.getMockDataUrl();
  }

  if (!!request.hasOnexFlag()) {
    body["OnexFlag"] = request.getOnexFlag();
  }

  if (!!request.hasPlatform()) {
    body["Platform"] = request.getPlatform();
  }

  if (!!request.hasPreviewPictureUrl()) {
    body["PreviewPictureUrl"] = request.getPreviewPictureUrl();
  }

  if (!!request.hasTemplateId()) {
    body["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasTemplateResourceDesc()) {
    body["TemplateResourceDesc"] = request.getTemplateResourceDesc();
  }

  if (!!request.hasTemplateResourceVersion()) {
    body["TemplateResourceVersion"] = request.getTemplateResourceVersion();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateMdsCubeResource"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMdsCubeResourceResponse>();
}

/**
 * @param request CreateMdsCubeResourceRequest
 * @return CreateMdsCubeResourceResponse
 */
CreateMdsCubeResourceResponse Client::createMdsCubeResource(const CreateMdsCubeResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMdsCubeResourceWithOptions(request, runtime);
}

/**
 * @param request CreateMdsCubeTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMdsCubeTaskResponse
 */
CreateMdsCubeTaskResponse Client::createMdsCubeTaskWithOptions(const CreateMdsCubeTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasGreyConfigInfo()) {
    body["GreyConfigInfo"] = request.getGreyConfigInfo();
  }

  if (!!request.hasGreyEndtimeData()) {
    body["GreyEndtimeData"] = request.getGreyEndtimeData();
  }

  if (!!request.hasGreyNum()) {
    body["GreyNum"] = request.getGreyNum();
  }

  if (!!request.hasPublishMode()) {
    body["PublishMode"] = request.getPublishMode();
  }

  if (!!request.hasPublishType()) {
    body["PublishType"] = request.getPublishType();
  }

  if (!!request.hasTaskDesc()) {
    body["TaskDesc"] = request.getTaskDesc();
  }

  if (!!request.hasTemplateResourceId()) {
    body["TemplateResourceId"] = request.getTemplateResourceId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWhitelistIds()) {
    body["WhitelistIds"] = request.getWhitelistIds();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateMdsCubeTask"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMdsCubeTaskResponse>();
}

/**
 * @param request CreateMdsCubeTaskRequest
 * @return CreateMdsCubeTaskResponse
 */
CreateMdsCubeTaskResponse Client::createMdsCubeTask(const CreateMdsCubeTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMdsCubeTaskWithOptions(request, runtime);
}

/**
 * @param request CreateMdsCubeTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMdsCubeTemplateResponse
 */
CreateMdsCubeTemplateResponse Client::createMdsCubeTemplateWithOptions(const CreateMdsCubeTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasTemplateDesc()) {
    body["TemplateDesc"] = request.getTemplateDesc();
  }

  if (!!request.hasTemplateId()) {
    body["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasTemplateName()) {
    body["TemplateName"] = request.getTemplateName();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateMdsCubeTemplate"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMdsCubeTemplateResponse>();
}

/**
 * @param request CreateMdsCubeTemplateRequest
 * @return CreateMdsCubeTemplateResponse
 */
CreateMdsCubeTemplateResponse Client::createMdsCubeTemplate(const CreateMdsCubeTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMdsCubeTemplateWithOptions(request, runtime);
}

/**
 * @param request CreateMdsMiniprogramTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMdsMiniprogramTaskResponse
 */
CreateMdsMiniprogramTaskResponse Client::createMdsMiniprogramTaskWithOptions(const CreateMdsMiniprogramTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasGreyConfigInfo()) {
    body["GreyConfigInfo"] = request.getGreyConfigInfo();
  }

  if (!!request.hasGreyEndtimeData()) {
    body["GreyEndtimeData"] = request.getGreyEndtimeData();
  }

  if (!!request.hasGreyNum()) {
    body["GreyNum"] = request.getGreyNum();
  }

  if (!!request.hasH5Id()) {
    body["H5Id"] = request.getH5Id();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasMemo()) {
    body["Memo"] = request.getMemo();
  }

  if (!!request.hasPackageId()) {
    body["PackageId"] = request.getPackageId();
  }

  if (!!request.hasPublishMode()) {
    body["PublishMode"] = request.getPublishMode();
  }

  if (!!request.hasPublishType()) {
    body["PublishType"] = request.getPublishType();
  }

  if (!!request.hasSyncMode()) {
    body["SyncMode"] = request.getSyncMode();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWhitelistIds()) {
    body["WhitelistIds"] = request.getWhitelistIds();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateMdsMiniprogramTask"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMdsMiniprogramTaskResponse>();
}

/**
 * @param request CreateMdsMiniprogramTaskRequest
 * @return CreateMdsMiniprogramTaskResponse
 */
CreateMdsMiniprogramTaskResponse Client::createMdsMiniprogramTask(const CreateMdsMiniprogramTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMdsMiniprogramTaskWithOptions(request, runtime);
}

/**
 * @param request CreateOpenGlobalDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateOpenGlobalDataResponse
 */
CreateOpenGlobalDataResponse Client::createOpenGlobalDataWithOptions(const CreateOpenGlobalDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasAppMaxVersion()) {
    body["AppMaxVersion"] = request.getAppMaxVersion();
  }

  if (!!request.hasAppMinVersion()) {
    body["AppMinVersion"] = request.getAppMinVersion();
  }

  if (!!request.hasBizType()) {
    body["BizType"] = request.getBizType();
  }

  if (!!request.hasExtAttrStr()) {
    body["ExtAttrStr"] = request.getExtAttrStr();
  }

  if (!!request.hasMaxUid()) {
    body["MaxUid"] = request.getMaxUid();
  }

  if (!!request.hasMinUid()) {
    body["MinUid"] = request.getMinUid();
  }

  if (!!request.hasOsType()) {
    body["OsType"] = request.getOsType();
  }

  if (!!request.hasPayload()) {
    body["Payload"] = request.getPayload();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasThirdMsgId()) {
    body["ThirdMsgId"] = request.getThirdMsgId();
  }

  if (!!request.hasUids()) {
    body["Uids"] = request.getUids();
  }

  if (!!request.hasValidTimeEnd()) {
    body["ValidTimeEnd"] = request.getValidTimeEnd();
  }

  if (!!request.hasValidTimeStart()) {
    body["ValidTimeStart"] = request.getValidTimeStart();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateOpenGlobalData"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateOpenGlobalDataResponse>();
}

/**
 * @param request CreateOpenGlobalDataRequest
 * @return CreateOpenGlobalDataResponse
 */
CreateOpenGlobalDataResponse Client::createOpenGlobalData(const CreateOpenGlobalDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createOpenGlobalDataWithOptions(request, runtime);
}

/**
 * @param request CreateOpenSingleDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateOpenSingleDataResponse
 */
CreateOpenSingleDataResponse Client::createOpenSingleDataWithOptions(const CreateOpenSingleDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasAppMaxVersion()) {
    body["AppMaxVersion"] = request.getAppMaxVersion();
  }

  if (!!request.hasAppMinVersion()) {
    body["AppMinVersion"] = request.getAppMinVersion();
  }

  if (!!request.hasBizType()) {
    body["BizType"] = request.getBizType();
  }

  if (!!request.hasCheckOnline()) {
    body["CheckOnline"] = request.getCheckOnline();
  }

  if (!!request.hasExtAttrStr()) {
    body["ExtAttrStr"] = request.getExtAttrStr();
  }

  if (!!request.hasLinkToken()) {
    body["LinkToken"] = request.getLinkToken();
  }

  if (!!request.hasOsType()) {
    body["OsType"] = request.getOsType();
  }

  if (!!request.hasPayload()) {
    body["Payload"] = request.getPayload();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasThirdMsgId()) {
    body["ThirdMsgId"] = request.getThirdMsgId();
  }

  if (!!request.hasValidTimeEnd()) {
    body["ValidTimeEnd"] = request.getValidTimeEnd();
  }

  if (!!request.hasValidTimeStart()) {
    body["ValidTimeStart"] = request.getValidTimeStart();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateOpenSingleData"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateOpenSingleDataResponse>();
}

/**
 * @param request CreateOpenSingleDataRequest
 * @return CreateOpenSingleDataResponse
 */
CreateOpenSingleDataResponse Client::createOpenSingleData(const CreateOpenSingleDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createOpenSingleDataWithOptions(request, runtime);
}

/**
 * @summary 创建模版
 *
 * @param request CreateTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTemplateResponse
 */
CreateTemplateResponse Client::createTemplateWithOptions(const CreateTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasContent()) {
    body["Content"] = request.getContent();
  }

  if (!!request.hasDescInfo()) {
    body["DescInfo"] = request.getDescInfo();
  }

  if (!!request.hasIconUrls()) {
    body["IconUrls"] = request.getIconUrls();
  }

  if (!!request.hasImageUrls()) {
    body["ImageUrls"] = request.getImageUrls();
  }

  if (!!request.hasJumpAction()) {
    body["JumpAction"] = request.getJumpAction();
  }

  if (!!request.hasPushStyle()) {
    body["PushStyle"] = request.getPushStyle();
  }

  if (!!request.hasShowStyle()) {
    body["ShowStyle"] = request.getShowStyle();
  }

  if (!!request.hasTemplateName()) {
    body["TemplateName"] = request.getTemplateName();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasTitle()) {
    body["Title"] = request.getTitle();
  }

  if (!!request.hasUri()) {
    body["Uri"] = request.getUri();
  }

  if (!!request.hasVariables()) {
    body["Variables"] = request.getVariables();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateTemplate"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTemplateResponse>();
}

/**
 * @summary 创建模版
 *
 * @param request CreateTemplateRequest
 * @return CreateTemplateResponse
 */
CreateTemplateResponse Client::createTemplate(const CreateTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTemplateWithOptions(request, runtime);
}

/**
 * @param request DeleteCubecardWhitelistContentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCubecardWhitelistContentResponse
 */
DeleteCubecardWhitelistContentResponse Client::deleteCubecardWhitelistContentWithOptions(const DeleteCubecardWhitelistContentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWhitelistId()) {
    body["WhitelistId"] = request.getWhitelistId();
  }

  if (!!request.hasWhitelistValue()) {
    body["WhitelistValue"] = request.getWhitelistValue();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteCubecardWhitelistContent"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCubecardWhitelistContentResponse>();
}

/**
 * @param request DeleteCubecardWhitelistContentRequest
 * @return DeleteCubecardWhitelistContentResponse
 */
DeleteCubecardWhitelistContentResponse Client::deleteCubecardWhitelistContent(const DeleteCubecardWhitelistContentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCubecardWhitelistContentWithOptions(request, runtime);
}

/**
 * @param request DeleteMcdpAimRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMcdpAimResponse
 */
DeleteMcdpAimResponse Client::deleteMcdpAimWithOptions(const DeleteMcdpAimRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasMpaasMappcenterMcdpAimDeleteJsonStr()) {
    body["MpaasMappcenterMcdpAimDeleteJsonStr"] = request.getMpaasMappcenterMcdpAimDeleteJsonStr();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteMcdpAim"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMcdpAimResponse>();
}

/**
 * @param request DeleteMcdpAimRequest
 * @return DeleteMcdpAimResponse
 */
DeleteMcdpAimResponse Client::deleteMcdpAim(const DeleteMcdpAimRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMcdpAimWithOptions(request, runtime);
}

/**
 * @param request DeleteMcdpCrowdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMcdpCrowdResponse
 */
DeleteMcdpCrowdResponse Client::deleteMcdpCrowdWithOptions(const DeleteMcdpCrowdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasMpaasMappcenterMcdpCrowdDeleteJsonStr()) {
    body["MpaasMappcenterMcdpCrowdDeleteJsonStr"] = request.getMpaasMappcenterMcdpCrowdDeleteJsonStr();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteMcdpCrowd"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMcdpCrowdResponse>();
}

/**
 * @param request DeleteMcdpCrowdRequest
 * @return DeleteMcdpCrowdResponse
 */
DeleteMcdpCrowdResponse Client::deleteMcdpCrowd(const DeleteMcdpCrowdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMcdpCrowdWithOptions(request, runtime);
}

/**
 * @param request DeleteMcdpZoneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMcdpZoneResponse
 */
DeleteMcdpZoneResponse Client::deleteMcdpZoneWithOptions(const DeleteMcdpZoneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasMpaasMappcenterMcdpZoneDeleteJsonStr()) {
    body["MpaasMappcenterMcdpZoneDeleteJsonStr"] = request.getMpaasMappcenterMcdpZoneDeleteJsonStr();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteMcdpZone"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMcdpZoneResponse>();
}

/**
 * @param request DeleteMcdpZoneRequest
 * @return DeleteMcdpZoneResponse
 */
DeleteMcdpZoneResponse Client::deleteMcdpZone(const DeleteMcdpZoneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMcdpZoneWithOptions(request, runtime);
}

/**
 * @summary 删除热修复资源包
 *
 * @param request DeleteMcubeHotpatchResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMcubeHotpatchResourceResponse
 */
DeleteMcubeHotpatchResourceResponse Client::deleteMcubeHotpatchResourceWithOptions(const DeleteMcubeHotpatchResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppCode()) {
    body["AppCode"] = request.getAppCode();
  }

  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteMcubeHotpatchResource"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMcubeHotpatchResourceResponse>();
}

/**
 * @summary 删除热修复资源包
 *
 * @param request DeleteMcubeHotpatchResourceRequest
 * @return DeleteMcubeHotpatchResourceResponse
 */
DeleteMcubeHotpatchResourceResponse Client::deleteMcubeHotpatchResource(const DeleteMcubeHotpatchResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMcubeHotpatchResourceWithOptions(request, runtime);
}

/**
 * @param request DeleteMcubeMiniAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMcubeMiniAppResponse
 */
DeleteMcubeMiniAppResponse Client::deleteMcubeMiniAppWithOptions(const DeleteMcubeMiniAppRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasH5Id()) {
    body["H5Id"] = request.getH5Id();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteMcubeMiniApp"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMcubeMiniAppResponse>();
}

/**
 * @param request DeleteMcubeMiniAppRequest
 * @return DeleteMcubeMiniAppResponse
 */
DeleteMcubeMiniAppResponse Client::deleteMcubeMiniApp(const DeleteMcubeMiniAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMcubeMiniAppWithOptions(request, runtime);
}

/**
 * @param request DeleteMcubeNebulaAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMcubeNebulaAppResponse
 */
DeleteMcubeNebulaAppResponse Client::deleteMcubeNebulaAppWithOptions(const DeleteMcubeNebulaAppRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasH5Id()) {
    body["H5Id"] = request.getH5Id();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteMcubeNebulaApp"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMcubeNebulaAppResponse>();
}

/**
 * @param request DeleteMcubeNebulaAppRequest
 * @return DeleteMcubeNebulaAppResponse
 */
DeleteMcubeNebulaAppResponse Client::deleteMcubeNebulaApp(const DeleteMcubeNebulaAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMcubeNebulaAppWithOptions(request, runtime);
}

/**
 * @param request DeleteMcubeUpgradeResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMcubeUpgradeResourceResponse
 */
DeleteMcubeUpgradeResourceResponse Client::deleteMcubeUpgradeResourceWithOptions(const DeleteMcubeUpgradeResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasPlatform()) {
    body["Platform"] = request.getPlatform();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteMcubeUpgradeResource"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMcubeUpgradeResourceResponse>();
}

/**
 * @param request DeleteMcubeUpgradeResourceRequest
 * @return DeleteMcubeUpgradeResourceResponse
 */
DeleteMcubeUpgradeResourceResponse Client::deleteMcubeUpgradeResource(const DeleteMcubeUpgradeResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMcubeUpgradeResourceWithOptions(request, runtime);
}

/**
 * @param request DeleteMcubeWhitelistRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMcubeWhitelistResponse
 */
DeleteMcubeWhitelistResponse Client::deleteMcubeWhitelistWithOptions(const DeleteMcubeWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteMcubeWhitelist"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMcubeWhitelistResponse>();
}

/**
 * @param request DeleteMcubeWhitelistRequest
 * @return DeleteMcubeWhitelistResponse
 */
DeleteMcubeWhitelistResponse Client::deleteMcubeWhitelist(const DeleteMcubeWhitelistRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMcubeWhitelistWithOptions(request, runtime);
}

/**
 * @param request DeleteMdsCubeTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMdsCubeTemplateResponse
 */
DeleteMdsCubeTemplateResponse Client::deleteMdsCubeTemplateWithOptions(const DeleteMdsCubeTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasTemplateId()) {
    body["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteMdsCubeTemplate"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMdsCubeTemplateResponse>();
}

/**
 * @param request DeleteMdsCubeTemplateRequest
 * @return DeleteMdsCubeTemplateResponse
 */
DeleteMdsCubeTemplateResponse Client::deleteMdsCubeTemplate(const DeleteMdsCubeTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMdsCubeTemplateWithOptions(request, runtime);
}

/**
 * @param request DeleteMdsWhitelistContentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMdsWhitelistContentResponse
 */
DeleteMdsWhitelistContentResponse Client::deleteMdsWhitelistContentWithOptions(const DeleteMdsWhitelistContentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWhitelistId()) {
    body["WhitelistId"] = request.getWhitelistId();
  }

  if (!!request.hasWhitelistValue()) {
    body["WhitelistValue"] = request.getWhitelistValue();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteMdsWhitelistContent"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMdsWhitelistContentResponse>();
}

/**
 * @param request DeleteMdsWhitelistContentRequest
 * @return DeleteMdsWhitelistContentResponse
 */
DeleteMdsWhitelistContentResponse Client::deleteMdsWhitelistContent(const DeleteMdsWhitelistContentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMdsWhitelistContentWithOptions(request, runtime);
}

/**
 * @summary 删除模版
 *
 * @param request DeleteTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTemplateResponse
 */
DeleteTemplateResponse Client::deleteTemplateWithOptions(const DeleteTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasTemplateId()) {
    body["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasTemplateName()) {
    body["TemplateName"] = request.getTemplateName();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteTemplate"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTemplateResponse>();
}

/**
 * @summary 删除模版
 *
 * @param request DeleteTemplateRequest
 * @return DeleteTemplateResponse
 */
DeleteTemplateResponse Client::deleteTemplate(const DeleteTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTemplateWithOptions(request, runtime);
}

/**
 * @param request ExistMcubeRsaKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExistMcubeRsaKeyResponse
 */
ExistMcubeRsaKeyResponse Client::existMcubeRsaKeyWithOptions(const ExistMcubeRsaKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ExistMcubeRsaKey"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExistMcubeRsaKeyResponse>();
}

/**
 * @param request ExistMcubeRsaKeyRequest
 * @return ExistMcubeRsaKeyResponse
 */
ExistMcubeRsaKeyResponse Client::existMcubeRsaKey(const ExistMcubeRsaKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return existMcubeRsaKeyWithOptions(request, runtime);
}

/**
 * @param request ExportMappCenterAppConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExportMappCenterAppConfigResponse
 */
ExportMappCenterAppConfigResponse Client::exportMappCenterAppConfigWithOptions(const ExportMappCenterAppConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasApkFileUrl()) {
    body["ApkFileUrl"] = request.getApkFileUrl();
  }

  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasCertRsaBase64()) {
    body["CertRsaBase64"] = request.getCertRsaBase64();
  }

  if (!!request.hasIdentifier()) {
    body["Identifier"] = request.getIdentifier();
  }

  if (!!request.hasOnexFlag()) {
    body["OnexFlag"] = request.getOnexFlag();
  }

  if (!!request.hasSystemType()) {
    body["SystemType"] = request.getSystemType();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ExportMappCenterAppConfig"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExportMappCenterAppConfigResponse>();
}

/**
 * @param request ExportMappCenterAppConfigRequest
 * @return ExportMappCenterAppConfigResponse
 */
ExportMappCenterAppConfigResponse Client::exportMappCenterAppConfig(const ExportMappCenterAppConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return exportMappCenterAppConfigWithOptions(request, runtime);
}

/**
 * @param request GetFileTokenForUploadToMsaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFileTokenForUploadToMsaResponse
 */
GetFileTokenForUploadToMsaResponse Client::getFileTokenForUploadToMsaWithOptions(const GetFileTokenForUploadToMsaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasOnexFlag()) {
    body["OnexFlag"] = request.getOnexFlag();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetFileTokenForUploadToMsa"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFileTokenForUploadToMsaResponse>();
}

/**
 * @param request GetFileTokenForUploadToMsaRequest
 * @return GetFileTokenForUploadToMsaResponse
 */
GetFileTokenForUploadToMsaResponse Client::getFileTokenForUploadToMsa(const GetFileTokenForUploadToMsaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getFileTokenForUploadToMsaWithOptions(request, runtime);
}

/**
 * @summary 查看全部审核记录
 *
 * @param request GetGameReviewByStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetGameReviewByStatusResponse
 */
GetGameReviewByStatusResponse Client::getGameReviewByStatusWithOptions(const GetGameReviewByStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasKeyword()) {
    body["Keyword"] = request.getKeyword();
  }

  if (!!request.hasPageNum()) {
    body["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasReviewStatus()) {
    body["ReviewStatus"] = request.getReviewStatus();
  }

  if (!!request.hasSortMode()) {
    body["SortMode"] = request.getSortMode();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetGameReviewByStatus"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetGameReviewByStatusResponse>();
}

/**
 * @summary 查看全部审核记录
 *
 * @param request GetGameReviewByStatusRequest
 * @return GetGameReviewByStatusResponse
 */
GetGameReviewByStatusResponse Client::getGameReviewByStatus(const GetGameReviewByStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getGameReviewByStatusWithOptions(request, runtime);
}

/**
 * @param request GetLogUrlInMsaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLogUrlInMsaResponse
 */
GetLogUrlInMsaResponse Client::getLogUrlInMsaWithOptions(const GetLogUrlInMsaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetLogUrlInMsa"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLogUrlInMsaResponse>();
}

/**
 * @param request GetLogUrlInMsaRequest
 * @return GetLogUrlInMsaResponse
 */
GetLogUrlInMsaResponse Client::getLogUrlInMsa(const GetLogUrlInMsaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLogUrlInMsaWithOptions(request, runtime);
}

/**
 * @param request GetMcubeFileTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMcubeFileTokenResponse
 */
GetMcubeFileTokenResponse Client::getMcubeFileTokenWithOptions(const GetMcubeFileTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasOnexFlag()) {
    body["OnexFlag"] = request.getOnexFlag();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetMcubeFileToken"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMcubeFileTokenResponse>();
}

/**
 * @param request GetMcubeFileTokenRequest
 * @return GetMcubeFileTokenResponse
 */
GetMcubeFileTokenResponse Client::getMcubeFileToken(const GetMcubeFileTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMcubeFileTokenWithOptions(request, runtime);
}

/**
 * @param request GetMcubeNebulaResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMcubeNebulaResourceResponse
 */
GetMcubeNebulaResourceResponse Client::getMcubeNebulaResourceWithOptions(const GetMcubeNebulaResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetMcubeNebulaResource"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMcubeNebulaResourceResponse>();
}

/**
 * @param request GetMcubeNebulaResourceRequest
 * @return GetMcubeNebulaResourceResponse
 */
GetMcubeNebulaResourceResponse Client::getMcubeNebulaResource(const GetMcubeNebulaResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMcubeNebulaResourceWithOptions(request, runtime);
}

/**
 * @param request GetMcubeNebulaTaskDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMcubeNebulaTaskDetailResponse
 */
GetMcubeNebulaTaskDetailResponse Client::getMcubeNebulaTaskDetailWithOptions(const GetMcubeNebulaTaskDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetMcubeNebulaTaskDetail"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMcubeNebulaTaskDetailResponse>();
}

/**
 * @param request GetMcubeNebulaTaskDetailRequest
 * @return GetMcubeNebulaTaskDetailResponse
 */
GetMcubeNebulaTaskDetailResponse Client::getMcubeNebulaTaskDetail(const GetMcubeNebulaTaskDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMcubeNebulaTaskDetailWithOptions(request, runtime);
}

/**
 * @param request GetMcubeUpgradePackageInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMcubeUpgradePackageInfoResponse
 */
GetMcubeUpgradePackageInfoResponse Client::getMcubeUpgradePackageInfoWithOptions(const GetMcubeUpgradePackageInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasPackageId()) {
    body["PackageId"] = request.getPackageId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetMcubeUpgradePackageInfo"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMcubeUpgradePackageInfoResponse>();
}

/**
 * @param request GetMcubeUpgradePackageInfoRequest
 * @return GetMcubeUpgradePackageInfoResponse
 */
GetMcubeUpgradePackageInfoResponse Client::getMcubeUpgradePackageInfo(const GetMcubeUpgradePackageInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMcubeUpgradePackageInfoWithOptions(request, runtime);
}

/**
 * @param request GetMcubeUpgradeTaskInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMcubeUpgradeTaskInfoResponse
 */
GetMcubeUpgradeTaskInfoResponse Client::getMcubeUpgradeTaskInfoWithOptions(const GetMcubeUpgradeTaskInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetMcubeUpgradeTaskInfo"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMcubeUpgradeTaskInfoResponse>();
}

/**
 * @param request GetMcubeUpgradeTaskInfoRequest
 * @return GetMcubeUpgradeTaskInfoResponse
 */
GetMcubeUpgradeTaskInfoResponse Client::getMcubeUpgradeTaskInfo(const GetMcubeUpgradeTaskInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMcubeUpgradeTaskInfoWithOptions(request, runtime);
}

/**
 * @param request GetMdsMiniConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMdsMiniConfigResponse
 */
GetMdsMiniConfigResponse Client::getMdsMiniConfigWithOptions(const GetMdsMiniConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasH5Id()) {
    body["H5Id"] = request.getH5Id();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetMdsMiniConfig"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMdsMiniConfigResponse>();
}

/**
 * @param request GetMdsMiniConfigRequest
 * @return GetMdsMiniConfigResponse
 */
GetMdsMiniConfigResponse Client::getMdsMiniConfig(const GetMdsMiniConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMdsMiniConfigWithOptions(request, runtime);
}

/**
 * @summary 获取模版
 *
 * @param request GetTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTemplateResponse
 */
GetTemplateResponse Client::getTemplateWithOptions(const GetTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasTemplateId()) {
    body["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasTemplateName()) {
    body["TemplateName"] = request.getTemplateName();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetTemplate"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTemplateResponse>();
}

/**
 * @summary 获取模版
 *
 * @param request GetTemplateRequest
 * @return GetTemplateResponse
 */
GetTemplateResponse Client::getTemplate(const GetTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTemplateWithOptions(request, runtime);
}

/**
 * @param request GetUserAppDonwloadUrlInMsaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserAppDonwloadUrlInMsaResponse
 */
GetUserAppDonwloadUrlInMsaResponse Client::getUserAppDonwloadUrlInMsaWithOptions(const GetUserAppDonwloadUrlInMsaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetUserAppDonwloadUrlInMsa"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUserAppDonwloadUrlInMsaResponse>();
}

/**
 * @param request GetUserAppDonwloadUrlInMsaRequest
 * @return GetUserAppDonwloadUrlInMsaResponse
 */
GetUserAppDonwloadUrlInMsaResponse Client::getUserAppDonwloadUrlInMsa(const GetUserAppDonwloadUrlInMsaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserAppDonwloadUrlInMsaWithOptions(request, runtime);
}

/**
 * @param request GetUserAppEnhanceProcessInMsaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserAppEnhanceProcessInMsaResponse
 */
GetUserAppEnhanceProcessInMsaResponse Client::getUserAppEnhanceProcessInMsaWithOptions(const GetUserAppEnhanceProcessInMsaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetUserAppEnhanceProcessInMsa"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUserAppEnhanceProcessInMsaResponse>();
}

/**
 * @param request GetUserAppEnhanceProcessInMsaRequest
 * @return GetUserAppEnhanceProcessInMsaResponse
 */
GetUserAppEnhanceProcessInMsaResponse Client::getUserAppEnhanceProcessInMsa(const GetUserAppEnhanceProcessInMsaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserAppEnhanceProcessInMsaWithOptions(request, runtime);
}

/**
 * @param request GetUserAppUploadProcessInMsaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserAppUploadProcessInMsaResponse
 */
GetUserAppUploadProcessInMsaResponse Client::getUserAppUploadProcessInMsaWithOptions(const GetUserAppUploadProcessInMsaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetUserAppUploadProcessInMsa"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUserAppUploadProcessInMsaResponse>();
}

/**
 * @param request GetUserAppUploadProcessInMsaRequest
 * @return GetUserAppUploadProcessInMsaResponse
 */
GetUserAppUploadProcessInMsaResponse Client::getUserAppUploadProcessInMsa(const GetUserAppUploadProcessInMsaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserAppUploadProcessInMsaWithOptions(request, runtime);
}

/**
 * @summary 查询报表
 *
 * @param request ListAnalysisCoreIndexRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAnalysisCoreIndexResponse
 */
ListAnalysisCoreIndexResponse Client::listAnalysisCoreIndexWithOptions(const ListAnalysisCoreIndexRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasChannel()) {
    body["Channel"] = request.getChannel();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.getEndTime();
  }

  if (!!request.hasPlatform()) {
    body["Platform"] = request.getPlatform();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListAnalysisCoreIndex"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAnalysisCoreIndexResponse>();
}

/**
 * @summary 查询报表
 *
 * @param request ListAnalysisCoreIndexRequest
 * @return ListAnalysisCoreIndexResponse
 */
ListAnalysisCoreIndexResponse Client::listAnalysisCoreIndex(const ListAnalysisCoreIndexRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAnalysisCoreIndexWithOptions(request, runtime);
}

/**
 * @param request ListCubecardAppsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCubecardAppsResponse
 */
ListCubecardAppsResponse Client::listCubecardAppsWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "ListCubecardApps"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCubecardAppsResponse>();
}

/**
 * @return ListCubecardAppsResponse
 */
ListCubecardAppsResponse Client::listCubecardApps() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCubecardAppsWithOptions(runtime);
}

/**
 * @param request ListMappCenterAppsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMappCenterAppsResponse
 */
ListMappCenterAppsResponse Client::listMappCenterAppsWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "ListMappCenterApps"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMappCenterAppsResponse>();
}

/**
 * @return ListMappCenterAppsResponse
 */
ListMappCenterAppsResponse Client::listMappCenterApps() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMappCenterAppsWithOptions(runtime);
}

/**
 * @param request ListMappCenterWorkspacesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMappCenterWorkspacesResponse
 */
ListMappCenterWorkspacesResponse Client::listMappCenterWorkspacesWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "ListMappCenterWorkspaces"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMappCenterWorkspacesResponse>();
}

/**
 * @return ListMappCenterWorkspacesResponse
 */
ListMappCenterWorkspacesResponse Client::listMappCenterWorkspaces() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMappCenterWorkspacesWithOptions(runtime);
}

/**
 * @param request ListMcdpAimRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMcdpAimResponse
 */
ListMcdpAimResponse Client::listMcdpAimWithOptions(const ListMcdpAimRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasEmptyTag()) {
    body["EmptyTag"] = request.getEmptyTag();
  }

  if (!!request.hasKeyword()) {
    body["Keyword"] = request.getKeyword();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasPageNo()) {
    body["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSort()) {
    body["Sort"] = request.getSort();
  }

  if (!!request.hasSortField()) {
    body["SortField"] = request.getSortField();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListMcdpAim"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMcdpAimResponse>();
}

/**
 * @param request ListMcdpAimRequest
 * @return ListMcdpAimResponse
 */
ListMcdpAimResponse Client::listMcdpAim(const ListMcdpAimRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMcdpAimWithOptions(request, runtime);
}

/**
 * @summary 查询热修复资源包列表
 *
 * @param request ListMcubeHotpatchResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMcubeHotpatchResourcesResponse
 */
ListMcubeHotpatchResourcesResponse Client::listMcubeHotpatchResourcesWithOptions(const ListMcubeHotpatchResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasPageNum()) {
    body["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListMcubeHotpatchResources"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMcubeHotpatchResourcesResponse>();
}

/**
 * @summary 查询热修复资源包列表
 *
 * @param request ListMcubeHotpatchResourcesRequest
 * @return ListMcubeHotpatchResourcesResponse
 */
ListMcubeHotpatchResourcesResponse Client::listMcubeHotpatchResources(const ListMcubeHotpatchResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMcubeHotpatchResourcesWithOptions(request, runtime);
}

/**
 * @summary 查询热修复发布任务列表
 *
 * @param request ListMcubeHotpatchTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMcubeHotpatchTasksResponse
 */
ListMcubeHotpatchTasksResponse Client::listMcubeHotpatchTasksWithOptions(const ListMcubeHotpatchTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListMcubeHotpatchTasks"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMcubeHotpatchTasksResponse>();
}

/**
 * @summary 查询热修复发布任务列表
 *
 * @param request ListMcubeHotpatchTasksRequest
 * @return ListMcubeHotpatchTasksResponse
 */
ListMcubeHotpatchTasksResponse Client::listMcubeHotpatchTasks(const ListMcubeHotpatchTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMcubeHotpatchTasksWithOptions(request, runtime);
}

/**
 * @param request ListMcubeMiniAppsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMcubeMiniAppsResponse
 */
ListMcubeMiniAppsResponse Client::listMcubeMiniAppsWithOptions(const ListMcubeMiniAppsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasKeyword()) {
    body["Keyword"] = request.getKeyword();
  }

  if (!!request.hasPageNum()) {
    body["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListMcubeMiniApps"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMcubeMiniAppsResponse>();
}

/**
 * @param request ListMcubeMiniAppsRequest
 * @return ListMcubeMiniAppsResponse
 */
ListMcubeMiniAppsResponse Client::listMcubeMiniApps(const ListMcubeMiniAppsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMcubeMiniAppsWithOptions(request, runtime);
}

/**
 * @param request ListMcubeMiniPackagesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMcubeMiniPackagesResponse
 */
ListMcubeMiniPackagesResponse Client::listMcubeMiniPackagesWithOptions(const ListMcubeMiniPackagesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasH5Id()) {
    body["H5Id"] = request.getH5Id();
  }

  if (!!request.hasPackageTypes()) {
    body["PackageTypes"] = request.getPackageTypes();
  }

  if (!!request.hasPageNum()) {
    body["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListMcubeMiniPackages"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMcubeMiniPackagesResponse>();
}

/**
 * @param request ListMcubeMiniPackagesRequest
 * @return ListMcubeMiniPackagesResponse
 */
ListMcubeMiniPackagesResponse Client::listMcubeMiniPackages(const ListMcubeMiniPackagesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMcubeMiniPackagesWithOptions(request, runtime);
}

/**
 * @param request ListMcubeMiniTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMcubeMiniTasksResponse
 */
ListMcubeMiniTasksResponse Client::listMcubeMiniTasksWithOptions(const ListMcubeMiniTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListMcubeMiniTasks"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMcubeMiniTasksResponse>();
}

/**
 * @param request ListMcubeMiniTasksRequest
 * @return ListMcubeMiniTasksResponse
 */
ListMcubeMiniTasksResponse Client::listMcubeMiniTasks(const ListMcubeMiniTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMcubeMiniTasksWithOptions(request, runtime);
}

/**
 * @param request ListMcubeNebulaAppsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMcubeNebulaAppsResponse
 */
ListMcubeNebulaAppsResponse Client::listMcubeNebulaAppsWithOptions(const ListMcubeNebulaAppsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasKeyword()) {
    body["Keyword"] = request.getKeyword();
  }

  if (!!request.hasPageNum()) {
    body["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListMcubeNebulaApps"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMcubeNebulaAppsResponse>();
}

/**
 * @param request ListMcubeNebulaAppsRequest
 * @return ListMcubeNebulaAppsResponse
 */
ListMcubeNebulaAppsResponse Client::listMcubeNebulaApps(const ListMcubeNebulaAppsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMcubeNebulaAppsWithOptions(request, runtime);
}

/**
 * @param request ListMcubeNebulaResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMcubeNebulaResourcesResponse
 */
ListMcubeNebulaResourcesResponse Client::listMcubeNebulaResourcesWithOptions(const ListMcubeNebulaResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasH5Id()) {
    body["H5Id"] = request.getH5Id();
  }

  if (!!request.hasPageNum()) {
    body["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListMcubeNebulaResources"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMcubeNebulaResourcesResponse>();
}

/**
 * @param request ListMcubeNebulaResourcesRequest
 * @return ListMcubeNebulaResourcesResponse
 */
ListMcubeNebulaResourcesResponse Client::listMcubeNebulaResources(const ListMcubeNebulaResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMcubeNebulaResourcesWithOptions(request, runtime);
}

/**
 * @param request ListMcubeNebulaTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMcubeNebulaTasksResponse
 */
ListMcubeNebulaTasksResponse Client::listMcubeNebulaTasksWithOptions(const ListMcubeNebulaTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListMcubeNebulaTasks"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMcubeNebulaTasksResponse>();
}

/**
 * @param request ListMcubeNebulaTasksRequest
 * @return ListMcubeNebulaTasksResponse
 */
ListMcubeNebulaTasksResponse Client::listMcubeNebulaTasks(const ListMcubeNebulaTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMcubeNebulaTasksWithOptions(request, runtime);
}

/**
 * @param request ListMcubeUpgradePackagesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMcubeUpgradePackagesResponse
 */
ListMcubeUpgradePackagesResponse Client::listMcubeUpgradePackagesWithOptions(const ListMcubeUpgradePackagesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasPageNum()) {
    body["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListMcubeUpgradePackages"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMcubeUpgradePackagesResponse>();
}

/**
 * @param request ListMcubeUpgradePackagesRequest
 * @return ListMcubeUpgradePackagesResponse
 */
ListMcubeUpgradePackagesResponse Client::listMcubeUpgradePackages(const ListMcubeUpgradePackagesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMcubeUpgradePackagesWithOptions(request, runtime);
}

/**
 * @param request ListMcubeUpgradeTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMcubeUpgradeTasksResponse
 */
ListMcubeUpgradeTasksResponse Client::listMcubeUpgradeTasksWithOptions(const ListMcubeUpgradeTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasPackageId()) {
    body["PackageId"] = request.getPackageId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListMcubeUpgradeTasks"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMcubeUpgradeTasksResponse>();
}

/**
 * @param request ListMcubeUpgradeTasksRequest
 * @return ListMcubeUpgradeTasksResponse
 */
ListMcubeUpgradeTasksResponse Client::listMcubeUpgradeTasks(const ListMcubeUpgradeTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMcubeUpgradeTasksWithOptions(request, runtime);
}

/**
 * @param request ListMcubeWhitelistsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMcubeWhitelistsResponse
 */
ListMcubeWhitelistsResponse Client::listMcubeWhitelistsWithOptions(const ListMcubeWhitelistsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasPageNum()) {
    body["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWhitelistName()) {
    body["WhitelistName"] = request.getWhitelistName();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListMcubeWhitelists"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMcubeWhitelistsResponse>();
}

/**
 * @param request ListMcubeWhitelistsRequest
 * @return ListMcubeWhitelistsResponse
 */
ListMcubeWhitelistsResponse Client::listMcubeWhitelists(const ListMcubeWhitelistsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMcubeWhitelistsWithOptions(request, runtime);
}

/**
 * @param request ListMdsCubeResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMdsCubeResourcesResponse
 */
ListMdsCubeResourcesResponse Client::listMdsCubeResourcesWithOptions(const ListMdsCubeResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasPageNum()) {
    body["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasTemplateId()) {
    body["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  if (!!request.hasTest()) {
    body["test"] = request.getTest();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListMdsCubeResources"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMdsCubeResourcesResponse>();
}

/**
 * @param request ListMdsCubeResourcesRequest
 * @return ListMdsCubeResourcesResponse
 */
ListMdsCubeResourcesResponse Client::listMdsCubeResources(const ListMdsCubeResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMdsCubeResourcesWithOptions(request, runtime);
}

/**
 * @param request ListMdsCubeTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMdsCubeTasksResponse
 */
ListMdsCubeTasksResponse Client::listMdsCubeTasksWithOptions(const ListMdsCubeTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasPageNum()) {
    body["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasTemplateResourceId()) {
    body["TemplateResourceId"] = request.getTemplateResourceId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListMdsCubeTasks"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMdsCubeTasksResponse>();
}

/**
 * @param request ListMdsCubeTasksRequest
 * @return ListMdsCubeTasksResponse
 */
ListMdsCubeTasksResponse Client::listMdsCubeTasks(const ListMdsCubeTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMdsCubeTasksWithOptions(request, runtime);
}

/**
 * @param request ListMdsCubeTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMdsCubeTemplatesResponse
 */
ListMdsCubeTemplatesResponse Client::listMdsCubeTemplatesWithOptions(const ListMdsCubeTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasKeyword()) {
    body["Keyword"] = request.getKeyword();
  }

  if (!!request.hasPageNum()) {
    body["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListMdsCubeTemplates"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMdsCubeTemplatesResponse>();
}

/**
 * @param request ListMdsCubeTemplatesRequest
 * @return ListMdsCubeTemplatesResponse
 */
ListMdsCubeTemplatesResponse Client::listMdsCubeTemplates(const ListMdsCubeTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMdsCubeTemplatesWithOptions(request, runtime);
}

/**
 * @param request ListMgsApiRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMgsApiResponse
 */
ListMgsApiResponse Client::listMgsApiWithOptions(const ListMgsApiRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasApiStatus()) {
    body["ApiStatus"] = request.getApiStatus();
  }

  if (!!request.hasApiType()) {
    body["ApiType"] = request.getApiType();
  }

  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasFormat()) {
    body["Format"] = request.getFormat();
  }

  if (!!request.hasHost()) {
    body["Host"] = request.getHost();
  }

  if (!!request.hasNeedEncrypt()) {
    body["NeedEncrypt"] = request.getNeedEncrypt();
  }

  if (!!request.hasNeedEtag()) {
    body["NeedEtag"] = request.getNeedEtag();
  }

  if (!!request.hasNeedSign()) {
    body["NeedSign"] = request.getNeedSign();
  }

  if (!!request.hasOperationType()) {
    body["OperationType"] = request.getOperationType();
  }

  if (!!request.hasOptFuzzy()) {
    body["OptFuzzy"] = request.getOptFuzzy();
  }

  if (!!request.hasPageIndex()) {
    body["PageIndex"] = request.getPageIndex();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSysId()) {
    body["SysId"] = request.getSysId();
  }

  if (!!request.hasSysName()) {
    body["SysName"] = request.getSysName();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListMgsApi"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMgsApiResponse>();
}

/**
 * @param request ListMgsApiRequest
 * @return ListMgsApiResponse
 */
ListMgsApiResponse Client::listMgsApi(const ListMgsApiRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMgsApiWithOptions(request, runtime);
}

/**
 * @summary 分页查询模版列表
 *
 * @param request ListTemplatePageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTemplatePageResponse
 */
ListTemplatePageResponse Client::listTemplatePageWithOptions(const ListTemplatePageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasCurrentPage()) {
    body["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListTemplatePage"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTemplatePageResponse>();
}

/**
 * @summary 分页查询模版列表
 *
 * @param request ListTemplatePageRequest
 * @return ListTemplatePageResponse
 */
ListTemplatePageResponse Client::listTemplatePage(const ListTemplatePageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTemplatePageWithOptions(request, runtime);
}

/**
 * @summary OCR通用接口
 *
 * @param request MTRSOCRServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MTRSOCRServiceResponse
 */
MTRSOCRServiceResponse Client::mTRSOCRServiceWithOptions(const MTRSOCRServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasImageRaw()) {
    body["ImageRaw"] = request.getImageRaw();
  }

  if (!!request.hasMask()) {
    body["Mask"] = request.getMask();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "MTRSOCRService"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MTRSOCRServiceResponse>();
}

/**
 * @summary OCR通用接口
 *
 * @param request MTRSOCRServiceRequest
 * @return MTRSOCRServiceResponse
 */
MTRSOCRServiceResponse Client::mTRSOCRService(const MTRSOCRServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return mTRSOCRServiceWithOptions(request, runtime);
}

/**
 * @param request PushBindRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PushBindResponse
 */
PushBindResponse Client::pushBindWithOptions(const PushBindRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasDeliveryToken()) {
    body["DeliveryToken"] = request.getDeliveryToken();
  }

  if (!!request.hasOsType()) {
    body["OsType"] = request.getOsType();
  }

  if (!!request.hasPhoneNumber()) {
    body["PhoneNumber"] = request.getPhoneNumber();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasUserId()) {
    body["UserId"] = request.getUserId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "PushBind"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PushBindResponse>();
}

/**
 * @param request PushBindRequest
 * @return PushBindResponse
 */
PushBindResponse Client::pushBind(const PushBindRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pushBindWithOptions(request, runtime);
}

/**
 * @param tmpReq PushBroadcastRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PushBroadcastResponse
 */
PushBroadcastResponse Client::pushBroadcastWithOptions(const PushBroadcastRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  PushBroadcastShrinkRequest request = PushBroadcastShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasNotifyLevel()) {
    request.setNotifyLevelShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNotifyLevel(), "NotifyLevel", "json"));
  }

  if (!!tmpReq.hasThirdChannelCategory()) {
    request.setThirdChannelCategoryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getThirdChannelCategory(), "ThirdChannelCategory", "json"));
  }

  json body = {};
  if (!!request.hasAndroidChannel()) {
    body["AndroidChannel"] = request.getAndroidChannel();
  }

  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasBindEndTime()) {
    body["BindEndTime"] = request.getBindEndTime();
  }

  if (!!request.hasBindPeriod()) {
    body["BindPeriod"] = request.getBindPeriod();
  }

  if (!!request.hasBindStartTime()) {
    body["BindStartTime"] = request.getBindStartTime();
  }

  if (!!request.hasChannelId()) {
    body["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasClassification()) {
    body["Classification"] = request.getClassification();
  }

  if (!!request.hasDeliveryType()) {
    body["DeliveryType"] = request.getDeliveryType();
  }

  if (!!request.hasExpiredSeconds()) {
    body["ExpiredSeconds"] = request.getExpiredSeconds();
  }

  if (!!request.hasExtendedParams()) {
    body["ExtendedParams"] = request.getExtendedParams();
  }

  if (!!request.hasMiChannelId()) {
    body["MiChannelId"] = request.getMiChannelId();
  }

  if (!!request.hasMsgkey()) {
    body["Msgkey"] = request.getMsgkey();
  }

  if (!!request.hasNotifyLevelShrink()) {
    body["NotifyLevel"] = request.getNotifyLevelShrink();
  }

  if (!!request.hasNotifyType()) {
    body["NotifyType"] = request.getNotifyType();
  }

  if (!!request.hasPushAction()) {
    body["PushAction"] = request.getPushAction();
  }

  if (!!request.hasPushStatus()) {
    body["PushStatus"] = request.getPushStatus();
  }

  if (!!request.hasSilent()) {
    body["Silent"] = request.getSilent();
  }

  if (!!request.hasStrategyContent()) {
    body["StrategyContent"] = request.getStrategyContent();
  }

  if (!!request.hasStrategyType()) {
    body["StrategyType"] = request.getStrategyType();
  }

  if (!!request.hasTaskName()) {
    body["TaskName"] = request.getTaskName();
  }

  if (!!request.hasTemplateKeyValue()) {
    body["TemplateKeyValue"] = request.getTemplateKeyValue();
  }

  if (!!request.hasTemplateName()) {
    body["TemplateName"] = request.getTemplateName();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasThirdChannelCategoryShrink()) {
    body["ThirdChannelCategory"] = request.getThirdChannelCategoryShrink();
  }

  if (!!request.hasTimeMode()) {
    body["TimeMode"] = request.getTimeMode();
  }

  if (!!request.hasTransparentMessagePayload()) {
    body["TransparentMessagePayload"] = request.getTransparentMessagePayload();
  }

  if (!!request.hasTransparentMessageUrgency()) {
    body["TransparentMessageUrgency"] = request.getTransparentMessageUrgency();
  }

  if (!!request.hasUnBindEndTime()) {
    body["UnBindEndTime"] = request.getUnBindEndTime();
  }

  if (!!request.hasUnBindPeriod()) {
    body["UnBindPeriod"] = request.getUnBindPeriod();
  }

  if (!!request.hasUnBindStartTime()) {
    body["UnBindStartTime"] = request.getUnBindStartTime();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "PushBroadcast"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PushBroadcastResponse>();
}

/**
 * @param request PushBroadcastRequest
 * @return PushBroadcastResponse
 */
PushBroadcastResponse Client::pushBroadcast(const PushBroadcastRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pushBroadcastWithOptions(request, runtime);
}

/**
 * @param tmpReq PushMultipleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PushMultipleResponse
 */
PushMultipleResponse Client::pushMultipleWithOptions(const PushMultipleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  PushMultipleShrinkRequest request = PushMultipleShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasNotifyLevel()) {
    request.setNotifyLevelShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNotifyLevel(), "NotifyLevel", "json"));
  }

  if (!!tmpReq.hasThirdChannelCategory()) {
    request.setThirdChannelCategoryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getThirdChannelCategory(), "ThirdChannelCategory", "json"));
  }

  json body = {};
  if (!!request.hasActivityContentState()) {
    body["ActivityContentState"] = request.getActivityContentState();
  }

  if (!!request.hasActivityEvent()) {
    body["ActivityEvent"] = request.getActivityEvent();
  }

  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasChannelId()) {
    body["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasClassification()) {
    body["Classification"] = request.getClassification();
  }

  if (!!request.hasDeliveryType()) {
    body["DeliveryType"] = request.getDeliveryType();
  }

  if (!!request.hasDismissalDate()) {
    body["DismissalDate"] = request.getDismissalDate();
  }

  if (!!request.hasExpiredSeconds()) {
    body["ExpiredSeconds"] = request.getExpiredSeconds();
  }

  if (!!request.hasExtendedParams()) {
    body["ExtendedParams"] = request.getExtendedParams();
  }

  if (!!request.hasMiChannelId()) {
    body["MiChannelId"] = request.getMiChannelId();
  }

  if (!!request.hasNotifyLevelShrink()) {
    body["NotifyLevel"] = request.getNotifyLevelShrink();
  }

  if (!!request.hasNotifyType()) {
    body["NotifyType"] = request.getNotifyType();
  }

  if (!!request.hasPushAction()) {
    body["PushAction"] = request.getPushAction();
  }

  if (!!request.hasSilent()) {
    body["Silent"] = request.getSilent();
  }

  if (!!request.hasStrategyContent()) {
    body["StrategyContent"] = request.getStrategyContent();
  }

  if (!!request.hasStrategyType()) {
    body["StrategyType"] = request.getStrategyType();
  }

  if (!!request.hasTargetMsg()) {
    body["TargetMsg"] = request.getTargetMsg();
  }

  if (!!request.hasTaskName()) {
    body["TaskName"] = request.getTaskName();
  }

  if (!!request.hasTemplateName()) {
    body["TemplateName"] = request.getTemplateName();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasThirdChannelCategoryShrink()) {
    body["ThirdChannelCategory"] = request.getThirdChannelCategoryShrink();
  }

  if (!!request.hasTransparentMessagePayload()) {
    body["TransparentMessagePayload"] = request.getTransparentMessagePayload();
  }

  if (!!request.hasTransparentMessageUrgency()) {
    body["TransparentMessageUrgency"] = request.getTransparentMessageUrgency();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "PushMultiple"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PushMultipleResponse>();
}

/**
 * @param request PushMultipleRequest
 * @return PushMultipleResponse
 */
PushMultipleResponse Client::pushMultiple(const PushMultipleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pushMultipleWithOptions(request, runtime);
}

/**
 * @summary 查询设备状态信息
 *
 * @param request PushQueryDeviceStateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PushQueryDeviceStateResponse
 */
PushQueryDeviceStateResponse Client::pushQueryDeviceStateWithOptions(const PushQueryDeviceStateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasTarget()) {
    body["Target"] = request.getTarget();
  }

  if (!!request.hasTargetType()) {
    body["TargetType"] = request.getTargetType();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "PushQueryDeviceState"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PushQueryDeviceStateResponse>();
}

/**
 * @summary 查询设备状态信息
 *
 * @param request PushQueryDeviceStateRequest
 * @return PushQueryDeviceStateResponse
 */
PushQueryDeviceStateResponse Client::pushQueryDeviceState(const PushQueryDeviceStateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pushQueryDeviceStateWithOptions(request, runtime);
}

/**
 * @param request PushReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PushReportResponse
 */
PushReportResponse Client::pushReportWithOptions(const PushReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasAppVersion()) {
    body["AppVersion"] = request.getAppVersion();
  }

  if (!!request.hasChannel()) {
    body["Channel"] = request.getChannel();
  }

  if (!!request.hasConnectType()) {
    body["ConnectType"] = request.getConnectType();
  }

  if (!!request.hasDeliveryToken()) {
    body["DeliveryToken"] = request.getDeliveryToken();
  }

  if (!!request.hasImei()) {
    body["Imei"] = request.getImei();
  }

  if (!!request.hasImsi()) {
    body["Imsi"] = request.getImsi();
  }

  if (!!request.hasModel()) {
    body["Model"] = request.getModel();
  }

  if (!!request.hasOsType()) {
    body["OsType"] = request.getOsType();
  }

  if (!!request.hasPushVersion()) {
    body["PushVersion"] = request.getPushVersion();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasThirdChannel()) {
    body["ThirdChannel"] = request.getThirdChannel();
  }

  if (!!request.hasThirdChannelDeviceToken()) {
    body["ThirdChannelDeviceToken"] = request.getThirdChannelDeviceToken();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "PushReport"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PushReportResponse>();
}

/**
 * @param request PushReportRequest
 * @return PushReportResponse
 */
PushReportResponse Client::pushReport(const PushReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pushReportWithOptions(request, runtime);
}

/**
 * @summary 极简推送
 *
 * @param tmpReq PushSimpleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PushSimpleResponse
 */
PushSimpleResponse Client::pushSimpleWithOptions(const PushSimpleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  PushSimpleShrinkRequest request = PushSimpleShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasNotifyLevel()) {
    request.setNotifyLevelShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNotifyLevel(), "NotifyLevel", "json"));
  }

  if (!!tmpReq.hasThirdChannelCategory()) {
    request.setThirdChannelCategoryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getThirdChannelCategory(), "ThirdChannelCategory", "json"));
  }

  json body = {};
  if (!!request.hasActivityContentState()) {
    body["ActivityContentState"] = request.getActivityContentState();
  }

  if (!!request.hasActivityEvent()) {
    body["ActivityEvent"] = request.getActivityEvent();
  }

  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasChannelId()) {
    body["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasClassification()) {
    body["Classification"] = request.getClassification();
  }

  if (!!request.hasContent()) {
    body["Content"] = request.getContent();
  }

  if (!!request.hasDeliveryType()) {
    body["DeliveryType"] = request.getDeliveryType();
  }

  if (!!request.hasDismissalDate()) {
    body["DismissalDate"] = request.getDismissalDate();
  }

  if (!!request.hasExpiredSeconds()) {
    body["ExpiredSeconds"] = request.getExpiredSeconds();
  }

  if (!!request.hasExtendedParams()) {
    body["ExtendedParams"] = request.getExtendedParams();
  }

  if (!!request.hasIconUrls()) {
    body["IconUrls"] = request.getIconUrls();
  }

  if (!!request.hasImageUrls()) {
    body["ImageUrls"] = request.getImageUrls();
  }

  if (!!request.hasMiChannelId()) {
    body["MiChannelId"] = request.getMiChannelId();
  }

  if (!!request.hasNotifyLevelShrink()) {
    body["NotifyLevel"] = request.getNotifyLevelShrink();
  }

  if (!!request.hasNotifyType()) {
    body["NotifyType"] = request.getNotifyType();
  }

  if (!!request.hasPushAction()) {
    body["PushAction"] = request.getPushAction();
  }

  if (!!request.hasPushStyle()) {
    body["PushStyle"] = request.getPushStyle();
  }

  if (!!request.hasSilent()) {
    body["Silent"] = request.getSilent();
  }

  if (!!request.hasSmsSignName()) {
    body["SmsSignName"] = request.getSmsSignName();
  }

  if (!!request.hasSmsStrategy()) {
    body["SmsStrategy"] = request.getSmsStrategy();
  }

  if (!!request.hasSmsTemplateCode()) {
    body["SmsTemplateCode"] = request.getSmsTemplateCode();
  }

  if (!!request.hasSmsTemplateParam()) {
    body["SmsTemplateParam"] = request.getSmsTemplateParam();
  }

  if (!!request.hasStrategyContent()) {
    body["StrategyContent"] = request.getStrategyContent();
  }

  if (!!request.hasStrategyType()) {
    body["StrategyType"] = request.getStrategyType();
  }

  if (!!request.hasTargetMsgkey()) {
    body["TargetMsgkey"] = request.getTargetMsgkey();
  }

  if (!!request.hasTaskName()) {
    body["TaskName"] = request.getTaskName();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasThirdChannelCategoryShrink()) {
    body["ThirdChannelCategory"] = request.getThirdChannelCategoryShrink();
  }

  if (!!request.hasTitle()) {
    body["Title"] = request.getTitle();
  }

  if (!!request.hasTransparentMessagePayload()) {
    body["TransparentMessagePayload"] = request.getTransparentMessagePayload();
  }

  if (!!request.hasTransparentMessageUrgency()) {
    body["TransparentMessageUrgency"] = request.getTransparentMessageUrgency();
  }

  if (!!request.hasUri()) {
    body["Uri"] = request.getUri();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "PushSimple"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PushSimpleResponse>();
}

/**
 * @summary 极简推送
 *
 * @param request PushSimpleRequest
 * @return PushSimpleResponse
 */
PushSimpleResponse Client::pushSimple(const PushSimpleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pushSimpleWithOptions(request, runtime);
}

/**
 * @param tmpReq PushTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PushTemplateResponse
 */
PushTemplateResponse Client::pushTemplateWithOptions(const PushTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  PushTemplateShrinkRequest request = PushTemplateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasNotifyLevel()) {
    request.setNotifyLevelShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNotifyLevel(), "NotifyLevel", "json"));
  }

  if (!!tmpReq.hasThirdChannelCategory()) {
    request.setThirdChannelCategoryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getThirdChannelCategory(), "ThirdChannelCategory", "json"));
  }

  json body = {};
  if (!!request.hasActivityContentState()) {
    body["ActivityContentState"] = request.getActivityContentState();
  }

  if (!!request.hasActivityEvent()) {
    body["ActivityEvent"] = request.getActivityEvent();
  }

  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasChannelId()) {
    body["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasClassification()) {
    body["Classification"] = request.getClassification();
  }

  if (!!request.hasDeliveryType()) {
    body["DeliveryType"] = request.getDeliveryType();
  }

  if (!!request.hasDismissalDate()) {
    body["DismissalDate"] = request.getDismissalDate();
  }

  if (!!request.hasExpiredSeconds()) {
    body["ExpiredSeconds"] = request.getExpiredSeconds();
  }

  if (!!request.hasExtendedParams()) {
    body["ExtendedParams"] = request.getExtendedParams();
  }

  if (!!request.hasMiChannelId()) {
    body["MiChannelId"] = request.getMiChannelId();
  }

  if (!!request.hasNotifyLevelShrink()) {
    body["NotifyLevel"] = request.getNotifyLevelShrink();
  }

  if (!!request.hasNotifyType()) {
    body["NotifyType"] = request.getNotifyType();
  }

  if (!!request.hasPushAction()) {
    body["PushAction"] = request.getPushAction();
  }

  if (!!request.hasSilent()) {
    body["Silent"] = request.getSilent();
  }

  if (!!request.hasSmsSignName()) {
    body["SmsSignName"] = request.getSmsSignName();
  }

  if (!!request.hasSmsStrategy()) {
    body["SmsStrategy"] = request.getSmsStrategy();
  }

  if (!!request.hasSmsTemplateCode()) {
    body["SmsTemplateCode"] = request.getSmsTemplateCode();
  }

  if (!!request.hasSmsTemplateParam()) {
    body["SmsTemplateParam"] = request.getSmsTemplateParam();
  }

  if (!!request.hasStrategyContent()) {
    body["StrategyContent"] = request.getStrategyContent();
  }

  if (!!request.hasStrategyType()) {
    body["StrategyType"] = request.getStrategyType();
  }

  if (!!request.hasTargetMsgkey()) {
    body["TargetMsgkey"] = request.getTargetMsgkey();
  }

  if (!!request.hasTaskName()) {
    body["TaskName"] = request.getTaskName();
  }

  if (!!request.hasTemplateKeyValue()) {
    body["TemplateKeyValue"] = request.getTemplateKeyValue();
  }

  if (!!request.hasTemplateName()) {
    body["TemplateName"] = request.getTemplateName();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasThirdChannelCategoryShrink()) {
    body["ThirdChannelCategory"] = request.getThirdChannelCategoryShrink();
  }

  if (!!request.hasTransparentMessagePayload()) {
    body["TransparentMessagePayload"] = request.getTransparentMessagePayload();
  }

  if (!!request.hasTransparentMessageUrgency()) {
    body["TransparentMessageUrgency"] = request.getTransparentMessageUrgency();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "PushTemplate"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PushTemplateResponse>();
}

/**
 * @param request PushTemplateRequest
 * @return PushTemplateResponse
 */
PushTemplateResponse Client::pushTemplate(const PushTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pushTemplateWithOptions(request, runtime);
}

/**
 * @param request PushUnBindRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PushUnBindResponse
 */
PushUnBindResponse Client::pushUnBindWithOptions(const PushUnBindRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasDeliveryToken()) {
    body["DeliveryToken"] = request.getDeliveryToken();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasUserId()) {
    body["UserId"] = request.getUserId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "PushUnBind"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PushUnBindResponse>();
}

/**
 * @param request PushUnBindRequest
 * @return PushUnBindResponse
 */
PushUnBindResponse Client::pushUnBind(const PushUnBindRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pushUnBindWithOptions(request, runtime);
}

/**
 * @param request QueryCubecardFiletokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryCubecardFiletokenResponse
 */
QueryCubecardFiletokenResponse Client::queryCubecardFiletokenWithOptions(const QueryCubecardFiletokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasOnexFlag()) {
    body["OnexFlag"] = request.getOnexFlag();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "QueryCubecardFiletoken"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryCubecardFiletokenResponse>();
}

/**
 * @param request QueryCubecardFiletokenRequest
 * @return QueryCubecardFiletokenResponse
 */
QueryCubecardFiletokenResponse Client::queryCubecardFiletoken(const QueryCubecardFiletokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryCubecardFiletokenWithOptions(request, runtime);
}

/**
 * @summary 查询Device+服务的
 *
 * @param request QueryInfoFromMdpRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryInfoFromMdpResponse
 */
QueryInfoFromMdpResponse Client::queryInfoFromMdpWithOptions(const QueryInfoFromMdpRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasMobile()) {
    body["Mobile"] = request.getMobile();
  }

  if (!!request.hasMobileMd5()) {
    body["MobileMd5"] = request.getMobileMd5();
  }

  if (!!request.hasMobileSha256()) {
    body["MobileSha256"] = request.getMobileSha256();
  }

  if (!!request.hasMobileSm3()) {
    body["MobileSm3"] = request.getMobileSm3();
  }

  if (!!request.hasRiskScene()) {
    body["RiskScene"] = request.getRiskScene();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "QueryInfoFromMdp"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryInfoFromMdpResponse>();
}

/**
 * @summary 查询Device+服务的
 *
 * @param request QueryInfoFromMdpRequest
 * @return QueryInfoFromMdpResponse
 */
QueryInfoFromMdpResponse Client::queryInfoFromMdp(const QueryInfoFromMdpRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryInfoFromMdpWithOptions(request, runtime);
}

/**
 * @summary 查询短链
 *
 * @param request QueryLinkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryLinkResponse
 */
QueryLinkResponse Client::queryLinkWithOptions(const QueryLinkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasUrl()) {
    body["Url"] = request.getUrl();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "QueryLink"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryLinkResponse>();
}

/**
 * @summary 查询短链
 *
 * @param request QueryLinkRequest
 * @return QueryLinkResponse
 */
QueryLinkResponse Client::queryLink(const QueryLinkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryLinkWithOptions(request, runtime);
}

/**
 * @param request QueryMappCenterAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryMappCenterAppResponse
 */
QueryMappCenterAppResponse Client::queryMappCenterAppWithOptions(const QueryMappCenterAppRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "QueryMappCenterApp"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryMappCenterAppResponse>();
}

/**
 * @param request QueryMappCenterAppRequest
 * @return QueryMappCenterAppResponse
 */
QueryMappCenterAppResponse Client::queryMappCenterApp(const QueryMappCenterAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryMappCenterAppWithOptions(request, runtime);
}

/**
 * @param request QueryMcdpAimRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryMcdpAimResponse
 */
QueryMcdpAimResponse Client::queryMcdpAimWithOptions(const QueryMcdpAimRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "QueryMcdpAim"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryMcdpAimResponse>();
}

/**
 * @param request QueryMcdpAimRequest
 * @return QueryMcdpAimResponse
 */
QueryMcdpAimResponse Client::queryMcdpAim(const QueryMcdpAimRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryMcdpAimWithOptions(request, runtime);
}

/**
 * @param request QueryMcdpZoneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryMcdpZoneResponse
 */
QueryMcdpZoneResponse Client::queryMcdpZoneWithOptions(const QueryMcdpZoneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "QueryMcdpZone"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryMcdpZoneResponse>();
}

/**
 * @param request QueryMcdpZoneRequest
 * @return QueryMcdpZoneResponse
 */
QueryMcdpZoneResponse Client::queryMcdpZone(const QueryMcdpZoneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryMcdpZoneWithOptions(request, runtime);
}

/**
 * @summary 查询热修复发布任务详情
 *
 * @param request QueryMcubeHotpatchTaskDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryMcubeHotpatchTaskDetailResponse
 */
QueryMcubeHotpatchTaskDetailResponse Client::queryMcubeHotpatchTaskDetailWithOptions(const QueryMcubeHotpatchTaskDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "QueryMcubeHotpatchTaskDetail"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryMcubeHotpatchTaskDetailResponse>();
}

/**
 * @summary 查询热修复发布任务详情
 *
 * @param request QueryMcubeHotpatchTaskDetailRequest
 * @return QueryMcubeHotpatchTaskDetailResponse
 */
QueryMcubeHotpatchTaskDetailResponse Client::queryMcubeHotpatchTaskDetail(const QueryMcubeHotpatchTaskDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryMcubeHotpatchTaskDetailWithOptions(request, runtime);
}

/**
 * @param request QueryMcubeMiniPackageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryMcubeMiniPackageResponse
 */
QueryMcubeMiniPackageResponse Client::queryMcubeMiniPackageWithOptions(const QueryMcubeMiniPackageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasH5Id()) {
    body["H5Id"] = request.getH5Id();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "QueryMcubeMiniPackage"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryMcubeMiniPackageResponse>();
}

/**
 * @param request QueryMcubeMiniPackageRequest
 * @return QueryMcubeMiniPackageResponse
 */
QueryMcubeMiniPackageResponse Client::queryMcubeMiniPackage(const QueryMcubeMiniPackageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryMcubeMiniPackageWithOptions(request, runtime);
}

/**
 * @param request QueryMcubeMiniTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryMcubeMiniTaskResponse
 */
QueryMcubeMiniTaskResponse Client::queryMcubeMiniTaskWithOptions(const QueryMcubeMiniTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "QueryMcubeMiniTask"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryMcubeMiniTaskResponse>();
}

/**
 * @param request QueryMcubeMiniTaskRequest
 * @return QueryMcubeMiniTaskResponse
 */
QueryMcubeMiniTaskResponse Client::queryMcubeMiniTask(const QueryMcubeMiniTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryMcubeMiniTaskWithOptions(request, runtime);
}

/**
 * @param request QueryMcubeVhostRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryMcubeVhostResponse
 */
QueryMcubeVhostResponse Client::queryMcubeVhostWithOptions(const QueryMcubeVhostRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "QueryMcubeVhost"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryMcubeVhostResponse>();
}

/**
 * @param request QueryMcubeVhostRequest
 * @return QueryMcubeVhostResponse
 */
QueryMcubeVhostResponse Client::queryMcubeVhost(const QueryMcubeVhostRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryMcubeVhostWithOptions(request, runtime);
}

/**
 * @param request QueryMdsUpgradeTaskDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryMdsUpgradeTaskDetailResponse
 */
QueryMdsUpgradeTaskDetailResponse Client::queryMdsUpgradeTaskDetailWithOptions(const QueryMdsUpgradeTaskDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "QueryMdsUpgradeTaskDetail"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryMdsUpgradeTaskDetailResponse>();
}

/**
 * @param request QueryMdsUpgradeTaskDetailRequest
 * @return QueryMdsUpgradeTaskDetailResponse
 */
QueryMdsUpgradeTaskDetailResponse Client::queryMdsUpgradeTaskDetail(const QueryMdsUpgradeTaskDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryMdsUpgradeTaskDetailWithOptions(request, runtime);
}

/**
 * @param request QueryMgsApipageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryMgsApipageResponse
 */
QueryMgsApipageResponse Client::queryMgsApipageWithOptions(const QueryMgsApipageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasApiStatus()) {
    body["ApiStatus"] = request.getApiStatus();
  }

  if (!!request.hasApiType()) {
    body["ApiType"] = request.getApiType();
  }

  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasFormat()) {
    body["Format"] = request.getFormat();
  }

  if (!!request.hasHost()) {
    body["Host"] = request.getHost();
  }

  if (!!request.hasNeedEncrypt()) {
    body["NeedEncrypt"] = request.getNeedEncrypt();
  }

  if (!!request.hasNeedEtag()) {
    body["NeedEtag"] = request.getNeedEtag();
  }

  if (!!request.hasNeedSign()) {
    body["NeedSign"] = request.getNeedSign();
  }

  if (!!request.hasOperationType()) {
    body["OperationType"] = request.getOperationType();
  }

  if (!!request.hasOptFuzzy()) {
    body["OptFuzzy"] = request.getOptFuzzy();
  }

  if (!!request.hasPageIndex()) {
    body["PageIndex"] = request.getPageIndex();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSysId()) {
    body["SysId"] = request.getSysId();
  }

  if (!!request.hasSysName()) {
    body["SysName"] = request.getSysName();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "QueryMgsApipage"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryMgsApipageResponse>();
}

/**
 * @param request QueryMgsApipageRequest
 * @return QueryMgsApipageResponse
 */
QueryMgsApipageResponse Client::queryMgsApipage(const QueryMgsApipageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryMgsApipageWithOptions(request, runtime);
}

/**
 * @param request QueryMgsApirestRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryMgsApirestResponse
 */
QueryMgsApirestResponse Client::queryMgsApirestWithOptions(const QueryMgsApirestRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasFormat()) {
    body["Format"] = request.getFormat();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "QueryMgsApirest"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryMgsApirestResponse>();
}

/**
 * @param request QueryMgsApirestRequest
 * @return QueryMgsApirestResponse
 */
QueryMgsApirestResponse Client::queryMgsApirest(const QueryMgsApirestRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryMgsApirestWithOptions(request, runtime);
}

/**
 * @param request QueryMgsTestreqbodyautogenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryMgsTestreqbodyautogenResponse
 */
QueryMgsTestreqbodyautogenResponse Client::queryMgsTestreqbodyautogenWithOptions(const QueryMgsTestreqbodyautogenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasFormat()) {
    body["Format"] = request.getFormat();
  }

  if (!!request.hasMpaasMappcenterMgsTestreqbodyautogenQueryJsonStr()) {
    body["MpaasMappcenterMgsTestreqbodyautogenQueryJsonStr"] = request.getMpaasMappcenterMgsTestreqbodyautogenQueryJsonStr();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "QueryMgsTestreqbodyautogen"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryMgsTestreqbodyautogenResponse>();
}

/**
 * @param request QueryMgsTestreqbodyautogenRequest
 * @return QueryMgsTestreqbodyautogenResponse
 */
QueryMgsTestreqbodyautogenResponse Client::queryMgsTestreqbodyautogen(const QueryMgsTestreqbodyautogenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryMgsTestreqbodyautogenWithOptions(request, runtime);
}

/**
 * @param request QueryMpsSchedulerListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryMpsSchedulerListResponse
 */
QueryMpsSchedulerListResponse Client::queryMpsSchedulerListWithOptions(const QueryMpsSchedulerListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.getEndTime();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.getStartTime();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
  }

  if (!!request.hasUniqueId()) {
    body["UniqueId"] = request.getUniqueId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "QueryMpsSchedulerList"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryMpsSchedulerListResponse>();
}

/**
 * @param request QueryMpsSchedulerListRequest
 * @return QueryMpsSchedulerListResponse
 */
QueryMpsSchedulerListResponse Client::queryMpsSchedulerList(const QueryMpsSchedulerListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryMpsSchedulerListWithOptions(request, runtime);
}

/**
 * @summary 查询风险信息
 *
 * @param request QueryMscpRiskInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryMscpRiskInfoResponse
 */
QueryMscpRiskInfoResponse Client::queryMscpRiskInfoWithOptions(const QueryMscpRiskInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasApdidToken()) {
    body["ApdidToken"] = request.getApdidToken();
  }

  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasTerminalType()) {
    body["TerminalType"] = request.getTerminalType();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "QueryMscpRiskInfo"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryMscpRiskInfoResponse>();
}

/**
 * @summary 查询风险信息
 *
 * @param request QueryMscpRiskInfoRequest
 * @return QueryMscpRiskInfoResponse
 */
QueryMscpRiskInfoResponse Client::queryMscpRiskInfo(const QueryMscpRiskInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryMscpRiskInfoWithOptions(request, runtime);
}

/**
 * @param request QueryPushAnalysisCoreIndexRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryPushAnalysisCoreIndexResponse
 */
QueryPushAnalysisCoreIndexResponse Client::queryPushAnalysisCoreIndexWithOptions(const QueryPushAnalysisCoreIndexRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasChannel()) {
    body["Channel"] = request.getChannel();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.getEndTime();
  }

  if (!!request.hasPlatform()) {
    body["Platform"] = request.getPlatform();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "QueryPushAnalysisCoreIndex"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryPushAnalysisCoreIndexResponse>();
}

/**
 * @param request QueryPushAnalysisCoreIndexRequest
 * @return QueryPushAnalysisCoreIndexResponse
 */
QueryPushAnalysisCoreIndexResponse Client::queryPushAnalysisCoreIndex(const QueryPushAnalysisCoreIndexRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryPushAnalysisCoreIndexWithOptions(request, runtime);
}

/**
 * @param request QueryPushAnalysisTaskDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryPushAnalysisTaskDetailResponse
 */
QueryPushAnalysisTaskDetailResponse Client::queryPushAnalysisTaskDetailWithOptions(const QueryPushAnalysisTaskDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "QueryPushAnalysisTaskDetail"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryPushAnalysisTaskDetailResponse>();
}

/**
 * @param request QueryPushAnalysisTaskDetailRequest
 * @return QueryPushAnalysisTaskDetailResponse
 */
QueryPushAnalysisTaskDetailResponse Client::queryPushAnalysisTaskDetail(const QueryPushAnalysisTaskDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryPushAnalysisTaskDetailWithOptions(request, runtime);
}

/**
 * @param request QueryPushAnalysisTaskListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryPushAnalysisTaskListResponse
 */
QueryPushAnalysisTaskListResponse Client::queryPushAnalysisTaskListWithOptions(const QueryPushAnalysisTaskListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTaskName()) {
    body["TaskName"] = request.getTaskName();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "QueryPushAnalysisTaskList"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryPushAnalysisTaskListResponse>();
}

/**
 * @param request QueryPushAnalysisTaskListRequest
 * @return QueryPushAnalysisTaskListResponse
 */
QueryPushAnalysisTaskListResponse Client::queryPushAnalysisTaskList(const QueryPushAnalysisTaskListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryPushAnalysisTaskListWithOptions(request, runtime);
}

/**
 * @param request QueryPushSchedulerListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryPushSchedulerListResponse
 */
QueryPushSchedulerListResponse Client::queryPushSchedulerListWithOptions(const QueryPushSchedulerListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.getEndTime();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
  }

  if (!!request.hasUniqueId()) {
    body["UniqueId"] = request.getUniqueId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "QueryPushSchedulerList"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryPushSchedulerListResponse>();
}

/**
 * @param request QueryPushSchedulerListRequest
 * @return QueryPushSchedulerListResponse
 */
QueryPushSchedulerListResponse Client::queryPushSchedulerList(const QueryPushSchedulerListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryPushSchedulerListWithOptions(request, runtime);
}

/**
 * @param request RevokePushMessageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RevokePushMessageResponse
 */
RevokePushMessageResponse Client::revokePushMessageWithOptions(const RevokePushMessageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasMessageId()) {
    body["MessageId"] = request.getMessageId();
  }

  if (!!request.hasTargetId()) {
    body["TargetId"] = request.getTargetId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RevokePushMessage"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RevokePushMessageResponse>();
}

/**
 * @param request RevokePushMessageRequest
 * @return RevokePushMessageResponse
 */
RevokePushMessageResponse Client::revokePushMessage(const RevokePushMessageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return revokePushMessageWithOptions(request, runtime);
}

/**
 * @param request RevokePushTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RevokePushTaskResponse
 */
RevokePushTaskResponse Client::revokePushTaskWithOptions(const RevokePushTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RevokePushTask"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RevokePushTaskResponse>();
}

/**
 * @param request RevokePushTaskRequest
 * @return RevokePushTaskResponse
 */
RevokePushTaskResponse Client::revokePushTask(const RevokePushTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return revokePushTaskWithOptions(request, runtime);
}

/**
 * @param request RunMsaDiffRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunMsaDiffResponse
 */
RunMsaDiffResponse Client::runMsaDiffWithOptions(const RunMsaDiffRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasMpaasMappcenterMsaDiffRunJsonStr()) {
    body["MpaasMappcenterMsaDiffRunJsonStr"] = request.getMpaasMappcenterMsaDiffRunJsonStr();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunMsaDiff"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunMsaDiffResponse>();
}

/**
 * @param request RunMsaDiffRequest
 * @return RunMsaDiffResponse
 */
RunMsaDiffResponse Client::runMsaDiff(const RunMsaDiffRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runMsaDiffWithOptions(request, runtime);
}

/**
 * @param request SaveMgsApirestRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveMgsApirestResponse
 */
SaveMgsApirestResponse Client::saveMgsApirestWithOptions(const SaveMgsApirestRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasMpaasMappcenterMgsApirestSaveJsonStr()) {
    body["MpaasMappcenterMgsApirestSaveJsonStr"] = request.getMpaasMappcenterMgsApirestSaveJsonStr();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SaveMgsApirest"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveMgsApirestResponse>();
}

/**
 * @param request SaveMgsApirestRequest
 * @return SaveMgsApirestResponse
 */
SaveMgsApirestResponse Client::saveMgsApirest(const SaveMgsApirestRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveMgsApirestWithOptions(request, runtime);
}

/**
 * @param request StartUserAppAsyncEnhanceInMsaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartUserAppAsyncEnhanceInMsaResponse
 */
StartUserAppAsyncEnhanceInMsaResponse Client::startUserAppAsyncEnhanceInMsaWithOptions(const StartUserAppAsyncEnhanceInMsaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNewShieldConfig()) {
    query["NewShieldConfig"] = request.getNewShieldConfig();
  }

  json body = {};
  if (!!request.hasApkProtector()) {
    body["ApkProtector"] = request.getApkProtector();
  }

  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasAssetsFileList()) {
    body["AssetsFileList"] = request.getAssetsFileList();
  }

  if (!!request.hasClasses()) {
    body["Classes"] = request.getClasses();
  }

  if (!!request.hasDalvikDebugger()) {
    body["DalvikDebugger"] = request.getDalvikDebugger();
  }

  if (!!request.hasEmulatorEnvironment()) {
    body["EmulatorEnvironment"] = request.getEmulatorEnvironment();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasJavaHook()) {
    body["JavaHook"] = request.getJavaHook();
  }

  if (!!request.hasMemoryDump()) {
    body["MemoryDump"] = request.getMemoryDump();
  }

  if (!!request.hasNativeDebugger()) {
    body["NativeDebugger"] = request.getNativeDebugger();
  }

  if (!!request.hasNativeHook()) {
    body["NativeHook"] = request.getNativeHook();
  }

  if (!!request.hasPackageTampered()) {
    body["PackageTampered"] = request.getPackageTampered();
  }

  if (!!request.hasRoot()) {
    body["Root"] = request.getRoot();
  }

  if (!!request.hasRunMode()) {
    body["RunMode"] = request.getRunMode();
  }

  if (!!request.hasSoFileList()) {
    body["SoFileList"] = request.getSoFileList();
  }

  if (!!request.hasTaskType()) {
    body["TaskType"] = request.getTaskType();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasTotalSwitch()) {
    body["TotalSwitch"] = request.getTotalSwitch();
  }

  if (!!request.hasUseAShield()) {
    body["UseAShield"] = request.getUseAShield();
  }

  if (!!request.hasUseYShield()) {
    body["UseYShield"] = request.getUseYShield();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "StartUserAppAsyncEnhanceInMsa"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartUserAppAsyncEnhanceInMsaResponse>();
}

/**
 * @param request StartUserAppAsyncEnhanceInMsaRequest
 * @return StartUserAppAsyncEnhanceInMsaResponse
 */
StartUserAppAsyncEnhanceInMsaResponse Client::startUserAppAsyncEnhanceInMsa(const StartUserAppAsyncEnhanceInMsaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startUserAppAsyncEnhanceInMsaWithOptions(request, runtime);
}

/**
 * @summary 更新短链
 *
 * @param request UpdateLinkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateLinkResponse
 */
UpdateLinkResponse Client::updateLinkWithOptions(const UpdateLinkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasCors()) {
    body["Cors"] = request.getCors();
  }

  if (!!request.hasDomain()) {
    body["Domain"] = request.getDomain();
  }

  if (!!request.hasDynamicfield()) {
    body["Dynamicfield"] = request.getDynamicfield();
  }

  if (!!request.hasTargetUrl()) {
    body["TargetUrl"] = request.getTargetUrl();
  }

  if (!!request.hasUrl()) {
    body["Url"] = request.getUrl();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateLink"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateLinkResponse>();
}

/**
 * @summary 更新短链
 *
 * @param request UpdateLinkRequest
 * @return UpdateLinkResponse
 */
UpdateLinkResponse Client::updateLink(const UpdateLinkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateLinkWithOptions(request, runtime);
}

/**
 * @summary 更新热修复发布任务状态
 *
 * @param request UpdateMcubeHotpatchTaskStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMcubeHotpatchTaskStatusResponse
 */
UpdateMcubeHotpatchTaskStatusResponse Client::updateMcubeHotpatchTaskStatusWithOptions(const UpdateMcubeHotpatchTaskStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasBizType()) {
    body["BizType"] = request.getBizType();
  }

  if (!!request.hasPackageId()) {
    body["PackageId"] = request.getPackageId();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTaskStatus()) {
    body["TaskStatus"] = request.getTaskStatus();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateMcubeHotpatchTaskStatus"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMcubeHotpatchTaskStatusResponse>();
}

/**
 * @summary 更新热修复发布任务状态
 *
 * @param request UpdateMcubeHotpatchTaskStatusRequest
 * @return UpdateMcubeHotpatchTaskStatusResponse
 */
UpdateMcubeHotpatchTaskStatusResponse Client::updateMcubeHotpatchTaskStatus(const UpdateMcubeHotpatchTaskStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateMcubeHotpatchTaskStatusWithOptions(request, runtime);
}

/**
 * @param request UpdateMcubeWhitelistRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMcubeWhitelistResponse
 */
UpdateMcubeWhitelistResponse Client::updateMcubeWhitelistWithOptions(const UpdateMcubeWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasKeyIds()) {
    body["KeyIds"] = request.getKeyIds();
  }

  if (!!request.hasOnexFlag()) {
    body["OnexFlag"] = request.getOnexFlag();
  }

  if (!!request.hasOssUrl()) {
    body["OssUrl"] = request.getOssUrl();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateMcubeWhitelist"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMcubeWhitelistResponse>();
}

/**
 * @param request UpdateMcubeWhitelistRequest
 * @return UpdateMcubeWhitelistResponse
 */
UpdateMcubeWhitelistResponse Client::updateMcubeWhitelist(const UpdateMcubeWhitelistRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateMcubeWhitelistWithOptions(request, runtime);
}

/**
 * @param request UpdateMdsCubeResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMdsCubeResourceResponse
 */
UpdateMdsCubeResourceResponse Client::updateMdsCubeResourceWithOptions(const UpdateMdsCubeResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasMockDataUrl()) {
    body["MockDataUrl"] = request.getMockDataUrl();
  }

  if (!!request.hasOnexFlag()) {
    body["OnexFlag"] = request.getOnexFlag();
  }

  if (!!request.hasTemplateResourceId()) {
    body["TemplateResourceId"] = request.getTemplateResourceId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateMdsCubeResource"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMdsCubeResourceResponse>();
}

/**
 * @param request UpdateMdsCubeResourceRequest
 * @return UpdateMdsCubeResourceResponse
 */
UpdateMdsCubeResourceResponse Client::updateMdsCubeResource(const UpdateMdsCubeResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateMdsCubeResourceWithOptions(request, runtime);
}

/**
 * @param request UpdateMpaasAppInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMpaasAppInfoResponse
 */
UpdateMpaasAppInfoResponse Client::updateMpaasAppInfoWithOptions(const UpdateMpaasAppInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasIconFileUrl()) {
    body["IconFileUrl"] = request.getIconFileUrl();
  }

  if (!!request.hasIdentifier()) {
    body["Identifier"] = request.getIdentifier();
  }

  if (!!request.hasOnexFlag()) {
    body["OnexFlag"] = request.getOnexFlag();
  }

  if (!!request.hasSystemType()) {
    body["SystemType"] = request.getSystemType();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateMpaasAppInfo"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMpaasAppInfoResponse>();
}

/**
 * @param request UpdateMpaasAppInfoRequest
 * @return UpdateMpaasAppInfoResponse
 */
UpdateMpaasAppInfoResponse Client::updateMpaasAppInfo(const UpdateMpaasAppInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateMpaasAppInfoWithOptions(request, runtime);
}

/**
 * @summary 上传字节码到msa进行加固
 *
 * @param request UploadBitcodeToMsaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UploadBitcodeToMsaResponse
 */
UploadBitcodeToMsaResponse Client::uploadBitcodeToMsaWithOptions(const UploadBitcodeToMsaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasBitcode()) {
    body["Bitcode"] = request.getBitcode();
  }

  if (!!request.hasCodeVersion()) {
    body["CodeVersion"] = request.getCodeVersion();
  }

  if (!!request.hasLicense()) {
    body["License"] = request.getLicense();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UploadBitcodeToMsa"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UploadBitcodeToMsaResponse>();
}

/**
 * @summary 上传字节码到msa进行加固
 *
 * @param request UploadBitcodeToMsaRequest
 * @return UploadBitcodeToMsaResponse
 */
UploadBitcodeToMsaResponse Client::uploadBitcodeToMsa(const UploadBitcodeToMsaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uploadBitcodeToMsaWithOptions(request, runtime);
}

/**
 * @param request UploadMcubeMiniPackageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UploadMcubeMiniPackageResponse
 */
UploadMcubeMiniPackageResponse Client::uploadMcubeMiniPackageWithOptions(const UploadMcubeMiniPackageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasAutoInstall()) {
    body["AutoInstall"] = request.getAutoInstall();
  }

  if (!!request.hasClientVersionMax()) {
    body["ClientVersionMax"] = request.getClientVersionMax();
  }

  if (!!request.hasClientVersionMin()) {
    body["ClientVersionMin"] = request.getClientVersionMin();
  }

  if (!!request.hasEnableKeepAlive()) {
    body["EnableKeepAlive"] = request.getEnableKeepAlive();
  }

  if (!!request.hasEnableOptionMenu()) {
    body["EnableOptionMenu"] = request.getEnableOptionMenu();
  }

  if (!!request.hasEnableTabBar()) {
    body["EnableTabBar"] = request.getEnableTabBar();
  }

  if (!!request.hasExtendInfo()) {
    body["ExtendInfo"] = request.getExtendInfo();
  }

  if (!!request.hasH5Id()) {
    body["H5Id"] = request.getH5Id();
  }

  if (!!request.hasH5Name()) {
    body["H5Name"] = request.getH5Name();
  }

  if (!!request.hasH5Version()) {
    body["H5Version"] = request.getH5Version();
  }

  if (!!request.hasIconFileUrl()) {
    body["IconFileUrl"] = request.getIconFileUrl();
  }

  if (!!request.hasIconUrl()) {
    body["IconUrl"] = request.getIconUrl();
  }

  if (!!request.hasInstallType()) {
    body["InstallType"] = request.getInstallType();
  }

  if (!!request.hasMainUrl()) {
    body["MainUrl"] = request.getMainUrl();
  }

  if (!!request.hasOnexFlag()) {
    body["OnexFlag"] = request.getOnexFlag();
  }

  if (!!request.hasPackageType()) {
    body["PackageType"] = request.getPackageType();
  }

  if (!!request.hasPlatform()) {
    body["Platform"] = request.getPlatform();
  }

  if (!!request.hasResourceFileUrl()) {
    body["ResourceFileUrl"] = request.getResourceFileUrl();
  }

  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasUserId()) {
    body["UserId"] = request.getUserId();
  }

  if (!!request.hasUuid()) {
    body["Uuid"] = request.getUuid();
  }

  if (!!request.hasVhost()) {
    body["Vhost"] = request.getVhost();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UploadMcubeMiniPackage"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UploadMcubeMiniPackageResponse>();
}

/**
 * @param request UploadMcubeMiniPackageRequest
 * @return UploadMcubeMiniPackageResponse
 */
UploadMcubeMiniPackageResponse Client::uploadMcubeMiniPackage(const UploadMcubeMiniPackageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uploadMcubeMiniPackageWithOptions(request, runtime);
}

/**
 * @param request UploadMcubeRsaKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UploadMcubeRsaKeyResponse
 */
UploadMcubeRsaKeyResponse Client::uploadMcubeRsaKeyWithOptions(const UploadMcubeRsaKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasFileUrl()) {
    body["FileUrl"] = request.getFileUrl();
  }

  if (!!request.hasOnexFlag()) {
    body["OnexFlag"] = request.getOnexFlag();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UploadMcubeRsaKey"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UploadMcubeRsaKeyResponse>();
}

/**
 * @param request UploadMcubeRsaKeyRequest
 * @return UploadMcubeRsaKeyResponse
 */
UploadMcubeRsaKeyResponse Client::uploadMcubeRsaKey(const UploadMcubeRsaKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uploadMcubeRsaKeyWithOptions(request, runtime);
}

/**
 * @param request UploadUserAppToMsaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UploadUserAppToMsaResponse
 */
UploadUserAppToMsaResponse Client::uploadUserAppToMsaWithOptions(const UploadUserAppToMsaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasFileName()) {
    body["FileName"] = request.getFileName();
  }

  if (!!request.hasFileUrl()) {
    body["FileUrl"] = request.getFileUrl();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasUseYShield()) {
    body["UseYShield"] = request.getUseYShield();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UploadUserAppToMsa"},
    {"version" , "2020-10-28"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UploadUserAppToMsaResponse>();
}

/**
 * @param request UploadUserAppToMsaRequest
 * @return UploadUserAppToMsaResponse
 */
UploadUserAppToMsaResponse Client::uploadUserAppToMsa(const UploadUserAppToMsaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uploadUserAppToMsaWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace MPaaS20201028