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
    query["ClientId"] = request.getClientId();
  }

  if (!!request.hasLoginToken()) {
    query["LoginToken"] = request.getLoginToken();
  }

  if (!!request.hasOfficeSiteId()) {
    query["OfficeSiteId"] = request.getOfficeSiteId();
  }

  if (!!request.hasProfileRegion()) {
    query["ProfileRegion"] = request.getProfileRegion();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.getSessionId();
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
  return json(doRPCRequest(params.getAction(), params.getVersion(), params.getProtocol(), params.getMethod(), params.getAuthType(), params.getBodyType(), req, runtime)).get<ClientUserLogoutResponse>();
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
 * @summary Queries the information about identity providers by logon identifier.
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
    request.setAvailableFeaturesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAvailableFeatures(), "AvailableFeatures", "json"));
  }

  json query = {};
  if (!!request.hasAvailableFeaturesShrink()) {
    query["AvailableFeatures"] = request.getAvailableFeaturesShrink();
  }

  if (!!request.hasClientIp()) {
    query["ClientIp"] = request.getClientIp();
  }

  json body = {};
  if (!!request.hasClientChannel()) {
    body["ClientChannel"] = request.getClientChannel();
  }

  if (!!request.hasClientId()) {
    body["ClientId"] = request.getClientId();
  }

  if (!!request.hasClientOS()) {
    body["ClientOS"] = request.getClientOS();
  }

  if (!!request.hasClientVersion()) {
    body["ClientVersion"] = request.getClientVersion();
  }

  if (!!request.hasLoginIdentifier()) {
    body["LoginIdentifier"] = request.getLoginIdentifier();
  }

  if (!!request.hasSupportTypes()) {
    body["SupportTypes"] = request.getSupportTypes();
  }

  if (!!request.hasUuid()) {
    body["Uuid"] = request.getUuid();
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
  return json(doRPCRequest(params.getAction(), params.getVersion(), params.getProtocol(), params.getMethod(), params.getAuthType(), params.getBodyType(), req, runtime)).get<FindIdpListByLoginIdentifierResponse>();
}

/**
 * @summary Queries the information about identity providers by logon identifier.
 *
 * @param request FindIdpListByLoginIdentifierRequest
 * @return FindIdpListByLoginIdentifierResponse
 */
FindIdpListByLoginIdentifierResponse Client::findIdpListByLoginIdentifier(const FindIdpListByLoginIdentifierRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return findIdpListByLoginIdentifierWithOptions(request, runtime);
}

/**
 * @summary Queries a logon token using an enterprise identifier.
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
    request.setAvailableFeaturesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAvailableFeatures(), "AvailableFeatures", "json"));
  }

  json query = {};
  if (!!request.hasAreaSite()) {
    query["AreaSite"] = request.getAreaSite();
  }

  if (!!request.hasAuthenticationCode()) {
    query["AuthenticationCode"] = request.getAuthenticationCode();
  }

  if (!!request.hasAvailableFeaturesShrink()) {
    query["AvailableFeatures"] = request.getAvailableFeaturesShrink();
  }

  if (!!request.hasChannel()) {
    query["Channel"] = request.getChannel();
  }

  if (!!request.hasCipherEndUserId()) {
    query["CipherEndUserId"] = request.getCipherEndUserId();
  }

  if (!!request.hasCipherPassword()) {
    query["CipherPassword"] = request.getCipherPassword();
  }

  if (!!request.hasClientId()) {
    query["ClientId"] = request.getClientId();
  }

  if (!!request.hasClientName()) {
    query["ClientName"] = request.getClientName();
  }

  if (!!request.hasClientOS()) {
    query["ClientOS"] = request.getClientOS();
  }

  if (!!request.hasClientType()) {
    query["ClientType"] = request.getClientType();
  }

  if (!!request.hasClientVersion()) {
    query["ClientVersion"] = request.getClientVersion();
  }

  if (!!request.hasCurrentStage()) {
    query["CurrentStage"] = request.getCurrentStage();
  }

  if (!!request.hasDirectoryId()) {
    query["DirectoryId"] = request.getDirectoryId();
  }

  if (!!request.hasEncryptedFingerPrintData()) {
    query["EncryptedFingerPrintData"] = request.getEncryptedFingerPrintData();
  }

  if (!!request.hasEncryptedKey()) {
    query["EncryptedKey"] = request.getEncryptedKey();
  }

  if (!!request.hasEncryptedPassword()) {
    query["EncryptedPassword"] = request.getEncryptedPassword();
  }

  if (!!request.hasEndUserId()) {
    query["EndUserId"] = request.getEndUserId();
  }

  if (!!request.hasFingerPrintData()) {
    query["FingerPrintData"] = request.getFingerPrintData();
  }

  if (!!request.hasIdpId()) {
    query["IdpId"] = request.getIdpId();
  }

  if (!!request.hasImageUrl()) {
    query["ImageUrl"] = request.getImageUrl();
  }

  if (!!request.hasKeepAlive()) {
    query["KeepAlive"] = request.getKeepAlive();
  }

  if (!!request.hasKeepAliveToken()) {
    query["KeepAliveToken"] = request.getKeepAliveToken();
  }

  if (!!request.hasLoginIdentifier()) {
    query["LoginIdentifier"] = request.getLoginIdentifier();
  }

  if (!!request.hasLoginName()) {
    query["LoginName"] = request.getLoginName();
  }

  if (!!request.hasMfaType()) {
    query["MfaType"] = request.getMfaType();
  }

  if (!!request.hasNetworkType()) {
    query["NetworkType"] = request.getNetworkType();
  }

  if (!!request.hasNewPassword()) {
    query["NewPassword"] = request.getNewPassword();
  }

  if (!!request.hasOfficeSiteId()) {
    query["OfficeSiteId"] = request.getOfficeSiteId();
  }

  if (!!request.hasOldPassword()) {
    query["OldPassword"] = request.getOldPassword();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasPhone()) {
    query["Phone"] = request.getPhone();
  }

  if (!!request.hasPhoneVerifyCode()) {
    query["PhoneVerifyCode"] = request.getPhoneVerifyCode();
  }

  if (!!request.hasProfileRegion()) {
    query["ProfileRegion"] = request.getProfileRegion();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.getSessionId();
  }

  if (!!request.hasSsoExtendsCookies()) {
    query["SsoExtendsCookies"] = request.getSsoExtendsCookies();
  }

  if (!!request.hasSsoSessionToken()) {
    query["SsoSessionToken"] = request.getSsoSessionToken();
  }

  if (!!request.hasTokenCode()) {
    query["TokenCode"] = request.getTokenCode();
  }

  if (!!request.hasUmidToken()) {
    query["UmidToken"] = request.getUmidToken();
  }

  if (!!request.hasUuid()) {
    query["Uuid"] = request.getUuid();
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
  return json(doRPCRequest(params.getAction(), params.getVersion(), params.getProtocol(), params.getMethod(), params.getAuthType(), params.getBodyType(), req, runtime)).get<GetLoginTokenResponse>();
}

/**
 * @summary Queries a logon token using an enterprise identifier.
 *
 * @param request GetLoginTokenRequest
 * @return GetLoginTokenResponse
 */
