// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/contact_center_ai20240603.hpp>
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

using namespace Alibabacloud_ContactCenterAI20240603;

Alibabacloud_ContactCenterAI20240603::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("contactcenterai"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_ContactCenterAI20240603::Client::getEndpoint(shared_ptr<string> productId,
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

AnalyzeConversationResponse Alibabacloud_ContactCenterAI20240603::Client::analyzeConversationWithOptions(shared_ptr<string> workspaceId,
                                                                                                         shared_ptr<string> appId,
                                                                                                         shared_ptr<AnalyzeConversationRequest> request,
                                                                                                         shared_ptr<map<string, string>> headers,
                                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<AnalyzeConversationRequestCategoryTags>>(request->categoryTags)) {
    body->insert(pair<string, vector<AnalyzeConversationRequestCategoryTags>>("categoryTags", *request->categoryTags));
  }
  if (!Darabonba_Util::Client::isUnset<AnalyzeConversationRequestDialogue>(request->dialogue)) {
    body->insert(pair<string, AnalyzeConversationRequestDialogue>("dialogue", *request->dialogue));
  }
  if (!Darabonba_Util::Client::isUnset<vector<AnalyzeConversationRequestExamples>>(request->examples)) {
    body->insert(pair<string, vector<AnalyzeConversationRequestExamples>>("examples", *request->examples));
  }
  if (!Darabonba_Util::Client::isUnset<vector<AnalyzeConversationRequestFields>>(request->fields)) {
    body->insert(pair<string, vector<AnalyzeConversationRequestFields>>("fields", *request->fields));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelCode)) {
    body->insert(pair<string, string>("modelCode", *request->modelCode));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resultTypes)) {
    body->insert(pair<string, vector<string>>("resultTypes", *request->resultTypes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneName)) {
    body->insert(pair<string, string>("sceneName", *request->sceneName));
  }
  if (!Darabonba_Util::Client::isUnset<AnalyzeConversationRequestServiceInspection>(request->serviceInspection)) {
    body->insert(pair<string, AnalyzeConversationRequestServiceInspection>("serviceInspection", *request->serviceInspection));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->stream)) {
    body->insert(pair<string, bool>("stream", *request->stream));
  }
  if (!Darabonba_Util::Client::isUnset<vector<AnalyzeConversationRequestUserProfiles>>(request->userProfiles)) {
    body->insert(pair<string, vector<AnalyzeConversationRequestUserProfiles>>("userProfiles", *request->userProfiles));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AnalyzeConversation"))},
    {"version", boost::any(string("2024-06-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/ccai/app/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appId)) + string("/analyze_conversation"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AnalyzeConversationResponse(callApi(params, req, runtime));
}

AnalyzeConversationResponse Alibabacloud_ContactCenterAI20240603::Client::analyzeConversation(shared_ptr<string> workspaceId, shared_ptr<string> appId, shared_ptr<AnalyzeConversationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return analyzeConversationWithOptions(workspaceId, appId, request, headers, runtime);
}

CreateConversationAnalysisTaskResponse Alibabacloud_ContactCenterAI20240603::Client::createConversationAnalysisTaskWithOptions(shared_ptr<string> workspaceId,
                                                                                                                               shared_ptr<string> appId,
                                                                                                                               shared_ptr<CreateConversationAnalysisTaskRequest> request,
                                                                                                                               shared_ptr<map<string, string>> headers,
                                                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->autoSplit)) {
    body->insert(pair<string, long>("autoSplit", *request->autoSplit));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->clientChannel)) {
    body->insert(pair<string, long>("clientChannel", *request->clientChannel));
  }
  if (!Darabonba_Util::Client::isUnset<CreateConversationAnalysisTaskRequestExamples>(request->examples)) {
    body->insert(pair<string, CreateConversationAnalysisTaskRequestExamples>("examples", *request->examples));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateConversationAnalysisTaskRequestFields>>(request->fields)) {
    body->insert(pair<string, vector<CreateConversationAnalysisTaskRequestFields>>("fields", *request->fields));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileName)) {
    body->insert(pair<string, string>("fileName", *request->fileName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelCode)) {
    body->insert(pair<string, string>("modelCode", *request->modelCode));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resultTypes)) {
    body->insert(pair<string, vector<string>>("resultTypes", *request->resultTypes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneName)) {
    body->insert(pair<string, string>("sceneName", *request->sceneName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->serviceChannel)) {
    body->insert(pair<string, long>("serviceChannel", *request->serviceChannel));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->serviceChannelKeywords)) {
    body->insert(pair<string, vector<string>>("serviceChannelKeywords", *request->serviceChannelKeywords));
  }
  if (!Darabonba_Util::Client::isUnset<CreateConversationAnalysisTaskRequestServiceInspection>(request->serviceInspection)) {
    body->insert(pair<string, CreateConversationAnalysisTaskRequestServiceInspection>("serviceInspection", *request->serviceInspection));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->templateIds)) {
    body->insert(pair<string, vector<string>>("templateIds", *request->templateIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->voiceFileUrl)) {
    body->insert(pair<string, string>("voiceFileUrl", *request->voiceFileUrl));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateConversationAnalysisTask"))},
    {"version", boost::any(string("2024-06-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/ccai/app/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appId)) + string("/createConversationAnalysisTask"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateConversationAnalysisTaskResponse(callApi(params, req, runtime));
}

CreateConversationAnalysisTaskResponse Alibabacloud_ContactCenterAI20240603::Client::createConversationAnalysisTask(shared_ptr<string> workspaceId, shared_ptr<string> appId, shared_ptr<CreateConversationAnalysisTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createConversationAnalysisTaskWithOptions(workspaceId, appId, request, headers, runtime);
}

GetTaskResultResponse Alibabacloud_ContactCenterAI20240603::Client::getTaskResultWithOptions(shared_ptr<GetTaskResultRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("taskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTaskResult"))},
    {"version", boost::any(string("2024-06-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/ccai/app/getTaskResult"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTaskResultResponse(callApi(params, req, runtime));
}

GetTaskResultResponse Alibabacloud_ContactCenterAI20240603::Client::getTaskResult(shared_ptr<GetTaskResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getTaskResultWithOptions(request, headers, runtime);
}

RunCompletionResponse Alibabacloud_ContactCenterAI20240603::Client::runCompletionWithOptions(shared_ptr<string> workspaceId,
                                                                                             shared_ptr<string> appId,
                                                                                             shared_ptr<RunCompletionRequest> request,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<RunCompletionRequestDialogue>(request->dialogue)) {
    body->insert(pair<string, RunCompletionRequestDialogue>("Dialogue", *request->dialogue));
  }
  if (!Darabonba_Util::Client::isUnset<vector<RunCompletionRequestFields>>(request->fields)) {
    body->insert(pair<string, vector<RunCompletionRequestFields>>("Fields", *request->fields));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelCode)) {
    body->insert(pair<string, string>("ModelCode", *request->modelCode));
  }
  if (!Darabonba_Util::Client::isUnset<RunCompletionRequestServiceInspection>(request->serviceInspection)) {
    body->insert(pair<string, RunCompletionRequestServiceInspection>("ServiceInspection", *request->serviceInspection));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->stream)) {
    body->insert(pair<string, bool>("Stream", *request->stream));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->templateIds)) {
    body->insert(pair<string, vector<long>>("TemplateIds", *request->templateIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunCompletion"))},
    {"version", boost::any(string("2024-06-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/ccai/app/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appId)) + string("/completion"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RunCompletionResponse(callApi(params, req, runtime));
}

RunCompletionResponse Alibabacloud_ContactCenterAI20240603::Client::runCompletion(shared_ptr<string> workspaceId, shared_ptr<string> appId, shared_ptr<RunCompletionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return runCompletionWithOptions(workspaceId, appId, request, headers, runtime);
}

RunCompletionMessageResponse Alibabacloud_ContactCenterAI20240603::Client::runCompletionMessageWithOptions(shared_ptr<string> workspaceId,
                                                                                                           shared_ptr<string> appId,
                                                                                                           shared_ptr<RunCompletionMessageRequest> request,
                                                                                                           shared_ptr<map<string, string>> headers,
                                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<RunCompletionMessageRequestMessages>>(request->messages)) {
    body->insert(pair<string, vector<RunCompletionMessageRequestMessages>>("Messages", *request->messages));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelCode)) {
    body->insert(pair<string, string>("ModelCode", *request->modelCode));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->stream)) {
    body->insert(pair<string, bool>("Stream", *request->stream));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunCompletionMessage"))},
    {"version", boost::any(string("2024-06-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/ccai/app/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appId)) + string("/completion_message"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RunCompletionMessageResponse(callApi(params, req, runtime));
}

RunCompletionMessageResponse Alibabacloud_ContactCenterAI20240603::Client::runCompletionMessage(shared_ptr<string> workspaceId, shared_ptr<string> appId, shared_ptr<RunCompletionMessageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return runCompletionMessageWithOptions(workspaceId, appId, request, headers, runtime);
}

