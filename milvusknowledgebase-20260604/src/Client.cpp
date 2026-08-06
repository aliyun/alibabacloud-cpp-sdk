#include <darabonba/Core.hpp>
#include <alibabacloud/MilvusKnowledgeBase20260604.hpp>
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
using namespace AlibabaCloud::MilvusKnowledgeBase20260604::Models;
namespace AlibabaCloud
{
namespace MilvusKnowledgeBase20260604
{

AlibabaCloud::MilvusKnowledgeBase20260604::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  checkConfig(config);
  this->_endpoint = getEndpoint("milvusknowledgebase", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 添加文档到知识库
 *
 * @param request AddDocumentsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddDocumentsResponse
 */
AddDocumentsResponse Client::addDocumentsWithOptions(const string &datasetId, const AddDocumentsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDedup()) {
    body["Dedup"] = request.getDedup();
  }

  if (!!request.hasDocuments()) {
    body["Documents"] = request.getDocuments();
  }

  if (!!request.hasImportType()) {
    body["ImportType"] = request.getImportType();
  }

  if (!!request.hasKnowledgeBaseId()) {
    body["KnowledgeBaseId"] = request.getKnowledgeBaseId();
  }

  if (!!request.hasMetaFields()) {
    body["MetaFields"] = request.getMetaFields();
  }

  if (!!request.hasStrategyId()) {
    body["StrategyId"] = request.getStrategyId();
  }

  if (!!request.hasDingTalkConfiguration()) {
    body["dingTalkConfiguration"] = request.getDingTalkConfiguration();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AddDocuments"},
    {"version" , "2026-06-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/datasets/" , Darabonba::Encode::Encoder::percentEncode(datasetId) , "/documents/addDocuments")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddDocumentsResponse>();
}

/**
 * @summary 添加文档到知识库
 *
 * @param request AddDocumentsRequest
 * @return AddDocumentsResponse
 */
AddDocumentsResponse Client::addDocuments(const string &datasetId, const AddDocumentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return addDocumentsWithOptions(datasetId, request, headers, runtime);
}

/**
 * @summary 获取知识库文件预签名URL
 *
 * @param request GetKnowledgeBasePreSignedUrlRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetKnowledgeBasePreSignedUrlResponse
 */
GetKnowledgeBasePreSignedUrlResponse Client::getKnowledgeBasePreSignedUrlWithOptions(const string &datasetId, const GetKnowledgeBasePreSignedUrlRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDocuments()) {
    body["Documents"] = request.getDocuments();
  }

  if (!!request.hasExpiresIn()) {
    body["ExpiresIn"] = request.getExpiresIn();
  }

  if (!!request.hasKnowledgeBaseId()) {
    body["KnowledgeBaseId"] = request.getKnowledgeBaseId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetKnowledgeBasePreSignedUrl"},
    {"version" , "2026-06-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/datasets/" , Darabonba::Encode::Encoder::percentEncode(datasetId) , "/getKnowledgeBasePreSignedUrl")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetKnowledgeBasePreSignedUrlResponse>();
}

/**
 * @summary 获取知识库文件预签名URL
 *
 * @param request GetKnowledgeBasePreSignedUrlRequest
 * @return GetKnowledgeBasePreSignedUrlResponse
 */
GetKnowledgeBasePreSignedUrlResponse Client::getKnowledgeBasePreSignedUrl(const string &datasetId, const GetKnowledgeBasePreSignedUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getKnowledgeBasePreSignedUrlWithOptions(datasetId, request, headers, runtime);
}

/**
 * @summary Retrieves documents from a knowledge base.
 *
 * @description Retrieves documents from a specified knowledge base by question or image. Use DRAFT, LATEST_PUBLISHED, or vN display names for the version. Pass tag filter conditions using the actual backend operators.
 *
 * @param request SearchKnowledgeBaseRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchKnowledgeBaseResponse
 */
SearchKnowledgeBaseResponse Client::searchKnowledgeBaseWithOptions(const string &knowledgeBaseId, const SearchKnowledgeBaseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDocumentIds()) {
    body["documentIds"] = request.getDocumentIds();
  }

  if (!!request.hasEnableKnowledgeGraph()) {
    body["enableKnowledgeGraph"] = request.getEnableKnowledgeGraph();
  }

  if (!!request.hasImage()) {
    body["image"] = request.getImage();
  }

  if (!!request.hasPageNumber()) {
    body["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["pageSize"] = request.getPageSize();
  }

  if (!!request.hasQuery()) {
    body["query"] = request.getQuery();
  }

  if (!!request.hasRerankModelId()) {
    body["rerankModelId"] = request.getRerankModelId();
  }

  if (!!request.hasRerankModelName()) {
    body["rerankModelName"] = request.getRerankModelName();
  }

  if (!!request.hasRetrievalConfig()) {
    body["retrievalConfig"] = request.getRetrievalConfig();
  }

  if (!!request.hasTagFilter()) {
    body["tagFilter"] = request.getTagFilter();
  }

  if (!!request.hasVersion()) {
    body["version"] = request.getVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SearchKnowledgeBase"},
    {"version" , "2026-06-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/knowledge-bases/" , Darabonba::Encode::Encoder::percentEncode(knowledgeBaseId) , "/search")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchKnowledgeBaseResponse>();
}

/**
 * @summary Retrieves documents from a knowledge base.
 *
 * @description Retrieves documents from a specified knowledge base by question or image. Use DRAFT, LATEST_PUBLISHED, or vN display names for the version. Pass tag filter conditions using the actual backend operators.
 *
 * @param request SearchKnowledgeBaseRequest
 * @return SearchKnowledgeBaseResponse
 */
SearchKnowledgeBaseResponse Client::searchKnowledgeBase(const string &knowledgeBaseId, const SearchKnowledgeBaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return searchKnowledgeBaseWithOptions(knowledgeBaseId, request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace MilvusKnowledgeBase20260604