GetLoginTokenResponse Client::getLoginToken(const GetLoginTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLoginTokenWithOptions(request, runtime);
}

/**
 * @summary Obtains an STS token.
 *
 * @param request GetStsTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetStsTokenResponse
 */
GetStsTokenResponse Client::getStsTokenWithOptions(const GetStsTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAuthCode()) {
    body["AuthCode"] = request.getAuthCode();
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

  if (!!request.hasUuid()) {
    body["Uuid"] = request.getUuid();
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
  return json(doRPCRequest(params.getAction(), params.getVersion(), params.getProtocol(), params.getMethod(), params.getAuthType(), params.getBodyType(), req, runtime)).get<GetStsTokenResponse>();
}

/**
 * @summary Obtains an STS token.
 *
 * @param request GetStsTokenRequest
 * @return GetStsTokenResponse
 */
GetStsTokenResponse Client::getStsToken(const GetStsTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getStsTokenWithOptions(request, runtime);
}

/**
 * @summary Refreshes a logon token.
 *
 * @param request RefreshLoginTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RefreshLoginTokenResponse
 */
RefreshLoginTokenResponse Client::refreshLoginTokenWithOptions(const RefreshLoginTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientId()) {
    query["ClientId"] = request.getClientId();
  }

  if (!!request.hasClientType()) {
    query["ClientType"] = request.getClientType();
  }

  if (!!request.hasEndUserId()) {
    query["EndUserId"] = request.getEndUserId();
  }

  if (!!request.hasLoginIdentifier()) {
    query["LoginIdentifier"] = request.getLoginIdentifier();
  }

  if (!!request.hasLoginToken()) {
    query["LoginToken"] = request.getLoginToken();
  }

  if (!!request.hasOfficeSiteId()) {
    query["OfficeSiteId"] = request.getOfficeSiteId();
  }

  if (!!request.hasProfileRegion()) {
    query["ProfileRegion"] = request.getProfileRegion();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.getSessionId();
  }

  if (!!request.hasUuid()) {
    query["Uuid"] = request.getUuid();
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
  return json(doRPCRequest(params.getAction(), params.getVersion(), params.getProtocol(), params.getMethod(), params.getAuthType(), params.getBodyType(), req, runtime)).get<RefreshLoginTokenResponse>();
}

/**
 * @summary Refreshes a logon token.
 *
 * @param request RefreshLoginTokenRequest
 * @return RefreshLoginTokenResponse
 */
RefreshLoginTokenResponse Client::refreshLoginToken(const RefreshLoginTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return refreshLoginTokenWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210220