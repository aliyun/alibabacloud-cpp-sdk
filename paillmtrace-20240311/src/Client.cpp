#include <darabonba/Core.hpp>
#include <alibabacloud/PaiLLMTrace20240311.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
#include <darabonba/http/URL.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::PaiLLMTrace20240311::Models;
namespace AlibabaCloud
{
namespace PaiLLMTrace20240311
{

AlibabaCloud::PaiLLMTrace20240311::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("paillmtrace", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Creates a trace evaluation task. The system will sample some data from the user\\"s trace data based on the task\\"s configuration. Then, an LLM is used to evaluate the performance of these traces, and the evaluation results are recorded.
 *
 * @param tmpReq CreateOnlineEvalTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateOnlineEvalTaskResponse
 */
CreateOnlineEvalTaskResponse Client::createOnlineEvalTaskWithOptions(const CreateOnlineEvalTaskRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateOnlineEvalTaskShrinkRequest request = CreateOnlineEvalTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.body(), "body", "json"));
  }

  json query = {};
  if (!!request.hasBodyShrink()) {
    query["body"] = request.bodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "CreateOnlineEvalTask"},
    {"version" , "2024-03-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/PAILLMTrace/onlineevaltasks")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<CreateOnlineEvalTaskResponse>();
}

/**
 * @summary Creates a trace evaluation task. The system will sample some data from the user\\"s trace data based on the task\\"s configuration. Then, an LLM is used to evaluate the performance of these traces, and the evaluation results are recorded.
 *
 * @param request CreateOnlineEvalTaskRequest
 * @return CreateOnlineEvalTaskResponse
 */
