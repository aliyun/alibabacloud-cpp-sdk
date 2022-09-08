// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/ali_geniessp_10.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_AliGeniessp10;

Alibabacloud_AliGeniessp10::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("aligenie"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_AliGeniessp10::Client::getEndpoint(shared_ptr<string> productId,
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

AddAndRemoveFavoriteContentResponse Alibabacloud_AliGeniessp10::Client::addAndRemoveFavoriteContent(shared_ptr<AddAndRemoveFavoriteContentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<AddAndRemoveFavoriteContentHeaders> headers = make_shared<AddAndRemoveFavoriteContentHeaders>();
  return addAndRemoveFavoriteContentWithOptions(request, headers, runtime);
}

AddAndRemoveFavoriteContentResponse Alibabacloud_AliGeniessp10::Client::addAndRemoveFavoriteContentWithOptions(shared_ptr<AddAndRemoveFavoriteContentRequest> tmpReq, shared_ptr<AddAndRemoveFavoriteContentHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<AddAndRemoveFavoriteContentShrinkRequest> request = make_shared<AddAndRemoveFavoriteContentShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<AddAndRemoveFavoriteContentRequestDeviceInfo>(tmpReq->deviceInfo)) {
    request->deviceInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->deviceInfo->toMap()), make_shared<string>("DeviceInfo"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<AddAndRemoveFavoriteContentRequestOpenAddAndRemoveFavoriteContentRequest>(tmpReq->openAddAndRemoveFavoriteContentRequest)) {
    request->openAddAndRemoveFavoriteContentRequestShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->openAddAndRemoveFavoriteContentRequest->toMap()), make_shared<string>("OpenAddAndRemoveFavoriteContentRequest"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<AddAndRemoveFavoriteContentRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->userInfo->toMap()), make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceInfoShrink)) {
    query->insert(pair<string, string>("DeviceInfo", *request->deviceInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userInfoShrink)) {
    query->insert(pair<string, string>("UserInfo", *request->userInfoShrink));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->openAddAndRemoveFavoriteContentRequestShrink)) {
    body->insert(pair<string, string>("OpenAddAndRemoveFavoriteContentRequest", *request->openAddAndRemoveFavoriteContentRequestShrink));
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
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddAndRemoveFavoriteContent"))},
    {"version", boost::any(string("ssp_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ssp/AddAndRemoveFavoriteContent"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddAndRemoveFavoriteContentResponse(callApi(params, req, runtime));
}

AddSubResponse Alibabacloud_AliGeniessp10::Client::addSub(shared_ptr<AddSubRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<AddSubHeaders> headers = make_shared<AddSubHeaders>();
  return addSubWithOptions(request, headers, runtime);
}

AddSubResponse Alibabacloud_AliGeniessp10::Client::addSubWithOptions(shared_ptr<AddSubRequest> tmpReq, shared_ptr<AddSubHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<AddSubShrinkRequest> request = make_shared<AddSubShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<AddSubRequestAddSubscriptionInfoRequest>(tmpReq->addSubscriptionInfoRequest)) {
    request->addSubscriptionInfoRequestShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->addSubscriptionInfoRequest->toMap()), make_shared<string>("AddSubscriptionInfoRequest"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<AddSubRequestDeviceInfo>(tmpReq->deviceInfo)) {
    request->deviceInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->deviceInfo->toMap()), make_shared<string>("DeviceInfo"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<AddSubRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->userInfo->toMap()), make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->addSubscriptionInfoRequestShrink)) {
    query->insert(pair<string, string>("AddSubscriptionInfoRequest", *request->addSubscriptionInfoRequestShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceInfoShrink)) {
    query->insert(pair<string, string>("DeviceInfo", *request->deviceInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userInfoShrink)) {
    query->insert(pair<string, string>("UserInfo", *request->userInfoShrink));
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
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddSub"))},
    {"version", boost::any(string("ssp_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ssp/addSub"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddSubResponse(callApi(params, req, runtime));
}

AuthLoginWithAligenieUserInfoResponse Alibabacloud_AliGeniessp10::Client::authLoginWithAligenieUserInfo(shared_ptr<AuthLoginWithAligenieUserInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<AuthLoginWithAligenieUserInfoHeaders> headers = make_shared<AuthLoginWithAligenieUserInfoHeaders>();
  return authLoginWithAligenieUserInfoWithOptions(request, headers, runtime);
}

AuthLoginWithAligenieUserInfoResponse Alibabacloud_AliGeniessp10::Client::authLoginWithAligenieUserInfoWithOptions(shared_ptr<AuthLoginWithAligenieUserInfoRequest> request, shared_ptr<AuthLoginWithAligenieUserInfoHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->encryptedAligenieUserIdentifier)) {
    body->insert(pair<string, string>("EncryptedAligenieUserIdentifier", *request->encryptedAligenieUserIdentifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    body->insert(pair<string, string>("SessionId", *request->sessionId));
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
    {"action", boost::any(string("AuthLoginWithAligenieUserInfo"))},
    {"version", boost::any(string("ssp_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ssp/authLoginWithAligenieUserInfo"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AuthLoginWithAligenieUserInfoResponse(callApi(params, req, runtime));
}

AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberResponse Alibabacloud_AliGeniessp10::Client::authLoginWithAligenieUserInfoGeneratedByPhoneNumber(shared_ptr<AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberHeaders> headers = make_shared<AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberHeaders>();
  return authLoginWithAligenieUserInfoGeneratedByPhoneNumberWithOptions(request, headers, runtime);
}

AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberResponse Alibabacloud_AliGeniessp10::Client::authLoginWithAligenieUserInfoGeneratedByPhoneNumberWithOptions(shared_ptr<AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberRequest> request, shared_ptr<AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    body->insert(pair<string, string>("SessionId", *request->sessionId));
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
    {"action", boost::any(string("AuthLoginWithAligenieUserInfoGeneratedByPhoneNumber"))},
    {"version", boost::any(string("ssp_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ssp/authLoginWithAligenieUserInfoGeneratedByPhoneNumber"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberResponse(callApi(params, req, runtime));
}

AuthLoginWithTaobaoUserInfoResponse Alibabacloud_AliGeniessp10::Client::authLoginWithTaobaoUserInfo(shared_ptr<AuthLoginWithTaobaoUserInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<AuthLoginWithTaobaoUserInfoHeaders> headers = make_shared<AuthLoginWithTaobaoUserInfoHeaders>();
  return authLoginWithTaobaoUserInfoWithOptions(request, headers, runtime);
}

AuthLoginWithTaobaoUserInfoResponse Alibabacloud_AliGeniessp10::Client::authLoginWithTaobaoUserInfoWithOptions(shared_ptr<AuthLoginWithTaobaoUserInfoRequest> request, shared_ptr<AuthLoginWithTaobaoUserInfoHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->encryptedTaobaoUserIdentifier)) {
    body->insert(pair<string, string>("EncryptedTaobaoUserIdentifier", *request->encryptedTaobaoUserIdentifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    body->insert(pair<string, string>("SessionId", *request->sessionId));
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
    {"action", boost::any(string("AuthLoginWithTaobaoUserInfo"))},
    {"version", boost::any(string("ssp_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ssp/authLoginWithTaobaoUserInfo"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AuthLoginWithTaobaoUserInfoResponse(callApi(params, req, runtime));
}

AuthLoginWithThirdUserInfoResponse Alibabacloud_AliGeniessp10::Client::authLoginWithThirdUserInfo(shared_ptr<AuthLoginWithThirdUserInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<AuthLoginWithThirdUserInfoHeaders> headers = make_shared<AuthLoginWithThirdUserInfoHeaders>();
  return authLoginWithThirdUserInfoWithOptions(request, headers, runtime);
}

AuthLoginWithThirdUserInfoResponse Alibabacloud_AliGeniessp10::Client::authLoginWithThirdUserInfoWithOptions(shared_ptr<AuthLoginWithThirdUserInfoRequest> tmpReq, shared_ptr<AuthLoginWithThirdUserInfoHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<AuthLoginWithThirdUserInfoShrinkRequest> request = make_shared<AuthLoginWithThirdUserInfoShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->extInfo)) {
    request->extInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->extInfo, make_shared<string>("ExtInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->extInfoShrink)) {
    body->insert(pair<string, string>("ExtInfo", *request->extInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneCode)) {
    body->insert(pair<string, string>("SceneCode", *request->sceneCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdUserIdentifier)) {
    body->insert(pair<string, string>("ThirdUserIdentifier", *request->thirdUserIdentifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdUserType)) {
    body->insert(pair<string, string>("ThirdUserType", *request->thirdUserType));
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
    {"action", boost::any(string("AuthLoginWithThirdUserInfo"))},
    {"version", boost::any(string("ssp_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ssp/authLoginWithThirdUserInfo"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AuthLoginWithThirdUserInfoResponse(callApi(params, req, runtime));
}

CheckAuthCodeBindForExtResponse Alibabacloud_AliGeniessp10::Client::checkAuthCodeBindForExt(shared_ptr<CheckAuthCodeBindForExtRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CheckAuthCodeBindForExtHeaders> headers = make_shared<CheckAuthCodeBindForExtHeaders>();
  return checkAuthCodeBindForExtWithOptions(request, headers, runtime);
}

CheckAuthCodeBindForExtResponse Alibabacloud_AliGeniessp10::Client::checkAuthCodeBindForExtWithOptions(shared_ptr<CheckAuthCodeBindForExtRequest> tmpReq, shared_ptr<CheckAuthCodeBindForExtHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CheckAuthCodeBindForExtShrinkRequest> request = make_shared<CheckAuthCodeBindForExtShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CheckAuthCodeBindForExtRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->userInfo->toMap()), make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authCode)) {
    query->insert(pair<string, string>("AuthCode", *request->authCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->encodeKey)) {
    query->insert(pair<string, string>("EncodeKey", *request->encodeKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->encodeType)) {
    query->insert(pair<string, string>("EncodeType", *request->encodeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userInfoShrink)) {
    query->insert(pair<string, string>("UserInfo", *request->userInfoShrink));
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
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckAuthCodeBindForExt"))},
    {"version", boost::any(string("ssp_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ssp/checkAuthCodeBindForExt"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckAuthCodeBindForExtResponse(callApi(params, req, runtime));
}

CreateAlarmResponse Alibabacloud_AliGeniessp10::Client::createAlarm(shared_ptr<CreateAlarmRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CreateAlarmHeaders> headers = make_shared<CreateAlarmHeaders>();
  return createAlarmWithOptions(request, headers, runtime);
}

CreateAlarmResponse Alibabacloud_AliGeniessp10::Client::createAlarmWithOptions(shared_ptr<CreateAlarmRequest> tmpReq, shared_ptr<CreateAlarmHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateAlarmShrinkRequest> request = make_shared<CreateAlarmShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateAlarmRequestDeviceInfo>(tmpReq->deviceInfo)) {
    request->deviceInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->deviceInfo->toMap()), make_shared<string>("DeviceInfo"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateAlarmRequestPayload>(tmpReq->payload)) {
    request->payloadShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->payload->toMap()), make_shared<string>("Payload"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateAlarmRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->userInfo->toMap()), make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceInfoShrink)) {
    body->insert(pair<string, string>("DeviceInfo", *request->deviceInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->payloadShrink)) {
    body->insert(pair<string, string>("Payload", *request->payloadShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userInfoShrink)) {
    body->insert(pair<string, string>("UserInfo", *request->userInfoShrink));
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
    {"action", boost::any(string("CreateAlarm"))},
    {"version", boost::any(string("ssp_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ssp/createAlarm"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAlarmResponse(callApi(params, req, runtime));
}

CreatePlayingListResponse Alibabacloud_AliGeniessp10::Client::createPlayingList(shared_ptr<CreatePlayingListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CreatePlayingListHeaders> headers = make_shared<CreatePlayingListHeaders>();
  return createPlayingListWithOptions(request, headers, runtime);
}

CreatePlayingListResponse Alibabacloud_AliGeniessp10::Client::createPlayingListWithOptions(shared_ptr<CreatePlayingListRequest> tmpReq, shared_ptr<CreatePlayingListHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreatePlayingListShrinkRequest> request = make_shared<CreatePlayingListShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreatePlayingListRequestDeviceInfo>(tmpReq->deviceInfo)) {
    request->deviceInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->deviceInfo->toMap()), make_shared<string>("DeviceInfo"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreatePlayingListRequestOpenCreatePlayingListRequest>(tmpReq->openCreatePlayingListRequest)) {
    request->openCreatePlayingListRequestShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->openCreatePlayingListRequest->toMap()), make_shared<string>("OpenCreatePlayingListRequest"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreatePlayingListRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->userInfo->toMap()), make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceInfoShrink)) {
    query->insert(pair<string, string>("DeviceInfo", *request->deviceInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userInfoShrink)) {
    query->insert(pair<string, string>("UserInfo", *request->userInfoShrink));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->openCreatePlayingListRequestShrink)) {
    body->insert(pair<string, string>("OpenCreatePlayingListRequest", *request->openCreatePlayingListRequestShrink));
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
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreatePlayingList"))},
    {"version", boost::any(string("ssp_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ssp/CreatePlayingList"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreatePlayingListResponse(callApi(params, req, runtime));
}

CreateScheduleTaskResponse Alibabacloud_AliGeniessp10::Client::createScheduleTask(shared_ptr<CreateScheduleTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CreateScheduleTaskHeaders> headers = make_shared<CreateScheduleTaskHeaders>();
  return createScheduleTaskWithOptions(request, headers, runtime);
}

CreateScheduleTaskResponse Alibabacloud_AliGeniessp10::Client::createScheduleTaskWithOptions(shared_ptr<CreateScheduleTaskRequest> tmpReq, shared_ptr<CreateScheduleTaskHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateScheduleTaskShrinkRequest> request = make_shared<CreateScheduleTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateScheduleTaskRequestDeviceInfo>(tmpReq->deviceInfo)) {
    request->deviceInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->deviceInfo->toMap()), make_shared<string>("DeviceInfo"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateScheduleTaskRequestPayload>(tmpReq->payload)) {
    request->payloadShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->payload->toMap()), make_shared<string>("Payload"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateScheduleTaskRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->userInfo->toMap()), make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceInfoShrink)) {
    body->insert(pair<string, string>("DeviceInfo", *request->deviceInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->payloadShrink)) {
    body->insert(pair<string, string>("Payload", *request->payloadShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userInfoShrink)) {
    body->insert(pair<string, string>("UserInfo", *request->userInfoShrink));
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
    {"action", boost::any(string("CreateScheduleTask"))},
    {"version", boost::any(string("ssp_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ssp/CreateScheduleTask"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateScheduleTaskResponse(callApi(params, req, runtime));
}

DeleteAlarmsResponse Alibabacloud_AliGeniessp10::Client::deleteAlarms(shared_ptr<DeleteAlarmsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<DeleteAlarmsHeaders> headers = make_shared<DeleteAlarmsHeaders>();
  return deleteAlarmsWithOptions(request, headers, runtime);
}

DeleteAlarmsResponse Alibabacloud_AliGeniessp10::Client::deleteAlarmsWithOptions(shared_ptr<DeleteAlarmsRequest> tmpReq, shared_ptr<DeleteAlarmsHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeleteAlarmsShrinkRequest> request = make_shared<DeleteAlarmsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<DeleteAlarmsRequestDeviceInfo>(tmpReq->deviceInfo)) {
    request->deviceInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->deviceInfo->toMap()), make_shared<string>("DeviceInfo"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<DeleteAlarmsRequestPayload>(tmpReq->payload)) {
    request->payloadShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->payload->toMap()), make_shared<string>("Payload"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<DeleteAlarmsRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->userInfo->toMap()), make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceInfoShrink)) {
    body->insert(pair<string, string>("DeviceInfo", *request->deviceInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->payloadShrink)) {
    body->insert(pair<string, string>("Payload", *request->payloadShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userInfoShrink)) {
    body->insert(pair<string, string>("UserInfo", *request->userInfoShrink));
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
    {"action", boost::any(string("DeleteAlarms"))},
    {"version", boost::any(string("ssp_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ssp/deleteAlarms"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteAlarmsResponse(callApi(params, req, runtime));
}

DeleteScheduleTaskResponse Alibabacloud_AliGeniessp10::Client::deleteScheduleTask(shared_ptr<DeleteScheduleTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<DeleteScheduleTaskHeaders> headers = make_shared<DeleteScheduleTaskHeaders>();
  return deleteScheduleTaskWithOptions(request, headers, runtime);
}

DeleteScheduleTaskResponse Alibabacloud_AliGeniessp10::Client::deleteScheduleTaskWithOptions(shared_ptr<DeleteScheduleTaskRequest> tmpReq, shared_ptr<DeleteScheduleTaskHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeleteScheduleTaskShrinkRequest> request = make_shared<DeleteScheduleTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<DeleteScheduleTaskRequestDeviceInfo>(tmpReq->deviceInfo)) {
    request->deviceInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->deviceInfo->toMap()), make_shared<string>("DeviceInfo"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<DeleteScheduleTaskRequestPayload>(tmpReq->payload)) {
    request->payloadShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->payload->toMap()), make_shared<string>("Payload"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<DeleteScheduleTaskRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->userInfo->toMap()), make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceInfoShrink)) {
    body->insert(pair<string, string>("DeviceInfo", *request->deviceInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->payloadShrink)) {
    body->insert(pair<string, string>("Payload", *request->payloadShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userInfoShrink)) {
    body->insert(pair<string, string>("UserInfo", *request->userInfoShrink));
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
    {"action", boost::any(string("DeleteScheduleTask"))},
    {"version", boost::any(string("ssp_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ssp/DeleteScheduleTask"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteScheduleTaskResponse(callApi(params, req, runtime));
}

DeleteSubResponse Alibabacloud_AliGeniessp10::Client::deleteSub(shared_ptr<DeleteSubRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<DeleteSubHeaders> headers = make_shared<DeleteSubHeaders>();
  return deleteSubWithOptions(request, headers, runtime);
}

DeleteSubResponse Alibabacloud_AliGeniessp10::Client::deleteSubWithOptions(shared_ptr<DeleteSubRequest> request, shared_ptr<DeleteSubHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->subId)) {
    query->insert(pair<string, long>("SubId", *request->subId));
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
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSub"))},
    {"version", boost::any(string("ssp_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ssp/deleteSub"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSubResponse(callApi(params, req, runtime));
}

DeviceControlResponse Alibabacloud_AliGeniessp10::Client::deviceControl(shared_ptr<DeviceControlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<DeviceControlHeaders> headers = make_shared<DeviceControlHeaders>();
  return deviceControlWithOptions(request, headers, runtime);
}

DeviceControlResponse Alibabacloud_AliGeniessp10::Client::deviceControlWithOptions(shared_ptr<DeviceControlRequest> tmpReq, shared_ptr<DeviceControlHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeviceControlShrinkRequest> request = make_shared<DeviceControlShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<DeviceControlRequestControlRequest>(tmpReq->controlRequest)) {
    request->controlRequestShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->controlRequest->toMap()), make_shared<string>("ControlRequest"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<DeviceControlRequestDeviceInfo>(tmpReq->deviceInfo)) {
    request->deviceInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->deviceInfo->toMap()), make_shared<string>("DeviceInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceInfoShrink)) {
    query->insert(pair<string, string>("DeviceInfo", *request->deviceInfoShrink));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->controlRequestShrink)) {
    body->insert(pair<string, string>("ControlRequest", *request->controlRequestShrink));
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
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeviceControl"))},
    {"version", boost::any(string("ssp_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ssp/control"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeviceControlResponse(callApi(params, req, runtime));
}

EcologyOpennessAuthenticateResponse Alibabacloud_AliGeniessp10::Client::ecologyOpennessAuthenticate(shared_ptr<EcologyOpennessAuthenticateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<EcologyOpennessAuthenticateHeaders> headers = make_shared<EcologyOpennessAuthenticateHeaders>();
  return ecologyOpennessAuthenticateWithOptions(request, headers, runtime);
}

EcologyOpennessAuthenticateResponse Alibabacloud_AliGeniessp10::Client::ecologyOpennessAuthenticateWithOptions(shared_ptr<EcologyOpennessAuthenticateRequest> request, shared_ptr<EcologyOpennessAuthenticateHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->encodeKey)) {
    body->insert(pair<string, string>("EncodeKey", *request->encodeKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->encodeType)) {
    body->insert(pair<string, string>("EncodeType", *request->encodeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loginStateAccessToken)) {
    body->insert(pair<string, string>("LoginStateAccessToken", *request->loginStateAccessToken));
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
    {"action", boost::any(string("EcologyOpennessAuthenticate"))},
    {"version", boost::any(string("ssp_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ssp/ecologyOpennessAuthenticate"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EcologyOpennessAuthenticateResponse(callApi(params, req, runtime));
}

EcologyOpennessSendVerificationCodeResponse Alibabacloud_AliGeniessp10::Client::ecologyOpennessSendVerificationCode(shared_ptr<EcologyOpennessSendVerificationCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<EcologyOpennessSendVerificationCodeHeaders> headers = make_shared<EcologyOpennessSendVerificationCodeHeaders>();
  return ecologyOpennessSendVerificationCodeWithOptions(request, headers, runtime);
}

EcologyOpennessSendVerificationCodeResponse Alibabacloud_AliGeniessp10::Client::ecologyOpennessSendVerificationCodeWithOptions(shared_ptr<EcologyOpennessSendVerificationCodeRequest> request, shared_ptr<EcologyOpennessSendVerificationCodeHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNumber)) {
    body->insert(pair<string, string>("PhoneNumber", *request->phoneNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    body->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    body->insert(pair<string, string>("SessionId", *request->sessionId));
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
    {"action", boost::any(string("EcologyOpennessSendVerificationCode"))},
    {"version", boost::any(string("ssp_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ssp/ecologyOpennessSendVerificationCode"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EcologyOpennessSendVerificationCodeResponse(callApi(params, req, runtime));
}

FindUserlistToAuthLoginWithPhoneNumberResponse Alibabacloud_AliGeniessp10::Client::findUserlistToAuthLoginWithPhoneNumber(shared_ptr<FindUserlistToAuthLoginWithPhoneNumberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<FindUserlistToAuthLoginWithPhoneNumberHeaders> headers = make_shared<FindUserlistToAuthLoginWithPhoneNumberHeaders>();
  return findUserlistToAuthLoginWithPhoneNumberWithOptions(request, headers, runtime);
}

FindUserlistToAuthLoginWithPhoneNumberResponse Alibabacloud_AliGeniessp10::Client::findUserlistToAuthLoginWithPhoneNumberWithOptions(shared_ptr<FindUserlistToAuthLoginWithPhoneNumberRequest> request, shared_ptr<FindUserlistToAuthLoginWithPhoneNumberHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    query->insert(pair<string, string>("Code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNumber)) {
    query->insert(pair<string, string>("PhoneNumber", *request->phoneNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    query->insert(pair<string, string>("SessionId", *request->sessionId));
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
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FindUserlistToAuthLoginWithPhoneNumber"))},
    {"version", boost::any(string("ssp_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ssp/findUserlistToAuthLoginWithPhoneNumber"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FindUserlistToAuthLoginWithPhoneNumberResponse(callApi(params, req, runtime));
}

GetAlarmResponse Alibabacloud_AliGeniessp10::Client::getAlarm(shared_ptr<GetAlarmRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetAlarmHeaders> headers = make_shared<GetAlarmHeaders>();
  return getAlarmWithOptions(request, headers, runtime);
}

GetAlarmResponse Alibabacloud_AliGeniessp10::Client::getAlarmWithOptions(shared_ptr<GetAlarmRequest> tmpReq, shared_ptr<GetAlarmHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetAlarmShrinkRequest> request = make_shared<GetAlarmShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<GetAlarmRequestDeviceInfo>(tmpReq->deviceInfo)) {
    request->deviceInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->deviceInfo->toMap()), make_shared<string>("DeviceInfo"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<GetAlarmRequestPayload>(tmpReq->payload)) {
    request->payloadShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->payload->toMap()), make_shared<string>("Payload"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<GetAlarmRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->userInfo->toMap()), make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceInfoShrink)) {
    body->insert(pair<string, string>("DeviceInfo", *request->deviceInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->payloadShrink)) {
    body->insert(pair<string, string>("Payload", *request->payloadShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userInfoShrink)) {
    body->insert(pair<string, string>("UserInfo", *request->userInfoShrink));
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
    {"action", boost::any(string("GetAlarm"))},
    {"version", boost::any(string("ssp_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ssp/getAlarm"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAlarmResponse(callApi(params, req, runtime));
}

GetAlbumResponse Alibabacloud_AliGeniessp10::Client::getAlbum(shared_ptr<GetAlbumRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetAlbumHeaders> headers = make_shared<GetAlbumHeaders>();
  return getAlbumWithOptions(request, headers, runtime);
}

GetAlbumResponse Alibabacloud_AliGeniessp10::Client::getAlbumWithOptions(shared_ptr<GetAlbumRequest> request, shared_ptr<GetAlbumHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
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
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAlbum"))},
    {"version", boost::any(string("ssp_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ssp/GetAlbum"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAlbumResponse(callApi(params, req, runtime));
}

GetAlbumDetailByIdResponse Alibabacloud_AliGeniessp10::Client::getAlbumDetailById(shared_ptr<GetAlbumDetailByIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetAlbumDetailByIdHeaders> headers = make_shared<GetAlbumDetailByIdHeaders>();
  return getAlbumDetailByIdWithOptions(request, headers, runtime);
}

GetAlbumDetailByIdResponse Alibabacloud_AliGeniessp10::Client::getAlbumDetailByIdWithOptions(shared_ptr<GetAlbumDetailByIdRequest> request, shared_ptr<GetAlbumDetailByIdHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->albumId)) {
    query->insert(pair<string, string>("AlbumId", *request->albumId));
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
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAlbumDetailById"))},
    {"version", boost::any(string("ssp_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ssp/getAlbumDetailById"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAlbumDetailByIdResponse(callApi(params, req, runtime));
}

GetAligenieUserInfoResponse Alibabacloud_AliGeniessp10::Client::getAligenieUserInfo(shared_ptr<GetAligenieUserInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetAligenieUserInfoHeaders> headers = make_shared<GetAligenieUserInfoHeaders>();
  return getAligenieUserInfoWithOptions(request, headers, runtime);
}

GetAligenieUserInfoResponse Alibabacloud_AliGeniessp10::Client::getAligenieUserInfoWithOptions(shared_ptr<GetAligenieUserInfoRequest> request, shared_ptr<GetAligenieUserInfoHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->loginStateAccessToken)) {
    query->insert(pair<string, string>("LoginStateAccessToken", *request->loginStateAccessToken));
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
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAligenieUserInfo"))},
    {"version", boost::any(string("ssp_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ssp/getAligenieUserInfo"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAligenieUserInfoResponse(callApi(params, req, runtime));
}

GetCodeEnhanceResponse Alibabacloud_AliGeniessp10::Client::getCodeEnhance(shared_ptr<GetCodeEnhanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetCodeEnhanceHeaders> headers = make_shared<GetCodeEnhanceHeaders>();
  return getCodeEnhanceWithOptions(request, headers, runtime);
}

GetCodeEnhanceResponse Alibabacloud_AliGeniessp10::Client::getCodeEnhanceWithOptions(shared_ptr<GetCodeEnhanceRequest> tmpReq, shared_ptr<GetCodeEnhanceHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetCodeEnhanceShrinkRequest> request = make_shared<GetCodeEnhanceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<GetCodeEnhanceRequestChannelInfo>(tmpReq->channelInfo)) {
    request->channelInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->channelInfo->toMap()), make_shared<string>("ChannelInfo"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<GetCodeEnhanceRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->userInfo->toMap()), make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channelInfoShrink)) {
    query->insert(pair<string, string>("ChannelInfo", *request->channelInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userInfoShrink)) {
    query->insert(pair<string, string>("UserInfo", *request->userInfoShrink));
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
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCodeEnhance"))},
    {"version", boost::any(string("ssp_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ssp/getCodeEnhance"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCodeEnhanceResponse(callApi(params, req, runtime));
}

GetContentResponse Alibabacloud_AliGeniessp10::Client::getContent(shared_ptr<GetContentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetContentHeaders> headers = make_shared<GetContentHeaders>();
  return getContentWithOptions(request, headers, runtime);
}

GetContentResponse Alibabacloud_AliGeniessp10::Client::getContentWithOptions(shared_ptr<GetContentRequest> request, shared_ptr<GetContentHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
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
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetContent"))},
    {"version", boost::any(string("ssp_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ssp/GetContent"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetContentResponse(callApi(params, req, runtime));
}

GetCurrentPlayingItemResponse Alibabacloud_AliGeniessp10::Client::getCurrentPlayingItem(shared_ptr<GetCurrentPlayingItemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetCurrentPlayingItemHeaders> headers = make_shared<GetCurrentPlayingItemHeaders>();
  return getCurrentPlayingItemWithOptions(request, headers, runtime);
}

GetCurrentPlayingItemResponse Alibabacloud_AliGeniessp10::Client::getCurrentPlayingItemWithOptions(shared_ptr<GetCurrentPlayingItemRequest> tmpReq, shared_ptr<GetCurrentPlayingItemHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetCurrentPlayingItemShrinkRequest> request = make_shared<GetCurrentPlayingItemShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<GetCurrentPlayingItemRequestDeviceInfo>(tmpReq->deviceInfo)) {
    request->deviceInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->deviceInfo->toMap()), make_shared<string>("DeviceInfo"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<GetCurrentPlayingItemRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->userInfo->toMap()), make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceInfoShrink)) {
    query->insert(pair<string, string>("DeviceInfo", *request->deviceInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userInfoShrink)) {
    query->insert(pair<string, string>("UserInfo", *request->userInfoShrink));
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
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCurrentPlayingItem"))},
    {"version", boost::any(string("ssp_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ssp/GetCurrentPlayingItem"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCurrentPlayingItemResponse(callApi(params, req, runtime));
}

GetCurrentPlayingListResponse Alibabacloud_AliGeniessp10::Client::getCurrentPlayingList(shared_ptr<GetCurrentPlayingListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetCurrentPlayingListHeaders> headers = make_shared<GetCurrentPlayingListHeaders>();
  return getCurrentPlayingListWithOptions(request, headers, runtime);
}

GetCurrentPlayingListResponse Alibabacloud_AliGeniessp10::Client::getCurrentPlayingListWithOptions(shared_ptr<GetCurrentPlayingListRequest> tmpReq, shared_ptr<GetCurrentPlayingListHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetCurrentPlayingListShrinkRequest> request = make_shared<GetCurrentPlayingListShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<GetCurrentPlayingListRequestDeviceInfo>(tmpReq->deviceInfo)) {
    request->deviceInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->deviceInfo->toMap()), make_shared<string>("DeviceInfo"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<GetCurrentPlayingListRequestOpenQueryPlayListRequest>(tmpReq->openQueryPlayListRequest)) {
    request->openQueryPlayListRequestShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->openQueryPlayListRequest->toMap()), make_shared<string>("OpenQueryPlayListRequest"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<GetCurrentPlayingListRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->userInfo->toMap()), make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceInfoShrink)) {
    query->insert(pair<string, string>("DeviceInfo", *request->deviceInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userInfoShrink)) {
    query->insert(pair<string, string>("UserInfo", *request->userInfoShrink));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->openQueryPlayListRequestShrink)) {
    body->insert(pair<string, string>("OpenQueryPlayListRequest", *request->openQueryPlayListRequestShrink));
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
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCurrentPlayingList"))},
    {"version", boost::any(string("ssp_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ssp/GetCurrentPlayingList"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCurrentPlayingListResponse(callApi(params, req, runtime));
}

GetDeviceBasicInfoResponse Alibabacloud_AliGeniessp10::Client::getDeviceBasicInfo(shared_ptr<GetDeviceBasicInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetDeviceBasicInfoHeaders> headers = make_shared<GetDeviceBasicInfoHeaders>();
  return getDeviceBasicInfoWithOptions(request, headers, runtime);
}

GetDeviceBasicInfoResponse Alibabacloud_AliGeniessp10::Client::getDeviceBasicInfoWithOptions(shared_ptr<GetDeviceBasicInfoRequest> tmpReq, shared_ptr<GetDeviceBasicInfoHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetDeviceBasicInfoShrinkRequest> request = make_shared<GetDeviceBasicInfoShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<GetDeviceBasicInfoRequestDeviceInfo>(tmpReq->deviceInfo)) {
    request->deviceInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->deviceInfo->toMap()), make_shared<string>("DeviceInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceInfoShrink)) {
    query->insert(pair<string, string>("DeviceInfo", *request->deviceInfoShrink));
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
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDeviceBasicInfo"))},
    {"version", boost::any(string("ssp_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ssp/getDeviceBasicInfo"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDeviceBasicInfoResponse(callApi(params, req, runtime));
}

GetDeviceIdByIdentityResponse Alibabacloud_AliGeniessp10::Client::getDeviceIdByIdentity(shared_ptr<GetDeviceIdByIdentityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetDeviceIdByIdentityHeaders> headers = make_shared<GetDeviceIdByIdentityHeaders>();
  return getDeviceIdByIdentityWithOptions(request, headers, runtime);
}

GetDeviceIdByIdentityResponse Alibabacloud_AliGeniessp10::Client::getDeviceIdByIdentityWithOptions(shared_ptr<GetDeviceIdByIdentityRequest> request, shared_ptr<GetDeviceIdByIdentityHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->encodeKey)) {
    query->insert(pair<string, string>("EncodeKey", *request->encodeKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->encodeType)) {
    query->insert(pair<string, string>("EncodeType", *request->encodeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->identityId)) {
    query->insert(pair<string, string>("IdentityId", *request->identityId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->identityType)) {
    query->insert(pair<string, string>("IdentityType", *request->identityType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
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
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDeviceIdByIdentity"))},
    {"version", boost::any(string("ssp_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ssp/getDeviceIdByIdentity"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDeviceIdByIdentityResponse(callApi(params, req, runtime));
}

GetDeviceSettingResponse Alibabacloud_AliGeniessp10::Client::getDeviceSetting(shared_ptr<GetDeviceSettingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetDeviceSettingHeaders> headers = make_shared<GetDeviceSettingHeaders>();
  return getDeviceSettingWithOptions(request, headers, runtime);
}

GetDeviceSettingResponse Alibabacloud_AliGeniessp10::Client::getDeviceSettingWithOptions(shared_ptr<GetDeviceSettingRequest> tmpReq, shared_ptr<GetDeviceSettingHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetDeviceSettingShrinkRequest> request = make_shared<GetDeviceSettingShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<GetDeviceSettingRequestDeviceInfo>(tmpReq->deviceInfo)) {
    request->deviceInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->deviceInfo->toMap()), make_shared<string>("DeviceInfo"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->keys)) {
    request->keysShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->keys, make_shared<string>("Keys"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceInfoShrink)) {
    query->insert(pair<string, string>("DeviceInfo", *request->deviceInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keysShrink)) {
    query->insert(pair<string, string>("Keys", *request->keysShrink));
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
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDeviceSetting"))},
    {"version", boost::any(string("ssp_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ssp/getDeviceSetting"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDeviceSettingResponse(callApi(params, req, runtime));
}

GetDeviceStatusDetailResponse Alibabacloud_AliGeniessp10::Client::getDeviceStatusDetail(shared_ptr<GetDeviceStatusDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetDeviceStatusDetailHeaders> headers = make_shared<GetDeviceStatusDetailHeaders>();
  return getDeviceStatusDetailWithOptions(request, headers, runtime);
}

GetDeviceStatusDetailResponse Alibabacloud_AliGeniessp10::Client::getDeviceStatusDetailWithOptions(shared_ptr<GetDeviceStatusDetailRequest> tmpReq, shared_ptr<GetDeviceStatusDetailHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetDeviceStatusDetailShrinkRequest> request = make_shared<GetDeviceStatusDetailShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<GetDeviceStatusDetailRequestDeviceInfo>(tmpReq->deviceInfo)) {
    request->deviceInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->deviceInfo->toMap()), make_shared<string>("DeviceInfo"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->keys)) {
    request->keysShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->keys, make_shared<string>("Keys"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceInfoShrink)) {
    query->insert(pair<string, string>("DeviceInfo", *request->deviceInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keysShrink)) {
    query->insert(pair<string, string>("Keys", *request->keysShrink));
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
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDeviceStatusDetail"))},
    {"version", boost::any(string("ssp_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ssp/getDeviceStatusDetail"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDeviceStatusDetailResponse(callApi(params, req, runtime));
}

GetDeviceStatusInfoResponse Alibabacloud_AliGeniessp10::Client::getDeviceStatusInfo(shared_ptr<GetDeviceStatusInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetDeviceStatusInfoHeaders> headers = make_shared<GetDeviceStatusInfoHeaders>();
  return getDeviceStatusInfoWithOptions(request, headers, runtime);
}

GetDeviceStatusInfoResponse Alibabacloud_AliGeniessp10::Client::getDeviceStatusInfoWithOptions(shared_ptr<GetDeviceStatusInfoRequest> tmpReq, shared_ptr<GetDeviceStatusInfoHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetDeviceStatusInfoShrinkRequest> request = make_shared<GetDeviceStatusInfoShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<GetDeviceStatusInfoRequestDeviceInfo>(tmpReq->deviceInfo)) {
    request->deviceInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->deviceInfo->toMap()), make_shared<string>("DeviceInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceInfoShrink)) {
    query->insert(pair<string, string>("DeviceInfo", *request->deviceInfoShrink));
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
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDeviceStatusInfo"))},
    {"version", boost::any(string("ssp_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ssp/getDeviceStatusInfo"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDeviceStatusInfoResponse(callApi(params, req, runtime));
}

GetDeviceTagResponse Alibabacloud_AliGeniessp10::Client::getDeviceTag(shared_ptr<GetDeviceTagRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetDeviceTagHeaders> headers = make_shared<GetDeviceTagHeaders>();
  return getDeviceTagWithOptions(request, headers, runtime);
}

GetDeviceTagResponse Alibabacloud_AliGeniessp10::Client::getDeviceTagWithOptions(shared_ptr<GetDeviceTagRequest> tmpReq, shared_ptr<GetDeviceTagHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetDeviceTagShrinkRequest> request = make_shared<GetDeviceTagShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<GetDeviceTagRequestDeviceInfo>(tmpReq->deviceInfo)) {
    request->deviceInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->deviceInfo->toMap()), make_shared<string>("DeviceInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceInfoShrink)) {
    query->insert(pair<string, string>("DeviceInfo", *request->deviceInfoShrink));
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
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDeviceTag"))},
    {"version", boost::any(string("ssp_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ssp/getDeviceTag"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDeviceTagResponse(callApi(params, req, runtime));
}

GetScheduleTaskResponse Alibabacloud_AliGeniessp10::Client::getScheduleTask(shared_ptr<GetScheduleTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetScheduleTaskHeaders> headers = make_shared<GetScheduleTaskHeaders>();
  return getScheduleTaskWithOptions(request, headers, runtime);
}

GetScheduleTaskResponse Alibabacloud_AliGeniessp10::Client::getScheduleTaskWithOptions(shared_ptr<GetScheduleTaskRequest> tmpReq, shared_ptr<GetScheduleTaskHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetScheduleTaskShrinkRequest> request = make_shared<GetScheduleTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<GetScheduleTaskRequestDeviceInfo>(tmpReq->deviceInfo)) {
    request->deviceInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->deviceInfo->toMap()), make_shared<string>("DeviceInfo"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<GetScheduleTaskRequestPayload>(tmpReq->payload)) {
    request->payloadShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->payload->toMap()), make_shared<string>("Payload"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<GetScheduleTaskRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->userInfo->toMap()), make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceInfoShrink)) {
    body->insert(pair<string, string>("DeviceInfo", *request->deviceInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->payloadShrink)) {
    body->insert(pair<string, string>("Payload", *request->payloadShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userInfoShrink)) {
    body->insert(pair<string, string>("UserInfo", *request->userInfoShrink));
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
    {"action", boost::any(string("GetScheduleTask"))},
    {"version", boost::any(string("ssp_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ssp/GetScheduleTask"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetScheduleTaskResponse(callApi(params, req, runtime));
}

GetUnreadMessageCountResponse Alibabacloud_AliGeniessp10::Client::getUnreadMessageCount(shared_ptr<GetUnreadMessageCountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetUnreadMessageCountHeaders> headers = make_shared<GetUnreadMessageCountHeaders>();
  return getUnreadMessageCountWithOptions(request, headers, runtime);
}

GetUnreadMessageCountResponse Alibabacloud_AliGeniessp10::Client::getUnreadMessageCountWithOptions(shared_ptr<GetUnreadMessageCountRequest> tmpReq, shared_ptr<GetUnreadMessageCountHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetUnreadMessageCountShrinkRequest> request = make_shared<GetUnreadMessageCountShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<GetUnreadMessageCountRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->userInfo->toMap()), make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->userInfoShrink)) {
    query->insert(pair<string, string>("UserInfo", *request->userInfoShrink));
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
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetUnreadMessageCount"))},
    {"version", boost::any(string("ssp_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ssp/getUnreadMessageCount"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetUnreadMessageCountResponse(callApi(params, req, runtime));
}

GetUserByDeviceIdResponse Alibabacloud_AliGeniessp10::Client::getUserByDeviceId(shared_ptr<GetUserByDeviceIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetUserByDeviceIdHeaders> headers = make_shared<GetUserByDeviceIdHeaders>();
  return getUserByDeviceIdWithOptions(request, headers, runtime);
}

GetUserByDeviceIdResponse Alibabacloud_AliGeniessp10::Client::getUserByDeviceIdWithOptions(shared_ptr<GetUserByDeviceIdRequest> tmpReq, shared_ptr<GetUserByDeviceIdHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetUserByDeviceIdShrinkRequest> request = make_shared<GetUserByDeviceIdShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<GetUserByDeviceIdRequestDeviceInfo>(tmpReq->deviceInfo)) {
    request->deviceInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->deviceInfo->toMap()), make_shared<string>("DeviceInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceInfoShrink)) {
    query->insert(pair<string, string>("DeviceInfo", *request->deviceInfoShrink));
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
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetUserByDeviceId"))},
    {"version", boost::any(string("ssp_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ssp/getUserByDeviceId"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetUserByDeviceIdResponse(callApi(params, req, runtime));
}

GetWeatherResponse Alibabacloud_AliGeniessp10::Client::getWeather(shared_ptr<GetWeatherRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetWeatherHeaders> headers = make_shared<GetWeatherHeaders>();
  return getWeatherWithOptions(request, headers, runtime);
}

GetWeatherResponse Alibabacloud_AliGeniessp10::Client::getWeatherWithOptions(shared_ptr<GetWeatherRequest> tmpReq, shared_ptr<GetWeatherHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetWeatherShrinkRequest> request = make_shared<GetWeatherShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<GetWeatherRequestDeviceInfo>(tmpReq->deviceInfo)) {
    request->deviceInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->deviceInfo->toMap()), make_shared<string>("DeviceInfo"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<GetWeatherRequestPayload>(tmpReq->payload)) {
    request->payloadShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->payload->toMap()), make_shared<string>("Payload"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<GetWeatherRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->userInfo->toMap()), make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceInfoShrink)) {
    body->insert(pair<string, string>("DeviceInfo", *request->deviceInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->payloadShrink)) {
    body->insert(pair<string, string>("Payload", *request->payloadShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userInfoShrink)) {
    body->insert(pair<string, string>("UserInfo", *request->userInfoShrink));
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
    {"action", boost::any(string("GetWeather"))},
    {"version", boost::any(string("ssp_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ssp/GetWeather"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetWeatherResponse(callApi(params, req, runtime));
}

IndexControlPlayingListResponse Alibabacloud_AliGeniessp10::Client::indexControlPlayingList(shared_ptr<IndexControlPlayingListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<IndexControlPlayingListHeaders> headers = make_shared<IndexControlPlayingListHeaders>();
  return indexControlPlayingListWithOptions(request, headers, runtime);
}

IndexControlPlayingListResponse Alibabacloud_AliGeniessp10::Client::indexControlPlayingListWithOptions(shared_ptr<IndexControlPlayingListRequest> tmpReq, shared_ptr<IndexControlPlayingListHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<IndexControlPlayingListShrinkRequest> request = make_shared<IndexControlPlayingListShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<IndexControlPlayingListRequestDeviceInfo>(tmpReq->deviceInfo)) {
    request->deviceInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->deviceInfo->toMap()), make_shared<string>("DeviceInfo"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<IndexControlPlayingListRequestOpenIndexControlRequest>(tmpReq->openIndexControlRequest)) {
    request->openIndexControlRequestShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->openIndexControlRequest->toMap()), make_shared<string>("OpenIndexControlRequest"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<IndexControlPlayingListRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->userInfo->toMap()), make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceInfoShrink)) {
    query->insert(pair<string, string>("DeviceInfo", *request->deviceInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userInfoShrink)) {
    query->insert(pair<string, string>("UserInfo", *request->userInfoShrink));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->openIndexControlRequestShrink)) {
    body->insert(pair<string, string>("OpenIndexControlRequest", *request->openIndexControlRequestShrink));
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
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("IndexControlPlayingList"))},
    {"version", boost::any(string("ssp_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ssp/IndexControlPlayingList"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return IndexControlPlayingListResponse(callApi(params, req, runtime));
}

ListAlarmsResponse Alibabacloud_AliGeniessp10::Client::listAlarms(shared_ptr<ListAlarmsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ListAlarmsHeaders> headers = make_shared<ListAlarmsHeaders>();
  return listAlarmsWithOptions(request, headers, runtime);
}

ListAlarmsResponse Alibabacloud_AliGeniessp10::Client::listAlarmsWithOptions(shared_ptr<ListAlarmsRequest> tmpReq, shared_ptr<ListAlarmsHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListAlarmsShrinkRequest> request = make_shared<ListAlarmsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListAlarmsRequestDeviceInfo>(tmpReq->deviceInfo)) {
    request->deviceInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->deviceInfo->toMap()), make_shared<string>("DeviceInfo"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<ListAlarmsRequestPayload>(tmpReq->payload)) {
    request->payloadShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->payload->toMap()), make_shared<string>("Payload"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<ListAlarmsRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->userInfo->toMap()), make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceInfoShrink)) {
    body->insert(pair<string, string>("DeviceInfo", *request->deviceInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->payloadShrink)) {
    body->insert(pair<string, string>("Payload", *request->payloadShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userInfoShrink)) {
    body->insert(pair<string, string>("UserInfo", *request->userInfoShrink));
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
    {"action", boost::any(string("ListAlarms"))},
    {"version", boost::any(string("ssp_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ssp/listAlarm"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAlarmsResponse(callApi(params, req, runtime));
}

ListAlbumDetailResponse Alibabacloud_AliGeniessp10::Client::listAlbumDetail(shared_ptr<ListAlbumDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ListAlbumDetailHeaders> headers = make_shared<ListAlbumDetailHeaders>();
  return listAlbumDetailWithOptions(request, headers, runtime);
}

ListAlbumDetailResponse Alibabacloud_AliGeniessp10::Client::listAlbumDetailWithOptions(shared_ptr<ListAlbumDetailRequest> request, shared_ptr<ListAlbumDetailHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
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
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAlbumDetail"))},
    {"version", boost::any(string("ssp_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ssp/ListAlbumDetail"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAlbumDetailResponse(callApi(params, req, runtime));
}

ListAlbumIsAddedResponse Alibabacloud_AliGeniessp10::Client::listAlbumIsAdded(shared_ptr<ListAlbumIsAddedRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ListAlbumIsAddedHeaders> headers = make_shared<ListAlbumIsAddedHeaders>();
  return listAlbumIsAddedWithOptions(request, headers, runtime);
}

ListAlbumIsAddedResponse Alibabacloud_AliGeniessp10::Client::listAlbumIsAddedWithOptions(shared_ptr<ListAlbumIsAddedRequest> tmpReq, shared_ptr<ListAlbumIsAddedHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListAlbumIsAddedShrinkRequest> request = make_shared<ListAlbumIsAddedShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->albumIdList)) {
    request->albumIdListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->albumIdList, make_shared<string>("AlbumIdList"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<ListAlbumIsAddedRequestDeviceInfo>(tmpReq->deviceInfo)) {
    request->deviceInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->deviceInfo->toMap()), make_shared<string>("DeviceInfo"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<ListAlbumIsAddedRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->userInfo->toMap()), make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->albumIdListShrink)) {
    query->insert(pair<string, string>("AlbumIdList", *request->albumIdListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceInfoShrink)) {
    query->insert(pair<string, string>("DeviceInfo", *request->deviceInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userInfoShrink)) {
    query->insert(pair<string, string>("UserInfo", *request->userInfoShrink));
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
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAlbumIsAdded"))},
    {"version", boost::any(string("ssp_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ssp/listAlbumIsAdded"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAlbumIsAddedResponse(callApi(params, req, runtime));
}

ListCateContentResponse Alibabacloud_AliGeniessp10::Client::listCateContent(shared_ptr<ListCateContentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ListCateContentHeaders> headers = make_shared<ListCateContentHeaders>();
  return listCateContentWithOptions(request, headers, runtime);
}

ListCateContentResponse Alibabacloud_AliGeniessp10::Client::listCateContentWithOptions(shared_ptr<ListCateContentRequest> tmpReq, shared_ptr<ListCateContentHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListCateContentShrinkRequest> request = make_shared<ListCateContentShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListCateContentRequestDeviceInfo>(tmpReq->deviceInfo)) {
    request->deviceInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->deviceInfo->toMap()), make_shared<string>("DeviceInfo"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<ListCateContentRequestRequest>(tmpReq->request)) {
    request->requestShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->request->toMap()), make_shared<string>("Request"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<ListCateContentRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->userInfo->toMap()), make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceInfoShrink)) {
    query->insert(pair<string, string>("DeviceInfo", *request->deviceInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userInfoShrink)) {
    query->insert(pair<string, string>("UserInfo", *request->userInfoShrink));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->requestShrink)) {
    body->insert(pair<string, string>("Request", *request->requestShrink));
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
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListCateContent"))},
    {"version", boost::any(string("ssp_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ssp/ListCateContent"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListCateContentResponse(callApi(params, req, runtime));
}

ListCateInfoResponse Alibabacloud_AliGeniessp10::Client::listCateInfo(shared_ptr<ListCateInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ListCateInfoHeaders> headers = make_shared<ListCateInfoHeaders>();
  return listCateInfoWithOptions(request, headers, runtime);
}

ListCateInfoResponse Alibabacloud_AliGeniessp10::Client::listCateInfoWithOptions(shared_ptr<ListCateInfoRequest> request, shared_ptr<ListCateInfoHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
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
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListCateInfo"))},
    {"version", boost::any(string("ssp_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ssp/ListCateInfo"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListCateInfoResponse(callApi(params, req, runtime));
}

ListCommonCateFirstFloorResponse Alibabacloud_AliGeniessp10::Client::listCommonCateFirstFloor(shared_ptr<ListCommonCateFirstFloorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ListCommonCateFirstFloorHeaders> headers = make_shared<ListCommonCateFirstFloorHeaders>();
  return listCommonCateFirstFloorWithOptions(request, headers, runtime);
}

ListCommonCateFirstFloorResponse Alibabacloud_AliGeniessp10::Client::listCommonCateFirstFloorWithOptions(shared_ptr<ListCommonCateFirstFloorRequest> request, shared_ptr<ListCommonCateFirstFloorHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
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
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListCommonCateFirstFloor"))},
    {"version", boost::any(string("ssp_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ssp/ListCommonCateFirstFloor"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListCommonCateFirstFloorResponse(callApi(params, req, runtime));
}

ListCommonCateSecondFloorResponse Alibabacloud_AliGeniessp10::Client::listCommonCateSecondFloor(shared_ptr<ListCommonCateSecondFloorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ListCommonCateSecondFloorHeaders> headers = make_shared<ListCommonCateSecondFloorHeaders>();
  return listCommonCateSecondFloorWithOptions(request, headers, runtime);
}

ListCommonCateSecondFloorResponse Alibabacloud_AliGeniessp10::Client::listCommonCateSecondFloorWithOptions(shared_ptr<ListCommonCateSecondFloorRequest> request, shared_ptr<ListCommonCateSecondFloorHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->parentCateId)) {
    query->insert(pair<string, long>("ParentCateId", *request->parentCateId));
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
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListCommonCateSecondFloor"))},
    {"version", boost::any(string("ssp_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ssp/ListCommonCateSecondFloor"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListCommonCateSecondFloorResponse(callApi(params, req, runtime));
}

ListDeviceBasicInfoResponse Alibabacloud_AliGeniessp10::Client::listDeviceBasicInfo(shared_ptr<ListDeviceBasicInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ListDeviceBasicInfoHeaders> headers = make_shared<ListDeviceBasicInfoHeaders>();
  return listDeviceBasicInfoWithOptions(request, headers, runtime);
}

ListDeviceBasicInfoResponse Alibabacloud_AliGeniessp10::Client::listDeviceBasicInfoWithOptions(shared_ptr<ListDeviceBasicInfoRequest> tmpReq, shared_ptr<ListDeviceBasicInfoHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListDeviceBasicInfoShrinkRequest> request = make_shared<ListDeviceBasicInfoShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListDeviceBasicInfoRequestDeviceInfos>(tmpReq->deviceInfos)) {
    request->deviceInfosShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->deviceInfos->toMap()), make_shared<string>("DeviceInfos"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceInfosShrink)) {
    query->insert(pair<string, string>("DeviceInfos", *request->deviceInfosShrink));
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
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDeviceBasicInfo"))},
    {"version", boost::any(string("ssp_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ssp/listDeviceBasicInfo"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDeviceBasicInfoResponse(callApi(params, req, runtime));
}

ListDeviceByUserIdResponse Alibabacloud_AliGeniessp10::Client::listDeviceByUserId(shared_ptr<ListDeviceByUserIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ListDeviceByUserIdHeaders> headers = make_shared<ListDeviceByUserIdHeaders>();
  return listDeviceByUserIdWithOptions(request, headers, runtime);
}

ListDeviceByUserIdResponse Alibabacloud_AliGeniessp10::Client::listDeviceByUserIdWithOptions(shared_ptr<ListDeviceByUserIdRequest> tmpReq, shared_ptr<ListDeviceByUserIdHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListDeviceByUserIdShrinkRequest> request = make_shared<ListDeviceByUserIdShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListDeviceByUserIdRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->userInfo->toMap()), make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->userInfoShrink)) {
    query->insert(pair<string, string>("UserInfo", *request->userInfoShrink));
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
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDeviceByUserId"))},
    {"version", boost::any(string("ssp_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ssp/listDeviceByUserId"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDeviceByUserIdResponse(callApi(params, req, runtime));
}

ListDeviceByUserIdAndChanelResponse Alibabacloud_AliGeniessp10::Client::listDeviceByUserIdAndChanel(shared_ptr<ListDeviceByUserIdAndChanelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ListDeviceByUserIdAndChanelHeaders> headers = make_shared<ListDeviceByUserIdAndChanelHeaders>();
  return listDeviceByUserIdAndChanelWithOptions(request, headers, runtime);
}

ListDeviceByUserIdAndChanelResponse Alibabacloud_AliGeniessp10::Client::listDeviceByUserIdAndChanelWithOptions(shared_ptr<ListDeviceByUserIdAndChanelRequest> tmpReq, shared_ptr<ListDeviceByUserIdAndChanelHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListDeviceByUserIdAndChanelShrinkRequest> request = make_shared<ListDeviceByUserIdAndChanelShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListDeviceByUserIdAndChanelRequestChannelInfo>(tmpReq->channelInfo)) {
    request->channelInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->channelInfo->toMap()), make_shared<string>("ChannelInfo"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<ListDeviceByUserIdAndChanelRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->userInfo->toMap()), make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channelInfoShrink)) {
    query->insert(pair<string, string>("ChannelInfo", *request->channelInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userInfoShrink)) {
    query->insert(pair<string, string>("UserInfo", *request->userInfoShrink));
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
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDeviceByUserIdAndChanel"))},
    {"version", boost::any(string("ssp_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ssp/listDeviceByUserIdAndChanel"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDeviceByUserIdAndChanelResponse(callApi(params, req, runtime));
}

ListDeviceIdByIdentitiesResponse Alibabacloud_AliGeniessp10::Client::listDeviceIdByIdentities(shared_ptr<ListDeviceIdByIdentitiesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ListDeviceIdByIdentitiesHeaders> headers = make_shared<ListDeviceIdByIdentitiesHeaders>();
  return listDeviceIdByIdentitiesWithOptions(request, headers, runtime);
}

ListDeviceIdByIdentitiesResponse Alibabacloud_AliGeniessp10::Client::listDeviceIdByIdentitiesWithOptions(shared_ptr<ListDeviceIdByIdentitiesRequest> tmpReq, shared_ptr<ListDeviceIdByIdentitiesHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListDeviceIdByIdentitiesShrinkRequest> request = make_shared<ListDeviceIdByIdentitiesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->identityIds)) {
    request->identityIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->identityIds, make_shared<string>("IdentityIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->encodeKey)) {
    query->insert(pair<string, string>("EncodeKey", *request->encodeKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->encodeType)) {
    query->insert(pair<string, string>("EncodeType", *request->encodeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->identityIdsShrink)) {
    query->insert(pair<string, string>("IdentityIds", *request->identityIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->identityType)) {
    query->insert(pair<string, string>("IdentityType", *request->identityType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
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
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDeviceIdByIdentities"))},
    {"version", boost::any(string("ssp_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ssp/listDeviceIdByIdentities"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDeviceIdByIdentitiesResponse(callApi(params, req, runtime));
}

ListMusicResponse Alibabacloud_AliGeniessp10::Client::listMusic(shared_ptr<ListMusicRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ListMusicHeaders> headers = make_shared<ListMusicHeaders>();
  return listMusicWithOptions(request, headers, runtime);
}

ListMusicResponse Alibabacloud_AliGeniessp10::Client::listMusicWithOptions(shared_ptr<ListMusicRequest> tmpReq, shared_ptr<ListMusicHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListMusicShrinkRequest> request = make_shared<ListMusicShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListMusicRequestDeviceInfo>(tmpReq->deviceInfo)) {
    request->deviceInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->deviceInfo->toMap()), make_shared<string>("DeviceInfo"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<ListMusicRequestPayload>(tmpReq->payload)) {
    request->payloadShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->payload->toMap()), make_shared<string>("Payload"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<ListMusicRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->userInfo->toMap()), make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceInfoShrink)) {
    body->insert(pair<string, string>("DeviceInfo", *request->deviceInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->payloadShrink)) {
    body->insert(pair<string, string>("Payload", *request->payloadShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userInfoShrink)) {
    body->insert(pair<string, string>("UserInfo", *request->userInfoShrink));
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
    {"action", boost::any(string("ListMusic"))},
    {"version", boost::any(string("ssp_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ssp/listMusic"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListMusicResponse(callApi(params, req, runtime));
}

ListPlayHistoryResponse Alibabacloud_AliGeniessp10::Client::listPlayHistory(shared_ptr<ListPlayHistoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ListPlayHistoryHeaders> headers = make_shared<ListPlayHistoryHeaders>();
  return listPlayHistoryWithOptions(request, headers, runtime);
}

ListPlayHistoryResponse Alibabacloud_AliGeniessp10::Client::listPlayHistoryWithOptions(shared_ptr<ListPlayHistoryRequest> tmpReq, shared_ptr<ListPlayHistoryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListPlayHistoryShrinkRequest> request = make_shared<ListPlayHistoryShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListPlayHistoryRequestDeviceInfo>(tmpReq->deviceInfo)) {
    request->deviceInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->deviceInfo->toMap()), make_shared<string>("DeviceInfo"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<ListPlayHistoryRequestRequest>(tmpReq->request)) {
    request->requestShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->request->toMap()), make_shared<string>("Request"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<ListPlayHistoryRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->userInfo->toMap()), make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceInfoShrink)) {
    query->insert(pair<string, string>("DeviceInfo", *request->deviceInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userInfoShrink)) {
    query->insert(pair<string, string>("UserInfo", *request->userInfoShrink));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->requestShrink)) {
    body->insert(pair<string, string>("Request", *request->requestShrink));
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
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPlayHistory"))},
    {"version", boost::any(string("ssp_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ssp/ListPlayHistory"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListPlayHistoryResponse(callApi(params, req, runtime));
}

ListRecommendContentResponse Alibabacloud_AliGeniessp10::Client::listRecommendContent(shared_ptr<ListRecommendContentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ListRecommendContentHeaders> headers = make_shared<ListRecommendContentHeaders>();
  return listRecommendContentWithOptions(request, headers, runtime);
}

ListRecommendContentResponse Alibabacloud_AliGeniessp10::Client::listRecommendContentWithOptions(shared_ptr<ListRecommendContentRequest> tmpReq, shared_ptr<ListRecommendContentHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListRecommendContentShrinkRequest> request = make_shared<ListRecommendContentShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListRecommendContentRequestDeviceInfo>(tmpReq->deviceInfo)) {
    request->deviceInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->deviceInfo->toMap()), make_shared<string>("DeviceInfo"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<ListRecommendContentRequestRequest>(tmpReq->request)) {
    request->requestShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->request->toMap()), make_shared<string>("Request"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<ListRecommendContentRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->userInfo->toMap()), make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceInfoShrink)) {
    query->insert(pair<string, string>("DeviceInfo", *request->deviceInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userInfoShrink)) {
    query->insert(pair<string, string>("UserInfo", *request->userInfoShrink));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->requestShrink)) {
    body->insert(pair<string, string>("Request", *request->requestShrink));
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
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRecommendContent"))},
    {"version", boost::any(string("ssp_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ssp/ListRecommendContent"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListRecommendContentResponse(callApi(params, req, runtime));
}

ListSubResponse Alibabacloud_AliGeniessp10::Client::listSub(shared_ptr<ListSubRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ListSubHeaders> headers = make_shared<ListSubHeaders>();
  return listSubWithOptions(request, headers, runtime);
}

ListSubResponse Alibabacloud_AliGeniessp10::Client::listSubWithOptions(shared_ptr<ListSubRequest> tmpReq, shared_ptr<ListSubHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListSubShrinkRequest> request = make_shared<ListSubShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListSubRequestDeviceInfo>(tmpReq->deviceInfo)) {
    request->deviceInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->deviceInfo->toMap()), make_shared<string>("DeviceInfo"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<ListSubRequestPage>(tmpReq->page)) {
    request->pageShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->page->toMap()), make_shared<string>("Page"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<ListSubRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->userInfo->toMap()), make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceInfoShrink)) {
    query->insert(pair<string, string>("DeviceInfo", *request->deviceInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageShrink)) {
    query->insert(pair<string, string>("Page", *request->pageShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userInfoShrink)) {
    query->insert(pair<string, string>("UserInfo", *request->userInfoShrink));
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
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSub"))},
    {"version", boost::any(string("ssp_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ssp/listSub"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSubResponse(callApi(params, req, runtime));
}

ListSubAlbumResponse Alibabacloud_AliGeniessp10::Client::listSubAlbum(shared_ptr<ListSubAlbumRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ListSubAlbumHeaders> headers = make_shared<ListSubAlbumHeaders>();
  return listSubAlbumWithOptions(request, headers, runtime);
}

ListSubAlbumResponse Alibabacloud_AliGeniessp10::Client::listSubAlbumWithOptions(shared_ptr<ListSubAlbumRequest> tmpReq, shared_ptr<ListSubAlbumHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListSubAlbumShrinkRequest> request = make_shared<ListSubAlbumShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListSubAlbumRequestDeviceInfo>(tmpReq->deviceInfo)) {
    request->deviceInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->deviceInfo->toMap()), make_shared<string>("DeviceInfo"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<ListSubAlbumRequestQuerySubscriptionAlbumRequest>(tmpReq->querySubscriptionAlbumRequest)) {
    request->querySubscriptionAlbumRequestShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->querySubscriptionAlbumRequest->toMap()), make_shared<string>("QuerySubscriptionAlbumRequest"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<ListSubAlbumRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->userInfo->toMap()), make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceInfoShrink)) {
    query->insert(pair<string, string>("DeviceInfo", *request->deviceInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->querySubscriptionAlbumRequestShrink)) {
    query->insert(pair<string, string>("QuerySubscriptionAlbumRequest", *request->querySubscriptionAlbumRequestShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userInfoShrink)) {
    query->insert(pair<string, string>("UserInfo", *request->userInfoShrink));
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
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSubAlbum"))},
    {"version", boost::any(string("ssp_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ssp/listSubAlbum"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSubAlbumResponse(callApi(params, req, runtime));
}

ListSubscriptionAlbumCategoryResponse Alibabacloud_AliGeniessp10::Client::listSubscriptionAlbumCategory(shared_ptr<ListSubscriptionAlbumCategoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ListSubscriptionAlbumCategoryHeaders> headers = make_shared<ListSubscriptionAlbumCategoryHeaders>();
  return listSubscriptionAlbumCategoryWithOptions(request, headers, runtime);
}

ListSubscriptionAlbumCategoryResponse Alibabacloud_AliGeniessp10::Client::listSubscriptionAlbumCategoryWithOptions(shared_ptr<ListSubscriptionAlbumCategoryRequest> request, shared_ptr<ListSubscriptionAlbumCategoryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->categoryName)) {
    query->insert(pair<string, string>("CategoryName", *request->categoryName));
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
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSubscriptionAlbumCategory"))},
    {"version", boost::any(string("ssp_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ssp/listSubscriptionAlbumCategory"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSubscriptionAlbumCategoryResponse(callApi(params, req, runtime));
}

ListUserMessageResponse Alibabacloud_AliGeniessp10::Client::listUserMessage(shared_ptr<ListUserMessageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ListUserMessageHeaders> headers = make_shared<ListUserMessageHeaders>();
  return listUserMessageWithOptions(request, headers, runtime);
}

ListUserMessageResponse Alibabacloud_AliGeniessp10::Client::listUserMessageWithOptions(shared_ptr<ListUserMessageRequest> tmpReq, shared_ptr<ListUserMessageHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListUserMessageShrinkRequest> request = make_shared<ListUserMessageShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListUserMessageRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->userInfo->toMap()), make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->beforeTime)) {
    query->insert(pair<string, string>("BeforeTime", *request->beforeTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userInfoShrink)) {
    query->insert(pair<string, string>("UserInfo", *request->userInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    query->insert(pair<string, long>("limit", *request->limit));
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
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListUserMessage"))},
    {"version", boost::any(string("ssp_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ssp/listUserMessage"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListUserMessageResponse(callApi(params, req, runtime));
}

PlayAndPauseControlResponse Alibabacloud_AliGeniessp10::Client::playAndPauseControl(shared_ptr<PlayAndPauseControlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<PlayAndPauseControlHeaders> headers = make_shared<PlayAndPauseControlHeaders>();
  return playAndPauseControlWithOptions(request, headers, runtime);
}

PlayAndPauseControlResponse Alibabacloud_AliGeniessp10::Client::playAndPauseControlWithOptions(shared_ptr<PlayAndPauseControlRequest> tmpReq, shared_ptr<PlayAndPauseControlHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<PlayAndPauseControlShrinkRequest> request = make_shared<PlayAndPauseControlShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<PlayAndPauseControlRequestDeviceInfo>(tmpReq->deviceInfo)) {
    request->deviceInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->deviceInfo->toMap()), make_shared<string>("DeviceInfo"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<PlayAndPauseControlRequestOpenPlayAndPauseControlParam>(tmpReq->openPlayAndPauseControlParam)) {
    request->openPlayAndPauseControlParamShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->openPlayAndPauseControlParam->toMap()), make_shared<string>("OpenPlayAndPauseControlParam"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<PlayAndPauseControlRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->userInfo->toMap()), make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceInfoShrink)) {
    query->insert(pair<string, string>("DeviceInfo", *request->deviceInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userInfoShrink)) {
    query->insert(pair<string, string>("UserInfo", *request->userInfoShrink));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->openPlayAndPauseControlParamShrink)) {
    body->insert(pair<string, string>("OpenPlayAndPauseControlParam", *request->openPlayAndPauseControlParamShrink));
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
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PlayAndPauseControl"))},
    {"version", boost::any(string("ssp_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ssp/PlayAndPauseControl"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PlayAndPauseControlResponse(callApi(params, req, runtime));
}

PlayModeControlResponse Alibabacloud_AliGeniessp10::Client::playModeControl(shared_ptr<PlayModeControlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<PlayModeControlHeaders> headers = make_shared<PlayModeControlHeaders>();
  return playModeControlWithOptions(request, headers, runtime);
}

PlayModeControlResponse Alibabacloud_AliGeniessp10::Client::playModeControlWithOptions(shared_ptr<PlayModeControlRequest> tmpReq, shared_ptr<PlayModeControlHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<PlayModeControlShrinkRequest> request = make_shared<PlayModeControlShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<PlayModeControlRequestDeviceInfo>(tmpReq->deviceInfo)) {
    request->deviceInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->deviceInfo->toMap()), make_shared<string>("DeviceInfo"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<PlayModeControlRequestOpenPlayModeControlRequest>(tmpReq->openPlayModeControlRequest)) {
    request->openPlayModeControlRequestShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->openPlayModeControlRequest->toMap()), make_shared<string>("OpenPlayModeControlRequest"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<PlayModeControlRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->userInfo->toMap()), make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceInfoShrink)) {
    query->insert(pair<string, string>("DeviceInfo", *request->deviceInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userInfoShrink)) {
    query->insert(pair<string, string>("UserInfo", *request->userInfoShrink));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->openPlayModeControlRequestShrink)) {
    body->insert(pair<string, string>("OpenPlayModeControlRequest", *request->openPlayModeControlRequestShrink));
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
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PlayModeControl"))},
    {"version", boost::any(string("ssp_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ssp/PlayModeControl"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PlayModeControlResponse(callApi(params, req, runtime));
}

PreviousAndNextControlResponse Alibabacloud_AliGeniessp10::Client::previousAndNextControl(shared_ptr<PreviousAndNextControlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<PreviousAndNextControlHeaders> headers = make_shared<PreviousAndNextControlHeaders>();
  return previousAndNextControlWithOptions(request, headers, runtime);
}

PreviousAndNextControlResponse Alibabacloud_AliGeniessp10::Client::previousAndNextControlWithOptions(shared_ptr<PreviousAndNextControlRequest> tmpReq, shared_ptr<PreviousAndNextControlHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<PreviousAndNextControlShrinkRequest> request = make_shared<PreviousAndNextControlShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<PreviousAndNextControlRequestDeviceInfo>(tmpReq->deviceInfo)) {
    request->deviceInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->deviceInfo->toMap()), make_shared<string>("DeviceInfo"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<PreviousAndNextControlRequestOpenControlPlayingListRequest>(tmpReq->openControlPlayingListRequest)) {
    request->openControlPlayingListRequestShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->openControlPlayingListRequest->toMap()), make_shared<string>("OpenControlPlayingListRequest"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<PreviousAndNextControlRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->userInfo->toMap()), make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceInfoShrink)) {
    query->insert(pair<string, string>("DeviceInfo", *request->deviceInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userInfoShrink)) {
    query->insert(pair<string, string>("UserInfo", *request->userInfoShrink));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->openControlPlayingListRequestShrink)) {
    body->insert(pair<string, string>("OpenControlPlayingListRequest", *request->openControlPlayingListRequestShrink));
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
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PreviousAndNextControl"))},
    {"version", boost::any(string("ssp_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ssp/PreviousAndNextControl"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PreviousAndNextControlResponse(callApi(params, req, runtime));
}

ProgressControlResponse Alibabacloud_AliGeniessp10::Client::progressControl(shared_ptr<ProgressControlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ProgressControlHeaders> headers = make_shared<ProgressControlHeaders>();
  return progressControlWithOptions(request, headers, runtime);
}

ProgressControlResponse Alibabacloud_AliGeniessp10::Client::progressControlWithOptions(shared_ptr<ProgressControlRequest> tmpReq, shared_ptr<ProgressControlHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ProgressControlShrinkRequest> request = make_shared<ProgressControlShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ProgressControlRequestDeviceInfo>(tmpReq->deviceInfo)) {
    request->deviceInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->deviceInfo->toMap()), make_shared<string>("DeviceInfo"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<ProgressControlRequestOpenProgressControlRequest>(tmpReq->openProgressControlRequest)) {
    request->openProgressControlRequestShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->openProgressControlRequest->toMap()), make_shared<string>("OpenProgressControlRequest"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<ProgressControlRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->userInfo->toMap()), make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceInfoShrink)) {
    query->insert(pair<string, string>("DeviceInfo", *request->deviceInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userInfoShrink)) {
    query->insert(pair<string, string>("UserInfo", *request->userInfoShrink));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->openProgressControlRequestShrink)) {
    body->insert(pair<string, string>("OpenProgressControlRequest", *request->openProgressControlRequestShrink));
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
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ProgressControl"))},
    {"version", boost::any(string("ssp_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ssp/ProgressControl"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ProgressControlResponse(callApi(params, req, runtime));
}

QueryMusicTypeResponse Alibabacloud_AliGeniessp10::Client::queryMusicType(shared_ptr<QueryMusicTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<QueryMusicTypeHeaders> headers = make_shared<QueryMusicTypeHeaders>();
  return queryMusicTypeWithOptions(request, headers, runtime);
}

QueryMusicTypeResponse Alibabacloud_AliGeniessp10::Client::queryMusicTypeWithOptions(shared_ptr<QueryMusicTypeRequest> tmpReq, shared_ptr<QueryMusicTypeHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<QueryMusicTypeShrinkRequest> request = make_shared<QueryMusicTypeShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<QueryMusicTypeRequestDeviceInfo>(tmpReq->deviceInfo)) {
    request->deviceInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->deviceInfo->toMap()), make_shared<string>("DeviceInfo"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<QueryMusicTypeRequestPayload>(tmpReq->payload)) {
    request->payloadShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->payload->toMap()), make_shared<string>("Payload"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<QueryMusicTypeRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->userInfo->toMap()), make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceInfoShrink)) {
    body->insert(pair<string, string>("DeviceInfo", *request->deviceInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->payloadShrink)) {
    body->insert(pair<string, string>("Payload", *request->payloadShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userInfoShrink)) {
    body->insert(pair<string, string>("UserInfo", *request->userInfoShrink));
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
    {"action", boost::any(string("QueryMusicType"))},
    {"version", boost::any(string("ssp_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ssp/queryMusicType"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryMusicTypeResponse(callApi(params, req, runtime));
}

ReadMessageResponse Alibabacloud_AliGeniessp10::Client::readMessage(shared_ptr<ReadMessageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ReadMessageHeaders> headers = make_shared<ReadMessageHeaders>();
  return readMessageWithOptions(request, headers, runtime);
}

ReadMessageResponse Alibabacloud_AliGeniessp10::Client::readMessageWithOptions(shared_ptr<ReadMessageRequest> tmpReq, shared_ptr<ReadMessageHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ReadMessageShrinkRequest> request = make_shared<ReadMessageShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ReadMessageRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->userInfo->toMap()), make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->messageId)) {
    query->insert(pair<string, long>("MessageId", *request->messageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userInfoShrink)) {
    query->insert(pair<string, string>("UserInfo", *request->userInfoShrink));
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
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReadMessage"))},
    {"version", boost::any(string("ssp_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ssp/readMessage"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReadMessageResponse(callApi(params, req, runtime));
}

ScanCodeBindResponse Alibabacloud_AliGeniessp10::Client::scanCodeBind(shared_ptr<ScanCodeBindRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ScanCodeBindHeaders> headers = make_shared<ScanCodeBindHeaders>();
  return scanCodeBindWithOptions(request, headers, runtime);
}

ScanCodeBindResponse Alibabacloud_AliGeniessp10::Client::scanCodeBindWithOptions(shared_ptr<ScanCodeBindRequest> tmpReq, shared_ptr<ScanCodeBindHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ScanCodeBindShrinkRequest> request = make_shared<ScanCodeBindShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ScanCodeBindRequestBindReq>(tmpReq->bindReq)) {
    request->bindReqShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->bindReq->toMap()), make_shared<string>("BindReq"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<ScanCodeBindRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->userInfo->toMap()), make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bindReqShrink)) {
    body->insert(pair<string, string>("BindReq", *request->bindReqShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userInfoShrink)) {
    body->insert(pair<string, string>("UserInfo", *request->userInfoShrink));
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
    {"action", boost::any(string("ScanCodeBind"))},
    {"version", boost::any(string("ssp_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ssp/scanCode"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ScanCodeBindResponse(callApi(params, req, runtime));
}

ScgSearchResponse Alibabacloud_AliGeniessp10::Client::scgSearch(shared_ptr<ScgSearchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ScgSearchHeaders> headers = make_shared<ScgSearchHeaders>();
  return scgSearchWithOptions(request, headers, runtime);
}

ScgSearchResponse Alibabacloud_AliGeniessp10::Client::scgSearchWithOptions(shared_ptr<ScgSearchRequest> tmpReq, shared_ptr<ScgSearchHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ScgSearchShrinkRequest> request = make_shared<ScgSearchShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ScgSearchRequestScgFilter>(tmpReq->scgFilter)) {
    request->scgFilterShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->scgFilter->toMap()), make_shared<string>("ScgFilter"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->scgFilterShrink)) {
    query->insert(pair<string, string>("ScgFilter", *request->scgFilterShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topicId)) {
    query->insert(pair<string, string>("TopicId", *request->topicId));
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
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ScgSearch"))},
    {"version", boost::any(string("ssp_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ssp/scgSearch"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ScgSearchResponse(callApi(params, req, runtime));
}

SearchContentResponse Alibabacloud_AliGeniessp10::Client::searchContent(shared_ptr<SearchContentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<SearchContentHeaders> headers = make_shared<SearchContentHeaders>();
  return searchContentWithOptions(request, headers, runtime);
}

SearchContentResponse Alibabacloud_AliGeniessp10::Client::searchContentWithOptions(shared_ptr<SearchContentRequest> tmpReq, shared_ptr<SearchContentHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SearchContentShrinkRequest> request = make_shared<SearchContentShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<SearchContentRequestDeviceInfo>(tmpReq->deviceInfo)) {
    request->deviceInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->deviceInfo->toMap()), make_shared<string>("DeviceInfo"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SearchContentRequestRequest>(tmpReq->request)) {
    request->requestShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->request->toMap()), make_shared<string>("Request"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SearchContentRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->userInfo->toMap()), make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceInfoShrink)) {
    query->insert(pair<string, string>("DeviceInfo", *request->deviceInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userInfoShrink)) {
    query->insert(pair<string, string>("UserInfo", *request->userInfoShrink));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->requestShrink)) {
    body->insert(pair<string, string>("Request", *request->requestShrink));
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
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SearchContent"))},
    {"version", boost::any(string("ssp_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ssp/SearchContent"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SearchContentResponse(callApi(params, req, runtime));
}

SendMessageResponse Alibabacloud_AliGeniessp10::Client::sendMessage(shared_ptr<SendMessageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<SendMessageHeaders> headers = make_shared<SendMessageHeaders>();
  return sendMessageWithOptions(request, headers, runtime);
}

SendMessageResponse Alibabacloud_AliGeniessp10::Client::sendMessageWithOptions(shared_ptr<SendMessageRequest> tmpReq, shared_ptr<SendMessageHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SendMessageShrinkRequest> request = make_shared<SendMessageShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<SendMessageRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->userInfo->toMap()), make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userInfoShrink)) {
    query->insert(pair<string, string>("UserInfo", *request->userInfoShrink));
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
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SendMessage"))},
    {"version", boost::any(string("ssp_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ssp/sendMessage"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SendMessageResponse(callApi(params, req, runtime));
}

SetDeviceSettingResponse Alibabacloud_AliGeniessp10::Client::setDeviceSetting(shared_ptr<SetDeviceSettingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<SetDeviceSettingHeaders> headers = make_shared<SetDeviceSettingHeaders>();
  return setDeviceSettingWithOptions(request, headers, runtime);
}

SetDeviceSettingResponse Alibabacloud_AliGeniessp10::Client::setDeviceSettingWithOptions(shared_ptr<SetDeviceSettingRequest> tmpReq, shared_ptr<SetDeviceSettingHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SetDeviceSettingShrinkRequest> request = make_shared<SetDeviceSettingShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<SetDeviceSettingRequestDeviceInfo>(tmpReq->deviceInfo)) {
    request->deviceInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->deviceInfo->toMap()), make_shared<string>("DeviceInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceInfoShrink)) {
    query->insert(pair<string, string>("DeviceInfo", *request->deviceInfoShrink));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->key)) {
    body->insert(pair<string, string>("Key", *request->key));
  }
  if (!Darabonba_Util::Client::isUnset<boost::any>(request->value)) {
    body->insert(pair<string, boost::any>("Value", *request->value));
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
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetDeviceSetting"))},
    {"version", boost::any(string("ssp_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ssp/setDeviceSetting"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetDeviceSettingResponse(callApi(params, req, runtime));
}

UnbindAligenieUserResponse Alibabacloud_AliGeniessp10::Client::unbindAligenieUser(shared_ptr<UnbindAligenieUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<UnbindAligenieUserHeaders> headers = make_shared<UnbindAligenieUserHeaders>();
  return unbindAligenieUserWithOptions(request, headers, runtime);
}

UnbindAligenieUserResponse Alibabacloud_AliGeniessp10::Client::unbindAligenieUserWithOptions(shared_ptr<UnbindAligenieUserRequest> request, shared_ptr<UnbindAligenieUserHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->loginStateAccessToken)) {
    body->insert(pair<string, string>("LoginStateAccessToken", *request->loginStateAccessToken));
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
    {"action", boost::any(string("UnbindAligenieUser"))},
    {"version", boost::any(string("ssp_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ssp/unbindAligenieUser"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UnbindAligenieUserResponse(callApi(params, req, runtime));
}

UnbindDeviceResponse Alibabacloud_AliGeniessp10::Client::unbindDevice(shared_ptr<UnbindDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<UnbindDeviceHeaders> headers = make_shared<UnbindDeviceHeaders>();
  return unbindDeviceWithOptions(request, headers, runtime);
}

UnbindDeviceResponse Alibabacloud_AliGeniessp10::Client::unbindDeviceWithOptions(shared_ptr<UnbindDeviceRequest> tmpReq, shared_ptr<UnbindDeviceHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UnbindDeviceShrinkRequest> request = make_shared<UnbindDeviceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UnbindDeviceRequestDeviceInfo>(tmpReq->deviceInfo)) {
    request->deviceInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->deviceInfo->toMap()), make_shared<string>("DeviceInfo"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UnbindDeviceRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->userInfo->toMap()), make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceInfoShrink)) {
    body->insert(pair<string, string>("DeviceInfo", *request->deviceInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userInfoShrink)) {
    body->insert(pair<string, string>("UserInfo", *request->userInfoShrink));
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
    {"action", boost::any(string("UnbindDevice"))},
    {"version", boost::any(string("ssp_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ssp/unbindDevice"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UnbindDeviceResponse(callApi(params, req, runtime));
}

UpdateAlarmResponse Alibabacloud_AliGeniessp10::Client::updateAlarm(shared_ptr<UpdateAlarmRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<UpdateAlarmHeaders> headers = make_shared<UpdateAlarmHeaders>();
  return updateAlarmWithOptions(request, headers, runtime);
}

UpdateAlarmResponse Alibabacloud_AliGeniessp10::Client::updateAlarmWithOptions(shared_ptr<UpdateAlarmRequest> tmpReq, shared_ptr<UpdateAlarmHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateAlarmShrinkRequest> request = make_shared<UpdateAlarmShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdateAlarmRequestDeviceInfo>(tmpReq->deviceInfo)) {
    request->deviceInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->deviceInfo->toMap()), make_shared<string>("DeviceInfo"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateAlarmRequestPayload>(tmpReq->payload)) {
    request->payloadShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->payload->toMap()), make_shared<string>("Payload"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateAlarmRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->userInfo->toMap()), make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceInfoShrink)) {
    body->insert(pair<string, string>("DeviceInfo", *request->deviceInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->payloadShrink)) {
    body->insert(pair<string, string>("Payload", *request->payloadShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userInfoShrink)) {
    body->insert(pair<string, string>("UserInfo", *request->userInfoShrink));
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
    {"action", boost::any(string("UpdateAlarm"))},
    {"version", boost::any(string("ssp_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ssp/updateAlarm"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateAlarmResponse(callApi(params, req, runtime));
}

