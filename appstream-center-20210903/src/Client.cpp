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
 * @summary Queries the credential used to connect to an app instance.
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

  if (!!request.hasAppInstanceGroupId()) {
    body["AppInstanceGroupId"] = request.getAppInstanceGroupId();
  }

  if (!!request.hasAppInstanceId()) {
    body["AppInstanceId"] = request.getAppInstanceId();
  }

  if (!!request.hasAppPolicyId()) {
    body["AppPolicyId"] = request.getAppPolicyId();
  }

  if (!!request.hasAppVersion()) {
    body["AppVersion"] = request.getAppVersion();
  }

  if (!!request.hasAutoConnectInQueue()) {
    body["AutoConnectInQueue"] = request.getAutoConnectInQueue();
  }

  if (!!request.hasBizRegionId()) {
    body["BizRegionId"] = request.getBizRegionId();
  }

  if (!!request.hasClientId()) {
    body["ClientId"] = request.getClientId();
  }

  if (!!request.hasClientIp()) {
    body["ClientIp"] = request.getClientIp();
  }

  if (!!request.hasClientOS()) {
    body["ClientOS"] = request.getClientOS();
  }

  if (!!request.hasClientType()) {
    body["ClientType"] = request.getClientType();
  }

  if (!!request.hasClientVersion()) {
    body["ClientVersion"] = request.getClientVersion();
  }

  if (!!request.hasConnectionProperties()) {
    body["ConnectionProperties"] = request.getConnectionProperties();
  }

  if (!!request.hasEndUserId()) {
    body["EndUserId"] = request.getEndUserId();
  }

  if (!!request.hasEnvironmentConfig()) {
    body["EnvironmentConfig"] = request.getEnvironmentConfig();
  }

  if (!!request.hasLoginRegionId()) {
    body["LoginRegionId"] = request.getLoginRegionId();
  }

  if (!!request.hasLoginToken()) {
    body["LoginToken"] = request.getLoginToken();
  }

  if (!!request.hasParam()) {
    body["Param"] = request.getParam();
  }

  if (!!request.hasProductType()) {
    body["ProductType"] = request.getProductType();
  }

  if (!!request.hasRequireUuidValidation()) {
    body["RequireUuidValidation"] = request.getRequireUuidValidation();
  }

  if (!!request.hasResourceId()) {
    body["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.getSessionId();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  if (!!request.hasUuid()) {
    body["Uuid"] = request.getUuid();
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
  return json(doRPCRequest(params.getAction(), params.getVersion(), params.getProtocol(), params.getMethod(), params.getAuthType(), params.getBodyType(), req, runtime)).get<GetConnectionTicketResponse>();
}

/**
 * @summary Queries the credential used to connect to an app instance.
 *
 * @param request GetConnectionTicketRequest
 * @return GetConnectionTicketResponse
 */
GetConnectionTicketResponse Client::getConnectionTicket(const GetConnectionTicketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getConnectionTicketWithOptions(request, runtime);
}

/**
 * @summary Queries information about published apps.
 *
 * @param request ListPublishedAppInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPublishedAppInfoResponse
 */
ListPublishedAppInfoResponse Client::listPublishedAppInfoWithOptions(const ListPublishedAppInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasBizRegionId()) {
    query["BizRegionId"] = request.getBizRegionId();
  }

  if (!!request.hasCategoryId()) {
    query["CategoryId"] = request.getCategoryId();
  }

  if (!!request.hasCategoryType()) {
    query["CategoryType"] = request.getCategoryType();
  }

  if (!!request.hasClientId()) {
    query["ClientId"] = request.getClientId();
  }

  if (!!request.hasClientIp()) {
    query["ClientIp"] = request.getClientIp();
  }

  if (!!request.hasClientOS()) {
    query["ClientOS"] = request.getClientOS();
  }

  if (!!request.hasClientVersion()) {
    query["ClientVersion"] = request.getClientVersion();
  }

  if (!!request.hasEndUserId()) {
    query["EndUserId"] = request.getEndUserId();
  }

  if (!!request.hasLoginRegionId()) {
    query["LoginRegionId"] = request.getLoginRegionId();
  }

  if (!!request.hasLoginToken()) {
    query["LoginToken"] = request.getLoginToken();
  }

  if (!!request.hasOrderParam()) {
    query["OrderParam"] = request.getOrderParam();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.getProductType();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.getSessionId();
  }

  if (!!request.hasSortType()) {
    query["SortType"] = request.getSortType();
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
  return json(doRPCRequest(params.getAction(), params.getVersion(), params.getProtocol(), params.getMethod(), params.getAuthType(), params.getBodyType(), req, runtime)).get<ListPublishedAppInfoResponse>();
}

/**
 * @summary Queries information about published apps.
 *
 * @param request ListPublishedAppInfoRequest
 * @return ListPublishedAppInfoResponse
 */
ListPublishedAppInfoResponse Client::listPublishedAppInfo(const ListPublishedAppInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPublishedAppInfoWithOptions(request, runtime);
}

/**
 * @summary Queries running apps.
 *
 * @param request ListRunningAppsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRunningAppsResponse
 */
ListRunningAppsResponse Client::listRunningAppsWithOptions(const ListRunningAppsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizRegionId()) {
    query["BizRegionId"] = request.getBizRegionId();
  }

  if (!!request.hasClientId()) {
    query["ClientId"] = request.getClientId();
  }

  if (!!request.hasClientIp()) {
    query["ClientIp"] = request.getClientIp();
  }

  if (!!request.hasClientOS()) {
    query["ClientOS"] = request.getClientOS();
  }

  if (!!request.hasClientVersion()) {
    query["ClientVersion"] = request.getClientVersion();
  }

  if (!!request.hasEndUserId()) {
    query["EndUserId"] = request.getEndUserId();
  }

  if (!!request.hasLoginRegionId()) {
    query["LoginRegionId"] = request.getLoginRegionId();
  }

  if (!!request.hasLoginToken()) {
    query["LoginToken"] = request.getLoginToken();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.getProductType();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.getSessionId();
  }

  if (!!request.hasTenantId()) {
    query["TenantId"] = request.getTenantId();
  }

  if (!!request.hasUuid()) {
    query["Uuid"] = request.getUuid();
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
  return json(doRPCRequest(params.getAction(), params.getVersion(), params.getProtocol(), params.getMethod(), params.getAuthType(), params.getBodyType(), req, runtime)).get<ListRunningAppsResponse>();
}

/**
 * @summary Queries running apps.
 *
 * @param request ListRunningAppsRequest
 * @return ListRunningAppsResponse
 */
ListRunningAppsResponse Client::listRunningApps(const ListRunningAppsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRunningAppsWithOptions(request, runtime);
}

/**
 * @summary Resets app resources.
 *
 * @param request ResetAppResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetAppResourcesResponse
 */
ResetAppResourcesResponse Client::resetAppResourcesWithOptions(const ResetAppResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppInstanceGroupId()) {
    body["AppInstanceGroupId"] = request.getAppInstanceGroupId();
  }

  if (!!request.hasBizRegionId()) {
    body["BizRegionId"] = request.getBizRegionId();
  }

  if (!!request.hasClientId()) {
    body["ClientId"] = request.getClientId();
  }

  if (!!request.hasClientIp()) {
    body["ClientIp"] = request.getClientIp();
  }

  if (!!request.hasClientOS()) {
    body["ClientOS"] = request.getClientOS();
  }

  if (!!request.hasClientVersion()) {
    body["ClientVersion"] = request.getClientVersion();
  }

  if (!!request.hasEndUserId()) {
    body["EndUserId"] = request.getEndUserId();
  }

  if (!!request.hasLoginRegionId()) {
    body["LoginRegionId"] = request.getLoginRegionId();
  }

  if (!!request.hasLoginToken()) {
    body["LoginToken"] = request.getLoginToken();
  }

  if (!!request.hasProductType()) {
    body["ProductType"] = request.getProductType();
  }

  if (!!request.hasResourceIds()) {
    body["ResourceIds"] = request.getResourceIds();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.getSessionId();
  }

  if (!!request.hasUuid()) {
    body["Uuid"] = request.getUuid();
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
  return json(doRPCRequest(params.getAction(), params.getVersion(), params.getProtocol(), params.getMethod(), params.getAuthType(), params.getBodyType(), req, runtime)).get<ResetAppResourcesResponse>();
}

/**
 * @summary Resets app resources.
 *
 * @param request ResetAppResourcesRequest
 * @return ResetAppResourcesResponse
 */
ResetAppResourcesResponse Client::resetAppResources(const ResetAppResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetAppResourcesWithOptions(request, runtime);
}

/**
 * @summary Restarts app resources.
 *
 * @param request RestartAppResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RestartAppResourcesResponse
 */
RestartAppResourcesResponse Client::restartAppResourcesWithOptions(const RestartAppResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppInstanceGroupId()) {
    body["AppInstanceGroupId"] = request.getAppInstanceGroupId();
  }

  if (!!request.hasBizRegionId()) {
    body["BizRegionId"] = request.getBizRegionId();
  }

  if (!!request.hasClientId()) {
    body["ClientId"] = request.getClientId();
  }

  if (!!request.hasClientIp()) {
    body["ClientIp"] = request.getClientIp();
  }

  if (!!request.hasClientOS()) {
    body["ClientOS"] = request.getClientOS();
  }

  if (!!request.hasClientVersion()) {
    body["ClientVersion"] = request.getClientVersion();
  }

  if (!!request.hasEndUserId()) {
    body["EndUserId"] = request.getEndUserId();
  }

  if (!!request.hasLoginRegionId()) {
    body["LoginRegionId"] = request.getLoginRegionId();
  }

  if (!!request.hasLoginToken()) {
    body["LoginToken"] = request.getLoginToken();
  }

  if (!!request.hasProductType()) {
    body["ProductType"] = request.getProductType();
  }

  if (!!request.hasResourceIds()) {
    body["ResourceIds"] = request.getResourceIds();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.getSessionId();
  }

  if (!!request.hasUuid()) {
    body["Uuid"] = request.getUuid();
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
  return json(doRPCRequest(params.getAction(), params.getVersion(), params.getProtocol(), params.getMethod(), params.getAuthType(), params.getBodyType(), req, runtime)).get<RestartAppResourcesResponse>();
}

/**
 * @summary Restarts app resources.
 *
 * @param request RestartAppResourcesRequest
 * @return RestartAppResourcesResponse
 */
RestartAppResourcesResponse Client::restartAppResources(const RestartAppResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return restartAppResourcesWithOptions(request, runtime);
}

/**
 * @summary Starts app resources.
 *
 * @param request StartAppResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartAppResourcesResponse
 */
StartAppResourcesResponse Client::startAppResourcesWithOptions(const StartAppResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppInstanceGroupId()) {
    body["AppInstanceGroupId"] = request.getAppInstanceGroupId();
  }

  if (!!request.hasBizRegionId()) {
    body["BizRegionId"] = request.getBizRegionId();
  }

  if (!!request.hasClientId()) {
    body["ClientId"] = request.getClientId();
  }

  if (!!request.hasClientIp()) {
    body["ClientIp"] = request.getClientIp();
  }

  if (!!request.hasClientOS()) {
    body["ClientOS"] = request.getClientOS();
  }

  if (!!request.hasClientVersion()) {
    body["ClientVersion"] = request.getClientVersion();
  }

  if (!!request.hasEndUserId()) {
    body["EndUserId"] = request.getEndUserId();
  }

  if (!!request.hasLoginRegionId()) {
    body["LoginRegionId"] = request.getLoginRegionId();
  }

  if (!!request.hasLoginToken()) {
    body["LoginToken"] = request.getLoginToken();
  }

  if (!!request.hasProductType()) {
    body["ProductType"] = request.getProductType();
  }

  if (!!request.hasResourceIds()) {
    body["ResourceIds"] = request.getResourceIds();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.getSessionId();
  }

  if (!!request.hasUuid()) {
    body["Uuid"] = request.getUuid();
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
  return json(doRPCRequest(params.getAction(), params.getVersion(), params.getProtocol(), params.getMethod(), params.getAuthType(), params.getBodyType(), req, runtime)).get<StartAppResourcesResponse>();
}

/**
 * @summary Starts app resources.
 *
 * @param request StartAppResourcesRequest
 * @return StartAppResourcesResponse
 */
StartAppResourcesResponse Client::startAppResources(const StartAppResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startAppResourcesWithOptions(request, runtime);
}

/**
 * @summary Stops a specific app.
 *
 * @param request StopAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopAppResponse
 */
StopAppResponse Client::stopAppWithOptions(const StopAppRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAliUid()) {
    body["AliUid"] = request.getAliUid();
  }

  if (!!request.hasApiType()) {
    body["ApiType"] = request.getApiType();
  }

  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasAppInstanceGroupId()) {
    body["AppInstanceGroupId"] = request.getAppInstanceGroupId();
  }

  if (!!request.hasAppInstanceId()) {
    body["AppInstanceId"] = request.getAppInstanceId();
  }

  if (!!request.hasBizRegionId()) {
    body["BizRegionId"] = request.getBizRegionId();
  }

  if (!!request.hasClientChannel()) {
    body["ClientChannel"] = request.getClientChannel();
  }

  if (!!request.hasClientId()) {
    body["ClientId"] = request.getClientId();
  }

  if (!!request.hasClientIp()) {
    body["ClientIp"] = request.getClientIp();
  }

  if (!!request.hasClientOS()) {
    body["ClientOS"] = request.getClientOS();
  }

  if (!!request.hasClientVersion()) {
    body["ClientVersion"] = request.getClientVersion();
  }

  if (!!request.hasEndUserId()) {
    body["EndUserId"] = request.getEndUserId();
  }

  if (!!request.hasForceStop()) {
    body["ForceStop"] = request.getForceStop();
  }

  if (!!request.hasIdpId()) {
    body["IdpId"] = request.getIdpId();
  }

  if (!!request.hasLoginRegionId()) {
    body["LoginRegionId"] = request.getLoginRegionId();
  }

  if (!!request.hasLoginToken()) {
    body["LoginToken"] = request.getLoginToken();
  }

  if (!!request.hasProductType()) {
    body["ProductType"] = request.getProductType();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.getSessionId();
  }

  if (!!request.hasUuid()) {
    body["Uuid"] = request.getUuid();
  }

  if (!!request.hasWyId()) {
    body["WyId"] = request.getWyId();
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
  return json(doRPCRequest(params.getAction(), params.getVersion(), params.getProtocol(), params.getMethod(), params.getAuthType(), params.getBodyType(), req, runtime)).get<StopAppResponse>();
}

