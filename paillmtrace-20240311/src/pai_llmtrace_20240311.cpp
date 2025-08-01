// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/pai_llmtrace_20240311.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_PaiLLMTrace20240311;

Alibabacloud_PaiLLMTrace20240311::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("paillmtrace"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_PaiLLMTrace20240311::Client::getEndpoint(shared_ptr<string> productId,
                                                             shared_ptr<string> regionId,
                                                             shared_ptr<string> endpointRule,
                                                             shared_ptr<string> network,
                                                             shared_ptr<string> suffix,
                                                             shared_ptr<map<string, string>> endpointMap,
                                                             shared_ptr<string> endpoint) {
  if (!Darabonba_Util::Client::empty(endpoint)) {
    return *endpoint;
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(endpointMap) && !Darabonba_Util::Client::empty(make_shared<string>((*endpointMap)[regionId]))) {
    return (*endpointMap)[regionId];
  }
  return Alibabacloud_EndpointUtil::Client::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

CreateOnlineEvalTaskResponse Alibabacloud_PaiLLMTrace20240311::Client::createOnlineEvalTaskWithOptions(shared_ptr<CreateOnlineEvalTaskRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateOnlineEvalTaskShrinkRequest> request = make_shared<CreateOnlineEvalTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateOnlineEvalTaskRequestBody>(tmpReq->body)) {
    request->bodyShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->body, make_shared<string>("body"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bodyShrink)) {
    query->insert(pair<string, string>("body", *request->bodyShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateOnlineEvalTask"))},
    {"version", boost::any(string("2024-03-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/PAILLMTrace/onlineevaltasks"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateOnlineEvalTaskResponse(callApi(params, req, runtime));
}

CreateOnlineEvalTaskResponse Alibabacloud_PaiLLMTrace20240311::Client::createOnlineEvalTask(shared_ptr<CreateOnlineEvalTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createOnlineEvalTaskWithOptions(request, headers, runtime);
}

CreateServiceIdentityRoleResponse Alibabacloud_PaiLLMTrace20240311::Client::createServiceIdentityRoleWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateServiceIdentityRole"))},
    {"version", boost::any(string("2024-03-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/PAILLMTrace/ServiceIdentityRole"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateServiceIdentityRoleResponse(callApi(params, req, runtime));
}

CreateServiceIdentityRoleResponse Alibabacloud_PaiLLMTrace20240311::Client::createServiceIdentityRole() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createServiceIdentityRoleWithOptions(headers, runtime);
}

DeleteOnlineEvalTaskResponse Alibabacloud_PaiLLMTrace20240311::Client::deleteOnlineEvalTaskWithOptions(shared_ptr<string> TaskId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteOnlineEvalTask"))},
    {"version", boost::any(string("2024-03-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/PAILLMTrace/onlineevaltasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TaskId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteOnlineEvalTaskResponse(callApi(params, req, runtime));
}

DeleteOnlineEvalTaskResponse Alibabacloud_PaiLLMTrace20240311::Client::deleteOnlineEvalTask(shared_ptr<string> TaskId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteOnlineEvalTaskWithOptions(TaskId, headers, runtime);
}

EvaluateTraceResponse Alibabacloud_PaiLLMTrace20240311::Client::evaluateTraceWithOptions(shared_ptr<string> TraceId,
                                                                                         shared_ptr<EvaluateTraceRequest> request,
                                                                                         shared_ptr<map<string, string>> headers,
                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    body->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<EvaluationConfig>(request->evaluationConfig)) {
    body->insert(pair<string, EvaluationConfig>("EvaluationConfig", *request->evaluationConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->evaluationId)) {
    body->insert(pair<string, string>("EvaluationId", *request->evaluationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->maxTime)) {
    body->insert(pair<string, string>("MaxTime", *request->maxTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->minTime)) {
    body->insert(pair<string, string>("MinTime", *request->minTime));
  }
  if (!Darabonba_Util::Client::isUnset<ModelConfig>(request->modelConfig)) {
    body->insert(pair<string, ModelConfig>("ModelConfig", *request->modelConfig));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EvaluateTrace"))},
    {"version", boost::any(string("2024-03-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/PAILLMTrace/eval/trace/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TraceId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EvaluateTraceResponse(callApi(params, req, runtime));
}

EvaluateTraceResponse Alibabacloud_PaiLLMTrace20240311::Client::evaluateTrace(shared_ptr<string> TraceId, shared_ptr<EvaluateTraceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return evaluateTraceWithOptions(TraceId, request, headers, runtime);
}

GetEvaluationTemplatesResponse Alibabacloud_PaiLLMTrace20240311::Client::getEvaluationTemplatesWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEvaluationTemplates"))},
    {"version", boost::any(string("2024-03-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/PAILLMTrace/eval/templates"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetEvaluationTemplatesResponse(callApi(params, req, runtime));
}

GetEvaluationTemplatesResponse Alibabacloud_PaiLLMTrace20240311::Client::getEvaluationTemplates() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getEvaluationTemplatesWithOptions(headers, runtime);
}

GetOnlineEvalTaskResponse Alibabacloud_PaiLLMTrace20240311::Client::getOnlineEvalTaskWithOptions(shared_ptr<string> TaskId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetOnlineEvalTask"))},
    {"version", boost::any(string("2024-03-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/PAILLMTrace/onlineevaltasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TaskId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetOnlineEvalTaskResponse(callApi(params, req, runtime));
}

GetOnlineEvalTaskResponse Alibabacloud_PaiLLMTrace20240311::Client::getOnlineEvalTask(shared_ptr<string> TaskId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getOnlineEvalTaskWithOptions(TaskId, headers, runtime);
}

GetServiceIdentityRoleResponse Alibabacloud_PaiLLMTrace20240311::Client::getServiceIdentityRoleWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetServiceIdentityRole"))},
    {"version", boost::any(string("2024-03-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/PAILLMTrace/ServiceIdentityRole"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetServiceIdentityRoleResponse(callApi(params, req, runtime));
}

GetServiceIdentityRoleResponse Alibabacloud_PaiLLMTrace20240311::Client::getServiceIdentityRole() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getServiceIdentityRoleWithOptions(headers, runtime);
}

GetXtraceTokenResponse Alibabacloud_PaiLLMTrace20240311::Client::getXtraceTokenWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetXtraceToken"))},
    {"version", boost::any(string("2024-03-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/PAILLMTrace/XtraceToken"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetXtraceTokenResponse(callApi(params, req, runtime));
}

GetXtraceTokenResponse Alibabacloud_PaiLLMTrace20240311::Client::getXtraceToken() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getXtraceTokenWithOptions(headers, runtime);
}

ListEvalResultsResponse Alibabacloud_PaiLLMTrace20240311::Client::listEvalResultsWithOptions(shared_ptr<ListEvalResultsRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListEvalResultsShrinkRequest> request = make_shared<ListEvalResultsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->recordIds)) {
    request->recordIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->recordIds, make_shared<string>("RecordIds"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->evaluationId)) {
    query->insert(pair<string, string>("EvaluationId", *request->evaluationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    query->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recordIdsShrink)) {
    query->insert(pair<string, string>("RecordIds", *request->recordIdsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListEvalResults"))},
    {"version", boost::any(string("2024-03-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/PAILLMTrace/eval/results"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListEvalResultsResponse(callApi(params, req, runtime));
}

ListEvalResultsResponse Alibabacloud_PaiLLMTrace20240311::Client::listEvalResults(shared_ptr<ListEvalResultsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listEvalResultsWithOptions(request, headers, runtime);
}

ListOnlineEvalTaskResultsResponse Alibabacloud_PaiLLMTrace20240311::Client::listOnlineEvalTaskResultsWithOptions(shared_ptr<ListOnlineEvalTaskResultsRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListOnlineEvalTaskResultsShrinkRequest> request = make_shared<ListOnlineEvalTaskResultsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->traceIds)) {
    request->traceIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->traceIds, make_shared<string>("TraceIds"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->evaluationId)) {
    query->insert(pair<string, string>("EvaluationId", *request->evaluationId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->mostRecentResultsOnly)) {
    query->insert(pair<string, bool>("MostRecentResultsOnly", *request->mostRecentResultsOnly));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->traceIdsShrink)) {
    query->insert(pair<string, string>("TraceIds", *request->traceIdsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListOnlineEvalTaskResults"))},
    {"version", boost::any(string("2024-03-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/PAILLMTrace/onlineevaltaskresults"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListOnlineEvalTaskResultsResponse(callApi(params, req, runtime));
}

ListOnlineEvalTaskResultsResponse Alibabacloud_PaiLLMTrace20240311::Client::listOnlineEvalTaskResults(shared_ptr<ListOnlineEvalTaskResultsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listOnlineEvalTaskResultsWithOptions(request, headers, runtime);
}

ListOnlineEvalTasksResponse Alibabacloud_PaiLLMTrace20240311::Client::listOnlineEvalTasksWithOptions(shared_ptr<ListOnlineEvalTasksRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    query->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->maxTime)) {
    query->insert(pair<string, string>("MaxTime", *request->maxTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->minTime)) {
    query->insert(pair<string, string>("MinTime", *request->minTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortOrder)) {
    query->insert(pair<string, string>("SortOrder", *request->sortOrder));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListOnlineEvalTasks"))},
    {"version", boost::any(string("2024-03-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/PAILLMTrace/onlineevaltasks"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListOnlineEvalTasksResponse(callApi(params, req, runtime));
}

ListOnlineEvalTasksResponse Alibabacloud_PaiLLMTrace20240311::Client::listOnlineEvalTasks(shared_ptr<ListOnlineEvalTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listOnlineEvalTasksWithOptions(request, headers, runtime);
}

ListTracesDatasResponse Alibabacloud_PaiLLMTrace20240311::Client::listTracesDatasWithOptions(shared_ptr<ListTracesDatasRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListTracesDatasShrinkRequest> request = make_shared<ListTracesDatasShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<ListTracesDatasRequestFilters>>(tmpReq->filters)) {
    request->filtersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->filters, make_shared<string>("Filters"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->spanIds)) {
    request->spanIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->spanIds, make_shared<string>("SpanIds"), make_shared<string>("simple")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->traceIds)) {
    request->traceIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->traceIds, make_shared<string>("TraceIds"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endUserId)) {
    query->insert(pair<string, string>("EndUserId", *request->endUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filtersShrink)) {
    query->insert(pair<string, string>("Filters", *request->filtersShrink));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->hasEvents)) {
    query->insert(pair<string, bool>("HasEvents", *request->hasEvents));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->hasStatusMessage)) {
    query->insert(pair<string, bool>("HasStatusMessage", *request->hasStatusMessage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->llmAppName)) {
    query->insert(pair<string, string>("LlmAppName", *request->llmAppName));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->maxDuration)) {
    query->insert(pair<string, double>("MaxDuration", *request->maxDuration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->maxTime)) {
    query->insert(pair<string, string>("MaxTime", *request->maxTime));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->minDuration)) {
    query->insert(pair<string, double>("MinDuration", *request->minDuration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->minTime)) {
    query->insert(pair<string, string>("MinTime", *request->minTime));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->opentelemetryCompatible)) {
    query->insert(pair<string, bool>("OpentelemetryCompatible", *request->opentelemetryCompatible));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerSubId)) {
    query->insert(pair<string, string>("OwnerSubId", *request->ownerSubId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortOrder)) {
    query->insert(pair<string, string>("SortOrder", *request->sortOrder));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spanIdsShrink)) {
    query->insert(pair<string, string>("SpanIds", *request->spanIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spanName)) {
    query->insert(pair<string, string>("SpanName", *request->spanName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->traceIdsShrink)) {
    query->insert(pair<string, string>("TraceIds", *request->traceIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->traceReduceMethod)) {
    query->insert(pair<string, string>("TraceReduceMethod", *request->traceReduceMethod));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTracesDatas"))},
    {"version", boost::any(string("2024-03-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/PAILLMTrace/TracesDatas"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTracesDatasResponse(callApi(params, req, runtime));
}

ListTracesDatasResponse Alibabacloud_PaiLLMTrace20240311::Client::listTracesDatas(shared_ptr<ListTracesDatasRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listTracesDatasWithOptions(request, headers, runtime);
}

StopOnlineEvalTaskResponse Alibabacloud_PaiLLMTrace20240311::Client::stopOnlineEvalTaskWithOptions(shared_ptr<string> TaskId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopOnlineEvalTask"))},
    {"version", boost::any(string("2024-03-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/PAILLMTrace/onlineevaltasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TaskId)) + string("/stop"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopOnlineEvalTaskResponse(callApi(params, req, runtime));
}

StopOnlineEvalTaskResponse Alibabacloud_PaiLLMTrace20240311::Client::stopOnlineEvalTask(shared_ptr<string> TaskId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return stopOnlineEvalTaskWithOptions(TaskId, headers, runtime);
}

UpdateOnlineEvalTaskResponse Alibabacloud_PaiLLMTrace20240311::Client::updateOnlineEvalTaskWithOptions(shared_ptr<string> TaskId,
                                                                                                       shared_ptr<UpdateOnlineEvalTaskRequest> request,
                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    body->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    body->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<EvaluationConfig>(request->evaluationConfig)) {
    body->insert(pair<string, EvaluationConfig>("EvaluationConfig", *request->evaluationConfig));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateOnlineEvalTaskRequestFilters>>(request->filters)) {
    body->insert(pair<string, vector<UpdateOnlineEvalTaskRequestFilters>>("Filters", *request->filters));
  }
  if (!Darabonba_Util::Client::isUnset<ModelConfig>(request->modelConfig)) {
    body->insert(pair<string, ModelConfig>("ModelConfig", *request->modelConfig));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->samplingFrequencyMinutes)) {
    body->insert(pair<string, long>("SamplingFrequencyMinutes", *request->samplingFrequencyMinutes));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->samplingRatio)) {
    body->insert(pair<string, long>("SamplingRatio", *request->samplingRatio));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    body->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskName)) {
    body->insert(pair<string, string>("TaskName", *request->taskName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateOnlineEvalTask"))},
    {"version", boost::any(string("2024-03-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/PAILLMTrace/onlineevaltasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TaskId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateOnlineEvalTaskResponse(callApi(params, req, runtime));
}

UpdateOnlineEvalTaskResponse Alibabacloud_PaiLLMTrace20240311::Client::updateOnlineEvalTask(shared_ptr<string> TaskId, shared_ptr<UpdateOnlineEvalTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateOnlineEvalTaskWithOptions(TaskId, request, headers, runtime);
}

