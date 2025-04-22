// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/ali_genieoauth_210.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_AliGenieoauth210;

Alibabacloud_AliGenieoauth210::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("aligenie"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_AliGenieoauth210::Client::getEndpoint(shared_ptr<string> productId,
                                                          shared_ptr<string> regionId,
                                                          shared_ptr<string> endpointRule,
                                                          shared_ptr<string> network,
                                                          shared_ptr<string> suffix,
                                                          shared_ptr<map<string, string>> endpointMap,
                                                          shared_ptr<string> endpoint) {
  if (!Darabonba_Util::Client::empty(endpoint)) {
    return *endpoint;
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(endpointMap) && !Darabonba_Util::Client::empty(make_shared<string>((*endpointMap)[regionId]))) {
    return (*endpointMap)[regionId];
  }
  return Alibabacloud_EndpointUtil::Client::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

CreatePlayingListResponse Alibabacloud_AliGenieoauth210::Client::createPlayingListWithOptions(shared_ptr<CreatePlayingListRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreatePlayingListShrinkRequest> request = make_shared<CreatePlayingListShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreatePlayingListRequestDeviceInfo>(tmpReq->deviceInfo)) {
    request->deviceInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->deviceInfo, make_shared<string>("DeviceInfo"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreatePlayingListRequestOpenCreatePlayingListRequest>(tmpReq->openCreatePlayingListRequest)) {
    request->openCreatePlayingListRequestShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->openCreatePlayingListRequest, make_shared<string>("OpenCreatePlayingListRequest"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceInfoShrink)) {
    query->insert(pair<string, string>("DeviceInfo", *request->deviceInfoShrink));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->openCreatePlayingListRequestShrink)) {
    body->insert(pair<string, string>("OpenCreatePlayingListRequest", *request->openCreatePlayingListRequestShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreatePlayingList"))},
    {"version", boost::any(string("oauth2_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/oauth2/content/playing/create"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreatePlayingListResponse(callApi(params, req, runtime));
}

CreatePlayingListResponse Alibabacloud_AliGenieoauth210::Client::createPlayingList(shared_ptr<CreatePlayingListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createPlayingListWithOptions(request, headers, runtime);
}

ExecuteSceneResponse Alibabacloud_AliGenieoauth210::Client::executeSceneWithOptions(shared_ptr<ExecuteSceneRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneId)) {
    body->insert(pair<string, string>("SceneId", *request->sceneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExecuteScene"))},
    {"version", boost::any(string("oauth2_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/oauth2/iot/scene/execute"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExecuteSceneResponse(callApi(params, req, runtime));
}

ExecuteSceneResponse Alibabacloud_AliGenieoauth210::Client::executeScene(shared_ptr<ExecuteSceneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return executeSceneWithOptions(request, headers, runtime);
}

GetSceneListResponse Alibabacloud_AliGenieoauth210::Client::getSceneListWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSceneList"))},
    {"version", boost::any(string("oauth2_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/oauth2/iot/scene/list"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSceneListResponse(callApi(params, req, runtime));
}

GetSceneListResponse Alibabacloud_AliGenieoauth210::Client::getSceneList() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getSceneListWithOptions(headers, runtime);
}

GetUserBasicInfoResponse Alibabacloud_AliGenieoauth210::Client::getUserBasicInfoWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetUserBasicInfo"))},
    {"version", boost::any(string("oauth2_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/oauth2/users/basic"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetUserBasicInfoResponse(callApi(params, req, runtime));
}

GetUserBasicInfoResponse Alibabacloud_AliGenieoauth210::Client::getUserBasicInfo() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getUserBasicInfoWithOptions(headers, runtime);
}

GetUserPhoneResponse Alibabacloud_AliGenieoauth210::Client::getUserPhoneWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetUserPhone"))},
    {"version", boost::any(string("oauth2_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/oauth2/user/profile/phone"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetUserPhoneResponse(callApi(params, req, runtime));
}

GetUserPhoneResponse Alibabacloud_AliGenieoauth210::Client::getUserPhone() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getUserPhoneWithOptions(headers, runtime);
}

OAuth2RevocationEndpointResponse Alibabacloud_AliGenieoauth210::Client::oAuth2RevocationEndpointWithOptions(shared_ptr<OAuth2RevocationEndpointRequest> request, shared_ptr<OAuth2RevocationEndpointHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->token)) {
    body->insert(pair<string, string>("Token", *request->token));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tokenTypeHint)) {
    body->insert(pair<string, string>("TokenTypeHint", *request->tokenTypeHint));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAligenieAccessToken)) {
    realHeaders->insert(pair<string, string>("x-acs-aligenie-access-token", Darabonba_Util::Client::toJSONString(headers->xAcsAligenieAccessToken)));
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->authorization)) {
    realHeaders->insert(pair<string, string>("Authorization", Darabonba_Util::Client::toJSONString(headers->authorization)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OAuth2RevocationEndpoint"))},
    {"version", boost::any(string("oauth2_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/oauth2/revoke"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OAuth2RevocationEndpointResponse(callApi(params, req, runtime));
}

OAuth2RevocationEndpointResponse Alibabacloud_AliGenieoauth210::Client::oAuth2RevocationEndpoint(shared_ptr<OAuth2RevocationEndpointRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<OAuth2RevocationEndpointHeaders> headers = make_shared<OAuth2RevocationEndpointHeaders>();
  return oAuth2RevocationEndpointWithOptions(request, headers, runtime);
}

OAuth2TokenEndpointResponse Alibabacloud_AliGenieoauth210::Client::oAuth2TokenEndpointWithOptions(shared_ptr<OAuth2TokenEndpointRequest> request, shared_ptr<OAuth2TokenEndpointHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    body->insert(pair<string, string>("Code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->grantType)) {
    body->insert(pair<string, string>("GrantType", *request->grantType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->redirectUri)) {
    body->insert(pair<string, string>("RedirectUri", *request->redirectUri));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->refreshToken)) {
    body->insert(pair<string, string>("RefreshToken", *request->refreshToken));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAligenieAccessToken)) {
    realHeaders->insert(pair<string, string>("x-acs-aligenie-access-token", Darabonba_Util::Client::toJSONString(headers->xAcsAligenieAccessToken)));
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->authorization)) {
    realHeaders->insert(pair<string, string>("Authorization", Darabonba_Util::Client::toJSONString(headers->authorization)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OAuth2TokenEndpoint"))},
    {"version", boost::any(string("oauth2_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/oauth2/token"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OAuth2TokenEndpointResponse(callApi(params, req, runtime));
}

OAuth2TokenEndpointResponse Alibabacloud_AliGenieoauth210::Client::oAuth2TokenEndpoint(shared_ptr<OAuth2TokenEndpointRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<OAuth2TokenEndpointHeaders> headers = make_shared<OAuth2TokenEndpointHeaders>();
  return oAuth2TokenEndpointWithOptions(request, headers, runtime);
}

PushDeviceNotificationResponse Alibabacloud_AliGenieoauth210::Client::pushDeviceNotificationWithOptions(shared_ptr<PushDeviceNotificationRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<PushDeviceNotificationShrinkRequest> request = make_shared<PushDeviceNotificationShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<PushDeviceNotificationRequestTenantInfo>(tmpReq->tenantInfo)) {
    request->tenantInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantInfo, make_shared<string>("TenantInfo"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<PushDeviceNotificationRequestBody>(tmpReq->body)) {
    request->bodyShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->body, make_shared<string>("body"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantInfoShrink)) {
    body->insert(pair<string, string>("TenantInfo", *request->tenantInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bodyShrink)) {
    body->insert(pair<string, string>("body", *request->bodyShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PushDeviceNotification"))},
    {"version", boost::any(string("oauth2_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/oauth2/device/notification/push"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PushDeviceNotificationResponse(callApi(params, req, runtime));
}

PushDeviceNotificationResponse Alibabacloud_AliGenieoauth210::Client::pushDeviceNotification(shared_ptr<PushDeviceNotificationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return pushDeviceNotificationWithOptions(request, headers, runtime);
}

QueryDeviceListResponse Alibabacloud_AliGenieoauth210::Client::queryDeviceListWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDeviceList"))},
    {"version", boost::any(string("oauth2_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/oauth2/device/list"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDeviceListResponse(callApi(params, req, runtime));
}

QueryDeviceListResponse Alibabacloud_AliGenieoauth210::Client::queryDeviceList() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return queryDeviceListWithOptions(headers, runtime);
}

