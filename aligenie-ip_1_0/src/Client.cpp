#include <darabonba/Core.hpp>
#include <alibabacloud/AliGenieip_1_0.hpp>
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
using namespace AlibabaCloud::AliGenieip_1_0::Models;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{

AlibabaCloud::AliGenieip_1_0::Client::Client(Config &config): OpenApiClient(config){
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
 * @summary 添加动画
 *
 * @param request AddCartoonRequest
 * @param headers AddCartoonHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddCartoonResponse
 */
AddCartoonResponse Client::addCartoonWithOptions(const AddCartoonRequest &request, const AddCartoonHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasHotelId()) {
    body["HotelId"] = request.getHotelId();
  }

  if (!!request.hasStartVideoMd5()) {
    body["StartVideoMd5"] = request.getStartVideoMd5();
  }

  if (!!request.hasStartVideoUrl()) {
    body["StartVideoUrl"] = request.getStartVideoUrl();
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
    {"action" , "AddCartoon"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/addCartoon")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddCartoonResponse>();
}

/**
 * @summary 添加动画
 *
 * @param request AddCartoonRequest
 * @return AddCartoonResponse
 */
AddCartoonResponse Client::addCartoon(const AddCartoonRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  AddCartoonHeaders headers = AddCartoonHeaders();
  return addCartoonWithOptions(request, headers, runtime);
}

/**
 * @summary 新增自定义问答
 *
 * @param tmpReq AddCustomQARequest
 * @param headers AddCustomQAHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddCustomQAResponse
 */
AddCustomQAResponse Client::addCustomQAWithOptions(const AddCustomQARequest &tmpReq, const AddCustomQAHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AddCustomQAShrinkRequest request = AddCustomQAShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAnswers()) {
    request.setAnswersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAnswers(), "Answers", "json"));
  }

  if (!!tmpReq.hasKeyWords()) {
    request.setKeyWordsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getKeyWords(), "KeyWords", "json"));
  }

  if (!!tmpReq.hasSupplementaryQuestions()) {
    request.setSupplementaryQuestionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSupplementaryQuestions(), "SupplementaryQuestions", "json"));
  }

  json body = {};
  if (!!request.hasAnswersShrink()) {
    body["Answers"] = request.getAnswersShrink();
  }

  if (!!request.hasHotelId()) {
    body["HotelId"] = request.getHotelId();
  }

  if (!!request.hasKeyWordsShrink()) {
    body["KeyWords"] = request.getKeyWordsShrink();
  }

  if (!!request.hasMajorQuestion()) {
    body["MajorQuestion"] = request.getMajorQuestion();
  }

  if (!!request.hasSupplementaryQuestionsShrink()) {
    body["SupplementaryQuestions"] = request.getSupplementaryQuestionsShrink();
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
    {"action" , "AddCustomQA"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/addCustomQA")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddCustomQAResponse>();
}

/**
 * @summary 新增自定义问答
 *
 * @param request AddCustomQARequest
 * @return AddCustomQAResponse
 */
AddCustomQAResponse Client::addCustomQA(const AddCustomQARequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  AddCustomQAHeaders headers = AddCustomQAHeaders();
  return addCustomQAWithOptions(request, headers, runtime);
}

/**
 * @summary 添加问答V2
 *
 * @param tmpReq AddCustomQAV2Request
 * @param headers AddCustomQAV2Headers
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddCustomQAV2Response
 */
AddCustomQAV2Response Client::addCustomQAV2WithOptions(const AddCustomQAV2Request &tmpReq, const AddCustomQAV2Headers &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AddCustomQAV2ShrinkRequest request = AddCustomQAV2ShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAnswers()) {
    request.setAnswersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAnswers(), "Answers", "json"));
  }

  if (!!tmpReq.hasKeyWords()) {
    request.setKeyWordsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getKeyWords(), "KeyWords", "json"));
  }

  if (!!tmpReq.hasSupplementaryQuestions()) {
    request.setSupplementaryQuestionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSupplementaryQuestions(), "SupplementaryQuestions", "json"));
  }

  json body = {};
  if (!!request.hasAnswersShrink()) {
    body["Answers"] = request.getAnswersShrink();
  }

  if (!!request.hasHotelId()) {
    body["HotelId"] = request.getHotelId();
  }

  if (!!request.hasKeyWordsShrink()) {
    body["KeyWords"] = request.getKeyWordsShrink();
  }

  if (!!request.hasMajorQuestion()) {
    body["MajorQuestion"] = request.getMajorQuestion();
  }

  if (!!request.hasSupplementaryQuestionsShrink()) {
    body["SupplementaryQuestions"] = request.getSupplementaryQuestionsShrink();
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
    {"action" , "AddCustomQAV2"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/addQAV2")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddCustomQAV2Response>();
}

/**
 * @summary 添加问答V2
 *
 * @param request AddCustomQAV2Request
 * @return AddCustomQAV2Response
 */
AddCustomQAV2Response Client::addCustomQAV2(const AddCustomQAV2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  AddCustomQAV2Headers headers = AddCustomQAV2Headers();
  return addCustomQAV2WithOptions(request, headers, runtime);
}

/**
 * @summary 添加消息模板
 *
 * @param request AddMessageTemplateRequest
 * @param headers AddMessageTemplateHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddMessageTemplateResponse
 */
AddMessageTemplateResponse Client::addMessageTemplateWithOptions(const AddMessageTemplateRequest &request, const AddMessageTemplateHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasTemplateDetail()) {
    body["TemplateDetail"] = request.getTemplateDetail();
  }

  if (!!request.hasTemplateName()) {
    body["TemplateName"] = request.getTemplateName();
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
    {"action" , "AddMessageTemplate"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/addMessageTemplate")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddMessageTemplateResponse>();
}

/**
 * @summary 添加消息模板
 *
 * @param request AddMessageTemplateRequest
 * @return AddMessageTemplateResponse
 */
AddMessageTemplateResponse Client::addMessageTemplate(const AddMessageTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  AddMessageTemplateHeaders headers = AddMessageTemplateHeaders();
  return addMessageTemplateWithOptions(request, headers, runtime);
}

/**
 * @summary 新增或者编辑带屏展示模式
 *
 * @param tmpReq AddOrUpdateDisPlayModesRequest
 * @param headers AddOrUpdateDisPlayModesHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddOrUpdateDisPlayModesResponse
 */
AddOrUpdateDisPlayModesResponse Client::addOrUpdateDisPlayModesWithOptions(const AddOrUpdateDisPlayModesRequest &tmpReq, const AddOrUpdateDisPlayModesHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AddOrUpdateDisPlayModesShrinkRequest request = AddOrUpdateDisPlayModesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasHotelDeviceModeList()) {
    request.setHotelDeviceModeListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getHotelDeviceModeList(), "HotelDeviceModeList", "json"));
  }

  json body = {};
  if (!!request.hasHotelDeviceModeListShrink()) {
    body["HotelDeviceModeList"] = request.getHotelDeviceModeListShrink();
  }

  if (!!request.hasHotelId()) {
    body["HotelId"] = request.getHotelId();
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
    {"action" , "AddOrUpdateDisPlayModes"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/addOrUpdateDisPlayModes")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddOrUpdateDisPlayModesResponse>();
}

/**
 * @summary 新增或者编辑带屏展示模式
 *
 * @param request AddOrUpdateDisPlayModesRequest
 * @return AddOrUpdateDisPlayModesResponse
 */
AddOrUpdateDisPlayModesResponse Client::addOrUpdateDisPlayModes(const AddOrUpdateDisPlayModesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  AddOrUpdateDisPlayModesHeaders headers = AddOrUpdateDisPlayModesHeaders();
  return addOrUpdateDisPlayModesWithOptions(request, headers, runtime);
}

/**
 * @summary 新增或者编辑定制配置
 *
 * @param tmpReq AddOrUpdateHotelSettingRequest
 * @param headers AddOrUpdateHotelSettingHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddOrUpdateHotelSettingResponse
 */
AddOrUpdateHotelSettingResponse Client::addOrUpdateHotelSettingWithOptions(const AddOrUpdateHotelSettingRequest &tmpReq, const AddOrUpdateHotelSettingHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AddOrUpdateHotelSettingShrinkRequest request = AddOrUpdateHotelSettingShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasHotelDeviceModeList()) {
    request.setHotelDeviceModeListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getHotelDeviceModeList(), "HotelDeviceModeList", "json"));
  }

  if (!!tmpReq.hasHotelScreenSaver()) {
    request.setHotelScreenSaverShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getHotelScreenSaver(), "HotelScreenSaver", "json"));
  }

  if (!!tmpReq.hasNightMode()) {
    request.setNightModeShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNightMode(), "NightMode", "json"));
  }

  json body = {};
  if (!!request.hasHotelDeviceModeListShrink()) {
    body["HotelDeviceModeList"] = request.getHotelDeviceModeListShrink();
  }

  if (!!request.hasHotelId()) {
    body["HotelId"] = request.getHotelId();
  }

  if (!!request.hasHotelScreenSaverShrink()) {
    body["HotelScreenSaver"] = request.getHotelScreenSaverShrink();
  }

  if (!!request.hasNightModeShrink()) {
    body["NightMode"] = request.getNightModeShrink();
  }

  if (!!request.hasSettingType()) {
    body["SettingType"] = request.getSettingType();
  }

  if (!!request.hasValue()) {
    body["Value"] = request.getValue();
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
    {"action" , "AddOrUpdateHotelSetting"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/addOrUpdateHotelSetting")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddOrUpdateHotelSettingResponse>();
}

/**
 * @summary 新增或者编辑定制配置
 *
 * @param request AddOrUpdateHotelSettingRequest
 * @return AddOrUpdateHotelSettingResponse
 */
AddOrUpdateHotelSettingResponse Client::addOrUpdateHotelSetting(const AddOrUpdateHotelSettingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  AddOrUpdateHotelSettingHeaders headers = AddOrUpdateHotelSettingHeaders();
  return addOrUpdateHotelSettingWithOptions(request, headers, runtime);
}

/**
 * @summary 新增或者编辑带屏屏保
 *
 * @param tmpReq AddOrUpdateScreenSaverRequest
 * @param headers AddOrUpdateScreenSaverHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddOrUpdateScreenSaverResponse
 */
AddOrUpdateScreenSaverResponse Client::addOrUpdateScreenSaverWithOptions(const AddOrUpdateScreenSaverRequest &tmpReq, const AddOrUpdateScreenSaverHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AddOrUpdateScreenSaverShrinkRequest request = AddOrUpdateScreenSaverShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasHotelScreenSaver()) {
    request.setHotelScreenSaverShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getHotelScreenSaver(), "HotelScreenSaver", "json"));
  }

  json body = {};
  if (!!request.hasHotelId()) {
    body["HotelId"] = request.getHotelId();
  }

  if (!!request.hasHotelScreenSaverShrink()) {
    body["HotelScreenSaver"] = request.getHotelScreenSaverShrink();
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
    {"action" , "AddOrUpdateScreenSaver"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/addOrUpdateScreenSaver")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddOrUpdateScreenSaverResponse>();
}

/**
 * @summary 新增或者编辑带屏屏保
 *
 * @param request AddOrUpdateScreenSaverRequest
 * @return AddOrUpdateScreenSaverResponse
 */
AddOrUpdateScreenSaverResponse Client::addOrUpdateScreenSaver(const AddOrUpdateScreenSaverRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  AddOrUpdateScreenSaverHeaders headers = AddOrUpdateScreenSaverHeaders();
  return addOrUpdateScreenSaverWithOptions(request, headers, runtime);
}

/**
 * @summary 添加/更新欢迎语信息
 *
 * @param request AddOrUpdateWelcomeTextRequest
 * @param headers AddOrUpdateWelcomeTextHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddOrUpdateWelcomeTextResponse
 */
AddOrUpdateWelcomeTextResponse Client::addOrUpdateWelcomeTextWithOptions(const AddOrUpdateWelcomeTextRequest &request, const AddOrUpdateWelcomeTextHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasHotelId()) {
    body["HotelId"] = request.getHotelId();
  }

  if (!!request.hasMusicUrl()) {
    body["MusicUrl"] = request.getMusicUrl();
  }

  if (!!request.hasWelcomeText()) {
    body["WelcomeText"] = request.getWelcomeText();
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
    {"action" , "AddOrUpdateWelcomeText"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/addOrUpdateWelcomeText")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddOrUpdateWelcomeTextResponse>();
}

/**
 * @summary 添加/更新欢迎语信息
 *
 * @param request AddOrUpdateWelcomeTextRequest
 * @return AddOrUpdateWelcomeTextResponse
 */
AddOrUpdateWelcomeTextResponse Client::addOrUpdateWelcomeText(const AddOrUpdateWelcomeTextRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  AddOrUpdateWelcomeTextHeaders headers = AddOrUpdateWelcomeTextHeaders();
  return addOrUpdateWelcomeTextWithOptions(request, headers, runtime);
}

/**
 * @summary 审批酒店
 *
 * @param tmpReq AuditHotelRequest
 * @param headers AuditHotelHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return AuditHotelResponse
 */
AuditHotelResponse Client::auditHotelWithOptions(const AuditHotelRequest &tmpReq, const AuditHotelHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AuditHotelShrinkRequest request = AuditHotelShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAuditHotelReq()) {
    request.setAuditHotelReqShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAuditHotelReq(), "AuditHotelReq", "json"));
  }

  json query = {};
  if (!!request.hasAuditHotelReqShrink()) {
    query["AuditHotelReq"] = request.getAuditHotelReqShrink();
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
    {"action" , "AuditHotel"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/auditHotel")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AuditHotelResponse>();
}

/**
 * @summary 审批酒店
 *
 * @param request AuditHotelRequest
 * @return AuditHotelResponse
 */
AuditHotelResponse Client::auditHotel(const AuditHotelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  AuditHotelHeaders headers = AuditHotelHeaders();
  return auditHotelWithOptions(request, headers, runtime);
}

/**
 * @summary 批量创建房间
 *
 * @param tmpReq BatchAddHotelRoomRequest
 * @param headers BatchAddHotelRoomHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchAddHotelRoomResponse
 */
BatchAddHotelRoomResponse Client::batchAddHotelRoomWithOptions(const BatchAddHotelRoomRequest &tmpReq, const BatchAddHotelRoomHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  BatchAddHotelRoomShrinkRequest request = BatchAddHotelRoomShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRoomNoList()) {
    request.setRoomNoListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRoomNoList(), "RoomNoList", "simple"));
  }

  json body = {};
  if (!!request.hasHotelId()) {
    body["HotelId"] = request.getHotelId();
  }

  if (!!request.hasRoomNoListShrink()) {
    body["RoomNoList"] = request.getRoomNoListShrink();
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
    {"action" , "BatchAddHotelRoom"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/batchAddHotelRoom")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchAddHotelRoomResponse>();
}

/**
 * @summary 批量创建房间
 *
 * @param request BatchAddHotelRoomRequest
 * @return BatchAddHotelRoomResponse
 */
BatchAddHotelRoomResponse Client::batchAddHotelRoom(const BatchAddHotelRoomRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  BatchAddHotelRoomHeaders headers = BatchAddHotelRoomHeaders();
  return batchAddHotelRoomWithOptions(request, headers, runtime);
}

/**
 * @summary 批量删除房间
 *
 * @param tmpReq BatchDeleteHotelRoomRequest
 * @param headers BatchDeleteHotelRoomHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchDeleteHotelRoomResponse
 */
BatchDeleteHotelRoomResponse Client::batchDeleteHotelRoomWithOptions(const BatchDeleteHotelRoomRequest &tmpReq, const BatchDeleteHotelRoomHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  BatchDeleteHotelRoomShrinkRequest request = BatchDeleteHotelRoomShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRoomNoList()) {
    request.setRoomNoListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRoomNoList(), "RoomNoList", "simple"));
  }

  json body = {};
  if (!!request.hasHotelId()) {
    body["HotelId"] = request.getHotelId();
  }

  if (!!request.hasRoomNoListShrink()) {
    body["RoomNoList"] = request.getRoomNoListShrink();
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
    {"action" , "BatchDeleteHotelRoom"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/batchDeleteHotelRoom")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchDeleteHotelRoomResponse>();
}

/**
 * @summary 批量删除房间
 *
 * @param request BatchDeleteHotelRoomRequest
 * @return BatchDeleteHotelRoomResponse
 */
BatchDeleteHotelRoomResponse Client::batchDeleteHotelRoom(const BatchDeleteHotelRoomRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  BatchDeleteHotelRoomHeaders headers = BatchDeleteHotelRoomHeaders();
  return batchDeleteHotelRoomWithOptions(request, headers, runtime);
}

/**
 * @summary 酒店退房，清楚例如闹钟等定时信息
 *
 * @param request CheckoutWithAKRequest
 * @param headers CheckoutWithAKHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckoutWithAKResponse
 */
CheckoutWithAKResponse Client::checkoutWithAKWithOptions(const CheckoutWithAKRequest &request, const CheckoutWithAKHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasHotelId()) {
    body["HotelId"] = request.getHotelId();
  }

  if (!!request.hasRoomNo()) {
    body["RoomNo"] = request.getRoomNo();
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
    {"action" , "CheckoutWithAK"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/checkoutWithAK")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckoutWithAKResponse>();
}

/**
 * @summary 酒店退房，清楚例如闹钟等定时信息
 *
 * @param request CheckoutWithAKRequest
 * @return CheckoutWithAKResponse
 */
CheckoutWithAKResponse Client::checkoutWithAK(const CheckoutWithAKRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CheckoutWithAKHeaders headers = CheckoutWithAKHeaders();
  return checkoutWithAKWithOptions(request, headers, runtime);
}

/**
 * @summary 子账号授权
 *
 * @param request ChildAccountAuthRequest
 * @param headers ChildAccountAuthHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChildAccountAuthResponse
 */
ChildAccountAuthResponse Client::childAccountAuthWithOptions(const ChildAccountAuthRequest &request, const ChildAccountAuthHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccount()) {
    body["Account"] = request.getAccount();
  }

  if (!!request.hasAppKey()) {
    body["AppKey"] = request.getAppKey();
  }

  if (!!request.hasHotelId()) {
    body["HotelId"] = request.getHotelId();
  }

  if (!!request.hasTbOpenId()) {
    body["TbOpenId"] = request.getTbOpenId();
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
    {"action" , "ChildAccountAuth"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/childAccountAuth")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChildAccountAuthResponse>();
}

/**
 * @summary 子账号授权
 *
 * @param request ChildAccountAuthRequest
 * @return ChildAccountAuthResponse
 */
ChildAccountAuthResponse Client::childAccountAuth(const ChildAccountAuthRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ChildAccountAuthHeaders headers = ChildAccountAuthHeaders();
  return childAccountAuthWithOptions(request, headers, runtime);
}

/**
 * @summary 控制房间内设备
 *
 * @param tmpReq ControlRoomDeviceRequest
 * @param headers ControlRoomDeviceHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ControlRoomDeviceResponse
 */
ControlRoomDeviceResponse Client::controlRoomDeviceWithOptions(const ControlRoomDeviceRequest &tmpReq, const ControlRoomDeviceHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ControlRoomDeviceShrinkRequest request = ControlRoomDeviceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasProperties()) {
    request.setPropertiesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getProperties(), "Properties", "json"));
  }

  json body = {};
  if (!!request.hasCmd()) {
    body["Cmd"] = request.getCmd();
  }

  if (!!request.hasDeviceIndex()) {
    body["DeviceIndex"] = request.getDeviceIndex();
  }

  if (!!request.hasDeviceNumber()) {
    body["DeviceNumber"] = request.getDeviceNumber();
  }

  if (!!request.hasHotelId()) {
    body["HotelId"] = request.getHotelId();
  }

  if (!!request.hasPropertiesShrink()) {
    body["Properties"] = request.getPropertiesShrink();
  }

  if (!!request.hasRoomNo()) {
    body["RoomNo"] = request.getRoomNo();
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
    {"action" , "ControlRoomDevice"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/controlRoomDevice")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ControlRoomDeviceResponse>();
}

/**
 * @summary 控制房间内设备
 *
 * @param request ControlRoomDeviceRequest
 * @return ControlRoomDeviceResponse
 */
ControlRoomDeviceResponse Client::controlRoomDevice(const ControlRoomDeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ControlRoomDeviceHeaders headers = ControlRoomDeviceHeaders();
  return controlRoomDeviceWithOptions(request, headers, runtime);
}

/**
 * @summary 创建酒店项目
 *
 * @param tmpReq CreateHotelRequest
 * @param headers CreateHotelHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateHotelResponse
 */
CreateHotelResponse Client::createHotelWithOptions(const CreateHotelRequest &tmpReq, const CreateHotelHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateHotelShrinkRequest request = CreateHotelShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRelatedPks()) {
    request.setRelatedPksShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRelatedPks(), "RelatedPks", "json"));
  }

  json body = {};
  if (!!request.hasAppKey()) {
    body["AppKey"] = request.getAppKey();
  }

  if (!!request.hasEstOpenTime()) {
    body["EstOpenTime"] = request.getEstOpenTime();
  }

  if (!!request.hasHotelAddress()) {
    body["HotelAddress"] = request.getHotelAddress();
  }

  if (!!request.hasHotelEmail()) {
    body["HotelEmail"] = request.getHotelEmail();
  }

  if (!!request.hasHotelName()) {
    body["HotelName"] = request.getHotelName();
  }

  if (!!request.hasPhoneNumber()) {
    body["PhoneNumber"] = request.getPhoneNumber();
  }

  if (!!request.hasRelatedPk()) {
    body["RelatedPk"] = request.getRelatedPk();
  }

  if (!!request.hasRelatedPksShrink()) {
    body["RelatedPks"] = request.getRelatedPksShrink();
  }

  if (!!request.hasRemark()) {
    body["Remark"] = request.getRemark();
  }

  if (!!request.hasRoomNum()) {
    body["RoomNum"] = request.getRoomNum();
  }

  if (!!request.hasTbOpenId()) {
    body["TbOpenId"] = request.getTbOpenId();
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
    {"action" , "CreateHotel"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/createHotel")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateHotelResponse>();
}

/**
 * @summary 创建酒店项目
 *
 * @param request CreateHotelRequest
 * @return CreateHotelResponse
 */
CreateHotelResponse Client::createHotel(const CreateHotelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CreateHotelHeaders headers = CreateHotelHeaders();
  return createHotelWithOptions(request, headers, runtime);
}

/**
 * @summary 批量创建闹钟
 *
 * @param tmpReq CreateHotelAlarmRequest
 * @param headers CreateHotelAlarmHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateHotelAlarmResponse
 */
CreateHotelAlarmResponse Client::createHotelAlarmWithOptions(const CreateHotelAlarmRequest &tmpReq, const CreateHotelAlarmHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateHotelAlarmShrinkRequest request = CreateHotelAlarmShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRooms()) {
    request.setRoomsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRooms(), "Rooms", "json"));
  }

  if (!!tmpReq.hasScheduleInfo()) {
    request.setScheduleInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getScheduleInfo(), "ScheduleInfo", "json"));
  }

  json body = {};
  if (!!request.hasHotelId()) {
    body["HotelId"] = request.getHotelId();
  }

  if (!!request.hasMusicType()) {
    body["MusicType"] = request.getMusicType();
  }

  if (!!request.hasRoomsShrink()) {
    body["Rooms"] = request.getRoomsShrink();
  }

  if (!!request.hasScheduleInfoShrink()) {
    body["ScheduleInfo"] = request.getScheduleInfoShrink();
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
    {"action" , "CreateHotelAlarm"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/createHotelAlarm")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateHotelAlarmResponse>();
}

/**
 * @summary 批量创建闹钟
 *
 * @param request CreateHotelAlarmRequest
 * @return CreateHotelAlarmResponse
 */
CreateHotelAlarmResponse Client::createHotelAlarm(const CreateHotelAlarmRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CreateHotelAlarmHeaders headers = CreateHotelAlarmHeaders();
  return createHotelAlarmWithOptions(request, headers, runtime);
}

/**
 * @summary 酒店rcu自定义场景创建
 *
 * @param tmpReq CreateRcuSceneRequest
 * @param headers CreateRcuSceneHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRcuSceneResponse
 */
CreateRcuSceneResponse Client::createRcuSceneWithOptions(const CreateRcuSceneRequest &tmpReq, const CreateRcuSceneHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateRcuSceneShrinkRequest request = CreateRcuSceneShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSceneRelationExtDTO()) {
    request.setSceneRelationExtDTOShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSceneRelationExtDTO(), "SceneRelationExtDTO", "json"));
  }

  json body = {};
  if (!!request.hasHotelId()) {
    body["HotelId"] = request.getHotelId();
  }

  if (!!request.hasSceneId()) {
    body["SceneId"] = request.getSceneId();
  }

  if (!!request.hasSceneRelationExtDTOShrink()) {
    body["SceneRelationExtDTO"] = request.getSceneRelationExtDTOShrink();
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
    {"action" , "CreateRcuScene"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/createRcuScene")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRcuSceneResponse>();
}

/**
 * @summary 酒店rcu自定义场景创建
 *
 * @param request CreateRcuSceneRequest
 * @return CreateRcuSceneResponse
 */
CreateRcuSceneResponse Client::createRcuScene(const CreateRcuSceneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CreateRcuSceneHeaders headers = CreateRcuSceneHeaders();
  return createRcuSceneWithOptions(request, headers, runtime);
}

/**
 * @summary 删除动画
 *
 * @param request DeleteCartoonRequest
 * @param headers DeleteCartoonHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCartoonResponse
 */
DeleteCartoonResponse Client::deleteCartoonWithOptions(const DeleteCartoonRequest &request, const DeleteCartoonHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasHotelId()) {
    body["HotelId"] = request.getHotelId();
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
    {"action" , "DeleteCartoon"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/deleteCartoon")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCartoonResponse>();
}

/**
 * @summary 删除动画
 *
 * @param request DeleteCartoonRequest
 * @return DeleteCartoonResponse
 */
DeleteCartoonResponse Client::deleteCartoon(const DeleteCartoonRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  DeleteCartoonHeaders headers = DeleteCartoonHeaders();
  return deleteCartoonWithOptions(request, headers, runtime);
}

/**
 * @summary 删除自定义问答
 *
 * @param tmpReq DeleteCustomQARequest
 * @param headers DeleteCustomQAHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCustomQAResponse
 */
DeleteCustomQAResponse Client::deleteCustomQAWithOptions(const DeleteCustomQARequest &tmpReq, const DeleteCustomQAHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteCustomQAShrinkRequest request = DeleteCustomQAShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCustomQAIds()) {
    request.setCustomQAIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCustomQAIds(), "CustomQAIds", "json"));
  }

  json body = {};
  if (!!request.hasCustomQAIdsShrink()) {
    body["CustomQAIds"] = request.getCustomQAIdsShrink();
  }

  if (!!request.hasHotelId()) {
    body["HotelId"] = request.getHotelId();
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
    {"action" , "DeleteCustomQA"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/deleteCustomQA")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCustomQAResponse>();
}

/**
 * @summary 删除自定义问答
 *
 * @param request DeleteCustomQARequest
 * @return DeleteCustomQAResponse
 */
DeleteCustomQAResponse Client::deleteCustomQA(const DeleteCustomQARequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  DeleteCustomQAHeaders headers = DeleteCustomQAHeaders();
  return deleteCustomQAWithOptions(request, headers, runtime);
}

/**
 * @summary 删除酒店闹钟
 *
 * @param tmpReq DeleteHotelAlarmRequest
 * @param headers DeleteHotelAlarmHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteHotelAlarmResponse
 */
DeleteHotelAlarmResponse Client::deleteHotelAlarmWithOptions(const DeleteHotelAlarmRequest &tmpReq, const DeleteHotelAlarmHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteHotelAlarmShrinkRequest request = DeleteHotelAlarmShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAlarms()) {
    request.setAlarmsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAlarms(), "Alarms", "json"));
  }

  json body = {};
  if (!!request.hasAlarmsShrink()) {
    body["Alarms"] = request.getAlarmsShrink();
  }

  if (!!request.hasHotelId()) {
    body["HotelId"] = request.getHotelId();
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
    {"action" , "DeleteHotelAlarm"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/deleteHotelAlarm")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteHotelAlarmResponse>();
}

/**
 * @summary 删除酒店闹钟
 *
 * @param request DeleteHotelAlarmRequest
 * @return DeleteHotelAlarmResponse
 */
DeleteHotelAlarmResponse Client::deleteHotelAlarm(const DeleteHotelAlarmRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  DeleteHotelAlarmHeaders headers = DeleteHotelAlarmHeaders();
  return deleteHotelAlarmWithOptions(request, headers, runtime);
}

/**
 * @summary 酒店场景预订删除
 *
 * @param request DeleteHotelSceneBookItemRequest
 * @param headers DeleteHotelSceneBookItemHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteHotelSceneBookItemResponse
 */
DeleteHotelSceneBookItemResponse Client::deleteHotelSceneBookItemWithOptions(const DeleteHotelSceneBookItemRequest &request, const DeleteHotelSceneBookItemHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasHotelId()) {
    body["HotelId"] = request.getHotelId();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
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
    {"action" , "DeleteHotelSceneBookItem"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/deleteHotelSceneBookItem")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteHotelSceneBookItemResponse>();
}

/**
 * @summary 酒店场景预订删除
 *
 * @param request DeleteHotelSceneBookItemRequest
 * @return DeleteHotelSceneBookItemResponse
 */
DeleteHotelSceneBookItemResponse Client::deleteHotelSceneBookItem(const DeleteHotelSceneBookItemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  DeleteHotelSceneBookItemHeaders headers = DeleteHotelSceneBookItemHeaders();
  return deleteHotelSceneBookItemWithOptions(request, headers, runtime);
}

/**
 * @summary 删除定制配置
 *
 * @param request DeleteHotelSettingRequest
 * @param headers DeleteHotelSettingHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteHotelSettingResponse
 */
DeleteHotelSettingResponse Client::deleteHotelSettingWithOptions(const DeleteHotelSettingRequest &request, const DeleteHotelSettingHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasHotelId()) {
    body["HotelId"] = request.getHotelId();
  }

  if (!!request.hasSettingType()) {
    body["SettingType"] = request.getSettingType();
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
    {"action" , "DeleteHotelSetting"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/deleteHotelSetting")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteHotelSettingResponse>();
}

/**
 * @summary 删除定制配置
 *
 * @param request DeleteHotelSettingRequest
 * @return DeleteHotelSettingResponse
 */
DeleteHotelSettingResponse Client::deleteHotelSetting(const DeleteHotelSettingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  DeleteHotelSettingHeaders headers = DeleteHotelSettingHeaders();
  return deleteHotelSettingWithOptions(request, headers, runtime);
}

/**
 * @summary 删除消息通知模板
 *
 * @param request DeleteMessageTemplateRequest
 * @param headers DeleteMessageTemplateHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMessageTemplateResponse
 */
DeleteMessageTemplateResponse Client::deleteMessageTemplateWithOptions(const DeleteMessageTemplateRequest &request, const DeleteMessageTemplateHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasTemplateId()) {
    body["TemplateId"] = request.getTemplateId();
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
    {"action" , "DeleteMessageTemplate"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/deleteMessageTemplate")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMessageTemplateResponse>();
}

/**
 * @summary 删除消息通知模板
 *
 * @param request DeleteMessageTemplateRequest
 * @return DeleteMessageTemplateResponse
 */
DeleteMessageTemplateResponse Client::deleteMessageTemplate(const DeleteMessageTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  DeleteMessageTemplateHeaders headers = DeleteMessageTemplateHeaders();
  return deleteMessageTemplateWithOptions(request, headers, runtime);
}

/**
 * @summary 删除酒店自定义rcu场景
 *
 * @param request DeleteRcuSceneRequest
 * @param headers DeleteRcuSceneHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRcuSceneResponse
 */
DeleteRcuSceneResponse Client::deleteRcuSceneWithOptions(const DeleteRcuSceneRequest &request, const DeleteRcuSceneHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasHotelId()) {
    body["HotelId"] = request.getHotelId();
  }

  if (!!request.hasSceneId()) {
    body["SceneId"] = request.getSceneId();
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
    {"action" , "DeleteRcuScene"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/deleteRcuScene")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRcuSceneResponse>();
}

/**
 * @summary 删除酒店自定义rcu场景
 *
 * @param request DeleteRcuSceneRequest
 * @return DeleteRcuSceneResponse
 */
DeleteRcuSceneResponse Client::deleteRcuScene(const DeleteRcuSceneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  DeleteRcuSceneHeaders headers = DeleteRcuSceneHeaders();
  return deleteRcuSceneWithOptions(request, headers, runtime);
}

/**
 * @summary 设备控制
 *
 * @param tmpReq DeviceControlRequest
 * @param headers DeviceControlHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeviceControlResponse
 */
DeviceControlResponse Client::deviceControlWithOptions(const DeviceControlRequest &tmpReq, const DeviceControlHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeviceControlShrinkRequest request = DeviceControlShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPayload()) {
    request.setPayloadShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPayload(), "Payload", "json"));
  }

  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserInfo(), "UserInfo", "json"));
  }

  json query = {};
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
    {"action" , "DeviceControl"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/deviceControl")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeviceControlResponse>();
}

