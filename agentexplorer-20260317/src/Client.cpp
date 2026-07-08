#include <darabonba/Core.hpp>
#include <alibabacloud/AgentExplorer20260317.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
#include <darabonba/encode/Encoder.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::AgentExplorer20260317::Models;
namespace AlibabaCloud
{
namespace AgentExplorer20260317
{

AlibabaCloud::AgentExplorer20260317::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"public" , "agentexplorer.aliyuncs.com"},
    {"cn-hangzhou" , "agentexplorer.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("agentexplorer", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Get the SKILL.md file content of the specified Agent Skill
 *
 * @param request GetSkillContentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSkillContentResponse
 */
GetSkillContentResponse Client::getSkillContentWithOptions(const string &skillName, const GetSkillContentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSkillContent"},
    {"version" , "2026-03-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/skills/" , Darabonba::Encode::Encoder::percentEncode(skillName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSkillContentResponse>();
}

/**
 * @summary Get the SKILL.md file content of the specified Agent Skill
 *
 * @param request GetSkillContentRequest
 * @return GetSkillContentResponse
 */
GetSkillContentResponse Client::getSkillContent(const string &skillName, const GetSkillContentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getSkillContentWithOptions(skillName, request, headers, runtime);
}

/**
 * @summary List all Alibaba Cloud Skills categories.
 *
 * @param request ListCategoriesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCategoriesResponse
 */
ListCategoriesResponse Client::listCategoriesWithOptions(const ListCategoriesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCategories"},
    {"version" , "2026-03-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/categories")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCategoriesResponse>();
}

/**
 * @summary List all Alibaba Cloud Skills categories.
 *
 * @param request ListCategoriesRequest
 * @return ListCategoriesResponse
 */
ListCategoriesResponse Client::listCategories(const ListCategoriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listCategoriesWithOptions(request, headers, runtime);
}

/**
 * @summary Searches for Alibaba Cloud Agent Skills by keyword or category.
 *
 * @param request SearchSkillsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchSkillsResponse
 */
SearchSkillsResponse Client::searchSkillsWithOptions(const SearchSkillsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategoryCode()) {
    query["categoryCode"] = request.getCategoryCode();
  }

  if (!!request.hasKeyword()) {
    query["keyword"] = request.getKeyword();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasSearchMode()) {
    query["searchMode"] = request.getSearchMode();
  }

  if (!!request.hasSkip()) {
    query["skip"] = request.getSkip();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SearchSkills"},
    {"version" , "2026-03-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/skills")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchSkillsResponse>();
}

/**
 * @summary Searches for Alibaba Cloud Agent Skills by keyword or category.
 *
 * @param request SearchSkillsRequest
 * @return SearchSkillsResponse
 */
SearchSkillsResponse Client::searchSkills(const SearchSkillsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return searchSkillsWithOptions(request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace AgentExplorer20260317