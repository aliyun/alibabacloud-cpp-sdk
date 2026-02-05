#include <darabonba/Core.hpp>
#include <alibabacloud/IQS20241111.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::OpenApi::Models;
using namespace AlibabaCloud::IQS20241111::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace IQS20241111
{

AlibabaCloud::IQS20241111::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("iqs", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary AI搜索流式接口(废弃)
 *
 * @param request AiSearchRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AiSearchResponse
 */
FutureGenerator<AiSearchResponse> Client::aiSearchWithSSE(const AiSearchRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIndustry()) {
    query["industry"] = request.getIndustry();
  }

  if (!!request.hasPage()) {
    query["page"] = request.getPage();
  }

  if (!!request.hasQuery()) {
    query["query"] = request.getQuery();
  }

  if (!!request.hasSessionId()) {
    query["sessionId"] = request.getSessionId();
  }

  if (!!request.hasTimeRange()) {
    query["timeRange"] = request.getTimeRange();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AiSearch"},
    {"version" , "2024-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/linked-retrieval/linked-retrieval-entry/v3/linkedRetrieval/commands/aiSearch")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutureGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    json data = json(json::parse(resp.getEvent().getData()));
json     __retrun = json(json({
      {"statusCode" , resp.getStatusCode()},
      {"headers" , resp.getHeaders()},
      {"body" , Darabonba::Core::merge(data,
          {"RequestId" , resp.getEvent().getId()},
          {"Message" , resp.getEvent().getEvent()}
      )}
    })).get<AiSearchResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary AI搜索流式接口(废弃)
 *
 * @param request AiSearchRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AiSearchResponse
 */
AiSearchResponse Client::aiSearchWithOptions(const AiSearchRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIndustry()) {
    query["industry"] = request.getIndustry();
  }

  if (!!request.hasPage()) {
    query["page"] = request.getPage();
  }

  if (!!request.hasQuery()) {
    query["query"] = request.getQuery();
  }

  if (!!request.hasSessionId()) {
    query["sessionId"] = request.getSessionId();
  }

  if (!!request.hasTimeRange()) {
    query["timeRange"] = request.getTimeRange();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AiSearch"},
    {"version" , "2024-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/linked-retrieval/linked-retrieval-entry/v3/linkedRetrieval/commands/aiSearch")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AiSearchResponse>();
}

/**
 * @summary AI搜索流式接口(废弃)
 *
 * @param request AiSearchRequest
 * @return AiSearchResponse
 */
AiSearchResponse Client::aiSearch(const AiSearchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return aiSearchWithOptions(request, headers, runtime);
}

/**
 * @summary 增强版通用搜索
 *
 * @param request GenericAdvancedSearchRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenericAdvancedSearchResponse
 */
GenericAdvancedSearchResponse Client::genericAdvancedSearchWithOptions(const GenericAdvancedSearchRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIndustry()) {
    query["industry"] = request.getIndustry();
  }

  if (!!request.hasQuery()) {
    query["query"] = request.getQuery();
  }

  if (!!request.hasSessionId()) {
    query["sessionId"] = request.getSessionId();
  }

  if (!!request.hasTimeRange()) {
    query["timeRange"] = request.getTimeRange();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GenericAdvancedSearch"},
    {"version" , "2024-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/linked-retrieval/linked-retrieval-entry/v2/linkedRetrieval/commands/genericAdvancedSearch")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenericAdvancedSearchResponse>();
}

/**
 * @summary 增强版通用搜索
 *
 * @param request GenericAdvancedSearchRequest
 * @return GenericAdvancedSearchResponse
 */
GenericAdvancedSearchResponse Client::genericAdvancedSearch(const GenericAdvancedSearchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return genericAdvancedSearchWithOptions(request, headers, runtime);
}

/**
 * @summary 通用搜索
 *
 * @param tmpReq GenericSearchRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenericSearchResponse
 */
GenericSearchResponse Client::genericSearchWithOptions(const GenericSearchRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GenericSearchShrinkRequest request = GenericSearchShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAdvancedParams()) {
    request.setAdvancedParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAdvancedParams(), "advancedParams", "json"));
  }

  json query = {};
  if (!!request.hasAdvancedParamsShrink()) {
    query["advancedParams"] = request.getAdvancedParamsShrink();
  }

  if (!!request.hasEnableRerank()) {
    query["enableRerank"] = request.getEnableRerank();
  }

  if (!!request.hasIndustry()) {
    query["industry"] = request.getIndustry();
  }

  if (!!request.hasPage()) {
    query["page"] = request.getPage();
  }

  if (!!request.hasQuery()) {
    query["query"] = request.getQuery();
  }

  if (!!request.hasReturnMainText()) {
    query["returnMainText"] = request.getReturnMainText();
  }

  if (!!request.hasReturnMarkdownText()) {
    query["returnMarkdownText"] = request.getReturnMarkdownText();
  }

  if (!!request.hasReturnRichMainBody()) {
    query["returnRichMainBody"] = request.getReturnRichMainBody();
  }

  if (!!request.hasReturnSummary()) {
    query["returnSummary"] = request.getReturnSummary();
  }

  if (!!request.hasSessionId()) {
    query["sessionId"] = request.getSessionId();
  }

  if (!!request.hasTimeRange()) {
    query["timeRange"] = request.getTimeRange();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GenericSearch"},
    {"version" , "2024-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/linked-retrieval/linked-retrieval-entry/v2/linkedRetrieval/commands/genericSearch")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenericSearchResponse>();
}

/**
 * @summary 通用搜索
 *
 * @param request GenericSearchRequest
 * @return GenericSearchResponse
 */
GenericSearchResponse Client::genericSearch(const GenericSearchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return genericSearchWithOptions(request, headers, runtime);
}

/**
 * @summary 信息查询服务接口日维度使用量查询
 *
 * @param request GetIqsUsageRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetIqsUsageResponse
 */
GetIqsUsageResponse Client::getIqsUsageWithOptions(const GetIqsUsageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallerId()) {
    query["callerId"] = request.getCallerId();
  }

  if (!!request.hasEndDate()) {
    query["endDate"] = request.getEndDate();
  }

  if (!!request.hasStartDate()) {
    query["startDate"] = request.getStartDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetIqsUsage"},
    {"version" , "2024-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/linked-retrieval/linked-retrieval-admin/v1/iqs/usage")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetIqsUsageResponse>();
}

/**
 * @summary 信息查询服务接口日维度使用量查询
 *
 * @param request GetIqsUsageRequest
 * @return GetIqsUsageResponse
 */
GetIqsUsageResponse Client::getIqsUsage(const GetIqsUsageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getIqsUsageWithOptions(request, headers, runtime);
}

/**
 * @summary 通晓搜索-出海版(全球信息搜索)
 *
 * @param request GlobalSearchRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GlobalSearchResponse
 */
GlobalSearchResponse Client::globalSearchWithOptions(const GlobalSearchRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPage()) {
    query["page"] = request.getPage();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasQuery()) {
    query["query"] = request.getQuery();
  }

  if (!!request.hasTimeRange()) {
    query["timeRange"] = request.getTimeRange();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GlobalSearch"},
    {"version" , "2024-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/linked-retrieval/linked-retrieval-entry/v1/iqs/search/global")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GlobalSearchResponse>();
}

/**
 * @summary 通晓搜索-出海版(全球信息搜索)
 *
 * @param request GlobalSearchRequest
 * @return GlobalSearchResponse
 */
GlobalSearchResponse Client::globalSearch(const GlobalSearchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return globalSearchWithOptions(request, headers, runtime);
}

/**
 * @summary 多模态搜索
 *
 * @param request MultimodalSearchRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return MultimodalSearchResponse
 */
MultimodalSearchResponse Client::multimodalSearchWithOptions(const MultimodalSearchRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "MultimodalSearch"},
    {"version" , "2024-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/linked-retrieval/linked-retrieval-entry/v1/iqs/multimodal/unified")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MultimodalSearchResponse>();
}

