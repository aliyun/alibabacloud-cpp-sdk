#include <darabonba/Core.hpp>
#include <alibabacloud/UmengPush20220225.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::UmengPush20220225::Models;
namespace AlibabaCloud
{
namespace UmengPush20220225
{

AlibabaCloud::UmengPush20220225::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("umeng-push", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 根据消息ID取消发送
 *
 * @param request CancelByMsgIdRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelByMsgIdResponse
 */
CancelByMsgIdResponse Client::cancelByMsgIdWithOptions(const CancelByMsgIdRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasMsgId()) {
    body["MsgId"] = request.msgId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CancelByMsgId"},
    {"version" , "2022-02-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/CancelByMsgId")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelByMsgIdResponse>();
}

/**
 * @summary 根据消息ID取消发送
 *
 * @param request CancelByMsgIdRequest
 * @return CancelByMsgIdResponse
 */
CancelByMsgIdResponse Client::cancelByMsgId(const CancelByMsgIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return cancelByMsgIdWithOptions(request, headers, runtime);
}

/**
 * @summary 消息状态查询
 *
 * @param request QueryMsgStatRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryMsgStatResponse
 */
QueryMsgStatResponse Client::queryMsgStatWithOptions(const QueryMsgStatRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasMsgId()) {
    body["MsgId"] = request.msgId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "QueryMsgStat"},
    {"version" , "2022-02-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/QueryMsgStat")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryMsgStatResponse>();
}

/**
 * @summary 消息状态查询
 *
 * @param request QueryMsgStatRequest
 * @return QueryMsgStatResponse
 */
QueryMsgStatResponse Client::queryMsgStat(const QueryMsgStatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return queryMsgStatWithOptions(request, headers, runtime);
}

/**
 * @summary 指定别名发送
 *
 * @param tmpReq SendByAliasRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendByAliasResponse
 */
SendByAliasResponse Client::sendByAliasWithOptions(const SendByAliasRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SendByAliasShrinkRequest request = SendByAliasShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAndroidPayload()) {
    request.setAndroidPayloadShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.androidPayload(), "AndroidPayload", "json"));
  }

  if (!!tmpReq.hasAndroidShortPayload()) {
    request.setAndroidShortPayloadShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.androidShortPayload(), "AndroidShortPayload", "json"));
  }

  if (!!tmpReq.hasChannelProperties()) {
    request.setChannelPropertiesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.channelProperties(), "ChannelProperties", "json"));
  }

  if (!!tmpReq.hasHarmonyPayload()) {
    request.setHarmonyPayloadShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.harmonyPayload(), "HarmonyPayload", "json"));
  }

  if (!!tmpReq.hasIosPayload()) {
    request.setIosPayloadShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.iosPayload(), "IosPayload", "json"));
  }

  if (!!tmpReq.hasPolicy()) {
    request.setPolicyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.policy(), "Policy", "json"));
  }

  json body = {};
  if (!!request.hasAlias()) {
    body["Alias"] = request.alias();
  }

  if (!!request.hasAliasType()) {
    body["AliasType"] = request.aliasType();
  }

  if (!!request.hasAndroidPayloadShrink()) {
    body["AndroidPayload"] = request.androidPayloadShrink();
  }

  if (!!request.hasAndroidShortPayloadShrink()) {
    body["AndroidShortPayload"] = request.androidShortPayloadShrink();
  }

  if (!!request.hasChannelPropertiesShrink()) {
    body["ChannelProperties"] = request.channelPropertiesShrink();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasHarmonyPayloadShrink()) {
    body["HarmonyPayload"] = request.harmonyPayloadShrink();
  }

  if (!!request.hasIosPayloadShrink()) {
    body["IosPayload"] = request.iosPayloadShrink();
  }

  if (!!request.hasPolicyShrink()) {
    body["Policy"] = request.policyShrink();
  }

  if (!!request.hasProductionMode()) {
    body["ProductionMode"] = request.productionMode();
  }

  if (!!request.hasReceiptType()) {
    body["ReceiptType"] = request.receiptType();
  }

  if (!!request.hasReceiptUrl()) {
    body["ReceiptUrl"] = request.receiptUrl();
  }

  if (!!request.hasThirdPartyId()) {
    body["ThirdPartyId"] = request.thirdPartyId();
  }

  if (!!request.hasCallbackParams()) {
    body["callbackParams"] = request.callbackParams();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SendByAlias"},
    {"version" , "2022-02-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/SendByAlias")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SendByAliasResponse>();
}

