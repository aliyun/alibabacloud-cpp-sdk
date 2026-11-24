#include <darabonba/Core.hpp>
#include <alibabacloud/AppstreamCenter20210218.hpp>
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
using namespace AlibabaCloud::AppstreamCenter20210218::Models;
namespace AlibabaCloud
{
namespace AppstreamCenter20210218
{

AlibabaCloud::AppstreamCenter20210218::Client::Client(Config &config): OpenApiClient(config){
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
 * @summary Creates a time-limited static access token for a specified user in the current account to access a single cloud desktop.
 *
 * @description When you call this operation, you must provide Resource and specify both ResourceType and ResourceId. Only a single cloud desktop is supported. You cannot omit Resource to authorize or query all cloud desktops.
 * AuthorizerId is the WyId of the user and cannot be replaced by a username. BusinessChannel supports Enterprise and Business. If omitted, the default value is Enterprise.
 * Before creation, the user must belong to the current calling account and have access permissions for the target cloud desktop. This operation only creates an access token. It does not create a user or add an authorization relationship between the user and the cloud desktop. Each successful call creates a new time-limited token. To obtain an existing token, call GetLatestThirdAppAccessToken and pass the same AuthorizerId and Resource.
 * The unit of Expiration is seconds. Valid values: 1 to 15552000. If omitted, the default value is 15552000, which equals 180 days. Permanent validity is not supported. Keep the returned AccessToken secure and avoid displaying the full token in logs or public content.
 *
 * @param tmpReq CreateThirdAppAccessTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateThirdAppAccessTokenResponse
 */
CreateThirdAppAccessTokenResponse Client::createThirdAppAccessTokenWithOptions(const CreateThirdAppAccessTokenRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateThirdAppAccessTokenShrinkRequest request = CreateThirdAppAccessTokenShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasResource()) {
    request.setResourceShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResource(), "Resource", "json"));
  }

  json body = {};
  if (!!request.hasAuthorizerId()) {
    body["AuthorizerId"] = request.getAuthorizerId();
  }

  if (!!request.hasBusinessChannel()) {
    body["BusinessChannel"] = request.getBusinessChannel();
  }

  if (!!request.hasExpiration()) {
    body["Expiration"] = request.getExpiration();
  }

