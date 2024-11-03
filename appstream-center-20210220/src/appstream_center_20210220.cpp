// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/appstream_center_20210220.hpp>
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

using namespace Alibabacloud_Appstream-center20210220;

Alibabacloud_Appstream-center20210220::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _signatureAlgorithm = make_shared<string>("v2");
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("appstream-center"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Appstream-center20210220::Client::getEndpoint(shared_ptr<string> productId,
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

FindIdpListByLoginIdentifierResponse Alibabacloud_Appstream-center20210220::Client::findIdpListByLoginIdentifierWithOptions(shared_ptr<FindIdpListByLoginIdentifierRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<FindIdpListByLoginIdentifierShrinkRequest> request = make_shared<FindIdpListByLoginIdentifierShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(tmpReq->availableFeatures)) {
    request->availableFeaturesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->availableFeatures, make_shared<string>("AvailableFeatures"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->availableFeaturesShrink)) {
    query->insert(pair<string, string>("AvailableFeatures", *request->availableFeaturesShrink));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientChannel)) {
    body->insert(pair<string, string>("ClientChannel", *request->clientChannel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientId)) {
    body->insert(pair<string, string>("ClientId", *request->clientId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientIp)) {
    body->insert(pair<string, string>("ClientIp", *request->clientIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientOS)) {
    body->insert(pair<string, string>("ClientOS", *request->clientOS));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientVersion)) {
    body->insert(pair<string, string>("ClientVersion", *request->clientVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loginIdentifier)) {
    body->insert(pair<string, string>("LoginIdentifier", *request->loginIdentifier));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->supportTypes)) {
    body->insert(pair<string, vector<string>>("SupportTypes", *request->supportTypes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uuid)) {
    body->insert(pair<string, string>("Uuid", *request->uuid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FindIdpListByLoginIdentifier"))},
    {"version", boost::any(string("2021-02-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FindIdpListByLoginIdentifierResponse(callApi(params, req, runtime));
}

FindIdpListByLoginIdentifierResponse Alibabacloud_Appstream-center20210220::Client::findIdpListByLoginIdentifier(shared_ptr<FindIdpListByLoginIdentifierRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return findIdpListByLoginIdentifierWithOptions(request, runtime);
}

GetLoginTokenResponse Alibabacloud_Appstream-center20210220::Client::getLoginTokenWithOptions(shared_ptr<GetLoginTokenRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetLoginTokenShrinkRequest> request = make_shared<GetLoginTokenShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(tmpReq->availableFeatures)) {
    request->availableFeaturesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->availableFeatures, make_shared<string>("AvailableFeatures"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authenticationCode)) {
    query->insert(pair<string, string>("AuthenticationCode", *request->authenticationCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->availableFeaturesShrink)) {
    query->insert(pair<string, string>("AvailableFeatures", *request->availableFeaturesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientId)) {
    query->insert(pair<string, string>("ClientId", *request->clientId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientOS)) {
    query->insert(pair<string, string>("ClientOS", *request->clientOS));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientType)) {
    query->insert(pair<string, string>("ClientType", *request->clientType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientVersion)) {
    query->insert(pair<string, string>("ClientVersion", *request->clientVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->currentStage)) {
    query->insert(pair<string, string>("CurrentStage", *request->currentStage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->directoryId)) {
    query->insert(pair<string, string>("DirectoryId", *request->directoryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->encryptedFingerPrintData)) {
    query->insert(pair<string, string>("EncryptedFingerPrintData", *request->encryptedFingerPrintData));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->encryptedKey)) {
    query->insert(pair<string, string>("EncryptedKey", *request->encryptedKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->encryptedPassword)) {
    query->insert(pair<string, string>("EncryptedPassword", *request->encryptedPassword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endUserId)) {
    query->insert(pair<string, string>("EndUserId", *request->endUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fingerPrintData)) {
    query->insert(pair<string, string>("FingerPrintData", *request->fingerPrintData));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idpId)) {
    query->insert(pair<string, string>("IdpId", *request->idpId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageUrl)) {
    query->insert(pair<string, string>("ImageUrl", *request->imageUrl));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->keepAlive)) {
    query->insert(pair<string, bool>("KeepAlive", *request->keepAlive));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keepAliveToken)) {
    query->insert(pair<string, string>("KeepAliveToken", *request->keepAliveToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loginIdentifier)) {
    query->insert(pair<string, string>("LoginIdentifier", *request->loginIdentifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loginName)) {
    query->insert(pair<string, string>("LoginName", *request->loginName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mfaType)) {
    query->insert(pair<string, string>("MfaType", *request->mfaType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->networkType)) {
    query->insert(pair<string, string>("NetworkType", *request->networkType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->newPassword)) {
    query->insert(pair<string, string>("NewPassword", *request->newPassword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->officeSiteId)) {
    query->insert(pair<string, string>("OfficeSiteId", *request->officeSiteId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->oldPassword)) {
    query->insert(pair<string, string>("OldPassword", *request->oldPassword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->password)) {
    query->insert(pair<string, string>("Password", *request->password));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phone)) {
    query->insert(pair<string, string>("Phone", *request->phone));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneVerifyCode)) {
    query->insert(pair<string, string>("PhoneVerifyCode", *request->phoneVerifyCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    query->insert(pair<string, string>("SessionId", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ssoExtendsCookies)) {
    query->insert(pair<string, string>("SsoExtendsCookies", *request->ssoExtendsCookies));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ssoSessionToken)) {
    query->insert(pair<string, string>("SsoSessionToken", *request->ssoSessionToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tokenCode)) {
    query->insert(pair<string, string>("TokenCode", *request->tokenCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->umidToken)) {
    query->insert(pair<string, string>("UmidToken", *request->umidToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uuid)) {
    query->insert(pair<string, string>("Uuid", *request->uuid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetLoginToken"))},
    {"version", boost::any(string("2021-02-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetLoginTokenResponse(callApi(params, req, runtime));
}

GetLoginTokenResponse Alibabacloud_Appstream-center20210220::Client::getLoginToken(shared_ptr<GetLoginTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getLoginTokenWithOptions(request, runtime);
}

RefreshLoginTokenResponse Alibabacloud_Appstream-center20210220::Client::refreshLoginTokenWithOptions(shared_ptr<RefreshLoginTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientId)) {
    query->insert(pair<string, string>("ClientId", *request->clientId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientType)) {
    query->insert(pair<string, string>("ClientType", *request->clientType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endUserId)) {
    query->insert(pair<string, string>("EndUserId", *request->endUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loginIdentifier)) {
    query->insert(pair<string, string>("LoginIdentifier", *request->loginIdentifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loginToken)) {
    query->insert(pair<string, string>("LoginToken", *request->loginToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->officeSiteId)) {
    query->insert(pair<string, string>("OfficeSiteId", *request->officeSiteId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->profileRegion)) {
    query->insert(pair<string, string>("ProfileRegion", *request->profileRegion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    query->insert(pair<string, string>("SessionId", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uuid)) {
    query->insert(pair<string, string>("Uuid", *request->uuid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RefreshLoginToken"))},
    {"version", boost::any(string("2021-02-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RefreshLoginTokenResponse(callApi(params, req, runtime));
}

RefreshLoginTokenResponse Alibabacloud_Appstream-center20210220::Client::refreshLoginToken(shared_ptr<RefreshLoginTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return refreshLoginTokenWithOptions(request, runtime);
}

