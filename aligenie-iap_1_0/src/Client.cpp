#include <darabonba/Core.hpp>
#include <alibabacloud/AliGenieiap_1_0.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/gateway/POP.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
#include <darabonba/Convert.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::Gateway;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::AliGenieiap_1_0::Models;
namespace AlibabaCloud
{
namespace AliGenieiap_1_0
{

AlibabaCloud::AliGenieiap_1_0::Client::Client(Config &config): OpenApiClient(config){
  this->_productId = "AliGenie";
  shared_ptr<POP> gatewayClient = make_shared<POP>();
  this->_spi = gatewayClient;
  this->_endpointRule = "regional";
  checkConfig(config);
  this->_endpoint = getEndpoint("aligenie", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
}


string Client::getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint) {
  if (!Darabonba::isNull(endpoint)) {
    return endpoint;
  }

  if (!Darabonba::isNull(endpointMap) && !Darabonba::isNull(endpointMap.at(regionId))) {
    return endpointMap.at(regionId);
  }

  return Utils::Utils::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

/**
 * @summary Used to report application usage duration on Tmall Genie devices.
 *
 * @param tmpReq AppUseTimeReportRequest
 * @param headers AppUseTimeReportHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return AppUseTimeReportResponse
 */
AppUseTimeReportResponse Client::appUseTimeReportWithOptions(const AppUseTimeReportRequest &tmpReq, const AppUseTimeReportHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AppUseTimeReportShrinkRequest request = AppUseTimeReportShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDeviceInfo()) {
    request.setDeviceInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeviceInfo(), "DeviceInfo", "json"));
  }

  if (!!tmpReq.hasPayload()) {
    request.setPayloadShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPayload(), "Payload", "json"));
  }

  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserInfo(), "UserInfo", "json"));
  }

  json body = {};
  if (!!request.hasDeviceInfoShrink()) {
    body["DeviceInfo"] = request.getDeviceInfoShrink();
  }

  if (!!request.hasPayloadShrink()) {
    body["Payload"] = request.getPayloadShrink();
  }

  if (!!request.hasUserInfoShrink()) {
    body["UserInfo"] = request.getUserInfoShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AppUseTimeReport"},
    {"version" , "iap_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/iap/vip/use/time/report")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AppUseTimeReportResponse>();
}

/**
 * @summary Used to report application usage duration on Tmall Genie devices.
 *
 * @param request AppUseTimeReportRequest
 * @return AppUseTimeReportResponse
 */
AppUseTimeReportResponse Client::appUseTimeReport(const AppUseTimeReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  AppUseTimeReportHeaders headers = AppUseTimeReportHeaders();
  return appUseTimeReportWithOptions(request, headers, runtime);
}

/**
 * @summary Third-party membership redemption callback API.
 *
 * @param tmpReq CallBackThirdRightSendPlanRequest
 * @param headers CallBackThirdRightSendPlanHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CallBackThirdRightSendPlanResponse
 */
CallBackThirdRightSendPlanResponse Client::callBackThirdRightSendPlanWithOptions(const CallBackThirdRightSendPlanRequest &tmpReq, const CallBackThirdRightSendPlanHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CallBackThirdRightSendPlanShrinkRequest request = CallBackThirdRightSendPlanShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasExtendInfo()) {
    request.setExtendInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getExtendInfo(), "ExtendInfo", "json"));
  }

  json query = {};
  if (!!request.hasBizGroup()) {
    query["BizGroup"] = request.getBizGroup();
  }

  if (!!request.hasBizType()) {
    query["BizType"] = request.getBizType();
  }

  if (!!request.hasCardType()) {
    query["CardType"] = request.getCardType();
  }

  if (!!request.hasErrorMsg()) {
    query["ErrorMsg"] = request.getErrorMsg();
  }

  if (!!request.hasExtendInfoShrink()) {
    query["ExtendInfo"] = request.getExtendInfoShrink();
  }

  if (!!request.hasGenieOpenId()) {
    query["GenieOpenId"] = request.getGenieOpenId();
  }

  if (!!request.hasReceiveStatus()) {
    query["ReceiveStatus"] = request.getReceiveStatus();
  }

  if (!!request.hasSn()) {
    query["Sn"] = request.getSn();
  }

  if (!!request.hasSupplierId()) {
    query["SupplierId"] = request.getSupplierId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CallBackThirdRightSendPlan"},
    {"version" , "iap_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/iap/business/CallBackThirdRightSendPlan")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CallBackThirdRightSendPlanResponse>();
}