/**
 * @summary 设备控制
 *
 * @param request DeviceControlRequest
 * @return DeviceControlResponse
 */
DeviceControlResponse Client::deviceControl(const DeviceControlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  DeviceControlHeaders headers = DeviceControlHeaders();
  return deviceControlWithOptions(request, headers, runtime);
}

/**
 * @summary 控制房间场景
 *
 * @param request ExecuteSceneRequest
 * @param headers ExecuteSceneHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecuteSceneResponse
 */
ExecuteSceneResponse Client::executeSceneWithOptions(const ExecuteSceneRequest &request, const ExecuteSceneHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasHotelId()) {
    body["HotelId"] = request.getHotelId();
  }

  if (!!request.hasRoomNo()) {
    body["RoomNo"] = request.getRoomNo();
  }

  if (!!request.hasSceneName()) {
    body["SceneName"] = request.getSceneName();
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
    {"action" , "ExecuteScene"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/executeScene")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecuteSceneResponse>();
}

/**
 * @summary 控制房间场景
 *
 * @param request ExecuteSceneRequest
 * @return ExecuteSceneResponse
 */
ExecuteSceneResponse Client::executeScene(const ExecuteSceneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ExecuteSceneHeaders headers = ExecuteSceneHeaders();
  return executeSceneWithOptions(request, headers, runtime);
}

/**
 * @summary 获取基础信息问答
 *
 * @param request GetBasicInfoQARequest
 * @param headers GetBasicInfoQAHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetBasicInfoQAResponse
 */
GetBasicInfoQAResponse Client::getBasicInfoQAWithOptions(const GetBasicInfoQARequest &request, const GetBasicInfoQAHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasHotelId()) {
    body["HotelId"] = request.getHotelId();
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
    {"action" , "GetBasicInfoQA"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/getBasicInfoQA")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetBasicInfoQAResponse>();
}

/**
 * @summary 获取基础信息问答
 *
 * @param request GetBasicInfoQARequest
 * @return GetBasicInfoQAResponse
 */
GetBasicInfoQAResponse Client::getBasicInfoQA(const GetBasicInfoQARequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetBasicInfoQAHeaders headers = GetBasicInfoQAHeaders();
  return getBasicInfoQAWithOptions(request, headers, runtime);
}

/**
 * @summary 查询动画
 *
 * @param request GetCartoonRequest
 * @param headers GetCartoonHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCartoonResponse
 */
GetCartoonResponse Client::getCartoonWithOptions(const GetCartoonRequest &request, const GetCartoonHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasHotelId()) {
    body["HotelId"] = request.getHotelId();
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
    {"action" , "GetCartoon"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/getCartoon")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCartoonResponse>();
}

/**
 * @summary 查询动画
 *
 * @param request GetCartoonRequest
 * @return GetCartoonResponse
 */
GetCartoonResponse Client::getCartoon(const GetCartoonRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetCartoonHeaders headers = GetCartoonHeaders();
  return getCartoonWithOptions(request, headers, runtime);
}

/**
 * @summary 获取当前设备的通话信息
 *
 * @param tmpReq GetHotelContactByGenieDeviceRequest
 * @param headers GetHotelContactByGenieDeviceHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHotelContactByGenieDeviceResponse
 */
GetHotelContactByGenieDeviceResponse Client::getHotelContactByGenieDeviceWithOptions(const GetHotelContactByGenieDeviceRequest &tmpReq, const GetHotelContactByGenieDeviceHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetHotelContactByGenieDeviceShrinkRequest request = GetHotelContactByGenieDeviceShrinkRequest();
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
    {"action" , "GetHotelContactByGenieDevice"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/getHotelContactByGenieDevice")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetHotelContactByGenieDeviceResponse>();
}

/**
 * @summary 获取当前设备的通话信息
 *
 * @param request GetHotelContactByGenieDeviceRequest
 * @return GetHotelContactByGenieDeviceResponse
 */
GetHotelContactByGenieDeviceResponse Client::getHotelContactByGenieDevice(const GetHotelContactByGenieDeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetHotelContactByGenieDeviceHeaders headers = GetHotelContactByGenieDeviceHeaders();
  return getHotelContactByGenieDeviceWithOptions(request, headers, runtime);
}

/**
 * @summary 根据号码获取酒店联系人
 *
 * @param tmpReq GetHotelContactByNumberRequest
 * @param headers GetHotelContactByNumberHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHotelContactByNumberResponse
 */
GetHotelContactByNumberResponse Client::getHotelContactByNumberWithOptions(const GetHotelContactByNumberRequest &tmpReq, const GetHotelContactByNumberHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetHotelContactByNumberShrinkRequest request = GetHotelContactByNumberShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserInfo(), "UserInfo", "json"));
  }

  json query = {};
  if (!!request.hasUserInfoShrink()) {
    query["UserInfo"] = request.getUserInfoShrink();
  }

  json body = {};
  if (!!request.hasNumber()) {
    body["Number"] = request.getNumber();
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
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetHotelContactByNumber"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/getHotelContactByNumber")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetHotelContactByNumberResponse>();
}

/**
 * @summary 根据号码获取酒店联系人
 *
 * @param request GetHotelContactByNumberRequest
 * @return GetHotelContactByNumberResponse
 */
GetHotelContactByNumberResponse Client::getHotelContactByNumber(const GetHotelContactByNumberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetHotelContactByNumberHeaders headers = GetHotelContactByNumberHeaders();
  return getHotelContactByNumberWithOptions(request, headers, runtime);
}

/**
 * @summary 获取酒店联系人
 *
 * @param tmpReq GetHotelContactsRequest
 * @param headers GetHotelContactsHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHotelContactsResponse
 */
GetHotelContactsResponse Client::getHotelContactsWithOptions(const GetHotelContactsRequest &tmpReq, const GetHotelContactsHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetHotelContactsShrinkRequest request = GetHotelContactsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserInfo(), "UserInfo", "json"));
  }

  json query = {};
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
    {"action" , "GetHotelContacts"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/getHotelContacts")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetHotelContactsResponse>();
}

