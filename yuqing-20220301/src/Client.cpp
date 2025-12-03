#include <darabonba/Core.hpp>
#include <alibabacloud/Yuqing20220301.hpp>
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
using namespace AlibabaCloud::Yuqing20220301::Models;
namespace AlibabaCloud
{
namespace Yuqing20220301
{

AlibabaCloud::Yuqing20220301::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("yuqing", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 关闭舆情产品
 *
 * @param request CloseProductRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloseProductResponse
 */
CloseProductResponse Client::closeProductWithOptions(const CloseProductRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRequestId()) {
    query["requestId"] = request.requestId();
  }

  json body = {};
  if (!!request.hasProductInstance()) {
    body["productInstance"] = request.productInstance();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CloseProduct"},
    {"version" , "2022-03-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/aliyun/closeProduct.json")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloseProductResponse>();
}

/**
 * @summary 关闭舆情产品
 *
 * @param request CloseProductRequest
 * @return CloseProductResponse
 */
CloseProductResponse Client::closeProduct(const CloseProductRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return closeProductWithOptions(request, headers, runtime);
}

/**
 * @summary 控制台统一代理API
 *
 * @param request ConsoleApiProxyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConsoleApiProxyResponse
 */
ConsoleApiProxyResponse Client::consoleApiProxyWithOptions(const ConsoleApiProxyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "ConsoleApiProxy"},
    {"version" , "2022-03-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/aliyun/consoleApiProxy.json")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConsoleApiProxyResponse>();
}

/**
 * @summary 控制台统一代理API
 *
 * @param request ConsoleApiProxyRequest
 * @return ConsoleApiProxyResponse
 */
ConsoleApiProxyResponse Client::consoleApiProxy(const ConsoleApiProxyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return consoleApiProxyWithOptions(request, headers, runtime);
}

/**
 * @deprecated OpenAPI ConsoleProxy is deprecated
 *
 * @summary 控制台统一代理API
 *
 * @param request ConsoleProxyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConsoleProxyResponse
 */
ConsoleProxyResponse Client::consoleProxyWithOptions(const ConsoleProxyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRequestId()) {
    query["requestId"] = request.requestId();
  }

  json body = {};
  if (!!request.hasAppCode()) {
    body["appCode"] = request.appCode();
  }

  if (!!request.hasInterfaceName()) {
    body["interfaceName"] = request.interfaceName();
  }

  if (!!request.hasParamJson()) {
    body["paramJson"] = request.paramJson();
  }

  if (!!request.hasTeamHashId()) {
    body["teamHashId"] = request.teamHashId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ConsoleProxy"},
    {"version" , "2022-03-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/aliyun/consoleProxy.json")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConsoleProxyResponse>();
}

/**
 * @deprecated OpenAPI ConsoleProxy is deprecated
 *
 * @summary 控制台统一代理API
 *
 * @param request ConsoleProxyRequest
 * @return ConsoleProxyResponse
 */
ConsoleProxyResponse Client::consoleProxy(const ConsoleProxyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return consoleProxyWithOptions(request, headers, runtime);
}

/**
 * @summary 读取分析组件计算任务结果
 *
 * @param request GetAnalysisTaskResultRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAnalysisTaskResultResponse
 */
GetAnalysisTaskResultResponse Client::getAnalysisTaskResultWithOptions(const GetAnalysisTaskResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAnalysisId()) {
    query["analysisId"] = request.analysisId();
  }

  if (!!request.hasRequestId()) {
    query["requestId"] = request.requestId();
  }

