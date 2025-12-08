#include <darabonba/Core.hpp>
#include <alibabacloud/AppstreamCenter20210220.hpp>
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
using namespace AlibabaCloud::AppstreamCenter20210220::Models;
namespace AlibabaCloud
{
namespace AppstreamCenter20210220
{

AlibabaCloud::AppstreamCenter20210220::Client::Client(Config &config): OpenApiClient(config){
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
 * @summary 终端用户登出
 *
 * @param request ClientUserLogoutRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ClientUserLogoutResponse
 */
ClientUserLogoutResponse Client::clientUserLogoutWithOptions(const ClientUserLogoutRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientId()) {
    query["ClientId"] = request.clientId();
  }

  if (!!request.hasLoginToken()) {
    query["LoginToken"] = request.loginToken();
  }

  if (!!request.hasOfficeSiteId()) {
    query["OfficeSiteId"] = request.officeSiteId();
  }

  if (!!request.hasProfileRegion()) {
    query["ProfileRegion"] = request.profileRegion();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.sessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ClientUserLogout"},
    {"version" , "2021-02-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doRPCRequest(params.action(), params.version(), params.protocol(), params.method(), params.authType(), params.bodyType(), req, runtime)).get<ClientUserLogoutResponse>();
}

/**
 * @summary 终端用户登出
 *
 * @param request ClientUserLogoutRequest
 * @return ClientUserLogoutResponse
 */
ClientUserLogoutResponse Client::clientUserLogout(const ClientUserLogoutRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return clientUserLogoutWithOptions(request, runtime);
}

/**
 * @summary 身份认证查询接口
 *
 * @param tmpReq FindIdpListByLoginIdentifierRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return FindIdpListByLoginIdentifierResponse
 */
FindIdpListByLoginIdentifierResponse Client::findIdpListByLoginIdentifierWithOptions(const FindIdpListByLoginIdentifierRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  FindIdpListByLoginIdentifierShrinkRequest request = FindIdpListByLoginIdentifierShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAvailableFeatures()) {
    request.setAvailableFeaturesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.availableFeatures(), "AvailableFeatures", "json"));
  }

  json query = {};
  if (!!request.hasAvailableFeaturesShrink()) {
    query["AvailableFeatures"] = request.availableFeaturesShrink();
  }

  if (!!request.hasClientIp()) {
    query["ClientIp"] = request.clientIp();
  }

  json body = {};
  if (!!request.hasClientChannel()) {
    body["ClientChannel"] = request.clientChannel();
  }

  if (!!request.hasClientId()) {
    body["ClientId"] = request.clientId();
  }

  if (!!request.hasClientOS()) {
    body["ClientOS"] = request.clientOS();
  }

  if (!!request.hasClientVersion()) {
    body["ClientVersion"] = request.clientVersion();
  }

  if (!!request.hasLoginIdentifier()) {
    body["LoginIdentifier"] = request.loginIdentifier();
  }

  if (!!request.hasSupportTypes()) {
    body["SupportTypes"] = request.supportTypes();
  }