CreateOnlineEvalTaskResponse Client::createOnlineEvalTask(const CreateOnlineEvalTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createOnlineEvalTaskWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a service-linked role required for the PaiLLMTrace service.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateServiceIdentityRoleResponse
 */
CreateServiceIdentityRoleResponse Client::createServiceIdentityRoleWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }));
  Params params = Params(json({
    {"action" , "CreateServiceIdentityRole"},
    {"version" , "2024-03-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/PAILLMTrace/ServiceIdentityRole")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<CreateServiceIdentityRoleResponse>();
}

/**
 * @summary Creates a service-linked role required for the PaiLLMTrace service.
 *
 * @return CreateServiceIdentityRoleResponse
 */
CreateServiceIdentityRoleResponse Client::createServiceIdentityRole() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createServiceIdentityRoleWithOptions(headers, runtime);
}

/**
 * @summary Delete an online evaluation task
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteOnlineEvalTaskResponse
 */
DeleteOnlineEvalTaskResponse Client::deleteOnlineEvalTaskWithOptions(const string &TaskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }));
  Params params = Params(json({
    {"action" , "DeleteOnlineEvalTask"},
    {"version" , "2024-03-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/PAILLMTrace/onlineevaltasks/" , Darabonba::Http::URL::percentEncode(TaskId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<DeleteOnlineEvalTaskResponse>();
}

/**
 * @summary Delete an online evaluation task
 *
 * @return DeleteOnlineEvalTaskResponse
 */
DeleteOnlineEvalTaskResponse Client::deleteOnlineEvalTask(const string &TaskId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteOnlineEvalTaskWithOptions(TaskId, headers, runtime);
}

/**
 * @summary Evaluates a specified piece of trace data.
 *
 * @param request EvaluateTraceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return EvaluateTraceResponse
 */
EvaluateTraceResponse Client::evaluateTraceWithOptions(const string &TraceId, const EvaluateTraceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppName()) {
    body["AppName"] = request.appName();
  }

  if (!!request.hasEvaluationConfig()) {
    body["EvaluationConfig"] = request.evaluationConfig();
  }

  if (!!request.hasEvaluationId()) {
    body["EvaluationId"] = request.evaluationId();
  }

  if (!!request.hasMaxTime()) {
    body["MaxTime"] = request.maxTime();
  }

  if (!!request.hasMinTime()) {
    body["MinTime"] = request.minTime();
  }

  if (!!request.hasModelConfig()) {
    body["ModelConfig"] = request.modelConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "EvaluateTrace"},
    {"version" , "2024-03-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/PAILLMTrace/eval/trace/" , Darabonba::Http::URL::percentEncode(TraceId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<EvaluateTraceResponse>();
}

/**
 * @summary Evaluates a specified piece of trace data.
 *
 * @param request EvaluateTraceRequest
 * @return EvaluateTraceResponse
 */
EvaluateTraceResponse Client::evaluateTrace(const string &TraceId, const EvaluateTraceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return evaluateTraceWithOptions(TraceId, request, headers, runtime);
}

/**
 * @summary Get the content of prompt templates used for evaluation
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEvaluationTemplatesResponse
 */
GetEvaluationTemplatesResponse Client::getEvaluationTemplatesWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }));
  Params params = Params(json({
    {"action" , "GetEvaluationTemplates"},
    {"version" , "2024-03-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/PAILLMTrace/eval/templates")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<GetEvaluationTemplatesResponse>();
}

/**
 * @summary Get the content of prompt templates used for evaluation
 *
 * @return GetEvaluationTemplatesResponse
 */
GetEvaluationTemplatesResponse Client::getEvaluationTemplates() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getEvaluationTemplatesWithOptions(headers, runtime);
}

/**
 * @summary Get the details of an online evaluation task
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOnlineEvalTaskResponse
 */
GetOnlineEvalTaskResponse Client::getOnlineEvalTaskWithOptions(const string &TaskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }));
  Params params = Params(json({
    {"action" , "GetOnlineEvalTask"},
    {"version" , "2024-03-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/PAILLMTrace/onlineevaltasks/" , Darabonba::Http::URL::percentEncode(TaskId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<GetOnlineEvalTaskResponse>();
}

/**
 * @summary Get the details of an online evaluation task
 *
 * @return GetOnlineEvalTaskResponse
 */
GetOnlineEvalTaskResponse Client::getOnlineEvalTask(const string &TaskId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getOnlineEvalTaskWithOptions(TaskId, headers, runtime);
}

/**
 * @summary Obtains the information related to the service-linked role.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetServiceIdentityRoleResponse
 */
GetServiceIdentityRoleResponse Client::getServiceIdentityRoleWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }));
  Params params = Params(json({
    {"action" , "GetServiceIdentityRole"},
    {"version" , "2024-03-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/PAILLMTrace/ServiceIdentityRole")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<GetServiceIdentityRoleResponse>();
}

/**
 * @summary Obtains the information related to the service-linked role.
 *
 * @return GetServiceIdentityRoleResponse
 */
GetServiceIdentityRoleResponse Client::getServiceIdentityRole() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getServiceIdentityRoleWithOptions(headers, runtime);
}

/**
 * @summary Obtains the token used in the Xtrace service and the endpoint required for uploading trace data.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetXtraceTokenResponse
 */
GetXtraceTokenResponse Client::getXtraceTokenWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }));
  Params params = Params(json({
    {"action" , "GetXtraceToken"},
    {"version" , "2024-03-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/PAILLMTrace/XtraceToken")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<GetXtraceTokenResponse>();
}

/**
 * @summary Obtains the token used in the Xtrace service and the endpoint required for uploading trace data.
 *
 * @return GetXtraceTokenResponse
 */
GetXtraceTokenResponse Client::getXtraceToken() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getXtraceTokenWithOptions(headers, runtime);
}

/**
 * @summary Obtains the list of results for trace evaluation. This API is used together with EvaluateTrace. EvaluateTrace starts the evaluation. ListEvalResults obtains the results.
 *
 * @param tmpReq ListEvalResultsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEvalResultsResponse
 */
ListEvalResultsResponse Client::listEvalResultsWithOptions(const ListEvalResultsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListEvalResultsShrinkRequest request = ListEvalResultsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRecordIds()) {
    request.setRecordIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.recordIds(), "RecordIds", "simple"));
  }

  json query = {};
  if (!!request.hasEvaluationId()) {
    query["EvaluationId"] = request.evaluationId();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRecordIdsShrink()) {
    query["RecordIds"] = request.recordIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "ListEvalResults"},
    {"version" , "2024-03-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/PAILLMTrace/eval/results")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<ListEvalResultsResponse>();
}

/**
 * @summary Obtains the list of results for trace evaluation. This API is used together with EvaluateTrace. EvaluateTrace starts the evaluation. ListEvalResults obtains the results.
 *
 * @param request ListEvalResultsRequest
 * @return ListEvalResultsResponse
 */