/**
 * @summary Third-party membership redemption callback API.
 *
 * @param request CallBackThirdRightSendPlanRequest
 * @return CallBackThirdRightSendPlanResponse
 */
CallBackThirdRightSendPlanResponse Client::callBackThirdRightSendPlan(const CallBackThirdRightSendPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CallBackThirdRightSendPlanHeaders headers = CallBackThirdRightSendPlanHeaders();
  return callBackThirdRightSendPlanWithOptions(request, headers, runtime);
}

/**
 * @summary Commercial mobile screen third-party app card issuance validation.
 *
 * @param tmpReq CheckThirdRightSendPlanRequest
 * @param headers CheckThirdRightSendPlanHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckThirdRightSendPlanResponse
 */
CheckThirdRightSendPlanResponse Client::checkThirdRightSendPlanWithOptions(const CheckThirdRightSendPlanRequest &tmpReq, const CheckThirdRightSendPlanHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CheckThirdRightSendPlanShrinkRequest request = CheckThirdRightSendPlanShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasExtendInfo()) {
    request.setExtendInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getExtendInfo(), "ExtendInfo", "json"));
  }

  json query = {};
  if (!!request.hasBizGroup()) {
    query["BizGroup"] = request.getBizGroup();
  }

  if (!!request.hasBizType()) {
    query["BizType"] = request.getBizType();
  }

  if (!!request.hasExtendInfoShrink()) {
    query["ExtendInfo"] = request.getExtendInfoShrink();
  }

  if (!!request.hasSn()) {
    query["Sn"] = request.getSn();
  }

  if (!!request.hasSupplierId()) {
    query["SupplierId"] = request.getSupplierId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckThirdRightSendPlan"},
    {"version" , "iap_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/iap/business/CheckThirdRightSendPlan")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckThirdRightSendPlanResponse>();
}

/**
 * @summary Commercial mobile screen third-party app card issuance validation.
 *
 * @param request CheckThirdRightSendPlanRequest
 * @return CheckThirdRightSendPlanResponse
 */
CheckThirdRightSendPlanResponse Client::checkThirdRightSendPlan(const CheckThirdRightSendPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CheckThirdRightSendPlanHeaders headers = CheckThirdRightSendPlanHeaders();
  return checkThirdRightSendPlanWithOptions(request, headers, runtime);
}

/**
 * @summary Used to create a reminder on a Tmall Genie device.
 *
 * @param tmpReq CreateReminderRequest
 * @param headers CreateReminderHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateReminderResponse
 */
CreateReminderResponse Client::createReminderWithOptions(const CreateReminderRequest &tmpReq, const CreateReminderHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateReminderShrinkRequest request = CreateReminderShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDeviceInfo()) {
    request.setDeviceInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeviceInfo(), "DeviceInfo", "json"));
  }

  if (!!tmpReq.hasPayload()) {
    request.setPayloadShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPayload(), "Payload", "json"));
  }

  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserInfo(), "UserInfo", "json"));
  }

  json body = {};
  if (!!request.hasDeviceInfoShrink()) {
    body["DeviceInfo"] = request.getDeviceInfoShrink();
  }

  if (!!request.hasPayloadShrink()) {
    body["Payload"] = request.getPayloadShrink();
  }

  if (!!request.hasUserInfoShrink()) {
    body["UserInfo"] = request.getUserInfoShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateReminder"},
    {"version" , "iap_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/iap/reminder/create")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateReminderResponse>();
}

/**
 * @summary Used to create a reminder on a Tmall Genie device.
 *
 * @param request CreateReminderRequest
 * @return CreateReminderResponse
 */
CreateReminderResponse Client::createReminder(const CreateReminderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CreateReminderHeaders headers = CreateReminderHeaders();
  return createReminderWithOptions(request, headers, runtime);
}

/**
 * @summary 携程订单状态变更推送
 *
 * @param request CtripOrderPushRequest
 * @param headers CtripOrderPushHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CtripOrderPushResponse
 */
