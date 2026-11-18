#include <darabonba/Core.hpp>
#include <alibabacloud/IQS20241111.hpp>
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
using namespace AlibabaCloud::OpenApi::Models;
using namespace AlibabaCloud::IQS20241111::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace IQS20241111
{

AlibabaCloud::IQS20241111::Client::Client(Config &config): OpenApiClient(config){
  this->_productId = "IQS";
  shared_ptr<POP> gatewayClient = make_shared<POP>();
  this->_spi = gatewayClient;
  this->_endpointRule = "regional";
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
 * @summary Describes how to invoke the multi-stage streaming API V3 for general search by using the Alibaba Cloud OpenAPI SDK and provides parameter descriptions.
 *
 * @description Provides streaming results in two stages, common_search and post_retrieval, for customers to use on demand. General search results (common_search): the original search results. Covers key fields such as web page title, dynamic summary, body text, source website, and publish time. Post-retrieval processing (post_retrieval): reranks and filters the common_search results from the previous stage by using a rerank model. The mean average precision (mAP) metric for context relevancy of search results is improved by about 5%, and the latency is increased by about 110 ms.
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
    if (!!resp.hasEvent() && !!resp.getEvent().hasData()) {
      json data = json(json::parse(resp.getEvent().getData()));
json       __retrun = json(json({
        {"statusCode" , resp.getStatusCode()},
        {"headers" , resp.getHeaders()},
        {"id" , resp.getEvent().getId()},
        {"event" , resp.getEvent().getEvent()},
        {"body" , data}
      })).get<AiSearchResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Describes how to invoke the multi-stage streaming API V3 for general search by using the Alibaba Cloud OpenAPI SDK and provides parameter descriptions.
 *
 * @description Provides streaming results in two stages, common_search and post_retrieval, for customers to use on demand. General search results (common_search): the original search results. Covers key fields such as web page title, dynamic summary, body text, source website, and publish time. Post-retrieval processing (post_retrieval): reranks and filters the common_search results from the previous stage by using a rerank model. The mean average precision (mAP) metric for context relevancy of search results is improved by about 5%, and the latency is increased by about 110 ms.
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
 * @summary Describes how to invoke the multi-stage streaming API V3 for general search by using the Alibaba Cloud OpenAPI SDK and provides parameter descriptions.
 *
 * @description Provides streaming results in two stages, common_search and post_retrieval, for customers to use on demand. General search results (common_search): the original search results. Covers key fields such as web page title, dynamic summary, body text, source website, and publish time. Post-retrieval processing (post_retrieval): reranks and filters the common_search results from the previous stage by using a rerank model. The mean average precision (mAP) metric for context relevancy of search results is improved by about 5%, and the latency is increased by about 110 ms.
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
 * @summary Performs general natural language queries.
 *
 * @description The general API for natural language search.
 *
 * @param request CommonQueryBySceneRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CommonQueryBySceneResponse
 */
CommonQueryBySceneResponse Client::commonQueryBySceneWithOptions(const CommonQueryBySceneRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CommonQueryByScene"},
    {"version" , "2024-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/amap-function-call-agent/iqs-agent-service/v2/nl/common")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CommonQueryBySceneResponse>();
}

/**
 * @summary Performs general natural language queries.
 *
 * @description The general API for natural language search.
 *
 * @param request CommonQueryBySceneRequest
 * @return CommonQueryBySceneResponse
 */
CommonQueryBySceneResponse Client::commonQueryByScene(const CommonQueryBySceneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return commonQueryBySceneWithOptions(request, headers, runtime);
}

/**
 * @summary This topic describes how to call the GenericAdvancedSearch operation by using Alibaba Cloud OpenAPI SDKs and provides parameter descriptions. Compared with GenericSearch, GenericAdvancedSearch provides better recall from authoritative websites and returns up to 40 results, delivering more authoritative and diverse data. The response parameters and format of the enhanced operation are the same as those of GenericAdvancedSearch.
 *
 * @description GenericAdvancedSearch is currently in the testing phase. New specifications will be available for purchase in the future.
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
 * @summary This topic describes how to call the GenericAdvancedSearch operation by using Alibaba Cloud OpenAPI SDKs and provides parameter descriptions. Compared with GenericSearch, GenericAdvancedSearch provides better recall from authoritative websites and returns up to 40 results, delivering more authoritative and diverse data. The response parameters and format of the enhanced operation are the same as those of GenericAdvancedSearch.
 *
 * @description GenericAdvancedSearch is currently in the testing phase. New specifications will be available for purchase in the future.
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
 * @summary Performs a general search.
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
 * @summary Performs a general search.
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
 * @summary Queries the daily usage of the information query service API.
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
 * @summary Queries the daily usage of the information query service API.
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
 * @summary Searches for global information by using the Global Edition search.
 *
 * @description This topic describes how to use the Global Edition search (GlobalSearch) and provides parameter descriptions.
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
 * @summary Searches for global information by using the Global Edition search.
 *
 * @description This topic describes how to use the Global Edition search (GlobalSearch) and provides parameter descriptions.
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
 * @summary Provides medical Q&A.
 *
 * @param request MedicalAnswerRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return MedicalAnswerResponse
 */
MedicalAnswerResponse Client::medicalAnswerWithOptions(const MedicalAnswerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "MedicalAnswer"},
    {"version" , "2024-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/linked-retrieval/linked-retrieval-entry/v1/iqs/domain/medical/answer")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MedicalAnswerResponse>();
}

/**
 * @summary Provides medical Q&A.
 *
 * @param request MedicalAnswerRequest
 * @return MedicalAnswerResponse
 */
MedicalAnswerResponse Client::medicalAnswer(const MedicalAnswerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return medicalAnswerWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the health graph.
 *
 * @param request MedicalKnowledgeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return MedicalKnowledgeResponse
 */
MedicalKnowledgeResponse Client::medicalKnowledgeWithOptions(const MedicalKnowledgeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "MedicalKnowledge"},
    {"version" , "2024-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/linked-retrieval/linked-retrieval-entry/v1/iqs/domain/medical/know")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MedicalKnowledgeResponse>();
}

/**
 * @summary Queries the health graph.
 *
 * @param request MedicalKnowledgeRequest
 * @return MedicalKnowledgeResponse
 */
MedicalKnowledgeResponse Client::medicalKnowledge(const MedicalKnowledgeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return medicalKnowledgeWithOptions(request, headers, runtime);
}

/**
 * @summary Performs a multimodal search.
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
 * @summary Performs a multimodal search.
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
 * @summary This topic describes the SearchStream streaming API for intelligent search and AI chat. Based on retrieval augmented generation (RAG) and large language models, this API accepts natural language questions from users and can automatically execute intent recognition, query rewrite, and content generation, and retrieve data from multiple sources. The API uses the Server-Sent Events (SSE) streaming protocol to return data, supporting real-time output of the infer status, reference sources, and token-by-token generated answers. This API is suitable for AI chat and search scenarios that require low latency and high interpretability.
 *
 * @param request OmniAnswerRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return OmniAnswerResponse
 */
FutureGenerator<OmniAnswerResponse> Client::omniAnswerWithSSE(const OmniAnswerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "OmniAnswer"},
    {"version" , "2024-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/linked-retrieval/linked-retrieval-entry/v1/iqs/answer/omni/search")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "string"}
  }).get<map<string, string>>());
  FutureGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    if (!!resp.hasEvent() && !!resp.getEvent().hasData()) {
      string data = resp.getEvent().getData();
json       __retrun = json(json({
        {"statusCode" , resp.getStatusCode()},
        {"headers" , resp.getHeaders()},
        {"id" , resp.getEvent().getId()},
        {"event" , resp.getEvent().getEvent()},
        {"body" , data}
      })).get<OmniAnswerResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary This topic describes the SearchStream streaming API for intelligent search and AI chat. Based on retrieval augmented generation (RAG) and large language models, this API accepts natural language questions from users and can automatically execute intent recognition, query rewrite, and content generation, and retrieve data from multiple sources. The API uses the Server-Sent Events (SSE) streaming protocol to return data, supporting real-time output of the infer status, reference sources, and token-by-token generated answers. This API is suitable for AI chat and search scenarios that require low latency and high interpretability.
 *
 * @param request OmniAnswerRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return OmniAnswerResponse
 */
OmniAnswerResponse Client::omniAnswerWithOptions(const OmniAnswerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "OmniAnswer"},
    {"version" , "2024-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/linked-retrieval/linked-retrieval-entry/v1/iqs/answer/omni/search")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "string"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OmniAnswerResponse>();
}

