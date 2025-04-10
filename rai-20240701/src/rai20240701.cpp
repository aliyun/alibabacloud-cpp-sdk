// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/rai20240701.hpp>
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

using namespace Alibabacloud_RAI20240701;

Alibabacloud_RAI20240701::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("rai"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_RAI20240701::Client::getEndpoint(shared_ptr<string> productId,
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

BatchContentAsyncDetectResponse Alibabacloud_RAI20240701::Client::batchContentAsyncDetectWithOptions(shared_ptr<BatchContentAsyncDetectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneName)) {
    query->insert(pair<string, string>("SceneName", *request->sceneName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    query->insert(pair<string, string>("ServiceName", *request->serviceName));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<BatchContentAsyncDetectRequestServiceParameterList>>(request->serviceParameterList)) {
    body->insert(pair<string, vector<BatchContentAsyncDetectRequestServiceParameterList>>("serviceParameterList", *request->serviceParameterList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchContentAsyncDetect"))},
    {"version", boost::any(string("2024-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return BatchContentAsyncDetectResponse(callApi(params, req, runtime));
  }
  else {
    return BatchContentAsyncDetectResponse(execute(params, req, runtime));
  }
}

BatchContentAsyncDetectResponse Alibabacloud_RAI20240701::Client::batchContentAsyncDetect(shared_ptr<BatchContentAsyncDetectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchContentAsyncDetectWithOptions(request, runtime);
}

BatchContentSyncDetectResponse Alibabacloud_RAI20240701::Client::batchContentSyncDetectWithOptions(shared_ptr<BatchContentSyncDetectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneName)) {
    query->insert(pair<string, string>("SceneName", *request->sceneName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    query->insert(pair<string, string>("ServiceName", *request->serviceName));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<BatchContentSyncDetectRequestServiceParameterList>>(request->serviceParameterList)) {
    body->insert(pair<string, vector<BatchContentSyncDetectRequestServiceParameterList>>("serviceParameterList", *request->serviceParameterList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchContentSyncDetect"))},
    {"version", boost::any(string("2024-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return BatchContentSyncDetectResponse(callApi(params, req, runtime));
  }
  else {
    return BatchContentSyncDetectResponse(execute(params, req, runtime));
  }
}

BatchContentSyncDetectResponse Alibabacloud_RAI20240701::Client::batchContentSyncDetect(shared_ptr<BatchContentSyncDetectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchContentSyncDetectWithOptions(request, runtime);
}

CheckAccountResponse Alibabacloud_RAI20240701::Client::checkAccountWithOptions(shared_ptr<CheckAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckAccount"))},
    {"version", boost::any(string("2024-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CheckAccountResponse(callApi(params, req, runtime));
  }
  else {
    return CheckAccountResponse(execute(params, req, runtime));
  }
}

CheckAccountResponse Alibabacloud_RAI20240701::Client::checkAccount(shared_ptr<CheckAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkAccountWithOptions(request, runtime);
}

ContentAsyncDetectResponse Alibabacloud_RAI20240701::Client::contentAsyncDetectWithOptions(shared_ptr<ContentAsyncDetectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneName)) {
    query->insert(pair<string, string>("SceneName", *request->sceneName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    query->insert(pair<string, string>("ServiceName", *request->serviceName));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<ContentAsyncDetectRequestServiceParameter>(request->serviceParameter)) {
    body->insert(pair<string, ContentAsyncDetectRequestServiceParameter>("serviceParameter", *request->serviceParameter));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ContentAsyncDetect"))},
    {"version", boost::any(string("2024-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ContentAsyncDetectResponse(callApi(params, req, runtime));
  }
  else {
    return ContentAsyncDetectResponse(execute(params, req, runtime));
  }
}

ContentAsyncDetectResponse Alibabacloud_RAI20240701::Client::contentAsyncDetect(shared_ptr<ContentAsyncDetectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return contentAsyncDetectWithOptions(request, runtime);
}

ContentSyncDetectResponse Alibabacloud_RAI20240701::Client::contentSyncDetectWithOptions(shared_ptr<ContentSyncDetectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneName)) {
    query->insert(pair<string, string>("SceneName", *request->sceneName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    query->insert(pair<string, string>("ServiceName", *request->serviceName));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<ContentSyncDetectRequestServiceParameter>(request->serviceParameter)) {
    body->insert(pair<string, ContentSyncDetectRequestServiceParameter>("serviceParameter", *request->serviceParameter));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ContentSyncDetect"))},
    {"version", boost::any(string("2024-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ContentSyncDetectResponse(callApi(params, req, runtime));
  }
  else {
    return ContentSyncDetectResponse(execute(params, req, runtime));
  }
}

ContentSyncDetectResponse Alibabacloud_RAI20240701::Client::contentSyncDetect(shared_ptr<ContentSyncDetectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return contentSyncDetectWithOptions(request, runtime);
}

GetContentDetectResultResponse Alibabacloud_RAI20240701::Client::getContentDetectResultWithOptions(shared_ptr<GetContentDetectResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetContentDetectResult"))},
    {"version", boost::any(string("2024-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetContentDetectResultResponse(callApi(params, req, runtime));
  }
  else {
    return GetContentDetectResultResponse(execute(params, req, runtime));
  }
}

GetContentDetectResultResponse Alibabacloud_RAI20240701::Client::getContentDetectResult(shared_ptr<GetContentDetectResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getContentDetectResultWithOptions(request, runtime);
}

GetModelInputContentDetectResultResponse Alibabacloud_RAI20240701::Client::getModelInputContentDetectResultWithOptions(shared_ptr<GetModelInputContentDetectResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetModelInputContentDetectResult"))},
    {"version", boost::any(string("2024-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetModelInputContentDetectResultResponse(callApi(params, req, runtime));
  }
  else {
    return GetModelInputContentDetectResultResponse(execute(params, req, runtime));
  }
}

GetModelInputContentDetectResultResponse Alibabacloud_RAI20240701::Client::getModelInputContentDetectResult(shared_ptr<GetModelInputContentDetectResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getModelInputContentDetectResultWithOptions(request, runtime);
}

GetModelOutputContentDetectResultResponse Alibabacloud_RAI20240701::Client::getModelOutputContentDetectResultWithOptions(shared_ptr<GetModelOutputContentDetectResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetModelOutputContentDetectResult"))},
    {"version", boost::any(string("2024-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetModelOutputContentDetectResultResponse(callApi(params, req, runtime));
  }
  else {
    return GetModelOutputContentDetectResultResponse(execute(params, req, runtime));
  }
}

GetModelOutputContentDetectResultResponse Alibabacloud_RAI20240701::Client::getModelOutputContentDetectResult(shared_ptr<GetModelOutputContentDetectResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getModelOutputContentDetectResultWithOptions(request, runtime);
}

ListSensitiveWordResponse Alibabacloud_RAI20240701::Client::listSensitiveWordWithOptions(shared_ptr<ListSensitiveWordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSensitiveWord"))},
    {"version", boost::any(string("2024-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListSensitiveWordResponse(callApi(params, req, runtime));
  }
  else {
    return ListSensitiveWordResponse(execute(params, req, runtime));
  }
}

ListSensitiveWordResponse Alibabacloud_RAI20240701::Client::listSensitiveWord(shared_ptr<ListSensitiveWordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSensitiveWordWithOptions(request, runtime);
}

ModelInputContentAsyncDetectResponse Alibabacloud_RAI20240701::Client::modelInputContentAsyncDetectWithOptions(shared_ptr<ModelInputContentAsyncDetectRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ModelInputContentAsyncDetectShrinkRequest> request = make_shared<ModelInputContentAsyncDetectShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ModelInputContentAsyncDetectRequestBodyData>(tmpReq->bodyData)) {
    request->bodyDataShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->bodyData, make_shared<string>("BodyData"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->policyIdentifier)) {
    query->insert(pair<string, string>("PolicyIdentifier", *request->policyIdentifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneName)) {
    query->insert(pair<string, string>("SceneName", *request->sceneName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    query->insert(pair<string, string>("ServiceName", *request->serviceName));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bodyDataShrink)) {
    body->insert(pair<string, string>("BodyData", *request->bodyDataShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModelInputContentAsyncDetect"))},
    {"version", boost::any(string("2024-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ModelInputContentAsyncDetectResponse(callApi(params, req, runtime));
  }
  else {
    return ModelInputContentAsyncDetectResponse(execute(params, req, runtime));
  }
}

ModelInputContentAsyncDetectResponse Alibabacloud_RAI20240701::Client::modelInputContentAsyncDetect(shared_ptr<ModelInputContentAsyncDetectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modelInputContentAsyncDetectWithOptions(request, runtime);
}

ModelInputContentSyncDetectResponse Alibabacloud_RAI20240701::Client::modelInputContentSyncDetectWithOptions(shared_ptr<ModelInputContentSyncDetectRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ModelInputContentSyncDetectShrinkRequest> request = make_shared<ModelInputContentSyncDetectShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ModelInputContentSyncDetectRequestBodyData>(tmpReq->bodyData)) {
    request->bodyDataShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->bodyData, make_shared<string>("BodyData"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->policyIdentifier)) {
    query->insert(pair<string, string>("PolicyIdentifier", *request->policyIdentifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneName)) {
    query->insert(pair<string, string>("SceneName", *request->sceneName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    query->insert(pair<string, string>("ServiceName", *request->serviceName));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bodyDataShrink)) {
    body->insert(pair<string, string>("BodyData", *request->bodyDataShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModelInputContentSyncDetect"))},
    {"version", boost::any(string("2024-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ModelInputContentSyncDetectResponse(callApi(params, req, runtime));
  }
  else {
    return ModelInputContentSyncDetectResponse(execute(params, req, runtime));
  }
}

ModelInputContentSyncDetectResponse Alibabacloud_RAI20240701::Client::modelInputContentSyncDetect(shared_ptr<ModelInputContentSyncDetectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modelInputContentSyncDetectWithOptions(request, runtime);
}

ModelOutputContentAsyncDetectResponse Alibabacloud_RAI20240701::Client::modelOutputContentAsyncDetectWithOptions(shared_ptr<ModelOutputContentAsyncDetectRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ModelOutputContentAsyncDetectShrinkRequest> request = make_shared<ModelOutputContentAsyncDetectShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ModelOutputContentAsyncDetectRequestBodyData>(tmpReq->bodyData)) {
    request->bodyDataShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->bodyData, make_shared<string>("BodyData"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->policyIdentifier)) {
    query->insert(pair<string, string>("PolicyIdentifier", *request->policyIdentifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneName)) {
    query->insert(pair<string, string>("SceneName", *request->sceneName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    query->insert(pair<string, string>("ServiceName", *request->serviceName));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bodyDataShrink)) {
    body->insert(pair<string, string>("BodyData", *request->bodyDataShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModelOutputContentAsyncDetect"))},
    {"version", boost::any(string("2024-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ModelOutputContentAsyncDetectResponse(callApi(params, req, runtime));
  }
  else {
    return ModelOutputContentAsyncDetectResponse(execute(params, req, runtime));
  }
}

ModelOutputContentAsyncDetectResponse Alibabacloud_RAI20240701::Client::modelOutputContentAsyncDetect(shared_ptr<ModelOutputContentAsyncDetectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modelOutputContentAsyncDetectWithOptions(request, runtime);
}

ModelOutputContentSyncDetectResponse Alibabacloud_RAI20240701::Client::modelOutputContentSyncDetectWithOptions(shared_ptr<ModelOutputContentSyncDetectRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ModelOutputContentSyncDetectShrinkRequest> request = make_shared<ModelOutputContentSyncDetectShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ModelOutputContentSyncDetectRequestBodyData>(tmpReq->bodyData)) {
    request->bodyDataShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->bodyData, make_shared<string>("BodyData"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->policyIdentifier)) {
    query->insert(pair<string, string>("PolicyIdentifier", *request->policyIdentifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneName)) {
    query->insert(pair<string, string>("SceneName", *request->sceneName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    query->insert(pair<string, string>("ServiceName", *request->serviceName));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bodyDataShrink)) {
    body->insert(pair<string, string>("BodyData", *request->bodyDataShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModelOutputContentSyncDetect"))},
    {"version", boost::any(string("2024-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ModelOutputContentSyncDetectResponse(callApi(params, req, runtime));
  }
  else {
    return ModelOutputContentSyncDetectResponse(execute(params, req, runtime));
  }
}

ModelOutputContentSyncDetectResponse Alibabacloud_RAI20240701::Client::modelOutputContentSyncDetect(shared_ptr<ModelOutputContentSyncDetectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modelOutputContentSyncDetectWithOptions(request, runtime);
}

RegisterAccountResponse Alibabacloud_RAI20240701::Client::registerAccountWithOptions(shared_ptr<RegisterAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->memo)) {
    query->insert(pair<string, string>("Memo", *request->memo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RegisterAccount"))},
    {"version", boost::any(string("2024-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RegisterAccountResponse(callApi(params, req, runtime));
  }
  else {
    return RegisterAccountResponse(execute(params, req, runtime));
  }
}

RegisterAccountResponse Alibabacloud_RAI20240701::Client::registerAccount(shared_ptr<RegisterAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return registerAccountWithOptions(request, runtime);
}

SyncSensitiveWordResponse Alibabacloud_RAI20240701::Client::syncSensitiveWordWithOptions(shared_ptr<SyncSensitiveWordRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SyncSensitiveWordShrinkRequest> request = make_shared<SyncSensitiveWordShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<SyncSensitiveWordRequestBodyData>(tmpReq->bodyData)) {
    request->bodyDataShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->bodyData, make_shared<string>("BodyData"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->commit)) {
    query->insert(pair<string, bool>("Commit", *request->commit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bodyDataShrink)) {
    body->insert(pair<string, string>("BodyData", *request->bodyDataShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SyncSensitiveWord"))},
    {"version", boost::any(string("2024-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SyncSensitiveWordResponse(callApi(params, req, runtime));
  }
  else {
    return SyncSensitiveWordResponse(execute(params, req, runtime));
  }
}

SyncSensitiveWordResponse Alibabacloud_RAI20240701::Client::syncSensitiveWord(shared_ptr<SyncSensitiveWordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return syncSensitiveWordWithOptions(request, runtime);
}

