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
    body["AppId"] = request.appId();
  }

  if (!!request.hasMpaasMappcenterMiniConfigAddJsonStr()) {
    body["MpaasMappcenterMiniConfigAddJsonStr"] = request.mpaasMappcenterMiniConfigAddJsonStr();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasType()) {
    body["Type"] = request.type();
  }

  if (!!request.hasUniqueIds()) {
    body["UniqueIds"] = request.uniqueIds();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasBizType()) {
    body["BizType"] = request.bizType();
  }

  if (!!request.hasPackageId()) {
    body["PackageId"] = request.packageId();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.taskId();
  }

  if (!!request.hasTaskStatus()) {
    body["TaskStatus"] = request.taskStatus();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasBizType()) {
    body["BizType"] = request.bizType();
  }

  if (!!request.hasPackageId()) {
    body["PackageId"] = request.packageId();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.taskId();
  }

  if (!!request.hasTaskStatus()) {
    body["TaskStatus"] = request.taskStatus();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.taskId();
  }

  if (!!request.hasTaskStatus()) {
    body["TaskStatus"] = request.taskStatus();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasTaskStatus()) {
    body["TaskStatus"] = request.taskStatus();
  }

  if (!!request.hasTemplateResourceId()) {
    body["TemplateResourceId"] = request.templateResourceId();
  }

  if (!!request.hasTemplateTaskId()) {
    body["TemplateTaskId"] = request.templateTaskId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasMpaasMappcenterMcdpGroupCopyJsonStr()) {
    body["MpaasMappcenterMcdpGroupCopyJsonStr"] = request.mpaasMappcenterMcdpGroupCopyJsonStr();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasCors()) {
    body["Cors"] = request.cors();
  }

  if (!!request.hasDomain()) {
    body["Domain"] = request.domain();
  }

  if (!!request.hasDynamicfield()) {
    body["Dynamicfield"] = request.dynamicfield();
  }

  if (!!request.hasTargetUrl()) {
    body["TargetUrl"] = request.targetUrl();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasMpaasMappcenterMcdpGroupCreateJsonStr()) {
    body["MpaasMappcenterMcdpGroupCreateJsonStr"] = request.mpaasMappcenterMcdpGroupCreateJsonStr();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasMpaasMappcenterMcdpMaterialCreateJsonStr()) {
    body["MpaasMappcenterMcdpMaterialCreateJsonStr"] = request.mpaasMappcenterMcdpMaterialCreateJsonStr();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasMpaasMappcenterMcdpZoneCreateJsonStr()) {
    body["MpaasMappcenterMcdpZoneCreateJsonStr"] = request.mpaasMappcenterMcdpZoneCreateJsonStr();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
 * @param request CreateMcubeMiniAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMcubeMiniAppResponse
 */
CreateMcubeMiniAppResponse Client::createMcubeMiniAppWithOptions(const CreateMcubeMiniAppRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.appId();
  }

  if (!!request.hasH5Id()) {
    body["H5Id"] = request.h5Id();
  }

  if (!!request.hasH5Name()) {
    body["H5Name"] = request.h5Name();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasGreyConfigInfo()) {
    body["GreyConfigInfo"] = request.greyConfigInfo();
  }

  if (!!request.hasGreyEndtimeData()) {
    body["GreyEndtimeData"] = request.greyEndtimeData();
  }

  if (!!request.hasGreyNum()) {
    body["GreyNum"] = request.greyNum();
  }

  if (!!request.hasMemo()) {
    body["Memo"] = request.memo();
  }

  if (!!request.hasPackageId()) {
    body["PackageId"] = request.packageId();
  }

  if (!!request.hasPublishMode()) {
    body["PublishMode"] = request.publishMode();
  }

  if (!!request.hasPublishType()) {
    body["PublishType"] = request.publishType();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWhitelistIds()) {
    body["WhitelistIds"] = request.whitelistIds();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasH5Id()) {
    body["H5Id"] = request.h5Id();
  }

  if (!!request.hasH5Name()) {
    body["H5Name"] = request.h5Name();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasAutoInstall()) {
    body["AutoInstall"] = request.autoInstall();
  }

  if (!!request.hasClientVersionMax()) {
    body["ClientVersionMax"] = request.clientVersionMax();
  }

  if (!!request.hasClientVersionMin()) {
    body["ClientVersionMin"] = request.clientVersionMin();
  }

  if (!!request.hasCustomDomainName()) {
    body["CustomDomainName"] = request.customDomainName();
  }

  if (!!request.hasExtendInfo()) {
    body["ExtendInfo"] = request.extendInfo();
  }

  if (!!request.hasFileUrl()) {
    body["FileUrl"] = request.fileUrl();
  }

  if (!!request.hasH5Id()) {
    body["H5Id"] = request.h5Id();
  }

  if (!!request.hasH5Name()) {
    body["H5Name"] = request.h5Name();
  }

  if (!!request.hasH5Version()) {
    body["H5Version"] = request.h5Version();
  }

  if (!!request.hasInstallType()) {
    body["InstallType"] = request.installType();
  }

  if (!!request.hasMainUrl()) {
    body["MainUrl"] = request.mainUrl();
  }

  if (!!request.hasOnexFlag()) {
    body["OnexFlag"] = request.onexFlag();
  }

  if (!!request.hasPlatform()) {
    body["Platform"] = request.platform();
  }

  if (!!request.hasRepeatNebula()) {
    body["RepeatNebula"] = request.repeatNebula();
  }

  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.resourceType();
  }

  if (!!request.hasSubUrl()) {
    body["SubUrl"] = request.subUrl();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasVhost()) {
    body["Vhost"] = request.vhost();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppCode"] = request.appCode();
  }

  if (!!request.hasAppId()) {
    body["AppId"] = request.appId();
  }

  if (!!request.hasBizType()) {
    body["BizType"] = request.bizType();
  }

  if (!!request.hasCreator()) {
    body["Creator"] = request.creator();
  }

  if (!!request.hasGmtCreate()) {
    body["GmtCreate"] = request.gmtCreate();
  }

  if (!!request.hasGmtModified()) {
    body["GmtModified"] = request.gmtModified();
  }

  if (!!request.hasGmtModifiedStr()) {
    body["GmtModifiedStr"] = request.gmtModifiedStr();
  }

  if (!!request.hasGreyConfigInfo()) {
    body["GreyConfigInfo"] = request.greyConfigInfo();
  }

  if (!!request.hasGreyEndtime()) {
    body["GreyEndtime"] = request.greyEndtime();
  }

  if (!!request.hasGreyEndtimeData()) {
    body["GreyEndtimeData"] = request.greyEndtimeData();
  }

  if (!!request.hasGreyEndtimeStr()) {
    body["GreyEndtimeStr"] = request.greyEndtimeStr();
  }

  if (!!request.hasGreyNum()) {
    body["GreyNum"] = request.greyNum();
  }

  if (!!request.hasGreyUrl()) {
    body["GreyUrl"] = request.greyUrl();
  }

  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  if (!!request.hasMemo()) {
    body["Memo"] = request.memo();
  }

  if (!!request.hasModifier()) {
    body["Modifier"] = request.modifier();
  }

  if (!!request.hasPackageId()) {
    body["PackageId"] = request.packageId();
  }

  if (!!request.hasPercent()) {
    body["Percent"] = request.percent();
  }

  if (!!request.hasPlatform()) {
    body["Platform"] = request.platform();
  }

  if (!!request.hasProductId()) {
    body["ProductId"] = request.productId();
  }

  if (!!request.hasProductVersion()) {
    body["ProductVersion"] = request.productVersion();
  }

  if (!!request.hasPublishMode()) {
    body["PublishMode"] = request.publishMode();
  }

  if (!!request.hasPublishType()) {
    body["PublishType"] = request.publishType();
  }

  if (!!request.hasReleaseVersion()) {
    body["ReleaseVersion"] = request.releaseVersion();
  }

  if (!!request.hasResIds()) {
    body["ResIds"] = request.resIds();
  }

  if (!!request.hasSerialVersionUID()) {
    body["SerialVersionUID"] = request.serialVersionUID();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.status();
  }

  if (!!request.hasSyncMode()) {
    body["SyncMode"] = request.syncMode();
  }

  if (!!request.hasSyncResult()) {
    body["SyncResult"] = request.syncResult();
  }

  if (!!request.hasTaskName()) {
    body["TaskName"] = request.taskName();
  }

  if (!!request.hasTaskStatus()) {
    body["TaskStatus"] = request.taskStatus();
  }

  if (!!request.hasTaskType()) {
    body["TaskType"] = request.taskType();
  }

  if (!!request.hasTaskVersion()) {
    body["TaskVersion"] = request.taskVersion();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasUpgradeNoticeNum()) {
    body["UpgradeNoticeNum"] = request.upgradeNoticeNum();
  }

  if (!!request.hasUpgradeProgress()) {
    body["UpgradeProgress"] = request.upgradeProgress();
  }

  if (!!request.hasWhitelistIds()) {
    body["WhitelistIds"] = request.whitelistIds();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasAppVersion()) {
    body["AppVersion"] = request.appVersion();
  }

  if (!!request.hasAppstoreUrl()) {
    body["AppstoreUrl"] = request.appstoreUrl();
  }

  if (!!request.hasBundleId()) {
    body["BundleId"] = request.bundleId();
  }

  if (!!request.hasCustomDomainName()) {
    body["CustomDomainName"] = request.customDomainName();
  }

  if (!!request.hasDesc()) {
    body["Desc"] = request.desc();
  }

  if (!!request.hasDownloadUrl()) {
    body["DownloadUrl"] = request.downloadUrl();
  }

  if (!!request.hasFileUrl()) {
    body["FileUrl"] = request.fileUrl();
  }

  if (!!request.hasHarmonyLabel()) {
    body["HarmonyLabel"] = request.harmonyLabel();
  }

  if (!!request.hasIconFileUrl()) {
    body["IconFileUrl"] = request.iconFileUrl();
  }

  if (!!request.hasInstallAmount()) {
    body["InstallAmount"] = request.installAmount();
  }

  if (!!request.hasIosSymbolfileUrl()) {
    body["IosSymbolfileUrl"] = request.iosSymbolfileUrl();
  }

  if (!!request.hasIsEnterprise()) {
    body["IsEnterprise"] = request.isEnterprise();
  }

  if (!!request.hasLargeIconUrl()) {
    body["LargeIconUrl"] = request.largeIconUrl();
  }

  if (!!request.hasNeedCheck()) {
    body["NeedCheck"] = request.needCheck();
  }

  if (!!request.hasOnexFlag()) {
    body["OnexFlag"] = request.onexFlag();
  }

  if (!!request.hasPlatform()) {
    body["Platform"] = request.platform();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasValidDays()) {
    body["ValidDays"] = request.validDays();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasGreyConfigInfo()) {
    body["GreyConfigInfo"] = request.greyConfigInfo();
  }

  if (!!request.hasGreyEndtimeData()) {
    body["GreyEndtimeData"] = request.greyEndtimeData();
  }

  if (!!request.hasGreyNum()) {
    body["GreyNum"] = request.greyNum();
  }

  if (!!request.hasHistoryForce()) {
    body["HistoryForce"] = request.historyForce();
  }

  if (!!request.hasMemo()) {
    body["Memo"] = request.memo();
  }

  if (!!request.hasPackageInfoId()) {
    body["PackageInfoId"] = request.packageInfoId();
  }

  if (!!request.hasPublishMode()) {
    body["PublishMode"] = request.publishMode();
  }

  if (!!request.hasPublishType()) {
    body["PublishType"] = request.publishType();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasUpgradeContent()) {
    body["UpgradeContent"] = request.upgradeContent();
  }

  if (!!request.hasUpgradeType()) {
    body["UpgradeType"] = request.upgradeType();
  }

  if (!!request.hasWhitelistIds()) {
    body["WhitelistIds"] = request.whitelistIds();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasVhost()) {
    body["Vhost"] = request.vhost();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWhiteListName()) {
    body["WhiteListName"] = request.whiteListName();
  }

  if (!!request.hasWhitelistType()) {
    body["WhitelistType"] = request.whitelistType();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasUserId()) {
    body["UserId"] = request.userId();
  }

  if (!!request.hasWhitelistValue()) {
    body["WhitelistValue"] = request.whitelistValue();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AndroidMaxVersion"] = request.androidMaxVersion();
  }

  if (!!request.hasAndroidMinVersion()) {
    body["AndroidMinVersion"] = request.androidMinVersion();
  }

  if (!!request.hasAppId()) {
    body["AppId"] = request.appId();
  }

  if (!!request.hasExtendInfo()) {
    body["ExtendInfo"] = request.extendInfo();
  }

  if (!!request.hasFileUrl()) {
    body["FileUrl"] = request.fileUrl();
  }

  if (!!request.hasIosMaxVersion()) {
    body["IosMaxVersion"] = request.iosMaxVersion();
  }

  if (!!request.hasIosMinVersion()) {
    body["IosMinVersion"] = request.iosMinVersion();
  }

  if (!!request.hasMockDataUrl()) {
    body["MockDataUrl"] = request.mockDataUrl();
  }

  if (!!request.hasOnexFlag()) {
    body["OnexFlag"] = request.onexFlag();
  }

  if (!!request.hasPlatform()) {
    body["Platform"] = request.platform();
  }

  if (!!request.hasPreviewPictureUrl()) {
    body["PreviewPictureUrl"] = request.previewPictureUrl();
  }

  if (!!request.hasTemplateId()) {
    body["TemplateId"] = request.templateId();
  }

  if (!!request.hasTemplateResourceDesc()) {
    body["TemplateResourceDesc"] = request.templateResourceDesc();
  }

  if (!!request.hasTemplateResourceVersion()) {
    body["TemplateResourceVersion"] = request.templateResourceVersion();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasGreyConfigInfo()) {
    body["GreyConfigInfo"] = request.greyConfigInfo();
  }

  if (!!request.hasGreyEndtimeData()) {
    body["GreyEndtimeData"] = request.greyEndtimeData();
  }

  if (!!request.hasGreyNum()) {
    body["GreyNum"] = request.greyNum();
  }

  if (!!request.hasPublishMode()) {
    body["PublishMode"] = request.publishMode();
  }

  if (!!request.hasPublishType()) {
    body["PublishType"] = request.publishType();
  }

  if (!!request.hasTaskDesc()) {
    body["TaskDesc"] = request.taskDesc();
  }

  if (!!request.hasTemplateResourceId()) {
    body["TemplateResourceId"] = request.templateResourceId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWhitelistIds()) {
    body["WhitelistIds"] = request.whitelistIds();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasTemplateDesc()) {
    body["TemplateDesc"] = request.templateDesc();
  }

  if (!!request.hasTemplateId()) {
    body["TemplateId"] = request.templateId();
  }

  if (!!request.hasTemplateName()) {
    body["TemplateName"] = request.templateName();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasGreyConfigInfo()) {
    body["GreyConfigInfo"] = request.greyConfigInfo();
  }

  if (!!request.hasGreyEndtimeData()) {
    body["GreyEndtimeData"] = request.greyEndtimeData();
  }

  if (!!request.hasGreyNum()) {
    body["GreyNum"] = request.greyNum();
  }

  if (!!request.hasH5Id()) {
    body["H5Id"] = request.h5Id();
  }

  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  if (!!request.hasMemo()) {
    body["Memo"] = request.memo();
  }

  if (!!request.hasPackageId()) {
    body["PackageId"] = request.packageId();
  }

  if (!!request.hasPublishMode()) {
    body["PublishMode"] = request.publishMode();
  }

  if (!!request.hasPublishType()) {
    body["PublishType"] = request.publishType();
  }

  if (!!request.hasSyncMode()) {
    body["SyncMode"] = request.syncMode();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWhitelistIds()) {
    body["WhitelistIds"] = request.whitelistIds();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasAppMaxVersion()) {
    body["AppMaxVersion"] = request.appMaxVersion();
  }

  if (!!request.hasAppMinVersion()) {
    body["AppMinVersion"] = request.appMinVersion();
  }

  if (!!request.hasBizType()) {
    body["BizType"] = request.bizType();
  }

  if (!!request.hasExtAttrStr()) {
    body["ExtAttrStr"] = request.extAttrStr();
  }

  if (!!request.hasMaxUid()) {
    body["MaxUid"] = request.maxUid();
  }

  if (!!request.hasMinUid()) {
    body["MinUid"] = request.minUid();
  }

  if (!!request.hasOsType()) {
    body["OsType"] = request.osType();
  }

  if (!!request.hasPayload()) {
    body["Payload"] = request.payload();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasThirdMsgId()) {
    body["ThirdMsgId"] = request.thirdMsgId();
  }

  if (!!request.hasUids()) {
    body["Uids"] = request.uids();
  }

  if (!!request.hasValidTimeEnd()) {
    body["ValidTimeEnd"] = request.validTimeEnd();
  }

  if (!!request.hasValidTimeStart()) {
    body["ValidTimeStart"] = request.validTimeStart();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasAppMaxVersion()) {
    body["AppMaxVersion"] = request.appMaxVersion();
  }

  if (!!request.hasAppMinVersion()) {
    body["AppMinVersion"] = request.appMinVersion();
  }

  if (!!request.hasBizType()) {
    body["BizType"] = request.bizType();
  }

  if (!!request.hasCheckOnline()) {
    body["CheckOnline"] = request.checkOnline();
  }

  if (!!request.hasExtAttrStr()) {
    body["ExtAttrStr"] = request.extAttrStr();
  }

  if (!!request.hasLinkToken()) {
    body["LinkToken"] = request.linkToken();
  }

  if (!!request.hasOsType()) {
    body["OsType"] = request.osType();
  }

  if (!!request.hasPayload()) {
    body["Payload"] = request.payload();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasThirdMsgId()) {
    body["ThirdMsgId"] = request.thirdMsgId();
  }

  if (!!request.hasValidTimeEnd()) {
    body["ValidTimeEnd"] = request.validTimeEnd();
  }

  if (!!request.hasValidTimeStart()) {
    body["ValidTimeStart"] = request.validTimeStart();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasContent()) {
    body["Content"] = request.content();
  }

  if (!!request.hasDescInfo()) {
    body["DescInfo"] = request.descInfo();
  }

  if (!!request.hasIconUrls()) {
    body["IconUrls"] = request.iconUrls();
  }

  if (!!request.hasImageUrls()) {
    body["ImageUrls"] = request.imageUrls();
  }

  if (!!request.hasJumpAction()) {
    body["JumpAction"] = request.jumpAction();
  }

  if (!!request.hasPushStyle()) {
    body["PushStyle"] = request.pushStyle();
  }

  if (!!request.hasShowStyle()) {
    body["ShowStyle"] = request.showStyle();
  }

  if (!!request.hasTemplateName()) {
    body["TemplateName"] = request.templateName();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasTitle()) {
    body["Title"] = request.title();
  }

  if (!!request.hasUri()) {
    body["Uri"] = request.uri();
  }

  if (!!request.hasVariables()) {
    body["Variables"] = request.variables();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWhitelistId()) {
    body["WhitelistId"] = request.whitelistId();
  }

  if (!!request.hasWhitelistValue()) {
    body["WhitelistValue"] = request.whitelistValue();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasMpaasMappcenterMcdpAimDeleteJsonStr()) {
    body["MpaasMappcenterMcdpAimDeleteJsonStr"] = request.mpaasMappcenterMcdpAimDeleteJsonStr();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasMpaasMappcenterMcdpCrowdDeleteJsonStr()) {
    body["MpaasMappcenterMcdpCrowdDeleteJsonStr"] = request.mpaasMappcenterMcdpCrowdDeleteJsonStr();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasMpaasMappcenterMcdpZoneDeleteJsonStr()) {
    body["MpaasMappcenterMcdpZoneDeleteJsonStr"] = request.mpaasMappcenterMcdpZoneDeleteJsonStr();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
 * @param request DeleteMcubeMiniAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMcubeMiniAppResponse
 */
DeleteMcubeMiniAppResponse Client::deleteMcubeMiniAppWithOptions(const DeleteMcubeMiniAppRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.appId();
  }

  if (!!request.hasH5Id()) {
    body["H5Id"] = request.h5Id();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasH5Id()) {
    body["H5Id"] = request.h5Id();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  if (!!request.hasPlatform()) {
    body["Platform"] = request.platform();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasTemplateId()) {
    body["TemplateId"] = request.templateId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWhitelistId()) {
    body["WhitelistId"] = request.whitelistId();
  }

  if (!!request.hasWhitelistValue()) {
    body["WhitelistValue"] = request.whitelistValue();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasTemplateId()) {
    body["TemplateId"] = request.templateId();
  }

  if (!!request.hasTemplateName()) {
    body["TemplateName"] = request.templateName();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["ApkFileUrl"] = request.apkFileUrl();
  }

  if (!!request.hasAppId()) {
    body["AppId"] = request.appId();
  }

  if (!!request.hasCertRsaBase64()) {
    body["CertRsaBase64"] = request.certRsaBase64();
  }

  if (!!request.hasIdentifier()) {
    body["Identifier"] = request.identifier();
  }

  if (!!request.hasOnexFlag()) {
    body["OnexFlag"] = request.onexFlag();
  }

  if (!!request.hasSystemType()) {
    body["SystemType"] = request.systemType();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasOnexFlag()) {
    body["OnexFlag"] = request.onexFlag();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
 * @param request GetLogUrlInMsaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLogUrlInMsaResponse
 */
GetLogUrlInMsaResponse Client::getLogUrlInMsaWithOptions(const GetLogUrlInMsaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.appId();
  }

  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasOnexFlag()) {
    body["OnexFlag"] = request.onexFlag();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.taskId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasPackageId()) {
    body["PackageId"] = request.packageId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.taskId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasH5Id()) {
    body["H5Id"] = request.h5Id();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasTemplateId()) {
    body["TemplateId"] = request.templateId();
  }

  if (!!request.hasTemplateName()) {
    body["TemplateName"] = request.templateName();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasChannel()) {
    body["Channel"] = request.channel();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.endTime();
  }

  if (!!request.hasPlatform()) {
    body["Platform"] = request.platform();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.startTime();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.taskId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasType()) {
    body["Type"] = request.type();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasEmptyTag()) {
    body["EmptyTag"] = request.emptyTag();
  }

  if (!!request.hasKeyword()) {
    body["Keyword"] = request.keyword();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasPageNo()) {
    body["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasSort()) {
    body["Sort"] = request.sort();
  }

  if (!!request.hasSortField()) {
    body["SortField"] = request.sortField();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasType()) {
    body["Type"] = request.type();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
 * @param request ListMcubeMiniAppsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMcubeMiniAppsResponse
 */
ListMcubeMiniAppsResponse Client::listMcubeMiniAppsWithOptions(const ListMcubeMiniAppsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.appId();
  }

  if (!!request.hasKeyword()) {
    body["Keyword"] = request.keyword();
  }

  if (!!request.hasPageNum()) {
    body["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasH5Id()) {
    body["H5Id"] = request.h5Id();
  }

  if (!!request.hasPackageTypes()) {
    body["PackageTypes"] = request.packageTypes();
  }

  if (!!request.hasPageNum()) {
    body["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasKeyword()) {
    body["Keyword"] = request.keyword();
  }

  if (!!request.hasPageNum()) {
    body["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasH5Id()) {
    body["H5Id"] = request.h5Id();
  }

  if (!!request.hasPageNum()) {
    body["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasPageNum()) {
    body["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasPackageId()) {
    body["PackageId"] = request.packageId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasPageNum()) {
    body["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWhitelistName()) {
    body["WhitelistName"] = request.whitelistName();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasPageNum()) {
    body["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasTemplateId()) {
    body["TemplateId"] = request.templateId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
  }

  if (!!request.hasTest()) {
    body["test"] = request.test();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasPageNum()) {
    body["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasTemplateResourceId()) {
    body["TemplateResourceId"] = request.templateResourceId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasKeyword()) {
    body["Keyword"] = request.keyword();
  }

  if (!!request.hasPageNum()) {
    body["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["ApiStatus"] = request.apiStatus();
  }

  if (!!request.hasApiType()) {
    body["ApiType"] = request.apiType();
  }

  if (!!request.hasAppId()) {
    body["AppId"] = request.appId();
  }

  if (!!request.hasFormat()) {
    body["Format"] = request.format();
  }

  if (!!request.hasHost()) {
    body["Host"] = request.host();
  }

  if (!!request.hasNeedEncrypt()) {
    body["NeedEncrypt"] = request.needEncrypt();
  }

  if (!!request.hasNeedEtag()) {
    body["NeedEtag"] = request.needEtag();
  }

  if (!!request.hasNeedSign()) {
    body["NeedSign"] = request.needSign();
  }

  if (!!request.hasOperationType()) {
    body["OperationType"] = request.operationType();
  }

  if (!!request.hasOptFuzzy()) {
    body["OptFuzzy"] = request.optFuzzy();
  }

  if (!!request.hasPageIndex()) {
    body["PageIndex"] = request.pageIndex();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasSysId()) {
    body["SysId"] = request.sysId();
  }

  if (!!request.hasSysName()) {
    body["SysName"] = request.sysName();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasCurrentPage()) {
    body["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasImageRaw()) {
    body["ImageRaw"] = request.imageRaw();
  }

  if (!!request.hasMask()) {
    body["Mask"] = request.mask();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasType()) {
    body["Type"] = request.type();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasDeliveryToken()) {
    body["DeliveryToken"] = request.deliveryToken();
  }

  if (!!request.hasOsType()) {
    body["OsType"] = request.osType();
  }

  if (!!request.hasPhoneNumber()) {
    body["PhoneNumber"] = request.phoneNumber();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasUserId()) {
    body["UserId"] = request.userId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    request.setNotifyLevelShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.notifyLevel(), "NotifyLevel", "json"));
  }

  if (!!tmpReq.hasThirdChannelCategory()) {
    request.setThirdChannelCategoryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.thirdChannelCategory(), "ThirdChannelCategory", "json"));
  }

  json body = {};
  if (!!request.hasAndroidChannel()) {
    body["AndroidChannel"] = request.androidChannel();
  }

  if (!!request.hasAppId()) {
    body["AppId"] = request.appId();
  }

  if (!!request.hasBindEndTime()) {
    body["BindEndTime"] = request.bindEndTime();
  }

  if (!!request.hasBindPeriod()) {
    body["BindPeriod"] = request.bindPeriod();
  }

  if (!!request.hasBindStartTime()) {
    body["BindStartTime"] = request.bindStartTime();
  }

  if (!!request.hasChannelId()) {
    body["ChannelId"] = request.channelId();
  }

  if (!!request.hasClassification()) {
    body["Classification"] = request.classification();
  }

  if (!!request.hasDeliveryType()) {
    body["DeliveryType"] = request.deliveryType();
  }

  if (!!request.hasExpiredSeconds()) {
    body["ExpiredSeconds"] = request.expiredSeconds();
  }

  if (!!request.hasExtendedParams()) {
    body["ExtendedParams"] = request.extendedParams();
  }

  if (!!request.hasMiChannelId()) {
    body["MiChannelId"] = request.miChannelId();
  }

  if (!!request.hasMsgkey()) {
    body["Msgkey"] = request.msgkey();
  }

  if (!!request.hasNotifyLevelShrink()) {
    body["NotifyLevel"] = request.notifyLevelShrink();
  }

  if (!!request.hasNotifyType()) {
    body["NotifyType"] = request.notifyType();
  }

  if (!!request.hasPushAction()) {
    body["PushAction"] = request.pushAction();
  }

  if (!!request.hasPushStatus()) {
    body["PushStatus"] = request.pushStatus();
  }

  if (!!request.hasSilent()) {
    body["Silent"] = request.silent();
  }

  if (!!request.hasStrategyContent()) {
    body["StrategyContent"] = request.strategyContent();
  }

  if (!!request.hasStrategyType()) {
    body["StrategyType"] = request.strategyType();
  }

  if (!!request.hasTaskName()) {
    body["TaskName"] = request.taskName();
  }

  if (!!request.hasTemplateKeyValue()) {
    body["TemplateKeyValue"] = request.templateKeyValue();
  }

  if (!!request.hasTemplateName()) {
    body["TemplateName"] = request.templateName();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasThirdChannelCategoryShrink()) {
    body["ThirdChannelCategory"] = request.thirdChannelCategoryShrink();
  }

  if (!!request.hasTimeMode()) {
    body["TimeMode"] = request.timeMode();
  }

  if (!!request.hasTransparentMessagePayload()) {
    body["TransparentMessagePayload"] = request.transparentMessagePayload();
  }

  if (!!request.hasTransparentMessageUrgency()) {
    body["TransparentMessageUrgency"] = request.transparentMessageUrgency();
  }

  if (!!request.hasUnBindEndTime()) {
    body["UnBindEndTime"] = request.unBindEndTime();
  }

  if (!!request.hasUnBindPeriod()) {
    body["UnBindPeriod"] = request.unBindPeriod();
  }

  if (!!request.hasUnBindStartTime()) {
    body["UnBindStartTime"] = request.unBindStartTime();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    request.setNotifyLevelShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.notifyLevel(), "NotifyLevel", "json"));
  }

  if (!!tmpReq.hasThirdChannelCategory()) {
    request.setThirdChannelCategoryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.thirdChannelCategory(), "ThirdChannelCategory", "json"));
  }

  json body = {};
  if (!!request.hasActivityContentState()) {
    body["ActivityContentState"] = request.activityContentState();
  }

  if (!!request.hasActivityEvent()) {
    body["ActivityEvent"] = request.activityEvent();
  }

  if (!!request.hasAppId()) {
    body["AppId"] = request.appId();
  }

  if (!!request.hasChannelId()) {
    body["ChannelId"] = request.channelId();
  }

  if (!!request.hasClassification()) {
    body["Classification"] = request.classification();
  }

  if (!!request.hasDeliveryType()) {
    body["DeliveryType"] = request.deliveryType();
  }

  if (!!request.hasDismissalDate()) {
    body["DismissalDate"] = request.dismissalDate();
  }

  if (!!request.hasExpiredSeconds()) {
    body["ExpiredSeconds"] = request.expiredSeconds();
  }

  if (!!request.hasExtendedParams()) {
    body["ExtendedParams"] = request.extendedParams();
  }

  if (!!request.hasMiChannelId()) {
    body["MiChannelId"] = request.miChannelId();
  }

  if (!!request.hasNotifyLevelShrink()) {
    body["NotifyLevel"] = request.notifyLevelShrink();
  }

  if (!!request.hasNotifyType()) {
    body["NotifyType"] = request.notifyType();
  }

  if (!!request.hasPushAction()) {
    body["PushAction"] = request.pushAction();
  }

  if (!!request.hasSilent()) {
    body["Silent"] = request.silent();
  }

  if (!!request.hasStrategyContent()) {
    body["StrategyContent"] = request.strategyContent();
  }

  if (!!request.hasStrategyType()) {
    body["StrategyType"] = request.strategyType();
  }

  if (!!request.hasTargetMsg()) {
    body["TargetMsg"] = request.targetMsg();
  }

  if (!!request.hasTaskName()) {
    body["TaskName"] = request.taskName();
  }

  if (!!request.hasTemplateName()) {
    body["TemplateName"] = request.templateName();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasThirdChannelCategoryShrink()) {
    body["ThirdChannelCategory"] = request.thirdChannelCategoryShrink();
  }

  if (!!request.hasTransparentMessagePayload()) {
    body["TransparentMessagePayload"] = request.transparentMessagePayload();
  }

  if (!!request.hasTransparentMessageUrgency()) {
    body["TransparentMessageUrgency"] = request.transparentMessageUrgency();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasTarget()) {
    body["Target"] = request.target();
  }

  if (!!request.hasTargetType()) {
    body["TargetType"] = request.targetType();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasAppVersion()) {
    body["AppVersion"] = request.appVersion();
  }

  if (!!request.hasChannel()) {
    body["Channel"] = request.channel();
  }

  if (!!request.hasConnectType()) {
    body["ConnectType"] = request.connectType();
  }

  if (!!request.hasDeliveryToken()) {
    body["DeliveryToken"] = request.deliveryToken();
  }

  if (!!request.hasImei()) {
    body["Imei"] = request.imei();
  }

  if (!!request.hasImsi()) {
    body["Imsi"] = request.imsi();
  }

  if (!!request.hasModel()) {
    body["Model"] = request.model();
  }

  if (!!request.hasOsType()) {
    body["OsType"] = request.osType();
  }

  if (!!request.hasPushVersion()) {
    body["PushVersion"] = request.pushVersion();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasThirdChannel()) {
    body["ThirdChannel"] = request.thirdChannel();
  }

  if (!!request.hasThirdChannelDeviceToken()) {
    body["ThirdChannelDeviceToken"] = request.thirdChannelDeviceToken();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    request.setNotifyLevelShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.notifyLevel(), "NotifyLevel", "json"));
  }

  if (!!tmpReq.hasThirdChannelCategory()) {
    request.setThirdChannelCategoryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.thirdChannelCategory(), "ThirdChannelCategory", "json"));
  }

  json body = {};
  if (!!request.hasActivityContentState()) {
    body["ActivityContentState"] = request.activityContentState();
  }

  if (!!request.hasActivityEvent()) {
    body["ActivityEvent"] = request.activityEvent();
  }

  if (!!request.hasAppId()) {
    body["AppId"] = request.appId();
  }

  if (!!request.hasChannelId()) {
    body["ChannelId"] = request.channelId();
  }

  if (!!request.hasClassification()) {
    body["Classification"] = request.classification();
  }

  if (!!request.hasContent()) {
    body["Content"] = request.content();
  }

  if (!!request.hasDeliveryType()) {
    body["DeliveryType"] = request.deliveryType();
  }

  if (!!request.hasDismissalDate()) {
    body["DismissalDate"] = request.dismissalDate();
  }

  if (!!request.hasExpiredSeconds()) {
    body["ExpiredSeconds"] = request.expiredSeconds();
  }

  if (!!request.hasExtendedParams()) {
    body["ExtendedParams"] = request.extendedParams();
  }

  if (!!request.hasIconUrls()) {
    body["IconUrls"] = request.iconUrls();
  }

  if (!!request.hasImageUrls()) {
    body["ImageUrls"] = request.imageUrls();
  }

  if (!!request.hasMiChannelId()) {
    body["MiChannelId"] = request.miChannelId();
  }

  if (!!request.hasNotifyLevelShrink()) {
    body["NotifyLevel"] = request.notifyLevelShrink();
  }

  if (!!request.hasNotifyType()) {
    body["NotifyType"] = request.notifyType();
  }

  if (!!request.hasPushAction()) {
    body["PushAction"] = request.pushAction();
  }

  if (!!request.hasPushStyle()) {
    body["PushStyle"] = request.pushStyle();
  }

  if (!!request.hasSilent()) {
    body["Silent"] = request.silent();
  }

  if (!!request.hasSmsSignName()) {
    body["SmsSignName"] = request.smsSignName();
  }

  if (!!request.hasSmsStrategy()) {
    body["SmsStrategy"] = request.smsStrategy();
  }

  if (!!request.hasSmsTemplateCode()) {
    body["SmsTemplateCode"] = request.smsTemplateCode();
  }

  if (!!request.hasSmsTemplateParam()) {
    body["SmsTemplateParam"] = request.smsTemplateParam();
  }

  if (!!request.hasStrategyContent()) {
    body["StrategyContent"] = request.strategyContent();
  }

  if (!!request.hasStrategyType()) {
    body["StrategyType"] = request.strategyType();
  }

  if (!!request.hasTargetMsgkey()) {
    body["TargetMsgkey"] = request.targetMsgkey();
  }

  if (!!request.hasTaskName()) {
    body["TaskName"] = request.taskName();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasThirdChannelCategoryShrink()) {
    body["ThirdChannelCategory"] = request.thirdChannelCategoryShrink();
  }

  if (!!request.hasTitle()) {
    body["Title"] = request.title();
  }

  if (!!request.hasTransparentMessagePayload()) {
    body["TransparentMessagePayload"] = request.transparentMessagePayload();
  }

  if (!!request.hasTransparentMessageUrgency()) {
    body["TransparentMessageUrgency"] = request.transparentMessageUrgency();
  }

  if (!!request.hasUri()) {
    body["Uri"] = request.uri();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    request.setNotifyLevelShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.notifyLevel(), "NotifyLevel", "json"));
  }

  if (!!tmpReq.hasThirdChannelCategory()) {
    request.setThirdChannelCategoryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.thirdChannelCategory(), "ThirdChannelCategory", "json"));
  }

  json body = {};
  if (!!request.hasActivityContentState()) {
    body["ActivityContentState"] = request.activityContentState();
  }

  if (!!request.hasActivityEvent()) {
    body["ActivityEvent"] = request.activityEvent();
  }

  if (!!request.hasAppId()) {
    body["AppId"] = request.appId();
  }

  if (!!request.hasChannelId()) {
    body["ChannelId"] = request.channelId();
  }

  if (!!request.hasClassification()) {
    body["Classification"] = request.classification();
  }

  if (!!request.hasDeliveryType()) {
    body["DeliveryType"] = request.deliveryType();
  }

  if (!!request.hasDismissalDate()) {
    body["DismissalDate"] = request.dismissalDate();
  }

  if (!!request.hasExpiredSeconds()) {
    body["ExpiredSeconds"] = request.expiredSeconds();
  }

  if (!!request.hasExtendedParams()) {
    body["ExtendedParams"] = request.extendedParams();
  }

  if (!!request.hasMiChannelId()) {
    body["MiChannelId"] = request.miChannelId();
  }

  if (!!request.hasNotifyLevelShrink()) {
    body["NotifyLevel"] = request.notifyLevelShrink();
  }

  if (!!request.hasNotifyType()) {
    body["NotifyType"] = request.notifyType();
  }

  if (!!request.hasPushAction()) {
    body["PushAction"] = request.pushAction();
  }

  if (!!request.hasSilent()) {
    body["Silent"] = request.silent();
  }

  if (!!request.hasSmsSignName()) {
    body["SmsSignName"] = request.smsSignName();
  }

  if (!!request.hasSmsStrategy()) {
    body["SmsStrategy"] = request.smsStrategy();
  }

  if (!!request.hasSmsTemplateCode()) {
    body["SmsTemplateCode"] = request.smsTemplateCode();
  }

  if (!!request.hasSmsTemplateParam()) {
    body["SmsTemplateParam"] = request.smsTemplateParam();
  }

  if (!!request.hasStrategyContent()) {
    body["StrategyContent"] = request.strategyContent();
  }

  if (!!request.hasStrategyType()) {
    body["StrategyType"] = request.strategyType();
  }

  if (!!request.hasTargetMsgkey()) {
    body["TargetMsgkey"] = request.targetMsgkey();
  }

  if (!!request.hasTaskName()) {
    body["TaskName"] = request.taskName();
  }

  if (!!request.hasTemplateKeyValue()) {
    body["TemplateKeyValue"] = request.templateKeyValue();
  }

  if (!!request.hasTemplateName()) {
    body["TemplateName"] = request.templateName();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasThirdChannelCategoryShrink()) {
    body["ThirdChannelCategory"] = request.thirdChannelCategoryShrink();
  }

  if (!!request.hasTransparentMessagePayload()) {
    body["TransparentMessagePayload"] = request.transparentMessagePayload();
  }

  if (!!request.hasTransparentMessageUrgency()) {
    body["TransparentMessageUrgency"] = request.transparentMessageUrgency();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasDeliveryToken()) {
    body["DeliveryToken"] = request.deliveryToken();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasUserId()) {
    body["UserId"] = request.userId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasOnexFlag()) {
    body["OnexFlag"] = request.onexFlag();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasMobile()) {
    body["Mobile"] = request.mobile();
  }

  if (!!request.hasMobileMd5()) {
    body["MobileMd5"] = request.mobileMd5();
  }

  if (!!request.hasMobileSha256()) {
    body["MobileSha256"] = request.mobileSha256();
  }

  if (!!request.hasMobileSm3()) {
    body["MobileSm3"] = request.mobileSm3();
  }

  if (!!request.hasRiskScene()) {
    body["RiskScene"] = request.riskScene();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasUrl()) {
    body["Url"] = request.url();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
 * @param request QueryMcubeMiniPackageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryMcubeMiniPackageResponse
 */
QueryMcubeMiniPackageResponse Client::queryMcubeMiniPackageWithOptions(const QueryMcubeMiniPackageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.appId();
  }

  if (!!request.hasH5Id()) {
    body["H5Id"] = request.h5Id();
  }

  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.taskId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.taskId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["ApiStatus"] = request.apiStatus();
  }

  if (!!request.hasApiType()) {
    body["ApiType"] = request.apiType();
  }

  if (!!request.hasAppId()) {
    body["AppId"] = request.appId();
  }

  if (!!request.hasFormat()) {
    body["Format"] = request.format();
  }

  if (!!request.hasHost()) {
    body["Host"] = request.host();
  }

  if (!!request.hasNeedEncrypt()) {
    body["NeedEncrypt"] = request.needEncrypt();
  }

  if (!!request.hasNeedEtag()) {
    body["NeedEtag"] = request.needEtag();
  }

  if (!!request.hasNeedSign()) {
    body["NeedSign"] = request.needSign();
  }

  if (!!request.hasOperationType()) {
    body["OperationType"] = request.operationType();
  }

  if (!!request.hasOptFuzzy()) {
    body["OptFuzzy"] = request.optFuzzy();
  }

  if (!!request.hasPageIndex()) {
    body["PageIndex"] = request.pageIndex();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasSysId()) {
    body["SysId"] = request.sysId();
  }

  if (!!request.hasSysName()) {
    body["SysName"] = request.sysName();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasFormat()) {
    body["Format"] = request.format();
  }

  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasType()) {
    body["Type"] = request.type();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasFormat()) {
    body["Format"] = request.format();
  }

  if (!!request.hasMpaasMappcenterMgsTestreqbodyautogenQueryJsonStr()) {
    body["MpaasMappcenterMgsTestreqbodyautogenQueryJsonStr"] = request.mpaasMappcenterMgsTestreqbodyautogenQueryJsonStr();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.endTime();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.startTime();
  }

  if (!!request.hasType()) {
    body["Type"] = request.type();
  }

  if (!!request.hasUniqueId()) {
    body["UniqueId"] = request.uniqueId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
 * @param request QueryPushAnalysisCoreIndexRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryPushAnalysisCoreIndexResponse
 */
QueryPushAnalysisCoreIndexResponse Client::queryPushAnalysisCoreIndexWithOptions(const QueryPushAnalysisCoreIndexRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.appId();
  }

  if (!!request.hasChannel()) {
    body["Channel"] = request.channel();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.endTime();
  }

  if (!!request.hasPlatform()) {
    body["Platform"] = request.platform();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.startTime();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.taskId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasType()) {
    body["Type"] = request.type();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.taskId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.startTime();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.taskId();
  }

  if (!!request.hasTaskName()) {
    body["TaskName"] = request.taskName();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.endTime();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.startTime();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasType()) {
    body["Type"] = request.type();
  }

  if (!!request.hasUniqueId()) {
    body["UniqueId"] = request.uniqueId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasMessageId()) {
    body["MessageId"] = request.messageId();
  }

  if (!!request.hasTargetId()) {
    body["TargetId"] = request.targetId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.taskId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasMpaasMappcenterMsaDiffRunJsonStr()) {
    body["MpaasMappcenterMsaDiffRunJsonStr"] = request.mpaasMappcenterMsaDiffRunJsonStr();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasMpaasMappcenterMgsApirestSaveJsonStr()) {
    body["MpaasMappcenterMgsApirestSaveJsonStr"] = request.mpaasMappcenterMgsApirestSaveJsonStr();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
  json body = {};
  if (!!request.hasApkProtector()) {
    body["ApkProtector"] = request.apkProtector();
  }

  if (!!request.hasAppId()) {
    body["AppId"] = request.appId();
  }

  if (!!request.hasAssetsFileList()) {
    body["AssetsFileList"] = request.assetsFileList();
  }

  if (!!request.hasClasses()) {
    body["Classes"] = request.classes();
  }

  if (!!request.hasDalvikDebugger()) {
    body["DalvikDebugger"] = request.dalvikDebugger();
  }

  if (!!request.hasEmulatorEnvironment()) {
    body["EmulatorEnvironment"] = request.emulatorEnvironment();
  }

  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  if (!!request.hasJavaHook()) {
    body["JavaHook"] = request.javaHook();
  }

  if (!!request.hasMemoryDump()) {
    body["MemoryDump"] = request.memoryDump();
  }

  if (!!request.hasNativeDebugger()) {
    body["NativeDebugger"] = request.nativeDebugger();
  }

  if (!!request.hasNativeHook()) {
    body["NativeHook"] = request.nativeHook();
  }

  if (!!request.hasPackageTampered()) {
    body["PackageTampered"] = request.packageTampered();
  }

  if (!!request.hasRoot()) {
    body["Root"] = request.root();
  }

  if (!!request.hasRunMode()) {
    body["RunMode"] = request.runMode();
  }

  if (!!request.hasSoFileList()) {
    body["SoFileList"] = request.soFileList();
  }

  if (!!request.hasTaskType()) {
    body["TaskType"] = request.taskType();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasTotalSwitch()) {
    body["TotalSwitch"] = request.totalSwitch();
  }

  if (!!request.hasUseAShield()) {
    body["UseAShield"] = request.useAShield();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasCors()) {
    body["Cors"] = request.cors();
  }

  if (!!request.hasDomain()) {
    body["Domain"] = request.domain();
  }

  if (!!request.hasDynamicfield()) {
    body["Dynamicfield"] = request.dynamicfield();
  }

  if (!!request.hasTargetUrl()) {
    body["TargetUrl"] = request.targetUrl();
  }

  if (!!request.hasUrl()) {
    body["Url"] = request.url();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
 * @param request UpdateMcubeWhitelistRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMcubeWhitelistResponse
 */
UpdateMcubeWhitelistResponse Client::updateMcubeWhitelistWithOptions(const UpdateMcubeWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.appId();
  }

  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  if (!!request.hasKeyIds()) {
    body["KeyIds"] = request.keyIds();
  }

  if (!!request.hasOnexFlag()) {
    body["OnexFlag"] = request.onexFlag();
  }

  if (!!request.hasOssUrl()) {
    body["OssUrl"] = request.ossUrl();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasMockDataUrl()) {
    body["MockDataUrl"] = request.mockDataUrl();
  }

  if (!!request.hasOnexFlag()) {
    body["OnexFlag"] = request.onexFlag();
  }

  if (!!request.hasTemplateResourceId()) {
    body["TemplateResourceId"] = request.templateResourceId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasAppName()) {
    body["AppName"] = request.appName();
  }

  if (!!request.hasIconFileUrl()) {
    body["IconFileUrl"] = request.iconFileUrl();
  }

  if (!!request.hasIdentifier()) {
    body["Identifier"] = request.identifier();
  }

  if (!!request.hasOnexFlag()) {
    body["OnexFlag"] = request.onexFlag();
  }

  if (!!request.hasSystemType()) {
    body["SystemType"] = request.systemType();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasBitcode()) {
    body["Bitcode"] = request.bitcode();
  }

  if (!!request.hasCodeVersion()) {
    body["CodeVersion"] = request.codeVersion();
  }

  if (!!request.hasLicense()) {
    body["License"] = request.license();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasType()) {
    body["Type"] = request.type();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasAutoInstall()) {
    body["AutoInstall"] = request.autoInstall();
  }

  if (!!request.hasClientVersionMax()) {
    body["ClientVersionMax"] = request.clientVersionMax();
  }

  if (!!request.hasClientVersionMin()) {
    body["ClientVersionMin"] = request.clientVersionMin();
  }

  if (!!request.hasEnableKeepAlive()) {
    body["EnableKeepAlive"] = request.enableKeepAlive();
  }

  if (!!request.hasEnableOptionMenu()) {
    body["EnableOptionMenu"] = request.enableOptionMenu();
  }

  if (!!request.hasEnableTabBar()) {
    body["EnableTabBar"] = request.enableTabBar();
  }

  if (!!request.hasExtendInfo()) {
    body["ExtendInfo"] = request.extendInfo();
  }

  if (!!request.hasH5Id()) {
    body["H5Id"] = request.h5Id();
  }

  if (!!request.hasH5Name()) {
    body["H5Name"] = request.h5Name();
  }

  if (!!request.hasH5Version()) {
    body["H5Version"] = request.h5Version();
  }

  if (!!request.hasIconFileUrl()) {
    body["IconFileUrl"] = request.iconFileUrl();
  }

  if (!!request.hasIconUrl()) {
    body["IconUrl"] = request.iconUrl();
  }

  if (!!request.hasInstallType()) {
    body["InstallType"] = request.installType();
  }

  if (!!request.hasMainUrl()) {
    body["MainUrl"] = request.mainUrl();
  }

  if (!!request.hasOnexFlag()) {
    body["OnexFlag"] = request.onexFlag();
  }

  if (!!request.hasPackageType()) {
    body["PackageType"] = request.packageType();
  }

  if (!!request.hasPlatform()) {
    body["Platform"] = request.platform();
  }

  if (!!request.hasResourceFileUrl()) {
    body["ResourceFileUrl"] = request.resourceFileUrl();
  }

  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasUserId()) {
    body["UserId"] = request.userId();
  }

  if (!!request.hasUuid()) {
    body["Uuid"] = request.uuid();
  }

  if (!!request.hasVhost()) {
    body["Vhost"] = request.vhost();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasFileUrl()) {
    body["FileUrl"] = request.fileUrl();
  }

  if (!!request.hasOnexFlag()) {
    body["OnexFlag"] = request.onexFlag();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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
    body["AppId"] = request.appId();
  }

  if (!!request.hasFileName()) {
    body["FileName"] = request.fileName();
  }

  if (!!request.hasFileUrl()) {
    body["FileUrl"] = request.fileUrl();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
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