/**
 * @summary Stops a specific app.
 *
 * @param request StopAppRequest
 * @return StopAppResponse
 */
StopAppResponse Client::stopApp(const StopAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopAppWithOptions(request, runtime);
}

/**
 * @summary Stops app resources.
 *
 * @param request StopAppResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopAppResourcesResponse
 */
StopAppResourcesResponse Client::stopAppResourcesWithOptions(const StopAppResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppInstanceGroupId()) {
    body["AppInstanceGroupId"] = request.getAppInstanceGroupId();
  }

  if (!!request.hasBizRegionId()) {
    body["BizRegionId"] = request.getBizRegionId();
  }

  if (!!request.hasClientId()) {
    body["ClientId"] = request.getClientId();
  }

  if (!!request.hasClientIp()) {
    body["ClientIp"] = request.getClientIp();
  }

  if (!!request.hasClientOS()) {
    body["ClientOS"] = request.getClientOS();
  }

  if (!!request.hasClientVersion()) {
    body["ClientVersion"] = request.getClientVersion();
  }

  if (!!request.hasEndUserId()) {
    body["EndUserId"] = request.getEndUserId();
  }

  if (!!request.hasLoginRegionId()) {
    body["LoginRegionId"] = request.getLoginRegionId();
  }

  if (!!request.hasLoginToken()) {
    body["LoginToken"] = request.getLoginToken();
  }

  if (!!request.hasProductType()) {
    body["ProductType"] = request.getProductType();
  }

  if (!!request.hasResourceIds()) {
    body["ResourceIds"] = request.getResourceIds();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.getSessionId();
  }

  if (!!request.hasUuid()) {
    body["Uuid"] = request.getUuid();
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
  return json(doRPCRequest(params.getAction(), params.getVersion(), params.getProtocol(), params.getMethod(), params.getAuthType(), params.getBodyType(), req, runtime)).get<StopAppResourcesResponse>();
}

