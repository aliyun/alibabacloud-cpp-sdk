#include <darabonba/Core.hpp>
#include <alibabacloud/AppstreamCenter20210903.hpp>
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
using namespace AlibabaCloud::AppstreamCenter20210903::Models;
namespace AlibabaCloud
{
namespace AppstreamCenter20210903
{

AlibabaCloud::AppstreamCenter20210903::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
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
 * @summary 获取连接信息
 *
 * @param request GetConnectionTicketRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetConnectionTicketResponse
 */
GetConnectionTicketResponse Client::getConnectionTicketWithOptions(const GetConnectionTicketRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccessType()) {
    body["AccessType"] = request.accessType();
  }

  if (!!request.hasAppId()) {
    body["AppId"] = request.appId();
  }

  if (!!request.hasAppInstanceGroupId()) {
    body["AppInstanceGroupId"] = request.appInstanceGroupId();
  }

  if (!!request.hasAppInstanceId()) {
    body["AppInstanceId"] = request.appInstanceId();
  }

  if (!!request.hasAppPolicyId()) {
    body["AppPolicyId"] = request.appPolicyId();
  }

  if (!!request.hasAppVersion()) {
    body["AppVersion"] = request.appVersion();
  }

  if (!!request.hasAutoConnectInQueue()) {
    body["AutoConnectInQueue"] = request.autoConnectInQueue();
  }

  if (!!request.hasBizRegionId()) {
    body["BizRegionId"] = request.bizRegionId();
  }

  if (!!request.hasClientId()) {
    body["ClientId"] = request.clientId();
  }

  if (!!request.hasClientIp()) {
    body["ClientIp"] = request.clientIp();
  }

  if (!!request.hasClientOS()) {
    body["ClientOS"] = request.clientOS();
  }

  if (!!request.hasClientType()) {
    body["ClientType"] = request.clientType();
  }

  if (!!request.hasClientVersion()) {
    body["ClientVersion"] = request.clientVersion();
  }

  if (!!request.hasConnectionProperties()) {
    body["ConnectionProperties"] = request.connectionProperties();
  }

  if (!!request.hasEndUserId()) {
    body["EndUserId"] = request.endUserId();
  }

  if (!!request.hasEnvironmentConfig()) {
    body["EnvironmentConfig"] = request.environmentConfig();
  }

  if (!!request.hasLoginRegionId()) {
    body["LoginRegionId"] = request.loginRegionId();
  }

  if (!!request.hasLoginToken()) {
    body["LoginToken"] = request.loginToken();
  }

  if (!!request.hasParam()) {
    body["Param"] = request.param();
  }

  if (!!request.hasProductType()) {
    body["ProductType"] = request.productType();
  }