CtripOrderPushResponse Client::ctripOrderPushWithOptions(const CtripOrderPushRequest &request, const CtripOrderPushHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJourneyId()) {
    query["JourneyId"] = request.getJourneyId();
  }

  if (!!request.hasScheduleItem()) {
    query["ScheduleItem"] = request.getScheduleItem();
  }

  if (!!request.hasUid()) {
    query["Uid"] = request.getUid();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CtripOrderPush"},
    {"version" , "iap_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/iap/ctripOrderPush")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CtripOrderPushResponse>();
}

/**
 * @summary 携程订单状态变更推送
 *
 * @param request CtripOrderPushRequest
 * @return CtripOrderPushResponse
 */
CtripOrderPushResponse Client::ctripOrderPush(const CtripOrderPushRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CtripOrderPushHeaders headers = CtripOrderPushHeaders();
  return ctripOrderPushWithOptions(request, headers, runtime);
}

/**
 * @summary User deletes a reminder created on a Tmall Genie device.
 *
 * @param tmpReq DeleteReminderRequest
 * @param headers DeleteReminderHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteReminderResponse
 */
DeleteReminderResponse Client::deleteReminderWithOptions(const DeleteReminderRequest &tmpReq, const DeleteReminderHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteReminderShrinkRequest request = DeleteReminderShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDeviceInfo()) {
    request.setDeviceInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeviceInfo(), "DeviceInfo", "json"));
  }

  if (!!tmpReq.hasPayload()) {
    request.setPayloadShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPayload(), "Payload", "json"));
  }

  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserInfo(), "UserInfo", "json"));
  }

  json query = {};
  if (!!request.hasDeviceInfoShrink()) {
    query["DeviceInfo"] = request.getDeviceInfoShrink();
  }

  if (!!request.hasPayloadShrink()) {
    query["Payload"] = request.getPayloadShrink();
  }

  if (!!request.hasUserInfoShrink()) {
    query["UserInfo"] = request.getUserInfoShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteReminder"},
    {"version" , "iap_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/iap/reminder/delete")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteReminderResponse>();
}

/**
 * @summary User deletes a reminder created on a Tmall Genie device.
 *
 * @param request DeleteReminderRequest
 * @return DeleteReminderResponse
 */
DeleteReminderResponse Client::deleteReminder(const DeleteReminderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  DeleteReminderHeaders headers = DeleteReminderHeaders();
  return deleteReminderWithOptions(request, headers, runtime);
}

/**
 * @summary Used by developers to obtain membership information in business scenarios that depend on CatGenie Membership.
 *
 * @param tmpReq GetAccountForAppRequest
 * @param headers GetAccountForAppHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAccountForAppResponse
 */
GetAccountForAppResponse Client::getAccountForAppWithOptions(const GetAccountForAppRequest &tmpReq, const GetAccountForAppHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetAccountForAppShrinkRequest request = GetAccountForAppShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDeviceInfo()) {
    request.setDeviceInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeviceInfo(), "DeviceInfo", "json"));
  }

  if (!!tmpReq.hasPayload()) {
    request.setPayloadShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPayload(), "Payload", "json"));
  }

  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserInfo(), "UserInfo", "json"));
  }

  json query = {};
  if (!!request.hasDeviceInfoShrink()) {
    query["DeviceInfo"] = request.getDeviceInfoShrink();
  }

  if (!!request.hasPayloadShrink()) {
    query["Payload"] = request.getPayloadShrink();
  }

  if (!!request.hasUserInfoShrink()) {
    query["UserInfo"] = request.getUserInfoShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAccountForApp"},
    {"version" , "iap_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/iap/vip/account/get")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAccountForAppResponse>();
}

/**
 * @summary Used by developers to obtain membership information in business scenarios that depend on CatGenie Membership.
 *
 * @param request GetAccountForAppRequest
 * @return GetAccountForAppResponse
 */
GetAccountForAppResponse Client::getAccountForApp(const GetAccountForAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetAccountForAppHeaders headers = GetAccountForAppHeaders();
  return getAccountForAppWithOptions(request, headers, runtime);
}

/**
 * @summary Obtain application configuration.
 *
 * @param tmpReq GetBusAppConfigRequest
 * @param headers GetBusAppConfigHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetBusAppConfigResponse
 */
