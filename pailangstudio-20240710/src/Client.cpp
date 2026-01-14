#include <darabonba/Core.hpp>
#include <alibabacloud/PAILangStudio20240710.hpp>
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
using namespace AlibabaCloud::PAILangStudio20240710::Models;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{

AlibabaCloud::PAILangStudio20240710::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("pailangstudio", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 创建知识库
 *
 * @param request CreateKnowledgeBaseRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateKnowledgeBaseResponse
 */
CreateKnowledgeBaseResponse Client::createKnowledgeBaseWithOptions(const CreateKnowledgeBaseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccessibility()) {
    body["Accessibility"] = request.getAccessibility();
  }

  if (!!request.hasChunkConfig()) {
    body["ChunkConfig"] = request.getChunkConfig();
  }

  if (!!request.hasDataSources()) {
    body["DataSources"] = request.getDataSources();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasEmbeddingConfig()) {
    body["EmbeddingConfig"] = request.getEmbeddingConfig();
  }

  if (!!request.hasIndexColumnConfig()) {
    body["IndexColumnConfig"] = request.getIndexColumnConfig();
  }

  if (!!request.hasKnowledgeBaseType()) {
    body["KnowledgeBaseType"] = request.getKnowledgeBaseType();
  }

  if (!!request.hasMetaDataConfig()) {
    body["MetaDataConfig"] = request.getMetaDataConfig();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasOutputDir()) {
    body["OutputDir"] = request.getOutputDir();
  }

  if (!!request.hasRuntimeId()) {
    body["RuntimeId"] = request.getRuntimeId();
  }

  if (!!request.hasVectorDBConfig()) {
    body["VectorDBConfig"] = request.getVectorDBConfig();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateKnowledgeBase"},
    {"version" , "2024-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/langstudio/knowledgebases")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateKnowledgeBaseResponse>();
}

/**
 * @summary 创建知识库
 *
 * @param request CreateKnowledgeBaseRequest
 * @return CreateKnowledgeBaseResponse
 */
CreateKnowledgeBaseResponse Client::createKnowledgeBase(const CreateKnowledgeBaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createKnowledgeBaseWithOptions(request, headers, runtime);
}

/**
 * @summary 创建知识库任务
 *
 * @param request CreateKnowledgeBaseJobRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateKnowledgeBaseJobResponse
 */
CreateKnowledgeBaseJobResponse Client::createKnowledgeBaseJobWithOptions(const string &KnowledgeBaseId, const CreateKnowledgeBaseJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccessibility()) {
    body["Accessibility"] = request.getAccessibility();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasEcsSpecs()) {
    body["EcsSpecs"] = request.getEcsSpecs();
  }

  if (!!request.hasEmbeddingConfig()) {
    body["EmbeddingConfig"] = request.getEmbeddingConfig();
  }

  if (!!request.hasJobAction()) {
    body["JobAction"] = request.getJobAction();
  }

  if (!!request.hasMaxRunningTimeInSeconds()) {
    body["MaxRunningTimeInSeconds"] = request.getMaxRunningTimeInSeconds();
  }

  if (!!request.hasResourceId()) {
    body["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasUserVpc()) {
    body["UserVpc"] = request.getUserVpc();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateKnowledgeBaseJob"},
    {"version" , "2024-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/langstudio/knowledgebases/" , Darabonba::Encode::Encoder::percentEncode(KnowledgeBaseId) , "/knowledgebasejobs")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateKnowledgeBaseJobResponse>();
}

/**
 * @summary 创建知识库任务
 *
 * @param request CreateKnowledgeBaseJobRequest
 * @return CreateKnowledgeBaseJobResponse
 */
CreateKnowledgeBaseJobResponse Client::createKnowledgeBaseJob(const string &KnowledgeBaseId, const CreateKnowledgeBaseJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createKnowledgeBaseJobWithOptions(KnowledgeBaseId, request, headers, runtime);
}

/**
 * @summary 删除知识库
 *
 * @param request DeleteKnowledgeBaseRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteKnowledgeBaseResponse
 */
DeleteKnowledgeBaseResponse Client::deleteKnowledgeBaseWithOptions(const string &KnowledgeBaseId, const DeleteKnowledgeBaseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteKnowledgeBase"},
    {"version" , "2024-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/langstudio/knowledgebases/" , Darabonba::Encode::Encoder::percentEncode(KnowledgeBaseId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteKnowledgeBaseResponse>();
}

/**
 * @summary 删除知识库
 *
 * @param request DeleteKnowledgeBaseRequest
 * @return DeleteKnowledgeBaseResponse
 */
DeleteKnowledgeBaseResponse Client::deleteKnowledgeBase(const string &KnowledgeBaseId, const DeleteKnowledgeBaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteKnowledgeBaseWithOptions(KnowledgeBaseId, request, headers, runtime);
}

/**
 * @summary 删除知识库任务
 *
 * @param request DeleteKnowledgeBaseJobRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteKnowledgeBaseJobResponse
 */
DeleteKnowledgeBaseJobResponse Client::deleteKnowledgeBaseJobWithOptions(const string &KnowledgeBaseId, const string &KnowledgeBaseJobId, const DeleteKnowledgeBaseJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteKnowledgeBaseJob"},
    {"version" , "2024-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/langstudio/knowledgebases/" , Darabonba::Encode::Encoder::percentEncode(KnowledgeBaseId) , "/knowledgebasejobs/" , Darabonba::Encode::Encoder::percentEncode(KnowledgeBaseJobId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteKnowledgeBaseJobResponse>();
}

/**
 * @summary 删除知识库任务
 *
 * @param request DeleteKnowledgeBaseJobRequest
 * @return DeleteKnowledgeBaseJobResponse
 */
DeleteKnowledgeBaseJobResponse Client::deleteKnowledgeBaseJob(const string &KnowledgeBaseId, const string &KnowledgeBaseJobId, const DeleteKnowledgeBaseJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteKnowledgeBaseJobWithOptions(KnowledgeBaseId, KnowledgeBaseJobId, request, headers, runtime);
}

/**
 * @summary 查看知识库
 *
 * @param request GetKnowledgeBaseRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetKnowledgeBaseResponse
 */
GetKnowledgeBaseResponse Client::getKnowledgeBaseWithOptions(const string &KnowledgeBaseId, const GetKnowledgeBaseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersionName()) {
    query["VersionName"] = request.getVersionName();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetKnowledgeBase"},
    {"version" , "2024-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/langstudio/knowledgebases/" , Darabonba::Encode::Encoder::percentEncode(KnowledgeBaseId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetKnowledgeBaseResponse>();
}

/**
 * @summary 查看知识库
 *
 * @param request GetKnowledgeBaseRequest
 * @return GetKnowledgeBaseResponse
 */
GetKnowledgeBaseResponse Client::getKnowledgeBase(const string &KnowledgeBaseId, const GetKnowledgeBaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getKnowledgeBaseWithOptions(KnowledgeBaseId, request, headers, runtime);
}

/**
 * @summary 查看知识库任务
 *
 * @param request GetKnowledgeBaseJobRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetKnowledgeBaseJobResponse
 */
GetKnowledgeBaseJobResponse Client::getKnowledgeBaseJobWithOptions(const string &KnowledgeBaseId, const string &KnowledgeBaseJobId, const GetKnowledgeBaseJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetKnowledgeBaseJob"},
    {"version" , "2024-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/langstudio/knowledgebases/" , Darabonba::Encode::Encoder::percentEncode(KnowledgeBaseId) , "/knowledgebasejobs/" , Darabonba::Encode::Encoder::percentEncode(KnowledgeBaseJobId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetKnowledgeBaseJobResponse>();
}

/**
 * @summary 查看知识库任务
 *
 * @param request GetKnowledgeBaseJobRequest
 * @return GetKnowledgeBaseJobResponse
 */
GetKnowledgeBaseJobResponse Client::getKnowledgeBaseJob(const string &KnowledgeBaseId, const string &KnowledgeBaseJobId, const GetKnowledgeBaseJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getKnowledgeBaseJobWithOptions(KnowledgeBaseId, KnowledgeBaseJobId, request, headers, runtime);
}

/**
 * @summary 获取知识库切片列表
 *
 * @param request ListKnowledgeBaseChunksRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListKnowledgeBaseChunksResponse
 */
ListKnowledgeBaseChunksResponse Client::listKnowledgeBaseChunksWithOptions(const string &KnowledgeBaseId, const ListKnowledgeBaseChunksRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChunkStatus()) {
    query["ChunkStatus"] = request.getChunkStatus();
  }

  if (!!request.hasMetaData()) {
    query["MetaData"] = request.getMetaData();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasVersionName()) {
    query["VersionName"] = request.getVersionName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListKnowledgeBaseChunks"},
    {"version" , "2024-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/langstudio/knowledgebases/" , Darabonba::Encode::Encoder::percentEncode(KnowledgeBaseId) , "/knowledgebasechunks")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListKnowledgeBaseChunksResponse>();
}

/**
 * @summary 获取知识库切片列表
 *
 * @param request ListKnowledgeBaseChunksRequest
 * @return ListKnowledgeBaseChunksResponse
 */
ListKnowledgeBaseChunksResponse Client::listKnowledgeBaseChunks(const string &KnowledgeBaseId, const ListKnowledgeBaseChunksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listKnowledgeBaseChunksWithOptions(KnowledgeBaseId, request, headers, runtime);
}

/**
 * @summary 获取知识库任务列表
 *
 * @param request ListKnowledgeBaseJobsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListKnowledgeBaseJobsResponse
 */
ListKnowledgeBaseJobsResponse Client::listKnowledgeBaseJobsWithOptions(const string &KnowledgeBaseId, const ListKnowledgeBaseJobsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobAction()) {
    query["JobAction"] = request.getJobAction();
  }

  if (!!request.hasKnowledgeBaseJobId()) {
    query["KnowledgeBaseJobId"] = request.getKnowledgeBaseJobId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListKnowledgeBaseJobs"},
    {"version" , "2024-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/langstudio/knowledgebases/" , Darabonba::Encode::Encoder::percentEncode(KnowledgeBaseId) , "/knowledgebasejobs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListKnowledgeBaseJobsResponse>();
}

/**
 * @summary 获取知识库任务列表
 *
 * @param request ListKnowledgeBaseJobsRequest
 * @return ListKnowledgeBaseJobsResponse
 */
ListKnowledgeBaseJobsResponse Client::listKnowledgeBaseJobs(const string &KnowledgeBaseId, const ListKnowledgeBaseJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listKnowledgeBaseJobsWithOptions(KnowledgeBaseId, request, headers, runtime);
}

/**
 * @summary 获取知识库列表
 *
 * @param request ListKnowledgeBasesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListKnowledgeBasesResponse
 */
ListKnowledgeBasesResponse Client::listKnowledgeBasesWithOptions(const ListKnowledgeBasesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCreator()) {
    query["Creator"] = request.getCreator();
  }

  if (!!request.hasKnowledgeBaseId()) {
    query["KnowledgeBaseId"] = request.getKnowledgeBaseId();
  }

  if (!!request.hasKnowledgeBaseType()) {
    query["KnowledgeBaseType"] = request.getKnowledgeBaseType();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListKnowledgeBases"},
    {"version" , "2024-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/langstudio/knowledgebases")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListKnowledgeBasesResponse>();
}

/**
 * @summary 获取知识库列表
 *
 * @param request ListKnowledgeBasesRequest
 * @return ListKnowledgeBasesResponse
 */
ListKnowledgeBasesResponse Client::listKnowledgeBases(const ListKnowledgeBasesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listKnowledgeBasesWithOptions(request, headers, runtime);
}

/**
 * @summary 搜索知识库
 *
 * @param request RetrieveKnowledgeBaseRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RetrieveKnowledgeBaseResponse
 */
RetrieveKnowledgeBaseResponse Client::retrieveKnowledgeBaseWithOptions(const string &KnowledgeBaseId, const RetrieveKnowledgeBaseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasHybridStrategyConfig()) {
    body["HybridStrategyConfig"] = request.getHybridStrategyConfig();
  }

  if (!!request.hasMetaDataFilterConditions()) {
    body["MetaDataFilterConditions"] = request.getMetaDataFilterConditions();
  }

  if (!!request.hasQuery()) {
    body["Query"] = request.getQuery();
  }

  if (!!request.hasQueryMode()) {
    body["QueryMode"] = request.getQueryMode();
  }

  if (!!request.hasRerankConfig()) {
    body["RerankConfig"] = request.getRerankConfig();
  }

  if (!!request.hasRewriteConfig()) {
    body["RewriteConfig"] = request.getRewriteConfig();
  }

  if (!!request.hasScoreThreshold()) {
    body["ScoreThreshold"] = request.getScoreThreshold();
  }

  if (!!request.hasTopK()) {
    body["TopK"] = request.getTopK();
  }

  if (!!request.hasVersionName()) {
    body["VersionName"] = request.getVersionName();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RetrieveKnowledgeBase"},
    {"version" , "2024-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/langstudio/knowledgebases/" , Darabonba::Encode::Encoder::percentEncode(KnowledgeBaseId) , "/action/retrieve")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RetrieveKnowledgeBaseResponse>();
}

/**
 * @summary 搜索知识库
 *
 * @param request RetrieveKnowledgeBaseRequest
 * @return RetrieveKnowledgeBaseResponse
 */
RetrieveKnowledgeBaseResponse Client::retrieveKnowledgeBase(const string &KnowledgeBaseId, const RetrieveKnowledgeBaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return retrieveKnowledgeBaseWithOptions(KnowledgeBaseId, request, headers, runtime);
}

/**
 * @summary 更新知识库
 *
 * @param request UpdateKnowledgeBaseRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateKnowledgeBaseResponse
 */
UpdateKnowledgeBaseResponse Client::updateKnowledgeBaseWithOptions(const string &KnowledgeBaseId, const UpdateKnowledgeBaseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAutoUpdateConfig()) {
    body["AutoUpdateConfig"] = request.getAutoUpdateConfig();
  }

  if (!!request.hasBindRuntime()) {
    body["BindRuntime"] = request.getBindRuntime();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasMetaDataConfig()) {
    body["MetaDataConfig"] = request.getMetaDataConfig();
  }

  if (!!request.hasRuntimeId()) {
    body["RuntimeId"] = request.getRuntimeId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateKnowledgeBase"},
    {"version" , "2024-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/langstudio/knowledgebases/" , Darabonba::Encode::Encoder::percentEncode(KnowledgeBaseId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateKnowledgeBaseResponse>();
}

/**
 * @summary 更新知识库
 *
 * @param request UpdateKnowledgeBaseRequest
 * @return UpdateKnowledgeBaseResponse
 */
UpdateKnowledgeBaseResponse Client::updateKnowledgeBase(const string &KnowledgeBaseId, const UpdateKnowledgeBaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateKnowledgeBaseWithOptions(KnowledgeBaseId, request, headers, runtime);
}

/**
 * @summary 更新知识库切片
 *
 * @param request UpdateKnowledgeBaseChunkRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateKnowledgeBaseChunkResponse
 */
UpdateKnowledgeBaseChunkResponse Client::updateKnowledgeBaseChunkWithOptions(const string &KnowledgeBaseId, const string &KnowledgeBaseChunkId, const UpdateKnowledgeBaseChunkRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasChunkContent()) {
    body["ChunkContent"] = request.getChunkContent();
  }

  if (!!request.hasChunkStatus()) {
    body["ChunkStatus"] = request.getChunkStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateKnowledgeBaseChunk"},
    {"version" , "2024-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/langstudio/knowledgebases/" , Darabonba::Encode::Encoder::percentEncode(KnowledgeBaseId) , "/knowledgebasechunks/" , Darabonba::Encode::Encoder::percentEncode(KnowledgeBaseChunkId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateKnowledgeBaseChunkResponse>();
}

/**
 * @summary 更新知识库切片
 *
 * @param request UpdateKnowledgeBaseChunkRequest
 * @return UpdateKnowledgeBaseChunkResponse
 */
UpdateKnowledgeBaseChunkResponse Client::updateKnowledgeBaseChunk(const string &KnowledgeBaseId, const string &KnowledgeBaseChunkId, const UpdateKnowledgeBaseChunkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateKnowledgeBaseChunkWithOptions(KnowledgeBaseId, KnowledgeBaseChunkId, request, headers, runtime);
}

/**
 * @summary 更新知识库任务
 *
 * @param request UpdateKnowledgeBaseJobRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateKnowledgeBaseJobResponse
 */
UpdateKnowledgeBaseJobResponse Client::updateKnowledgeBaseJobWithOptions(const string &KnowledgeBaseId, const string &KnowledgeBaseJobId, const UpdateKnowledgeBaseJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateKnowledgeBaseJob"},
    {"version" , "2024-07-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/langstudio/knowledgebases/" , Darabonba::Encode::Encoder::percentEncode(KnowledgeBaseId) , "/knowledgebasejobs/" , Darabonba::Encode::Encoder::percentEncode(KnowledgeBaseJobId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateKnowledgeBaseJobResponse>();
}

/**
 * @summary 更新知识库任务
 *
 * @param request UpdateKnowledgeBaseJobRequest
 * @return UpdateKnowledgeBaseJobResponse
 */
UpdateKnowledgeBaseJobResponse Client::updateKnowledgeBaseJob(const string &KnowledgeBaseId, const string &KnowledgeBaseJobId, const UpdateKnowledgeBaseJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateKnowledgeBaseJobWithOptions(KnowledgeBaseId, KnowledgeBaseJobId, request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710