ListEvalResultsResponse Client::listEvalResults(const ListEvalResultsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listEvalResultsWithOptions(request, headers, runtime);
}

/**
 * @summary List the results of online evaluation tasks that meet the criteria
 *
 * @param tmpReq ListOnlineEvalTaskResultsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListOnlineEvalTaskResultsResponse
 */
ListOnlineEvalTaskResultsResponse Client::listOnlineEvalTaskResultsWithOptions(const ListOnlineEvalTaskResultsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListOnlineEvalTaskResultsShrinkRequest request = ListOnlineEvalTaskResultsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTraceIds()) {
    request.setTraceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.traceIds(), "TraceIds", "simple"));
  }

  json query = {};
  if (!!request.hasEvaluationId()) {
    query["EvaluationId"] = request.evaluationId();
  }

  if (!!request.hasMostRecentResultsOnly()) {
    query["MostRecentResultsOnly"] = request.mostRecentResultsOnly();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasTraceIdsShrink()) {
    query["TraceIds"] = request.traceIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "ListOnlineEvalTaskResults"},
    {"version" , "2024-03-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/PAILLMTrace/onlineevaltaskresults")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<ListOnlineEvalTaskResultsResponse>();
}

/**
 * @summary List the results of online evaluation tasks that meet the criteria
 *
 * @param request ListOnlineEvalTaskResultsRequest
 * @return ListOnlineEvalTaskResultsResponse
 */
ListOnlineEvalTaskResultsResponse Client::listOnlineEvalTaskResults(const ListOnlineEvalTaskResultsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listOnlineEvalTaskResultsWithOptions(request, headers, runtime);
}

/**
 * @summary View online evaluation tasks that meet the criteria
 *
 * @param request ListOnlineEvalTasksRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListOnlineEvalTasksResponse
 */
ListOnlineEvalTasksResponse Client::listOnlineEvalTasksWithOptions(const ListOnlineEvalTasksRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.appName();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
  }

  if (!!request.hasMaxTime()) {
    query["MaxTime"] = request.maxTime();
  }

  if (!!request.hasMinTime()) {
    query["MinTime"] = request.minTime();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSamplingMethod()) {
    query["SamplingMethod"] = request.samplingMethod();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.sortBy();
  }

  if (!!request.hasSortOrder()) {
    query["SortOrder"] = request.sortOrder();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "ListOnlineEvalTasks"},
    {"version" , "2024-03-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/PAILLMTrace/onlineevaltasks")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<ListOnlineEvalTasksResponse>();
}

/**
 * @summary View online evaluation tasks that meet the criteria
 *
 * @param request ListOnlineEvalTasksRequest
 * @return ListOnlineEvalTasksResponse
 */
ListOnlineEvalTasksResponse Client::listOnlineEvalTasks(const ListOnlineEvalTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listOnlineEvalTasksWithOptions(request, headers, runtime);
}

/**
 * @summary Obtains a list of trace data based on specified criteria.
 *
 * @param tmpReq ListTracesDatasRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTracesDatasResponse
 */