/**
 * @summary 获取酒店联系人
 *
 * @param request GetHotelContactsRequest
 * @return GetHotelContactsResponse
 */
GetHotelContactsResponse Client::getHotelContacts(const GetHotelContactsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetHotelContactsHeaders headers = GetHotelContactsHeaders();
  return getHotelContactsWithOptions(request, headers, runtime);
}

/**
 * @summary 获取首页背景图和场景模式
 *
 * @param tmpReq GetHotelHomeBackImageAndModesRequest
 * @param headers GetHotelHomeBackImageAndModesHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHotelHomeBackImageAndModesResponse
 */
GetHotelHomeBackImageAndModesResponse Client::getHotelHomeBackImageAndModesWithOptions(const GetHotelHomeBackImageAndModesRequest &tmpReq, const GetHotelHomeBackImageAndModesHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetHotelHomeBackImageAndModesShrinkRequest request = GetHotelHomeBackImageAndModesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserInfo(), "UserInfo", "json"));
  }

  json query = {};
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
    {"action" , "GetHotelHomeBackImageAndModes"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/getHotelHomeBackImageAndModes")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetHotelHomeBackImageAndModesResponse>();
}

/**
 * @summary 获取首页背景图和场景模式
 *
 * @param request GetHotelHomeBackImageAndModesRequest
 * @return GetHotelHomeBackImageAndModesResponse
 */
GetHotelHomeBackImageAndModesResponse Client::getHotelHomeBackImageAndModes(const GetHotelHomeBackImageAndModesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetHotelHomeBackImageAndModesHeaders headers = GetHotelHomeBackImageAndModesHeaders();
  return getHotelHomeBackImageAndModesWithOptions(request, headers, runtime);
}

/**
 * @summary 获取酒店通知
 *
 * @param tmpReq GetHotelNoticeRequest
 * @param headers GetHotelNoticeHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHotelNoticeResponse
 */
GetHotelNoticeResponse Client::getHotelNoticeWithOptions(const GetHotelNoticeRequest &tmpReq, const GetHotelNoticeHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetHotelNoticeShrinkRequest request = GetHotelNoticeShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserInfo(), "UserInfo", "json"));
  }

  json query = {};
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
    {"action" , "GetHotelNotice"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/getHotelNotice")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetHotelNoticeResponse>();
}

/**
 * @summary 获取酒店通知
 *
 * @param request GetHotelNoticeRequest
 * @return GetHotelNoticeResponse
 */
GetHotelNoticeResponse Client::getHotelNotice(const GetHotelNoticeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetHotelNoticeHeaders headers = GetHotelNoticeHeaders();
  return getHotelNoticeWithOptions(request, headers, runtime);
}

/**
 * @summary 获取酒店通知
 *
 * @param tmpReq GetHotelNoticeV2Request
 * @param headers GetHotelNoticeV2Headers
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHotelNoticeV2Response
 */
GetHotelNoticeV2Response Client::getHotelNoticeV2WithOptions(const GetHotelNoticeV2Request &tmpReq, const GetHotelNoticeV2Headers &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetHotelNoticeV2ShrinkRequest request = GetHotelNoticeV2ShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserInfo(), "UserInfo", "json"));
  }

  json query = {};
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
    {"action" , "GetHotelNoticeV2"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/getHotelNoticeV2")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetHotelNoticeV2Response>();
}

/**
 * @summary 获取酒店通知
 *
 * @param request GetHotelNoticeV2Request
 * @return GetHotelNoticeV2Response
 */
GetHotelNoticeV2Response Client::getHotelNoticeV2(const GetHotelNoticeV2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetHotelNoticeV2Headers headers = GetHotelNoticeV2Headers();
  return getHotelNoticeV2WithOptions(request, headers, runtime);
}

/**
 * @summary 获取酒店订单详情
 *
 * @param tmpReq GetHotelOrderDetailRequest
 * @param headers GetHotelOrderDetailHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHotelOrderDetailResponse
 */
GetHotelOrderDetailResponse Client::getHotelOrderDetailWithOptions(const GetHotelOrderDetailRequest &tmpReq, const GetHotelOrderDetailHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetHotelOrderDetailShrinkRequest request = GetHotelOrderDetailShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPayload()) {
    request.setPayloadShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPayload(), "Payload", "json"));
  }

  json query = {};
  if (!!request.hasPayloadShrink()) {
    query["Payload"] = request.getPayloadShrink();
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
    {"action" , "GetHotelOrderDetail"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/getHotelOrderDetail")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetHotelOrderDetailResponse>();
}

/**
 * @summary 获取酒店订单详情
 *
 * @param request GetHotelOrderDetailRequest
 * @return GetHotelOrderDetailResponse
 */
GetHotelOrderDetailResponse Client::getHotelOrderDetail(const GetHotelOrderDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetHotelOrderDetailHeaders headers = GetHotelOrderDetailHeaders();
  return getHotelOrderDetailWithOptions(request, headers, runtime);
}

/**
 * @summary 获取酒店房间猫精设备信息
 *
 * @param request GetHotelRoomDeviceRequest
 * @param headers GetHotelRoomDeviceHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHotelRoomDeviceResponse
 */
GetHotelRoomDeviceResponse Client::getHotelRoomDeviceWithOptions(const GetHotelRoomDeviceRequest &request, const GetHotelRoomDeviceHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHotelId()) {
    query["HotelId"] = request.getHotelId();
  }

  if (!!request.hasRoomNo()) {
    query["RoomNo"] = request.getRoomNo();
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
    {"action" , "GetHotelRoomDevice"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/getHotelRoomDevice")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetHotelRoomDeviceResponse>();
}

/**
 * @summary 获取酒店房间猫精设备信息
 *
 * @param request GetHotelRoomDeviceRequest
 * @return GetHotelRoomDeviceResponse
 */
GetHotelRoomDeviceResponse Client::getHotelRoomDevice(const GetHotelRoomDeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetHotelRoomDeviceHeaders headers = GetHotelRoomDeviceHeaders();
  return getHotelRoomDeviceWithOptions(request, headers, runtime);
}

/**
 * @summary 获取推荐语料
 *
 * @param tmpReq GetHotelSampleUtterancesRequest
 * @param headers GetHotelSampleUtterancesHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHotelSampleUtterancesResponse
 */
GetHotelSampleUtterancesResponse Client::getHotelSampleUtterancesWithOptions(const GetHotelSampleUtterancesRequest &tmpReq, const GetHotelSampleUtterancesHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetHotelSampleUtterancesShrinkRequest request = GetHotelSampleUtterancesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserInfo(), "UserInfo", "json"));
  }

  json query = {};
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
    {"action" , "GetHotelSampleUtterances"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/getHotelSampleUtterances")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetHotelSampleUtterancesResponse>();
}

/**
 * @summary 获取推荐语料
 *
 * @param request GetHotelSampleUtterancesRequest
 * @return GetHotelSampleUtterancesResponse
 */
GetHotelSampleUtterancesResponse Client::getHotelSampleUtterances(const GetHotelSampleUtterancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetHotelSampleUtterancesHeaders headers = GetHotelSampleUtterancesHeaders();
  return getHotelSampleUtterancesWithOptions(request, headers, runtime);
}

