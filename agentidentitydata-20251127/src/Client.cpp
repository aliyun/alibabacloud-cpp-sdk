#include <darabonba/Core.hpp>
#include <alibabacloud/AgentIdentityData20251127.hpp>
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
using namespace AlibabaCloud::AgentIdentityData20251127::Models;
namespace AlibabaCloud
{
namespace AgentIdentityData20251127
{

AlibabaCloud::AgentIdentityData20251127::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  checkConfig(config);
  this->_endpoint = getEndpoint("agentidentitydata", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 获取工作负载访问令牌
 *
 * @param request AssumeRoleForWorkloadIdentityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AssumeRoleForWorkloadIdentityResponse
 */
AssumeRoleForWorkloadIdentityResponse Client::assumeRoleForWorkloadIdentityWithOptions(const AssumeRoleForWorkloadIdentityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDurationSeconds()) {
    body["DurationSeconds"] = request.durationSeconds();
  }

  if (!!request.hasPolicy()) {
    body["Policy"] = request.policy();
  }

  if (!!request.hasRoleSessionName()) {
    body["RoleSessionName"] = request.roleSessionName();
  }

  if (!!request.hasWorkloadAccessToken()) {
    body["WorkloadAccessToken"] = request.workloadAccessToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "AssumeRoleForWorkloadIdentity"},
    {"version" , "2025-11-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doRPCRequest(params.action(), params.version(), params.protocol(), params.method(), params.authType(), params.bodyType(), req, runtime)).get<AssumeRoleForWorkloadIdentityResponse>();
}

/**
 * @summary 获取工作负载访问令牌
 *
 * @param request AssumeRoleForWorkloadIdentityRequest
 * @return AssumeRoleForWorkloadIdentityResponse
 */
AssumeRoleForWorkloadIdentityResponse Client::assumeRoleForWorkloadIdentity(const AssumeRoleForWorkloadIdentityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return assumeRoleForWorkloadIdentityWithOptions(request, runtime);
}

/**
 * @summary 确认用户授权会话已完成
 *
 * @param tmpReq CompleteResourceTokenAuthRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CompleteResourceTokenAuthResponse
 */
CompleteResourceTokenAuthResponse Client::completeResourceTokenAuthWithOptions(const CompleteResourceTokenAuthRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CompleteResourceTokenAuthShrinkRequest request = CompleteResourceTokenAuthShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUserIdentifier()) {
    request.setUserIdentifierShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.userIdentifier(), "UserIdentifier", "json"));
  }

  json body = {};
  if (!!request.hasSessionURI()) {
    body["SessionURI"] = request.sessionURI();
  }

  if (!!request.hasUserIdentifierShrink()) {
    body["UserIdentifier"] = request.userIdentifierShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CompleteResourceTokenAuth"},
    {"version" , "2025-11-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CompleteResourceTokenAuthResponse>();
}

/**
 * @summary 确认用户授权会话已完成
 *
 * @param request CompleteResourceTokenAuthRequest
 * @return CompleteResourceTokenAuthResponse
 */
CompleteResourceTokenAuthResponse Client::completeResourceTokenAuth(const CompleteResourceTokenAuthRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return completeResourceTokenAuthWithOptions(request, runtime);
}

/**
 * @summary 获取下游资源的 API 密钥
 *
 * @param request GetResourceAPIKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetResourceAPIKeyResponse
 */
GetResourceAPIKeyResponse Client::getResourceAPIKeyWithOptions(const GetResourceAPIKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasResourceCredentialProviderName()) {
    body["ResourceCredentialProviderName"] = request.resourceCredentialProviderName();
  }

  if (!!request.hasWorkloadAccessToken()) {
    body["WorkloadAccessToken"] = request.workloadAccessToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetResourceAPIKey"},
    {"version" , "2025-11-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetResourceAPIKeyResponse>();
}

/**
 * @summary 获取下游资源的 API 密钥
 *
 * @param request GetResourceAPIKeyRequest
 * @return GetResourceAPIKeyResponse
 */
GetResourceAPIKeyResponse Client::getResourceAPIKey(const GetResourceAPIKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getResourceAPIKeyWithOptions(request, runtime);
}

/**
 * @summary 获取下游资源的 OAuth 2.0 访问令牌
 *
 * @param tmpReq GetResourceOAuth2TokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetResourceOAuth2TokenResponse
 */
GetResourceOAuth2TokenResponse Client::getResourceOAuth2TokenWithOptions(const GetResourceOAuth2TokenRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetResourceOAuth2TokenShrinkRequest request = GetResourceOAuth2TokenShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCustomParameters()) {
    request.setCustomParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.customParameters(), "CustomParameters", "json"));
  }