/**
 * @summary 指定别名发送
 *
 * @param request SendByAliasRequest
 * @return SendByAliasResponse
 */
SendByAliasResponse Client::sendByAlias(const SendByAliasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return sendByAliasWithOptions(request, headers, runtime);
}

/**
 * @summary 指定别名文件发送
 *
 * @param tmpReq SendByAliasFileIdRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendByAliasFileIdResponse
 */
SendByAliasFileIdResponse Client::sendByAliasFileIdWithOptions(const SendByAliasFileIdRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SendByAliasFileIdShrinkRequest request = SendByAliasFileIdShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAndroidPayload()) {
    request.setAndroidPayloadShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.androidPayload(), "AndroidPayload", "json"));
  }

  if (!!tmpReq.hasAndroidShortPayload()) {
    request.setAndroidShortPayloadShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.androidShortPayload(), "AndroidShortPayload", "json"));
  }

  if (!!tmpReq.hasChannelProperties()) {
    request.setChannelPropertiesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.channelProperties(), "ChannelProperties", "json"));
  }

  if (!!tmpReq.hasHarmonyPayload()) {
    request.setHarmonyPayloadShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.harmonyPayload(), "HarmonyPayload", "json"));
  }

  if (!!tmpReq.hasIosPayload()) {
    request.setIosPayloadShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.iosPayload(), "IosPayload", "json"));
  }

  if (!!tmpReq.hasPolicy()) {
    request.setPolicyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.policy(), "Policy", "json"));
  }

  json body = {};
  if (!!request.hasAliasType()) {
    body["AliasType"] = request.aliasType();
  }

  if (!!request.hasAndroidPayloadShrink()) {
    body["AndroidPayload"] = request.androidPayloadShrink();
  }

  if (!!request.hasAndroidShortPayloadShrink()) {
    body["AndroidShortPayload"] = request.androidShortPayloadShrink();
  }

  if (!!request.hasChannelPropertiesShrink()) {
    body["ChannelProperties"] = request.channelPropertiesShrink();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasFileId()) {
    body["FileId"] = request.fileId();
  }

  if (!!request.hasHarmonyPayloadShrink()) {
    body["HarmonyPayload"] = request.harmonyPayloadShrink();
  }

  if (!!request.hasIosPayloadShrink()) {
    body["IosPayload"] = request.iosPayloadShrink();
  }

  if (!!request.hasPolicyShrink()) {
    body["Policy"] = request.policyShrink();
  }

  if (!!request.hasProductionMode()) {
    body["ProductionMode"] = request.productionMode();
  }

  if (!!request.hasReceiptType()) {
    body["ReceiptType"] = request.receiptType();
  }

  if (!!request.hasReceiptUrl()) {
    body["ReceiptUrl"] = request.receiptUrl();
  }

  if (!!request.hasThirdPartyId()) {
    body["ThirdPartyId"] = request.thirdPartyId();
  }

  if (!!request.hasCallbackParams()) {
    body["callbackParams"] = request.callbackParams();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SendByAliasFileId"},
    {"version" , "2022-02-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/SendByAliasFileId")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SendByAliasFileIdResponse>();
}

/**
 * @summary 指定别名文件发送
 *
 * @param request SendByAliasFileIdRequest
 * @return SendByAliasFileIdResponse
 */
SendByAliasFileIdResponse Client::sendByAliasFileId(const SendByAliasFileIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return sendByAliasFileIdWithOptions(request, headers, runtime);
}

/**
 * @summary 广播
 *
 * @param tmpReq SendByAppRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendByAppResponse
 */