GetBusAppConfigResponse Client::getBusAppConfigWithOptions(const GetBusAppConfigRequest &tmpReq, const GetBusAppConfigHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetBusAppConfigShrinkRequest request = GetBusAppConfigShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDeviceInfo()) {
    request.setDeviceInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeviceInfo(), "DeviceInfo", "json"));
  }

  if (!!tmpReq.hasPayload()) {
    request.setPayloadShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPayload(), "Payload", "json"));
  }

  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserInfo(), "UserInfo", "json"));
  }

  json query = {};
  if (!!request.hasDeviceInfoShrink()) {
    query["DeviceInfo"] = request.getDeviceInfoShrink();
  }

  if (!!request.hasPayloadShrink()) {
    query["Payload"] = request.getPayloadShrink();
  }

  if (!!request.hasUserInfoShrink()) {
    query["UserInfo"] = request.getUserInfoShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetBusAppConfig"},
    {"version" , "iap_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/iap/app/config/get")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetBusAppConfigResponse>();
}

/**
 * @summary Obtain application configuration.
 *
 * @param request GetBusAppConfigRequest
 * @return GetBusAppConfigResponse
 */
GetBusAppConfigResponse Client::getBusAppConfig(const GetBusAppConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetBusAppConfigHeaders headers = GetBusAppConfigHeaders();
  return getBusAppConfigWithOptions(request, headers, runtime);
}

/**
 * @summary Obtain the phone number bound to the user\\"s Maojing device. You must first request this capability on the Maojing Skill Application Platform and obtain user authorization on the device side.
 *
 * @param tmpReq GetPhoneNumberRequest
 * @param headers GetPhoneNumberHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPhoneNumberResponse
 */
GetPhoneNumberResponse Client::getPhoneNumberWithOptions(const GetPhoneNumberRequest &tmpReq, const GetPhoneNumberHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetPhoneNumberShrinkRequest request = GetPhoneNumberShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDeviceInfo()) {
    request.setDeviceInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeviceInfo(), "DeviceInfo", "json"));
  }

  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserInfo(), "UserInfo", "json"));
  }

  json query = {};
  if (!!request.hasDeviceInfoShrink()) {
    query["DeviceInfo"] = request.getDeviceInfoShrink();
  }

  if (!!request.hasUserInfoShrink()) {
    query["UserInfo"] = request.getUserInfoShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPhoneNumber"},
    {"version" , "iap_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/iap/profile/phoneNumber")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPhoneNumberResponse>();
}

/**
 * @summary Obtain the phone number bound to the user\\"s Maojing device. You must first request this capability on the Maojing Skill Application Platform and obtain user authorization on the device side.
 *
 * @param request GetPhoneNumberRequest
 * @return GetPhoneNumberResponse
 */
GetPhoneNumberResponse Client::getPhoneNumber(const GetPhoneNumberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetPhoneNumberHeaders headers = GetPhoneNumberHeaders();
  return getPhoneNumberWithOptions(request, headers, runtime);
}

/**
 * @summary User retrieves reminders created on Tmall Genie devices.
 *
 * @param tmpReq GetReminderRequest
 * @param headers GetReminderHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetReminderResponse
 */
GetReminderResponse Client::getReminderWithOptions(const GetReminderRequest &tmpReq, const GetReminderHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetReminderShrinkRequest request = GetReminderShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDeviceInfo()) {
    request.setDeviceInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeviceInfo(), "DeviceInfo", "json"));
  }

  if (!!tmpReq.hasPayload()) {
    request.setPayloadShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPayload(), "Payload", "json"));
  }

  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserInfo(), "UserInfo", "json"));
  }

  json query = {};
  if (!!request.hasDeviceInfoShrink()) {
    query["DeviceInfo"] = request.getDeviceInfoShrink();
  }

  if (!!request.hasPayloadShrink()) {
    query["Payload"] = request.getPayloadShrink();
  }

  if (!!request.hasUserInfoShrink()) {
    query["UserInfo"] = request.getUserInfoShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetReminder"},
    {"version" , "iap_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/iap/reminder/get")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetReminderResponse>();
}

/**
 * @summary User retrieves reminders created on Tmall Genie devices.
 *
 * @param request GetReminderRequest
 * @return GetReminderResponse
 */
GetReminderResponse Client::getReminder(const GetReminderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetReminderHeaders headers = GetReminderHeaders();
  return getReminderWithOptions(request, headers, runtime);
}