/**
 * @summary This topic describes the SearchStream streaming API for intelligent search and AI chat. Based on retrieval augmented generation (RAG) and large language models, this API accepts natural language questions from users and can automatically execute intent recognition, query rewrite, and content generation, and retrieve data from multiple sources. The API uses the Server-Sent Events (SSE) streaming protocol to return data, supporting real-time output of the infer status, reference sources, and token-by-token generated answers. This API is suitable for AI chat and search scenarios that require low latency and high interpretability.
 *
 * @param request OmniAnswerRequest
 * @return OmniAnswerResponse
 */
OmniAnswerResponse Client::omniAnswer(const OmniAnswerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return omniAnswerWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves HTML and parses static web page content.
 *
 * @description 1. A request is counted as valid when the HTTP response code of the destination URL is less than 500.
 * 2. If the content type in the response header of the destination URL is application/pdf, the system automatically triggers PDF parsing (the maximum PDF size is 20 MB). This operation is counted as an additional valid request.
 * 3. Trial instructions: During the trial period, the API rate limit is 5 QPS, and the trial quota is 1,000 requests per 30 days.
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
 * @summary Retrieves HTML and parses static web page content.
 *
 * @description 1. A request is counted as valid when the HTTP response code of the destination URL is less than 500.
 * 2. If the content type in the response header of the destination URL is application/pdf, the system automatically triggers PDF parsing (the maximum PDF size is 20 MB). This operation is counted as an additional valid request.
 * 3. Trial instructions: During the trial period, the API rate limit is 5 QPS, and the trial quota is 1,000 requests per 30 days.
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
 * @summary Reads HTML and parses web page content in a browser sandbox environment. The operation starts parsing after the resources on the target page are fully loaded. You can adjust the maximum wait time by using the pageTimeout parameter. The overall execution duration is significantly affected by the resource loading status of the target site.
 *
 * @description 1. A request is counted as a valid request when the HTTP status code of the target URL is less than 500.
 * 2. If the Content-Type in the response header of the target URL is application/pdf, the system automatically triggers PDF parsing (the maximum size of a PDF file that can be processed is 20 MB). This operation is counted as an additional valid request.
 * 3. Trial description: During the trial period, the API operation is limited to 5 QPS. The trial quota is 1,000 requests per 30 days.
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
 * @summary Reads HTML and parses web page content in a browser sandbox environment. The operation starts parsing after the resources on the target page are fully loaded. You can adjust the maximum wait time by using the pageTimeout parameter. The overall execution duration is significantly affected by the resource loading status of the target site.
 *
 * @description 1. A request is counted as a valid request when the HTTP status code of the target URL is less than 500.
 * 2. If the Content-Type in the response header of the target URL is application/pdf, the system automatically triggers PDF parsing (the maximum size of a PDF file that can be processed is 20 MB). This operation is counted as an additional valid request.
 * 3. Trial description: During the trial period, the API operation is limited to 5 QPS. The trial quota is 1,000 requests per 30 days.
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
 * @summary Provides the Tongxiao unified search API to quickly and easily integrate web-wide general search capabilities.
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
 * @summary Provides the Tongxiao unified search API to quickly and easily integrate web-wide general search capabilities.
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