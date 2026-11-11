#include <darabonba/Core.hpp>
#include <alibabacloud/AppstreamCenter20210903.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/gateway/POP.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::Gateway;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::AppstreamCenter20210903::Models;
namespace AlibabaCloud
{
namespace AppstreamCenter20210903
{

AlibabaCloud::AppstreamCenter20210903::Client::Client(Config &config): OpenApiClient(config){
  this->_productId = "appstream-center";
  shared_ptr<POP> gatewayClient = make_shared<POP>();
  this->_spi = gatewayClient;
  this->_endpointRule = "regional";
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
 * @summary Retrieves the connection credentials for cloud applications.
 *
 * @description It is a time-consuming operation to issue connection credentials. Therefore, you may need to invoke this API operation multiple times to obtain the connection credentials.
 * 1. When you invoke the API for the first time, an application instance is allocated to the specified convenience account, and the application is started. The start node ID (`TaskId`) is returned.
 * 2. When you invoke the API subsequently, you must pass the `TaskId` parameter as a request parameter to check whether the node is completed. When the returned node status (`TaskStatus`) is `Finished`, the connection ticket (`Ticket`) is also returned.
 * > 
 * > - If the startup process is fast enough, the connection ticket (`Ticket`) may also be returned when you invoke the API for the first time.
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
 * @summary Retrieves the connection credentials for cloud applications.
 *
 * @description It is a time-consuming operation to issue connection credentials. Therefore, you may need to invoke this API operation multiple times to obtain the connection credentials.
 * 1. When you invoke the API for the first time, an application instance is allocated to the specified convenience account, and the application is started. The start node ID (`TaskId`) is returned.
 * 2. When you invoke the API subsequently, you must pass the `TaskId` parameter as a request parameter to check whether the node is completed. When the returned node status (`TaskStatus`) is `Finished`, the connection ticket (`Ticket`) is also returned.
 * > 
 * > - If the startup process is fast enough, the connection ticket (`Ticket`) may also be returned when you invoke the API for the first time.
 *
 * @param request GetConnectionTicketRequest
 * @return GetConnectionTicketResponse
 */
GetConnectionTicketResponse Client::getConnectionTicket(const GetConnectionTicketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getConnectionTicketWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of published applications.
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
 * @summary Retrieves a list of published applications.
 *
 * @param request ListPublishedAppInfoRequest
 * @return ListPublishedAppInfoResponse
 */
ListPublishedAppInfoResponse Client::listPublishedAppInfo(const ListPublishedAppInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPublishedAppInfoWithOptions(request, runtime);
}

/**
 * @summary Queries running applications.
 *
 * @description ## Prerequisites
 * This operation is an anonymous API operation, but the server still verifies the logon status. The `LoginToken` and `SessionId` request parameters are actually required. If either parameter is missing, an HTTP 400 error is returned with the error code `InvalidParameter.loginToken` or `InvalidParameter.sessionId`.
 * ## Obtain credentials
 * To obtain the `LoginToken` and `SessionId` by using `GetLoginToken`, call the `GetLoginToken` operation of the `appstream-center` 2021-02-20 version. The 2021-09-03 version does not provide this operation. You can also call `RefreshLoginToken` to update and obtain the `LoginToken`.
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
 * @summary Queries running applications.
 *
 * @description ## Prerequisites
 * This operation is an anonymous API operation, but the server still verifies the logon status. The `LoginToken` and `SessionId` request parameters are actually required. If either parameter is missing, an HTTP 400 error is returned with the error code `InvalidParameter.loginToken` or `InvalidParameter.sessionId`.
 * ## Obtain credentials
 * To obtain the `LoginToken` and `SessionId` by using `GetLoginToken`, call the `GetLoginToken` operation of the `appstream-center` 2021-02-20 version. The 2021-09-03 version does not provide this operation. You can also call `RefreshLoginToken` to update and obtain the `LoginToken`.
 *
 * @param request ListRunningAppsRequest
 * @return ListRunningAppsResponse
 */
ListRunningAppsResponse Client::listRunningApps(const ListRunningAppsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRunningAppsWithOptions(request, runtime);
}

/**
 * @summary Resets application resources.
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
 * @summary Resets application resources.
 *
 * @param request ResetAppResourcesRequest
 * @return ResetAppResourcesResponse
 */
ResetAppResourcesResponse Client::resetAppResources(const ResetAppResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetAppResourcesWithOptions(request, runtime);
}

/**
 * @summary Restarts application resources.
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
 * @summary Restarts application resources.
 *
 * @param request RestartAppResourcesRequest
 * @return RestartAppResourcesResponse
 */
RestartAppResourcesResponse Client::restartAppResources(const RestartAppResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return restartAppResourcesWithOptions(request, runtime);
}

/**
 * @summary Starts application resources.
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
 * @summary Starts application resources.
 *
 * @param request StartAppResourcesRequest
 * @return StartAppResourcesResponse
 */
StartAppResourcesResponse Client::startAppResources(const StartAppResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startAppResourcesWithOptions(request, runtime);
}

/**
 * @summary Stops a specified application.
 *
 * @description ## Credential acquisition
 * To obtain the `LoginToken` and `SessionId` by using `GetLoginToken`, call the `GetLoginToken` operation of the `appstream-center` 2021-02-20 version. The 2021-09-03 version does not provide this operation. You can also update and obtain the `LoginToken` by using `RefreshLoginToken`.
 * ### Required parameters and authentication invocation flow for GetLoginToken (2021-02-20 version)
 * API documentation: [GetLoginToken (2021-02-20)](https://www.alibabacloud.com/help/en/wuying-appstreaming/developer-reference/api-appstream-center-2021-02-20-getlogintoken)
 * Required metric descriptions:
 * - `ClientId`: Required. The unique ID generated by the client, serving as the identity for the client that initiates the logon. Reuse the same value within the same session.
 * - `LoginIdentifier`: The enterprise identity (i.e., enterprise alias). This parameter is required when you use the enterprise identity logon method. Note that the parameter name is `LoginIdentifier`, not `TenantAlias`.
 * - When you use a convenience account or an AD domain account for authentication, the Settings for `CurrentStage` must be `ADPassword`, and you must provide both `EndUserId` (username) and `Password` (password).
 * Complete authentication invocation flow:
 * 1. Invoke `GetLoginToken` for the first time with `ClientId`, `LoginIdentifier`, `CurrentStage` based on the logon method, and the corresponding credentials. Save the returned `LoginToken` and `SessionId`. `SessionId` is returned only during the first invocation in the same session and must be reused in subsequent stage invocations.
 * 2. If `NextStage` (such as `MFAVerify`, `TokenVerify`, or `ChangePassword`) is returned, carry the same `SessionId` and `ClientId`, update the Settings of `CurrentStage` to the value of `NextStage`, and provide the parameters required for this stage (such as `AuthenticationCode` for the `MFAVerify` stage and `TokenCode` for the `TokenVerify` stage). Repeat the invocation until the final `LoginToken` is obtained.
 * 3. Use the final `LoginToken` and `SessionId` to invoke this operation (`StopApp`).
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
 * @summary Stops a specified application.
 *
 * @description ## Credential acquisition
 * To obtain the `LoginToken` and `SessionId` by using `GetLoginToken`, call the `GetLoginToken` operation of the `appstream-center` 2021-02-20 version. The 2021-09-03 version does not provide this operation. You can also update and obtain the `LoginToken` by using `RefreshLoginToken`.
 * ### Required parameters and authentication invocation flow for GetLoginToken (2021-02-20 version)
 * API documentation: [GetLoginToken (2021-02-20)](https://www.alibabacloud.com/help/en/wuying-appstreaming/developer-reference/api-appstream-center-2021-02-20-getlogintoken)
 * Required metric descriptions:
 * - `ClientId`: Required. The unique ID generated by the client, serving as the identity for the client that initiates the logon. Reuse the same value within the same session.
 * - `LoginIdentifier`: The enterprise identity (i.e., enterprise alias). This parameter is required when you use the enterprise identity logon method. Note that the parameter name is `LoginIdentifier`, not `TenantAlias`.
 * - When you use a convenience account or an AD domain account for authentication, the Settings for `CurrentStage` must be `ADPassword`, and you must provide both `EndUserId` (username) and `Password` (password).
 * Complete authentication invocation flow:
 * 1. Invoke `GetLoginToken` for the first time with `ClientId`, `LoginIdentifier`, `CurrentStage` based on the logon method, and the corresponding credentials. Save the returned `LoginToken` and `SessionId`. `SessionId` is returned only during the first invocation in the same session and must be reused in subsequent stage invocations.
 * 2. If `NextStage` (such as `MFAVerify`, `TokenVerify`, or `ChangePassword`) is returned, carry the same `SessionId` and `ClientId`, update the Settings of `CurrentStage` to the value of `NextStage`, and provide the parameters required for this stage (such as `AuthenticationCode` for the `MFAVerify` stage and `TokenCode` for the `TokenVerify` stage). Repeat the invocation until the final `LoginToken` is obtained.
 * 3. Use the final `LoginToken` and `SessionId` to invoke this operation (`StopApp`).
 *
 * @param request StopAppRequest
 * @return StopAppResponse
 */
StopAppResponse Client::stopApp(const StopAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopAppWithOptions(request, runtime);
}

/**
 * @summary Stops application resources.
 *
 * @description ## Before you begin
 * Before you call this operation, you must complete user logon authentication to obtain the `LoginToken` and `SessionId`. This `StopAppResources` operation uses the **2021-09-03** version of `appstream-center`. The prerequisite logon operation uses the **2021-02-20** version of [GetLoginToken](https://www.alibabacloud.com/help/en/wuying-appstreaming/developer-reference/api-appstream-center-2021-02-20-getlogintoken). Use the respective API versions for each operation.
 * ### 1. Prepare the enterprise identifier and account information
 * The following procedure applies to password authentication for convenience accounts or AD domain accounts that log on by using an enterprise identifier.
 * | Parameter | Description |
 * | --- | --- |
 * | `ClientId` | The unique ID generated by the client. This parameter is required when you call `GetLoginToken`. The same client ID is reused in the following call sequence. |
 * | `LoginIdentifier` | The enterprise identifier for logon, which is the `TenantAlias`. The parameter name in the logon request is `LoginIdentifier`, not `TenantAlias`. To query the logon configuration of this identifier, you can call [FindIdpListByLoginIdentifier (2021-02-20)](https://www.alibabacloud.com/help/en/wuying-appstreaming/developer-reference/api-appstream-center-2021-02-20-findidplistbyloginidentifier). The `TenantAliasInfo.TenantAlias` field in the response indicates the enterprise identifier. |
 * | `CurrentStage` | Set this parameter to `ADPassword` for password authentication. This value applies to both convenience accounts and AD domain accounts, not only AD domain accounts. |
 * | `EndUserId` | The username of the convenience account or AD domain account. This parameter is required when `CurrentStage` is set to `ADPassword`. |
 * | `Password` | The password of the corresponding account. This parameter is required when `CurrentStage` is set to `ADPassword`. |
 * ### 2. Continue logon based on the returned authentication stage
 * After you invoke `GetLoginToken` for the first time, save the returned `SessionId`. This value is returned only during the first invocation in the same logon session. If you need to authenticate further, include the saved `SessionId` in subsequent requests. Do not clear this value even if it is not returned in subsequent responses.
 * Determine whether you still need to authenticate based on the `NextStage` field in the response, and set the required next authentication stage as the `CurrentStage` for subsequent requests. Examples:
 * | Next authentication stage | What to do next |
 * | --- | --- |
 * | `MFAVerify` | Include the `SessionId` and the `AuthenticationCode` generated by the virtual MFA device to continue to invoke `GetLoginToken`. |
 * | `TokenVerify` | Include the `SessionId` and the client secondary authentication verification code `TokenCode` to continue to authenticate. |
 * | `ChangePassword` | Specify `OldPassword` and `NewPassword` as required to complete the password change stage. |
 * | `MFABind` or other authentication stages | Complete the corresponding operations based on the actual returned stage and the `GetLoginToken` documentation. Do not directly apply the request parameters of `MFAVerify`. |
 * The authentication stages are determined by the account configuration and the result of the current logon. Not every logon must go through all the preceding stages in sequence. Invoke `StopAppResources` only after logon authentication is complete and the `LoginToken` is obtained. Do not proceed with the shutdown of resources if authentication failed or if there are pending authentication stages.
 * ### 3. Call sequence example
 * The following is pseudocode for parameter passing and is not an executable SDK example. `clientId`, `tenantAlias`, `endUserId`, `password`, and `authenticationCode` are runtime variables of the caller. `resourceIds`, `productType`, and `appInstanceGroupId` are business parameters for this operation. Do not write real passwords, verification codes, or logon credentials in examples or logs.
 * ```text
 * login1 = GetLoginToken(version="2021-02-20",
 *     ClientId=clientId, LoginIdentifier=tenantAlias,
 *     CurrentStage="ADPassword", EndUserId=endUserId, Password=password)
 * sessionId = login1.SessionId
 * loginResult = login1
 * if loginResult.NextStage == "MFAVerify":
 *     loginResult = GetLoginToken(version="2021-02-20",
 *         ClientId=clientId, LoginIdentifier=tenantAlias,
 *         SessionId=sessionId, CurrentStage="MFAVerify",
 *         AuthenticationCode=authenticationCode)
 * ```
 * If other authentication stages are still required, continue processing based on `NextStage`. Do not treat the preceding single MFA call as a fixed endpoint. After logon is complete, call this operation by using the `LoginToken` obtained during this logon and the saved `SessionId`:
 * ```text
 * StopAppResources(version="2021-09-03",
 *     ClientId=clientId, LoginToken=loginResult.LoginToken, SessionId=sessionId,
 *     ProductType=productType, AppInstanceGroupId=appInstanceGroupId,
 *     ResourceIds=resourceIds)
 * ```
 * `Password`, `LoginIdentifier`, and `CurrentStage` belong to the prerequisite logon request and are not request parameters of `StopAppResources`. For the rules on how to specify other parameters and resource IDs for this operation, see the request parameter table below.
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
 * @summary Stops application resources.
 *
 * @description ## Before you begin
 * Before you call this operation, you must complete user logon authentication to obtain the `LoginToken` and `SessionId`. This `StopAppResources` operation uses the **2021-09-03** version of `appstream-center`. The prerequisite logon operation uses the **2021-02-20** version of [GetLoginToken](https://www.alibabacloud.com/help/en/wuying-appstreaming/developer-reference/api-appstream-center-2021-02-20-getlogintoken). Use the respective API versions for each operation.
 * ### 1. Prepare the enterprise identifier and account information
 * The following procedure applies to password authentication for convenience accounts or AD domain accounts that log on by using an enterprise identifier.
 * | Parameter | Description |
 * | --- | --- |
 * | `ClientId` | The unique ID generated by the client. This parameter is required when you call `GetLoginToken`. The same client ID is reused in the following call sequence. |
 * | `LoginIdentifier` | The enterprise identifier for logon, which is the `TenantAlias`. The parameter name in the logon request is `LoginIdentifier`, not `TenantAlias`. To query the logon configuration of this identifier, you can call [FindIdpListByLoginIdentifier (2021-02-20)](https://www.alibabacloud.com/help/en/wuying-appstreaming/developer-reference/api-appstream-center-2021-02-20-findidplistbyloginidentifier). The `TenantAliasInfo.TenantAlias` field in the response indicates the enterprise identifier. |
 * | `CurrentStage` | Set this parameter to `ADPassword` for password authentication. This value applies to both convenience accounts and AD domain accounts, not only AD domain accounts. |
 * | `EndUserId` | The username of the convenience account or AD domain account. This parameter is required when `CurrentStage` is set to `ADPassword`. |
 * | `Password` | The password of the corresponding account. This parameter is required when `CurrentStage` is set to `ADPassword`. |
 * ### 2. Continue logon based on the returned authentication stage
 * After you invoke `GetLoginToken` for the first time, save the returned `SessionId`. This value is returned only during the first invocation in the same logon session. If you need to authenticate further, include the saved `SessionId` in subsequent requests. Do not clear this value even if it is not returned in subsequent responses.
 * Determine whether you still need to authenticate based on the `NextStage` field in the response, and set the required next authentication stage as the `CurrentStage` for subsequent requests. Examples:
 * | Next authentication stage | What to do next |
 * | --- | --- |
 * | `MFAVerify` | Include the `SessionId` and the `AuthenticationCode` generated by the virtual MFA device to continue to invoke `GetLoginToken`. |
 * | `TokenVerify` | Include the `SessionId` and the client secondary authentication verification code `TokenCode` to continue to authenticate. |
 * | `ChangePassword` | Specify `OldPassword` and `NewPassword` as required to complete the password change stage. |
 * | `MFABind` or other authentication stages | Complete the corresponding operations based on the actual returned stage and the `GetLoginToken` documentation. Do not directly apply the request parameters of `MFAVerify`. |
 * The authentication stages are determined by the account configuration and the result of the current logon. Not every logon must go through all the preceding stages in sequence. Invoke `StopAppResources` only after logon authentication is complete and the `LoginToken` is obtained. Do not proceed with the shutdown of resources if authentication failed or if there are pending authentication stages.
 * ### 3. Call sequence example
 * The following is pseudocode for parameter passing and is not an executable SDK example. `clientId`, `tenantAlias`, `endUserId`, `password`, and `authenticationCode` are runtime variables of the caller. `resourceIds`, `productType`, and `appInstanceGroupId` are business parameters for this operation. Do not write real passwords, verification codes, or logon credentials in examples or logs.
 * ```text
 * login1 = GetLoginToken(version="2021-02-20",
 *     ClientId=clientId, LoginIdentifier=tenantAlias,
 *     CurrentStage="ADPassword", EndUserId=endUserId, Password=password)
 * sessionId = login1.SessionId
 * loginResult = login1
 * if loginResult.NextStage == "MFAVerify":
 *     loginResult = GetLoginToken(version="2021-02-20",
 *         ClientId=clientId, LoginIdentifier=tenantAlias,
 *         SessionId=sessionId, CurrentStage="MFAVerify",
 *         AuthenticationCode=authenticationCode)
 * ```
 * If other authentication stages are still required, continue processing based on `NextStage`. Do not treat the preceding single MFA call as a fixed endpoint. After logon is complete, call this operation by using the `LoginToken` obtained during this logon and the saved `SessionId`:
 * ```text
 * StopAppResources(version="2021-09-03",
 *     ClientId=clientId, LoginToken=loginResult.LoginToken, SessionId=sessionId,
 *     ProductType=productType, AppInstanceGroupId=appInstanceGroupId,
 *     ResourceIds=resourceIds)
 * ```
 * `Password`, `LoginIdentifier`, and `CurrentStage` belong to the prerequisite logon request and are not request parameters of `StopAppResources`. For the rules on how to specify other parameters and resource IDs for this operation, see the request parameter table below.
 *
 * @param request StopAppResourcesRequest
 * @return StopAppResourcesResponse
 */
StopAppResourcesResponse Client::stopAppResources(const StopAppResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopAppResourcesWithOptions(request, runtime);
}

/**
 * @summary Unbinds an application instance from a user.
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

  if (!!request.hasSessionToken()) {
    body["SessionToken"] = request.getSessionToken();
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
 * @summary Unbinds an application instance from a user.
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