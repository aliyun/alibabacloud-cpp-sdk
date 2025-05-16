// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/ai_content_20240611.hpp>
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

using namespace Alibabacloud_AiContent20240611;

Alibabacloud_AiContent20240611::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("aicontent"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_AiContent20240611::Client::getEndpoint(shared_ptr<string> productId,
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

AITeacherExpansionPracticeTaskGenerateResponse Alibabacloud_AiContent20240611::Client::aITeacherExpansionPracticeTaskGenerateWithOptions(shared_ptr<AITeacherExpansionPracticeTaskGenerateRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->grade)) {
    body->insert(pair<string, string>("grade", *request->grade));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->keySentences)) {
    body->insert(pair<string, vector<string>>("keySentences", *request->keySentences));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->keyWords)) {
    body->insert(pair<string, vector<string>>("keyWords", *request->keyWords));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->learningObject)) {
    body->insert(pair<string, string>("learningObject", *request->learningObject));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->textContent)) {
    body->insert(pair<string, string>("textContent", *request->textContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->textbook)) {
    body->insert(pair<string, string>("textbook", *request->textbook));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topic)) {
    body->insert(pair<string, string>("topic", *request->topic));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("userId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AITeacherExpansionPracticeTaskGenerate"))},
    {"version", boost::any(string("20240611"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/aiteacher/expansionPractice/generateTask"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AITeacherExpansionPracticeTaskGenerateResponse(callApi(params, req, runtime));
}

AITeacherExpansionPracticeTaskGenerateResponse Alibabacloud_AiContent20240611::Client::aITeacherExpansionPracticeTaskGenerate(shared_ptr<AITeacherExpansionPracticeTaskGenerateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return aITeacherExpansionPracticeTaskGenerateWithOptions(request, headers, runtime);
}

AITeacherSyncPracticeTaskGenerateResponse Alibabacloud_AiContent20240611::Client::aITeacherSyncPracticeTaskGenerateWithOptions(shared_ptr<AITeacherSyncPracticeTaskGenerateRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->grade)) {
    body->insert(pair<string, string>("grade", *request->grade));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->keySentences)) {
    body->insert(pair<string, vector<string>>("keySentences", *request->keySentences));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->keyWords)) {
    body->insert(pair<string, vector<string>>("keyWords", *request->keyWords));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->learningObject)) {
    body->insert(pair<string, string>("learningObject", *request->learningObject));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->textContent)) {
    body->insert(pair<string, string>("textContent", *request->textContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->textbook)) {
    body->insert(pair<string, string>("textbook", *request->textbook));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topic)) {
    body->insert(pair<string, string>("topic", *request->topic));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("userId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AITeacherSyncPracticeTaskGenerate"))},
    {"version", boost::any(string("20240611"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/aiteacher/syncPractice/generateTask"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AITeacherSyncPracticeTaskGenerateResponse(callApi(params, req, runtime));
}

AITeacherSyncPracticeTaskGenerateResponse Alibabacloud_AiContent20240611::Client::aITeacherSyncPracticeTaskGenerate(shared_ptr<AITeacherSyncPracticeTaskGenerateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return aITeacherSyncPracticeTaskGenerateWithOptions(request, headers, runtime);
}

AliyunConsoleOpenApiQueryAliyunConsoleServcieListResponse Alibabacloud_AiContent20240611::Client::aliyunConsoleOpenApiQueryAliyunConsoleServcieListWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AliyunConsoleOpenApiQueryAliyunConsoleServcieList"))},
    {"version", boost::any(string("20240611"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/aliyunconsole/queryAliyunConsoleServcieList"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AliyunConsoleOpenApiQueryAliyunConsoleServcieListResponse(callApi(params, req, runtime));
}

AliyunConsoleOpenApiQueryAliyunConsoleServcieListResponse Alibabacloud_AiContent20240611::Client::aliyunConsoleOpenApiQueryAliyunConsoleServcieList() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return aliyunConsoleOpenApiQueryAliyunConsoleServcieListWithOptions(headers, runtime);
}

AliyunConsoleOpenApiQueryAliyunConsoleServiceListResponse Alibabacloud_AiContent20240611::Client::aliyunConsoleOpenApiQueryAliyunConsoleServiceListWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AliyunConsoleOpenApiQueryAliyunConsoleServiceList"))},
    {"version", boost::any(string("20240611"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/aliyunConsole/queryAliyunConsoleServiceList"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AliyunConsoleOpenApiQueryAliyunConsoleServiceListResponse(callApi(params, req, runtime));
}

AliyunConsoleOpenApiQueryAliyunConsoleServiceListResponse Alibabacloud_AiContent20240611::Client::aliyunConsoleOpenApiQueryAliyunConsoleServiceList() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return aliyunConsoleOpenApiQueryAliyunConsoleServiceListWithOptions(headers, runtime);
}

CountOralEvaluationStatisticsCallsResponse Alibabacloud_AiContent20240611::Client::countOralEvaluationStatisticsCallsWithOptions(shared_ptr<CountOralEvaluationStatisticsCallsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CountOralEvaluationStatisticsCalls"))},
    {"version", boost::any(string("20240611"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/aliyunConsole/countOralEvaluationStatisticsCalls"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CountOralEvaluationStatisticsCallsResponse(callApi(params, req, runtime));
}

CountOralEvaluationStatisticsCallsResponse Alibabacloud_AiContent20240611::Client::countOralEvaluationStatisticsCalls(shared_ptr<CountOralEvaluationStatisticsCallsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return countOralEvaluationStatisticsCallsWithOptions(request, headers, runtime);
}

CountOralEvaluationStatisticsConcurrentResponse Alibabacloud_AiContent20240611::Client::countOralEvaluationStatisticsConcurrentWithOptions(shared_ptr<CountOralEvaluationStatisticsConcurrentRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CountOralEvaluationStatisticsConcurrent"))},
    {"version", boost::any(string("20240611"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/aliyunConsole/countOralEvaluationStatisticsConcurrent"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CountOralEvaluationStatisticsConcurrentResponse(callApi(params, req, runtime));
}

CountOralEvaluationStatisticsConcurrentResponse Alibabacloud_AiContent20240611::Client::countOralEvaluationStatisticsConcurrent(shared_ptr<CountOralEvaluationStatisticsConcurrentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return countOralEvaluationStatisticsConcurrentWithOptions(request, headers, runtime);
}

CountOralEvaluationStatisticsErrorResponse Alibabacloud_AiContent20240611::Client::countOralEvaluationStatisticsErrorWithOptions(shared_ptr<CountOralEvaluationStatisticsErrorRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CountOralEvaluationStatisticsError"))},
    {"version", boost::any(string("20240611"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/aliyunConsole/countOralEvaluationStatisticsError"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CountOralEvaluationStatisticsErrorResponse(callApi(params, req, runtime));
}

CountOralEvaluationStatisticsErrorResponse Alibabacloud_AiContent20240611::Client::countOralEvaluationStatisticsError(shared_ptr<CountOralEvaluationStatisticsErrorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return countOralEvaluationStatisticsErrorWithOptions(request, headers, runtime);
}

CreateAccessWarrantResponse Alibabacloud_AiContent20240611::Client::createAccessWarrantWithOptions(shared_ptr<CreateAccessWarrantRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("appId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestSign)) {
    body->insert(pair<string, string>("requestSign", *request->requestSign));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timestamp)) {
    body->insert(pair<string, string>("timestamp", *request->timestamp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    body->insert(pair<string, string>("userClientIp", *request->userClientIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("userId", *request->userId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->warrantAvailable)) {
    body->insert(pair<string, long>("warrantAvailable", *request->warrantAvailable));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAccessWarrant"))},
    {"version", boost::any(string("20240611"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/aliyunConsole/createAccessWarrant"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAccessWarrantResponse(callApi(params, req, runtime));
}

CreateAccessWarrantResponse Alibabacloud_AiContent20240611::Client::createAccessWarrant(shared_ptr<CreateAccessWarrantRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createAccessWarrantWithOptions(request, headers, runtime);
}

CreateProjectResponse Alibabacloud_AiContent20240611::Client::createProjectWithOptions(shared_ptr<CreateProjectRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    body->insert(pair<string, string>("projectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectType)) {
    body->insert(pair<string, string>("projectType", *request->projectType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateProject"))},
    {"version", boost::any(string("20240611"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/aliyunConsole/createProject"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateProjectResponse(callApi(params, req, runtime));
}

CreateProjectResponse Alibabacloud_AiContent20240611::Client::createProject(shared_ptr<CreateProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createProjectWithOptions(request, headers, runtime);
}

ExecuteAITeacherChineseCompositionTutoringWorkflowRunResponse Alibabacloud_AiContent20240611::Client::executeAITeacherChineseCompositionTutoringWorkflowRunWithOptions(shared_ptr<ExecuteAITeacherChineseCompositionTutoringWorkflowRunRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->essayOutline)) {
    body->insert(pair<string, string>("essayOutline", *request->essayOutline));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->essayRequirements)) {
    body->insert(pair<string, string>("essayRequirements", *request->essayRequirements));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->essayTopic)) {
    body->insert(pair<string, string>("essayTopic", *request->essayTopic));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->essayType)) {
    body->insert(pair<string, string>("essayType", *request->essayType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->essayWordCount)) {
    body->insert(pair<string, long>("essayWordCount", *request->essayWordCount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->grade)) {
    body->insert(pair<string, long>("grade", *request->grade));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->responseMode)) {
    body->insert(pair<string, string>("responseMode", *request->responseMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("userId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExecuteAITeacherChineseCompositionTutoringWorkflowRun"))},
    {"version", boost::any(string("20240611"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/api/v1/intelligentAgent/chineseCompositionTutoring/workflowRun"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExecuteAITeacherChineseCompositionTutoringWorkflowRunResponse(callApi(params, req, runtime));
}

ExecuteAITeacherChineseCompositionTutoringWorkflowRunResponse Alibabacloud_AiContent20240611::Client::executeAITeacherChineseCompositionTutoringWorkflowRun(shared_ptr<ExecuteAITeacherChineseCompositionTutoringWorkflowRunRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return executeAITeacherChineseCompositionTutoringWorkflowRunWithOptions(request, headers, runtime);
}

ExecuteAITeacherEnglishCompositionTutoringWorkflowRunResponse Alibabacloud_AiContent20240611::Client::executeAITeacherEnglishCompositionTutoringWorkflowRunWithOptions(shared_ptr<ExecuteAITeacherEnglishCompositionTutoringWorkflowRunRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->essayOutline)) {
    body->insert(pair<string, string>("essayOutline", *request->essayOutline));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->essayRequirements)) {
    body->insert(pair<string, string>("essayRequirements", *request->essayRequirements));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->essayTopic)) {
    body->insert(pair<string, string>("essayTopic", *request->essayTopic));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->essayType)) {
    body->insert(pair<string, string>("essayType", *request->essayType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->essayWordCount)) {
    body->insert(pair<string, long>("essayWordCount", *request->essayWordCount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->grade)) {
    body->insert(pair<string, long>("grade", *request->grade));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->responseMode)) {
    body->insert(pair<string, string>("responseMode", *request->responseMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("userId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExecuteAITeacherEnglishCompositionTutoringWorkflowRun"))},
    {"version", boost::any(string("20240611"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/api/v1/intelligentAgent/englishCompositionTutoring/workflowRun"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExecuteAITeacherEnglishCompositionTutoringWorkflowRunResponse(callApi(params, req, runtime));
}

ExecuteAITeacherEnglishCompositionTutoringWorkflowRunResponse Alibabacloud_AiContent20240611::Client::executeAITeacherEnglishCompositionTutoringWorkflowRun(shared_ptr<ExecuteAITeacherEnglishCompositionTutoringWorkflowRunRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return executeAITeacherEnglishCompositionTutoringWorkflowRunWithOptions(request, headers, runtime);
}

ExecuteAITeacherEnglishParaphraseChatMessageResponse Alibabacloud_AiContent20240611::Client::executeAITeacherEnglishParaphraseChatMessageWithOptions(shared_ptr<ExecuteAITeacherEnglishParaphraseChatMessageRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->chatId)) {
    body->insert(pair<string, string>("chatId", *request->chatId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    body->insert(pair<string, string>("content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->grade)) {
    body->insert(pair<string, long>("grade", *request->grade));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->questionId)) {
    body->insert(pair<string, string>("questionId", *request->questionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->questionInfo)) {
    body->insert(pair<string, string>("questionInfo", *request->questionInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->responseMode)) {
    body->insert(pair<string, string>("responseMode", *request->responseMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userAnswer)) {
    body->insert(pair<string, string>("userAnswer", *request->userAnswer));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("userId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExecuteAITeacherEnglishParaphraseChatMessage"))},
    {"version", boost::any(string("20240611"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/api/v1/intelligentAgent/englishParaphrase/chatMessage"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExecuteAITeacherEnglishParaphraseChatMessageResponse(callApi(params, req, runtime));
}

ExecuteAITeacherEnglishParaphraseChatMessageResponse Alibabacloud_AiContent20240611::Client::executeAITeacherEnglishParaphraseChatMessage(shared_ptr<ExecuteAITeacherEnglishParaphraseChatMessageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return executeAITeacherEnglishParaphraseChatMessageWithOptions(request, headers, runtime);
}

ExecuteAITeacherExpansionDialogueResponse Alibabacloud_AiContent20240611::Client::executeAITeacherExpansionDialogueWithOptions(shared_ptr<ExecuteAITeacherExpansionDialogueRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->background)) {
    body->insert(pair<string, string>("background", *request->background));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ExecuteAITeacherExpansionDialogueRequestDialogueTasks>>(request->dialogueTasks)) {
    body->insert(pair<string, vector<ExecuteAITeacherExpansionDialogueRequestDialogueTasks>>("dialogueTasks", *request->dialogueTasks));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->languageCode)) {
    body->insert(pair<string, string>("languageCode", *request->languageCode));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ExecuteAITeacherExpansionDialogueRequestRecords>>(request->records)) {
    body->insert(pair<string, vector<ExecuteAITeacherExpansionDialogueRequestRecords>>("records", *request->records));
  }
  if (!Darabonba_Util::Client::isUnset<ExecuteAITeacherExpansionDialogueRequestRoleInfo>(request->roleInfo)) {
    body->insert(pair<string, ExecuteAITeacherExpansionDialogueRequestRoleInfo>("roleInfo", *request->roleInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startSentence)) {
    body->insert(pair<string, string>("startSentence", *request->startSentence));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topic)) {
    body->insert(pair<string, string>("topic", *request->topic));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("userId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExecuteAITeacherExpansionDialogue"))},
    {"version", boost::any(string("20240611"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/aiteacher/expansionPractice/executeExpansionTraining"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExecuteAITeacherExpansionDialogueResponse(callApi(params, req, runtime));
}

ExecuteAITeacherExpansionDialogueResponse Alibabacloud_AiContent20240611::Client::executeAITeacherExpansionDialogue(shared_ptr<ExecuteAITeacherExpansionDialogueRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return executeAITeacherExpansionDialogueWithOptions(request, headers, runtime);
}

ExecuteAITeacherExpansionDialogueRefineResponse Alibabacloud_AiContent20240611::Client::executeAITeacherExpansionDialogueRefineWithOptions(shared_ptr<ExecuteAITeacherExpansionDialogueRefineRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->background)) {
    body->insert(pair<string, string>("background", *request->background));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ExecuteAITeacherExpansionDialogueRefineRequestDialogueTasks>>(request->dialogueTasks)) {
    body->insert(pair<string, vector<ExecuteAITeacherExpansionDialogueRefineRequestDialogueTasks>>("dialogueTasks", *request->dialogueTasks));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->languageCode)) {
    body->insert(pair<string, string>("languageCode", *request->languageCode));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ExecuteAITeacherExpansionDialogueRefineRequestRecords>>(request->records)) {
    body->insert(pair<string, vector<ExecuteAITeacherExpansionDialogueRefineRequestRecords>>("records", *request->records));
  }
  if (!Darabonba_Util::Client::isUnset<ExecuteAITeacherExpansionDialogueRefineRequestRoleInfo>(request->roleInfo)) {
    body->insert(pair<string, ExecuteAITeacherExpansionDialogueRefineRequestRoleInfo>("roleInfo", *request->roleInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startSentence)) {
    body->insert(pair<string, string>("startSentence", *request->startSentence));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topic)) {
    body->insert(pair<string, string>("topic", *request->topic));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("userId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExecuteAITeacherExpansionDialogueRefine"))},
    {"version", boost::any(string("20240611"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/aiteacher/expansionPractice/refineByContext"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExecuteAITeacherExpansionDialogueRefineResponse(callApi(params, req, runtime));
}

ExecuteAITeacherExpansionDialogueRefineResponse Alibabacloud_AiContent20240611::Client::executeAITeacherExpansionDialogueRefine(shared_ptr<ExecuteAITeacherExpansionDialogueRefineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return executeAITeacherExpansionDialogueRefineWithOptions(request, headers, runtime);
}

ExecuteAITeacherExpansionDialogueTranslateResponse Alibabacloud_AiContent20240611::Client::executeAITeacherExpansionDialogueTranslateWithOptions(shared_ptr<ExecuteAITeacherExpansionDialogueTranslateRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->background)) {
    body->insert(pair<string, string>("background", *request->background));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ExecuteAITeacherExpansionDialogueTranslateRequestDialogueTasks>>(request->dialogueTasks)) {
    body->insert(pair<string, vector<ExecuteAITeacherExpansionDialogueTranslateRequestDialogueTasks>>("dialogueTasks", *request->dialogueTasks));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ExecuteAITeacherExpansionDialogueTranslateRequestRecords>>(request->records)) {
    body->insert(pair<string, vector<ExecuteAITeacherExpansionDialogueTranslateRequestRecords>>("records", *request->records));
  }
  if (!Darabonba_Util::Client::isUnset<ExecuteAITeacherExpansionDialogueTranslateRequestRoleInfo>(request->roleInfo)) {
    body->insert(pair<string, ExecuteAITeacherExpansionDialogueTranslateRequestRoleInfo>("roleInfo", *request->roleInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startSentence)) {
    body->insert(pair<string, string>("startSentence", *request->startSentence));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topic)) {
    body->insert(pair<string, string>("topic", *request->topic));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("userId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExecuteAITeacherExpansionDialogueTranslate"))},
    {"version", boost::any(string("20240611"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/aiteacher/expansionPractice/translate"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExecuteAITeacherExpansionDialogueTranslateResponse(callApi(params, req, runtime));
}

ExecuteAITeacherExpansionDialogueTranslateResponse Alibabacloud_AiContent20240611::Client::executeAITeacherExpansionDialogueTranslate(shared_ptr<ExecuteAITeacherExpansionDialogueTranslateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return executeAITeacherExpansionDialogueTranslateWithOptions(request, headers, runtime);
}

ExecuteAITeacherGrammarCheckResponse Alibabacloud_AiContent20240611::Client::executeAITeacherGrammarCheckWithOptions(shared_ptr<ExecuteAITeacherGrammarCheckRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    body->insert(pair<string, string>("content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("userId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExecuteAITeacherGrammarCheck"))},
    {"version", boost::any(string("20240611"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/aiteacher/common/grammarChecking"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExecuteAITeacherGrammarCheckResponse(callApi(params, req, runtime));
}

ExecuteAITeacherGrammarCheckResponse Alibabacloud_AiContent20240611::Client::executeAITeacherGrammarCheck(shared_ptr<ExecuteAITeacherGrammarCheckRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return executeAITeacherGrammarCheckWithOptions(request, headers, runtime);
}

ExecuteAITeacherSyncDialogueResponse Alibabacloud_AiContent20240611::Client::executeAITeacherSyncDialogueWithOptions(shared_ptr<ExecuteAITeacherSyncDialogueRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<ExecuteAITeacherSyncDialogueRequestDialogueTasks>>(request->dialogueTasks)) {
    body->insert(pair<string, vector<ExecuteAITeacherSyncDialogueRequestDialogueTasks>>("dialogueTasks", *request->dialogueTasks));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->languageCode)) {
    body->insert(pair<string, string>("languageCode", *request->languageCode));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ExecuteAITeacherSyncDialogueRequestRecords>>(request->records)) {
    body->insert(pair<string, vector<ExecuteAITeacherSyncDialogueRequestRecords>>("records", *request->records));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("userId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExecuteAITeacherSyncDialogue"))},
    {"version", boost::any(string("20240611"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/aiteacher/syncPractice/executeSyncTraining"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExecuteAITeacherSyncDialogueResponse(callApi(params, req, runtime));
}

ExecuteAITeacherSyncDialogueResponse Alibabacloud_AiContent20240611::Client::executeAITeacherSyncDialogue(shared_ptr<ExecuteAITeacherSyncDialogueRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return executeAITeacherSyncDialogueWithOptions(request, headers, runtime);
}

ExecuteAITeacherSyncDialogueTranslateResponse Alibabacloud_AiContent20240611::Client::executeAITeacherSyncDialogueTranslateWithOptions(shared_ptr<ExecuteAITeacherSyncDialogueTranslateRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<ExecuteAITeacherSyncDialogueTranslateRequestDialogueTasks>>(request->dialogueTasks)) {
    body->insert(pair<string, vector<ExecuteAITeacherSyncDialogueTranslateRequestDialogueTasks>>("dialogueTasks", *request->dialogueTasks));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ExecuteAITeacherSyncDialogueTranslateRequestRecords>>(request->records)) {
    body->insert(pair<string, vector<ExecuteAITeacherSyncDialogueTranslateRequestRecords>>("records", *request->records));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("userId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExecuteAITeacherSyncDialogueTranslate"))},
    {"version", boost::any(string("20240611"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/aiteacher/syncPractice/translate"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExecuteAITeacherSyncDialogueTranslateResponse(callApi(params, req, runtime));
}

ExecuteAITeacherSyncDialogueTranslateResponse Alibabacloud_AiContent20240611::Client::executeAITeacherSyncDialogueTranslate(shared_ptr<ExecuteAITeacherSyncDialogueTranslateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return executeAITeacherSyncDialogueTranslateWithOptions(request, headers, runtime);
}

ExecuteHundredThousandWhysDialogueResponse Alibabacloud_AiContent20240611::Client::executeHundredThousandWhysDialogueWithOptions(shared_ptr<ExecuteHundredThousandWhysDialogueRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ageGroup)) {
    body->insert(pair<string, string>("ageGroup", *request->ageGroup));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chatId)) {
    body->insert(pair<string, string>("chatId", *request->chatId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceId)) {
    body->insert(pair<string, string>("deviceId", *request->deviceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->macAddress)) {
    body->insert(pair<string, string>("macAddress", *request->macAddress));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ExecuteHundredThousandWhysDialogueRequestMessages>>(request->messages)) {
    body->insert(pair<string, vector<ExecuteHundredThousandWhysDialogueRequestMessages>>("messages", *request->messages));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExecuteHundredThousandWhysDialogue"))},
    {"version", boost::any(string("20240611"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pop/api/v1/intelligentAgent/tenWWhys/executeDialogue"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExecuteHundredThousandWhysDialogueResponse(callApi(params, req, runtime));
}

ExecuteHundredThousandWhysDialogueResponse Alibabacloud_AiContent20240611::Client::executeHundredThousandWhysDialogue(shared_ptr<ExecuteHundredThousandWhysDialogueRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return executeHundredThousandWhysDialogueWithOptions(request, headers, runtime);
}

ExecuteTextbookAssistantDialogueResponse Alibabacloud_AiContent20240611::Client::executeTextbookAssistantDialogueWithOptions(shared_ptr<ExecuteTextbookAssistantDialogueRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authToken)) {
    body->insert(pair<string, string>("authToken", *request->authToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chatId)) {
    body->insert(pair<string, string>("chatId", *request->chatId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scenario)) {
    body->insert(pair<string, string>("scenario", *request->scenario));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userMessage)) {
    body->insert(pair<string, string>("userMessage", *request->userMessage));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExecuteTextbookAssistantDialogue"))},
    {"version", boost::any(string("20240611"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/textbookAssistant/dialogue/ExecuteDialogue"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExecuteTextbookAssistantDialogueResponse(callApi(params, req, runtime));
}

ExecuteTextbookAssistantDialogueResponse Alibabacloud_AiContent20240611::Client::executeTextbookAssistantDialogue(shared_ptr<ExecuteTextbookAssistantDialogueRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return executeTextbookAssistantDialogueWithOptions(request, headers, runtime);
}

ExecuteTextbookAssistantDifficultyResponse Alibabacloud_AiContent20240611::Client::executeTextbookAssistantDifficultyWithOptions(shared_ptr<ExecuteTextbookAssistantDifficultyRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->action)) {
    body->insert(pair<string, string>("action", *request->action));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->assistant)) {
    body->insert(pair<string, string>("assistant", *request->assistant));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authToken)) {
    body->insert(pair<string, string>("authToken", *request->authToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chatId)) {
    body->insert(pair<string, string>("chatId", *request->chatId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scenario)) {
    body->insert(pair<string, string>("scenario", *request->scenario));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExecuteTextbookAssistantDifficulty"))},
    {"version", boost::any(string("20240611"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/textbookAssistant/dialogue/ExecuteDifficulty"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExecuteTextbookAssistantDifficultyResponse(callApi(params, req, runtime));
}

ExecuteTextbookAssistantDifficultyResponse Alibabacloud_AiContent20240611::Client::executeTextbookAssistantDifficulty(shared_ptr<ExecuteTextbookAssistantDifficultyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return executeTextbookAssistantDifficultyWithOptions(request, headers, runtime);
}

ExecuteTextbookAssistantGrammarCheckResponse Alibabacloud_AiContent20240611::Client::executeTextbookAssistantGrammarCheckWithOptions(shared_ptr<ExecuteTextbookAssistantGrammarCheckRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authToken)) {
    body->insert(pair<string, string>("authToken", *request->authToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chatId)) {
    body->insert(pair<string, string>("chatId", *request->chatId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scenario)) {
    body->insert(pair<string, string>("scenario", *request->scenario));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->user)) {
    body->insert(pair<string, string>("user", *request->user));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExecuteTextbookAssistantGrammarCheck"))},
    {"version", boost::any(string("20240611"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/textbookAssistant/dialogue/ExecuteGrammarCheck"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExecuteTextbookAssistantGrammarCheckResponse(callApi(params, req, runtime));
}

ExecuteTextbookAssistantGrammarCheckResponse Alibabacloud_AiContent20240611::Client::executeTextbookAssistantGrammarCheck(shared_ptr<ExecuteTextbookAssistantGrammarCheckRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return executeTextbookAssistantGrammarCheckWithOptions(request, headers, runtime);
}

ExecuteTextbookAssistantRefineByContextResponse Alibabacloud_AiContent20240611::Client::executeTextbookAssistantRefineByContextWithOptions(shared_ptr<ExecuteTextbookAssistantRefineByContextRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authToken)) {
    body->insert(pair<string, string>("authToken", *request->authToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chatId)) {
    body->insert(pair<string, string>("chatId", *request->chatId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scenario)) {
    body->insert(pair<string, string>("scenario", *request->scenario));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->user)) {
    body->insert(pair<string, string>("user", *request->user));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExecuteTextbookAssistantRefineByContext"))},
    {"version", boost::any(string("20240611"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/textbookAssistant/dialogue/RefineByContext"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExecuteTextbookAssistantRefineByContextResponse(callApi(params, req, runtime));
}

ExecuteTextbookAssistantRefineByContextResponse Alibabacloud_AiContent20240611::Client::executeTextbookAssistantRefineByContext(shared_ptr<ExecuteTextbookAssistantRefineByContextRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return executeTextbookAssistantRefineByContextWithOptions(request, headers, runtime);
}

ExecuteTextbookAssistantRetryConversationResponse Alibabacloud_AiContent20240611::Client::executeTextbookAssistantRetryConversationWithOptions(shared_ptr<ExecuteTextbookAssistantRetryConversationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->assistant)) {
    body->insert(pair<string, string>("assistant", *request->assistant));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authToken)) {
    body->insert(pair<string, string>("authToken", *request->authToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chatId)) {
    body->insert(pair<string, string>("chatId", *request->chatId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scenario)) {
    body->insert(pair<string, string>("scenario", *request->scenario));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExecuteTextbookAssistantRetryConversation"))},
    {"version", boost::any(string("20240611"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/textbookAssistant/dialogue/RetryConversation"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExecuteTextbookAssistantRetryConversationResponse(callApi(params, req, runtime));
}

ExecuteTextbookAssistantRetryConversationResponse Alibabacloud_AiContent20240611::Client::executeTextbookAssistantRetryConversation(shared_ptr<ExecuteTextbookAssistantRetryConversationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return executeTextbookAssistantRetryConversationWithOptions(request, headers, runtime);
}

ExecuteTextbookAssistantSseDialogueResponse Alibabacloud_AiContent20240611::Client::executeTextbookAssistantSseDialogueWithOptions(shared_ptr<ExecuteTextbookAssistantSseDialogueRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authToken)) {
    body->insert(pair<string, string>("authToken", *request->authToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chatId)) {
    body->insert(pair<string, string>("chatId", *request->chatId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scenario)) {
    body->insert(pair<string, string>("scenario", *request->scenario));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userMessage)) {
    body->insert(pair<string, string>("userMessage", *request->userMessage));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExecuteTextbookAssistantSseDialogue"))},
    {"version", boost::any(string("20240611"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/textbookAssistant/dialogue/ExecuteSseDialogue"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExecuteTextbookAssistantSseDialogueResponse(callApi(params, req, runtime));
}

ExecuteTextbookAssistantSseDialogueResponse Alibabacloud_AiContent20240611::Client::executeTextbookAssistantSseDialogue(shared_ptr<ExecuteTextbookAssistantSseDialogueRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return executeTextbookAssistantSseDialogueWithOptions(request, headers, runtime);
}

ExecuteTextbookAssistantStartConversationResponse Alibabacloud_AiContent20240611::Client::executeTextbookAssistantStartConversationWithOptions(shared_ptr<ExecuteTextbookAssistantStartConversationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->articleId)) {
    body->insert(pair<string, string>("articleId", *request->articleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authToken)) {
    body->insert(pair<string, string>("authToken", *request->authToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scenario)) {
    body->insert(pair<string, string>("scenario", *request->scenario));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExecuteTextbookAssistantStartConversation"))},
    {"version", boost::any(string("20240611"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/textbookAssistant/dialogue/StartConversation"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExecuteTextbookAssistantStartConversationResponse(callApi(params, req, runtime));
}

ExecuteTextbookAssistantStartConversationResponse Alibabacloud_AiContent20240611::Client::executeTextbookAssistantStartConversation(shared_ptr<ExecuteTextbookAssistantStartConversationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return executeTextbookAssistantStartConversationWithOptions(request, headers, runtime);
}

ExecuteTextbookAssistantSuggestionResponse Alibabacloud_AiContent20240611::Client::executeTextbookAssistantSuggestionWithOptions(shared_ptr<ExecuteTextbookAssistantSuggestionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->assistant)) {
    body->insert(pair<string, string>("assistant", *request->assistant));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authToken)) {
    body->insert(pair<string, string>("authToken", *request->authToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chatId)) {
    body->insert(pair<string, string>("chatId", *request->chatId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scenario)) {
    body->insert(pair<string, string>("scenario", *request->scenario));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExecuteTextbookAssistantSuggestion"))},
    {"version", boost::any(string("20240611"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/textbookAssistant/dialogue/Suggestion"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExecuteTextbookAssistantSuggestionResponse(callApi(params, req, runtime));
}

ExecuteTextbookAssistantSuggestionResponse Alibabacloud_AiContent20240611::Client::executeTextbookAssistantSuggestion(shared_ptr<ExecuteTextbookAssistantSuggestionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return executeTextbookAssistantSuggestionWithOptions(request, headers, runtime);
}

ExecuteTextbookAssistantTranslateResponse Alibabacloud_AiContent20240611::Client::executeTextbookAssistantTranslateWithOptions(shared_ptr<ExecuteTextbookAssistantTranslateRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->assistant)) {
    body->insert(pair<string, string>("assistant", *request->assistant));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authToken)) {
    body->insert(pair<string, string>("authToken", *request->authToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chatId)) {
    body->insert(pair<string, string>("chatId", *request->chatId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scenario)) {
    body->insert(pair<string, string>("scenario", *request->scenario));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExecuteTextbookAssistantTranslate"))},
    {"version", boost::any(string("20240611"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/textbookAssistant/dialogue/ExecuteTranslate"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExecuteTextbookAssistantTranslateResponse(callApi(params, req, runtime));
}

ExecuteTextbookAssistantTranslateResponse Alibabacloud_AiContent20240611::Client::executeTextbookAssistantTranslate(shared_ptr<ExecuteTextbookAssistantTranslateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return executeTextbookAssistantTranslateWithOptions(request, headers, runtime);
}

GetAITeacherExpansionDialogueSuggestionResponse Alibabacloud_AiContent20240611::Client::getAITeacherExpansionDialogueSuggestionWithOptions(shared_ptr<GetAITeacherExpansionDialogueSuggestionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->background)) {
    body->insert(pair<string, string>("background", *request->background));
  }
  if (!Darabonba_Util::Client::isUnset<vector<GetAITeacherExpansionDialogueSuggestionRequestDialogueTasks>>(request->dialogueTasks)) {
    body->insert(pair<string, vector<GetAITeacherExpansionDialogueSuggestionRequestDialogueTasks>>("dialogueTasks", *request->dialogueTasks));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->languageCode)) {
    body->insert(pair<string, string>("languageCode", *request->languageCode));
  }
  if (!Darabonba_Util::Client::isUnset<vector<GetAITeacherExpansionDialogueSuggestionRequestRecords>>(request->records)) {
    body->insert(pair<string, vector<GetAITeacherExpansionDialogueSuggestionRequestRecords>>("records", *request->records));
  }
  if (!Darabonba_Util::Client::isUnset<GetAITeacherExpansionDialogueSuggestionRequestRoleInfo>(request->roleInfo)) {
    body->insert(pair<string, GetAITeacherExpansionDialogueSuggestionRequestRoleInfo>("roleInfo", *request->roleInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startSentence)) {
    body->insert(pair<string, string>("startSentence", *request->startSentence));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topic)) {
    body->insert(pair<string, string>("topic", *request->topic));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("userId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAITeacherExpansionDialogueSuggestion"))},
    {"version", boost::any(string("20240611"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/aiteacher/expansionPractice/suggestion"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAITeacherExpansionDialogueSuggestionResponse(callApi(params, req, runtime));
}

GetAITeacherExpansionDialogueSuggestionResponse Alibabacloud_AiContent20240611::Client::getAITeacherExpansionDialogueSuggestion(shared_ptr<GetAITeacherExpansionDialogueSuggestionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getAITeacherExpansionDialogueSuggestionWithOptions(request, headers, runtime);
}

GetAITeacherSyncDialogueSuggestionResponse Alibabacloud_AiContent20240611::Client::getAITeacherSyncDialogueSuggestionWithOptions(shared_ptr<GetAITeacherSyncDialogueSuggestionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<GetAITeacherSyncDialogueSuggestionRequestDialogueTasks>>(request->dialogueTasks)) {
    body->insert(pair<string, vector<GetAITeacherSyncDialogueSuggestionRequestDialogueTasks>>("dialogueTasks", *request->dialogueTasks));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->languageCode)) {
    body->insert(pair<string, string>("languageCode", *request->languageCode));
  }
  if (!Darabonba_Util::Client::isUnset<vector<GetAITeacherSyncDialogueSuggestionRequestRecords>>(request->records)) {
    body->insert(pair<string, vector<GetAITeacherSyncDialogueSuggestionRequestRecords>>("records", *request->records));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("userId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAITeacherSyncDialogueSuggestion"))},
    {"version", boost::any(string("20240611"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/aiteacher/syncPractice/suggestion"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAITeacherSyncDialogueSuggestionResponse(callApi(params, req, runtime));
}

GetAITeacherSyncDialogueSuggestionResponse Alibabacloud_AiContent20240611::Client::getAITeacherSyncDialogueSuggestion(shared_ptr<GetAITeacherSyncDialogueSuggestionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getAITeacherSyncDialogueSuggestionWithOptions(request, headers, runtime);
}

GetTextbookAssistantTokenResponse Alibabacloud_AiContent20240611::Client::getTextbookAssistantTokenWithOptions(shared_ptr<GetTextbookAssistantTokenRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceId)) {
    body->insert(pair<string, string>("deviceId", *request->deviceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->model)) {
    body->insert(pair<string, string>("model", *request->model));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTextbookAssistantToken"))},
    {"version", boost::any(string("20240611"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/textbookAssistant/teachingResource/GetToken"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTextbookAssistantTokenResponse(callApi(params, req, runtime));
}

GetTextbookAssistantTokenResponse Alibabacloud_AiContent20240611::Client::getTextbookAssistantToken(shared_ptr<GetTextbookAssistantTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getTextbookAssistantTokenWithOptions(request, headers, runtime);
}

ListTextbookAssistantArticleDetailsResponse Alibabacloud_AiContent20240611::Client::listTextbookAssistantArticleDetailsWithOptions(shared_ptr<ListTextbookAssistantArticleDetailsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->articleIdList)) {
    body->insert(pair<string, vector<string>>("articleIdList", *request->articleIdList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authToken)) {
    body->insert(pair<string, string>("authToken", *request->authToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTextbookAssistantArticleDetails"))},
    {"version", boost::any(string("20240611"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/textbookAssistant/teachingResource/ListArticleDetails"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTextbookAssistantArticleDetailsResponse(callApi(params, req, runtime));
}

ListTextbookAssistantArticleDetailsResponse Alibabacloud_AiContent20240611::Client::listTextbookAssistantArticleDetails(shared_ptr<ListTextbookAssistantArticleDetailsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listTextbookAssistantArticleDetailsWithOptions(request, headers, runtime);
}

ListTextbookAssistantArticlesResponse Alibabacloud_AiContent20240611::Client::listTextbookAssistantArticlesWithOptions(shared_ptr<ListTextbookAssistantArticlesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authToken)) {
    body->insert(pair<string, string>("authToken", *request->authToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->directoryId)) {
    body->insert(pair<string, string>("directoryId", *request->directoryId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTextbookAssistantArticles"))},
    {"version", boost::any(string("20240611"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/textbookAssistant/teachingResource/ListArticles"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTextbookAssistantArticlesResponse(callApi(params, req, runtime));
}

ListTextbookAssistantArticlesResponse Alibabacloud_AiContent20240611::Client::listTextbookAssistantArticles(shared_ptr<ListTextbookAssistantArticlesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listTextbookAssistantArticlesWithOptions(request, headers, runtime);
}

ListTextbookAssistantBookDirectoriesResponse Alibabacloud_AiContent20240611::Client::listTextbookAssistantBookDirectoriesWithOptions(shared_ptr<ListTextbookAssistantBookDirectoriesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authToken)) {
    body->insert(pair<string, string>("authToken", *request->authToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bookId)) {
    body->insert(pair<string, string>("bookId", *request->bookId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scenario)) {
    body->insert(pair<string, string>("scenario", *request->scenario));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTextbookAssistantBookDirectories"))},
    {"version", boost::any(string("20240611"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/textbookAssistant/teachingResource/ListBookDirectories"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTextbookAssistantBookDirectoriesResponse(callApi(params, req, runtime));
}

ListTextbookAssistantBookDirectoriesResponse Alibabacloud_AiContent20240611::Client::listTextbookAssistantBookDirectories(shared_ptr<ListTextbookAssistantBookDirectoriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listTextbookAssistantBookDirectoriesWithOptions(request, headers, runtime);
}

ListTextbookAssistantBooksResponse Alibabacloud_AiContent20240611::Client::listTextbookAssistantBooksWithOptions(shared_ptr<ListTextbookAssistantBooksRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authToken)) {
    body->insert(pair<string, string>("authToken", *request->authToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bookId)) {
    body->insert(pair<string, string>("bookId", *request->bookId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->grade)) {
    body->insert(pair<string, string>("grade", *request->grade));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->maxResults)) {
    body->insert(pair<string, string>("maxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->page)) {
    body->insert(pair<string, string>("page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->version)) {
    body->insert(pair<string, string>("version", *request->version));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->volume)) {
    body->insert(pair<string, string>("volume", *request->volume));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTextbookAssistantBooks"))},
    {"version", boost::any(string("20240611"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/textbookAssistant/teachingResource/ListBooks"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTextbookAssistantBooksResponse(callApi(params, req, runtime));
}

ListTextbookAssistantBooksResponse Alibabacloud_AiContent20240611::Client::listTextbookAssistantBooks(shared_ptr<ListTextbookAssistantBooksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listTextbookAssistantBooksWithOptions(request, headers, runtime);
}

ListTextbookAssistantGradeVolumesResponse Alibabacloud_AiContent20240611::Client::listTextbookAssistantGradeVolumesWithOptions(shared_ptr<ListTextbookAssistantGradeVolumesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authToken)) {
    body->insert(pair<string, string>("authToken", *request->authToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scenario)) {
    body->insert(pair<string, string>("scenario", *request->scenario));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTextbookAssistantGradeVolumes"))},
    {"version", boost::any(string("20240611"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/textbookAssistant/teachingResource/ListGradeVolumes"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTextbookAssistantGradeVolumesResponse(callApi(params, req, runtime));
}

ListTextbookAssistantGradeVolumesResponse Alibabacloud_AiContent20240611::Client::listTextbookAssistantGradeVolumes(shared_ptr<ListTextbookAssistantGradeVolumesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listTextbookAssistantGradeVolumesWithOptions(request, headers, runtime);
}

ListTextbookAssistantSceneDetailsResponse Alibabacloud_AiContent20240611::Client::listTextbookAssistantSceneDetailsWithOptions(shared_ptr<ListTextbookAssistantSceneDetailsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authToken)) {
    body->insert(pair<string, string>("authToken", *request->authToken));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->sceneIdList)) {
    body->insert(pair<string, vector<string>>("sceneIdList", *request->sceneIdList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTextbookAssistantSceneDetails"))},
    {"version", boost::any(string("20240611"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/textbookAssistant/teachingResource/ListSceneDetails"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTextbookAssistantSceneDetailsResponse(callApi(params, req, runtime));
}

ListTextbookAssistantSceneDetailsResponse Alibabacloud_AiContent20240611::Client::listTextbookAssistantSceneDetails(shared_ptr<ListTextbookAssistantSceneDetailsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listTextbookAssistantSceneDetailsWithOptions(request, headers, runtime);
}

PersonalizedTextToImageAddInferenceJobResponse Alibabacloud_AiContent20240611::Client::personalizedTextToImageAddInferenceJobWithOptions(shared_ptr<PersonalizedTextToImageAddInferenceJobRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->imageNumber)) {
    body->insert(pair<string, long>("imageNumber", *request->imageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->imageUrl)) {
    body->insert(pair<string, vector<string>>("imageUrl", *request->imageUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prompt)) {
    body->insert(pair<string, string>("prompt", *request->prompt));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->seed)) {
    body->insert(pair<string, long>("seed", *request->seed));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->strength)) {
    body->insert(pair<string, double>("strength", *request->strength));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->trainSteps)) {
    body->insert(pair<string, long>("trainSteps", *request->trainSteps));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PersonalizedTextToImageAddInferenceJob"))},
    {"version", boost::any(string("20240611"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/personalizedtxt2img/addPreModelInferenceJob"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PersonalizedTextToImageAddInferenceJobResponse(callApi(params, req, runtime));
}

PersonalizedTextToImageAddInferenceJobResponse Alibabacloud_AiContent20240611::Client::personalizedTextToImageAddInferenceJob(shared_ptr<PersonalizedTextToImageAddInferenceJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return personalizedTextToImageAddInferenceJobWithOptions(request, headers, runtime);
}

PersonalizedTextToImageQueryImageAssetResponse Alibabacloud_AiContent20240611::Client::personalizedTextToImageQueryImageAssetWithOptions(shared_ptr<PersonalizedTextToImageQueryImageAssetRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->encodeFormat)) {
    query->insert(pair<string, string>("encodeFormat", *request->encodeFormat));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageId)) {
    query->insert(pair<string, string>("imageId", *request->imageId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PersonalizedTextToImageQueryImageAsset"))},
    {"version", boost::any(string("20240611"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/personalizedtxt2img/queryImageAssetFromImageId"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("any"))}
  }));
  return PersonalizedTextToImageQueryImageAssetResponse(callApi(params, req, runtime));
}

PersonalizedTextToImageQueryImageAssetResponse Alibabacloud_AiContent20240611::Client::personalizedTextToImageQueryImageAsset(shared_ptr<PersonalizedTextToImageQueryImageAssetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return personalizedTextToImageQueryImageAssetWithOptions(request, headers, runtime);
}

PersonalizedTextToImageQueryPreModelInferenceJobInfoResponse Alibabacloud_AiContent20240611::Client::personalizedTextToImageQueryPreModelInferenceJobInfoWithOptions(shared_ptr<PersonalizedTextToImageQueryPreModelInferenceJobInfoRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->inferenceJobId)) {
    query->insert(pair<string, string>("inferenceJobId", *request->inferenceJobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PersonalizedTextToImageQueryPreModelInferenceJobInfo"))},
    {"version", boost::any(string("20240611"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/personalizedtxt2img/queryPreModelInferenceJobInfo"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PersonalizedTextToImageQueryPreModelInferenceJobInfoResponse(callApi(params, req, runtime));
}

PersonalizedTextToImageQueryPreModelInferenceJobInfoResponse Alibabacloud_AiContent20240611::Client::personalizedTextToImageQueryPreModelInferenceJobInfo(shared_ptr<PersonalizedTextToImageQueryPreModelInferenceJobInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return personalizedTextToImageQueryPreModelInferenceJobInfoWithOptions(request, headers, runtime);
}

Personalizedtxt2imgAddInferenceJobResponse Alibabacloud_AiContent20240611::Client::personalizedtxt2imgAddInferenceJobWithOptions(shared_ptr<Personalizedtxt2imgAddInferenceJobRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->imageNumber)) {
    body->insert(pair<string, long>("imageNumber", *request->imageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelId)) {
    body->insert(pair<string, string>("modelId", *request->modelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prompt)) {
    body->insert(pair<string, string>("prompt", *request->prompt));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->seed)) {
    body->insert(pair<string, long>("seed", *request->seed));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("Personalizedtxt2imgAddInferenceJob"))},
    {"version", boost::any(string("20240611"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/personalizedtxt2img/addInferenceJob"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return Personalizedtxt2imgAddInferenceJobResponse(callApi(params, req, runtime));
}

Personalizedtxt2imgAddInferenceJobResponse Alibabacloud_AiContent20240611::Client::personalizedtxt2imgAddInferenceJob(shared_ptr<Personalizedtxt2imgAddInferenceJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return personalizedtxt2imgAddInferenceJobWithOptions(request, headers, runtime);
}

Personalizedtxt2imgAddModelTrainJobResponse Alibabacloud_AiContent20240611::Client::personalizedtxt2imgAddModelTrainJobWithOptions(shared_ptr<Personalizedtxt2imgAddModelTrainJobRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->imageUrl)) {
    body->insert(pair<string, vector<string>>("imageUrl", *request->imageUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->objectType)) {
    body->insert(pair<string, string>("objectType", *request->objectType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->trainSteps)) {
    body->insert(pair<string, long>("trainSteps", *request->trainSteps));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("Personalizedtxt2imgAddModelTrainJob"))},
    {"version", boost::any(string("20240611"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/personalizedtxt2img/addModelTrainJob"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return Personalizedtxt2imgAddModelTrainJobResponse(callApi(params, req, runtime));
}

Personalizedtxt2imgAddModelTrainJobResponse Alibabacloud_AiContent20240611::Client::personalizedtxt2imgAddModelTrainJob(shared_ptr<Personalizedtxt2imgAddModelTrainJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return personalizedtxt2imgAddModelTrainJobWithOptions(request, headers, runtime);
}

Personalizedtxt2imgQueryImageAssetResponse Alibabacloud_AiContent20240611::Client::personalizedtxt2imgQueryImageAssetWithOptions(shared_ptr<Personalizedtxt2imgQueryImageAssetRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->encodeFormat)) {
    query->insert(pair<string, string>("encodeFormat", *request->encodeFormat));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageId)) {
    query->insert(pair<string, string>("imageId", *request->imageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelId)) {
    query->insert(pair<string, string>("modelId", *request->modelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->promptId)) {
    query->insert(pair<string, string>("promptId", *request->promptId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("Personalizedtxt2imgQueryImageAsset"))},
    {"version", boost::any(string("20240611"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/personalizedtxt2img/queryImageAsset"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("any"))}
  }));
  return Personalizedtxt2imgQueryImageAssetResponse(callApi(params, req, runtime));
}

Personalizedtxt2imgQueryImageAssetResponse Alibabacloud_AiContent20240611::Client::personalizedtxt2imgQueryImageAsset(shared_ptr<Personalizedtxt2imgQueryImageAssetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return personalizedtxt2imgQueryImageAssetWithOptions(request, headers, runtime);
}

Personalizedtxt2imgQueryInferenceJobInfoResponse Alibabacloud_AiContent20240611::Client::personalizedtxt2imgQueryInferenceJobInfoWithOptions(shared_ptr<Personalizedtxt2imgQueryInferenceJobInfoRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->inferenceJobId)) {
    query->insert(pair<string, string>("inferenceJobId", *request->inferenceJobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("Personalizedtxt2imgQueryInferenceJobInfo"))},
    {"version", boost::any(string("20240611"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/personalizedtxt2img/queryInferenceJobInfo"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return Personalizedtxt2imgQueryInferenceJobInfoResponse(callApi(params, req, runtime));
}

Personalizedtxt2imgQueryInferenceJobInfoResponse Alibabacloud_AiContent20240611::Client::personalizedtxt2imgQueryInferenceJobInfo(shared_ptr<Personalizedtxt2imgQueryInferenceJobInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return personalizedtxt2imgQueryInferenceJobInfoWithOptions(request, headers, runtime);
}

Personalizedtxt2imgQueryModelTrainJobListResponse Alibabacloud_AiContent20240611::Client::personalizedtxt2imgQueryModelTrainJobListWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("Personalizedtxt2imgQueryModelTrainJobList"))},
    {"version", boost::any(string("20240611"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/personalizedtxt2img/queryModelTrainJobList"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return Personalizedtxt2imgQueryModelTrainJobListResponse(callApi(params, req, runtime));
}

Personalizedtxt2imgQueryModelTrainJobListResponse Alibabacloud_AiContent20240611::Client::personalizedtxt2imgQueryModelTrainJobList() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return personalizedtxt2imgQueryModelTrainJobListWithOptions(headers, runtime);
}

Personalizedtxt2imgQueryModelTrainStatusResponse Alibabacloud_AiContent20240611::Client::personalizedtxt2imgQueryModelTrainStatusWithOptions(shared_ptr<Personalizedtxt2imgQueryModelTrainStatusRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->modelId)) {
    query->insert(pair<string, string>("modelId", *request->modelId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("Personalizedtxt2imgQueryModelTrainStatus"))},
    {"version", boost::any(string("20240611"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/personalizedtxt2img/queryModelTrainStatus"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return Personalizedtxt2imgQueryModelTrainStatusResponse(callApi(params, req, runtime));
}

Personalizedtxt2imgQueryModelTrainStatusResponse Alibabacloud_AiContent20240611::Client::personalizedtxt2imgQueryModelTrainStatus(shared_ptr<Personalizedtxt2imgQueryModelTrainStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return personalizedtxt2imgQueryModelTrainStatusWithOptions(request, headers, runtime);
}

QueryApplicationAccessIdResponse Alibabacloud_AiContent20240611::Client::queryApplicationAccessIdWithOptions(shared_ptr<QueryApplicationAccessIdRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->applicationAccessId)) {
    query->insert(pair<string, string>("applicationAccessId", *request->applicationAccessId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryApplicationAccessId"))},
    {"version", boost::any(string("20240611"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/aliyunConsole/queryApplicationAccessId"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryApplicationAccessIdResponse(callApi(params, req, runtime));
}

QueryApplicationAccessIdResponse Alibabacloud_AiContent20240611::Client::queryApplicationAccessId(shared_ptr<QueryApplicationAccessIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return queryApplicationAccessIdWithOptions(request, headers, runtime);
}

QueryProjectResponse Alibabacloud_AiContent20240611::Client::queryProjectWithOptions(shared_ptr<QueryProjectRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("projectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryProject"))},
    {"version", boost::any(string("20240611"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/aliyunConsole/queryProject"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryProjectResponse(callApi(params, req, runtime));
}

QueryProjectResponse Alibabacloud_AiContent20240611::Client::queryProject(shared_ptr<QueryProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return queryProjectWithOptions(request, headers, runtime);
}

QueryProjectListResponse Alibabacloud_AiContent20240611::Client::queryProjectListWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryProjectList"))},
    {"version", boost::any(string("20240611"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/aliyunConsole/queryProjectList"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryProjectListResponse(callApi(params, req, runtime));
}

QueryProjectListResponse Alibabacloud_AiContent20240611::Client::queryProjectList() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return queryProjectListWithOptions(headers, runtime);
}

QueryPurchasedServiceResponse Alibabacloud_AiContent20240611::Client::queryPurchasedServiceWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryPurchasedService"))},
    {"version", boost::any(string("20240611"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/aliyunConsole/queryPurchasedService"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryPurchasedServiceResponse(callApi(params, req, runtime));
}

QueryPurchasedServiceResponse Alibabacloud_AiContent20240611::Client::queryPurchasedService() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return queryPurchasedServiceWithOptions(headers, runtime);
}

UpdateProjectResponse Alibabacloud_AiContent20240611::Client::updateProjectWithOptions(shared_ptr<UpdateProjectRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    body->insert(pair<string, string>("projectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    body->insert(pair<string, string>("projectName", *request->projectName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateProject"))},
    {"version", boost::any(string("20240611"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/aliyunConsole/updateProject"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateProjectResponse(callApi(params, req, runtime));
}

UpdateProjectResponse Alibabacloud_AiContent20240611::Client::updateProject(shared_ptr<UpdateProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateProjectWithOptions(request, headers, runtime);
}