  if (!!tmpReq.hasScopes()) {
    request.setScopesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.scopes(), "Scopes", "json"));
  }

  json body = {};
  if (!!request.hasCustomParametersShrink()) {
    body["CustomParameters"] = request.customParametersShrink();
  }

  if (!!request.hasCustomState()) {
    body["CustomState"] = request.customState();
  }

  if (!!request.hasForceAuthentication()) {
    body["ForceAuthentication"] = request.forceAuthentication();
  }

  if (!!request.hasOAuth2Flow()) {
    body["OAuth2Flow"] = request.OAuth2Flow();
  }

  if (!!request.hasResourceCredentialProviderName()) {
    body["ResourceCredentialProviderName"] = request.resourceCredentialProviderName();
  }

  if (!!request.hasResourceOAuth2ReturnURL()) {
    body["ResourceOAuth2ReturnURL"] = request.resourceOAuth2ReturnURL();
  }

  if (!!request.hasScopesShrink()) {
    body["Scopes"] = request.scopesShrink();
  }

  if (!!request.hasSessionURI()) {
    body["SessionURI"] = request.sessionURI();
  }

  if (!!request.hasWorkloadAccessToken()) {
    body["WorkloadAccessToken"] = request.workloadAccessToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetResourceOAuth2Token"},
    {"version" , "2025-11-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetResourceOAuth2TokenResponse>();
}

/**
 * @summary 获取下游资源的 OAuth 2.0 访问令牌
 *
 * @param request GetResourceOAuth2TokenRequest
 * @return GetResourceOAuth2TokenResponse
 */
GetResourceOAuth2TokenResponse Client::getResourceOAuth2Token(const GetResourceOAuth2TokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getResourceOAuth2TokenWithOptions(request, runtime);
}

/**
 * @summary 获取工作负载访问令牌
 *
 * @param request GetWorkloadAccessTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWorkloadAccessTokenResponse
 */
GetWorkloadAccessTokenResponse Client::getWorkloadAccessTokenWithOptions(const GetWorkloadAccessTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasWorkloadIdentityName()) {
    body["WorkloadIdentityName"] = request.workloadIdentityName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetWorkloadAccessToken"},
    {"version" , "2025-11-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWorkloadAccessTokenResponse>();
}

/**
 * @summary 获取工作负载访问令牌
 *
 * @param request GetWorkloadAccessTokenRequest
 * @return GetWorkloadAccessTokenResponse
 */
GetWorkloadAccessTokenResponse Client::getWorkloadAccessToken(const GetWorkloadAccessTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getWorkloadAccessTokenWithOptions(request, runtime);
}

/**
 * @summary 获取工作负载访问令牌
 *
 * @param request GetWorkloadAccessTokenForJWTRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWorkloadAccessTokenForJWTResponse
 */
GetWorkloadAccessTokenForJWTResponse Client::getWorkloadAccessTokenForJWTWithOptions(const GetWorkloadAccessTokenForJWTRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasUserToken()) {
    body["UserToken"] = request.userToken();
  }

  if (!!request.hasWorkloadIdentityName()) {
    body["WorkloadIdentityName"] = request.workloadIdentityName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetWorkloadAccessTokenForJWT"},
    {"version" , "2025-11-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWorkloadAccessTokenForJWTResponse>();
}

/**
 * @summary 获取工作负载访问令牌
 *
 * @param request GetWorkloadAccessTokenForJWTRequest
 * @return GetWorkloadAccessTokenForJWTResponse
 */
GetWorkloadAccessTokenForJWTResponse Client::getWorkloadAccessTokenForJWT(const GetWorkloadAccessTokenForJWTRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getWorkloadAccessTokenForJWTWithOptions(request, runtime);
}

/**
 * @summary 获取工作负载访问令牌
 *
 * @param request GetWorkloadAccessTokenForUserIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWorkloadAccessTokenForUserIdResponse
 */
GetWorkloadAccessTokenForUserIdResponse Client::getWorkloadAccessTokenForUserIdWithOptions(const GetWorkloadAccessTokenForUserIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasUserId()) {
    body["UserId"] = request.userId();
  }

  if (!!request.hasWorkloadIdentityName()) {
    body["WorkloadIdentityName"] = request.workloadIdentityName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetWorkloadAccessTokenForUserId"},
    {"version" , "2025-11-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWorkloadAccessTokenForUserIdResponse>();
}

/**
 * @summary 获取工作负载访问令牌
 *
 * @param request GetWorkloadAccessTokenForUserIdRequest
 * @return GetWorkloadAccessTokenForUserIdResponse
 */
GetWorkloadAccessTokenForUserIdResponse Client::getWorkloadAccessTokenForUserId(const GetWorkloadAccessTokenForUserIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getWorkloadAccessTokenForUserIdWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace AgentIdentityData20251127