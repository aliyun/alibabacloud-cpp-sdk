#include <darabonba/Core.hpp>
#include <alibabacloud/AliGenieoauth2_1_0.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
#include <darabonba/Convert.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::AliGenieoauth2_1_0::Models;
namespace AlibabaCloud
{
namespace AliGenieoauth2_1_0
{

AlibabaCloud::AliGenieoauth2_1_0::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("aligenie", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 创建播放列表
 *
 * @param tmpReq CreatePlayingListRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePlayingListResponse
 */
CreatePlayingListResponse Client::createPlayingListWithOptions(const CreatePlayingListRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreatePlayingListShrinkRequest request = CreatePlayingListShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDeviceInfo()) {
    request.setDeviceInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.deviceInfo(), "DeviceInfo", "json"));
  }

  if (!!tmpReq.hasOpenCreatePlayingListRequest()) {
    request.setOpenCreatePlayingListRequestShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.openCreatePlayingListRequest(), "OpenCreatePlayingListRequest", "json"));
  }

  json query = {};
  if (!!request.hasDeviceInfoShrink()) {
    query["DeviceInfo"] = request.deviceInfoShrink();
  }

  json body = {};
  if (!!request.hasOpenCreatePlayingListRequestShrink()) {
    body["OpenCreatePlayingListRequest"] = request.openCreatePlayingListRequestShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreatePlayingList"},
    {"version" , "oauth2_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/oauth2/content/playing/create")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePlayingListResponse>();
}

/**
 * @summary 创建播放列表
 *
 * @param request CreatePlayingListRequest
 * @return CreatePlayingListResponse
 */
CreatePlayingListResponse Client::createPlayingList(const CreatePlayingListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createPlayingListWithOptions(request, headers, runtime);
}

/**
 * @summary 执行场景
 *
 * @param request ExecuteSceneRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecuteSceneResponse
 */
ExecuteSceneResponse Client::executeSceneWithOptions(const ExecuteSceneRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasSceneId()) {
    body["SceneId"] = request.sceneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExecuteScene"},
    {"version" , "oauth2_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/oauth2/iot/scene/execute")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecuteSceneResponse>();
}

/**
 * @summary 执行场景
 *
 * @param request ExecuteSceneRequest
 * @return ExecuteSceneResponse
 */
ExecuteSceneResponse Client::executeScene(const ExecuteSceneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return executeSceneWithOptions(request, headers, runtime);
}

/**
 * @summary 执行场景（全屋）
 *
 * @param request ExecuteSmartHomeSceneRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecuteSmartHomeSceneResponse
 */
ExecuteSmartHomeSceneResponse Client::executeSmartHomeSceneWithOptions(const ExecuteSmartHomeSceneRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFamilyId()) {
    body["FamilyId"] = request.familyId();
  }

  if (!!request.hasSceneId()) {
    body["SceneId"] = request.sceneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExecuteSmartHomeScene"},
    {"version" , "oauth2_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/oauth2/iot/smart_home/scene/execute")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecuteSmartHomeSceneResponse>();
}

/**
 * @summary 执行场景（全屋）
 *
 * @param request ExecuteSmartHomeSceneRequest
 * @return ExecuteSmartHomeSceneResponse
 */
ExecuteSmartHomeSceneResponse Client::executeSmartHomeScene(const ExecuteSmartHomeSceneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return executeSmartHomeSceneWithOptions(request, headers, runtime);
}

/**
 * @summary 获取场景列表
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSceneListResponse
 */
GetSceneListResponse Client::getSceneListWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSceneList"},
    {"version" , "oauth2_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/oauth2/iot/scene/list")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSceneListResponse>();
}

/**
 * @summary 获取场景列表
 *
 * @return GetSceneListResponse
 */
GetSceneListResponse Client::getSceneList() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getSceneListWithOptions(headers, runtime);
}

/**
 * @summary 获取场景列表（全屋）
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSmartHomeSceneListResponse
 */
GetSmartHomeSceneListResponse Client::getSmartHomeSceneListWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSmartHomeSceneList"},
    {"version" , "oauth2_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/oauth2/iot/smart_home/scene/list")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSmartHomeSceneListResponse>();
}

/**
 * @summary 获取场景列表（全屋）
 *
 * @return GetSmartHomeSceneListResponse
 */
GetSmartHomeSceneListResponse Client::getSmartHomeSceneList() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getSmartHomeSceneListWithOptions(headers, runtime);
}

/**
 * @summary 获取
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserBasicInfoResponse
 */
GetUserBasicInfoResponse Client::getUserBasicInfoWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUserBasicInfo"},
    {"version" , "oauth2_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/oauth2/users/basic")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUserBasicInfoResponse>();
}

/**
 * @summary 获取
 *
 * @return GetUserBasicInfoResponse
 */
GetUserBasicInfoResponse Client::getUserBasicInfo() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getUserBasicInfoWithOptions(headers, runtime);
}