  if (!!request.hasUuid()) {
    body["Uuid"] = request.uuid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "FindIdpListByLoginIdentifier"},
    {"version" , "2021-02-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doRPCRequest(params.action(), params.version(), params.protocol(), params.method(), params.authType(), params.bodyType(), req, runtime)).get<FindIdpListByLoginIdentifierResponse>();
}

/**
 * @summary 身份认证查询接口
 *
 * @param request FindIdpListByLoginIdentifierRequest
 * @return FindIdpListByLoginIdentifierResponse
 */
FindIdpListByLoginIdentifierResponse Client::findIdpListByLoginIdentifier(const FindIdpListByLoginIdentifierRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return findIdpListByLoginIdentifierWithOptions(request, runtime);
}

/**
 * @summary GetLoginToken
 *
 * @param tmpReq GetLoginTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLoginTokenResponse
 */
GetLoginTokenResponse Client::getLoginTokenWithOptions(const GetLoginTokenRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetLoginTokenShrinkRequest request = GetLoginTokenShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAvailableFeatures()) {
    request.setAvailableFeaturesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.availableFeatures(), "AvailableFeatures", "json"));
  }

  json query = {};
  if (!!request.hasAreaSite()) {
    query["AreaSite"] = request.areaSite();
  }

  if (!!request.hasAuthenticationCode()) {
    query["AuthenticationCode"] = request.authenticationCode();
  }

  if (!!request.hasAvailableFeaturesShrink()) {
    query["AvailableFeatures"] = request.availableFeaturesShrink();
  }

  if (!!request.hasChannel()) {
    query["Channel"] = request.channel();
  }

  if (!!request.hasClientId()) {
    query["ClientId"] = request.clientId();
  }

  if (!!request.hasClientName()) {
    query["ClientName"] = request.clientName();
  }

  if (!!request.hasClientOS()) {
    query["ClientOS"] = request.clientOS();
  }

  if (!!request.hasClientType()) {
    query["ClientType"] = request.clientType();
  }

  if (!!request.hasClientVersion()) {
    query["ClientVersion"] = request.clientVersion();
  }

  if (!!request.hasCurrentStage()) {
    query["CurrentStage"] = request.currentStage();
  }

  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.directoryId();
  }

  if (!!request.hasEncryptedFingerPrintData()) {
    query["EncryptedFingerPrintData"] = request.encryptedFingerPrintData();
  }

  if (!!request.hasEncryptedKey()) {
    query["EncryptedKey"] = request.encryptedKey();
  }

  if (!!request.hasEncryptedPassword()) {
    query["EncryptedPassword"] = request.encryptedPassword();
  }

  if (!!request.hasEndUserId()) {
    query["EndUserId"] = request.endUserId();
  }

  if (!!request.hasFingerPrintData()) {
    query["FingerPrintData"] = request.fingerPrintData();
  }

  if (!!request.hasIdpId()) {
    query["IdpId"] = request.idpId();
  }

  if (!!request.hasImageUrl()) {
    query["ImageUrl"] = request.imageUrl();
  }

  if (!!request.hasKeepAlive()) {
    query["KeepAlive"] = request.keepAlive();
  }

  if (!!request.hasKeepAliveToken()) {
    query["KeepAliveToken"] = request.keepAliveToken();
  }

  if (!!request.hasLoginIdentifier()) {
    query["LoginIdentifier"] = request.loginIdentifier();
  }

  if (!!request.hasLoginName()) {
    query["LoginName"] = request.loginName();
  }

  if (!!request.hasMfaType()) {
    query["MfaType"] = request.mfaType();
  }

  if (!!request.hasNetworkType()) {
    query["NetworkType"] = request.networkType();
  }

  if (!!request.hasNewPassword()) {
    query["NewPassword"] = request.newPassword();
  }

  if (!!request.hasOfficeSiteId()) {
    query["OfficeSiteId"] = request.officeSiteId();
  }

  if (!!request.hasOldPassword()) {
    query["OldPassword"] = request.oldPassword();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.password();
  }

  if (!!request.hasPhone()) {
    query["Phone"] = request.phone();
  }

  if (!!request.hasPhoneVerifyCode()) {
    query["PhoneVerifyCode"] = request.phoneVerifyCode();
  }

  if (!!request.hasProfileRegion()) {
    query["ProfileRegion"] = request.profileRegion();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.sessionId();
  }

  if (!!request.hasSsoExtendsCookies()) {
    query["SsoExtendsCookies"] = request.ssoExtendsCookies();
  }

  if (!!request.hasSsoSessionToken()) {
    query["SsoSessionToken"] = request.ssoSessionToken();
  }

  if (!!request.hasTokenCode()) {
    query["TokenCode"] = request.tokenCode();
  }

  if (!!request.hasUmidToken()) {
    query["UmidToken"] = request.umidToken();
  }

  if (!!request.hasUuid()) {
    query["Uuid"] = request.uuid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLoginToken"},
    {"version" , "2021-02-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doRPCRequest(params.action(), params.version(), params.protocol(), params.method(), params.authType(), params.bodyType(), req, runtime)).get<GetLoginTokenResponse>();
}

/**
 * @summary GetLoginToken
 *
 * @param request GetLoginTokenRequest
 * @return GetLoginTokenResponse
 */
GetLoginTokenResponse Client::getLoginToken(const GetLoginTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLoginTokenWithOptions(request, runtime);
}

/**
 * @summary 获取无影StsToken
 *
 * @param request GetStsTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetStsTokenResponse
 */
GetStsTokenResponse Client::getStsTokenWithOptions(const GetStsTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAuthCode()) {
    body["AuthCode"] = request.authCode();
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

  if (!!request.hasUuid()) {
    body["Uuid"] = request.uuid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetStsToken"},
    {"version" , "2021-02-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doRPCRequest(params.action(), params.version(), params.protocol(), params.method(), params.authType(), params.bodyType(), req, runtime)).get<GetStsTokenResponse>();
}

/**
 * @summary 获取无影StsToken
 *
 * @param request GetStsTokenRequest
 * @return GetStsTokenResponse
 */
GetStsTokenResponse Client::getStsToken(const GetStsTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getStsTokenWithOptions(request, runtime);
}

/**
 * @param request RefreshLoginTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RefreshLoginTokenResponse
 */
RefreshLoginTokenResponse Client::refreshLoginTokenWithOptions(const RefreshLoginTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientId()) {
    query["ClientId"] = request.clientId();
  }

  if (!!request.hasClientType()) {
    query["ClientType"] = request.clientType();
  }

  if (!!request.hasEndUserId()) {
    query["EndUserId"] = request.endUserId();
  }

  if (!!request.hasLoginIdentifier()) {
    query["LoginIdentifier"] = request.loginIdentifier();
  }

  if (!!request.hasLoginToken()) {
    query["LoginToken"] = request.loginToken();
  }

  if (!!request.hasOfficeSiteId()) {
    query["OfficeSiteId"] = request.officeSiteId();
  }

  if (!!request.hasProfileRegion()) {
    query["ProfileRegion"] = request.profileRegion();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.sessionId();
  }

  if (!!request.hasUuid()) {
    query["Uuid"] = request.uuid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RefreshLoginToken"},
    {"version" , "2021-02-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doRPCRequest(params.action(), params.version(), params.protocol(), params.method(), params.authType(), params.bodyType(), req, runtime)).get<RefreshLoginTokenResponse>();
}

/**
 * @param request RefreshLoginTokenRequest
 * @return RefreshLoginTokenResponse
 */
RefreshLoginTokenResponse Client::refreshLoginToken(const RefreshLoginTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return refreshLoginTokenWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210220