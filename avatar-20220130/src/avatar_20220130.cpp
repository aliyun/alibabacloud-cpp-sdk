// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/avatar_20220130.hpp>
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

using namespace Alibabacloud_Avatar20220130;

Alibabacloud_Avatar20220130::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("avatar"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Avatar20220130::Client::getEndpoint(shared_ptr<string> productId,
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

CancelVideoTaskResponse Alibabacloud_Avatar20220130::Client::cancelVideoTaskWithOptions(shared_ptr<CancelVideoTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CancelVideoTaskShrinkRequest> request = make_shared<CancelVideoTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CancelVideoTaskRequestApp>(tmpReq->app)) {
    request->appShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->app, make_shared<string>("App"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appShrink)) {
    query->insert(pair<string, string>("App", *request->appShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskUuid)) {
    query->insert(pair<string, string>("TaskUuid", *request->taskUuid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tenantId)) {
    query->insert(pair<string, long>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelVideoTask"))},
    {"version", boost::any(string("2022-01-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelVideoTaskResponse(callApi(params, req, runtime));
}

CancelVideoTaskResponse Alibabacloud_Avatar20220130::Client::cancelVideoTask(shared_ptr<CancelVideoTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelVideoTaskWithOptions(request, runtime);
}

ClientAuthResponse Alibabacloud_Avatar20220130::Client::clientAuthWithOptions(shared_ptr<ClientAuthRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceId)) {
    query->insert(pair<string, string>("DeviceId", *request->deviceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceInfo)) {
    query->insert(pair<string, string>("DeviceInfo", *request->deviceInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceType)) {
    query->insert(pair<string, string>("DeviceType", *request->deviceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->license)) {
    query->insert(pair<string, string>("License", *request->license));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tenantId)) {
    query->insert(pair<string, long>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ClientAuth"))},
    {"version", boost::any(string("2022-01-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ClientAuthResponse(callApi(params, req, runtime));
}

ClientAuthResponse Alibabacloud_Avatar20220130::Client::clientAuth(shared_ptr<ClientAuthRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return clientAuthWithOptions(request, runtime);
}

ClientStartResponse Alibabacloud_Avatar20220130::Client::clientStartWithOptions(shared_ptr<ClientStartRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tenantId)) {
    query->insert(pair<string, long>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ClientStart"))},
    {"version", boost::any(string("2022-01-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ClientStartResponse(callApi(params, req, runtime));
}

ClientStartResponse Alibabacloud_Avatar20220130::Client::clientStart(shared_ptr<ClientStartRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return clientStartWithOptions(request, runtime);
}

CloseTimedResetOperateResponse Alibabacloud_Avatar20220130::Client::closeTimedResetOperateWithOptions(shared_ptr<CloseTimedResetOperateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tenantId)) {
    query->insert(pair<string, long>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CloseTimedResetOperate"))},
    {"version", boost::any(string("2022-01-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CloseTimedResetOperateResponse(callApi(params, req, runtime));
}

CloseTimedResetOperateResponse Alibabacloud_Avatar20220130::Client::closeTimedResetOperate(shared_ptr<CloseTimedResetOperateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return closeTimedResetOperateWithOptions(request, runtime);
}

ConfirmAvatar2dTrainResponse Alibabacloud_Avatar20220130::Client::confirmAvatar2dTrainWithOptions(shared_ptr<ConfirmAvatar2dTrainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    query->insert(pair<string, string>("Code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->confirm)) {
    query->insert(pair<string, string>("Confirm", *request->confirm));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tenantId)) {
    query->insert(pair<string, long>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ConfirmAvatar2dTrain"))},
    {"version", boost::any(string("2022-01-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ConfirmAvatar2dTrainResponse(callApi(params, req, runtime));
}

ConfirmAvatar2dTrainResponse Alibabacloud_Avatar20220130::Client::confirmAvatar2dTrain(shared_ptr<ConfirmAvatar2dTrainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return confirmAvatar2dTrainWithOptions(request, runtime);
}

Create2dAvatarResponse Alibabacloud_Avatar20220130::Client::create2dAvatarWithOptions(shared_ptr<Create2dAvatarRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->callback)) {
    query->insert(pair<string, bool>("Callback", *request->callback));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->image)) {
    query->insert(pair<string, string>("Image", *request->image));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->orientation)) {
    query->insert(pair<string, long>("Orientation", *request->orientation));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->portrait)) {
    query->insert(pair<string, string>("Portrait", *request->portrait));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tenantId)) {
    query->insert(pair<string, long>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->transparent)) {
    query->insert(pair<string, bool>("Transparent", *request->transparent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->video)) {
    query->insert(pair<string, string>("Video", *request->video));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("Create2dAvatar"))},
    {"version", boost::any(string("2022-01-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return Create2dAvatarResponse(callApi(params, req, runtime));
}

Create2dAvatarResponse Alibabacloud_Avatar20220130::Client::create2dAvatar(shared_ptr<Create2dAvatarRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return create2dAvatarWithOptions(request, runtime);
}

DeleteAvatarResponse Alibabacloud_Avatar20220130::Client::deleteAvatarWithOptions(shared_ptr<DeleteAvatarRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    query->insert(pair<string, string>("Code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tenantId)) {
    query->insert(pair<string, long>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAvatar"))},
    {"version", boost::any(string("2022-01-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteAvatarResponse(callApi(params, req, runtime));
}

DeleteAvatarResponse Alibabacloud_Avatar20220130::Client::deleteAvatar(shared_ptr<DeleteAvatarRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAvatarWithOptions(request, runtime);
}

DuplexDecisionResponse Alibabacloud_Avatar20220130::Client::duplexDecisionWithOptions(shared_ptr<DuplexDecisionRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DuplexDecisionShrinkRequest> request = make_shared<DuplexDecisionShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->customKeywords)) {
    request->customKeywordsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->customKeywords, make_shared<string>("CustomKeywords"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<DuplexDecisionRequestDialogContext>(tmpReq->dialogContext)) {
    request->dialogContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->dialogContext, make_shared<string>("DialogContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizRequestId)) {
    query->insert(pair<string, string>("BizRequestId", *request->bizRequestId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->callTime)) {
    query->insert(pair<string, long>("CallTime", *request->callTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customKeywordsShrink)) {
    query->insert(pair<string, string>("CustomKeywords", *request->customKeywordsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dialogContextShrink)) {
    query->insert(pair<string, string>("DialogContext", *request->dialogContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dialogStatus)) {
    query->insert(pair<string, string>("DialogStatus", *request->dialogStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->interruptType)) {
    query->insert(pair<string, long>("InterruptType", *request->interruptType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    query->insert(pair<string, string>("SessionId", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tenantId)) {
    query->insert(pair<string, long>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    query->insert(pair<string, string>("Text", *request->text));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DuplexDecision"))},
    {"version", boost::any(string("2022-01-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DuplexDecisionResponse(callApi(params, req, runtime));
}

DuplexDecisionResponse Alibabacloud_Avatar20220130::Client::duplexDecision(shared_ptr<DuplexDecisionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return duplexDecisionWithOptions(request, runtime);
}

GetVideoTaskInfoResponse Alibabacloud_Avatar20220130::Client::getVideoTaskInfoWithOptions(shared_ptr<GetVideoTaskInfoRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetVideoTaskInfoShrinkRequest> request = make_shared<GetVideoTaskInfoShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<GetVideoTaskInfoRequestApp>(tmpReq->app)) {
    request->appShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->app, make_shared<string>("App"), make_shared<string>("json")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetVideoTaskInfo"))},
    {"version", boost::any(string("2022-01-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetVideoTaskInfoResponse(callApi(params, req, runtime));
}

GetVideoTaskInfoResponse Alibabacloud_Avatar20220130::Client::getVideoTaskInfo(shared_ptr<GetVideoTaskInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getVideoTaskInfoWithOptions(request, runtime);
}

LicenseAuthResponse Alibabacloud_Avatar20220130::Client::licenseAuthWithOptions(shared_ptr<LicenseAuthRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->license)) {
    query->insert(pair<string, string>("License", *request->license));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tenantId)) {
    query->insert(pair<string, long>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("LicenseAuth"))},
    {"version", boost::any(string("2022-01-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return LicenseAuthResponse(callApi(params, req, runtime));
}

LicenseAuthResponse Alibabacloud_Avatar20220130::Client::licenseAuth(shared_ptr<LicenseAuthRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return licenseAuthWithOptions(request, runtime);
}

QueryAvatarResponse Alibabacloud_Avatar20220130::Client::queryAvatarWithOptions(shared_ptr<QueryAvatarRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    query->insert(pair<string, string>("Code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tenantId)) {
    query->insert(pair<string, long>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryAvatar"))},
    {"version", boost::any(string("2022-01-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryAvatarResponse(callApi(params, req, runtime));
}

QueryAvatarResponse Alibabacloud_Avatar20220130::Client::queryAvatar(shared_ptr<QueryAvatarRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryAvatarWithOptions(request, runtime);
}

QueryAvatarListResponse Alibabacloud_Avatar20220130::Client::queryAvatarListWithOptions(shared_ptr<QueryAvatarListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->modelType)) {
    query->insert(pair<string, string>("ModelType", *request->modelType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tenantId)) {
    query->insert(pair<string, long>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryAvatarList"))},
    {"version", boost::any(string("2022-01-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryAvatarListResponse(callApi(params, req, runtime));
}

QueryAvatarListResponse Alibabacloud_Avatar20220130::Client::queryAvatarList(shared_ptr<QueryAvatarListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryAvatarListWithOptions(request, runtime);
}

QueryRunningInstanceResponse Alibabacloud_Avatar20220130::Client::queryRunningInstanceWithOptions(shared_ptr<QueryRunningInstanceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<QueryRunningInstanceShrinkRequest> request = make_shared<QueryRunningInstanceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<QueryRunningInstanceRequestApp>(tmpReq->app)) {
    request->appShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->app, make_shared<string>("App"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appShrink)) {
    query->insert(pair<string, string>("App", *request->appShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    query->insert(pair<string, string>("SessionId", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tenantId)) {
    query->insert(pair<string, long>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryRunningInstance"))},
    {"version", boost::any(string("2022-01-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryRunningInstanceResponse(callApi(params, req, runtime));
}

QueryRunningInstanceResponse Alibabacloud_Avatar20220130::Client::queryRunningInstance(shared_ptr<QueryRunningInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryRunningInstanceWithOptions(request, runtime);
}

QueryTimedResetOperateStatusResponse Alibabacloud_Avatar20220130::Client::queryTimedResetOperateStatusWithOptions(shared_ptr<QueryTimedResetOperateStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tenantId)) {
    query->insert(pair<string, long>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryTimedResetOperateStatus"))},
    {"version", boost::any(string("2022-01-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryTimedResetOperateStatusResponse(callApi(params, req, runtime));
}

QueryTimedResetOperateStatusResponse Alibabacloud_Avatar20220130::Client::queryTimedResetOperateStatus(shared_ptr<QueryTimedResetOperateStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTimedResetOperateStatusWithOptions(request, runtime);
}

QueryVideoTaskInfoResponse Alibabacloud_Avatar20220130::Client::queryVideoTaskInfoWithOptions(shared_ptr<QueryVideoTaskInfoRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<QueryVideoTaskInfoShrinkRequest> request = make_shared<QueryVideoTaskInfoShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<QueryVideoTaskInfoRequestApp>(tmpReq->app)) {
    request->appShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->app, make_shared<string>("App"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appShrink)) {
    query->insert(pair<string, string>("App", *request->appShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderById)) {
    query->insert(pair<string, string>("OrderById", *request->orderById));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    query->insert(pair<string, long>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskUuid)) {
    query->insert(pair<string, string>("TaskUuid", *request->taskUuid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tenantId)) {
    query->insert(pair<string, long>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("Title", *request->title));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    query->insert(pair<string, long>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryVideoTaskInfo"))},
    {"version", boost::any(string("2022-01-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryVideoTaskInfoResponse(callApi(params, req, runtime));
}

QueryVideoTaskInfoResponse Alibabacloud_Avatar20220130::Client::queryVideoTaskInfo(shared_ptr<QueryVideoTaskInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryVideoTaskInfoWithOptions(request, runtime);
}

Render3dAvatarResponse Alibabacloud_Avatar20220130::Client::render3dAvatarWithOptions(shared_ptr<Render3dAvatarRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    query->insert(pair<string, string>("Code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tenantId)) {
    query->insert(pair<string, long>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("Render3dAvatar"))},
    {"version", boost::any(string("2022-01-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return Render3dAvatarResponse(callApi(params, req, runtime));
}

Render3dAvatarResponse Alibabacloud_Avatar20220130::Client::render3dAvatar(shared_ptr<Render3dAvatarRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return render3dAvatarWithOptions(request, runtime);
}

SendCommandResponse Alibabacloud_Avatar20220130::Client::sendCommandWithOptions(shared_ptr<SendCommandRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SendCommandShrinkRequest> request = make_shared<SendCommandShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->content)) {
    request->contentShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->content, make_shared<string>("Content"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    query->insert(pair<string, string>("Code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contentShrink)) {
    query->insert(pair<string, string>("Content", *request->contentShrink));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->feedback)) {
    query->insert(pair<string, bool>("Feedback", *request->feedback));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    query->insert(pair<string, string>("SessionId", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tenantId)) {
    query->insert(pair<string, long>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uniqueCode)) {
    query->insert(pair<string, string>("UniqueCode", *request->uniqueCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SendCommand"))},
    {"version", boost::any(string("2022-01-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SendCommandResponse(callApi(params, req, runtime));
}

SendCommandResponse Alibabacloud_Avatar20220130::Client::sendCommand(shared_ptr<SendCommandRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sendCommandWithOptions(request, runtime);
}

SendMessageResponse Alibabacloud_Avatar20220130::Client::sendMessageWithOptions(shared_ptr<SendMessageRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SendMessageShrinkRequest> request = make_shared<SendMessageShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<SendMessageRequestStreamExtension>(tmpReq->streamExtension)) {
    request->streamExtensionShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->streamExtension, make_shared<string>("StreamExtension"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SendMessageRequestTextRequest>(tmpReq->textRequest)) {
    request->textRequestShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->textRequest, make_shared<string>("TextRequest"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SendMessageRequestVAMLRequest>(tmpReq->VAMLRequest)) {
    request->VAMLRequestShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->VAMLRequest, make_shared<string>("VAMLRequest"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->feedback)) {
    query->insert(pair<string, bool>("Feedback", *request->feedback));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    query->insert(pair<string, string>("SessionId", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->streamExtensionShrink)) {
    query->insert(pair<string, string>("StreamExtension", *request->streamExtensionShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tenantId)) {
    query->insert(pair<string, long>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->textRequestShrink)) {
    query->insert(pair<string, string>("TextRequest", *request->textRequestShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->VAMLRequestShrink)) {
    query->insert(pair<string, string>("VAMLRequest", *request->VAMLRequestShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SendMessage"))},
    {"version", boost::any(string("2022-01-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SendMessageResponse(callApi(params, req, runtime));
}

SendMessageResponse Alibabacloud_Avatar20220130::Client::sendMessage(shared_ptr<SendMessageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sendMessageWithOptions(request, runtime);
}

SendTextResponse Alibabacloud_Avatar20220130::Client::sendTextWithOptions(shared_ptr<SendTextRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SendTextShrinkRequest> request = make_shared<SendTextShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<SendTextRequestStreamExtension>(tmpReq->streamExtension)) {
    request->streamExtensionShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->streamExtension, make_shared<string>("StreamExtension"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->feedback)) {
    query->insert(pair<string, bool>("Feedback", *request->feedback));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->interrupt)) {
    query->insert(pair<string, bool>("Interrupt", *request->interrupt));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    query->insert(pair<string, string>("SessionId", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->streamExtensionShrink)) {
    query->insert(pair<string, string>("StreamExtension", *request->streamExtensionShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tenantId)) {
    query->insert(pair<string, long>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    query->insert(pair<string, string>("Text", *request->text));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uniqueCode)) {
    query->insert(pair<string, string>("UniqueCode", *request->uniqueCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SendText"))},
    {"version", boost::any(string("2022-01-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SendTextResponse(callApi(params, req, runtime));
}

SendTextResponse Alibabacloud_Avatar20220130::Client::sendText(shared_ptr<SendTextRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sendTextWithOptions(request, runtime);
}

SendVamlResponse Alibabacloud_Avatar20220130::Client::sendVamlWithOptions(shared_ptr<SendVamlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    query->insert(pair<string, string>("SessionId", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tenantId)) {
    query->insert(pair<string, long>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vaml)) {
    query->insert(pair<string, string>("Vaml", *request->vaml));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SendVaml"))},
    {"version", boost::any(string("2022-01-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SendVamlResponse(callApi(params, req, runtime));
}

SendVamlResponse Alibabacloud_Avatar20220130::Client::sendVaml(shared_ptr<SendVamlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sendVamlWithOptions(request, runtime);
}

StartInstanceResponse Alibabacloud_Avatar20220130::Client::startInstanceWithOptions(shared_ptr<StartInstanceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<StartInstanceShrinkRequest> request = make_shared<StartInstanceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<StartInstanceRequestApp>(tmpReq->app)) {
    request->appShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->app, make_shared<string>("App"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<StartInstanceRequestChannel>(tmpReq->channel)) {
    request->channelShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->channel, make_shared<string>("Channel"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<StartInstanceRequestCommandRequest>(tmpReq->commandRequest)) {
    request->commandRequestShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->commandRequest, make_shared<string>("CommandRequest"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<StartInstanceRequestUser>(tmpReq->user)) {
    request->userShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->user, make_shared<string>("User"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appShrink)) {
    query->insert(pair<string, string>("App", *request->appShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelShrink)) {
    query->insert(pair<string, string>("Channel", *request->channelShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->commandRequestShrink)) {
    query->insert(pair<string, string>("CommandRequest", *request->commandRequestShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tenantId)) {
    query->insert(pair<string, long>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userShrink)) {
    query->insert(pair<string, string>("User", *request->userShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartInstance"))},
    {"version", boost::any(string("2022-01-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartInstanceResponse(callApi(params, req, runtime));
}

StartInstanceResponse Alibabacloud_Avatar20220130::Client::startInstance(shared_ptr<StartInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startInstanceWithOptions(request, runtime);
}

StartTimedResetOperateResponse Alibabacloud_Avatar20220130::Client::startTimedResetOperateWithOptions(shared_ptr<StartTimedResetOperateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tenantId)) {
    query->insert(pair<string, long>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartTimedResetOperate"))},
    {"version", boost::any(string("2022-01-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartTimedResetOperateResponse(callApi(params, req, runtime));
}

StartTimedResetOperateResponse Alibabacloud_Avatar20220130::Client::startTimedResetOperate(shared_ptr<StartTimedResetOperateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startTimedResetOperateWithOptions(request, runtime);
}

StopInstanceResponse Alibabacloud_Avatar20220130::Client::stopInstanceWithOptions(shared_ptr<StopInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    query->insert(pair<string, string>("SessionId", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tenantId)) {
    query->insert(pair<string, long>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopInstance"))},
    {"version", boost::any(string("2022-01-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopInstanceResponse(callApi(params, req, runtime));
}

StopInstanceResponse Alibabacloud_Avatar20220130::Client::stopInstance(shared_ptr<StopInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopInstanceWithOptions(request, runtime);
}

SubmitAudioTo2DAvatarVideoTaskResponse Alibabacloud_Avatar20220130::Client::submitAudioTo2DAvatarVideoTaskWithOptions(shared_ptr<SubmitAudioTo2DAvatarVideoTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SubmitAudioTo2DAvatarVideoTaskShrinkRequest> request = make_shared<SubmitAudioTo2DAvatarVideoTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<SubmitAudioTo2DAvatarVideoTaskRequestApp>(tmpReq->app)) {
    request->appShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->app, make_shared<string>("App"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubmitAudioTo2DAvatarVideoTaskRequestAvatarInfo>(tmpReq->avatarInfo)) {
    request->avatarInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->avatarInfo, make_shared<string>("AvatarInfo"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubmitAudioTo2DAvatarVideoTaskRequestVideoInfo>(tmpReq->videoInfo)) {
    request->videoInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->videoInfo, make_shared<string>("VideoInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appShrink)) {
    query->insert(pair<string, string>("App", *request->appShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->avatarInfoShrink)) {
    query->insert(pair<string, string>("AvatarInfo", *request->avatarInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->callback)) {
    query->insert(pair<string, bool>("Callback", *request->callback));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callbackParams)) {
    query->insert(pair<string, string>("CallbackParams", *request->callbackParams));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extParams)) {
    query->insert(pair<string, string>("ExtParams", *request->extParams));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tenantId)) {
    query->insert(pair<string, long>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("Title", *request->title));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->videoInfoShrink)) {
    query->insert(pair<string, string>("VideoInfo", *request->videoInfoShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitAudioTo2DAvatarVideoTask"))},
    {"version", boost::any(string("2022-01-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitAudioTo2DAvatarVideoTaskResponse(callApi(params, req, runtime));
}

SubmitAudioTo2DAvatarVideoTaskResponse Alibabacloud_Avatar20220130::Client::submitAudioTo2DAvatarVideoTask(shared_ptr<SubmitAudioTo2DAvatarVideoTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitAudioTo2DAvatarVideoTaskWithOptions(request, runtime);
}

SubmitAudioTo3DAvatarVideoTaskResponse Alibabacloud_Avatar20220130::Client::submitAudioTo3DAvatarVideoTaskWithOptions(shared_ptr<SubmitAudioTo3DAvatarVideoTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SubmitAudioTo3DAvatarVideoTaskShrinkRequest> request = make_shared<SubmitAudioTo3DAvatarVideoTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<SubmitAudioTo3DAvatarVideoTaskRequestApp>(tmpReq->app)) {
    request->appShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->app, make_shared<string>("App"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubmitAudioTo3DAvatarVideoTaskRequestAvatarInfo>(tmpReq->avatarInfo)) {
    request->avatarInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->avatarInfo, make_shared<string>("AvatarInfo"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubmitAudioTo3DAvatarVideoTaskRequestVideoInfo>(tmpReq->videoInfo)) {
    request->videoInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->videoInfo, make_shared<string>("VideoInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appShrink)) {
    query->insert(pair<string, string>("App", *request->appShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->avatarInfoShrink)) {
    query->insert(pair<string, string>("AvatarInfo", *request->avatarInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->callback)) {
    query->insert(pair<string, bool>("Callback", *request->callback));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callbackParams)) {
    query->insert(pair<string, string>("CallbackParams", *request->callbackParams));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extParams)) {
    query->insert(pair<string, string>("ExtParams", *request->extParams));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tenantId)) {
    query->insert(pair<string, long>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("Title", *request->title));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->videoInfoShrink)) {
    query->insert(pair<string, string>("VideoInfo", *request->videoInfoShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitAudioTo3DAvatarVideoTask"))},
    {"version", boost::any(string("2022-01-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitAudioTo3DAvatarVideoTaskResponse(callApi(params, req, runtime));
}

SubmitAudioTo3DAvatarVideoTaskResponse Alibabacloud_Avatar20220130::Client::submitAudioTo3DAvatarVideoTask(shared_ptr<SubmitAudioTo3DAvatarVideoTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitAudioTo3DAvatarVideoTaskWithOptions(request, runtime);
}

SubmitAvatarVideoTaskResponse Alibabacloud_Avatar20220130::Client::submitAvatarVideoTaskWithOptions(shared_ptr<SubmitAvatarVideoTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SubmitAvatarVideoTaskShrinkRequest> request = make_shared<SubmitAvatarVideoTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<SubmitAvatarVideoTaskRequestApp>(tmpReq->app)) {
    request->appShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->app, make_shared<string>("App"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appShrink)) {
    query->insert(pair<string, string>("App", *request->appShrink));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->callback)) {
    query->insert(pair<string, bool>("Callback", *request->callback));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callbackParams)) {
    query->insert(pair<string, string>("CallbackParams", *request->callbackParams));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extParams)) {
    query->insert(pair<string, string>("ExtParams", *request->extParams));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tenantId)) {
    query->insert(pair<string, long>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("Title", *request->title));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->videoParams)) {
    query->insert(pair<string, string>("VideoParams", *request->videoParams));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitAvatarVideoTask"))},
    {"version", boost::any(string("2022-01-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitAvatarVideoTaskResponse(callApi(params, req, runtime));
}

SubmitAvatarVideoTaskResponse Alibabacloud_Avatar20220130::Client::submitAvatarVideoTask(shared_ptr<SubmitAvatarVideoTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitAvatarVideoTaskWithOptions(request, runtime);
}

SubmitTextTo2DAvatarVideoTaskResponse Alibabacloud_Avatar20220130::Client::submitTextTo2DAvatarVideoTaskWithOptions(shared_ptr<SubmitTextTo2DAvatarVideoTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SubmitTextTo2DAvatarVideoTaskShrinkRequest> request = make_shared<SubmitTextTo2DAvatarVideoTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<SubmitTextTo2DAvatarVideoTaskRequestApp>(tmpReq->app)) {
    request->appShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->app, make_shared<string>("App"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubmitTextTo2DAvatarVideoTaskRequestAudioInfo>(tmpReq->audioInfo)) {
    request->audioInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->audioInfo, make_shared<string>("AudioInfo"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubmitTextTo2DAvatarVideoTaskRequestAvatarInfo>(tmpReq->avatarInfo)) {
    request->avatarInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->avatarInfo, make_shared<string>("AvatarInfo"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubmitTextTo2DAvatarVideoTaskRequestVideoInfo>(tmpReq->videoInfo)) {
    request->videoInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->videoInfo, make_shared<string>("VideoInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appShrink)) {
    query->insert(pair<string, string>("App", *request->appShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->audioInfoShrink)) {
    query->insert(pair<string, string>("AudioInfo", *request->audioInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->avatarInfoShrink)) {
    query->insert(pair<string, string>("AvatarInfo", *request->avatarInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->callback)) {
    query->insert(pair<string, bool>("Callback", *request->callback));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callbackParams)) {
    query->insert(pair<string, string>("CallbackParams", *request->callbackParams));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extParams)) {
    query->insert(pair<string, string>("ExtParams", *request->extParams));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tenantId)) {
    query->insert(pair<string, long>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    query->insert(pair<string, string>("Text", *request->text));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("Title", *request->title));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->videoInfoShrink)) {
    query->insert(pair<string, string>("VideoInfo", *request->videoInfoShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitTextTo2DAvatarVideoTask"))},
    {"version", boost::any(string("2022-01-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitTextTo2DAvatarVideoTaskResponse(callApi(params, req, runtime));
}

SubmitTextTo2DAvatarVideoTaskResponse Alibabacloud_Avatar20220130::Client::submitTextTo2DAvatarVideoTask(shared_ptr<SubmitTextTo2DAvatarVideoTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitTextTo2DAvatarVideoTaskWithOptions(request, runtime);
}

SubmitTextTo3DAvatarVideoTaskResponse Alibabacloud_Avatar20220130::Client::submitTextTo3DAvatarVideoTaskWithOptions(shared_ptr<SubmitTextTo3DAvatarVideoTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SubmitTextTo3DAvatarVideoTaskShrinkRequest> request = make_shared<SubmitTextTo3DAvatarVideoTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<SubmitTextTo3DAvatarVideoTaskRequestApp>(tmpReq->app)) {
    request->appShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->app, make_shared<string>("App"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubmitTextTo3DAvatarVideoTaskRequestAudioInfo>(tmpReq->audioInfo)) {
    request->audioInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->audioInfo, make_shared<string>("AudioInfo"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubmitTextTo3DAvatarVideoTaskRequestAvatarInfo>(tmpReq->avatarInfo)) {
    request->avatarInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->avatarInfo, make_shared<string>("AvatarInfo"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubmitTextTo3DAvatarVideoTaskRequestVideoInfo>(tmpReq->videoInfo)) {
    request->videoInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->videoInfo, make_shared<string>("VideoInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appShrink)) {
    query->insert(pair<string, string>("App", *request->appShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->audioInfoShrink)) {
    query->insert(pair<string, string>("AudioInfo", *request->audioInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->avatarInfoShrink)) {
    query->insert(pair<string, string>("AvatarInfo", *request->avatarInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->callback)) {
    query->insert(pair<string, bool>("Callback", *request->callback));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callbackParams)) {
    query->insert(pair<string, string>("CallbackParams", *request->callbackParams));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extParams)) {
    query->insert(pair<string, string>("ExtParams", *request->extParams));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tenantId)) {
    query->insert(pair<string, long>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    query->insert(pair<string, string>("Text", *request->text));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("Title", *request->title));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->videoInfoShrink)) {
    query->insert(pair<string, string>("VideoInfo", *request->videoInfoShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitTextTo3DAvatarVideoTask"))},
    {"version", boost::any(string("2022-01-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitTextTo3DAvatarVideoTaskResponse(callApi(params, req, runtime));
}

SubmitTextTo3DAvatarVideoTaskResponse Alibabacloud_Avatar20220130::Client::submitTextTo3DAvatarVideoTask(shared_ptr<SubmitTextTo3DAvatarVideoTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitTextTo3DAvatarVideoTaskWithOptions(request, runtime);
}

Update2dAvatarResponse Alibabacloud_Avatar20220130::Client::update2dAvatarWithOptions(shared_ptr<Update2dAvatarRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->callback)) {
    query->insert(pair<string, bool>("Callback", *request->callback));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    query->insert(pair<string, string>("Code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->image)) {
    query->insert(pair<string, string>("Image", *request->image));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->orientation)) {
    query->insert(pair<string, long>("Orientation", *request->orientation));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->portrait)) {
    query->insert(pair<string, string>("Portrait", *request->portrait));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tenantId)) {
    query->insert(pair<string, long>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->transparent)) {
    query->insert(pair<string, bool>("Transparent", *request->transparent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->video)) {
    query->insert(pair<string, string>("Video", *request->video));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("Update2dAvatar"))},
    {"version", boost::any(string("2022-01-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return Update2dAvatarResponse(callApi(params, req, runtime));
}

Update2dAvatarResponse Alibabacloud_Avatar20220130::Client::update2dAvatar(shared_ptr<Update2dAvatarRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return update2dAvatarWithOptions(request, runtime);
}