/**
 * @summary 获取天猫精灵用户绑定的手机号
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserPhoneResponse
 */
GetUserPhoneResponse Client::getUserPhoneWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUserPhone"},
    {"version" , "oauth2_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/oauth2/user/profile/phone")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUserPhoneResponse>();
}

/**
 * @summary 获取天猫精灵用户绑定的手机号
 *
 * @return GetUserPhoneResponse
 */
GetUserPhoneResponse Client::getUserPhone() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getUserPhoneWithOptions(headers, runtime);
}

/**
 * @summary OAuth2令牌撤销端点
 *
 * @param request OAuth2RevocationEndpointRequest
 * @param headers OAuth2RevocationEndpointHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return OAuth2RevocationEndpointResponse
 */
OAuth2RevocationEndpointResponse Client::oAuth2RevocationEndpointWithOptions(const OAuth2RevocationEndpointRequest &request, const OAuth2RevocationEndpointHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasToken()) {
    body["Token"] = request.token();
  }

  if (!!request.hasTokenTypeHint()) {
    body["TokenTypeHint"] = request.tokenTypeHint();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.xAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.authorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "OAuth2RevocationEndpoint"},
    {"version" , "oauth2_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/oauth2/revoke")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OAuth2RevocationEndpointResponse>();
}

/**
 * @summary OAuth2令牌撤销端点
 *
 * @param request OAuth2RevocationEndpointRequest
 * @return OAuth2RevocationEndpointResponse
 */
OAuth2RevocationEndpointResponse Client::oAuth2RevocationEndpoint(const OAuth2RevocationEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  OAuth2RevocationEndpointHeaders headers = OAuth2RevocationEndpointHeaders();
  return oAuth2RevocationEndpointWithOptions(request, headers, runtime);
}

/**
 * @summary OAuth2令牌端点
 *
 * @param request OAuth2TokenEndpointRequest
 * @param headers OAuth2TokenEndpointHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return OAuth2TokenEndpointResponse
 */
OAuth2TokenEndpointResponse Client::oAuth2TokenEndpointWithOptions(const OAuth2TokenEndpointRequest &request, const OAuth2TokenEndpointHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCode()) {
    body["Code"] = request.code();
  }

  if (!!request.hasGrantType()) {
    body["GrantType"] = request.grantType();
  }

  if (!!request.hasRedirectUri()) {
    body["RedirectUri"] = request.redirectUri();
  }

  if (!!request.hasRefreshToken()) {
    body["RefreshToken"] = request.refreshToken();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.xAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.authorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "OAuth2TokenEndpoint"},
    {"version" , "oauth2_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/oauth2/token")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OAuth2TokenEndpointResponse>();
}

/**
 * @summary OAuth2令牌端点
 *
 * @param request OAuth2TokenEndpointRequest
 * @return OAuth2TokenEndpointResponse
 */
OAuth2TokenEndpointResponse Client::oAuth2TokenEndpoint(const OAuth2TokenEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  OAuth2TokenEndpointHeaders headers = OAuth2TokenEndpointHeaders();
  return oAuth2TokenEndpointWithOptions(request, headers, runtime);
}

/**
 * @summary 推送设备通知
 *
 * @param tmpReq PushDeviceNotificationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return PushDeviceNotificationResponse
 */
PushDeviceNotificationResponse Client::pushDeviceNotificationWithOptions(const PushDeviceNotificationRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  PushDeviceNotificationShrinkRequest request = PushDeviceNotificationShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTenantInfo()) {
    request.setTenantInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantInfo(), "TenantInfo", "json"));
  }

  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.body(), "body", "json"));
  }

  json body = {};
  if (!!request.hasTenantInfoShrink()) {
    body["TenantInfo"] = request.tenantInfoShrink();
  }

  if (!!request.hasBodyShrink()) {
    body["body"] = request.bodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "PushDeviceNotification"},
    {"version" , "oauth2_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/oauth2/device/notification/push")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PushDeviceNotificationResponse>();
}

/**
 * @summary 推送设备通知
 *
 * @param request PushDeviceNotificationRequest
 * @return PushDeviceNotificationResponse
 */
PushDeviceNotificationResponse Client::pushDeviceNotification(const PushDeviceNotificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return pushDeviceNotificationWithOptions(request, headers, runtime);
}

/**
 * @summary 查询设备列表
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryDeviceListResponse
 */
QueryDeviceListResponse Client::queryDeviceListWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryDeviceList"},
    {"version" , "oauth2_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/oauth2/device/list")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryDeviceListResponse>();
}

/**
 * @summary 查询设备列表
 *
 * @return QueryDeviceListResponse
 */
QueryDeviceListResponse Client::queryDeviceList() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return queryDeviceListWithOptions(headers, runtime);
}
} // namespace AlibabaCloud
} // namespace AliGenieoauth2_1_0