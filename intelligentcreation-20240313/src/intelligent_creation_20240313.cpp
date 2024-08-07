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

ListAnchorResponse Alibabacloud_IntelligentCreation20240313::Client::listAnchorWithOptions(shared_ptr<ListAnchorRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
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

