#include <darabonba/Core.hpp>
#include <alibabacloud/MaasAISearchProxy20260424.hpp>
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
using namespace AlibabaCloud::MaasAISearchProxy20260424::Models;
namespace AlibabaCloud
{
namespace MaasAISearchProxy20260424
{

AlibabaCloud::MaasAISearchProxy20260424::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("maasaisearchproxy", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 联网搜API
 *
 * @param request WebSearchRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return WebSearchResponse
 */
WebSearchResponse Client::webSearchWithOptions(const WebSearchRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEndTime()) {
    body["endTime"] = request.getEndTime();
  }

  if (!!request.hasExcludeDomain()) {
    body["excludeDomain"] = request.getExcludeDomain();
  }

  if (!!request.hasIncludeDomain()) {
    body["includeDomain"] = request.getIncludeDomain();
  }

  if (!!request.hasLimit()) {
    body["limit"] = request.getLimit();
  }

  if (!!request.hasQuery()) {
    body["query"] = request.getQuery();
  }

  if (!!request.hasRegion()) {
    body["region"] = request.getRegion();
  }

  if (!!request.hasStartTime()) {
    body["startTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "WebSearch"},
    {"version" , "2026-04-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/web-search")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<WebSearchResponse>();
}

/**
 * @summary 联网搜API
 *
 * @param request WebSearchRequest
 * @return WebSearchResponse
 */
WebSearchResponse Client::webSearch(const WebSearchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return webSearchWithOptions(request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace MaasAISearchProxy20260424