/**
 * @summary 酒店场景详情
 *
 * @param request GetHotelSceneItemDetailRequest
 * @param headers GetHotelSceneItemDetailHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHotelSceneItemDetailResponse
 */
GetHotelSceneItemDetailResponse Client::getHotelSceneItemDetailWithOptions(const GetHotelSceneItemDetailRequest &request, const GetHotelSceneItemDetailHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasHotelId()) {
    body["HotelId"] = request.getHotelId();
  }

  if (!!request.hasItemId()) {
    body["ItemId"] = request.getItemId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
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
    {"action" , "GetHotelSceneItemDetail"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/getHotelSceneItemDetail")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetHotelSceneItemDetailResponse>();
}

/**
 * @summary 酒店场景详情
 *
 * @param request GetHotelSceneItemDetailRequest
 * @return GetHotelSceneItemDetailResponse
 */
GetHotelSceneItemDetailResponse Client::getHotelSceneItemDetail(const GetHotelSceneItemDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetHotelSceneItemDetailHeaders headers = GetHotelSceneItemDetailHeaders();
  return getHotelSceneItemDetailWithOptions(request, headers, runtime);
}

/**
 * @summary 获取酒店屏保
 *
 * @param tmpReq GetHotelScreenSaverRequest
 * @param headers GetHotelScreenSaverHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHotelScreenSaverResponse
 */
GetHotelScreenSaverResponse Client::getHotelScreenSaverWithOptions(const GetHotelScreenSaverRequest &tmpReq, const GetHotelScreenSaverHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetHotelScreenSaverShrinkRequest request = GetHotelScreenSaverShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserInfo(), "UserInfo", "json"));
  }

  json query = {};
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
    {"action" , "GetHotelScreenSaver"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/getHotelScreenSaver")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetHotelScreenSaverResponse>();
}

/**
 * @summary 获取酒店屏保
 *
 * @param request GetHotelScreenSaverRequest
 * @return GetHotelScreenSaverResponse
 */
GetHotelScreenSaverResponse Client::getHotelScreenSaver(const GetHotelScreenSaverRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetHotelScreenSaverHeaders headers = GetHotelScreenSaverHeaders();
  return getHotelScreenSaverWithOptions(request, headers, runtime);
}

/**
 * @summary 获取屏保列表
 *
 * @param request GetHotelScreenSaverStyleRequest
 * @param headers GetHotelScreenSaverStyleHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHotelScreenSaverStyleResponse
 */
GetHotelScreenSaverStyleResponse Client::getHotelScreenSaverStyleWithOptions(const GetHotelScreenSaverStyleRequest &request, const GetHotelScreenSaverStyleHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasHotelId()) {
    body["HotelId"] = request.getHotelId();
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
    {"action" , "GetHotelScreenSaverStyle"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/getHotelScreenSaverStyle")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetHotelScreenSaverStyleResponse>();
}

/**
 * @summary 获取屏保列表
 *
 * @param request GetHotelScreenSaverStyleRequest
 * @return GetHotelScreenSaverStyleResponse
 */
GetHotelScreenSaverStyleResponse Client::getHotelScreenSaverStyle(const GetHotelScreenSaverStyleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetHotelScreenSaverStyleHeaders headers = GetHotelScreenSaverStyleHeaders();
  return getHotelScreenSaverStyleWithOptions(request, headers, runtime);
}

/**
 * @summary 查询定制配置
 *
 * @param request GetHotelSettingRequest
 * @param headers GetHotelSettingHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHotelSettingResponse
 */
GetHotelSettingResponse Client::getHotelSettingWithOptions(const GetHotelSettingRequest &request, const GetHotelSettingHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasHotelId()) {
    body["HotelId"] = request.getHotelId();
  }

  if (!!request.hasSettingType()) {
    body["SettingType"] = request.getSettingType();
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
    {"action" , "GetHotelSetting"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/getHotelSetting")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetHotelSettingResponse>();
}

/**
 * @summary 查询定制配置
 *
 * @param request GetHotelSettingRequest
 * @return GetHotelSettingResponse
 */
GetHotelSettingResponse Client::getHotelSetting(const GetHotelSettingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetHotelSettingHeaders headers = GetHotelSettingHeaders();
  return getHotelSettingWithOptions(request, headers, runtime);
}

/**
 * @summary 关联产品列表查看
 *
 * @param headers GetRelationProductListHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRelationProductListResponse
 */
GetRelationProductListResponse Client::getRelationProductListWithOptions(const GetRelationProductListHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
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
    {"headers" , realHeaders}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRelationProductList"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/getRelationProductList")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRelationProductListResponse>();
}

/**
 * @summary 关联产品列表查看
 *
 * @return GetRelationProductListResponse
 */
GetRelationProductListResponse Client::getRelationProductList() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetRelationProductListHeaders headers = GetRelationProductListHeaders();
  return getRelationProductListWithOptions(headers, runtime);
}

/**
 * @summary 获取组织下unionId列表
 *
 * @param request GetUnionIdRequest
 * @param headers GetUnionIdHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUnionIdResponse
 */
GetUnionIdResponse Client::getUnionIdWithOptions(const GetUnionIdRequest &request, const GetUnionIdHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEncodeKey()) {
    body["EncodeKey"] = request.getEncodeKey();
  }

  if (!!request.hasEncodeType()) {
    body["EncodeType"] = request.getEncodeType();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasIdType()) {
    body["IdType"] = request.getIdType();
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
    {"action" , "GetUnionId"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/getUnionId")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUnionIdResponse>();
}

/**
 * @summary 获取组织下unionId列表
 *
 * @param request GetUnionIdRequest
 * @return GetUnionIdResponse
 */
GetUnionIdResponse Client::getUnionId(const GetUnionIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetUnionIdHeaders headers = GetUnionIdHeaders();
  return getUnionIdWithOptions(request, headers, runtime);
}

/**
 * @summary 查询欢迎语信息
 *
 * @param request GetWelcomeTextAndMusicRequest
 * @param headers GetWelcomeTextAndMusicHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWelcomeTextAndMusicResponse
 */
GetWelcomeTextAndMusicResponse Client::getWelcomeTextAndMusicWithOptions(const GetWelcomeTextAndMusicRequest &request, const GetWelcomeTextAndMusicHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasHotelId()) {
    body["HotelId"] = request.getHotelId();
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
    {"action" , "GetWelcomeTextAndMusic"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/getWelcomeTextAndMusic")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWelcomeTextAndMusicResponse>();
}

/**
 * @summary 查询欢迎语信息
 *
 * @param request GetWelcomeTextAndMusicRequest
 * @return GetWelcomeTextAndMusicResponse
 */
GetWelcomeTextAndMusicResponse Client::getWelcomeTextAndMusic(const GetWelcomeTextAndMusicRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetWelcomeTextAndMusicHeaders headers = GetWelcomeTextAndMusicHeaders();
  return getWelcomeTextAndMusicWithOptions(request, headers, runtime);
}

/**
 * @summary 酒店带屏设备扫码绑定
 *
 * @param request HotelQrBindRequest
 * @param headers HotelQrBindHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return HotelQrBindResponse
 */
HotelQrBindResponse Client::hotelQrBindWithOptions(const HotelQrBindRequest &request, const HotelQrBindHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientId()) {
    body["ClientId"] = request.getClientId();
  }

  if (!!request.hasCode()) {
    body["Code"] = request.getCode();
  }

  if (!!request.hasExtInfo()) {
    body["ExtInfo"] = request.getExtInfo();
  }

  if (!!request.hasHotelId()) {
    body["HotelId"] = request.getHotelId();
  }

  if (!!request.hasRoomNo()) {
    body["RoomNo"] = request.getRoomNo();
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
    {"action" , "HotelQrBind"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/hotelQrBind")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<HotelQrBindResponse>();
}

/**
 * @summary 酒店带屏设备扫码绑定
 *
 * @param request HotelQrBindRequest
 * @return HotelQrBindResponse
 */
HotelQrBindResponse Client::hotelQrBind(const HotelQrBindRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  HotelQrBindHeaders headers = HotelQrBindHeaders();
  return hotelQrBindWithOptions(request, headers, runtime);
}

/**
 * @summary 批量导入酒店配置
 *
 * @param tmpReq ImportHotelConfigRequest
 * @param headers ImportHotelConfigHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImportHotelConfigResponse
 */
ImportHotelConfigResponse Client::importHotelConfigWithOptions(const ImportHotelConfigRequest &tmpReq, const ImportHotelConfigHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ImportHotelConfigShrinkRequest request = ImportHotelConfigShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasImportHotelConfig()) {
    request.setImportHotelConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getImportHotelConfig(), "ImportHotelConfig", "json"));
  }

  json body = {};
  if (!!request.hasHotelId()) {
    body["HotelId"] = request.getHotelId();
  }

  if (!!request.hasImportHotelConfigShrink()) {
    body["ImportHotelConfig"] = request.getImportHotelConfigShrink();
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
    {"action" , "ImportHotelConfig"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/importHotelConfig")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ImportHotelConfigResponse>();
}

/**
 * @summary 批量导入酒店配置
 *
 * @param request ImportHotelConfigRequest
 * @return ImportHotelConfigResponse
 */
ImportHotelConfigResponse Client::importHotelConfig(const ImportHotelConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ImportHotelConfigHeaders headers = ImportHotelConfigHeaders();
  return importHotelConfigWithOptions(request, headers, runtime);
}

/**
 * @summary 批量导入设备（同时补充房型）
 *
 * @param tmpReq ImportRoomControlDevicesRequest
 * @param headers ImportRoomControlDevicesHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImportRoomControlDevicesResponse
 */
ImportRoomControlDevicesResponse Client::importRoomControlDevicesWithOptions(const ImportRoomControlDevicesRequest &tmpReq, const ImportRoomControlDevicesHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ImportRoomControlDevicesShrinkRequest request = ImportRoomControlDevicesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasLocationDevices()) {
    request.setLocationDevicesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getLocationDevices(), "LocationDevices", "json"));
  }

  json body = {};
  if (!!request.hasEnableInfraredDeviceImport()) {
    body["EnableInfraredDeviceImport"] = request.getEnableInfraredDeviceImport();
  }

  if (!!request.hasEnableMeshDeviceImport()) {
    body["EnableMeshDeviceImport"] = request.getEnableMeshDeviceImport();
  }

  if (!!request.hasHotelId()) {
    body["HotelId"] = request.getHotelId();
  }

  if (!!request.hasLocationDevicesShrink()) {
    body["LocationDevices"] = request.getLocationDevicesShrink();
  }

  if (!!request.hasRoomNo()) {
    body["RoomNo"] = request.getRoomNo();
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
    {"action" , "ImportRoomControlDevices"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/importRoomControlDevices")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ImportRoomControlDevicesResponse>();
}

/**
 * @summary 批量导入设备（同时补充房型）
 *
 * @param request ImportRoomControlDevicesRequest
 * @return ImportRoomControlDevicesResponse
 */
ImportRoomControlDevicesResponse Client::importRoomControlDevices(const ImportRoomControlDevicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ImportRoomControlDevicesHeaders headers = ImportRoomControlDevicesHeaders();
  return importRoomControlDevicesWithOptions(request, headers, runtime);
}

/**
 * @summary 导入房间内精灵场景
 *
 * @param tmpReq ImportRoomGenieScenesRequest
 * @param headers ImportRoomGenieScenesHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImportRoomGenieScenesResponse
 */
ImportRoomGenieScenesResponse Client::importRoomGenieScenesWithOptions(const ImportRoomGenieScenesRequest &tmpReq, const ImportRoomGenieScenesHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ImportRoomGenieScenesShrinkRequest request = ImportRoomGenieScenesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSceneList()) {
    request.setSceneListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSceneList(), "SceneList", "json"));
  }

  json body = {};
  if (!!request.hasHotelId()) {
    body["HotelId"] = request.getHotelId();
  }

  if (!!request.hasRoomNo()) {
    body["RoomNo"] = request.getRoomNo();
  }

  if (!!request.hasSceneListShrink()) {
    body["SceneList"] = request.getSceneListShrink();
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
    {"action" , "ImportRoomGenieScenes"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/importRoomGenieScenes")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ImportRoomGenieScenesResponse>();
}

/**
 * @summary 导入房间内精灵场景
 *
 * @param request ImportRoomGenieScenesRequest
 * @return ImportRoomGenieScenesResponse
 */
ImportRoomGenieScenesResponse Client::importRoomGenieScenes(const ImportRoomGenieScenesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ImportRoomGenieScenesHeaders headers = ImportRoomGenieScenesHeaders();
  return importRoomGenieScenesWithOptions(request, headers, runtime);
}

/**
 * @summary 酒店场景预订新增
 *
 * @param tmpReq InsertHotelSceneBookItemRequest
 * @param headers InsertHotelSceneBookItemHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return InsertHotelSceneBookItemResponse
 */
InsertHotelSceneBookItemResponse Client::insertHotelSceneBookItemWithOptions(const InsertHotelSceneBookItemRequest &tmpReq, const InsertHotelSceneBookItemHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  InsertHotelSceneBookItemShrinkRequest request = InsertHotelSceneBookItemShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAddHotelSceneItemReq()) {
    request.setAddHotelSceneItemReqShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAddHotelSceneItemReq(), "AddHotelSceneItemReq", "json"));
  }

  json query = {};
  if (!!request.hasAddHotelSceneItemReqShrink()) {
    query["AddHotelSceneItemReq"] = request.getAddHotelSceneItemReqShrink();
  }

  json body = {};
  if (!!request.hasHotelId()) {
    body["HotelId"] = request.getHotelId();
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
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "InsertHotelSceneBookItem"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/insertHotelSceneBookItem")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InsertHotelSceneBookItemResponse>();
}

/**
 * @summary 酒店场景预订新增
 *
 * @param request InsertHotelSceneBookItemRequest
 * @return InsertHotelSceneBookItemResponse
 */
InsertHotelSceneBookItemResponse Client::insertHotelSceneBookItem(const InsertHotelSceneBookItemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  InsertHotelSceneBookItemHeaders headers = InsertHotelSceneBookItemHeaders();
  return insertHotelSceneBookItemWithOptions(request, headers, runtime);
}

/**
 * @summary 机器人服务，消息推送
 *
 * @param request InvokeRobotPushRequest
 * @param headers InvokeRobotPushHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return InvokeRobotPushResponse
 */
InvokeRobotPushResponse Client::invokeRobotPushWithOptions(const InvokeRobotPushRequest &request, const InvokeRobotPushHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasHotelId()) {
    body["HotelId"] = request.getHotelId();
  }

  if (!!request.hasPushType()) {
    body["PushType"] = request.getPushType();
  }

  if (!!request.hasRoomName()) {
    body["RoomName"] = request.getRoomName();
  }

  if (!!request.hasRoomNo()) {
    body["RoomNo"] = request.getRoomNo();
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
    {"action" , "InvokeRobotPush"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/invokeRobotPush")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InvokeRobotPushResponse>();
}

/**
 * @summary 机器人服务，消息推送
 *
 * @param request InvokeRobotPushRequest
 * @return InvokeRobotPushResponse
 */
InvokeRobotPushResponse Client::invokeRobotPush(const InvokeRobotPushRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  InvokeRobotPushHeaders headers = InvokeRobotPushHeaders();
  return invokeRobotPushWithOptions(request, headers, runtime);
}

/**
 * @summary 查询省份
 *
 * @param headers ListAllProvincesHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAllProvincesResponse
 */
ListAllProvincesResponse Client::listAllProvincesWithOptions(const ListAllProvincesHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
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
    {"headers" , realHeaders}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAllProvinces"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/listAllProvinces")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAllProvincesResponse>();
}

