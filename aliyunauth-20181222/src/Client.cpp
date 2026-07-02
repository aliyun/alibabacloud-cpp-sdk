#include <darabonba/Core.hpp>
#include <alibabacloud/AliyunAuth20181222.hpp>
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
using namespace AlibabaCloud::AliyunAuth20181222::Models;
namespace AlibabaCloud
{
namespace AliyunAuth20181222
{

AlibabaCloud::AliyunAuth20181222::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("aliyunauth", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @param request AuthenticateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AuthenticateResponse
 */
AuthenticateResponse Client::authenticateWithOptions(const AuthenticateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "Authenticate"},
    {"version" , "2018-12-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AuthenticateResponse>();
}

/**
 * @param request AuthenticateRequest
 * @return AuthenticateResponse
 */
AuthenticateResponse Client::authenticate(const AuthenticateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return authenticateWithOptions(request, runtime);
}

/**
 * @param request GetDetailByOrderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDetailByOrderResponse
 */
GetDetailByOrderResponse Client::getDetailByOrderWithOptions(const GetDetailByOrderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptor()) {
    query["Acceptor"] = request.getAcceptor();
  }

  if (!!request.hasBizNo()) {
    query["BizNo"] = request.getBizNo();
  }

  if (!!request.hasChannel()) {
    query["Channel"] = request.getChannel();
  }

  if (!!request.hasCheckAuthItems()) {
    query["CheckAuthItems"] = request.getCheckAuthItems();
  }

  if (!!request.hasEmpId()) {
    query["EmpId"] = request.getEmpId();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasOptSource()) {
    query["OptSource"] = request.getOptSource();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDetailByOrder"},
    {"version" , "2018-12-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDetailByOrderResponse>();
}

/**
 * @param request GetDetailByOrderRequest
 * @return GetDetailByOrderResponse
 */
GetDetailByOrderResponse Client::getDetailByOrder(const GetDetailByOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDetailByOrderWithOptions(request, runtime);
}

/**
 * @param request QueryAuthRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryAuthResponse
 */
QueryAuthResponse Client::queryAuthWithOptions(const QueryAuthRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryAuth"},
    {"version" , "2018-12-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryAuthResponse>();
}

/**
 * @param request QueryAuthRequest
 * @return QueryAuthResponse
 */
QueryAuthResponse Client::queryAuth(const QueryAuthRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryAuthWithOptions(request, runtime);
}

/**
 * @param request QueryInEffectQuthOrderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryInEffectQuthOrderResponse
 */
QueryInEffectQuthOrderResponse Client::queryInEffectQuthOrderWithOptions(const QueryInEffectQuthOrderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryInEffectQuthOrder"},
    {"version" , "2018-12-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryInEffectQuthOrderResponse>();
}

/**
 * @param request QueryInEffectQuthOrderRequest
 * @return QueryInEffectQuthOrderResponse
 */
QueryInEffectQuthOrderResponse Client::queryInEffectQuthOrder(const QueryInEffectQuthOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryInEffectQuthOrderWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace AliyunAuth20181222