/**
 * @summary Stops app resources.
 *
 * @param request StopAppResourcesRequest
 * @return StopAppResourcesResponse
 */
StopAppResourcesResponse Client::stopAppResources(const StopAppResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopAppResourcesWithOptions(request, runtime);
}

/**
 * @summary Unbinds an app instance from a user.
 *
 * @param request UnbindRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnbindResponse
 */
UnbindResponse Client::unbindWithOptions(const UnbindRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasAppInstanceGroupId()) {
    body["AppInstanceGroupId"] = request.getAppInstanceGroupId();
  }

  if (!!request.hasAppInstanceId()) {
    body["AppInstanceId"] = request.getAppInstanceId();
  }

  if (!!request.hasAppInstancePersistentId()) {
    body["AppInstancePersistentId"] = request.getAppInstancePersistentId();
  }

  if (!!request.hasClientId()) {
    body["ClientId"] = request.getClientId();
  }

  if (!!request.hasClientIp()) {
    body["ClientIp"] = request.getClientIp();
  }

  if (!!request.hasClientOS()) {
    body["ClientOS"] = request.getClientOS();
  }

  if (!!request.hasClientVersion()) {
    body["ClientVersion"] = request.getClientVersion();
  }

  if (!!request.hasEndUserId()) {
    body["EndUserId"] = request.getEndUserId();
  }

  if (!!request.hasLoginRegionId()) {
    body["LoginRegionId"] = request.getLoginRegionId();
  }

  if (!!request.hasLoginToken()) {
    body["LoginToken"] = request.getLoginToken();
  }

  if (!!request.hasProductType()) {
    body["ProductType"] = request.getProductType();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.getSessionId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
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
  return json(doRPCRequest(params.getAction(), params.getVersion(), params.getProtocol(), params.getMethod(), params.getAuthType(), params.getBodyType(), req, runtime)).get<UnbindResponse>();
}

/**
 * @summary Unbinds an app instance from a user.
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