/**
 * @summary The User batch retrieves reminders created on Tmall Genie devices.
 *
 * @param tmpReq ListRemindersRequest
 * @param headers ListRemindersHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRemindersResponse
 */
ListRemindersResponse Client::listRemindersWithOptions(const ListRemindersRequest &tmpReq, const ListRemindersHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListRemindersShrinkRequest request = ListRemindersShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDeviceInfo()) {
    request.setDeviceInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeviceInfo(), "DeviceInfo", "json"));
  }

  if (!!tmpReq.hasPayload()) {
    request.setPayloadShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPayload(), "Payload", "json"));
  }

  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserInfo(), "UserInfo", "json"));
  }

  json query = {};
  if (!!request.hasDeviceInfoShrink()) {
    query["DeviceInfo"] = request.getDeviceInfoShrink();
  }

  if (!!request.hasPayloadShrink()) {
    query["Payload"] = request.getPayloadShrink();
  }

  if (!!request.hasUserInfoShrink()) {
    query["UserInfo"] = request.getUserInfoShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListReminders"},
    {"version" , "iap_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/iap/reminder/list")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRemindersResponse>();
}

/**
 * @summary The User batch retrieves reminders created on Tmall Genie devices.
 *
 * @param request ListRemindersRequest
 * @return ListRemindersResponse
 */
ListRemindersResponse Client::listReminders(const ListRemindersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListRemindersHeaders headers = ListRemindersHeaders();
  return listRemindersWithOptions(request, headers, runtime);
}

/**
 * @summary The user launches the checkout page on a Tmall Genie device.
 *
 * @param tmpReq PullCashierRequest
 * @param headers PullCashierHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return PullCashierResponse
 */
PullCashierResponse Client::pullCashierWithOptions(const PullCashierRequest &tmpReq, const PullCashierHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  PullCashierShrinkRequest request = PullCashierShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDeviceInfo()) {
    request.setDeviceInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeviceInfo(), "DeviceInfo", "json"));
  }

  if (!!tmpReq.hasPayload()) {
    request.setPayloadShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPayload(), "Payload", "json"));
  }

  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserInfo(), "UserInfo", "json"));
  }

  json query = {};
  if (!!request.hasDeviceInfoShrink()) {
    query["DeviceInfo"] = request.getDeviceInfoShrink();
  }

  if (!!request.hasPayloadShrink()) {
    query["Payload"] = request.getPayloadShrink();
  }

  if (!!request.hasUserInfoShrink()) {
    query["UserInfo"] = request.getUserInfoShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PullCashier"},
    {"version" , "iap_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/iap/pull/cashier/")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PullCashierResponse>();
}

/**
 * @summary The user launches the checkout page on a Tmall Genie device.
 *
 * @param request PullCashierRequest
 * @return PullCashierResponse
 */
PullCashierResponse Client::pullCashier(const PullCashierRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  PullCashierHeaders headers = PullCashierHeaders();
  return pullCashierWithOptions(request, headers, runtime);
}

/**
 * @summary Execute the message push feature of Tmall Genie. You must first request the capability and configure the message template on the Tmall Genie Skill Application Platform.
 *
 * @param tmpReq PushNotificationsRequest
 * @param headers PushNotificationsHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return PushNotificationsResponse
 */
PushNotificationsResponse Client::pushNotificationsWithOptions(const PushNotificationsRequest &tmpReq, const PushNotificationsHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  PushNotificationsShrinkRequest request = PushNotificationsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasNotificationUnicastRequest()) {
    request.setNotificationUnicastRequestShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNotificationUnicastRequest(), "NotificationUnicastRequest", "json"));
  }

  if (!!tmpReq.hasTenantInfo()) {
    request.setTenantInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTenantInfo(), "TenantInfo", "json"));
  }

  json body = {};
  if (!!request.hasNotificationUnicastRequestShrink()) {
    body["NotificationUnicastRequest"] = request.getNotificationUnicastRequestShrink();
  }

  if (!!request.hasTenantInfoShrink()) {
    body["TenantInfo"] = request.getTenantInfoShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "PushNotifications"},
    {"version" , "iap_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/iap/notifications")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PushNotificationsResponse>();
}

/**
 * @summary Execute the message push feature of Tmall Genie. You must first request the capability and configure the message template on the Tmall Genie Skill Application Platform.
 *
 * @param request PushNotificationsRequest
 * @return PushNotificationsResponse
 */
