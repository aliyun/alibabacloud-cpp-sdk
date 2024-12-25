// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/dian_jin_20240628.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <alibabacloud/open_platform_20191219.hpp>
#include <alibabacloud/oss.hpp>
#include <alibabacloud/ossutil.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/file_form.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_DianJin20240628;

Alibabacloud_DianJin20240628::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("dianjin"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_DianJin20240628::Client::getEndpoint(shared_ptr<string> productId,
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

CreateAnnualDocSummaryTaskResponse Alibabacloud_DianJin20240628::Client::createAnnualDocSummaryTaskWithOptions(shared_ptr<string> workspaceId,
                                                                                                               shared_ptr<CreateAnnualDocSummaryTaskRequest> request,
                                                                                                               shared_ptr<map<string, string>> headers,
                                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->anaYears)) {
    body->insert(pair<string, vector<long>>("anaYears", *request->anaYears));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateAnnualDocSummaryTaskRequestDocInfos>>(request->docInfos)) {
    body->insert(pair<string, vector<CreateAnnualDocSummaryTaskRequestDocInfos>>("docInfos", *request->docInfos));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableTable)) {
    body->insert(pair<string, bool>("enableTable", *request->enableTable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instruction)) {
    body->insert(pair<string, string>("instruction", *request->instruction));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelId)) {
    body->insert(pair<string, string>("modelId", *request->modelId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAnnualDocSummaryTask"))},
    {"version", boost::any(string("2024-06-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/api/task/summary/doc/annual"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAnnualDocSummaryTaskResponse(callApi(params, req, runtime));
}

CreateAnnualDocSummaryTaskResponse Alibabacloud_DianJin20240628::Client::createAnnualDocSummaryTask(shared_ptr<string> workspaceId, shared_ptr<CreateAnnualDocSummaryTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createAnnualDocSummaryTaskWithOptions(workspaceId, request, headers, runtime);
}

CreateDialogResponse Alibabacloud_DianJin20240628::Client::createDialogWithOptions(shared_ptr<string> workspaceId,
                                                                                   shared_ptr<CreateDialogRequest> request,
                                                                                   shared_ptr<map<string, string>> headers,
                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channel)) {
    body->insert(pair<string, string>("channel", *request->channel));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableLibrary)) {
    body->insert(pair<string, bool>("enableLibrary", *request->enableLibrary));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->metaData)) {
    body->insert(pair<string, map<string, boost::any>>("metaData", *request->metaData));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->playCode)) {
    body->insert(pair<string, string>("playCode", *request->playCode));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->qaLibraryList)) {
    body->insert(pair<string, vector<string>>("qaLibraryList", *request->qaLibraryList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestId)) {
    body->insert(pair<string, string>("requestId", *request->requestId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->selfDirected)) {
    body->insert(pair<string, bool>("selfDirected", *request->selfDirected));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDialog"))},
    {"version", boost::any(string("2024-06-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/api/virtualHuman/dialog/create"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDialogResponse(callApi(params, req, runtime));
}

CreateDialogResponse Alibabacloud_DianJin20240628::Client::createDialog(shared_ptr<string> workspaceId, shared_ptr<CreateDialogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createDialogWithOptions(workspaceId, request, headers, runtime);
}

CreateDocsSummaryTaskResponse Alibabacloud_DianJin20240628::Client::createDocsSummaryTaskWithOptions(shared_ptr<string> workspaceId,
                                                                                                     shared_ptr<CreateDocsSummaryTaskRequest> request,
                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<CreateDocsSummaryTaskRequestDocInfos>>(request->docInfos)) {
    body->insert(pair<string, vector<CreateDocsSummaryTaskRequestDocInfos>>("docInfos", *request->docInfos));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableTable)) {
    body->insert(pair<string, bool>("enableTable", *request->enableTable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instruction)) {
    body->insert(pair<string, string>("instruction", *request->instruction));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelId)) {
    body->insert(pair<string, string>("modelId", *request->modelId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDocsSummaryTask"))},
    {"version", boost::any(string("2024-06-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/api/task/summary/docs"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDocsSummaryTaskResponse(callApi(params, req, runtime));
}

CreateDocsSummaryTaskResponse Alibabacloud_DianJin20240628::Client::createDocsSummaryTask(shared_ptr<string> workspaceId, shared_ptr<CreateDocsSummaryTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createDocsSummaryTaskWithOptions(workspaceId, request, headers, runtime);
}

CreateFinReportSummaryTaskResponse Alibabacloud_DianJin20240628::Client::createFinReportSummaryTaskWithOptions(shared_ptr<string> workspaceId,
                                                                                                               shared_ptr<CreateFinReportSummaryTaskRequest> request,
                                                                                                               shared_ptr<map<string, string>> headers,
                                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->docId)) {
    body->insert(pair<string, string>("docId", *request->docId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableTable)) {
    body->insert(pair<string, bool>("enableTable", *request->enableTable));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endPage)) {
    body->insert(pair<string, long>("endPage", *request->endPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instruction)) {
    body->insert(pair<string, string>("instruction", *request->instruction));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->libraryId)) {
    body->insert(pair<string, string>("libraryId", *request->libraryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelId)) {
    body->insert(pair<string, string>("modelId", *request->modelId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startPage)) {
    body->insert(pair<string, long>("startPage", *request->startPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskType)) {
    body->insert(pair<string, string>("taskType", *request->taskType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateFinReportSummaryTask"))},
    {"version", boost::any(string("2024-06-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/api/task/summary"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateFinReportSummaryTaskResponse(callApi(params, req, runtime));
}

CreateFinReportSummaryTaskResponse Alibabacloud_DianJin20240628::Client::createFinReportSummaryTask(shared_ptr<string> workspaceId, shared_ptr<CreateFinReportSummaryTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createFinReportSummaryTaskWithOptions(workspaceId, request, headers, runtime);
}

CreateLibraryResponse Alibabacloud_DianJin20240628::Client::createLibraryWithOptions(shared_ptr<string> workspaceId,
                                                                                     shared_ptr<CreateLibraryRequest> request,
                                                                                     shared_ptr<map<string, string>> headers,
                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<CreateLibraryRequestIndexSetting>(request->indexSetting)) {
    body->insert(pair<string, CreateLibraryRequestIndexSetting>("indexSetting", *request->indexSetting));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->libraryName)) {
    body->insert(pair<string, string>("libraryName", *request->libraryName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateLibrary"))},
    {"version", boost::any(string("2024-06-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/api/library/create"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateLibraryResponse(callApi(params, req, runtime));
}

CreateLibraryResponse Alibabacloud_DianJin20240628::Client::createLibrary(shared_ptr<string> workspaceId, shared_ptr<CreateLibraryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createLibraryWithOptions(workspaceId, request, headers, runtime);
}

CreatePdfTranslateTaskResponse Alibabacloud_DianJin20240628::Client::createPdfTranslateTaskWithOptions(shared_ptr<string> workspaceId,
                                                                                                       shared_ptr<CreatePdfTranslateTaskRequest> request,
                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->docId)) {
    body->insert(pair<string, string>("docId", *request->docId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->knowledge)) {
    body->insert(pair<string, string>("knowledge", *request->knowledge));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->libraryId)) {
    body->insert(pair<string, string>("libraryId", *request->libraryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelId)) {
    body->insert(pair<string, string>("modelId", *request->modelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->translateTo)) {
    body->insert(pair<string, string>("translateTo", *request->translateTo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreatePdfTranslateTask"))},
    {"version", boost::any(string("2024-06-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/api/task/pdfTranslate"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreatePdfTranslateTaskResponse(callApi(params, req, runtime));
}

CreatePdfTranslateTaskResponse Alibabacloud_DianJin20240628::Client::createPdfTranslateTask(shared_ptr<string> workspaceId, shared_ptr<CreatePdfTranslateTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createPdfTranslateTaskWithOptions(workspaceId, request, headers, runtime);
}

CreatePredefinedDocumentResponse Alibabacloud_DianJin20240628::Client::createPredefinedDocumentWithOptions(shared_ptr<string> workspaceId,
                                                                                                           shared_ptr<CreatePredefinedDocumentRequest> request,
                                                                                                           shared_ptr<map<string, string>> headers,
                                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<CreatePredefinedDocumentRequestChunks>>(request->chunks)) {
    body->insert(pair<string, vector<CreatePredefinedDocumentRequestChunks>>("chunks", *request->chunks));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->libraryId)) {
    body->insert(pair<string, string>("libraryId", *request->libraryId));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->metadata)) {
    body->insert(pair<string, map<string, boost::any>>("metadata", *request->metadata));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    body->insert(pair<string, string>("title", *request->title));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreatePredefinedDocument"))},
    {"version", boost::any(string("2024-06-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/api/library/document/createPredefinedDocument"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreatePredefinedDocumentResponse(callApi(params, req, runtime));
}

CreatePredefinedDocumentResponse Alibabacloud_DianJin20240628::Client::createPredefinedDocument(shared_ptr<string> workspaceId, shared_ptr<CreatePredefinedDocumentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createPredefinedDocumentWithOptions(workspaceId, request, headers, runtime);
}

CreateQualityCheckTaskResponse Alibabacloud_DianJin20240628::Client::createQualityCheckTaskWithOptions(shared_ptr<string> workspaceId,
                                                                                                       shared_ptr<CreateQualityCheckTaskRequest> request,
                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<CreateQualityCheckTaskRequestConversationList>(request->conversationList)) {
    body->insert(pair<string, CreateQualityCheckTaskRequestConversationList>("conversationList", *request->conversationList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gmtService)) {
    body->insert(pair<string, string>("gmtService", *request->gmtService));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(request->metaData)) {
    body->insert(pair<string, map<string, string>>("metaData", *request->metaData));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->qualityGroup)) {
    body->insert(pair<string, vector<string>>("qualityGroup", *request->qualityGroup));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestId)) {
    body->insert(pair<string, string>("requestId", *request->requestId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateQualityCheckTask"))},
    {"version", boost::any(string("2024-06-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/api/qualitycheck/task/submit"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateQualityCheckTaskResponse(callApi(params, req, runtime));
}

CreateQualityCheckTaskResponse Alibabacloud_DianJin20240628::Client::createQualityCheckTask(shared_ptr<string> workspaceId, shared_ptr<CreateQualityCheckTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createQualityCheckTaskWithOptions(workspaceId, request, headers, runtime);
}

DeleteDocumentResponse Alibabacloud_DianJin20240628::Client::deleteDocumentWithOptions(shared_ptr<string> workspaceId,
                                                                                       shared_ptr<DeleteDocumentRequest> request,
                                                                                       shared_ptr<map<string, string>> headers,
                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->docIds)) {
    body->insert(pair<string, vector<string>>("docIds", *request->docIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->libraryId)) {
    body->insert(pair<string, string>("libraryId", *request->libraryId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDocument"))},
    {"version", boost::any(string("2024-06-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/api/library/document/delete"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDocumentResponse(callApi(params, req, runtime));
}

DeleteDocumentResponse Alibabacloud_DianJin20240628::Client::deleteDocument(shared_ptr<string> workspaceId, shared_ptr<DeleteDocumentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteDocumentWithOptions(workspaceId, request, headers, runtime);
}

DeleteLibraryResponse Alibabacloud_DianJin20240628::Client::deleteLibraryWithOptions(shared_ptr<string> workspaceId,
                                                                                     shared_ptr<DeleteLibraryRequest> request,
                                                                                     shared_ptr<map<string, string>> headers,
                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->libraryId)) {
    query->insert(pair<string, string>("libraryId", *request->libraryId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteLibrary"))},
    {"version", boost::any(string("2024-06-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/api/library/delete"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteLibraryResponse(callApi(params, req, runtime));
}

DeleteLibraryResponse Alibabacloud_DianJin20240628::Client::deleteLibrary(shared_ptr<string> workspaceId, shared_ptr<DeleteLibraryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteLibraryWithOptions(workspaceId, request, headers, runtime);
}

EvictTaskResponse Alibabacloud_DianJin20240628::Client::evictTaskWithOptions(shared_ptr<string> workspaceId,
                                                                             shared_ptr<EvictTaskRequest> request,
                                                                             shared_ptr<map<string, string>> headers,
                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("EvictTask"))},
    {"version", boost::any(string("2024-06-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/api/task/evict"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EvictTaskResponse(callApi(params, req, runtime));
}

EvictTaskResponse Alibabacloud_DianJin20240628::Client::evictTask(shared_ptr<string> workspaceId, shared_ptr<EvictTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return evictTaskWithOptions(workspaceId, request, headers, runtime);
}

GenDocQaResultResponse Alibabacloud_DianJin20240628::Client::genDocQaResultWithOptions(shared_ptr<string> workspaceId,
                                                                                       shared_ptr<GenDocQaResultRequest> request,
                                                                                       shared_ptr<map<string, string>> headers,
                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->docId)) {
    body->insert(pair<string, string>("docId", *request->docId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->libraryId)) {
    body->insert(pair<string, string>("libraryId", *request->libraryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestId)) {
    body->insert(pair<string, string>("requestId", *request->requestId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GenDocQaResult"))},
    {"version", boost::any(string("2024-06-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/api/virtualHuman/qa/parse"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GenDocQaResultResponse(callApi(params, req, runtime));
}

GenDocQaResultResponse Alibabacloud_DianJin20240628::Client::genDocQaResult(shared_ptr<string> workspaceId, shared_ptr<GenDocQaResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return genDocQaResultWithOptions(workspaceId, request, headers, runtime);
}

GetAppConfigResponse Alibabacloud_DianJin20240628::Client::getAppConfigWithOptions(shared_ptr<string> workspaceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAppConfig"))},
    {"version", boost::any(string("2024-06-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/api/app/config"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAppConfigResponse(callApi(params, req, runtime));
}

GetAppConfigResponse Alibabacloud_DianJin20240628::Client::getAppConfig(shared_ptr<string> workspaceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getAppConfigWithOptions(workspaceId, headers, runtime);
}

GetChatQuestionRespResponse Alibabacloud_DianJin20240628::Client::getChatQuestionRespWithOptions(shared_ptr<string> workspaceId,
                                                                                                 shared_ptr<GetChatQuestionRespRequest> request,
                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->batchId)) {
    body->insert(pair<string, string>("batchId", *request->batchId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    body->insert(pair<string, string>("sessionId", *request->sessionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetChatQuestionResp"))},
    {"version", boost::any(string("2024-06-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/api/virtualHuman/chat/query"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetChatQuestionRespResponse(callApi(params, req, runtime));
}

GetChatQuestionRespResponse Alibabacloud_DianJin20240628::Client::getChatQuestionResp(shared_ptr<string> workspaceId, shared_ptr<GetChatQuestionRespRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getChatQuestionRespWithOptions(workspaceId, request, headers, runtime);
}

GetDocumentChunkListResponse Alibabacloud_DianJin20240628::Client::getDocumentChunkListWithOptions(shared_ptr<string> workspaceId,
                                                                                                   shared_ptr<GetDocumentChunkListRequest> request,
                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->chunkIdList)) {
    body->insert(pair<string, vector<string>>("chunkIdList", *request->chunkIdList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->docId)) {
    body->insert(pair<string, string>("docId", *request->docId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->libraryId)) {
    body->insert(pair<string, string>("libraryId", *request->libraryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    body->insert(pair<string, string>("order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderBy)) {
    body->insert(pair<string, string>("orderBy", *request->orderBy));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    body->insert(pair<string, long>("page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchQuery)) {
    body->insert(pair<string, string>("searchQuery", *request->searchQuery));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDocumentChunkList"))},
    {"version", boost::any(string("2024-06-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/api/library/getDocumentChunk"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDocumentChunkListResponse(callApi(params, req, runtime));
}

GetDocumentChunkListResponse Alibabacloud_DianJin20240628::Client::getDocumentChunkList(shared_ptr<string> workspaceId, shared_ptr<GetDocumentChunkListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getDocumentChunkListWithOptions(workspaceId, request, headers, runtime);
}

GetDocumentListResponse Alibabacloud_DianJin20240628::Client::getDocumentListWithOptions(shared_ptr<string> workspaceId,
                                                                                         shared_ptr<GetDocumentListRequest> request,
                                                                                         shared_ptr<map<string, string>> headers,
                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->libraryId)) {
    query->insert(pair<string, string>("libraryId", *request->libraryId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDocumentList"))},
    {"version", boost::any(string("2024-06-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/api/library/listDocument"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDocumentListResponse(callApi(params, req, runtime));
}

GetDocumentListResponse Alibabacloud_DianJin20240628::Client::getDocumentList(shared_ptr<string> workspaceId, shared_ptr<GetDocumentListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getDocumentListWithOptions(workspaceId, request, headers, runtime);
}

GetDocumentUrlResponse Alibabacloud_DianJin20240628::Client::getDocumentUrlWithOptions(shared_ptr<string> workspaceId,
                                                                                       shared_ptr<GetDocumentUrlRequest> request,
                                                                                       shared_ptr<map<string, string>> headers,
                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->documentId)) {
    query->insert(pair<string, string>("documentId", *request->documentId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDocumentUrl"))},
    {"version", boost::any(string("2024-06-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/api/library/document/url"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDocumentUrlResponse(callApi(params, req, runtime));
}

GetDocumentUrlResponse Alibabacloud_DianJin20240628::Client::getDocumentUrl(shared_ptr<string> workspaceId, shared_ptr<GetDocumentUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getDocumentUrlWithOptions(workspaceId, request, headers, runtime);
}

GetFilterDocumentListResponse Alibabacloud_DianJin20240628::Client::getFilterDocumentListWithOptions(shared_ptr<string> workspaceId,
                                                                                                     shared_ptr<GetFilterDocumentListRequest> request,
                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<GetFilterDocumentListRequestAnd>>(request->and_)) {
    body->insert(pair<string, vector<GetFilterDocumentListRequestAnd>>("and_", *request->and_));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->docIdList)) {
    body->insert(pair<string, vector<string>>("docIdList", *request->docIdList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->libraryId)) {
    body->insert(pair<string, string>("libraryId", *request->libraryId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<GetFilterDocumentListRequestOr>>(request->or_)) {
    body->insert(pair<string, vector<GetFilterDocumentListRequestOr>>("or_", *request->or_));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    body->insert(pair<string, long>("page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->status)) {
    body->insert(pair<string, vector<string>>("status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetFilterDocumentList"))},
    {"version", boost::any(string("2024-06-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/api/library/filterDocument"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetFilterDocumentListResponse(callApi(params, req, runtime));
}

GetFilterDocumentListResponse Alibabacloud_DianJin20240628::Client::getFilterDocumentList(shared_ptr<string> workspaceId, shared_ptr<GetFilterDocumentListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getFilterDocumentListWithOptions(workspaceId, request, headers, runtime);
}

GetHistoryListByBizTypeResponse Alibabacloud_DianJin20240628::Client::getHistoryListByBizTypeWithOptions(shared_ptr<string> workspaceId,
                                                                                                         shared_ptr<GetHistoryListByBizTypeRequest> request,
                                                                                                         shared_ptr<map<string, string>> headers,
                                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("bizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizType)) {
    query->insert(pair<string, string>("bizType", *request->bizType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetHistoryListByBizType"))},
    {"version", boost::any(string("2024-06-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/api/history/list"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetHistoryListByBizTypeResponse(callApi(params, req, runtime));
}

GetHistoryListByBizTypeResponse Alibabacloud_DianJin20240628::Client::getHistoryListByBizType(shared_ptr<string> workspaceId, shared_ptr<GetHistoryListByBizTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getHistoryListByBizTypeWithOptions(workspaceId, request, headers, runtime);
}

GetLibraryResponse Alibabacloud_DianJin20240628::Client::getLibraryWithOptions(shared_ptr<string> workspaceId,
                                                                               shared_ptr<GetLibraryRequest> request,
                                                                               shared_ptr<map<string, string>> headers,
                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->libraryId)) {
    query->insert(pair<string, string>("libraryId", *request->libraryId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetLibrary"))},
    {"version", boost::any(string("2024-06-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/api/library/get"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetLibraryResponse(callApi(params, req, runtime));
}

GetLibraryResponse Alibabacloud_DianJin20240628::Client::getLibrary(shared_ptr<string> workspaceId, shared_ptr<GetLibraryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getLibraryWithOptions(workspaceId, request, headers, runtime);
}

GetLibraryListResponse Alibabacloud_DianJin20240628::Client::getLibraryListWithOptions(shared_ptr<string> workspaceId,
                                                                                       shared_ptr<GetLibraryListRequest> request,
                                                                                       shared_ptr<map<string, string>> headers,
                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->query)) {
    query->insert(pair<string, string>("query", *request->query));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetLibraryList"))},
    {"version", boost::any(string("2024-06-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/api/library/list"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetLibraryListResponse(callApi(params, req, runtime));
}

GetLibraryListResponse Alibabacloud_DianJin20240628::Client::getLibraryList(shared_ptr<string> workspaceId, shared_ptr<GetLibraryListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getLibraryListWithOptions(workspaceId, request, headers, runtime);
}

GetParseResultResponse Alibabacloud_DianJin20240628::Client::getParseResultWithOptions(shared_ptr<string> workspaceId,
                                                                                       shared_ptr<GetParseResultRequest> request,
                                                                                       shared_ptr<map<string, string>> headers,
                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->docId)) {
    body->insert(pair<string, string>("docId", *request->docId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->libraryId)) {
    body->insert(pair<string, string>("libraryId", *request->libraryId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useUrlResult)) {
    body->insert(pair<string, bool>("useUrlResult", *request->useUrlResult));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetParseResult"))},
    {"version", boost::any(string("2024-06-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/api/library/document/getParseResult"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetParseResultResponse(callApi(params, req, runtime));
}

GetParseResultResponse Alibabacloud_DianJin20240628::Client::getParseResult(shared_ptr<string> workspaceId, shared_ptr<GetParseResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getParseResultWithOptions(workspaceId, request, headers, runtime);
}

GetQualityCheckTaskResultResponse Alibabacloud_DianJin20240628::Client::getQualityCheckTaskResultWithOptions(shared_ptr<string> workspaceId,
                                                                                                             shared_ptr<GetQualityCheckTaskResultRequest> request,
                                                                                                             shared_ptr<map<string, string>> headers,
                                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("GetQualityCheckTaskResult"))},
    {"version", boost::any(string("2024-06-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/api/qualitycheck/task/query"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetQualityCheckTaskResultResponse(callApi(params, req, runtime));
}

GetQualityCheckTaskResultResponse Alibabacloud_DianJin20240628::Client::getQualityCheckTaskResult(shared_ptr<string> workspaceId, shared_ptr<GetQualityCheckTaskResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getQualityCheckTaskResultWithOptions(workspaceId, request, headers, runtime);
}

GetSummaryTaskResultResponse Alibabacloud_DianJin20240628::Client::getSummaryTaskResultWithOptions(shared_ptr<string> workspaceId,
                                                                                                   shared_ptr<GetSummaryTaskResultRequest> request,
                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("GetSummaryTaskResult"))},
    {"version", boost::any(string("2024-06-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/api/task/summary/result"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSummaryTaskResultResponse(callApi(params, req, runtime));
}

GetSummaryTaskResultResponse Alibabacloud_DianJin20240628::Client::getSummaryTaskResult(shared_ptr<string> workspaceId, shared_ptr<GetSummaryTaskResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getSummaryTaskResultWithOptions(workspaceId, request, headers, runtime);
}

GetTaskResultResponse Alibabacloud_DianJin20240628::Client::getTaskResultWithOptions(shared_ptr<string> workspaceId,
                                                                                     shared_ptr<GetTaskResultRequest> request,
                                                                                     shared_ptr<map<string, string>> headers,
                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2024-06-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/api/task/result"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTaskResultResponse(callApi(params, req, runtime));
}

GetTaskResultResponse Alibabacloud_DianJin20240628::Client::getTaskResult(shared_ptr<string> workspaceId, shared_ptr<GetTaskResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getTaskResultWithOptions(workspaceId, request, headers, runtime);
}

GetTaskStatusResponse Alibabacloud_DianJin20240628::Client::getTaskStatusWithOptions(shared_ptr<string> workspaceId,
                                                                                     shared_ptr<GetTaskStatusRequest> request,
                                                                                     shared_ptr<map<string, string>> headers,
                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("GetTaskStatus"))},
    {"version", boost::any(string("2024-06-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/api/task/status"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTaskStatusResponse(callApi(params, req, runtime));
}

GetTaskStatusResponse Alibabacloud_DianJin20240628::Client::getTaskStatus(shared_ptr<string> workspaceId, shared_ptr<GetTaskStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getTaskStatusWithOptions(workspaceId, request, headers, runtime);
}

InvokePluginResponse Alibabacloud_DianJin20240628::Client::invokePluginWithOptions(shared_ptr<string> workspaceId,
                                                                                   shared_ptr<InvokePluginRequest> request,
                                                                                   shared_ptr<map<string, string>> headers,
                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->params)) {
    body->insert(pair<string, map<string, boost::any>>("params", *request->params));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pluginId)) {
    body->insert(pair<string, string>("pluginId", *request->pluginId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InvokePlugin"))},
    {"version", boost::any(string("2024-06-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/api/plugin/invoke"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InvokePluginResponse(callApi(params, req, runtime));
}

InvokePluginResponse Alibabacloud_DianJin20240628::Client::invokePlugin(shared_ptr<string> workspaceId, shared_ptr<InvokePluginRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return invokePluginWithOptions(workspaceId, request, headers, runtime);
}

PreviewDocumentResponse Alibabacloud_DianJin20240628::Client::previewDocumentWithOptions(shared_ptr<string> workspaceId,
                                                                                         shared_ptr<PreviewDocumentRequest> request,
                                                                                         shared_ptr<map<string, string>> headers,
                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->documentId)) {
    query->insert(pair<string, string>("documentId", *request->documentId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PreviewDocument"))},
    {"version", boost::any(string("2024-06-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/api/library/document/preview"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PreviewDocumentResponse(callApi(params, req, runtime));
}

PreviewDocumentResponse Alibabacloud_DianJin20240628::Client::previewDocument(shared_ptr<string> workspaceId, shared_ptr<PreviewDocumentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return previewDocumentWithOptions(workspaceId, request, headers, runtime);
}

ReIndexResponse Alibabacloud_DianJin20240628::Client::reIndexWithOptions(shared_ptr<string> workspaceId,
                                                                         shared_ptr<ReIndexRequest> request,
                                                                         shared_ptr<map<string, string>> headers,
                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->documentId)) {
    query->insert(pair<string, string>("documentId", *request->documentId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReIndex"))},
    {"version", boost::any(string("2024-06-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/api/library/document/reIndex"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReIndexResponse(callApi(params, req, runtime));
}

ReIndexResponse Alibabacloud_DianJin20240628::Client::reIndex(shared_ptr<string> workspaceId, shared_ptr<ReIndexRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return reIndexWithOptions(workspaceId, request, headers, runtime);
}

RealTimeDialogResponse Alibabacloud_DianJin20240628::Client::realTimeDialogWithOptions(shared_ptr<string> workspaceId,
                                                                                       shared_ptr<RealTimeDialogRequest> request,
                                                                                       shared_ptr<map<string, string>> headers,
                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->analysis)) {
    body->insert(pair<string, bool>("analysis", *request->analysis));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizType)) {
    body->insert(pair<string, string>("bizType", *request->bizType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<RealTimeDialogRequestConversationModel>>(request->conversationModel)) {
    body->insert(pair<string, vector<RealTimeDialogRequestConversationModel>>("conversationModel", *request->conversationModel));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dialogMemoryTurns)) {
    body->insert(pair<string, long>("dialogMemoryTurns", *request->dialogMemoryTurns));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->metaData)) {
    body->insert(pair<string, map<string, boost::any>>("metaData", *request->metaData));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->recommend)) {
    body->insert(pair<string, bool>("recommend", *request->recommend));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    body->insert(pair<string, string>("sessionId", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->stream)) {
    body->insert(pair<string, bool>("stream", *request->stream));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RealTimeDialog"))},
    {"version", boost::any(string("2024-06-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/api/realtime/dialog/chat"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RealTimeDialogResponse(callApi(params, req, runtime));
}

RealTimeDialogResponse Alibabacloud_DianJin20240628::Client::realTimeDialog(shared_ptr<string> workspaceId, shared_ptr<RealTimeDialogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return realTimeDialogWithOptions(workspaceId, request, headers, runtime);
}

RebuildTaskResponse Alibabacloud_DianJin20240628::Client::rebuildTaskWithOptions(shared_ptr<string> workspaceId,
                                                                                 shared_ptr<RebuildTaskRequest> request,
                                                                                 shared_ptr<map<string, string>> headers,
                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->taskIds)) {
    body->insert(pair<string, vector<string>>("taskIds", *request->taskIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RebuildTask"))},
    {"version", boost::any(string("2024-06-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/api/task/rebuild"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RebuildTaskResponse(callApi(params, req, runtime));
}

RebuildTaskResponse Alibabacloud_DianJin20240628::Client::rebuildTask(shared_ptr<string> workspaceId, shared_ptr<RebuildTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return rebuildTaskWithOptions(workspaceId, request, headers, runtime);
}

RecallDocumentResponse Alibabacloud_DianJin20240628::Client::recallDocumentWithOptions(shared_ptr<string> workspaceId,
                                                                                       shared_ptr<RecallDocumentRequest> request,
                                                                                       shared_ptr<map<string, string>> headers,
                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<RecallDocumentRequestFilters>>(request->filters)) {
    body->insert(pair<string, vector<RecallDocumentRequestFilters>>("filters", *request->filters));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->query)) {
    body->insert(pair<string, string>("query", *request->query));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->rearrangement)) {
    body->insert(pair<string, bool>("rearrangement", *request->rearrangement));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->topK)) {
    body->insert(pair<string, long>("topK", *request->topK));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecallDocument"))},
    {"version", boost::any(string("2024-06-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/api/library/recallDocument"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecallDocumentResponse(callApi(params, req, runtime));
}

RecallDocumentResponse Alibabacloud_DianJin20240628::Client::recallDocument(shared_ptr<string> workspaceId, shared_ptr<RecallDocumentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return recallDocumentWithOptions(workspaceId, request, headers, runtime);
}

RecognizeIntentionResponse Alibabacloud_DianJin20240628::Client::recognizeIntentionWithOptions(shared_ptr<string> workspaceId,
                                                                                               shared_ptr<RecognizeIntentionRequest> request,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->analysis)) {
    body->insert(pair<string, bool>("analysis", *request->analysis));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizType)) {
    body->insert(pair<string, string>("bizType", *request->bizType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->conversation)) {
    body->insert(pair<string, string>("conversation", *request->conversation));
  }
  if (!Darabonba_Util::Client::isUnset<vector<RecognizeIntentionRequestGlobalIntentionList>>(request->globalIntentionList)) {
    body->insert(pair<string, vector<RecognizeIntentionRequestGlobalIntentionList>>("globalIntentionList", *request->globalIntentionList));
  }
  if (!Darabonba_Util::Client::isUnset<vector<RecognizeIntentionRequestHierarchicalIntentionList>>(request->hierarchicalIntentionList)) {
    body->insert(pair<string, vector<RecognizeIntentionRequestHierarchicalIntentionList>>("hierarchicalIntentionList", *request->hierarchicalIntentionList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->intentionDomainCode)) {
    body->insert(pair<string, string>("intentionDomainCode", *request->intentionDomainCode));
  }
  if (!Darabonba_Util::Client::isUnset<vector<RecognizeIntentionRequestIntentionList>>(request->intentionList)) {
    body->insert(pair<string, vector<RecognizeIntentionRequestIntentionList>>("intentionList", *request->intentionList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->opType)) {
    body->insert(pair<string, string>("opType", *request->opType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->recommend)) {
    body->insert(pair<string, bool>("recommend", *request->recommend));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizeIntention"))},
    {"version", boost::any(string("2024-06-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/api/recog/intent"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizeIntentionResponse(callApi(params, req, runtime));
}

RecognizeIntentionResponse Alibabacloud_DianJin20240628::Client::recognizeIntention(shared_ptr<string> workspaceId, shared_ptr<RecognizeIntentionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return recognizeIntentionWithOptions(workspaceId, request, headers, runtime);
}

RunChatResultGenerationResponse Alibabacloud_DianJin20240628::Client::runChatResultGenerationWithOptions(shared_ptr<string> workspaceId,
                                                                                                         shared_ptr<RunChatResultGenerationRequest> request,
                                                                                                         shared_ptr<map<string, string>> headers,
                                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->inferenceParameters)) {
    body->insert(pair<string, map<string, boost::any>>("inferenceParameters", *request->inferenceParameters));
  }
  if (!Darabonba_Util::Client::isUnset<vector<RunChatResultGenerationRequestMessages>>(request->messages)) {
    body->insert(pair<string, vector<RunChatResultGenerationRequestMessages>>("messages", *request->messages));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelId)) {
    body->insert(pair<string, string>("modelId", *request->modelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    body->insert(pair<string, string>("sessionId", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->stream)) {
    body->insert(pair<string, bool>("stream", *request->stream));
  }
  if (!Darabonba_Util::Client::isUnset<vector<RunChatResultGenerationRequestTools>>(request->tools)) {
    body->insert(pair<string, vector<RunChatResultGenerationRequestTools>>("tools", *request->tools));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunChatResultGeneration"))},
    {"version", boost::any(string("2024-06-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/api/run/chat/generation"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RunChatResultGenerationResponse(callApi(params, req, runtime));
}

RunChatResultGenerationResponse Alibabacloud_DianJin20240628::Client::runChatResultGeneration(shared_ptr<string> workspaceId, shared_ptr<RunChatResultGenerationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return runChatResultGenerationWithOptions(workspaceId, request, headers, runtime);
}

RunLibraryChatGenerationResponse Alibabacloud_DianJin20240628::Client::runLibraryChatGenerationWithOptions(shared_ptr<string> workspaceId,
                                                                                                           shared_ptr<RunLibraryChatGenerationRequest> request,
                                                                                                           shared_ptr<map<string, string>> headers,
                                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->docIdList)) {
    body->insert(pair<string, vector<string>>("docIdList", *request->docIdList));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableFollowUp)) {
    body->insert(pair<string, bool>("enableFollowUp", *request->enableFollowUp));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableMultiQuery)) {
    body->insert(pair<string, bool>("enableMultiQuery", *request->enableMultiQuery));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableOpenQa)) {
    body->insert(pair<string, bool>("enableOpenQa", *request->enableOpenQa));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->followUpLlm)) {
    body->insert(pair<string, string>("followUpLlm", *request->followUpLlm));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->libraryId)) {
    body->insert(pair<string, string>("libraryId", *request->libraryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->llmType)) {
    body->insert(pair<string, string>("llmType", *request->llmType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->multiQueryLlm)) {
    body->insert(pair<string, string>("multiQueryLlm", *request->multiQueryLlm));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->query)) {
    body->insert(pair<string, string>("query", *request->query));
  }
  if (!Darabonba_Util::Client::isUnset<RunLibraryChatGenerationRequestQueryCriteria>(request->queryCriteria)) {
    body->insert(pair<string, RunLibraryChatGenerationRequestQueryCriteria>("queryCriteria", *request->queryCriteria));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rerankType)) {
    body->insert(pair<string, string>("rerankType", *request->rerankType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    body->insert(pair<string, string>("sessionId", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->stream)) {
    body->insert(pair<string, bool>("stream", *request->stream));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->subQueryList)) {
    body->insert(pair<string, vector<string>>("subQueryList", *request->subQueryList));
  }
  if (!Darabonba_Util::Client::isUnset<RunLibraryChatGenerationRequestTextSearchParameter>(request->textSearchParameter)) {
    body->insert(pair<string, RunLibraryChatGenerationRequestTextSearchParameter>("textSearchParameter", *request->textSearchParameter));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->topK)) {
    body->insert(pair<string, long>("topK", *request->topK));
  }
  if (!Darabonba_Util::Client::isUnset<RunLibraryChatGenerationRequestVectorSearchParameter>(request->vectorSearchParameter)) {
    body->insert(pair<string, RunLibraryChatGenerationRequestVectorSearchParameter>("vectorSearchParameter", *request->vectorSearchParameter));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->withDocumentReference)) {
    body->insert(pair<string, bool>("withDocumentReference", *request->withDocumentReference));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunLibraryChatGeneration"))},
    {"version", boost::any(string("2024-06-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/api/run/library/chat/generation"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RunLibraryChatGenerationResponse(callApi(params, req, runtime));
}

RunLibraryChatGenerationResponse Alibabacloud_DianJin20240628::Client::runLibraryChatGeneration(shared_ptr<string> workspaceId, shared_ptr<RunLibraryChatGenerationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return runLibraryChatGenerationWithOptions(workspaceId, request, headers, runtime);
}

SubmitChatQuestionResponse Alibabacloud_DianJin20240628::Client::submitChatQuestionWithOptions(shared_ptr<string> workspaceId,
                                                                                               shared_ptr<SubmitChatQuestionRequest> request,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gmtService)) {
    body->insert(pair<string, string>("gmtService", *request->gmtService));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->liveScriptContent)) {
    body->insert(pair<string, string>("liveScriptContent", *request->liveScriptContent));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->openSmallTalk)) {
    body->insert(pair<string, bool>("openSmallTalk", *request->openSmallTalk));
  }
  if (!Darabonba_Util::Client::isUnset<vector<SubmitChatQuestionRequestQuestionList>>(request->questionList)) {
    body->insert(pair<string, vector<SubmitChatQuestionRequestQuestionList>>("questionList", *request->questionList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestId)) {
    body->insert(pair<string, string>("requestId", *request->requestId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    body->insert(pair<string, string>("sessionId", *request->sessionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitChatQuestion"))},
    {"version", boost::any(string("2024-06-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/api/virtualHuman/chat/submit"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitChatQuestionResponse(callApi(params, req, runtime));
}

SubmitChatQuestionResponse Alibabacloud_DianJin20240628::Client::submitChatQuestion(shared_ptr<string> workspaceId, shared_ptr<SubmitChatQuestionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return submitChatQuestionWithOptions(workspaceId, request, headers, runtime);
}

UpdateDocumentResponse Alibabacloud_DianJin20240628::Client::updateDocumentWithOptions(shared_ptr<string> workspaceId,
                                                                                       shared_ptr<UpdateDocumentRequest> request,
                                                                                       shared_ptr<map<string, string>> headers,
                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->docId)) {
    body->insert(pair<string, string>("docId", *request->docId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->libraryId)) {
    body->insert(pair<string, string>("libraryId", *request->libraryId));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->meta)) {
    body->insert(pair<string, map<string, boost::any>>("meta", *request->meta));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    body->insert(pair<string, string>("title", *request->title));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateDocument"))},
    {"version", boost::any(string("2024-06-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/api/library/document/updateDocument"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateDocumentResponse(callApi(params, req, runtime));
}

UpdateDocumentResponse Alibabacloud_DianJin20240628::Client::updateDocument(shared_ptr<string> workspaceId, shared_ptr<UpdateDocumentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateDocumentWithOptions(workspaceId, request, headers, runtime);
}

UpdateLibraryResponse Alibabacloud_DianJin20240628::Client::updateLibraryWithOptions(shared_ptr<string> workspaceId,
                                                                                     shared_ptr<UpdateLibraryRequest> request,
                                                                                     shared_ptr<map<string, string>> headers,
                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateLibraryRequestIndexSetting>(request->indexSetting)) {
    body->insert(pair<string, UpdateLibraryRequestIndexSetting>("indexSetting", *request->indexSetting));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->libraryId)) {
    body->insert(pair<string, string>("libraryId", *request->libraryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->libraryName)) {
    body->insert(pair<string, string>("libraryName", *request->libraryName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateLibrary"))},
    {"version", boost::any(string("2024-06-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/api/library/update"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateLibraryResponse(callApi(params, req, runtime));
}

UpdateLibraryResponse Alibabacloud_DianJin20240628::Client::updateLibrary(shared_ptr<string> workspaceId, shared_ptr<UpdateLibraryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateLibraryWithOptions(workspaceId, request, headers, runtime);
}

UpdateQaLibraryResponse Alibabacloud_DianJin20240628::Client::updateQaLibraryWithOptions(shared_ptr<string> workspaceId,
                                                                                         shared_ptr<UpdateQaLibraryRequest> request,
                                                                                         shared_ptr<map<string, string>> headers,
                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<UpdateQaLibraryRequestParseQaResults>>(request->parseQaResults)) {
    body->insert(pair<string, vector<UpdateQaLibraryRequestParseQaResults>>("parseQaResults", *request->parseQaResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->qaLibraryId)) {
    body->insert(pair<string, string>("qaLibraryId", *request->qaLibraryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestId)) {
    body->insert(pair<string, string>("requestId", *request->requestId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateQaLibrary"))},
    {"version", boost::any(string("2024-06-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/api/virtualHuman/qa/upload"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateQaLibraryResponse(callApi(params, req, runtime));
}

UpdateQaLibraryResponse Alibabacloud_DianJin20240628::Client::updateQaLibrary(shared_ptr<string> workspaceId, shared_ptr<UpdateQaLibraryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateQaLibraryWithOptions(workspaceId, request, headers, runtime);
}

UploadDocumentResponse Alibabacloud_DianJin20240628::Client::uploadDocumentWithOptions(shared_ptr<string> workspaceId,
                                                                                       shared_ptr<UploadDocumentRequest> request,
                                                                                       shared_ptr<map<string, string>> headers,
                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->data)) {
    body->insert(pair<string, string>("data", *request->data));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileName)) {
    body->insert(pair<string, string>("fileName", *request->fileName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileUrl)) {
    body->insert(pair<string, string>("fileUrl", *request->fileUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->libraryId)) {
    body->insert(pair<string, string>("libraryId", *request->libraryId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UploadDocument"))},
    {"version", boost::any(string("2024-06-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/api/library/document/upload"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UploadDocumentResponse(callApi(params, req, runtime));
}

UploadDocumentResponse Alibabacloud_DianJin20240628::Client::uploadDocument(shared_ptr<string> workspaceId, shared_ptr<UploadDocumentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return uploadDocumentWithOptions(workspaceId, request, headers, runtime);
}

UploadDocumentResponse Alibabacloud_DianJin20240628::Client::uploadDocumentAdvance(shared_ptr<string> workspaceId,
                                                                                   shared_ptr<UploadDocumentAdvanceRequest> request,
                                                                                   shared_ptr<map<string, string>> headers,
                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  // Step 0: init client
  shared_ptr<string> accessKeyId = make_shared<string>(_credential->getAccessKeyId());
  shared_ptr<string> accessKeySecret = make_shared<string>(_credential->getAccessKeySecret());
  shared_ptr<string> securityToken = make_shared<string>(_credential->getSecurityToken());
  shared_ptr<string> credentialType = make_shared<string>(_credential->getType());
  shared_ptr<string> openPlatformEndpoint = _openPlatformEndpoint;
  if (Darabonba_Util::Client::empty(openPlatformEndpoint)) {
    openPlatformEndpoint = make_shared<string>("openplatform.aliyuncs.com");
  }
  if (Darabonba_Util::Client::isUnset<string>(credentialType)) {
    credentialType = make_shared<string>("access_key");
  }
  shared_ptr<Alibabacloud_OpenApi::Config> authConfig = make_shared<Alibabacloud_OpenApi::Config>(map<string, boost::any>({
    {"accessKeyId", !accessKeyId ? boost::any() : boost::any(*accessKeyId)},
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"securityToken", !securityToken ? boost::any() : boost::any(*securityToken)},
    {"type", !credentialType ? boost::any() : boost::any(*credentialType)},
    {"endpoint", !openPlatformEndpoint ? boost::any() : boost::any(*openPlatformEndpoint)},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::Client> authClient = make_shared<Alibabacloud_OpenPlatform20191219::Client>(authConfig);
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest> authRequest = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest>(map<string, boost::any>({
    {"product", boost::any(string("DianJin"))},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse> authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>();
  shared_ptr<Alibabacloud_OSS::Config> ossConfig = make_shared<Alibabacloud_OSS::Config>(map<string, boost::any>({
    {"accessKeyId", !accessKeyId ? boost::any() : boost::any(*accessKeyId)},
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"type", boost::any(string("access_key"))},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OSS::Client> ossClient = make_shared<Alibabacloud_OSS::Client>(ossConfig);
  shared_ptr<Darabonba_FileForm::FileField> fileObj = make_shared<Darabonba_FileForm::FileField>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequestHeader> ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequest> uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>();
  shared_ptr<Alibabacloud_OSSUtil::RuntimeOptions> ossRuntime = make_shared<Alibabacloud_OSSUtil::RuntimeOptions>();
  Alibabacloud_OpenApiUtil::Client::convert(runtime, ossRuntime);
  shared_ptr<UploadDocumentRequest> uploadDocumentReq = make_shared<UploadDocumentRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(request, uploadDocumentReq);
  if (!Darabonba_Util::Client::isUnset<Darabonba::Stream>(request->fileUrlObject)) {
    authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>(authClient->authorizeFileUploadWithOptions(authRequest, runtime));
    ossConfig->accessKeyId = authResponse->body->accessKeyId;
    ossConfig->endpoint = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEndpoint(authResponse->body->endpoint, authResponse->body->useAccelerate, _endpointType));
    ossClient = make_shared<Alibabacloud_OSS::Client>(ossConfig);
    fileObj = make_shared<Darabonba_FileForm::FileField>(map<string, boost::any>({
      {"filename", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
      {"content", !request->fileUrlObject ? boost::any() : boost::any(*request->fileUrlObject)},
      {"contentType", boost::any(string(""))}
    }));
    ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>(map<string, boost::any>({
      {"accessKeyId", !authResponse->body->accessKeyId ? boost::any() : boost::any(*authResponse->body->accessKeyId)},
      {"policy", !authResponse->body->encodedPolicy ? boost::any() : boost::any(*authResponse->body->encodedPolicy)},
      {"signature", !authResponse->body->signature ? boost::any() : boost::any(*authResponse->body->signature)},
      {"key", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
      {"file", !fileObj ? boost::any() : boost::any(*fileObj)},
      {"successActionStatus", boost::any(string("201"))}
    }));
    uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>(map<string, boost::any>({
      {"bucketName", !authResponse->body->bucket ? boost::any() : boost::any(*authResponse->body->bucket)},
      {"header", !ossHeader ? boost::any() : boost::any(*ossHeader)}
    }));
    ossClient->postObject(uploadRequest, ossRuntime);
    uploadDocumentReq->fileUrl = make_shared<string>(string("http://") + string(*authResponse->body->bucket) + string(".") + string(*authResponse->body->endpoint) + string("/") + string(*authResponse->body->objectKey));
  }
  shared_ptr<UploadDocumentResponse> uploadDocumentResp = make_shared<UploadDocumentResponse>(uploadDocumentWithOptions(workspaceId, uploadDocumentReq, headers, runtime));
  return *uploadDocumentResp;
}

