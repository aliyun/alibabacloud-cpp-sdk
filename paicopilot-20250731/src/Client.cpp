#include <darabonba/Core.hpp>
#include <alibabacloud/PAICopilot20250731.hpp>
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
using namespace AlibabaCloud::PAICopilot20250731::Models;
namespace AlibabaCloud
{
namespace PAICopilot20250731
{

AlibabaCloud::PAICopilot20250731::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("paicopilot", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary /api/v1/sessions
 *
 * @param request SearchInfoRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchInfoResponse
 */
SearchInfoResponse Client::searchInfoWithOptions(const SearchInfoRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasKnowledgeBaseFilters()) {
    body["KnowledgeBaseFilters"] = request.knowledgeBaseFilters();
  }

  if (!!request.hasWebFilters()) {
    body["WebFilters"] = request.webFilters();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SearchInfo"},
    {"version" , "2025-07-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/searches")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchInfoResponse>();
}

/**
 * @summary /api/v1/sessions
 *
 * @param request SearchInfoRequest
 * @return SearchInfoResponse
 */
SearchInfoResponse Client::searchInfo(const SearchInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return searchInfoWithOptions(request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace PAICopilot20250731