/**
 * @summary 查询省份
 *
 * @return ListAllProvincesResponse
 */
ListAllProvincesResponse Client::listAllProvinces() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListAllProvincesHeaders headers = ListAllProvincesHeaders();
  return listAllProvincesWithOptions(headers, runtime);
}

/**
 * @summary 查询城市
 *
 * @param request ListCitiesByProvinceRequest
 * @param headers ListCitiesByProvinceHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCitiesByProvinceResponse
 */
ListCitiesByProvinceResponse Client::listCitiesByProvinceWithOptions(const ListCitiesByProvinceRequest &request, const ListCitiesByProvinceHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasProvince()) {
    body["Province"] = request.getProvince();
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
    {"action" , "ListCitiesByProvince"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/listCitiesByProvince")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCitiesByProvinceResponse>();
}

/**
 * @summary 查询城市
 *
 * @param request ListCitiesByProvinceRequest
 * @return ListCitiesByProvinceResponse
 */
ListCitiesByProvinceResponse Client::listCitiesByProvince(const ListCitiesByProvinceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListCitiesByProvinceHeaders headers = ListCitiesByProvinceHeaders();
  return listCitiesByProvinceWithOptions(request, headers, runtime);
}

/**
 * @summary 查询自定义问答列表
 *
 * @param tmpReq ListCustomQARequest
 * @param headers ListCustomQAHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCustomQAResponse
 */
ListCustomQAResponse Client::listCustomQAWithOptions(const ListCustomQARequest &tmpReq, const ListCustomQAHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListCustomQAShrinkRequest request = ListCustomQAShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPage()) {
    request.setPageShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPage(), "Page", "json"));
  }

  json body = {};
  if (!!request.hasHotelId()) {
    body["HotelId"] = request.getHotelId();
  }

  if (!!request.hasKeyword()) {
    body["Keyword"] = request.getKeyword();
  }

  if (!!request.hasPageShrink()) {
    body["Page"] = request.getPageShrink();
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
    {"action" , "ListCustomQA"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/listCustomQA")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCustomQAResponse>();
}

/**
 * @summary 查询自定义问答列表
 *
 * @param request ListCustomQARequest
 * @return ListCustomQAResponse
 */
ListCustomQAResponse Client::listCustomQA(const ListCustomQARequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListCustomQAHeaders headers = ListCustomQAHeaders();
  return listCustomQAWithOptions(request, headers, runtime);
}

/**
 * @summary 酒店场景对话模板
 *
 * @param request ListDialogueTemplateRequest
 * @param headers ListDialogueTemplateHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDialogueTemplateResponse
 */
ListDialogueTemplateResponse Client::listDialogueTemplateWithOptions(const ListDialogueTemplateRequest &request, const ListDialogueTemplateHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasHotelId()) {
    body["HotelId"] = request.getHotelId();
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
    {"action" , "ListDialogueTemplate"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/listDialogueTemplate")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDialogueTemplateResponse>();
}

/**
 * @summary 酒店场景对话模板
 *
 * @param request ListDialogueTemplateRequest
 * @return ListDialogueTemplateResponse
 */
ListDialogueTemplateResponse Client::listDialogueTemplate(const ListDialogueTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListDialogueTemplateHeaders headers = ListDialogueTemplateHeaders();
  return listDialogueTemplateWithOptions(request, headers, runtime);
}

/**
 * @summary 查询酒店闹钟
 *
 * @param tmpReq ListHotelAlarmRequest
 * @param headers ListHotelAlarmHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListHotelAlarmResponse
 */
ListHotelAlarmResponse Client::listHotelAlarmWithOptions(const ListHotelAlarmRequest &tmpReq, const ListHotelAlarmHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListHotelAlarmShrinkRequest request = ListHotelAlarmShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRooms()) {
    request.setRoomsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRooms(), "Rooms", "json"));
  }

  json body = {};
  if (!!request.hasHotelId()) {
    body["HotelId"] = request.getHotelId();
  }

  if (!!request.hasRoomsShrink()) {
    body["Rooms"] = request.getRoomsShrink();
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
    {"action" , "ListHotelAlarm"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/getHotelAlarmList")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListHotelAlarmResponse>();
}

/**
 * @summary 查询酒店闹钟
 *
 * @param request ListHotelAlarmRequest
 * @return ListHotelAlarmResponse
 */
ListHotelAlarmResponse Client::listHotelAlarm(const ListHotelAlarmRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListHotelAlarmHeaders headers = ListHotelAlarmHeaders();
  return listHotelAlarmWithOptions(request, headers, runtime);
}

/**
 * @summary 酒店设备列表
 *
 * @param tmpReq ListHotelControlDeviceRequest
 * @param headers ListHotelControlDeviceHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListHotelControlDeviceResponse
 */
ListHotelControlDeviceResponse Client::listHotelControlDeviceWithOptions(const ListHotelControlDeviceRequest &tmpReq, const ListHotelControlDeviceHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListHotelControlDeviceShrinkRequest request = ListHotelControlDeviceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserInfo(), "UserInfo", "json"));
  }

  json query = {};
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
    {"action" , "ListHotelControlDevice"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/listHotelControlDevice")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListHotelControlDeviceResponse>();
}

/**
 * @summary 酒店设备列表
 *
 * @param request ListHotelControlDeviceRequest
 * @return ListHotelControlDeviceResponse
 */
ListHotelControlDeviceResponse Client::listHotelControlDevice(const ListHotelControlDeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListHotelControlDeviceHeaders headers = ListHotelControlDeviceHeaders();
  return listHotelControlDeviceWithOptions(request, headers, runtime);
}

/**
 * @summary 获取酒店列表
 *
 * @param headers ListHotelInfoHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListHotelInfoResponse
 */
ListHotelInfoResponse Client::listHotelInfoWithOptions(const ListHotelInfoHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
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
    {"headers" , realHeaders}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListHotelInfo"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/listHotelInfo")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListHotelInfoResponse>();
}

/**
 * @summary 获取酒店列表
 *
 * @return ListHotelInfoResponse
 */
ListHotelInfoResponse Client::listHotelInfo() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListHotelInfoHeaders headers = ListHotelInfoHeaders();
  return listHotelInfoWithOptions(headers, runtime);
}

/**
 * @summary 获取消息模板
 *
 * @param headers ListHotelMessageTemplateHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListHotelMessageTemplateResponse
 */
ListHotelMessageTemplateResponse Client::listHotelMessageTemplateWithOptions(const ListHotelMessageTemplateHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
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
    {"headers" , realHeaders}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListHotelMessageTemplate"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/listHotelMessageTemplate")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListHotelMessageTemplateResponse>();
}

/**
 * @summary 获取消息模板
 *
 * @return ListHotelMessageTemplateResponse
 */
ListHotelMessageTemplateResponse Client::listHotelMessageTemplate() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListHotelMessageTemplateHeaders headers = ListHotelMessageTemplateHeaders();
  return listHotelMessageTemplateWithOptions(headers, runtime);
}

/**
 * @summary 酒店订单列表
 *
 * @param tmpReq ListHotelOrderRequest
 * @param headers ListHotelOrderHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListHotelOrderResponse
 */
ListHotelOrderResponse Client::listHotelOrderWithOptions(const ListHotelOrderRequest &tmpReq, const ListHotelOrderHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListHotelOrderShrinkRequest request = ListHotelOrderShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPayload()) {
    request.setPayloadShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPayload(), "Payload", "json"));
  }

  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserInfo(), "UserInfo", "json"));
  }

  json query = {};
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
    {"action" , "ListHotelOrder"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/listHotelOrder")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListHotelOrderResponse>();
}

/**
 * @summary 酒店订单列表
 *
 * @param request ListHotelOrderRequest
 * @return ListHotelOrderResponse
 */
ListHotelOrderResponse Client::listHotelOrder(const ListHotelOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListHotelOrderHeaders headers = ListHotelOrderHeaders();
  return listHotelOrderWithOptions(request, headers, runtime);
}

/**
 * @summary 获取酒店的所有房间
 *
 * @param tmpReq ListHotelRoomsRequest
 * @param headers ListHotelRoomsHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListHotelRoomsResponse
 */
ListHotelRoomsResponse Client::listHotelRoomsWithOptions(const ListHotelRoomsRequest &tmpReq, const ListHotelRoomsHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListHotelRoomsShrinkRequest request = ListHotelRoomsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasHotelAdminRoom()) {
    request.setHotelAdminRoomShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getHotelAdminRoom(), "HotelAdminRoom", "json"));
  }

  json body = {};
  if (!!request.hasHotelAdminRoomShrink()) {
    body["HotelAdminRoom"] = request.getHotelAdminRoomShrink();
  }

  if (!!request.hasHotelId()) {
    body["HotelId"] = request.getHotelId();
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
    {"action" , "ListHotelRooms"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/listHotelRooms")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListHotelRoomsResponse>();
}

/**
 * @summary 获取酒店的所有房间
 *
 * @param request ListHotelRoomsRequest
 * @return ListHotelRoomsResponse
 */
ListHotelRoomsResponse Client::listHotelRooms(const ListHotelRoomsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListHotelRoomsHeaders headers = ListHotelRoomsHeaders();
  return listHotelRoomsWithOptions(request, headers, runtime);
}

/**
 * @summary 酒店场景预订列表（餐饮/SPA休闲/打车）
 *
 * @param tmpReq ListHotelSceneBookItemsRequest
 * @param headers ListHotelSceneBookItemsHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListHotelSceneBookItemsResponse
 */
ListHotelSceneBookItemsResponse Client::listHotelSceneBookItemsWithOptions(const ListHotelSceneBookItemsRequest &tmpReq, const ListHotelSceneBookItemsHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListHotelSceneBookItemsShrinkRequest request = ListHotelSceneBookItemsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPage()) {
    request.setPageShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPage(), "Page", "json"));
  }

  json query = {};
  if (!!request.hasPageShrink()) {
    query["Page"] = request.getPageShrink();
  }

  json body = {};
  if (!!request.hasHotelId()) {
    body["HotelId"] = request.getHotelId();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
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
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListHotelSceneBookItems"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/listHotelSceneBookItems")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListHotelSceneBookItemsResponse>();
}

/**
 * @summary 酒店场景预订列表（餐饮/SPA休闲/打车）
 *
 * @param request ListHotelSceneBookItemsRequest
 * @return ListHotelSceneBookItemsResponse
 */
ListHotelSceneBookItemsResponse Client::listHotelSceneBookItems(const ListHotelSceneBookItemsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListHotelSceneBookItemsHeaders headers = ListHotelSceneBookItemsHeaders();
  return listHotelSceneBookItemsWithOptions(request, headers, runtime);
}

/**
 * @summary 服务项目
 *
 * @param tmpReq ListHotelSceneItemRequest
 * @param headers ListHotelSceneItemHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListHotelSceneItemResponse
 */
ListHotelSceneItemResponse Client::listHotelSceneItemWithOptions(const ListHotelSceneItemRequest &tmpReq, const ListHotelSceneItemHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListHotelSceneItemShrinkRequest request = ListHotelSceneItemShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPayload()) {
    request.setPayloadShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPayload(), "Payload", "json"));
  }

  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserInfo(), "UserInfo", "json"));
  }

  json query = {};
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
    {"action" , "ListHotelSceneItem"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/listHotelSceneItem")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListHotelSceneItemResponse>();
}

/**
 * @summary 服务项目
 *
 * @param request ListHotelSceneItemRequest
 * @return ListHotelSceneItemResponse
 */
ListHotelSceneItemResponse Client::listHotelSceneItem(const ListHotelSceneItemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListHotelSceneItemHeaders headers = ListHotelSceneItemHeaders();
  return listHotelSceneItemWithOptions(request, headers, runtime);
}

/**
 * @summary 酒店场景列表（物品/服务/维修）
 *
 * @param tmpReq ListHotelSceneItemsRequest
 * @param headers ListHotelSceneItemsHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListHotelSceneItemsResponse
 */
ListHotelSceneItemsResponse Client::listHotelSceneItemsWithOptions(const ListHotelSceneItemsRequest &tmpReq, const ListHotelSceneItemsHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListHotelSceneItemsShrinkRequest request = ListHotelSceneItemsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasListHotelSceneReq()) {
    request.setListHotelSceneReqShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getListHotelSceneReq(), "ListHotelSceneReq", "json"));
  }

  json query = {};
  if (!!request.hasListHotelSceneReqShrink()) {
    query["ListHotelSceneReq"] = request.getListHotelSceneReqShrink();
  }

  json body = {};
  if (!!request.hasHotelId()) {
    body["HotelId"] = request.getHotelId();
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
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListHotelSceneItems"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/listHotelSceneItems")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListHotelSceneItemsResponse>();
}

/**
 * @summary 酒店场景列表（物品/服务/维修）
 *
 * @param request ListHotelSceneItemsRequest
 * @return ListHotelSceneItemsResponse
 */
ListHotelSceneItemsResponse Client::listHotelSceneItems(const ListHotelSceneItemsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListHotelSceneItemsHeaders headers = ListHotelSceneItemsHeaders();
  return listHotelSceneItemsWithOptions(request, headers, runtime);
}

/**
 * @summary 服务分类列表
 *
 * @param tmpReq ListHotelServiceCategoryRequest
 * @param headers ListHotelServiceCategoryHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListHotelServiceCategoryResponse
 */
ListHotelServiceCategoryResponse Client::listHotelServiceCategoryWithOptions(const ListHotelServiceCategoryRequest &tmpReq, const ListHotelServiceCategoryHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListHotelServiceCategoryShrinkRequest request = ListHotelServiceCategoryShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPayload()) {
    request.setPayloadShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPayload(), "Payload", "json"));
  }

  json query = {};
  if (!!request.hasPayloadShrink()) {
    query["Payload"] = request.getPayloadShrink();
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
    {"action" , "ListHotelServiceCategory"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/listHotelServiceCategory")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListHotelServiceCategoryResponse>();
}

/**
 * @summary 服务分类列表
 *
 * @param request ListHotelServiceCategoryRequest
 * @return ListHotelServiceCategoryResponse
 */
ListHotelServiceCategoryResponse Client::listHotelServiceCategory(const ListHotelServiceCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListHotelServiceCategoryHeaders headers = ListHotelServiceCategoryHeaders();
  return listHotelServiceCategoryWithOptions(request, headers, runtime);
}

/**
 * @summary 酒店列表(待审批/已拒绝/已通过)
 *
 * @param tmpReq ListHotelsRequest
 * @param headers ListHotelsHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListHotelsResponse
 */
ListHotelsResponse Client::listHotelsWithOptions(const ListHotelsRequest &tmpReq, const ListHotelsHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListHotelsShrinkRequest request = ListHotelsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasHotelRequest()) {
    request.setHotelRequestShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getHotelRequest(), "HotelRequest", "json"));
  }

  if (!!tmpReq.hasPage()) {
    request.setPageShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPage(), "Page", "json"));
  }

  json query = {};
  if (!!request.hasHotelRequestShrink()) {
    query["HotelRequest"] = request.getHotelRequestShrink();
  }

  if (!!request.hasPageShrink()) {
    query["Page"] = request.getPageShrink();
  }

  json body = {};
  if (!!request.hasStatus()) {
    body["Status"] = request.getStatus();
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
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListHotels"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/listHotels")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListHotelsResponse>();
}

/**
 * @summary 酒店列表(待审批/已拒绝/已通过)
 *
 * @param request ListHotelsRequest
 * @return ListHotelsResponse
 */
