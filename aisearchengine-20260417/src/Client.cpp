#include <darabonba/Core.hpp>
#include <alibabacloud/AiSearchEngine20260417.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::OpenApi::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::AiSearchEngine20260417::Models;
namespace AlibabaCloud
{
namespace AiSearchEngine20260417
{

AlibabaCloud::AiSearchEngine20260417::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("aisearchengine", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary AI搜索
 *
 * @param request EngineSearchRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return EngineSearchResponse
 */
EngineSearchResponse Client::engineSearchWithOptions(const EngineSearchRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["appId"] = request.getAppId();
  }

  if (!!request.hasGrey()) {
    body["grey"] = request.getGrey();
  }

  if (!!request.hasQuery()) {
    body["query"] = request.getQuery();
  }

  if (!!request.hasRecall()) {
    body["recall"] = request.getRecall();
  }

  if (!!request.hasSessionId()) {
    body["sessionId"] = request.getSessionId();
  }

  if (!!request.hasStrategyId()) {
    body["strategyId"] = request.getStrategyId();
  }

  if (!!request.hasUser()) {
    body["user"] = request.getUser();
  }

  if (!!request.hasVersion()) {
    body["version"] = request.getVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "EngineSearch"},
    {"version" , "2026-04-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/platform/app/search")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EngineSearchResponse>();
}

/**
 * @summary AI搜索
 *
 * @param request EngineSearchRequest
 * @return EngineSearchResponse
 */
EngineSearchResponse Client::engineSearch(const EngineSearchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return engineSearchWithOptions(request, headers, runtime);
}

/**
 * @summary 获取数据集资源 OSS 访问地址
 *
 * @param request GetDatasetResourceUrlRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDatasetResourceUrlResponse
 */
GetDatasetResourceUrlResponse Client::getDatasetResourceUrlWithOptions(const GetDatasetResourceUrlRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDatasetId()) {
    body["datasetId"] = request.getDatasetId();
  }

  if (!!request.hasPrimaryKey()) {
    body["primaryKey"] = request.getPrimaryKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetDatasetResourceUrl"},
    {"version" , "2026-04-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/dataset/open/resources")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDatasetResourceUrlResponse>();
}

/**
 * @summary 获取数据集资源 OSS 访问地址
 *
 * @param request GetDatasetResourceUrlRequest
 * @return GetDatasetResourceUrlResponse
 */
GetDatasetResourceUrlResponse Client::getDatasetResourceUrl(const GetDatasetResourceUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getDatasetResourceUrlWithOptions(request, headers, runtime);
}

/**
 * @summary 提交单条记录导入任务
 *
 * @param request ImportDatasetDataRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImportDatasetDataResponse
 */
ImportDatasetDataResponse Client::importDatasetDataWithOptions(const ImportDatasetDataRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDatasetId()) {
    body["datasetId"] = request.getDatasetId();
  }

  if (!!request.hasRecords()) {
    body["records"] = request.getRecords();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ImportDatasetData"},
    {"version" , "2026-04-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/dataset/open/upsert")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ImportDatasetDataResponse>();
}

/**
 * @summary 提交单条记录导入任务
 *
 * @param request ImportDatasetDataRequest
 * @return ImportDatasetDataResponse
 */
ImportDatasetDataResponse Client::importDatasetData(const ImportDatasetDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return importDatasetDataWithOptions(request, headers, runtime);
}

/**
 * @summary AI问答对话
 *
 * @param request QaChatRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return QaChatResponse
 */
FutureGenerator<QaChatResponse> Client::qaChatWithSSE(const QaChatRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["appId"] = request.getAppId();
  }

  if (!!request.hasMessage()) {
    body["message"] = request.getMessage();
  }

  if (!!request.hasOptions()) {
    body["options"] = request.getOptions();
  }

  if (!!request.hasSessionId()) {
    body["sessionId"] = request.getSessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "QaChat"},
    {"version" , "2026-04-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/platform/app/chat")},
    {"method" , "POST"},
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
      })).get<QaChatResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary AI问答对话
 *
 * @param request QaChatRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return QaChatResponse
 */
QaChatResponse Client::qaChatWithOptions(const QaChatRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["appId"] = request.getAppId();
  }

  if (!!request.hasMessage()) {
    body["message"] = request.getMessage();
  }

  if (!!request.hasOptions()) {
    body["options"] = request.getOptions();
  }

  if (!!request.hasSessionId()) {
    body["sessionId"] = request.getSessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "QaChat"},
    {"version" , "2026-04-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/platform/app/chat")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QaChatResponse>();
}

/**
 * @summary AI问答对话
 *
 * @param request QaChatRequest
 * @return QaChatResponse
 */
QaChatResponse Client::qaChat(const QaChatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return qaChatWithOptions(request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace AiSearchEngine20260417