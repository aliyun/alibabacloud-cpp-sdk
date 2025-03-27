// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/ali_genieip_10.hpp>
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

using namespace Alibabacloud_AliGenieip10;

Alibabacloud_AliGenieip10::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("aligenie"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_AliGenieip10::Client::getEndpoint(shared_ptr<string> productId,
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

AddCartoonResponse Alibabacloud_AliGenieip10::Client::addCartoonWithOptions(shared_ptr<AddCartoonRequest> request, shared_ptr<AddCartoonHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelId)) {
    body->insert(pair<string, string>("HotelId", *request->hotelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startVideoMd5)) {
    body->insert(pair<string, string>("StartVideoMd5", *request->startVideoMd5));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startVideoUrl)) {
    body->insert(pair<string, string>("StartVideoUrl", *request->startVideoUrl));
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
    {"action", boost::any(string("AddCartoon"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/addCartoon"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return AddCartoonResponse(callApi(params, req, runtime));
  }
  else {
    return AddCartoonResponse(execute(params, req, runtime));
  }
}

AddCartoonResponse Alibabacloud_AliGenieip10::Client::addCartoon(shared_ptr<AddCartoonRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<AddCartoonHeaders> headers = make_shared<AddCartoonHeaders>();
  return addCartoonWithOptions(request, headers, runtime);
}

AddCustomQAResponse Alibabacloud_AliGenieip10::Client::addCustomQAWithOptions(shared_ptr<AddCustomQARequest> tmpReq, shared_ptr<AddCustomQAHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<AddCustomQAShrinkRequest> request = make_shared<AddCustomQAShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->answers)) {
    request->answersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->answers, make_shared<string>("Answers"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->keyWords)) {
    request->keyWordsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->keyWords, make_shared<string>("KeyWords"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->supplementaryQuestions)) {
    request->supplementaryQuestionsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->supplementaryQuestions, make_shared<string>("SupplementaryQuestions"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->answersShrink)) {
    body->insert(pair<string, string>("Answers", *request->answersShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelId)) {
    body->insert(pair<string, string>("HotelId", *request->hotelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyWordsShrink)) {
    body->insert(pair<string, string>("KeyWords", *request->keyWordsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->majorQuestion)) {
    body->insert(pair<string, string>("MajorQuestion", *request->majorQuestion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->supplementaryQuestionsShrink)) {
    body->insert(pair<string, string>("SupplementaryQuestions", *request->supplementaryQuestionsShrink));
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
    {"action", boost::any(string("AddCustomQA"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/addCustomQA"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return AddCustomQAResponse(callApi(params, req, runtime));
  }
  else {
    return AddCustomQAResponse(execute(params, req, runtime));
  }
}

AddCustomQAResponse Alibabacloud_AliGenieip10::Client::addCustomQA(shared_ptr<AddCustomQARequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<AddCustomQAHeaders> headers = make_shared<AddCustomQAHeaders>();
  return addCustomQAWithOptions(request, headers, runtime);
}

AddCustomQAV2Response Alibabacloud_AliGenieip10::Client::addCustomQAV2WithOptions(shared_ptr<AddCustomQAV2Request> tmpReq, shared_ptr<AddCustomQAV2Headers> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<AddCustomQAV2ShrinkRequest> request = make_shared<AddCustomQAV2ShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->answers)) {
    request->answersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->answers, make_shared<string>("Answers"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->keyWords)) {
    request->keyWordsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->keyWords, make_shared<string>("KeyWords"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->supplementaryQuestions)) {
    request->supplementaryQuestionsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->supplementaryQuestions, make_shared<string>("SupplementaryQuestions"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->answersShrink)) {
    body->insert(pair<string, string>("Answers", *request->answersShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelId)) {
    body->insert(pair<string, string>("HotelId", *request->hotelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyWordsShrink)) {
    body->insert(pair<string, string>("KeyWords", *request->keyWordsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->majorQuestion)) {
    body->insert(pair<string, string>("MajorQuestion", *request->majorQuestion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->supplementaryQuestionsShrink)) {
    body->insert(pair<string, string>("SupplementaryQuestions", *request->supplementaryQuestionsShrink));
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
    {"action", boost::any(string("AddCustomQAV2"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/addQAV2"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return AddCustomQAV2Response(callApi(params, req, runtime));
  }
  else {
    return AddCustomQAV2Response(execute(params, req, runtime));
  }
}

AddCustomQAV2Response Alibabacloud_AliGenieip10::Client::addCustomQAV2(shared_ptr<AddCustomQAV2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<AddCustomQAV2Headers> headers = make_shared<AddCustomQAV2Headers>();
  return addCustomQAV2WithOptions(request, headers, runtime);
}

AddMessageTemplateResponse Alibabacloud_AliGenieip10::Client::addMessageTemplateWithOptions(shared_ptr<AddMessageTemplateRequest> request, shared_ptr<AddMessageTemplateHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->templateDetail)) {
    body->insert(pair<string, string>("TemplateDetail", *request->templateDetail));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateName)) {
    body->insert(pair<string, string>("TemplateName", *request->templateName));
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
    {"action", boost::any(string("AddMessageTemplate"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/addMessageTemplate"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return AddMessageTemplateResponse(callApi(params, req, runtime));
  }
  else {
    return AddMessageTemplateResponse(execute(params, req, runtime));
  }
}

AddMessageTemplateResponse Alibabacloud_AliGenieip10::Client::addMessageTemplate(shared_ptr<AddMessageTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<AddMessageTemplateHeaders> headers = make_shared<AddMessageTemplateHeaders>();
  return addMessageTemplateWithOptions(request, headers, runtime);
}

AddOrUpdateDisPlayModesResponse Alibabacloud_AliGenieip10::Client::addOrUpdateDisPlayModesWithOptions(shared_ptr<AddOrUpdateDisPlayModesRequest> tmpReq, shared_ptr<AddOrUpdateDisPlayModesHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<AddOrUpdateDisPlayModesShrinkRequest> request = make_shared<AddOrUpdateDisPlayModesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->hotelDeviceModeList)) {
    request->hotelDeviceModeListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->hotelDeviceModeList, make_shared<string>("HotelDeviceModeList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelDeviceModeListShrink)) {
    body->insert(pair<string, string>("HotelDeviceModeList", *request->hotelDeviceModeListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelId)) {
    body->insert(pair<string, string>("HotelId", *request->hotelId));
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
    {"action", boost::any(string("AddOrUpdateDisPlayModes"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/addOrUpdateDisPlayModes"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return AddOrUpdateDisPlayModesResponse(callApi(params, req, runtime));
  }
  else {
    return AddOrUpdateDisPlayModesResponse(execute(params, req, runtime));
  }
}

AddOrUpdateDisPlayModesResponse Alibabacloud_AliGenieip10::Client::addOrUpdateDisPlayModes(shared_ptr<AddOrUpdateDisPlayModesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<AddOrUpdateDisPlayModesHeaders> headers = make_shared<AddOrUpdateDisPlayModesHeaders>();
  return addOrUpdateDisPlayModesWithOptions(request, headers, runtime);
}

AddOrUpdateHotelSettingResponse Alibabacloud_AliGenieip10::Client::addOrUpdateHotelSettingWithOptions(shared_ptr<AddOrUpdateHotelSettingRequest> tmpReq, shared_ptr<AddOrUpdateHotelSettingHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<AddOrUpdateHotelSettingShrinkRequest> request = make_shared<AddOrUpdateHotelSettingShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->hotelDeviceModeList)) {
    request->hotelDeviceModeListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->hotelDeviceModeList, make_shared<string>("HotelDeviceModeList"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<AddOrUpdateHotelSettingRequestHotelScreenSaver>(tmpReq->hotelScreenSaver)) {
    request->hotelScreenSaverShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->hotelScreenSaver, make_shared<string>("HotelScreenSaver"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<AddOrUpdateHotelSettingRequestNightMode>(tmpReq->nightMode)) {
    request->nightModeShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->nightMode, make_shared<string>("NightMode"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelDeviceModeListShrink)) {
    body->insert(pair<string, string>("HotelDeviceModeList", *request->hotelDeviceModeListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelId)) {
    body->insert(pair<string, string>("HotelId", *request->hotelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelScreenSaverShrink)) {
    body->insert(pair<string, string>("HotelScreenSaver", *request->hotelScreenSaverShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nightModeShrink)) {
    body->insert(pair<string, string>("NightMode", *request->nightModeShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->settingType)) {
    body->insert(pair<string, string>("SettingType", *request->settingType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->value)) {
    body->insert(pair<string, string>("Value", *request->value));
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
    {"action", boost::any(string("AddOrUpdateHotelSetting"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/addOrUpdateHotelSetting"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return AddOrUpdateHotelSettingResponse(callApi(params, req, runtime));
  }
  else {
    return AddOrUpdateHotelSettingResponse(execute(params, req, runtime));
  }
}

AddOrUpdateHotelSettingResponse Alibabacloud_AliGenieip10::Client::addOrUpdateHotelSetting(shared_ptr<AddOrUpdateHotelSettingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<AddOrUpdateHotelSettingHeaders> headers = make_shared<AddOrUpdateHotelSettingHeaders>();
  return addOrUpdateHotelSettingWithOptions(request, headers, runtime);
}

AddOrUpdateScreenSaverResponse Alibabacloud_AliGenieip10::Client::addOrUpdateScreenSaverWithOptions(shared_ptr<AddOrUpdateScreenSaverRequest> tmpReq, shared_ptr<AddOrUpdateScreenSaverHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<AddOrUpdateScreenSaverShrinkRequest> request = make_shared<AddOrUpdateScreenSaverShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<AddOrUpdateScreenSaverRequestHotelScreenSaver>(tmpReq->hotelScreenSaver)) {
    request->hotelScreenSaverShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->hotelScreenSaver, make_shared<string>("HotelScreenSaver"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelId)) {
    body->insert(pair<string, string>("HotelId", *request->hotelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelScreenSaverShrink)) {
    body->insert(pair<string, string>("HotelScreenSaver", *request->hotelScreenSaverShrink));
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
    {"action", boost::any(string("AddOrUpdateScreenSaver"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/addOrUpdateScreenSaver"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return AddOrUpdateScreenSaverResponse(callApi(params, req, runtime));
  }
  else {
    return AddOrUpdateScreenSaverResponse(execute(params, req, runtime));
  }
}

AddOrUpdateScreenSaverResponse Alibabacloud_AliGenieip10::Client::addOrUpdateScreenSaver(shared_ptr<AddOrUpdateScreenSaverRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<AddOrUpdateScreenSaverHeaders> headers = make_shared<AddOrUpdateScreenSaverHeaders>();
  return addOrUpdateScreenSaverWithOptions(request, headers, runtime);
}

AddOrUpdateWelcomeTextResponse Alibabacloud_AliGenieip10::Client::addOrUpdateWelcomeTextWithOptions(shared_ptr<AddOrUpdateWelcomeTextRequest> request, shared_ptr<AddOrUpdateWelcomeTextHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelId)) {
    body->insert(pair<string, string>("HotelId", *request->hotelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->musicUrl)) {
    body->insert(pair<string, string>("MusicUrl", *request->musicUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->welcomeText)) {
    body->insert(pair<string, string>("WelcomeText", *request->welcomeText));
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
    {"action", boost::any(string("AddOrUpdateWelcomeText"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/addOrUpdateWelcomeText"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return AddOrUpdateWelcomeTextResponse(callApi(params, req, runtime));
  }
  else {
    return AddOrUpdateWelcomeTextResponse(execute(params, req, runtime));
  }
}

AddOrUpdateWelcomeTextResponse Alibabacloud_AliGenieip10::Client::addOrUpdateWelcomeText(shared_ptr<AddOrUpdateWelcomeTextRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<AddOrUpdateWelcomeTextHeaders> headers = make_shared<AddOrUpdateWelcomeTextHeaders>();
  return addOrUpdateWelcomeTextWithOptions(request, headers, runtime);
}

AuditHotelResponse Alibabacloud_AliGenieip10::Client::auditHotelWithOptions(shared_ptr<AuditHotelRequest> tmpReq, shared_ptr<AuditHotelHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<AuditHotelShrinkRequest> request = make_shared<AuditHotelShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<AuditHotelRequestAuditHotelReq>(tmpReq->auditHotelReq)) {
    request->auditHotelReqShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->auditHotelReq, make_shared<string>("AuditHotelReq"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->auditHotelReqShrink)) {
    query->insert(pair<string, string>("AuditHotelReq", *request->auditHotelReqShrink));
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
    {"action", boost::any(string("AuditHotel"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/auditHotel"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return AuditHotelResponse(callApi(params, req, runtime));
  }
  else {
    return AuditHotelResponse(execute(params, req, runtime));
  }
}

AuditHotelResponse Alibabacloud_AliGenieip10::Client::auditHotel(shared_ptr<AuditHotelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<AuditHotelHeaders> headers = make_shared<AuditHotelHeaders>();
  return auditHotelWithOptions(request, headers, runtime);
}

BatchAddHotelRoomResponse Alibabacloud_AliGenieip10::Client::batchAddHotelRoomWithOptions(shared_ptr<BatchAddHotelRoomRequest> tmpReq, shared_ptr<BatchAddHotelRoomHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<BatchAddHotelRoomShrinkRequest> request = make_shared<BatchAddHotelRoomShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->roomNoList)) {
    request->roomNoListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->roomNoList, make_shared<string>("RoomNoList"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelId)) {
    body->insert(pair<string, string>("HotelId", *request->hotelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roomNoListShrink)) {
    body->insert(pair<string, string>("RoomNoList", *request->roomNoListShrink));
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
    {"action", boost::any(string("BatchAddHotelRoom"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/batchAddHotelRoom"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return BatchAddHotelRoomResponse(callApi(params, req, runtime));
  }
  else {
    return BatchAddHotelRoomResponse(execute(params, req, runtime));
  }
}

BatchAddHotelRoomResponse Alibabacloud_AliGenieip10::Client::batchAddHotelRoom(shared_ptr<BatchAddHotelRoomRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<BatchAddHotelRoomHeaders> headers = make_shared<BatchAddHotelRoomHeaders>();
  return batchAddHotelRoomWithOptions(request, headers, runtime);
}

BatchDeleteHotelRoomResponse Alibabacloud_AliGenieip10::Client::batchDeleteHotelRoomWithOptions(shared_ptr<BatchDeleteHotelRoomRequest> tmpReq, shared_ptr<BatchDeleteHotelRoomHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<BatchDeleteHotelRoomShrinkRequest> request = make_shared<BatchDeleteHotelRoomShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->roomNoList)) {
    request->roomNoListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->roomNoList, make_shared<string>("RoomNoList"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelId)) {
    body->insert(pair<string, string>("HotelId", *request->hotelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roomNoListShrink)) {
    body->insert(pair<string, string>("RoomNoList", *request->roomNoListShrink));
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
    {"action", boost::any(string("BatchDeleteHotelRoom"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/batchDeleteHotelRoom"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return BatchDeleteHotelRoomResponse(callApi(params, req, runtime));
  }
  else {
    return BatchDeleteHotelRoomResponse(execute(params, req, runtime));
  }
}

BatchDeleteHotelRoomResponse Alibabacloud_AliGenieip10::Client::batchDeleteHotelRoom(shared_ptr<BatchDeleteHotelRoomRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<BatchDeleteHotelRoomHeaders> headers = make_shared<BatchDeleteHotelRoomHeaders>();
  return batchDeleteHotelRoomWithOptions(request, headers, runtime);
}

CheckoutWithAKResponse Alibabacloud_AliGenieip10::Client::checkoutWithAKWithOptions(shared_ptr<CheckoutWithAKRequest> request, shared_ptr<CheckoutWithAKHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelId)) {
    body->insert(pair<string, string>("HotelId", *request->hotelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roomNo)) {
    body->insert(pair<string, string>("RoomNo", *request->roomNo));
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
    {"action", boost::any(string("CheckoutWithAK"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/checkoutWithAK"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CheckoutWithAKResponse(callApi(params, req, runtime));
  }
  else {
    return CheckoutWithAKResponse(execute(params, req, runtime));
  }
}

CheckoutWithAKResponse Alibabacloud_AliGenieip10::Client::checkoutWithAK(shared_ptr<CheckoutWithAKRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CheckoutWithAKHeaders> headers = make_shared<CheckoutWithAKHeaders>();
  return checkoutWithAKWithOptions(request, headers, runtime);
}

ChildAccountAuthResponse Alibabacloud_AliGenieip10::Client::childAccountAuthWithOptions(shared_ptr<ChildAccountAuthRequest> request, shared_ptr<ChildAccountAuthHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->account)) {
    body->insert(pair<string, string>("Account", *request->account));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appKey)) {
    body->insert(pair<string, string>("AppKey", *request->appKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelId)) {
    body->insert(pair<string, string>("HotelId", *request->hotelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tbOpenId)) {
    body->insert(pair<string, string>("TbOpenId", *request->tbOpenId));
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
    {"action", boost::any(string("ChildAccountAuth"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/childAccountAuth"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ChildAccountAuthResponse(callApi(params, req, runtime));
  }
  else {
    return ChildAccountAuthResponse(execute(params, req, runtime));
  }
}

ChildAccountAuthResponse Alibabacloud_AliGenieip10::Client::childAccountAuth(shared_ptr<ChildAccountAuthRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ChildAccountAuthHeaders> headers = make_shared<ChildAccountAuthHeaders>();
  return childAccountAuthWithOptions(request, headers, runtime);
}

ControlRoomDeviceResponse Alibabacloud_AliGenieip10::Client::controlRoomDeviceWithOptions(shared_ptr<ControlRoomDeviceRequest> tmpReq, shared_ptr<ControlRoomDeviceHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ControlRoomDeviceShrinkRequest> request = make_shared<ControlRoomDeviceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(tmpReq->properties)) {
    request->propertiesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->properties, make_shared<string>("Properties"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cmd)) {
    body->insert(pair<string, string>("Cmd", *request->cmd));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->deviceIndex)) {
    body->insert(pair<string, long>("DeviceIndex", *request->deviceIndex));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceNumber)) {
    body->insert(pair<string, string>("DeviceNumber", *request->deviceNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelId)) {
    body->insert(pair<string, string>("HotelId", *request->hotelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->propertiesShrink)) {
    body->insert(pair<string, string>("Properties", *request->propertiesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roomNo)) {
    body->insert(pair<string, string>("RoomNo", *request->roomNo));
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
    {"action", boost::any(string("ControlRoomDevice"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/controlRoomDevice"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ControlRoomDeviceResponse(callApi(params, req, runtime));
  }
  else {
    return ControlRoomDeviceResponse(execute(params, req, runtime));
  }
}

ControlRoomDeviceResponse Alibabacloud_AliGenieip10::Client::controlRoomDevice(shared_ptr<ControlRoomDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ControlRoomDeviceHeaders> headers = make_shared<ControlRoomDeviceHeaders>();
  return controlRoomDeviceWithOptions(request, headers, runtime);
}

CreateHotelResponse Alibabacloud_AliGenieip10::Client::createHotelWithOptions(shared_ptr<CreateHotelRequest> tmpReq, shared_ptr<CreateHotelHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateHotelShrinkRequest> request = make_shared<CreateHotelShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->relatedPks)) {
    request->relatedPksShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->relatedPks, make_shared<string>("RelatedPks"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appKey)) {
    body->insert(pair<string, string>("AppKey", *request->appKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->estOpenTime)) {
    body->insert(pair<string, string>("EstOpenTime", *request->estOpenTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelAddress)) {
    body->insert(pair<string, string>("HotelAddress", *request->hotelAddress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelEmail)) {
    body->insert(pair<string, string>("HotelEmail", *request->hotelEmail));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelName)) {
    body->insert(pair<string, string>("HotelName", *request->hotelName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNumber)) {
    body->insert(pair<string, string>("PhoneNumber", *request->phoneNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->relatedPk)) {
    body->insert(pair<string, string>("RelatedPk", *request->relatedPk));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->relatedPksShrink)) {
    body->insert(pair<string, string>("RelatedPks", *request->relatedPksShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remark)) {
    body->insert(pair<string, string>("Remark", *request->remark));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roomNum)) {
    body->insert(pair<string, long>("RoomNum", *request->roomNum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tbOpenId)) {
    body->insert(pair<string, string>("TbOpenId", *request->tbOpenId));
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
    {"action", boost::any(string("CreateHotel"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/createHotel"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateHotelResponse(callApi(params, req, runtime));
  }
  else {
    return CreateHotelResponse(execute(params, req, runtime));
  }
}

CreateHotelResponse Alibabacloud_AliGenieip10::Client::createHotel(shared_ptr<CreateHotelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CreateHotelHeaders> headers = make_shared<CreateHotelHeaders>();
  return createHotelWithOptions(request, headers, runtime);
}

CreateHotelAlarmResponse Alibabacloud_AliGenieip10::Client::createHotelAlarmWithOptions(shared_ptr<CreateHotelAlarmRequest> tmpReq, shared_ptr<CreateHotelAlarmHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateHotelAlarmShrinkRequest> request = make_shared<CreateHotelAlarmShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->rooms)) {
    request->roomsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->rooms, make_shared<string>("Rooms"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateHotelAlarmRequestScheduleInfo>(tmpReq->scheduleInfo)) {
    request->scheduleInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->scheduleInfo, make_shared<string>("ScheduleInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelId)) {
    body->insert(pair<string, string>("HotelId", *request->hotelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->musicType)) {
    body->insert(pair<string, string>("MusicType", *request->musicType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roomsShrink)) {
    body->insert(pair<string, string>("Rooms", *request->roomsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduleInfoShrink)) {
    body->insert(pair<string, string>("ScheduleInfo", *request->scheduleInfoShrink));
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
    {"action", boost::any(string("CreateHotelAlarm"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/createHotelAlarm"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateHotelAlarmResponse(callApi(params, req, runtime));
  }
  else {
    return CreateHotelAlarmResponse(execute(params, req, runtime));
  }
}

CreateHotelAlarmResponse Alibabacloud_AliGenieip10::Client::createHotelAlarm(shared_ptr<CreateHotelAlarmRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CreateHotelAlarmHeaders> headers = make_shared<CreateHotelAlarmHeaders>();
  return createHotelAlarmWithOptions(request, headers, runtime);
}

CreateRcuSceneResponse Alibabacloud_AliGenieip10::Client::createRcuSceneWithOptions(shared_ptr<CreateRcuSceneRequest> tmpReq, shared_ptr<CreateRcuSceneHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateRcuSceneShrinkRequest> request = make_shared<CreateRcuSceneShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateRcuSceneRequestSceneRelationExtDTO>(tmpReq->sceneRelationExtDTO)) {
    request->sceneRelationExtDTOShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->sceneRelationExtDTO, make_shared<string>("SceneRelationExtDTO"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelId)) {
    body->insert(pair<string, string>("HotelId", *request->hotelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneId)) {
    body->insert(pair<string, string>("SceneId", *request->sceneId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneRelationExtDTOShrink)) {
    body->insert(pair<string, string>("SceneRelationExtDTO", *request->sceneRelationExtDTOShrink));
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
    {"action", boost::any(string("CreateRcuScene"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/createRcuScene"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateRcuSceneResponse(callApi(params, req, runtime));
  }
  else {
    return CreateRcuSceneResponse(execute(params, req, runtime));
  }
}

CreateRcuSceneResponse Alibabacloud_AliGenieip10::Client::createRcuScene(shared_ptr<CreateRcuSceneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CreateRcuSceneHeaders> headers = make_shared<CreateRcuSceneHeaders>();
  return createRcuSceneWithOptions(request, headers, runtime);
}

DeleteCartoonResponse Alibabacloud_AliGenieip10::Client::deleteCartoonWithOptions(shared_ptr<DeleteCartoonRequest> request, shared_ptr<DeleteCartoonHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelId)) {
    body->insert(pair<string, string>("HotelId", *request->hotelId));
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
    {"action", boost::any(string("DeleteCartoon"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/deleteCartoon"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteCartoonResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteCartoonResponse(execute(params, req, runtime));
  }
}

DeleteCartoonResponse Alibabacloud_AliGenieip10::Client::deleteCartoon(shared_ptr<DeleteCartoonRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<DeleteCartoonHeaders> headers = make_shared<DeleteCartoonHeaders>();
  return deleteCartoonWithOptions(request, headers, runtime);
}

DeleteCustomQAResponse Alibabacloud_AliGenieip10::Client::deleteCustomQAWithOptions(shared_ptr<DeleteCustomQARequest> tmpReq, shared_ptr<DeleteCustomQAHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeleteCustomQAShrinkRequest> request = make_shared<DeleteCustomQAShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->customQAIds)) {
    request->customQAIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->customQAIds, make_shared<string>("CustomQAIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->customQAIdsShrink)) {
    body->insert(pair<string, string>("CustomQAIds", *request->customQAIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelId)) {
    body->insert(pair<string, string>("HotelId", *request->hotelId));
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
    {"action", boost::any(string("DeleteCustomQA"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/deleteCustomQA"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteCustomQAResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteCustomQAResponse(execute(params, req, runtime));
  }
}

DeleteCustomQAResponse Alibabacloud_AliGenieip10::Client::deleteCustomQA(shared_ptr<DeleteCustomQARequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<DeleteCustomQAHeaders> headers = make_shared<DeleteCustomQAHeaders>();
  return deleteCustomQAWithOptions(request, headers, runtime);
}

DeleteHotelAlarmResponse Alibabacloud_AliGenieip10::Client::deleteHotelAlarmWithOptions(shared_ptr<DeleteHotelAlarmRequest> tmpReq, shared_ptr<DeleteHotelAlarmHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeleteHotelAlarmShrinkRequest> request = make_shared<DeleteHotelAlarmShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<DeleteHotelAlarmRequestAlarms>>(tmpReq->alarms)) {
    request->alarmsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->alarms, make_shared<string>("Alarms"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alarmsShrink)) {
    body->insert(pair<string, string>("Alarms", *request->alarmsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelId)) {
    body->insert(pair<string, string>("HotelId", *request->hotelId));
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
    {"action", boost::any(string("DeleteHotelAlarm"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/deleteHotelAlarm"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteHotelAlarmResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteHotelAlarmResponse(execute(params, req, runtime));
  }
}

DeleteHotelAlarmResponse Alibabacloud_AliGenieip10::Client::deleteHotelAlarm(shared_ptr<DeleteHotelAlarmRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<DeleteHotelAlarmHeaders> headers = make_shared<DeleteHotelAlarmHeaders>();
  return deleteHotelAlarmWithOptions(request, headers, runtime);
}

DeleteHotelSceneBookItemResponse Alibabacloud_AliGenieip10::Client::deleteHotelSceneBookItemWithOptions(shared_ptr<DeleteHotelSceneBookItemRequest> request, shared_ptr<DeleteHotelSceneBookItemHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelId)) {
    body->insert(pair<string, string>("HotelId", *request->hotelId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
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
    {"action", boost::any(string("DeleteHotelSceneBookItem"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/deleteHotelSceneBookItem"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteHotelSceneBookItemResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteHotelSceneBookItemResponse(execute(params, req, runtime));
  }
}

DeleteHotelSceneBookItemResponse Alibabacloud_AliGenieip10::Client::deleteHotelSceneBookItem(shared_ptr<DeleteHotelSceneBookItemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<DeleteHotelSceneBookItemHeaders> headers = make_shared<DeleteHotelSceneBookItemHeaders>();
  return deleteHotelSceneBookItemWithOptions(request, headers, runtime);
}

DeleteHotelSettingResponse Alibabacloud_AliGenieip10::Client::deleteHotelSettingWithOptions(shared_ptr<DeleteHotelSettingRequest> request, shared_ptr<DeleteHotelSettingHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelId)) {
    body->insert(pair<string, string>("HotelId", *request->hotelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->settingType)) {
    body->insert(pair<string, string>("SettingType", *request->settingType));
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
    {"action", boost::any(string("DeleteHotelSetting"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/deleteHotelSetting"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteHotelSettingResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteHotelSettingResponse(execute(params, req, runtime));
  }
}

DeleteHotelSettingResponse Alibabacloud_AliGenieip10::Client::deleteHotelSetting(shared_ptr<DeleteHotelSettingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<DeleteHotelSettingHeaders> headers = make_shared<DeleteHotelSettingHeaders>();
  return deleteHotelSettingWithOptions(request, headers, runtime);
}

DeleteMessageTemplateResponse Alibabacloud_AliGenieip10::Client::deleteMessageTemplateWithOptions(shared_ptr<DeleteMessageTemplateRequest> request, shared_ptr<DeleteMessageTemplateHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->templateId)) {
    body->insert(pair<string, long>("TemplateId", *request->templateId));
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
    {"action", boost::any(string("DeleteMessageTemplate"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/deleteMessageTemplate"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteMessageTemplateResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteMessageTemplateResponse(execute(params, req, runtime));
  }
}

DeleteMessageTemplateResponse Alibabacloud_AliGenieip10::Client::deleteMessageTemplate(shared_ptr<DeleteMessageTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<DeleteMessageTemplateHeaders> headers = make_shared<DeleteMessageTemplateHeaders>();
  return deleteMessageTemplateWithOptions(request, headers, runtime);
}

DeleteRcuSceneResponse Alibabacloud_AliGenieip10::Client::deleteRcuSceneWithOptions(shared_ptr<DeleteRcuSceneRequest> request, shared_ptr<DeleteRcuSceneHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelId)) {
    body->insert(pair<string, string>("HotelId", *request->hotelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneId)) {
    body->insert(pair<string, string>("SceneId", *request->sceneId));
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
    {"action", boost::any(string("DeleteRcuScene"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/deleteRcuScene"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteRcuSceneResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteRcuSceneResponse(execute(params, req, runtime));
  }
}

DeleteRcuSceneResponse Alibabacloud_AliGenieip10::Client::deleteRcuScene(shared_ptr<DeleteRcuSceneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<DeleteRcuSceneHeaders> headers = make_shared<DeleteRcuSceneHeaders>();
  return deleteRcuSceneWithOptions(request, headers, runtime);
}

DeviceControlResponse Alibabacloud_AliGenieip10::Client::deviceControlWithOptions(shared_ptr<DeviceControlRequest> tmpReq, shared_ptr<DeviceControlHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeviceControlShrinkRequest> request = make_shared<DeviceControlShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<DeviceControlRequestPayload>(tmpReq->payload)) {
    request->payloadShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->payload, make_shared<string>("Payload"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<DeviceControlRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->userInfo, make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
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
    {"action", boost::any(string("DeviceControl"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/deviceControl"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeviceControlResponse(callApi(params, req, runtime));
  }
  else {
    return DeviceControlResponse(execute(params, req, runtime));
  }
}

DeviceControlResponse Alibabacloud_AliGenieip10::Client::deviceControl(shared_ptr<DeviceControlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<DeviceControlHeaders> headers = make_shared<DeviceControlHeaders>();
  return deviceControlWithOptions(request, headers, runtime);
}

ExecuteSceneResponse Alibabacloud_AliGenieip10::Client::executeSceneWithOptions(shared_ptr<ExecuteSceneRequest> request, shared_ptr<ExecuteSceneHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelId)) {
    body->insert(pair<string, string>("HotelId", *request->hotelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roomNo)) {
    body->insert(pair<string, string>("RoomNo", *request->roomNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneName)) {
    body->insert(pair<string, string>("SceneName", *request->sceneName));
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
    {"action", boost::any(string("ExecuteScene"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/executeScene"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ExecuteSceneResponse(callApi(params, req, runtime));
  }
  else {
    return ExecuteSceneResponse(execute(params, req, runtime));
  }
}

ExecuteSceneResponse Alibabacloud_AliGenieip10::Client::executeScene(shared_ptr<ExecuteSceneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ExecuteSceneHeaders> headers = make_shared<ExecuteSceneHeaders>();
  return executeSceneWithOptions(request, headers, runtime);
}

GetBasicInfoQAResponse Alibabacloud_AliGenieip10::Client::getBasicInfoQAWithOptions(shared_ptr<GetBasicInfoQARequest> request, shared_ptr<GetBasicInfoQAHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelId)) {
    body->insert(pair<string, string>("HotelId", *request->hotelId));
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
    {"action", boost::any(string("GetBasicInfoQA"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/getBasicInfoQA"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetBasicInfoQAResponse(callApi(params, req, runtime));
  }
  else {
    return GetBasicInfoQAResponse(execute(params, req, runtime));
  }
}

GetBasicInfoQAResponse Alibabacloud_AliGenieip10::Client::getBasicInfoQA(shared_ptr<GetBasicInfoQARequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetBasicInfoQAHeaders> headers = make_shared<GetBasicInfoQAHeaders>();
  return getBasicInfoQAWithOptions(request, headers, runtime);
}

GetCartoonResponse Alibabacloud_AliGenieip10::Client::getCartoonWithOptions(shared_ptr<GetCartoonRequest> request, shared_ptr<GetCartoonHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelId)) {
    body->insert(pair<string, string>("HotelId", *request->hotelId));
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
    {"action", boost::any(string("GetCartoon"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/getCartoon"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetCartoonResponse(callApi(params, req, runtime));
  }
  else {
    return GetCartoonResponse(execute(params, req, runtime));
  }
}

GetCartoonResponse Alibabacloud_AliGenieip10::Client::getCartoon(shared_ptr<GetCartoonRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetCartoonHeaders> headers = make_shared<GetCartoonHeaders>();
  return getCartoonWithOptions(request, headers, runtime);
}

GetHotelContactByGenieDeviceResponse Alibabacloud_AliGenieip10::Client::getHotelContactByGenieDeviceWithOptions(shared_ptr<GetHotelContactByGenieDeviceRequest> tmpReq, shared_ptr<GetHotelContactByGenieDeviceHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetHotelContactByGenieDeviceShrinkRequest> request = make_shared<GetHotelContactByGenieDeviceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<GetHotelContactByGenieDeviceRequestDeviceInfo>(tmpReq->deviceInfo)) {
    request->deviceInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->deviceInfo, make_shared<string>("DeviceInfo"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<GetHotelContactByGenieDeviceRequestUserInfo>(tmpReq->userInfo)) {
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
    {"action", boost::any(string("GetHotelContactByGenieDevice"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/getHotelContactByGenieDevice"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetHotelContactByGenieDeviceResponse(callApi(params, req, runtime));
  }
  else {
    return GetHotelContactByGenieDeviceResponse(execute(params, req, runtime));
  }
}

GetHotelContactByGenieDeviceResponse Alibabacloud_AliGenieip10::Client::getHotelContactByGenieDevice(shared_ptr<GetHotelContactByGenieDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetHotelContactByGenieDeviceHeaders> headers = make_shared<GetHotelContactByGenieDeviceHeaders>();
  return getHotelContactByGenieDeviceWithOptions(request, headers, runtime);
}

GetHotelContactByNumberResponse Alibabacloud_AliGenieip10::Client::getHotelContactByNumberWithOptions(shared_ptr<GetHotelContactByNumberRequest> tmpReq, shared_ptr<GetHotelContactByNumberHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetHotelContactByNumberShrinkRequest> request = make_shared<GetHotelContactByNumberShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<GetHotelContactByNumberRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->userInfo, make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->userInfoShrink)) {
    query->insert(pair<string, string>("UserInfo", *request->userInfoShrink));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->number)) {
    body->insert(pair<string, string>("Number", *request->number));
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
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetHotelContactByNumber"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/getHotelContactByNumber"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetHotelContactByNumberResponse(callApi(params, req, runtime));
  }
  else {
    return GetHotelContactByNumberResponse(execute(params, req, runtime));
  }
}

GetHotelContactByNumberResponse Alibabacloud_AliGenieip10::Client::getHotelContactByNumber(shared_ptr<GetHotelContactByNumberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetHotelContactByNumberHeaders> headers = make_shared<GetHotelContactByNumberHeaders>();
  return getHotelContactByNumberWithOptions(request, headers, runtime);
}

GetHotelContactsResponse Alibabacloud_AliGenieip10::Client::getHotelContactsWithOptions(shared_ptr<GetHotelContactsRequest> tmpReq, shared_ptr<GetHotelContactsHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetHotelContactsShrinkRequest> request = make_shared<GetHotelContactsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<GetHotelContactsRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->userInfo, make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
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
    {"action", boost::any(string("GetHotelContacts"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/getHotelContacts"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetHotelContactsResponse(callApi(params, req, runtime));
  }
  else {
    return GetHotelContactsResponse(execute(params, req, runtime));
  }
}

GetHotelContactsResponse Alibabacloud_AliGenieip10::Client::getHotelContacts(shared_ptr<GetHotelContactsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetHotelContactsHeaders> headers = make_shared<GetHotelContactsHeaders>();
  return getHotelContactsWithOptions(request, headers, runtime);
}

GetHotelHomeBackImageAndModesResponse Alibabacloud_AliGenieip10::Client::getHotelHomeBackImageAndModesWithOptions(shared_ptr<GetHotelHomeBackImageAndModesRequest> tmpReq, shared_ptr<GetHotelHomeBackImageAndModesHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetHotelHomeBackImageAndModesShrinkRequest> request = make_shared<GetHotelHomeBackImageAndModesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<GetHotelHomeBackImageAndModesRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->userInfo, make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
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
    {"action", boost::any(string("GetHotelHomeBackImageAndModes"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/getHotelHomeBackImageAndModes"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetHotelHomeBackImageAndModesResponse(callApi(params, req, runtime));
  }
  else {
    return GetHotelHomeBackImageAndModesResponse(execute(params, req, runtime));
  }
}

GetHotelHomeBackImageAndModesResponse Alibabacloud_AliGenieip10::Client::getHotelHomeBackImageAndModes(shared_ptr<GetHotelHomeBackImageAndModesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetHotelHomeBackImageAndModesHeaders> headers = make_shared<GetHotelHomeBackImageAndModesHeaders>();
  return getHotelHomeBackImageAndModesWithOptions(request, headers, runtime);
}

GetHotelNoticeResponse Alibabacloud_AliGenieip10::Client::getHotelNoticeWithOptions(shared_ptr<GetHotelNoticeRequest> tmpReq, shared_ptr<GetHotelNoticeHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetHotelNoticeShrinkRequest> request = make_shared<GetHotelNoticeShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<GetHotelNoticeRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->userInfo, make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
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
    {"action", boost::any(string("GetHotelNotice"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/getHotelNotice"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetHotelNoticeResponse(callApi(params, req, runtime));
  }
  else {
    return GetHotelNoticeResponse(execute(params, req, runtime));
  }
}

GetHotelNoticeResponse Alibabacloud_AliGenieip10::Client::getHotelNotice(shared_ptr<GetHotelNoticeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetHotelNoticeHeaders> headers = make_shared<GetHotelNoticeHeaders>();
  return getHotelNoticeWithOptions(request, headers, runtime);
}

GetHotelNoticeV2Response Alibabacloud_AliGenieip10::Client::getHotelNoticeV2WithOptions(shared_ptr<GetHotelNoticeV2Request> tmpReq, shared_ptr<GetHotelNoticeV2Headers> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetHotelNoticeV2ShrinkRequest> request = make_shared<GetHotelNoticeV2ShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<GetHotelNoticeV2RequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->userInfo, make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
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
    {"action", boost::any(string("GetHotelNoticeV2"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/getHotelNoticeV2"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetHotelNoticeV2Response(callApi(params, req, runtime));
  }
  else {
    return GetHotelNoticeV2Response(execute(params, req, runtime));
  }
}

GetHotelNoticeV2Response Alibabacloud_AliGenieip10::Client::getHotelNoticeV2(shared_ptr<GetHotelNoticeV2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetHotelNoticeV2Headers> headers = make_shared<GetHotelNoticeV2Headers>();
  return getHotelNoticeV2WithOptions(request, headers, runtime);
}

GetHotelOrderDetailResponse Alibabacloud_AliGenieip10::Client::getHotelOrderDetailWithOptions(shared_ptr<GetHotelOrderDetailRequest> tmpReq, shared_ptr<GetHotelOrderDetailHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetHotelOrderDetailShrinkRequest> request = make_shared<GetHotelOrderDetailShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<GetHotelOrderDetailRequestPayload>(tmpReq->payload)) {
    request->payloadShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->payload, make_shared<string>("Payload"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->payloadShrink)) {
    query->insert(pair<string, string>("Payload", *request->payloadShrink));
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
    {"action", boost::any(string("GetHotelOrderDetail"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/getHotelOrderDetail"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetHotelOrderDetailResponse(callApi(params, req, runtime));
  }
  else {
    return GetHotelOrderDetailResponse(execute(params, req, runtime));
  }
}

GetHotelOrderDetailResponse Alibabacloud_AliGenieip10::Client::getHotelOrderDetail(shared_ptr<GetHotelOrderDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetHotelOrderDetailHeaders> headers = make_shared<GetHotelOrderDetailHeaders>();
  return getHotelOrderDetailWithOptions(request, headers, runtime);
}

GetHotelRoomDeviceResponse Alibabacloud_AliGenieip10::Client::getHotelRoomDeviceWithOptions(shared_ptr<GetHotelRoomDeviceRequest> request, shared_ptr<GetHotelRoomDeviceHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelId)) {
    query->insert(pair<string, string>("HotelId", *request->hotelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roomNo)) {
    query->insert(pair<string, string>("RoomNo", *request->roomNo));
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
    {"action", boost::any(string("GetHotelRoomDevice"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/getHotelRoomDevice"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetHotelRoomDeviceResponse(callApi(params, req, runtime));
  }
  else {
    return GetHotelRoomDeviceResponse(execute(params, req, runtime));
  }
}

GetHotelRoomDeviceResponse Alibabacloud_AliGenieip10::Client::getHotelRoomDevice(shared_ptr<GetHotelRoomDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetHotelRoomDeviceHeaders> headers = make_shared<GetHotelRoomDeviceHeaders>();
  return getHotelRoomDeviceWithOptions(request, headers, runtime);
}

GetHotelSampleUtterancesResponse Alibabacloud_AliGenieip10::Client::getHotelSampleUtterancesWithOptions(shared_ptr<GetHotelSampleUtterancesRequest> tmpReq, shared_ptr<GetHotelSampleUtterancesHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetHotelSampleUtterancesShrinkRequest> request = make_shared<GetHotelSampleUtterancesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<GetHotelSampleUtterancesRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->userInfo, make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
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
    {"action", boost::any(string("GetHotelSampleUtterances"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/getHotelSampleUtterances"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetHotelSampleUtterancesResponse(callApi(params, req, runtime));
  }
  else {
    return GetHotelSampleUtterancesResponse(execute(params, req, runtime));
  }
}

GetHotelSampleUtterancesResponse Alibabacloud_AliGenieip10::Client::getHotelSampleUtterances(shared_ptr<GetHotelSampleUtterancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetHotelSampleUtterancesHeaders> headers = make_shared<GetHotelSampleUtterancesHeaders>();
  return getHotelSampleUtterancesWithOptions(request, headers, runtime);
}

GetHotelSceneItemDetailResponse Alibabacloud_AliGenieip10::Client::getHotelSceneItemDetailWithOptions(shared_ptr<GetHotelSceneItemDetailRequest> request, shared_ptr<GetHotelSceneItemDetailHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelId)) {
    body->insert(pair<string, string>("HotelId", *request->hotelId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->itemId)) {
    body->insert(pair<string, long>("ItemId", *request->itemId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
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
    {"action", boost::any(string("GetHotelSceneItemDetail"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/getHotelSceneItemDetail"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetHotelSceneItemDetailResponse(callApi(params, req, runtime));
  }
  else {
    return GetHotelSceneItemDetailResponse(execute(params, req, runtime));
  }
}

GetHotelSceneItemDetailResponse Alibabacloud_AliGenieip10::Client::getHotelSceneItemDetail(shared_ptr<GetHotelSceneItemDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetHotelSceneItemDetailHeaders> headers = make_shared<GetHotelSceneItemDetailHeaders>();
  return getHotelSceneItemDetailWithOptions(request, headers, runtime);
}

GetHotelScreenSaverResponse Alibabacloud_AliGenieip10::Client::getHotelScreenSaverWithOptions(shared_ptr<GetHotelScreenSaverRequest> tmpReq, shared_ptr<GetHotelScreenSaverHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetHotelScreenSaverShrinkRequest> request = make_shared<GetHotelScreenSaverShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<GetHotelScreenSaverRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->userInfo, make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
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
    {"action", boost::any(string("GetHotelScreenSaver"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/getHotelScreenSaver"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetHotelScreenSaverResponse(callApi(params, req, runtime));
  }
  else {
    return GetHotelScreenSaverResponse(execute(params, req, runtime));
  }
}

GetHotelScreenSaverResponse Alibabacloud_AliGenieip10::Client::getHotelScreenSaver(shared_ptr<GetHotelScreenSaverRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetHotelScreenSaverHeaders> headers = make_shared<GetHotelScreenSaverHeaders>();
  return getHotelScreenSaverWithOptions(request, headers, runtime);
}

GetHotelScreenSaverStyleResponse Alibabacloud_AliGenieip10::Client::getHotelScreenSaverStyleWithOptions(shared_ptr<GetHotelScreenSaverStyleRequest> request, shared_ptr<GetHotelScreenSaverStyleHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelId)) {
    body->insert(pair<string, string>("HotelId", *request->hotelId));
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
    {"action", boost::any(string("GetHotelScreenSaverStyle"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/getHotelScreenSaverStyle"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetHotelScreenSaverStyleResponse(callApi(params, req, runtime));
  }
  else {
    return GetHotelScreenSaverStyleResponse(execute(params, req, runtime));
  }
}

GetHotelScreenSaverStyleResponse Alibabacloud_AliGenieip10::Client::getHotelScreenSaverStyle(shared_ptr<GetHotelScreenSaverStyleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetHotelScreenSaverStyleHeaders> headers = make_shared<GetHotelScreenSaverStyleHeaders>();
  return getHotelScreenSaverStyleWithOptions(request, headers, runtime);
}

GetHotelSettingResponse Alibabacloud_AliGenieip10::Client::getHotelSettingWithOptions(shared_ptr<GetHotelSettingRequest> request, shared_ptr<GetHotelSettingHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelId)) {
    body->insert(pair<string, string>("HotelId", *request->hotelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->settingType)) {
    body->insert(pair<string, string>("SettingType", *request->settingType));
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
    {"action", boost::any(string("GetHotelSetting"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/getHotelSetting"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetHotelSettingResponse(callApi(params, req, runtime));
  }
  else {
    return GetHotelSettingResponse(execute(params, req, runtime));
  }
}

GetHotelSettingResponse Alibabacloud_AliGenieip10::Client::getHotelSetting(shared_ptr<GetHotelSettingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetHotelSettingHeaders> headers = make_shared<GetHotelSettingHeaders>();
  return getHotelSettingWithOptions(request, headers, runtime);
}

GetRelationProductListResponse Alibabacloud_AliGenieip10::Client::getRelationProductListWithOptions(shared_ptr<GetRelationProductListHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRelationProductList"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/getRelationProductList"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetRelationProductListResponse(callApi(params, req, runtime));
  }
  else {
    return GetRelationProductListResponse(execute(params, req, runtime));
  }
}

GetRelationProductListResponse Alibabacloud_AliGenieip10::Client::getRelationProductList() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetRelationProductListHeaders> headers = make_shared<GetRelationProductListHeaders>();
  return getRelationProductListWithOptions(headers, runtime);
}

GetUnionIdResponse Alibabacloud_AliGenieip10::Client::getUnionIdWithOptions(shared_ptr<GetUnionIdRequest> request, shared_ptr<GetUnionIdHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->encodeKey)) {
    body->insert(pair<string, string>("EncodeKey", *request->encodeKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->encodeType)) {
    body->insert(pair<string, string>("EncodeType", *request->encodeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    body->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idType)) {
    body->insert(pair<string, string>("IdType", *request->idType));
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
    {"action", boost::any(string("GetUnionId"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/getUnionId"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetUnionIdResponse(callApi(params, req, runtime));
  }
  else {
    return GetUnionIdResponse(execute(params, req, runtime));
  }
}

GetUnionIdResponse Alibabacloud_AliGenieip10::Client::getUnionId(shared_ptr<GetUnionIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetUnionIdHeaders> headers = make_shared<GetUnionIdHeaders>();
  return getUnionIdWithOptions(request, headers, runtime);
}

GetWelcomeTextAndMusicResponse Alibabacloud_AliGenieip10::Client::getWelcomeTextAndMusicWithOptions(shared_ptr<GetWelcomeTextAndMusicRequest> request, shared_ptr<GetWelcomeTextAndMusicHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelId)) {
    body->insert(pair<string, string>("HotelId", *request->hotelId));
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
    {"action", boost::any(string("GetWelcomeTextAndMusic"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/getWelcomeTextAndMusic"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetWelcomeTextAndMusicResponse(callApi(params, req, runtime));
  }
  else {
    return GetWelcomeTextAndMusicResponse(execute(params, req, runtime));
  }
}

GetWelcomeTextAndMusicResponse Alibabacloud_AliGenieip10::Client::getWelcomeTextAndMusic(shared_ptr<GetWelcomeTextAndMusicRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetWelcomeTextAndMusicHeaders> headers = make_shared<GetWelcomeTextAndMusicHeaders>();
  return getWelcomeTextAndMusicWithOptions(request, headers, runtime);
}

HotelQrBindResponse Alibabacloud_AliGenieip10::Client::hotelQrBindWithOptions(shared_ptr<HotelQrBindRequest> request, shared_ptr<HotelQrBindHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientId)) {
    body->insert(pair<string, string>("ClientId", *request->clientId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    body->insert(pair<string, string>("Code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extInfo)) {
    body->insert(pair<string, string>("ExtInfo", *request->extInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelId)) {
    body->insert(pair<string, string>("HotelId", *request->hotelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roomNo)) {
    body->insert(pair<string, string>("RoomNo", *request->roomNo));
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
    {"action", boost::any(string("HotelQrBind"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/hotelQrBind"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return HotelQrBindResponse(callApi(params, req, runtime));
  }
  else {
    return HotelQrBindResponse(execute(params, req, runtime));
  }
}

HotelQrBindResponse Alibabacloud_AliGenieip10::Client::hotelQrBind(shared_ptr<HotelQrBindRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<HotelQrBindHeaders> headers = make_shared<HotelQrBindHeaders>();
  return hotelQrBindWithOptions(request, headers, runtime);
}

ImportHotelConfigResponse Alibabacloud_AliGenieip10::Client::importHotelConfigWithOptions(shared_ptr<ImportHotelConfigRequest> tmpReq, shared_ptr<ImportHotelConfigHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ImportHotelConfigShrinkRequest> request = make_shared<ImportHotelConfigShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ImportHotelConfigRequestImportHotelConfig>(tmpReq->importHotelConfig)) {
    request->importHotelConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->importHotelConfig, make_shared<string>("ImportHotelConfig"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelId)) {
    body->insert(pair<string, string>("HotelId", *request->hotelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->importHotelConfigShrink)) {
    body->insert(pair<string, string>("ImportHotelConfig", *request->importHotelConfigShrink));
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
    {"action", boost::any(string("ImportHotelConfig"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/importHotelConfig"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ImportHotelConfigResponse(callApi(params, req, runtime));
  }
  else {
    return ImportHotelConfigResponse(execute(params, req, runtime));
  }
}

ImportHotelConfigResponse Alibabacloud_AliGenieip10::Client::importHotelConfig(shared_ptr<ImportHotelConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ImportHotelConfigHeaders> headers = make_shared<ImportHotelConfigHeaders>();
  return importHotelConfigWithOptions(request, headers, runtime);
}

ImportRoomControlDevicesResponse Alibabacloud_AliGenieip10::Client::importRoomControlDevicesWithOptions(shared_ptr<ImportRoomControlDevicesRequest> tmpReq, shared_ptr<ImportRoomControlDevicesHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ImportRoomControlDevicesShrinkRequest> request = make_shared<ImportRoomControlDevicesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<ImportRoomControlDevicesRequestLocationDevices>>(tmpReq->locationDevices)) {
    request->locationDevicesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->locationDevices, make_shared<string>("LocationDevices"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->enableInfraredDeviceImport)) {
    body->insert(pair<string, string>("EnableInfraredDeviceImport", *request->enableInfraredDeviceImport));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelId)) {
    body->insert(pair<string, string>("HotelId", *request->hotelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->locationDevicesShrink)) {
    body->insert(pair<string, string>("LocationDevices", *request->locationDevicesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roomNo)) {
    body->insert(pair<string, string>("RoomNo", *request->roomNo));
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
    {"action", boost::any(string("ImportRoomControlDevices"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/importRoomControlDevices"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ImportRoomControlDevicesResponse(callApi(params, req, runtime));
  }
  else {
    return ImportRoomControlDevicesResponse(execute(params, req, runtime));
  }
}

ImportRoomControlDevicesResponse Alibabacloud_AliGenieip10::Client::importRoomControlDevices(shared_ptr<ImportRoomControlDevicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ImportRoomControlDevicesHeaders> headers = make_shared<ImportRoomControlDevicesHeaders>();
  return importRoomControlDevicesWithOptions(request, headers, runtime);
}

ImportRoomGenieScenesResponse Alibabacloud_AliGenieip10::Client::importRoomGenieScenesWithOptions(shared_ptr<ImportRoomGenieScenesRequest> tmpReq, shared_ptr<ImportRoomGenieScenesHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ImportRoomGenieScenesShrinkRequest> request = make_shared<ImportRoomGenieScenesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<ImportRoomGenieScenesRequestSceneList>>(tmpReq->sceneList)) {
    request->sceneListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->sceneList, make_shared<string>("SceneList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelId)) {
    body->insert(pair<string, string>("HotelId", *request->hotelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roomNo)) {
    body->insert(pair<string, string>("RoomNo", *request->roomNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneListShrink)) {
    body->insert(pair<string, string>("SceneList", *request->sceneListShrink));
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
    {"action", boost::any(string("ImportRoomGenieScenes"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/importRoomGenieScenes"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ImportRoomGenieScenesResponse(callApi(params, req, runtime));
  }
  else {
    return ImportRoomGenieScenesResponse(execute(params, req, runtime));
  }
}

ImportRoomGenieScenesResponse Alibabacloud_AliGenieip10::Client::importRoomGenieScenes(shared_ptr<ImportRoomGenieScenesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ImportRoomGenieScenesHeaders> headers = make_shared<ImportRoomGenieScenesHeaders>();
  return importRoomGenieScenesWithOptions(request, headers, runtime);
}

InsertHotelSceneBookItemResponse Alibabacloud_AliGenieip10::Client::insertHotelSceneBookItemWithOptions(shared_ptr<InsertHotelSceneBookItemRequest> tmpReq, shared_ptr<InsertHotelSceneBookItemHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<InsertHotelSceneBookItemShrinkRequest> request = make_shared<InsertHotelSceneBookItemShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<InsertHotelSceneBookItemRequestAddHotelSceneItemReq>(tmpReq->addHotelSceneItemReq)) {
    request->addHotelSceneItemReqShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->addHotelSceneItemReq, make_shared<string>("AddHotelSceneItemReq"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->addHotelSceneItemReqShrink)) {
    query->insert(pair<string, string>("AddHotelSceneItemReq", *request->addHotelSceneItemReqShrink));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelId)) {
    body->insert(pair<string, string>("HotelId", *request->hotelId));
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
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InsertHotelSceneBookItem"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/insertHotelSceneBookItem"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return InsertHotelSceneBookItemResponse(callApi(params, req, runtime));
  }
  else {
    return InsertHotelSceneBookItemResponse(execute(params, req, runtime));
  }
}

InsertHotelSceneBookItemResponse Alibabacloud_AliGenieip10::Client::insertHotelSceneBookItem(shared_ptr<InsertHotelSceneBookItemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<InsertHotelSceneBookItemHeaders> headers = make_shared<InsertHotelSceneBookItemHeaders>();
  return insertHotelSceneBookItemWithOptions(request, headers, runtime);
}

InvokeRobotPushResponse Alibabacloud_AliGenieip10::Client::invokeRobotPushWithOptions(shared_ptr<InvokeRobotPushRequest> request, shared_ptr<InvokeRobotPushHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelId)) {
    body->insert(pair<string, string>("HotelId", *request->hotelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pushType)) {
    body->insert(pair<string, string>("PushType", *request->pushType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roomName)) {
    body->insert(pair<string, string>("RoomName", *request->roomName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roomNo)) {
    body->insert(pair<string, string>("RoomNo", *request->roomNo));
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
    {"action", boost::any(string("InvokeRobotPush"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/invokeRobotPush"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return InvokeRobotPushResponse(callApi(params, req, runtime));
  }
  else {
    return InvokeRobotPushResponse(execute(params, req, runtime));
  }
}

InvokeRobotPushResponse Alibabacloud_AliGenieip10::Client::invokeRobotPush(shared_ptr<InvokeRobotPushRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<InvokeRobotPushHeaders> headers = make_shared<InvokeRobotPushHeaders>();
  return invokeRobotPushWithOptions(request, headers, runtime);
}

ListAllProvincesResponse Alibabacloud_AliGenieip10::Client::listAllProvincesWithOptions(shared_ptr<ListAllProvincesHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAllProvinces"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/listAllProvinces"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListAllProvincesResponse(callApi(params, req, runtime));
  }
  else {
    return ListAllProvincesResponse(execute(params, req, runtime));
  }
}

ListAllProvincesResponse Alibabacloud_AliGenieip10::Client::listAllProvinces() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ListAllProvincesHeaders> headers = make_shared<ListAllProvincesHeaders>();
  return listAllProvincesWithOptions(headers, runtime);
}

ListCitiesByProvinceResponse Alibabacloud_AliGenieip10::Client::listCitiesByProvinceWithOptions(shared_ptr<ListCitiesByProvinceRequest> request, shared_ptr<ListCitiesByProvinceHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->province)) {
    body->insert(pair<string, string>("Province", *request->province));
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
    {"action", boost::any(string("ListCitiesByProvince"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/listCitiesByProvince"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListCitiesByProvinceResponse(callApi(params, req, runtime));
  }
  else {
    return ListCitiesByProvinceResponse(execute(params, req, runtime));
  }
}

ListCitiesByProvinceResponse Alibabacloud_AliGenieip10::Client::listCitiesByProvince(shared_ptr<ListCitiesByProvinceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ListCitiesByProvinceHeaders> headers = make_shared<ListCitiesByProvinceHeaders>();
  return listCitiesByProvinceWithOptions(request, headers, runtime);
}

ListCustomQAResponse Alibabacloud_AliGenieip10::Client::listCustomQAWithOptions(shared_ptr<ListCustomQARequest> tmpReq, shared_ptr<ListCustomQAHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListCustomQAShrinkRequest> request = make_shared<ListCustomQAShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListCustomQARequestPage>(tmpReq->page)) {
    request->pageShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->page, make_shared<string>("Page"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelId)) {
    body->insert(pair<string, string>("HotelId", *request->hotelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    body->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageShrink)) {
    body->insert(pair<string, string>("Page", *request->pageShrink));
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
    {"action", boost::any(string("ListCustomQA"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/listCustomQA"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListCustomQAResponse(callApi(params, req, runtime));
  }
  else {
    return ListCustomQAResponse(execute(params, req, runtime));
  }
}

ListCustomQAResponse Alibabacloud_AliGenieip10::Client::listCustomQA(shared_ptr<ListCustomQARequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ListCustomQAHeaders> headers = make_shared<ListCustomQAHeaders>();
  return listCustomQAWithOptions(request, headers, runtime);
}

ListDialogueTemplateResponse Alibabacloud_AliGenieip10::Client::listDialogueTemplateWithOptions(shared_ptr<ListDialogueTemplateRequest> request, shared_ptr<ListDialogueTemplateHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelId)) {
    body->insert(pair<string, string>("HotelId", *request->hotelId));
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
    {"action", boost::any(string("ListDialogueTemplate"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/listDialogueTemplate"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListDialogueTemplateResponse(callApi(params, req, runtime));
  }
  else {
    return ListDialogueTemplateResponse(execute(params, req, runtime));
  }
}

ListDialogueTemplateResponse Alibabacloud_AliGenieip10::Client::listDialogueTemplate(shared_ptr<ListDialogueTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ListDialogueTemplateHeaders> headers = make_shared<ListDialogueTemplateHeaders>();
  return listDialogueTemplateWithOptions(request, headers, runtime);
}

ListHotelAlarmResponse Alibabacloud_AliGenieip10::Client::listHotelAlarmWithOptions(shared_ptr<ListHotelAlarmRequest> tmpReq, shared_ptr<ListHotelAlarmHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListHotelAlarmShrinkRequest> request = make_shared<ListHotelAlarmShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->rooms)) {
    request->roomsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->rooms, make_shared<string>("Rooms"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelId)) {
    body->insert(pair<string, string>("HotelId", *request->hotelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roomsShrink)) {
    body->insert(pair<string, string>("Rooms", *request->roomsShrink));
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
    {"action", boost::any(string("ListHotelAlarm"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/getHotelAlarmList"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListHotelAlarmResponse(callApi(params, req, runtime));
  }
  else {
    return ListHotelAlarmResponse(execute(params, req, runtime));
  }
}

ListHotelAlarmResponse Alibabacloud_AliGenieip10::Client::listHotelAlarm(shared_ptr<ListHotelAlarmRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ListHotelAlarmHeaders> headers = make_shared<ListHotelAlarmHeaders>();
  return listHotelAlarmWithOptions(request, headers, runtime);
}

ListHotelControlDeviceResponse Alibabacloud_AliGenieip10::Client::listHotelControlDeviceWithOptions(shared_ptr<ListHotelControlDeviceRequest> tmpReq, shared_ptr<ListHotelControlDeviceHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListHotelControlDeviceShrinkRequest> request = make_shared<ListHotelControlDeviceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListHotelControlDeviceRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->userInfo, make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
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
    {"action", boost::any(string("ListHotelControlDevice"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/listHotelControlDevice"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListHotelControlDeviceResponse(callApi(params, req, runtime));
  }
  else {
    return ListHotelControlDeviceResponse(execute(params, req, runtime));
  }
}

ListHotelControlDeviceResponse Alibabacloud_AliGenieip10::Client::listHotelControlDevice(shared_ptr<ListHotelControlDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ListHotelControlDeviceHeaders> headers = make_shared<ListHotelControlDeviceHeaders>();
  return listHotelControlDeviceWithOptions(request, headers, runtime);
}

ListHotelInfoResponse Alibabacloud_AliGenieip10::Client::listHotelInfoWithOptions(shared_ptr<ListHotelInfoHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListHotelInfo"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/listHotelInfo"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListHotelInfoResponse(callApi(params, req, runtime));
  }
  else {
    return ListHotelInfoResponse(execute(params, req, runtime));
  }
}

ListHotelInfoResponse Alibabacloud_AliGenieip10::Client::listHotelInfo() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ListHotelInfoHeaders> headers = make_shared<ListHotelInfoHeaders>();
  return listHotelInfoWithOptions(headers, runtime);
}

ListHotelMessageTemplateResponse Alibabacloud_AliGenieip10::Client::listHotelMessageTemplateWithOptions(shared_ptr<ListHotelMessageTemplateHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListHotelMessageTemplate"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/listHotelMessageTemplate"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListHotelMessageTemplateResponse(callApi(params, req, runtime));
  }
  else {
    return ListHotelMessageTemplateResponse(execute(params, req, runtime));
  }
}

ListHotelMessageTemplateResponse Alibabacloud_AliGenieip10::Client::listHotelMessageTemplate() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ListHotelMessageTemplateHeaders> headers = make_shared<ListHotelMessageTemplateHeaders>();
  return listHotelMessageTemplateWithOptions(headers, runtime);
}

ListHotelOrderResponse Alibabacloud_AliGenieip10::Client::listHotelOrderWithOptions(shared_ptr<ListHotelOrderRequest> tmpReq, shared_ptr<ListHotelOrderHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListHotelOrderShrinkRequest> request = make_shared<ListHotelOrderShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListHotelOrderRequestPayload>(tmpReq->payload)) {
    request->payloadShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->payload, make_shared<string>("Payload"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<ListHotelOrderRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->userInfo, make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
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
    {"action", boost::any(string("ListHotelOrder"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/listHotelOrder"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListHotelOrderResponse(callApi(params, req, runtime));
  }
  else {
    return ListHotelOrderResponse(execute(params, req, runtime));
  }
}

ListHotelOrderResponse Alibabacloud_AliGenieip10::Client::listHotelOrder(shared_ptr<ListHotelOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ListHotelOrderHeaders> headers = make_shared<ListHotelOrderHeaders>();
  return listHotelOrderWithOptions(request, headers, runtime);
}

ListHotelRoomsResponse Alibabacloud_AliGenieip10::Client::listHotelRoomsWithOptions(shared_ptr<ListHotelRoomsRequest> tmpReq, shared_ptr<ListHotelRoomsHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListHotelRoomsShrinkRequest> request = make_shared<ListHotelRoomsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListHotelRoomsRequestHotelAdminRoom>(tmpReq->hotelAdminRoom)) {
    request->hotelAdminRoomShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->hotelAdminRoom, make_shared<string>("HotelAdminRoom"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelAdminRoomShrink)) {
    body->insert(pair<string, string>("HotelAdminRoom", *request->hotelAdminRoomShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelId)) {
    body->insert(pair<string, string>("HotelId", *request->hotelId));
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
    {"action", boost::any(string("ListHotelRooms"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/listHotelRooms"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListHotelRoomsResponse(callApi(params, req, runtime));
  }
  else {
    return ListHotelRoomsResponse(execute(params, req, runtime));
  }
}

ListHotelRoomsResponse Alibabacloud_AliGenieip10::Client::listHotelRooms(shared_ptr<ListHotelRoomsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ListHotelRoomsHeaders> headers = make_shared<ListHotelRoomsHeaders>();
  return listHotelRoomsWithOptions(request, headers, runtime);
}

ListHotelSceneBookItemsResponse Alibabacloud_AliGenieip10::Client::listHotelSceneBookItemsWithOptions(shared_ptr<ListHotelSceneBookItemsRequest> tmpReq, shared_ptr<ListHotelSceneBookItemsHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListHotelSceneBookItemsShrinkRequest> request = make_shared<ListHotelSceneBookItemsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListHotelSceneBookItemsRequestPage>(tmpReq->page)) {
    request->pageShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->page, make_shared<string>("Page"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->pageShrink)) {
    query->insert(pair<string, string>("Page", *request->pageShrink));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelId)) {
    body->insert(pair<string, string>("HotelId", *request->hotelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("Type", *request->type));
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
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListHotelSceneBookItems"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/listHotelSceneBookItems"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListHotelSceneBookItemsResponse(callApi(params, req, runtime));
  }
  else {
    return ListHotelSceneBookItemsResponse(execute(params, req, runtime));
  }
}

ListHotelSceneBookItemsResponse Alibabacloud_AliGenieip10::Client::listHotelSceneBookItems(shared_ptr<ListHotelSceneBookItemsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ListHotelSceneBookItemsHeaders> headers = make_shared<ListHotelSceneBookItemsHeaders>();
  return listHotelSceneBookItemsWithOptions(request, headers, runtime);
}

ListHotelSceneItemResponse Alibabacloud_AliGenieip10::Client::listHotelSceneItemWithOptions(shared_ptr<ListHotelSceneItemRequest> tmpReq, shared_ptr<ListHotelSceneItemHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListHotelSceneItemShrinkRequest> request = make_shared<ListHotelSceneItemShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListHotelSceneItemRequestPayload>(tmpReq->payload)) {
    request->payloadShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->payload, make_shared<string>("Payload"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<ListHotelSceneItemRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->userInfo, make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
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
    {"action", boost::any(string("ListHotelSceneItem"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/listHotelSceneItem"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListHotelSceneItemResponse(callApi(params, req, runtime));
  }
  else {
    return ListHotelSceneItemResponse(execute(params, req, runtime));
  }
}

ListHotelSceneItemResponse Alibabacloud_AliGenieip10::Client::listHotelSceneItem(shared_ptr<ListHotelSceneItemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ListHotelSceneItemHeaders> headers = make_shared<ListHotelSceneItemHeaders>();
  return listHotelSceneItemWithOptions(request, headers, runtime);
}

ListHotelSceneItemsResponse Alibabacloud_AliGenieip10::Client::listHotelSceneItemsWithOptions(shared_ptr<ListHotelSceneItemsRequest> tmpReq, shared_ptr<ListHotelSceneItemsHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListHotelSceneItemsShrinkRequest> request = make_shared<ListHotelSceneItemsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListHotelSceneItemsRequestListHotelSceneReq>(tmpReq->listHotelSceneReq)) {
    request->listHotelSceneReqShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->listHotelSceneReq, make_shared<string>("ListHotelSceneReq"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->listHotelSceneReqShrink)) {
    query->insert(pair<string, string>("ListHotelSceneReq", *request->listHotelSceneReqShrink));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelId)) {
    body->insert(pair<string, string>("HotelId", *request->hotelId));
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
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListHotelSceneItems"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/listHotelSceneItems"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListHotelSceneItemsResponse(callApi(params, req, runtime));
  }
  else {
    return ListHotelSceneItemsResponse(execute(params, req, runtime));
  }
}

ListHotelSceneItemsResponse Alibabacloud_AliGenieip10::Client::listHotelSceneItems(shared_ptr<ListHotelSceneItemsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ListHotelSceneItemsHeaders> headers = make_shared<ListHotelSceneItemsHeaders>();
  return listHotelSceneItemsWithOptions(request, headers, runtime);
}

ListHotelServiceCategoryResponse Alibabacloud_AliGenieip10::Client::listHotelServiceCategoryWithOptions(shared_ptr<ListHotelServiceCategoryRequest> tmpReq, shared_ptr<ListHotelServiceCategoryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListHotelServiceCategoryShrinkRequest> request = make_shared<ListHotelServiceCategoryShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListHotelServiceCategoryRequestPayload>(tmpReq->payload)) {
    request->payloadShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->payload, make_shared<string>("Payload"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->payloadShrink)) {
    query->insert(pair<string, string>("Payload", *request->payloadShrink));
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
    {"action", boost::any(string("ListHotelServiceCategory"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/listHotelServiceCategory"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListHotelServiceCategoryResponse(callApi(params, req, runtime));
  }
  else {
    return ListHotelServiceCategoryResponse(execute(params, req, runtime));
  }
}

ListHotelServiceCategoryResponse Alibabacloud_AliGenieip10::Client::listHotelServiceCategory(shared_ptr<ListHotelServiceCategoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ListHotelServiceCategoryHeaders> headers = make_shared<ListHotelServiceCategoryHeaders>();
  return listHotelServiceCategoryWithOptions(request, headers, runtime);
}

ListHotelsResponse Alibabacloud_AliGenieip10::Client::listHotelsWithOptions(shared_ptr<ListHotelsRequest> tmpReq, shared_ptr<ListHotelsHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListHotelsShrinkRequest> request = make_shared<ListHotelsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListHotelsRequestHotelRequest>(tmpReq->hotelRequest)) {
    request->hotelRequestShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->hotelRequest, make_shared<string>("HotelRequest"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<ListHotelsRequestPage>(tmpReq->page)) {
    request->pageShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->page, make_shared<string>("Page"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelRequestShrink)) {
    query->insert(pair<string, string>("HotelRequest", *request->hotelRequestShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageShrink)) {
    query->insert(pair<string, string>("Page", *request->pageShrink));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    body->insert(pair<string, long>("Status", *request->status));
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
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListHotels"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/listHotels"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListHotelsResponse(callApi(params, req, runtime));
  }
  else {
    return ListHotelsResponse(execute(params, req, runtime));
  }
}

ListHotelsResponse Alibabacloud_AliGenieip10::Client::listHotels(shared_ptr<ListHotelsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ListHotelsHeaders> headers = make_shared<ListHotelsHeaders>();
  return listHotelsWithOptions(request, headers, runtime);
}

ListInfraredDeviceBrandsResponse Alibabacloud_AliGenieip10::Client::listInfraredDeviceBrandsWithOptions(shared_ptr<ListInfraredDeviceBrandsRequest> request, shared_ptr<ListInfraredDeviceBrandsHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->category)) {
    body->insert(pair<string, string>("Category", *request->category));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceProvider)) {
    body->insert(pair<string, string>("ServiceProvider", *request->serviceProvider));
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
    {"action", boost::any(string("ListInfraredDeviceBrands"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/listInfraredDeviceBrands"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListInfraredDeviceBrandsResponse(callApi(params, req, runtime));
  }
  else {
    return ListInfraredDeviceBrandsResponse(execute(params, req, runtime));
  }
}

ListInfraredDeviceBrandsResponse Alibabacloud_AliGenieip10::Client::listInfraredDeviceBrands(shared_ptr<ListInfraredDeviceBrandsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ListInfraredDeviceBrandsHeaders> headers = make_shared<ListInfraredDeviceBrandsHeaders>();
  return listInfraredDeviceBrandsWithOptions(request, headers, runtime);
}

ListInfraredRemoteControllersResponse Alibabacloud_AliGenieip10::Client::listInfraredRemoteControllersWithOptions(shared_ptr<ListInfraredRemoteControllersRequest> request, shared_ptr<ListInfraredRemoteControllersHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->brand)) {
    body->insert(pair<string, string>("Brand", *request->brand));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->category)) {
    body->insert(pair<string, string>("Category", *request->category));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->city)) {
    body->insert(pair<string, string>("City", *request->city));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelId)) {
    body->insert(pair<string, string>("HotelId", *request->hotelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->province)) {
    body->insert(pair<string, string>("Province", *request->province));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceProvider)) {
    body->insert(pair<string, string>("ServiceProvider", *request->serviceProvider));
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
    {"action", boost::any(string("ListInfraredRemoteControllers"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/listInfraredRemoteControllers"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListInfraredRemoteControllersResponse(callApi(params, req, runtime));
  }
  else {
    return ListInfraredRemoteControllersResponse(execute(params, req, runtime));
  }
}

ListInfraredRemoteControllersResponse Alibabacloud_AliGenieip10::Client::listInfraredRemoteControllers(shared_ptr<ListInfraredRemoteControllersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ListInfraredRemoteControllersHeaders> headers = make_shared<ListInfraredRemoteControllersHeaders>();
  return listInfraredRemoteControllersWithOptions(request, headers, runtime);
}

ListSTBServiceProvidersResponse Alibabacloud_AliGenieip10::Client::listSTBServiceProvidersWithOptions(shared_ptr<ListSTBServiceProvidersRequest> request, shared_ptr<ListSTBServiceProvidersHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->city)) {
    body->insert(pair<string, string>("City", *request->city));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->province)) {
    body->insert(pair<string, string>("Province", *request->province));
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
    {"action", boost::any(string("ListSTBServiceProviders"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/listSTBServiceProviders"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListSTBServiceProvidersResponse(callApi(params, req, runtime));
  }
  else {
    return ListSTBServiceProvidersResponse(execute(params, req, runtime));
  }
}

ListSTBServiceProvidersResponse Alibabacloud_AliGenieip10::Client::listSTBServiceProviders(shared_ptr<ListSTBServiceProvidersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ListSTBServiceProvidersHeaders> headers = make_shared<ListSTBServiceProvidersHeaders>();
  return listSTBServiceProvidersWithOptions(request, headers, runtime);
}

ListSceneCategoryResponse Alibabacloud_AliGenieip10::Client::listSceneCategoryWithOptions(shared_ptr<ListSceneCategoryRequest> request, shared_ptr<ListSceneCategoryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelId)) {
    body->insert(pair<string, string>("HotelId", *request->hotelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("Type", *request->type));
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
    {"action", boost::any(string("ListSceneCategory"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/listSceneCategory"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListSceneCategoryResponse(callApi(params, req, runtime));
  }
  else {
    return ListSceneCategoryResponse(execute(params, req, runtime));
  }
}

ListSceneCategoryResponse Alibabacloud_AliGenieip10::Client::listSceneCategory(shared_ptr<ListSceneCategoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ListSceneCategoryHeaders> headers = make_shared<ListSceneCategoryHeaders>();
  return listSceneCategoryWithOptions(request, headers, runtime);
}

ListServiceQAResponse Alibabacloud_AliGenieip10::Client::listServiceQAWithOptions(shared_ptr<ListServiceQARequest> tmpReq, shared_ptr<ListServiceQAHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListServiceQAShrinkRequest> request = make_shared<ListServiceQAShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListServiceQARequestPage>(tmpReq->page)) {
    request->pageShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->page, make_shared<string>("Page"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->active)) {
    body->insert(pair<string, bool>("Active", *request->active));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelId)) {
    body->insert(pair<string, string>("HotelId", *request->hotelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    body->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageShrink)) {
    body->insert(pair<string, string>("Page", *request->pageShrink));
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
    {"action", boost::any(string("ListServiceQA"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/listServiceQA"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListServiceQAResponse(callApi(params, req, runtime));
  }
  else {
    return ListServiceQAResponse(execute(params, req, runtime));
  }
}

ListServiceQAResponse Alibabacloud_AliGenieip10::Client::listServiceQA(shared_ptr<ListServiceQARequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ListServiceQAHeaders> headers = make_shared<ListServiceQAHeaders>();
  return listServiceQAWithOptions(request, headers, runtime);
}

ListTicketsResponse Alibabacloud_AliGenieip10::Client::listTicketsWithOptions(shared_ptr<ListTicketsRequest> tmpReq, shared_ptr<ListTicketsHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListTicketsShrinkRequest> request = make_shared<ListTicketsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListTicketsRequestPage>(tmpReq->page)) {
    request->pageShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->page, make_shared<string>("Page"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    body->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelId)) {
    body->insert(pair<string, string>("HotelId", *request->hotelId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isDesc)) {
    body->insert(pair<string, bool>("IsDesc", *request->isDesc));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isNeedCallback)) {
    body->insert(pair<string, bool>("IsNeedCallback", *request->isNeedCallback));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isNeedCharges)) {
    body->insert(pair<string, bool>("IsNeedCharges", *request->isNeedCharges));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageShrink)) {
    body->insert(pair<string, string>("Page", *request->pageShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roomNo)) {
    body->insert(pair<string, string>("RoomNo", *request->roomNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortField)) {
    body->insert(pair<string, string>("SortField", *request->sortField));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    body->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    body->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("Type", *request->type));
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
    {"action", boost::any(string("ListTickets"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/listTickets"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListTicketsResponse(callApi(params, req, runtime));
  }
  else {
    return ListTicketsResponse(execute(params, req, runtime));
  }
}

ListTicketsResponse Alibabacloud_AliGenieip10::Client::listTickets(shared_ptr<ListTicketsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ListTicketsHeaders> headers = make_shared<ListTicketsHeaders>();
  return listTicketsWithOptions(request, headers, runtime);
}

PageGetHotelRoomDevicesResponse Alibabacloud_AliGenieip10::Client::pageGetHotelRoomDevicesWithOptions(shared_ptr<PageGetHotelRoomDevicesRequest> request, shared_ptr<PageGetHotelRoomDevicesHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelId)) {
    body->insert(pair<string, string>("HotelId", *request->hotelId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
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
    {"action", boost::any(string("PageGetHotelRoomDevices"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/pageGetHotelRoomDevices"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return PageGetHotelRoomDevicesResponse(callApi(params, req, runtime));
  }
  else {
    return PageGetHotelRoomDevicesResponse(execute(params, req, runtime));
  }
}

PageGetHotelRoomDevicesResponse Alibabacloud_AliGenieip10::Client::pageGetHotelRoomDevices(shared_ptr<PageGetHotelRoomDevicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<PageGetHotelRoomDevicesHeaders> headers = make_shared<PageGetHotelRoomDevicesHeaders>();
  return pageGetHotelRoomDevicesWithOptions(request, headers, runtime);
}

PmsEventReportResponse Alibabacloud_AliGenieip10::Client::pmsEventReportWithOptions(shared_ptr<PmsEventReportRequest> request, shared_ptr<PmsEventReportHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->payload)) {
    body->insert(pair<string, string>("Payload", *request->payload));
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
    {"action", boost::any(string("PmsEventReport"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/pmsEventReport"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return PmsEventReportResponse(callApi(params, req, runtime));
  }
  else {
    return PmsEventReportResponse(execute(params, req, runtime));
  }
}

PmsEventReportResponse Alibabacloud_AliGenieip10::Client::pmsEventReport(shared_ptr<PmsEventReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<PmsEventReportHeaders> headers = make_shared<PmsEventReportHeaders>();
  return pmsEventReportWithOptions(request, headers, runtime);
}

PushHotelMessageResponse Alibabacloud_AliGenieip10::Client::pushHotelMessageWithOptions(shared_ptr<PushHotelMessageRequest> tmpReq, shared_ptr<PushHotelMessageHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<PushHotelMessageShrinkRequest> request = make_shared<PushHotelMessageShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<PushHotelMessageRequestPushHotelMessageReq>(tmpReq->pushHotelMessageReq)) {
    request->pushHotelMessageReqShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->pushHotelMessageReq, make_shared<string>("PushHotelMessageReq"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->pushHotelMessageReqShrink)) {
    query->insert(pair<string, string>("PushHotelMessageReq", *request->pushHotelMessageReqShrink));
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
    {"action", boost::any(string("PushHotelMessage"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/pushHotelMessage"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return PushHotelMessageResponse(callApi(params, req, runtime));
  }
  else {
    return PushHotelMessageResponse(execute(params, req, runtime));
  }
}

PushHotelMessageResponse Alibabacloud_AliGenieip10::Client::pushHotelMessage(shared_ptr<PushHotelMessageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<PushHotelMessageHeaders> headers = make_shared<PushHotelMessageHeaders>();
  return pushHotelMessageWithOptions(request, headers, runtime);
}

PushVoiceBoxCommandsResponse Alibabacloud_AliGenieip10::Client::pushVoiceBoxCommandsWithOptions(shared_ptr<PushVoiceBoxCommandsRequest> tmpReq, shared_ptr<PushVoiceBoxCommandsHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<PushVoiceBoxCommandsShrinkRequest> request = make_shared<PushVoiceBoxCommandsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<PushVoiceBoxCommandsRequestCommands>>(tmpReq->commands)) {
    request->commandsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->commands, make_shared<string>("Commands"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->commandsShrink)) {
    body->insert(pair<string, string>("Commands", *request->commandsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelId)) {
    body->insert(pair<string, string>("HotelId", *request->hotelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roomNo)) {
    body->insert(pair<string, string>("RoomNo", *request->roomNo));
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
    {"action", boost::any(string("PushVoiceBoxCommands"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/pushVoiceBoxCommands"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return PushVoiceBoxCommandsResponse(callApi(params, req, runtime));
  }
  else {
    return PushVoiceBoxCommandsResponse(execute(params, req, runtime));
  }
}

PushVoiceBoxCommandsResponse Alibabacloud_AliGenieip10::Client::pushVoiceBoxCommands(shared_ptr<PushVoiceBoxCommandsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<PushVoiceBoxCommandsHeaders> headers = make_shared<PushVoiceBoxCommandsHeaders>();
  return pushVoiceBoxCommandsWithOptions(request, headers, runtime);
}

PushWelcomeResponse Alibabacloud_AliGenieip10::Client::pushWelcomeWithOptions(shared_ptr<PushWelcomeRequest> request, shared_ptr<PushWelcomeHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelId)) {
    body->insert(pair<string, string>("HotelId", *request->hotelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roomName)) {
    body->insert(pair<string, string>("RoomName", *request->roomName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roomNo)) {
    body->insert(pair<string, string>("RoomNo", *request->roomNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->welcomeMusicUrl)) {
    body->insert(pair<string, string>("WelcomeMusicUrl", *request->welcomeMusicUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->welcomeText)) {
    body->insert(pair<string, string>("WelcomeText", *request->welcomeText));
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
    {"action", boost::any(string("PushWelcome"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/pushWelcome"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return PushWelcomeResponse(callApi(params, req, runtime));
  }
  else {
    return PushWelcomeResponse(execute(params, req, runtime));
  }
}

PushWelcomeResponse Alibabacloud_AliGenieip10::Client::pushWelcome(shared_ptr<PushWelcomeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<PushWelcomeHeaders> headers = make_shared<PushWelcomeHeaders>();
  return pushWelcomeWithOptions(request, headers, runtime);
}

PushWelcomeTextAndMusicResponse Alibabacloud_AliGenieip10::Client::pushWelcomeTextAndMusicWithOptions(shared_ptr<PushWelcomeTextAndMusicRequest> tmpReq, shared_ptr<PushWelcomeTextAndMusicHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<PushWelcomeTextAndMusicShrinkRequest> request = make_shared<PushWelcomeTextAndMusicShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(tmpReq->templateVariable)) {
    request->templateVariableShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->templateVariable, make_shared<string>("TemplateVariable"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelId)) {
    body->insert(pair<string, string>("HotelId", *request->hotelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roomName)) {
    body->insert(pair<string, string>("RoomName", *request->roomName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roomNo)) {
    body->insert(pair<string, string>("RoomNo", *request->roomNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateVariableShrink)) {
    body->insert(pair<string, string>("TemplateVariable", *request->templateVariableShrink));
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
    {"action", boost::any(string("PushWelcomeTextAndMusic"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/pushWelcomeTextAndMusic"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return PushWelcomeTextAndMusicResponse(callApi(params, req, runtime));
  }
  else {
    return PushWelcomeTextAndMusicResponse(execute(params, req, runtime));
  }
}

PushWelcomeTextAndMusicResponse Alibabacloud_AliGenieip10::Client::pushWelcomeTextAndMusic(shared_ptr<PushWelcomeTextAndMusicRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<PushWelcomeTextAndMusicHeaders> headers = make_shared<PushWelcomeTextAndMusicHeaders>();
  return pushWelcomeTextAndMusicWithOptions(request, headers, runtime);
}

QueryDeviceStatusResponse Alibabacloud_AliGenieip10::Client::queryDeviceStatusWithOptions(shared_ptr<QueryDeviceStatusRequest> tmpReq, shared_ptr<QueryDeviceStatusHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<QueryDeviceStatusShrinkRequest> request = make_shared<QueryDeviceStatusShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<QueryDeviceStatusRequestPayload>(tmpReq->payload)) {
    request->payloadShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->payload, make_shared<string>("Payload"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<QueryDeviceStatusRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->userInfo, make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
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
    {"action", boost::any(string("QueryDeviceStatus"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/queryDeviceStatus"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return QueryDeviceStatusResponse(callApi(params, req, runtime));
  }
  else {
    return QueryDeviceStatusResponse(execute(params, req, runtime));
  }
}

QueryDeviceStatusResponse Alibabacloud_AliGenieip10::Client::queryDeviceStatus(shared_ptr<QueryDeviceStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<QueryDeviceStatusHeaders> headers = make_shared<QueryDeviceStatusHeaders>();
  return queryDeviceStatusWithOptions(request, headers, runtime);
}

QueryHotelRoomDetailResponse Alibabacloud_AliGenieip10::Client::queryHotelRoomDetailWithOptions(shared_ptr<QueryHotelRoomDetailRequest> request, shared_ptr<QueryHotelRoomDetailHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelId)) {
    body->insert(pair<string, string>("HotelId", *request->hotelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mac)) {
    body->insert(pair<string, string>("Mac", *request->mac));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roomNo)) {
    body->insert(pair<string, string>("RoomNo", *request->roomNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sn)) {
    body->insert(pair<string, string>("Sn", *request->sn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uuid)) {
    body->insert(pair<string, string>("Uuid", *request->uuid));
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
    {"action", boost::any(string("QueryHotelRoomDetail"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/queryHotelRoomDetail"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return QueryHotelRoomDetailResponse(callApi(params, req, runtime));
  }
  else {
    return QueryHotelRoomDetailResponse(execute(params, req, runtime));
  }
}

QueryHotelRoomDetailResponse Alibabacloud_AliGenieip10::Client::queryHotelRoomDetail(shared_ptr<QueryHotelRoomDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<QueryHotelRoomDetailHeaders> headers = make_shared<QueryHotelRoomDetailHeaders>();
  return queryHotelRoomDetailWithOptions(request, headers, runtime);
}

QueryRoomControlDevicesResponse Alibabacloud_AliGenieip10::Client::queryRoomControlDevicesWithOptions(shared_ptr<QueryRoomControlDevicesRequest> request, shared_ptr<QueryRoomControlDevicesHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelId)) {
    query->insert(pair<string, string>("HotelId", *request->hotelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roomNo)) {
    query->insert(pair<string, string>("RoomNo", *request->roomNo));
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
    {"action", boost::any(string("QueryRoomControlDevices"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/queryRoomControlDevices"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return QueryRoomControlDevicesResponse(callApi(params, req, runtime));
  }
  else {
    return QueryRoomControlDevicesResponse(execute(params, req, runtime));
  }
}

QueryRoomControlDevicesResponse Alibabacloud_AliGenieip10::Client::queryRoomControlDevices(shared_ptr<QueryRoomControlDevicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<QueryRoomControlDevicesHeaders> headers = make_shared<QueryRoomControlDevicesHeaders>();
  return queryRoomControlDevicesWithOptions(request, headers, runtime);
}

QueryRoomControlDevicesAndStatusResponse Alibabacloud_AliGenieip10::Client::queryRoomControlDevicesAndStatusWithOptions(shared_ptr<QueryRoomControlDevicesAndStatusRequest> request, shared_ptr<QueryRoomControlDevicesAndStatusHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelId)) {
    body->insert(pair<string, string>("HotelId", *request->hotelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roomNo)) {
    body->insert(pair<string, string>("RoomNo", *request->roomNo));
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
    {"action", boost::any(string("QueryRoomControlDevicesAndStatus"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/queryRoomControlDevicesAndStatus"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return QueryRoomControlDevicesAndStatusResponse(callApi(params, req, runtime));
  }
  else {
    return QueryRoomControlDevicesAndStatusResponse(execute(params, req, runtime));
  }
}

QueryRoomControlDevicesAndStatusResponse Alibabacloud_AliGenieip10::Client::queryRoomControlDevicesAndStatus(shared_ptr<QueryRoomControlDevicesAndStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<QueryRoomControlDevicesAndStatusHeaders> headers = make_shared<QueryRoomControlDevicesAndStatusHeaders>();
  return queryRoomControlDevicesAndStatusWithOptions(request, headers, runtime);
}

QueryRoomStatusResponse Alibabacloud_AliGenieip10::Client::queryRoomStatusWithOptions(shared_ptr<QueryRoomStatusRequest> request, shared_ptr<QueryRoomStatusHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelId)) {
    body->insert(pair<string, string>("HotelId", *request->hotelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roomNo)) {
    body->insert(pair<string, string>("RoomNo", *request->roomNo));
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
    {"action", boost::any(string("QueryRoomStatus"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/queryRoomStatus"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return QueryRoomStatusResponse(callApi(params, req, runtime));
  }
  else {
    return QueryRoomStatusResponse(execute(params, req, runtime));
  }
}

QueryRoomStatusResponse Alibabacloud_AliGenieip10::Client::queryRoomStatus(shared_ptr<QueryRoomStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<QueryRoomStatusHeaders> headers = make_shared<QueryRoomStatusHeaders>();
  return queryRoomStatusWithOptions(request, headers, runtime);
}

QuerySceneListResponse Alibabacloud_AliGenieip10::Client::querySceneListWithOptions(shared_ptr<QuerySceneListRequest> tmpReq, shared_ptr<QuerySceneListHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<QuerySceneListShrinkRequest> request = make_shared<QuerySceneListShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->sceneStates)) {
    request->sceneStatesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->sceneStates, make_shared<string>("SceneStates"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->sceneTypes)) {
    request->sceneTypesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->sceneTypes, make_shared<string>("SceneTypes"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->templateInfoIds)) {
    request->templateInfoIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->templateInfoIds, make_shared<string>("TemplateInfoIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelId)) {
    body->insert(pair<string, string>("HotelId", *request->hotelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneStatesShrink)) {
    body->insert(pair<string, string>("SceneStates", *request->sceneStatesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneTypesShrink)) {
    body->insert(pair<string, string>("SceneTypes", *request->sceneTypesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateInfoIdsShrink)) {
    body->insert(pair<string, string>("TemplateInfoIds", *request->templateInfoIdsShrink));
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
    {"action", boost::any(string("QuerySceneList"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/querySceneList"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return QuerySceneListResponse(callApi(params, req, runtime));
  }
  else {
    return QuerySceneListResponse(execute(params, req, runtime));
  }
}

QuerySceneListResponse Alibabacloud_AliGenieip10::Client::querySceneList(shared_ptr<QuerySceneListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<QuerySceneListHeaders> headers = make_shared<QuerySceneListHeaders>();
  return querySceneListWithOptions(request, headers, runtime);
}

RemoveChildAccountAuthResponse Alibabacloud_AliGenieip10::Client::removeChildAccountAuthWithOptions(shared_ptr<RemoveChildAccountAuthRequest> request, shared_ptr<RemoveChildAccountAuthHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appKey)) {
    body->insert(pair<string, string>("AppKey", *request->appKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->childAccountName)) {
    body->insert(pair<string, string>("ChildAccountName", *request->childAccountName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelId)) {
    body->insert(pair<string, string>("HotelId", *request->hotelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tbOpenId)) {
    body->insert(pair<string, string>("TbOpenId", *request->tbOpenId));
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
    {"action", boost::any(string("RemoveChildAccountAuth"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/removeChildAccountAuth"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RemoveChildAccountAuthResponse(callApi(params, req, runtime));
  }
  else {
    return RemoveChildAccountAuthResponse(execute(params, req, runtime));
  }
}

RemoveChildAccountAuthResponse Alibabacloud_AliGenieip10::Client::removeChildAccountAuth(shared_ptr<RemoveChildAccountAuthRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<RemoveChildAccountAuthHeaders> headers = make_shared<RemoveChildAccountAuthHeaders>();
  return removeChildAccountAuthWithOptions(request, headers, runtime);
}

RemoveHotelResponse Alibabacloud_AliGenieip10::Client::removeHotelWithOptions(shared_ptr<RemoveHotelRequest> request, shared_ptr<RemoveHotelHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appKey)) {
    body->insert(pair<string, string>("AppKey", *request->appKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelId)) {
    body->insert(pair<string, string>("HotelId", *request->hotelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tbOpenId)) {
    body->insert(pair<string, string>("TbOpenId", *request->tbOpenId));
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
    {"action", boost::any(string("RemoveHotel"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/removeHotel"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RemoveHotelResponse(callApi(params, req, runtime));
  }
  else {
    return RemoveHotelResponse(execute(params, req, runtime));
  }
}

RemoveHotelResponse Alibabacloud_AliGenieip10::Client::removeHotel(shared_ptr<RemoveHotelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<RemoveHotelHeaders> headers = make_shared<RemoveHotelHeaders>();
  return removeHotelWithOptions(request, headers, runtime);
}

ResetWelcomeTextAndMusicResponse Alibabacloud_AliGenieip10::Client::resetWelcomeTextAndMusicWithOptions(shared_ptr<ResetWelcomeTextAndMusicRequest> request, shared_ptr<ResetWelcomeTextAndMusicHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelId)) {
    body->insert(pair<string, string>("HotelId", *request->hotelId));
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
    {"action", boost::any(string("ResetWelcomeTextAndMusic"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/resetWelcomeTextAndMusic"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ResetWelcomeTextAndMusicResponse(callApi(params, req, runtime));
  }
  else {
    return ResetWelcomeTextAndMusicResponse(execute(params, req, runtime));
  }
}

ResetWelcomeTextAndMusicResponse Alibabacloud_AliGenieip10::Client::resetWelcomeTextAndMusic(shared_ptr<ResetWelcomeTextAndMusicRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ResetWelcomeTextAndMusicHeaders> headers = make_shared<ResetWelcomeTextAndMusicHeaders>();
  return resetWelcomeTextAndMusicWithOptions(request, headers, runtime);
}

RoomCheckOutResponse Alibabacloud_AliGenieip10::Client::roomCheckOutWithOptions(shared_ptr<RoomCheckOutRequest> tmpReq, shared_ptr<RoomCheckOutHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RoomCheckOutShrinkRequest> request = make_shared<RoomCheckOutShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<RoomCheckOutRequestDeviceInfo>(tmpReq->deviceInfo)) {
    request->deviceInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->deviceInfo, make_shared<string>("DeviceInfo"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<RoomCheckOutRequestUserInfo>(tmpReq->userInfo)) {
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
    {"action", boost::any(string("RoomCheckOut"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/roomCheckOut"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RoomCheckOutResponse(callApi(params, req, runtime));
  }
  else {
    return RoomCheckOutResponse(execute(params, req, runtime));
  }
}

RoomCheckOutResponse Alibabacloud_AliGenieip10::Client::roomCheckOut(shared_ptr<RoomCheckOutRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<RoomCheckOutHeaders> headers = make_shared<RoomCheckOutHeaders>();
  return roomCheckOutWithOptions(request, headers, runtime);
}

SubmitHotelOrderResponse Alibabacloud_AliGenieip10::Client::submitHotelOrderWithOptions(shared_ptr<SubmitHotelOrderRequest> tmpReq, shared_ptr<SubmitHotelOrderHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SubmitHotelOrderShrinkRequest> request = make_shared<SubmitHotelOrderShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<SubmitHotelOrderRequestPayload>(tmpReq->payload)) {
    request->payloadShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->payload, make_shared<string>("Payload"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubmitHotelOrderRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->userInfo, make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
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
    {"action", boost::any(string("SubmitHotelOrder"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/submitHotelOrder"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SubmitHotelOrderResponse(callApi(params, req, runtime));
  }
  else {
    return SubmitHotelOrderResponse(execute(params, req, runtime));
  }
}

SubmitHotelOrderResponse Alibabacloud_AliGenieip10::Client::submitHotelOrder(shared_ptr<SubmitHotelOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<SubmitHotelOrderHeaders> headers = make_shared<SubmitHotelOrderHeaders>();
  return submitHotelOrderWithOptions(request, headers, runtime);
}

SyncDeviceStatusWithAkResponse Alibabacloud_AliGenieip10::Client::syncDeviceStatusWithAkWithOptions(shared_ptr<SyncDeviceStatusWithAkRequest> request, shared_ptr<SyncDeviceStatusWithAkHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->categoryCnName)) {
    body->insert(pair<string, string>("CategoryCnName", *request->categoryCnName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->categoryEnName)) {
    body->insert(pair<string, string>("CategoryEnName", *request->categoryEnName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    body->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelId)) {
    body->insert(pair<string, string>("HotelId", *request->hotelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->location)) {
    body->insert(pair<string, string>("Location", *request->location));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->locationCnName)) {
    body->insert(pair<string, string>("LocationCnName", *request->locationCnName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->number)) {
    body->insert(pair<string, string>("Number", *request->number));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roomNo)) {
    body->insert(pair<string, string>("RoomNo", *request->roomNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->switch_)) {
    body->insert(pair<string, long>("Switch_", *request->switch_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fanSpeed)) {
    body->insert(pair<string, string>("fanSpeed", *request->fanSpeed));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mode)) {
    body->insert(pair<string, string>("mode", *request->mode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roomTemperature)) {
    body->insert(pair<string, string>("roomTemperature", *request->roomTemperature));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->temperature)) {
    body->insert(pair<string, string>("temperature", *request->temperature));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->value)) {
    body->insert(pair<string, long>("value", *request->value));
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
    {"action", boost::any(string("SyncDeviceStatusWithAk"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/syncDeviceStatusWithAk"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SyncDeviceStatusWithAkResponse(callApi(params, req, runtime));
  }
  else {
    return SyncDeviceStatusWithAkResponse(execute(params, req, runtime));
  }
}

SyncDeviceStatusWithAkResponse Alibabacloud_AliGenieip10::Client::syncDeviceStatusWithAk(shared_ptr<SyncDeviceStatusWithAkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<SyncDeviceStatusWithAkHeaders> headers = make_shared<SyncDeviceStatusWithAkHeaders>();
  return syncDeviceStatusWithAkWithOptions(request, headers, runtime);
}

UpdateBasicInfoQAResponse Alibabacloud_AliGenieip10::Client::updateBasicInfoQAWithOptions(shared_ptr<UpdateBasicInfoQARequest> request, shared_ptr<UpdateBasicInfoQAHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->checkInTime)) {
    body->insert(pair<string, string>("CheckInTime", *request->checkInTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->checkOutTime)) {
    body->insert(pair<string, string>("CheckOutTime", *request->checkOutTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelAddress)) {
    body->insert(pair<string, string>("HotelAddress", *request->hotelAddress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelId)) {
    body->insert(pair<string, string>("HotelId", *request->hotelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelIntroduction)) {
    body->insert(pair<string, string>("HotelIntroduction", *request->hotelIntroduction));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelMember)) {
    body->insert(pair<string, string>("HotelMember", *request->hotelMember));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelService)) {
    body->insert(pair<string, string>("HotelService", *request->hotelService));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parkingExpenses)) {
    body->insert(pair<string, string>("ParkingExpenses", *request->parkingExpenses));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parkingPosition)) {
    body->insert(pair<string, string>("ParkingPosition", *request->parkingPosition));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNumber)) {
    body->insert(pair<string, string>("PhoneNumber", *request->phoneNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->wifiName)) {
    body->insert(pair<string, string>("WifiName", *request->wifiName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->wifiPassword)) {
    body->insert(pair<string, string>("WifiPassword", *request->wifiPassword));
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
    {"action", boost::any(string("UpdateBasicInfoQA"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/updateBasicInfoQA"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateBasicInfoQAResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateBasicInfoQAResponse(execute(params, req, runtime));
  }
}

UpdateBasicInfoQAResponse Alibabacloud_AliGenieip10::Client::updateBasicInfoQA(shared_ptr<UpdateBasicInfoQARequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<UpdateBasicInfoQAHeaders> headers = make_shared<UpdateBasicInfoQAHeaders>();
  return updateBasicInfoQAWithOptions(request, headers, runtime);
}

UpdateCustomQAResponse Alibabacloud_AliGenieip10::Client::updateCustomQAWithOptions(shared_ptr<UpdateCustomQARequest> tmpReq, shared_ptr<UpdateCustomQAHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateCustomQAShrinkRequest> request = make_shared<UpdateCustomQAShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->answers)) {
    request->answersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->answers, make_shared<string>("Answers"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->keyWords)) {
    request->keyWordsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->keyWords, make_shared<string>("KeyWords"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->supplementaryQuestions)) {
    request->supplementaryQuestionsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->supplementaryQuestions, make_shared<string>("SupplementaryQuestions"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->answersShrink)) {
    body->insert(pair<string, string>("Answers", *request->answersShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customQAId)) {
    body->insert(pair<string, string>("CustomQAId", *request->customQAId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelId)) {
    body->insert(pair<string, string>("HotelId", *request->hotelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyWordsShrink)) {
    body->insert(pair<string, string>("KeyWords", *request->keyWordsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->majorQuestion)) {
    body->insert(pair<string, string>("MajorQuestion", *request->majorQuestion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->supplementaryQuestionsShrink)) {
    body->insert(pair<string, string>("SupplementaryQuestions", *request->supplementaryQuestionsShrink));
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
    {"action", boost::any(string("UpdateCustomQA"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/updateCustomQA"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateCustomQAResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateCustomQAResponse(execute(params, req, runtime));
  }
}

UpdateCustomQAResponse Alibabacloud_AliGenieip10::Client::updateCustomQA(shared_ptr<UpdateCustomQARequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<UpdateCustomQAHeaders> headers = make_shared<UpdateCustomQAHeaders>();
  return updateCustomQAWithOptions(request, headers, runtime);
}

UpdateHotelResponse Alibabacloud_AliGenieip10::Client::updateHotelWithOptions(shared_ptr<UpdateHotelRequest> tmpReq, shared_ptr<UpdateHotelHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateHotelShrinkRequest> request = make_shared<UpdateHotelShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->relatedPks)) {
    request->relatedPksShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->relatedPks, make_shared<string>("RelatedPks"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appKey)) {
    body->insert(pair<string, string>("AppKey", *request->appKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->estOpenTime)) {
    body->insert(pair<string, string>("EstOpenTime", *request->estOpenTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelAddress)) {
    body->insert(pair<string, string>("HotelAddress", *request->hotelAddress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelEmail)) {
    body->insert(pair<string, string>("HotelEmail", *request->hotelEmail));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelId)) {
    body->insert(pair<string, string>("HotelId", *request->hotelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelName)) {
    body->insert(pair<string, string>("HotelName", *request->hotelName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNumber)) {
    body->insert(pair<string, string>("PhoneNumber", *request->phoneNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->relatedPksShrink)) {
    body->insert(pair<string, string>("RelatedPks", *request->relatedPksShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remark)) {
    body->insert(pair<string, string>("Remark", *request->remark));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roomNum)) {
    body->insert(pair<string, long>("RoomNum", *request->roomNum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tbOpenId)) {
    body->insert(pair<string, string>("TbOpenId", *request->tbOpenId));
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
    {"action", boost::any(string("UpdateHotel"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/updateHotel"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateHotelResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateHotelResponse(execute(params, req, runtime));
  }
}

UpdateHotelResponse Alibabacloud_AliGenieip10::Client::updateHotel(shared_ptr<UpdateHotelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<UpdateHotelHeaders> headers = make_shared<UpdateHotelHeaders>();
  return updateHotelWithOptions(request, headers, runtime);
}

UpdateHotelAlarmResponse Alibabacloud_AliGenieip10::Client::updateHotelAlarmWithOptions(shared_ptr<UpdateHotelAlarmRequest> tmpReq, shared_ptr<UpdateHotelAlarmHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateHotelAlarmShrinkRequest> request = make_shared<UpdateHotelAlarmShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<UpdateHotelAlarmRequestAlarms>>(tmpReq->alarms)) {
    request->alarmsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->alarms, make_shared<string>("Alarms"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateHotelAlarmRequestScheduleInfo>(tmpReq->scheduleInfo)) {
    request->scheduleInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->scheduleInfo, make_shared<string>("ScheduleInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alarmsShrink)) {
    body->insert(pair<string, string>("Alarms", *request->alarmsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelId)) {
    body->insert(pair<string, string>("HotelId", *request->hotelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduleInfoShrink)) {
    body->insert(pair<string, string>("ScheduleInfo", *request->scheduleInfoShrink));
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
    {"action", boost::any(string("UpdateHotelAlarm"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/updateHotelAlarm"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateHotelAlarmResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateHotelAlarmResponse(execute(params, req, runtime));
  }
}

UpdateHotelAlarmResponse Alibabacloud_AliGenieip10::Client::updateHotelAlarm(shared_ptr<UpdateHotelAlarmRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<UpdateHotelAlarmHeaders> headers = make_shared<UpdateHotelAlarmHeaders>();
  return updateHotelAlarmWithOptions(request, headers, runtime);
}

UpdateHotelSceneBookItemResponse Alibabacloud_AliGenieip10::Client::updateHotelSceneBookItemWithOptions(shared_ptr<UpdateHotelSceneBookItemRequest> tmpReq, shared_ptr<UpdateHotelSceneBookItemHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateHotelSceneBookItemShrinkRequest> request = make_shared<UpdateHotelSceneBookItemShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdateHotelSceneBookItemRequestUpdateHotelSceneBookReq>(tmpReq->updateHotelSceneBookReq)) {
    request->updateHotelSceneBookReqShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->updateHotelSceneBookReq, make_shared<string>("UpdateHotelSceneBookReq"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->updateHotelSceneBookReqShrink)) {
    query->insert(pair<string, string>("UpdateHotelSceneBookReq", *request->updateHotelSceneBookReqShrink));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelId)) {
    body->insert(pair<string, string>("HotelId", *request->hotelId));
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
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateHotelSceneBookItem"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/updateHotelSceneBookItem"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateHotelSceneBookItemResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateHotelSceneBookItemResponse(execute(params, req, runtime));
  }
}

UpdateHotelSceneBookItemResponse Alibabacloud_AliGenieip10::Client::updateHotelSceneBookItem(shared_ptr<UpdateHotelSceneBookItemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<UpdateHotelSceneBookItemHeaders> headers = make_shared<UpdateHotelSceneBookItemHeaders>();
  return updateHotelSceneBookItemWithOptions(request, headers, runtime);
}

UpdateHotelSceneItemResponse Alibabacloud_AliGenieip10::Client::updateHotelSceneItemWithOptions(shared_ptr<UpdateHotelSceneItemRequest> tmpReq, shared_ptr<UpdateHotelSceneItemHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateHotelSceneItemShrinkRequest> request = make_shared<UpdateHotelSceneItemShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdateHotelSceneItemRequestUpdateHotelSceneOperateReq>(tmpReq->updateHotelSceneOperateReq)) {
    request->updateHotelSceneOperateReqShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->updateHotelSceneOperateReq, make_shared<string>("UpdateHotelSceneOperateReq"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateHotelSceneItemRequestUpdateHotelSceneReq>(tmpReq->updateHotelSceneReq)) {
    request->updateHotelSceneReqShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->updateHotelSceneReq, make_shared<string>("UpdateHotelSceneReq"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->updateHotelSceneOperateReqShrink)) {
    query->insert(pair<string, string>("UpdateHotelSceneOperateReq", *request->updateHotelSceneOperateReqShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->updateHotelSceneReqShrink)) {
    query->insert(pair<string, string>("UpdateHotelSceneReq", *request->updateHotelSceneReqShrink));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelId)) {
    body->insert(pair<string, string>("HotelId", *request->hotelId));
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
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateHotelSceneItem"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/updateHotelSceneItem"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateHotelSceneItemResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateHotelSceneItemResponse(execute(params, req, runtime));
  }
}

UpdateHotelSceneItemResponse Alibabacloud_AliGenieip10::Client::updateHotelSceneItem(shared_ptr<UpdateHotelSceneItemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<UpdateHotelSceneItemHeaders> headers = make_shared<UpdateHotelSceneItemHeaders>();
  return updateHotelSceneItemWithOptions(request, headers, runtime);
}

UpdateMessageTemplateResponse Alibabacloud_AliGenieip10::Client::updateMessageTemplateWithOptions(shared_ptr<UpdateMessageTemplateRequest> request, shared_ptr<UpdateMessageTemplateHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->templateDetail)) {
    body->insert(pair<string, string>("TemplateDetail", *request->templateDetail));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->templateId)) {
    body->insert(pair<string, long>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateName)) {
    body->insert(pair<string, string>("TemplateName", *request->templateName));
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
    {"action", boost::any(string("UpdateMessageTemplate"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/updateMessageTemplate"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateMessageTemplateResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateMessageTemplateResponse(execute(params, req, runtime));
  }
}

UpdateMessageTemplateResponse Alibabacloud_AliGenieip10::Client::updateMessageTemplate(shared_ptr<UpdateMessageTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<UpdateMessageTemplateHeaders> headers = make_shared<UpdateMessageTemplateHeaders>();
  return updateMessageTemplateWithOptions(request, headers, runtime);
}

UpdateRcuSceneResponse Alibabacloud_AliGenieip10::Client::updateRcuSceneWithOptions(shared_ptr<UpdateRcuSceneRequest> tmpReq, shared_ptr<UpdateRcuSceneHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateRcuSceneShrinkRequest> request = make_shared<UpdateRcuSceneShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdateRcuSceneRequestSceneRelationExtDTO>(tmpReq->sceneRelationExtDTO)) {
    request->sceneRelationExtDTOShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->sceneRelationExtDTO, make_shared<string>("SceneRelationExtDTO"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelId)) {
    body->insert(pair<string, string>("HotelId", *request->hotelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneId)) {
    body->insert(pair<string, string>("SceneId", *request->sceneId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneRelationExtDTOShrink)) {
    body->insert(pair<string, string>("SceneRelationExtDTO", *request->sceneRelationExtDTOShrink));
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
    {"action", boost::any(string("UpdateRcuScene"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/updateRcuScene"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateRcuSceneResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateRcuSceneResponse(execute(params, req, runtime));
  }
}

UpdateRcuSceneResponse Alibabacloud_AliGenieip10::Client::updateRcuScene(shared_ptr<UpdateRcuSceneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<UpdateRcuSceneHeaders> headers = make_shared<UpdateRcuSceneHeaders>();
  return updateRcuSceneWithOptions(request, headers, runtime);
}

UpdateServiceQAResponse Alibabacloud_AliGenieip10::Client::updateServiceQAWithOptions(shared_ptr<UpdateServiceQARequest> request, shared_ptr<UpdateServiceQAHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->answer)) {
    body->insert(pair<string, string>("Answer", *request->answer));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelId)) {
    body->insert(pair<string, string>("HotelId", *request->hotelId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->serviceQAId)) {
    body->insert(pair<string, long>("ServiceQAId", *request->serviceQAId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isActive)) {
    body->insert(pair<string, bool>("isActive", *request->isActive));
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
    {"action", boost::any(string("UpdateServiceQA"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/updateServiceQA"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateServiceQAResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateServiceQAResponse(execute(params, req, runtime));
  }
}

UpdateServiceQAResponse Alibabacloud_AliGenieip10::Client::updateServiceQA(shared_ptr<UpdateServiceQARequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<UpdateServiceQAHeaders> headers = make_shared<UpdateServiceQAHeaders>();
  return updateServiceQAWithOptions(request, headers, runtime);
}

UpdateTicketResponse Alibabacloud_AliGenieip10::Client::updateTicketWithOptions(shared_ptr<UpdateTicketRequest> request, shared_ptr<UpdateTicketHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupKey)) {
    body->insert(pair<string, string>("GroupKey", *request->groupKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelId)) {
    body->insert(pair<string, string>("HotelId", *request->hotelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    body->insert(pair<string, string>("Status", *request->status));
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
    {"action", boost::any(string("UpdateTicket"))},
    {"version", boost::any(string("ip_1.0"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v1.0/ip/updateTicket"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateTicketResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateTicketResponse(execute(params, req, runtime));
  }
}

UpdateTicketResponse Alibabacloud_AliGenieip10::Client::updateTicket(shared_ptr<UpdateTicketRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<UpdateTicketHeaders> headers = make_shared<UpdateTicketHeaders>();
  return updateTicketWithOptions(request, headers, runtime);
}