ListHotelsResponse Client::listHotels(const ListHotelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListHotelsHeaders headers = ListHotelsHeaders();
  return listHotelsWithOptions(request, headers, runtime);
}

/**
 * @summary 查询红外品牌列表
 *
 * @param request ListInfraredDeviceBrandsRequest
 * @param headers ListInfraredDeviceBrandsHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInfraredDeviceBrandsResponse
 */
ListInfraredDeviceBrandsResponse Client::listInfraredDeviceBrandsWithOptions(const ListInfraredDeviceBrandsRequest &request, const ListInfraredDeviceBrandsHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCategory()) {
    body["Category"] = request.getCategory();
  }

  if (!!request.hasServiceProvider()) {
    body["ServiceProvider"] = request.getServiceProvider();
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
    {"action" , "ListInfraredDeviceBrands"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/listInfraredDeviceBrands")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInfraredDeviceBrandsResponse>();
}

/**
 * @summary 查询红外品牌列表
 *
 * @param request ListInfraredDeviceBrandsRequest
 * @return ListInfraredDeviceBrandsResponse
 */
ListInfraredDeviceBrandsResponse Client::listInfraredDeviceBrands(const ListInfraredDeviceBrandsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListInfraredDeviceBrandsHeaders headers = ListInfraredDeviceBrandsHeaders();
  return listInfraredDeviceBrandsWithOptions(request, headers, runtime);
}

/**
 * @summary 查询红外码库列表
 *
 * @param request ListInfraredRemoteControllersRequest
 * @param headers ListInfraredRemoteControllersHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInfraredRemoteControllersResponse
 */
ListInfraredRemoteControllersResponse Client::listInfraredRemoteControllersWithOptions(const ListInfraredRemoteControllersRequest &request, const ListInfraredRemoteControllersHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBrand()) {
    body["Brand"] = request.getBrand();
  }

  if (!!request.hasCategory()) {
    body["Category"] = request.getCategory();
  }

  if (!!request.hasCity()) {
    body["City"] = request.getCity();
  }

  if (!!request.hasHotelId()) {
    body["HotelId"] = request.getHotelId();
  }

  if (!!request.hasProvince()) {
    body["Province"] = request.getProvince();
  }

  if (!!request.hasServiceProvider()) {
    body["ServiceProvider"] = request.getServiceProvider();
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
    {"action" , "ListInfraredRemoteControllers"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/listInfraredRemoteControllers")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInfraredRemoteControllersResponse>();
}

/**
 * @summary 查询红外码库列表
 *
 * @param request ListInfraredRemoteControllersRequest
 * @return ListInfraredRemoteControllersResponse
 */
ListInfraredRemoteControllersResponse Client::listInfraredRemoteControllers(const ListInfraredRemoteControllersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListInfraredRemoteControllersHeaders headers = ListInfraredRemoteControllersHeaders();
  return listInfraredRemoteControllersWithOptions(request, headers, runtime);
}

/**
 * @summary 查询服务提供商
 *
 * @param request ListSTBServiceProvidersRequest
 * @param headers ListSTBServiceProvidersHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSTBServiceProvidersResponse
 */
ListSTBServiceProvidersResponse Client::listSTBServiceProvidersWithOptions(const ListSTBServiceProvidersRequest &request, const ListSTBServiceProvidersHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCity()) {
    body["City"] = request.getCity();
  }

  if (!!request.hasProvince()) {
    body["Province"] = request.getProvince();
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
    {"action" , "ListSTBServiceProviders"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/listSTBServiceProviders")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSTBServiceProvidersResponse>();
}

/**
 * @summary 查询服务提供商
 *
 * @param request ListSTBServiceProvidersRequest
 * @return ListSTBServiceProvidersResponse
 */
ListSTBServiceProvidersResponse Client::listSTBServiceProviders(const ListSTBServiceProvidersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListSTBServiceProvidersHeaders headers = ListSTBServiceProvidersHeaders();
  return listSTBServiceProvidersWithOptions(request, headers, runtime);
}

/**
 * @summary 酒店场景分类
 *
 * @param request ListSceneCategoryRequest
 * @param headers ListSceneCategoryHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSceneCategoryResponse
 */
ListSceneCategoryResponse Client::listSceneCategoryWithOptions(const ListSceneCategoryRequest &request, const ListSceneCategoryHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasHotelId()) {
    body["HotelId"] = request.getHotelId();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
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
    {"action" , "ListSceneCategory"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/listSceneCategory")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSceneCategoryResponse>();
}

/**
 * @summary 酒店场景分类
 *
 * @param request ListSceneCategoryRequest
 * @return ListSceneCategoryResponse
 */
ListSceneCategoryResponse Client::listSceneCategory(const ListSceneCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListSceneCategoryHeaders headers = ListSceneCategoryHeaders();
  return listSceneCategoryWithOptions(request, headers, runtime);
}

/**
 * @summary 查询服务设施问答列表
 *
 * @param tmpReq ListServiceQARequest
 * @param headers ListServiceQAHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListServiceQAResponse
 */
ListServiceQAResponse Client::listServiceQAWithOptions(const ListServiceQARequest &tmpReq, const ListServiceQAHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListServiceQAShrinkRequest request = ListServiceQAShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPage()) {
    request.setPageShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPage(), "Page", "json"));
  }

  json body = {};
  if (!!request.hasActive()) {
    body["Active"] = request.getActive();
  }

  if (!!request.hasHotelId()) {
    body["HotelId"] = request.getHotelId();
  }

  if (!!request.hasKeyword()) {
    body["Keyword"] = request.getKeyword();
  }

  if (!!request.hasPageShrink()) {
    body["Page"] = request.getPageShrink();
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
    {"action" , "ListServiceQA"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/listServiceQA")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListServiceQAResponse>();
}

/**
 * @summary 查询服务设施问答列表
 *
 * @param request ListServiceQARequest
 * @return ListServiceQAResponse
 */
ListServiceQAResponse Client::listServiceQA(const ListServiceQARequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListServiceQAHeaders headers = ListServiceQAHeaders();
  return listServiceQAWithOptions(request, headers, runtime);
}

/**
 * @summary 查询工单列表
 *
 * @param tmpReq ListTicketsRequest
 * @param headers ListTicketsHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTicketsResponse
 */
ListTicketsResponse Client::listTicketsWithOptions(const ListTicketsRequest &tmpReq, const ListTicketsHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListTicketsShrinkRequest request = ListTicketsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPage()) {
    request.setPageShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPage(), "Page", "json"));
  }

  json body = {};
  if (!!request.hasEndTime()) {
    body["EndTime"] = request.getEndTime();
  }

  if (!!request.hasHotelId()) {
    body["HotelId"] = request.getHotelId();
  }

  if (!!request.hasIsDesc()) {
    body["IsDesc"] = request.getIsDesc();
  }

  if (!!request.hasIsNeedCallback()) {
    body["IsNeedCallback"] = request.getIsNeedCallback();
  }

  if (!!request.hasIsNeedCharges()) {
    body["IsNeedCharges"] = request.getIsNeedCharges();
  }

  if (!!request.hasPageShrink()) {
    body["Page"] = request.getPageShrink();
  }

  if (!!request.hasRoomNo()) {
    body["RoomNo"] = request.getRoomNo();
  }

  if (!!request.hasSortField()) {
    body["SortField"] = request.getSortField();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.getStatus();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
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
    {"action" , "ListTickets"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/listTickets")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTicketsResponse>();
}

/**
 * @summary 查询工单列表
 *
 * @param request ListTicketsRequest
 * @return ListTicketsResponse
 */
ListTicketsResponse Client::listTickets(const ListTicketsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListTicketsHeaders headers = ListTicketsHeaders();
  return listTicketsWithOptions(request, headers, runtime);
}

/**
 * @summary 分页查询酒店房间主控设备
 *
 * @param request PageGetHotelRoomDevicesRequest
 * @param headers PageGetHotelRoomDevicesHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return PageGetHotelRoomDevicesResponse
 */
PageGetHotelRoomDevicesResponse Client::pageGetHotelRoomDevicesWithOptions(const PageGetHotelRoomDevicesRequest &request, const PageGetHotelRoomDevicesHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasHotelId()) {
    body["HotelId"] = request.getHotelId();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
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
    {"action" , "PageGetHotelRoomDevices"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/pageGetHotelRoomDevices")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PageGetHotelRoomDevicesResponse>();
}

/**
 * @summary 分页查询酒店房间主控设备
 *
 * @param request PageGetHotelRoomDevicesRequest
 * @return PageGetHotelRoomDevicesResponse
 */
PageGetHotelRoomDevicesResponse Client::pageGetHotelRoomDevices(const PageGetHotelRoomDevicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  PageGetHotelRoomDevicesHeaders headers = PageGetHotelRoomDevicesHeaders();
  return pageGetHotelRoomDevicesWithOptions(request, headers, runtime);
}

/**
 * @summary pms事件上报
 *
 * @param request PmsEventReportRequest
 * @param headers PmsEventReportHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return PmsEventReportResponse
 */
PmsEventReportResponse Client::pmsEventReportWithOptions(const PmsEventReportRequest &request, const PmsEventReportHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasPayload()) {
    body["Payload"] = request.getPayload();
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
    {"action" , "PmsEventReport"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/pmsEventReport")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PmsEventReportResponse>();
}

/**
 * @summary pms事件上报
 *
 * @param request PmsEventReportRequest
 * @return PmsEventReportResponse
 */
PmsEventReportResponse Client::pmsEventReport(const PmsEventReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  PmsEventReportHeaders headers = PmsEventReportHeaders();
  return pmsEventReportWithOptions(request, headers, runtime);
}

/**
 * @summary 推送酒店消息
 *
 * @param tmpReq PushHotelMessageRequest
 * @param headers PushHotelMessageHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return PushHotelMessageResponse
 */
PushHotelMessageResponse Client::pushHotelMessageWithOptions(const PushHotelMessageRequest &tmpReq, const PushHotelMessageHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  PushHotelMessageShrinkRequest request = PushHotelMessageShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPushHotelMessageReq()) {
    request.setPushHotelMessageReqShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPushHotelMessageReq(), "PushHotelMessageReq", "json"));
  }

  json query = {};
  if (!!request.hasPushHotelMessageReqShrink()) {
    query["PushHotelMessageReq"] = request.getPushHotelMessageReqShrink();
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
    {"action" , "PushHotelMessage"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/pushHotelMessage")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PushHotelMessageResponse>();
}

/**
 * @summary 推送酒店消息
 *
 * @param request PushHotelMessageRequest
 * @return PushHotelMessageResponse
 */
PushHotelMessageResponse Client::pushHotelMessage(const PushHotelMessageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  PushHotelMessageHeaders headers = PushHotelMessageHeaders();
  return pushHotelMessageWithOptions(request, headers, runtime);
}

/**
 * @summary 推送音箱指令
 *
 * @param tmpReq PushVoiceBoxCommandsRequest
 * @param headers PushVoiceBoxCommandsHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return PushVoiceBoxCommandsResponse
 */
PushVoiceBoxCommandsResponse Client::pushVoiceBoxCommandsWithOptions(const PushVoiceBoxCommandsRequest &tmpReq, const PushVoiceBoxCommandsHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  PushVoiceBoxCommandsShrinkRequest request = PushVoiceBoxCommandsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCommands()) {
    request.setCommandsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCommands(), "Commands", "json"));
  }

  json body = {};
  if (!!request.hasCommandsShrink()) {
    body["Commands"] = request.getCommandsShrink();
  }

  if (!!request.hasHotelId()) {
    body["HotelId"] = request.getHotelId();
  }

  if (!!request.hasRoomNo()) {
    body["RoomNo"] = request.getRoomNo();
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
    {"action" , "PushVoiceBoxCommands"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/pushVoiceBoxCommands")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PushVoiceBoxCommandsResponse>();
}

/**
 * @summary 推送音箱指令
 *
 * @param request PushVoiceBoxCommandsRequest
 * @return PushVoiceBoxCommandsResponse
 */
PushVoiceBoxCommandsResponse Client::pushVoiceBoxCommands(const PushVoiceBoxCommandsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  PushVoiceBoxCommandsHeaders headers = PushVoiceBoxCommandsHeaders();
  return pushVoiceBoxCommandsWithOptions(request, headers, runtime);
}

/**
 * @summary 直接推送欢迎语
 *
 * @param request PushWelcomeRequest
 * @param headers PushWelcomeHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return PushWelcomeResponse
 */
PushWelcomeResponse Client::pushWelcomeWithOptions(const PushWelcomeRequest &request, const PushWelcomeHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasHotelId()) {
    body["HotelId"] = request.getHotelId();
  }

  if (!!request.hasRoomName()) {
    body["RoomName"] = request.getRoomName();
  }

  if (!!request.hasRoomNo()) {
    body["RoomNo"] = request.getRoomNo();
  }

  if (!!request.hasWelcomeMusicUrl()) {
    body["WelcomeMusicUrl"] = request.getWelcomeMusicUrl();
  }

  if (!!request.hasWelcomeText()) {
    body["WelcomeText"] = request.getWelcomeText();
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
    {"action" , "PushWelcome"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/pushWelcome")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PushWelcomeResponse>();
}

/**
 * @summary 直接推送欢迎语
 *
 * @param request PushWelcomeRequest
 * @return PushWelcomeResponse
 */
PushWelcomeResponse Client::pushWelcome(const PushWelcomeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  PushWelcomeHeaders headers = PushWelcomeHeaders();
  return pushWelcomeWithOptions(request, headers, runtime);
}

/**
 * @summary 推送欢迎语
 *
 * @param tmpReq PushWelcomeTextAndMusicRequest
 * @param headers PushWelcomeTextAndMusicHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return PushWelcomeTextAndMusicResponse
 */
PushWelcomeTextAndMusicResponse Client::pushWelcomeTextAndMusicWithOptions(const PushWelcomeTextAndMusicRequest &tmpReq, const PushWelcomeTextAndMusicHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  PushWelcomeTextAndMusicShrinkRequest request = PushWelcomeTextAndMusicShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTemplateVariable()) {
    request.setTemplateVariableShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTemplateVariable(), "TemplateVariable", "json"));
  }

  json body = {};
  if (!!request.hasHotelId()) {
    body["HotelId"] = request.getHotelId();
  }

  if (!!request.hasRoomName()) {
    body["RoomName"] = request.getRoomName();
  }

  if (!!request.hasRoomNo()) {
    body["RoomNo"] = request.getRoomNo();
  }

  if (!!request.hasTemplateVariableShrink()) {
    body["TemplateVariable"] = request.getTemplateVariableShrink();
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
    {"action" , "PushWelcomeTextAndMusic"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/pushWelcomeTextAndMusic")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PushWelcomeTextAndMusicResponse>();
}

/**
 * @summary 推送欢迎语
 *
 * @param request PushWelcomeTextAndMusicRequest
 * @return PushWelcomeTextAndMusicResponse
 */
PushWelcomeTextAndMusicResponse Client::pushWelcomeTextAndMusic(const PushWelcomeTextAndMusicRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  PushWelcomeTextAndMusicHeaders headers = PushWelcomeTextAndMusicHeaders();
  return pushWelcomeTextAndMusicWithOptions(request, headers, runtime);
}

/**
 * @summary 查询酒店设备状态/模式状态查询
 *
 * @param tmpReq QueryDeviceStatusRequest
 * @param headers QueryDeviceStatusHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryDeviceStatusResponse
 */
QueryDeviceStatusResponse Client::queryDeviceStatusWithOptions(const QueryDeviceStatusRequest &tmpReq, const QueryDeviceStatusHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QueryDeviceStatusShrinkRequest request = QueryDeviceStatusShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPayload()) {
    request.setPayloadShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPayload(), "Payload", "json"));
  }

  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserInfo(), "UserInfo", "json"));
  }

  json query = {};
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
    {"action" , "QueryDeviceStatus"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/queryDeviceStatus")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryDeviceStatusResponse>();
}

