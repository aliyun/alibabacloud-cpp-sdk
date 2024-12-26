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

StartAIAnalysisResponse Alibabacloud_SysOM20231230::Client::startAIAnalysisWithOptions(shared_ptr<StartAIAnalysisRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channel)) {
    body->insert(pair<string, string>("channel", *request->channel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->comms)) {
    body->insert(pair<string, string>("comms", *request->comms));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instance)) {
    body->insert(pair<string, string>("instance", *request->instance));
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

