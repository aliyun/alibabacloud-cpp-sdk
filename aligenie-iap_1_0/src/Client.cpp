#include <darabonba/Core.hpp>
#include <alibabacloud/AliGenieiap_1_0.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
#include <darabonba/Convert.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::AliGenieiap_1_0::Models;
namespace AlibabaCloud
{
namespace AliGenieiap_1_0
{

AlibabaCloud::AliGenieiap_1_0::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
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
 * @summary 应用使用时长上报
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
    request.setDeviceInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.deviceInfo(), "DeviceInfo", "json"));
  }

  if (!!tmpReq.hasPayload()) {
    request.setPayloadShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.payload(), "Payload", "json"));
  }

  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.userInfo(), "UserInfo", "json"));
  }

  json body = {};
  if (!!request.hasDeviceInfoShrink()) {
    body["DeviceInfo"] = request.deviceInfoShrink();
  }

  if (!!request.hasPayloadShrink()) {
    body["Payload"] = request.payloadShrink();
  }

  if (!!request.hasUserInfoShrink()) {
    body["UserInfo"] = request.userInfoShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.xAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.authorization());
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
 * @summary 应用使用时长上报
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
 * @summary 三方领取回调接口
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
    request.setExtendInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.extendInfo(), "ExtendInfo", "json"));
  }

  json query = {};
  if (!!request.hasBizGroup()) {
    query["BizGroup"] = request.bizGroup();
  }

  if (!!request.hasBizType()) {
    query["BizType"] = request.bizType();
  }

  if (!!request.hasCardType()) {
    query["CardType"] = request.cardType();
  }

  if (!!request.hasErrorMsg()) {
    query["ErrorMsg"] = request.errorMsg();
  }

  if (!!request.hasExtendInfoShrink()) {
    query["ExtendInfo"] = request.extendInfoShrink();
  }

  if (!!request.hasGenieOpenId()) {
    query["GenieOpenId"] = request.genieOpenId();
  }

  if (!!request.hasReceiveStatus()) {
    query["ReceiveStatus"] = request.receiveStatus();
  }

  if (!!request.hasSn()) {
    query["Sn"] = request.sn();
  }

  if (!!request.hasSupplierId()) {
    query["SupplierId"] = request.supplierId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.xAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.authorization());
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
 * @summary 三方领取回调接口
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
 * @summary 商业化移动屏三方app领卡校验
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
    request.setExtendInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.extendInfo(), "ExtendInfo", "json"));
  }

  json query = {};
  if (!!request.hasBizGroup()) {
    query["BizGroup"] = request.bizGroup();
  }

  if (!!request.hasBizType()) {
    query["BizType"] = request.bizType();
  }

  if (!!request.hasExtendInfoShrink()) {
    query["ExtendInfo"] = request.extendInfoShrink();
  }

  if (!!request.hasSn()) {
    query["Sn"] = request.sn();
  }

  if (!!request.hasSupplierId()) {
    query["SupplierId"] = request.supplierId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.xAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.authorization());
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
 * @summary 商业化移动屏三方app领卡校验
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
 * @summary 创建提醒
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
    request.setDeviceInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.deviceInfo(), "DeviceInfo", "json"));
  }

  if (!!tmpReq.hasPayload()) {
    request.setPayloadShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.payload(), "Payload", "json"));
  }

  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.userInfo(), "UserInfo", "json"));
  }

  json body = {};
  if (!!request.hasDeviceInfoShrink()) {
    body["DeviceInfo"] = request.deviceInfoShrink();
  }

  if (!!request.hasPayloadShrink()) {
    body["Payload"] = request.payloadShrink();
  }

  if (!!request.hasUserInfoShrink()) {
    body["UserInfo"] = request.userInfoShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.xAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.authorization());
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
 * @summary 创建提醒
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
 * @summary 删除提醒
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
    request.setDeviceInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.deviceInfo(), "DeviceInfo", "json"));
  }

  if (!!tmpReq.hasPayload()) {
    request.setPayloadShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.payload(), "Payload", "json"));
  }

  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.userInfo(), "UserInfo", "json"));
  }

  json query = {};
  if (!!request.hasDeviceInfoShrink()) {
    query["DeviceInfo"] = request.deviceInfoShrink();
  }

  if (!!request.hasPayloadShrink()) {
    query["Payload"] = request.payloadShrink();
  }

  if (!!request.hasUserInfoShrink()) {
    query["UserInfo"] = request.userInfoShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.xAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.authorization());
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
 * @summary 删除提醒
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
 * @summary 获取会员信息
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
    request.setDeviceInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.deviceInfo(), "DeviceInfo", "json"));
  }

  if (!!tmpReq.hasPayload()) {
    request.setPayloadShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.payload(), "Payload", "json"));
  }

  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.userInfo(), "UserInfo", "json"));
  }

  json query = {};
  if (!!request.hasDeviceInfoShrink()) {
    query["DeviceInfo"] = request.deviceInfoShrink();
  }

  if (!!request.hasPayloadShrink()) {
    query["Payload"] = request.payloadShrink();
  }

  if (!!request.hasUserInfoShrink()) {
    query["UserInfo"] = request.userInfoShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.xAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.authorization());
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
 * @summary 获取会员信息
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
 * @summary 获取应用配置
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
    request.setDeviceInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.deviceInfo(), "DeviceInfo", "json"));
  }

  if (!!tmpReq.hasPayload()) {
    request.setPayloadShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.payload(), "Payload", "json"));
  }

  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.userInfo(), "UserInfo", "json"));
  }

  json query = {};
  if (!!request.hasDeviceInfoShrink()) {
    query["DeviceInfo"] = request.deviceInfoShrink();
  }

  if (!!request.hasPayloadShrink()) {
    query["Payload"] = request.payloadShrink();
  }

  if (!!request.hasUserInfoShrink()) {
    query["UserInfo"] = request.userInfoShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.xAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.authorization());
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
 * @summary 获取应用配置
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
 * @summary 用户手机号获取
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
    request.setDeviceInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.deviceInfo(), "DeviceInfo", "json"));
  }

  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.userInfo(), "UserInfo", "json"));
  }

  json query = {};
  if (!!request.hasDeviceInfoShrink()) {
    query["DeviceInfo"] = request.deviceInfoShrink();
  }

  if (!!request.hasUserInfoShrink()) {
    query["UserInfo"] = request.userInfoShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.xAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.authorization());
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
 * @summary 用户手机号获取
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
 * @summary 查询提醒
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
    request.setDeviceInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.deviceInfo(), "DeviceInfo", "json"));
  }

  if (!!tmpReq.hasPayload()) {
    request.setPayloadShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.payload(), "Payload", "json"));
  }

  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.userInfo(), "UserInfo", "json"));
  }

  json query = {};
  if (!!request.hasDeviceInfoShrink()) {
    query["DeviceInfo"] = request.deviceInfoShrink();
  }

  if (!!request.hasPayloadShrink()) {
    query["Payload"] = request.payloadShrink();
  }

  if (!!request.hasUserInfoShrink()) {
    query["UserInfo"] = request.userInfoShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.xAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.authorization());
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
 * @summary 查询提醒
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
 * @summary 查询提醒列表
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
    request.setDeviceInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.deviceInfo(), "DeviceInfo", "json"));
  }

  if (!!tmpReq.hasPayload()) {
    request.setPayloadShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.payload(), "Payload", "json"));
  }

  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.userInfo(), "UserInfo", "json"));
  }

  json query = {};
  if (!!request.hasDeviceInfoShrink()) {
    query["DeviceInfo"] = request.deviceInfoShrink();
  }

  if (!!request.hasPayloadShrink()) {
    query["Payload"] = request.payloadShrink();
  }

  if (!!request.hasUserInfoShrink()) {
    query["UserInfo"] = request.userInfoShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.xAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.authorization());
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
 * @summary 查询提醒列表
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
 * @summary 拉取收银台
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
    request.setDeviceInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.deviceInfo(), "DeviceInfo", "json"));
  }

  if (!!tmpReq.hasPayload()) {
    request.setPayloadShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.payload(), "Payload", "json"));
  }

  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.userInfo(), "UserInfo", "json"));
  }

  json query = {};
  if (!!request.hasDeviceInfoShrink()) {
    query["DeviceInfo"] = request.deviceInfoShrink();
  }

  if (!!request.hasPayloadShrink()) {
    query["Payload"] = request.payloadShrink();
  }

  if (!!request.hasUserInfoShrink()) {
    query["UserInfo"] = request.userInfoShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.xAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.authorization());
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
 * @summary 拉取收银台
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
 * @summary 猫精系统消息推送
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
    request.setNotificationUnicastRequestShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.notificationUnicastRequest(), "NotificationUnicastRequest", "json"));
  }

  if (!!tmpReq.hasTenantInfo()) {
    request.setTenantInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantInfo(), "TenantInfo", "json"));
  }

  json body = {};
  if (!!request.hasNotificationUnicastRequestShrink()) {
    body["NotificationUnicastRequest"] = request.notificationUnicastRequestShrink();
  }

  if (!!request.hasTenantInfoShrink()) {
    body["TenantInfo"] = request.tenantInfoShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.xAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.authorization());
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
 * @summary 猫精系统消息推送
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
 * @summary 消息推送服务（普通版）
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
    request.setDeviceInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.deviceInfo(), "DeviceInfo", "json"));
  }

  if (!!tmpReq.hasNotificationUnicastRequest()) {
    request.setNotificationUnicastRequestShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.notificationUnicastRequest(), "NotificationUnicastRequest", "json"));
  }

  if (!!tmpReq.hasTenantInfo()) {
    request.setTenantInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantInfo(), "TenantInfo", "json"));
  }

  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.userInfo(), "UserInfo", "json"));
  }

  json body = {};
  if (!!request.hasDeviceInfoShrink()) {
    body["DeviceInfo"] = request.deviceInfoShrink();
  }

  if (!!request.hasNotificationUnicastRequestShrink()) {
    body["NotificationUnicastRequest"] = request.notificationUnicastRequestShrink();
  }

  if (!!request.hasTenantInfoShrink()) {
    body["TenantInfo"] = request.tenantInfoShrink();
  }

  if (!!request.hasUserInfoShrink()) {
    body["UserInfo"] = request.userInfoShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.xAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.authorization());
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
 * @summary 消息推送服务（普通版）
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
    query["BizType"] = request.bizType();
  }

  if (!!request.hasChangeDetail()) {
    query["ChangeDetail"] = request.changeDetail();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.orderId();
  }

  if (!!request.hasPsgIds()) {
    query["PsgIds"] = request.psgIds();
  }

  if (!!request.hasTrafficChangeType()) {
    query["TrafficChangeType"] = request.trafficChangeType();
  }

  if (!!request.hasTrafficChangeTypeDesc()) {
    query["TrafficChangeTypeDesc"] = request.trafficChangeTypeDesc();
  }

  if (!!request.hasTrafficJourneyIds()) {
    query["TrafficJourneyIds"] = request.trafficJourneyIds();
  }

  if (!!request.hasTrafficSubOrderIds()) {
    query["TrafficSubOrderIds"] = request.trafficSubOrderIds();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.xAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.authorization());
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
 * @summary 更新提醒
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
    request.setDeviceInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.deviceInfo(), "DeviceInfo", "json"));
  }

  if (!!tmpReq.hasPayload()) {
    request.setPayloadShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.payload(), "Payload", "json"));
  }

  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.userInfo(), "UserInfo", "json"));
  }

  json body = {};
  if (!!request.hasDeviceInfoShrink()) {
    body["DeviceInfo"] = request.deviceInfoShrink();
  }

  if (!!request.hasPayloadShrink()) {
    body["Payload"] = request.payloadShrink();
  }

  if (!!request.hasUserInfoShrink()) {
    body["UserInfo"] = request.userInfoShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.xAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.authorization());
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
 * @summary 更新提醒
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
 * @summary 视频类应用会员信息上报
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
    request.setDeviceInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.deviceInfo(), "DeviceInfo", "json"));
  }

  if (!!tmpReq.hasPayload()) {
    request.setPayloadShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.payload(), "Payload", "json"));
  }

  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.userInfo(), "UserInfo", "json"));
  }

  json body = {};
  if (!!request.hasDeviceInfoShrink()) {
    body["DeviceInfo"] = request.deviceInfoShrink();
  }

  if (!!request.hasPayloadShrink()) {
    body["Payload"] = request.payloadShrink();
  }

  if (!!request.hasUserInfoShrink()) {
    body["UserInfo"] = request.userInfoShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.xAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.authorization());
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
 * @summary 视频类应用会员信息上报
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
 * @summary 猫精应用唤起
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
    body["IsDebug"] = request.isDebug();
  }

  if (!!request.hasPath()) {
    body["Path"] = request.path();
  }

  if (!!request.hasTargetInfo()) {
    body["TargetInfo"] = request.targetInfo();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.xAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.authorization());
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
 * @summary 猫精应用唤起
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