/**
 * @summary 查询酒店设备状态/模式状态查询
 *
 * @param request QueryDeviceStatusRequest
 * @return QueryDeviceStatusResponse
 */
QueryDeviceStatusResponse Client::queryDeviceStatus(const QueryDeviceStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  QueryDeviceStatusHeaders headers = QueryDeviceStatusHeaders();
  return queryDeviceStatusWithOptions(request, headers, runtime);
}

/**
 * @summary 查询房间详细信息
 *
 * @param request QueryHotelRoomDetailRequest
 * @param headers QueryHotelRoomDetailHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryHotelRoomDetailResponse
 */
QueryHotelRoomDetailResponse Client::queryHotelRoomDetailWithOptions(const QueryHotelRoomDetailRequest &request, const QueryHotelRoomDetailHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasHotelId()) {
    body["HotelId"] = request.getHotelId();
  }

  if (!!request.hasMac()) {
    body["Mac"] = request.getMac();
  }

  if (!!request.hasRoomNo()) {
    body["RoomNo"] = request.getRoomNo();
  }

  if (!!request.hasSn()) {
    body["Sn"] = request.getSn();
  }

  if (!!request.hasUuid()) {
    body["Uuid"] = request.getUuid();
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
    {"action" , "QueryHotelRoomDetail"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/queryHotelRoomDetail")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryHotelRoomDetailResponse>();
}

/**
 * @summary 查询房间详细信息
 *
 * @param request QueryHotelRoomDetailRequest
 * @return QueryHotelRoomDetailResponse
 */
QueryHotelRoomDetailResponse Client::queryHotelRoomDetail(const QueryHotelRoomDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  QueryHotelRoomDetailHeaders headers = QueryHotelRoomDetailHeaders();
  return queryHotelRoomDetailWithOptions(request, headers, runtime);
}

/**
 * @summary 查询酒店房间客控设备
 *
 * @param request QueryRoomControlDevicesRequest
 * @param headers QueryRoomControlDevicesHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryRoomControlDevicesResponse
 */
QueryRoomControlDevicesResponse Client::queryRoomControlDevicesWithOptions(const QueryRoomControlDevicesRequest &request, const QueryRoomControlDevicesHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHotelId()) {
    query["HotelId"] = request.getHotelId();
  }

  if (!!request.hasRoomNo()) {
    query["RoomNo"] = request.getRoomNo();
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
    {"action" , "QueryRoomControlDevices"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/queryRoomControlDevices")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryRoomControlDevicesResponse>();
}

/**
 * @summary 查询酒店房间客控设备
 *
 * @param request QueryRoomControlDevicesRequest
 * @return QueryRoomControlDevicesResponse
 */
QueryRoomControlDevicesResponse Client::queryRoomControlDevices(const QueryRoomControlDevicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  QueryRoomControlDevicesHeaders headers = QueryRoomControlDevicesHeaders();
  return queryRoomControlDevicesWithOptions(request, headers, runtime);
}

/**
 * @summary 查询房间被控设备包含设备状态
 *
 * @param request QueryRoomControlDevicesAndStatusRequest
 * @param headers QueryRoomControlDevicesAndStatusHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryRoomControlDevicesAndStatusResponse
 */
QueryRoomControlDevicesAndStatusResponse Client::queryRoomControlDevicesAndStatusWithOptions(const QueryRoomControlDevicesAndStatusRequest &request, const QueryRoomControlDevicesAndStatusHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasHotelId()) {
    body["HotelId"] = request.getHotelId();
  }

  if (!!request.hasRoomNo()) {
    body["RoomNo"] = request.getRoomNo();
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
    {"action" , "QueryRoomControlDevicesAndStatus"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/queryRoomControlDevicesAndStatus")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryRoomControlDevicesAndStatusResponse>();
}

/**
 * @summary 查询房间被控设备包含设备状态
 *
 * @param request QueryRoomControlDevicesAndStatusRequest
 * @return QueryRoomControlDevicesAndStatusResponse
 */
QueryRoomControlDevicesAndStatusResponse Client::queryRoomControlDevicesAndStatus(const QueryRoomControlDevicesAndStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  QueryRoomControlDevicesAndStatusHeaders headers = QueryRoomControlDevicesAndStatusHeaders();
  return queryRoomControlDevicesAndStatusWithOptions(request, headers, runtime);
}

/**
 * @summary 查询房态信息
 *
 * @param request QueryRoomStatusRequest
 * @param headers QueryRoomStatusHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryRoomStatusResponse
 */
QueryRoomStatusResponse Client::queryRoomStatusWithOptions(const QueryRoomStatusRequest &request, const QueryRoomStatusHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasHotelId()) {
    body["HotelId"] = request.getHotelId();
  }

  if (!!request.hasRoomNo()) {
    body["RoomNo"] = request.getRoomNo();
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
    {"action" , "QueryRoomStatus"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/queryRoomStatus")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryRoomStatusResponse>();
}

/**
 * @summary 查询房态信息
 *
 * @param request QueryRoomStatusRequest
 * @return QueryRoomStatusResponse
 */
QueryRoomStatusResponse Client::queryRoomStatus(const QueryRoomStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  QueryRoomStatusHeaders headers = QueryRoomStatusHeaders();
  return queryRoomStatusWithOptions(request, headers, runtime);
}

/**
 * @summary 查询酒店场景列表
 *
 * @param tmpReq QuerySceneListRequest
 * @param headers QuerySceneListHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuerySceneListResponse
 */
QuerySceneListResponse Client::querySceneListWithOptions(const QuerySceneListRequest &tmpReq, const QuerySceneListHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QuerySceneListShrinkRequest request = QuerySceneListShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSceneStates()) {
    request.setSceneStatesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSceneStates(), "SceneStates", "json"));
  }

  if (!!tmpReq.hasSceneTypes()) {
    request.setSceneTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSceneTypes(), "SceneTypes", "json"));
  }

  if (!!tmpReq.hasTemplateInfoIds()) {
    request.setTemplateInfoIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTemplateInfoIds(), "TemplateInfoIds", "json"));
  }

  json body = {};
  if (!!request.hasHotelId()) {
    body["HotelId"] = request.getHotelId();
  }

  if (!!request.hasSceneStatesShrink()) {
    body["SceneStates"] = request.getSceneStatesShrink();
  }

  if (!!request.hasSceneTypesShrink()) {
    body["SceneTypes"] = request.getSceneTypesShrink();
  }

  if (!!request.hasTemplateInfoIdsShrink()) {
    body["TemplateInfoIds"] = request.getTemplateInfoIdsShrink();
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
    {"action" , "QuerySceneList"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/querySceneList")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QuerySceneListResponse>();
}

/**
 * @summary 查询酒店场景列表
 *
 * @param request QuerySceneListRequest
 * @return QuerySceneListResponse
 */
QuerySceneListResponse Client::querySceneList(const QuerySceneListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  QuerySceneListHeaders headers = QuerySceneListHeaders();
  return querySceneListWithOptions(request, headers, runtime);
}

/**
 * @summary 删除子账号授权
 *
 * @param request RemoveChildAccountAuthRequest
 * @param headers RemoveChildAccountAuthHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveChildAccountAuthResponse
 */
RemoveChildAccountAuthResponse Client::removeChildAccountAuthWithOptions(const RemoveChildAccountAuthRequest &request, const RemoveChildAccountAuthHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppKey()) {
    body["AppKey"] = request.getAppKey();
  }

  if (!!request.hasChildAccountName()) {
    body["ChildAccountName"] = request.getChildAccountName();
  }

  if (!!request.hasHotelId()) {
    body["HotelId"] = request.getHotelId();
  }

  if (!!request.hasTbOpenId()) {
    body["TbOpenId"] = request.getTbOpenId();
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
    {"action" , "RemoveChildAccountAuth"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/removeChildAccountAuth")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveChildAccountAuthResponse>();
}

/**
 * @summary 删除子账号授权
 *
 * @param request RemoveChildAccountAuthRequest
 * @return RemoveChildAccountAuthResponse
 */
RemoveChildAccountAuthResponse Client::removeChildAccountAuth(const RemoveChildAccountAuthRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  RemoveChildAccountAuthHeaders headers = RemoveChildAccountAuthHeaders();
  return removeChildAccountAuthWithOptions(request, headers, runtime);
}

/**
 * @summary 删除酒店项目
 *
 * @param request RemoveHotelRequest
 * @param headers RemoveHotelHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveHotelResponse
 */
RemoveHotelResponse Client::removeHotelWithOptions(const RemoveHotelRequest &request, const RemoveHotelHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppKey()) {
    body["AppKey"] = request.getAppKey();
  }

  if (!!request.hasHotelId()) {
    body["HotelId"] = request.getHotelId();
  }

  if (!!request.hasTbOpenId()) {
    body["TbOpenId"] = request.getTbOpenId();
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
    {"action" , "RemoveHotel"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/removeHotel")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveHotelResponse>();
}

/**
 * @summary 删除酒店项目
 *
 * @param request RemoveHotelRequest
 * @return RemoveHotelResponse
 */
RemoveHotelResponse Client::removeHotel(const RemoveHotelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  RemoveHotelHeaders headers = RemoveHotelHeaders();
  return removeHotelWithOptions(request, headers, runtime);
}

/**
 * @summary 重置欢迎语信息
 *
 * @param request ResetWelcomeTextAndMusicRequest
 * @param headers ResetWelcomeTextAndMusicHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetWelcomeTextAndMusicResponse
 */
ResetWelcomeTextAndMusicResponse Client::resetWelcomeTextAndMusicWithOptions(const ResetWelcomeTextAndMusicRequest &request, const ResetWelcomeTextAndMusicHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasHotelId()) {
    body["HotelId"] = request.getHotelId();
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
    {"action" , "ResetWelcomeTextAndMusic"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/resetWelcomeTextAndMusic")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResetWelcomeTextAndMusicResponse>();
}

/**
 * @summary 重置欢迎语信息
 *
 * @param request ResetWelcomeTextAndMusicRequest
 * @return ResetWelcomeTextAndMusicResponse
 */
ResetWelcomeTextAndMusicResponse Client::resetWelcomeTextAndMusic(const ResetWelcomeTextAndMusicRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ResetWelcomeTextAndMusicHeaders headers = ResetWelcomeTextAndMusicHeaders();
  return resetWelcomeTextAndMusicWithOptions(request, headers, runtime);
}

/**
 * @summary 退房
 *
 * @param tmpReq RoomCheckOutRequest
 * @param headers RoomCheckOutHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return RoomCheckOutResponse
 */
RoomCheckOutResponse Client::roomCheckOutWithOptions(const RoomCheckOutRequest &tmpReq, const RoomCheckOutHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RoomCheckOutShrinkRequest request = RoomCheckOutShrinkRequest();
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
    {"action" , "RoomCheckOut"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/roomCheckOut")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RoomCheckOutResponse>();
}

/**
 * @summary 退房
 *
 * @param request RoomCheckOutRequest
 * @return RoomCheckOutResponse
 */
RoomCheckOutResponse Client::roomCheckOut(const RoomCheckOutRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  RoomCheckOutHeaders headers = RoomCheckOutHeaders();
  return roomCheckOutWithOptions(request, headers, runtime);
}

/**
 * @summary 提交酒店订单
 *
 * @param tmpReq SubmitHotelOrderRequest
 * @param headers SubmitHotelOrderHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitHotelOrderResponse
 */
SubmitHotelOrderResponse Client::submitHotelOrderWithOptions(const SubmitHotelOrderRequest &tmpReq, const SubmitHotelOrderHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SubmitHotelOrderShrinkRequest request = SubmitHotelOrderShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPayload()) {
    request.setPayloadShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPayload(), "Payload", "json"));
  }

  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserInfo(), "UserInfo", "json"));
  }

  json query = {};
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
    {"action" , "SubmitHotelOrder"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/submitHotelOrder")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitHotelOrderResponse>();
}

/**
 * @summary 提交酒店订单
 *
 * @param request SubmitHotelOrderRequest
 * @return SubmitHotelOrderResponse
 */
SubmitHotelOrderResponse Client::submitHotelOrder(const SubmitHotelOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  SubmitHotelOrderHeaders headers = SubmitHotelOrderHeaders();
  return submitHotelOrderWithOptions(request, headers, runtime);
}

/**
 * @summary 同步客控设备状态到主控设备
 *
 * @param request SyncDeviceStatusWithAkRequest
 * @param headers SyncDeviceStatusWithAkHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return SyncDeviceStatusWithAkResponse
 */