  if (!!request.hasTeamHashId()) {
    query["teamHashId"] = request.teamHashId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAnalysisTaskResult"},
    {"version" , "2022-03-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/aliyun/getAnalysisComponentResult.json")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAnalysisTaskResultResponse>();
}

/**
 * @summary 读取分析组件计算任务结果
 *
 * @param request GetAnalysisTaskResultRequest
 * @return GetAnalysisTaskResultResponse
 */
GetAnalysisTaskResultResponse Client::getAnalysisTaskResult(const GetAnalysisTaskResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getAnalysisTaskResultWithOptions(request, headers, runtime);
}

/**
 * @summary 开通舆情产品
 *
 * @param request OpenProductRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return OpenProductResponse
 */
OpenProductResponse Client::openProductWithOptions(const OpenProductRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRequestId()) {
    query["requestId"] = request.requestId();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasProductInstance()) {
    body["productInstance"] = request.productInstance();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "OpenProduct"},
    {"version" , "2022-03-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/aliyun/openProduct.json")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OpenProductResponse>();
}

/**
 * @summary 开通舆情产品
 *
 * @param request OpenProductRequest
 * @return OpenProductResponse
 */
OpenProductResponse Client::openProduct(const OpenProductRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return openProductWithOptions(request, headers, runtime);
}

/**
 * @summary 查询产品开通实例列表
 *
 * @param request QueryProductInstanceListRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryProductInstanceListResponse
 */
QueryProductInstanceListResponse Client::queryProductInstanceListWithOptions(const QueryProductInstanceListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppCode()) {
    query["appCode"] = request.appCode();
  }

  if (!!request.hasFromTime()) {
    query["fromTime"] = request.fromTime();
  }

  if (!!request.hasRequestId()) {
    query["requestId"] = request.requestId();
  }

  if (!!request.hasTenantUid()) {
    query["tenantUid"] = request.tenantUid();
  }

  if (!!request.hasToTime()) {
    query["toTime"] = request.toTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryProductInstanceList"},
    {"version" , "2022-03-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/aliyun/queryProductInstanceList.json")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryProductInstanceListResponse>();
}

/**
 * @summary 查询产品开通实例列表
 *
 * @param request QueryProductInstanceListRequest
 * @return QueryProductInstanceListResponse
 */
QueryProductInstanceListResponse Client::queryProductInstanceList(const QueryProductInstanceListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return queryProductInstanceListWithOptions(request, headers, runtime);
}

/**
 * @summary 查询舆情文章列表
 *
 * @param request QueryYuqingMessageRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryYuqingMessageResponse
 */
QueryYuqingMessageResponse Client::queryYuqingMessageWithOptions(const QueryYuqingMessageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRequestId()) {
    query["requestId"] = request.requestId();
  }

  json body = {};
  if (!!request.hasSearchCondition()) {
    body["searchCondition"] = request.searchCondition();
  }

  if (!!request.hasTeamHashId()) {
    body["teamHashId"] = request.teamHashId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "QueryYuqingMessage"},
    {"version" , "2022-03-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/aliyun/queryYuqingMessage.json")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryYuqingMessageResponse>();
}

/**
 * @summary 查询舆情文章列表
 *
 * @param request QueryYuqingMessageRequest
 * @return QueryYuqingMessageResponse
 */
QueryYuqingMessageResponse Client::queryYuqingMessage(const QueryYuqingMessageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return queryYuqingMessageWithOptions(request, headers, runtime);
}

/**
 * @summary 提交分析组件计算任务
 *
 * @param request SubmitAnalysisTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitAnalysisTaskResponse
 */
SubmitAnalysisTaskResponse Client::submitAnalysisTaskWithOptions(const SubmitAnalysisTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRequestId()) {
    query["requestId"] = request.requestId();
  }

  json body = {};
  if (!!request.hasAnalyseType()) {
    body["analyseType"] = request.analyseType();
  }

  if (!!request.hasSearchCondition()) {
    body["searchCondition"] = request.searchCondition();
  }

  if (!!request.hasTeamHashId()) {
    body["teamHashId"] = request.teamHashId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SubmitAnalysisTask"},
    {"version" , "2022-03-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/aliyun/submitAnalysisComponent.json")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitAnalysisTaskResponse>();
}

/**
 * @summary 提交分析组件计算任务
 *
 * @param request SubmitAnalysisTaskRequest
 * @return SubmitAnalysisTaskResponse
 */
SubmitAnalysisTaskResponse Client::submitAnalysisTask(const SubmitAnalysisTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return submitAnalysisTaskWithOptions(request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace Yuqing20220301