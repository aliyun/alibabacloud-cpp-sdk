// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/intelligent_creation_20250301.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

using namespace Alibabacloud_IntelligentCreation20250301;

Alibabacloud_IntelligentCreation20250301::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("intelligentcreation"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_IntelligentCreation20250301::Client::getEndpoint(shared_ptr<string> productId,
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

CreateLabelTaskResponse Alibabacloud_IntelligentCreation20250301::Client::createLabelTaskWithOptions(shared_ptr<CreateLabelTaskRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->callbackUrl)) {
    body->insert(pair<string, string>("CallbackUrl", *request->callbackUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileUrl)) {
    body->insert(pair<string, string>("FileUrl", *request->fileUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idempotentId)) {
    body->insert(pair<string, string>("IdempotentId", *request->idempotentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->labelTemplateId)) {
    body->insert(pair<string, string>("LabelTemplateId", *request->labelTemplateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateLabelTask"))},
    {"version", boost::any(string("2025-03-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/tongjian/yic-tongjian/openService/v2/aitag/createLabelTask"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateLabelTaskResponse(callApi(params, req, runtime));
  }
  else {
    return CreateLabelTaskResponse(execute(params, req, runtime));
  }
}

CreateLabelTaskResponse Alibabacloud_IntelligentCreation20250301::Client::createLabelTask(shared_ptr<CreateLabelTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createLabelTaskWithOptions(request, headers, runtime);
}

CreateOssUploadTokenResponse Alibabacloud_IntelligentCreation20250301::Client::createOssUploadTokenWithOptions(shared_ptr<CreateOssUploadTokenRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fileName)) {
    body->insert(pair<string, string>("FileName", *request->fileName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileType)) {
    body->insert(pair<string, string>("FileType", *request->fileType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateOssUploadToken"))},
    {"version", boost::any(string("2025-03-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/tongjian/yic-tongjian/openService/v2/base/createOssUploadToken"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateOssUploadTokenResponse(callApi(params, req, runtime));
  }
  else {
    return CreateOssUploadTokenResponse(execute(params, req, runtime));
  }
}

CreateOssUploadTokenResponse Alibabacloud_IntelligentCreation20250301::Client::createOssUploadToken(shared_ptr<CreateOssUploadTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createOssUploadTokenWithOptions(request, headers, runtime);
}

CreateTextLabelResponse Alibabacloud_IntelligentCreation20250301::Client::createTextLabelWithOptions(shared_ptr<CreateTextLabelRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->data)) {
    body->insert(pair<string, string>("Data", *request->data));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->labelTemplateId)) {
    body->insert(pair<string, string>("LabelTemplateId", *request->labelTemplateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTextLabel"))},
    {"version", boost::any(string("2025-03-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/tongjian/yic-tongjian/openService/v2/aitag/createTextLabel"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateTextLabelResponse(callApi(params, req, runtime));
  }
  else {
    return CreateTextLabelResponse(execute(params, req, runtime));
  }
}

CreateTextLabelResponse Alibabacloud_IntelligentCreation20250301::Client::createTextLabel(shared_ptr<CreateTextLabelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createTextLabelWithOptions(request, headers, runtime);
}

GetLabelTaskResultResponse Alibabacloud_IntelligentCreation20250301::Client::getLabelTaskResultWithOptions(shared_ptr<GetLabelTaskResultRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetLabelTaskResult"))},
    {"version", boost::any(string("2025-03-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/tongjian/yic-tongjian/openService/v2/aitag/getLabelTaskResult"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetLabelTaskResultResponse(callApi(params, req, runtime));
  }
  else {
    return GetLabelTaskResultResponse(execute(params, req, runtime));
  }
}

GetLabelTaskResultResponse Alibabacloud_IntelligentCreation20250301::Client::getLabelTaskResult(shared_ptr<GetLabelTaskResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getLabelTaskResultWithOptions(request, headers, runtime);
}