SyncDeviceStatusWithAkResponse Client::syncDeviceStatusWithAkWithOptions(const SyncDeviceStatusWithAkRequest &request, const SyncDeviceStatusWithAkHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCategoryCnName()) {
    body["CategoryCnName"] = request.getCategoryCnName();
  }

  if (!!request.hasCategoryEnName()) {
    body["CategoryEnName"] = request.getCategoryEnName();
  }

  if (!!request.hasDeviceName()) {
    body["DeviceName"] = request.getDeviceName();
  }

  if (!!request.hasHotelId()) {
    body["HotelId"] = request.getHotelId();
  }

  if (!!request.hasLocation()) {
    body["Location"] = request.getLocation();
  }

  if (!!request.hasLocationCnName()) {
    body["LocationCnName"] = request.getLocationCnName();
  }

  if (!!request.hasNumber()) {
    body["Number"] = request.getNumber();
  }

  if (!!request.hasRoomNo()) {
    body["RoomNo"] = request.getRoomNo();
  }

  if (!!request.hasSwitch()) {
    body["Switch"] = request.getSwitch();
  }

  if (!!request.hasFanSpeed()) {
    body["fanSpeed"] = request.getFanSpeed();
  }

  if (!!request.hasMode()) {
    body["mode"] = request.getMode();
  }

  if (!!request.hasRoomTemperature()) {
    body["roomTemperature"] = request.getRoomTemperature();
  }

  if (!!request.hasTemperature()) {
    body["temperature"] = request.getTemperature();
  }

  if (!!request.hasValue()) {
    body["value"] = request.getValue();
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
    {"action" , "SyncDeviceStatusWithAk"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/syncDeviceStatusWithAk")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SyncDeviceStatusWithAkResponse>();
}

/**
 * @summary 同步客控设备状态到主控设备
 *
 * @param request SyncDeviceStatusWithAkRequest
 * @return SyncDeviceStatusWithAkResponse
 */
SyncDeviceStatusWithAkResponse Client::syncDeviceStatusWithAk(const SyncDeviceStatusWithAkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  SyncDeviceStatusWithAkHeaders headers = SyncDeviceStatusWithAkHeaders();
  return syncDeviceStatusWithAkWithOptions(request, headers, runtime);
}

/**
 * @summary 修改基础信息问答
 *
 * @param request UpdateBasicInfoQARequest
 * @param headers UpdateBasicInfoQAHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateBasicInfoQAResponse
 */
UpdateBasicInfoQAResponse Client::updateBasicInfoQAWithOptions(const UpdateBasicInfoQARequest &request, const UpdateBasicInfoQAHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCheckInTime()) {
    body["CheckInTime"] = request.getCheckInTime();
  }

  if (!!request.hasCheckOutTime()) {
    body["CheckOutTime"] = request.getCheckOutTime();
  }

  if (!!request.hasHotelAddress()) {
    body["HotelAddress"] = request.getHotelAddress();
  }

  if (!!request.hasHotelId()) {
    body["HotelId"] = request.getHotelId();
  }

  if (!!request.hasHotelIntroduction()) {
    body["HotelIntroduction"] = request.getHotelIntroduction();
  }

  if (!!request.hasHotelMember()) {
    body["HotelMember"] = request.getHotelMember();
  }

  if (!!request.hasHotelService()) {
    body["HotelService"] = request.getHotelService();
  }

  if (!!request.hasParkingExpenses()) {
    body["ParkingExpenses"] = request.getParkingExpenses();
  }

  if (!!request.hasParkingPosition()) {
    body["ParkingPosition"] = request.getParkingPosition();
  }

  if (!!request.hasPhoneNumber()) {
    body["PhoneNumber"] = request.getPhoneNumber();
  }

  if (!!request.hasWifiName()) {
    body["WifiName"] = request.getWifiName();
  }

  if (!!request.hasWifiPassword()) {
    body["WifiPassword"] = request.getWifiPassword();
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
    {"action" , "UpdateBasicInfoQA"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/updateBasicInfoQA")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateBasicInfoQAResponse>();
}

/**
 * @summary 修改基础信息问答
 *
 * @param request UpdateBasicInfoQARequest
 * @return UpdateBasicInfoQAResponse
 */
UpdateBasicInfoQAResponse Client::updateBasicInfoQA(const UpdateBasicInfoQARequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  UpdateBasicInfoQAHeaders headers = UpdateBasicInfoQAHeaders();
  return updateBasicInfoQAWithOptions(request, headers, runtime);
}

/**
 * @summary 修改自定义问答
 *
 * @param tmpReq UpdateCustomQARequest
 * @param headers UpdateCustomQAHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCustomQAResponse
 */
UpdateCustomQAResponse Client::updateCustomQAWithOptions(const UpdateCustomQARequest &tmpReq, const UpdateCustomQAHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateCustomQAShrinkRequest request = UpdateCustomQAShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAnswers()) {
    request.setAnswersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAnswers(), "Answers", "json"));
  }

  if (!!tmpReq.hasKeyWords()) {
    request.setKeyWordsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getKeyWords(), "KeyWords", "json"));
  }

  if (!!tmpReq.hasSupplementaryQuestions()) {
    request.setSupplementaryQuestionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSupplementaryQuestions(), "SupplementaryQuestions", "json"));
  }

  json body = {};
  if (!!request.hasAnswersShrink()) {
    body["Answers"] = request.getAnswersShrink();
  }

  if (!!request.hasCustomQAId()) {
    body["CustomQAId"] = request.getCustomQAId();
  }

  if (!!request.hasHotelId()) {
    body["HotelId"] = request.getHotelId();
  }

  if (!!request.hasKeyWordsShrink()) {
    body["KeyWords"] = request.getKeyWordsShrink();
  }

  if (!!request.hasMajorQuestion()) {
    body["MajorQuestion"] = request.getMajorQuestion();
  }

  if (!!request.hasSupplementaryQuestionsShrink()) {
    body["SupplementaryQuestions"] = request.getSupplementaryQuestionsShrink();
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
    {"action" , "UpdateCustomQA"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/updateCustomQA")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCustomQAResponse>();
}

/**
 * @summary 修改自定义问答
 *
 * @param request UpdateCustomQARequest
 * @return UpdateCustomQAResponse
 */
UpdateCustomQAResponse Client::updateCustomQA(const UpdateCustomQARequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  UpdateCustomQAHeaders headers = UpdateCustomQAHeaders();
  return updateCustomQAWithOptions(request, headers, runtime);
}

/**
 * @summary 修改酒店项目
 *
 * @param tmpReq UpdateHotelRequest
 * @param headers UpdateHotelHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateHotelResponse
 */
UpdateHotelResponse Client::updateHotelWithOptions(const UpdateHotelRequest &tmpReq, const UpdateHotelHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateHotelShrinkRequest request = UpdateHotelShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRelatedPks()) {
    request.setRelatedPksShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRelatedPks(), "RelatedPks", "json"));
  }

  json body = {};
  if (!!request.hasAppKey()) {
    body["AppKey"] = request.getAppKey();
  }

  if (!!request.hasEstOpenTime()) {
    body["EstOpenTime"] = request.getEstOpenTime();
  }

  if (!!request.hasHotelAddress()) {
    body["HotelAddress"] = request.getHotelAddress();
  }

  if (!!request.hasHotelEmail()) {
    body["HotelEmail"] = request.getHotelEmail();
  }

  if (!!request.hasHotelId()) {
    body["HotelId"] = request.getHotelId();
  }

  if (!!request.hasHotelName()) {
    body["HotelName"] = request.getHotelName();
  }

  if (!!request.hasPhoneNumber()) {
    body["PhoneNumber"] = request.getPhoneNumber();
  }

  if (!!request.hasRelatedPksShrink()) {
    body["RelatedPks"] = request.getRelatedPksShrink();
  }

  if (!!request.hasRemark()) {
    body["Remark"] = request.getRemark();
  }

  if (!!request.hasRoomNum()) {
    body["RoomNum"] = request.getRoomNum();
  }

  if (!!request.hasTbOpenId()) {
    body["TbOpenId"] = request.getTbOpenId();
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
    {"action" , "UpdateHotel"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/updateHotel")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateHotelResponse>();
}

/**
 * @summary 修改酒店项目
 *
 * @param request UpdateHotelRequest
 * @return UpdateHotelResponse
 */
UpdateHotelResponse Client::updateHotel(const UpdateHotelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  UpdateHotelHeaders headers = UpdateHotelHeaders();
  return updateHotelWithOptions(request, headers, runtime);
}

/**
 * @summary 修改酒店闹钟
 *
 * @param tmpReq UpdateHotelAlarmRequest
 * @param headers UpdateHotelAlarmHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateHotelAlarmResponse
 */
UpdateHotelAlarmResponse Client::updateHotelAlarmWithOptions(const UpdateHotelAlarmRequest &tmpReq, const UpdateHotelAlarmHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateHotelAlarmShrinkRequest request = UpdateHotelAlarmShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAlarms()) {
    request.setAlarmsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAlarms(), "Alarms", "json"));
  }

  if (!!tmpReq.hasScheduleInfo()) {
    request.setScheduleInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getScheduleInfo(), "ScheduleInfo", "json"));
  }

  json body = {};
  if (!!request.hasAlarmsShrink()) {
    body["Alarms"] = request.getAlarmsShrink();
  }

  if (!!request.hasHotelId()) {
    body["HotelId"] = request.getHotelId();
  }

  if (!!request.hasScheduleInfoShrink()) {
    body["ScheduleInfo"] = request.getScheduleInfoShrink();
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
    {"action" , "UpdateHotelAlarm"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/updateHotelAlarm")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateHotelAlarmResponse>();
}

/**
 * @summary 修改酒店闹钟
 *
 * @param request UpdateHotelAlarmRequest
 * @return UpdateHotelAlarmResponse
 */
UpdateHotelAlarmResponse Client::updateHotelAlarm(const UpdateHotelAlarmRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  UpdateHotelAlarmHeaders headers = UpdateHotelAlarmHeaders();
  return updateHotelAlarmWithOptions(request, headers, runtime);
}

/**
 * @summary 酒店场景预订编辑
 *
 * @param tmpReq UpdateHotelSceneBookItemRequest
 * @param headers UpdateHotelSceneBookItemHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateHotelSceneBookItemResponse
 */
UpdateHotelSceneBookItemResponse Client::updateHotelSceneBookItemWithOptions(const UpdateHotelSceneBookItemRequest &tmpReq, const UpdateHotelSceneBookItemHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateHotelSceneBookItemShrinkRequest request = UpdateHotelSceneBookItemShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUpdateHotelSceneBookReq()) {
    request.setUpdateHotelSceneBookReqShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUpdateHotelSceneBookReq(), "UpdateHotelSceneBookReq", "json"));
  }

  json query = {};
  if (!!request.hasUpdateHotelSceneBookReqShrink()) {
    query["UpdateHotelSceneBookReq"] = request.getUpdateHotelSceneBookReqShrink();
  }

  json body = {};
  if (!!request.hasHotelId()) {
    body["HotelId"] = request.getHotelId();
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
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateHotelSceneBookItem"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/updateHotelSceneBookItem")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateHotelSceneBookItemResponse>();
}

/**
 * @summary 酒店场景预订编辑
 *
 * @param request UpdateHotelSceneBookItemRequest
 * @return UpdateHotelSceneBookItemResponse
 */
UpdateHotelSceneBookItemResponse Client::updateHotelSceneBookItem(const UpdateHotelSceneBookItemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  UpdateHotelSceneBookItemHeaders headers = UpdateHotelSceneBookItemHeaders();
  return updateHotelSceneBookItemWithOptions(request, headers, runtime);
}

/**
 * @summary 酒店场景修改（开启/关闭/编辑）
 *
 * @param tmpReq UpdateHotelSceneItemRequest
 * @param headers UpdateHotelSceneItemHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateHotelSceneItemResponse
 */
UpdateHotelSceneItemResponse Client::updateHotelSceneItemWithOptions(const UpdateHotelSceneItemRequest &tmpReq, const UpdateHotelSceneItemHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateHotelSceneItemShrinkRequest request = UpdateHotelSceneItemShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUpdateHotelSceneOperateReq()) {
    request.setUpdateHotelSceneOperateReqShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUpdateHotelSceneOperateReq(), "UpdateHotelSceneOperateReq", "json"));
  }

  if (!!tmpReq.hasUpdateHotelSceneReq()) {
    request.setUpdateHotelSceneReqShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUpdateHotelSceneReq(), "UpdateHotelSceneReq", "json"));
  }

  json query = {};
  if (!!request.hasUpdateHotelSceneOperateReqShrink()) {
    query["UpdateHotelSceneOperateReq"] = request.getUpdateHotelSceneOperateReqShrink();
  }

  if (!!request.hasUpdateHotelSceneReqShrink()) {
    query["UpdateHotelSceneReq"] = request.getUpdateHotelSceneReqShrink();
  }

  json body = {};
  if (!!request.hasHotelId()) {
    body["HotelId"] = request.getHotelId();
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
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateHotelSceneItem"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/updateHotelSceneItem")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateHotelSceneItemResponse>();
}

/**
 * @summary 酒店场景修改（开启/关闭/编辑）
 *
 * @param request UpdateHotelSceneItemRequest
 * @return UpdateHotelSceneItemResponse
 */
UpdateHotelSceneItemResponse Client::updateHotelSceneItem(const UpdateHotelSceneItemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  UpdateHotelSceneItemHeaders headers = UpdateHotelSceneItemHeaders();
  return updateHotelSceneItemWithOptions(request, headers, runtime);
}

/**
 * @summary 更新消息通知模板
 *
 * @param request UpdateMessageTemplateRequest
 * @param headers UpdateMessageTemplateHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMessageTemplateResponse
 */
UpdateMessageTemplateResponse Client::updateMessageTemplateWithOptions(const UpdateMessageTemplateRequest &request, const UpdateMessageTemplateHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasTemplateDetail()) {
    body["TemplateDetail"] = request.getTemplateDetail();
  }

  if (!!request.hasTemplateId()) {
    body["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasTemplateName()) {
    body["TemplateName"] = request.getTemplateName();
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
    {"action" , "UpdateMessageTemplate"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/updateMessageTemplate")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMessageTemplateResponse>();
}

/**
 * @summary 更新消息通知模板
 *
 * @param request UpdateMessageTemplateRequest
 * @return UpdateMessageTemplateResponse
 */
UpdateMessageTemplateResponse Client::updateMessageTemplate(const UpdateMessageTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  UpdateMessageTemplateHeaders headers = UpdateMessageTemplateHeaders();
  return updateMessageTemplateWithOptions(request, headers, runtime);
}

/**
 * @summary 修改酒店自定义rcu场景
 *
 * @param tmpReq UpdateRcuSceneRequest
 * @param headers UpdateRcuSceneHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRcuSceneResponse
 */
UpdateRcuSceneResponse Client::updateRcuSceneWithOptions(const UpdateRcuSceneRequest &tmpReq, const UpdateRcuSceneHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateRcuSceneShrinkRequest request = UpdateRcuSceneShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSceneRelationExtDTO()) {
    request.setSceneRelationExtDTOShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSceneRelationExtDTO(), "SceneRelationExtDTO", "json"));
  }

  json body = {};
  if (!!request.hasHotelId()) {
    body["HotelId"] = request.getHotelId();
  }

  if (!!request.hasSceneId()) {
    body["SceneId"] = request.getSceneId();
  }

  if (!!request.hasSceneRelationExtDTOShrink()) {
    body["SceneRelationExtDTO"] = request.getSceneRelationExtDTOShrink();
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
    {"action" , "UpdateRcuScene"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/updateRcuScene")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRcuSceneResponse>();
}

/**
 * @summary 修改酒店自定义rcu场景
 *
 * @param request UpdateRcuSceneRequest
 * @return UpdateRcuSceneResponse
 */
UpdateRcuSceneResponse Client::updateRcuScene(const UpdateRcuSceneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  UpdateRcuSceneHeaders headers = UpdateRcuSceneHeaders();
  return updateRcuSceneWithOptions(request, headers, runtime);
}

/**
 * @summary 修改服务设施问答
 *
 * @param request UpdateServiceQARequest
 * @param headers UpdateServiceQAHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateServiceQAResponse
 */
UpdateServiceQAResponse Client::updateServiceQAWithOptions(const UpdateServiceQARequest &request, const UpdateServiceQAHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAnswer()) {
    body["Answer"] = request.getAnswer();
  }

  if (!!request.hasHotelId()) {
    body["HotelId"] = request.getHotelId();
  }

  if (!!request.hasServiceQAId()) {
    body["ServiceQAId"] = request.getServiceQAId();
  }

  if (!!request.hasIsActive()) {
    body["isActive"] = request.getIsActive();
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
    {"action" , "UpdateServiceQA"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/updateServiceQA")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateServiceQAResponse>();
}

/**
 * @summary 修改服务设施问答
 *
 * @param request UpdateServiceQARequest
 * @return UpdateServiceQAResponse
 */
UpdateServiceQAResponse Client::updateServiceQA(const UpdateServiceQARequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  UpdateServiceQAHeaders headers = UpdateServiceQAHeaders();
  return updateServiceQAWithOptions(request, headers, runtime);
}

/**
 * @summary 修改工单
 *
 * @param request UpdateTicketRequest
 * @param headers UpdateTicketHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTicketResponse
 */
UpdateTicketResponse Client::updateTicketWithOptions(const UpdateTicketRequest &request, const UpdateTicketHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasGroupKey()) {
    body["GroupKey"] = request.getGroupKey();
  }

  if (!!request.hasHotelId()) {
    body["HotelId"] = request.getHotelId();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.getStatus();
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
    {"action" , "UpdateTicket"},
    {"version" , "ip_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ip/updateTicket")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTicketResponse>();
}

/**
 * @summary 修改工单
 *
 * @param request UpdateTicketRequest
 * @return UpdateTicketResponse
 */
UpdateTicketResponse Client::updateTicket(const UpdateTicketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  UpdateTicketHeaders headers = UpdateTicketHeaders();
  return updateTicketWithOptions(request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0