#include <darabonba/Core.hpp>
#include <alibabacloud/AppstreamCenter20210218.hpp>
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
using namespace AlibabaCloud::AppstreamCenter20210218::Models;
namespace AlibabaCloud
{
namespace AppstreamCenter20210218
{

AlibabaCloud::AppstreamCenter20210218::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-shanghai" , "appstream-center.cn-shanghai.aliyuncs.com"},
    {"ap-southeast-1" , "appstream-center.ap-southeast-1.aliyuncs.com"}
  }).get<map<string, string>>();
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
 * @summary Manually expires a logon token before its automatic expiration.
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
 * @summary Manually expires a logon token before its automatic expiration.
 *
 * @param request ExpireLoginTokenRequest
 * @return ExpireLoginTokenResponse
 */
ExpireLoginTokenResponse Client::expireLoginToken(const ExpireLoginTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return expireLoginTokenWithOptions(request, runtime);
}

/**
 * @summary Obtains an authorization code that contains user identity and permission information. The authorization code can be used to launch a cloud application in integration scenarios.
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
 * @summary Obtains an authorization code that contains user identity and permission information. The authorization code can be used to launch a cloud application in integration scenarios.
 *
 * @param request GetAuthCodeRequest
 * @return GetAuthCodeResponse
 */
GetAuthCodeResponse Client::getAuthCode(const GetAuthCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAuthCodeWithOptions(request, runtime);
}

/**
 * @summary Gets a Security Token Service (STS) token.
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
 * @summary Gets a Security Token Service (STS) token.
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