PushNotificationsResponse Client::pushNotifications(const PushNotificationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  PushNotificationsHeaders headers = PushNotificationsHeaders();
  return pushNotificationsWithOptions(request, headers, runtime);
}

/**
 * @summary Execute the message push feature of Tmall Genie. You must first request the capability and configure the message template in the Tmall Genie Skill Application Platform.
 *
 * @param tmpReq SendNotificationsRequest
 * @param headers SendNotificationsHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendNotificationsResponse
 */
SendNotificationsResponse Client::sendNotificationsWithOptions(const SendNotificationsRequest &tmpReq, const SendNotificationsHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SendNotificationsShrinkRequest request = SendNotificationsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDeviceInfo()) {
    request.setDeviceInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeviceInfo(), "DeviceInfo", "json"));
  }

  if (!!tmpReq.hasNotificationUnicastRequest()) {
    request.setNotificationUnicastRequestShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNotificationUnicastRequest(), "NotificationUnicastRequest", "json"));
  }

  if (!!tmpReq.hasTenantInfo()) {
    request.setTenantInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTenantInfo(), "TenantInfo", "json"));
  }

  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserInfo(), "UserInfo", "json"));
  }

  json body = {};
  if (!!request.hasDeviceInfoShrink()) {
    body["DeviceInfo"] = request.getDeviceInfoShrink();
  }

  if (!!request.hasNotificationUnicastRequestShrink()) {
    body["NotificationUnicastRequest"] = request.getNotificationUnicastRequestShrink();
  }

  if (!!request.hasTenantInfoShrink()) {
    body["TenantInfo"] = request.getTenantInfoShrink();
  }

  if (!!request.hasUserInfoShrink()) {
    body["UserInfo"] = request.getUserInfoShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SendNotifications"},
    {"version" , "iap_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/iap/general/notifications")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SendNotificationsResponse>();
}

/**
 * @summary Execute the message push feature of Tmall Genie. You must first request the capability and configure the message template in the Tmall Genie Skill Application Platform.
 *
 * @param request SendNotificationsRequest
 * @return SendNotificationsResponse
 */
SendNotificationsResponse Client::sendNotifications(const SendNotificationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  SendNotificationsHeaders headers = SendNotificationsHeaders();
  return sendNotificationsWithOptions(request, headers, runtime);
}

/**
 * @summary 三方即时信息数据变更事件推送
 *
 * @param request ThirdImmediateMsgPushRequest
 * @param headers ThirdImmediateMsgPushHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ThirdImmediateMsgPushResponse
 */
ThirdImmediateMsgPushResponse Client::thirdImmediateMsgPushWithOptions(const ThirdImmediateMsgPushRequest &request, const ThirdImmediateMsgPushHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizType()) {
    query["BizType"] = request.getBizType();
  }

  if (!!request.hasChangeDetail()) {
    query["ChangeDetail"] = request.getChangeDetail();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasPsgIds()) {
    query["PsgIds"] = request.getPsgIds();
  }

  if (!!request.hasTrafficChangeType()) {
    query["TrafficChangeType"] = request.getTrafficChangeType();
  }

  if (!!request.hasTrafficChangeTypeDesc()) {
    query["TrafficChangeTypeDesc"] = request.getTrafficChangeTypeDesc();
  }

  if (!!request.hasTrafficJourneyIds()) {
    query["TrafficJourneyIds"] = request.getTrafficJourneyIds();
  }

  if (!!request.hasTrafficSubOrderIds()) {
    query["TrafficSubOrderIds"] = request.getTrafficSubOrderIds();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ThirdImmediateMsgPush"},
    {"version" , "iap_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/iap/thirdImmediateMsgPush")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ThirdImmediateMsgPushResponse>();
}

/**
 * @summary 三方即时信息数据变更事件推送
 *
 * @param request ThirdImmediateMsgPushRequest
 * @return ThirdImmediateMsgPushResponse
 */
ThirdImmediateMsgPushResponse Client::thirdImmediateMsgPush(const ThirdImmediateMsgPushRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ThirdImmediateMsgPushHeaders headers = ThirdImmediateMsgPushHeaders();
  return thirdImmediateMsgPushWithOptions(request, headers, runtime);
}

