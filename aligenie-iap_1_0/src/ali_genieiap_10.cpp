// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/ali_genieiap_10.hpp>
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

using namespace Alibabacloud_AliGenieiap10;

Alibabacloud_AliGenieiap10::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("aligenie"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_AliGenieiap10::Client::getEndpoint(shared_ptr<string> productId,
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

AppUseTimeReportResponse Alibabacloud_AliGenieiap10::Client::appUseTimeReportWithOptions(shared_ptr<AppUseTimeReportRequest> tmpReq, shared_ptr<AppUseTimeReportHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<AppUseTimeReportShrinkRequest> request = make_shared<AppUseTimeReportShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<AppUseTimeReportRequestDeviceInfo>(tmpReq->deviceInfo)) {
    request->deviceInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->deviceInfo, make_shared<string>("DeviceInfo"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<AppUseTimeReportRequestPayload>(tmpReq->payload)) {
    request->payloadShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->payload, make_shared<string>("Payload"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<AppUseTimeReportRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->userInfo, make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceInfoShrink)) {
    body->insert(pair<string, string>("DeviceInfo", *request->deviceInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->payloadShrink)) {
    body->insert(pair<string, string>("Payload", *request->payloadShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userInfoShrink)) {
    body->insert(pair<string, string>("UserInfo", *request->userInfoShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAligenieAccessToken)) {
    realHeaders->insert(pair<string, string>("x-acs-aligenie-access-token", Darabonba_Util::Client::toJSONString(headers->xAcsAligenieAccessToken)));
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->authorization)) {
    realHeaders->insert(pair<string, string>("Authorization", Darabonba_Util::Client::toJSONString(headers->authorization)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AppUseTimeReport"))},
    {"version", boost::any(string("iap_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/iap/vip/use/time/report"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AppUseTimeReportResponse(callApi(params, req, runtime));
}

AppUseTimeReportResponse Alibabacloud_AliGenieiap10::Client::appUseTimeReport(shared_ptr<AppUseTimeReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<AppUseTimeReportHeaders> headers = make_shared<AppUseTimeReportHeaders>();
  return appUseTimeReportWithOptions(request, headers, runtime);
}

CallBackThirdRightSendPlanResponse Alibabacloud_AliGenieiap10::Client::callBackThirdRightSendPlanWithOptions(shared_ptr<CallBackThirdRightSendPlanRequest> tmpReq, shared_ptr<CallBackThirdRightSendPlanHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CallBackThirdRightSendPlanShrinkRequest> request = make_shared<CallBackThirdRightSendPlanShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->extendInfo)) {
    request->extendInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->extendInfo, make_shared<string>("ExtendInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizGroup)) {
    query->insert(pair<string, string>("BizGroup", *request->bizGroup));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizType)) {
    query->insert(pair<string, string>("BizType", *request->bizType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->cardType)) {
    query->insert(pair<string, long>("CardType", *request->cardType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->errorMsg)) {
    query->insert(pair<string, string>("ErrorMsg", *request->errorMsg));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extendInfoShrink)) {
    query->insert(pair<string, string>("ExtendInfo", *request->extendInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->genieOpenId)) {
    query->insert(pair<string, string>("GenieOpenId", *request->genieOpenId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->receiveStatus)) {
    query->insert(pair<string, long>("ReceiveStatus", *request->receiveStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sn)) {
    query->insert(pair<string, string>("Sn", *request->sn));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->supplierId)) {
    query->insert(pair<string, long>("SupplierId", *request->supplierId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAligenieAccessToken)) {
    realHeaders->insert(pair<string, string>("x-acs-aligenie-access-token", Darabonba_Util::Client::toJSONString(headers->xAcsAligenieAccessToken)));
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->authorization)) {
    realHeaders->insert(pair<string, string>("Authorization", Darabonba_Util::Client::toJSONString(headers->authorization)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CallBackThirdRightSendPlan"))},
    {"version", boost::any(string("iap_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/1.0/iap/business/CallBackThirdRightSendPlan"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CallBackThirdRightSendPlanResponse(callApi(params, req, runtime));
}

CallBackThirdRightSendPlanResponse Alibabacloud_AliGenieiap10::Client::callBackThirdRightSendPlan(shared_ptr<CallBackThirdRightSendPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CallBackThirdRightSendPlanHeaders> headers = make_shared<CallBackThirdRightSendPlanHeaders>();
  return callBackThirdRightSendPlanWithOptions(request, headers, runtime);
}

CheckThirdRightSendPlanResponse Alibabacloud_AliGenieiap10::Client::checkThirdRightSendPlanWithOptions(shared_ptr<CheckThirdRightSendPlanRequest> tmpReq, shared_ptr<CheckThirdRightSendPlanHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CheckThirdRightSendPlanShrinkRequest> request = make_shared<CheckThirdRightSendPlanShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->extendInfo)) {
    request->extendInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->extendInfo, make_shared<string>("ExtendInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizGroup)) {
    query->insert(pair<string, string>("BizGroup", *request->bizGroup));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizType)) {
    query->insert(pair<string, string>("BizType", *request->bizType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extendInfoShrink)) {
    query->insert(pair<string, string>("ExtendInfo", *request->extendInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sn)) {
    query->insert(pair<string, string>("Sn", *request->sn));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->supplierId)) {
    query->insert(pair<string, long>("SupplierId", *request->supplierId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAligenieAccessToken)) {
    realHeaders->insert(pair<string, string>("x-acs-aligenie-access-token", Darabonba_Util::Client::toJSONString(headers->xAcsAligenieAccessToken)));
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->authorization)) {
    realHeaders->insert(pair<string, string>("Authorization", Darabonba_Util::Client::toJSONString(headers->authorization)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckThirdRightSendPlan"))},
    {"version", boost::any(string("iap_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/iap/business/CheckThirdRightSendPlan"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckThirdRightSendPlanResponse(callApi(params, req, runtime));
}

CheckThirdRightSendPlanResponse Alibabacloud_AliGenieiap10::Client::checkThirdRightSendPlan(shared_ptr<CheckThirdRightSendPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CheckThirdRightSendPlanHeaders> headers = make_shared<CheckThirdRightSendPlanHeaders>();
  return checkThirdRightSendPlanWithOptions(request, headers, runtime);
}

CreateReminderResponse Alibabacloud_AliGenieiap10::Client::createReminderWithOptions(shared_ptr<CreateReminderRequest> tmpReq, shared_ptr<CreateReminderHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateReminderShrinkRequest> request = make_shared<CreateReminderShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateReminderRequestDeviceInfo>(tmpReq->deviceInfo)) {
    request->deviceInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->deviceInfo, make_shared<string>("DeviceInfo"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateReminderRequestPayload>(tmpReq->payload)) {
    request->payloadShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->payload, make_shared<string>("Payload"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateReminderRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->userInfo, make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceInfoShrink)) {
    body->insert(pair<string, string>("DeviceInfo", *request->deviceInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->payloadShrink)) {
    body->insert(pair<string, string>("Payload", *request->payloadShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userInfoShrink)) {
    body->insert(pair<string, string>("UserInfo", *request->userInfoShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAligenieAccessToken)) {
    realHeaders->insert(pair<string, string>("x-acs-aligenie-access-token", Darabonba_Util::Client::toJSONString(headers->xAcsAligenieAccessToken)));
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->authorization)) {
    realHeaders->insert(pair<string, string>("Authorization", Darabonba_Util::Client::toJSONString(headers->authorization)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateReminder"))},
    {"version", boost::any(string("iap_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/iap/reminder/create"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateReminderResponse(callApi(params, req, runtime));
}

CreateReminderResponse Alibabacloud_AliGenieiap10::Client::createReminder(shared_ptr<CreateReminderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CreateReminderHeaders> headers = make_shared<CreateReminderHeaders>();
  return createReminderWithOptions(request, headers, runtime);
}

DeleteReminderResponse Alibabacloud_AliGenieiap10::Client::deleteReminderWithOptions(shared_ptr<DeleteReminderRequest> tmpReq, shared_ptr<DeleteReminderHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeleteReminderShrinkRequest> request = make_shared<DeleteReminderShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<DeleteReminderRequestDeviceInfo>(tmpReq->deviceInfo)) {
    request->deviceInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->deviceInfo, make_shared<string>("DeviceInfo"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<DeleteReminderRequestPayload>(tmpReq->payload)) {
    request->payloadShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->payload, make_shared<string>("Payload"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<DeleteReminderRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->userInfo, make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceInfoShrink)) {
    query->insert(pair<string, string>("DeviceInfo", *request->deviceInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->payloadShrink)) {
    query->insert(pair<string, string>("Payload", *request->payloadShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userInfoShrink)) {
    query->insert(pair<string, string>("UserInfo", *request->userInfoShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAligenieAccessToken)) {
    realHeaders->insert(pair<string, string>("x-acs-aligenie-access-token", Darabonba_Util::Client::toJSONString(headers->xAcsAligenieAccessToken)));
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->authorization)) {
    realHeaders->insert(pair<string, string>("Authorization", Darabonba_Util::Client::toJSONString(headers->authorization)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteReminder"))},
    {"version", boost::any(string("iap_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/iap/reminder/delete"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteReminderResponse(callApi(params, req, runtime));
}

DeleteReminderResponse Alibabacloud_AliGenieiap10::Client::deleteReminder(shared_ptr<DeleteReminderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<DeleteReminderHeaders> headers = make_shared<DeleteReminderHeaders>();
  return deleteReminderWithOptions(request, headers, runtime);
}

GetAccountForAppResponse Alibabacloud_AliGenieiap10::Client::getAccountForAppWithOptions(shared_ptr<GetAccountForAppRequest> tmpReq, shared_ptr<GetAccountForAppHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetAccountForAppShrinkRequest> request = make_shared<GetAccountForAppShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<GetAccountForAppRequestDeviceInfo>(tmpReq->deviceInfo)) {
    request->deviceInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->deviceInfo, make_shared<string>("DeviceInfo"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<GetAccountForAppRequestPayload>(tmpReq->payload)) {
    request->payloadShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->payload, make_shared<string>("Payload"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<GetAccountForAppRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->userInfo, make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceInfoShrink)) {
    query->insert(pair<string, string>("DeviceInfo", *request->deviceInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->payloadShrink)) {
    query->insert(pair<string, string>("Payload", *request->payloadShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userInfoShrink)) {
    query->insert(pair<string, string>("UserInfo", *request->userInfoShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAligenieAccessToken)) {
    realHeaders->insert(pair<string, string>("x-acs-aligenie-access-token", Darabonba_Util::Client::toJSONString(headers->xAcsAligenieAccessToken)));
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->authorization)) {
    realHeaders->insert(pair<string, string>("Authorization", Darabonba_Util::Client::toJSONString(headers->authorization)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAccountForApp"))},
    {"version", boost::any(string("iap_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/iap/vip/account/get"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAccountForAppResponse(callApi(params, req, runtime));
}

GetAccountForAppResponse Alibabacloud_AliGenieiap10::Client::getAccountForApp(shared_ptr<GetAccountForAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetAccountForAppHeaders> headers = make_shared<GetAccountForAppHeaders>();
  return getAccountForAppWithOptions(request, headers, runtime);
}

GetBusAppConfigResponse Alibabacloud_AliGenieiap10::Client::getBusAppConfigWithOptions(shared_ptr<GetBusAppConfigRequest> tmpReq, shared_ptr<GetBusAppConfigHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetBusAppConfigShrinkRequest> request = make_shared<GetBusAppConfigShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<GetBusAppConfigRequestDeviceInfo>(tmpReq->deviceInfo)) {
    request->deviceInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->deviceInfo, make_shared<string>("DeviceInfo"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<GetBusAppConfigRequestPayload>(tmpReq->payload)) {
    request->payloadShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->payload, make_shared<string>("Payload"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<GetBusAppConfigRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->userInfo, make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceInfoShrink)) {
    query->insert(pair<string, string>("DeviceInfo", *request->deviceInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->payloadShrink)) {
    query->insert(pair<string, string>("Payload", *request->payloadShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userInfoShrink)) {
    query->insert(pair<string, string>("UserInfo", *request->userInfoShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAligenieAccessToken)) {
    realHeaders->insert(pair<string, string>("x-acs-aligenie-access-token", Darabonba_Util::Client::toJSONString(headers->xAcsAligenieAccessToken)));
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->authorization)) {
    realHeaders->insert(pair<string, string>("Authorization", Darabonba_Util::Client::toJSONString(headers->authorization)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetBusAppConfig"))},
    {"version", boost::any(string("iap_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/iap/app/config/get"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetBusAppConfigResponse(callApi(params, req, runtime));
}

GetBusAppConfigResponse Alibabacloud_AliGenieiap10::Client::getBusAppConfig(shared_ptr<GetBusAppConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetBusAppConfigHeaders> headers = make_shared<GetBusAppConfigHeaders>();
  return getBusAppConfigWithOptions(request, headers, runtime);
}

GetPhoneNumberResponse Alibabacloud_AliGenieiap10::Client::getPhoneNumberWithOptions(shared_ptr<GetPhoneNumberRequest> tmpReq, shared_ptr<GetPhoneNumberHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetPhoneNumberShrinkRequest> request = make_shared<GetPhoneNumberShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<GetPhoneNumberRequestDeviceInfo>(tmpReq->deviceInfo)) {
    request->deviceInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->deviceInfo, make_shared<string>("DeviceInfo"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<GetPhoneNumberRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->userInfo, make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceInfoShrink)) {
    query->insert(pair<string, string>("DeviceInfo", *request->deviceInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userInfoShrink)) {
    query->insert(pair<string, string>("UserInfo", *request->userInfoShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAligenieAccessToken)) {
    realHeaders->insert(pair<string, string>("x-acs-aligenie-access-token", Darabonba_Util::Client::toJSONString(headers->xAcsAligenieAccessToken)));
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->authorization)) {
    realHeaders->insert(pair<string, string>("Authorization", Darabonba_Util::Client::toJSONString(headers->authorization)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPhoneNumber"))},
    {"version", boost::any(string("iap_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/iap/profile/phoneNumber"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPhoneNumberResponse(callApi(params, req, runtime));
}

GetPhoneNumberResponse Alibabacloud_AliGenieiap10::Client::getPhoneNumber(shared_ptr<GetPhoneNumberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetPhoneNumberHeaders> headers = make_shared<GetPhoneNumberHeaders>();
  return getPhoneNumberWithOptions(request, headers, runtime);
}

GetReminderResponse Alibabacloud_AliGenieiap10::Client::getReminderWithOptions(shared_ptr<GetReminderRequest> tmpReq, shared_ptr<GetReminderHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetReminderShrinkRequest> request = make_shared<GetReminderShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<GetReminderRequestDeviceInfo>(tmpReq->deviceInfo)) {
    request->deviceInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->deviceInfo, make_shared<string>("DeviceInfo"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<GetReminderRequestPayload>(tmpReq->payload)) {
    request->payloadShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->payload, make_shared<string>("Payload"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<GetReminderRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->userInfo, make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceInfoShrink)) {
    query->insert(pair<string, string>("DeviceInfo", *request->deviceInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->payloadShrink)) {
    query->insert(pair<string, string>("Payload", *request->payloadShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userInfoShrink)) {
    query->insert(pair<string, string>("UserInfo", *request->userInfoShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAligenieAccessToken)) {
    realHeaders->insert(pair<string, string>("x-acs-aligenie-access-token", Darabonba_Util::Client::toJSONString(headers->xAcsAligenieAccessToken)));
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->authorization)) {
    realHeaders->insert(pair<string, string>("Authorization", Darabonba_Util::Client::toJSONString(headers->authorization)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetReminder"))},
    {"version", boost::any(string("iap_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/iap/reminder/get"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetReminderResponse(callApi(params, req, runtime));
}

GetReminderResponse Alibabacloud_AliGenieiap10::Client::getReminder(shared_ptr<GetReminderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetReminderHeaders> headers = make_shared<GetReminderHeaders>();
  return getReminderWithOptions(request, headers, runtime);
}

ListRemindersResponse Alibabacloud_AliGenieiap10::Client::listRemindersWithOptions(shared_ptr<ListRemindersRequest> tmpReq, shared_ptr<ListRemindersHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListRemindersShrinkRequest> request = make_shared<ListRemindersShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListRemindersRequestDeviceInfo>(tmpReq->deviceInfo)) {
    request->deviceInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->deviceInfo, make_shared<string>("DeviceInfo"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<ListRemindersRequestPayload>(tmpReq->payload)) {
    request->payloadShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->payload, make_shared<string>("Payload"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<ListRemindersRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->userInfo, make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceInfoShrink)) {
    query->insert(pair<string, string>("DeviceInfo", *request->deviceInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->payloadShrink)) {
    query->insert(pair<string, string>("Payload", *request->payloadShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userInfoShrink)) {
    query->insert(pair<string, string>("UserInfo", *request->userInfoShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAligenieAccessToken)) {
    realHeaders->insert(pair<string, string>("x-acs-aligenie-access-token", Darabonba_Util::Client::toJSONString(headers->xAcsAligenieAccessToken)));
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->authorization)) {
    realHeaders->insert(pair<string, string>("Authorization", Darabonba_Util::Client::toJSONString(headers->authorization)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListReminders"))},
    {"version", boost::any(string("iap_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/iap/reminder/list"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListRemindersResponse(callApi(params, req, runtime));
}

ListRemindersResponse Alibabacloud_AliGenieiap10::Client::listReminders(shared_ptr<ListRemindersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ListRemindersHeaders> headers = make_shared<ListRemindersHeaders>();
  return listRemindersWithOptions(request, headers, runtime);
}

PullCashierResponse Alibabacloud_AliGenieiap10::Client::pullCashierWithOptions(shared_ptr<PullCashierRequest> tmpReq, shared_ptr<PullCashierHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<PullCashierShrinkRequest> request = make_shared<PullCashierShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<PullCashierRequestDeviceInfo>(tmpReq->deviceInfo)) {
    request->deviceInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->deviceInfo, make_shared<string>("DeviceInfo"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<PullCashierRequestPayload>(tmpReq->payload)) {
    request->payloadShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->payload, make_shared<string>("Payload"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<PullCashierRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->userInfo, make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceInfoShrink)) {
    query->insert(pair<string, string>("DeviceInfo", *request->deviceInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->payloadShrink)) {
    query->insert(pair<string, string>("Payload", *request->payloadShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userInfoShrink)) {
    query->insert(pair<string, string>("UserInfo", *request->userInfoShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAligenieAccessToken)) {
    realHeaders->insert(pair<string, string>("x-acs-aligenie-access-token", Darabonba_Util::Client::toJSONString(headers->xAcsAligenieAccessToken)));
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->authorization)) {
    realHeaders->insert(pair<string, string>("Authorization", Darabonba_Util::Client::toJSONString(headers->authorization)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PullCashier"))},
    {"version", boost::any(string("iap_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/iap/pull/cashier/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PullCashierResponse(callApi(params, req, runtime));
}

PullCashierResponse Alibabacloud_AliGenieiap10::Client::pullCashier(shared_ptr<PullCashierRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<PullCashierHeaders> headers = make_shared<PullCashierHeaders>();
  return pullCashierWithOptions(request, headers, runtime);
}

PushNotificationsResponse Alibabacloud_AliGenieiap10::Client::pushNotificationsWithOptions(shared_ptr<PushNotificationsRequest> tmpReq, shared_ptr<PushNotificationsHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<PushNotificationsShrinkRequest> request = make_shared<PushNotificationsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<PushNotificationsRequestNotificationUnicastRequest>(tmpReq->notificationUnicastRequest)) {
    request->notificationUnicastRequestShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->notificationUnicastRequest, make_shared<string>("NotificationUnicastRequest"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<PushNotificationsRequestTenantInfo>(tmpReq->tenantInfo)) {
    request->tenantInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantInfo, make_shared<string>("TenantInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->notificationUnicastRequestShrink)) {
    body->insert(pair<string, string>("NotificationUnicastRequest", *request->notificationUnicastRequestShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantInfoShrink)) {
    body->insert(pair<string, string>("TenantInfo", *request->tenantInfoShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAligenieAccessToken)) {
    realHeaders->insert(pair<string, string>("x-acs-aligenie-access-token", Darabonba_Util::Client::toJSONString(headers->xAcsAligenieAccessToken)));
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->authorization)) {
    realHeaders->insert(pair<string, string>("Authorization", Darabonba_Util::Client::toJSONString(headers->authorization)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PushNotifications"))},
    {"version", boost::any(string("iap_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/iap/notifications"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return PushNotificationsResponse(callApi(params, req, runtime));
}

PushNotificationsResponse Alibabacloud_AliGenieiap10::Client::pushNotifications(shared_ptr<PushNotificationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<PushNotificationsHeaders> headers = make_shared<PushNotificationsHeaders>();
  return pushNotificationsWithOptions(request, headers, runtime);
}

SendNotificationsResponse Alibabacloud_AliGenieiap10::Client::sendNotificationsWithOptions(shared_ptr<SendNotificationsRequest> tmpReq, shared_ptr<SendNotificationsHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SendNotificationsShrinkRequest> request = make_shared<SendNotificationsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<SendNotificationsRequestDeviceInfo>(tmpReq->deviceInfo)) {
    request->deviceInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->deviceInfo, make_shared<string>("DeviceInfo"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SendNotificationsRequestNotificationUnicastRequest>(tmpReq->notificationUnicastRequest)) {
    request->notificationUnicastRequestShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->notificationUnicastRequest, make_shared<string>("NotificationUnicastRequest"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SendNotificationsRequestTenantInfo>(tmpReq->tenantInfo)) {
    request->tenantInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantInfo, make_shared<string>("TenantInfo"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SendNotificationsRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->userInfo, make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceInfoShrink)) {
    body->insert(pair<string, string>("DeviceInfo", *request->deviceInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notificationUnicastRequestShrink)) {
    body->insert(pair<string, string>("NotificationUnicastRequest", *request->notificationUnicastRequestShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantInfoShrink)) {
    body->insert(pair<string, string>("TenantInfo", *request->tenantInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userInfoShrink)) {
    body->insert(pair<string, string>("UserInfo", *request->userInfoShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAligenieAccessToken)) {
    realHeaders->insert(pair<string, string>("x-acs-aligenie-access-token", Darabonba_Util::Client::toJSONString(headers->xAcsAligenieAccessToken)));
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->authorization)) {
    realHeaders->insert(pair<string, string>("Authorization", Darabonba_Util::Client::toJSONString(headers->authorization)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SendNotifications"))},
    {"version", boost::any(string("iap_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/iap/general/notifications"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return SendNotificationsResponse(callApi(params, req, runtime));
}

SendNotificationsResponse Alibabacloud_AliGenieiap10::Client::sendNotifications(shared_ptr<SendNotificationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<SendNotificationsHeaders> headers = make_shared<SendNotificationsHeaders>();
  return sendNotificationsWithOptions(request, headers, runtime);
}

UpdateReminderResponse Alibabacloud_AliGenieiap10::Client::updateReminderWithOptions(shared_ptr<UpdateReminderRequest> tmpReq, shared_ptr<UpdateReminderHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateReminderShrinkRequest> request = make_shared<UpdateReminderShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdateReminderRequestDeviceInfo>(tmpReq->deviceInfo)) {
    request->deviceInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->deviceInfo, make_shared<string>("DeviceInfo"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateReminderRequestPayload>(tmpReq->payload)) {
    request->payloadShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->payload, make_shared<string>("Payload"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateReminderRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->userInfo, make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceInfoShrink)) {
    body->insert(pair<string, string>("DeviceInfo", *request->deviceInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->payloadShrink)) {
    body->insert(pair<string, string>("Payload", *request->payloadShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userInfoShrink)) {
    body->insert(pair<string, string>("UserInfo", *request->userInfoShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAligenieAccessToken)) {
    realHeaders->insert(pair<string, string>("x-acs-aligenie-access-token", Darabonba_Util::Client::toJSONString(headers->xAcsAligenieAccessToken)));
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->authorization)) {
    realHeaders->insert(pair<string, string>("Authorization", Darabonba_Util::Client::toJSONString(headers->authorization)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateReminder"))},
    {"version", boost::any(string("iap_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/iap/reminder/update"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateReminderResponse(callApi(params, req, runtime));
}

UpdateReminderResponse Alibabacloud_AliGenieiap10::Client::updateReminder(shared_ptr<UpdateReminderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<UpdateReminderHeaders> headers = make_shared<UpdateReminderHeaders>();
  return updateReminderWithOptions(request, headers, runtime);
}

VideoAppReportResponse Alibabacloud_AliGenieiap10::Client::videoAppReportWithOptions(shared_ptr<VideoAppReportRequest> tmpReq, shared_ptr<VideoAppReportHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<VideoAppReportShrinkRequest> request = make_shared<VideoAppReportShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<VideoAppReportRequestDeviceInfo>(tmpReq->deviceInfo)) {
    request->deviceInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->deviceInfo, make_shared<string>("DeviceInfo"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<VideoAppReportRequestPayload>(tmpReq->payload)) {
    request->payloadShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->payload, make_shared<string>("Payload"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<VideoAppReportRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->userInfo, make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceInfoShrink)) {
    body->insert(pair<string, string>("DeviceInfo", *request->deviceInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->payloadShrink)) {
    body->insert(pair<string, string>("Payload", *request->payloadShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userInfoShrink)) {
    body->insert(pair<string, string>("UserInfo", *request->userInfoShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAligenieAccessToken)) {
    realHeaders->insert(pair<string, string>("x-acs-aligenie-access-token", Darabonba_Util::Client::toJSONString(headers->xAcsAligenieAccessToken)));
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->authorization)) {
    realHeaders->insert(pair<string, string>("Authorization", Darabonba_Util::Client::toJSONString(headers->authorization)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("VideoAppReport"))},
    {"version", boost::any(string("iap_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/iap/vip/use/video/report"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return VideoAppReportResponse(callApi(params, req, runtime));
}

VideoAppReportResponse Alibabacloud_AliGenieiap10::Client::videoAppReport(shared_ptr<VideoAppReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<VideoAppReportHeaders> headers = make_shared<VideoAppReportHeaders>();
  return videoAppReportWithOptions(request, headers, runtime);
}

WakeUpAppResponse Alibabacloud_AliGenieiap10::Client::wakeUpAppWithOptions(shared_ptr<WakeUpAppRequest> request, shared_ptr<WakeUpAppHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->isDebug)) {
    body->insert(pair<string, bool>("IsDebug", *request->isDebug));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->path)) {
    body->insert(pair<string, string>("Path", *request->path));
  }
  if (!Darabonba_Util::Client::isUnset<WakeUpAppRequestTargetInfo>(request->targetInfo)) {
    body->insert(pair<string, WakeUpAppRequestTargetInfo>("TargetInfo", *request->targetInfo));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsAligenieAccessToken)) {
    realHeaders->insert(pair<string, string>("x-acs-aligenie-access-token", Darabonba_Util::Client::toJSONString(headers->xAcsAligenieAccessToken)));
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->authorization)) {
    realHeaders->insert(pair<string, string>("Authorization", Darabonba_Util::Client::toJSONString(headers->authorization)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("WakeUpApp"))},
    {"version", boost::any(string("iap_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/iap/wakeup"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return WakeUpAppResponse(callApi(params, req, runtime));
}

WakeUpAppResponse Alibabacloud_AliGenieiap10::Client::wakeUpApp(shared_ptr<WakeUpAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<WakeUpAppHeaders> headers = make_shared<WakeUpAppHeaders>();
  return wakeUpAppWithOptions(request, headers, runtime);
}