SendByAppResponse Client::sendByAppWithOptions(const SendByAppRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SendByAppShrinkRequest request = SendByAppShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAndroidPayload()) {
    request.setAndroidPayloadShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.androidPayload(), "AndroidPayload", "json"));
  }

  if (!!tmpReq.hasAndroidShortPayload()) {
    request.setAndroidShortPayloadShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.androidShortPayload(), "AndroidShortPayload", "json"));
  }

  if (!!tmpReq.hasChannelProperties()) {
    request.setChannelPropertiesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.channelProperties(), "ChannelProperties", "json"));
  }

  if (!!tmpReq.hasHarmonyPayload()) {
    request.setHarmonyPayloadShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.harmonyPayload(), "HarmonyPayload", "json"));
  }

  if (!!tmpReq.hasIosPayload()) {
    request.setIosPayloadShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.iosPayload(), "IosPayload", "json"));
  }

  if (!!tmpReq.hasPolicy()) {
    request.setPolicyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.policy(), "Policy", "json"));
  }

  json body = {};
  if (!!request.hasAndroidPayloadShrink()) {
    body["AndroidPayload"] = request.androidPayloadShrink();
  }

  if (!!request.hasAndroidShortPayloadShrink()) {
    body["AndroidShortPayload"] = request.androidShortPayloadShrink();
  }

  if (!!request.hasChannelPropertiesShrink()) {
    body["ChannelProperties"] = request.channelPropertiesShrink();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasHarmonyPayloadShrink()) {
    body["HarmonyPayload"] = request.harmonyPayloadShrink();
  }

  if (!!request.hasIosPayloadShrink()) {
    body["IosPayload"] = request.iosPayloadShrink();
  }

  if (!!request.hasPolicyShrink()) {
    body["Policy"] = request.policyShrink();
  }

  if (!!request.hasProductionMode()) {
    body["ProductionMode"] = request.productionMode();
  }

  if (!!request.hasReceiptType()) {
    body["ReceiptType"] = request.receiptType();
  }

  if (!!request.hasReceiptUrl()) {
    body["ReceiptUrl"] = request.receiptUrl();
  }

  if (!!request.hasThirdPartyId()) {
    body["ThirdPartyId"] = request.thirdPartyId();
  }

  if (!!request.hasCallbackParams()) {
    body["callbackParams"] = request.callbackParams();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SendByApp"},
    {"version" , "2022-02-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/SendByApp")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SendByAppResponse>();
}

/**
 * @summary 广播
 *
 * @param request SendByAppRequest
 * @return SendByAppResponse
 */
SendByAppResponse Client::sendByApp(const SendByAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return sendByAppWithOptions(request, headers, runtime);
}

/**
 * @summary 指定设备发送
 *
 * @param tmpReq SendByDeviceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendByDeviceResponse
 */
SendByDeviceResponse Client::sendByDeviceWithOptions(const SendByDeviceRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SendByDeviceShrinkRequest request = SendByDeviceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAndroidPayload()) {
    request.setAndroidPayloadShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.androidPayload(), "AndroidPayload", "json"));
  }

  if (!!tmpReq.hasAndroidShortPayload()) {
    request.setAndroidShortPayloadShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.androidShortPayload(), "AndroidShortPayload", "json"));
  }

  if (!!tmpReq.hasChannelProperties()) {
    request.setChannelPropertiesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.channelProperties(), "ChannelProperties", "json"));
  }

  if (!!tmpReq.hasHarmonyPayload()) {
    request.setHarmonyPayloadShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.harmonyPayload(), "HarmonyPayload", "json"));
  }

  if (!!tmpReq.hasIosPayload()) {
    request.setIosPayloadShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.iosPayload(), "IosPayload", "json"));
  }

  if (!!tmpReq.hasPolicy()) {
    request.setPolicyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.policy(), "Policy", "json"));
  }

  json body = {};
  if (!!request.hasAndroidPayloadShrink()) {
    body["AndroidPayload"] = request.androidPayloadShrink();
  }

  if (!!request.hasAndroidShortPayloadShrink()) {
    body["AndroidShortPayload"] = request.androidShortPayloadShrink();
  }

  if (!!request.hasChannelPropertiesShrink()) {
    body["ChannelProperties"] = request.channelPropertiesShrink();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasDeviceTokens()) {
    body["DeviceTokens"] = request.deviceTokens();
  }

  if (!!request.hasHarmonyPayloadShrink()) {
    body["HarmonyPayload"] = request.harmonyPayloadShrink();
  }

  if (!!request.hasIosPayloadShrink()) {
    body["IosPayload"] = request.iosPayloadShrink();
  }

  if (!!request.hasPolicyShrink()) {
    body["Policy"] = request.policyShrink();
  }

  if (!!request.hasProductionMode()) {
    body["ProductionMode"] = request.productionMode();
  }

  if (!!request.hasReceiptType()) {
    body["ReceiptType"] = request.receiptType();
  }

  if (!!request.hasReceiptUrl()) {
    body["ReceiptUrl"] = request.receiptUrl();
  }

  if (!!request.hasThirdPartyId()) {
    body["ThirdPartyId"] = request.thirdPartyId();
  }

  if (!!request.hasCallbackParams()) {
    body["callbackParams"] = request.callbackParams();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SendByDevice"},
    {"version" , "2022-02-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/SendByDevice")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SendByDeviceResponse>();
}

