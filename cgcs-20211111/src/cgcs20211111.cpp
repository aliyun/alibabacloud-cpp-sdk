// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/cgcs20211111.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_CGCS20211111;

Alibabacloud_CGCS20211111::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("cgcs"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_CGCS20211111::Client::getEndpoint(shared_ptr<string> productId,
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

BatchCheckSessionResponse Alibabacloud_CGCS20211111::Client::batchCheckSessionWithOptions(shared_ptr<BatchCheckSessionRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<BatchCheckSessionShrinkRequest> request = make_shared<BatchCheckSessionShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<BatchCheckSessionRequestRecords>>(tmpReq->records)) {
    request->recordsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->records, make_shared<string>("Records"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->recordsShrink)) {
    query->insert(pair<string, string>("Records", *request->recordsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchCheckSession"))},
    {"version", boost::any(string("2021-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchCheckSessionResponse(callApi(params, req, runtime));
}

BatchCheckSessionResponse Alibabacloud_CGCS20211111::Client::batchCheckSession(shared_ptr<BatchCheckSessionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchCheckSessionWithOptions(request, runtime);
}

CancelReserveTaskResponse Alibabacloud_CGCS20211111::Client::cancelReserveTaskWithOptions(shared_ptr<CancelReserveTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelReserveTask"))},
    {"version", boost::any(string("2021-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelReserveTaskResponse(callApi(params, req, runtime));
}

CancelReserveTaskResponse Alibabacloud_CGCS20211111::Client::cancelReserveTask(shared_ptr<CancelReserveTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelReserveTaskWithOptions(request, runtime);
}

CreateAdaptationResponse Alibabacloud_CGCS20211111::Client::createAdaptationWithOptions(shared_ptr<CreateAdaptationRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateAdaptationShrinkRequest> request = make_shared<CreateAdaptationShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateAdaptationRequestAdaptTarget>(tmpReq->adaptTarget)) {
    request->adaptTargetShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->adaptTarget, make_shared<string>("AdaptTarget"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->adaptTargetShrink)) {
    body->insert(pair<string, string>("AdaptTarget", *request->adaptTargetShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appVersionId)) {
    body->insert(pair<string, string>("AppVersionId", *request->appVersionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAdaptation"))},
    {"version", boost::any(string("2021-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAdaptationResponse(callApi(params, req, runtime));
}

CreateAdaptationResponse Alibabacloud_CGCS20211111::Client::createAdaptation(shared_ptr<CreateAdaptationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAdaptationWithOptions(request, runtime);
}

CreateAppResponse Alibabacloud_CGCS20211111::Client::createAppWithOptions(shared_ptr<CreateAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    body->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appType)) {
    body->insert(pair<string, string>("AppType", *request->appType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->streamingAppId)) {
    body->insert(pair<string, string>("StreamingAppId", *request->streamingAppId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->streamingSolution)) {
    body->insert(pair<string, string>("StreamingSolution", *request->streamingSolution));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateApp"))},
    {"version", boost::any(string("2021-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAppResponse(callApi(params, req, runtime));
}

CreateAppResponse Alibabacloud_CGCS20211111::Client::createApp(shared_ptr<CreateAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAppWithOptions(request, runtime);
}

CreateAppSessionResponse Alibabacloud_CGCS20211111::Client::createAppSessionWithOptions(shared_ptr<CreateAppSessionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->adapterFileId)) {
    query->insert(pair<string, string>("AdapterFileId", *request->adapterFileId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appVersion)) {
    query->insert(pair<string, string>("AppVersion", *request->appVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientIp)) {
    query->insert(pair<string, string>("ClientIp", *request->clientIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customSessionId)) {
    query->insert(pair<string, string>("CustomSessionId", *request->customSessionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customUserId)) {
    query->insert(pair<string, string>("CustomUserId", *request->customUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->districtId)) {
    query->insert(pair<string, string>("DistrictId", *request->districtId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enablePostpaid)) {
    query->insert(pair<string, bool>("EnablePostpaid", *request->enablePostpaid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateAppSessionRequestStartParameters>>(request->startParameters)) {
    query->insert(pair<string, vector<CreateAppSessionRequestStartParameters>>("StartParameters", *request->startParameters));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateAppSessionRequestSystemInfo>>(request->systemInfo)) {
    query->insert(pair<string, vector<CreateAppSessionRequestSystemInfo>>("SystemInfo", *request->systemInfo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeout)) {
    query->insert(pair<string, long>("Timeout", *request->timeout));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAppSession"))},
    {"version", boost::any(string("2021-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAppSessionResponse(callApi(params, req, runtime));
}

CreateAppSessionResponse Alibabacloud_CGCS20211111::Client::createAppSession(shared_ptr<CreateAppSessionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAppSessionWithOptions(request, runtime);
}

CreateAppSessionBatchResponse Alibabacloud_CGCS20211111::Client::createAppSessionBatchWithOptions(shared_ptr<CreateAppSessionBatchRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateAppSessionBatchShrinkRequest> request = make_shared<CreateAppSessionBatchShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<CreateAppSessionBatchRequestAppInfos>>(tmpReq->appInfos)) {
    request->appInfosShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->appInfos, make_shared<string>("AppInfos"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appInfosShrink)) {
    query->insert(pair<string, string>("AppInfos", *request->appInfosShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customTaskId)) {
    query->insert(pair<string, string>("CustomTaskId", *request->customTaskId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeout)) {
    query->insert(pair<string, long>("Timeout", *request->timeout));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAppSessionBatch"))},
    {"version", boost::any(string("2021-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAppSessionBatchResponse(callApi(params, req, runtime));
}

CreateAppSessionBatchResponse Alibabacloud_CGCS20211111::Client::createAppSessionBatch(shared_ptr<CreateAppSessionBatchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAppSessionBatchWithOptions(request, runtime);
}

CreateAppSessionBatchSyncResponse Alibabacloud_CGCS20211111::Client::createAppSessionBatchSyncWithOptions(shared_ptr<CreateAppSessionBatchSyncRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateAppSessionBatchSyncShrinkRequest> request = make_shared<CreateAppSessionBatchSyncShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<CreateAppSessionBatchSyncRequestAppInfos>>(tmpReq->appInfos)) {
    request->appInfosShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->appInfos, make_shared<string>("AppInfos"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appInfosShrink)) {
    query->insert(pair<string, string>("AppInfos", *request->appInfosShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->batchId)) {
    query->insert(pair<string, string>("BatchId", *request->batchId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAppSessionBatchSync"))},
    {"version", boost::any(string("2021-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAppSessionBatchSyncResponse(callApi(params, req, runtime));
}

CreateAppSessionBatchSyncResponse Alibabacloud_CGCS20211111::Client::createAppSessionBatchSync(shared_ptr<CreateAppSessionBatchSyncRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAppSessionBatchSyncWithOptions(request, runtime);
}

CreateAppSessionSyncResponse Alibabacloud_CGCS20211111::Client::createAppSessionSyncWithOptions(shared_ptr<CreateAppSessionSyncRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->adapterFileId)) {
    query->insert(pair<string, string>("AdapterFileId", *request->adapterFileId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appVersion)) {
    query->insert(pair<string, string>("AppVersion", *request->appVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientIp)) {
    query->insert(pair<string, string>("ClientIp", *request->clientIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customSessionId)) {
    query->insert(pair<string, string>("CustomSessionId", *request->customSessionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customUserId)) {
    query->insert(pair<string, string>("CustomUserId", *request->customUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->districtId)) {
    query->insert(pair<string, string>("DistrictId", *request->districtId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateAppSessionSyncRequestMatchRules>>(request->matchRules)) {
    query->insert(pair<string, vector<CreateAppSessionSyncRequestMatchRules>>("MatchRules", *request->matchRules));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateAppSessionSyncRequestStartParameters>>(request->startParameters)) {
    query->insert(pair<string, vector<CreateAppSessionSyncRequestStartParameters>>("StartParameters", *request->startParameters));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateAppSessionSyncRequestSystemInfo>>(request->systemInfo)) {
    query->insert(pair<string, vector<CreateAppSessionSyncRequestSystemInfo>>("SystemInfo", *request->systemInfo));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateAppSessionSyncRequestTags>>(request->tags)) {
    query->insert(pair<string, vector<CreateAppSessionSyncRequestTags>>("Tags", *request->tags));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAppSessionSync"))},
    {"version", boost::any(string("2021-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAppSessionSyncResponse(callApi(params, req, runtime));
}

CreateAppSessionSyncResponse Alibabacloud_CGCS20211111::Client::createAppSessionSync(shared_ptr<CreateAppSessionSyncRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAppSessionSyncWithOptions(request, runtime);
}

CreateAppVersionResponse Alibabacloud_CGCS20211111::Client::createAppVersionWithOptions(shared_ptr<CreateAppVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appVersionName)) {
    body->insert(pair<string, string>("AppVersionName", *request->appVersionName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAppVersion"))},
    {"version", boost::any(string("2021-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAppVersionResponse(callApi(params, req, runtime));
}

CreateAppVersionResponse Alibabacloud_CGCS20211111::Client::createAppVersion(shared_ptr<CreateAppVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAppVersionWithOptions(request, runtime);
}

CreateCapacityReservationResponse Alibabacloud_CGCS20211111::Client::createCapacityReservationWithOptions(shared_ptr<CreateCapacityReservationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appVersion)) {
    body->insert(pair<string, string>("AppVersion", *request->appVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->districtId)) {
    body->insert(pair<string, string>("DistrictId", *request->districtId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expectResourceReadyTime)) {
    body->insert(pair<string, string>("ExpectResourceReadyTime", *request->expectResourceReadyTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->expectSessionCapacity)) {
    body->insert(pair<string, long>("ExpectSessionCapacity", *request->expectSessionCapacity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    body->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCapacityReservation"))},
    {"version", boost::any(string("2021-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateCapacityReservationResponse(callApi(params, req, runtime));
}

CreateCapacityReservationResponse Alibabacloud_CGCS20211111::Client::createCapacityReservation(shared_ptr<CreateCapacityReservationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCapacityReservationWithOptions(request, runtime);
}

DeleteAppResponse Alibabacloud_CGCS20211111::Client::deleteAppWithOptions(shared_ptr<DeleteAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteApp"))},
    {"version", boost::any(string("2021-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteAppResponse(callApi(params, req, runtime));
}

DeleteAppResponse Alibabacloud_CGCS20211111::Client::deleteApp(shared_ptr<DeleteAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAppWithOptions(request, runtime);
}

DeleteAppVersionResponse Alibabacloud_CGCS20211111::Client::deleteAppVersionWithOptions(shared_ptr<DeleteAppVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appVersionId)) {
    body->insert(pair<string, string>("AppVersionId", *request->appVersionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAppVersion"))},
    {"version", boost::any(string("2021-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteAppVersionResponse(callApi(params, req, runtime));
}

DeleteAppVersionResponse Alibabacloud_CGCS20211111::Client::deleteAppVersion(shared_ptr<DeleteAppVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAppVersionWithOptions(request, runtime);
}

GetAdaptationResponse Alibabacloud_CGCS20211111::Client::getAdaptationWithOptions(shared_ptr<GetAdaptationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->adaptApplyId)) {
    body->insert(pair<string, long>("AdaptApplyId", *request->adaptApplyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appVersionId)) {
    body->insert(pair<string, string>("AppVersionId", *request->appVersionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAdaptation"))},
    {"version", boost::any(string("2021-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAdaptationResponse(callApi(params, req, runtime));
}

GetAdaptationResponse Alibabacloud_CGCS20211111::Client::getAdaptation(shared_ptr<GetAdaptationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAdaptationWithOptions(request, runtime);
}

GetAppResponse Alibabacloud_CGCS20211111::Client::getAppWithOptions(shared_ptr<GetAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetApp"))},
    {"version", boost::any(string("2021-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAppResponse(callApi(params, req, runtime));
}

GetAppResponse Alibabacloud_CGCS20211111::Client::getApp(shared_ptr<GetAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAppWithOptions(request, runtime);
}

GetAppCcuResponse Alibabacloud_CGCS20211111::Client::getAppCcuWithOptions(shared_ptr<GetAppCcuRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAppCcu"))},
    {"version", boost::any(string("2021-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAppCcuResponse(callApi(params, req, runtime));
}

GetAppCcuResponse Alibabacloud_CGCS20211111::Client::getAppCcu(shared_ptr<GetAppCcuRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAppCcuWithOptions(request, runtime);
}

GetAppSessionResponse Alibabacloud_CGCS20211111::Client::getAppSessionWithOptions(shared_ptr<GetAppSessionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->customSessionId)) {
    query->insert(pair<string, string>("CustomSessionId", *request->customSessionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->platformSessionId)) {
    query->insert(pair<string, string>("PlatformSessionId", *request->platformSessionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAppSession"))},
    {"version", boost::any(string("2021-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAppSessionResponse(callApi(params, req, runtime));
}

GetAppSessionResponse Alibabacloud_CGCS20211111::Client::getAppSession(shared_ptr<GetAppSessionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAppSessionWithOptions(request, runtime);
}

GetAppVersionResponse Alibabacloud_CGCS20211111::Client::getAppVersionWithOptions(shared_ptr<GetAppVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appVersionId)) {
    body->insert(pair<string, string>("AppVersionId", *request->appVersionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAppVersion"))},
    {"version", boost::any(string("2021-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAppVersionResponse(callApi(params, req, runtime));
}

GetAppVersionResponse Alibabacloud_CGCS20211111::Client::getAppVersion(shared_ptr<GetAppVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAppVersionWithOptions(request, runtime);
}

GetCapacityResponse Alibabacloud_CGCS20211111::Client::getCapacityWithOptions(shared_ptr<GetCapacityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appVersion)) {
    body->insert(pair<string, string>("AppVersion", *request->appVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->districtId)) {
    body->insert(pair<string, string>("DistrictId", *request->districtId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    body->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    body->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCapacity"))},
    {"version", boost::any(string("2021-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCapacityResponse(callApi(params, req, runtime));
}

GetCapacityResponse Alibabacloud_CGCS20211111::Client::getCapacity(shared_ptr<GetCapacityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCapacityWithOptions(request, runtime);
}

GetReserveTaskDetailResponse Alibabacloud_CGCS20211111::Client::getReserveTaskDetailWithOptions(shared_ptr<GetReserveTaskDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetReserveTaskDetail"))},
    {"version", boost::any(string("2021-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetReserveTaskDetailResponse(callApi(params, req, runtime));
}

GetReserveTaskDetailResponse Alibabacloud_CGCS20211111::Client::getReserveTaskDetail(shared_ptr<GetReserveTaskDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getReserveTaskDetailWithOptions(request, runtime);
}

GetResourcePublicIPsResponse Alibabacloud_CGCS20211111::Client::getResourcePublicIPsWithOptions(shared_ptr<GetResourcePublicIPsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    body->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    body->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetResourcePublicIPs"))},
    {"version", boost::any(string("2021-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetResourcePublicIPsResponse(callApi(params, req, runtime));
}

GetResourcePublicIPsResponse Alibabacloud_CGCS20211111::Client::getResourcePublicIPs(shared_ptr<GetResourcePublicIPsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getResourcePublicIPsWithOptions(request, runtime);
}

ListAppResponse Alibabacloud_CGCS20211111::Client::listAppWithOptions(shared_ptr<ListAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->keySearch)) {
    body->insert(pair<string, string>("KeySearch", *request->keySearch));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListApp"))},
    {"version", boost::any(string("2021-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAppResponse(callApi(params, req, runtime));
}

ListAppResponse Alibabacloud_CGCS20211111::Client::listApp(shared_ptr<ListAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAppWithOptions(request, runtime);
}

ListAppSessionsResponse Alibabacloud_CGCS20211111::Client::listAppSessionsWithOptions(shared_ptr<ListAppSessionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->customSessionIds)) {
    query->insert(pair<string, vector<string>>("CustomSessionIds", *request->customSessionIds));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->platformSessionIds)) {
    query->insert(pair<string, vector<string>>("PlatformSessionIds", *request->platformSessionIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAppSessions"))},
    {"version", boost::any(string("2021-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAppSessionsResponse(callApi(params, req, runtime));
}

ListAppSessionsResponse Alibabacloud_CGCS20211111::Client::listAppSessions(shared_ptr<ListAppSessionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAppSessionsWithOptions(request, runtime);
}

ListAppVersionResponse Alibabacloud_CGCS20211111::Client::listAppVersionWithOptions(shared_ptr<ListAppVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAppVersion"))},
    {"version", boost::any(string("2021-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAppVersionResponse(callApi(params, req, runtime));
}

ListAppVersionResponse Alibabacloud_CGCS20211111::Client::listAppVersion(shared_ptr<ListAppVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAppVersionWithOptions(request, runtime);
}

ListInstancesResponse Alibabacloud_CGCS20211111::Client::listInstancesWithOptions(shared_ptr<ListInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListInstances"))},
    {"version", boost::any(string("2021-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListInstancesResponse(callApi(params, req, runtime));
}

ListInstancesResponse Alibabacloud_CGCS20211111::Client::listInstances(shared_ptr<ListInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listInstancesWithOptions(request, runtime);
}

ModifyAppResponse Alibabacloud_CGCS20211111::Client::modifyAppWithOptions(shared_ptr<ModifyAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    body->insert(pair<string, string>("AppName", *request->appName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyApp"))},
    {"version", boost::any(string("2021-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyAppResponse(callApi(params, req, runtime));
}

ModifyAppResponse Alibabacloud_CGCS20211111::Client::modifyApp(shared_ptr<ModifyAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyAppWithOptions(request, runtime);
}

ModifyAppVersionResponse Alibabacloud_CGCS20211111::Client::modifyAppVersionWithOptions(shared_ptr<ModifyAppVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appVersionId)) {
    body->insert(pair<string, string>("AppVersionId", *request->appVersionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appVersionName)) {
    body->insert(pair<string, string>("AppVersionName", *request->appVersionName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyAppVersion"))},
    {"version", boost::any(string("2021-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyAppVersionResponse(callApi(params, req, runtime));
}

ModifyAppVersionResponse Alibabacloud_CGCS20211111::Client::modifyAppVersion(shared_ptr<ModifyAppVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyAppVersionWithOptions(request, runtime);
}

ReleaseCapacityResponse Alibabacloud_CGCS20211111::Client::releaseCapacityWithOptions(shared_ptr<ReleaseCapacityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appVersion)) {
    body->insert(pair<string, string>("AppVersion", *request->appVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->districtId)) {
    body->insert(pair<string, string>("DistrictId", *request->districtId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->expectReleaseSessionCapacity)) {
    body->insert(pair<string, long>("ExpectReleaseSessionCapacity", *request->expectReleaseSessionCapacity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    body->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReleaseCapacity"))},
    {"version", boost::any(string("2021-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReleaseCapacityResponse(callApi(params, req, runtime));
}

ReleaseCapacityResponse Alibabacloud_CGCS20211111::Client::releaseCapacity(shared_ptr<ReleaseCapacityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return releaseCapacityWithOptions(request, runtime);
}

ReleaseCapacityByBatchResponse Alibabacloud_CGCS20211111::Client::releaseCapacityByBatchWithOptions(shared_ptr<ReleaseCapacityByBatchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->resBatchId)) {
    body->insert(pair<string, string>("ResBatchId", *request->resBatchId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReleaseCapacityByBatch"))},
    {"version", boost::any(string("2021-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReleaseCapacityByBatchResponse(callApi(params, req, runtime));
}

ReleaseCapacityByBatchResponse Alibabacloud_CGCS20211111::Client::releaseCapacityByBatch(shared_ptr<ReleaseCapacityByBatchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return releaseCapacityByBatchWithOptions(request, runtime);
}

ReleaseInstancesResponse Alibabacloud_CGCS20211111::Client::releaseInstancesWithOptions(shared_ptr<ReleaseInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->amount)) {
    body->insert(pair<string, long>("Amount", *request->amount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->districtId)) {
    body->insert(pair<string, string>("DistrictId", *request->districtId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceType)) {
    body->insert(pair<string, string>("InstanceType", *request->instanceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    body->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReleaseInstances"))},
    {"version", boost::any(string("2021-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReleaseInstancesResponse(callApi(params, req, runtime));
}

ReleaseInstancesResponse Alibabacloud_CGCS20211111::Client::releaseInstances(shared_ptr<ReleaseInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return releaseInstancesWithOptions(request, runtime);
}

ReserveInstancesResponse Alibabacloud_CGCS20211111::Client::reserveInstancesWithOptions(shared_ptr<ReserveInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->amount)) {
    body->insert(pair<string, long>("Amount", *request->amount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->districtId)) {
    body->insert(pair<string, string>("DistrictId", *request->districtId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceType)) {
    body->insert(pair<string, string>("InstanceType", *request->instanceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    body->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReserveInstances"))},
    {"version", boost::any(string("2021-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReserveInstancesResponse(callApi(params, req, runtime));
}

ReserveInstancesResponse Alibabacloud_CGCS20211111::Client::reserveInstances(shared_ptr<ReserveInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return reserveInstancesWithOptions(request, runtime);
}

SendBizCocChangeCallbackResponse Alibabacloud_CGCS20211111::Client::sendBizCocChangeCallbackWithOptions(shared_ptr<SendBizCocChangeCallbackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->platformSessionId)) {
    query->insert(pair<string, string>("PlatformSessionId", *request->platformSessionId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->result)) {
    query->insert(pair<string, bool>("Result", *request->result));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SendBizCocChangeCallback"))},
    {"version", boost::any(string("2021-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SendBizCocChangeCallbackResponse(callApi(params, req, runtime));
}

SendBizCocChangeCallbackResponse Alibabacloud_CGCS20211111::Client::sendBizCocChangeCallback(shared_ptr<SendBizCocChangeCallbackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sendBizCocChangeCallbackWithOptions(request, runtime);
}

StopAppSessionResponse Alibabacloud_CGCS20211111::Client::stopAppSessionWithOptions(shared_ptr<StopAppSessionRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<StopAppSessionShrinkRequest> request = make_shared<StopAppSessionShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<StopAppSessionRequestStopParam>>(tmpReq->stopParam)) {
    request->stopParamShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->stopParam, make_shared<string>("StopParam"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->customSessionId)) {
    query->insert(pair<string, string>("CustomSessionId", *request->customSessionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->platformSessionId)) {
    query->insert(pair<string, string>("PlatformSessionId", *request->platformSessionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stopParamShrink)) {
    query->insert(pair<string, string>("StopParam", *request->stopParamShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopAppSession"))},
    {"version", boost::any(string("2021-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopAppSessionResponse(callApi(params, req, runtime));
}

StopAppSessionResponse Alibabacloud_CGCS20211111::Client::stopAppSession(shared_ptr<StopAppSessionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopAppSessionWithOptions(request, runtime);
}

StopAppSessionBatchResponse Alibabacloud_CGCS20211111::Client::stopAppSessionBatchWithOptions(shared_ptr<StopAppSessionBatchRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<StopAppSessionBatchShrinkRequest> request = make_shared<StopAppSessionBatchShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<StopAppSessionBatchRequestStopParam>>(tmpReq->stopParam)) {
    request->stopParamShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->stopParam, make_shared<string>("StopParam"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appVersion)) {
    query->insert(pair<string, string>("AppVersion", *request->appVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->batchId)) {
    query->insert(pair<string, string>("BatchId", *request->batchId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stopParamShrink)) {
    query->insert(pair<string, string>("StopParam", *request->stopParamShrink));
  }
  if (!Darabonba_Util::Client::isUnset<vector<StopAppSessionBatchShrinkRequestTags>>(request->tags)) {
    query->insert(pair<string, vector<StopAppSessionBatchShrinkRequestTags>>("Tags", *request->tags));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopAppSessionBatch"))},
    {"version", boost::any(string("2021-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopAppSessionBatchResponse(callApi(params, req, runtime));
}

StopAppSessionBatchResponse Alibabacloud_CGCS20211111::Client::stopAppSessionBatch(shared_ptr<StopAppSessionBatchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopAppSessionBatchWithOptions(request, runtime);
}

UpdateSessionBizStatusResponse Alibabacloud_CGCS20211111::Client::updateSessionBizStatusWithOptions(shared_ptr<UpdateSessionBizStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizStatus)) {
    query->insert(pair<string, string>("BizStatus", *request->bizStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->platformSessionId)) {
    query->insert(pair<string, string>("PlatformSessionId", *request->platformSessionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSessionBizStatus"))},
    {"version", boost::any(string("2021-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateSessionBizStatusResponse(callApi(params, req, runtime));
}

UpdateSessionBizStatusResponse Alibabacloud_CGCS20211111::Client::updateSessionBizStatus(shared_ptr<UpdateSessionBizStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSessionBizStatusWithOptions(request, runtime);
}

