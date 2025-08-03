// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/sys_om20231230.hpp>
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

using namespace Alibabacloud_SysOM20231230;

Alibabacloud_SysOM20231230::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("sysom"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_SysOM20231230::Client::getEndpoint(shared_ptr<string> productId,
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

AuthDiagnosisResponse Alibabacloud_SysOM20231230::Client::authDiagnosisWithOptions(shared_ptr<AuthDiagnosisRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoCreateRole)) {
    body->insert(pair<string, bool>("autoCreateRole", *request->autoCreateRole));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoInstallAgent)) {
    body->insert(pair<string, bool>("autoInstallAgent", *request->autoInstallAgent));
  }
  if (!Darabonba_Util::Client::isUnset<vector<AuthDiagnosisRequestInstances>>(request->instances)) {
    body->insert(pair<string, vector<AuthDiagnosisRequestInstances>>("instances", *request->instances));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AuthDiagnosis"))},
    {"version", boost::any(string("2023-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/openapi/diagnosis/auth"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AuthDiagnosisResponse(callApi(params, req, runtime));
}

AuthDiagnosisResponse Alibabacloud_SysOM20231230::Client::authDiagnosis(shared_ptr<AuthDiagnosisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return authDiagnosisWithOptions(request, headers, runtime);
}

CheckInstanceSupportResponse Alibabacloud_SysOM20231230::Client::checkInstanceSupportWithOptions(shared_ptr<CheckInstanceSupportRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->instances)) {
    body->insert(pair<string, vector<string>>("instances", *request->instances));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    body->insert(pair<string, string>("region", *request->region));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckInstanceSupport"))},
    {"version", boost::any(string("2023-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/am/supportInstanceList/checkInstanceSupport"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckInstanceSupportResponse(callApi(params, req, runtime));
}

CheckInstanceSupportResponse Alibabacloud_SysOM20231230::Client::checkInstanceSupport(shared_ptr<CheckInstanceSupportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return checkInstanceSupportWithOptions(request, headers, runtime);
}

GenerateCopilotResponseResponse Alibabacloud_SysOM20231230::Client::generateCopilotResponseWithOptions(shared_ptr<GenerateCopilotResponseRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->llmParamString)) {
    body->insert(pair<string, string>("llmParamString", *request->llmParamString));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GenerateCopilotResponse"))},
    {"version", boost::any(string("2023-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/copilot/generate_copilot_response"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GenerateCopilotResponseResponse(callApi(params, req, runtime));
}

GenerateCopilotResponseResponse Alibabacloud_SysOM20231230::Client::generateCopilotResponse(shared_ptr<GenerateCopilotResponseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return generateCopilotResponseWithOptions(request, headers, runtime);
}

GenerateCopilotStreamResponseResponse Alibabacloud_SysOM20231230::Client::generateCopilotStreamResponseWithOptions(shared_ptr<GenerateCopilotStreamResponseRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->llmParamString)) {
    body->insert(pair<string, string>("llmParamString", *request->llmParamString));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GenerateCopilotStreamResponse"))},
    {"version", boost::any(string("2023-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/copilot/generate_copilot_stream_response"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GenerateCopilotStreamResponseResponse(callApi(params, req, runtime));
}

GenerateCopilotStreamResponseResponse Alibabacloud_SysOM20231230::Client::generateCopilotStreamResponse(shared_ptr<GenerateCopilotStreamResponseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return generateCopilotStreamResponseWithOptions(request, headers, runtime);
}

GetAIQueryResultResponse Alibabacloud_SysOM20231230::Client::getAIQueryResultWithOptions(shared_ptr<GetAIQueryResultRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->analysisId)) {
    body->insert(pair<string, string>("analysisId", *request->analysisId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAIQueryResult"))},
    {"version", boost::any(string("2023-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/app_observ/aiAnalysis/query_result"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAIQueryResultResponse(callApi(params, req, runtime));
}

GetAIQueryResultResponse Alibabacloud_SysOM20231230::Client::getAIQueryResult(shared_ptr<GetAIQueryResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getAIQueryResultWithOptions(request, headers, runtime);
}

GetAbnormalEventsCountResponse Alibabacloud_SysOM20231230::Client::getAbnormalEventsCountWithOptions(shared_ptr<GetAbnormalEventsCountRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cluster)) {
    query->insert(pair<string, string>("cluster", *request->cluster));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->end)) {
    query->insert(pair<string, double>("end", *request->end));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instance)) {
    query->insert(pair<string, string>("instance", *request->instance));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->level)) {
    query->insert(pair<string, string>("level", *request->level));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pod)) {
    query->insert(pair<string, string>("pod", *request->pod));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->showPod)) {
    query->insert(pair<string, long>("showPod", *request->showPod));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->start)) {
    query->insert(pair<string, double>("start", *request->start));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAbnormalEventsCount"))},
    {"version", boost::any(string("2023-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/openapi/cluster_health/range/abnormaly_events_count"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAbnormalEventsCountResponse(callApi(params, req, runtime));
}

GetAbnormalEventsCountResponse Alibabacloud_SysOM20231230::Client::getAbnormalEventsCount(shared_ptr<GetAbnormalEventsCountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getAbnormalEventsCountWithOptions(request, headers, runtime);
}

GetAgentResponse Alibabacloud_SysOM20231230::Client::getAgentWithOptions(shared_ptr<GetAgentRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentId)) {
    query->insert(pair<string, string>("agent_id", *request->agentId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAgent"))},
    {"version", boost::any(string("2023-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/am/agent/get_agent"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAgentResponse(callApi(params, req, runtime));
}

GetAgentResponse Alibabacloud_SysOM20231230::Client::getAgent(shared_ptr<GetAgentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getAgentWithOptions(request, headers, runtime);
}

GetAgentTaskResponse Alibabacloud_SysOM20231230::Client::getAgentTaskWithOptions(shared_ptr<GetAgentTaskRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("task_id", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAgentTask"))},
    {"version", boost::any(string("2023-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/am/agent/get_agent_task"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAgentTaskResponse(callApi(params, req, runtime));
}

GetAgentTaskResponse Alibabacloud_SysOM20231230::Client::getAgentTask(shared_ptr<GetAgentTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getAgentTaskWithOptions(request, headers, runtime);
}

GetCopilotHistoryResponse Alibabacloud_SysOM20231230::Client::getCopilotHistoryWithOptions(shared_ptr<GetCopilotHistoryRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->count)) {
    body->insert(pair<string, long>("count", *request->count));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCopilotHistory"))},
    {"version", boost::any(string("2023-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/copilot/get_copilot_history"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCopilotHistoryResponse(callApi(params, req, runtime));
}

GetCopilotHistoryResponse Alibabacloud_SysOM20231230::Client::getCopilotHistory(shared_ptr<GetCopilotHistoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getCopilotHistoryWithOptions(request, headers, runtime);
}

GetDiagnosisResultResponse Alibabacloud_SysOM20231230::Client::getDiagnosisResultWithOptions(shared_ptr<GetDiagnosisResultRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("task_id", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDiagnosisResult"))},
    {"version", boost::any(string("2023-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/openapi/diagnosis/get_diagnosis_results"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDiagnosisResultResponse(callApi(params, req, runtime));
}

GetDiagnosisResultResponse Alibabacloud_SysOM20231230::Client::getDiagnosisResult(shared_ptr<GetDiagnosisResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getDiagnosisResultWithOptions(request, headers, runtime);
}

GetHealthPercentageResponse Alibabacloud_SysOM20231230::Client::getHealthPercentageWithOptions(shared_ptr<GetHealthPercentageRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cluster)) {
    query->insert(pair<string, string>("cluster", *request->cluster));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->end)) {
    query->insert(pair<string, double>("end", *request->end));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instance)) {
    query->insert(pair<string, string>("instance", *request->instance));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->start)) {
    query->insert(pair<string, double>("start", *request->start));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetHealthPercentage"))},
    {"version", boost::any(string("2023-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/openapi/cluster_health/range/health_percentage"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetHealthPercentageResponse(callApi(params, req, runtime));
}

GetHealthPercentageResponse Alibabacloud_SysOM20231230::Client::getHealthPercentage(shared_ptr<GetHealthPercentageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getHealthPercentageWithOptions(request, headers, runtime);
}

GetHostCountResponse Alibabacloud_SysOM20231230::Client::getHostCountWithOptions(shared_ptr<GetHostCountRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cluster)) {
    query->insert(pair<string, string>("cluster", *request->cluster));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->end)) {
    query->insert(pair<string, double>("end", *request->end));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instance)) {
    query->insert(pair<string, string>("instance", *request->instance));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->start)) {
    query->insert(pair<string, double>("start", *request->start));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetHostCount"))},
    {"version", boost::any(string("2023-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/openapi/cluster_health/range/host_count"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetHostCountResponse(callApi(params, req, runtime));
}

GetHostCountResponse Alibabacloud_SysOM20231230::Client::getHostCount(shared_ptr<GetHostCountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getHostCountWithOptions(request, headers, runtime);
}

GetHotSpotUniqListResponse Alibabacloud_SysOM20231230::Client::getHotSpotUniqListWithOptions(shared_ptr<GetHotSpotUniqListRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->begEnd)) {
    body->insert(pair<string, long>("beg_end", *request->begEnd));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->begStart)) {
    body->insert(pair<string, long>("beg_start", *request->begStart));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instance)) {
    body->insert(pair<string, string>("instance", *request->instance));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pid)) {
    body->insert(pair<string, long>("pid", *request->pid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->table)) {
    body->insert(pair<string, string>("table", *request->table));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uniq)) {
    body->insert(pair<string, string>("uniq", *request->uniq));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetHotSpotUniqList"))},
    {"version", boost::any(string("2023-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/livetrace_proxy/hotspot_uniq_list"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetHotSpotUniqListResponse(callApi(params, req, runtime));
}

GetHotSpotUniqListResponse Alibabacloud_SysOM20231230::Client::getHotSpotUniqList(shared_ptr<GetHotSpotUniqListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getHotSpotUniqListWithOptions(request, headers, runtime);
}

GetHotspotAnalysisResponse Alibabacloud_SysOM20231230::Client::getHotspotAnalysisWithOptions(shared_ptr<GetHotspotAnalysisRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appType)) {
    body->insert(pair<string, string>("appType", *request->appType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->begEnd)) {
    body->insert(pair<string, long>("beg_end", *request->begEnd));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->begStart)) {
    body->insert(pair<string, long>("beg_start", *request->begStart));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instance)) {
    body->insert(pair<string, string>("instance", *request->instance));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pid)) {
    body->insert(pair<string, long>("pid", *request->pid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->table)) {
    body->insert(pair<string, string>("table", *request->table));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetHotspotAnalysis"))},
    {"version", boost::any(string("2023-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/openapi/proxy/post/livetrace_hotspot_analysis"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetHotspotAnalysisResponse(callApi(params, req, runtime));
}

GetHotspotAnalysisResponse Alibabacloud_SysOM20231230::Client::getHotspotAnalysis(shared_ptr<GetHotspotAnalysisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getHotspotAnalysisWithOptions(request, headers, runtime);
}

GetHotspotCompareResponse Alibabacloud_SysOM20231230::Client::getHotspotCompareWithOptions(shared_ptr<GetHotspotCompareRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->beg1End)) {
    body->insert(pair<string, long>("beg1_end", *request->beg1End));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->beg1Start)) {
    body->insert(pair<string, long>("beg1_start", *request->beg1Start));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->beg2End)) {
    body->insert(pair<string, long>("beg2_end", *request->beg2End));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->beg2Start)) {
    body->insert(pair<string, long>("beg2_start", *request->beg2Start));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hotType)) {
    body->insert(pair<string, string>("hot_type", *request->hotType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instance1)) {
    body->insert(pair<string, string>("instance1", *request->instance1));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instance2)) {
    body->insert(pair<string, string>("instance2", *request->instance2));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pid1)) {
    body->insert(pair<string, long>("pid1", *request->pid1));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pid2)) {
    body->insert(pair<string, long>("pid2", *request->pid2));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->table)) {
    body->insert(pair<string, string>("table", *request->table));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetHotspotCompare"))},
    {"version", boost::any(string("2023-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/openapi/proxy/post/livetrace_hotspot_compare"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetHotspotCompareResponse(callApi(params, req, runtime));
}

GetHotspotCompareResponse Alibabacloud_SysOM20231230::Client::getHotspotCompare(shared_ptr<GetHotspotCompareRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getHotspotCompareWithOptions(request, headers, runtime);
}

GetHotspotInstanceListResponse Alibabacloud_SysOM20231230::Client::getHotspotInstanceListWithOptions(shared_ptr<GetHotspotInstanceListRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->begEnd)) {
    body->insert(pair<string, long>("beg_end", *request->begEnd));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->begStart)) {
    body->insert(pair<string, long>("beg_start", *request->begStart));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->table)) {
    body->insert(pair<string, string>("table", *request->table));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetHotspotInstanceList"))},
    {"version", boost::any(string("2023-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/openapi/proxy/post/livetrace_hotspot_instance_list"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetHotspotInstanceListResponse(callApi(params, req, runtime));
}

GetHotspotInstanceListResponse Alibabacloud_SysOM20231230::Client::getHotspotInstanceList(shared_ptr<GetHotspotInstanceListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getHotspotInstanceListWithOptions(request, headers, runtime);
}

GetHotspotPidListResponse Alibabacloud_SysOM20231230::Client::getHotspotPidListWithOptions(shared_ptr<GetHotspotPidListRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->begEnd)) {
    body->insert(pair<string, long>("beg_end", *request->begEnd));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->begStart)) {
    body->insert(pair<string, long>("beg_start", *request->begStart));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instance)) {
    body->insert(pair<string, string>("instance", *request->instance));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->table)) {
    body->insert(pair<string, string>("table", *request->table));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetHotspotPidList"))},
    {"version", boost::any(string("2023-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/openapi/proxy/post/livetrace_hotspot_pid_list"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetHotspotPidListResponse(callApi(params, req, runtime));
}

GetHotspotPidListResponse Alibabacloud_SysOM20231230::Client::getHotspotPidList(shared_ptr<GetHotspotPidListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getHotspotPidListWithOptions(request, headers, runtime);
}

GetHotspotTrackingResponse Alibabacloud_SysOM20231230::Client::getHotspotTrackingWithOptions(shared_ptr<GetHotspotTrackingRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->begEnd)) {
    body->insert(pair<string, long>("beg_end", *request->begEnd));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->begStart)) {
    body->insert(pair<string, long>("beg_start", *request->begStart));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hotType)) {
    body->insert(pair<string, string>("hot_type", *request->hotType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instance)) {
    body->insert(pair<string, string>("instance", *request->instance));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pid)) {
    body->insert(pair<string, long>("pid", *request->pid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->table)) {
    body->insert(pair<string, string>("table", *request->table));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetHotspotTracking"))},
    {"version", boost::any(string("2023-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/openapi/proxy/post/livetrace_hotspot_tracking"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetHotspotTrackingResponse(callApi(params, req, runtime));
}

GetHotspotTrackingResponse Alibabacloud_SysOM20231230::Client::getHotspotTracking(shared_ptr<GetHotspotTrackingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getHotspotTrackingWithOptions(request, headers, runtime);
}

GetInstantScoreResponse Alibabacloud_SysOM20231230::Client::getInstantScoreWithOptions(shared_ptr<GetInstantScoreRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cluster)) {
    query->insert(pair<string, string>("cluster", *request->cluster));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instance)) {
    query->insert(pair<string, string>("instance", *request->instance));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetInstantScore"))},
    {"version", boost::any(string("2023-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/openapi/cluster_health/instant/score"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetInstantScoreResponse(callApi(params, req, runtime));
}

GetInstantScoreResponse Alibabacloud_SysOM20231230::Client::getInstantScore(shared_ptr<GetInstantScoreRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getInstantScoreWithOptions(request, headers, runtime);
}

GetListRecordResponse Alibabacloud_SysOM20231230::Client::getListRecordWithOptions(shared_ptr<GetListRecordRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->current)) {
    query->insert(pair<string, long>("current", *request->current));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetListRecord"))},
    {"version", boost::any(string("2023-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/app_observ/aiAnalysis/list_record"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetListRecordResponse(callApi(params, req, runtime));
}

GetListRecordResponse Alibabacloud_SysOM20231230::Client::getListRecord(shared_ptr<GetListRecordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getListRecordWithOptions(request, headers, runtime);
}

GetProblemPercentageResponse Alibabacloud_SysOM20231230::Client::getProblemPercentageWithOptions(shared_ptr<GetProblemPercentageRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cluster)) {
    query->insert(pair<string, string>("cluster", *request->cluster));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->end)) {
    query->insert(pair<string, double>("end", *request->end));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instance)) {
    query->insert(pair<string, string>("instance", *request->instance));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->start)) {
    query->insert(pair<string, double>("start", *request->start));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetProblemPercentage"))},
    {"version", boost::any(string("2023-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/openapi/cluster_health/range/problem_percentage"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetProblemPercentageResponse(callApi(params, req, runtime));
}

GetProblemPercentageResponse Alibabacloud_SysOM20231230::Client::getProblemPercentage(shared_ptr<GetProblemPercentageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getProblemPercentageWithOptions(request, headers, runtime);
}

GetRangeScoreResponse Alibabacloud_SysOM20231230::Client::getRangeScoreWithOptions(shared_ptr<GetRangeScoreRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cluster)) {
    query->insert(pair<string, string>("cluster", *request->cluster));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->end)) {
    query->insert(pair<string, double>("end", *request->end));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instance)) {
    query->insert(pair<string, string>("instance", *request->instance));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->start)) {
    query->insert(pair<string, double>("start", *request->start));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRangeScore"))},
    {"version", boost::any(string("2023-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/openapi/cluster_health/range/score"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRangeScoreResponse(callApi(params, req, runtime));
}

GetRangeScoreResponse Alibabacloud_SysOM20231230::Client::getRangeScore(shared_ptr<GetRangeScoreRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getRangeScoreWithOptions(request, headers, runtime);
}

GetResourcesResponse Alibabacloud_SysOM20231230::Client::getResourcesWithOptions(shared_ptr<GetResourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cluster)) {
    query->insert(pair<string, string>("cluster", *request->cluster));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instance)) {
    query->insert(pair<string, string>("instance", *request->instance));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetResources"))},
    {"version", boost::any(string("2023-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/openapi/cluster_health/instant/resource"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetResourcesResponse(callApi(params, req, runtime));
}

GetResourcesResponse Alibabacloud_SysOM20231230::Client::getResources(shared_ptr<GetResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getResourcesWithOptions(request, headers, runtime);
}

GetServiceFuncStatusResponse Alibabacloud_SysOM20231230::Client::getServiceFuncStatusWithOptions(shared_ptr<GetServiceFuncStatusRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetServiceFuncStatusShrinkRequest> request = make_shared<GetServiceFuncStatusShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<GetServiceFuncStatusRequestParams>(tmpReq->params)) {
    request->paramsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->params, make_shared<string>("params"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channel)) {
    query->insert(pair<string, string>("channel", *request->channel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->paramsShrink)) {
    query->insert(pair<string, string>("params", *request->paramsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    query->insert(pair<string, string>("service_name", *request->serviceName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetServiceFuncStatus"))},
    {"version", boost::any(string("2023-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/func-switch/get-service-func-status"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetServiceFuncStatusResponse(callApi(params, req, runtime));
}

GetServiceFuncStatusResponse Alibabacloud_SysOM20231230::Client::getServiceFuncStatus(shared_ptr<GetServiceFuncStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getServiceFuncStatusWithOptions(request, headers, runtime);
}

InitialSysomResponse Alibabacloud_SysOM20231230::Client::initialSysomWithOptions(shared_ptr<InitialSysomRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->checkOnly)) {
    body->insert(pair<string, bool>("check_only", *request->checkOnly));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    body->insert(pair<string, string>("source", *request->source));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InitialSysom"))},
    {"version", boost::any(string("2023-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/openapi/initial"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InitialSysomResponse(callApi(params, req, runtime));
}

InitialSysomResponse Alibabacloud_SysOM20231230::Client::initialSysom(shared_ptr<InitialSysomRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return initialSysomWithOptions(request, headers, runtime);
}

InstallAgentResponse Alibabacloud_SysOM20231230::Client::installAgentWithOptions(shared_ptr<InstallAgentRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentId)) {
    body->insert(pair<string, string>("agent_id", *request->agentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->agentVersion)) {
    body->insert(pair<string, string>("agent_version", *request->agentVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->installType)) {
    body->insert(pair<string, string>("install_type", *request->installType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<InstallAgentRequestInstances>>(request->instances)) {
    body->insert(pair<string, vector<InstallAgentRequestInstances>>("instances", *request->instances));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InstallAgent"))},
    {"version", boost::any(string("2023-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/am/agent/install_agent"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InstallAgentResponse(callApi(params, req, runtime));
}

InstallAgentResponse Alibabacloud_SysOM20231230::Client::installAgent(shared_ptr<InstallAgentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return installAgentWithOptions(request, headers, runtime);
}

InstallAgentForClusterResponse Alibabacloud_SysOM20231230::Client::installAgentForClusterWithOptions(shared_ptr<InstallAgentForClusterRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentId)) {
    body->insert(pair<string, string>("agent_id", *request->agentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->agentVersion)) {
    body->insert(pair<string, string>("agent_version", *request->agentVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    body->insert(pair<string, string>("cluster_id", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configId)) {
    body->insert(pair<string, string>("config_id", *request->configId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->grayscaleConfig)) {
    body->insert(pair<string, string>("grayscale_config", *request->grayscaleConfig));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InstallAgentForCluster"))},
    {"version", boost::any(string("2023-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/am/agent/install_agent_by_cluster"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InstallAgentForClusterResponse(callApi(params, req, runtime));
}

InstallAgentForClusterResponse Alibabacloud_SysOM20231230::Client::installAgentForCluster(shared_ptr<InstallAgentForClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return installAgentForClusterWithOptions(request, headers, runtime);
}

InvokeAnomalyDiagnosisResponse Alibabacloud_SysOM20231230::Client::invokeAnomalyDiagnosisWithOptions(shared_ptr<InvokeAnomalyDiagnosisRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->uuid)) {
    query->insert(pair<string, string>("uuid", *request->uuid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InvokeAnomalyDiagnosis"))},
    {"version", boost::any(string("2023-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/openapi/cluster_health/diagnosis/invoke_anomaly_diagnose"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InvokeAnomalyDiagnosisResponse(callApi(params, req, runtime));
}

InvokeAnomalyDiagnosisResponse Alibabacloud_SysOM20231230::Client::invokeAnomalyDiagnosis(shared_ptr<InvokeAnomalyDiagnosisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return invokeAnomalyDiagnosisWithOptions(request, headers, runtime);
}

InvokeDiagnosisResponse Alibabacloud_SysOM20231230::Client::invokeDiagnosisWithOptions(shared_ptr<InvokeDiagnosisRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channel)) {
    body->insert(pair<string, string>("channel", *request->channel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->params)) {
    body->insert(pair<string, string>("params", *request->params));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    body->insert(pair<string, string>("service_name", *request->serviceName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InvokeDiagnosis"))},
    {"version", boost::any(string("2023-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/openapi/diagnosis/invoke_diagnosis"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InvokeDiagnosisResponse(callApi(params, req, runtime));
}

InvokeDiagnosisResponse Alibabacloud_SysOM20231230::Client::invokeDiagnosis(shared_ptr<InvokeDiagnosisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return invokeDiagnosisWithOptions(request, headers, runtime);
}

ListAbnormalyEventsResponse Alibabacloud_SysOM20231230::Client::listAbnormalyEventsWithOptions(shared_ptr<ListAbnormalyEventsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cluster)) {
    query->insert(pair<string, string>("cluster", *request->cluster));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->current)) {
    query->insert(pair<string, long>("current", *request->current));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->end)) {
    query->insert(pair<string, double>("end", *request->end));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->event)) {
    query->insert(pair<string, string>("event", *request->event));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instance)) {
    query->insert(pair<string, string>("instance", *request->instance));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->level)) {
    query->insert(pair<string, string>("level", *request->level));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pod)) {
    query->insert(pair<string, string>("pod", *request->pod));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->showPod)) {
    query->insert(pair<string, long>("showPod", *request->showPod));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->start)) {
    query->insert(pair<string, double>("start", *request->start));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAbnormalyEvents"))},
    {"version", boost::any(string("2023-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/openapi/cluster_health/range/abnormaly_events"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAbnormalyEventsResponse(callApi(params, req, runtime));
}

ListAbnormalyEventsResponse Alibabacloud_SysOM20231230::Client::listAbnormalyEvents(shared_ptr<ListAbnormalyEventsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listAbnormalyEventsWithOptions(request, headers, runtime);
}

ListAgentInstallRecordsResponse Alibabacloud_SysOM20231230::Client::listAgentInstallRecordsWithOptions(shared_ptr<ListAgentInstallRecordsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->current)) {
    query->insert(pair<string, long>("current", *request->current));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("instance_id", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pluginId)) {
    query->insert(pair<string, string>("plugin_id", *request->pluginId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pluginVersion)) {
    query->insert(pair<string, string>("plugin_version", *request->pluginVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAgentInstallRecords"))},
    {"version", boost::any(string("2023-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/am/agent/list_agent_install_list"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAgentInstallRecordsResponse(callApi(params, req, runtime));
}

ListAgentInstallRecordsResponse Alibabacloud_SysOM20231230::Client::listAgentInstallRecords(shared_ptr<ListAgentInstallRecordsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listAgentInstallRecordsWithOptions(request, headers, runtime);
}

ListAgentsResponse Alibabacloud_SysOM20231230::Client::listAgentsWithOptions(shared_ptr<ListAgentsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->current)) {
    query->insert(pair<string, long>("current", *request->current));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAgents"))},
    {"version", boost::any(string("2023-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/am/agent/list_agents"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAgentsResponse(callApi(params, req, runtime));
}

ListAgentsResponse Alibabacloud_SysOM20231230::Client::listAgents(shared_ptr<ListAgentsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listAgentsWithOptions(request, headers, runtime);
}

ListClusterAgentInstallRecordsResponse Alibabacloud_SysOM20231230::Client::listClusterAgentInstallRecordsWithOptions(shared_ptr<ListClusterAgentInstallRecordsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentConfigId)) {
    query->insert(pair<string, string>("agent_config_id", *request->agentConfigId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("cluster_id", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->current)) {
    query->insert(pair<string, long>("current", *request->current));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pluginId)) {
    query->insert(pair<string, string>("plugin_id", *request->pluginId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pluginVersion)) {
    query->insert(pair<string, string>("plugin_version", *request->pluginVersion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListClusterAgentInstallRecords"))},
    {"version", boost::any(string("2023-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/am/agent/list_cluster_agent_install_list"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListClusterAgentInstallRecordsResponse(callApi(params, req, runtime));
}

ListClusterAgentInstallRecordsResponse Alibabacloud_SysOM20231230::Client::listClusterAgentInstallRecords(shared_ptr<ListClusterAgentInstallRecordsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listClusterAgentInstallRecordsWithOptions(request, headers, runtime);
}

ListClustersResponse Alibabacloud_SysOM20231230::Client::listClustersWithOptions(shared_ptr<ListClustersRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("cluster_id", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterStatus)) {
    query->insert(pair<string, string>("cluster_status", *request->clusterStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterType)) {
    query->insert(pair<string, string>("cluster_type", *request->clusterType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->current)) {
    query->insert(pair<string, long>("current", *request->current));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListClusters"))},
    {"version", boost::any(string("2023-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/am/cluster/list_clusters"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListClustersResponse(callApi(params, req, runtime));
}

ListClustersResponse Alibabacloud_SysOM20231230::Client::listClusters(shared_ptr<ListClustersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listClustersWithOptions(request, headers, runtime);
}

ListDiagnosisResponse Alibabacloud_SysOM20231230::Client::listDiagnosisWithOptions(shared_ptr<ListDiagnosisRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->current)) {
    query->insert(pair<string, long>("current", *request->current));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->params)) {
    query->insert(pair<string, string>("params", *request->params));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    query->insert(pair<string, string>("service_name", *request->serviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDiagnosis"))},
    {"version", boost::any(string("2023-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/openapi/diagnosis/list_diagnosis"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDiagnosisResponse(callApi(params, req, runtime));
}

ListDiagnosisResponse Alibabacloud_SysOM20231230::Client::listDiagnosis(shared_ptr<ListDiagnosisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listDiagnosisWithOptions(request, headers, runtime);
}

ListInstanceHealthResponse Alibabacloud_SysOM20231230::Client::listInstanceHealthWithOptions(shared_ptr<ListInstanceHealthRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cluster)) {
    query->insert(pair<string, string>("cluster", *request->cluster));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->current)) {
    query->insert(pair<string, long>("current", *request->current));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->end)) {
    query->insert(pair<string, double>("end", *request->end));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instance)) {
    query->insert(pair<string, string>("instance", *request->instance));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->start)) {
    query->insert(pair<string, double>("start", *request->start));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListInstanceHealth"))},
    {"version", boost::any(string("2023-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/openapi/cluster_health/range/instance_health_list"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListInstanceHealthResponse(callApi(params, req, runtime));
}

ListInstanceHealthResponse Alibabacloud_SysOM20231230::Client::listInstanceHealth(shared_ptr<ListInstanceHealthRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listInstanceHealthWithOptions(request, headers, runtime);
}

ListInstanceStatusResponse Alibabacloud_SysOM20231230::Client::listInstanceStatusWithOptions(shared_ptr<ListInstanceStatusRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->current)) {
    query->insert(pair<string, long>("current", *request->current));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instance)) {
    query->insert(pair<string, string>("instance", *request->instance));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListInstanceStatus"))},
    {"version", boost::any(string("2023-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/am/instance/list_instance_status"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListInstanceStatusResponse(callApi(params, req, runtime));
}

ListInstanceStatusResponse Alibabacloud_SysOM20231230::Client::listInstanceStatus(shared_ptr<ListInstanceStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listInstanceStatusWithOptions(request, headers, runtime);
}

ListInstancesResponse Alibabacloud_SysOM20231230::Client::listInstancesWithOptions(shared_ptr<ListInstancesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("cluster_id", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->current)) {
    query->insert(pair<string, long>("current", *request->current));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instance)) {
    query->insert(pair<string, string>("instance", *request->instance));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListInstances"))},
    {"version", boost::any(string("2023-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/am/instance/list_instances"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListInstancesResponse(callApi(params, req, runtime));
}

ListInstancesResponse Alibabacloud_SysOM20231230::Client::listInstances(shared_ptr<ListInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listInstancesWithOptions(request, headers, runtime);
}

ListInstancesEcsInfoListResponse Alibabacloud_SysOM20231230::Client::listInstancesEcsInfoListWithOptions(shared_ptr<ListInstancesEcsInfoListRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->infoType)) {
    query->insert(pair<string, string>("info_type", *request->infoType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("instance_id", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->managedType)) {
    query->insert(pair<string, string>("managed_type", *request->managedType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pluginId)) {
    query->insert(pair<string, string>("plugin_id", *request->pluginId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("region", *request->region));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListInstancesEcsInfoList"))},
    {"version", boost::any(string("2023-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/am/instance/listInstancesEcsInfoList"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListInstancesEcsInfoListResponse(callApi(params, req, runtime));
}

ListInstancesEcsInfoListResponse Alibabacloud_SysOM20231230::Client::listInstancesEcsInfoList(shared_ptr<ListInstancesEcsInfoListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listInstancesEcsInfoListWithOptions(request, headers, runtime);
}

ListInstancesWithEcsInfoResponse Alibabacloud_SysOM20231230::Client::listInstancesWithEcsInfoWithOptions(shared_ptr<ListInstancesWithEcsInfoRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListInstancesWithEcsInfoShrinkRequest> request = make_shared<ListInstancesWithEcsInfoShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListInstancesWithEcsInfoRequestInstanceTag>(tmpReq->instanceTag)) {
    request->instanceTagShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->instanceTag, make_shared<string>("instance_tag"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->current)) {
    query->insert(pair<string, long>("current", *request->current));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthStatus)) {
    query->insert(pair<string, string>("health_status", *request->healthStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("instance_id", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceIdName)) {
    query->insert(pair<string, string>("instance_id_name", *request->instanceIdName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceName)) {
    query->insert(pair<string, string>("instance_name", *request->instanceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceTagShrink)) {
    query->insert(pair<string, string>("instance_tag", *request->instanceTagShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->isManaged)) {
    query->insert(pair<string, long>("is_managed", *request->isManaged));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->osName)) {
    query->insert(pair<string, string>("os_name", *request->osName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->privateIp)) {
    query->insert(pair<string, string>("private_ip", *request->privateIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->publicIp)) {
    query->insert(pair<string, string>("public_ip", *request->publicIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("resource_group_id", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupIdName)) {
    query->insert(pair<string, string>("resource_group_id_name", *request->resourceGroupIdName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupName)) {
    query->insert(pair<string, string>("resource_group_name", *request->resourceGroupName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListInstancesWithEcsInfo"))},
    {"version", boost::any(string("2023-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/am/instance/listInstancesWithEcsInfo"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListInstancesWithEcsInfoResponse(callApi(params, req, runtime));
}

ListInstancesWithEcsInfoResponse Alibabacloud_SysOM20231230::Client::listInstancesWithEcsInfo(shared_ptr<ListInstancesWithEcsInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listInstancesWithEcsInfoWithOptions(request, headers, runtime);
}

ListPluginsInstancesResponse Alibabacloud_SysOM20231230::Client::listPluginsInstancesWithOptions(shared_ptr<ListPluginsInstancesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->current)) {
    query->insert(pair<string, long>("current", *request->current));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceIdName)) {
    query->insert(pair<string, string>("instance_id_name", *request->instanceIdName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceTag)) {
    query->insert(pair<string, string>("instance_tag", *request->instanceTag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operationType)) {
    query->insert(pair<string, string>("operation_type", *request->operationType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pluginId)) {
    query->insert(pair<string, string>("plugin_id", *request->pluginId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("region", *request->region));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPluginsInstances"))},
    {"version", boost::any(string("2023-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/am/agent/listPluginsInstances"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListPluginsInstancesResponse(callApi(params, req, runtime));
}

ListPluginsInstancesResponse Alibabacloud_SysOM20231230::Client::listPluginsInstances(shared_ptr<ListPluginsInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listPluginsInstancesWithOptions(request, headers, runtime);
}

ListPodsOfInstanceResponse Alibabacloud_SysOM20231230::Client::listPodsOfInstanceWithOptions(shared_ptr<ListPodsOfInstanceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("cluster_id", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->current)) {
    query->insert(pair<string, long>("current", *request->current));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instance)) {
    query->insert(pair<string, string>("instance", *request->instance));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPodsOfInstance"))},
    {"version", boost::any(string("2023-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/am/instance/list_pod_of_instance"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListPodsOfInstanceResponse(callApi(params, req, runtime));
}

ListPodsOfInstanceResponse Alibabacloud_SysOM20231230::Client::listPodsOfInstance(shared_ptr<ListPodsOfInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listPodsOfInstanceWithOptions(request, headers, runtime);
}

ListRegionsResponse Alibabacloud_SysOM20231230::Client::listRegionsWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRegions"))},
    {"version", boost::any(string("2023-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/am/instance/list_regions"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListRegionsResponse(callApi(params, req, runtime));
}

ListRegionsResponse Alibabacloud_SysOM20231230::Client::listRegions() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listRegionsWithOptions(headers, runtime);
}

StartAIAnalysisResponse Alibabacloud_SysOM20231230::Client::startAIAnalysisWithOptions(shared_ptr<StartAIAnalysisRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->analysisTool)) {
    body->insert(pair<string, string>("analysisTool", *request->analysisTool));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->analysisParams)) {
    body->insert(pair<string, vector<string>>("analysis_params", *request->analysisParams));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channel)) {
    body->insert(pair<string, string>("channel", *request->channel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->comms)) {
    body->insert(pair<string, string>("comms", *request->comms));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createdBy)) {
    body->insert(pair<string, string>("created_by", *request->createdBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instance)) {
    body->insert(pair<string, string>("instance", *request->instance));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceType)) {
    body->insert(pair<string, string>("instance_type", *request->instanceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iterationFunc)) {
    body->insert(pair<string, string>("iteration_func", *request->iterationFunc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iterationMod)) {
    body->insert(pair<string, string>("iteration_mod", *request->iterationMod));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->iterationRange)) {
    body->insert(pair<string, vector<long>>("iteration_range", *request->iterationRange));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pids)) {
    body->insert(pair<string, string>("pids", *request->pids));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    body->insert(pair<string, string>("region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeout)) {
    body->insert(pair<string, long>("timeout", *request->timeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uid)) {
    body->insert(pair<string, string>("uid", *request->uid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartAIAnalysis"))},
    {"version", boost::any(string("2023-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/openapi/proxy/post/start_ai_analysis"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartAIAnalysisResponse(callApi(params, req, runtime));
}

StartAIAnalysisResponse Alibabacloud_SysOM20231230::Client::startAIAnalysis(shared_ptr<StartAIAnalysisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return startAIAnalysisWithOptions(request, headers, runtime);
}

StartAIDiffAnalysisResponse Alibabacloud_SysOM20231230::Client::startAIDiffAnalysisWithOptions(shared_ptr<StartAIDiffAnalysisRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<StartAIDiffAnalysisRequestTask1>(request->task1)) {
    body->insert(pair<string, StartAIDiffAnalysisRequestTask1>("task1", *request->task1));
  }
  if (!Darabonba_Util::Client::isUnset<StartAIDiffAnalysisRequestTask2>(request->task2)) {
    body->insert(pair<string, StartAIDiffAnalysisRequestTask2>("task2", *request->task2));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartAIDiffAnalysis"))},
    {"version", boost::any(string("2023-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/appObserv/aiAnalysis/diffAnalysis"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartAIDiffAnalysisResponse(callApi(params, req, runtime));
}

StartAIDiffAnalysisResponse Alibabacloud_SysOM20231230::Client::startAIDiffAnalysis(shared_ptr<StartAIDiffAnalysisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return startAIDiffAnalysisWithOptions(request, headers, runtime);
}

UninstallAgentResponse Alibabacloud_SysOM20231230::Client::uninstallAgentWithOptions(shared_ptr<UninstallAgentRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentId)) {
    body->insert(pair<string, string>("agent_id", *request->agentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->agentVersion)) {
    body->insert(pair<string, string>("agent_version", *request->agentVersion));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UninstallAgentRequestInstances>>(request->instances)) {
    body->insert(pair<string, vector<UninstallAgentRequestInstances>>("instances", *request->instances));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UninstallAgent"))},
    {"version", boost::any(string("2023-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/am/agent/uninstall_agent"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UninstallAgentResponse(callApi(params, req, runtime));
}

UninstallAgentResponse Alibabacloud_SysOM20231230::Client::uninstallAgent(shared_ptr<UninstallAgentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return uninstallAgentWithOptions(request, headers, runtime);
}

UninstallAgentForClusterResponse Alibabacloud_SysOM20231230::Client::uninstallAgentForClusterWithOptions(shared_ptr<UninstallAgentForClusterRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentId)) {
    body->insert(pair<string, string>("agent_id", *request->agentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->agentVersion)) {
    body->insert(pair<string, string>("agent_version", *request->agentVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    body->insert(pair<string, string>("cluster_id", *request->clusterId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UninstallAgentForCluster"))},
    {"version", boost::any(string("2023-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/am/agent/uninstall_agent_by_cluster"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UninstallAgentForClusterResponse(callApi(params, req, runtime));
}

UninstallAgentForClusterResponse Alibabacloud_SysOM20231230::Client::uninstallAgentForCluster(shared_ptr<UninstallAgentForClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return uninstallAgentForClusterWithOptions(request, headers, runtime);
}

UpdateEventsAttentionResponse Alibabacloud_SysOM20231230::Client::updateEventsAttentionWithOptions(shared_ptr<UpdateEventsAttentionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->mode)) {
    body->insert(pair<string, long>("mode", *request->mode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->range)) {
    body->insert(pair<string, string>("range", *request->range));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uuid)) {
    body->insert(pair<string, string>("uuid", *request->uuid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateEventsAttention"))},
    {"version", boost::any(string("2023-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/openapi/proxy/post/cluster_update_events_attention"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateEventsAttentionResponse(callApi(params, req, runtime));
}

UpdateEventsAttentionResponse Alibabacloud_SysOM20231230::Client::updateEventsAttention(shared_ptr<UpdateEventsAttentionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateEventsAttentionWithOptions(request, headers, runtime);
}

UpdateFuncSwitchRecordResponse Alibabacloud_SysOM20231230::Client::updateFuncSwitchRecordWithOptions(shared_ptr<UpdateFuncSwitchRecordRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateFuncSwitchRecordShrinkRequest> request = make_shared<UpdateFuncSwitchRecordShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdateFuncSwitchRecordRequestParams>(tmpReq->params)) {
    request->paramsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->params, make_shared<string>("params"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channel)) {
    query->insert(pair<string, string>("channel", *request->channel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->paramsShrink)) {
    query->insert(pair<string, string>("params", *request->paramsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    query->insert(pair<string, string>("service_name", *request->serviceName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateFuncSwitchRecord"))},
    {"version", boost::any(string("2023-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/func-switch/update-service-func-switch"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateFuncSwitchRecordResponse(callApi(params, req, runtime));
}

UpdateFuncSwitchRecordResponse Alibabacloud_SysOM20231230::Client::updateFuncSwitchRecord(shared_ptr<UpdateFuncSwitchRecordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateFuncSwitchRecordWithOptions(request, headers, runtime);
}

UpgradeAgentResponse Alibabacloud_SysOM20231230::Client::upgradeAgentWithOptions(shared_ptr<UpgradeAgentRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentId)) {
    body->insert(pair<string, string>("agent_id", *request->agentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->agentVersion)) {
    body->insert(pair<string, string>("agent_version", *request->agentVersion));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpgradeAgentRequestInstances>>(request->instances)) {
    body->insert(pair<string, vector<UpgradeAgentRequestInstances>>("instances", *request->instances));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpgradeAgent"))},
    {"version", boost::any(string("2023-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/am/agent/upgrade_agent"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpgradeAgentResponse(callApi(params, req, runtime));
}

UpgradeAgentResponse Alibabacloud_SysOM20231230::Client::upgradeAgent(shared_ptr<UpgradeAgentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return upgradeAgentWithOptions(request, headers, runtime);
}

UpgradeAgentForClusterResponse Alibabacloud_SysOM20231230::Client::upgradeAgentForClusterWithOptions(shared_ptr<UpgradeAgentForClusterRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentId)) {
    body->insert(pair<string, string>("agent_id", *request->agentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->agentVersion)) {
    body->insert(pair<string, string>("agent_version", *request->agentVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    body->insert(pair<string, string>("cluster_id", *request->clusterId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpgradeAgentForCluster"))},
    {"version", boost::any(string("2023-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/am/agent/upgrade_agent_by_cluster"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpgradeAgentForClusterResponse(callApi(params, req, runtime));
}

UpgradeAgentForClusterResponse Alibabacloud_SysOM20231230::Client::upgradeAgentForCluster(shared_ptr<UpgradeAgentForClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return upgradeAgentForClusterWithOptions(request, headers, runtime);
}