/**
 * @summary The user updates a reminder created on a Tmall Genie device.
 *
 * @param tmpReq UpdateReminderRequest
 * @param headers UpdateReminderHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateReminderResponse
 */
UpdateReminderResponse Client::updateReminderWithOptions(const UpdateReminderRequest &tmpReq, const UpdateReminderHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateReminderShrinkRequest request = UpdateReminderShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDeviceInfo()) {
    request.setDeviceInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeviceInfo(), "DeviceInfo", "json"));
  }

  if (!!tmpReq.hasPayload()) {
    request.setPayloadShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPayload(), "Payload", "json"));
  }

  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserInfo(), "UserInfo", "json"));
  }

  json body = {};
  if (!!request.hasDeviceInfoShrink()) {
    body["DeviceInfo"] = request.getDeviceInfoShrink();
  }

  if (!!request.hasPayloadShrink()) {
    body["Payload"] = request.getPayloadShrink();
  }

  if (!!request.hasUserInfoShrink()) {
    body["UserInfo"] = request.getUserInfoShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateReminder"},
    {"version" , "iap_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/iap/reminder/update")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateReminderResponse>();
}

/**
 * @summary The user updates a reminder created on a Tmall Genie device.
 *
 * @param request UpdateReminderRequest
 * @return UpdateReminderResponse
 */
UpdateReminderResponse Client::updateReminder(const UpdateReminderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  UpdateReminderHeaders headers = UpdateReminderHeaders();
  return updateReminderWithOptions(request, headers, runtime);
}

/**
 * @summary Used by developers to report membership information in scenarios involving membership collaboration with CatGenie.
 *
 * @param tmpReq VideoAppReportRequest
 * @param headers VideoAppReportHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return VideoAppReportResponse
 */
VideoAppReportResponse Client::videoAppReportWithOptions(const VideoAppReportRequest &tmpReq, const VideoAppReportHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  VideoAppReportShrinkRequest request = VideoAppReportShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDeviceInfo()) {
    request.setDeviceInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeviceInfo(), "DeviceInfo", "json"));
  }

  if (!!tmpReq.hasPayload()) {
    request.setPayloadShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPayload(), "Payload", "json"));
  }

  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserInfo(), "UserInfo", "json"));
  }

  json body = {};
  if (!!request.hasDeviceInfoShrink()) {
    body["DeviceInfo"] = request.getDeviceInfoShrink();
  }

  if (!!request.hasPayloadShrink()) {
    body["Payload"] = request.getPayloadShrink();
  }

  if (!!request.hasUserInfoShrink()) {
    body["UserInfo"] = request.getUserInfoShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "VideoAppReport"},
    {"version" , "iap_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/iap/vip/use/video/report")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<VideoAppReportResponse>();
}

/**
 * @summary Used by developers to report membership information in scenarios involving membership collaboration with CatGenie.
 *
 * @param request VideoAppReportRequest
 * @return VideoAppReportResponse
 */
VideoAppReportResponse Client::videoAppReport(const VideoAppReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  VideoAppReportHeaders headers = VideoAppReportHeaders();
  return videoAppReportWithOptions(request, headers, runtime);
}

/**
 * @summary On a smart speaker with a screen, proactively launch the MeowGenie screen-display application. You must first request this capability on the MeowGenie skill application platform.
 *
 * @param request WakeUpAppRequest
 * @param headers WakeUpAppHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return WakeUpAppResponse
 */
WakeUpAppResponse Client::wakeUpAppWithOptions(const WakeUpAppRequest &request, const WakeUpAppHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasIsDebug()) {
    body["IsDebug"] = request.getIsDebug();
  }

  if (!!request.hasPath()) {
    body["Path"] = request.getPath();
  }

  if (!!request.hasTargetInfo()) {
    body["TargetInfo"] = request.getTargetInfo();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "WakeUpApp"},
    {"version" , "iap_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/iap/wakeup")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<WakeUpAppResponse>();
}

/**
 * @summary On a smart speaker with a screen, proactively launch the MeowGenie screen-display application. You must first request this capability on the MeowGenie skill application platform.
 *
 * @param request WakeUpAppRequest
 * @return WakeUpAppResponse
 */
WakeUpAppResponse Client::wakeUpApp(const WakeUpAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  WakeUpAppHeaders headers = WakeUpAppHeaders();
  return wakeUpAppWithOptions(request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace AliGenieiap_1_0