  if (!!request.hasResourceShrink()) {
    body["Resource"] = request.getResourceShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateThirdAppAccessToken"},
    {"version" , "2021-02-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateThirdAppAccessTokenResponse>();
}

/**
 * @summary Creates a time-limited static access token for a specified user in the current account to access a single cloud desktop.
 *
 * @description When you call this operation, you must provide Resource and specify both ResourceType and ResourceId. Only a single cloud desktop is supported. You cannot omit Resource to authorize or query all cloud desktops.
 * AuthorizerId is the WyId of the user and cannot be replaced by a username. BusinessChannel supports Enterprise and Business. If omitted, the default value is Enterprise.
 * Before creation, the user must belong to the current calling account and have access permissions for the target cloud desktop. This operation only creates an access token. It does not create a user or add an authorization relationship between the user and the cloud desktop. Each successful call creates a new time-limited token. To obtain an existing token, call GetLatestThirdAppAccessToken and pass the same AuthorizerId and Resource.
 * The unit of Expiration is seconds. Valid values: 1 to 15552000. If omitted, the default value is 15552000, which equals 180 days. Permanent validity is not supported. Keep the returned AccessToken secure and avoid displaying the full token in logs or public content.
 *
 * @param request CreateThirdAppAccessTokenRequest
 * @return CreateThirdAppAccessTokenResponse
 */
CreateThirdAppAccessTokenResponse Client::createThirdAppAccessToken(const CreateThirdAppAccessTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createThirdAppAccessTokenWithOptions(request, runtime);
}

/**
 * @summary Invalidates a Wuying Workspace logon session before it naturally expires.
 *
 * @param request ExpireLoginTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExpireLoginTokenResponse
 */
ExpireLoginTokenResponse Client::expireLoginTokenWithOptions(const ExpireLoginTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEndUserId()) {
    body["EndUserId"] = request.getEndUserId();
  }

  if (!!request.hasLoginToken()) {
    body["LoginToken"] = request.getLoginToken();
  }

  if (!!request.hasOfficeSiteId()) {
    body["OfficeSiteId"] = request.getOfficeSiteId();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.getSessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ExpireLoginToken"},
    {"version" , "2021-02-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExpireLoginTokenResponse>();
}

/**
 * @summary Invalidates a Wuying Workspace logon session before it naturally expires.
 *
 * @param request ExpireLoginTokenRequest
 * @return ExpireLoginTokenResponse
 */
ExpireLoginTokenResponse Client::expireLoginToken(const ExpireLoginTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return expireLoginTokenWithOptions(request, runtime);
}

/**
 * @summary Retrieves an authorization code that contains user identity and permission information, which can be used to invoke cloud applications in integration scenarios.
 *
 * @description Retrieves an authorization code that contains user identity and permission information, which can be used to invoke cloud applications in integration scenarios.
 *
 * @param request GetAuthCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAuthCodeResponse
 */
GetAuthCodeResponse Client::getAuthCodeWithOptions(const GetAuthCodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTokenType()) {
    query["TokenType"] = request.getTokenType();
  }

  json body = {};
  if (!!request.hasAccountType()) {
    body["AccountType"] = request.getAccountType();
  }

  if (!!request.hasAdDomain()) {
    body["AdDomain"] = request.getAdDomain();
  }

  if (!!request.hasAdPassword()) {
    body["AdPassword"] = request.getAdPassword();
  }

  if (!!request.hasAutoCreateUser()) {
    body["AutoCreateUser"] = request.getAutoCreateUser();
  }

  if (!!request.hasEndUserId()) {
    body["EndUserId"] = request.getEndUserId();
  }

  if (!!request.hasExternalUserId()) {
    body["ExternalUserId"] = request.getExternalUserId();
  }

  if (!!request.hasPolicy()) {
    body["Policy"] = request.getPolicy();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetAuthCode"},
    {"version" , "2021-02-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAuthCodeResponse>();
}

/**
 * @summary Retrieves an authorization code that contains user identity and permission information, which can be used to invoke cloud applications in integration scenarios.
 *
 * @description Retrieves an authorization code that contains user identity and permission information, which can be used to invoke cloud applications in integration scenarios.
 *
 * @param request GetAuthCodeRequest
 * @return GetAuthCodeResponse
 */
GetAuthCodeResponse Client::getAuthCode(const GetAuthCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAuthCodeWithOptions(request, runtime);
}

/**
 * @summary Retrieves the current valid static access token for a specified user and a single cloud desktop under the current account, keeping the original expiration time.
 *
 * @description You must provide Resource and specify both ResourceType and ResourceId when calling this operation. Only a single cloud desktop is supported. You cannot omit Resource to authorize or query all cloud desktops.
 * AuthorizerId is the WyId of the user and cannot be replaced by a username. BusinessChannel supports Enterprise and Business. If omitted, the default value is Enterprise.
 * The AuthorizerId and Resource in the query conditions must be consistent with those used when the token was created. This operation only returns the current valid token for the current account, user, and cloud desktop. It does not create a new token, renew the token, or restore or roll back to a historical token. If no valid token is found, the token has expired, or the corresponding cache has been cleared, AccessToken.NotFound is returned. To obtain a new token, call CreateThirdAppAccessToken.
 * Keep the returned AccessToken secure and avoid displaying the full token in logs or public content.
 *
 * @param tmpReq GetLatestThirdAppAccessTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLatestThirdAppAccessTokenResponse
 */
GetLatestThirdAppAccessTokenResponse Client::getLatestThirdAppAccessTokenWithOptions(const GetLatestThirdAppAccessTokenRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetLatestThirdAppAccessTokenShrinkRequest request = GetLatestThirdAppAccessTokenShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasResource()) {
    request.setResourceShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResource(), "Resource", "json"));
  }

  json body = {};
  if (!!request.hasAuthorizerId()) {
    body["AuthorizerId"] = request.getAuthorizerId();
  }

  if (!!request.hasBusinessChannel()) {
    body["BusinessChannel"] = request.getBusinessChannel();
  }

  if (!!request.hasResourceShrink()) {
    body["Resource"] = request.getResourceShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetLatestThirdAppAccessToken"},
    {"version" , "2021-02-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLatestThirdAppAccessTokenResponse>();
}

/**
 * @summary Retrieves the current valid static access token for a specified user and a single cloud desktop under the current account, keeping the original expiration time.
 *
 * @description You must provide Resource and specify both ResourceType and ResourceId when calling this operation. Only a single cloud desktop is supported. You cannot omit Resource to authorize or query all cloud desktops.
 * AuthorizerId is the WyId of the user and cannot be replaced by a username. BusinessChannel supports Enterprise and Business. If omitted, the default value is Enterprise.
 * The AuthorizerId and Resource in the query conditions must be consistent with those used when the token was created. This operation only returns the current valid token for the current account, user, and cloud desktop. It does not create a new token, renew the token, or restore or roll back to a historical token. If no valid token is found, the token has expired, or the corresponding cache has been cleared, AccessToken.NotFound is returned. To obtain a new token, call CreateThirdAppAccessToken.
 * Keep the returned AccessToken secure and avoid displaying the full token in logs or public content.
 *
 * @param request GetLatestThirdAppAccessTokenRequest
 * @return GetLatestThirdAppAccessTokenResponse
 */
GetLatestThirdAppAccessTokenResponse Client::getLatestThirdAppAccessToken(const GetLatestThirdAppAccessTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLatestThirdAppAccessTokenWithOptions(request, runtime);
}

/**
 * @summary Retrieves a Wuying STS token (temporary identity credential).
 *
 * @param request GetStsTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetStsTokenResponse
 */
GetStsTokenResponse Client::getStsTokenWithOptions(const GetStsTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEndUserId()) {
    body["EndUserId"] = request.getEndUserId();
  }

  if (!!request.hasExpiration()) {
    body["Expiration"] = request.getExpiration();
  }

  if (!!request.hasExternalId()) {
    body["ExternalId"] = request.getExternalId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetStsToken"},
    {"version" , "2021-02-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetStsTokenResponse>();
}

/**
 * @summary Retrieves a Wuying STS token (temporary identity credential).
 *
 * @param request GetStsTokenRequest
 * @return GetStsTokenResponse
 */
GetStsTokenResponse Client::getStsToken(const GetStsTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getStsTokenWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210218