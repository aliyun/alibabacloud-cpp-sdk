// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/intelligent_creation_20240313.hpp>
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

using namespace Alibabacloud_IntelligentCreation20240313;

Alibabacloud_IntelligentCreation20240313::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("intelligentcreation"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_IntelligentCreation20240313::Client::getEndpoint(shared_ptr<string> productId,
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

AddTextFeedbackResponse Alibabacloud_IntelligentCreation20240313::Client::addTextFeedbackWithOptions(shared_ptr<AddTextFeedbackRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    body->insert(pair<string, string>("content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->quality)) {
    body->insert(pair<string, long>("quality", *request->quality));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->textId)) {
    body->insert(pair<string, long>("textId", *request->textId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddTextFeedback"))},
    {"version", boost::any(string("2024-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/yic/yic-console/openService/v1/addTextFeedback"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddTextFeedbackResponse(callApi(params, req, runtime));
}

AddTextFeedbackResponse Alibabacloud_IntelligentCreation20240313::Client::addTextFeedback(shared_ptr<AddTextFeedbackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return addTextFeedbackWithOptions(request, headers, runtime);
}

BatchGetProjectTaskResponse Alibabacloud_IntelligentCreation20240313::Client::batchGetProjectTaskWithOptions(shared_ptr<BatchGetProjectTaskRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<BatchGetProjectTaskShrinkRequest> request = make_shared<BatchGetProjectTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->taskIdList)) {
    request->taskIdListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->taskIdList, make_shared<string>("taskIdList"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->taskIdListShrink)) {
    query->insert(pair<string, string>("taskIdList", *request->taskIdListShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchGetProjectTask"))},
    {"version", boost::any(string("2024-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/yic/yic-console/openService/v1/digitalHuman/project/batchGetProjectTask"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchGetProjectTaskResponse(callApi(params, req, runtime));
}

BatchGetProjectTaskResponse Alibabacloud_IntelligentCreation20240313::Client::batchGetProjectTask(shared_ptr<BatchGetProjectTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return batchGetProjectTaskWithOptions(request, headers, runtime);
}

BatchQueryIndividuationTextResponse Alibabacloud_IntelligentCreation20240313::Client::batchQueryIndividuationTextWithOptions(shared_ptr<BatchQueryIndividuationTextRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<BatchQueryIndividuationTextShrinkRequest> request = make_shared<BatchQueryIndividuationTextShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->textIdList)) {
    request->textIdListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->textIdList, make_shared<string>("textIdList"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->textIdListShrink)) {
    query->insert(pair<string, string>("textIdList", *request->textIdListShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchQueryIndividuationText"))},
    {"version", boost::any(string("2024-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/yic/yic-console/openService/v1/individuationText/batchQueryText"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchQueryIndividuationTextResponse(callApi(params, req, runtime));
}

BatchQueryIndividuationTextResponse Alibabacloud_IntelligentCreation20240313::Client::batchQueryIndividuationText(shared_ptr<BatchQueryIndividuationTextRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return batchQueryIndividuationTextWithOptions(request, headers, runtime);
}

CheckSessionResponse Alibabacloud_IntelligentCreation20240313::Client::checkSessionWithOptions(shared_ptr<CheckSessionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    body->insert(pair<string, string>("projectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    body->insert(pair<string, string>("sessionId", *request->sessionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckSession"))},
    {"version", boost::any(string("2024-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/yic/yic-console/openService/v1/avatar/project/checkSession"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckSessionResponse(callApi(params, req, runtime));
}

CheckSessionResponse Alibabacloud_IntelligentCreation20240313::Client::checkSession(shared_ptr<CheckSessionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return checkSessionWithOptions(request, headers, runtime);
}

CloseAICoachTaskSessionResponse Alibabacloud_IntelligentCreation20240313::Client::closeAICoachTaskSessionWithOptions(shared_ptr<CloseAICoachTaskSessionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    body->insert(pair<string, string>("sessionId", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uid)) {
    body->insert(pair<string, string>("uid", *request->uid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CloseAICoachTaskSession"))},
    {"version", boost::any(string("2024-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/yic/yic-console/openService/v1/aicoach/closeSession"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CloseAICoachTaskSessionResponse(callApi(params, req, runtime));
}

CloseAICoachTaskSessionResponse Alibabacloud_IntelligentCreation20240313::Client::closeAICoachTaskSession(shared_ptr<CloseAICoachTaskSessionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return closeAICoachTaskSessionWithOptions(request, headers, runtime);
}

CountTextResponse Alibabacloud_IntelligentCreation20240313::Client::countTextWithOptions(shared_ptr<CountTextRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->generationSource)) {
    query->insert(pair<string, string>("generationSource", *request->generationSource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->industry)) {
    query->insert(pair<string, string>("industry", *request->industry));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->publishStatus)) {
    query->insert(pair<string, string>("publishStatus", *request->publishStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->style)) {
    query->insert(pair<string, string>("style", *request->style));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CountText"))},
    {"version", boost::any(string("2024-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/yic/yic-console/openService/v1/countText"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CountTextResponse(callApi(params, req, runtime));
}

CountTextResponse Alibabacloud_IntelligentCreation20240313::Client::countText(shared_ptr<CountTextRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return countTextWithOptions(request, headers, runtime);
}

CreateAICoachTaskResponse Alibabacloud_IntelligentCreation20240313::Client::createAICoachTaskWithOptions(shared_ptr<CreateAICoachTaskRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->requestId)) {
    body->insert(pair<string, string>("requestId", *request->requestId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptRecordId)) {
    body->insert(pair<string, string>("scriptRecordId", *request->scriptRecordId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->studentId)) {
    body->insert(pair<string, string>("studentId", *request->studentId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAICoachTask"))},
    {"version", boost::any(string("2024-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/yic/yic-console/openService/v1/aicoach/createTask"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAICoachTaskResponse(callApi(params, req, runtime));
}

CreateAICoachTaskResponse Alibabacloud_IntelligentCreation20240313::Client::createAICoachTask(shared_ptr<CreateAICoachTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createAICoachTaskWithOptions(request, headers, runtime);
}

CreateAICoachTaskSessionResponse Alibabacloud_IntelligentCreation20240313::Client::createAICoachTaskSessionWithOptions(shared_ptr<CreateAICoachTaskSessionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("taskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uid)) {
    body->insert(pair<string, string>("uid", *request->uid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAICoachTaskSession"))},
    {"version", boost::any(string("2024-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/yic/yic-console/openService/v1/aicoach/startSession"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAICoachTaskSessionResponse(callApi(params, req, runtime));
}

CreateAICoachTaskSessionResponse Alibabacloud_IntelligentCreation20240313::Client::createAICoachTaskSession(shared_ptr<CreateAICoachTaskSessionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createAICoachTaskSessionWithOptions(request, headers, runtime);
}

CreateAnchorResponse Alibabacloud_IntelligentCreation20240313::Client::createAnchorWithOptions(shared_ptr<CreateAnchorRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->anchorMaterialName)) {
    body->insert(pair<string, string>("anchorMaterialName", *request->anchorMaterialName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->coverUrl)) {
    body->insert(pair<string, string>("coverUrl", *request->coverUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->digitalHumanType)) {
    body->insert(pair<string, string>("digitalHumanType", *request->digitalHumanType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gender)) {
    body->insert(pair<string, string>("gender", *request->gender));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->useScene)) {
    body->insert(pair<string, string>("useScene", *request->useScene));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAnchor"))},
    {"version", boost::any(string("2024-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/yic/yic-console/openService/v1/digitalHuman/anchorOpen/createAnchor"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAnchorResponse(callApi(params, req, runtime));
}

CreateAnchorResponse Alibabacloud_IntelligentCreation20240313::Client::createAnchor(shared_ptr<CreateAnchorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createAnchorWithOptions(request, headers, runtime);
}

CreateIllustrationTaskResponse Alibabacloud_IntelligentCreation20240313::Client::createIllustrationTaskWithOptions(shared_ptr<string> textId,
                                                                                                                   shared_ptr<CreateIllustrationTaskRequest> request,
                                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateIllustrationTask"))},
    {"version", boost::any(string("2024-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/yic/yic-console/openService/v1/texts/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(textId)) + string("/illustrationTasks"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateIllustrationTaskResponse(callApi(params, req, runtime));
}

CreateIllustrationTaskResponse Alibabacloud_IntelligentCreation20240313::Client::createIllustrationTask(shared_ptr<string> textId, shared_ptr<CreateIllustrationTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createIllustrationTaskWithOptions(textId, request, headers, runtime);
}

CreateIndividuationProjectResponse Alibabacloud_IntelligentCreation20240313::Client::createIndividuationProjectWithOptions(shared_ptr<CreateIndividuationProjectRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->projectInfo)) {
    body->insert(pair<string, string>("projectInfo", *request->projectInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    body->insert(pair<string, string>("projectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->purpose)) {
    body->insert(pair<string, string>("purpose", *request->purpose));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneId)) {
    body->insert(pair<string, string>("sceneId", *request->sceneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateIndividuationProject"))},
    {"version", boost::any(string("2024-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/yic/yic-console/openService/v1/individuationText/createProject"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateIndividuationProjectResponse(callApi(params, req, runtime));
}

CreateIndividuationProjectResponse Alibabacloud_IntelligentCreation20240313::Client::createIndividuationProject(shared_ptr<CreateIndividuationProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createIndividuationProjectWithOptions(request, headers, runtime);
}

CreateIndividuationTextTaskResponse Alibabacloud_IntelligentCreation20240313::Client::createIndividuationTextTaskWithOptions(shared_ptr<CreateIndividuationTextTaskRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<vector<string>>>(request->crowdPack)) {
    body->insert(pair<string, vector<vector<string>>>("crowdPack", *request->crowdPack));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    body->insert(pair<string, string>("projectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskName)) {
    body->insert(pair<string, string>("taskName", *request->taskName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateIndividuationTextTask"))},
    {"version", boost::any(string("2024-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/yic/yic-console/openService/v1/individuationText/createTextTask"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateIndividuationTextTaskResponse(callApi(params, req, runtime));
}

CreateIndividuationTextTaskResponse Alibabacloud_IntelligentCreation20240313::Client::createIndividuationTextTask(shared_ptr<CreateIndividuationTextTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createIndividuationTextTaskWithOptions(request, headers, runtime);
}

CreateRealisticPortraitResponse Alibabacloud_IntelligentCreation20240313::Client::createRealisticPortraitWithOptions(shared_ptr<CreateRealisticPortraitRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->ages)) {
    body->insert(pair<string, vector<long>>("ages", *request->ages));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->cloth)) {
    body->insert(pair<string, long>("cloth", *request->cloth));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->color)) {
    body->insert(pair<string, long>("color", *request->color));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->custom)) {
    body->insert(pair<string, string>("custom", *request->custom));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->face)) {
    body->insert(pair<string, vector<long>>("face", *request->face));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->figure)) {
    body->insert(pair<string, long>("figure", *request->figure));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->gender)) {
    body->insert(pair<string, long>("gender", *request->gender));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->hairColor)) {
    body->insert(pair<string, long>("hairColor", *request->hairColor));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->hairstyle)) {
    body->insert(pair<string, long>("hairstyle", *request->hairstyle));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->height)) {
    body->insert(pair<string, long>("height", *request->height));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageUrl)) {
    body->insert(pair<string, string>("imageUrl", *request->imageUrl));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->numbers)) {
    body->insert(pair<string, long>("numbers", *request->numbers));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ratio)) {
    body->insert(pair<string, string>("ratio", *request->ratio));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->width)) {
    body->insert(pair<string, long>("width", *request->width));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateRealisticPortrait"))},
    {"version", boost::any(string("2024-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/yic/yic-console/openService/v1/images/portrait/realistic"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateRealisticPortraitResponse(callApi(params, req, runtime));
}

CreateRealisticPortraitResponse Alibabacloud_IntelligentCreation20240313::Client::createRealisticPortrait(shared_ptr<CreateRealisticPortraitRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createRealisticPortraitWithOptions(request, headers, runtime);
}

CreateTextTaskResponse Alibabacloud_IntelligentCreation20240313::Client::createTextTaskWithOptions(shared_ptr<CreateTextTaskRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTextTask"))},
    {"version", boost::any(string("2024-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/yic/yic-console/openService/v1/textTasks"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTextTaskResponse(callApi(params, req, runtime));
}

CreateTextTaskResponse Alibabacloud_IntelligentCreation20240313::Client::createTextTask(shared_ptr<CreateTextTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createTextTaskWithOptions(request, headers, runtime);
}

DeleteIndividuationProjectResponse Alibabacloud_IntelligentCreation20240313::Client::deleteIndividuationProjectWithOptions(shared_ptr<DeleteIndividuationProjectRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    body->insert(pair<string, string>("projectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteIndividuationProject"))},
    {"version", boost::any(string("2024-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/yic/yic-console/openService/v1/individuationText/deleteProject"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteIndividuationProjectResponse(callApi(params, req, runtime));
}

DeleteIndividuationProjectResponse Alibabacloud_IntelligentCreation20240313::Client::deleteIndividuationProject(shared_ptr<DeleteIndividuationProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteIndividuationProjectWithOptions(request, headers, runtime);
}

DeleteIndividuationTextResponse Alibabacloud_IntelligentCreation20240313::Client::deleteIndividuationTextWithOptions(shared_ptr<DeleteIndividuationTextRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->textIdList)) {
    body->insert(pair<string, vector<string>>("textIdList", *request->textIdList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteIndividuationText"))},
    {"version", boost::any(string("2024-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/yic/yic-console/openService/v1/individuationText/deleteText"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteIndividuationTextResponse(callApi(params, req, runtime));
}

DeleteIndividuationTextResponse Alibabacloud_IntelligentCreation20240313::Client::deleteIndividuationText(shared_ptr<DeleteIndividuationTextRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteIndividuationTextWithOptions(request, headers, runtime);
}

FinishAICoachTaskSessionResponse Alibabacloud_IntelligentCreation20240313::Client::finishAICoachTaskSessionWithOptions(shared_ptr<FinishAICoachTaskSessionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    body->insert(pair<string, string>("sessionId", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uid)) {
    body->insert(pair<string, string>("uid", *request->uid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FinishAICoachTaskSession"))},
    {"version", boost::any(string("2024-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/yic/yic-console/openService/v1/aicoach/finishSession"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FinishAICoachTaskSessionResponse(callApi(params, req, runtime));
}

FinishAICoachTaskSessionResponse Alibabacloud_IntelligentCreation20240313::Client::finishAICoachTaskSession(shared_ptr<FinishAICoachTaskSessionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return finishAICoachTaskSessionWithOptions(request, headers, runtime);
}

GetAICoachTaskSessionHistoryResponse Alibabacloud_IntelligentCreation20240313::Client::getAICoachTaskSessionHistoryWithOptions(shared_ptr<GetAICoachTaskSessionHistoryRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("pageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    query->insert(pair<string, string>("sessionId", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uid)) {
    query->insert(pair<string, string>("uid", *request->uid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAICoachTaskSessionHistory"))},
    {"version", boost::any(string("2024-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/yic/yic-console/openService/v1/aicoach/querySessionHistory"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAICoachTaskSessionHistoryResponse(callApi(params, req, runtime));
}

GetAICoachTaskSessionHistoryResponse Alibabacloud_IntelligentCreation20240313::Client::getAICoachTaskSessionHistory(shared_ptr<GetAICoachTaskSessionHistoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getAICoachTaskSessionHistoryWithOptions(request, headers, runtime);
}

GetAICoachTaskSessionReportResponse Alibabacloud_IntelligentCreation20240313::Client::getAICoachTaskSessionReportWithOptions(shared_ptr<GetAICoachTaskSessionReportRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    query->insert(pair<string, string>("sessionId", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uid)) {
    query->insert(pair<string, string>("uid", *request->uid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAICoachTaskSessionReport"))},
    {"version", boost::any(string("2024-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/yic/yic-console/openService/v1/aicoach/queryTaskSessionReport"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAICoachTaskSessionReportResponse(callApi(params, req, runtime));
}

GetAICoachTaskSessionReportResponse Alibabacloud_IntelligentCreation20240313::Client::getAICoachTaskSessionReport(shared_ptr<GetAICoachTaskSessionReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getAICoachTaskSessionReportWithOptions(request, headers, runtime);
}

GetIllustrationResponse Alibabacloud_IntelligentCreation20240313::Client::getIllustrationWithOptions(shared_ptr<string> textId,
                                                                                                     shared_ptr<string> illustrationId,
                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetIllustration"))},
    {"version", boost::any(string("2024-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/yic/yic-console/openService/v1/texts/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(textId)) + string("/illustrations/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(illustrationId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetIllustrationResponse(callApi(params, req, runtime));
}

GetIllustrationResponse Alibabacloud_IntelligentCreation20240313::Client::getIllustration(shared_ptr<string> textId, shared_ptr<string> illustrationId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getIllustrationWithOptions(textId, illustrationId, headers, runtime);
}

GetIllustrationTaskResponse Alibabacloud_IntelligentCreation20240313::Client::getIllustrationTaskWithOptions(shared_ptr<string> textId,
                                                                                                             shared_ptr<string> illustrationTaskId,
                                                                                                             shared_ptr<map<string, string>> headers,
                                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetIllustrationTask"))},
    {"version", boost::any(string("2024-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/yic/yic-console/openService/v1/texts/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(textId)) + string("/illustrationTasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(illustrationTaskId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetIllustrationTaskResponse(callApi(params, req, runtime));
}

GetIllustrationTaskResponse Alibabacloud_IntelligentCreation20240313::Client::getIllustrationTask(shared_ptr<string> textId, shared_ptr<string> illustrationTaskId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getIllustrationTaskWithOptions(textId, illustrationTaskId, headers, runtime);
}

GetOssUploadTokenResponse Alibabacloud_IntelligentCreation20240313::Client::getOssUploadTokenWithOptions(shared_ptr<GetOssUploadTokenRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fileName)) {
    query->insert(pair<string, string>("fileName", *request->fileName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileType)) {
    query->insert(pair<string, string>("fileType", *request->fileType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetOssUploadToken"))},
    {"version", boost::any(string("2024-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/yic/yic-console/openService/v1/uploadToken"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetOssUploadTokenResponse(callApi(params, req, runtime));
}

GetOssUploadTokenResponse Alibabacloud_IntelligentCreation20240313::Client::getOssUploadToken(shared_ptr<GetOssUploadTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getOssUploadTokenWithOptions(request, headers, runtime);
}

GetProjectTaskResponse Alibabacloud_IntelligentCreation20240313::Client::getProjectTaskWithOptions(shared_ptr<GetProjectTaskRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->idempotentId)) {
    query->insert(pair<string, string>("IdempotentId", *request->idempotentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("taskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetProjectTask"))},
    {"version", boost::any(string("2024-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/yic/yic-console/openService/v1/digitalHuman/project/getProjectTask"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetProjectTaskResponse(callApi(params, req, runtime));
}

GetProjectTaskResponse Alibabacloud_IntelligentCreation20240313::Client::getProjectTask(shared_ptr<GetProjectTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getProjectTaskWithOptions(request, headers, runtime);
}

GetTextResponse Alibabacloud_IntelligentCreation20240313::Client::getTextWithOptions(shared_ptr<string> textId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetText"))},
    {"version", boost::any(string("2024-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/yic/yic-console/openService/v1/texts/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(textId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTextResponse(callApi(params, req, runtime));
}

GetTextResponse Alibabacloud_IntelligentCreation20240313::Client::getText(shared_ptr<string> textId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getTextWithOptions(textId, headers, runtime);
}

GetTextTaskResponse Alibabacloud_IntelligentCreation20240313::Client::getTextTaskWithOptions(shared_ptr<string> textTaskId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTextTask"))},
    {"version", boost::any(string("2024-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/yic/yic-console/openService/v1/textTasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(textTaskId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTextTaskResponse(callApi(params, req, runtime));
}

GetTextTaskResponse Alibabacloud_IntelligentCreation20240313::Client::getTextTask(shared_ptr<string> textTaskId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getTextTaskWithOptions(textTaskId, headers, runtime);
}

GetTextTemplateResponse Alibabacloud_IntelligentCreation20240313::Client::getTextTemplateWithOptions(shared_ptr<GetTextTemplateRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->industry)) {
    query->insert(pair<string, string>("industry", *request->industry));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTextTemplate"))},
    {"version", boost::any(string("2024-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/yic/yic-console/openService/v1/texts/commands/getTextTemplate"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTextTemplateResponse(callApi(params, req, runtime));
}

GetTextTemplateResponse Alibabacloud_IntelligentCreation20240313::Client::getTextTemplate(shared_ptr<GetTextTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getTextTemplateWithOptions(request, headers, runtime);
}

InteractTextResponse Alibabacloud_IntelligentCreation20240313::Client::interactTextWithOptions(shared_ptr<InteractTextRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentId)) {
    body->insert(pair<string, string>("agentId", *request->agentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    body->insert(pair<string, string>("content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    body->insert(pair<string, string>("sessionId", *request->sessionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InteractText"))},
    {"version", boost::any(string("2024-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/yic/yic-console/openService/v1/stream/interactText"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InteractTextResponse(callApi(params, req, runtime));
}

InteractTextResponse Alibabacloud_IntelligentCreation20240313::Client::interactText(shared_ptr<InteractTextRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return interactTextWithOptions(request, headers, runtime);
}

ListAICoachScriptPageResponse Alibabacloud_IntelligentCreation20240313::Client::listAICoachScriptPageWithOptions(shared_ptr<ListAICoachScriptPageRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("pageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    query->insert(pair<string, long>("status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAICoachScriptPage"))},
    {"version", boost::any(string("2024-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/yic/yic-console/openService/v1/aicoach/pageScript"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAICoachScriptPageResponse(callApi(params, req, runtime));
}

ListAICoachScriptPageResponse Alibabacloud_IntelligentCreation20240313::Client::listAICoachScriptPage(shared_ptr<ListAICoachScriptPageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listAICoachScriptPageWithOptions(request, headers, runtime);
}

ListAICoachTaskPageResponse Alibabacloud_IntelligentCreation20240313::Client::listAICoachTaskPageWithOptions(shared_ptr<ListAICoachTaskPageRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("pageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->studentId)) {
    query->insert(pair<string, string>("studentId", *request->studentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("taskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAICoachTaskPage"))},
    {"version", boost::any(string("2024-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/yic/yic-console/openService/v1/aicoach/listTaskPage"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAICoachTaskPageResponse(callApi(params, req, runtime));
}

ListAICoachTaskPageResponse Alibabacloud_IntelligentCreation20240313::Client::listAICoachTaskPage(shared_ptr<ListAICoachTaskPageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listAICoachTaskPageWithOptions(request, headers, runtime);
}

ListAnchorResponse Alibabacloud_IntelligentCreation20240313::Client::listAnchorWithOptions(shared_ptr<ListAnchorRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->anchorCategory)) {
    query->insert(pair<string, string>("anchorCategory", *request->anchorCategory));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->anchorType)) {
    query->insert(pair<string, string>("anchorType", *request->anchorType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->coverRate)) {
    query->insert(pair<string, string>("coverRate", *request->coverRate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->digitalHumanType)) {
    query->insert(pair<string, string>("digitalHumanType", *request->digitalHumanType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("pageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resSpecType)) {
    query->insert(pair<string, string>("resSpecType", *request->resSpecType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->useScene)) {
    query->insert(pair<string, string>("useScene", *request->useScene));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAnchor"))},
    {"version", boost::any(string("2024-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/yic/yic-console/openService/v1/digitalHuman/anchorOpen/listAnchor"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAnchorResponse(callApi(params, req, runtime));
}

ListAnchorResponse Alibabacloud_IntelligentCreation20240313::Client::listAnchor(shared_ptr<ListAnchorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listAnchorWithOptions(request, headers, runtime);
}

ListAvatarProjectResponse Alibabacloud_IntelligentCreation20240313::Client::listAvatarProjectWithOptions(shared_ptr<ListAvatarProjectRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListAvatarProjectShrinkRequest> request = make_shared<ListAvatarProjectShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->projectIdList)) {
    request->projectIdListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->projectIdList, make_shared<string>("projectIdList"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->projectIdListShrink)) {
    query->insert(pair<string, string>("projectIdList", *request->projectIdListShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAvatarProject"))},
    {"version", boost::any(string("2024-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/yic/yic-console/openService/v1/avatar/project/listAvatarProject"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAvatarProjectResponse(callApi(params, req, runtime));
}

ListAvatarProjectResponse Alibabacloud_IntelligentCreation20240313::Client::listAvatarProject(shared_ptr<ListAvatarProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listAvatarProjectWithOptions(request, headers, runtime);
}

ListTextThemesResponse Alibabacloud_IntelligentCreation20240313::Client::listTextThemesWithOptions(shared_ptr<ListTextThemesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->industry)) {
    query->insert(pair<string, string>("industry", *request->industry));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTextThemes"))},
    {"version", boost::any(string("2024-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/yic/yic-console/openService/v1/textThemes"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTextThemesResponse(callApi(params, req, runtime));
}

ListTextThemesResponse Alibabacloud_IntelligentCreation20240313::Client::listTextThemes(shared_ptr<ListTextThemesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listTextThemesWithOptions(request, headers, runtime);
}

ListTextsResponse Alibabacloud_IntelligentCreation20240313::Client::listTextsWithOptions(shared_ptr<ListTextsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->generationSource)) {
    query->insert(pair<string, string>("generationSource", *request->generationSource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->industry)) {
    query->insert(pair<string, string>("industry", *request->industry));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    query->insert(pair<string, string>("keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("pageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->publishStatus)) {
    query->insert(pair<string, string>("publishStatus", *request->publishStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->textStyleType)) {
    query->insert(pair<string, string>("textStyleType", *request->textStyleType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->textTheme)) {
    query->insert(pair<string, string>("textTheme", *request->textTheme));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTexts"))},
    {"version", boost::any(string("2024-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/yic/yic-console/openService/v1/texts"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTextsResponse(callApi(params, req, runtime));
}

ListTextsResponse Alibabacloud_IntelligentCreation20240313::Client::listTexts(shared_ptr<ListTextsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listTextsWithOptions(request, headers, runtime);
}

ListVoiceModelsResponse Alibabacloud_IntelligentCreation20240313::Client::listVoiceModelsWithOptions(shared_ptr<ListVoiceModelsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("pageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resSpecType)) {
    query->insert(pair<string, string>("resSpecType", *request->resSpecType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->useScene)) {
    query->insert(pair<string, string>("useScene", *request->useScene));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->voiceType)) {
    query->insert(pair<string, string>("voiceType", *request->voiceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListVoiceModels"))},
    {"version", boost::any(string("2024-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/yic/yic-console/openService/v1/digitalHuman/voiceOpen/listVoiceModels"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListVoiceModelsResponse(callApi(params, req, runtime));
}

ListVoiceModelsResponse Alibabacloud_IntelligentCreation20240313::Client::listVoiceModels(shared_ptr<ListVoiceModelsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listVoiceModelsWithOptions(request, headers, runtime);
}

OperateAvatarProjectResponse Alibabacloud_IntelligentCreation20240313::Client::operateAvatarProjectWithOptions(shared_ptr<OperateAvatarProjectRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->operateType)) {
    body->insert(pair<string, string>("operateType", *request->operateType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    body->insert(pair<string, string>("projectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resChannelNumber)) {
    body->insert(pair<string, long>("resChannelNumber", *request->resChannelNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resType)) {
    body->insert(pair<string, string>("resType", *request->resType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OperateAvatarProject"))},
    {"version", boost::any(string("2024-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/yic/yic-console/openService/v1/avatar/project/operateProjectAvatar"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OperateAvatarProjectResponse(callApi(params, req, runtime));
}

OperateAvatarProjectResponse Alibabacloud_IntelligentCreation20240313::Client::operateAvatarProject(shared_ptr<OperateAvatarProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return operateAvatarProjectWithOptions(request, headers, runtime);
}

QueryAvatarProjectResponse Alibabacloud_IntelligentCreation20240313::Client::queryAvatarProjectWithOptions(shared_ptr<QueryAvatarProjectRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("QueryAvatarProject"))},
    {"version", boost::any(string("2024-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/yic/yic-console/openService/v1/avatar/project/queryAvatarProject"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryAvatarProjectResponse(callApi(params, req, runtime));
}

QueryAvatarProjectResponse Alibabacloud_IntelligentCreation20240313::Client::queryAvatarProject(shared_ptr<QueryAvatarProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return queryAvatarProjectWithOptions(request, headers, runtime);
}

QueryAvatarResourceResponse Alibabacloud_IntelligentCreation20240313::Client::queryAvatarResourceWithOptions(shared_ptr<QueryAvatarResourceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->idempotentId)) {
    query->insert(pair<string, string>("idempotentId", *request->idempotentId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryAvatarResource"))},
    {"version", boost::any(string("2024-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/yic/yic-console/openService/v1/avatar/project/queryResource"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryAvatarResourceResponse(callApi(params, req, runtime));
}

QueryAvatarResourceResponse Alibabacloud_IntelligentCreation20240313::Client::queryAvatarResource(shared_ptr<QueryAvatarResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return queryAvatarResourceWithOptions(request, headers, runtime);
}

QueryIndividuationTextTaskResponse Alibabacloud_IntelligentCreation20240313::Client::queryIndividuationTextTaskWithOptions(shared_ptr<QueryIndividuationTextTaskRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("QueryIndividuationTextTask"))},
    {"version", boost::any(string("2024-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/yic/yic-console/openService/v1/individuationText/queryTextTask"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryIndividuationTextTaskResponse(callApi(params, req, runtime));
}

QueryIndividuationTextTaskResponse Alibabacloud_IntelligentCreation20240313::Client::queryIndividuationTextTask(shared_ptr<QueryIndividuationTextTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return queryIndividuationTextTaskWithOptions(request, headers, runtime);
}

QuerySessionInfoResponse Alibabacloud_IntelligentCreation20240313::Client::querySessionInfoWithOptions(shared_ptr<QuerySessionInfoRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<QuerySessionInfoShrinkRequest> request = make_shared<QuerySessionInfoShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->statusList)) {
    request->statusListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->statusList, make_shared<string>("statusList"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("pageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("projectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->statusListShrink)) {
    query->insert(pair<string, string>("statusList", *request->statusListShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QuerySessionInfo"))},
    {"version", boost::any(string("2024-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/yic/yic-console/openService/v1/avatar/project/querySessionInfo"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QuerySessionInfoResponse(callApi(params, req, runtime));
}

QuerySessionInfoResponse Alibabacloud_IntelligentCreation20240313::Client::querySessionInfo(shared_ptr<QuerySessionInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return querySessionInfoWithOptions(request, headers, runtime);
}

QueryTextStreamResponse Alibabacloud_IntelligentCreation20240313::Client::queryTextStreamWithOptions(shared_ptr<string> textId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryTextStream"))},
    {"version", boost::any(string("2024-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/yic/yic-console/openService/v1/stream/queryTextStream/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(textId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryTextStreamResponse(callApi(params, req, runtime));
}

QueryTextStreamResponse Alibabacloud_IntelligentCreation20240313::Client::queryTextStream(shared_ptr<string> textId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return queryTextStreamWithOptions(textId, headers, runtime);
}

SaveAvatarProjectResponse Alibabacloud_IntelligentCreation20240313::Client::saveAvatarProjectWithOptions(shared_ptr<SaveAvatarProjectRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentId)) {
    body->insert(pair<string, string>("agentId", *request->agentId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<SaveAvatarProjectRequestFrames>>(request->frames)) {
    body->insert(pair<string, vector<SaveAvatarProjectRequestFrames>>("frames", *request->frames));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operateType)) {
    body->insert(pair<string, string>("operateType", *request->operateType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    body->insert(pair<string, string>("projectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    body->insert(pair<string, string>("projectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resSpecType)) {
    body->insert(pair<string, string>("resSpecType", *request->resSpecType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scaleType)) {
    body->insert(pair<string, string>("scaleType", *request->scaleType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveAvatarProject"))},
    {"version", boost::any(string("2024-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/yic/yic-console/openService/v1/avatar/project/saveAvatarProject"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveAvatarProjectResponse(callApi(params, req, runtime));
}

SaveAvatarProjectResponse Alibabacloud_IntelligentCreation20240313::Client::saveAvatarProject(shared_ptr<SaveAvatarProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return saveAvatarProjectWithOptions(request, headers, runtime);
}

SelectImageTaskResponse Alibabacloud_IntelligentCreation20240313::Client::selectImageTaskWithOptions(shared_ptr<string> taskId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SelectImageTask"))},
    {"version", boost::any(string("2024-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/yic/yic-console/openService/v1/images/portrait/select/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(taskId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SelectImageTaskResponse(callApi(params, req, runtime));
}

SelectImageTaskResponse Alibabacloud_IntelligentCreation20240313::Client::selectImageTask(shared_ptr<string> taskId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return selectImageTaskWithOptions(taskId, headers, runtime);
}

SelectResourceResponse Alibabacloud_IntelligentCreation20240313::Client::selectResourceWithOptions(shared_ptr<SelectResourceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->idempotentId)) {
    query->insert(pair<string, string>("idempotentId", *request->idempotentId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SelectResource"))},
    {"version", boost::any(string("2024-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/yic/yic-console/openService/v1/digitalHuman/project/commands/overview"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SelectResourceResponse(callApi(params, req, runtime));
}

SelectResourceResponse Alibabacloud_IntelligentCreation20240313::Client::selectResource(shared_ptr<SelectResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return selectResourceWithOptions(request, headers, runtime);
}

SendSdkMessageResponse Alibabacloud_IntelligentCreation20240313::Client::sendSdkMessageWithOptions(shared_ptr<SendSdkMessageRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->data)) {
    body->insert(pair<string, string>("data", *request->data));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->moduleName)) {
    body->insert(pair<string, string>("moduleName", *request->moduleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operationName)) {
    body->insert(pair<string, string>("operationName", *request->operationName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("userId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SendSdkMessage"))},
    {"version", boost::any(string("2024-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/yic/yic-console/openService/v1/sdk/sendMessage"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SendSdkMessageResponse(callApi(params, req, runtime));
}

SendSdkMessageResponse Alibabacloud_IntelligentCreation20240313::Client::sendSdkMessage(shared_ptr<SendSdkMessageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return sendSdkMessageWithOptions(request, headers, runtime);
}

SendTextMsgResponse Alibabacloud_IntelligentCreation20240313::Client::sendTextMsgWithOptions(shared_ptr<SendTextMsgRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    body->insert(pair<string, string>("projectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestId)) {
    body->insert(pair<string, string>("requestId", *request->requestId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    body->insert(pair<string, string>("sessionId", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    body->insert(pair<string, string>("text", *request->text));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    body->insert(pair<string, long>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SendTextMsg"))},
    {"version", boost::any(string("2024-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/yic/yic-console/openService/v1/avatar/project/sendTextMsg"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SendTextMsgResponse(callApi(params, req, runtime));
}

SendTextMsgResponse Alibabacloud_IntelligentCreation20240313::Client::sendTextMsg(shared_ptr<SendTextMsgRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return sendTextMsgWithOptions(request, headers, runtime);
}

StartAvatarSessionResponse Alibabacloud_IntelligentCreation20240313::Client::startAvatarSessionWithOptions(shared_ptr<StartAvatarSessionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->customPushUrl)) {
    body->insert(pair<string, string>("customPushUrl", *request->customPushUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    body->insert(pair<string, string>("projectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestId)) {
    body->insert(pair<string, string>("requestId", *request->requestId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartAvatarSession"))},
    {"version", boost::any(string("2024-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/yic/yic-console/openService/v1/avatar/project/startAvatarSession"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartAvatarSessionResponse(callApi(params, req, runtime));
}

StartAvatarSessionResponse Alibabacloud_IntelligentCreation20240313::Client::startAvatarSession(shared_ptr<StartAvatarSessionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return startAvatarSessionWithOptions(request, headers, runtime);
}

StopAvatarSessionResponse Alibabacloud_IntelligentCreation20240313::Client::stopAvatarSessionWithOptions(shared_ptr<StopAvatarSessionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    body->insert(pair<string, string>("projectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    body->insert(pair<string, string>("sessionId", *request->sessionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopAvatarSession"))},
    {"version", boost::any(string("2024-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/yic/yic-console/openService/v1/avatar/project/stopAvatarSession"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopAvatarSessionResponse(callApi(params, req, runtime));
}

StopAvatarSessionResponse Alibabacloud_IntelligentCreation20240313::Client::stopAvatarSession(shared_ptr<StopAvatarSessionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return stopAvatarSessionWithOptions(request, headers, runtime);
}

StopProjectTaskResponse Alibabacloud_IntelligentCreation20240313::Client::stopProjectTaskWithOptions(shared_ptr<StopProjectTaskRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("taskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopProjectTask"))},
    {"version", boost::any(string("2024-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/yic/yic-console/openService/v1/digitalHuman/project/stop"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopProjectTaskResponse(callApi(params, req, runtime));
}

StopProjectTaskResponse Alibabacloud_IntelligentCreation20240313::Client::stopProjectTask(shared_ptr<StopProjectTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return stopProjectTaskWithOptions(request, headers, runtime);
}

SubmitProjectTaskResponse Alibabacloud_IntelligentCreation20240313::Client::submitProjectTaskWithOptions(shared_ptr<SubmitProjectTaskRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<SubmitProjectTaskRequestFrames>>(request->frames)) {
    body->insert(pair<string, vector<SubmitProjectTaskRequestFrames>>("frames", *request->frames));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scaleType)) {
    body->insert(pair<string, string>("scaleType", *request->scaleType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->subtitleTag)) {
    body->insert(pair<string, long>("subtitleTag", *request->subtitleTag));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->transparentBackground)) {
    body->insert(pair<string, long>("transparentBackground", *request->transparentBackground));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitProjectTask"))},
    {"version", boost::any(string("2024-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/yic/yic-console/openService/v1/digitalHuman/project/submitProjectTask"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitProjectTaskResponse(callApi(params, req, runtime));
}

SubmitProjectTaskResponse Alibabacloud_IntelligentCreation20240313::Client::submitProjectTask(shared_ptr<SubmitProjectTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return submitProjectTaskWithOptions(request, headers, runtime);
}

TransferPortraitStyleResponse Alibabacloud_IntelligentCreation20240313::Client::transferPortraitStyleWithOptions(shared_ptr<TransferPortraitStyleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->height)) {
    body->insert(pair<string, long>("height", *request->height));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageUrl)) {
    body->insert(pair<string, string>("imageUrl", *request->imageUrl));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->numbers)) {
    body->insert(pair<string, long>("numbers", *request->numbers));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->redrawAmplitude)) {
    body->insert(pair<string, long>("redrawAmplitude", *request->redrawAmplitude));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->style)) {
    body->insert(pair<string, long>("style", *request->style));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->width)) {
    body->insert(pair<string, long>("width", *request->width));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TransferPortraitStyle"))},
    {"version", boost::any(string("2024-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/yic/yic-console/openService/v1/images/portrait/transferPortraitStyle"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TransferPortraitStyleResponse(callApi(params, req, runtime));
}

TransferPortraitStyleResponse Alibabacloud_IntelligentCreation20240313::Client::transferPortraitStyle(shared_ptr<TransferPortraitStyleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return transferPortraitStyleWithOptions(request, headers, runtime);
}