/**
 * @summary 指定设备发送
 *
 * @param request SendByDeviceRequest
 * @return SendByDeviceResponse
 */
SendByDeviceResponse Client::sendByDevice(const SendByDeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return sendByDeviceWithOptions(request, headers, runtime);
}

/**
 * @summary 指定设备文件发送
 *
 * @param tmpReq SendByDeviceFileIdRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendByDeviceFileIdResponse
 */
SendByDeviceFileIdResponse Client::sendByDeviceFileIdWithOptions(const SendByDeviceFileIdRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SendByDeviceFileIdShrinkRequest request = SendByDeviceFileIdShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAndroidPayload()) {
    request.setAndroidPayloadShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.androidPayload(), "AndroidPayload", "json"));
  }

  if (!!tmpReq.hasAndroidShortPayload()) {
    request.setAndroidShortPayloadShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.androidShortPayload(), "AndroidShortPayload", "json"));
  }

  if (!!tmpReq.hasChannelProperties()) {
    request.setChannelPropertiesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.channelProperties(), "ChannelProperties", "json"));
  }

  if (!!tmpReq.hasHarmonyPayload()) {
    request.setHarmonyPayloadShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.harmonyPayload(), "HarmonyPayload", "json"));
  }

  if (!!tmpReq.hasIosPayload()) {
    request.setIosPayloadShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.iosPayload(), "IosPayload", "json"));
  }

  if (!!tmpReq.hasPolicy()) {
    request.setPolicyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.policy(), "Policy", "json"));
  }

  json body = {};
  if (!!request.hasAndroidPayloadShrink()) {
    body["AndroidPayload"] = request.androidPayloadShrink();
  }

  if (!!request.hasAndroidShortPayloadShrink()) {
    body["AndroidShortPayload"] = request.androidShortPayloadShrink();
  }

  if (!!request.hasChannelPropertiesShrink()) {
    body["ChannelProperties"] = request.channelPropertiesShrink();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasFileId()) {
    body["FileId"] = request.fileId();
  }

  if (!!request.hasHarmonyPayloadShrink()) {
    body["HarmonyPayload"] = request.harmonyPayloadShrink();
  }

  if (!!request.hasIosPayloadShrink()) {
    body["IosPayload"] = request.iosPayloadShrink();
  }

  if (!!request.hasPolicyShrink()) {
    body["Policy"] = request.policyShrink();
  }

  if (!!request.hasProductionMode()) {
    body["ProductionMode"] = request.productionMode();
  }

  if (!!request.hasReceiptType()) {
    body["ReceiptType"] = request.receiptType();
  }

  if (!!request.hasReceiptUrl()) {
    body["ReceiptUrl"] = request.receiptUrl();
  }

  if (!!request.hasThirdPartyId()) {
    body["ThirdPartyId"] = request.thirdPartyId();
  }

  if (!!request.hasCallbackParams()) {
    body["callbackParams"] = request.callbackParams();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SendByDeviceFileId"},
    {"version" , "2022-02-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/SendByDeviceFileId")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SendByDeviceFileIdResponse>();
}