/**
 * @summary 多模态搜索
 *
 * @param request MultimodalSearchRequest
 * @return MultimodalSearchResponse
 */
MultimodalSearchResponse Client::multimodalSearch(const MultimodalSearchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return multimodalSearchWithOptions(request, headers, runtime);
}

/**
 * @summary 页面读取
 *
 * @param request ReadPageBasicRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReadPageBasicResponse
 */
ReadPageBasicResponse Client::readPageBasicWithOptions(const ReadPageBasicRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "ReadPageBasic"},
    {"version" , "2024-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/linked-retrieval/linked-retrieval-entry/v1/iqs/readpage/basic")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReadPageBasicResponse>();
}

/**
 * @summary 页面读取
 *
 * @param request ReadPageBasicRequest
 * @return ReadPageBasicResponse
 */
ReadPageBasicResponse Client::readPageBasic(const ReadPageBasicRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return readPageBasicWithOptions(request, headers, runtime);
}

/**
 * @summary 动态页面解析
 *
 * @param request ReadPageScrapeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReadPageScrapeResponse
 */
ReadPageScrapeResponse Client::readPageScrapeWithOptions(const ReadPageScrapeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "ReadPageScrape"},
    {"version" , "2024-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/linked-retrieval/linked-retrieval-entry/v1/iqs/readpage/scrape")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReadPageScrapeResponse>();
}

/**
 * @summary 动态页面解析
 *
 * @param request ReadPageScrapeRequest
 * @return ReadPageScrapeResponse
 */
ReadPageScrapeResponse Client::readPageScrape(const ReadPageScrapeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return readPageScrapeWithOptions(request, headers, runtime);
}

/**
 * @summary 通晓统一搜索API
 *
 * @param request UnifiedSearchRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnifiedSearchResponse
 */
UnifiedSearchResponse Client::unifiedSearchWithOptions(const UnifiedSearchRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "UnifiedSearch"},
    {"version" , "2024-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/linked-retrieval/linked-retrieval-entry/v1/iqs/search/unified")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnifiedSearchResponse>();
}

/**
 * @summary 通晓统一搜索API
 *
 * @param request UnifiedSearchRequest
 * @return UnifiedSearchResponse
 */
UnifiedSearchResponse Client::unifiedSearch(const UnifiedSearchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return unifiedSearchWithOptions(request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace IQS20241111