ListTracesDatasResponse Client::listTracesDatasWithOptions(const ListTracesDatasRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListTracesDatasShrinkRequest request = ListTracesDatasShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFilters()) {
    request.setFiltersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.filters(), "Filters", "json"));
  }

  if (!!tmpReq.hasSpanIds()) {
    request.setSpanIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.spanIds(), "SpanIds", "simple"));
  }

  if (!!tmpReq.hasTraceIds()) {
    request.setTraceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.traceIds(), "TraceIds", "simple"));
  }

  json query = {};
  if (!!request.hasEndUserId()) {
    query["EndUserId"] = request.endUserId();
  }

  if (!!request.hasFiltersShrink()) {
    query["Filters"] = request.filtersShrink();
  }

  if (!!request.hasHasEvents()) {
    query["HasEvents"] = request.hasEvents();
  }

  if (!!request.hasHasStatusMessage()) {
    query["HasStatusMessage"] = request.hasStatusMessage();
  }

  if (!!request.hasLlmAppName()) {
    query["LlmAppName"] = request.llmAppName();
  }

  if (!!request.hasMaxDuration()) {
    query["MaxDuration"] = request.maxDuration();
  }

  if (!!request.hasMaxTime()) {
    query["MaxTime"] = request.maxTime();
  }

  if (!!request.hasMinDuration()) {
    query["MinDuration"] = request.minDuration();
  }

  if (!!request.hasMinTime()) {
    query["MinTime"] = request.minTime();
  }

  if (!!request.hasOpentelemetryCompatible()) {
    query["OpentelemetryCompatible"] = request.opentelemetryCompatible();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasOwnerSubId()) {
    query["OwnerSubId"] = request.ownerSubId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.sortBy();
  }

  if (!!request.hasSortOrder()) {
    query["SortOrder"] = request.sortOrder();
  }

  if (!!request.hasSpanIdsShrink()) {
    query["SpanIds"] = request.spanIdsShrink();
  }

  if (!!request.hasSpanName()) {
    query["SpanName"] = request.spanName();
  }

  if (!!request.hasTraceIdsShrink()) {
    query["TraceIds"] = request.traceIdsShrink();
  }

  if (!!request.hasTraceReduceMethod()) {
    query["TraceReduceMethod"] = request.traceReduceMethod();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "ListTracesDatas"},
    {"version" , "2024-03-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/PAILLMTrace/TracesDatas")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<ListTracesDatasResponse>();
}

/**
 * @summary Obtains a list of trace data based on specified criteria.
 *
 * @param request ListTracesDatasRequest
 * @return ListTracesDatasResponse
 */
ListTracesDatasResponse Client::listTracesDatas(const ListTracesDatasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listTracesDatasWithOptions(request, headers, runtime);
}

/**
 * @summary Stop the execution of an online evaluation task
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopOnlineEvalTaskResponse
 */
StopOnlineEvalTaskResponse Client::stopOnlineEvalTaskWithOptions(const string &TaskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }));
  Params params = Params(json({
    {"action" , "StopOnlineEvalTask"},
    {"version" , "2024-03-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/PAILLMTrace/onlineevaltasks/" , Darabonba::Http::URL::percentEncode(TaskId) , "/stop")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<StopOnlineEvalTaskResponse>();
}

/**
 * @summary Stop the execution of an online evaluation task
 *
 * @return StopOnlineEvalTaskResponse
 */
StopOnlineEvalTaskResponse Client::stopOnlineEvalTask(const string &TaskId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return stopOnlineEvalTaskWithOptions(TaskId, headers, runtime);
}

/**
 * @summary Changes the configuration of a trace evaluation task.
 *
 * @param request UpdateOnlineEvalTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateOnlineEvalTaskResponse
 */
UpdateOnlineEvalTaskResponse Client::updateOnlineEvalTaskWithOptions(const string &TaskId, const UpdateOnlineEvalTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppName()) {
    body["AppName"] = request.appName();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.endTime();
  }

  if (!!request.hasEvaluationConfig()) {
    body["EvaluationConfig"] = request.evaluationConfig();
  }

  if (!!request.hasFilters()) {
    body["Filters"] = request.filters();
  }

  if (!!request.hasModelConfig()) {
    body["ModelConfig"] = request.modelConfig();
  }

  if (!!request.hasSamplingFrequencyMinutes()) {
    body["SamplingFrequencyMinutes"] = request.samplingFrequencyMinutes();
  }

  if (!!request.hasSamplingRatio()) {
    body["SamplingRatio"] = request.samplingRatio();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.startTime();
  }

  if (!!request.hasTaskName()) {
    body["TaskName"] = request.taskName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateOnlineEvalTask"},
    {"version" , "2024-03-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/PAILLMTrace/onlineevaltasks/" , Darabonba::Http::URL::percentEncode(TaskId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<UpdateOnlineEvalTaskResponse>();
}

/**
 * @summary Changes the configuration of a trace evaluation task.
 *
 * @param request UpdateOnlineEvalTaskRequest
 * @return UpdateOnlineEvalTaskResponse
 */
UpdateOnlineEvalTaskResponse Client::updateOnlineEvalTask(const string &TaskId, const UpdateOnlineEvalTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateOnlineEvalTaskWithOptions(TaskId, request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace PaiLLMTrace20240311