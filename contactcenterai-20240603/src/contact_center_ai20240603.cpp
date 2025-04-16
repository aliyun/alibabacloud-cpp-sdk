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

AnalyzeAudioSyncResponse Alibabacloud_ContactCenterAI20240603::Client::analyzeAudioSyncWithOptions(shared_ptr<string> workspaceId,
                                                                                                   shared_ptr<string> appId,
                                                                                                   shared_ptr<AnalyzeAudioSyncRequest> request,
                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<AnalyzeAudioSyncRequestCategoryTags>>(request->categoryTags)) {
    body->insert(pair<string, vector<AnalyzeAudioSyncRequestCategoryTags>>("categoryTags", *request->categoryTags));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customPrompt)) {
    body->insert(pair<string, string>("customPrompt", *request->customPrompt));
  }
  if (!Darabonba_Util::Client::isUnset<vector<AnalyzeAudioSyncRequestFields>>(request->fields)) {
    body->insert(pair<string, vector<AnalyzeAudioSyncRequestFields>>("fields", *request->fields));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelCode)) {
    body->insert(pair<string, string>("modelCode", *request->modelCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->responseFormatType)) {
    body->insert(pair<string, string>("responseFormatType", *request->responseFormatType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resultTypes)) {
    body->insert(pair<string, vector<string>>("resultTypes", *request->resultTypes));
  }
  if (!Darabonba_Util::Client::isUnset<AnalyzeAudioSyncRequestServiceInspection>(request->serviceInspection)) {
    body->insert(pair<string, AnalyzeAudioSyncRequestServiceInspection>("serviceInspection", *request->serviceInspection));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->stream)) {
    body->insert(pair<string, bool>("stream", *request->stream));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->templateIds)) {
    body->insert(pair<string, vector<string>>("templateIds", *request->templateIds));
  }
  if (!Darabonba_Util::Client::isUnset<AnalyzeAudioSyncRequestTranscription>(request->transcription)) {
    body->insert(pair<string, AnalyzeAudioSyncRequestTranscription>("transcription", *request->transcription));
  }
  if (!Darabonba_Util::Client::isUnset<vector<AnalyzeAudioSyncRequestVariables>>(request->variables)) {
    body->insert(pair<string, vector<AnalyzeAudioSyncRequestVariables>>("variables", *request->variables));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AnalyzeAudioSync"))},
    {"version", boost::any(string("2024-06-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/ccai/app/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appId)) + string("/analyzeAudioSync"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AnalyzeAudioSyncResponse(callApi(params, req, runtime));
}

AnalyzeAudioSyncResponse Alibabacloud_ContactCenterAI20240603::Client::analyzeAudioSync(shared_ptr<string> workspaceId, shared_ptr<string> appId, shared_ptr<AnalyzeAudioSyncRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return analyzeAudioSyncWithOptions(workspaceId, appId, request, headers, runtime);
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
  if (!Darabonba_Util::Client::isUnset<string>(request->customPrompt)) {
    body->insert(pair<string, string>("customPrompt", *request->customPrompt));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->responseFormatType)) {
    body->insert(pair<string, string>("responseFormatType", *request->responseFormatType));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceCallerUid)) {
    body->insert(pair<string, string>("sourceCallerUid", *request->sourceCallerUid));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->stream)) {
    body->insert(pair<string, bool>("stream", *request->stream));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->timeConstraintList)) {
    body->insert(pair<string, vector<string>>("timeConstraintList", *request->timeConstraintList));
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

AnalyzeImageResponse Alibabacloud_ContactCenterAI20240603::Client::analyzeImageWithOptions(shared_ptr<string> workspaceId,
                                                                                           shared_ptr<string> appId,
                                                                                           shared_ptr<AnalyzeImageRequest> request,
                                                                                           shared_ptr<map<string, string>> headers,
                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->imageUrls)) {
    body->insert(pair<string, vector<string>>("imageUrls", *request->imageUrls));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->responseFormatType)) {
    body->insert(pair<string, string>("responseFormatType", *request->responseFormatType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resultTypes)) {
    body->insert(pair<string, vector<string>>("resultTypes", *request->resultTypes));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->stream)) {
    body->insert(pair<string, bool>("stream", *request->stream));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AnalyzeImage"))},
    {"version", boost::any(string("2024-06-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/ccai/app/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appId)) + string("/analyzeImage"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AnalyzeImageResponse(callApi(params, req, runtime));
}

AnalyzeImageResponse Alibabacloud_ContactCenterAI20240603::Client::analyzeImage(shared_ptr<string> workspaceId, shared_ptr<string> appId, shared_ptr<AnalyzeImageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return analyzeImageWithOptions(workspaceId, appId, request, headers, runtime);
}

CreateTaskResponse Alibabacloud_ContactCenterAI20240603::Client::createTaskWithOptions(shared_ptr<string> workspaceId,
                                                                                       shared_ptr<string> appId,
                                                                                       shared_ptr<CreateTaskRequest> request,
                                                                                       shared_ptr<map<string, string>> headers,
                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<CreateTaskRequestCategoryTags>>(request->categoryTags)) {
    body->insert(pair<string, vector<CreateTaskRequestCategoryTags>>("categoryTags", *request->categoryTags));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customPrompt)) {
    body->insert(pair<string, string>("customPrompt", *request->customPrompt));
  }
  if (!Darabonba_Util::Client::isUnset<CreateTaskRequestDialogue>(request->dialogue)) {
    body->insert(pair<string, CreateTaskRequestDialogue>("dialogue", *request->dialogue));
  }
  if (!Darabonba_Util::Client::isUnset<CreateTaskRequestExamples>(request->examples)) {
    body->insert(pair<string, CreateTaskRequestExamples>("examples", *request->examples));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateTaskRequestFields>>(request->fields)) {
    body->insert(pair<string, vector<CreateTaskRequestFields>>("fields", *request->fields));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelCode)) {
    body->insert(pair<string, string>("modelCode", *request->modelCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->responseFormatType)) {
    body->insert(pair<string, string>("responseFormatType", *request->responseFormatType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resultTypes)) {
    body->insert(pair<string, vector<string>>("resultTypes", *request->resultTypes));
  }
  if (!Darabonba_Util::Client::isUnset<CreateTaskRequestServiceInspection>(request->serviceInspection)) {
    body->insert(pair<string, CreateTaskRequestServiceInspection>("serviceInspection", *request->serviceInspection));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskType)) {
    body->insert(pair<string, string>("taskType", *request->taskType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->templateIds)) {
    body->insert(pair<string, vector<string>>("templateIds", *request->templateIds));
  }
  if (!Darabonba_Util::Client::isUnset<CreateTaskRequestTranscription>(request->transcription)) {
    body->insert(pair<string, CreateTaskRequestTranscription>("transcription", *request->transcription));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateTaskRequestVariables>>(request->variables)) {
    body->insert(pair<string, vector<CreateTaskRequestVariables>>("variables", *request->variables));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTask"))},
    {"version", boost::any(string("2024-06-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/ccai/app/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appId)) + string("/createTask"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTaskResponse(callApi(params, req, runtime));
}

CreateTaskResponse Alibabacloud_ContactCenterAI20240603::Client::createTask(shared_ptr<string> workspaceId, shared_ptr<string> appId, shared_ptr<CreateTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createTaskWithOptions(workspaceId, appId, request, headers, runtime);
}

CreateVocabResponse Alibabacloud_ContactCenterAI20240603::Client::createVocabWithOptions(shared_ptr<CreateVocabRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->audioModelCode)) {
    body->insert(pair<string, string>("audioModelCode", *request->audioModelCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateVocabRequestWordWeightList>>(request->wordWeightList)) {
    body->insert(pair<string, vector<CreateVocabRequestWordWeightList>>("wordWeightList", *request->wordWeightList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("workspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateVocab"))},
    {"version", boost::any(string("2024-06-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/vocab/createVocab"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateVocabResponse(callApi(params, req, runtime));
}

CreateVocabResponse Alibabacloud_ContactCenterAI20240603::Client::createVocab(shared_ptr<CreateVocabRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createVocabWithOptions(request, headers, runtime);
}

DeleteVocabResponse Alibabacloud_ContactCenterAI20240603::Client::deleteVocabWithOptions(shared_ptr<DeleteVocabRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->vocabularyId)) {
    body->insert(pair<string, string>("vocabularyId", *request->vocabularyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("workspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteVocab"))},
    {"version", boost::any(string("2024-06-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/vocab/deleteVocab"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteVocabResponse(callApi(params, req, runtime));
}

DeleteVocabResponse Alibabacloud_ContactCenterAI20240603::Client::deleteVocab(shared_ptr<DeleteVocabRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteVocabWithOptions(request, headers, runtime);
}

GetTaskResultResponse Alibabacloud_ContactCenterAI20240603::Client::getTaskResultWithOptions(shared_ptr<GetTaskResultRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetTaskResultShrinkRequest> request = make_shared<GetTaskResultShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->requiredFieldList)) {
    request->requiredFieldListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->requiredFieldList, make_shared<string>("requiredFieldList"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->requiredFieldListShrink)) {
    query->insert(pair<string, string>("requiredFieldList", *request->requiredFieldListShrink));
  }
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

GetVocabResponse Alibabacloud_ContactCenterAI20240603::Client::getVocabWithOptions(shared_ptr<GetVocabRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->vocabularyId)) {
    body->insert(pair<string, string>("vocabularyId", *request->vocabularyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("workspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetVocab"))},
    {"version", boost::any(string("2024-06-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/vocab/getVocab"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetVocabResponse(callApi(params, req, runtime));
}

GetVocabResponse Alibabacloud_ContactCenterAI20240603::Client::getVocab(shared_ptr<GetVocabRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getVocabWithOptions(request, headers, runtime);
}

ListVocabResponse Alibabacloud_ContactCenterAI20240603::Client::listVocabWithOptions(shared_ptr<ListVocabRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("workspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListVocab"))},
    {"version", boost::any(string("2024-06-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/vocab/listVocab"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListVocabResponse(callApi(params, req, runtime));
}

ListVocabResponse Alibabacloud_ContactCenterAI20240603::Client::listVocab(shared_ptr<ListVocabRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listVocabWithOptions(request, headers, runtime);
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
  if (!Darabonba_Util::Client::isUnset<string>(request->responseFormatType)) {
    body->insert(pair<string, string>("responseFormatType", *request->responseFormatType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<RunCompletionRequestVariables>>(request->variables)) {
    body->insert(pair<string, vector<RunCompletionRequestVariables>>("variables", *request->variables));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->responseFormatType)) {
    body->insert(pair<string, string>("responseFormatType", *request->responseFormatType));
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

UpdateVocabResponse Alibabacloud_ContactCenterAI20240603::Client::updateVocabWithOptions(shared_ptr<UpdateVocabRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vocabularyId)) {
    body->insert(pair<string, string>("vocabularyId", *request->vocabularyId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateVocabRequestWordWeightList>>(request->wordWeightList)) {
    body->insert(pair<string, vector<UpdateVocabRequestWordWeightList>>("wordWeightList", *request->wordWeightList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("workspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateVocab"))},
    {"version", boost::any(string("2024-06-03"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/vocab/updateVocab"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateVocabResponse(callApi(params, req, runtime));
}

UpdateVocabResponse Alibabacloud_ContactCenterAI20240603::Client::updateVocab(shared_ptr<UpdateVocabRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateVocabWithOptions(request, headers, runtime);
}

