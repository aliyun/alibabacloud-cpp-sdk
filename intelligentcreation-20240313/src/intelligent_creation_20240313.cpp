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