  if (!!request.hasResourceId()) {
    body["ResourceId"] = request.resourceId();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.sessionId();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.taskId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasUuid()) {
    body["Uuid"] = request.uuid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetConnectionTicket"},
    {"version" , "2021-09-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doRPCRequest(params.action(), params.version(), params.protocol(), params.method(), params.authType(), params.bodyType(), req, runtime)).get<GetConnectionTicketResponse>();
}

/**
 * @summary 获取连接信息
 *
 * @param request GetConnectionTicketRequest
 * @return GetConnectionTicketResponse
 */
GetConnectionTicketResponse Client::getConnectionTicket(const GetConnectionTicketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getConnectionTicketWithOptions(request, runtime);
}

/**
 * @summary 已上架应用列表
 *
 * @param request ListPublishedAppInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPublishedAppInfoResponse
 */
ListPublishedAppInfoResponse Client::listPublishedAppInfoWithOptions(const ListPublishedAppInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.appName();
  }

  if (!!request.hasBizRegionId()) {
    query["BizRegionId"] = request.bizRegionId();
  }

  if (!!request.hasCategoryId()) {
    query["CategoryId"] = request.categoryId();
  }

  if (!!request.hasCategoryType()) {
    query["CategoryType"] = request.categoryType();
  }

  if (!!request.hasClientId()) {
    query["ClientId"] = request.clientId();
  }

  if (!!request.hasClientIp()) {
    query["ClientIp"] = request.clientIp();
  }

  if (!!request.hasClientOS()) {
    query["ClientOS"] = request.clientOS();
  }

  if (!!request.hasClientVersion()) {
    query["ClientVersion"] = request.clientVersion();
  }

  if (!!request.hasEndUserId()) {
    query["EndUserId"] = request.endUserId();
  }

  if (!!request.hasLoginRegionId()) {
    query["LoginRegionId"] = request.loginRegionId();
  }

  if (!!request.hasLoginToken()) {
    query["LoginToken"] = request.loginToken();
  }

  if (!!request.hasOrderParam()) {
    query["OrderParam"] = request.orderParam();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.productType();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.sessionId();
  }

  if (!!request.hasSortType()) {
    query["SortType"] = request.sortType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPublishedAppInfo"},
    {"version" , "2021-09-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doRPCRequest(params.action(), params.version(), params.protocol(), params.method(), params.authType(), params.bodyType(), req, runtime)).get<ListPublishedAppInfoResponse>();
}

/**
 * @summary 已上架应用列表
 *
 * @param request ListPublishedAppInfoRequest
 * @return ListPublishedAppInfoResponse
 */
ListPublishedAppInfoResponse Client::listPublishedAppInfo(const ListPublishedAppInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPublishedAppInfoWithOptions(request, runtime);
}

/**
 * @summary 运行中应用列表
 *
 * @param request ListRunningAppsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRunningAppsResponse
 */
ListRunningAppsResponse Client::listRunningAppsWithOptions(const ListRunningAppsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizRegionId()) {
    query["BizRegionId"] = request.bizRegionId();
  }

  if (!!request.hasClientId()) {
    query["ClientId"] = request.clientId();
  }

  if (!!request.hasClientIp()) {
    query["ClientIp"] = request.clientIp();
  }

  if (!!request.hasClientOS()) {
    query["ClientOS"] = request.clientOS();
  }

  if (!!request.hasClientVersion()) {
    query["ClientVersion"] = request.clientVersion();
  }

  if (!!request.hasEndUserId()) {
    query["EndUserId"] = request.endUserId();
  }

  if (!!request.hasLoginRegionId()) {
    query["LoginRegionId"] = request.loginRegionId();
  }

  if (!!request.hasLoginToken()) {
    query["LoginToken"] = request.loginToken();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.productType();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.sessionId();
  }

  if (!!request.hasTenantId()) {
    query["TenantId"] = request.tenantId();
  }

  if (!!request.hasUuid()) {
    query["Uuid"] = request.uuid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRunningApps"},
    {"version" , "2021-09-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doRPCRequest(params.action(), params.version(), params.protocol(), params.method(), params.authType(), params.bodyType(), req, runtime)).get<ListRunningAppsResponse>();
}

/**
 * @summary 运行中应用列表
 *
 * @param request ListRunningAppsRequest
 * @return ListRunningAppsResponse
 */
ListRunningAppsResponse Client::listRunningApps(const ListRunningAppsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRunningAppsWithOptions(request, runtime);
}

/**
 * @summary 重置应用资源
 *
 * @param request ResetAppResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetAppResourcesResponse
 */
ResetAppResourcesResponse Client::resetAppResourcesWithOptions(const ResetAppResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppInstanceGroupId()) {
    body["AppInstanceGroupId"] = request.appInstanceGroupId();
  }

  if (!!request.hasBizRegionId()) {
    body["BizRegionId"] = request.bizRegionId();
  }

  if (!!request.hasClientId()) {
    body["ClientId"] = request.clientId();
  }

  if (!!request.hasClientIp()) {
    body["ClientIp"] = request.clientIp();
  }

  if (!!request.hasClientOS()) {
    body["ClientOS"] = request.clientOS();
  }

  if (!!request.hasClientVersion()) {
    body["ClientVersion"] = request.clientVersion();
  }

  if (!!request.hasEndUserId()) {
    body["EndUserId"] = request.endUserId();
  }

  if (!!request.hasLoginRegionId()) {
    body["LoginRegionId"] = request.loginRegionId();
  }

  if (!!request.hasLoginToken()) {
    body["LoginToken"] = request.loginToken();
  }

  if (!!request.hasProductType()) {
    body["ProductType"] = request.productType();
  }

  if (!!request.hasResourceIds()) {
    body["ResourceIds"] = request.resourceIds();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.sessionId();
  }

  if (!!request.hasUuid()) {
    body["Uuid"] = request.uuid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ResetAppResources"},
    {"version" , "2021-09-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doRPCRequest(params.action(), params.version(), params.protocol(), params.method(), params.authType(), params.bodyType(), req, runtime)).get<ResetAppResourcesResponse>();
}

/**
 * @summary 重置应用资源
 *
 * @param request ResetAppResourcesRequest
 * @return ResetAppResourcesResponse
 */
ResetAppResourcesResponse Client::resetAppResources(const ResetAppResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetAppResourcesWithOptions(request, runtime);
}

/**
 * @summary 重启应用资源
 *
 * @param request RestartAppResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RestartAppResourcesResponse
 */
RestartAppResourcesResponse Client::restartAppResourcesWithOptions(const RestartAppResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppInstanceGroupId()) {
    body["AppInstanceGroupId"] = request.appInstanceGroupId();
  }

  if (!!request.hasBizRegionId()) {
    body["BizRegionId"] = request.bizRegionId();
  }

  if (!!request.hasClientId()) {
    body["ClientId"] = request.clientId();
  }

  if (!!request.hasClientIp()) {
    body["ClientIp"] = request.clientIp();
  }

  if (!!request.hasClientOS()) {
    body["ClientOS"] = request.clientOS();
  }

  if (!!request.hasClientVersion()) {
    body["ClientVersion"] = request.clientVersion();
  }

  if (!!request.hasEndUserId()) {
    body["EndUserId"] = request.endUserId();
  }

  if (!!request.hasLoginRegionId()) {
    body["LoginRegionId"] = request.loginRegionId();
  }

  if (!!request.hasLoginToken()) {
    body["LoginToken"] = request.loginToken();
  }

  if (!!request.hasProductType()) {
    body["ProductType"] = request.productType();
  }

  if (!!request.hasResourceIds()) {
    body["ResourceIds"] = request.resourceIds();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.sessionId();
  }

  if (!!request.hasUuid()) {
    body["Uuid"] = request.uuid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RestartAppResources"},
    {"version" , "2021-09-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doRPCRequest(params.action(), params.version(), params.protocol(), params.method(), params.authType(), params.bodyType(), req, runtime)).get<RestartAppResourcesResponse>();
}

/**
 * @summary 重启应用资源
 *
 * @param request RestartAppResourcesRequest
 * @return RestartAppResourcesResponse
 */
RestartAppResourcesResponse Client::restartAppResources(const RestartAppResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return restartAppResourcesWithOptions(request, runtime);
}

/**
 * @summary 启动应用资源
 *
 * @param request StartAppResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartAppResourcesResponse
 */
StartAppResourcesResponse Client::startAppResourcesWithOptions(const StartAppResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppInstanceGroupId()) {
    body["AppInstanceGroupId"] = request.appInstanceGroupId();
  }

  if (!!request.hasBizRegionId()) {
    body["BizRegionId"] = request.bizRegionId();
  }

  if (!!request.hasClientId()) {
    body["ClientId"] = request.clientId();
  }

  if (!!request.hasClientIp()) {
    body["ClientIp"] = request.clientIp();
  }

  if (!!request.hasClientOS()) {
    body["ClientOS"] = request.clientOS();
  }

  if (!!request.hasClientVersion()) {
    body["ClientVersion"] = request.clientVersion();
  }

  if (!!request.hasEndUserId()) {
    body["EndUserId"] = request.endUserId();
  }

  if (!!request.hasLoginRegionId()) {
    body["LoginRegionId"] = request.loginRegionId();
  }

  if (!!request.hasLoginToken()) {
    body["LoginToken"] = request.loginToken();
  }

  if (!!request.hasProductType()) {
    body["ProductType"] = request.productType();
  }

  if (!!request.hasResourceIds()) {
    body["ResourceIds"] = request.resourceIds();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.sessionId();
  }

  if (!!request.hasUuid()) {
    body["Uuid"] = request.uuid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "StartAppResources"},
    {"version" , "2021-09-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doRPCRequest(params.action(), params.version(), params.protocol(), params.method(), params.authType(), params.bodyType(), req, runtime)).get<StartAppResourcesResponse>();
}

/**
 * @summary 启动应用资源
 *
 * @param request StartAppResourcesRequest
 * @return StartAppResourcesResponse
 */
StartAppResourcesResponse Client::startAppResources(const StartAppResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startAppResourcesWithOptions(request, runtime);
}

/**
 * @summary 停止应用
 *
 * @param request StopAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopAppResponse
 */
StopAppResponse Client::stopAppWithOptions(const StopAppRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAliUid()) {
    body["AliUid"] = request.aliUid();
  }

  if (!!request.hasApiType()) {
    body["ApiType"] = request.apiType();
  }

  if (!!request.hasAppId()) {
    body["AppId"] = request.appId();
  }

  if (!!request.hasAppInstanceGroupId()) {
    body["AppInstanceGroupId"] = request.appInstanceGroupId();
  }

  if (!!request.hasAppInstanceId()) {
    body["AppInstanceId"] = request.appInstanceId();
  }

  if (!!request.hasBizRegionId()) {
    body["BizRegionId"] = request.bizRegionId();
  }

  if (!!request.hasClientChannel()) {
    body["ClientChannel"] = request.clientChannel();
  }

  if (!!request.hasClientId()) {
    body["ClientId"] = request.clientId();
  }

  if (!!request.hasClientIp()) {
    body["ClientIp"] = request.clientIp();
  }

  if (!!request.hasClientOS()) {
    body["ClientOS"] = request.clientOS();
  }

  if (!!request.hasClientVersion()) {
    body["ClientVersion"] = request.clientVersion();
  }

  if (!!request.hasEndUserId()) {
    body["EndUserId"] = request.endUserId();
  }

  if (!!request.hasForceStop()) {
    body["ForceStop"] = request.forceStop();
  }

  if (!!request.hasIdpId()) {
    body["IdpId"] = request.idpId();
  }

  if (!!request.hasLoginRegionId()) {
    body["LoginRegionId"] = request.loginRegionId();
  }

  if (!!request.hasLoginToken()) {
    body["LoginToken"] = request.loginToken();
  }

  if (!!request.hasProductType()) {
    body["ProductType"] = request.productType();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.sessionId();
  }

  if (!!request.hasUuid()) {
    body["Uuid"] = request.uuid();
  }

  if (!!request.hasWyId()) {
    body["WyId"] = request.wyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "StopApp"},
    {"version" , "2021-09-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doRPCRequest(params.action(), params.version(), params.protocol(), params.method(), params.authType(), params.bodyType(), req, runtime)).get<StopAppResponse>();
}

/**
 * @summary 停止应用
 *
 * @param request StopAppRequest
 * @return StopAppResponse
 */
StopAppResponse Client::stopApp(const StopAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopAppWithOptions(request, runtime);
}

/**
 * @summary 关闭应用资源
 *
 * @param request StopAppResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopAppResourcesResponse
 */
StopAppResourcesResponse Client::stopAppResourcesWithOptions(const StopAppResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppInstanceGroupId()) {
    body["AppInstanceGroupId"] = request.appInstanceGroupId();
  }

  if (!!request.hasBizRegionId()) {
    body["BizRegionId"] = request.bizRegionId();
  }

  if (!!request.hasClientId()) {
    body["ClientId"] = request.clientId();
  }

  if (!!request.hasClientIp()) {
    body["ClientIp"] = request.clientIp();
  }

  if (!!request.hasClientOS()) {
    body["ClientOS"] = request.clientOS();
  }

  if (!!request.hasClientVersion()) {
    body["ClientVersion"] = request.clientVersion();
  }

  if (!!request.hasEndUserId()) {
    body["EndUserId"] = request.endUserId();
  }

  if (!!request.hasLoginRegionId()) {
    body["LoginRegionId"] = request.loginRegionId();
  }

  if (!!request.hasLoginToken()) {
    body["LoginToken"] = request.loginToken();
  }

  if (!!request.hasProductType()) {
    body["ProductType"] = request.productType();
  }

  if (!!request.hasResourceIds()) {
    body["ResourceIds"] = request.resourceIds();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.sessionId();
  }

  if (!!request.hasUuid()) {
    body["Uuid"] = request.uuid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "StopAppResources"},
    {"version" , "2021-09-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doRPCRequest(params.action(), params.version(), params.protocol(), params.method(), params.authType(), params.bodyType(), req, runtime)).get<StopAppResourcesResponse>();
}

/**
 * @summary 关闭应用资源
 *
 * @param request StopAppResourcesRequest
 * @return StopAppResourcesResponse
 */
StopAppResourcesResponse Client::stopAppResources(const StopAppResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopAppResourcesWithOptions(request, runtime);
}

/**
 * @summary 解绑实例
 *
 * @param request UnbindRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnbindResponse
 */
UnbindResponse Client::unbindWithOptions(const UnbindRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.appId();
  }

  if (!!request.hasAppInstanceGroupId()) {
    body["AppInstanceGroupId"] = request.appInstanceGroupId();
  }

  if (!!request.hasAppInstanceId()) {
    body["AppInstanceId"] = request.appInstanceId();
  }

  if (!!request.hasAppInstancePersistentId()) {
    body["AppInstancePersistentId"] = request.appInstancePersistentId();
  }

  if (!!request.hasClientId()) {
    body["ClientId"] = request.clientId();
  }

  if (!!request.hasClientIp()) {
    body["ClientIp"] = request.clientIp();
  }

  if (!!request.hasClientOS()) {
    body["ClientOS"] = request.clientOS();
  }

  if (!!request.hasClientVersion()) {
    body["ClientVersion"] = request.clientVersion();
  }

  if (!!request.hasEndUserId()) {
    body["EndUserId"] = request.endUserId();
  }

  if (!!request.hasLoginRegionId()) {
    body["LoginRegionId"] = request.loginRegionId();
  }

  if (!!request.hasLoginToken()) {
    body["LoginToken"] = request.loginToken();
  }

  if (!!request.hasProductType()) {
    body["ProductType"] = request.productType();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.sessionId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "Unbind"},
    {"version" , "2021-09-03"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doRPCRequest(params.action(), params.version(), params.protocol(), params.method(), params.authType(), params.bodyType(), req, runtime)).get<UnbindResponse>();
}

/**
 * @summary 解绑实例
 *
 * @param request UnbindRequest
 * @return UnbindResponse
 */
UnbindResponse Client::unbind(const UnbindRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unbindWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210903