/**
 * @summary 指定设备文件发送
 *
 * @param request SendByDeviceFileIdRequest
 * @return SendByDeviceFileIdResponse
 */
SendByDeviceFileIdResponse Client::sendByDeviceFileId(const SendByDeviceFileIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return sendByDeviceFileIdWithOptions(request, headers, runtime);
}

/**
 * @summary 根据筛选条件发送
 *
 * @param tmpReq SendByFilterRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendByFilterResponse
 */
SendByFilterResponse Client::sendByFilterWithOptions(const SendByFilterRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SendByFilterShrinkRequest request = SendByFilterShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAndroidPayload()) {
    request.setAndroidPayloadShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.androidPayload(), "AndroidPayload", "json"));
  }

  if (!!tmpReq.hasChannelProperties()) {
    request.setChannelPropertiesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.channelProperties(), "ChannelProperties", "json"));
  }

  if (!!tmpReq.hasHarmonyPayload()) {
    request.setHarmonyPayloadShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.harmonyPayload(), "HarmonyPayload", "json"));
  }

  if (!!tmpReq.hasIosPayload()) {
    request.setIosPayloadShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.iosPayload(), "IosPayload", "json"));
  }

  if (!!tmpReq.hasPolicy()) {
    request.setPolicyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.policy(), "Policy", "json"));
  }

  json body = {};
  if (!!request.hasAndroidPayloadShrink()) {
    body["AndroidPayload"] = request.androidPayloadShrink();
  }

  if (!!request.hasAndroidShortPayload()) {
    body["AndroidShortPayload"] = request.androidShortPayload();
  }

  if (!!request.hasChannelPropertiesShrink()) {
    body["ChannelProperties"] = request.channelPropertiesShrink();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasFilter()) {
    body["Filter"] = request.filter();
  }

  if (!!request.hasHarmonyPayloadShrink()) {
    body["HarmonyPayload"] = request.harmonyPayloadShrink();
  }

  if (!!request.hasIosPayloadShrink()) {
    body["IosPayload"] = request.iosPayloadShrink();
  }

  if (!!request.hasPolicyShrink()) {
    body["Policy"] = request.policyShrink();
  }

  if (!!request.hasProductionMode()) {
    body["ProductionMode"] = request.productionMode();
  }

  if (!!request.hasReceiptType()) {
    body["ReceiptType"] = request.receiptType();
  }

  if (!!request.hasReceiptUrl()) {
    body["ReceiptUrl"] = request.receiptUrl();
  }

  if (!!request.hasThirdPartyId()) {
    body["ThirdPartyId"] = request.thirdPartyId();
  }

  if (!!request.hasCallbackParams()) {
    body["callbackParams"] = request.callbackParams();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SendByFilter"},
    {"version" , "2022-02-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/SendByFilter")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SendByFilterResponse>();
}

/**
 * @summary 根据筛选条件发送
 *
 * @param request SendByFilterRequest
 * @return SendByFilterResponse
 */
SendByFilterResponse Client::sendByFilter(const SendByFilterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return sendByFilterWithOptions(request, headers, runtime);
}

/**
 * @summary 上传设备列表创建设备文件
 *
 * @param request UploadDeviceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UploadDeviceResponse
 */
UploadDeviceResponse Client::uploadDeviceWithOptions(const UploadDeviceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDeviceTokens()) {
    body["DeviceTokens"] = request.deviceTokens();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UploadDevice"},
    {"version" , "2022-02-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/UploadDevice")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UploadDeviceResponse>();
}

/**
 * @summary 上传设备列表创建设备文件
 *
 * @param request UploadDeviceRequest
 * @return UploadDeviceResponse
 */
UploadDeviceResponse Client::uploadDevice(const UploadDeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return uploadDeviceWithOptions(request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace UmengPush20220225