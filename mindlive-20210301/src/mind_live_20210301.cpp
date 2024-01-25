// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/mind_live_20210301.hpp>
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

using namespace Alibabacloud_MindLive20210301;

Alibabacloud_MindLive20210301::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("mindlive"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_MindLive20210301::Client::getEndpoint(shared_ptr<string> productId,
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

LoginDeviceResponse Alibabacloud_MindLive20210301::Client::loginDeviceWithOptions(shared_ptr<LoginDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userSource)) {
    query->insert(pair<string, string>("UserSource", *request->userSource));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("LoginDevice"))},
    {"version", boost::any(string("2021-03-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return LoginDeviceResponse(callApi(params, req, runtime));
}

LoginDeviceResponse Alibabacloud_MindLive20210301::Client::loginDevice(shared_ptr<LoginDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return loginDeviceWithOptions(request, runtime);
}

LogoutDeviceResponse Alibabacloud_MindLive20210301::Client::logoutDeviceWithOptions(shared_ptr<LogoutDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userSource)) {
    query->insert(pair<string, string>("UserSource", *request->userSource));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("LogoutDevice"))},
    {"version", boost::any(string("2021-03-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return LogoutDeviceResponse(callApi(params, req, runtime));
}

LogoutDeviceResponse Alibabacloud_MindLive20210301::Client::logoutDevice(shared_ptr<LogoutDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return logoutDeviceWithOptions(request, runtime);
}

QueryItemBackgroundsResponse Alibabacloud_MindLive20210301::Client::queryItemBackgroundsWithOptions(shared_ptr<QueryItemBackgroundsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<QueryItemBackgroundsShrinkRequest> request = make_shared<QueryItemBackgroundsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->itemIds)) {
    request->itemIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->itemIds, make_shared<string>("ItemIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->itemIdsShrink)) {
    query->insert(pair<string, string>("ItemIds", *request->itemIdsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryItemBackgrounds"))},
    {"version", boost::any(string("2021-03-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryItemBackgroundsResponse(callApi(params, req, runtime));
}

QueryItemBackgroundsResponse Alibabacloud_MindLive20210301::Client::queryItemBackgrounds(shared_ptr<QueryItemBackgroundsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryItemBackgroundsWithOptions(request, runtime);
}

ReportCurrentBackgroundResponse Alibabacloud_MindLive20210301::Client::reportCurrentBackgroundWithOptions(shared_ptr<ReportCurrentBackgroundRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ReportCurrentBackgroundShrinkRequest> request = make_shared<ReportCurrentBackgroundShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->bgConfig)) {
    request->bgConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->bgConfig, make_shared<string>("BgConfig"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bgConfigShrink)) {
    query->insert(pair<string, string>("BgConfig", *request->bgConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mode)) {
    query->insert(pair<string, string>("Mode", *request->mode));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->open)) {
    query->insert(pair<string, bool>("Open", *request->open));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceUuid)) {
    query->insert(pair<string, string>("ResourceUuid", *request->resourceUuid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReportCurrentBackground"))},
    {"version", boost::any(string("2021-03-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReportCurrentBackgroundResponse(callApi(params, req, runtime));
}

ReportCurrentBackgroundResponse Alibabacloud_MindLive20210301::Client::reportCurrentBackground(shared_ptr<ReportCurrentBackgroundRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return reportCurrentBackgroundWithOptions(request, runtime);
}

ReportDevConfigResponse Alibabacloud_MindLive20210301::Client::reportDevConfigWithOptions(shared_ptr<ReportDevConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->configs)) {
    query->insert(pair<string, string>("Configs", *request->configs));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReportDevConfig"))},
    {"version", boost::any(string("2021-03-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReportDevConfigResponse(callApi(params, req, runtime));
}

ReportDevConfigResponse Alibabacloud_MindLive20210301::Client::reportDevConfig(shared_ptr<ReportDevConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return reportDevConfigWithOptions(request, runtime);
}

ReportLiveStateResponse Alibabacloud_MindLive20210301::Client::reportLiveStateWithOptions(shared_ptr<ReportLiveStateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->anchorId)) {
    query->insert(pair<string, string>("AnchorId", *request->anchorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->liveMode)) {
    query->insert(pair<string, string>("LiveMode", *request->liveMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->liveState)) {
    query->insert(pair<string, string>("LiveState", *request->liveState));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReportLiveState"))},
    {"version", boost::any(string("2021-03-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReportLiveStateResponse(callApi(params, req, runtime));
}

ReportLiveStateResponse Alibabacloud_MindLive20210301::Client::reportLiveState(shared_ptr<ReportLiveStateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return reportLiveStateWithOptions(request, runtime);
}

ReportScreenResponse Alibabacloud_MindLive20210301::Client::reportScreenWithOptions(shared_ptr<ReportScreenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ossBucketName)) {
    query->insert(pair<string, string>("OssBucketName", *request->ossBucketName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossObjectKey)) {
    query->insert(pair<string, string>("OssObjectKey", *request->ossObjectKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReportScreen"))},
    {"version", boost::any(string("2021-03-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReportScreenResponse(callApi(params, req, runtime));
}

ReportScreenResponse Alibabacloud_MindLive20210301::Client::reportScreen(shared_ptr<ReportScreenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return reportScreenWithOptions(request, runtime);
}

ReportUserConfigResponse Alibabacloud_MindLive20210301::Client::reportUserConfigWithOptions(shared_ptr<ReportUserConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->key)) {
    query->insert(pair<string, string>("Key", *request->key));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->value)) {
    query->insert(pair<string, string>("Value", *request->value));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReportUserConfig"))},
    {"version", boost::any(string("2021-03-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReportUserConfigResponse(callApi(params, req, runtime));
}

ReportUserConfigResponse Alibabacloud_MindLive20210301::Client::reportUserConfig(shared_ptr<ReportUserConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return reportUserConfigWithOptions(request, runtime);
}

RequestAuthorizationDataResponse Alibabacloud_MindLive20210301::Client::requestAuthorizationDataWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RequestAuthorizationData"))},
    {"version", boost::any(string("2021-03-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RequestAuthorizationDataResponse(callApi(params, req, runtime));
}

RequestAuthorizationDataResponse Alibabacloud_MindLive20210301::Client::requestAuthorizationData() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return requestAuthorizationDataWithOptions(runtime);
}

RequestBackgroundResponse Alibabacloud_MindLive20210301::Client::requestBackgroundWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RequestBackground"))},
    {"version", boost::any(string("2021-03-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RequestBackgroundResponse(callApi(params, req, runtime));
}

RequestBackgroundResponse Alibabacloud_MindLive20210301::Client::requestBackground() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return requestBackgroundWithOptions(runtime);
}

RequestBindDataResponse Alibabacloud_MindLive20210301::Client::requestBindDataWithOptions(shared_ptr<RequestBindDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->liveSource)) {
    query->insert(pair<string, string>("LiveSource", *request->liveSource));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RequestBindData"))},
    {"version", boost::any(string("2021-03-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RequestBindDataResponse(callApi(params, req, runtime));
}

RequestBindDataResponse Alibabacloud_MindLive20210301::Client::requestBindData(shared_ptr<RequestBindDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return requestBindDataWithOptions(request, runtime);
}

RequestBindingStateResponse Alibabacloud_MindLive20210301::Client::requestBindingStateWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RequestBindingState"))},
    {"version", boost::any(string("2021-03-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RequestBindingStateResponse(callApi(params, req, runtime));
}

RequestBindingStateResponse Alibabacloud_MindLive20210301::Client::requestBindingState() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return requestBindingStateWithOptions(runtime);
}

RequestDeviceInfoResponse Alibabacloud_MindLive20210301::Client::requestDeviceInfoWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RequestDeviceInfo"))},
    {"version", boost::any(string("2021-03-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RequestDeviceInfoResponse(callApi(params, req, runtime));
}

RequestDeviceInfoResponse Alibabacloud_MindLive20210301::Client::requestDeviceInfo() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return requestDeviceInfoWithOptions(runtime);
}

RequestIotTriadResponse Alibabacloud_MindLive20210301::Client::requestIotTriadWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RequestIotTriad"))},
    {"version", boost::any(string("2021-03-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RequestIotTriadResponse(callApi(params, req, runtime));
}

RequestIotTriadResponse Alibabacloud_MindLive20210301::Client::requestIotTriad() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return requestIotTriadWithOptions(runtime);
}

RequestLiveSellPointStateResponse Alibabacloud_MindLive20210301::Client::requestLiveSellPointStateWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RequestLiveSellPointState"))},
    {"version", boost::any(string("2021-03-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RequestLiveSellPointStateResponse(callApi(params, req, runtime));
}

RequestLiveSellPointStateResponse Alibabacloud_MindLive20210301::Client::requestLiveSellPointState() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return requestLiveSellPointStateWithOptions(runtime);
}

RequestLiveTeleprompterStateResponse Alibabacloud_MindLive20210301::Client::requestLiveTeleprompterStateWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RequestLiveTeleprompterState"))},
    {"version", boost::any(string("2021-03-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RequestLiveTeleprompterStateResponse(callApi(params, req, runtime));
}

RequestLiveTeleprompterStateResponse Alibabacloud_MindLive20210301::Client::requestLiveTeleprompterState() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return requestLiveTeleprompterStateWithOptions(runtime);
}

RequestOssStsResponse Alibabacloud_MindLive20210301::Client::requestOssStsWithOptions(shared_ptr<RequestOssStsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appCode)) {
    query->insert(pair<string, string>("AppCode", *request->appCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->expireSeconds)) {
    query->insert(pair<string, long>("ExpireSeconds", *request->expireSeconds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RequestOssSts"))},
    {"version", boost::any(string("2021-03-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RequestOssStsResponse(callApi(params, req, runtime));
}

RequestOssStsResponse Alibabacloud_MindLive20210301::Client::requestOssSts(shared_ptr<RequestOssStsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return requestOssStsWithOptions(request, runtime);
}

RequestPasterResponse Alibabacloud_MindLive20210301::Client::requestPasterWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RequestPaster"))},
    {"version", boost::any(string("2021-03-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RequestPasterResponse(callApi(params, req, runtime));
}

RequestPasterResponse Alibabacloud_MindLive20210301::Client::requestPaster() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return requestPasterWithOptions(runtime);
}

RequestResetDataResponse Alibabacloud_MindLive20210301::Client::requestResetDataWithOptions(shared_ptr<RequestResetDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->liveSource)) {
    query->insert(pair<string, string>("LiveSource", *request->liveSource));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RequestResetData"))},
    {"version", boost::any(string("2021-03-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RequestResetDataResponse(callApi(params, req, runtime));
}

RequestResetDataResponse Alibabacloud_MindLive20210301::Client::requestResetData(shared_ptr<RequestResetDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return requestResetDataWithOptions(request, runtime);
}

RequestServiceInfoResponse Alibabacloud_MindLive20210301::Client::requestServiceInfoWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RequestServiceInfo"))},
    {"version", boost::any(string("2021-03-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RequestServiceInfoResponse(callApi(params, req, runtime));
}

RequestServiceInfoResponse Alibabacloud_MindLive20210301::Client::requestServiceInfo() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return requestServiceInfoWithOptions(runtime);
}

RequestUserConfigResponse Alibabacloud_MindLive20210301::Client::requestUserConfigWithOptions(shared_ptr<RequestUserConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->key)) {
    query->insert(pair<string, string>("Key", *request->key));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RequestUserConfig"))},
    {"version", boost::any(string("2021-03-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RequestUserConfigResponse(callApi(params, req, runtime));
}

RequestUserConfigResponse Alibabacloud_MindLive20210301::Client::requestUserConfig(shared_ptr<RequestUserConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return requestUserConfigWithOptions(request, runtime);
}

RequestUserSellPointTemplateResponse Alibabacloud_MindLive20210301::Client::requestUserSellPointTemplateWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RequestUserSellPointTemplate"))},
    {"version", boost::any(string("2021-03-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RequestUserSellPointTemplateResponse(callApi(params, req, runtime));
}

RequestUserSellPointTemplateResponse Alibabacloud_MindLive20210301::Client::requestUserSellPointTemplate() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return requestUserSellPointTemplateWithOptions(runtime);
}

ResetDeviceResponse Alibabacloud_MindLive20210301::Client::resetDeviceWithOptions(shared_ptr<ResetDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    query->insert(pair<string, string>("Code", *request->code));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResetDevice"))},
    {"version", boost::any(string("2021-03-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ResetDeviceResponse(callApi(params, req, runtime));
}

ResetDeviceResponse Alibabacloud_MindLive20210301::Client::resetDevice(shared_ptr<ResetDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resetDeviceWithOptions(request, runtime);
}

UpdateCurrentItemResponse Alibabacloud_MindLive20210301::Client::updateCurrentItemWithOptions(shared_ptr<UpdateCurrentItemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->itemId)) {
    query->insert(pair<string, string>("ItemId", *request->itemId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateCurrentItem"))},
    {"version", boost::any(string("2021-03-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateCurrentItemResponse(callApi(params, req, runtime));
}

UpdateCurrentItemResponse Alibabacloud_MindLive20210301::Client::updateCurrentItem(shared_ptr<UpdateCurrentItemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateCurrentItemWithOptions(request, runtime);
}

UpdateLiveSellPointStateResponse Alibabacloud_MindLive20210301::Client::updateLiveSellPointStateWithOptions(shared_ptr<UpdateLiveSellPointStateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->display)) {
    query->insert(pair<string, bool>("Display", *request->display));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateLiveSellPointState"))},
    {"version", boost::any(string("2021-03-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateLiveSellPointStateResponse(callApi(params, req, runtime));
}

UpdateLiveSellPointStateResponse Alibabacloud_MindLive20210301::Client::updateLiveSellPointState(shared_ptr<UpdateLiveSellPointStateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateLiveSellPointStateWithOptions(request, runtime);
}

UpdateLiveTeleprompterStateResponse Alibabacloud_MindLive20210301::Client::updateLiveTeleprompterStateWithOptions(shared_ptr<UpdateLiveTeleprompterStateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->display)) {
    query->insert(pair<string, bool>("Display", *request->display));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateLiveTeleprompterState"))},
    {"version", boost::any(string("2021-03-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateLiveTeleprompterStateResponse(callApi(params, req, runtime));
}

UpdateLiveTeleprompterStateResponse Alibabacloud_MindLive20210301::Client::updateLiveTeleprompterState(shared_ptr<UpdateLiveTeleprompterStateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateLiveTeleprompterStateWithOptions(request, runtime);
}

